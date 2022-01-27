/*
** Automatically generated from `report.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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

#line 2949 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_proc_desc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 2957 "report.c"
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

#line 2971 "report.c"
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

#line 2985 "report.c"
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

#line 3000 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_desc_0_0[1] = {
  &report__report__du_functor_desc_call_site_desc_0_0
};

#line 3005 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_desc_0_0
  }
};

#line 3014 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_desc_0[1] = {
  &report__report__du_functor_desc_call_site_desc_0_0
};

#line 3019 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_desc_0[1] = {
  (MR_Integer) 0
};

#line 3024 "report.c"
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

#line 3045 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_desc_0
  }
};

#line 3053 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_dump_info_0_0[4] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
};

#line 3061 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_dump_info_0_0[4] = {
  (MR_String) "csddi_csdptr",
  (MR_String) "csddi_caller_pdptr",
  (MR_String) "csddi_callee_pdptr",
  (MR_String) "csddi_own_perf"
};

#line 3069 "report.c"
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

#line 3084 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_dump_info_0_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_dump_info_0_0
};

#line 3089 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_dynamic_dump_info_0_0
  }
};

#line 3098 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_dump_info_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_dump_info_0_0
};

#line 3103 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 3108 "report.c"
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

#line 3129 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_var_use_and_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_var_use_and_name_0
  }
};

#line 3137 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_var_use_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_var_use_and_name_0
};

#line 3143 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_var_use_info_0_0[2] = {
  (MR_String) "csdvui_total_cost",
  (MR_String) "csdvui_var_uses"
};

#line 3149 "report.c"
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

#line 3164 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_var_use_info_0_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_var_use_info_0_0
};

#line 3169 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_var_use_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_dynamic_var_use_info_0_0
  }
};

#line 3178 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_var_use_info_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_var_use_info_0_0
};

#line 3183 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_var_use_info_0[1] = {
  (MR_Integer) 0
};

#line 3188 "report.c"
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

#line 3209 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_info_1report__type_ctor_info_normal_callee_id_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_info_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_normal_callee_id_0
  }
};

#line 3217 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 3225 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
  }
};

#line 3233 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_perf_0_0[3] = {
  (MR_PseudoTypeInfo) &report__profile__ti_call_site_kind_and_info_1report__type_ctor_info_normal_callee_id_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 3240 "report.c"
static const MR_ConstString report__report__field_names_call_site_perf_0_0[3] = {
  (MR_String) "csf_kind",
  (MR_String) "csf_summary_perf",
  (MR_String) "csf_sub_callees"
};

#line 3247 "report.c"
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

#line 3262 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_perf_0_0[1] = {
  &report__report__du_functor_desc_call_site_perf_0_0
};

#line 3267 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_perf_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_perf_0_0
  }
};

#line 3276 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_perf_0[1] = {
  &report__report__du_functor_desc_call_site_perf_0_0
};

#line 3281 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_perf_0[1] = {
  (MR_Integer) 0
};

#line 3286 "report.c"
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

#line 3307 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 3315 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_static_dump_info_0_0[6] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &report__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0
};

#line 3325 "report.c"
static const MR_ConstString report__report__field_names_call_site_static_dump_info_0_0[6] = {
  (MR_String) "cssdi_cssptr",
  (MR_String) "cssdi_containing_psptr",
  (MR_String) "cssdi_slot_number",
  (MR_String) "cssdi_line_number",
  (MR_String) "cssdi_goal_path",
  (MR_String) "cssdi_callee"
};

#line 3335 "report.c"
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

#line 3350 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_static_dump_info_0_0[1] = {
  &report__report__du_functor_desc_call_site_static_dump_info_0_0
};

#line 3355 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_static_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_static_dump_info_0_0
  }
};

#line 3364 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_static_dump_info_0[1] = {
  &report__report__du_functor_desc_call_site_static_dump_info_0_0
};

#line 3369 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_static_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 3374 "report.c"
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

#line 3395 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_callers_counts_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3401 "report.c"
static const MR_ConstString report__report__field_names_callers_counts_0_0[2] = {
  (MR_String) "cc_static",
  (MR_String) "cc_dynamic"
};

#line 3407 "report.c"
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

#line 3422 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_callers_counts_0_0[1] = {
  &report__report__du_functor_desc_callers_counts_0_0
};

#line 3427 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_callers_counts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_callers_counts_0_0
  }
};

#line 3436 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_callers_counts_0[1] = {
  &report__report__du_functor_desc_callers_counts_0_0
};

#line 3441 "report.c"
static const MR_Integer report__report__functor_number_map_callers_counts_0[1] = {
  (MR_Integer) 0
};

#line 3446 "report.c"
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

#line 3467 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1report__type_ctor_info_proc_desc_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 3475 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_desc_0
  }
};

#line 3483 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
  }
};

#line 3491 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_call_site_report_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0,
  (MR_PseudoTypeInfo) &report__profile__ti_call_site_kind_and_callee_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
};

#line 3498 "report.c"
static const MR_ConstString report__report__field_names_clique_call_site_report_0_0[3] = {
  (MR_String) "ccsr_call_site_summary",
  (MR_String) "ccsr_kind_and_callee",
  (MR_String) "ccsr_callee_perfs"
};

#line 3505 "report.c"
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

#line 3520 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_call_site_report_0_0[1] = {
  &report__report__du_functor_desc_clique_call_site_report_0_0
};

#line 3525 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_call_site_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_call_site_report_0_0
  }
};

#line 3534 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_call_site_report_0[1] = {
  &report__report__du_functor_desc_clique_call_site_report_0_0
};

#line 3539 "report.c"
static const MR_Integer report__report__functor_number_map_clique_call_site_report_0[1] = {
  (MR_Integer) 0
};

#line 3544 "report.c"
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

#line 3565 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_proc_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 3573 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_desc_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_proc_desc_0
};

#line 3580 "report.c"
static const MR_ConstString report__report__field_names_clique_desc_0_0[3] = {
  (MR_String) "cdesc_clique_ptr",
  (MR_String) "cdesc_entry_member",
  (MR_String) "cdesc_other_members"
};

#line 3587 "report.c"
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

#line 3602 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_desc_0_0[1] = {
  &report__report__du_functor_desc_clique_desc_0_0
};

#line 3607 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_desc_0_0
  }
};

#line 3616 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_desc_0[1] = {
  &report__report__du_functor_desc_clique_desc_0_0
};

#line 3621 "report.c"
static const MR_Integer report__report__functor_number_map_clique_desc_0[1] = {
  (MR_Integer) 0
};

#line 3626 "report.c"
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

#line 3647 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 3655 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_dump_info_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_clique_desc_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 3662 "report.c"
static const MR_ConstString report__report__field_names_clique_dump_info_0_0[3] = {
  (MR_String) "cdi_clique_desc",
  (MR_String) "cdi_caller_csd_ptr",
  (MR_String) "cdi_member_pdptrs"
};

#line 3669 "report.c"
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

#line 3684 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_dump_info_0_0[1] = {
  &report__report__du_functor_desc_clique_dump_info_0_0
};

#line 3689 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_dump_info_0_0
  }
};

#line 3698 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_dump_info_0[1] = {
  &report__report__du_functor_desc_clique_dump_info_0_0
};

#line 3703 "report.c"
static const MR_Integer report__report__functor_number_map_clique_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 3708 "report.c"
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

#line 3729 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_call_site_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_call_site_report_0
  }
};

#line 3737 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_dynamic_report_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_clique_call_site_report_0
};

#line 3743 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_dynamic_report_0_0[2] = {
  (MR_String) "cpdr_proc_summary",
  (MR_String) "cpdr_call_sites"
};

#line 3749 "report.c"
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

#line 3764 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_dynamic_report_0_0[1] = {
  &report__report__du_functor_desc_clique_proc_dynamic_report_0_0
};

#line 3769 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_dynamic_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_proc_dynamic_report_0_0
  }
};

#line 3778 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_dynamic_report_0[1] = {
  &report__report__du_functor_desc_clique_proc_dynamic_report_0_0
};

#line 3783 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_dynamic_report_0[1] = {
  (MR_Integer) 0
};

#line 3788 "report.c"
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

#line 3809 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_dynamic_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_proc_dynamic_report_0
  }
};

#line 3817 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_report_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_clique_proc_dynamic_report_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_clique_proc_dynamic_report_0
};

#line 3824 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_report_0_0[3] = {
  (MR_String) "cpr_proc_summary",
  (MR_String) "cpr_first_proc_dynamic",
  (MR_String) "cpr_other_proc_dynamics"
};

#line 3831 "report.c"
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

#line 3846 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_report_0_0[1] = {
  &report__report__du_functor_desc_clique_proc_report_0_0
};

#line 3851 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_proc_report_0_0
  }
};

#line 3860 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_report_0[1] = {
  &report__report__du_functor_desc_clique_proc_report_0_0
};

#line 3865 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_report_0[1] = {
  (MR_Integer) 0
};

#line 3870 "report.c"
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

#line 3891 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_recursion_report_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3898 "report.c"
static const MR_ConstString report__report__field_names_clique_recursion_report_0_0[3] = {
  (MR_String) "crr_clique_ptr",
  (MR_String) "crr_recursion_type",
  (MR_String) "crr_num_procs"
};

#line 3905 "report.c"
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

#line 3920 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_recursion_report_0_0[1] = {
  &report__report__du_functor_desc_clique_recursion_report_0_0
};

#line 3925 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_recursion_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_recursion_report_0_0
  }
};

#line 3934 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_recursion_report_0[1] = {
  &report__report__du_functor_desc_clique_recursion_report_0_0
};

#line 3939 "report.c"
static const MR_Integer report__report__functor_number_map_clique_recursion_report_0[1] = {
  (MR_Integer) 0
};

#line 3944 "report.c"
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

#line 3965 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_ancestor_desc_0
  }
};

#line 3973 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0
  }
};

#line 3981 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_proc_report_0
  }
};

#line 3989 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_report_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_clique_proc_report_0
};

#line 3996 "report.c"
static const MR_ConstString report__report__field_names_clique_report_0_0[3] = {
  (MR_String) "cr_clique_ptr",
  (MR_String) "cr_ancestor_call_sites",
  (MR_String) "cr_clique_procs"
};

#line 4003 "report.c"
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

#line 4018 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_report_0_0[1] = {
  &report__report__du_functor_desc_clique_report_0_0
};

#line 4023 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_report_0_0
  }
};

#line 4032 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_report_0[1] = {
  &report__report__du_functor_desc_clique_report_0_0
};

#line 4037 "report.c"
static const MR_Integer report__report__functor_number_map_clique_report_0[1] = {
  (MR_Integer) 0
};

#line 4042 "report.c"
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

#line 4063 "report.c"
static const MR_Integer report__report__functor_number_map_data_struct_name_0[1] = {
  (MR_Integer) 0
};

#line 4068 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_data_struct_name_0 = {
  (MR_String) "data_struct_name",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 4075 "report.c"
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

#line 4096 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_0[1] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_message_report_0
};

#line 4101 "report.c"
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

#line 4116 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_menu_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_menu_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4125 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_1[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_menu_report_0builtin__type_ctor_info_string_0
};

#line 4130 "report.c"
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

#line 4145 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4154 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_2[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_clique_report_0builtin__type_ctor_info_string_0
};

#line 4159 "report.c"
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

#line 4174 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_recursion_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_recursion_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4183 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_3[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_clique_recursion_report_0builtin__type_ctor_info_string_0
};

#line 4188 "report.c"
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

#line 4203 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_recursion_types_frequency_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_types_frequency_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4212 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_4[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_recursion_types_frequency_report_0builtin__type_ctor_info_string_0
};

#line 4217 "report.c"
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

#line 4232 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_program_modules_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_program_modules_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4241 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_5[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_program_modules_report_0builtin__type_ctor_info_string_0
};

#line 4246 "report.c"
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

#line 4261 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4270 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_6[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_module_report_0builtin__type_ctor_info_string_0
};

#line 4275 "report.c"
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

#line 4290 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_getter_setters_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_getter_setters_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4299 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_7[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_module_getter_setters_report_0builtin__type_ctor_info_string_0
};

#line 4304 "report.c"
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

#line 4319 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_rep_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_rep_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4328 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_8[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_module_rep_report_0builtin__type_ctor_info_string_0
};

#line 4333 "report.c"
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

#line 4348 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_top_procs_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_top_procs_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4357 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_9[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_top_procs_report_0builtin__type_ctor_info_string_0
};

#line 4362 "report.c"
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

#line 4377 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4386 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_10[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_report_0builtin__type_ctor_info_string_0
};

#line 4391 "report.c"
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

#line 4406 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_procrep_coverage_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_procrep_coverage_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4415 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_11[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_procrep_coverage_info_0builtin__type_ctor_info_string_0
};

#line 4420 "report.c"
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

#line 4435 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_callers_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_callers_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4444 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_12[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_callers_report_0builtin__type_ctor_info_string_0
};

#line 4449 "report.c"
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

#line 4464 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_static_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_static_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4473 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_13[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_static_dump_info_0builtin__type_ctor_info_string_0
};

#line 4478 "report.c"
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

#line 4493 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_dynamic_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_dynamic_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4502 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_14[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_dynamic_dump_info_0builtin__type_ctor_info_string_0
};

#line 4507 "report.c"
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

#line 4522 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_static_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_static_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4531 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_15[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_static_dump_info_0builtin__type_ctor_info_string_0
};

#line 4536 "report.c"
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

#line 4551 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_dynamic_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4560 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_16[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_dump_info_0builtin__type_ctor_info_string_0
};

#line 4565 "report.c"
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

#line 4580 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4589 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_17[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_clique_dump_info_0builtin__type_ctor_info_string_0
};

#line 4594 "report.c"
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

#line 4609 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_var_use_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_dynamic_var_use_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4618 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_18[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_var_use_info_0builtin__type_ctor_info_string_0
};

#line 4623 "report.c"
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

#line 4638 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_0[1] = {
  &report__report__du_functor_desc_deep_report_0_0
};

#line 4643 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_1[1] = {
  &report__report__du_functor_desc_deep_report_0_1
};

#line 4648 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_2[1] = {
  &report__report__du_functor_desc_deep_report_0_2
};

#line 4653 "report.c"
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

#line 4673 "report.c"
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

#line 4697 "report.c"
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

#line 4720 "report.c"
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

#line 4743 "report.c"
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

#line 4764 "report.c"
static const MR_Integer report__report__functor_number_map_field_name_0[1] = {
  (MR_Integer) 0
};

#line 4769 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_field_name_0 = {
  (MR_String) "field_name",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 4776 "report.c"
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

#line 4797 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_0 = {
  (MR_String) "getter",
  (MR_Integer) 0
};

#line 4803 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_1 = {
  (MR_String) "setter",
  (MR_Integer) 1
};

#line 4809 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_getter_or_setter_0[2] = {
  &report__report__enum_functor_desc_getter_or_setter_0_0,
  &report__report__enum_functor_desc_getter_or_setter_0_1
};

#line 4815 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_getter_or_setter_0[2] = {
  &report__report__enum_functor_desc_getter_or_setter_0_0,
  &report__report__enum_functor_desc_getter_or_setter_0_1
};

#line 4821 "report.c"
static const MR_Integer report__report__functor_number_map_getter_or_setter_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 4827 "report.c"
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

#line 4848 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 4857 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__pseudo_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_data_struct_name_0,
    (MR_PseudoTypeInfo) &report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1
  }
};

#line 4866 "report.c"
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

#line 4887 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 4895 "report.c"
static const MR_FA_TypeInfo_Struct2 report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
    (MR_TypeInfo) &report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 4904 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_TypeInfo) &report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 4913 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_data_struct_name_0,
    (MR_TypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 4922 "report.c"
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

#line 4943 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 4950 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_0[3] = {
  (MR_String) "gsf_both_getter",
  (MR_String) "gsf_both_setter",
  (MR_String) "gsf_both_summary"
};

#line 4957 "report.c"
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

#line 4972 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 4977 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_1[1] = {
  (MR_String) "gsf_getter"
};

#line 4982 "report.c"
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

#line 4997 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 5002 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_2[1] = {
  (MR_String) "gsf_setter"
};

#line 5007 "report.c"
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

#line 5022 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_0[1] = {
  &report__report__du_functor_desc_gs_field_info_2_0
};

#line 5027 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_1[1] = {
  &report__report__du_functor_desc_gs_field_info_2_1
};

#line 5032 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_2[1] = {
  &report__report__du_functor_desc_gs_field_info_2_2
};

#line 5037 "report.c"
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

#line 5056 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_gs_field_info_2[3] = {
  &report__report__du_functor_desc_gs_field_info_2_0,
  &report__report__du_functor_desc_gs_field_info_2_1,
  &report__report__du_functor_desc_gs_field_info_2_2
};

#line 5063 "report.c"
static const MR_Integer report__report__functor_number_map_gs_field_info_2[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 5070 "report.c"
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

#line 5091 "report.c"
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

#line 5112 "report.c"
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

#line 5133 "report.c"
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

#line 5154 "report.c"
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

#line 5171 "report.c"
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

#line 5188 "report.c"
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

#line 5203 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_inheritable_perf_0_0[1] = {
  &report__report__du_functor_desc_inheritable_perf_0_0
};

#line 5208 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_inheritable_perf_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_inheritable_perf_0_0
  }
};

#line 5217 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_inheritable_perf_0[1] = {
  &report__report__du_functor_desc_inheritable_perf_0_0
};

#line 5222 "report.c"
static const MR_Integer report__report__functor_number_map_inheritable_perf_0[1] = {
  (MR_Integer) 0
};

#line 5227 "report.c"
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

#line 5248 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_0 = {
  (MR_String) "do_not_have_module_rep",
  (MR_Integer) 0
};

#line 5254 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_1 = {
  (MR_String) "have_module_rep",
  (MR_Integer) 1
};

#line 5260 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_maybe_have_module_rep_0[2] = {
  &report__report__enum_functor_desc_maybe_have_module_rep_0_0,
  &report__report__enum_functor_desc_maybe_have_module_rep_0_1
};

#line 5266 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_maybe_have_module_rep_0[2] = {
  &report__report__enum_functor_desc_maybe_have_module_rep_0_0,
  &report__report__enum_functor_desc_maybe_have_module_rep_0_1
};

#line 5272 "report.c"
static const MR_Integer report__report__functor_number_map_maybe_have_module_rep_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 5278 "report.c"
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

#line 5299 "report.c"
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

#line 5313 "report.c"
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

#line 5327 "report.c"
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

#line 5342 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_menu_report_0_0[1] = {
  &report__report__du_functor_desc_menu_report_0_0
};

#line 5347 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_menu_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_menu_report_0_0
  }
};

#line 5356 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_menu_report_0[1] = {
  &report__report__du_functor_desc_menu_report_0_0
};

#line 5361 "report.c"
static const MR_Integer report__report__functor_number_map_menu_report_0[1] = {
  (MR_Integer) 0
};

#line 5366 "report.c"
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

#line 5387 "report.c"
static const MR_Integer report__report__functor_number_map_message_report_0[1] = {
  (MR_Integer) 0
};

#line 5392 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_message_report_0 = {
  (MR_String) "message_report",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 5399 "report.c"
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

#line 5420 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_active_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_module_is_active_0
};

#line 5426 "report.c"
static const MR_ConstString report__report__field_names_module_active_0_0[2] = {
  (MR_String) "ma_module_name",
  (MR_String) "ma_is_active"
};

#line 5432 "report.c"
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

#line 5447 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_active_0_0[1] = {
  &report__report__du_functor_desc_module_active_0_0
};

#line 5452 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_active_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_active_0_0
  }
};

#line 5461 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_active_0[1] = {
  &report__report__du_functor_desc_module_active_0_0
};

#line 5466 "report.c"
static const MR_Integer report__report__functor_number_map_module_active_0[1] = {
  (MR_Integer) 0
};

#line 5471 "report.c"
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

#line 5492 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_getter_setters_report_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
};

#line 5498 "report.c"
static const MR_ConstString report__report__field_names_module_getter_setters_report_0_0[2] = {
  (MR_String) "mgsr_module_name",
  (MR_String) "mgsr_procs"
};

#line 5504 "report.c"
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

#line 5519 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_getter_setters_report_0_0[1] = {
  &report__report__du_functor_desc_module_getter_setters_report_0_0
};

#line 5524 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_getter_setters_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_getter_setters_report_0_0
  }
};

#line 5533 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_getter_setters_report_0[1] = {
  &report__report__du_functor_desc_module_getter_setters_report_0_0
};

#line 5538 "report.c"
static const MR_Integer report__report__functor_number_map_module_getter_setters_report_0[1] = {
  (MR_Integer) 0
};

#line 5543 "report.c"
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

#line 5564 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_0 = {
  (MR_String) "module_is_active",
  (MR_Integer) 0
};

#line 5570 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_1 = {
  (MR_String) "module_is_not_active",
  (MR_Integer) 1
};

#line 5576 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_module_is_active_0[2] = {
  &report__report__enum_functor_desc_module_is_active_0_0,
  &report__report__enum_functor_desc_module_is_active_0_1
};

#line 5582 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_module_is_active_0[2] = {
  &report__report__enum_functor_desc_module_is_active_0_0,
  &report__report__enum_functor_desc_module_is_active_0_1
};

#line 5588 "report.c"
static const MR_Integer report__report__functor_number_map_module_is_active_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 5594 "report.c"
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

#line 5615 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_rep_report_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 5621 "report.c"
static const MR_ConstString report__report__field_names_module_rep_report_0_0[2] = {
  (MR_String) "mrr_module_name",
  (MR_String) "mrr_report"
};

#line 5627 "report.c"
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

#line 5642 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_rep_report_0_0[1] = {
  &report__report__du_functor_desc_module_rep_report_0_0
};

#line 5647 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_rep_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_rep_report_0_0
  }
};

#line 5656 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_rep_report_0[1] = {
  &report__report__du_functor_desc_module_rep_report_0_0
};

#line 5661 "report.c"
static const MR_Integer report__report__functor_number_map_module_rep_report_0[1] = {
  (MR_Integer) 0
};

#line 5666 "report.c"
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

#line 5687 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_active_0
  }
};

#line 5695 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_active_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_active_0
  }
};

#line 5703 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_report_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_maybe_have_module_rep_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_active_0
};

#line 5710 "report.c"
static const MR_ConstString report__report__field_names_module_report_0_0[3] = {
  (MR_String) "mr_module_name",
  (MR_String) "mr_have_module_rep",
  (MR_String) "mr_procs"
};

#line 5717 "report.c"
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

#line 5732 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_report_0_0[1] = {
  &report__report__du_functor_desc_module_report_0_0
};

#line 5737 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_report_0_0
  }
};

#line 5746 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_report_0[1] = {
  &report__report__du_functor_desc_module_report_0_0
};

#line 5751 "report.c"
static const MR_Integer report__report__functor_number_map_module_report_0[1] = {
  (MR_Integer) 0
};

#line 5756 "report.c"
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

#line 5777 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_normal_callee_id_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 5783 "report.c"
static const MR_ConstString report__report__field_names_normal_callee_id_0_0[2] = {
  (MR_String) "nci_callee_desc",
  (MR_String) "nci_type_subst"
};

#line 5789 "report.c"
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

#line 5804 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_normal_callee_id_0_0[1] = {
  &report__report__du_functor_desc_normal_callee_id_0_0
};

#line 5809 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_normal_callee_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_normal_callee_id_0_0
  }
};

#line 5818 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_normal_callee_id_0[1] = {
  &report__report__du_functor_desc_normal_callee_id_0_0
};

#line 5823 "report.c"
static const MR_Integer report__report__functor_number_map_normal_callee_id_0[1] = {
  (MR_Integer) 0
};

#line 5828 "report.c"
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

#line 5849 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_inheritable_perf_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_inheritable_perf_0
  }
};

#line 5857 "report.c"
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

#line 5870 "report.c"
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

#line 5883 "report.c"
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

#line 5898 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_perf_row_data_1_0[1] = {
  &report__report__du_functor_desc_perf_row_data_1_0
};

#line 5903 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_perf_row_data_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_perf_row_data_1_0
  }
};

#line 5912 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_perf_row_data_1[1] = {
  &report__report__du_functor_desc_perf_row_data_1_0
};

#line 5917 "report.c"
static const MR_Integer report__report__functor_number_map_perf_row_data_1[1] = {
  (MR_Integer) 0
};

#line 5922 "report.c"
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

#line 5943 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_active_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_is_active_0
};

#line 5949 "report.c"
static const MR_ConstString report__report__field_names_proc_active_0_0[2] = {
  (MR_String) "pa_proc_desc",
  (MR_String) "pa_is_active"
};

#line 5955 "report.c"
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

#line 5970 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_active_0_0[1] = {
  &report__report__du_functor_desc_proc_active_0_0
};

#line 5975 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_active_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_active_0_0
  }
};

#line 5984 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_active_0[1] = {
  &report__report__du_functor_desc_proc_active_0_0
};

#line 5989 "report.c"
static const MR_Integer report__report__functor_number_map_proc_active_0[1] = {
  (MR_Integer) 0
};

#line 5994 "report.c"
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

#line 6015 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
  }
};

#line 6023 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_0[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
};

#line 6028 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_0[1] = {
  (MR_String) "pc_caller_call_sites"
};

#line 6033 "report.c"
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

#line 6048 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_1[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 6053 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_1[1] = {
  (MR_String) "pc_caller_procedures"
};

#line 6058 "report.c"
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

#line 6073 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1builtin__type_ctor_info_string_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 6081 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1builtin__type_ctor_info_string_0
  }
};

#line 6089 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_2[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1builtin__type_ctor_info_string_0
};

#line 6094 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_2[1] = {
  (MR_String) "pc_caller_modules"
};

#line 6099 "report.c"
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

#line 6114 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_3[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
};

#line 6119 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_3[1] = {
  (MR_String) "pc_caller_cliques"
};

#line 6124 "report.c"
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

#line 6139 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_0[1] = {
  &report__report__du_functor_desc_proc_callers_0_0
};

#line 6144 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_1[1] = {
  &report__report__du_functor_desc_proc_callers_0_1
};

#line 6149 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_2[1] = {
  &report__report__du_functor_desc_proc_callers_0_2
};

#line 6154 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_3[1] = {
  &report__report__du_functor_desc_proc_callers_0_3
};

#line 6159 "report.c"
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

#line 6183 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_0[4] = {
  &report__report__du_functor_desc_proc_callers_0_0,
  &report__report__du_functor_desc_proc_callers_0_3,
  &report__report__du_functor_desc_proc_callers_0_2,
  &report__report__du_functor_desc_proc_callers_0_1
};

#line 6191 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 6199 "report.c"
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

#line 6220 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 6228 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_report_0_0[6] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_callers_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_contour_exclusion_0,
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 6238 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_report_0_0[6] = {
  (MR_String) "pc_proc_desc",
  (MR_String) "pc_callers",
  (MR_String) "pc_batch_number",
  (MR_String) "pc_callers_per_batch",
  (MR_String) "pc_contour_exclusion",
  (MR_String) "pc_contour_warn_message"
};

#line 6248 "report.c"
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

#line 6263 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_report_0_0[1] = {
  &report__report__du_functor_desc_proc_callers_report_0_0
};

#line 6268 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_callers_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_callers_report_0_0
  }
};

#line 6277 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_report_0[1] = {
  &report__report__du_functor_desc_proc_callers_report_0_0
};

#line 6282 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_report_0[1] = {
  (MR_Integer) 0
};

#line 6287 "report.c"
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

#line 6308 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_desc_0_0[6] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 6318 "report.c"
static const MR_ConstString report__report__field_names_proc_desc_0_0[6] = {
  (MR_String) "pdesc_ps_ptr",
  (MR_String) "pdesc_file_name",
  (MR_String) "pdesc_line_number",
  (MR_String) "pdesc_module_name",
  (MR_String) "pdesc_uq_refined_name",
  (MR_String) "pdesc_q_refined_name"
};

#line 6328 "report.c"
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

#line 6343 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_desc_0_0[1] = {
  &report__report__du_functor_desc_proc_desc_0_0
};

#line 6348 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_desc_0_0
  }
};

#line 6357 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_desc_0[1] = {
  &report__report__du_functor_desc_proc_desc_0_0
};

#line 6362 "report.c"
static const MR_Integer report__report__functor_number_map_proc_desc_0[1] = {
  (MR_Integer) 0
};

#line 6367 "report.c"
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

#line 6388 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 6396 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1coverage__type_ctor_info_coverage_point_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_point_0
  }
};

#line 6404 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1list__ti_list_1coverage__type_ctor_info_coverage_point_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__list__ti_list_1coverage__type_ctor_info_coverage_point_0
  }
};

#line 6412 "report.c"
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

#line 6424 "report.c"
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

#line 6436 "report.c"
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

#line 6451 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_dynamic_dump_info_0_0[1] = {
  &report__report__du_functor_desc_proc_dynamic_dump_info_0_0
};

#line 6456 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_dynamic_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_dynamic_dump_info_0_0
  }
};

#line 6465 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_dynamic_dump_info_0[1] = {
  &report__report__du_functor_desc_proc_dynamic_dump_info_0_0
};

#line 6470 "report.c"
static const MR_Integer report__report__functor_number_map_proc_dynamic_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 6475 "report.c"
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

#line 6496 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_0 = {
  (MR_String) "proc_is_active",
  (MR_Integer) 0
};

#line 6502 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_1 = {
  (MR_String) "proc_is_not_active",
  (MR_Integer) 1
};

#line 6508 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_proc_is_active_0[2] = {
  &report__report__enum_functor_desc_proc_is_active_0_0,
  &report__report__enum_functor_desc_proc_is_active_0_1
};

#line 6514 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_proc_is_active_0[2] = {
  &report__report__enum_functor_desc_proc_is_active_0_0,
  &report__report__enum_functor_desc_proc_is_active_0_1
};

#line 6520 "report.c"
static const MR_Integer report__report__functor_number_map_proc_is_active_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 6526 "report.c"
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

#line 6547 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_callers_counts_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_callers_counts_0
  }
};

#line 6555 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_call_site_perf_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_perf_0
  }
};

#line 6563 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_report_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_callers_counts_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_call_site_perf_0
};

#line 6570 "report.c"
static const MR_ConstString report__report__field_names_proc_report_0_0[3] = {
  (MR_String) "proc_callers_summary",
  (MR_String) "proc_summary",
  (MR_String) "proc_call_site_summaries"
};

#line 6577 "report.c"
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

#line 6592 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_report_0_0[1] = {
  &report__report__du_functor_desc_proc_report_0_0
};

#line 6597 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_report_0_0
  }
};

#line 6606 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_report_0[1] = {
  &report__report__du_functor_desc_proc_report_0_0
};

#line 6611 "report.c"
static const MR_Integer report__report__functor_number_map_proc_report_0[1] = {
  (MR_Integer) 0
};

#line 6616 "report.c"
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

#line 6637 "report.c"
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

#line 6649 "report.c"
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

#line 6661 "report.c"
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

#line 6676 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_static_dump_info_0_0[1] = {
  &report__report__du_functor_desc_proc_static_dump_info_0_0
};

#line 6681 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_static_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_static_dump_info_0_0
  }
};

#line 6690 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_static_dump_info_0[1] = {
  &report__report__du_functor_desc_proc_static_dump_info_0_0
};

#line 6695 "report.c"
static const MR_Integer report__report__functor_number_map_proc_static_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 6700 "report.c"
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

#line 6721 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__program_representation__ti_proc_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 6729 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_info_0
  }
};

#line 6737 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_procrep_coverage_info_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &report__mdbcomp__program_representation__ti_proc_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &report__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0
};

#line 6744 "report.c"
static const MR_ConstString report__report__field_names_procrep_coverage_info_0_0[3] = {
  (MR_String) "prci_proc",
  (MR_String) "prci_proc_rep",
  (MR_String) "prci_coverage_array"
};

#line 6751 "report.c"
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

#line 6766 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_procrep_coverage_info_0_0[1] = {
  &report__report__du_functor_desc_procrep_coverage_info_0_0
};

#line 6771 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_procrep_coverage_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_procrep_coverage_info_0_0
  }
};

#line 6780 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_procrep_coverage_info_0[1] = {
  &report__report__du_functor_desc_procrep_coverage_info_0_0
};

#line 6785 "report.c"
static const MR_Integer report__report__functor_number_map_procrep_coverage_info_0[1] = {
  (MR_Integer) 0
};

#line 6790 "report.c"
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

#line 6811 "report.c"
static const MR_Integer report__report__functor_number_map_program_modules_report_0[1] = {
  (MR_Integer) 0
};

#line 6816 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_module_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_active_0
  }
};

#line 6824 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_module_active_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_module_active_0
  }
};

#line 6832 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_program_modules_report_0 = {
  (MR_String) "program_modules_report",
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_module_active_0,
  (MR_String) "program_modules"
};

#line 6839 "report.c"
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

#line 6860 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_level_report_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 6869 "report.c"
static const MR_ConstString report__report__field_names_recursion_level_report_0_0[5] = {
  (MR_String) "rlr_level",
  (MR_String) "rlr_calls",
  (MR_String) "rlr_prob",
  (MR_String) "rlr_non_rec_calls_cost",
  (MR_String) "rlr_rec_calls_ex_chld_cost"
};

#line 6878 "report.c"
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

#line 6893 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_level_report_0_0[1] = {
  &report__report__du_functor_desc_recursion_level_report_0_0
};

#line 6898 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_level_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_level_report_0_0
  }
};

#line 6907 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_level_report_0[1] = {
  &report__report__du_functor_desc_recursion_level_report_0_0
};

#line 6912 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_level_report_0[1] = {
  (MR_Integer) 0
};

#line 6917 "report.c"
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

#line 6938 "report.c"
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

#line 6953 "report.c"
static const MR_VA_TypeInfo_Struct2 report____vti_func_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 6963 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_1[5] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &report____vti_func_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0
};

#line 6972 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_1[5] = {
  (MR_String) "rts_base",
  (MR_String) "rts_recursive",
  (MR_String) "rts_avg_max_depth",
  (MR_String) "rts_avg_rec_cost",
  (MR_String) "rts_any_rec_cost"
};

#line 6981 "report.c"
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

#line 6996 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_2[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0
};

#line 7002 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_2[2] = {
  (MR_String) "rtdsc_base",
  (MR_String) "rtdsc_recursive"
};

#line 7008 "report.c"
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

#line 7023 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 7028 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_3[1] = {
  (MR_String) "rtml_num_procs"
};

#line 7033 "report.c"
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

#line 7048 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_recursion_level_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_level_report_0
  }
};

#line 7056 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_4[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_recursion_level_report_0
};

#line 7061 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_4[1] = {
  (MR_String) "rto_all_levels"
};

#line 7066 "report.c"
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

#line 7081 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 7089 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_5[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 7094 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_5[1] = {
  (MR_String) "rte_errors"
};

#line 7099 "report.c"
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

#line 7114 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_0[1] = {
  &report__report__du_functor_desc_recursion_type_0_0
};

#line 7119 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_1[1] = {
  &report__report__du_functor_desc_recursion_type_0_1
};

#line 7124 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_2[1] = {
  &report__report__du_functor_desc_recursion_type_0_2
};

#line 7129 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_3[3] = {
  &report__report__du_functor_desc_recursion_type_0_3,
  &report__report__du_functor_desc_recursion_type_0_4,
  &report__report__du_functor_desc_recursion_type_0_5
};

#line 7136 "report.c"
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

#line 7160 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_0[6] = {
  &report__report__du_functor_desc_recursion_type_0_2,
  &report__report__du_functor_desc_recursion_type_0_5,
  &report__report__du_functor_desc_recursion_type_0_3,
  &report__report__du_functor_desc_recursion_type_0_0,
  &report__report__du_functor_desc_recursion_type_0_4,
  &report__report__du_functor_desc_recursion_type_0_1
};

#line 7170 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 1
};

#line 7180 "report.c"
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

#line 7201 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 7209 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0report__type_ctor_info_recursion_type_proc_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_type_proc_freq_data_0
  }
};

#line 7218 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_freq_data_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0,
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_1report__ti_perf_row_data_1unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0report__type_ctor_info_recursion_type_proc_freq_data_0
};

#line 7226 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_freq_data_0_0[4] = {
  (MR_String) "rtfd_freq",
  (MR_String) "rtfd_percent",
  (MR_String) "rtfd_maybe_summary",
  (MR_String) "rtfd_entry_procs"
};

#line 7234 "report.c"
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

#line 7249 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_freq_data_0_0[1] = {
  &report__report__du_functor_desc_recursion_type_freq_data_0_0
};

#line 7254 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_type_freq_data_0_0
  }
};

#line 7263 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_freq_data_0[1] = {
  &report__report__du_functor_desc_recursion_type_freq_data_0_0
};

#line 7268 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_freq_data_0[1] = {
  (MR_Integer) 0
};

#line 7273 "report.c"
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

#line 7294 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_recursion_type_simple_0report__type_ctor_info_recursion_type_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_type_simple_0,
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_type_freq_data_0
  }
};

#line 7303 "report.c"
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

#line 7324 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_proc_freq_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 7331 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_proc_freq_data_0_0[3] = {
  (MR_String) "rtpfd_freq",
  (MR_String) "rtpfd_percent",
  (MR_String) "rtpfd_summary"
};

#line 7338 "report.c"
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

#line 7353 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_proc_freq_data_0_0[1] = {
  &report__report__du_functor_desc_recursion_type_proc_freq_data_0_0
};

#line 7358 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_proc_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_type_proc_freq_data_0_0
  }
};

#line 7367 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_proc_freq_data_0[1] = {
  &report__report__du_functor_desc_recursion_type_proc_freq_data_0_0
};

#line 7372 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_proc_freq_data_0[1] = {
  (MR_Integer) 0
};

#line 7377 "report.c"
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

#line 7398 "report.c"
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

#line 7419 "report.c"
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

#line 7434 "report.c"
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

#line 7449 "report.c"
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

#line 7464 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 7469 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_3[1] = {
  (MR_String) "rtsmr_num_procs"
};

#line 7474 "report.c"
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

#line 7489 "report.c"
static const MR_FA_TypeInfo_Struct1 report__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 7497 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_4[1] = {
  (MR_PseudoTypeInfo) &report__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 7502 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_4[1] = {
  (MR_String) "rtso_levels"
};

#line 7507 "report.c"
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

#line 7522 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 7527 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_5[1] = {
  (MR_String) "rtse_error"
};

#line 7532 "report.c"
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

#line 7547 "report.c"
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

#line 7562 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_0[4] = {
  &report__report__du_functor_desc_recursion_type_simple_0_0,
  &report__report__du_functor_desc_recursion_type_simple_0_1,
  &report__report__du_functor_desc_recursion_type_simple_0_2,
  &report__report__du_functor_desc_recursion_type_simple_0_6
};

#line 7570 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_1[1] = {
  &report__report__du_functor_desc_recursion_type_simple_0_3
};

#line 7575 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_2[1] = {
  &report__report__du_functor_desc_recursion_type_simple_0_4
};

#line 7580 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_3[1] = {
  &report__report__du_functor_desc_recursion_type_simple_0_5
};

#line 7585 "report.c"
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

#line 7609 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_simple_0[7] = {
  &report__report__du_functor_desc_recursion_type_simple_0_2,
  &report__report__du_functor_desc_recursion_type_simple_0_5,
  &report__report__du_functor_desc_recursion_type_simple_0_3,
  &report__report__du_functor_desc_recursion_type_simple_0_0,
  &report__report__du_functor_desc_recursion_type_simple_0_4,
  &report__report__du_functor_desc_recursion_type_simple_0_1,
  &report__report__du_functor_desc_recursion_type_simple_0_6
};

#line 7620 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_simple_0[7] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 6
};

#line 7631 "report.c"
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

#line 7652 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_types_frequency_report_0[1] = {
  (MR_Integer) 0
};

#line 7657 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_recursion_types_frequency_report_0 = {
  (MR_String) "recursion_types_frequency_report",
  (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_recursion_type_simple_0report__type_ctor_info_recursion_type_freq_data_0,
  (MR_String) "rtfr_histogram"
};

#line 7664 "report.c"
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

#line 7685 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_report_ordering_0_0[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_display_limit_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 7693 "report.c"
static const MR_ConstString report__report__field_names_report_ordering_0_0[4] = {
  (MR_String) "display_limit",
  (MR_String) "cost_kind",
  (MR_String) "incl_desc",
  (MR_String) "scope"
};

#line 7701 "report.c"
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

#line 7725 "report.c"
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

#line 7740 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_report_ordering_0_0[1] = {
  &report__report__du_functor_desc_report_ordering_0_0
};

#line 7745 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_report_ordering_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_report_ordering_0_0
  }
};

#line 7754 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_report_ordering_0[1] = {
  &report__report__du_functor_desc_report_ordering_0_0
};

#line 7759 "report.c"
static const MR_Integer report__report__functor_number_map_report_ordering_0[1] = {
  (MR_Integer) 0
};

#line 7764 "report.c"
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

#line 7785 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_top_procs_report_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_report_ordering_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 7791 "report.c"
static const MR_ConstString report__report__field_names_top_procs_report_0_0[2] = {
  (MR_String) "tp_ordering",
  (MR_String) "tp_top_procs"
};

#line 7797 "report.c"
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

#line 7812 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_top_procs_report_0_0[1] = {
  &report__report__du_functor_desc_top_procs_report_0_0
};

#line 7817 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_top_procs_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_top_procs_report_0_0
  }
};

#line 7826 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_top_procs_report_0[1] = {
  &report__report__du_functor_desc_top_procs_report_0_0
};

#line 7831 "report.c"
static const MR_Integer report__report__functor_number_map_top_procs_report_0[1] = {
  (MR_Integer) 0
};

#line 7836 "report.c"
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

#line 7857 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_var_use_and_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0
};

#line 7863 "report.c"
static const MR_ConstString report__report__field_names_var_use_and_name_0_0[2] = {
  (MR_String) "vun_var_name",
  (MR_String) "vun_use"
};

#line 7869 "report.c"
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

#line 7884 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_var_use_and_name_0_0[1] = {
  &report__report__du_functor_desc_var_use_and_name_0_0
};

#line 7889 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_var_use_and_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_var_use_and_name_0_0
  }
};

#line 7898 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_var_use_and_name_0[1] = {
  &report__report__du_functor_desc_var_use_and_name_0_0
};

#line 7903 "report.c"
static const MR_Integer report__report__functor_number_map_var_use_and_name_0[1] = {
  (MR_Integer) 0
};

#line 7908 "report.c"
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

#line 7929 "report.c"
static MR_bool MR_CALL 
report____Unify____ancestor_desc_0_0_10001(
#line 7932 "report.c"
  MR_Box report__wrapper_arg_1,
#line 7934 "report.c"
  MR_Box report__wrapper_arg_2)
#line 7936 "report.c"
{
#line 7938 "report.c"
  {
#line 7940 "report.c"
    MR_bool report__succeeded;

#line 7943 "report.c"
    {
#line 7945 "report.c"
      report__succeeded = report____Unify____ancestor_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 7948 "report.c"
    return report__succeeded;
#line 7950 "report.c"
  }
#line 7952 "report.c"
}

#line 7955 "report.c"
static void MR_CALL 
report____Compare____ancestor_desc_0_0_10001(
#line 7958 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 7960 "report.c"
  MR_Box report__wrapper_arg_2,
#line 7962 "report.c"
  MR_Box report__wrapper_arg_3)
#line 7964 "report.c"
{
#line 7966 "report.c"
  {
#line 7968 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 7971 "report.c"
    {
#line 7973 "report.c"
      report____Compare____ancestor_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 7976 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 7978 "report.c"
  }
#line 7980 "report.c"
}

#line 7983 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_desc_0_0_10001(
#line 7986 "report.c"
  MR_Box report__wrapper_arg_1,
#line 7988 "report.c"
  MR_Box report__wrapper_arg_2)
#line 7990 "report.c"
{
#line 7992 "report.c"
  {
#line 7994 "report.c"
    MR_bool report__succeeded;

#line 7997 "report.c"
    {
#line 7999 "report.c"
      report__succeeded = report____Unify____call_site_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8002 "report.c"
    return report__succeeded;
#line 8004 "report.c"
  }
#line 8006 "report.c"
}

#line 8009 "report.c"
static void MR_CALL 
report____Compare____call_site_desc_0_0_10001(
#line 8012 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8014 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8016 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8018 "report.c"
{
#line 8020 "report.c"
  {
#line 8022 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8025 "report.c"
    {
#line 8027 "report.c"
      report____Compare____call_site_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8030 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8032 "report.c"
  }
#line 8034 "report.c"
}

#line 8037 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_dump_info_0_0_10001(
#line 8040 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8042 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8044 "report.c"
{
#line 8046 "report.c"
  {
#line 8048 "report.c"
    MR_bool report__succeeded;

#line 8051 "report.c"
    {
#line 8053 "report.c"
      report__succeeded = report____Unify____call_site_dynamic_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8056 "report.c"
    return report__succeeded;
#line 8058 "report.c"
  }
#line 8060 "report.c"
}

#line 8063 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_dump_info_0_0_10001(
#line 8066 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8068 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8070 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8072 "report.c"
{
#line 8074 "report.c"
  {
#line 8076 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8079 "report.c"
    {
#line 8081 "report.c"
      report____Compare____call_site_dynamic_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8084 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8086 "report.c"
  }
#line 8088 "report.c"
}

#line 8091 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_var_use_info_0_0_10001(
#line 8094 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8096 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8098 "report.c"
{
#line 8100 "report.c"
  {
#line 8102 "report.c"
    MR_bool report__succeeded;

#line 8105 "report.c"
    {
#line 8107 "report.c"
      report__succeeded = report____Unify____call_site_dynamic_var_use_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8110 "report.c"
    return report__succeeded;
#line 8112 "report.c"
  }
#line 8114 "report.c"
}

#line 8117 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_var_use_info_0_0_10001(
#line 8120 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8122 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8124 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8126 "report.c"
{
#line 8128 "report.c"
  {
#line 8130 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8133 "report.c"
    {
#line 8135 "report.c"
      report____Compare____call_site_dynamic_var_use_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8138 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8140 "report.c"
  }
#line 8142 "report.c"
}

#line 8145 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_perf_0_0_10001(
#line 8148 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8150 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8152 "report.c"
{
#line 8154 "report.c"
  {
#line 8156 "report.c"
    MR_bool report__succeeded;

#line 8159 "report.c"
    {
#line 8161 "report.c"
      report__succeeded = report____Unify____call_site_perf_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8164 "report.c"
    return report__succeeded;
#line 8166 "report.c"
  }
#line 8168 "report.c"
}

#line 8171 "report.c"
static void MR_CALL 
report____Compare____call_site_perf_0_0_10001(
#line 8174 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8176 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8178 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8180 "report.c"
{
#line 8182 "report.c"
  {
#line 8184 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8187 "report.c"
    {
#line 8189 "report.c"
      report____Compare____call_site_perf_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8192 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8194 "report.c"
  }
#line 8196 "report.c"
}

#line 8199 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_static_dump_info_0_0_10001(
#line 8202 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8204 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8206 "report.c"
{
#line 8208 "report.c"
  {
#line 8210 "report.c"
    MR_bool report__succeeded;

#line 8213 "report.c"
    {
#line 8215 "report.c"
      report__succeeded = report____Unify____call_site_static_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8218 "report.c"
    return report__succeeded;
#line 8220 "report.c"
  }
#line 8222 "report.c"
}

#line 8225 "report.c"
static void MR_CALL 
report____Compare____call_site_static_dump_info_0_0_10001(
#line 8228 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8230 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8232 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8234 "report.c"
{
#line 8236 "report.c"
  {
#line 8238 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8241 "report.c"
    {
#line 8243 "report.c"
      report____Compare____call_site_static_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8246 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8248 "report.c"
  }
#line 8250 "report.c"
}

#line 8253 "report.c"
static MR_bool MR_CALL 
report____Unify____callers_counts_0_0_10001(
#line 8256 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8258 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8260 "report.c"
{
#line 8262 "report.c"
  {
#line 8264 "report.c"
    MR_bool report__succeeded;

#line 8267 "report.c"
    {
#line 8269 "report.c"
      report__succeeded = report____Unify____callers_counts_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8272 "report.c"
    return report__succeeded;
#line 8274 "report.c"
  }
#line 8276 "report.c"
}

#line 8279 "report.c"
static void MR_CALL 
report____Compare____callers_counts_0_0_10001(
#line 8282 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8284 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8286 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8288 "report.c"
{
#line 8290 "report.c"
  {
#line 8292 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8295 "report.c"
    {
#line 8297 "report.c"
      report____Compare____callers_counts_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8300 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8302 "report.c"
  }
#line 8304 "report.c"
}

#line 8307 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_call_site_report_0_0_10001(
#line 8310 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8312 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8314 "report.c"
{
#line 8316 "report.c"
  {
#line 8318 "report.c"
    MR_bool report__succeeded;

#line 8321 "report.c"
    {
#line 8323 "report.c"
      report__succeeded = report____Unify____clique_call_site_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8326 "report.c"
    return report__succeeded;
#line 8328 "report.c"
  }
#line 8330 "report.c"
}

#line 8333 "report.c"
static void MR_CALL 
report____Compare____clique_call_site_report_0_0_10001(
#line 8336 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8338 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8340 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8342 "report.c"
{
#line 8344 "report.c"
  {
#line 8346 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8349 "report.c"
    {
#line 8351 "report.c"
      report____Compare____clique_call_site_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8354 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8356 "report.c"
  }
#line 8358 "report.c"
}

#line 8361 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_desc_0_0_10001(
#line 8364 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8366 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8368 "report.c"
{
#line 8370 "report.c"
  {
#line 8372 "report.c"
    MR_bool report__succeeded;

#line 8375 "report.c"
    {
#line 8377 "report.c"
      report__succeeded = report____Unify____clique_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8380 "report.c"
    return report__succeeded;
#line 8382 "report.c"
  }
#line 8384 "report.c"
}

#line 8387 "report.c"
static void MR_CALL 
report____Compare____clique_desc_0_0_10001(
#line 8390 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8392 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8394 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8396 "report.c"
{
#line 8398 "report.c"
  {
#line 8400 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8403 "report.c"
    {
#line 8405 "report.c"
      report____Compare____clique_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8408 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8410 "report.c"
  }
#line 8412 "report.c"
}

#line 8415 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_dump_info_0_0_10001(
#line 8418 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8420 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8422 "report.c"
{
#line 8424 "report.c"
  {
#line 8426 "report.c"
    MR_bool report__succeeded;

#line 8429 "report.c"
    {
#line 8431 "report.c"
      report__succeeded = report____Unify____clique_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8434 "report.c"
    return report__succeeded;
#line 8436 "report.c"
  }
#line 8438 "report.c"
}

#line 8441 "report.c"
static void MR_CALL 
report____Compare____clique_dump_info_0_0_10001(
#line 8444 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8446 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8448 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8450 "report.c"
{
#line 8452 "report.c"
  {
#line 8454 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8457 "report.c"
    {
#line 8459 "report.c"
      report____Compare____clique_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8462 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8464 "report.c"
  }
#line 8466 "report.c"
}

#line 8469 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_dynamic_report_0_0_10001(
#line 8472 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8474 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8476 "report.c"
{
#line 8478 "report.c"
  {
#line 8480 "report.c"
    MR_bool report__succeeded;

#line 8483 "report.c"
    {
#line 8485 "report.c"
      report__succeeded = report____Unify____clique_proc_dynamic_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8488 "report.c"
    return report__succeeded;
#line 8490 "report.c"
  }
#line 8492 "report.c"
}

#line 8495 "report.c"
static void MR_CALL 
report____Compare____clique_proc_dynamic_report_0_0_10001(
#line 8498 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8500 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8502 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8504 "report.c"
{
#line 8506 "report.c"
  {
#line 8508 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8511 "report.c"
    {
#line 8513 "report.c"
      report____Compare____clique_proc_dynamic_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8516 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8518 "report.c"
  }
#line 8520 "report.c"
}

#line 8523 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_report_0_0_10001(
#line 8526 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8528 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8530 "report.c"
{
#line 8532 "report.c"
  {
#line 8534 "report.c"
    MR_bool report__succeeded;

#line 8537 "report.c"
    {
#line 8539 "report.c"
      report__succeeded = report____Unify____clique_proc_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8542 "report.c"
    return report__succeeded;
#line 8544 "report.c"
  }
#line 8546 "report.c"
}

#line 8549 "report.c"
static void MR_CALL 
report____Compare____clique_proc_report_0_0_10001(
#line 8552 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8554 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8556 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8558 "report.c"
{
#line 8560 "report.c"
  {
#line 8562 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8565 "report.c"
    {
#line 8567 "report.c"
      report____Compare____clique_proc_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8570 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8572 "report.c"
  }
#line 8574 "report.c"
}

#line 8577 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_recursion_report_0_0_10001(
#line 8580 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8582 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8584 "report.c"
{
#line 8586 "report.c"
  {
#line 8588 "report.c"
    MR_bool report__succeeded;

#line 8591 "report.c"
    {
#line 8593 "report.c"
      report__succeeded = report____Unify____clique_recursion_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8596 "report.c"
    return report__succeeded;
#line 8598 "report.c"
  }
#line 8600 "report.c"
}

#line 8603 "report.c"
static void MR_CALL 
report____Compare____clique_recursion_report_0_0_10001(
#line 8606 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8608 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8610 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8612 "report.c"
{
#line 8614 "report.c"
  {
#line 8616 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8619 "report.c"
    {
#line 8621 "report.c"
      report____Compare____clique_recursion_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8624 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8626 "report.c"
  }
#line 8628 "report.c"
}

#line 8631 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_report_0_0_10001(
#line 8634 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8636 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8638 "report.c"
{
#line 8640 "report.c"
  {
#line 8642 "report.c"
    MR_bool report__succeeded;

#line 8645 "report.c"
    {
#line 8647 "report.c"
      report__succeeded = report____Unify____clique_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8650 "report.c"
    return report__succeeded;
#line 8652 "report.c"
  }
#line 8654 "report.c"
}

#line 8657 "report.c"
static void MR_CALL 
report____Compare____clique_report_0_0_10001(
#line 8660 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8662 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8664 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8666 "report.c"
{
#line 8668 "report.c"
  {
#line 8670 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8673 "report.c"
    {
#line 8675 "report.c"
      report____Compare____clique_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8678 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8680 "report.c"
  }
#line 8682 "report.c"
}

#line 8685 "report.c"
static MR_bool MR_CALL 
report____Unify____data_struct_name_0_0_10001(
#line 8688 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8690 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8692 "report.c"
{
#line 8694 "report.c"
  {
#line 8696 "report.c"
    MR_bool report__succeeded;

#line 8699 "report.c"
    {
#line 8701 "report.c"
      report__succeeded = report____Unify____data_struct_name_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8704 "report.c"
    return report__succeeded;
#line 8706 "report.c"
  }
#line 8708 "report.c"
}

#line 8711 "report.c"
static void MR_CALL 
report____Compare____data_struct_name_0_0_10001(
#line 8714 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8716 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8718 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8720 "report.c"
{
#line 8722 "report.c"
  {
#line 8724 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8727 "report.c"
    {
#line 8729 "report.c"
      report____Compare____data_struct_name_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8732 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8734 "report.c"
  }
#line 8736 "report.c"
}

#line 8739 "report.c"
static MR_bool MR_CALL 
report____Unify____deep_report_0_0_10001(
#line 8742 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8744 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8746 "report.c"
{
#line 8748 "report.c"
  {
#line 8750 "report.c"
    MR_bool report__succeeded;

#line 8753 "report.c"
    {
#line 8755 "report.c"
      report__succeeded = report____Unify____deep_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8758 "report.c"
    return report__succeeded;
#line 8760 "report.c"
  }
#line 8762 "report.c"
}

#line 8765 "report.c"
static void MR_CALL 
report____Compare____deep_report_0_0_10001(
#line 8768 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8770 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8772 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8774 "report.c"
{
#line 8776 "report.c"
  {
#line 8778 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8781 "report.c"
    {
#line 8783 "report.c"
      report____Compare____deep_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8786 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8788 "report.c"
  }
#line 8790 "report.c"
}

#line 8793 "report.c"
static MR_bool MR_CALL 
report____Unify____field_name_0_0_10001(
#line 8796 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8798 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8800 "report.c"
{
#line 8802 "report.c"
  {
#line 8804 "report.c"
    MR_bool report__succeeded;

#line 8807 "report.c"
    {
#line 8809 "report.c"
      report__succeeded = report____Unify____field_name_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8812 "report.c"
    return report__succeeded;
#line 8814 "report.c"
  }
#line 8816 "report.c"
}

#line 8819 "report.c"
static void MR_CALL 
report____Compare____field_name_0_0_10001(
#line 8822 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8824 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8826 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8828 "report.c"
{
#line 8830 "report.c"
  {
#line 8832 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8835 "report.c"
    {
#line 8837 "report.c"
      report____Compare____field_name_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8840 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8842 "report.c"
  }
#line 8844 "report.c"
}

#line 8847 "report.c"
static MR_bool MR_CALL 
report____Unify____getter_or_setter_0_0_10001(
#line 8850 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8852 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8854 "report.c"
{
#line 8856 "report.c"
  {
#line 8858 "report.c"
    MR_bool report__succeeded;

#line 8861 "report.c"
    {
#line 8863 "report.c"
      report__succeeded = report____Unify____getter_or_setter_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8866 "report.c"
    return report__succeeded;
#line 8868 "report.c"
  }
#line 8870 "report.c"
}

#line 8873 "report.c"
static void MR_CALL 
report____Compare____getter_or_setter_0_0_10001(
#line 8876 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8878 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8880 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8882 "report.c"
{
#line 8884 "report.c"
  {
#line 8886 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8889 "report.c"
    {
#line 8891 "report.c"
      report____Compare____getter_or_setter_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8894 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8896 "report.c"
  }
#line 8898 "report.c"
}

#line 8901 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_1_0_10001(
#line 8904 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8906 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8908 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8910 "report.c"
{
#line 8912 "report.c"
  {
#line 8914 "report.c"
    MR_bool report__succeeded;

#line 8917 "report.c"
    {
#line 8919 "report.c"
      report__succeeded = report____Unify____gs_ds_map_1_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8922 "report.c"
    return report__succeeded;
#line 8924 "report.c"
  }
#line 8926 "report.c"
}

#line 8929 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_1_0_10001(
#line 8932 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8934 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 8936 "report.c"
  MR_Box report__wrapper_arg_3,
#line 8938 "report.c"
  MR_Box report__wrapper_arg_4)
#line 8940 "report.c"
{
#line 8942 "report.c"
  {
#line 8944 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8947 "report.c"
    {
#line 8949 "report.c"
      report____Compare____gs_ds_map_1_0(((MR_Word) report__wrapper_arg_1), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 8952 "report.c"
    *report__wrapper_arg_2 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8954 "report.c"
  }
#line 8956 "report.c"
}

#line 8959 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_0_0_10001(
#line 8962 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8964 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8966 "report.c"
{
#line 8968 "report.c"
  {
#line 8970 "report.c"
    MR_bool report__succeeded;

#line 8973 "report.c"
    {
#line 8975 "report.c"
      report__succeeded = report____Unify____gs_ds_map_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8978 "report.c"
    return report__succeeded;
#line 8980 "report.c"
  }
#line 8982 "report.c"
}

#line 8985 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_0_0_10001(
#line 8988 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8990 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8992 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8994 "report.c"
{
#line 8996 "report.c"
  {
#line 8998 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9001 "report.c"
    {
#line 9003 "report.c"
      report____Compare____gs_ds_map_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9006 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9008 "report.c"
  }
#line 9010 "report.c"
}

#line 9013 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_2_0_10001(
#line 9016 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9018 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9020 "report.c"
  MR_Box report__wrapper_arg_3,
#line 9022 "report.c"
  MR_Box report__wrapper_arg_4)
#line 9024 "report.c"
{
#line 9026 "report.c"
  {
#line 9028 "report.c"
    MR_bool report__succeeded;

#line 9031 "report.c"
    {
#line 9033 "report.c"
      report__succeeded = report____Unify____gs_field_info_2_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 9036 "report.c"
    return report__succeeded;
#line 9038 "report.c"
  }
#line 9040 "report.c"
}

#line 9043 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_2_0_10001(
#line 9046 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9048 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9050 "report.c"
  MR_Box * report__wrapper_arg_3,
#line 9052 "report.c"
  MR_Box report__wrapper_arg_4,
#line 9054 "report.c"
  MR_Box report__wrapper_arg_5)
#line 9056 "report.c"
{
#line 9058 "report.c"
  {
#line 9060 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9063 "report.c"
    {
#line 9065 "report.c"
      report____Compare____gs_field_info_2_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_4), ((MR_Word) report__wrapper_arg_5));
    }
#line 9068 "report.c"
    *report__wrapper_arg_3 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9070 "report.c"
  }
#line 9072 "report.c"
}

#line 9075 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_0_0_10001(
#line 9078 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9080 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9082 "report.c"
{
#line 9084 "report.c"
  {
#line 9086 "report.c"
    MR_bool report__succeeded;

#line 9089 "report.c"
    {
#line 9091 "report.c"
      report__succeeded = report____Unify____gs_field_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9094 "report.c"
    return report__succeeded;
#line 9096 "report.c"
  }
#line 9098 "report.c"
}

#line 9101 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_0_0_10001(
#line 9104 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9106 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9108 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9110 "report.c"
{
#line 9112 "report.c"
  {
#line 9114 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9117 "report.c"
    {
#line 9119 "report.c"
      report____Compare____gs_field_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9122 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9124 "report.c"
  }
#line 9126 "report.c"
}

#line 9129 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_1_0_10001(
#line 9132 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9134 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9136 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9138 "report.c"
{
#line 9140 "report.c"
  {
#line 9142 "report.c"
    MR_bool report__succeeded;

#line 9145 "report.c"
    {
#line 9147 "report.c"
      report__succeeded = report____Unify____gs_field_map_1_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9150 "report.c"
    return report__succeeded;
#line 9152 "report.c"
  }
#line 9154 "report.c"
}

#line 9157 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_1_0_10001(
#line 9160 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9162 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 9164 "report.c"
  MR_Box report__wrapper_arg_3,
#line 9166 "report.c"
  MR_Box report__wrapper_arg_4)
#line 9168 "report.c"
{
#line 9170 "report.c"
  {
#line 9172 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9175 "report.c"
    {
#line 9177 "report.c"
      report____Compare____gs_field_map_1_0(((MR_Word) report__wrapper_arg_1), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 9180 "report.c"
    *report__wrapper_arg_2 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9182 "report.c"
  }
#line 9184 "report.c"
}

#line 9187 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_0_0_10001(
#line 9190 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9192 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9194 "report.c"
{
#line 9196 "report.c"
  {
#line 9198 "report.c"
    MR_bool report__succeeded;

#line 9201 "report.c"
    {
#line 9203 "report.c"
      report__succeeded = report____Unify____gs_field_map_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9206 "report.c"
    return report__succeeded;
#line 9208 "report.c"
  }
#line 9210 "report.c"
}

#line 9213 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_0_0_10001(
#line 9216 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9218 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9220 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9222 "report.c"
{
#line 9224 "report.c"
  {
#line 9226 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9229 "report.c"
    {
#line 9231 "report.c"
      report____Compare____gs_field_map_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9234 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9236 "report.c"
  }
#line 9238 "report.c"
}

#line 9241 "report.c"
static MR_bool MR_CALL 
report____Unify____inheritable_perf_0_0_10001(
#line 9244 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9246 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9248 "report.c"
{
#line 9250 "report.c"
  {
#line 9252 "report.c"
    MR_bool report__succeeded;

#line 9255 "report.c"
    {
#line 9257 "report.c"
      report__succeeded = report____Unify____inheritable_perf_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9260 "report.c"
    return report__succeeded;
#line 9262 "report.c"
  }
#line 9264 "report.c"
}

#line 9267 "report.c"
static void MR_CALL 
report____Compare____inheritable_perf_0_0_10001(
#line 9270 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9272 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9274 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9276 "report.c"
{
#line 9278 "report.c"
  {
#line 9280 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9283 "report.c"
    {
#line 9285 "report.c"
      report____Compare____inheritable_perf_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9288 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9290 "report.c"
  }
#line 9292 "report.c"
}

#line 9295 "report.c"
static MR_bool MR_CALL 
report____Unify____maybe_have_module_rep_0_0_10001(
#line 9298 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9300 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9302 "report.c"
{
#line 9304 "report.c"
  {
#line 9306 "report.c"
    MR_bool report__succeeded;

#line 9309 "report.c"
    {
#line 9311 "report.c"
      report__succeeded = report____Unify____maybe_have_module_rep_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9314 "report.c"
    return report__succeeded;
#line 9316 "report.c"
  }
#line 9318 "report.c"
}

#line 9321 "report.c"
static void MR_CALL 
report____Compare____maybe_have_module_rep_0_0_10001(
#line 9324 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9326 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9328 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9330 "report.c"
{
#line 9332 "report.c"
  {
#line 9334 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9337 "report.c"
    {
#line 9339 "report.c"
      report____Compare____maybe_have_module_rep_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9342 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9344 "report.c"
  }
#line 9346 "report.c"
}

#line 9349 "report.c"
static MR_bool MR_CALL 
report____Unify____menu_report_0_0_10001(
#line 9352 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9354 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9356 "report.c"
{
#line 9358 "report.c"
  {
#line 9360 "report.c"
    MR_bool report__succeeded;

#line 9363 "report.c"
    {
#line 9365 "report.c"
      report__succeeded = report____Unify____menu_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9368 "report.c"
    return report__succeeded;
#line 9370 "report.c"
  }
#line 9372 "report.c"
}

#line 9375 "report.c"
static void MR_CALL 
report____Compare____menu_report_0_0_10001(
#line 9378 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9380 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9382 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9384 "report.c"
{
#line 9386 "report.c"
  {
#line 9388 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9391 "report.c"
    {
#line 9393 "report.c"
      report____Compare____menu_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9396 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9398 "report.c"
  }
#line 9400 "report.c"
}

#line 9403 "report.c"
static MR_bool MR_CALL 
report____Unify____message_report_0_0_10001(
#line 9406 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9408 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9410 "report.c"
{
#line 9412 "report.c"
  {
#line 9414 "report.c"
    MR_bool report__succeeded;

#line 9417 "report.c"
    {
#line 9419 "report.c"
      report__succeeded = report____Unify____message_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9422 "report.c"
    return report__succeeded;
#line 9424 "report.c"
  }
#line 9426 "report.c"
}

#line 9429 "report.c"
static void MR_CALL 
report____Compare____message_report_0_0_10001(
#line 9432 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9434 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9436 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9438 "report.c"
{
#line 9440 "report.c"
  {
#line 9442 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9445 "report.c"
    {
#line 9447 "report.c"
      report____Compare____message_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9450 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9452 "report.c"
  }
#line 9454 "report.c"
}

#line 9457 "report.c"
static MR_bool MR_CALL 
report____Unify____module_active_0_0_10001(
#line 9460 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9462 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9464 "report.c"
{
#line 9466 "report.c"
  {
#line 9468 "report.c"
    MR_bool report__succeeded;

#line 9471 "report.c"
    {
#line 9473 "report.c"
      report__succeeded = report____Unify____module_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9476 "report.c"
    return report__succeeded;
#line 9478 "report.c"
  }
#line 9480 "report.c"
}

#line 9483 "report.c"
static void MR_CALL 
report____Compare____module_active_0_0_10001(
#line 9486 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9488 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9490 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9492 "report.c"
{
#line 9494 "report.c"
  {
#line 9496 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9499 "report.c"
    {
#line 9501 "report.c"
      report____Compare____module_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9504 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9506 "report.c"
  }
#line 9508 "report.c"
}

#line 9511 "report.c"
static MR_bool MR_CALL 
report____Unify____module_getter_setters_report_0_0_10001(
#line 9514 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9516 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9518 "report.c"
{
#line 9520 "report.c"
  {
#line 9522 "report.c"
    MR_bool report__succeeded;

#line 9525 "report.c"
    {
#line 9527 "report.c"
      report__succeeded = report____Unify____module_getter_setters_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9530 "report.c"
    return report__succeeded;
#line 9532 "report.c"
  }
#line 9534 "report.c"
}

#line 9537 "report.c"
static void MR_CALL 
report____Compare____module_getter_setters_report_0_0_10001(
#line 9540 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9542 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9544 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9546 "report.c"
{
#line 9548 "report.c"
  {
#line 9550 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9553 "report.c"
    {
#line 9555 "report.c"
      report____Compare____module_getter_setters_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9558 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9560 "report.c"
  }
#line 9562 "report.c"
}

#line 9565 "report.c"
static MR_bool MR_CALL 
report____Unify____module_is_active_0_0_10001(
#line 9568 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9570 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9572 "report.c"
{
#line 9574 "report.c"
  {
#line 9576 "report.c"
    MR_bool report__succeeded;

#line 9579 "report.c"
    {
#line 9581 "report.c"
      report__succeeded = report____Unify____module_is_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9584 "report.c"
    return report__succeeded;
#line 9586 "report.c"
  }
#line 9588 "report.c"
}

#line 9591 "report.c"
static void MR_CALL 
report____Compare____module_is_active_0_0_10001(
#line 9594 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9596 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9598 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9600 "report.c"
{
#line 9602 "report.c"
  {
#line 9604 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9607 "report.c"
    {
#line 9609 "report.c"
      report____Compare____module_is_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9612 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9614 "report.c"
  }
#line 9616 "report.c"
}

#line 9619 "report.c"
static MR_bool MR_CALL 
report____Unify____module_rep_report_0_0_10001(
#line 9622 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9624 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9626 "report.c"
{
#line 9628 "report.c"
  {
#line 9630 "report.c"
    MR_bool report__succeeded;

#line 9633 "report.c"
    {
#line 9635 "report.c"
      report__succeeded = report____Unify____module_rep_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9638 "report.c"
    return report__succeeded;
#line 9640 "report.c"
  }
#line 9642 "report.c"
}

#line 9645 "report.c"
static void MR_CALL 
report____Compare____module_rep_report_0_0_10001(
#line 9648 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9650 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9652 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9654 "report.c"
{
#line 9656 "report.c"
  {
#line 9658 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9661 "report.c"
    {
#line 9663 "report.c"
      report____Compare____module_rep_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9666 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9668 "report.c"
  }
#line 9670 "report.c"
}

#line 9673 "report.c"
static MR_bool MR_CALL 
report____Unify____module_report_0_0_10001(
#line 9676 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9678 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9680 "report.c"
{
#line 9682 "report.c"
  {
#line 9684 "report.c"
    MR_bool report__succeeded;

#line 9687 "report.c"
    {
#line 9689 "report.c"
      report__succeeded = report____Unify____module_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9692 "report.c"
    return report__succeeded;
#line 9694 "report.c"
  }
#line 9696 "report.c"
}

#line 9699 "report.c"
static void MR_CALL 
report____Compare____module_report_0_0_10001(
#line 9702 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9704 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9706 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9708 "report.c"
{
#line 9710 "report.c"
  {
#line 9712 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9715 "report.c"
    {
#line 9717 "report.c"
      report____Compare____module_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9720 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9722 "report.c"
  }
#line 9724 "report.c"
}

#line 9727 "report.c"
static MR_bool MR_CALL 
report____Unify____normal_callee_id_0_0_10001(
#line 9730 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9732 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9734 "report.c"
{
#line 9736 "report.c"
  {
#line 9738 "report.c"
    MR_bool report__succeeded;

#line 9741 "report.c"
    {
#line 9743 "report.c"
      report__succeeded = report____Unify____normal_callee_id_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9746 "report.c"
    return report__succeeded;
#line 9748 "report.c"
  }
#line 9750 "report.c"
}

#line 9753 "report.c"
static void MR_CALL 
report____Compare____normal_callee_id_0_0_10001(
#line 9756 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9758 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9760 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9762 "report.c"
{
#line 9764 "report.c"
  {
#line 9766 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9769 "report.c"
    {
#line 9771 "report.c"
      report____Compare____normal_callee_id_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9774 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9776 "report.c"
  }
#line 9778 "report.c"
}

#line 9781 "report.c"
static MR_bool MR_CALL 
report____Unify____perf_row_data_1_0_10001(
#line 9784 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9786 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9788 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9790 "report.c"
{
#line 9792 "report.c"
  {
#line 9794 "report.c"
    MR_bool report__succeeded;

#line 9797 "report.c"
    {
#line 9799 "report.c"
      report__succeeded = report____Unify____perf_row_data_1_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9802 "report.c"
    return report__succeeded;
#line 9804 "report.c"
  }
#line 9806 "report.c"
}

#line 9809 "report.c"
static void MR_CALL 
report____Compare____perf_row_data_1_0_10001(
#line 9812 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9814 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 9816 "report.c"
  MR_Box report__wrapper_arg_3,
#line 9818 "report.c"
  MR_Box report__wrapper_arg_4)
#line 9820 "report.c"
{
#line 9822 "report.c"
  {
#line 9824 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9827 "report.c"
    {
#line 9829 "report.c"
      report____Compare____perf_row_data_1_0(((MR_Word) report__wrapper_arg_1), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 9832 "report.c"
    *report__wrapper_arg_2 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9834 "report.c"
  }
#line 9836 "report.c"
}

#line 9839 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_active_0_0_10001(
#line 9842 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9844 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9846 "report.c"
{
#line 9848 "report.c"
  {
#line 9850 "report.c"
    MR_bool report__succeeded;

#line 9853 "report.c"
    {
#line 9855 "report.c"
      report__succeeded = report____Unify____proc_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9858 "report.c"
    return report__succeeded;
#line 9860 "report.c"
  }
#line 9862 "report.c"
}

#line 9865 "report.c"
static void MR_CALL 
report____Compare____proc_active_0_0_10001(
#line 9868 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9870 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9872 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9874 "report.c"
{
#line 9876 "report.c"
  {
#line 9878 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9881 "report.c"
    {
#line 9883 "report.c"
      report____Compare____proc_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9886 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9888 "report.c"
  }
#line 9890 "report.c"
}

#line 9893 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_0_0_10001(
#line 9896 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9898 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9900 "report.c"
{
#line 9902 "report.c"
  {
#line 9904 "report.c"
    MR_bool report__succeeded;

#line 9907 "report.c"
    {
#line 9909 "report.c"
      report__succeeded = report____Unify____proc_callers_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9912 "report.c"
    return report__succeeded;
#line 9914 "report.c"
  }
#line 9916 "report.c"
}

#line 9919 "report.c"
static void MR_CALL 
report____Compare____proc_callers_0_0_10001(
#line 9922 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9924 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9926 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9928 "report.c"
{
#line 9930 "report.c"
  {
#line 9932 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9935 "report.c"
    {
#line 9937 "report.c"
      report____Compare____proc_callers_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9940 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9942 "report.c"
  }
#line 9944 "report.c"
}

#line 9947 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_report_0_0_10001(
#line 9950 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9952 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9954 "report.c"
{
#line 9956 "report.c"
  {
#line 9958 "report.c"
    MR_bool report__succeeded;

#line 9961 "report.c"
    {
#line 9963 "report.c"
      report__succeeded = report____Unify____proc_callers_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9966 "report.c"
    return report__succeeded;
#line 9968 "report.c"
  }
#line 9970 "report.c"
}

#line 9973 "report.c"
static void MR_CALL 
report____Compare____proc_callers_report_0_0_10001(
#line 9976 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9978 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9980 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9982 "report.c"
{
#line 9984 "report.c"
  {
#line 9986 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9989 "report.c"
    {
#line 9991 "report.c"
      report____Compare____proc_callers_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9994 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9996 "report.c"
  }
#line 9998 "report.c"
}

#line 10001 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_desc_0_0_10001(
#line 10004 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10006 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10008 "report.c"
{
#line 10010 "report.c"
  {
#line 10012 "report.c"
    MR_bool report__succeeded;

#line 10015 "report.c"
    {
#line 10017 "report.c"
      report__succeeded = report____Unify____proc_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10020 "report.c"
    return report__succeeded;
#line 10022 "report.c"
  }
#line 10024 "report.c"
}

#line 10027 "report.c"
static void MR_CALL 
report____Compare____proc_desc_0_0_10001(
#line 10030 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10032 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10034 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10036 "report.c"
{
#line 10038 "report.c"
  {
#line 10040 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10043 "report.c"
    {
#line 10045 "report.c"
      report____Compare____proc_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10048 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10050 "report.c"
  }
#line 10052 "report.c"
}

#line 10055 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_dynamic_dump_info_0_0_10001(
#line 10058 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10060 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10062 "report.c"
{
#line 10064 "report.c"
  {
#line 10066 "report.c"
    MR_bool report__succeeded;

#line 10069 "report.c"
    {
#line 10071 "report.c"
      report__succeeded = report____Unify____proc_dynamic_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10074 "report.c"
    return report__succeeded;
#line 10076 "report.c"
  }
#line 10078 "report.c"
}

#line 10081 "report.c"
static void MR_CALL 
report____Compare____proc_dynamic_dump_info_0_0_10001(
#line 10084 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10086 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10088 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10090 "report.c"
{
#line 10092 "report.c"
  {
#line 10094 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10097 "report.c"
    {
#line 10099 "report.c"
      report____Compare____proc_dynamic_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10102 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10104 "report.c"
  }
#line 10106 "report.c"
}

#line 10109 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_is_active_0_0_10001(
#line 10112 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10114 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10116 "report.c"
{
#line 10118 "report.c"
  {
#line 10120 "report.c"
    MR_bool report__succeeded;

#line 10123 "report.c"
    {
#line 10125 "report.c"
      report__succeeded = report____Unify____proc_is_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10128 "report.c"
    return report__succeeded;
#line 10130 "report.c"
  }
#line 10132 "report.c"
}

#line 10135 "report.c"
static void MR_CALL 
report____Compare____proc_is_active_0_0_10001(
#line 10138 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10140 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10142 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10144 "report.c"
{
#line 10146 "report.c"
  {
#line 10148 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10151 "report.c"
    {
#line 10153 "report.c"
      report____Compare____proc_is_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10156 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10158 "report.c"
  }
#line 10160 "report.c"
}

#line 10163 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_report_0_0_10001(
#line 10166 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10168 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10170 "report.c"
{
#line 10172 "report.c"
  {
#line 10174 "report.c"
    MR_bool report__succeeded;

#line 10177 "report.c"
    {
#line 10179 "report.c"
      report__succeeded = report____Unify____proc_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10182 "report.c"
    return report__succeeded;
#line 10184 "report.c"
  }
#line 10186 "report.c"
}

#line 10189 "report.c"
static void MR_CALL 
report____Compare____proc_report_0_0_10001(
#line 10192 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10194 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10196 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10198 "report.c"
{
#line 10200 "report.c"
  {
#line 10202 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10205 "report.c"
    {
#line 10207 "report.c"
      report____Compare____proc_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10210 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10212 "report.c"
  }
#line 10214 "report.c"
}

#line 10217 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_static_dump_info_0_0_10001(
#line 10220 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10222 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10224 "report.c"
{
#line 10226 "report.c"
  {
#line 10228 "report.c"
    MR_bool report__succeeded;

#line 10231 "report.c"
    {
#line 10233 "report.c"
      report__succeeded = report____Unify____proc_static_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10236 "report.c"
    return report__succeeded;
#line 10238 "report.c"
  }
#line 10240 "report.c"
}

#line 10243 "report.c"
static void MR_CALL 
report____Compare____proc_static_dump_info_0_0_10001(
#line 10246 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10248 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10250 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10252 "report.c"
{
#line 10254 "report.c"
  {
#line 10256 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10259 "report.c"
    {
#line 10261 "report.c"
      report____Compare____proc_static_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10264 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10266 "report.c"
  }
#line 10268 "report.c"
}

#line 10271 "report.c"
static MR_bool MR_CALL 
report____Unify____procrep_coverage_info_0_0_10001(
#line 10274 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10276 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10278 "report.c"
{
#line 10280 "report.c"
  {
#line 10282 "report.c"
    MR_bool report__succeeded;

#line 10285 "report.c"
    {
#line 10287 "report.c"
      report__succeeded = report____Unify____procrep_coverage_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10290 "report.c"
    return report__succeeded;
#line 10292 "report.c"
  }
#line 10294 "report.c"
}

#line 10297 "report.c"
static void MR_CALL 
report____Compare____procrep_coverage_info_0_0_10001(
#line 10300 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10302 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10304 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10306 "report.c"
{
#line 10308 "report.c"
  {
#line 10310 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10313 "report.c"
    {
#line 10315 "report.c"
      report____Compare____procrep_coverage_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10318 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10320 "report.c"
  }
#line 10322 "report.c"
}

#line 10325 "report.c"
static MR_bool MR_CALL 
report____Unify____program_modules_report_0_0_10001(
#line 10328 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10330 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10332 "report.c"
{
#line 10334 "report.c"
  {
#line 10336 "report.c"
    MR_bool report__succeeded;

#line 10339 "report.c"
    {
#line 10341 "report.c"
      report__succeeded = report____Unify____program_modules_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10344 "report.c"
    return report__succeeded;
#line 10346 "report.c"
  }
#line 10348 "report.c"
}

#line 10351 "report.c"
static void MR_CALL 
report____Compare____program_modules_report_0_0_10001(
#line 10354 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10356 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10358 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10360 "report.c"
{
#line 10362 "report.c"
  {
#line 10364 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10367 "report.c"
    {
#line 10369 "report.c"
      report____Compare____program_modules_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10372 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10374 "report.c"
  }
#line 10376 "report.c"
}

#line 10379 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_level_report_0_0_10001(
#line 10382 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10384 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10386 "report.c"
{
#line 10388 "report.c"
  {
#line 10390 "report.c"
    MR_bool report__succeeded;

#line 10393 "report.c"
    {
#line 10395 "report.c"
      report__succeeded = report____Unify____recursion_level_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10398 "report.c"
    return report__succeeded;
#line 10400 "report.c"
  }
#line 10402 "report.c"
}

#line 10405 "report.c"
static void MR_CALL 
report____Compare____recursion_level_report_0_0_10001(
#line 10408 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10410 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10412 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10414 "report.c"
{
#line 10416 "report.c"
  {
#line 10418 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10421 "report.c"
    {
#line 10423 "report.c"
      report____Compare____recursion_level_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10426 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10428 "report.c"
  }
#line 10430 "report.c"
}

#line 10433 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_0_0_10001(
#line 10436 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10438 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10440 "report.c"
{
#line 10442 "report.c"
  {
#line 10444 "report.c"
    MR_bool report__succeeded;

#line 10447 "report.c"
    {
#line 10449 "report.c"
      report__succeeded = report____Unify____recursion_type_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10452 "report.c"
    return report__succeeded;
#line 10454 "report.c"
  }
#line 10456 "report.c"
}

#line 10459 "report.c"
static void MR_CALL 
report____Compare____recursion_type_0_0_10001(
#line 10462 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10464 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10466 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10468 "report.c"
{
#line 10470 "report.c"
  {
#line 10472 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10475 "report.c"
    {
#line 10477 "report.c"
      report____Compare____recursion_type_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10480 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10482 "report.c"
  }
#line 10484 "report.c"
}

#line 10487 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_freq_data_0_0_10001(
#line 10490 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10492 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10494 "report.c"
{
#line 10496 "report.c"
  {
#line 10498 "report.c"
    MR_bool report__succeeded;

#line 10501 "report.c"
    {
#line 10503 "report.c"
      report__succeeded = report____Unify____recursion_type_freq_data_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10506 "report.c"
    return report__succeeded;
#line 10508 "report.c"
  }
#line 10510 "report.c"
}

#line 10513 "report.c"
static void MR_CALL 
report____Compare____recursion_type_freq_data_0_0_10001(
#line 10516 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10518 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10520 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10522 "report.c"
{
#line 10524 "report.c"
  {
#line 10526 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10529 "report.c"
    {
#line 10531 "report.c"
      report____Compare____recursion_type_freq_data_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10534 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10536 "report.c"
  }
#line 10538 "report.c"
}

#line 10541 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_histogram_0_0_10001(
#line 10544 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10546 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10548 "report.c"
{
#line 10550 "report.c"
  {
#line 10552 "report.c"
    MR_bool report__succeeded;

#line 10555 "report.c"
    {
#line 10557 "report.c"
      report__succeeded = report____Unify____recursion_type_histogram_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10560 "report.c"
    return report__succeeded;
#line 10562 "report.c"
  }
#line 10564 "report.c"
}

#line 10567 "report.c"
static void MR_CALL 
report____Compare____recursion_type_histogram_0_0_10001(
#line 10570 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10572 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10574 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10576 "report.c"
{
#line 10578 "report.c"
  {
#line 10580 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10583 "report.c"
    {
#line 10585 "report.c"
      report____Compare____recursion_type_histogram_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10588 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10590 "report.c"
  }
#line 10592 "report.c"
}

#line 10595 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_freq_data_0_0_10001(
#line 10598 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10600 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10602 "report.c"
{
#line 10604 "report.c"
  {
#line 10606 "report.c"
    MR_bool report__succeeded;

#line 10609 "report.c"
    {
#line 10611 "report.c"
      report__succeeded = report____Unify____recursion_type_proc_freq_data_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10614 "report.c"
    return report__succeeded;
#line 10616 "report.c"
  }
#line 10618 "report.c"
}

#line 10621 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_freq_data_0_0_10001(
#line 10624 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10626 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10628 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10630 "report.c"
{
#line 10632 "report.c"
  {
#line 10634 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10637 "report.c"
    {
#line 10639 "report.c"
      report____Compare____recursion_type_proc_freq_data_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10642 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10644 "report.c"
  }
#line 10646 "report.c"
}

#line 10649 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_map_0_0_10001(
#line 10652 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10654 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10656 "report.c"
{
#line 10658 "report.c"
  {
#line 10660 "report.c"
    MR_bool report__succeeded;

#line 10663 "report.c"
    {
#line 10665 "report.c"
      report__succeeded = report____Unify____recursion_type_proc_map_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10668 "report.c"
    return report__succeeded;
#line 10670 "report.c"
  }
#line 10672 "report.c"
}

#line 10675 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_map_0_0_10001(
#line 10678 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10680 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10682 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10684 "report.c"
{
#line 10686 "report.c"
  {
#line 10688 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10691 "report.c"
    {
#line 10693 "report.c"
      report____Compare____recursion_type_proc_map_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10696 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10698 "report.c"
  }
#line 10700 "report.c"
}

#line 10703 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_simple_0_0_10001(
#line 10706 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10708 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10710 "report.c"
{
#line 10712 "report.c"
  {
#line 10714 "report.c"
    MR_bool report__succeeded;

#line 10717 "report.c"
    {
#line 10719 "report.c"
      report__succeeded = report____Unify____recursion_type_simple_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10722 "report.c"
    return report__succeeded;
#line 10724 "report.c"
  }
#line 10726 "report.c"
}

#line 10729 "report.c"
static void MR_CALL 
report____Compare____recursion_type_simple_0_0_10001(
#line 10732 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10734 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10736 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10738 "report.c"
{
#line 10740 "report.c"
  {
#line 10742 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10745 "report.c"
    {
#line 10747 "report.c"
      report____Compare____recursion_type_simple_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10750 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10752 "report.c"
  }
#line 10754 "report.c"
}

#line 10757 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_types_frequency_report_0_0_10001(
#line 10760 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10762 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10764 "report.c"
{
#line 10766 "report.c"
  {
#line 10768 "report.c"
    MR_bool report__succeeded;

#line 10771 "report.c"
    {
#line 10773 "report.c"
      report__succeeded = report____Unify____recursion_types_frequency_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10776 "report.c"
    return report__succeeded;
#line 10778 "report.c"
  }
#line 10780 "report.c"
}

#line 10783 "report.c"
static void MR_CALL 
report____Compare____recursion_types_frequency_report_0_0_10001(
#line 10786 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10788 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10790 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10792 "report.c"
{
#line 10794 "report.c"
  {
#line 10796 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10799 "report.c"
    {
#line 10801 "report.c"
      report____Compare____recursion_types_frequency_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10804 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10806 "report.c"
  }
#line 10808 "report.c"
}

#line 10811 "report.c"
static MR_bool MR_CALL 
report____Unify____report_ordering_0_0_10001(
#line 10814 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10816 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10818 "report.c"
{
#line 10820 "report.c"
  {
#line 10822 "report.c"
    MR_bool report__succeeded;

#line 10825 "report.c"
    {
#line 10827 "report.c"
      report__succeeded = report____Unify____report_ordering_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10830 "report.c"
    return report__succeeded;
#line 10832 "report.c"
  }
#line 10834 "report.c"
}

#line 10837 "report.c"
static void MR_CALL 
report____Compare____report_ordering_0_0_10001(
#line 10840 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10842 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10844 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10846 "report.c"
{
#line 10848 "report.c"
  {
#line 10850 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10853 "report.c"
    {
#line 10855 "report.c"
      report____Compare____report_ordering_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10858 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10860 "report.c"
  }
#line 10862 "report.c"
}

#line 10865 "report.c"
static MR_bool MR_CALL 
report____Unify____top_procs_report_0_0_10001(
#line 10868 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10870 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10872 "report.c"
{
#line 10874 "report.c"
  {
#line 10876 "report.c"
    MR_bool report__succeeded;

#line 10879 "report.c"
    {
#line 10881 "report.c"
      report__succeeded = report____Unify____top_procs_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10884 "report.c"
    return report__succeeded;
#line 10886 "report.c"
  }
#line 10888 "report.c"
}

#line 10891 "report.c"
static void MR_CALL 
report____Compare____top_procs_report_0_0_10001(
#line 10894 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10896 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10898 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10900 "report.c"
{
#line 10902 "report.c"
  {
#line 10904 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10907 "report.c"
    {
#line 10909 "report.c"
      report____Compare____top_procs_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10912 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10914 "report.c"
  }
#line 10916 "report.c"
}

#line 10919 "report.c"
static MR_bool MR_CALL 
report____Unify____var_use_and_name_0_0_10001(
#line 10922 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10924 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10926 "report.c"
{
#line 10928 "report.c"
  {
#line 10930 "report.c"
    MR_bool report__succeeded;

#line 10933 "report.c"
    {
#line 10935 "report.c"
      report__succeeded = report____Unify____var_use_and_name_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10938 "report.c"
    return report__succeeded;
#line 10940 "report.c"
  }
#line 10942 "report.c"
}

#line 10945 "report.c"
static void MR_CALL 
report____Compare____var_use_and_name_0_0_10001(
#line 10948 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10950 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10952 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10954 "report.c"
{
#line 10956 "report.c"
  {
#line 10958 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10961 "report.c"
    {
#line 10963 "report.c"
      report____Compare____var_use_and_name_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10966 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10968 "report.c"
  }
#line 10970 "report.c"
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
#line 10997 "report.c"
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
#line 11019 "report.c"
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

#line 11080 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 549 "report.m"
        if (report__succeeded)
#line 11084 "report.c"
          {
#line 11086 "report.c"
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
#line 11122 "report.c"
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
#line 11144 "report.c"
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

#line 11211 "report.c"
        {
#line 11213 "report.c"
          report__succeeded = report____Unify____report_ordering_0_0(report__V_3_3, report__V_5_5);
        }
#line 381 "report.m"
        if (report__succeeded)
#line 381 "report.m"
          {
#line 11220 "report.c"
            report__TypeInfo_9_9 = (MR_Word) &report_scalar_common_1[5];
#line 11222 "report.c"
            {
#line 11224 "report.c"
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
#line 11262 "report.c"
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
#line 11292 "report.c"
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
#line 11316 "report.c"
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
#line 11340 "report.c"
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

#line 11422 "report.c"
        {
#line 11424 "report.c"
          report__succeeded = query____Unify____display_limit_0_0(report__V_3_3, report__V_7_7);
        }
#line 617 "report.m"
        if (report__succeeded)
#line 617 "report.m"
          {
#line 11431 "report.c"
            report__succeeded = (report__V_4_4 == report__V_8_8);
#line 617 "report.m"
            if (report__succeeded)
#line 617 "report.m"
              {
#line 11437 "report.c"
                report__succeeded = (report__V_5_5 == report__V_9_9);
#line 617 "report.m"
                if (report__succeeded)
#line 11441 "report.c"
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
#line 11480 "report.c"
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

#line 11538 "report.c"
        {
#line 11540 "report.c"
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
#line 11576 "report.c"
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
#line 11608 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                else
#line 280 "report.m"
                  if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11614 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                  else
#line 11618 "report.c"
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
#line 11650 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                  else
#line 280 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11656 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                    else
#line 11660 "report.c"
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
#line 11692 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                    else
#line 280 "report.m"
                      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11698 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                      else
#line 11702 "report.c"
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
#line 11734 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                      else
#line 280 "report.m"
                        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11740 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                        else
#line 11744 "report.c"
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
#line 11757 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                  else
#line 280 "report.m"
                    if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11763 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                    else
#line 280 "report.m"
                      if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 11769 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                      else
#line 280 "report.m"
                        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 11775 "report.c"
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
#line 11799 "report.c"
                              *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                            else
#line 11803 "report.c"
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
#line 11818 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                    else
#line 280 "report.m"
                      if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11824 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                      else
#line 280 "report.m"
                        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 11830 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                        else
#line 280 "report.m"
                          if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 11836 "report.c"
                            *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                          else
#line 280 "report.m"
                            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 11842 "report.c"
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
#line 11864 "report.c"
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
#line 11877 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                    else
#line 280 "report.m"
                      if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11883 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                      else
#line 280 "report.m"
                        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 11889 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                        else
#line 280 "report.m"
                          if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 11895 "report.c"
                            *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                          else
#line 280 "report.m"
                            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 11901 "report.c"
                              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                            else
#line 280 "report.m"
                              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11907 "report.c"
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
#line 12035 "report.c"
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
#line 12060 "report.c"
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
#line 12085 "report.c"
                        report__TypeInfo_19_19 = (MR_Word) &report_scalar_common_1[37];
#line 12087 "report.c"
                        {
#line 12089 "report.c"
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
#line 12189 "report.c"
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
#line 12215 "report.c"
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
#line 12235 "report.c"
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

#line 12308 "report.c"
        report__succeeded = (report__V_3_3 == report__V_6_6);
#line 306 "report.m"
        if (report__succeeded)
#line 306 "report.m"
          {
#line 12314 "report.c"
            {
#line 12316 "report.c"
              report__succeeded = measurement_units____Unify____percent_0_0(report__V_4_4, report__V_7_7);
            }
#line 306 "report.m"
            if (report__succeeded)
#line 306 "report.m"
              {
#line 12323 "report.c"
                report__TypeCtorInfo_12_12 = (MR_Word) &report__report__type_ctor_info_proc_desc_0;
#line 12325 "report.c"
                {
#line 12327 "report.c"
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
#line 12429 "report.c"
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
#line 12459 "report.c"
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
#line 12479 "report.c"
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
#line 12499 "report.c"
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

#line 12580 "report.c"
        report__succeeded = (report__V_3_3 == report__V_7_7);
#line 295 "report.m"
        if (report__succeeded)
#line 295 "report.m"
          {
#line 12586 "report.c"
            {
#line 12588 "report.c"
              report__succeeded = measurement_units____Unify____percent_0_0(report__V_4_4, report__V_8_8);
            }
#line 295 "report.m"
            if (report__succeeded)
#line 295 "report.m"
              {
#line 12595 "report.c"
                report__TypeInfo_14_14 = (MR_Word) &report_scalar_common_1[36];
#line 12597 "report.c"
                {
#line 12599 "report.c"
                  report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_14_14, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_9_9)));
                }
#line 295 "report.m"
                if (report__succeeded)
#line 295 "report.m"
                  {
#line 12606 "report.c"
                    report__TypeInfo_15_15 = (MR_Word) &report_scalar_common_2[21];
#line 12608 "report.c"
                    {
#line 12610 "report.c"
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
#line 12652 "report.c"
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
#line 12666 "report.c"
            *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
          else
#line 222 "report.m"
            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 12672 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
            else
#line 222 "report.m"
              if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 12678 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
              else
#line 222 "report.m"
                if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12684 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                else
#line 12688 "report.c"
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
#line 12703 "report.c"
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
#line 12723 "report.c"
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
#line 12746 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                else
#line 222 "report.m"
                  if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 12752 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                  else
#line 222 "report.m"
                    if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12758 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                    else
#line 12762 "report.c"
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
#line 12785 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
              else
#line 222 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12791 "report.c"
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
#line 12817 "report.c"
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
#line 12837 "report.c"
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
#line 12857 "report.c"
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
#line 12877 "report.c"
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
#line 12910 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                    else
#line 222 "report.m"
                      if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12916 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                      else
#line 12920 "report.c"
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
#line 12935 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                else
#line 222 "report.m"
                  if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12941 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                  else
#line 222 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 12947 "report.c"
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
#line 12971 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                        else
#line 12975 "report.c"
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
#line 12990 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                  else
#line 222 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12996 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                    else
#line 222 "report.m"
                      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 13002 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                      else
#line 222 "report.m"
                        if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 13008 "report.c"
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
#line 13030 "report.c"
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
#line 13043 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                  else
#line 222 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 13049 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                    else
#line 222 "report.m"
                      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 13055 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                      else
#line 222 "report.m"
                        if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 13061 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                        else
#line 222 "report.m"
                          if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 13067 "report.c"
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
#line 13156 "report.c"
                {
#line 13158 "report.c"
                  report__succeeded = report____Unify____recursion_level_report_0_0(report__V_15_15, report__V_17_17);
                }
#line 222 "report.m"
                if (report__succeeded)
#line 13163 "report.c"
                  {
#line 13165 "report.c"
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
#line 13215 "report.c"
                  {
#line 13217 "report.c"
                    report__succeeded = report____Unify____recursion_level_report_0_0(report__V_5_5, report__V_10_10);
                  }
#line 222 "report.m"
                  if (report__succeeded)
#line 222 "report.m"
                    {
#line 13224 "report.c"
                      {
#line 13226 "report.c"
                        report__succeeded = report____Unify____recursion_level_report_0_0(report__V_6_6, report__V_11_11);
                      }
#line 222 "report.m"
                      if (report__succeeded)
#line 222 "report.m"
                        {
#line 13233 "report.c"
                          report__succeeded = (report__V_7_7 == report__V_12_12);
#line 222 "report.m"
                          if (report__succeeded)
#line 222 "report.m"
                            {
#line 13239 "report.c"
                              report__succeeded = (report__V_8_8 == report__V_13_13);
#line 222 "report.m"
                              if (report__succeeded)
#line 13243 "report.c"
                                {
#line 13245 "report.c"
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
#line 13279 "report.c"
                    report__TypeInfo_27_27 = (MR_Word) &report_scalar_common_1[34];
#line 13281 "report.c"
                    {
#line 13283 "report.c"
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
#line 13309 "report.c"
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
#line 13334 "report.c"
                      report__TypeInfo_28_28 = (MR_Word) &report_scalar_common_1[35];
#line 13336 "report.c"
                      {
#line 13338 "report.c"
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
#line 13376 "report.c"
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
#line 13410 "report.c"
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
#line 13430 "report.c"
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
#line 13450 "report.c"
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
#line 13470 "report.c"
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

#line 13549 "report.c"
        report__succeeded = (report__V_3_3 == report__V_8_8);
#line 263 "report.m"
        if (report__succeeded)
#line 263 "report.m"
          {
#line 13555 "report.c"
            report__succeeded = (report__V_4_4 == report__V_9_9);
#line 263 "report.m"
            if (report__succeeded)
#line 263 "report.m"
              {
#line 13561 "report.c"
                report__succeeded = (report__V_5_5 == report__V_10_10);
#line 263 "report.m"
                if (report__succeeded)
#line 263 "report.m"
                  {
#line 13567 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_11_11);
#line 263 "report.m"
                    if (report__succeeded)
#line 13571 "report.c"
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
#line 13612 "report.c"
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

#line 13670 "report.c"
        {
#line 13672 "report.c"
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
#line 13708 "report.c"
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
#line 13738 "report.c"
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
#line 13758 "report.c"
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

#line 13837 "report.c"
        report__succeeded = (report__V_14_14 == report__V_15_15);
#line 441 "report.m"
        if (report__succeeded)
#line 441 "report.m"
          {
#line 13843 "report.c"
            report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[30];
#line 13845 "report.c"
            {
#line 13847 "report.c"
              report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
            }
#line 441 "report.m"
            if (report__succeeded)
#line 441 "report.m"
              {
#line 13854 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[31];
#line 13856 "report.c"
                {
#line 13858 "report.c"
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
#line 13898 "report.c"
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
#line 13948 "report.c"
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
#line 13968 "report.c"
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
#line 13988 "report.c"
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
#line 14008 "report.c"
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
#line 14028 "report.c"
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
#line 14048 "report.c"
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
#line 14068 "report.c"
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

#line 14169 "report.c"
        report__succeeded = (report__V_22_22 == report__V_23_23);
#line 492 "report.m"
        if (report__succeeded)
#line 492 "report.m"
          {
#line 14175 "report.c"
            report__succeeded = (strcmp(report__V_4_4, report__V_12_12) == 0);
#line 492 "report.m"
            if (report__succeeded)
#line 492 "report.m"
              {
#line 14181 "report.c"
                report__succeeded = (strcmp(report__V_5_5, report__V_13_13) == 0);
#line 492 "report.m"
                if (report__succeeded)
#line 492 "report.m"
                  {
#line 14187 "report.c"
                    report__succeeded = (strcmp(report__V_6_6, report__V_14_14) == 0);
#line 492 "report.m"
                    if (report__succeeded)
#line 492 "report.m"
                      {
#line 14193 "report.c"
                        report__succeeded = (strcmp(report__V_7_7, report__V_15_15) == 0);
#line 492 "report.m"
                        if (report__succeeded)
#line 492 "report.m"
                          {
#line 14199 "report.c"
                            report__succeeded = (report__V_8_8 == report__V_16_16);
#line 492 "report.m"
                            if (report__succeeded)
#line 492 "report.m"
                              {
#line 14205 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_17_17);
#line 492 "report.m"
                                if (report__succeeded)
#line 14209 "report.c"
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
#line 14256 "report.c"
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
#line 14282 "report.c"
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
#line 14302 "report.c"
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

#line 14377 "report.c"
        {
#line 14379 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_callers_counts_0, report__V_3_3, report__V_6_6);
        }
#line 391 "report.m"
        if (report__succeeded)
#line 391 "report.m"
          {
#line 14386 "report.c"
            report__TypeCtorInfo_12_12 = (MR_Word) &report__report__type_ctor_info_proc_desc_0;
#line 14388 "report.c"
            {
#line 14390 "report.c"
              report__succeeded = report____Unify____perf_row_data_1_0(report__TypeCtorInfo_12_12, report__V_4_4, report__V_7_7);
            }
#line 391 "report.m"
            if (report__succeeded)
#line 391 "report.m"
              {
#line 14397 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[29];
#line 14399 "report.c"
                {
#line 14401 "report.c"
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
#line 14458 "report.c"
  {
#line 14460 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 14463 "report.c"
    return report__succeeded;
#line 14465 "report.c"
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
#line 14494 "report.c"
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
#line 14544 "report.c"
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
#line 14568 "report.c"
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
#line 14588 "report.c"
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
#line 14608 "report.c"
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
#line 14628 "report.c"
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
#line 14648 "report.c"
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
#line 14668 "report.c"
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

#line 14781 "report.c"
        report__succeeded = (strcmp(report__V_5_5, report__V_13_13) == 0);
#line 506 "report.m"
        if (report__succeeded)
#line 506 "report.m"
          {
#line 14787 "report.c"
            report__succeeded = (strcmp(report__V_6_6, report__V_14_14) == 0);
#line 506 "report.m"
            if (report__succeeded)
#line 506 "report.m"
              {
#line 14793 "report.c"
                report__succeeded = (strcmp(report__V_7_7, report__V_15_15) == 0);
#line 506 "report.m"
                if (report__succeeded)
#line 506 "report.m"
                  {
#line 14799 "report.c"
                    report__succeeded = (strcmp(report__V_8_8, report__V_16_16) == 0);
#line 506 "report.m"
                    if (report__succeeded)
#line 506 "report.m"
                      {
#line 14805 "report.c"
                        report__V_25_25 = (MR_Integer) report__V_3_3;
#line 14807 "report.c"
                        report__V_26_26 = (MR_Integer) report__V_11_11;
#line 14809 "report.c"
                        report__succeeded = (report__V_25_25 == report__V_26_26);
#line 506 "report.m"
                        if (report__succeeded)
#line 506 "report.m"
                          {
#line 14815 "report.c"
                            report__V_27_27 = (MR_Integer) report__V_4_4;
#line 14817 "report.c"
                            report__V_28_28 = (MR_Integer) report__V_12_12;
#line 14819 "report.c"
                            report__succeeded = (report__V_27_27 == report__V_28_28);
#line 506 "report.m"
                            if (report__succeeded)
#line 506 "report.m"
                              {
#line 14825 "report.c"
                                report__TypeInfo_23_23 = (MR_Word) &report_scalar_common_1[25];
#line 14827 "report.c"
                                {
#line 14829 "report.c"
                                  report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_23_23, ((MR_Box) (report__V_9_9)), ((MR_Box) (report__V_17_17)));
                                }
#line 506 "report.m"
                                if (report__succeeded)
#line 506 "report.m"
                                  {
#line 14836 "report.c"
                                    report__TypeInfo_24_24 = (MR_Word) &report_scalar_common_1[27];
#line 14838 "report.c"
                                    {
#line 14840 "report.c"
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
#line 14890 "report.c"
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
#line 14932 "report.c"
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
#line 14952 "report.c"
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
#line 14972 "report.c"
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
#line 14992 "report.c"
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
#line 15012 "report.c"
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

#line 15101 "report.c"
        report__succeeded = (report__V_18_18 == report__V_19_19);
#line 650 "report.m"
        if (report__succeeded)
#line 650 "report.m"
          {
#line 15107 "report.c"
            report__succeeded = (strcmp(report__V_4_4, report__V_10_10) == 0);
#line 650 "report.m"
            if (report__succeeded)
#line 650 "report.m"
              {
#line 15113 "report.c"
                report__succeeded = (report__V_5_5 == report__V_11_11);
#line 650 "report.m"
                if (report__succeeded)
#line 650 "report.m"
                  {
#line 15119 "report.c"
                    report__succeeded = (strcmp(report__V_6_6, report__V_12_12) == 0);
#line 650 "report.m"
                    if (report__succeeded)
#line 650 "report.m"
                      {
#line 15125 "report.c"
                        report__succeeded = (strcmp(report__V_7_7, report__V_13_13) == 0);
#line 650 "report.m"
                        if (report__succeeded)
#line 15129 "report.c"
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
#line 15172 "report.c"
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
#line 15210 "report.c"
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
#line 15230 "report.c"
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
#line 15250 "report.c"
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
#line 15270 "report.c"
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
#line 15294 "report.c"
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

#line 15385 "report.c"
        {
#line 15387 "report.c"
          report__succeeded = report____Unify____proc_desc_0_0(report__V_3_3, report__V_9_9);
        }
#line 448 "report.m"
        if (report__succeeded)
#line 448 "report.m"
          {
#line 15394 "report.c"
            {
#line 15396 "report.c"
              report__succeeded = report____Unify____proc_callers_0_0(report__V_4_4, report__V_10_10);
            }
#line 448 "report.m"
            if (report__succeeded)
#line 448 "report.m"
              {
#line 15403 "report.c"
                report__succeeded = (report__V_5_5 == report__V_11_11);
#line 448 "report.m"
                if (report__succeeded)
#line 448 "report.m"
                  {
#line 15409 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_12_12);
#line 448 "report.m"
                    if (report__succeeded)
#line 448 "report.m"
                      {
#line 15415 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_13_13);
#line 448 "report.m"
                        if (report__succeeded)
#line 448 "report.m"
                          {
#line 15421 "report.c"
                            report__TypeInfo_17_17 = (MR_Word) &report_scalar_common_1[24];
#line 15423 "report.c"
                            {
#line 15425 "report.c"
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
#line 15471 "report.c"
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
#line 15502 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
            else
#line 474 "report.m"
              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 15508 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
              else
#line 15512 "report.c"
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
#line 15527 "report.c"
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
#line 15551 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
                else
#line 15555 "report.c"
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
#line 15570 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
              else
#line 474 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 15576 "report.c"
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
#line 15598 "report.c"
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
#line 15611 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
              else
#line 474 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 15617 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
                else
#line 474 "report.m"
                  if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 15623 "report.c"
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
#line 15693 "report.c"
              report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[23];
#line 15695 "report.c"
              {
#line 15697 "report.c"
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
#line 15725 "report.c"
                report__TypeInfo_14_14 = (MR_Word) &report_scalar_common_1[9];
#line 15727 "report.c"
                {
#line 15729 "report.c"
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
#line 15757 "report.c"
                  report__TypeInfo_15_15 = (MR_Word) &report_scalar_common_1[22];
#line 15759 "report.c"
                  {
#line 15761 "report.c"
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
#line 15787 "report.c"
                  report__TypeInfo_16_16 = (MR_Word) &report_scalar_common_1[5];
#line 15789 "report.c"
                  {
#line 15791 "report.c"
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
#line 15829 "report.c"
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
#line 15851 "report.c"
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

#line 15921 "report.c"
        {
#line 15923 "report.c"
          report__succeeded = report____Unify____proc_desc_0_0(report__V_3_3, report__V_5_5);
        }
#line 637 "report.m"
        if (report__succeeded)
#line 15928 "report.c"
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
#line 15965 "report.c"
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
#line 16015 "report.c"
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
#line 16035 "report.c"
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
#line 16055 "report.c"
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
#line 16075 "report.c"
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
#line 16095 "report.c"
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
#line 16115 "report.c"
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
#line 16135 "report.c"
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
#line 16155 "report.c"
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

#line 16266 "report.c"
        {
#line 16268 "report.c"
          report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_T_23, report__V_3_3, report__V_12_12);
        }
#line 562 "report.m"
        if (report__succeeded)
#line 562 "report.m"
          {
#line 16275 "report.c"
            report__succeeded = (report__V_4_4 == report__V_13_13);
#line 562 "report.m"
            if (report__succeeded)
#line 562 "report.m"
              {
#line 16281 "report.c"
                report__succeeded = (report__V_5_5 == report__V_14_14);
#line 562 "report.m"
                if (report__succeeded)
#line 562 "report.m"
                  {
#line 16287 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_15_15);
#line 562 "report.m"
                    if (report__succeeded)
#line 562 "report.m"
                      {
#line 16293 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_16_16);
#line 562 "report.m"
                        if (report__succeeded)
#line 562 "report.m"
                          {
#line 16299 "report.c"
                            report__succeeded = (report__V_8_8 == report__V_17_17);
#line 562 "report.m"
                            if (report__succeeded)
#line 562 "report.m"
                              {
#line 16305 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_18_18);
#line 562 "report.m"
                                if (report__succeeded)
#line 562 "report.m"
                                  {
#line 16311 "report.c"
                                    {
#line 16313 "report.c"
                                      report__succeeded = report____Unify____inheritable_perf_0_0(report__V_10_10, report__V_19_19);
                                    }
#line 562 "report.m"
                                    if (report__succeeded)
#line 562 "report.m"
                                      {
#line 16320 "report.c"
                                        report__TypeInfo_24_24 = (MR_Word) &report_scalar_common_1[20];
#line 16322 "report.c"
                                        {
#line 16324 "report.c"
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
#line 16376 "report.c"
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
#line 16398 "report.c"
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

#line 16459 "report.c"
        {
#line 16461 "report.c"
          report__succeeded = report____Unify____proc_desc_0_0(report__V_3_3, report__V_5_5);
        }
#line 435 "report.m"
        if (report__succeeded)
#line 16466 "report.c"
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
#line 16501 "report.c"
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
#line 16527 "report.c"
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
#line 16551 "report.c"
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

#line 16624 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_6_6) == 0);
#line 320 "report.m"
        if (report__succeeded)
#line 320 "report.m"
          {
#line 16630 "report.c"
            report__succeeded = (report__V_4_4 == report__V_7_7);
#line 320 "report.m"
            if (report__succeeded)
#line 320 "report.m"
              {
#line 16636 "report.c"
                report__TypeInfo_11_11 = (MR_Word) &report_scalar_common_1[19];
#line 16638 "report.c"
                {
#line 16640 "report.c"
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
#line 16680 "report.c"
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
#line 16702 "report.c"
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

#line 16763 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 374 "report.m"
        if (report__succeeded)
#line 16767 "report.c"
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
#line 16819 "report.c"
  {
#line 16821 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 16824 "report.c"
    return report__succeeded;
#line 16826 "report.c"
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
#line 16855 "report.c"
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
#line 16877 "report.c"
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

#line 16944 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 366 "report.m"
        if (report__succeeded)
#line 366 "report.m"
          {
#line 16950 "report.c"
            report__TypeInfo_9_9 = (MR_Word) &report_scalar_common_2[20];
#line 16952 "report.c"
            {
#line 16954 "report.c"
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
#line 16992 "report.c"
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
#line 17014 "report.c"
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

#line 17084 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 627 "report.m"
        if (report__succeeded)
#line 17088 "report.c"
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
#line 17123 "report.c"
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

#line 17181 "report.c"
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
#line 17216 "report.c"
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
#line 17270 "report.c"
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
#line 17290 "report.c"
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
#line 17310 "report.c"
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
#line 17330 "report.c"
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
#line 17350 "report.c"
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
#line 17370 "report.c"
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
#line 17390 "report.c"
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
#line 17410 "report.c"
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
#line 17430 "report.c"
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

#line 17539 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_13_13) == 0);
#line 110 "report.m"
        if (report__succeeded)
#line 110 "report.m"
          {
#line 17545 "report.c"
            report__succeeded = (report__V_4_4 == report__V_14_14);
#line 110 "report.m"
            if (report__succeeded)
#line 110 "report.m"
              {
#line 17551 "report.c"
                report__succeeded = (report__V_5_5 == report__V_15_15);
#line 110 "report.m"
                if (report__succeeded)
#line 110 "report.m"
                  {
#line 17557 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_16_16);
#line 110 "report.m"
                    if (report__succeeded)
#line 110 "report.m"
                      {
#line 17563 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_17_17);
#line 110 "report.m"
                        if (report__succeeded)
#line 110 "report.m"
                          {
#line 17569 "report.c"
                            report__succeeded = (report__V_8_8 == report__V_18_18);
#line 110 "report.m"
                            if (report__succeeded)
#line 110 "report.m"
                              {
#line 17575 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_19_19);
#line 110 "report.m"
                                if (report__succeeded)
#line 110 "report.m"
                                  {
#line 17581 "report.c"
                                    report__succeeded = (report__V_10_10 == report__V_20_20);
#line 110 "report.m"
                                    if (report__succeeded)
#line 110 "report.m"
                                      {
#line 17587 "report.c"
                                        report__succeeded = (report__V_11_11 == report__V_21_21);
#line 110 "report.m"
                                        if (report__succeeded)
#line 17591 "report.c"
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
#line 17659 "report.c"
  {
#line 17661 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 17664 "report.c"
    return report__succeeded;
#line 17666 "report.c"
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
#line 17695 "report.c"
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
#line 17761 "report.c"
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
#line 17781 "report.c"
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
#line 17801 "report.c"
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
#line 17821 "report.c"
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
#line 17841 "report.c"
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
#line 17861 "report.c"
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
#line 17881 "report.c"
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
#line 17901 "report.c"
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
#line 17921 "report.c"
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
#line 17941 "report.c"
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
#line 17961 "report.c"
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
#line 17981 "report.c"
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

#line 18108 "report.c"
        report__succeeded = (report__V_3_3 == report__V_16_16);
#line 579 "report.m"
        if (report__succeeded)
#line 579 "report.m"
          {
#line 18114 "report.c"
            {
#line 18116 "report.c"
              report__succeeded = measurement_units____Unify____time_0_0(report__V_4_4, report__V_17_17);
            }
#line 579 "report.m"
            if (report__succeeded)
#line 579 "report.m"
              {
#line 18123 "report.c"
                {
#line 18125 "report.c"
                  report__succeeded = measurement_units____Unify____percent_0_0(report__V_5_5, report__V_18_18);
                }
#line 579 "report.m"
                if (report__succeeded)
#line 579 "report.m"
                  {
#line 18132 "report.c"
                    {
#line 18134 "report.c"
                      report__succeeded = measurement_units____Unify____time_0_0(report__V_6_6, report__V_19_19);
                    }
#line 579 "report.m"
                    if (report__succeeded)
#line 579 "report.m"
                      {
#line 18141 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_20_20);
#line 579 "report.m"
                        if (report__succeeded)
#line 579 "report.m"
                          {
#line 18147 "report.c"
                            {
#line 18149 "report.c"
                              report__succeeded = measurement_units____Unify____percent_0_0(report__V_8_8, report__V_21_21);
                            }
#line 579 "report.m"
                            if (report__succeeded)
#line 579 "report.m"
                              {
#line 18156 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_22_22);
#line 579 "report.m"
                                if (report__succeeded)
#line 579 "report.m"
                                  {
#line 18162 "report.c"
                                    report__succeeded = (report__V_10_10 == report__V_23_23);
#line 579 "report.m"
                                    if (report__succeeded)
#line 579 "report.m"
                                      {
#line 18168 "report.c"
                                        {
#line 18170 "report.c"
                                          report__succeeded = measurement_units____Unify____percent_0_0(report__V_11_11, report__V_24_24);
                                        }
#line 579 "report.m"
                                        if (report__succeeded)
#line 579 "report.m"
                                          {
#line 18177 "report.c"
                                            report__succeeded = (report__V_12_12 == report__V_25_25);
#line 579 "report.m"
                                            if (report__succeeded)
#line 579 "report.m"
                                              {
#line 18183 "report.c"
                                                {
#line 18185 "report.c"
                                                  report__succeeded = measurement_units____Unify____memory_0_0(report__V_13_13, report__V_26_26);
                                                }
#line 579 "report.m"
                                                if (report__succeeded)
#line 579 "report.m"
                                                  {
#line 18192 "report.c"
                                                    {
#line 18194 "report.c"
                                                      report__succeeded = measurement_units____Unify____percent_0_0(report__V_14_14, report__V_27_27);
                                                    }
#line 579 "report.m"
                                                    if (report__succeeded)
#line 18199 "report.c"
                                                      {
#line 18201 "report.c"
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
#line 18391 "report.c"
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
#line 18424 "report.c"
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
#line 18444 "report.c"
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
#line 18469 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "report.m"
            else
#line 18473 "report.c"
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
#line 18488 "report.c"
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
#line 18510 "report.c"
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
#line 18523 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "report.m"
            else
#line 343 "report.m"
              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 18529 "report.c"
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
#line 18613 "report.c"
              {
#line 18615 "report.c"
                report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_I_15, report__V_3_3, report__V_6_6);
              }
#line 343 "report.m"
              if (report__succeeded)
#line 343 "report.m"
                {
#line 18622 "report.c"
                  {
#line 18624 "report.c"
                    report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_I_15, report__V_4_4, report__V_7_7);
                  }
#line 343 "report.m"
                  if (report__succeeded)
#line 18629 "report.c"
                    {
#line 18631 "report.c"
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
#line 18659 "report.c"
                {
#line 18661 "report.c"
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
#line 18685 "report.c"
                {
#line 18687 "report.c"
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

#line 18787 "report.c"
    {
#line 18789 "report.c"
      report__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 18791 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 18793 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_10_10, 1) = ((MR_Box) (&report__report__type_ctor_info_field_name_0));
#line 18795 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_10_10, 2) = ((MR_Box) (report__TypeInfo_for_T_6));
#line 18797 "report.c"
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

#line 18833 "report.c"
    {
#line 18835 "report.c"
      report__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 18837 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 18839 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_9_9, 1) = ((MR_Box) (&report__report__type_ctor_info_field_name_0));
#line 18841 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_9_9, 2) = ((MR_Box) (report__TypeInfo_for_T_5));
#line 18843 "report.c"
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
#line 18960 "report.c"
  {
#line 18962 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 18965 "report.c"
    return report__succeeded;
#line 18967 "report.c"
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
#line 18996 "report.c"
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

#line 19054 "report.c"
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
#line 19089 "report.c"
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
#line 19114 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "report.m"
        else
#line 43 "report.m"
          {
#line 43 "report.m"
            report__succeeded = (report__V_4_4 > report__V_5_5);
#line 43 "report.m"
            if (report__succeeded)
#line 19124 "report.c"
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
#line 19152 "report.c"
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
#line 19186 "report.c"
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
#line 19258 "report.c"
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
#line 19292 "report.c"
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
#line 19326 "report.c"
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
#line 19360 "report.c"
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
#line 19394 "report.c"
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
#line 19428 "report.c"
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
#line 19462 "report.c"
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
#line 19496 "report.c"
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
#line 19530 "report.c"
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
#line 19564 "report.c"
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
#line 19598 "report.c"
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
#line 19632 "report.c"
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
#line 19666 "report.c"
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
#line 19700 "report.c"
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
#line 19734 "report.c"
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
#line 19766 "report.c"
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
#line 19819 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 2;
#line 43 "report.m"
    else
#line 43 "report.m"
      if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 19825 "report.c"
        *report__HeadVar__2_2 = (MR_Integer) 1;
#line 43 "report.m"
      else
#line 43 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 19831 "report.c"
          *report__HeadVar__2_2 = (MR_Integer) 0;
#line 43 "report.m"
        else
#line 43 "report.m"
          if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 19837 "report.c"
            *report__HeadVar__2_2 = (MR_Integer) 16;
#line 43 "report.m"
          else
#line 43 "report.m"
            if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 19843 "report.c"
              *report__HeadVar__2_2 = (MR_Integer) 18;
#line 43 "report.m"
            else
#line 43 "report.m"
              if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 19849 "report.c"
                *report__HeadVar__2_2 = (MR_Integer) 15;
#line 43 "report.m"
              else
#line 43 "report.m"
                if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 19855 "report.c"
                  *report__HeadVar__2_2 = (MR_Integer) 17;
#line 43 "report.m"
                else
#line 43 "report.m"
                  if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 19861 "report.c"
                    *report__HeadVar__2_2 = (MR_Integer) 3;
#line 43 "report.m"
                  else
#line 43 "report.m"
                    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 19867 "report.c"
                      *report__HeadVar__2_2 = (MR_Integer) 6;
#line 43 "report.m"
                    else
#line 43 "report.m"
                      if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 19873 "report.c"
                        *report__HeadVar__2_2 = (MR_Integer) 7;
#line 43 "report.m"
                      else
#line 43 "report.m"
                        if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 19879 "report.c"
                          *report__HeadVar__2_2 = (MR_Integer) 8;
#line 43 "report.m"
                        else
#line 43 "report.m"
                          if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 19885 "report.c"
                            *report__HeadVar__2_2 = (MR_Integer) 10;
#line 43 "report.m"
                          else
#line 43 "report.m"
                            if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 19891 "report.c"
                              *report__HeadVar__2_2 = (MR_Integer) 12;
#line 43 "report.m"
                            else
#line 43 "report.m"
                              if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 19897 "report.c"
                                *report__HeadVar__2_2 = (MR_Integer) 14;
#line 43 "report.m"
                              else
#line 43 "report.m"
                                if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 19903 "report.c"
                                  *report__HeadVar__2_2 = (MR_Integer) 13;
#line 43 "report.m"
                                else
#line 43 "report.m"
                                  if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 19909 "report.c"
                                    *report__HeadVar__2_2 = (MR_Integer) 11;
#line 43 "report.m"
                                  else
#line 43 "report.m"
                                    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 19915 "report.c"
                                      *report__HeadVar__2_2 = (MR_Integer) 5;
#line 43 "report.m"
                                    else
#line 43 "report.m"
                                      if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 19921 "report.c"
                                        *report__HeadVar__2_2 = (MR_Integer) 4;
#line 43 "report.m"
                                      else
#line 19925 "report.c"
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
#line 19977 "report.c"
              report__TypeInfo_46_46 = (MR_Word) &report_scalar_common_2[1];
#line 19979 "report.c"
              {
#line 19981 "report.c"
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
#line 20009 "report.c"
                report__TypeInfo_49_49 = (MR_Word) &report_scalar_common_2[0];
#line 20011 "report.c"
                {
#line 20013 "report.c"
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

#line 20062 "report.c"
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
#line 20091 "report.c"
                    report__TypeInfo_43_43 = (MR_Word) &report_scalar_common_2[15];
#line 20093 "report.c"
                    {
#line 20095 "report.c"
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
#line 20123 "report.c"
                      report__TypeInfo_44_44 = (MR_Word) &report_scalar_common_2[17];
#line 20125 "report.c"
                      {
#line 20127 "report.c"
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
#line 20155 "report.c"
                        report__TypeInfo_45_45 = (MR_Word) &report_scalar_common_2[14];
#line 20157 "report.c"
                        {
#line 20159 "report.c"
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
#line 20187 "report.c"
                          report__TypeInfo_47_47 = (MR_Word) &report_scalar_common_2[16];
#line 20189 "report.c"
                          {
#line 20191 "report.c"
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
#line 20219 "report.c"
                            report__TypeInfo_48_48 = (MR_Word) &report_scalar_common_2[2];
#line 20221 "report.c"
                            {
#line 20223 "report.c"
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
#line 20251 "report.c"
                              report__TypeInfo_50_50 = (MR_Word) &report_scalar_common_2[5];
#line 20253 "report.c"
                              {
#line 20255 "report.c"
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
#line 20283 "report.c"
                                report__TypeInfo_51_51 = (MR_Word) &report_scalar_common_2[6];
#line 20285 "report.c"
                                {
#line 20287 "report.c"
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
#line 20315 "report.c"
                                  report__TypeInfo_52_52 = (MR_Word) &report_scalar_common_2[7];
#line 20317 "report.c"
                                  {
#line 20319 "report.c"
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
#line 20347 "report.c"
                                    report__TypeInfo_53_53 = (MR_Word) &report_scalar_common_2[9];
#line 20349 "report.c"
                                    {
#line 20351 "report.c"
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
#line 20379 "report.c"
                                      report__TypeInfo_54_54 = (MR_Word) &report_scalar_common_2[11];
#line 20381 "report.c"
                                      {
#line 20383 "report.c"
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
#line 20411 "report.c"
                                        report__TypeInfo_55_55 = (MR_Word) &report_scalar_common_2[13];
#line 20413 "report.c"
                                        {
#line 20415 "report.c"
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
#line 20443 "report.c"
                                          report__TypeInfo_56_56 = (MR_Word) &report_scalar_common_2[12];
#line 20445 "report.c"
                                          {
#line 20447 "report.c"
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
#line 20475 "report.c"
                                            report__TypeInfo_57_57 = (MR_Word) &report_scalar_common_2[10];
#line 20477 "report.c"
                                            {
#line 20479 "report.c"
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
#line 20507 "report.c"
                                              report__TypeInfo_58_58 = (MR_Word) &report_scalar_common_2[4];
#line 20509 "report.c"
                                              {
#line 20511 "report.c"
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
#line 20539 "report.c"
                                                report__TypeInfo_59_59 = (MR_Word) &report_scalar_common_2[3];
#line 20541 "report.c"
                                                {
#line 20543 "report.c"
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
#line 20569 "report.c"
                                                report__TypeInfo_60_60 = (MR_Word) &report_scalar_common_2[8];
#line 20571 "report.c"
                                                {
#line 20573 "report.c"
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
#line 20611 "report.c"
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

#line 20669 "report.c"
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
#line 20704 "report.c"
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
#line 20734 "report.c"
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
#line 20754 "report.c"
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

#line 20833 "report.c"
        report__succeeded = (report__V_14_14 == report__V_15_15);
#line 129 "report.m"
        if (report__succeeded)
#line 129 "report.m"
          {
#line 20839 "report.c"
            report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[15];
#line 20841 "report.c"
            {
#line 20843 "report.c"
              report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
            }
#line 129 "report.m"
            if (report__succeeded)
#line 129 "report.m"
              {
#line 20850 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[16];
#line 20852 "report.c"
                {
#line 20854 "report.c"
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
#line 20894 "report.c"
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
#line 20924 "report.c"
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
#line 20944 "report.c"
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

#line 21015 "report.c"
        report__succeeded = (report__V_12_12 == report__V_13_13);
#line 210 "report.m"
        if (report__succeeded)
#line 210 "report.m"
          {
#line 21021 "report.c"
            {
#line 21023 "report.c"
              report__succeeded = report____Unify____recursion_type_0_0(report__V_4_4, report__V_7_7);
            }
#line 210 "report.m"
            if (report__succeeded)
#line 21028 "report.c"
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
#line 21065 "report.c"
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
#line 21091 "report.c"
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
#line 21111 "report.c"
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

#line 21184 "report.c"
        {
#line 21186 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_proc_desc_0, report__V_3_3, report__V_6_6);
        }
#line 148 "report.m"
        if (report__succeeded)
#line 148 "report.m"
          {
#line 21193 "report.c"
            {
#line 21195 "report.c"
              report__succeeded = report____Unify____clique_proc_dynamic_report_0_0(report__V_4_4, report__V_7_7);
            }
#line 148 "report.m"
            if (report__succeeded)
#line 148 "report.m"
              {
#line 21202 "report.c"
                report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[13];
#line 21204 "report.c"
                {
#line 21206 "report.c"
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
#line 21246 "report.c"
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
#line 21268 "report.c"
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

#line 21335 "report.c"
        {
#line 21337 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_proc_desc_0, report__V_3_3, report__V_5_5);
        }
#line 181 "report.m"
        if (report__succeeded)
#line 181 "report.m"
          {
#line 21344 "report.c"
            report__TypeInfo_10_10 = (MR_Word) &report_scalar_common_1[12];
#line 21346 "report.c"
            {
#line 21348 "report.c"
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
#line 21386 "report.c"
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
#line 21412 "report.c"
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
#line 21436 "report.c"
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

#line 21513 "report.c"
        {
#line 21515 "report.c"
          report__succeeded = report____Unify____clique_desc_0_0(report__V_3_3, report__V_6_6);
        }
#line 536 "report.m"
        if (report__succeeded)
#line 536 "report.m"
          {
#line 21522 "report.c"
            report__V_13_13 = (MR_Integer) report__V_4_4;
#line 21524 "report.c"
            report__V_14_14 = (MR_Integer) report__V_7_7;
#line 21526 "report.c"
            report__succeeded = (report__V_13_13 == report__V_14_14);
#line 536 "report.m"
            if (report__succeeded)
#line 536 "report.m"
              {
#line 21532 "report.c"
                report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[11];
#line 21534 "report.c"
                {
#line 21536 "report.c"
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
#line 21576 "report.c"
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
#line 21606 "report.c"
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
#line 21626 "report.c"
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

#line 21703 "report.c"
        report__succeeded = (report__V_13_13 == report__V_14_14);
#line 693 "report.m"
        if (report__succeeded)
#line 693 "report.m"
          {
#line 21709 "report.c"
            {
#line 21711 "report.c"
              report__succeeded = report____Unify____proc_desc_0_0(report__V_4_4, report__V_7_7);
            }
#line 693 "report.m"
            if (report__succeeded)
#line 693 "report.m"
              {
#line 21718 "report.c"
                report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[10];
#line 21720 "report.c"
                {
#line 21722 "report.c"
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
#line 21762 "report.c"
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
#line 21788 "report.c"
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
#line 21808 "report.c"
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

#line 21883 "report.c"
        {
#line 21885 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, report__V_3_3, report__V_6_6);
        }
#line 192 "report.m"
        if (report__succeeded)
#line 192 "report.m"
          {
#line 21892 "report.c"
            report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[7];
#line 21894 "report.c"
            {
#line 21896 "report.c"
              report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
            }
#line 192 "report.m"
            if (report__succeeded)
#line 192 "report.m"
              {
#line 21903 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[9];
#line 21905 "report.c"
                {
#line 21907 "report.c"
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
#line 21947 "report.c"
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
#line 21969 "report.c"
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

#line 22030 "report.c"
        report__succeeded = (report__V_3_3 == report__V_5_5);
#line 404 "report.m"
        if (report__succeeded)
#line 22034 "report.c"
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
#line 22069 "report.c"
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
#line 22111 "report.c"
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
#line 22135 "report.c"
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
#line 22155 "report.c"
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
#line 22175 "report.c"
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
#line 22195 "report.c"
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

#line 22294 "report.c"
        report__succeeded = (report__V_5_5 == report__V_11_11);
#line 518 "report.m"
        if (report__succeeded)
#line 518 "report.m"
          {
#line 22300 "report.c"
            report__succeeded = (report__V_6_6 == report__V_12_12);
#line 518 "report.m"
            if (report__succeeded)
#line 518 "report.m"
              {
#line 22306 "report.c"
                report__V_21_21 = (MR_Integer) report__V_3_3;
#line 22308 "report.c"
                report__V_22_22 = (MR_Integer) report__V_9_9;
#line 22310 "report.c"
                report__succeeded = (report__V_21_21 == report__V_22_22);
#line 518 "report.m"
                if (report__succeeded)
#line 518 "report.m"
                  {
#line 22316 "report.c"
                    report__V_23_23 = (MR_Integer) report__V_4_4;
#line 22318 "report.c"
                    report__V_24_24 = (MR_Integer) report__V_10_10;
#line 22320 "report.c"
                    report__succeeded = (report__V_23_23 == report__V_24_24);
#line 518 "report.m"
                    if (report__succeeded)
#line 518 "report.m"
                      {
#line 22326 "report.c"
                        {
#line 22328 "report.c"
                          report__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(report__V_7_7, report__V_13_13);
                        }
#line 518 "report.m"
                        if (report__succeeded)
#line 518 "report.m"
                          {
#line 22335 "report.c"
                            report__TypeInfo_20_20 = (MR_Word) &report_scalar_common_1[6];
#line 22337 "report.c"
                            {
#line 22339 "report.c"
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
#line 22385 "report.c"
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
#line 22411 "report.c"
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
#line 22431 "report.c"
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

#line 22506 "report.c"
        {
#line 22508 "report.c"
          report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &report_scalar_common_1[3], ((MR_Box) (report__V_3_3)), ((MR_Box) (report__V_6_6)));
        }
#line 410 "report.m"
        if (report__succeeded)
#line 410 "report.m"
          {
#line 22515 "report.c"
            report__TypeCtorInfo_12_12 = (MR_Word) &report__report__type_ctor_info_call_site_desc_0;
#line 22517 "report.c"
            {
#line 22519 "report.c"
              report__succeeded = report____Unify____perf_row_data_1_0(report__TypeCtorInfo_12_12, report__V_4_4, report__V_7_7);
            }
#line 410 "report.m"
            if (report__succeeded)
#line 410 "report.m"
              {
#line 22526 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[5];
#line 22528 "report.c"
                {
#line 22530 "report.c"
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
#line 22570 "report.c"
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
#line 22592 "report.c"
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

#line 22659 "report.c"
        report__succeeded = (report__V_3_3 == report__V_5_5);
#line 543 "report.m"
        if (report__succeeded)
#line 543 "report.m"
          {
#line 22665 "report.c"
            report__TypeInfo_9_9 = (MR_Word) &report_scalar_common_1[2];
#line 22667 "report.c"
            {
#line 22669 "report.c"
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
#line 22707 "report.c"
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
#line 22741 "report.c"
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
#line 22765 "report.c"
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
#line 22789 "report.c"
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

#line 22880 "report.c"
        report__succeeded = (report__V_17_17 == report__V_18_18);
#line 528 "report.m"
        if (report__succeeded)
#line 528 "report.m"
          {
#line 22886 "report.c"
            report__V_19_19 = (MR_Integer) report__V_4_4;
#line 22888 "report.c"
            report__V_20_20 = (MR_Integer) report__V_8_8;
#line 22890 "report.c"
            report__succeeded = (report__V_19_19 == report__V_20_20);
#line 528 "report.m"
            if (report__succeeded)
#line 528 "report.m"
              {
#line 22896 "report.c"
                report__V_21_21 = (MR_Integer) report__V_5_5;
#line 22898 "report.c"
                report__V_22_22 = (MR_Integer) report__V_9_9;
#line 22900 "report.c"
                report__succeeded = (report__V_21_21 == report__V_22_22);
#line 528 "report.m"
                if (report__succeeded)
#line 528 "report.m"
                  {
#line 22906 "report.c"
                    report__TypeCtorInfo_16_16 = (MR_Word) &report__report__type_ctor_info_call_site_desc_0;
#line 22908 "report.c"
                    {
#line 22910 "report.c"
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
#line 22952 "report.c"
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
#line 23010 "report.c"
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
#line 23034 "report.c"
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
#line 23054 "report.c"
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
#line 23074 "report.c"
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
#line 23094 "report.c"
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
#line 23114 "report.c"
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
#line 23134 "report.c"
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
#line 23154 "report.c"
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
#line 23174 "report.c"
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

#line 23297 "report.c"
        report__succeeded = (strcmp(report__V_5_5, report__V_15_15) == 0);
#line 663 "report.m"
        if (report__succeeded)
#line 663 "report.m"
          {
#line 23303 "report.c"
            report__succeeded = (report__V_6_6 == report__V_16_16);
#line 663 "report.m"
            if (report__succeeded)
#line 663 "report.m"
              {
#line 23309 "report.c"
                report__succeeded = (strcmp(report__V_7_7, report__V_17_17) == 0);
#line 663 "report.m"
                if (report__succeeded)
#line 663 "report.m"
                  {
#line 23315 "report.c"
                    report__succeeded = (strcmp(report__V_8_8, report__V_18_18) == 0);
#line 663 "report.m"
                    if (report__succeeded)
#line 663 "report.m"
                      {
#line 23321 "report.c"
                        report__succeeded = (strcmp(report__V_9_9, report__V_19_19) == 0);
#line 663 "report.m"
                        if (report__succeeded)
#line 663 "report.m"
                          {
#line 23327 "report.c"
                            report__succeeded = (report__V_10_10 == report__V_20_20);
#line 663 "report.m"
                            if (report__succeeded)
#line 663 "report.m"
                              {
#line 23333 "report.c"
                                report__V_29_29 = (MR_Integer) report__V_3_3;
#line 23335 "report.c"
                                report__V_30_30 = (MR_Integer) report__V_13_13;
#line 23337 "report.c"
                                report__succeeded = (report__V_29_29 == report__V_30_30);
#line 663 "report.m"
                                if (report__succeeded)
#line 663 "report.m"
                                  {
#line 23343 "report.c"
                                    report__V_31_31 = (MR_Integer) report__V_4_4;
#line 23345 "report.c"
                                    report__V_32_32 = (MR_Integer) report__V_14_14;
#line 23347 "report.c"
                                    report__succeeded = (report__V_31_31 == report__V_32_32);
#line 663 "report.m"
                                    if (report__succeeded)
#line 663 "report.m"
                                      {
#line 23353 "report.c"
                                        {
#line 23355 "report.c"
                                          report__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(report__V_11_11, report__V_21_21);
                                        }
#line 663 "report.m"
                                        if (report__succeeded)
#line 663 "report.m"
                                          {
#line 23362 "report.c"
                                            report__TypeInfo_28_28 = (MR_Word) &report_scalar_common_1[0];
#line 23364 "report.c"
                                            {
#line 23366 "report.c"
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
#line 23420 "report.c"
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
#line 23454 "report.c"
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
#line 23478 "report.c"
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
#line 23498 "report.c"
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

#line 23579 "report.c"
        report__succeeded = (report__V_15_15 == report__V_16_16);
#line 677 "report.m"
        if (report__succeeded)
#line 677 "report.m"
          {
#line 23585 "report.c"
            report__V_17_17 = (MR_Integer) report__V_4_4;
#line 23587 "report.c"
            report__V_18_18 = (MR_Integer) report__V_8_8;
#line 23589 "report.c"
            report__succeeded = (report__V_17_17 == report__V_18_18);
#line 677 "report.m"
            if (report__succeeded)
#line 677 "report.m"
              {
#line 23595 "report.c"
                {
#line 23597 "report.c"
                  report__succeeded = report____Unify____proc_desc_0_0(report__V_5_5, report__V_9_9);
                }
#line 677 "report.m"
                if (report__succeeded)
#line 23602 "report.c"
                  {
#line 23604 "report.c"
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
