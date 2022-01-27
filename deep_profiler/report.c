/*
** Automatically generated from `report.m'
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




#line 82 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_ancestor_desc_0_0[4];

#line 85 "report.c"
static const MR_ConstString report__report__field_names_ancestor_desc_0_0[4];

#line 88 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_ancestor_desc_0_0;

#line 91 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_ancestor_desc_0_0[1];

#line 94 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_ancestor_desc_0[1];

#line 97 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_ancestor_desc_0[1];

#line 100 "report.c"
static const MR_Integer report__report__functor_number_map_ancestor_desc_0[1];

#line 103 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_proc_desc_0;

#line 106 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_desc_0_0[10];

#line 109 "report.c"
static const MR_ConstString report__report__field_names_call_site_desc_0_0[10];

#line 112 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_desc_0_0;

#line 115 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_desc_0_0[1];

#line 118 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_desc_0[1];

#line 121 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_desc_0[1];

#line 124 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_desc_0[1];

#line 127 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0;

#line 130 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_dump_info_0_0[4];

#line 133 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_dump_info_0_0[4];

#line 136 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_dynamic_dump_info_0_0;

#line 139 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_dump_info_0_0[1];

#line 142 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_dump_info_0[1];

#line 145 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_dump_info_0[1];

#line 148 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_dump_info_0[1];

#line 151 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_var_use_and_name_0;

#line 154 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_var_use_info_0_0[2];

#line 157 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_var_use_info_0_0[2];

#line 160 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_dynamic_var_use_info_0_0;

#line 163 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_var_use_info_0_0[1];

#line 166 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_var_use_info_0[1];

#line 169 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_var_use_info_0[1];

#line 172 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_var_use_info_0[1];

#line 175 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_info_1report__type_ctor_info_normal_callee_id_0;

#line 178 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0;

#line 181 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0;

#line 184 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_perf_0_0[3];

#line 187 "report.c"
static const MR_ConstString report__report__field_names_call_site_perf_0_0[3];

#line 190 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_perf_0_0;

#line 193 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_perf_0_0[1];

#line 196 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_perf_0[1];

#line 199 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_perf_0[1];

#line 202 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_perf_0[1];

#line 205 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0;

#line 208 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_static_dump_info_0_0[6];

#line 211 "report.c"
static const MR_ConstString report__report__field_names_call_site_static_dump_info_0_0[6];

#line 214 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_call_site_static_dump_info_0_0;

#line 217 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_static_dump_info_0_0[1];

#line 220 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_static_dump_info_0[1];

#line 223 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_static_dump_info_0[1];

#line 226 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_static_dump_info_0[1];

#line 229 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_callers_counts_0_0[2];

#line 232 "report.c"
static const MR_ConstString report__report__field_names_callers_counts_0_0[2];

#line 235 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_callers_counts_0_0;

#line 238 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_callers_counts_0_0[1];

#line 241 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_callers_counts_0[1];

#line 244 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_callers_counts_0[1];

#line 247 "report.c"
static const MR_Integer report__report__functor_number_map_callers_counts_0[1];

#line 250 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1report__type_ctor_info_proc_desc_0;

#line 253 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0;

#line 256 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0;

#line 259 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_call_site_report_0_0[3];

#line 262 "report.c"
static const MR_ConstString report__report__field_names_clique_call_site_report_0_0[3];

#line 265 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_call_site_report_0_0;

#line 268 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_call_site_report_0_0[1];

#line 271 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_call_site_report_0[1];

#line 274 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_call_site_report_0[1];

#line 277 "report.c"
static const MR_Integer report__report__functor_number_map_clique_call_site_report_0[1];

#line 280 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_proc_desc_0;

#line 283 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_desc_0_0[3];

#line 286 "report.c"
static const MR_ConstString report__report__field_names_clique_desc_0_0[3];

#line 289 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_desc_0_0;

#line 292 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_desc_0_0[1];

#line 295 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_desc_0[1];

#line 298 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_desc_0[1];

#line 301 "report.c"
static const MR_Integer report__report__functor_number_map_clique_desc_0[1];

#line 304 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 307 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_dump_info_0_0[3];

#line 310 "report.c"
static const MR_ConstString report__report__field_names_clique_dump_info_0_0[3];

#line 313 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_dump_info_0_0;

#line 316 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_dump_info_0_0[1];

#line 319 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_dump_info_0[1];

#line 322 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_dump_info_0[1];

#line 325 "report.c"
static const MR_Integer report__report__functor_number_map_clique_dump_info_0[1];

#line 328 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_call_site_report_0;

#line 331 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_dynamic_report_0_0[2];

#line 334 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_dynamic_report_0_0[2];

#line 337 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_proc_dynamic_report_0_0;

#line 340 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_dynamic_report_0_0[1];

#line 343 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_dynamic_report_0[1];

#line 346 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_dynamic_report_0[1];

#line 349 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_dynamic_report_0[1];

#line 352 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_dynamic_report_0;

#line 355 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_report_0_0[3];

#line 358 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_report_0_0[3];

#line 361 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_proc_report_0_0;

#line 364 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_report_0_0[1];

#line 367 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_report_0[1];

#line 370 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_report_0[1];

#line 373 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_report_0[1];

#line 376 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_recursion_report_0_0[3];

#line 379 "report.c"
static const MR_ConstString report__report__field_names_clique_recursion_report_0_0[3];

#line 382 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_recursion_report_0_0;

#line 385 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_recursion_report_0_0[1];

#line 388 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_recursion_report_0[1];

#line 391 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_recursion_report_0[1];

#line 394 "report.c"
static const MR_Integer report__report__functor_number_map_clique_recursion_report_0[1];

#line 397 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0;

#line 400 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0;

#line 403 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_report_0;

#line 406 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_report_0_0[3];

#line 409 "report.c"
static const MR_ConstString report__report__field_names_clique_report_0_0[3];

#line 412 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_clique_report_0_0;

#line 415 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_report_0_0[1];

#line 418 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_report_0[1];

#line 421 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_report_0[1];

#line 424 "report.c"
static const MR_Integer report__report__functor_number_map_clique_report_0[1];

#line 427 "report.c"
static const MR_Integer report__report__functor_number_map_data_struct_name_0[1];

#line 430 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_data_struct_name_0;

#line 433 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_0[1];

#line 436 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_0;

#line 439 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_menu_report_0builtin__type_ctor_info_string_0;

#line 442 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_1[1];

#line 445 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_1;

#line 448 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_report_0builtin__type_ctor_info_string_0;

#line 451 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_2[1];

#line 454 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_2;

#line 457 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_recursion_report_0builtin__type_ctor_info_string_0;

#line 460 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_3[1];

#line 463 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_3;

#line 466 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_recursion_types_frequency_report_0builtin__type_ctor_info_string_0;

#line 469 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_4[1];

#line 472 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_4;

#line 475 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_program_modules_report_0builtin__type_ctor_info_string_0;

#line 478 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_5[1];

#line 481 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_5;

#line 484 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_report_0builtin__type_ctor_info_string_0;

#line 487 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_6[1];

#line 490 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_6;

#line 493 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_getter_setters_report_0builtin__type_ctor_info_string_0;

#line 496 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_7[1];

#line 499 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_7;

#line 502 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_rep_report_0builtin__type_ctor_info_string_0;

#line 505 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_8[1];

#line 508 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_8;

#line 511 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_top_procs_report_0builtin__type_ctor_info_string_0;

#line 514 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_9[1];

#line 517 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_9;

#line 520 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_report_0builtin__type_ctor_info_string_0;

#line 523 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_10[1];

#line 526 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_10;

#line 529 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_procrep_coverage_info_0builtin__type_ctor_info_string_0;

#line 532 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_11[1];

#line 535 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_11;

#line 538 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_callers_report_0builtin__type_ctor_info_string_0;

#line 541 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_12[1];

#line 544 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_12;

#line 547 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_static_dump_info_0builtin__type_ctor_info_string_0;

#line 550 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_13[1];

#line 553 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_13;

#line 556 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_dynamic_dump_info_0builtin__type_ctor_info_string_0;

#line 559 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_14[1];

#line 562 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_14;

#line 565 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_static_dump_info_0builtin__type_ctor_info_string_0;

#line 568 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_15[1];

#line 571 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_15;

#line 574 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_dump_info_0builtin__type_ctor_info_string_0;

#line 577 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_16[1];

#line 580 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_16;

#line 583 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_dump_info_0builtin__type_ctor_info_string_0;

#line 586 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_17[1];

#line 589 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_17;

#line 592 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_var_use_info_0builtin__type_ctor_info_string_0;

#line 595 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_18[1];

#line 598 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_deep_report_0_18;

#line 601 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_0[1];

#line 604 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_1[1];

#line 607 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_2[1];

#line 610 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_3[16];

#line 613 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_deep_report_0[4];

#line 616 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_deep_report_0[19];

#line 619 "report.c"
static const MR_Integer report__report__functor_number_map_deep_report_0[19];

#line 622 "report.c"
static const MR_Integer report__report__functor_number_map_field_name_0[1];

#line 625 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_field_name_0;

#line 628 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_0;

#line 631 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_1;

#line 634 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_getter_or_setter_0[2];

#line 637 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_getter_or_setter_0[2];

#line 640 "report.c"
static const MR_Integer report__report__functor_number_map_getter_or_setter_0[2];

#line 643 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1;

#line 646 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__pseudo_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1;

#line 649 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 652 "report.c"
static const MR_FA_TypeInfo_Struct2 report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 655 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 658 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 661 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_0[3];

#line 664 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_0[3];

#line 667 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_gs_field_info_2_0;

#line 670 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_1[1];

#line 673 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_1[1];

#line 676 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_gs_field_info_2_1;

#line 679 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_2[1];

#line 682 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_2[1];

#line 685 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_gs_field_info_2_2;

#line 688 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_0[1];

#line 691 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_1[1];

#line 694 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_2[1];

#line 697 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_gs_field_info_2[3];

#line 700 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_gs_field_info_2[3];

#line 703 "report.c"
static const MR_Integer report__report__functor_number_map_gs_field_info_2[3];

#line 706 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_inheritable_perf_0_0[13];

#line 709 "report.c"
static const MR_ConstString report__report__field_names_inheritable_perf_0_0[13];

#line 712 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_inheritable_perf_0_0;

#line 715 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_inheritable_perf_0_0[1];

#line 718 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_inheritable_perf_0[1];

#line 721 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_inheritable_perf_0[1];

#line 724 "report.c"
static const MR_Integer report__report__functor_number_map_inheritable_perf_0[1];

#line 727 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_0;

#line 730 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_1;

#line 733 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_maybe_have_module_rep_0[2];

#line 736 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_maybe_have_module_rep_0[2];

#line 739 "report.c"
static const MR_Integer report__report__functor_number_map_maybe_have_module_rep_0[2];

#line 742 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_menu_report_0_0[10];

#line 745 "report.c"
static const MR_ConstString report__report__field_names_menu_report_0_0[10];

#line 748 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_menu_report_0_0;

#line 751 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_menu_report_0_0[1];

#line 754 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_menu_report_0[1];

#line 757 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_menu_report_0[1];

#line 760 "report.c"
static const MR_Integer report__report__functor_number_map_menu_report_0[1];

#line 763 "report.c"
static const MR_Integer report__report__functor_number_map_message_report_0[1];

#line 766 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_message_report_0;

#line 769 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_active_0_0[2];

#line 772 "report.c"
static const MR_ConstString report__report__field_names_module_active_0_0[2];

#line 775 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_active_0_0;

#line 778 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_active_0_0[1];

#line 781 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_active_0[1];

#line 784 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_active_0[1];

#line 787 "report.c"
static const MR_Integer report__report__functor_number_map_module_active_0[1];

#line 790 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_getter_setters_report_0_0[2];

#line 793 "report.c"
static const MR_ConstString report__report__field_names_module_getter_setters_report_0_0[2];

#line 796 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_getter_setters_report_0_0;

#line 799 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_getter_setters_report_0_0[1];

#line 802 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_getter_setters_report_0[1];

#line 805 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_getter_setters_report_0[1];

#line 808 "report.c"
static const MR_Integer report__report__functor_number_map_module_getter_setters_report_0[1];

#line 811 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_0;

#line 814 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_1;

#line 817 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_module_is_active_0[2];

#line 820 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_module_is_active_0[2];

#line 823 "report.c"
static const MR_Integer report__report__functor_number_map_module_is_active_0[2];

#line 826 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_rep_report_0_0[2];

#line 829 "report.c"
static const MR_ConstString report__report__field_names_module_rep_report_0_0[2];

#line 832 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_rep_report_0_0;

#line 835 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_rep_report_0_0[1];

#line 838 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_rep_report_0[1];

#line 841 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_rep_report_0[1];

#line 844 "report.c"
static const MR_Integer report__report__functor_number_map_module_rep_report_0[1];

#line 847 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_active_0;

#line 850 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_active_0;

#line 853 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_report_0_0[3];

#line 856 "report.c"
static const MR_ConstString report__report__field_names_module_report_0_0[3];

#line 859 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_module_report_0_0;

#line 862 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_report_0_0[1];

#line 865 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_report_0[1];

#line 868 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_report_0[1];

#line 871 "report.c"
static const MR_Integer report__report__functor_number_map_module_report_0[1];

#line 874 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_normal_callee_id_0_0[2];

#line 877 "report.c"
static const MR_ConstString report__report__field_names_normal_callee_id_0_0[2];

#line 880 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_normal_callee_id_0_0;

#line 883 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_normal_callee_id_0_0[1];

#line 886 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_normal_callee_id_0[1];

#line 889 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_normal_callee_id_0[1];

#line 892 "report.c"
static const MR_Integer report__report__functor_number_map_normal_callee_id_0[1];

#line 895 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_inheritable_perf_0;

#line 898 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_perf_row_data_1_0[9];

#line 901 "report.c"
static const MR_ConstString report__report__field_names_perf_row_data_1_0[9];

#line 904 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_perf_row_data_1_0;

#line 907 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_perf_row_data_1_0[1];

#line 910 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_perf_row_data_1[1];

#line 913 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_perf_row_data_1[1];

#line 916 "report.c"
static const MR_Integer report__report__functor_number_map_perf_row_data_1[1];

#line 919 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_active_0_0[2];

#line 922 "report.c"
static const MR_ConstString report__report__field_names_proc_active_0_0[2];

#line 925 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_active_0_0;

#line 928 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_active_0_0[1];

#line 931 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_active_0[1];

#line 934 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_active_0[1];

#line 937 "report.c"
static const MR_Integer report__report__functor_number_map_proc_active_0[1];

#line 940 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0;

#line 943 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_0[1];

#line 946 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_0[1];

#line 949 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_0;

#line 952 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_1[1];

#line 955 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_1[1];

#line 958 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_1;

#line 961 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1builtin__type_ctor_info_string_0;

#line 964 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1builtin__type_ctor_info_string_0;

#line 967 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_2[1];

#line 970 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_2[1];

#line 973 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_2;

#line 976 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_3[1];

#line 979 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_3[1];

#line 982 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_0_3;

#line 985 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_0[1];

#line 988 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_1[1];

#line 991 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_2[1];

#line 994 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_3[1];

#line 997 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_callers_0[4];

#line 1000 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_0[4];

#line 1003 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_0[4];

#line 1006 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 1009 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_report_0_0[6];

#line 1012 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_report_0_0[6];

#line 1015 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_callers_report_0_0;

#line 1018 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_report_0_0[1];

#line 1021 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_callers_report_0[1];

#line 1024 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_report_0[1];

#line 1027 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_report_0[1];

#line 1030 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_desc_0_0[6];

#line 1033 "report.c"
static const MR_ConstString report__report__field_names_proc_desc_0_0[6];

#line 1036 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_desc_0_0;

#line 1039 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_desc_0_0[1];

#line 1042 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_desc_0[1];

#line 1045 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_desc_0[1];

#line 1048 "report.c"
static const MR_Integer report__report__functor_number_map_proc_desc_0[1];

#line 1051 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0;

#line 1054 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1coverage__type_ctor_info_coverage_point_0;

#line 1057 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1list__ti_list_1coverage__type_ctor_info_coverage_point_0;

#line 1060 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_dynamic_dump_info_0_0[8];

#line 1063 "report.c"
static const MR_ConstString report__report__field_names_proc_dynamic_dump_info_0_0[8];

#line 1066 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_dynamic_dump_info_0_0;

#line 1069 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_dynamic_dump_info_0_0[1];

#line 1072 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_dynamic_dump_info_0[1];

#line 1075 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_dynamic_dump_info_0[1];

#line 1078 "report.c"
static const MR_Integer report__report__functor_number_map_proc_dynamic_dump_info_0[1];

#line 1081 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_0;

#line 1084 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_1;

#line 1087 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_proc_is_active_0[2];

#line 1090 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_proc_is_active_0[2];

#line 1093 "report.c"
static const MR_Integer report__report__functor_number_map_proc_is_active_0[2];

#line 1096 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_callers_counts_0;

#line 1099 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_call_site_perf_0;

#line 1102 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_report_0_0[3];

#line 1105 "report.c"
static const MR_ConstString report__report__field_names_proc_report_0_0[3];

#line 1108 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_report_0_0;

#line 1111 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_report_0_0[1];

#line 1114 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_report_0[1];

#line 1117 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_report_0[1];

#line 1120 "report.c"
static const MR_Integer report__report__functor_number_map_proc_report_0[1];

#line 1123 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_static_dump_info_0_0[8];

#line 1126 "report.c"
static const MR_ConstString report__report__field_names_proc_static_dump_info_0_0[8];

#line 1129 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_proc_static_dump_info_0_0;

#line 1132 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_static_dump_info_0_0[1];

#line 1135 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_static_dump_info_0[1];

#line 1138 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_static_dump_info_0[1];

#line 1141 "report.c"
static const MR_Integer report__report__functor_number_map_proc_static_dump_info_0[1];

#line 1144 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__program_representation__ti_proc_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 1147 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0;

#line 1150 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_procrep_coverage_info_0_0[3];

#line 1153 "report.c"
static const MR_ConstString report__report__field_names_procrep_coverage_info_0_0[3];

#line 1156 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_procrep_coverage_info_0_0;

#line 1159 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_procrep_coverage_info_0_0[1];

#line 1162 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_procrep_coverage_info_0[1];

#line 1165 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_procrep_coverage_info_0[1];

#line 1168 "report.c"
static const MR_Integer report__report__functor_number_map_procrep_coverage_info_0[1];

#line 1171 "report.c"
static const MR_Integer report__report__functor_number_map_program_modules_report_0[1];

#line 1174 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_module_active_0;

#line 1177 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_module_active_0;

#line 1180 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_program_modules_report_0;

#line 1183 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_level_report_0_0[5];

#line 1186 "report.c"
static const MR_ConstString report__report__field_names_recursion_level_report_0_0[5];

#line 1189 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_level_report_0_0;

#line 1192 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_level_report_0_0[1];

#line 1195 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_level_report_0[1];

#line 1198 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_level_report_0[1];

#line 1201 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_level_report_0[1];

#line 1204 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_0;

#line 1207 "report.c"
static const MR_VA_TypeInfo_Struct2 report____vti_func_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0;

#line 1210 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_1[5];

#line 1213 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_1[5];

#line 1216 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_1;

#line 1219 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_2[2];

#line 1222 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_2[2];

#line 1225 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_2;

#line 1228 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_3[1];

#line 1231 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_3[1];

#line 1234 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_3;

#line 1237 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_recursion_level_report_0;

#line 1240 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_4[1];

#line 1243 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_4[1];

#line 1246 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_4;

#line 1249 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1builtin__type_ctor_info_string_0;

#line 1252 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_5[1];

#line 1255 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_5[1];

#line 1258 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_0_5;

#line 1261 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_0[1];

#line 1264 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_1[1];

#line 1267 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_2[1];

#line 1270 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_3[3];

#line 1273 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_0[4];

#line 1276 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_0[6];

#line 1279 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_0[6];

#line 1282 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 1285 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0report__type_ctor_info_recursion_type_proc_freq_data_0;

#line 1288 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_freq_data_0_0[4];

#line 1291 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_freq_data_0_0[4];

#line 1294 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_freq_data_0_0;

#line 1297 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_freq_data_0_0[1];

#line 1300 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_freq_data_0[1];

#line 1303 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_freq_data_0[1];

#line 1306 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_freq_data_0[1];

#line 1309 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_recursion_type_simple_0report__type_ctor_info_recursion_type_freq_data_0;

#line 1312 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_proc_freq_data_0_0[3];

#line 1315 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_proc_freq_data_0_0[3];

#line 1318 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_proc_freq_data_0_0;

#line 1321 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_proc_freq_data_0_0[1];

#line 1324 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_proc_freq_data_0[1];

#line 1327 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_proc_freq_data_0[1];

#line 1330 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_proc_freq_data_0[1];

#line 1333 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_0;

#line 1336 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_1;

#line 1339 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_2;

#line 1342 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_3[1];

#line 1345 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_3[1];

#line 1348 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_3;

#line 1351 "report.c"
static const MR_FA_TypeInfo_Struct1 report__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 1354 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_4[1];

#line 1357 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_4[1];

#line 1360 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_4;

#line 1363 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_5[1];

#line 1366 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_5[1];

#line 1369 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_5;

#line 1372 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_recursion_type_simple_0_6;

#line 1375 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_0[4];

#line 1378 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_1[1];

#line 1381 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_2[1];

#line 1384 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_3[1];

#line 1387 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_simple_0[4];

#line 1390 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_simple_0[7];

#line 1393 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_simple_0[7];

#line 1396 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_types_frequency_report_0[1];

#line 1399 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_recursion_types_frequency_report_0;

#line 1402 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_report_ordering_0_0[4];

#line 1405 "report.c"
static const MR_ConstString report__report__field_names_report_ordering_0_0[4];

#line 1408 "report.c"
static const MR_DuArgLocn report__report__field_locns_report_ordering_0_0[4];

#line 1411 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_report_ordering_0_0;

#line 1414 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_report_ordering_0_0[1];

#line 1417 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_report_ordering_0[1];

#line 1420 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_report_ordering_0[1];

#line 1423 "report.c"
static const MR_Integer report__report__functor_number_map_report_ordering_0[1];

#line 1426 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_top_procs_report_0_0[2];

#line 1429 "report.c"
static const MR_ConstString report__report__field_names_top_procs_report_0_0[2];

#line 1432 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_top_procs_report_0_0;

#line 1435 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_top_procs_report_0_0[1];

#line 1438 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_top_procs_report_0[1];

#line 1441 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_top_procs_report_0[1];

#line 1444 "report.c"
static const MR_Integer report__report__functor_number_map_top_procs_report_0[1];

#line 1447 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_var_use_and_name_0_0[2];

#line 1450 "report.c"
static const MR_ConstString report__report__field_names_var_use_and_name_0_0[2];

#line 1453 "report.c"
static const MR_DuFunctorDesc report__report__du_functor_desc_var_use_and_name_0_0;

#line 1456 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_var_use_and_name_0_0[1];

#line 1459 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_var_use_and_name_0[1];

#line 1462 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_var_use_and_name_0[1];

#line 1465 "report.c"
static const MR_Integer report__report__functor_number_map_var_use_and_name_0[1];

#line 1468 "report.c"
static MR_bool MR_CALL 
report____Unify____ancestor_desc_0_0_10001(
#line 1471 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1473 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1476 "report.c"
static void MR_CALL 
report____Compare____ancestor_desc_0_0_10001(
#line 1479 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1481 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1483 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1486 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_desc_0_0_10001(
#line 1489 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1491 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1494 "report.c"
static void MR_CALL 
report____Compare____call_site_desc_0_0_10001(
#line 1497 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1499 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1501 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1504 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_dump_info_0_0_10001(
#line 1507 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1509 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1512 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_dump_info_0_0_10001(
#line 1515 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1517 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1519 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1522 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_var_use_info_0_0_10001(
#line 1525 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1527 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1530 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_var_use_info_0_0_10001(
#line 1533 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1535 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1537 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1540 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_perf_0_0_10001(
#line 1543 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1545 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1548 "report.c"
static void MR_CALL 
report____Compare____call_site_perf_0_0_10001(
#line 1551 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1553 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1555 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1558 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_static_dump_info_0_0_10001(
#line 1561 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1563 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1566 "report.c"
static void MR_CALL 
report____Compare____call_site_static_dump_info_0_0_10001(
#line 1569 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1571 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1573 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1576 "report.c"
static MR_bool MR_CALL 
report____Unify____callers_counts_0_0_10001(
#line 1579 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1581 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1584 "report.c"
static void MR_CALL 
report____Compare____callers_counts_0_0_10001(
#line 1587 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1589 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1591 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1594 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_call_site_report_0_0_10001(
#line 1597 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1599 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1602 "report.c"
static void MR_CALL 
report____Compare____clique_call_site_report_0_0_10001(
#line 1605 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1607 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1609 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1612 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_desc_0_0_10001(
#line 1615 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1617 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1620 "report.c"
static void MR_CALL 
report____Compare____clique_desc_0_0_10001(
#line 1623 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1625 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1627 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1630 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_dump_info_0_0_10001(
#line 1633 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1635 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1638 "report.c"
static void MR_CALL 
report____Compare____clique_dump_info_0_0_10001(
#line 1641 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1643 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1645 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1648 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_dynamic_report_0_0_10001(
#line 1651 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1653 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1656 "report.c"
static void MR_CALL 
report____Compare____clique_proc_dynamic_report_0_0_10001(
#line 1659 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1661 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1663 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1666 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_report_0_0_10001(
#line 1669 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1671 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1674 "report.c"
static void MR_CALL 
report____Compare____clique_proc_report_0_0_10001(
#line 1677 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1679 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1681 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1684 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_recursion_report_0_0_10001(
#line 1687 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1689 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1692 "report.c"
static void MR_CALL 
report____Compare____clique_recursion_report_0_0_10001(
#line 1695 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1697 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1699 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1702 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_report_0_0_10001(
#line 1705 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1707 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1710 "report.c"
static void MR_CALL 
report____Compare____clique_report_0_0_10001(
#line 1713 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1715 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1717 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1720 "report.c"
static MR_bool MR_CALL 
report____Unify____data_struct_name_0_0_10001(
#line 1723 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1725 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1728 "report.c"
static void MR_CALL 
report____Compare____data_struct_name_0_0_10001(
#line 1731 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1733 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1735 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1738 "report.c"
static MR_bool MR_CALL 
report____Unify____deep_report_0_0_10001(
#line 1741 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1743 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1746 "report.c"
static void MR_CALL 
report____Compare____deep_report_0_0_10001(
#line 1749 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1751 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1753 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1756 "report.c"
static MR_bool MR_CALL 
report____Unify____field_name_0_0_10001(
#line 1759 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1761 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1764 "report.c"
static void MR_CALL 
report____Compare____field_name_0_0_10001(
#line 1767 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1769 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1771 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1774 "report.c"
static MR_bool MR_CALL 
report____Unify____getter_or_setter_0_0_10001(
#line 1777 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1779 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1782 "report.c"
static void MR_CALL 
report____Compare____getter_or_setter_0_0_10001(
#line 1785 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1787 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1789 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1792 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_1_0_10001(
#line 1795 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1797 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1799 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1802 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_1_0_10001(
#line 1805 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1807 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 1809 "report.c"
  MR_Box report__wrapper_arg_3,
#line 1811 "report.c"
  MR_Box report__wrapper_arg_4);

#line 1814 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_0_0_10001(
#line 1817 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1819 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1822 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_0_0_10001(
#line 1825 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1827 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1829 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1832 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_2_0_10001(
#line 1835 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1837 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1839 "report.c"
  MR_Box report__wrapper_arg_3,
#line 1841 "report.c"
  MR_Box report__wrapper_arg_4);

#line 1844 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_2_0_10001(
#line 1847 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1849 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1851 "report.c"
  MR_Box * report__wrapper_arg_3,
#line 1853 "report.c"
  MR_Box report__wrapper_arg_4,
#line 1855 "report.c"
  MR_Box report__wrapper_arg_5);

#line 1858 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_0_0_10001(
#line 1861 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1863 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1866 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_0_0_10001(
#line 1869 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1871 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1873 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1876 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_1_0_10001(
#line 1879 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1881 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1883 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1886 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_1_0_10001(
#line 1889 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1891 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 1893 "report.c"
  MR_Box report__wrapper_arg_3,
#line 1895 "report.c"
  MR_Box report__wrapper_arg_4);

#line 1898 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_0_0_10001(
#line 1901 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1903 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1906 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_0_0_10001(
#line 1909 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1911 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1913 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1916 "report.c"
static MR_bool MR_CALL 
report____Unify____inheritable_perf_0_0_10001(
#line 1919 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1921 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1924 "report.c"
static void MR_CALL 
report____Compare____inheritable_perf_0_0_10001(
#line 1927 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1929 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1931 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1934 "report.c"
static MR_bool MR_CALL 
report____Unify____maybe_have_module_rep_0_0_10001(
#line 1937 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1939 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1942 "report.c"
static void MR_CALL 
report____Compare____maybe_have_module_rep_0_0_10001(
#line 1945 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1947 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1949 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1952 "report.c"
static MR_bool MR_CALL 
report____Unify____menu_report_0_0_10001(
#line 1955 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1957 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1960 "report.c"
static void MR_CALL 
report____Compare____menu_report_0_0_10001(
#line 1963 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1965 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1967 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1970 "report.c"
static MR_bool MR_CALL 
report____Unify____message_report_0_0_10001(
#line 1973 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1975 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1978 "report.c"
static void MR_CALL 
report____Compare____message_report_0_0_10001(
#line 1981 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 1983 "report.c"
  MR_Box report__wrapper_arg_2,
#line 1985 "report.c"
  MR_Box report__wrapper_arg_3);

#line 1988 "report.c"
static MR_bool MR_CALL 
report____Unify____module_active_0_0_10001(
#line 1991 "report.c"
  MR_Box report__wrapper_arg_1,
#line 1993 "report.c"
  MR_Box report__wrapper_arg_2);

#line 1996 "report.c"
static void MR_CALL 
report____Compare____module_active_0_0_10001(
#line 1999 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2001 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2003 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2006 "report.c"
static MR_bool MR_CALL 
report____Unify____module_getter_setters_report_0_0_10001(
#line 2009 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2011 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2014 "report.c"
static void MR_CALL 
report____Compare____module_getter_setters_report_0_0_10001(
#line 2017 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2019 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2021 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2024 "report.c"
static MR_bool MR_CALL 
report____Unify____module_is_active_0_0_10001(
#line 2027 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2029 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2032 "report.c"
static void MR_CALL 
report____Compare____module_is_active_0_0_10001(
#line 2035 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2037 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2039 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2042 "report.c"
static MR_bool MR_CALL 
report____Unify____module_rep_report_0_0_10001(
#line 2045 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2047 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2050 "report.c"
static void MR_CALL 
report____Compare____module_rep_report_0_0_10001(
#line 2053 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2055 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2057 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2060 "report.c"
static MR_bool MR_CALL 
report____Unify____module_report_0_0_10001(
#line 2063 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2065 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2068 "report.c"
static void MR_CALL 
report____Compare____module_report_0_0_10001(
#line 2071 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2073 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2075 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2078 "report.c"
static MR_bool MR_CALL 
report____Unify____normal_callee_id_0_0_10001(
#line 2081 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2083 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2086 "report.c"
static void MR_CALL 
report____Compare____normal_callee_id_0_0_10001(
#line 2089 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2091 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2093 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2096 "report.c"
static MR_bool MR_CALL 
report____Unify____perf_row_data_1_0_10001(
#line 2099 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2101 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2103 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2106 "report.c"
static void MR_CALL 
report____Compare____perf_row_data_1_0_10001(
#line 2109 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2111 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 2113 "report.c"
  MR_Box report__wrapper_arg_3,
#line 2115 "report.c"
  MR_Box report__wrapper_arg_4);

#line 2118 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_active_0_0_10001(
#line 2121 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2123 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2126 "report.c"
static void MR_CALL 
report____Compare____proc_active_0_0_10001(
#line 2129 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2131 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2133 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2136 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_0_0_10001(
#line 2139 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2141 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2144 "report.c"
static void MR_CALL 
report____Compare____proc_callers_0_0_10001(
#line 2147 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2149 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2151 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2154 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_report_0_0_10001(
#line 2157 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2159 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2162 "report.c"
static void MR_CALL 
report____Compare____proc_callers_report_0_0_10001(
#line 2165 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2167 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2169 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2172 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_desc_0_0_10001(
#line 2175 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2177 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2180 "report.c"
static void MR_CALL 
report____Compare____proc_desc_0_0_10001(
#line 2183 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2185 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2187 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2190 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_dynamic_dump_info_0_0_10001(
#line 2193 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2195 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2198 "report.c"
static void MR_CALL 
report____Compare____proc_dynamic_dump_info_0_0_10001(
#line 2201 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2203 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2205 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2208 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_is_active_0_0_10001(
#line 2211 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2213 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2216 "report.c"
static void MR_CALL 
report____Compare____proc_is_active_0_0_10001(
#line 2219 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2221 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2223 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2226 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_report_0_0_10001(
#line 2229 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2231 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2234 "report.c"
static void MR_CALL 
report____Compare____proc_report_0_0_10001(
#line 2237 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2239 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2241 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2244 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_static_dump_info_0_0_10001(
#line 2247 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2249 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2252 "report.c"
static void MR_CALL 
report____Compare____proc_static_dump_info_0_0_10001(
#line 2255 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2257 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2259 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2262 "report.c"
static MR_bool MR_CALL 
report____Unify____procrep_coverage_info_0_0_10001(
#line 2265 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2267 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2270 "report.c"
static void MR_CALL 
report____Compare____procrep_coverage_info_0_0_10001(
#line 2273 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2275 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2277 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2280 "report.c"
static MR_bool MR_CALL 
report____Unify____program_modules_report_0_0_10001(
#line 2283 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2285 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2288 "report.c"
static void MR_CALL 
report____Compare____program_modules_report_0_0_10001(
#line 2291 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2293 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2295 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2298 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_level_report_0_0_10001(
#line 2301 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2303 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2306 "report.c"
static void MR_CALL 
report____Compare____recursion_level_report_0_0_10001(
#line 2309 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2311 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2313 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2316 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_0_0_10001(
#line 2319 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2321 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2324 "report.c"
static void MR_CALL 
report____Compare____recursion_type_0_0_10001(
#line 2327 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2329 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2331 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2334 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_freq_data_0_0_10001(
#line 2337 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2339 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2342 "report.c"
static void MR_CALL 
report____Compare____recursion_type_freq_data_0_0_10001(
#line 2345 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2347 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2349 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2352 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_histogram_0_0_10001(
#line 2355 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2357 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2360 "report.c"
static void MR_CALL 
report____Compare____recursion_type_histogram_0_0_10001(
#line 2363 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2365 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2367 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2370 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_freq_data_0_0_10001(
#line 2373 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2375 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2378 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_freq_data_0_0_10001(
#line 2381 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2383 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2385 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2388 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_map_0_0_10001(
#line 2391 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2393 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2396 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_map_0_0_10001(
#line 2399 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2401 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2403 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2406 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_simple_0_0_10001(
#line 2409 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2411 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2414 "report.c"
static void MR_CALL 
report____Compare____recursion_type_simple_0_0_10001(
#line 2417 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2419 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2421 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2424 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_types_frequency_report_0_0_10001(
#line 2427 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2429 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2432 "report.c"
static void MR_CALL 
report____Compare____recursion_types_frequency_report_0_0_10001(
#line 2435 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2437 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2439 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2442 "report.c"
static MR_bool MR_CALL 
report____Unify____report_ordering_0_0_10001(
#line 2445 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2447 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2450 "report.c"
static void MR_CALL 
report____Compare____report_ordering_0_0_10001(
#line 2453 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2455 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2457 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2460 "report.c"
static MR_bool MR_CALL 
report____Unify____top_procs_report_0_0_10001(
#line 2463 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2465 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2468 "report.c"
static void MR_CALL 
report____Compare____top_procs_report_0_0_10001(
#line 2471 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2473 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2475 "report.c"
  MR_Box report__wrapper_arg_3);

#line 2478 "report.c"
static MR_bool MR_CALL 
report____Unify____var_use_and_name_0_0_10001(
#line 2481 "report.c"
  MR_Box report__wrapper_arg_1,
#line 2483 "report.c"
  MR_Box report__wrapper_arg_2);

#line 2486 "report.c"
static void MR_CALL 
report____Compare____var_use_and_name_0_0_10001(
#line 2489 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 2491 "report.c"
  MR_Box report__wrapper_arg_2,
#line 2493 "report.c"
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



#line 2871 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_ancestor_desc_0_0[4] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_call_site_desc_0
};

#line 2879 "report.c"
static const MR_ConstString report__report__field_names_ancestor_desc_0_0[4] = {
  (MR_String) "ad_caller_clique_ptr",
  (MR_String) "ad_callee_clique_ptr",
  (MR_String) "ad_callee_pdesc",
  (MR_String) "ad_call_site_desc"
};

#line 2887 "report.c"
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

#line 2902 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_ancestor_desc_0_0[1] = {
  &report__report__du_functor_desc_ancestor_desc_0_0
};

#line 2907 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_ancestor_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_ancestor_desc_0_0
  }
};

#line 2916 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_ancestor_desc_0[1] = {
  &report__report__du_functor_desc_ancestor_desc_0_0
};

#line 2921 "report.c"
static const MR_Integer report__report__functor_number_map_ancestor_desc_0[1] = {
  (MR_Integer) 0
};

#line 2926 "report.c"
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

#line 2947 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_proc_desc_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 2955 "report.c"
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

#line 2969 "report.c"
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

#line 2983 "report.c"
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

#line 2998 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_desc_0_0[1] = {
  &report__report__du_functor_desc_call_site_desc_0_0
};

#line 3003 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_desc_0_0
  }
};

#line 3012 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_desc_0[1] = {
  &report__report__du_functor_desc_call_site_desc_0_0
};

#line 3017 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_desc_0[1] = {
  (MR_Integer) 0
};

#line 3022 "report.c"
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

#line 3043 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_desc_0
  }
};

#line 3051 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_dump_info_0_0[4] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
};

#line 3059 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_dump_info_0_0[4] = {
  (MR_String) "csddi_csdptr",
  (MR_String) "csddi_caller_pdptr",
  (MR_String) "csddi_callee_pdptr",
  (MR_String) "csddi_own_perf"
};

#line 3067 "report.c"
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

#line 3082 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_dump_info_0_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_dump_info_0_0
};

#line 3087 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_dynamic_dump_info_0_0
  }
};

#line 3096 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_dump_info_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_dump_info_0_0
};

#line 3101 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 3106 "report.c"
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

#line 3127 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_var_use_and_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_var_use_and_name_0
  }
};

#line 3135 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_dynamic_var_use_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_var_use_and_name_0
};

#line 3141 "report.c"
static const MR_ConstString report__report__field_names_call_site_dynamic_var_use_info_0_0[2] = {
  (MR_String) "csdvui_total_cost",
  (MR_String) "csdvui_var_uses"
};

#line 3147 "report.c"
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

#line 3162 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_dynamic_var_use_info_0_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_var_use_info_0_0
};

#line 3167 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_dynamic_var_use_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_dynamic_var_use_info_0_0
  }
};

#line 3176 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_dynamic_var_use_info_0[1] = {
  &report__report__du_functor_desc_call_site_dynamic_var_use_info_0_0
};

#line 3181 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_dynamic_var_use_info_0[1] = {
  (MR_Integer) 0
};

#line 3186 "report.c"
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

#line 3207 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_info_1report__type_ctor_info_normal_callee_id_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_info_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_normal_callee_id_0
  }
};

#line 3215 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 3223 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
  }
};

#line 3231 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_perf_0_0[3] = {
  (MR_PseudoTypeInfo) &report__profile__ti_call_site_kind_and_info_1report__type_ctor_info_normal_callee_id_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 3238 "report.c"
static const MR_ConstString report__report__field_names_call_site_perf_0_0[3] = {
  (MR_String) "csf_kind",
  (MR_String) "csf_summary_perf",
  (MR_String) "csf_sub_callees"
};

#line 3245 "report.c"
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

#line 3260 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_perf_0_0[1] = {
  &report__report__du_functor_desc_call_site_perf_0_0
};

#line 3265 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_perf_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_perf_0_0
  }
};

#line 3274 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_perf_0[1] = {
  &report__report__du_functor_desc_call_site_perf_0_0
};

#line 3279 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_perf_0[1] = {
  (MR_Integer) 0
};

#line 3284 "report.c"
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

#line 3305 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 3313 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_call_site_static_dump_info_0_0[6] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &report__profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0
};

#line 3323 "report.c"
static const MR_ConstString report__report__field_names_call_site_static_dump_info_0_0[6] = {
  (MR_String) "cssdi_cssptr",
  (MR_String) "cssdi_containing_psptr",
  (MR_String) "cssdi_slot_number",
  (MR_String) "cssdi_line_number",
  (MR_String) "cssdi_goal_path",
  (MR_String) "cssdi_callee"
};

#line 3333 "report.c"
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

#line 3348 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_call_site_static_dump_info_0_0[1] = {
  &report__report__du_functor_desc_call_site_static_dump_info_0_0
};

#line 3353 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_call_site_static_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_call_site_static_dump_info_0_0
  }
};

#line 3362 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_call_site_static_dump_info_0[1] = {
  &report__report__du_functor_desc_call_site_static_dump_info_0_0
};

#line 3367 "report.c"
static const MR_Integer report__report__functor_number_map_call_site_static_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 3372 "report.c"
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

#line 3393 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_callers_counts_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3399 "report.c"
static const MR_ConstString report__report__field_names_callers_counts_0_0[2] = {
  (MR_String) "cc_static",
  (MR_String) "cc_dynamic"
};

#line 3405 "report.c"
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

#line 3420 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_callers_counts_0_0[1] = {
  &report__report__du_functor_desc_callers_counts_0_0
};

#line 3425 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_callers_counts_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_callers_counts_0_0
  }
};

#line 3434 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_callers_counts_0[1] = {
  &report__report__du_functor_desc_callers_counts_0_0
};

#line 3439 "report.c"
static const MR_Integer report__report__functor_number_map_callers_counts_0[1] = {
  (MR_Integer) 0
};

#line 3444 "report.c"
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

#line 3465 "report.c"
static const MR_FA_TypeInfo_Struct1 report__profile__ti_call_site_kind_and_callee_1report__type_ctor_info_proc_desc_0 = {
  &profile__profile__type_ctor_info_call_site_kind_and_callee_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 3473 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_desc_0
  }
};

#line 3481 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
  }
};

#line 3489 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_call_site_report_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0,
  (MR_PseudoTypeInfo) &report__profile__ti_call_site_kind_and_callee_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
};

#line 3496 "report.c"
static const MR_ConstString report__report__field_names_clique_call_site_report_0_0[3] = {
  (MR_String) "ccsr_call_site_summary",
  (MR_String) "ccsr_kind_and_callee",
  (MR_String) "ccsr_callee_perfs"
};

#line 3503 "report.c"
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

#line 3518 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_call_site_report_0_0[1] = {
  &report__report__du_functor_desc_clique_call_site_report_0_0
};

#line 3523 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_call_site_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_call_site_report_0_0
  }
};

#line 3532 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_call_site_report_0[1] = {
  &report__report__du_functor_desc_clique_call_site_report_0_0
};

#line 3537 "report.c"
static const MR_Integer report__report__functor_number_map_clique_call_site_report_0[1] = {
  (MR_Integer) 0
};

#line 3542 "report.c"
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

#line 3563 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_proc_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 3571 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_desc_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_proc_desc_0
};

#line 3578 "report.c"
static const MR_ConstString report__report__field_names_clique_desc_0_0[3] = {
  (MR_String) "cdesc_clique_ptr",
  (MR_String) "cdesc_entry_member",
  (MR_String) "cdesc_other_members"
};

#line 3585 "report.c"
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

#line 3600 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_desc_0_0[1] = {
  &report__report__du_functor_desc_clique_desc_0_0
};

#line 3605 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_desc_0_0
  }
};

#line 3614 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_desc_0[1] = {
  &report__report__du_functor_desc_clique_desc_0_0
};

#line 3619 "report.c"
static const MR_Integer report__report__functor_number_map_clique_desc_0[1] = {
  (MR_Integer) 0
};

#line 3624 "report.c"
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

#line 3645 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 3653 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_dump_info_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_clique_desc_0,
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
};

#line 3660 "report.c"
static const MR_ConstString report__report__field_names_clique_dump_info_0_0[3] = {
  (MR_String) "cdi_clique_desc",
  (MR_String) "cdi_caller_csd_ptr",
  (MR_String) "cdi_member_pdptrs"
};

#line 3667 "report.c"
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

#line 3682 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_dump_info_0_0[1] = {
  &report__report__du_functor_desc_clique_dump_info_0_0
};

#line 3687 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_dump_info_0_0
  }
};

#line 3696 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_dump_info_0[1] = {
  &report__report__du_functor_desc_clique_dump_info_0_0
};

#line 3701 "report.c"
static const MR_Integer report__report__functor_number_map_clique_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 3706 "report.c"
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

#line 3727 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_call_site_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_call_site_report_0
  }
};

#line 3735 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_dynamic_report_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_clique_call_site_report_0
};

#line 3741 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_dynamic_report_0_0[2] = {
  (MR_String) "cpdr_proc_summary",
  (MR_String) "cpdr_call_sites"
};

#line 3747 "report.c"
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

#line 3762 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_dynamic_report_0_0[1] = {
  &report__report__du_functor_desc_clique_proc_dynamic_report_0_0
};

#line 3767 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_dynamic_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_proc_dynamic_report_0_0
  }
};

#line 3776 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_dynamic_report_0[1] = {
  &report__report__du_functor_desc_clique_proc_dynamic_report_0_0
};

#line 3781 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_dynamic_report_0[1] = {
  (MR_Integer) 0
};

#line 3786 "report.c"
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

#line 3807 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_dynamic_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_proc_dynamic_report_0
  }
};

#line 3815 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_proc_report_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_clique_proc_dynamic_report_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_clique_proc_dynamic_report_0
};

#line 3822 "report.c"
static const MR_ConstString report__report__field_names_clique_proc_report_0_0[3] = {
  (MR_String) "cpr_proc_summary",
  (MR_String) "cpr_first_proc_dynamic",
  (MR_String) "cpr_other_proc_dynamics"
};

#line 3829 "report.c"
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

#line 3844 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_proc_report_0_0[1] = {
  &report__report__du_functor_desc_clique_proc_report_0_0
};

#line 3849 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_proc_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_proc_report_0_0
  }
};

#line 3858 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_proc_report_0[1] = {
  &report__report__du_functor_desc_clique_proc_report_0_0
};

#line 3863 "report.c"
static const MR_Integer report__report__functor_number_map_clique_proc_report_0[1] = {
  (MR_Integer) 0
};

#line 3868 "report.c"
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

#line 3889 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_recursion_report_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3896 "report.c"
static const MR_ConstString report__report__field_names_clique_recursion_report_0_0[3] = {
  (MR_String) "crr_clique_ptr",
  (MR_String) "crr_recursion_type",
  (MR_String) "crr_num_procs"
};

#line 3903 "report.c"
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

#line 3918 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_recursion_report_0_0[1] = {
  &report__report__du_functor_desc_clique_recursion_report_0_0
};

#line 3923 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_recursion_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_recursion_report_0_0
  }
};

#line 3932 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_recursion_report_0[1] = {
  &report__report__du_functor_desc_clique_recursion_report_0_0
};

#line 3937 "report.c"
static const MR_Integer report__report__functor_number_map_clique_recursion_report_0[1] = {
  (MR_Integer) 0
};

#line 3942 "report.c"
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

#line 3963 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_ancestor_desc_0
  }
};

#line 3971 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0
  }
};

#line 3979 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_clique_proc_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_proc_report_0
  }
};

#line 3987 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_clique_report_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_clique_proc_report_0
};

#line 3994 "report.c"
static const MR_ConstString report__report__field_names_clique_report_0_0[3] = {
  (MR_String) "cr_clique_ptr",
  (MR_String) "cr_ancestor_call_sites",
  (MR_String) "cr_clique_procs"
};

#line 4001 "report.c"
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

#line 4016 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_clique_report_0_0[1] = {
  &report__report__du_functor_desc_clique_report_0_0
};

#line 4021 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_clique_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_clique_report_0_0
  }
};

#line 4030 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_clique_report_0[1] = {
  &report__report__du_functor_desc_clique_report_0_0
};

#line 4035 "report.c"
static const MR_Integer report__report__functor_number_map_clique_report_0[1] = {
  (MR_Integer) 0
};

#line 4040 "report.c"
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

#line 4061 "report.c"
static const MR_Integer report__report__functor_number_map_data_struct_name_0[1] = {
  (MR_Integer) 0
};

#line 4066 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_data_struct_name_0 = {
  (MR_String) "data_struct_name",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 4073 "report.c"
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

#line 4094 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_0[1] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_message_report_0
};

#line 4099 "report.c"
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

#line 4114 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_menu_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_menu_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4123 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_1[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_menu_report_0builtin__type_ctor_info_string_0
};

#line 4128 "report.c"
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

#line 4143 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4152 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_2[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_clique_report_0builtin__type_ctor_info_string_0
};

#line 4157 "report.c"
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

#line 4172 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_recursion_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_recursion_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4181 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_3[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_clique_recursion_report_0builtin__type_ctor_info_string_0
};

#line 4186 "report.c"
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

#line 4201 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_recursion_types_frequency_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_types_frequency_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4210 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_4[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_recursion_types_frequency_report_0builtin__type_ctor_info_string_0
};

#line 4215 "report.c"
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

#line 4230 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_program_modules_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_program_modules_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4239 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_5[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_program_modules_report_0builtin__type_ctor_info_string_0
};

#line 4244 "report.c"
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

#line 4259 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4268 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_6[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_module_report_0builtin__type_ctor_info_string_0
};

#line 4273 "report.c"
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

#line 4288 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_getter_setters_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_getter_setters_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4297 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_7[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_module_getter_setters_report_0builtin__type_ctor_info_string_0
};

#line 4302 "report.c"
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

#line 4317 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_module_rep_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_rep_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4326 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_8[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_module_rep_report_0builtin__type_ctor_info_string_0
};

#line 4331 "report.c"
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

#line 4346 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_top_procs_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_top_procs_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4355 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_9[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_top_procs_report_0builtin__type_ctor_info_string_0
};

#line 4360 "report.c"
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

#line 4375 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4384 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_10[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_report_0builtin__type_ctor_info_string_0
};

#line 4389 "report.c"
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

#line 4404 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_procrep_coverage_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_procrep_coverage_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4413 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_11[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_procrep_coverage_info_0builtin__type_ctor_info_string_0
};

#line 4418 "report.c"
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

#line 4433 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_callers_report_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_callers_report_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4442 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_12[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_callers_report_0builtin__type_ctor_info_string_0
};

#line 4447 "report.c"
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

#line 4462 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_static_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_static_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4471 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_13[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_static_dump_info_0builtin__type_ctor_info_string_0
};

#line 4476 "report.c"
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

#line 4491 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_proc_dynamic_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_dynamic_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4500 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_14[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_proc_dynamic_dump_info_0builtin__type_ctor_info_string_0
};

#line 4505 "report.c"
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

#line 4520 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_static_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_static_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4529 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_15[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_static_dump_info_0builtin__type_ctor_info_string_0
};

#line 4534 "report.c"
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

#line 4549 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_dynamic_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4558 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_16[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_dump_info_0builtin__type_ctor_info_string_0
};

#line 4563 "report.c"
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

#line 4578 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_clique_dump_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_clique_dump_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4587 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_17[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_clique_dump_info_0builtin__type_ctor_info_string_0
};

#line 4592 "report.c"
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

#line 4607 "report.c"
static const MR_FA_TypeInfo_Struct2 report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_var_use_info_0builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_dynamic_var_use_info_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4616 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_deep_report_0_18[1] = {
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_error_2report__type_ctor_info_call_site_dynamic_var_use_info_0builtin__type_ctor_info_string_0
};

#line 4621 "report.c"
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

#line 4636 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_0[1] = {
  &report__report__du_functor_desc_deep_report_0_0
};

#line 4641 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_1[1] = {
  &report__report__du_functor_desc_deep_report_0_1
};

#line 4646 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_deep_report_0_2[1] = {
  &report__report__du_functor_desc_deep_report_0_2
};

#line 4651 "report.c"
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

#line 4671 "report.c"
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

#line 4695 "report.c"
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

#line 4718 "report.c"
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

#line 4741 "report.c"
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

#line 4762 "report.c"
static const MR_Integer report__report__functor_number_map_field_name_0[1] = {
  (MR_Integer) 0
};

#line 4767 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_field_name_0 = {
  (MR_String) "field_name",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 4774 "report.c"
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

#line 4795 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_0 = {
  (MR_String) "getter",
  (MR_Integer) 0
};

#line 4801 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_getter_or_setter_0_1 = {
  (MR_String) "setter",
  (MR_Integer) 1
};

#line 4807 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_getter_or_setter_0[2] = {
  &report__report__enum_functor_desc_getter_or_setter_0_0,
  &report__report__enum_functor_desc_getter_or_setter_0_1
};

#line 4813 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_getter_or_setter_0[2] = {
  &report__report__enum_functor_desc_getter_or_setter_0_0,
  &report__report__enum_functor_desc_getter_or_setter_0_1
};

#line 4819 "report.c"
static const MR_Integer report__report__functor_number_map_getter_or_setter_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 4825 "report.c"
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

#line 4846 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 4855 "report.c"
static const MR_FA_PseudoTypeInfo_Struct2 report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__pseudo_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_data_struct_name_0,
    (MR_PseudoTypeInfo) &report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1
  }
};

#line 4864 "report.c"
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

#line 4885 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 4893 "report.c"
static const MR_FA_TypeInfo_Struct2 report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
    (MR_TypeInfo) &report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 4902 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_TypeInfo) &report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 4911 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_data_struct_name_0,
    (MR_TypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 4920 "report.c"
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

#line 4941 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2
};

#line 4948 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_0[3] = {
  (MR_String) "gsf_both_getter",
  (MR_String) "gsf_both_setter",
  (MR_String) "gsf_both_summary"
};

#line 4955 "report.c"
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

#line 4970 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 4975 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_1[1] = {
  (MR_String) "gsf_getter"
};

#line 4980 "report.c"
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

#line 4995 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_gs_field_info_2_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 5000 "report.c"
static const MR_ConstString report__report__field_names_gs_field_info_2_2[1] = {
  (MR_String) "gsf_setter"
};

#line 5005 "report.c"
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

#line 5020 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_0[1] = {
  &report__report__du_functor_desc_gs_field_info_2_0
};

#line 5025 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_1[1] = {
  &report__report__du_functor_desc_gs_field_info_2_1
};

#line 5030 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_gs_field_info_2_2[1] = {
  &report__report__du_functor_desc_gs_field_info_2_2
};

#line 5035 "report.c"
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

#line 5054 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_gs_field_info_2[3] = {
  &report__report__du_functor_desc_gs_field_info_2_0,
  &report__report__du_functor_desc_gs_field_info_2_1,
  &report__report__du_functor_desc_gs_field_info_2_2
};

#line 5061 "report.c"
static const MR_Integer report__report__functor_number_map_gs_field_info_2[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 5068 "report.c"
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

#line 5089 "report.c"
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

#line 5110 "report.c"
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

#line 5131 "report.c"
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

#line 5152 "report.c"
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

#line 5169 "report.c"
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

#line 5186 "report.c"
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

#line 5201 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_inheritable_perf_0_0[1] = {
  &report__report__du_functor_desc_inheritable_perf_0_0
};

#line 5206 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_inheritable_perf_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_inheritable_perf_0_0
  }
};

#line 5215 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_inheritable_perf_0[1] = {
  &report__report__du_functor_desc_inheritable_perf_0_0
};

#line 5220 "report.c"
static const MR_Integer report__report__functor_number_map_inheritable_perf_0[1] = {
  (MR_Integer) 0
};

#line 5225 "report.c"
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

#line 5246 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_0 = {
  (MR_String) "do_not_have_module_rep",
  (MR_Integer) 0
};

#line 5252 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_maybe_have_module_rep_0_1 = {
  (MR_String) "have_module_rep",
  (MR_Integer) 1
};

#line 5258 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_maybe_have_module_rep_0[2] = {
  &report__report__enum_functor_desc_maybe_have_module_rep_0_0,
  &report__report__enum_functor_desc_maybe_have_module_rep_0_1
};

#line 5264 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_maybe_have_module_rep_0[2] = {
  &report__report__enum_functor_desc_maybe_have_module_rep_0_0,
  &report__report__enum_functor_desc_maybe_have_module_rep_0_1
};

#line 5270 "report.c"
static const MR_Integer report__report__functor_number_map_maybe_have_module_rep_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 5276 "report.c"
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

#line 5297 "report.c"
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

#line 5311 "report.c"
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

#line 5325 "report.c"
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

#line 5340 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_menu_report_0_0[1] = {
  &report__report__du_functor_desc_menu_report_0_0
};

#line 5345 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_menu_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_menu_report_0_0
  }
};

#line 5354 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_menu_report_0[1] = {
  &report__report__du_functor_desc_menu_report_0_0
};

#line 5359 "report.c"
static const MR_Integer report__report__functor_number_map_menu_report_0[1] = {
  (MR_Integer) 0
};

#line 5364 "report.c"
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

#line 5385 "report.c"
static const MR_Integer report__report__functor_number_map_message_report_0[1] = {
  (MR_Integer) 0
};

#line 5390 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_message_report_0 = {
  (MR_String) "message_report",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 5397 "report.c"
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

#line 5418 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_active_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_module_is_active_0
};

#line 5424 "report.c"
static const MR_ConstString report__report__field_names_module_active_0_0[2] = {
  (MR_String) "ma_module_name",
  (MR_String) "ma_is_active"
};

#line 5430 "report.c"
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

#line 5445 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_active_0_0[1] = {
  &report__report__du_functor_desc_module_active_0_0
};

#line 5450 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_active_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_active_0_0
  }
};

#line 5459 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_active_0[1] = {
  &report__report__du_functor_desc_module_active_0_0
};

#line 5464 "report.c"
static const MR_Integer report__report__functor_number_map_module_active_0[1] = {
  (MR_Integer) 0
};

#line 5469 "report.c"
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

#line 5490 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_getter_setters_report_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
};

#line 5496 "report.c"
static const MR_ConstString report__report__field_names_module_getter_setters_report_0_0[2] = {
  (MR_String) "mgsr_module_name",
  (MR_String) "mgsr_procs"
};

#line 5502 "report.c"
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

#line 5517 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_getter_setters_report_0_0[1] = {
  &report__report__du_functor_desc_module_getter_setters_report_0_0
};

#line 5522 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_getter_setters_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_getter_setters_report_0_0
  }
};

#line 5531 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_getter_setters_report_0[1] = {
  &report__report__du_functor_desc_module_getter_setters_report_0_0
};

#line 5536 "report.c"
static const MR_Integer report__report__functor_number_map_module_getter_setters_report_0[1] = {
  (MR_Integer) 0
};

#line 5541 "report.c"
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

#line 5562 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_0 = {
  (MR_String) "module_is_active",
  (MR_Integer) 0
};

#line 5568 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_module_is_active_0_1 = {
  (MR_String) "module_is_not_active",
  (MR_Integer) 1
};

#line 5574 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_module_is_active_0[2] = {
  &report__report__enum_functor_desc_module_is_active_0_0,
  &report__report__enum_functor_desc_module_is_active_0_1
};

#line 5580 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_module_is_active_0[2] = {
  &report__report__enum_functor_desc_module_is_active_0_0,
  &report__report__enum_functor_desc_module_is_active_0_1
};

#line 5586 "report.c"
static const MR_Integer report__report__functor_number_map_module_is_active_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 5592 "report.c"
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

#line 5613 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_rep_report_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 5619 "report.c"
static const MR_ConstString report__report__field_names_module_rep_report_0_0[2] = {
  (MR_String) "mrr_module_name",
  (MR_String) "mrr_report"
};

#line 5625 "report.c"
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

#line 5640 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_rep_report_0_0[1] = {
  &report__report__du_functor_desc_module_rep_report_0_0
};

#line 5645 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_rep_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_rep_report_0_0
  }
};

#line 5654 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_rep_report_0[1] = {
  &report__report__du_functor_desc_module_rep_report_0_0
};

#line 5659 "report.c"
static const MR_Integer report__report__functor_number_map_module_rep_report_0[1] = {
  (MR_Integer) 0
};

#line 5664 "report.c"
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

#line 5685 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_proc_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_active_0
  }
};

#line 5693 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_active_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_active_0
  }
};

#line 5701 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_module_report_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_maybe_have_module_rep_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_active_0
};

#line 5708 "report.c"
static const MR_ConstString report__report__field_names_module_report_0_0[3] = {
  (MR_String) "mr_module_name",
  (MR_String) "mr_have_module_rep",
  (MR_String) "mr_procs"
};

#line 5715 "report.c"
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

#line 5730 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_module_report_0_0[1] = {
  &report__report__du_functor_desc_module_report_0_0
};

#line 5735 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_module_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_module_report_0_0
  }
};

#line 5744 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_module_report_0[1] = {
  &report__report__du_functor_desc_module_report_0_0
};

#line 5749 "report.c"
static const MR_Integer report__report__functor_number_map_module_report_0[1] = {
  (MR_Integer) 0
};

#line 5754 "report.c"
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

#line 5775 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_normal_callee_id_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 5781 "report.c"
static const MR_ConstString report__report__field_names_normal_callee_id_0_0[2] = {
  (MR_String) "nci_callee_desc",
  (MR_String) "nci_type_subst"
};

#line 5787 "report.c"
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

#line 5802 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_normal_callee_id_0_0[1] = {
  &report__report__du_functor_desc_normal_callee_id_0_0
};

#line 5807 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_normal_callee_id_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_normal_callee_id_0_0
  }
};

#line 5816 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_normal_callee_id_0[1] = {
  &report__report__du_functor_desc_normal_callee_id_0_0
};

#line 5821 "report.c"
static const MR_Integer report__report__functor_number_map_normal_callee_id_0[1] = {
  (MR_Integer) 0
};

#line 5826 "report.c"
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

#line 5847 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__type_ctor_info_inheritable_perf_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_inheritable_perf_0
  }
};

#line 5855 "report.c"
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

#line 5868 "report.c"
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

#line 5881 "report.c"
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

#line 5896 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_perf_row_data_1_0[1] = {
  &report__report__du_functor_desc_perf_row_data_1_0
};

#line 5901 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_perf_row_data_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_perf_row_data_1_0
  }
};

#line 5910 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_perf_row_data_1[1] = {
  &report__report__du_functor_desc_perf_row_data_1_0
};

#line 5915 "report.c"
static const MR_Integer report__report__functor_number_map_perf_row_data_1[1] = {
  (MR_Integer) 0
};

#line 5920 "report.c"
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

#line 5941 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_active_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_is_active_0
};

#line 5947 "report.c"
static const MR_ConstString report__report__field_names_proc_active_0_0[2] = {
  (MR_String) "pa_proc_desc",
  (MR_String) "pa_is_active"
};

#line 5953 "report.c"
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

#line 5968 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_active_0_0[1] = {
  &report__report__du_functor_desc_proc_active_0_0
};

#line 5973 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_active_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_active_0_0
  }
};

#line 5982 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_active_0[1] = {
  &report__report__du_functor_desc_proc_active_0_0
};

#line 5987 "report.c"
static const MR_Integer report__report__functor_number_map_proc_active_0[1] = {
  (MR_Integer) 0
};

#line 5992 "report.c"
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

#line 6013 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
  }
};

#line 6021 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_0[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
};

#line 6026 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_0[1] = {
  (MR_String) "pc_caller_call_sites"
};

#line 6031 "report.c"
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

#line 6046 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_1[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 6051 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_1[1] = {
  (MR_String) "pc_caller_procedures"
};

#line 6056 "report.c"
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

#line 6071 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1builtin__type_ctor_info_string_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 6079 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1builtin__type_ctor_info_string_0
  }
};

#line 6087 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_2[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1builtin__type_ctor_info_string_0
};

#line 6092 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_2[1] = {
  (MR_String) "pc_caller_modules"
};

#line 6097 "report.c"
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

#line 6112 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_0_3[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
};

#line 6117 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_0_3[1] = {
  (MR_String) "pc_caller_cliques"
};

#line 6122 "report.c"
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

#line 6137 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_0[1] = {
  &report__report__du_functor_desc_proc_callers_0_0
};

#line 6142 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_1[1] = {
  &report__report__du_functor_desc_proc_callers_0_1
};

#line 6147 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_2[1] = {
  &report__report__du_functor_desc_proc_callers_0_2
};

#line 6152 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_0_3[1] = {
  &report__report__du_functor_desc_proc_callers_0_3
};

#line 6157 "report.c"
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

#line 6181 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_0[4] = {
  &report__report__du_functor_desc_proc_callers_0_0,
  &report__report__du_functor_desc_proc_callers_0_3,
  &report__report__du_functor_desc_proc_callers_0_2,
  &report__report__du_functor_desc_proc_callers_0_1
};

#line 6189 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 6197 "report.c"
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

#line 6218 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 6226 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_callers_report_0_0[6] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_callers_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_contour_exclusion_0,
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 6236 "report.c"
static const MR_ConstString report__report__field_names_proc_callers_report_0_0[6] = {
  (MR_String) "pc_proc_desc",
  (MR_String) "pc_callers",
  (MR_String) "pc_batch_number",
  (MR_String) "pc_callers_per_batch",
  (MR_String) "pc_contour_exclusion",
  (MR_String) "pc_contour_warn_message"
};

#line 6246 "report.c"
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

#line 6261 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_callers_report_0_0[1] = {
  &report__report__du_functor_desc_proc_callers_report_0_0
};

#line 6266 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_callers_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_callers_report_0_0
  }
};

#line 6275 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_callers_report_0[1] = {
  &report__report__du_functor_desc_proc_callers_report_0_0
};

#line 6280 "report.c"
static const MR_Integer report__report__functor_number_map_proc_callers_report_0[1] = {
  (MR_Integer) 0
};

#line 6285 "report.c"
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

#line 6306 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_desc_0_0[6] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 6316 "report.c"
static const MR_ConstString report__report__field_names_proc_desc_0_0[6] = {
  (MR_String) "pdesc_ps_ptr",
  (MR_String) "pdesc_file_name",
  (MR_String) "pdesc_line_number",
  (MR_String) "pdesc_module_name",
  (MR_String) "pdesc_uq_refined_name",
  (MR_String) "pdesc_q_refined_name"
};

#line 6326 "report.c"
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

#line 6341 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_desc_0_0[1] = {
  &report__report__du_functor_desc_proc_desc_0_0
};

#line 6346 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_desc_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_desc_0_0
  }
};

#line 6355 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_desc_0[1] = {
  &report__report__du_functor_desc_proc_desc_0_0
};

#line 6360 "report.c"
static const MR_Integer report__report__functor_number_map_proc_desc_0[1] = {
  (MR_Integer) 0
};

#line 6365 "report.c"
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

#line 6386 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 6394 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1coverage__type_ctor_info_coverage_point_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_point_0
  }
};

#line 6402 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1list__ti_list_1coverage__type_ctor_info_coverage_point_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__list__ti_list_1coverage__type_ctor_info_coverage_point_0
  }
};

#line 6410 "report.c"
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

#line 6422 "report.c"
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

#line 6434 "report.c"
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

#line 6449 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_dynamic_dump_info_0_0[1] = {
  &report__report__du_functor_desc_proc_dynamic_dump_info_0_0
};

#line 6454 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_dynamic_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_dynamic_dump_info_0_0
  }
};

#line 6463 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_dynamic_dump_info_0[1] = {
  &report__report__du_functor_desc_proc_dynamic_dump_info_0_0
};

#line 6468 "report.c"
static const MR_Integer report__report__functor_number_map_proc_dynamic_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 6473 "report.c"
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

#line 6494 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_0 = {
  (MR_String) "proc_is_active",
  (MR_Integer) 0
};

#line 6500 "report.c"
static const MR_EnumFunctorDesc report__report__enum_functor_desc_proc_is_active_0_1 = {
  (MR_String) "proc_is_not_active",
  (MR_Integer) 1
};

#line 6506 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_value_ordered_proc_is_active_0[2] = {
  &report__report__enum_functor_desc_proc_is_active_0_0,
  &report__report__enum_functor_desc_proc_is_active_0_1
};

#line 6512 "report.c"
static const MR_EnumFunctorDescPtr report__report__enum_name_ordered_proc_is_active_0[2] = {
  &report__report__enum_functor_desc_proc_is_active_0_0,
  &report__report__enum_functor_desc_proc_is_active_0_1
};

#line 6518 "report.c"
static const MR_Integer report__report__functor_number_map_proc_is_active_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 6524 "report.c"
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

#line 6545 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_callers_counts_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_callers_counts_0
  }
};

#line 6553 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_call_site_perf_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_call_site_perf_0
  }
};

#line 6561 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_proc_report_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_callers_counts_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_call_site_perf_0
};

#line 6568 "report.c"
static const MR_ConstString report__report__field_names_proc_report_0_0[3] = {
  (MR_String) "proc_callers_summary",
  (MR_String) "proc_summary",
  (MR_String) "proc_call_site_summaries"
};

#line 6575 "report.c"
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

#line 6590 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_report_0_0[1] = {
  &report__report__du_functor_desc_proc_report_0_0
};

#line 6595 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_report_0_0
  }
};

#line 6604 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_report_0[1] = {
  &report__report__du_functor_desc_proc_report_0_0
};

#line 6609 "report.c"
static const MR_Integer report__report__functor_number_map_proc_report_0[1] = {
  (MR_Integer) 0
};

#line 6614 "report.c"
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

#line 6635 "report.c"
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

#line 6647 "report.c"
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

#line 6659 "report.c"
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

#line 6674 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_proc_static_dump_info_0_0[1] = {
  &report__report__du_functor_desc_proc_static_dump_info_0_0
};

#line 6679 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_proc_static_dump_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_proc_static_dump_info_0_0
  }
};

#line 6688 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_proc_static_dump_info_0[1] = {
  &report__report__du_functor_desc_proc_static_dump_info_0_0
};

#line 6693 "report.c"
static const MR_Integer report__report__functor_number_map_proc_static_dump_info_0[1] = {
  (MR_Integer) 0
};

#line 6698 "report.c"
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

#line 6719 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__program_representation__ti_proc_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_proc_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 6727 "report.c"
static const MR_FA_TypeInfo_Struct1 report__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_info_0
  }
};

#line 6735 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_procrep_coverage_info_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &report__mdbcomp__program_representation__ti_proc_rep_1mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &report__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0
};

#line 6742 "report.c"
static const MR_ConstString report__report__field_names_procrep_coverage_info_0_0[3] = {
  (MR_String) "prci_proc",
  (MR_String) "prci_proc_rep",
  (MR_String) "prci_coverage_array"
};

#line 6749 "report.c"
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

#line 6764 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_procrep_coverage_info_0_0[1] = {
  &report__report__du_functor_desc_procrep_coverage_info_0_0
};

#line 6769 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_procrep_coverage_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_procrep_coverage_info_0_0
  }
};

#line 6778 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_procrep_coverage_info_0[1] = {
  &report__report__du_functor_desc_procrep_coverage_info_0_0
};

#line 6783 "report.c"
static const MR_Integer report__report__functor_number_map_procrep_coverage_info_0[1] = {
  (MR_Integer) 0
};

#line 6788 "report.c"
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

#line 6809 "report.c"
static const MR_Integer report__report__functor_number_map_program_modules_report_0[1] = {
  (MR_Integer) 0
};

#line 6814 "report.c"
static const MR_FA_TypeInfo_Struct1 report__report__ti_perf_row_data_1report__type_ctor_info_module_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_module_active_0
  }
};

#line 6822 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_module_active_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_module_active_0
  }
};

#line 6830 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_program_modules_report_0 = {
  (MR_String) "program_modules_report",
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_module_active_0,
  (MR_String) "program_modules"
};

#line 6837 "report.c"
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

#line 6858 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_level_report_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 6867 "report.c"
static const MR_ConstString report__report__field_names_recursion_level_report_0_0[5] = {
  (MR_String) "rlr_level",
  (MR_String) "rlr_calls",
  (MR_String) "rlr_prob",
  (MR_String) "rlr_non_rec_calls_cost",
  (MR_String) "rlr_rec_calls_ex_chld_cost"
};

#line 6876 "report.c"
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

#line 6891 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_level_report_0_0[1] = {
  &report__report__du_functor_desc_recursion_level_report_0_0
};

#line 6896 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_level_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_level_report_0_0
  }
};

#line 6905 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_level_report_0[1] = {
  &report__report__du_functor_desc_recursion_level_report_0_0
};

#line 6910 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_level_report_0[1] = {
  (MR_Integer) 0
};

#line 6915 "report.c"
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

#line 6936 "report.c"
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

#line 6951 "report.c"
static const MR_VA_TypeInfo_Struct2 report____vti_func_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  }
};

#line 6961 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_1[5] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &report____vti_func_2builtin__type_ctor_info_int_0builtin__type_ctor_info_float_0
};

#line 6970 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_1[5] = {
  (MR_String) "rts_base",
  (MR_String) "rts_recursive",
  (MR_String) "rts_avg_max_depth",
  (MR_String) "rts_avg_rec_cost",
  (MR_String) "rts_any_rec_cost"
};

#line 6979 "report.c"
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

#line 6994 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_2[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_level_report_0
};

#line 7000 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_2[2] = {
  (MR_String) "rtdsc_base",
  (MR_String) "rtdsc_recursive"
};

#line 7006 "report.c"
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

#line 7021 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 7026 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_3[1] = {
  (MR_String) "rtml_num_procs"
};

#line 7031 "report.c"
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

#line 7046 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1report__type_ctor_info_recursion_level_report_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_level_report_0
  }
};

#line 7054 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_4[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__type_ctor_info_recursion_level_report_0
};

#line 7059 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_4[1] = {
  (MR_String) "rto_all_levels"
};

#line 7064 "report.c"
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

#line 7079 "report.c"
static const MR_FA_TypeInfo_Struct1 report__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 7087 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_0_5[1] = {
  (MR_PseudoTypeInfo) &report__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 7092 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_0_5[1] = {
  (MR_String) "rte_errors"
};

#line 7097 "report.c"
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

#line 7112 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_0[1] = {
  &report__report__du_functor_desc_recursion_type_0_0
};

#line 7117 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_1[1] = {
  &report__report__du_functor_desc_recursion_type_0_1
};

#line 7122 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_2[1] = {
  &report__report__du_functor_desc_recursion_type_0_2
};

#line 7127 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_0_3[3] = {
  &report__report__du_functor_desc_recursion_type_0_3,
  &report__report__du_functor_desc_recursion_type_0_4,
  &report__report__du_functor_desc_recursion_type_0_5
};

#line 7134 "report.c"
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

#line 7158 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_0[6] = {
  &report__report__du_functor_desc_recursion_type_0_2,
  &report__report__du_functor_desc_recursion_type_0_5,
  &report__report__du_functor_desc_recursion_type_0_3,
  &report__report__du_functor_desc_recursion_type_0_0,
  &report__report__du_functor_desc_recursion_type_0_4,
  &report__report__du_functor_desc_recursion_type_0_1
};

#line 7168 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 1
};

#line 7178 "report.c"
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

#line 7199 "report.c"
static const MR_FA_TypeInfo_Struct1 report__maybe__ti_maybe_1report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 7207 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0report__type_ctor_info_recursion_type_proc_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_type_proc_freq_data_0
  }
};

#line 7216 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_freq_data_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0,
  (MR_PseudoTypeInfo) &report__maybe__ti_maybe_1report__ti_perf_row_data_1unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0report__type_ctor_info_recursion_type_proc_freq_data_0
};

#line 7224 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_freq_data_0_0[4] = {
  (MR_String) "rtfd_freq",
  (MR_String) "rtfd_percent",
  (MR_String) "rtfd_maybe_summary",
  (MR_String) "rtfd_entry_procs"
};

#line 7232 "report.c"
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

#line 7247 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_freq_data_0_0[1] = {
  &report__report__du_functor_desc_recursion_type_freq_data_0_0
};

#line 7252 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_type_freq_data_0_0
  }
};

#line 7261 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_freq_data_0[1] = {
  &report__report__du_functor_desc_recursion_type_freq_data_0_0
};

#line 7266 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_freq_data_0[1] = {
  (MR_Integer) 0
};

#line 7271 "report.c"
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

#line 7292 "report.c"
static const MR_FA_TypeInfo_Struct2 report__tree234__ti_tree234_2report__type_ctor_info_recursion_type_simple_0report__type_ctor_info_recursion_type_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_type_simple_0,
    (MR_TypeInfo) &report__report__type_ctor_info_recursion_type_freq_data_0
  }
};

#line 7301 "report.c"
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

#line 7322 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_proc_freq_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &measurement_units__measurement_units__type_ctor_info_percent_0,
  (MR_PseudoTypeInfo) &report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 7329 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_proc_freq_data_0_0[3] = {
  (MR_String) "rtpfd_freq",
  (MR_String) "rtpfd_percent",
  (MR_String) "rtpfd_summary"
};

#line 7336 "report.c"
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

#line 7351 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_proc_freq_data_0_0[1] = {
  &report__report__du_functor_desc_recursion_type_proc_freq_data_0_0
};

#line 7356 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_recursion_type_proc_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_recursion_type_proc_freq_data_0_0
  }
};

#line 7365 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_proc_freq_data_0[1] = {
  &report__report__du_functor_desc_recursion_type_proc_freq_data_0_0
};

#line 7370 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_proc_freq_data_0[1] = {
  (MR_Integer) 0
};

#line 7375 "report.c"
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

#line 7396 "report.c"
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

#line 7417 "report.c"
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

#line 7432 "report.c"
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

#line 7447 "report.c"
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

#line 7462 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 7467 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_3[1] = {
  (MR_String) "rtsmr_num_procs"
};

#line 7472 "report.c"
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

#line 7487 "report.c"
static const MR_FA_TypeInfo_Struct1 report__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 7495 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_4[1] = {
  (MR_PseudoTypeInfo) &report__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
};

#line 7500 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_4[1] = {
  (MR_String) "rtso_levels"
};

#line 7505 "report.c"
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

#line 7520 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_recursion_type_simple_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 7525 "report.c"
static const MR_ConstString report__report__field_names_recursion_type_simple_0_5[1] = {
  (MR_String) "rtse_error"
};

#line 7530 "report.c"
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

#line 7545 "report.c"
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

#line 7560 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_0[4] = {
  &report__report__du_functor_desc_recursion_type_simple_0_0,
  &report__report__du_functor_desc_recursion_type_simple_0_1,
  &report__report__du_functor_desc_recursion_type_simple_0_2,
  &report__report__du_functor_desc_recursion_type_simple_0_6
};

#line 7568 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_1[1] = {
  &report__report__du_functor_desc_recursion_type_simple_0_3
};

#line 7573 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_2[1] = {
  &report__report__du_functor_desc_recursion_type_simple_0_4
};

#line 7578 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_recursion_type_simple_0_3[1] = {
  &report__report__du_functor_desc_recursion_type_simple_0_5
};

#line 7583 "report.c"
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

#line 7607 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_recursion_type_simple_0[7] = {
  &report__report__du_functor_desc_recursion_type_simple_0_2,
  &report__report__du_functor_desc_recursion_type_simple_0_5,
  &report__report__du_functor_desc_recursion_type_simple_0_3,
  &report__report__du_functor_desc_recursion_type_simple_0_0,
  &report__report__du_functor_desc_recursion_type_simple_0_4,
  &report__report__du_functor_desc_recursion_type_simple_0_1,
  &report__report__du_functor_desc_recursion_type_simple_0_6
};

#line 7618 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_type_simple_0[7] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 6
};

#line 7629 "report.c"
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

#line 7650 "report.c"
static const MR_Integer report__report__functor_number_map_recursion_types_frequency_report_0[1] = {
  (MR_Integer) 0
};

#line 7655 "report.c"
static const MR_NotagFunctorDesc report__report__notag_functor_desc_recursion_types_frequency_report_0 = {
  (MR_String) "recursion_types_frequency_report",
  (MR_PseudoTypeInfo) &report__tree234__ti_tree234_2report__type_ctor_info_recursion_type_simple_0report__type_ctor_info_recursion_type_freq_data_0,
  (MR_String) "rtfr_histogram"
};

#line 7662 "report.c"
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

#line 7683 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_report_ordering_0_0[4] = {
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_display_limit_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_cost_kind_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_include_descendants_0,
  (MR_PseudoTypeInfo) &query__query__type_ctor_info_measurement_scope_0
};

#line 7691 "report.c"
static const MR_ConstString report__report__field_names_report_ordering_0_0[4] = {
  (MR_String) "display_limit",
  (MR_String) "cost_kind",
  (MR_String) "incl_desc",
  (MR_String) "scope"
};

#line 7699 "report.c"
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

#line 7723 "report.c"
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

#line 7738 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_report_ordering_0_0[1] = {
  &report__report__du_functor_desc_report_ordering_0_0
};

#line 7743 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_report_ordering_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_report_ordering_0_0
  }
};

#line 7752 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_report_ordering_0[1] = {
  &report__report__du_functor_desc_report_ordering_0_0
};

#line 7757 "report.c"
static const MR_Integer report__report__functor_number_map_report_ordering_0[1] = {
  (MR_Integer) 0
};

#line 7762 "report.c"
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

#line 7783 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_top_procs_report_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_report_ordering_0,
  (MR_PseudoTypeInfo) &report__list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

#line 7789 "report.c"
static const MR_ConstString report__report__field_names_top_procs_report_0_0[2] = {
  (MR_String) "tp_ordering",
  (MR_String) "tp_top_procs"
};

#line 7795 "report.c"
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

#line 7810 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_top_procs_report_0_0[1] = {
  &report__report__du_functor_desc_top_procs_report_0_0
};

#line 7815 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_top_procs_report_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_top_procs_report_0_0
  }
};

#line 7824 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_top_procs_report_0[1] = {
  &report__report__du_functor_desc_top_procs_report_0_0
};

#line 7829 "report.c"
static const MR_Integer report__report__functor_number_map_top_procs_report_0[1] = {
  (MR_Integer) 0
};

#line 7834 "report.c"
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

#line 7855 "report.c"
static const MR_PseudoTypeInfo report__report__field_types_var_use_and_name_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &var_use_analysis__var_use_analysis__type_ctor_info_var_use_info_0
};

#line 7861 "report.c"
static const MR_ConstString report__report__field_names_var_use_and_name_0_0[2] = {
  (MR_String) "vun_var_name",
  (MR_String) "vun_use"
};

#line 7867 "report.c"
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

#line 7882 "report.c"
static const MR_DuFunctorDescPtr report__report__du_stag_ordered_var_use_and_name_0_0[1] = {
  &report__report__du_functor_desc_var_use_and_name_0_0
};

#line 7887 "report.c"
static const MR_DuPtagLayout report__report__du_ptag_ordered_var_use_and_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    report__report__du_stag_ordered_var_use_and_name_0_0
  }
};

#line 7896 "report.c"
static const MR_DuFunctorDescPtr report__report__du_name_ordered_var_use_and_name_0[1] = {
  &report__report__du_functor_desc_var_use_and_name_0_0
};

#line 7901 "report.c"
static const MR_Integer report__report__functor_number_map_var_use_and_name_0[1] = {
  (MR_Integer) 0
};

#line 7906 "report.c"
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

#line 7927 "report.c"
static MR_bool MR_CALL 
report____Unify____ancestor_desc_0_0_10001(
#line 7930 "report.c"
  MR_Box report__wrapper_arg_1,
#line 7932 "report.c"
  MR_Box report__wrapper_arg_2)
#line 7934 "report.c"
{
#line 7936 "report.c"
  {
#line 7938 "report.c"
    MR_bool report__succeeded;

#line 7941 "report.c"
    {
#line 7943 "report.c"
      report__succeeded = report____Unify____ancestor_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 7946 "report.c"
    return report__succeeded;
#line 7948 "report.c"
  }
#line 7950 "report.c"
}

#line 7953 "report.c"
static void MR_CALL 
report____Compare____ancestor_desc_0_0_10001(
#line 7956 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 7958 "report.c"
  MR_Box report__wrapper_arg_2,
#line 7960 "report.c"
  MR_Box report__wrapper_arg_3)
#line 7962 "report.c"
{
#line 7964 "report.c"
  {
#line 7966 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 7969 "report.c"
    {
#line 7971 "report.c"
      report____Compare____ancestor_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 7974 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 7976 "report.c"
  }
#line 7978 "report.c"
}

#line 7981 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_desc_0_0_10001(
#line 7984 "report.c"
  MR_Box report__wrapper_arg_1,
#line 7986 "report.c"
  MR_Box report__wrapper_arg_2)
#line 7988 "report.c"
{
#line 7990 "report.c"
  {
#line 7992 "report.c"
    MR_bool report__succeeded;

#line 7995 "report.c"
    {
#line 7997 "report.c"
      report__succeeded = report____Unify____call_site_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8000 "report.c"
    return report__succeeded;
#line 8002 "report.c"
  }
#line 8004 "report.c"
}

#line 8007 "report.c"
static void MR_CALL 
report____Compare____call_site_desc_0_0_10001(
#line 8010 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8012 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8014 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8016 "report.c"
{
#line 8018 "report.c"
  {
#line 8020 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8023 "report.c"
    {
#line 8025 "report.c"
      report____Compare____call_site_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8028 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8030 "report.c"
  }
#line 8032 "report.c"
}

#line 8035 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_dump_info_0_0_10001(
#line 8038 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8040 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8042 "report.c"
{
#line 8044 "report.c"
  {
#line 8046 "report.c"
    MR_bool report__succeeded;

#line 8049 "report.c"
    {
#line 8051 "report.c"
      report__succeeded = report____Unify____call_site_dynamic_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8054 "report.c"
    return report__succeeded;
#line 8056 "report.c"
  }
#line 8058 "report.c"
}

#line 8061 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_dump_info_0_0_10001(
#line 8064 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8066 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8068 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8070 "report.c"
{
#line 8072 "report.c"
  {
#line 8074 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8077 "report.c"
    {
#line 8079 "report.c"
      report____Compare____call_site_dynamic_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8082 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8084 "report.c"
  }
#line 8086 "report.c"
}

#line 8089 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_dynamic_var_use_info_0_0_10001(
#line 8092 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8094 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8096 "report.c"
{
#line 8098 "report.c"
  {
#line 8100 "report.c"
    MR_bool report__succeeded;

#line 8103 "report.c"
    {
#line 8105 "report.c"
      report__succeeded = report____Unify____call_site_dynamic_var_use_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8108 "report.c"
    return report__succeeded;
#line 8110 "report.c"
  }
#line 8112 "report.c"
}

#line 8115 "report.c"
static void MR_CALL 
report____Compare____call_site_dynamic_var_use_info_0_0_10001(
#line 8118 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8120 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8122 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8124 "report.c"
{
#line 8126 "report.c"
  {
#line 8128 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8131 "report.c"
    {
#line 8133 "report.c"
      report____Compare____call_site_dynamic_var_use_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8136 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8138 "report.c"
  }
#line 8140 "report.c"
}

#line 8143 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_perf_0_0_10001(
#line 8146 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8148 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8150 "report.c"
{
#line 8152 "report.c"
  {
#line 8154 "report.c"
    MR_bool report__succeeded;

#line 8157 "report.c"
    {
#line 8159 "report.c"
      report__succeeded = report____Unify____call_site_perf_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8162 "report.c"
    return report__succeeded;
#line 8164 "report.c"
  }
#line 8166 "report.c"
}

#line 8169 "report.c"
static void MR_CALL 
report____Compare____call_site_perf_0_0_10001(
#line 8172 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8174 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8176 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8178 "report.c"
{
#line 8180 "report.c"
  {
#line 8182 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8185 "report.c"
    {
#line 8187 "report.c"
      report____Compare____call_site_perf_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8190 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8192 "report.c"
  }
#line 8194 "report.c"
}

#line 8197 "report.c"
static MR_bool MR_CALL 
report____Unify____call_site_static_dump_info_0_0_10001(
#line 8200 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8202 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8204 "report.c"
{
#line 8206 "report.c"
  {
#line 8208 "report.c"
    MR_bool report__succeeded;

#line 8211 "report.c"
    {
#line 8213 "report.c"
      report__succeeded = report____Unify____call_site_static_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8216 "report.c"
    return report__succeeded;
#line 8218 "report.c"
  }
#line 8220 "report.c"
}

#line 8223 "report.c"
static void MR_CALL 
report____Compare____call_site_static_dump_info_0_0_10001(
#line 8226 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8228 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8230 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8232 "report.c"
{
#line 8234 "report.c"
  {
#line 8236 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8239 "report.c"
    {
#line 8241 "report.c"
      report____Compare____call_site_static_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8244 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8246 "report.c"
  }
#line 8248 "report.c"
}

#line 8251 "report.c"
static MR_bool MR_CALL 
report____Unify____callers_counts_0_0_10001(
#line 8254 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8256 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8258 "report.c"
{
#line 8260 "report.c"
  {
#line 8262 "report.c"
    MR_bool report__succeeded;

#line 8265 "report.c"
    {
#line 8267 "report.c"
      report__succeeded = report____Unify____callers_counts_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8270 "report.c"
    return report__succeeded;
#line 8272 "report.c"
  }
#line 8274 "report.c"
}

#line 8277 "report.c"
static void MR_CALL 
report____Compare____callers_counts_0_0_10001(
#line 8280 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8282 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8284 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8286 "report.c"
{
#line 8288 "report.c"
  {
#line 8290 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8293 "report.c"
    {
#line 8295 "report.c"
      report____Compare____callers_counts_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8298 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8300 "report.c"
  }
#line 8302 "report.c"
}

#line 8305 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_call_site_report_0_0_10001(
#line 8308 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8310 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8312 "report.c"
{
#line 8314 "report.c"
  {
#line 8316 "report.c"
    MR_bool report__succeeded;

#line 8319 "report.c"
    {
#line 8321 "report.c"
      report__succeeded = report____Unify____clique_call_site_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8324 "report.c"
    return report__succeeded;
#line 8326 "report.c"
  }
#line 8328 "report.c"
}

#line 8331 "report.c"
static void MR_CALL 
report____Compare____clique_call_site_report_0_0_10001(
#line 8334 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8336 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8338 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8340 "report.c"
{
#line 8342 "report.c"
  {
#line 8344 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8347 "report.c"
    {
#line 8349 "report.c"
      report____Compare____clique_call_site_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8352 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8354 "report.c"
  }
#line 8356 "report.c"
}

#line 8359 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_desc_0_0_10001(
#line 8362 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8364 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8366 "report.c"
{
#line 8368 "report.c"
  {
#line 8370 "report.c"
    MR_bool report__succeeded;

#line 8373 "report.c"
    {
#line 8375 "report.c"
      report__succeeded = report____Unify____clique_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8378 "report.c"
    return report__succeeded;
#line 8380 "report.c"
  }
#line 8382 "report.c"
}

#line 8385 "report.c"
static void MR_CALL 
report____Compare____clique_desc_0_0_10001(
#line 8388 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8390 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8392 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8394 "report.c"
{
#line 8396 "report.c"
  {
#line 8398 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8401 "report.c"
    {
#line 8403 "report.c"
      report____Compare____clique_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8406 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8408 "report.c"
  }
#line 8410 "report.c"
}

#line 8413 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_dump_info_0_0_10001(
#line 8416 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8418 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8420 "report.c"
{
#line 8422 "report.c"
  {
#line 8424 "report.c"
    MR_bool report__succeeded;

#line 8427 "report.c"
    {
#line 8429 "report.c"
      report__succeeded = report____Unify____clique_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8432 "report.c"
    return report__succeeded;
#line 8434 "report.c"
  }
#line 8436 "report.c"
}

#line 8439 "report.c"
static void MR_CALL 
report____Compare____clique_dump_info_0_0_10001(
#line 8442 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8444 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8446 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8448 "report.c"
{
#line 8450 "report.c"
  {
#line 8452 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8455 "report.c"
    {
#line 8457 "report.c"
      report____Compare____clique_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8460 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8462 "report.c"
  }
#line 8464 "report.c"
}

#line 8467 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_dynamic_report_0_0_10001(
#line 8470 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8472 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8474 "report.c"
{
#line 8476 "report.c"
  {
#line 8478 "report.c"
    MR_bool report__succeeded;

#line 8481 "report.c"
    {
#line 8483 "report.c"
      report__succeeded = report____Unify____clique_proc_dynamic_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8486 "report.c"
    return report__succeeded;
#line 8488 "report.c"
  }
#line 8490 "report.c"
}

#line 8493 "report.c"
static void MR_CALL 
report____Compare____clique_proc_dynamic_report_0_0_10001(
#line 8496 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8498 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8500 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8502 "report.c"
{
#line 8504 "report.c"
  {
#line 8506 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8509 "report.c"
    {
#line 8511 "report.c"
      report____Compare____clique_proc_dynamic_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8514 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8516 "report.c"
  }
#line 8518 "report.c"
}

#line 8521 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_proc_report_0_0_10001(
#line 8524 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8526 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8528 "report.c"
{
#line 8530 "report.c"
  {
#line 8532 "report.c"
    MR_bool report__succeeded;

#line 8535 "report.c"
    {
#line 8537 "report.c"
      report__succeeded = report____Unify____clique_proc_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8540 "report.c"
    return report__succeeded;
#line 8542 "report.c"
  }
#line 8544 "report.c"
}

#line 8547 "report.c"
static void MR_CALL 
report____Compare____clique_proc_report_0_0_10001(
#line 8550 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8552 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8554 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8556 "report.c"
{
#line 8558 "report.c"
  {
#line 8560 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8563 "report.c"
    {
#line 8565 "report.c"
      report____Compare____clique_proc_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8568 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8570 "report.c"
  }
#line 8572 "report.c"
}

#line 8575 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_recursion_report_0_0_10001(
#line 8578 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8580 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8582 "report.c"
{
#line 8584 "report.c"
  {
#line 8586 "report.c"
    MR_bool report__succeeded;

#line 8589 "report.c"
    {
#line 8591 "report.c"
      report__succeeded = report____Unify____clique_recursion_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8594 "report.c"
    return report__succeeded;
#line 8596 "report.c"
  }
#line 8598 "report.c"
}

#line 8601 "report.c"
static void MR_CALL 
report____Compare____clique_recursion_report_0_0_10001(
#line 8604 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8606 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8608 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8610 "report.c"
{
#line 8612 "report.c"
  {
#line 8614 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8617 "report.c"
    {
#line 8619 "report.c"
      report____Compare____clique_recursion_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8622 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8624 "report.c"
  }
#line 8626 "report.c"
}

#line 8629 "report.c"
static MR_bool MR_CALL 
report____Unify____clique_report_0_0_10001(
#line 8632 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8634 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8636 "report.c"
{
#line 8638 "report.c"
  {
#line 8640 "report.c"
    MR_bool report__succeeded;

#line 8643 "report.c"
    {
#line 8645 "report.c"
      report__succeeded = report____Unify____clique_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8648 "report.c"
    return report__succeeded;
#line 8650 "report.c"
  }
#line 8652 "report.c"
}

#line 8655 "report.c"
static void MR_CALL 
report____Compare____clique_report_0_0_10001(
#line 8658 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8660 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8662 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8664 "report.c"
{
#line 8666 "report.c"
  {
#line 8668 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8671 "report.c"
    {
#line 8673 "report.c"
      report____Compare____clique_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8676 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8678 "report.c"
  }
#line 8680 "report.c"
}

#line 8683 "report.c"
static MR_bool MR_CALL 
report____Unify____data_struct_name_0_0_10001(
#line 8686 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8688 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8690 "report.c"
{
#line 8692 "report.c"
  {
#line 8694 "report.c"
    MR_bool report__succeeded;

#line 8697 "report.c"
    {
#line 8699 "report.c"
      report__succeeded = report____Unify____data_struct_name_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8702 "report.c"
    return report__succeeded;
#line 8704 "report.c"
  }
#line 8706 "report.c"
}

#line 8709 "report.c"
static void MR_CALL 
report____Compare____data_struct_name_0_0_10001(
#line 8712 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8714 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8716 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8718 "report.c"
{
#line 8720 "report.c"
  {
#line 8722 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8725 "report.c"
    {
#line 8727 "report.c"
      report____Compare____data_struct_name_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8730 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8732 "report.c"
  }
#line 8734 "report.c"
}

#line 8737 "report.c"
static MR_bool MR_CALL 
report____Unify____deep_report_0_0_10001(
#line 8740 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8742 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8744 "report.c"
{
#line 8746 "report.c"
  {
#line 8748 "report.c"
    MR_bool report__succeeded;

#line 8751 "report.c"
    {
#line 8753 "report.c"
      report__succeeded = report____Unify____deep_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8756 "report.c"
    return report__succeeded;
#line 8758 "report.c"
  }
#line 8760 "report.c"
}

#line 8763 "report.c"
static void MR_CALL 
report____Compare____deep_report_0_0_10001(
#line 8766 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8768 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8770 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8772 "report.c"
{
#line 8774 "report.c"
  {
#line 8776 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8779 "report.c"
    {
#line 8781 "report.c"
      report____Compare____deep_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8784 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8786 "report.c"
  }
#line 8788 "report.c"
}

#line 8791 "report.c"
static MR_bool MR_CALL 
report____Unify____field_name_0_0_10001(
#line 8794 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8796 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8798 "report.c"
{
#line 8800 "report.c"
  {
#line 8802 "report.c"
    MR_bool report__succeeded;

#line 8805 "report.c"
    {
#line 8807 "report.c"
      report__succeeded = report____Unify____field_name_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8810 "report.c"
    return report__succeeded;
#line 8812 "report.c"
  }
#line 8814 "report.c"
}

#line 8817 "report.c"
static void MR_CALL 
report____Compare____field_name_0_0_10001(
#line 8820 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8822 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8824 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8826 "report.c"
{
#line 8828 "report.c"
  {
#line 8830 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8833 "report.c"
    {
#line 8835 "report.c"
      report____Compare____field_name_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8838 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8840 "report.c"
  }
#line 8842 "report.c"
}

#line 8845 "report.c"
static MR_bool MR_CALL 
report____Unify____getter_or_setter_0_0_10001(
#line 8848 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8850 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8852 "report.c"
{
#line 8854 "report.c"
  {
#line 8856 "report.c"
    MR_bool report__succeeded;

#line 8859 "report.c"
    {
#line 8861 "report.c"
      report__succeeded = report____Unify____getter_or_setter_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8864 "report.c"
    return report__succeeded;
#line 8866 "report.c"
  }
#line 8868 "report.c"
}

#line 8871 "report.c"
static void MR_CALL 
report____Compare____getter_or_setter_0_0_10001(
#line 8874 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8876 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8878 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8880 "report.c"
{
#line 8882 "report.c"
  {
#line 8884 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8887 "report.c"
    {
#line 8889 "report.c"
      report____Compare____getter_or_setter_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8892 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8894 "report.c"
  }
#line 8896 "report.c"
}

#line 8899 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_1_0_10001(
#line 8902 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8904 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8906 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8908 "report.c"
{
#line 8910 "report.c"
  {
#line 8912 "report.c"
    MR_bool report__succeeded;

#line 8915 "report.c"
    {
#line 8917 "report.c"
      report__succeeded = report____Unify____gs_ds_map_1_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 8920 "report.c"
    return report__succeeded;
#line 8922 "report.c"
  }
#line 8924 "report.c"
}

#line 8927 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_1_0_10001(
#line 8930 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8932 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 8934 "report.c"
  MR_Box report__wrapper_arg_3,
#line 8936 "report.c"
  MR_Box report__wrapper_arg_4)
#line 8938 "report.c"
{
#line 8940 "report.c"
  {
#line 8942 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8945 "report.c"
    {
#line 8947 "report.c"
      report____Compare____gs_ds_map_1_0(((MR_Word) report__wrapper_arg_1), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 8950 "report.c"
    *report__wrapper_arg_2 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 8952 "report.c"
  }
#line 8954 "report.c"
}

#line 8957 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_ds_map_0_0_10001(
#line 8960 "report.c"
  MR_Box report__wrapper_arg_1,
#line 8962 "report.c"
  MR_Box report__wrapper_arg_2)
#line 8964 "report.c"
{
#line 8966 "report.c"
  {
#line 8968 "report.c"
    MR_bool report__succeeded;

#line 8971 "report.c"
    {
#line 8973 "report.c"
      report__succeeded = report____Unify____gs_ds_map_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 8976 "report.c"
    return report__succeeded;
#line 8978 "report.c"
  }
#line 8980 "report.c"
}

#line 8983 "report.c"
static void MR_CALL 
report____Compare____gs_ds_map_0_0_10001(
#line 8986 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 8988 "report.c"
  MR_Box report__wrapper_arg_2,
#line 8990 "report.c"
  MR_Box report__wrapper_arg_3)
#line 8992 "report.c"
{
#line 8994 "report.c"
  {
#line 8996 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 8999 "report.c"
    {
#line 9001 "report.c"
      report____Compare____gs_ds_map_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9004 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9006 "report.c"
  }
#line 9008 "report.c"
}

#line 9011 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_2_0_10001(
#line 9014 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9016 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9018 "report.c"
  MR_Box report__wrapper_arg_3,
#line 9020 "report.c"
  MR_Box report__wrapper_arg_4)
#line 9022 "report.c"
{
#line 9024 "report.c"
  {
#line 9026 "report.c"
    MR_bool report__succeeded;

#line 9029 "report.c"
    {
#line 9031 "report.c"
      report__succeeded = report____Unify____gs_field_info_2_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 9034 "report.c"
    return report__succeeded;
#line 9036 "report.c"
  }
#line 9038 "report.c"
}

#line 9041 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_2_0_10001(
#line 9044 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9046 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9048 "report.c"
  MR_Box * report__wrapper_arg_3,
#line 9050 "report.c"
  MR_Box report__wrapper_arg_4,
#line 9052 "report.c"
  MR_Box report__wrapper_arg_5)
#line 9054 "report.c"
{
#line 9056 "report.c"
  {
#line 9058 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9061 "report.c"
    {
#line 9063 "report.c"
      report____Compare____gs_field_info_2_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_4), ((MR_Word) report__wrapper_arg_5));
    }
#line 9066 "report.c"
    *report__wrapper_arg_3 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9068 "report.c"
  }
#line 9070 "report.c"
}

#line 9073 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_info_0_0_10001(
#line 9076 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9078 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9080 "report.c"
{
#line 9082 "report.c"
  {
#line 9084 "report.c"
    MR_bool report__succeeded;

#line 9087 "report.c"
    {
#line 9089 "report.c"
      report__succeeded = report____Unify____gs_field_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9092 "report.c"
    return report__succeeded;
#line 9094 "report.c"
  }
#line 9096 "report.c"
}

#line 9099 "report.c"
static void MR_CALL 
report____Compare____gs_field_info_0_0_10001(
#line 9102 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9104 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9106 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9108 "report.c"
{
#line 9110 "report.c"
  {
#line 9112 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9115 "report.c"
    {
#line 9117 "report.c"
      report____Compare____gs_field_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9120 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9122 "report.c"
  }
#line 9124 "report.c"
}

#line 9127 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_1_0_10001(
#line 9130 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9132 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9134 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9136 "report.c"
{
#line 9138 "report.c"
  {
#line 9140 "report.c"
    MR_bool report__succeeded;

#line 9143 "report.c"
    {
#line 9145 "report.c"
      report__succeeded = report____Unify____gs_field_map_1_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9148 "report.c"
    return report__succeeded;
#line 9150 "report.c"
  }
#line 9152 "report.c"
}

#line 9155 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_1_0_10001(
#line 9158 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9160 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 9162 "report.c"
  MR_Box report__wrapper_arg_3,
#line 9164 "report.c"
  MR_Box report__wrapper_arg_4)
#line 9166 "report.c"
{
#line 9168 "report.c"
  {
#line 9170 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9173 "report.c"
    {
#line 9175 "report.c"
      report____Compare____gs_field_map_1_0(((MR_Word) report__wrapper_arg_1), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 9178 "report.c"
    *report__wrapper_arg_2 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9180 "report.c"
  }
#line 9182 "report.c"
}

#line 9185 "report.c"
static MR_bool MR_CALL 
report____Unify____gs_field_map_0_0_10001(
#line 9188 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9190 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9192 "report.c"
{
#line 9194 "report.c"
  {
#line 9196 "report.c"
    MR_bool report__succeeded;

#line 9199 "report.c"
    {
#line 9201 "report.c"
      report__succeeded = report____Unify____gs_field_map_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9204 "report.c"
    return report__succeeded;
#line 9206 "report.c"
  }
#line 9208 "report.c"
}

#line 9211 "report.c"
static void MR_CALL 
report____Compare____gs_field_map_0_0_10001(
#line 9214 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9216 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9218 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9220 "report.c"
{
#line 9222 "report.c"
  {
#line 9224 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9227 "report.c"
    {
#line 9229 "report.c"
      report____Compare____gs_field_map_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9232 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9234 "report.c"
  }
#line 9236 "report.c"
}

#line 9239 "report.c"
static MR_bool MR_CALL 
report____Unify____inheritable_perf_0_0_10001(
#line 9242 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9244 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9246 "report.c"
{
#line 9248 "report.c"
  {
#line 9250 "report.c"
    MR_bool report__succeeded;

#line 9253 "report.c"
    {
#line 9255 "report.c"
      report__succeeded = report____Unify____inheritable_perf_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9258 "report.c"
    return report__succeeded;
#line 9260 "report.c"
  }
#line 9262 "report.c"
}

#line 9265 "report.c"
static void MR_CALL 
report____Compare____inheritable_perf_0_0_10001(
#line 9268 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9270 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9272 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9274 "report.c"
{
#line 9276 "report.c"
  {
#line 9278 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9281 "report.c"
    {
#line 9283 "report.c"
      report____Compare____inheritable_perf_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9286 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9288 "report.c"
  }
#line 9290 "report.c"
}

#line 9293 "report.c"
static MR_bool MR_CALL 
report____Unify____maybe_have_module_rep_0_0_10001(
#line 9296 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9298 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9300 "report.c"
{
#line 9302 "report.c"
  {
#line 9304 "report.c"
    MR_bool report__succeeded;

#line 9307 "report.c"
    {
#line 9309 "report.c"
      report__succeeded = report____Unify____maybe_have_module_rep_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9312 "report.c"
    return report__succeeded;
#line 9314 "report.c"
  }
#line 9316 "report.c"
}

#line 9319 "report.c"
static void MR_CALL 
report____Compare____maybe_have_module_rep_0_0_10001(
#line 9322 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9324 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9326 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9328 "report.c"
{
#line 9330 "report.c"
  {
#line 9332 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9335 "report.c"
    {
#line 9337 "report.c"
      report____Compare____maybe_have_module_rep_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9340 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9342 "report.c"
  }
#line 9344 "report.c"
}

#line 9347 "report.c"
static MR_bool MR_CALL 
report____Unify____menu_report_0_0_10001(
#line 9350 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9352 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9354 "report.c"
{
#line 9356 "report.c"
  {
#line 9358 "report.c"
    MR_bool report__succeeded;

#line 9361 "report.c"
    {
#line 9363 "report.c"
      report__succeeded = report____Unify____menu_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9366 "report.c"
    return report__succeeded;
#line 9368 "report.c"
  }
#line 9370 "report.c"
}

#line 9373 "report.c"
static void MR_CALL 
report____Compare____menu_report_0_0_10001(
#line 9376 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9378 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9380 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9382 "report.c"
{
#line 9384 "report.c"
  {
#line 9386 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9389 "report.c"
    {
#line 9391 "report.c"
      report____Compare____menu_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9394 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9396 "report.c"
  }
#line 9398 "report.c"
}

#line 9401 "report.c"
static MR_bool MR_CALL 
report____Unify____message_report_0_0_10001(
#line 9404 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9406 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9408 "report.c"
{
#line 9410 "report.c"
  {
#line 9412 "report.c"
    MR_bool report__succeeded;

#line 9415 "report.c"
    {
#line 9417 "report.c"
      report__succeeded = report____Unify____message_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9420 "report.c"
    return report__succeeded;
#line 9422 "report.c"
  }
#line 9424 "report.c"
}

#line 9427 "report.c"
static void MR_CALL 
report____Compare____message_report_0_0_10001(
#line 9430 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9432 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9434 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9436 "report.c"
{
#line 9438 "report.c"
  {
#line 9440 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9443 "report.c"
    {
#line 9445 "report.c"
      report____Compare____message_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9448 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9450 "report.c"
  }
#line 9452 "report.c"
}

#line 9455 "report.c"
static MR_bool MR_CALL 
report____Unify____module_active_0_0_10001(
#line 9458 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9460 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9462 "report.c"
{
#line 9464 "report.c"
  {
#line 9466 "report.c"
    MR_bool report__succeeded;

#line 9469 "report.c"
    {
#line 9471 "report.c"
      report__succeeded = report____Unify____module_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9474 "report.c"
    return report__succeeded;
#line 9476 "report.c"
  }
#line 9478 "report.c"
}

#line 9481 "report.c"
static void MR_CALL 
report____Compare____module_active_0_0_10001(
#line 9484 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9486 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9488 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9490 "report.c"
{
#line 9492 "report.c"
  {
#line 9494 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9497 "report.c"
    {
#line 9499 "report.c"
      report____Compare____module_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9502 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9504 "report.c"
  }
#line 9506 "report.c"
}

#line 9509 "report.c"
static MR_bool MR_CALL 
report____Unify____module_getter_setters_report_0_0_10001(
#line 9512 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9514 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9516 "report.c"
{
#line 9518 "report.c"
  {
#line 9520 "report.c"
    MR_bool report__succeeded;

#line 9523 "report.c"
    {
#line 9525 "report.c"
      report__succeeded = report____Unify____module_getter_setters_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9528 "report.c"
    return report__succeeded;
#line 9530 "report.c"
  }
#line 9532 "report.c"
}

#line 9535 "report.c"
static void MR_CALL 
report____Compare____module_getter_setters_report_0_0_10001(
#line 9538 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9540 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9542 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9544 "report.c"
{
#line 9546 "report.c"
  {
#line 9548 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9551 "report.c"
    {
#line 9553 "report.c"
      report____Compare____module_getter_setters_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9556 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9558 "report.c"
  }
#line 9560 "report.c"
}

#line 9563 "report.c"
static MR_bool MR_CALL 
report____Unify____module_is_active_0_0_10001(
#line 9566 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9568 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9570 "report.c"
{
#line 9572 "report.c"
  {
#line 9574 "report.c"
    MR_bool report__succeeded;

#line 9577 "report.c"
    {
#line 9579 "report.c"
      report__succeeded = report____Unify____module_is_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9582 "report.c"
    return report__succeeded;
#line 9584 "report.c"
  }
#line 9586 "report.c"
}

#line 9589 "report.c"
static void MR_CALL 
report____Compare____module_is_active_0_0_10001(
#line 9592 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9594 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9596 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9598 "report.c"
{
#line 9600 "report.c"
  {
#line 9602 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9605 "report.c"
    {
#line 9607 "report.c"
      report____Compare____module_is_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9610 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9612 "report.c"
  }
#line 9614 "report.c"
}

#line 9617 "report.c"
static MR_bool MR_CALL 
report____Unify____module_rep_report_0_0_10001(
#line 9620 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9622 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9624 "report.c"
{
#line 9626 "report.c"
  {
#line 9628 "report.c"
    MR_bool report__succeeded;

#line 9631 "report.c"
    {
#line 9633 "report.c"
      report__succeeded = report____Unify____module_rep_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9636 "report.c"
    return report__succeeded;
#line 9638 "report.c"
  }
#line 9640 "report.c"
}

#line 9643 "report.c"
static void MR_CALL 
report____Compare____module_rep_report_0_0_10001(
#line 9646 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9648 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9650 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9652 "report.c"
{
#line 9654 "report.c"
  {
#line 9656 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9659 "report.c"
    {
#line 9661 "report.c"
      report____Compare____module_rep_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9664 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9666 "report.c"
  }
#line 9668 "report.c"
}

#line 9671 "report.c"
static MR_bool MR_CALL 
report____Unify____module_report_0_0_10001(
#line 9674 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9676 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9678 "report.c"
{
#line 9680 "report.c"
  {
#line 9682 "report.c"
    MR_bool report__succeeded;

#line 9685 "report.c"
    {
#line 9687 "report.c"
      report__succeeded = report____Unify____module_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9690 "report.c"
    return report__succeeded;
#line 9692 "report.c"
  }
#line 9694 "report.c"
}

#line 9697 "report.c"
static void MR_CALL 
report____Compare____module_report_0_0_10001(
#line 9700 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9702 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9704 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9706 "report.c"
{
#line 9708 "report.c"
  {
#line 9710 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9713 "report.c"
    {
#line 9715 "report.c"
      report____Compare____module_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9718 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9720 "report.c"
  }
#line 9722 "report.c"
}

#line 9725 "report.c"
static MR_bool MR_CALL 
report____Unify____normal_callee_id_0_0_10001(
#line 9728 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9730 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9732 "report.c"
{
#line 9734 "report.c"
  {
#line 9736 "report.c"
    MR_bool report__succeeded;

#line 9739 "report.c"
    {
#line 9741 "report.c"
      report__succeeded = report____Unify____normal_callee_id_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9744 "report.c"
    return report__succeeded;
#line 9746 "report.c"
  }
#line 9748 "report.c"
}

#line 9751 "report.c"
static void MR_CALL 
report____Compare____normal_callee_id_0_0_10001(
#line 9754 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9756 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9758 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9760 "report.c"
{
#line 9762 "report.c"
  {
#line 9764 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9767 "report.c"
    {
#line 9769 "report.c"
      report____Compare____normal_callee_id_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9772 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9774 "report.c"
  }
#line 9776 "report.c"
}

#line 9779 "report.c"
static MR_bool MR_CALL 
report____Unify____perf_row_data_1_0_10001(
#line 9782 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9784 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9786 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9788 "report.c"
{
#line 9790 "report.c"
  {
#line 9792 "report.c"
    MR_bool report__succeeded;

#line 9795 "report.c"
    {
#line 9797 "report.c"
      report__succeeded = report____Unify____perf_row_data_1_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9800 "report.c"
    return report__succeeded;
#line 9802 "report.c"
  }
#line 9804 "report.c"
}

#line 9807 "report.c"
static void MR_CALL 
report____Compare____perf_row_data_1_0_10001(
#line 9810 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9812 "report.c"
  MR_Box * report__wrapper_arg_2,
#line 9814 "report.c"
  MR_Box report__wrapper_arg_3,
#line 9816 "report.c"
  MR_Box report__wrapper_arg_4)
#line 9818 "report.c"
{
#line 9820 "report.c"
  {
#line 9822 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9825 "report.c"
    {
#line 9827 "report.c"
      report____Compare____perf_row_data_1_0(((MR_Word) report__wrapper_arg_1), &report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_3), ((MR_Word) report__wrapper_arg_4));
    }
#line 9830 "report.c"
    *report__wrapper_arg_2 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9832 "report.c"
  }
#line 9834 "report.c"
}

#line 9837 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_active_0_0_10001(
#line 9840 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9842 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9844 "report.c"
{
#line 9846 "report.c"
  {
#line 9848 "report.c"
    MR_bool report__succeeded;

#line 9851 "report.c"
    {
#line 9853 "report.c"
      report__succeeded = report____Unify____proc_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9856 "report.c"
    return report__succeeded;
#line 9858 "report.c"
  }
#line 9860 "report.c"
}

#line 9863 "report.c"
static void MR_CALL 
report____Compare____proc_active_0_0_10001(
#line 9866 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9868 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9870 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9872 "report.c"
{
#line 9874 "report.c"
  {
#line 9876 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9879 "report.c"
    {
#line 9881 "report.c"
      report____Compare____proc_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9884 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9886 "report.c"
  }
#line 9888 "report.c"
}

#line 9891 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_0_0_10001(
#line 9894 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9896 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9898 "report.c"
{
#line 9900 "report.c"
  {
#line 9902 "report.c"
    MR_bool report__succeeded;

#line 9905 "report.c"
    {
#line 9907 "report.c"
      report__succeeded = report____Unify____proc_callers_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9910 "report.c"
    return report__succeeded;
#line 9912 "report.c"
  }
#line 9914 "report.c"
}

#line 9917 "report.c"
static void MR_CALL 
report____Compare____proc_callers_0_0_10001(
#line 9920 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9922 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9924 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9926 "report.c"
{
#line 9928 "report.c"
  {
#line 9930 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9933 "report.c"
    {
#line 9935 "report.c"
      report____Compare____proc_callers_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9938 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9940 "report.c"
  }
#line 9942 "report.c"
}

#line 9945 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_callers_report_0_0_10001(
#line 9948 "report.c"
  MR_Box report__wrapper_arg_1,
#line 9950 "report.c"
  MR_Box report__wrapper_arg_2)
#line 9952 "report.c"
{
#line 9954 "report.c"
  {
#line 9956 "report.c"
    MR_bool report__succeeded;

#line 9959 "report.c"
    {
#line 9961 "report.c"
      report__succeeded = report____Unify____proc_callers_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 9964 "report.c"
    return report__succeeded;
#line 9966 "report.c"
  }
#line 9968 "report.c"
}

#line 9971 "report.c"
static void MR_CALL 
report____Compare____proc_callers_report_0_0_10001(
#line 9974 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 9976 "report.c"
  MR_Box report__wrapper_arg_2,
#line 9978 "report.c"
  MR_Box report__wrapper_arg_3)
#line 9980 "report.c"
{
#line 9982 "report.c"
  {
#line 9984 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 9987 "report.c"
    {
#line 9989 "report.c"
      report____Compare____proc_callers_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 9992 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 9994 "report.c"
  }
#line 9996 "report.c"
}

#line 9999 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_desc_0_0_10001(
#line 10002 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10004 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10006 "report.c"
{
#line 10008 "report.c"
  {
#line 10010 "report.c"
    MR_bool report__succeeded;

#line 10013 "report.c"
    {
#line 10015 "report.c"
      report__succeeded = report____Unify____proc_desc_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10018 "report.c"
    return report__succeeded;
#line 10020 "report.c"
  }
#line 10022 "report.c"
}

#line 10025 "report.c"
static void MR_CALL 
report____Compare____proc_desc_0_0_10001(
#line 10028 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10030 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10032 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10034 "report.c"
{
#line 10036 "report.c"
  {
#line 10038 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10041 "report.c"
    {
#line 10043 "report.c"
      report____Compare____proc_desc_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10046 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10048 "report.c"
  }
#line 10050 "report.c"
}

#line 10053 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_dynamic_dump_info_0_0_10001(
#line 10056 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10058 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10060 "report.c"
{
#line 10062 "report.c"
  {
#line 10064 "report.c"
    MR_bool report__succeeded;

#line 10067 "report.c"
    {
#line 10069 "report.c"
      report__succeeded = report____Unify____proc_dynamic_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10072 "report.c"
    return report__succeeded;
#line 10074 "report.c"
  }
#line 10076 "report.c"
}

#line 10079 "report.c"
static void MR_CALL 
report____Compare____proc_dynamic_dump_info_0_0_10001(
#line 10082 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10084 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10086 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10088 "report.c"
{
#line 10090 "report.c"
  {
#line 10092 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10095 "report.c"
    {
#line 10097 "report.c"
      report____Compare____proc_dynamic_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10100 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10102 "report.c"
  }
#line 10104 "report.c"
}

#line 10107 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_is_active_0_0_10001(
#line 10110 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10112 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10114 "report.c"
{
#line 10116 "report.c"
  {
#line 10118 "report.c"
    MR_bool report__succeeded;

#line 10121 "report.c"
    {
#line 10123 "report.c"
      report__succeeded = report____Unify____proc_is_active_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10126 "report.c"
    return report__succeeded;
#line 10128 "report.c"
  }
#line 10130 "report.c"
}

#line 10133 "report.c"
static void MR_CALL 
report____Compare____proc_is_active_0_0_10001(
#line 10136 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10138 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10140 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10142 "report.c"
{
#line 10144 "report.c"
  {
#line 10146 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10149 "report.c"
    {
#line 10151 "report.c"
      report____Compare____proc_is_active_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10154 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10156 "report.c"
  }
#line 10158 "report.c"
}

#line 10161 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_report_0_0_10001(
#line 10164 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10166 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10168 "report.c"
{
#line 10170 "report.c"
  {
#line 10172 "report.c"
    MR_bool report__succeeded;

#line 10175 "report.c"
    {
#line 10177 "report.c"
      report__succeeded = report____Unify____proc_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10180 "report.c"
    return report__succeeded;
#line 10182 "report.c"
  }
#line 10184 "report.c"
}

#line 10187 "report.c"
static void MR_CALL 
report____Compare____proc_report_0_0_10001(
#line 10190 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10192 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10194 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10196 "report.c"
{
#line 10198 "report.c"
  {
#line 10200 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10203 "report.c"
    {
#line 10205 "report.c"
      report____Compare____proc_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10208 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10210 "report.c"
  }
#line 10212 "report.c"
}

#line 10215 "report.c"
static MR_bool MR_CALL 
report____Unify____proc_static_dump_info_0_0_10001(
#line 10218 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10220 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10222 "report.c"
{
#line 10224 "report.c"
  {
#line 10226 "report.c"
    MR_bool report__succeeded;

#line 10229 "report.c"
    {
#line 10231 "report.c"
      report__succeeded = report____Unify____proc_static_dump_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10234 "report.c"
    return report__succeeded;
#line 10236 "report.c"
  }
#line 10238 "report.c"
}

#line 10241 "report.c"
static void MR_CALL 
report____Compare____proc_static_dump_info_0_0_10001(
#line 10244 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10246 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10248 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10250 "report.c"
{
#line 10252 "report.c"
  {
#line 10254 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10257 "report.c"
    {
#line 10259 "report.c"
      report____Compare____proc_static_dump_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10262 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10264 "report.c"
  }
#line 10266 "report.c"
}

#line 10269 "report.c"
static MR_bool MR_CALL 
report____Unify____procrep_coverage_info_0_0_10001(
#line 10272 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10274 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10276 "report.c"
{
#line 10278 "report.c"
  {
#line 10280 "report.c"
    MR_bool report__succeeded;

#line 10283 "report.c"
    {
#line 10285 "report.c"
      report__succeeded = report____Unify____procrep_coverage_info_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10288 "report.c"
    return report__succeeded;
#line 10290 "report.c"
  }
#line 10292 "report.c"
}

#line 10295 "report.c"
static void MR_CALL 
report____Compare____procrep_coverage_info_0_0_10001(
#line 10298 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10300 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10302 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10304 "report.c"
{
#line 10306 "report.c"
  {
#line 10308 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10311 "report.c"
    {
#line 10313 "report.c"
      report____Compare____procrep_coverage_info_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10316 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10318 "report.c"
  }
#line 10320 "report.c"
}

#line 10323 "report.c"
static MR_bool MR_CALL 
report____Unify____program_modules_report_0_0_10001(
#line 10326 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10328 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10330 "report.c"
{
#line 10332 "report.c"
  {
#line 10334 "report.c"
    MR_bool report__succeeded;

#line 10337 "report.c"
    {
#line 10339 "report.c"
      report__succeeded = report____Unify____program_modules_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10342 "report.c"
    return report__succeeded;
#line 10344 "report.c"
  }
#line 10346 "report.c"
}

#line 10349 "report.c"
static void MR_CALL 
report____Compare____program_modules_report_0_0_10001(
#line 10352 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10354 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10356 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10358 "report.c"
{
#line 10360 "report.c"
  {
#line 10362 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10365 "report.c"
    {
#line 10367 "report.c"
      report____Compare____program_modules_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10370 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10372 "report.c"
  }
#line 10374 "report.c"
}

#line 10377 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_level_report_0_0_10001(
#line 10380 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10382 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10384 "report.c"
{
#line 10386 "report.c"
  {
#line 10388 "report.c"
    MR_bool report__succeeded;

#line 10391 "report.c"
    {
#line 10393 "report.c"
      report__succeeded = report____Unify____recursion_level_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10396 "report.c"
    return report__succeeded;
#line 10398 "report.c"
  }
#line 10400 "report.c"
}

#line 10403 "report.c"
static void MR_CALL 
report____Compare____recursion_level_report_0_0_10001(
#line 10406 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10408 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10410 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10412 "report.c"
{
#line 10414 "report.c"
  {
#line 10416 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10419 "report.c"
    {
#line 10421 "report.c"
      report____Compare____recursion_level_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10424 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10426 "report.c"
  }
#line 10428 "report.c"
}

#line 10431 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_0_0_10001(
#line 10434 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10436 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10438 "report.c"
{
#line 10440 "report.c"
  {
#line 10442 "report.c"
    MR_bool report__succeeded;

#line 10445 "report.c"
    {
#line 10447 "report.c"
      report__succeeded = report____Unify____recursion_type_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10450 "report.c"
    return report__succeeded;
#line 10452 "report.c"
  }
#line 10454 "report.c"
}

#line 10457 "report.c"
static void MR_CALL 
report____Compare____recursion_type_0_0_10001(
#line 10460 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10462 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10464 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10466 "report.c"
{
#line 10468 "report.c"
  {
#line 10470 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10473 "report.c"
    {
#line 10475 "report.c"
      report____Compare____recursion_type_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10478 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10480 "report.c"
  }
#line 10482 "report.c"
}

#line 10485 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_freq_data_0_0_10001(
#line 10488 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10490 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10492 "report.c"
{
#line 10494 "report.c"
  {
#line 10496 "report.c"
    MR_bool report__succeeded;

#line 10499 "report.c"
    {
#line 10501 "report.c"
      report__succeeded = report____Unify____recursion_type_freq_data_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10504 "report.c"
    return report__succeeded;
#line 10506 "report.c"
  }
#line 10508 "report.c"
}

#line 10511 "report.c"
static void MR_CALL 
report____Compare____recursion_type_freq_data_0_0_10001(
#line 10514 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10516 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10518 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10520 "report.c"
{
#line 10522 "report.c"
  {
#line 10524 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10527 "report.c"
    {
#line 10529 "report.c"
      report____Compare____recursion_type_freq_data_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10532 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10534 "report.c"
  }
#line 10536 "report.c"
}

#line 10539 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_histogram_0_0_10001(
#line 10542 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10544 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10546 "report.c"
{
#line 10548 "report.c"
  {
#line 10550 "report.c"
    MR_bool report__succeeded;

#line 10553 "report.c"
    {
#line 10555 "report.c"
      report__succeeded = report____Unify____recursion_type_histogram_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10558 "report.c"
    return report__succeeded;
#line 10560 "report.c"
  }
#line 10562 "report.c"
}

#line 10565 "report.c"
static void MR_CALL 
report____Compare____recursion_type_histogram_0_0_10001(
#line 10568 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10570 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10572 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10574 "report.c"
{
#line 10576 "report.c"
  {
#line 10578 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10581 "report.c"
    {
#line 10583 "report.c"
      report____Compare____recursion_type_histogram_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10586 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10588 "report.c"
  }
#line 10590 "report.c"
}

#line 10593 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_freq_data_0_0_10001(
#line 10596 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10598 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10600 "report.c"
{
#line 10602 "report.c"
  {
#line 10604 "report.c"
    MR_bool report__succeeded;

#line 10607 "report.c"
    {
#line 10609 "report.c"
      report__succeeded = report____Unify____recursion_type_proc_freq_data_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10612 "report.c"
    return report__succeeded;
#line 10614 "report.c"
  }
#line 10616 "report.c"
}

#line 10619 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_freq_data_0_0_10001(
#line 10622 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10624 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10626 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10628 "report.c"
{
#line 10630 "report.c"
  {
#line 10632 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10635 "report.c"
    {
#line 10637 "report.c"
      report____Compare____recursion_type_proc_freq_data_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10640 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10642 "report.c"
  }
#line 10644 "report.c"
}

#line 10647 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_proc_map_0_0_10001(
#line 10650 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10652 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10654 "report.c"
{
#line 10656 "report.c"
  {
#line 10658 "report.c"
    MR_bool report__succeeded;

#line 10661 "report.c"
    {
#line 10663 "report.c"
      report__succeeded = report____Unify____recursion_type_proc_map_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10666 "report.c"
    return report__succeeded;
#line 10668 "report.c"
  }
#line 10670 "report.c"
}

#line 10673 "report.c"
static void MR_CALL 
report____Compare____recursion_type_proc_map_0_0_10001(
#line 10676 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10678 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10680 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10682 "report.c"
{
#line 10684 "report.c"
  {
#line 10686 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10689 "report.c"
    {
#line 10691 "report.c"
      report____Compare____recursion_type_proc_map_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10694 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10696 "report.c"
  }
#line 10698 "report.c"
}

#line 10701 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_type_simple_0_0_10001(
#line 10704 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10706 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10708 "report.c"
{
#line 10710 "report.c"
  {
#line 10712 "report.c"
    MR_bool report__succeeded;

#line 10715 "report.c"
    {
#line 10717 "report.c"
      report__succeeded = report____Unify____recursion_type_simple_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10720 "report.c"
    return report__succeeded;
#line 10722 "report.c"
  }
#line 10724 "report.c"
}

#line 10727 "report.c"
static void MR_CALL 
report____Compare____recursion_type_simple_0_0_10001(
#line 10730 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10732 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10734 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10736 "report.c"
{
#line 10738 "report.c"
  {
#line 10740 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10743 "report.c"
    {
#line 10745 "report.c"
      report____Compare____recursion_type_simple_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10748 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10750 "report.c"
  }
#line 10752 "report.c"
}

#line 10755 "report.c"
static MR_bool MR_CALL 
report____Unify____recursion_types_frequency_report_0_0_10001(
#line 10758 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10760 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10762 "report.c"
{
#line 10764 "report.c"
  {
#line 10766 "report.c"
    MR_bool report__succeeded;

#line 10769 "report.c"
    {
#line 10771 "report.c"
      report__succeeded = report____Unify____recursion_types_frequency_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10774 "report.c"
    return report__succeeded;
#line 10776 "report.c"
  }
#line 10778 "report.c"
}

#line 10781 "report.c"
static void MR_CALL 
report____Compare____recursion_types_frequency_report_0_0_10001(
#line 10784 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10786 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10788 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10790 "report.c"
{
#line 10792 "report.c"
  {
#line 10794 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10797 "report.c"
    {
#line 10799 "report.c"
      report____Compare____recursion_types_frequency_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10802 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10804 "report.c"
  }
#line 10806 "report.c"
}

#line 10809 "report.c"
static MR_bool MR_CALL 
report____Unify____report_ordering_0_0_10001(
#line 10812 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10814 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10816 "report.c"
{
#line 10818 "report.c"
  {
#line 10820 "report.c"
    MR_bool report__succeeded;

#line 10823 "report.c"
    {
#line 10825 "report.c"
      report__succeeded = report____Unify____report_ordering_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10828 "report.c"
    return report__succeeded;
#line 10830 "report.c"
  }
#line 10832 "report.c"
}

#line 10835 "report.c"
static void MR_CALL 
report____Compare____report_ordering_0_0_10001(
#line 10838 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10840 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10842 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10844 "report.c"
{
#line 10846 "report.c"
  {
#line 10848 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10851 "report.c"
    {
#line 10853 "report.c"
      report____Compare____report_ordering_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10856 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10858 "report.c"
  }
#line 10860 "report.c"
}

#line 10863 "report.c"
static MR_bool MR_CALL 
report____Unify____top_procs_report_0_0_10001(
#line 10866 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10868 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10870 "report.c"
{
#line 10872 "report.c"
  {
#line 10874 "report.c"
    MR_bool report__succeeded;

#line 10877 "report.c"
    {
#line 10879 "report.c"
      report__succeeded = report____Unify____top_procs_report_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10882 "report.c"
    return report__succeeded;
#line 10884 "report.c"
  }
#line 10886 "report.c"
}

#line 10889 "report.c"
static void MR_CALL 
report____Compare____top_procs_report_0_0_10001(
#line 10892 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10894 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10896 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10898 "report.c"
{
#line 10900 "report.c"
  {
#line 10902 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10905 "report.c"
    {
#line 10907 "report.c"
      report____Compare____top_procs_report_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10910 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10912 "report.c"
  }
#line 10914 "report.c"
}

#line 10917 "report.c"
static MR_bool MR_CALL 
report____Unify____var_use_and_name_0_0_10001(
#line 10920 "report.c"
  MR_Box report__wrapper_arg_1,
#line 10922 "report.c"
  MR_Box report__wrapper_arg_2)
#line 10924 "report.c"
{
#line 10926 "report.c"
  {
#line 10928 "report.c"
    MR_bool report__succeeded;

#line 10931 "report.c"
    {
#line 10933 "report.c"
      report__succeeded = report____Unify____var_use_and_name_0_0(((MR_Word) report__wrapper_arg_1), ((MR_Word) report__wrapper_arg_2));
    }
#line 10936 "report.c"
    return report__succeeded;
#line 10938 "report.c"
  }
#line 10940 "report.c"
}

#line 10943 "report.c"
static void MR_CALL 
report____Compare____var_use_and_name_0_0_10001(
#line 10946 "report.c"
  MR_Box * report__wrapper_arg_1,
#line 10948 "report.c"
  MR_Box report__wrapper_arg_2,
#line 10950 "report.c"
  MR_Box report__wrapper_arg_3)
#line 10952 "report.c"
{
#line 10954 "report.c"
  {
#line 10956 "report.c"
    MR_Word report__conv0_HeadVar__1_1;

#line 10959 "report.c"
    {
#line 10961 "report.c"
      report____Compare____var_use_and_name_0_0(&report__conv0_HeadVar__1_1, ((MR_Word) report__wrapper_arg_2), ((MR_Word) report__wrapper_arg_3));
    }
#line 10964 "report.c"
    *report__wrapper_arg_1 = ((MR_Box) (report__conv0_HeadVar__1_1));
#line 10966 "report.c"
  }
#line 10968 "report.c"
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
#line 10995 "report.c"
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
#line 11017 "report.c"
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

#line 11078 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 549 "report.m"
        if (report__succeeded)
#line 11082 "report.c"
          {
#line 11084 "report.c"
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
#line 11120 "report.c"
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
#line 11142 "report.c"
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

#line 11209 "report.c"
        {
#line 11211 "report.c"
          report__succeeded = report____Unify____report_ordering_0_0(report__V_3_3, report__V_5_5);
        }
#line 381 "report.m"
        if (report__succeeded)
#line 381 "report.m"
          {
#line 11218 "report.c"
            report__TypeInfo_9_9 = (MR_Word) &report_scalar_common_1[5];
#line 11220 "report.c"
            {
#line 11222 "report.c"
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
#line 11260 "report.c"
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
#line 11290 "report.c"
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
#line 11314 "report.c"
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
#line 11338 "report.c"
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

#line 11420 "report.c"
        {
#line 11422 "report.c"
          report__succeeded = query____Unify____display_limit_0_0(report__V_3_3, report__V_7_7);
        }
#line 617 "report.m"
        if (report__succeeded)
#line 617 "report.m"
          {
#line 11429 "report.c"
            report__succeeded = (report__V_4_4 == report__V_8_8);
#line 617 "report.m"
            if (report__succeeded)
#line 617 "report.m"
              {
#line 11435 "report.c"
                report__succeeded = (report__V_5_5 == report__V_9_9);
#line 617 "report.m"
                if (report__succeeded)
#line 11439 "report.c"
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
#line 11478 "report.c"
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

#line 11536 "report.c"
        {
#line 11538 "report.c"
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
#line 11574 "report.c"
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
#line 11606 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                else
#line 280 "report.m"
                  if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11612 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                  else
#line 11616 "report.c"
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
#line 11648 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                  else
#line 280 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11654 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                    else
#line 11658 "report.c"
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
#line 11690 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                    else
#line 280 "report.m"
                      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11696 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                      else
#line 11700 "report.c"
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
#line 11732 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                      else
#line 280 "report.m"
                        if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11738 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                        else
#line 11742 "report.c"
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
#line 11755 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                  else
#line 280 "report.m"
                    if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11761 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                    else
#line 280 "report.m"
                      if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 11767 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                      else
#line 280 "report.m"
                        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 11773 "report.c"
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
#line 11797 "report.c"
                              *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                            else
#line 11801 "report.c"
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
#line 11816 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                    else
#line 280 "report.m"
                      if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11822 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                      else
#line 280 "report.m"
                        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 11828 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                        else
#line 280 "report.m"
                          if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 11834 "report.c"
                            *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                          else
#line 280 "report.m"
                            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 11840 "report.c"
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
#line 11862 "report.c"
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
#line 11875 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                    else
#line 280 "report.m"
                      if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11881 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                      else
#line 280 "report.m"
                        if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 11887 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 280 "report.m"
                        else
#line 280 "report.m"
                          if ((report__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 11893 "report.c"
                            *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                          else
#line 280 "report.m"
                            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 11899 "report.c"
                              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 280 "report.m"
                            else
#line 280 "report.m"
                              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 11905 "report.c"
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
#line 12033 "report.c"
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
#line 12058 "report.c"
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
#line 12083 "report.c"
                        report__TypeInfo_19_19 = (MR_Word) &report_scalar_common_1[37];
#line 12085 "report.c"
                        {
#line 12087 "report.c"
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
#line 12187 "report.c"
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
#line 12213 "report.c"
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
#line 12233 "report.c"
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

#line 12306 "report.c"
        report__succeeded = (report__V_3_3 == report__V_6_6);
#line 306 "report.m"
        if (report__succeeded)
#line 306 "report.m"
          {
#line 12312 "report.c"
            {
#line 12314 "report.c"
              report__succeeded = measurement_units____Unify____percent_0_0(report__V_4_4, report__V_7_7);
            }
#line 306 "report.m"
            if (report__succeeded)
#line 306 "report.m"
              {
#line 12321 "report.c"
                report__TypeCtorInfo_12_12 = (MR_Word) &report__report__type_ctor_info_proc_desc_0;
#line 12323 "report.c"
                {
#line 12325 "report.c"
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
#line 12427 "report.c"
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
#line 12457 "report.c"
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
#line 12477 "report.c"
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
#line 12497 "report.c"
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

#line 12578 "report.c"
        report__succeeded = (report__V_3_3 == report__V_7_7);
#line 295 "report.m"
        if (report__succeeded)
#line 295 "report.m"
          {
#line 12584 "report.c"
            {
#line 12586 "report.c"
              report__succeeded = measurement_units____Unify____percent_0_0(report__V_4_4, report__V_8_8);
            }
#line 295 "report.m"
            if (report__succeeded)
#line 295 "report.m"
              {
#line 12593 "report.c"
                report__TypeInfo_14_14 = (MR_Word) &report_scalar_common_1[36];
#line 12595 "report.c"
                {
#line 12597 "report.c"
                  report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_14_14, ((MR_Box) (report__V_5_5)), ((MR_Box) (report__V_9_9)));
                }
#line 295 "report.m"
                if (report__succeeded)
#line 295 "report.m"
                  {
#line 12604 "report.c"
                    report__TypeInfo_15_15 = (MR_Word) &report_scalar_common_2[21];
#line 12606 "report.c"
                    {
#line 12608 "report.c"
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
#line 12650 "report.c"
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
#line 12664 "report.c"
            *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
          else
#line 222 "report.m"
            if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 12670 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
            else
#line 222 "report.m"
              if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 12676 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
              else
#line 222 "report.m"
                if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12682 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                else
#line 12686 "report.c"
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
#line 12701 "report.c"
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
#line 12721 "report.c"
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
#line 12744 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                else
#line 222 "report.m"
                  if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 12750 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                  else
#line 222 "report.m"
                    if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12756 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                    else
#line 12760 "report.c"
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
#line 12783 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
              else
#line 222 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12789 "report.c"
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
#line 12815 "report.c"
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
#line 12835 "report.c"
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
#line 12855 "report.c"
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
#line 12875 "report.c"
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
#line 12908 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                    else
#line 222 "report.m"
                      if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 12914 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                      else
#line 12918 "report.c"
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
#line 12933 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                else
#line 222 "report.m"
                  if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12939 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                  else
#line 222 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 12945 "report.c"
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
#line 12969 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                        else
#line 12973 "report.c"
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
#line 12988 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                  else
#line 222 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 12994 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                    else
#line 222 "report.m"
                      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 13000 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                      else
#line 222 "report.m"
                        if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 13006 "report.c"
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
#line 13028 "report.c"
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
#line 13041 "report.c"
                    *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                  else
#line 222 "report.m"
                    if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 13047 "report.c"
                      *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                    else
#line 222 "report.m"
                      if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 13053 "report.c"
                        *report__HeadVar__1_1 = (MR_Integer) 2;
#line 222 "report.m"
                      else
#line 222 "report.m"
                        if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 13059 "report.c"
                          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 222 "report.m"
                        else
#line 222 "report.m"
                          if (((((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 13065 "report.c"
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
#line 13154 "report.c"
                {
#line 13156 "report.c"
                  report__succeeded = report____Unify____recursion_level_report_0_0(report__V_15_15, report__V_17_17);
                }
#line 222 "report.m"
                if (report__succeeded)
#line 13161 "report.c"
                  {
#line 13163 "report.c"
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
#line 13213 "report.c"
                  {
#line 13215 "report.c"
                    report__succeeded = report____Unify____recursion_level_report_0_0(report__V_5_5, report__V_10_10);
                  }
#line 222 "report.m"
                  if (report__succeeded)
#line 222 "report.m"
                    {
#line 13222 "report.c"
                      {
#line 13224 "report.c"
                        report__succeeded = report____Unify____recursion_level_report_0_0(report__V_6_6, report__V_11_11);
                      }
#line 222 "report.m"
                      if (report__succeeded)
#line 222 "report.m"
                        {
#line 13231 "report.c"
                          report__succeeded = (report__V_7_7 == report__V_12_12);
#line 222 "report.m"
                          if (report__succeeded)
#line 222 "report.m"
                            {
#line 13237 "report.c"
                              report__succeeded = (report__V_8_8 == report__V_13_13);
#line 222 "report.m"
                              if (report__succeeded)
#line 13241 "report.c"
                                {
#line 13243 "report.c"
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
#line 13277 "report.c"
                    report__TypeInfo_27_27 = (MR_Word) &report_scalar_common_1[34];
#line 13279 "report.c"
                    {
#line 13281 "report.c"
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
#line 13307 "report.c"
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
#line 13332 "report.c"
                      report__TypeInfo_28_28 = (MR_Word) &report_scalar_common_1[35];
#line 13334 "report.c"
                      {
#line 13336 "report.c"
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
#line 13374 "report.c"
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
#line 13408 "report.c"
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
#line 13428 "report.c"
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
#line 13448 "report.c"
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
#line 13468 "report.c"
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

#line 13547 "report.c"
        report__succeeded = (report__V_3_3 == report__V_8_8);
#line 263 "report.m"
        if (report__succeeded)
#line 263 "report.m"
          {
#line 13553 "report.c"
            report__succeeded = (report__V_4_4 == report__V_9_9);
#line 263 "report.m"
            if (report__succeeded)
#line 263 "report.m"
              {
#line 13559 "report.c"
                report__succeeded = (report__V_5_5 == report__V_10_10);
#line 263 "report.m"
                if (report__succeeded)
#line 263 "report.m"
                  {
#line 13565 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_11_11);
#line 263 "report.m"
                    if (report__succeeded)
#line 13569 "report.c"
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
#line 13610 "report.c"
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

#line 13668 "report.c"
        {
#line 13670 "report.c"
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
#line 13706 "report.c"
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
#line 13736 "report.c"
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
#line 13756 "report.c"
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

#line 13835 "report.c"
        report__succeeded = (report__V_14_14 == report__V_15_15);
#line 441 "report.m"
        if (report__succeeded)
#line 441 "report.m"
          {
#line 13841 "report.c"
            report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[30];
#line 13843 "report.c"
            {
#line 13845 "report.c"
              report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
            }
#line 441 "report.m"
            if (report__succeeded)
#line 441 "report.m"
              {
#line 13852 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[31];
#line 13854 "report.c"
                {
#line 13856 "report.c"
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
#line 13896 "report.c"
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
#line 13946 "report.c"
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
#line 13966 "report.c"
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
#line 13986 "report.c"
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
#line 14006 "report.c"
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
#line 14026 "report.c"
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
#line 14046 "report.c"
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
#line 14066 "report.c"
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

#line 14167 "report.c"
        report__succeeded = (report__V_22_22 == report__V_23_23);
#line 492 "report.m"
        if (report__succeeded)
#line 492 "report.m"
          {
#line 14173 "report.c"
            report__succeeded = (strcmp(report__V_4_4, report__V_12_12) == 0);
#line 492 "report.m"
            if (report__succeeded)
#line 492 "report.m"
              {
#line 14179 "report.c"
                report__succeeded = (strcmp(report__V_5_5, report__V_13_13) == 0);
#line 492 "report.m"
                if (report__succeeded)
#line 492 "report.m"
                  {
#line 14185 "report.c"
                    report__succeeded = (strcmp(report__V_6_6, report__V_14_14) == 0);
#line 492 "report.m"
                    if (report__succeeded)
#line 492 "report.m"
                      {
#line 14191 "report.c"
                        report__succeeded = (strcmp(report__V_7_7, report__V_15_15) == 0);
#line 492 "report.m"
                        if (report__succeeded)
#line 492 "report.m"
                          {
#line 14197 "report.c"
                            report__succeeded = (report__V_8_8 == report__V_16_16);
#line 492 "report.m"
                            if (report__succeeded)
#line 492 "report.m"
                              {
#line 14203 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_17_17);
#line 492 "report.m"
                                if (report__succeeded)
#line 14207 "report.c"
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
#line 14254 "report.c"
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
#line 14280 "report.c"
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
#line 14300 "report.c"
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

#line 14375 "report.c"
        {
#line 14377 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_callers_counts_0, report__V_3_3, report__V_6_6);
        }
#line 391 "report.m"
        if (report__succeeded)
#line 391 "report.m"
          {
#line 14384 "report.c"
            report__TypeCtorInfo_12_12 = (MR_Word) &report__report__type_ctor_info_proc_desc_0;
#line 14386 "report.c"
            {
#line 14388 "report.c"
              report__succeeded = report____Unify____perf_row_data_1_0(report__TypeCtorInfo_12_12, report__V_4_4, report__V_7_7);
            }
#line 391 "report.m"
            if (report__succeeded)
#line 391 "report.m"
              {
#line 14395 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[29];
#line 14397 "report.c"
                {
#line 14399 "report.c"
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
#line 14456 "report.c"
  {
#line 14458 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 14461 "report.c"
    return report__succeeded;
#line 14463 "report.c"
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
#line 14492 "report.c"
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
#line 14542 "report.c"
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
#line 14566 "report.c"
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
#line 14586 "report.c"
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
#line 14606 "report.c"
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
#line 14626 "report.c"
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
#line 14646 "report.c"
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
#line 14666 "report.c"
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

#line 14779 "report.c"
        report__succeeded = (strcmp(report__V_5_5, report__V_13_13) == 0);
#line 506 "report.m"
        if (report__succeeded)
#line 506 "report.m"
          {
#line 14785 "report.c"
            report__succeeded = (strcmp(report__V_6_6, report__V_14_14) == 0);
#line 506 "report.m"
            if (report__succeeded)
#line 506 "report.m"
              {
#line 14791 "report.c"
                report__succeeded = (strcmp(report__V_7_7, report__V_15_15) == 0);
#line 506 "report.m"
                if (report__succeeded)
#line 506 "report.m"
                  {
#line 14797 "report.c"
                    report__succeeded = (strcmp(report__V_8_8, report__V_16_16) == 0);
#line 506 "report.m"
                    if (report__succeeded)
#line 506 "report.m"
                      {
#line 14803 "report.c"
                        report__V_25_25 = (MR_Integer) report__V_3_3;
#line 14805 "report.c"
                        report__V_26_26 = (MR_Integer) report__V_11_11;
#line 14807 "report.c"
                        report__succeeded = (report__V_25_25 == report__V_26_26);
#line 506 "report.m"
                        if (report__succeeded)
#line 506 "report.m"
                          {
#line 14813 "report.c"
                            report__V_27_27 = (MR_Integer) report__V_4_4;
#line 14815 "report.c"
                            report__V_28_28 = (MR_Integer) report__V_12_12;
#line 14817 "report.c"
                            report__succeeded = (report__V_27_27 == report__V_28_28);
#line 506 "report.m"
                            if (report__succeeded)
#line 506 "report.m"
                              {
#line 14823 "report.c"
                                report__TypeInfo_23_23 = (MR_Word) &report_scalar_common_1[25];
#line 14825 "report.c"
                                {
#line 14827 "report.c"
                                  report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_23_23, ((MR_Box) (report__V_9_9)), ((MR_Box) (report__V_17_17)));
                                }
#line 506 "report.m"
                                if (report__succeeded)
#line 506 "report.m"
                                  {
#line 14834 "report.c"
                                    report__TypeInfo_24_24 = (MR_Word) &report_scalar_common_1[27];
#line 14836 "report.c"
                                    {
#line 14838 "report.c"
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
#line 14888 "report.c"
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
#line 14930 "report.c"
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
#line 14950 "report.c"
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
#line 14970 "report.c"
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
#line 14990 "report.c"
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
#line 15010 "report.c"
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

#line 15099 "report.c"
        report__succeeded = (report__V_18_18 == report__V_19_19);
#line 650 "report.m"
        if (report__succeeded)
#line 650 "report.m"
          {
#line 15105 "report.c"
            report__succeeded = (strcmp(report__V_4_4, report__V_10_10) == 0);
#line 650 "report.m"
            if (report__succeeded)
#line 650 "report.m"
              {
#line 15111 "report.c"
                report__succeeded = (report__V_5_5 == report__V_11_11);
#line 650 "report.m"
                if (report__succeeded)
#line 650 "report.m"
                  {
#line 15117 "report.c"
                    report__succeeded = (strcmp(report__V_6_6, report__V_12_12) == 0);
#line 650 "report.m"
                    if (report__succeeded)
#line 650 "report.m"
                      {
#line 15123 "report.c"
                        report__succeeded = (strcmp(report__V_7_7, report__V_13_13) == 0);
#line 650 "report.m"
                        if (report__succeeded)
#line 15127 "report.c"
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
#line 15170 "report.c"
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
#line 15208 "report.c"
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
#line 15228 "report.c"
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
#line 15248 "report.c"
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
#line 15268 "report.c"
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
#line 15292 "report.c"
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

#line 15383 "report.c"
        {
#line 15385 "report.c"
          report__succeeded = report____Unify____proc_desc_0_0(report__V_3_3, report__V_9_9);
        }
#line 448 "report.m"
        if (report__succeeded)
#line 448 "report.m"
          {
#line 15392 "report.c"
            {
#line 15394 "report.c"
              report__succeeded = report____Unify____proc_callers_0_0(report__V_4_4, report__V_10_10);
            }
#line 448 "report.m"
            if (report__succeeded)
#line 448 "report.m"
              {
#line 15401 "report.c"
                report__succeeded = (report__V_5_5 == report__V_11_11);
#line 448 "report.m"
                if (report__succeeded)
#line 448 "report.m"
                  {
#line 15407 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_12_12);
#line 448 "report.m"
                    if (report__succeeded)
#line 448 "report.m"
                      {
#line 15413 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_13_13);
#line 448 "report.m"
                        if (report__succeeded)
#line 448 "report.m"
                          {
#line 15419 "report.c"
                            report__TypeInfo_17_17 = (MR_Word) &report_scalar_common_1[24];
#line 15421 "report.c"
                            {
#line 15423 "report.c"
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
#line 15469 "report.c"
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
#line 15500 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
            else
#line 474 "report.m"
              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 15506 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
              else
#line 15510 "report.c"
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
#line 15525 "report.c"
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
#line 15549 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
                else
#line 15553 "report.c"
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
#line 15568 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
              else
#line 474 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 15574 "report.c"
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
#line 15596 "report.c"
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
#line 15609 "report.c"
                *report__HeadVar__1_1 = (MR_Integer) 2;
#line 474 "report.m"
              else
#line 474 "report.m"
                if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 15615 "report.c"
                  *report__HeadVar__1_1 = (MR_Integer) 1;
#line 474 "report.m"
                else
#line 474 "report.m"
                  if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 15621 "report.c"
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
#line 15691 "report.c"
              report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[23];
#line 15693 "report.c"
              {
#line 15695 "report.c"
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
#line 15723 "report.c"
                report__TypeInfo_14_14 = (MR_Word) &report_scalar_common_1[9];
#line 15725 "report.c"
                {
#line 15727 "report.c"
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
#line 15755 "report.c"
                  report__TypeInfo_15_15 = (MR_Word) &report_scalar_common_1[22];
#line 15757 "report.c"
                  {
#line 15759 "report.c"
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
#line 15785 "report.c"
                  report__TypeInfo_16_16 = (MR_Word) &report_scalar_common_1[5];
#line 15787 "report.c"
                  {
#line 15789 "report.c"
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
#line 15827 "report.c"
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
#line 15849 "report.c"
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

#line 15919 "report.c"
        {
#line 15921 "report.c"
          report__succeeded = report____Unify____proc_desc_0_0(report__V_3_3, report__V_5_5);
        }
#line 637 "report.m"
        if (report__succeeded)
#line 15926 "report.c"
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
#line 15963 "report.c"
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
#line 16013 "report.c"
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
#line 16033 "report.c"
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
#line 16053 "report.c"
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
#line 16073 "report.c"
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
#line 16093 "report.c"
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
#line 16113 "report.c"
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
#line 16133 "report.c"
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
#line 16153 "report.c"
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

#line 16264 "report.c"
        {
#line 16266 "report.c"
          report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_T_23, report__V_3_3, report__V_12_12);
        }
#line 562 "report.m"
        if (report__succeeded)
#line 562 "report.m"
          {
#line 16273 "report.c"
            report__succeeded = (report__V_4_4 == report__V_13_13);
#line 562 "report.m"
            if (report__succeeded)
#line 562 "report.m"
              {
#line 16279 "report.c"
                report__succeeded = (report__V_5_5 == report__V_14_14);
#line 562 "report.m"
                if (report__succeeded)
#line 562 "report.m"
                  {
#line 16285 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_15_15);
#line 562 "report.m"
                    if (report__succeeded)
#line 562 "report.m"
                      {
#line 16291 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_16_16);
#line 562 "report.m"
                        if (report__succeeded)
#line 562 "report.m"
                          {
#line 16297 "report.c"
                            report__succeeded = (report__V_8_8 == report__V_17_17);
#line 562 "report.m"
                            if (report__succeeded)
#line 562 "report.m"
                              {
#line 16303 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_18_18);
#line 562 "report.m"
                                if (report__succeeded)
#line 562 "report.m"
                                  {
#line 16309 "report.c"
                                    {
#line 16311 "report.c"
                                      report__succeeded = report____Unify____inheritable_perf_0_0(report__V_10_10, report__V_19_19);
                                    }
#line 562 "report.m"
                                    if (report__succeeded)
#line 562 "report.m"
                                      {
#line 16318 "report.c"
                                        report__TypeInfo_24_24 = (MR_Word) &report_scalar_common_1[20];
#line 16320 "report.c"
                                        {
#line 16322 "report.c"
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
#line 16374 "report.c"
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
#line 16396 "report.c"
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

#line 16457 "report.c"
        {
#line 16459 "report.c"
          report__succeeded = report____Unify____proc_desc_0_0(report__V_3_3, report__V_5_5);
        }
#line 435 "report.m"
        if (report__succeeded)
#line 16464 "report.c"
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
#line 16499 "report.c"
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
#line 16525 "report.c"
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
#line 16549 "report.c"
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

#line 16622 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_6_6) == 0);
#line 320 "report.m"
        if (report__succeeded)
#line 320 "report.m"
          {
#line 16628 "report.c"
            report__succeeded = (report__V_4_4 == report__V_7_7);
#line 320 "report.m"
            if (report__succeeded)
#line 320 "report.m"
              {
#line 16634 "report.c"
                report__TypeInfo_11_11 = (MR_Word) &report_scalar_common_1[19];
#line 16636 "report.c"
                {
#line 16638 "report.c"
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
#line 16678 "report.c"
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
#line 16700 "report.c"
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

#line 16761 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 374 "report.m"
        if (report__succeeded)
#line 16765 "report.c"
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
#line 16817 "report.c"
  {
#line 16819 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 16822 "report.c"
    return report__succeeded;
#line 16824 "report.c"
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
#line 16853 "report.c"
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
#line 16875 "report.c"
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

#line 16942 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 366 "report.m"
        if (report__succeeded)
#line 366 "report.m"
          {
#line 16948 "report.c"
            report__TypeInfo_9_9 = (MR_Word) &report_scalar_common_2[20];
#line 16950 "report.c"
            {
#line 16952 "report.c"
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
#line 16990 "report.c"
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
#line 17012 "report.c"
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

#line 17082 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_5_5) == 0);
#line 627 "report.m"
        if (report__succeeded)
#line 17086 "report.c"
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
#line 17121 "report.c"
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

#line 17179 "report.c"
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
#line 17214 "report.c"
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
#line 17268 "report.c"
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
#line 17288 "report.c"
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
#line 17308 "report.c"
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
#line 17328 "report.c"
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
#line 17348 "report.c"
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
#line 17368 "report.c"
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
#line 17388 "report.c"
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
#line 17408 "report.c"
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
#line 17428 "report.c"
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

#line 17537 "report.c"
        report__succeeded = (strcmp(report__V_3_3, report__V_13_13) == 0);
#line 110 "report.m"
        if (report__succeeded)
#line 110 "report.m"
          {
#line 17543 "report.c"
            report__succeeded = (report__V_4_4 == report__V_14_14);
#line 110 "report.m"
            if (report__succeeded)
#line 110 "report.m"
              {
#line 17549 "report.c"
                report__succeeded = (report__V_5_5 == report__V_15_15);
#line 110 "report.m"
                if (report__succeeded)
#line 110 "report.m"
                  {
#line 17555 "report.c"
                    report__succeeded = (report__V_6_6 == report__V_16_16);
#line 110 "report.m"
                    if (report__succeeded)
#line 110 "report.m"
                      {
#line 17561 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_17_17);
#line 110 "report.m"
                        if (report__succeeded)
#line 110 "report.m"
                          {
#line 17567 "report.c"
                            report__succeeded = (report__V_8_8 == report__V_18_18);
#line 110 "report.m"
                            if (report__succeeded)
#line 110 "report.m"
                              {
#line 17573 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_19_19);
#line 110 "report.m"
                                if (report__succeeded)
#line 110 "report.m"
                                  {
#line 17579 "report.c"
                                    report__succeeded = (report__V_10_10 == report__V_20_20);
#line 110 "report.m"
                                    if (report__succeeded)
#line 110 "report.m"
                                      {
#line 17585 "report.c"
                                        report__succeeded = (report__V_11_11 == report__V_21_21);
#line 110 "report.m"
                                        if (report__succeeded)
#line 17589 "report.c"
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
#line 17657 "report.c"
  {
#line 17659 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 17662 "report.c"
    return report__succeeded;
#line 17664 "report.c"
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
#line 17693 "report.c"
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
#line 17759 "report.c"
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
#line 17779 "report.c"
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
#line 17799 "report.c"
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
#line 17819 "report.c"
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
#line 17839 "report.c"
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
#line 17859 "report.c"
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
#line 17879 "report.c"
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
#line 17899 "report.c"
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
#line 17919 "report.c"
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
#line 17939 "report.c"
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
#line 17959 "report.c"
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
#line 17979 "report.c"
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

#line 18106 "report.c"
        report__succeeded = (report__V_3_3 == report__V_16_16);
#line 579 "report.m"
        if (report__succeeded)
#line 579 "report.m"
          {
#line 18112 "report.c"
            {
#line 18114 "report.c"
              report__succeeded = measurement_units____Unify____time_0_0(report__V_4_4, report__V_17_17);
            }
#line 579 "report.m"
            if (report__succeeded)
#line 579 "report.m"
              {
#line 18121 "report.c"
                {
#line 18123 "report.c"
                  report__succeeded = measurement_units____Unify____percent_0_0(report__V_5_5, report__V_18_18);
                }
#line 579 "report.m"
                if (report__succeeded)
#line 579 "report.m"
                  {
#line 18130 "report.c"
                    {
#line 18132 "report.c"
                      report__succeeded = measurement_units____Unify____time_0_0(report__V_6_6, report__V_19_19);
                    }
#line 579 "report.m"
                    if (report__succeeded)
#line 579 "report.m"
                      {
#line 18139 "report.c"
                        report__succeeded = (report__V_7_7 == report__V_20_20);
#line 579 "report.m"
                        if (report__succeeded)
#line 579 "report.m"
                          {
#line 18145 "report.c"
                            {
#line 18147 "report.c"
                              report__succeeded = measurement_units____Unify____percent_0_0(report__V_8_8, report__V_21_21);
                            }
#line 579 "report.m"
                            if (report__succeeded)
#line 579 "report.m"
                              {
#line 18154 "report.c"
                                report__succeeded = (report__V_9_9 == report__V_22_22);
#line 579 "report.m"
                                if (report__succeeded)
#line 579 "report.m"
                                  {
#line 18160 "report.c"
                                    report__succeeded = (report__V_10_10 == report__V_23_23);
#line 579 "report.m"
                                    if (report__succeeded)
#line 579 "report.m"
                                      {
#line 18166 "report.c"
                                        {
#line 18168 "report.c"
                                          report__succeeded = measurement_units____Unify____percent_0_0(report__V_11_11, report__V_24_24);
                                        }
#line 579 "report.m"
                                        if (report__succeeded)
#line 579 "report.m"
                                          {
#line 18175 "report.c"
                                            report__succeeded = (report__V_12_12 == report__V_25_25);
#line 579 "report.m"
                                            if (report__succeeded)
#line 579 "report.m"
                                              {
#line 18181 "report.c"
                                                {
#line 18183 "report.c"
                                                  report__succeeded = measurement_units____Unify____memory_0_0(report__V_13_13, report__V_26_26);
                                                }
#line 579 "report.m"
                                                if (report__succeeded)
#line 579 "report.m"
                                                  {
#line 18190 "report.c"
                                                    {
#line 18192 "report.c"
                                                      report__succeeded = measurement_units____Unify____percent_0_0(report__V_14_14, report__V_27_27);
                                                    }
#line 579 "report.m"
                                                    if (report__succeeded)
#line 18197 "report.c"
                                                      {
#line 18199 "report.c"
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
#line 18389 "report.c"
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
#line 18422 "report.c"
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
#line 18442 "report.c"
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
#line 18467 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 1;
#line 343 "report.m"
            else
#line 18471 "report.c"
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
#line 18486 "report.c"
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
#line 18508 "report.c"
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
#line 18521 "report.c"
              *report__HeadVar__1_1 = (MR_Integer) 2;
#line 343 "report.m"
            else
#line 343 "report.m"
              if (((MR_tag((MR_Word) report__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 18527 "report.c"
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
#line 18611 "report.c"
              {
#line 18613 "report.c"
                report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_I_15, report__V_3_3, report__V_6_6);
              }
#line 343 "report.m"
              if (report__succeeded)
#line 343 "report.m"
                {
#line 18620 "report.c"
                  {
#line 18622 "report.c"
                    report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_for_I_15, report__V_4_4, report__V_7_7);
                  }
#line 343 "report.m"
                  if (report__succeeded)
#line 18627 "report.c"
                    {
#line 18629 "report.c"
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
#line 18657 "report.c"
                {
#line 18659 "report.c"
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
#line 18683 "report.c"
                {
#line 18685 "report.c"
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

#line 18785 "report.c"
    {
#line 18787 "report.c"
      report__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 18789 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 18791 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_10_10, 1) = ((MR_Box) (&report__report__type_ctor_info_field_name_0));
#line 18793 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_10_10, 2) = ((MR_Box) (report__TypeInfo_for_T_6));
#line 18795 "report.c"
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

#line 18831 "report.c"
    {
#line 18833 "report.c"
      report__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 18835 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 18837 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_9_9, 1) = ((MR_Box) (&report__report__type_ctor_info_field_name_0));
#line 18839 "report.c"
      MR_hl_field(MR_mktag(0), report__TypeInfo_9_9, 2) = ((MR_Box) (report__TypeInfo_for_T_5));
#line 18841 "report.c"
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
#line 18958 "report.c"
  {
#line 18960 "report.c"
    MR_bool report__succeeded = (report__HeadVar__2_1 == report__HeadVar__2_2);

#line 18963 "report.c"
    return report__succeeded;
#line 18965 "report.c"
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
#line 18994 "report.c"
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

#line 19052 "report.c"
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
#line 19087 "report.c"
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
#line 19112 "report.c"
          *report__HeadVar__1_1 = (MR_Integer) 1;
#line 43 "report.m"
        else
#line 43 "report.m"
          {
#line 43 "report.m"
            report__succeeded = (report__V_4_4 > report__V_5_5);
#line 43 "report.m"
            if (report__succeeded)
#line 19122 "report.c"
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
#line 19150 "report.c"
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
#line 19184 "report.c"
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
#line 19256 "report.c"
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
#line 19290 "report.c"
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
#line 19324 "report.c"
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
#line 19358 "report.c"
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
#line 19392 "report.c"
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
#line 19426 "report.c"
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
#line 19460 "report.c"
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
#line 19494 "report.c"
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
#line 19528 "report.c"
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
#line 19562 "report.c"
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
#line 19596 "report.c"
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
#line 19630 "report.c"
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
#line 19664 "report.c"
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
#line 19698 "report.c"
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
#line 19732 "report.c"
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
#line 19764 "report.c"
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
#line 19817 "report.c"
      *report__HeadVar__2_2 = (MR_Integer) 2;
#line 43 "report.m"
    else
#line 43 "report.m"
      if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 19823 "report.c"
        *report__HeadVar__2_2 = (MR_Integer) 1;
#line 43 "report.m"
      else
#line 43 "report.m"
        if (((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 19829 "report.c"
          *report__HeadVar__2_2 = (MR_Integer) 0;
#line 43 "report.m"
        else
#line 43 "report.m"
          if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 19835 "report.c"
            *report__HeadVar__2_2 = (MR_Integer) 16;
#line 43 "report.m"
          else
#line 43 "report.m"
            if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 19841 "report.c"
              *report__HeadVar__2_2 = (MR_Integer) 18;
#line 43 "report.m"
            else
#line 43 "report.m"
              if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 19847 "report.c"
                *report__HeadVar__2_2 = (MR_Integer) 15;
#line 43 "report.m"
              else
#line 43 "report.m"
                if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 19853 "report.c"
                  *report__HeadVar__2_2 = (MR_Integer) 17;
#line 43 "report.m"
                else
#line 43 "report.m"
                  if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 19859 "report.c"
                    *report__HeadVar__2_2 = (MR_Integer) 3;
#line 43 "report.m"
                  else
#line 43 "report.m"
                    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 19865 "report.c"
                      *report__HeadVar__2_2 = (MR_Integer) 6;
#line 43 "report.m"
                    else
#line 43 "report.m"
                      if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 19871 "report.c"
                        *report__HeadVar__2_2 = (MR_Integer) 7;
#line 43 "report.m"
                      else
#line 43 "report.m"
                        if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 19877 "report.c"
                          *report__HeadVar__2_2 = (MR_Integer) 8;
#line 43 "report.m"
                        else
#line 43 "report.m"
                          if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 19883 "report.c"
                            *report__HeadVar__2_2 = (MR_Integer) 10;
#line 43 "report.m"
                          else
#line 43 "report.m"
                            if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 19889 "report.c"
                              *report__HeadVar__2_2 = (MR_Integer) 12;
#line 43 "report.m"
                            else
#line 43 "report.m"
                              if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 19895 "report.c"
                                *report__HeadVar__2_2 = (MR_Integer) 14;
#line 43 "report.m"
                              else
#line 43 "report.m"
                                if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 19901 "report.c"
                                  *report__HeadVar__2_2 = (MR_Integer) 13;
#line 43 "report.m"
                                else
#line 43 "report.m"
                                  if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 19907 "report.c"
                                    *report__HeadVar__2_2 = (MR_Integer) 11;
#line 43 "report.m"
                                  else
#line 43 "report.m"
                                    if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 19913 "report.c"
                                      *report__HeadVar__2_2 = (MR_Integer) 5;
#line 43 "report.m"
                                    else
#line 43 "report.m"
                                      if (((((MR_tag((MR_Word) report__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), report__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 19919 "report.c"
                                        *report__HeadVar__2_2 = (MR_Integer) 4;
#line 43 "report.m"
                                      else
#line 19923 "report.c"
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
#line 19975 "report.c"
              report__TypeInfo_46_46 = (MR_Word) &report_scalar_common_2[1];
#line 19977 "report.c"
              {
#line 19979 "report.c"
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
#line 20007 "report.c"
                report__TypeInfo_49_49 = (MR_Word) &report_scalar_common_2[0];
#line 20009 "report.c"
                {
#line 20011 "report.c"
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

#line 20060 "report.c"
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
#line 20089 "report.c"
                    report__TypeInfo_43_43 = (MR_Word) &report_scalar_common_2[15];
#line 20091 "report.c"
                    {
#line 20093 "report.c"
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
#line 20121 "report.c"
                      report__TypeInfo_44_44 = (MR_Word) &report_scalar_common_2[17];
#line 20123 "report.c"
                      {
#line 20125 "report.c"
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
#line 20153 "report.c"
                        report__TypeInfo_45_45 = (MR_Word) &report_scalar_common_2[14];
#line 20155 "report.c"
                        {
#line 20157 "report.c"
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
#line 20185 "report.c"
                          report__TypeInfo_47_47 = (MR_Word) &report_scalar_common_2[16];
#line 20187 "report.c"
                          {
#line 20189 "report.c"
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
#line 20217 "report.c"
                            report__TypeInfo_48_48 = (MR_Word) &report_scalar_common_2[2];
#line 20219 "report.c"
                            {
#line 20221 "report.c"
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
#line 20249 "report.c"
                              report__TypeInfo_50_50 = (MR_Word) &report_scalar_common_2[5];
#line 20251 "report.c"
                              {
#line 20253 "report.c"
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
#line 20281 "report.c"
                                report__TypeInfo_51_51 = (MR_Word) &report_scalar_common_2[6];
#line 20283 "report.c"
                                {
#line 20285 "report.c"
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
#line 20313 "report.c"
                                  report__TypeInfo_52_52 = (MR_Word) &report_scalar_common_2[7];
#line 20315 "report.c"
                                  {
#line 20317 "report.c"
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
#line 20345 "report.c"
                                    report__TypeInfo_53_53 = (MR_Word) &report_scalar_common_2[9];
#line 20347 "report.c"
                                    {
#line 20349 "report.c"
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
#line 20377 "report.c"
                                      report__TypeInfo_54_54 = (MR_Word) &report_scalar_common_2[11];
#line 20379 "report.c"
                                      {
#line 20381 "report.c"
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
#line 20409 "report.c"
                                        report__TypeInfo_55_55 = (MR_Word) &report_scalar_common_2[13];
#line 20411 "report.c"
                                        {
#line 20413 "report.c"
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
#line 20441 "report.c"
                                          report__TypeInfo_56_56 = (MR_Word) &report_scalar_common_2[12];
#line 20443 "report.c"
                                          {
#line 20445 "report.c"
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
#line 20473 "report.c"
                                            report__TypeInfo_57_57 = (MR_Word) &report_scalar_common_2[10];
#line 20475 "report.c"
                                            {
#line 20477 "report.c"
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
#line 20505 "report.c"
                                              report__TypeInfo_58_58 = (MR_Word) &report_scalar_common_2[4];
#line 20507 "report.c"
                                              {
#line 20509 "report.c"
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
#line 20537 "report.c"
                                                report__TypeInfo_59_59 = (MR_Word) &report_scalar_common_2[3];
#line 20539 "report.c"
                                                {
#line 20541 "report.c"
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
#line 20567 "report.c"
                                                report__TypeInfo_60_60 = (MR_Word) &report_scalar_common_2[8];
#line 20569 "report.c"
                                                {
#line 20571 "report.c"
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
#line 20609 "report.c"
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

#line 20667 "report.c"
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
#line 20702 "report.c"
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
#line 20732 "report.c"
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
#line 20752 "report.c"
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

#line 20831 "report.c"
        report__succeeded = (report__V_14_14 == report__V_15_15);
#line 129 "report.m"
        if (report__succeeded)
#line 129 "report.m"
          {
#line 20837 "report.c"
            report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[15];
#line 20839 "report.c"
            {
#line 20841 "report.c"
              report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
            }
#line 129 "report.m"
            if (report__succeeded)
#line 129 "report.m"
              {
#line 20848 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[16];
#line 20850 "report.c"
                {
#line 20852 "report.c"
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
#line 20892 "report.c"
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
#line 20922 "report.c"
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
#line 20942 "report.c"
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

#line 21013 "report.c"
        report__succeeded = (report__V_12_12 == report__V_13_13);
#line 210 "report.m"
        if (report__succeeded)
#line 210 "report.m"
          {
#line 21019 "report.c"
            {
#line 21021 "report.c"
              report__succeeded = report____Unify____recursion_type_0_0(report__V_4_4, report__V_7_7);
            }
#line 210 "report.m"
            if (report__succeeded)
#line 21026 "report.c"
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
#line 21063 "report.c"
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
#line 21089 "report.c"
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
#line 21109 "report.c"
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

#line 21182 "report.c"
        {
#line 21184 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_proc_desc_0, report__V_3_3, report__V_6_6);
        }
#line 148 "report.m"
        if (report__succeeded)
#line 148 "report.m"
          {
#line 21191 "report.c"
            {
#line 21193 "report.c"
              report__succeeded = report____Unify____clique_proc_dynamic_report_0_0(report__V_4_4, report__V_7_7);
            }
#line 148 "report.m"
            if (report__succeeded)
#line 148 "report.m"
              {
#line 21200 "report.c"
                report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[13];
#line 21202 "report.c"
                {
#line 21204 "report.c"
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
#line 21244 "report.c"
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
#line 21266 "report.c"
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

#line 21333 "report.c"
        {
#line 21335 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_proc_desc_0, report__V_3_3, report__V_5_5);
        }
#line 181 "report.m"
        if (report__succeeded)
#line 181 "report.m"
          {
#line 21342 "report.c"
            report__TypeInfo_10_10 = (MR_Word) &report_scalar_common_1[12];
#line 21344 "report.c"
            {
#line 21346 "report.c"
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
#line 21384 "report.c"
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
#line 21410 "report.c"
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
#line 21434 "report.c"
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

#line 21511 "report.c"
        {
#line 21513 "report.c"
          report__succeeded = report____Unify____clique_desc_0_0(report__V_3_3, report__V_6_6);
        }
#line 536 "report.m"
        if (report__succeeded)
#line 536 "report.m"
          {
#line 21520 "report.c"
            report__V_13_13 = (MR_Integer) report__V_4_4;
#line 21522 "report.c"
            report__V_14_14 = (MR_Integer) report__V_7_7;
#line 21524 "report.c"
            report__succeeded = (report__V_13_13 == report__V_14_14);
#line 536 "report.m"
            if (report__succeeded)
#line 536 "report.m"
              {
#line 21530 "report.c"
                report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[11];
#line 21532 "report.c"
                {
#line 21534 "report.c"
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
#line 21574 "report.c"
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
#line 21604 "report.c"
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
#line 21624 "report.c"
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

#line 21701 "report.c"
        report__succeeded = (report__V_13_13 == report__V_14_14);
#line 693 "report.m"
        if (report__succeeded)
#line 693 "report.m"
          {
#line 21707 "report.c"
            {
#line 21709 "report.c"
              report__succeeded = report____Unify____proc_desc_0_0(report__V_4_4, report__V_7_7);
            }
#line 693 "report.m"
            if (report__succeeded)
#line 693 "report.m"
              {
#line 21716 "report.c"
                report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[10];
#line 21718 "report.c"
                {
#line 21720 "report.c"
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
#line 21760 "report.c"
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
#line 21786 "report.c"
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
#line 21806 "report.c"
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

#line 21881 "report.c"
        {
#line 21883 "report.c"
          report__succeeded = report____Unify____perf_row_data_1_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, report__V_3_3, report__V_6_6);
        }
#line 192 "report.m"
        if (report__succeeded)
#line 192 "report.m"
          {
#line 21890 "report.c"
            report__TypeInfo_12_12 = (MR_Word) &report_scalar_common_1[7];
#line 21892 "report.c"
            {
#line 21894 "report.c"
              report__succeeded = mercury__builtin__unify_2_p_0(report__TypeInfo_12_12, ((MR_Box) (report__V_4_4)), ((MR_Box) (report__V_7_7)));
            }
#line 192 "report.m"
            if (report__succeeded)
#line 192 "report.m"
              {
#line 21901 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[9];
#line 21903 "report.c"
                {
#line 21905 "report.c"
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
#line 21945 "report.c"
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
#line 21967 "report.c"
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

#line 22028 "report.c"
        report__succeeded = (report__V_3_3 == report__V_5_5);
#line 404 "report.m"
        if (report__succeeded)
#line 22032 "report.c"
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
#line 22067 "report.c"
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
#line 22109 "report.c"
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
#line 22133 "report.c"
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
#line 22153 "report.c"
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
#line 22173 "report.c"
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
#line 22193 "report.c"
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

#line 22292 "report.c"
        report__succeeded = (report__V_5_5 == report__V_11_11);
#line 518 "report.m"
        if (report__succeeded)
#line 518 "report.m"
          {
#line 22298 "report.c"
            report__succeeded = (report__V_6_6 == report__V_12_12);
#line 518 "report.m"
            if (report__succeeded)
#line 518 "report.m"
              {
#line 22304 "report.c"
                report__V_21_21 = (MR_Integer) report__V_3_3;
#line 22306 "report.c"
                report__V_22_22 = (MR_Integer) report__V_9_9;
#line 22308 "report.c"
                report__succeeded = (report__V_21_21 == report__V_22_22);
#line 518 "report.m"
                if (report__succeeded)
#line 518 "report.m"
                  {
#line 22314 "report.c"
                    report__V_23_23 = (MR_Integer) report__V_4_4;
#line 22316 "report.c"
                    report__V_24_24 = (MR_Integer) report__V_10_10;
#line 22318 "report.c"
                    report__succeeded = (report__V_23_23 == report__V_24_24);
#line 518 "report.m"
                    if (report__succeeded)
#line 518 "report.m"
                      {
#line 22324 "report.c"
                        {
#line 22326 "report.c"
                          report__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(report__V_7_7, report__V_13_13);
                        }
#line 518 "report.m"
                        if (report__succeeded)
#line 518 "report.m"
                          {
#line 22333 "report.c"
                            report__TypeInfo_20_20 = (MR_Word) &report_scalar_common_1[6];
#line 22335 "report.c"
                            {
#line 22337 "report.c"
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
#line 22383 "report.c"
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
#line 22409 "report.c"
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
#line 22429 "report.c"
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

#line 22504 "report.c"
        {
#line 22506 "report.c"
          report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &report_scalar_common_1[3], ((MR_Box) (report__V_3_3)), ((MR_Box) (report__V_6_6)));
        }
#line 410 "report.m"
        if (report__succeeded)
#line 410 "report.m"
          {
#line 22513 "report.c"
            report__TypeCtorInfo_12_12 = (MR_Word) &report__report__type_ctor_info_call_site_desc_0;
#line 22515 "report.c"
            {
#line 22517 "report.c"
              report__succeeded = report____Unify____perf_row_data_1_0(report__TypeCtorInfo_12_12, report__V_4_4, report__V_7_7);
            }
#line 410 "report.m"
            if (report__succeeded)
#line 410 "report.m"
              {
#line 22524 "report.c"
                report__TypeInfo_13_13 = (MR_Word) &report_scalar_common_1[5];
#line 22526 "report.c"
                {
#line 22528 "report.c"
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
#line 22568 "report.c"
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
#line 22590 "report.c"
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

#line 22657 "report.c"
        report__succeeded = (report__V_3_3 == report__V_5_5);
#line 543 "report.m"
        if (report__succeeded)
#line 543 "report.m"
          {
#line 22663 "report.c"
            report__TypeInfo_9_9 = (MR_Word) &report_scalar_common_1[2];
#line 22665 "report.c"
            {
#line 22667 "report.c"
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
#line 22705 "report.c"
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
#line 22739 "report.c"
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
#line 22763 "report.c"
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
#line 22787 "report.c"
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

#line 22878 "report.c"
        report__succeeded = (report__V_17_17 == report__V_18_18);
#line 528 "report.m"
        if (report__succeeded)
#line 528 "report.m"
          {
#line 22884 "report.c"
            report__V_19_19 = (MR_Integer) report__V_4_4;
#line 22886 "report.c"
            report__V_20_20 = (MR_Integer) report__V_8_8;
#line 22888 "report.c"
            report__succeeded = (report__V_19_19 == report__V_20_20);
#line 528 "report.m"
            if (report__succeeded)
#line 528 "report.m"
              {
#line 22894 "report.c"
                report__V_21_21 = (MR_Integer) report__V_5_5;
#line 22896 "report.c"
                report__V_22_22 = (MR_Integer) report__V_9_9;
#line 22898 "report.c"
                report__succeeded = (report__V_21_21 == report__V_22_22);
#line 528 "report.m"
                if (report__succeeded)
#line 528 "report.m"
                  {
#line 22904 "report.c"
                    report__TypeCtorInfo_16_16 = (MR_Word) &report__report__type_ctor_info_call_site_desc_0;
#line 22906 "report.c"
                    {
#line 22908 "report.c"
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
#line 22950 "report.c"
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
#line 23008 "report.c"
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
#line 23032 "report.c"
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
#line 23052 "report.c"
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
#line 23072 "report.c"
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
#line 23092 "report.c"
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
#line 23112 "report.c"
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
#line 23132 "report.c"
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
#line 23152 "report.c"
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
#line 23172 "report.c"
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

#line 23295 "report.c"
        report__succeeded = (strcmp(report__V_5_5, report__V_15_15) == 0);
#line 663 "report.m"
        if (report__succeeded)
#line 663 "report.m"
          {
#line 23301 "report.c"
            report__succeeded = (report__V_6_6 == report__V_16_16);
#line 663 "report.m"
            if (report__succeeded)
#line 663 "report.m"
              {
#line 23307 "report.c"
                report__succeeded = (strcmp(report__V_7_7, report__V_17_17) == 0);
#line 663 "report.m"
                if (report__succeeded)
#line 663 "report.m"
                  {
#line 23313 "report.c"
                    report__succeeded = (strcmp(report__V_8_8, report__V_18_18) == 0);
#line 663 "report.m"
                    if (report__succeeded)
#line 663 "report.m"
                      {
#line 23319 "report.c"
                        report__succeeded = (strcmp(report__V_9_9, report__V_19_19) == 0);
#line 663 "report.m"
                        if (report__succeeded)
#line 663 "report.m"
                          {
#line 23325 "report.c"
                            report__succeeded = (report__V_10_10 == report__V_20_20);
#line 663 "report.m"
                            if (report__succeeded)
#line 663 "report.m"
                              {
#line 23331 "report.c"
                                report__V_29_29 = (MR_Integer) report__V_3_3;
#line 23333 "report.c"
                                report__V_30_30 = (MR_Integer) report__V_13_13;
#line 23335 "report.c"
                                report__succeeded = (report__V_29_29 == report__V_30_30);
#line 663 "report.m"
                                if (report__succeeded)
#line 663 "report.m"
                                  {
#line 23341 "report.c"
                                    report__V_31_31 = (MR_Integer) report__V_4_4;
#line 23343 "report.c"
                                    report__V_32_32 = (MR_Integer) report__V_14_14;
#line 23345 "report.c"
                                    report__succeeded = (report__V_31_31 == report__V_32_32);
#line 663 "report.m"
                                    if (report__succeeded)
#line 663 "report.m"
                                      {
#line 23351 "report.c"
                                        {
#line 23353 "report.c"
                                          report__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(report__V_11_11, report__V_21_21);
                                        }
#line 663 "report.m"
                                        if (report__succeeded)
#line 663 "report.m"
                                          {
#line 23360 "report.c"
                                            report__TypeInfo_28_28 = (MR_Word) &report_scalar_common_1[0];
#line 23362 "report.c"
                                            {
#line 23364 "report.c"
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
#line 23418 "report.c"
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
#line 23452 "report.c"
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
#line 23476 "report.c"
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
#line 23496 "report.c"
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

#line 23577 "report.c"
        report__succeeded = (report__V_15_15 == report__V_16_16);
#line 677 "report.m"
        if (report__succeeded)
#line 677 "report.m"
          {
#line 23583 "report.c"
            report__V_17_17 = (MR_Integer) report__V_4_4;
#line 23585 "report.c"
            report__V_18_18 = (MR_Integer) report__V_8_8;
#line 23587 "report.c"
            report__succeeded = (report__V_17_17 == report__V_18_18);
#line 677 "report.m"
            if (report__succeeded)
#line 677 "report.m"
              {
#line 23593 "report.c"
                {
#line 23595 "report.c"
                  report__succeeded = report____Unify____proc_desc_0_0(report__V_5_5, report__V_9_9);
                }
#line 677 "report.m"
                if (report__succeeded)
#line 23600 "report.c"
                  {
#line 23602 "report.c"
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
