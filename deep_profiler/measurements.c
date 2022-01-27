/*
** Automatically generated from `measurements.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


/* :- module measurements. */
/* :- implementation. */

/*
INIT mercury__measurements__init
ENDINIT
*/

#include "measurements.mih"


#include "array.mih"
#include "array_util.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 83 "measurements.c"
static const MR_FA_PseudoTypeInfo_Struct1 measurements__array__pti_array_1__plain_builtin__type_ctor_info_int_0;

#line 86 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_cost_0_0[1];

#line 89 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cost_0_0;

#line 92 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_cost_0_1[1];

#line 95 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cost_0_1;

#line 98 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cost_0_0[1];

#line 101 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cost_0_1[1];

#line 104 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_cost_0[2];

#line 107 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_cost_0[2];

#line 110 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_cost_0[2];

#line 113 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_cs_cost_csq_0_0[2];

#line 116 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_cs_cost_csq_0_0[2];

#line 119 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cs_cost_csq_0_0;

#line 122 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cs_cost_csq_0_0[1];

#line 125 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_cs_cost_csq_0[1];

#line 128 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_cs_cost_csq_0[1];

#line 131 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_cs_cost_csq_0[1];

#line 134 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_0;

#line 137 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_goal_cost_csq_0_1[1];

#line 140 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_goal_cost_csq_0_1[1];

#line 143 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_1;

#line 146 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_goal_cost_csq_0_2[2];

#line 149 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_goal_cost_csq_0_2[2];

#line 152 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_2;

#line 155 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_goal_cost_csq_0_0[1];

#line 158 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_goal_cost_csq_0_1[1];

#line 161 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_goal_cost_csq_0_2[1];

#line 164 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_goal_cost_csq_0[3];

#line 167 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_goal_cost_csq_0[3];

#line 170 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_goal_cost_csq_0[3];

#line 173 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_inherit_prof_info_0_0[4];

#line 176 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_inherit_prof_info_0_0[4];

#line 179 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_inherit_prof_info_0_0;

#line 182 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_inherit_prof_info_0_0[1];

#line 185 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_inherit_prof_info_0[1];

#line 188 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_inherit_prof_info_0[1];

#line 191 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_inherit_prof_info_0[1];

#line 194 "measurements.c"
static const MR_EnumFunctorDesc measurements__measurements__enum_functor_desc_is_active_0_0;

#line 197 "measurements.c"
static const MR_EnumFunctorDesc measurements__measurements__enum_functor_desc_is_active_0_1;

#line 200 "measurements.c"
static const MR_EnumFunctorDescPtr measurements__measurements__enum_value_ordered_is_active_0[2];

#line 203 "measurements.c"
static const MR_EnumFunctorDescPtr measurements__measurements__enum_name_ordered_is_active_0[2];

#line 206 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_is_active_0[2];

#line 209 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_0[8];

#line 212 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_0[8];

#line 215 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_0;

#line 218 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_1[5];

#line 221 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_1[5];

#line 224 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_1;

#line 227 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_2[4];

#line 230 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_2[4];

#line 233 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_2;

#line 236 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_3[3];

#line 239 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_3[3];

#line 242 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_3;

#line 245 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_0[1];

#line 248 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_1[1];

#line 251 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_2[1];

#line 254 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_3[1];

#line 257 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_own_prof_info_0[4];

#line 260 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_own_prof_info_0[4];

#line 263 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_own_prof_info_0[4];

#line 266 "measurements.c"
static const MR_FA_TypeInfo_Struct1 measurements__maybe__ti_maybe_1measurements__type_ctor_info_parallel_exec_metrics_internal_0;

#line 269 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_incomplete_0_0[8];

#line 272 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_parallel_exec_metrics_incomplete_0_0[8];

#line 275 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_parallel_exec_metrics_incomplete_0_0;

#line 278 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_incomplete_0_0[1];

#line 281 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_parallel_exec_metrics_incomplete_0[1];

#line 284 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_parallel_exec_metrics_incomplete_0[1];

#line 287 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_parallel_exec_metrics_incomplete_0[1];

#line 290 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_internal_0_0[3];

#line 293 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_parallel_exec_metrics_internal_0_0[3];

#line 296 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_0;

#line 299 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_internal_0_1[6];

#line 302 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_parallel_exec_metrics_internal_0_1[6];

#line 305 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_1;

#line 308 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_0[1];

#line 311 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_1[1];

#line 314 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_parallel_exec_metrics_internal_0[2];

#line 317 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_parallel_exec_metrics_internal_0[2];

#line 320 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_parallel_exec_metrics_internal_0[2];

#line 323 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_parallelism_amount_0[1];

#line 326 "measurements.c"
static const MR_NotagFunctorDesc measurements__measurements__notag_functor_desc_parallelism_amount_0;

#line 329 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_proc_cost_csq_0_0[3];

#line 332 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_proc_cost_csq_0_0[3];

#line 335 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_proc_cost_csq_0_0;

#line 338 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_proc_cost_csq_0_0[1];

#line 341 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_proc_cost_csq_0[1];

#line 344 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_proc_cost_csq_0[1];

#line 347 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_proc_cost_csq_0[1];

#line 350 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_recursion_depth_0[1];

#line 353 "measurements.c"
static const MR_NotagFunctorDesc measurements__measurements__notag_functor_desc_recursion_depth_0;

#line 356 "measurements.c"
static const MR_FA_TypeInfo_Struct1 measurements__array__ti_array_1builtin__type_ctor_info_int_0;

#line 359 "measurements.c"
static const MR_FA_TypeInfo_Struct1 measurements__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

#line 362 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____cost_0_0_10001(
#line 365 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 367 "measurements.c"
  MR_Box measurements__wrapper_arg_2);

#line 370 "measurements.c"
static void MR_CALL 
measurements____Compare____cost_0_0_10001(
#line 373 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 375 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 377 "measurements.c"
  MR_Box measurements__wrapper_arg_3);

#line 380 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____cs_cost_csq_0_0_10001(
#line 383 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 385 "measurements.c"
  MR_Box measurements__wrapper_arg_2);

#line 388 "measurements.c"
static void MR_CALL 
measurements____Compare____cs_cost_csq_0_0_10001(
#line 391 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 393 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 395 "measurements.c"
  MR_Box measurements__wrapper_arg_3);

#line 398 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____goal_cost_csq_0_0_10001(
#line 401 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 403 "measurements.c"
  MR_Box measurements__wrapper_arg_2);

#line 406 "measurements.c"
static void MR_CALL 
measurements____Compare____goal_cost_csq_0_0_10001(
#line 409 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 411 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 413 "measurements.c"
  MR_Box measurements__wrapper_arg_3);

#line 416 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____inherit_prof_info_0_0_10001(
#line 419 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 421 "measurements.c"
  MR_Box measurements__wrapper_arg_2);

#line 424 "measurements.c"
static void MR_CALL 
measurements____Compare____inherit_prof_info_0_0_10001(
#line 427 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 429 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 431 "measurements.c"
  MR_Box measurements__wrapper_arg_3);

#line 434 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____is_active_0_0_10001(
#line 437 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 439 "measurements.c"
  MR_Box measurements__wrapper_arg_2);

#line 442 "measurements.c"
static void MR_CALL 
measurements____Compare____is_active_0_0_10001(
#line 445 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 447 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 449 "measurements.c"
  MR_Box measurements__wrapper_arg_3);

#line 452 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____own_prof_info_0_0_10001(
#line 455 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 457 "measurements.c"
  MR_Box measurements__wrapper_arg_2);

#line 460 "measurements.c"
static void MR_CALL 
measurements____Compare____own_prof_info_0_0_10001(
#line 463 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 465 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 467 "measurements.c"
  MR_Box measurements__wrapper_arg_3);

#line 470 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_incomplete_0_0_10001(
#line 473 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 475 "measurements.c"
  MR_Box measurements__wrapper_arg_2);

#line 478 "measurements.c"
static void MR_CALL 
measurements____Compare____parallel_exec_metrics_incomplete_0_0_10001(
#line 481 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 483 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 485 "measurements.c"
  MR_Box measurements__wrapper_arg_3);

#line 488 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_internal_0_0_10001(
#line 491 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 493 "measurements.c"
  MR_Box measurements__wrapper_arg_2);

#line 496 "measurements.c"
static void MR_CALL 
measurements____Compare____parallel_exec_metrics_internal_0_0_10001(
#line 499 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 501 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 503 "measurements.c"
  MR_Box measurements__wrapper_arg_3);

#line 506 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____parallelism_amount_0_0_10001(
#line 509 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 511 "measurements.c"
  MR_Box measurements__wrapper_arg_2);

#line 514 "measurements.c"
static void MR_CALL 
measurements____Compare____parallelism_amount_0_0_10001(
#line 517 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 519 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 521 "measurements.c"
  MR_Box measurements__wrapper_arg_3);

#line 524 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____proc_cost_csq_0_0_10001(
#line 527 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 529 "measurements.c"
  MR_Box measurements__wrapper_arg_2);

#line 532 "measurements.c"
static void MR_CALL 
measurements____Compare____proc_cost_csq_0_0_10001(
#line 535 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 537 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 539 "measurements.c"
  MR_Box measurements__wrapper_arg_3);

#line 542 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____recursion_depth_0_0_10001(
#line 545 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 547 "measurements.c"
  MR_Box measurements__wrapper_arg_2);

#line 550 "measurements.c"
static void MR_CALL 
measurements____Compare____recursion_depth_0_0_10001(
#line 553 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 555 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 557 "measurements.c"
  MR_Box measurements__wrapper_arg_3);

#line 560 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____static_coverage_info_0_0_10001(
#line 563 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 565 "measurements.c"
  MR_Box measurements__wrapper_arg_2);

#line 568 "measurements.c"
static void MR_CALL 
measurements____Compare____static_coverage_info_0_0_10001(
#line 571 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 573 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 575 "measurements.c"
  MR_Box measurements__wrapper_arg_3);

#line 934 "measurements.m"
static void MR_CALL 
measurements__IntroducedFrom__pred__add_coverage_arrays__934__1_4_p_0(
#line 934 "measurements.m"
  MR_Integer measurements__HeadVar__1_19,
#line 934 "measurements.m"
  MR_Integer measurements__HeadVar__2_20,
#line 934 "measurements.m"
  MR_ArrayPtr measurements__HeadVar__3_21,
#line 934 "measurements.m"
  MR_ArrayPtr * measurements__HeadVar__4_22);

#line 1019 "measurements.m"
static void MR_CALL 
measurements____Compare____parallel_exec_metrics_internal_0_0(
#line 1019 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 1019 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 1019 "measurements.m"
  MR_Word measurements__HeadVar__3_3);

#line 1019 "measurements.m"
static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_internal_0_0(
#line 1019 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 1019 "measurements.m"
  MR_Word measurements__HeadVar__2_2);

#line 861 "measurements.m"
static void MR_CALL 
measurements____Compare____cost_0_0(
#line 861 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 861 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 861 "measurements.m"
  MR_Word measurements__HeadVar__3_3);

#line 861 "measurements.m"
static MR_bool MR_CALL 
measurements____Unify____cost_0_0(
#line 861 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 861 "measurements.m"
  MR_Word measurements__HeadVar__2_2);

#line 1226 "measurements.m"
static void MR_CALL 
measurements__update_weighted_sum_6_p_0(
#line 1226 "measurements.m"
  MR_Float measurements__Weight_7,
#line 1226 "measurements.m"
  MR_Float measurements__Value_8,
#line 1226 "measurements.m"
  MR_Float measurements__STATE_VARIABLE_WeightedSum_0_11,
#line 1226 "measurements.m"
  MR_Float * measurements__STATE_VARIABLE_WeightedSum_12,
#line 1226 "measurements.m"
  MR_Float measurements__STATE_VARIABLE_TotalWeight_0_13,
#line 1226 "measurements.m"
  MR_Float * measurements__STATE_VARIABLE_TotalWeight_14);

#line 1208 "measurements.m"
static MR_Float MR_CALL 
measurements__pem_get_wait_costs_1_f_0(
#line 1208 "measurements.m"
  MR_Word measurements__HeadVar__1_1);

#line 1201 "measurements.m"
static MR_Float MR_CALL 
measurements__pem_get_signal_costs_1_f_0(
#line 1201 "measurements.m"
  MR_Word measurements__HeadVar__1_1);

#line 1181 "measurements.m"
static MR_Float MR_CALL 
measurements__pem_get_future_dead_time_1_f_0(
#line 1181 "measurements.m"
  MR_Word measurements__HeadVar__1_1);

#line 1174 "measurements.m"
static MR_Float MR_CALL 
measurements__pem_get_first_conj_par_time_1_f_0(
#line 1174 "measurements.m"
  MR_Word measurements__HeadVar__1_1);

#line 1162 "measurements.m"
static MR_Float MR_CALL 
measurements__parallel_exec_metrics_internal_get_seq_time_1_f_0(
#line 1162 "measurements.m"
  MR_Word measurements__HeadVar__1_1);

#line 1143 "measurements.m"
static MR_Float MR_CALL 
measurements__parallel_exec_metrics_internal_get_par_time_3_f_0(
#line 1143 "measurements.m"
  MR_Word measurements__PEM_5,
#line 1143 "measurements.m"
  MR_Float measurements__SparkDelay_6,
#line 1143 "measurements.m"
  MR_Integer measurements__Depth_7);

#line 1132 "measurements.m"
static MR_Integer MR_CALL 
measurements__parallel_exec_metrics_internal_get_num_conjs_1_f_0(
#line 1132 "measurements.m"
  MR_Word measurements__HeadVar__1_1);

#line 1218 "measurements.m"
static void MR_CALL 
measurements__weighted_average_3_p_0_1(
#line 1218 "measurements.m"
  MR_Box measurements__closure_arg,
#line 1218 "measurements.m"
  MR_Box measurements__wrapper_arg_1,
#line 1218 "measurements.m"
  MR_Box measurements__wrapper_arg_2,
#line 1218 "measurements.m"
  MR_Box measurements__wrapper_arg_3,
#line 1218 "measurements.m"
  MR_Box * measurements__wrapper_arg_4,
#line 1218 "measurements.m"
  MR_Box measurements__wrapper_arg_5,
#line 1218 "measurements.m"
  MR_Box * measurements__wrapper_arg_6);

#line 934 "measurements.m"
static void MR_CALL 
measurements__add_coverage_arrays_3_p_0_1(
#line 934 "measurements.m"
  MR_Box measurements__closure_arg,
#line 934 "measurements.m"
  MR_Box measurements__wrapper_arg_1,
#line 934 "measurements.m"
  MR_Box measurements__wrapper_arg_2,
#line 934 "measurements.m"
  MR_Box measurements__wrapper_arg_3,
#line 934 "measurements.m"
  MR_Box * measurements__wrapper_arg_4);

#line 494 "measurements.m"
static MR_Box MR_CALL 
measurements__sum_inherit_infos_1_f_0_1(
#line 494 "measurements.m"
  MR_Box measurements__closure_arg,
#line 494 "measurements.m"
  MR_Box measurements__wrapper_arg_1,
#line 494 "measurements.m"
  MR_Box measurements__wrapper_arg_2);

#line 491 "measurements.m"
static MR_Box MR_CALL 
measurements__sum_own_infos_1_f_0_1(
#line 491 "measurements.m"
  MR_Box measurements__closure_arg,
#line 491 "measurements.m"
  MR_Box measurements__wrapper_arg_1,
#line 491 "measurements.m"
  MR_Box measurements__wrapper_arg_2);


static /* final */ const MR_Box measurements_scalar_common_1[4][2];

static /* final */ const MR_Box measurements_scalar_common_2[1][4];

static /* final */ const MR_Box measurements_scalar_common_3[5][3];

static /* final */ const MR_Box measurements_scalar_common_4[2][6];

static /* final */ const MR_Float measurements_scalar_common_5[2];

static /* final */ const MR_Box measurements_scalar_common_6[2][1];

static /* final */ const MR_Box measurements_scalar_common_7[1][7];

static /* final */ const MR_Box measurements_scalar_common_8[1][9];




static /* final */ const MR_Box measurements_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_parallel_exec_metrics_internal_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&measurements_scalar_common_1[0]))
  },
  /* row 3 */
  {
    (MR_Box) &measurements_scalar_common_5[0],
    ((MR_Box) (&measurements_scalar_common_6[0]))
  },
};

static /* final */ const MR_Box measurements_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box measurements_scalar_common_3[5][3] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&measurements_scalar_common_4[0])),
    ((MR_Box) (measurements__sum_own_infos_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&measurements_scalar_common_4[1])),
    ((MR_Box) (measurements__sum_inherit_infos_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&measurements_scalar_common_7[0])),
    ((MR_Box) (measurements__add_coverage_arrays_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&measurements_scalar_common_8[0])),
    ((MR_Box) (measurements__weighted_average_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box measurements_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
};

static /* final */ const MR_Float measurements_scalar_common_5[2] = {
  /* row 0 */
  (MR_Float) 0.0000000000000000,
  /* row 1 */
  (MR_Float) 1.0000000000000000,
};

static /* final */ const MR_Box measurements_scalar_common_6[2][1] = {
  /* row 0 */
  {
    (MR_Box) &measurements_scalar_common_5[0]
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box measurements_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&measurements__array__pti_array_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&measurements__array__pti_array_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box measurements_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
};



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 906 "measurements.c"
static const MR_FA_PseudoTypeInfo_Struct1 measurements__array__pti_array_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 914 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_cost_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 919 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cost_0_0 = {
  (MR_String) "cost_per_call",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_cost_0_0,
  NULL,
  NULL,
  NULL
};

#line 934 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_cost_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 939 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cost_0_1 = {
  (MR_String) "cost_total",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  measurements__measurements__field_types_cost_0_1,
  NULL,
  NULL,
  NULL
};

#line 954 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cost_0_0[1] = {
  &measurements__measurements__du_functor_desc_cost_0_0
};

#line 959 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cost_0_1[1] = {
  &measurements__measurements__du_functor_desc_cost_0_1
};

#line 964 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_cost_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_cost_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_cost_0_1
  }
};

#line 978 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_cost_0[2] = {
  &measurements__measurements__du_functor_desc_cost_0_0,
  &measurements__measurements__du_functor_desc_cost_0_1
};

#line 984 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_cost_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 990 "measurements.c"
const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_cost_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____cost_0_0_10001)),
  ((MR_Box) (measurements____Compare____cost_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "cost",
  {     measurements__measurements__du_name_ordered_cost_0 },
  {     measurements__measurements__du_ptag_ordered_cost_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_cost_0
};

#line 1007 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_cs_cost_csq_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_cost_0
};

#line 1013 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_cs_cost_csq_0_0[2] = {
  (MR_String) "cscc_calls",
  (MR_String) "cscc_csq_cost"
};

#line 1019 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_cs_cost_csq_0_0 = {
  (MR_String) "cs_cost_csq",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_cs_cost_csq_0_0,
  measurements__measurements__field_names_cs_cost_csq_0_0,
  NULL,
  NULL
};

#line 1034 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_cs_cost_csq_0_0[1] = {
  &measurements__measurements__du_functor_desc_cs_cost_csq_0_0
};

#line 1039 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_cs_cost_csq_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_cs_cost_csq_0_0
  }
};

#line 1048 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_cs_cost_csq_0[1] = {
  &measurements__measurements__du_functor_desc_cs_cost_csq_0_0
};

#line 1053 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_cs_cost_csq_0[1] = {
  (MR_Integer) 0
};

#line 1058 "measurements.c"
const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_cs_cost_csq_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____cs_cost_csq_0_0_10001)),
  ((MR_Box) (measurements____Compare____cs_cost_csq_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "cs_cost_csq",
  {     measurements__measurements__du_name_ordered_cs_cost_csq_0 },
  {     measurements__measurements__du_ptag_ordered_cs_cost_csq_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_cs_cost_csq_0
};

#line 1075 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_0 = {
  (MR_String) "dead_goal",
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

#line 1090 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_goal_cost_csq_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1095 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_goal_cost_csq_0_1[1] = {
  (MR_String) "tg_calls"
};

#line 1100 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_1 = {
  (MR_String) "trivial_goal",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  measurements__measurements__field_types_goal_cost_csq_0_1,
  measurements__measurements__field_names_goal_cost_csq_0_1,
  NULL,
  NULL
};

#line 1115 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_goal_cost_csq_0_2[2] = {
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_cost_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1121 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_goal_cost_csq_0_2[2] = {
  (MR_String) "ntg_avg_cost",
  (MR_String) "ntg_calls"
};

#line 1127 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_goal_cost_csq_0_2 = {
  (MR_String) "non_trivial_goal",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  measurements__measurements__field_types_goal_cost_csq_0_2,
  measurements__measurements__field_names_goal_cost_csq_0_2,
  NULL,
  NULL
};

#line 1142 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_goal_cost_csq_0_0[1] = {
  &measurements__measurements__du_functor_desc_goal_cost_csq_0_0
};

#line 1147 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_goal_cost_csq_0_1[1] = {
  &measurements__measurements__du_functor_desc_goal_cost_csq_0_1
};

#line 1152 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_goal_cost_csq_0_2[1] = {
  &measurements__measurements__du_functor_desc_goal_cost_csq_0_2
};

#line 1157 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_goal_cost_csq_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    measurements__measurements__du_stag_ordered_goal_cost_csq_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_goal_cost_csq_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_goal_cost_csq_0_2
  }
};

#line 1176 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_goal_cost_csq_0[3] = {
  &measurements__measurements__du_functor_desc_goal_cost_csq_0_0,
  &measurements__measurements__du_functor_desc_goal_cost_csq_0_2,
  &measurements__measurements__du_functor_desc_goal_cost_csq_0_1
};

#line 1183 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_goal_cost_csq_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1190 "measurements.c"
const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_goal_cost_csq_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____goal_cost_csq_0_0_10001)),
  ((MR_Box) (measurements____Compare____goal_cost_csq_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "goal_cost_csq",
  {     measurements__measurements__du_name_ordered_goal_cost_csq_0 },
  {     measurements__measurements__du_ptag_ordered_goal_cost_csq_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_goal_cost_csq_0
};

#line 1207 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_inherit_prof_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1215 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_inherit_prof_info_0_0[4] = {
  (MR_String) "ipo_quanta",
  (MR_String) "ipo_callseqs",
  (MR_String) "ipo_allocs",
  (MR_String) "ipo_words"
};

#line 1223 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_inherit_prof_info_0_0 = {
  (MR_String) "inherit_prof_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_inherit_prof_info_0_0,
  measurements__measurements__field_names_inherit_prof_info_0_0,
  NULL,
  NULL
};

#line 1238 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_inherit_prof_info_0_0[1] = {
  &measurements__measurements__du_functor_desc_inherit_prof_info_0_0
};

#line 1243 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_inherit_prof_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_inherit_prof_info_0_0
  }
};

#line 1252 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_inherit_prof_info_0[1] = {
  &measurements__measurements__du_functor_desc_inherit_prof_info_0_0
};

#line 1257 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_inherit_prof_info_0[1] = {
  (MR_Integer) 0
};

#line 1262 "measurements.c"
const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_inherit_prof_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____inherit_prof_info_0_0_10001)),
  ((MR_Box) (measurements____Compare____inherit_prof_info_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "inherit_prof_info",
  {     measurements__measurements__du_name_ordered_inherit_prof_info_0 },
  {     measurements__measurements__du_ptag_ordered_inherit_prof_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_inherit_prof_info_0
};

#line 1279 "measurements.c"
static const MR_EnumFunctorDesc measurements__measurements__enum_functor_desc_is_active_0_0 = {
  (MR_String) "is_active",
  (MR_Integer) 0
};

#line 1285 "measurements.c"
static const MR_EnumFunctorDesc measurements__measurements__enum_functor_desc_is_active_0_1 = {
  (MR_String) "is_not_active",
  (MR_Integer) 1
};

#line 1291 "measurements.c"
static const MR_EnumFunctorDescPtr measurements__measurements__enum_value_ordered_is_active_0[2] = {
  &measurements__measurements__enum_functor_desc_is_active_0_0,
  &measurements__measurements__enum_functor_desc_is_active_0_1
};

#line 1297 "measurements.c"
static const MR_EnumFunctorDescPtr measurements__measurements__enum_name_ordered_is_active_0[2] = {
  &measurements__measurements__enum_functor_desc_is_active_0_0,
  &measurements__measurements__enum_functor_desc_is_active_0_1
};

#line 1303 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_is_active_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1309 "measurements.c"
const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_is_active_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (measurements____Unify____is_active_0_0_10001)),
  ((MR_Box) (measurements____Compare____is_active_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "is_active",
  {     measurements__measurements__enum_name_ordered_is_active_0 },
  {     measurements__measurements__enum_value_ordered_is_active_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_is_active_0
};

#line 1326 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_0[8] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1338 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_0[8] = {
  (MR_String) "opa_exits",
  (MR_String) "opa_fails",
  (MR_String) "opa_redos",
  (MR_String) "opa_excps",
  (MR_String) "opa_quanta",
  (MR_String) "opa_callseqs",
  (MR_String) "opa_allocs",
  (MR_String) "opa_words"
};

#line 1350 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_0 = {
  (MR_String) "own_prof_all",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_own_prof_info_0_0,
  measurements__measurements__field_names_own_prof_info_0_0,
  NULL,
  NULL
};

#line 1365 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_1[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1374 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_1[5] = {
  (MR_String) "opd_exits",
  (MR_String) "opd_quanta",
  (MR_String) "opd_callseqs",
  (MR_String) "opd_allocs",
  (MR_String) "opd_words"
};

#line 1383 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_1 = {
  (MR_String) "own_prof_det",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  measurements__measurements__field_types_own_prof_info_0_1,
  measurements__measurements__field_names_own_prof_info_0_1,
  NULL,
  NULL
};

#line 1398 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_2[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1406 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_2[4] = {
  (MR_String) "opfd_exits",
  (MR_String) "opfd_callseqs",
  (MR_String) "opfd_allocs",
  (MR_String) "opfd_words"
};

#line 1414 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_2 = {
  (MR_String) "own_prof_fast_det",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  measurements__measurements__field_types_own_prof_info_0_2,
  measurements__measurements__field_names_own_prof_info_0_2,
  NULL,
  NULL
};

#line 1429 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_own_prof_info_0_3[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1436 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_own_prof_info_0_3[3] = {
  (MR_String) "opfns_exits",
  (MR_String) "opfns_fails",
  (MR_String) "opfns_callseqs"
};

#line 1443 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_own_prof_info_0_3 = {
  (MR_String) "own_prof_fast_nomem_semi",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  measurements__measurements__field_types_own_prof_info_0_3,
  measurements__measurements__field_names_own_prof_info_0_3,
  NULL,
  NULL
};

#line 1458 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_0[1] = {
  &measurements__measurements__du_functor_desc_own_prof_info_0_0
};

#line 1463 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_1[1] = {
  &measurements__measurements__du_functor_desc_own_prof_info_0_1
};

#line 1468 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_2[1] = {
  &measurements__measurements__du_functor_desc_own_prof_info_0_2
};

#line 1473 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_own_prof_info_0_3[1] = {
  &measurements__measurements__du_functor_desc_own_prof_info_0_3
};

#line 1478 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_own_prof_info_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_own_prof_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_own_prof_info_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_own_prof_info_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_own_prof_info_0_3
  }
};

#line 1502 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_own_prof_info_0[4] = {
  &measurements__measurements__du_functor_desc_own_prof_info_0_0,
  &measurements__measurements__du_functor_desc_own_prof_info_0_1,
  &measurements__measurements__du_functor_desc_own_prof_info_0_2,
  &measurements__measurements__du_functor_desc_own_prof_info_0_3
};

#line 1510 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_own_prof_info_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 1518 "measurements.c"
const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_own_prof_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____own_prof_info_0_0_10001)),
  ((MR_Box) (measurements____Compare____own_prof_info_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "own_prof_info",
  {     measurements__measurements__du_name_ordered_own_prof_info_0 },
  {     measurements__measurements__du_ptag_ordered_own_prof_info_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_own_prof_info_0
};

#line 1535 "measurements.c"
static const MR_FA_TypeInfo_Struct1 measurements__maybe__ti_maybe_1measurements__type_ctor_info_parallel_exec_metrics_internal_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_parallel_exec_metrics_internal_0
  }
};

#line 1543 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_incomplete_0_0[8] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &measurements__maybe__ti_maybe_1measurements__type_ctor_info_parallel_exec_metrics_internal_0
};

#line 1555 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_parallel_exec_metrics_incomplete_0_0[8] = {
  (MR_String) "pemi_time_before_conj",
  (MR_String) "pemi_time_after_conj",
  (MR_String) "pemi_num_calls",
  (MR_String) "pemi_spark_cost",
  (MR_String) "pemi_spark_delay",
  (MR_String) "pemi_barrier_cost",
  (MR_String) "pemi_context_wakeup_delay",
  (MR_String) "pemi_internal"
};

#line 1567 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_parallel_exec_metrics_incomplete_0_0 = {
  (MR_String) "pem_incomplete",
  (MR_Integer) 8,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_parallel_exec_metrics_incomplete_0_0,
  measurements__measurements__field_names_parallel_exec_metrics_incomplete_0_0,
  NULL,
  NULL
};

#line 1582 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_incomplete_0_0[1] = {
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_incomplete_0_0
};

#line 1587 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_parallel_exec_metrics_incomplete_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_parallel_exec_metrics_incomplete_0_0
  }
};

#line 1596 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_parallel_exec_metrics_incomplete_0[1] = {
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_incomplete_0_0
};

#line 1601 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_parallel_exec_metrics_incomplete_0[1] = {
  (MR_Integer) 0
};

#line 1606 "measurements.c"
const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_parallel_exec_metrics_incomplete_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____parallel_exec_metrics_incomplete_0_0_10001)),
  ((MR_Box) (measurements____Compare____parallel_exec_metrics_incomplete_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "parallel_exec_metrics_incomplete",
  {     measurements__measurements__du_name_ordered_parallel_exec_metrics_incomplete_0 },
  {     measurements__measurements__du_ptag_ordered_parallel_exec_metrics_incomplete_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_parallel_exec_metrics_incomplete_0
};

#line 1623 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_internal_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1630 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_parallel_exec_metrics_internal_0_0[3] = {
  (MR_String) "pemi_time_left_seq",
  (MR_String) "pemi_time_left_par",
  (MR_String) "pemi_time_left_signals"
};

#line 1637 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_0 = {
  (MR_String) "pem_left_most",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_parallel_exec_metrics_internal_0_0,
  measurements__measurements__field_names_parallel_exec_metrics_internal_0_0,
  NULL,
  NULL
};

#line 1652 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_parallel_exec_metrics_internal_0_1[6] = {
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_parallel_exec_metrics_internal_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1662 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_parallel_exec_metrics_internal_0_1[6] = {
  (MR_String) "pemi_time_left",
  (MR_String) "pemi_time_signals",
  (MR_String) "pemi_time_waits",
  (MR_String) "pemi_time_right_seq",
  (MR_String) "pemi_time_right_par",
  (MR_String) "pemi_time_right_dead"
};

#line 1672 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_1 = {
  (MR_String) "pem_additional",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  measurements__measurements__field_types_parallel_exec_metrics_internal_0_1,
  measurements__measurements__field_names_parallel_exec_metrics_internal_0_1,
  NULL,
  NULL
};

#line 1687 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_0[1] = {
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_0
};

#line 1692 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_1[1] = {
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_1
};

#line 1697 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_parallel_exec_metrics_internal_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_parallel_exec_metrics_internal_0_1
  }
};

#line 1711 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_parallel_exec_metrics_internal_0[2] = {
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_1,
  &measurements__measurements__du_functor_desc_parallel_exec_metrics_internal_0_0
};

#line 1717 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_parallel_exec_metrics_internal_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1723 "measurements.c"
const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_parallel_exec_metrics_internal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____parallel_exec_metrics_internal_0_0_10001)),
  ((MR_Box) (measurements____Compare____parallel_exec_metrics_internal_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "parallel_exec_metrics_internal",
  {     measurements__measurements__du_name_ordered_parallel_exec_metrics_internal_0 },
  {     measurements__measurements__du_ptag_ordered_parallel_exec_metrics_internal_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_parallel_exec_metrics_internal_0
};

#line 1740 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_parallelism_amount_0[1] = {
  (MR_Integer) 0
};

#line 1745 "measurements.c"
static const MR_NotagFunctorDesc measurements__measurements__notag_functor_desc_parallelism_amount_0 = {
  (MR_String) "parallelism_amount",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_String) "pa_likely"
};

#line 1752 "measurements.c"
const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_parallelism_amount_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (measurements____Unify____parallelism_amount_0_0_10001)),
  ((MR_Box) (measurements____Compare____parallelism_amount_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "parallelism_amount",
  {     &measurements__measurements__notag_functor_desc_parallelism_amount_0 },
  {     &measurements__measurements__notag_functor_desc_parallelism_amount_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_parallelism_amount_0
};

#line 1769 "measurements.c"
static const MR_PseudoTypeInfo measurements__measurements__field_types_proc_cost_csq_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_cost_0
};

#line 1776 "measurements.c"
static const MR_ConstString measurements__measurements__field_names_proc_cost_csq_0_0[3] = {
  (MR_String) "pcc_nr_calls",
  (MR_String) "pcc_r_calls",
  (MR_String) "pcc_csq"
};

#line 1783 "measurements.c"
static const MR_DuFunctorDesc measurements__measurements__du_functor_desc_proc_cost_csq_0_0 = {
  (MR_String) "proc_cost_csq",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurements__measurements__field_types_proc_cost_csq_0_0,
  measurements__measurements__field_names_proc_cost_csq_0_0,
  NULL,
  NULL
};

#line 1798 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_stag_ordered_proc_cost_csq_0_0[1] = {
  &measurements__measurements__du_functor_desc_proc_cost_csq_0_0
};

#line 1803 "measurements.c"
static const MR_DuPtagLayout measurements__measurements__du_ptag_ordered_proc_cost_csq_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurements__measurements__du_stag_ordered_proc_cost_csq_0_0
  }
};

#line 1812 "measurements.c"
static const MR_DuFunctorDescPtr measurements__measurements__du_name_ordered_proc_cost_csq_0[1] = {
  &measurements__measurements__du_functor_desc_proc_cost_csq_0_0
};

#line 1817 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_proc_cost_csq_0[1] = {
  (MR_Integer) 0
};

#line 1822 "measurements.c"
const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_proc_cost_csq_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurements____Unify____proc_cost_csq_0_0_10001)),
  ((MR_Box) (measurements____Compare____proc_cost_csq_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "proc_cost_csq",
  {     measurements__measurements__du_name_ordered_proc_cost_csq_0 },
  {     measurements__measurements__du_ptag_ordered_proc_cost_csq_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_proc_cost_csq_0
};

#line 1839 "measurements.c"
static const MR_Integer measurements__measurements__functor_number_map_recursion_depth_0[1] = {
  (MR_Integer) 0
};

#line 1844 "measurements.c"
static const MR_NotagFunctorDesc measurements__measurements__notag_functor_desc_recursion_depth_0 = {
  (MR_String) "recursion_depth",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  NULL
};

#line 1851 "measurements.c"
const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_recursion_depth_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (measurements____Unify____recursion_depth_0_0_10001)),
  ((MR_Box) (measurements____Compare____recursion_depth_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "recursion_depth",
  {     &measurements__measurements__notag_functor_desc_recursion_depth_0 },
  {     &measurements__measurements__notag_functor_desc_recursion_depth_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurements__measurements__functor_number_map_recursion_depth_0
};

#line 1868 "measurements.c"
static const MR_FA_TypeInfo_Struct1 measurements__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1876 "measurements.c"
static const MR_FA_TypeInfo_Struct1 measurements__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &measurements__array__ti_array_1builtin__type_ctor_info_int_0
  }
};

#line 1884 "measurements.c"
const MR_TypeCtorInfo_Struct measurements__measurements__type_ctor_info_static_coverage_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (measurements____Unify____static_coverage_info_0_0_10001)),
  ((MR_Box) (measurements____Compare____static_coverage_info_0_0_10001)),
  (MR_String) "measurements",
  (MR_String) "static_coverage_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &measurements__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1901 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____cost_0_0_10001(
#line 1904 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 1906 "measurements.c"
  MR_Box measurements__wrapper_arg_2)
#line 1908 "measurements.c"
{
#line 1910 "measurements.c"
  {
#line 1912 "measurements.c"
    MR_bool measurements__succeeded;

#line 1915 "measurements.c"
    {
#line 1917 "measurements.c"
      measurements__succeeded = measurements____Unify____cost_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 1920 "measurements.c"
    return measurements__succeeded;
#line 1922 "measurements.c"
  }
#line 1924 "measurements.c"
}

#line 1927 "measurements.c"
static void MR_CALL 
measurements____Compare____cost_0_0_10001(
#line 1930 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 1932 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 1934 "measurements.c"
  MR_Box measurements__wrapper_arg_3)
#line 1936 "measurements.c"
{
#line 1938 "measurements.c"
  {
#line 1940 "measurements.c"
    MR_Word measurements__conv0_HeadVar__1_1;

#line 1943 "measurements.c"
    {
#line 1945 "measurements.c"
      measurements____Compare____cost_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
#line 1948 "measurements.c"
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
#line 1950 "measurements.c"
  }
#line 1952 "measurements.c"
}

#line 1955 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____cs_cost_csq_0_0_10001(
#line 1958 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 1960 "measurements.c"
  MR_Box measurements__wrapper_arg_2)
#line 1962 "measurements.c"
{
#line 1964 "measurements.c"
  {
#line 1966 "measurements.c"
    MR_bool measurements__succeeded;

#line 1969 "measurements.c"
    {
#line 1971 "measurements.c"
      measurements__succeeded = measurements____Unify____cs_cost_csq_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 1974 "measurements.c"
    return measurements__succeeded;
#line 1976 "measurements.c"
  }
#line 1978 "measurements.c"
}

#line 1981 "measurements.c"
static void MR_CALL 
measurements____Compare____cs_cost_csq_0_0_10001(
#line 1984 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 1986 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 1988 "measurements.c"
  MR_Box measurements__wrapper_arg_3)
#line 1990 "measurements.c"
{
#line 1992 "measurements.c"
  {
#line 1994 "measurements.c"
    MR_Word measurements__conv0_HeadVar__1_1;

#line 1997 "measurements.c"
    {
#line 1999 "measurements.c"
      measurements____Compare____cs_cost_csq_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
#line 2002 "measurements.c"
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
#line 2004 "measurements.c"
  }
#line 2006 "measurements.c"
}

#line 2009 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____goal_cost_csq_0_0_10001(
#line 2012 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 2014 "measurements.c"
  MR_Box measurements__wrapper_arg_2)
#line 2016 "measurements.c"
{
#line 2018 "measurements.c"
  {
#line 2020 "measurements.c"
    MR_bool measurements__succeeded;

#line 2023 "measurements.c"
    {
#line 2025 "measurements.c"
      measurements__succeeded = measurements____Unify____goal_cost_csq_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 2028 "measurements.c"
    return measurements__succeeded;
#line 2030 "measurements.c"
  }
#line 2032 "measurements.c"
}

#line 2035 "measurements.c"
static void MR_CALL 
measurements____Compare____goal_cost_csq_0_0_10001(
#line 2038 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 2040 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 2042 "measurements.c"
  MR_Box measurements__wrapper_arg_3)
#line 2044 "measurements.c"
{
#line 2046 "measurements.c"
  {
#line 2048 "measurements.c"
    MR_Word measurements__conv0_HeadVar__1_1;

#line 2051 "measurements.c"
    {
#line 2053 "measurements.c"
      measurements____Compare____goal_cost_csq_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
#line 2056 "measurements.c"
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
#line 2058 "measurements.c"
  }
#line 2060 "measurements.c"
}

#line 2063 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____inherit_prof_info_0_0_10001(
#line 2066 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 2068 "measurements.c"
  MR_Box measurements__wrapper_arg_2)
#line 2070 "measurements.c"
{
#line 2072 "measurements.c"
  {
#line 2074 "measurements.c"
    MR_bool measurements__succeeded;

#line 2077 "measurements.c"
    {
#line 2079 "measurements.c"
      measurements__succeeded = measurements____Unify____inherit_prof_info_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 2082 "measurements.c"
    return measurements__succeeded;
#line 2084 "measurements.c"
  }
#line 2086 "measurements.c"
}

#line 2089 "measurements.c"
static void MR_CALL 
measurements____Compare____inherit_prof_info_0_0_10001(
#line 2092 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 2094 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 2096 "measurements.c"
  MR_Box measurements__wrapper_arg_3)
#line 2098 "measurements.c"
{
#line 2100 "measurements.c"
  {
#line 2102 "measurements.c"
    MR_Word measurements__conv0_HeadVar__1_1;

#line 2105 "measurements.c"
    {
#line 2107 "measurements.c"
      measurements____Compare____inherit_prof_info_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
#line 2110 "measurements.c"
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
#line 2112 "measurements.c"
  }
#line 2114 "measurements.c"
}

#line 2117 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____is_active_0_0_10001(
#line 2120 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 2122 "measurements.c"
  MR_Box measurements__wrapper_arg_2)
#line 2124 "measurements.c"
{
#line 2126 "measurements.c"
  {
#line 2128 "measurements.c"
    MR_bool measurements__succeeded;

#line 2131 "measurements.c"
    {
#line 2133 "measurements.c"
      measurements__succeeded = measurements____Unify____is_active_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 2136 "measurements.c"
    return measurements__succeeded;
#line 2138 "measurements.c"
  }
#line 2140 "measurements.c"
}

#line 2143 "measurements.c"
static void MR_CALL 
measurements____Compare____is_active_0_0_10001(
#line 2146 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 2148 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 2150 "measurements.c"
  MR_Box measurements__wrapper_arg_3)
#line 2152 "measurements.c"
{
#line 2154 "measurements.c"
  {
#line 2156 "measurements.c"
    MR_Word measurements__conv0_HeadVar__1_1;

#line 2159 "measurements.c"
    {
#line 2161 "measurements.c"
      measurements____Compare____is_active_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
#line 2164 "measurements.c"
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
#line 2166 "measurements.c"
  }
#line 2168 "measurements.c"
}

#line 2171 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____own_prof_info_0_0_10001(
#line 2174 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 2176 "measurements.c"
  MR_Box measurements__wrapper_arg_2)
#line 2178 "measurements.c"
{
#line 2180 "measurements.c"
  {
#line 2182 "measurements.c"
    MR_bool measurements__succeeded;

#line 2185 "measurements.c"
    {
#line 2187 "measurements.c"
      measurements__succeeded = measurements____Unify____own_prof_info_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 2190 "measurements.c"
    return measurements__succeeded;
#line 2192 "measurements.c"
  }
#line 2194 "measurements.c"
}

#line 2197 "measurements.c"
static void MR_CALL 
measurements____Compare____own_prof_info_0_0_10001(
#line 2200 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 2202 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 2204 "measurements.c"
  MR_Box measurements__wrapper_arg_3)
#line 2206 "measurements.c"
{
#line 2208 "measurements.c"
  {
#line 2210 "measurements.c"
    MR_Word measurements__conv0_HeadVar__1_1;

#line 2213 "measurements.c"
    {
#line 2215 "measurements.c"
      measurements____Compare____own_prof_info_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
#line 2218 "measurements.c"
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
#line 2220 "measurements.c"
  }
#line 2222 "measurements.c"
}

#line 2225 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_incomplete_0_0_10001(
#line 2228 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 2230 "measurements.c"
  MR_Box measurements__wrapper_arg_2)
#line 2232 "measurements.c"
{
#line 2234 "measurements.c"
  {
#line 2236 "measurements.c"
    MR_bool measurements__succeeded;

#line 2239 "measurements.c"
    {
#line 2241 "measurements.c"
      measurements__succeeded = measurements____Unify____parallel_exec_metrics_incomplete_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 2244 "measurements.c"
    return measurements__succeeded;
#line 2246 "measurements.c"
  }
#line 2248 "measurements.c"
}

#line 2251 "measurements.c"
static void MR_CALL 
measurements____Compare____parallel_exec_metrics_incomplete_0_0_10001(
#line 2254 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 2256 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 2258 "measurements.c"
  MR_Box measurements__wrapper_arg_3)
#line 2260 "measurements.c"
{
#line 2262 "measurements.c"
  {
#line 2264 "measurements.c"
    MR_Word measurements__conv0_HeadVar__1_1;

#line 2267 "measurements.c"
    {
#line 2269 "measurements.c"
      measurements____Compare____parallel_exec_metrics_incomplete_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
#line 2272 "measurements.c"
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
#line 2274 "measurements.c"
  }
#line 2276 "measurements.c"
}

#line 2279 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_internal_0_0_10001(
#line 2282 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 2284 "measurements.c"
  MR_Box measurements__wrapper_arg_2)
#line 2286 "measurements.c"
{
#line 2288 "measurements.c"
  {
#line 2290 "measurements.c"
    MR_bool measurements__succeeded;

#line 2293 "measurements.c"
    {
#line 2295 "measurements.c"
      measurements__succeeded = measurements____Unify____parallel_exec_metrics_internal_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 2298 "measurements.c"
    return measurements__succeeded;
#line 2300 "measurements.c"
  }
#line 2302 "measurements.c"
}

#line 2305 "measurements.c"
static void MR_CALL 
measurements____Compare____parallel_exec_metrics_internal_0_0_10001(
#line 2308 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 2310 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 2312 "measurements.c"
  MR_Box measurements__wrapper_arg_3)
#line 2314 "measurements.c"
{
#line 2316 "measurements.c"
  {
#line 2318 "measurements.c"
    MR_Word measurements__conv0_HeadVar__1_1;

#line 2321 "measurements.c"
    {
#line 2323 "measurements.c"
      measurements____Compare____parallel_exec_metrics_internal_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
#line 2326 "measurements.c"
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
#line 2328 "measurements.c"
  }
#line 2330 "measurements.c"
}

#line 2333 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____parallelism_amount_0_0_10001(
#line 2336 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 2338 "measurements.c"
  MR_Box measurements__wrapper_arg_2)
#line 2340 "measurements.c"
{
#line 2342 "measurements.c"
  {
#line 2344 "measurements.c"
    MR_bool measurements__succeeded;

#line 2347 "measurements.c"
    {
#line 2349 "measurements.c"
      measurements__succeeded = measurements____Unify____parallelism_amount_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 2352 "measurements.c"
    return measurements__succeeded;
#line 2354 "measurements.c"
  }
#line 2356 "measurements.c"
}

#line 2359 "measurements.c"
static void MR_CALL 
measurements____Compare____parallelism_amount_0_0_10001(
#line 2362 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 2364 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 2366 "measurements.c"
  MR_Box measurements__wrapper_arg_3)
#line 2368 "measurements.c"
{
#line 2370 "measurements.c"
  {
#line 2372 "measurements.c"
    MR_Word measurements__conv0_HeadVar__1_1;

#line 2375 "measurements.c"
    {
#line 2377 "measurements.c"
      measurements____Compare____parallelism_amount_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
#line 2380 "measurements.c"
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
#line 2382 "measurements.c"
  }
#line 2384 "measurements.c"
}

#line 2387 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____proc_cost_csq_0_0_10001(
#line 2390 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 2392 "measurements.c"
  MR_Box measurements__wrapper_arg_2)
#line 2394 "measurements.c"
{
#line 2396 "measurements.c"
  {
#line 2398 "measurements.c"
    MR_bool measurements__succeeded;

#line 2401 "measurements.c"
    {
#line 2403 "measurements.c"
      measurements__succeeded = measurements____Unify____proc_cost_csq_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 2406 "measurements.c"
    return measurements__succeeded;
#line 2408 "measurements.c"
  }
#line 2410 "measurements.c"
}

#line 2413 "measurements.c"
static void MR_CALL 
measurements____Compare____proc_cost_csq_0_0_10001(
#line 2416 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 2418 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 2420 "measurements.c"
  MR_Box measurements__wrapper_arg_3)
#line 2422 "measurements.c"
{
#line 2424 "measurements.c"
  {
#line 2426 "measurements.c"
    MR_Word measurements__conv0_HeadVar__1_1;

#line 2429 "measurements.c"
    {
#line 2431 "measurements.c"
      measurements____Compare____proc_cost_csq_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
#line 2434 "measurements.c"
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
#line 2436 "measurements.c"
  }
#line 2438 "measurements.c"
}

#line 2441 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____recursion_depth_0_0_10001(
#line 2444 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 2446 "measurements.c"
  MR_Box measurements__wrapper_arg_2)
#line 2448 "measurements.c"
{
#line 2450 "measurements.c"
  {
#line 2452 "measurements.c"
    MR_bool measurements__succeeded;

#line 2455 "measurements.c"
    {
#line 2457 "measurements.c"
      measurements__succeeded = measurements____Unify____recursion_depth_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 2460 "measurements.c"
    return measurements__succeeded;
#line 2462 "measurements.c"
  }
#line 2464 "measurements.c"
}

#line 2467 "measurements.c"
static void MR_CALL 
measurements____Compare____recursion_depth_0_0_10001(
#line 2470 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 2472 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 2474 "measurements.c"
  MR_Box measurements__wrapper_arg_3)
#line 2476 "measurements.c"
{
#line 2478 "measurements.c"
  {
#line 2480 "measurements.c"
    MR_Word measurements__conv0_HeadVar__1_1;

#line 2483 "measurements.c"
    {
#line 2485 "measurements.c"
      measurements____Compare____recursion_depth_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
#line 2488 "measurements.c"
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
#line 2490 "measurements.c"
  }
#line 2492 "measurements.c"
}

#line 2495 "measurements.c"
static MR_bool MR_CALL 
measurements____Unify____static_coverage_info_0_0_10001(
#line 2498 "measurements.c"
  MR_Box measurements__wrapper_arg_1,
#line 2500 "measurements.c"
  MR_Box measurements__wrapper_arg_2)
#line 2502 "measurements.c"
{
#line 2504 "measurements.c"
  {
#line 2506 "measurements.c"
    MR_bool measurements__succeeded;

#line 2509 "measurements.c"
    {
#line 2511 "measurements.c"
      measurements__succeeded = measurements____Unify____static_coverage_info_0_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 2514 "measurements.c"
    return measurements__succeeded;
#line 2516 "measurements.c"
  }
#line 2518 "measurements.c"
}

#line 2521 "measurements.c"
static void MR_CALL 
measurements____Compare____static_coverage_info_0_0_10001(
#line 2524 "measurements.c"
  MR_Box * measurements__wrapper_arg_1,
#line 2526 "measurements.c"
  MR_Box measurements__wrapper_arg_2,
#line 2528 "measurements.c"
  MR_Box measurements__wrapper_arg_3)
#line 2530 "measurements.c"
{
#line 2532 "measurements.c"
  {
#line 2534 "measurements.c"
    MR_Word measurements__conv0_HeadVar__1_1;

#line 2537 "measurements.c"
    {
#line 2539 "measurements.c"
      measurements____Compare____static_coverage_info_0_0(&measurements__conv0_HeadVar__1_1, ((MR_Word) measurements__wrapper_arg_2), ((MR_Word) measurements__wrapper_arg_3));
    }
#line 2542 "measurements.c"
    *measurements__wrapper_arg_1 = ((MR_Box) (measurements__conv0_HeadVar__1_1));
#line 2544 "measurements.c"
  }
#line 2546 "measurements.c"
}

#line 934 "measurements.m"
static void MR_CALL 
measurements__IntroducedFrom__pred__add_coverage_arrays__934__1_4_p_0(
#line 934 "measurements.m"
  MR_Integer measurements__HeadVar__1_19,
#line 934 "measurements.m"
  MR_Integer measurements__HeadVar__2_20,
#line 934 "measurements.m"
  MR_ArrayPtr measurements__HeadVar__3_21,
#line 934 "measurements.m"
  MR_ArrayPtr * measurements__HeadVar__4_22)
#line 934 "measurements.m"
{
#line 934 "measurements.m"
  {
#line 934 "measurements.m"
    MR_bool measurements__succeeded;
#line 934 "measurements.m"
    MR_Word measurements__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 934 "measurements.m"
    MR_Integer measurements__Value_13;
#line 934 "measurements.m"
    MR_Integer measurements__V_23_23;
#line 936 "measurements.m"
    MR_Box measurements__conv0_Value_13;
#line 937 "measurements.m"
    MR_ArrayPtr measurements__conv1_HeadVar__4_22;

#line 936 "measurements.m"
    {
#line 936 "measurements.m"
      mercury__array__lookup_3_p_0(measurements__TypeCtorInfo_33_33, (MR_ArrayPtr) measurements__HeadVar__3_21, measurements__HeadVar__1_19, &measurements__conv0_Value_13);
    }
#line 936 "measurements.m"
    measurements__Value_13 = ((MR_Integer) measurements__conv0_Value_13);
#line 937 "measurements.m"
    measurements__V_23_23 = (measurements__Value_13 + measurements__HeadVar__2_20);
#line 937 "measurements.m"
    {
#line 937 "measurements.m"
      mercury__array__set_4_p_0(measurements__TypeCtorInfo_33_33, measurements__HeadVar__1_19, ((MR_Box) (measurements__V_23_23)), (MR_ArrayPtr) measurements__HeadVar__3_21, &measurements__conv1_HeadVar__4_22);
    }
#line 937 "measurements.m"
    *measurements__HeadVar__4_22 = (MR_ArrayPtr) measurements__conv1_HeadVar__4_22;
#line 934 "measurements.m"
  }
#line 934 "measurements.m"
}

#line 923 "measurements.m"
void MR_CALL 
measurements____Compare____static_coverage_info_0_0(
#line 923 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 923 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 923 "measurements.m"
  MR_Word measurements__HeadVar__3_3)
#line 923 "measurements.m"
{
#line 923 "measurements.m"
  {
#line 923 "measurements.m"
    MR_bool measurements__succeeded;
#line 923 "measurements.m"
    MR_Word measurements__Cast_HeadVar1_4 = measurements__HeadVar__2_2;
#line 923 "measurements.m"
    MR_Word measurements__Cast_HeadVar2_5 = measurements__HeadVar__3_3;

#line 923 "measurements.m"
    {
#line 923 "measurements.m"
      mercury__builtin__compare_3_p_0((MR_Word) &measurements_scalar_common_1[2], measurements__HeadVar__1_1, ((MR_Box) (measurements__Cast_HeadVar1_4)), ((MR_Box) (measurements__Cast_HeadVar2_5)));
#line 923 "measurements.m"
      return;
    }
#line 923 "measurements.m"
  }
#line 923 "measurements.m"
}

#line 923 "measurements.m"
MR_bool MR_CALL 
measurements____Unify____static_coverage_info_0_0(
#line 923 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 923 "measurements.m"
  MR_Word measurements__HeadVar__2_2)
#line 923 "measurements.m"
{
#line 923 "measurements.m"
  {
#line 923 "measurements.m"
    MR_bool measurements__succeeded;
#line 923 "measurements.m"
    MR_Word measurements__Cast_HeadVar1_3 = measurements__HeadVar__1_1;
#line 923 "measurements.m"
    MR_Word measurements__Cast_HeadVar2_4 = measurements__HeadVar__2_2;

#line 923 "measurements.m"
    {
#line 923 "measurements.m"
      return measurements__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &measurements_scalar_common_1[2], ((MR_Box) (measurements__Cast_HeadVar1_3)), ((MR_Box) (measurements__Cast_HeadVar2_4)));
    }
#line 923 "measurements.m"
    return measurements__succeeded;
#line 923 "measurements.m"
  }
#line 923 "measurements.m"
}

#line 900 "measurements.m"
void MR_CALL 
measurements____Compare____recursion_depth_0_0(
#line 900 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 900 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 900 "measurements.m"
  MR_Word measurements__HeadVar__3_3)
#line 900 "measurements.m"
{
#line 900 "measurements.m"
  {
#line 900 "measurements.m"
    MR_bool measurements__succeeded;
#line 900 "measurements.m"
    MR_Integer measurements__CastX_6 = (MR_Integer) measurements__HeadVar__2_2;
#line 900 "measurements.m"
    MR_Integer measurements__CastY_7 = (MR_Integer) measurements__HeadVar__3_3;

#line 900 "measurements.m"
    measurements__succeeded = (measurements__CastX_6 == measurements__CastY_7);
#line 900 "measurements.m"
    if (measurements__succeeded)
#line 2684 "measurements.c"
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
#line 900 "measurements.m"
    else
#line 900 "measurements.m"
      {
#line 900 "measurements.m"
        MR_Float measurements__V_4_4 = MR_unbox_float((MR_Box) measurements__HeadVar__2_2);
#line 900 "measurements.m"
        MR_Float measurements__V_5_5 = MR_unbox_float((MR_Box) measurements__HeadVar__3_3);

#line 900 "measurements.m"
        {
#line 900 "measurements.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__V_4_4, measurements__V_5_5);
#line 900 "measurements.m"
          return;
        }
#line 900 "measurements.m"
      }
#line 900 "measurements.m"
  }
#line 900 "measurements.m"
}

#line 900 "measurements.m"
MR_bool MR_CALL 
measurements____Unify____recursion_depth_0_0(
#line 900 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 900 "measurements.m"
  MR_Word measurements__HeadVar__2_2)
#line 900 "measurements.m"
{
#line 900 "measurements.m"
  {
#line 900 "measurements.m"
    MR_bool measurements__succeeded;
#line 900 "measurements.m"
    MR_Integer measurements__CastX_5 = (MR_Integer) measurements__HeadVar__1_1;
#line 900 "measurements.m"
    MR_Integer measurements__CastY_6 = (MR_Integer) measurements__HeadVar__2_2;

#line 900 "measurements.m"
    measurements__succeeded = (measurements__CastX_5 == measurements__CastY_6);
#line 900 "measurements.m"
    if (measurements__succeeded)
#line 900 "measurements.m"
      measurements__succeeded = MR_TRUE;
#line 900 "measurements.m"
    else
#line 900 "measurements.m"
      {
#line 900 "measurements.m"
        MR_Float measurements__V_3_3 = MR_unbox_float((MR_Box) measurements__HeadVar__1_1);
#line 900 "measurements.m"
        MR_Float measurements__V_4_4 = MR_unbox_float((MR_Box) measurements__HeadVar__2_2);

#line 2742 "measurements.c"
        measurements__succeeded = (measurements__V_3_3 == measurements__V_4_4);
#line 900 "measurements.m"
      }
#line 900 "measurements.m"
    return measurements__succeeded;
#line 900 "measurements.m"
  }
#line 900 "measurements.m"
}

#line 647 "measurements.m"
void MR_CALL 
measurements____Compare____proc_cost_csq_0_0(
#line 647 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 647 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 647 "measurements.m"
  MR_Word measurements__HeadVar__3_3)
#line 647 "measurements.m"
{
#line 647 "measurements.m"
  {
#line 647 "measurements.m"
    MR_bool measurements__succeeded;
#line 647 "measurements.m"
    MR_Integer measurements__CastX_12 = (MR_Integer) measurements__HeadVar__2_2;
#line 647 "measurements.m"
    MR_Integer measurements__CastY_13 = (MR_Integer) measurements__HeadVar__3_3;

#line 647 "measurements.m"
    measurements__succeeded = (measurements__CastX_12 == measurements__CastY_13);
#line 647 "measurements.m"
    if (measurements__succeeded)
#line 2777 "measurements.c"
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
#line 647 "measurements.m"
    else
#line 647 "measurements.m"
      {
#line 647 "measurements.m"
        MR_Integer measurements__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 647 "measurements.m"
        MR_Integer measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 647 "measurements.m"
        MR_Word measurements__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 647 "measurements.m"
        MR_Integer measurements__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));
#line 647 "measurements.m"
        MR_Integer measurements__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 1)));
#line 647 "measurements.m"
        MR_Word measurements__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 2)));
#line 647 "measurements.m"
        MR_Word measurements__V_10_10;

#line 647 "measurements.m"
        {
#line 647 "measurements.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_10_10, measurements__V_4_4, measurements__V_7_7);
        }
#line 2803 "measurements.c"
        measurements__succeeded = (measurements__V_10_10 == (MR_Integer) 0);
#line 647 "measurements.m"
        measurements__succeeded = !(measurements__succeeded);
#line 647 "measurements.m"
        if (measurements__succeeded)
#line 647 "measurements.m"
          *measurements__HeadVar__1_1 = measurements__V_10_10;
#line 647 "measurements.m"
        else
#line 647 "measurements.m"
          {
#line 647 "measurements.m"
            MR_Word measurements__V_11_11;

#line 647 "measurements.m"
            {
#line 647 "measurements.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_11_11, measurements__V_5_5, measurements__V_8_8);
            }
#line 2823 "measurements.c"
            measurements__succeeded = (measurements__V_11_11 == (MR_Integer) 0);
#line 647 "measurements.m"
            measurements__succeeded = !(measurements__succeeded);
#line 647 "measurements.m"
            if (measurements__succeeded)
#line 647 "measurements.m"
              *measurements__HeadVar__1_1 = measurements__V_11_11;
#line 647 "measurements.m"
            else
#line 861 "measurements.m"
              {
#line 861 "measurements.m"
                MR_Integer measurements__CastX_25 = (MR_Integer) measurements__V_6_6;
#line 861 "measurements.m"
                MR_Integer measurements__CastY_26 = (MR_Integer) measurements__V_9_9;

#line 861 "measurements.m"
                measurements__succeeded = (measurements__CastX_25 == measurements__CastY_26);
#line 861 "measurements.m"
                if (measurements__succeeded)
#line 2844 "measurements.c"
                  *measurements__HeadVar__1_1 = (MR_Integer) 0;
#line 861 "measurements.m"
                else
#line 861 "measurements.m"
                if (((MR_tag((MR_Word) measurements__V_6_6)) == (MR_mktag((MR_Integer) 0))))
#line 861 "measurements.m"
                  {
#line 861 "measurements.m"
                    MR_Float measurements__V_29_29 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__V_6_6, (MR_Integer) 0)));

#line 861 "measurements.m"
                    if (((MR_tag((MR_Word) measurements__V_9_9)) == (MR_mktag((MR_Integer) 0))))
#line 861 "measurements.m"
                      {
#line 861 "measurements.m"
                        MR_Float measurements__V_18_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__V_9_9, (MR_Integer) 0)));

#line 861 "measurements.m"
                        {
#line 861 "measurements.m"
                          mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__V_29_29, measurements__V_18_18);
#line 861 "measurements.m"
                          return;
                        }
#line 861 "measurements.m"
                      }
#line 861 "measurements.m"
                    else
#line 2873 "measurements.c"
                      *measurements__HeadVar__1_1 = (MR_Integer) 1;
#line 861 "measurements.m"
                  }
#line 861 "measurements.m"
                else
#line 861 "measurements.m"
                  {
#line 861 "measurements.m"
                    MR_Float measurements__V_30_30 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__V_6_6, (MR_Integer) 0)));

#line 861 "measurements.m"
                    if (((MR_tag((MR_Word) measurements__V_9_9)) == (MR_mktag((MR_Integer) 0))))
#line 2886 "measurements.c"
                      *measurements__HeadVar__1_1 = (MR_Integer) 2;
#line 861 "measurements.m"
                    else
#line 861 "measurements.m"
                      {
#line 861 "measurements.m"
                        MR_Float measurements__V_24_24 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__V_9_9, (MR_Integer) 0)));

#line 861 "measurements.m"
                        {
#line 861 "measurements.m"
                          mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__V_30_30, measurements__V_24_24);
#line 861 "measurements.m"
                          return;
                        }
#line 861 "measurements.m"
                      }
#line 861 "measurements.m"
                  }
#line 861 "measurements.m"
              }
#line 647 "measurements.m"
          }
#line 647 "measurements.m"
      }
#line 647 "measurements.m"
  }
#line 647 "measurements.m"
}

#line 647 "measurements.m"
MR_bool MR_CALL 
measurements____Unify____proc_cost_csq_0_0(
#line 647 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 647 "measurements.m"
  MR_Word measurements__HeadVar__2_2)
#line 647 "measurements.m"
{
#line 647 "measurements.m"
  {
#line 647 "measurements.m"
    MR_bool measurements__succeeded;
#line 647 "measurements.m"
    MR_Integer measurements__CastX_9 = (MR_Integer) measurements__HeadVar__1_1;
#line 647 "measurements.m"
    MR_Integer measurements__CastY_10 = (MR_Integer) measurements__HeadVar__2_2;

#line 647 "measurements.m"
    measurements__succeeded = (measurements__CastX_9 == measurements__CastY_10);
#line 647 "measurements.m"
    if (measurements__succeeded)
#line 647 "measurements.m"
      measurements__succeeded = MR_TRUE;
#line 647 "measurements.m"
    else
#line 647 "measurements.m"
      {
#line 647 "measurements.m"
        MR_Integer measurements__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 647 "measurements.m"
        MR_Integer measurements__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 647 "measurements.m"
        MR_Word measurements__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 647 "measurements.m"
        MR_Integer measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 647 "measurements.m"
        MR_Integer measurements__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 647 "measurements.m"
        MR_Word measurements__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 861 "measurements.m"
        MR_Integer measurements__CastX_15;
#line 861 "measurements.m"
        MR_Integer measurements__CastY_16;

#line 2962 "measurements.c"
        measurements__succeeded = (measurements__V_3_3 == measurements__V_6_6);
#line 647 "measurements.m"
        if (measurements__succeeded)
#line 647 "measurements.m"
          {
#line 2968 "measurements.c"
            measurements__succeeded = (measurements__V_4_4 == measurements__V_7_7);
#line 647 "measurements.m"
            if (measurements__succeeded)
#line 647 "measurements.m"
              {
#line 861 "measurements.m"
                measurements__CastX_15 = (MR_Integer) measurements__V_5_5;
#line 861 "measurements.m"
                measurements__CastY_16 = (MR_Integer) measurements__V_8_8;
#line 861 "measurements.m"
                measurements__succeeded = (measurements__CastX_15 == measurements__CastY_16);
#line 861 "measurements.m"
                if (measurements__succeeded)
#line 861 "measurements.m"
                  measurements__succeeded = MR_TRUE;
#line 861 "measurements.m"
                else
#line 861 "measurements.m"
                if (((MR_tag((MR_Word) measurements__V_5_5)) == (MR_mktag((MR_Integer) 0))))
#line 861 "measurements.m"
                  {
#line 861 "measurements.m"
                    MR_Float measurements__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__V_5_5, (MR_Integer) 0)));
#line 861 "measurements.m"
                    MR_Float measurements__V_12_12;

#line 861 "measurements.m"
                    measurements__succeeded = ((MR_tag((MR_Word) measurements__V_8_8)) == (MR_mktag((MR_Integer) 0)));
#line 861 "measurements.m"
                    if (measurements__succeeded)
#line 861 "measurements.m"
                      {
#line 861 "measurements.m"
                        measurements__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__V_8_8, (MR_Integer) 0)));
#line 3003 "measurements.c"
                        measurements__succeeded = (measurements__V_11_11 == measurements__V_12_12);
#line 861 "measurements.m"
                      }
#line 861 "measurements.m"
                  }
#line 861 "measurements.m"
                else
#line 861 "measurements.m"
                  {
#line 861 "measurements.m"
                    MR_Float measurements__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__V_5_5, (MR_Integer) 0)));
#line 861 "measurements.m"
                    MR_Float measurements__V_14_14;

#line 861 "measurements.m"
                    measurements__succeeded = ((MR_tag((MR_Word) measurements__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 861 "measurements.m"
                    if (measurements__succeeded)
#line 861 "measurements.m"
                      {
#line 861 "measurements.m"
                        measurements__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__V_8_8, (MR_Integer) 0)));
#line 3026 "measurements.c"
                        measurements__succeeded = (measurements__V_13_13 == measurements__V_14_14);
#line 861 "measurements.m"
                      }
#line 861 "measurements.m"
                  }
#line 647 "measurements.m"
              }
#line 647 "measurements.m"
          }
#line 647 "measurements.m"
      }
#line 647 "measurements.m"
    return measurements__succeeded;
#line 647 "measurements.m"
  }
#line 647 "measurements.m"
}

#line 957 "measurements.m"
void MR_CALL 
measurements____Compare____parallelism_amount_0_0(
#line 957 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 957 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 957 "measurements.m"
  MR_Word measurements__HeadVar__3_3)
#line 957 "measurements.m"
{
#line 957 "measurements.m"
  {
#line 957 "measurements.m"
    MR_bool measurements__succeeded;
#line 957 "measurements.m"
    MR_Integer measurements__CastX_6 = (MR_Integer) measurements__HeadVar__2_2;
#line 957 "measurements.m"
    MR_Integer measurements__CastY_7 = (MR_Integer) measurements__HeadVar__3_3;

#line 957 "measurements.m"
    measurements__succeeded = (measurements__CastX_6 == measurements__CastY_7);
#line 957 "measurements.m"
    if (measurements__succeeded)
#line 3069 "measurements.c"
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
#line 957 "measurements.m"
    else
#line 957 "measurements.m"
      {
#line 957 "measurements.m"
        MR_Float measurements__V_4_4 = MR_unbox_float((MR_Box) measurements__HeadVar__2_2);
#line 957 "measurements.m"
        MR_Float measurements__V_5_5 = MR_unbox_float((MR_Box) measurements__HeadVar__3_3);

#line 957 "measurements.m"
        {
#line 957 "measurements.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__V_4_4, measurements__V_5_5);
#line 957 "measurements.m"
          return;
        }
#line 957 "measurements.m"
      }
#line 957 "measurements.m"
  }
#line 957 "measurements.m"
}

#line 957 "measurements.m"
MR_bool MR_CALL 
measurements____Unify____parallelism_amount_0_0(
#line 957 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 957 "measurements.m"
  MR_Word measurements__HeadVar__2_2)
#line 957 "measurements.m"
{
#line 957 "measurements.m"
  {
#line 957 "measurements.m"
    MR_bool measurements__succeeded;
#line 957 "measurements.m"
    MR_Integer measurements__CastX_5 = (MR_Integer) measurements__HeadVar__1_1;
#line 957 "measurements.m"
    MR_Integer measurements__CastY_6 = (MR_Integer) measurements__HeadVar__2_2;

#line 957 "measurements.m"
    measurements__succeeded = (measurements__CastX_5 == measurements__CastY_6);
#line 957 "measurements.m"
    if (measurements__succeeded)
#line 957 "measurements.m"
      measurements__succeeded = MR_TRUE;
#line 957 "measurements.m"
    else
#line 957 "measurements.m"
      {
#line 957 "measurements.m"
        MR_Float measurements__V_3_3 = MR_unbox_float((MR_Box) measurements__HeadVar__1_1);
#line 957 "measurements.m"
        MR_Float measurements__V_4_4 = MR_unbox_float((MR_Box) measurements__HeadVar__2_2);

#line 3127 "measurements.c"
        measurements__succeeded = (measurements__V_3_3 == measurements__V_4_4);
#line 957 "measurements.m"
      }
#line 957 "measurements.m"
    return measurements__succeeded;
#line 957 "measurements.m"
  }
#line 957 "measurements.m"
}

#line 1019 "measurements.m"
static void MR_CALL 
measurements____Compare____parallel_exec_metrics_internal_0_0(
#line 1019 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 1019 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 1019 "measurements.m"
  MR_Word measurements__HeadVar__3_3)
#line 1019 "measurements.m"
{
#line 1019 "measurements.m"
  {
#line 1019 "measurements.m"
    MR_bool measurements__succeeded;
#line 1019 "measurements.m"
    MR_Integer measurements__CastX_47 = (MR_Integer) measurements__HeadVar__2_2;
#line 1019 "measurements.m"
    MR_Integer measurements__CastY_48 = (MR_Integer) measurements__HeadVar__3_3;

#line 1019 "measurements.m"
    measurements__succeeded = (measurements__CastX_47 == measurements__CastY_48);
#line 1019 "measurements.m"
    if (measurements__succeeded)
#line 3162 "measurements.c"
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
#line 1019 "measurements.m"
    else
#line 1019 "measurements.m"
    if (((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1019 "measurements.m"
      {
#line 1019 "measurements.m"
        MR_Float measurements__V_58_58 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 5)));
#line 1019 "measurements.m"
        MR_Float measurements__V_59_59 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 4)));
#line 1019 "measurements.m"
        MR_Float measurements__V_60_60 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 3)));
#line 1019 "measurements.m"
        MR_Float measurements__V_61_61 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 1019 "measurements.m"
        MR_Float measurements__V_62_62 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 1019 "measurements.m"
        MR_Word measurements__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));

#line 1019 "measurements.m"
        if (((MR_tag((MR_Word) measurements__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1019 "measurements.m"
          {
#line 1019 "measurements.m"
            MR_Word measurements__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 0)));
#line 1019 "measurements.m"
            MR_Float measurements__V_37_37 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 1)));
#line 1019 "measurements.m"
            MR_Float measurements__V_38_38 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 2)));
#line 1019 "measurements.m"
            MR_Float measurements__V_39_39 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 3)));
#line 1019 "measurements.m"
            MR_Float measurements__V_40_40 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 4)));
#line 1019 "measurements.m"
            MR_Float measurements__V_41_41 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 5)));
#line 1019 "measurements.m"
            MR_Word measurements__V_42_42;

#line 1019 "measurements.m"
            {
#line 1019 "measurements.m"
              measurements____Compare____parallel_exec_metrics_internal_0_0(&measurements__V_42_42, measurements__V_63_63, measurements__V_36_36);
            }
#line 3207 "measurements.c"
            measurements__succeeded = (measurements__V_42_42 == (MR_Integer) 0);
#line 1019 "measurements.m"
            measurements__succeeded = !(measurements__succeeded);
#line 1019 "measurements.m"
            if (measurements__succeeded)
#line 1019 "measurements.m"
              *measurements__HeadVar__1_1 = measurements__V_42_42;
#line 1019 "measurements.m"
            else
#line 1019 "measurements.m"
              {
#line 1019 "measurements.m"
                MR_Word measurements__V_43_43;

#line 1019 "measurements.m"
                {
#line 1019 "measurements.m"
                  mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_43_43, measurements__V_62_62, measurements__V_37_37);
                }
#line 3227 "measurements.c"
                measurements__succeeded = (measurements__V_43_43 == (MR_Integer) 0);
#line 1019 "measurements.m"
                measurements__succeeded = !(measurements__succeeded);
#line 1019 "measurements.m"
                if (measurements__succeeded)
#line 1019 "measurements.m"
                  *measurements__HeadVar__1_1 = measurements__V_43_43;
#line 1019 "measurements.m"
                else
#line 1019 "measurements.m"
                  {
#line 1019 "measurements.m"
                    MR_Word measurements__V_44_44;

#line 1019 "measurements.m"
                    {
#line 1019 "measurements.m"
                      mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_44_44, measurements__V_61_61, measurements__V_38_38);
                    }
#line 3247 "measurements.c"
                    measurements__succeeded = (measurements__V_44_44 == (MR_Integer) 0);
#line 1019 "measurements.m"
                    measurements__succeeded = !(measurements__succeeded);
#line 1019 "measurements.m"
                    if (measurements__succeeded)
#line 1019 "measurements.m"
                      *measurements__HeadVar__1_1 = measurements__V_44_44;
#line 1019 "measurements.m"
                    else
#line 1019 "measurements.m"
                      {
#line 1019 "measurements.m"
                        MR_Word measurements__V_45_45;

#line 1019 "measurements.m"
                        {
#line 1019 "measurements.m"
                          mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_45_45, measurements__V_60_60, measurements__V_39_39);
                        }
#line 3267 "measurements.c"
                        measurements__succeeded = (measurements__V_45_45 == (MR_Integer) 0);
#line 1019 "measurements.m"
                        measurements__succeeded = !(measurements__succeeded);
#line 1019 "measurements.m"
                        if (measurements__succeeded)
#line 1019 "measurements.m"
                          *measurements__HeadVar__1_1 = measurements__V_45_45;
#line 1019 "measurements.m"
                        else
#line 1019 "measurements.m"
                          {
#line 1019 "measurements.m"
                            MR_Word measurements__V_46_46;

#line 1019 "measurements.m"
                            {
#line 1019 "measurements.m"
                              mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_46_46, measurements__V_59_59, measurements__V_40_40);
                            }
#line 3287 "measurements.c"
                            measurements__succeeded = (measurements__V_46_46 == (MR_Integer) 0);
#line 1019 "measurements.m"
                            measurements__succeeded = !(measurements__succeeded);
#line 1019 "measurements.m"
                            if (measurements__succeeded)
#line 1019 "measurements.m"
                              *measurements__HeadVar__1_1 = measurements__V_46_46;
#line 1019 "measurements.m"
                            else
#line 1019 "measurements.m"
                              {
#line 1019 "measurements.m"
                                mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__V_58_58, measurements__V_41_41);
#line 1019 "measurements.m"
                                return;
                              }
#line 1019 "measurements.m"
                          }
#line 1019 "measurements.m"
                      }
#line 1019 "measurements.m"
                  }
#line 1019 "measurements.m"
              }
#line 1019 "measurements.m"
          }
#line 1019 "measurements.m"
        else
#line 3316 "measurements.c"
          *measurements__HeadVar__1_1 = (MR_Integer) 2;
#line 1019 "measurements.m"
      }
#line 1019 "measurements.m"
    else
#line 1019 "measurements.m"
      {
#line 1019 "measurements.m"
        MR_Float measurements__V_64_64 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 1019 "measurements.m"
        MR_Float measurements__V_65_65 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 1019 "measurements.m"
        MR_Float measurements__V_66_66 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));

#line 1019 "measurements.m"
        if (((MR_tag((MR_Word) measurements__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3333 "measurements.c"
          *measurements__HeadVar__1_1 = (MR_Integer) 1;
#line 1019 "measurements.m"
        else
#line 1019 "measurements.m"
          {
#line 1019 "measurements.m"
            MR_Float measurements__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));
#line 1019 "measurements.m"
            MR_Float measurements__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 1)));
#line 1019 "measurements.m"
            MR_Float measurements__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 2)));
#line 1019 "measurements.m"
            MR_Word measurements__V_10_10;

#line 1019 "measurements.m"
            {
#line 1019 "measurements.m"
              mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_10_10, measurements__V_66_66, measurements__V_7_7);
            }
#line 3353 "measurements.c"
            measurements__succeeded = (measurements__V_10_10 == (MR_Integer) 0);
#line 1019 "measurements.m"
            measurements__succeeded = !(measurements__succeeded);
#line 1019 "measurements.m"
            if (measurements__succeeded)
#line 1019 "measurements.m"
              *measurements__HeadVar__1_1 = measurements__V_10_10;
#line 1019 "measurements.m"
            else
#line 1019 "measurements.m"
              {
#line 1019 "measurements.m"
                MR_Word measurements__V_11_11;

#line 1019 "measurements.m"
                {
#line 1019 "measurements.m"
                  mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_11_11, measurements__V_65_65, measurements__V_8_8);
                }
#line 3373 "measurements.c"
                measurements__succeeded = (measurements__V_11_11 == (MR_Integer) 0);
#line 1019 "measurements.m"
                measurements__succeeded = !(measurements__succeeded);
#line 1019 "measurements.m"
                if (measurements__succeeded)
#line 1019 "measurements.m"
                  *measurements__HeadVar__1_1 = measurements__V_11_11;
#line 1019 "measurements.m"
                else
#line 1019 "measurements.m"
                  {
#line 1019 "measurements.m"
                    mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__V_64_64, measurements__V_9_9);
#line 1019 "measurements.m"
                    return;
                  }
#line 1019 "measurements.m"
              }
#line 1019 "measurements.m"
          }
#line 1019 "measurements.m"
      }
#line 1019 "measurements.m"
  }
#line 1019 "measurements.m"
}

#line 1019 "measurements.m"
static MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_internal_0_0(
#line 1019 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 1019 "measurements.m"
  MR_Word measurements__HeadVar__2_2)
#line 1019 "measurements.m"
{
#line 1019 "measurements.m"
  {
#line 1019 "measurements.m"
    MR_bool measurements__succeeded;
#line 1019 "measurements.m"
    MR_Integer measurements__CastX_21 = (MR_Integer) measurements__HeadVar__1_1;
#line 1019 "measurements.m"
    MR_Integer measurements__CastY_22 = (MR_Integer) measurements__HeadVar__2_2;

#line 1019 "measurements.m"
    measurements__succeeded = (measurements__CastX_21 == measurements__CastY_22);
#line 1019 "measurements.m"
    if (measurements__succeeded)
#line 1019 "measurements.m"
      measurements__succeeded = MR_TRUE;
#line 1019 "measurements.m"
    else
#line 1019 "measurements.m"
    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1019 "measurements.m"
      {
#line 1019 "measurements.m"
        MR_Word measurements__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 1019 "measurements.m"
        MR_Float measurements__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 1019 "measurements.m"
        MR_Float measurements__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 1019 "measurements.m"
        MR_Float measurements__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 1019 "measurements.m"
        MR_Float measurements__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 1019 "measurements.m"
        MR_Float measurements__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 1019 "measurements.m"
        MR_Word measurements__V_15_15;
#line 1019 "measurements.m"
        MR_Float measurements__V_16_16;
#line 1019 "measurements.m"
        MR_Float measurements__V_17_17;
#line 1019 "measurements.m"
        MR_Float measurements__V_18_18;
#line 1019 "measurements.m"
        MR_Float measurements__V_19_19;
#line 1019 "measurements.m"
        MR_Float measurements__V_20_20;

#line 1019 "measurements.m"
        measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1019 "measurements.m"
        if (measurements__succeeded)
#line 1019 "measurements.m"
          {
#line 1019 "measurements.m"
            measurements__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 1019 "measurements.m"
            measurements__V_16_16 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 1019 "measurements.m"
            measurements__V_17_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 1019 "measurements.m"
            measurements__V_18_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 3)));
#line 1019 "measurements.m"
            measurements__V_19_19 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 4)));
#line 1019 "measurements.m"
            measurements__V_20_20 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 5)));
#line 3474 "measurements.c"
            {
#line 3476 "measurements.c"
              measurements__succeeded = measurements____Unify____parallel_exec_metrics_internal_0_0(measurements__V_9_9, measurements__V_15_15);
            }
#line 1019 "measurements.m"
            if (measurements__succeeded)
#line 1019 "measurements.m"
              {
#line 3483 "measurements.c"
                measurements__succeeded = (measurements__V_10_10 == measurements__V_16_16);
#line 1019 "measurements.m"
                if (measurements__succeeded)
#line 1019 "measurements.m"
                  {
#line 3489 "measurements.c"
                    measurements__succeeded = (measurements__V_11_11 == measurements__V_17_17);
#line 1019 "measurements.m"
                    if (measurements__succeeded)
#line 1019 "measurements.m"
                      {
#line 3495 "measurements.c"
                        measurements__succeeded = (measurements__V_12_12 == measurements__V_18_18);
#line 1019 "measurements.m"
                        if (measurements__succeeded)
#line 1019 "measurements.m"
                          {
#line 3501 "measurements.c"
                            measurements__succeeded = (measurements__V_13_13 == measurements__V_19_19);
#line 1019 "measurements.m"
                            if (measurements__succeeded)
#line 3505 "measurements.c"
                              measurements__succeeded = (measurements__V_14_14 == measurements__V_20_20);
#line 1019 "measurements.m"
                          }
#line 1019 "measurements.m"
                      }
#line 1019 "measurements.m"
                  }
#line 1019 "measurements.m"
              }
#line 1019 "measurements.m"
          }
#line 1019 "measurements.m"
      }
#line 1019 "measurements.m"
    else
#line 1019 "measurements.m"
      {
#line 1019 "measurements.m"
        MR_Float measurements__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 1019 "measurements.m"
        MR_Float measurements__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 1019 "measurements.m"
        MR_Float measurements__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 1019 "measurements.m"
        MR_Float measurements__V_6_6;
#line 1019 "measurements.m"
        MR_Float measurements__V_7_7;
#line 1019 "measurements.m"
        MR_Float measurements__V_8_8;

#line 1019 "measurements.m"
        measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1019 "measurements.m"
        if (measurements__succeeded)
#line 1019 "measurements.m"
          {
#line 1019 "measurements.m"
            measurements__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 1019 "measurements.m"
            measurements__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 1019 "measurements.m"
            measurements__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 3548 "measurements.c"
            measurements__succeeded = (measurements__V_3_3 == measurements__V_6_6);
#line 1019 "measurements.m"
            if (measurements__succeeded)
#line 1019 "measurements.m"
              {
#line 3554 "measurements.c"
                measurements__succeeded = (measurements__V_4_4 == measurements__V_7_7);
#line 1019 "measurements.m"
                if (measurements__succeeded)
#line 3558 "measurements.c"
                  measurements__succeeded = (measurements__V_5_5 == measurements__V_8_8);
#line 1019 "measurements.m"
              }
#line 1019 "measurements.m"
          }
#line 1019 "measurements.m"
      }
#line 1019 "measurements.m"
    return measurements__succeeded;
#line 1019 "measurements.m"
  }
#line 1019 "measurements.m"
}

#line 998 "measurements.m"
void MR_CALL 
measurements____Compare____parallel_exec_metrics_incomplete_0_0(
#line 998 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 998 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 998 "measurements.m"
  MR_Word measurements__HeadVar__3_3)
#line 998 "measurements.m"
{
#line 998 "measurements.m"
  {
#line 998 "measurements.m"
    MR_bool measurements__succeeded;
#line 998 "measurements.m"
    MR_Integer measurements__CastX_27 = (MR_Integer) measurements__HeadVar__2_2;
#line 998 "measurements.m"
    MR_Integer measurements__CastY_28 = (MR_Integer) measurements__HeadVar__3_3;

#line 998 "measurements.m"
    measurements__succeeded = (measurements__CastX_27 == measurements__CastY_28);
#line 998 "measurements.m"
    if (measurements__succeeded)
#line 3597 "measurements.c"
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
#line 998 "measurements.m"
    else
#line 998 "measurements.m"
      {
#line 998 "measurements.m"
        MR_Float measurements__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 998 "measurements.m"
        MR_Float measurements__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 998 "measurements.m"
        MR_Integer measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 998 "measurements.m"
        MR_Float measurements__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 3)));
#line 998 "measurements.m"
        MR_Float measurements__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 4)));
#line 998 "measurements.m"
        MR_Float measurements__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 5)));
#line 998 "measurements.m"
        MR_Float measurements__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 6)));
#line 998 "measurements.m"
        MR_Word measurements__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 7)));
#line 998 "measurements.m"
        MR_Float measurements__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));
#line 998 "measurements.m"
        MR_Float measurements__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 1)));
#line 998 "measurements.m"
        MR_Integer measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 2)));
#line 998 "measurements.m"
        MR_Float measurements__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 3)));
#line 998 "measurements.m"
        MR_Float measurements__V_16_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 4)));
#line 998 "measurements.m"
        MR_Float measurements__V_17_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 5)));
#line 998 "measurements.m"
        MR_Float measurements__V_18_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 6)));
#line 998 "measurements.m"
        MR_Word measurements__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 7)));
#line 998 "measurements.m"
        MR_Word measurements__V_20_20;

#line 998 "measurements.m"
        {
#line 998 "measurements.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_20_20, measurements__V_4_4, measurements__V_12_12);
        }
#line 3643 "measurements.c"
        measurements__succeeded = (measurements__V_20_20 == (MR_Integer) 0);
#line 998 "measurements.m"
        measurements__succeeded = !(measurements__succeeded);
#line 998 "measurements.m"
        if (measurements__succeeded)
#line 998 "measurements.m"
          *measurements__HeadVar__1_1 = measurements__V_20_20;
#line 998 "measurements.m"
        else
#line 998 "measurements.m"
          {
#line 998 "measurements.m"
            MR_Word measurements__V_21_21;

#line 998 "measurements.m"
            {
#line 998 "measurements.m"
              mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_21_21, measurements__V_5_5, measurements__V_13_13);
            }
#line 3663 "measurements.c"
            measurements__succeeded = (measurements__V_21_21 == (MR_Integer) 0);
#line 998 "measurements.m"
            measurements__succeeded = !(measurements__succeeded);
#line 998 "measurements.m"
            if (measurements__succeeded)
#line 998 "measurements.m"
              *measurements__HeadVar__1_1 = measurements__V_21_21;
#line 998 "measurements.m"
            else
#line 998 "measurements.m"
              {
#line 998 "measurements.m"
                MR_Word measurements__V_22_22;

#line 998 "measurements.m"
                {
#line 998 "measurements.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_22_22, measurements__V_6_6, measurements__V_14_14);
                }
#line 3683 "measurements.c"
                measurements__succeeded = (measurements__V_22_22 == (MR_Integer) 0);
#line 998 "measurements.m"
                measurements__succeeded = !(measurements__succeeded);
#line 998 "measurements.m"
                if (measurements__succeeded)
#line 998 "measurements.m"
                  *measurements__HeadVar__1_1 = measurements__V_22_22;
#line 998 "measurements.m"
                else
#line 998 "measurements.m"
                  {
#line 998 "measurements.m"
                    MR_Word measurements__V_23_23;

#line 998 "measurements.m"
                    {
#line 998 "measurements.m"
                      mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_23_23, measurements__V_7_7, measurements__V_15_15);
                    }
#line 3703 "measurements.c"
                    measurements__succeeded = (measurements__V_23_23 == (MR_Integer) 0);
#line 998 "measurements.m"
                    measurements__succeeded = !(measurements__succeeded);
#line 998 "measurements.m"
                    if (measurements__succeeded)
#line 998 "measurements.m"
                      *measurements__HeadVar__1_1 = measurements__V_23_23;
#line 998 "measurements.m"
                    else
#line 998 "measurements.m"
                      {
#line 998 "measurements.m"
                        MR_Word measurements__V_24_24;

#line 998 "measurements.m"
                        {
#line 998 "measurements.m"
                          mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_24_24, measurements__V_8_8, measurements__V_16_16);
                        }
#line 3723 "measurements.c"
                        measurements__succeeded = (measurements__V_24_24 == (MR_Integer) 0);
#line 998 "measurements.m"
                        measurements__succeeded = !(measurements__succeeded);
#line 998 "measurements.m"
                        if (measurements__succeeded)
#line 998 "measurements.m"
                          *measurements__HeadVar__1_1 = measurements__V_24_24;
#line 998 "measurements.m"
                        else
#line 998 "measurements.m"
                          {
#line 998 "measurements.m"
                            MR_Word measurements__V_25_25;

#line 998 "measurements.m"
                            {
#line 998 "measurements.m"
                              mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_25_25, measurements__V_9_9, measurements__V_17_17);
                            }
#line 3743 "measurements.c"
                            measurements__succeeded = (measurements__V_25_25 == (MR_Integer) 0);
#line 998 "measurements.m"
                            measurements__succeeded = !(measurements__succeeded);
#line 998 "measurements.m"
                            if (measurements__succeeded)
#line 998 "measurements.m"
                              *measurements__HeadVar__1_1 = measurements__V_25_25;
#line 998 "measurements.m"
                            else
#line 998 "measurements.m"
                              {
#line 998 "measurements.m"
                                MR_Word measurements__V_26_26;

#line 998 "measurements.m"
                                {
#line 998 "measurements.m"
                                  mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_26_26, measurements__V_10_10, measurements__V_18_18);
                                }
#line 3763 "measurements.c"
                                measurements__succeeded = (measurements__V_26_26 == (MR_Integer) 0);
#line 998 "measurements.m"
                                measurements__succeeded = !(measurements__succeeded);
#line 998 "measurements.m"
                                if (measurements__succeeded)
#line 998 "measurements.m"
                                  *measurements__HeadVar__1_1 = measurements__V_26_26;
#line 998 "measurements.m"
                                else
#line 998 "measurements.m"
                                  {
#line 998 "measurements.m"
                                    {
#line 998 "measurements.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &measurements_scalar_common_1[1], measurements__HeadVar__1_1, ((MR_Box) (measurements__V_11_11)), ((MR_Box) (measurements__V_19_19)));
#line 998 "measurements.m"
                                      return;
                                    }
#line 998 "measurements.m"
                                  }
#line 998 "measurements.m"
                              }
#line 998 "measurements.m"
                          }
#line 998 "measurements.m"
                      }
#line 998 "measurements.m"
                  }
#line 998 "measurements.m"
              }
#line 998 "measurements.m"
          }
#line 998 "measurements.m"
      }
#line 998 "measurements.m"
  }
#line 998 "measurements.m"
}

#line 998 "measurements.m"
MR_bool MR_CALL 
measurements____Unify____parallel_exec_metrics_incomplete_0_0(
#line 998 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 998 "measurements.m"
  MR_Word measurements__HeadVar__2_2)
#line 998 "measurements.m"
{
#line 998 "measurements.m"
  {
#line 998 "measurements.m"
    MR_bool measurements__succeeded;
#line 998 "measurements.m"
    MR_Integer measurements__CastX_19 = (MR_Integer) measurements__HeadVar__1_1;
#line 998 "measurements.m"
    MR_Integer measurements__CastY_20 = (MR_Integer) measurements__HeadVar__2_2;

#line 998 "measurements.m"
    measurements__succeeded = (measurements__CastX_19 == measurements__CastY_20);
#line 998 "measurements.m"
    if (measurements__succeeded)
#line 998 "measurements.m"
      measurements__succeeded = MR_TRUE;
#line 998 "measurements.m"
    else
#line 998 "measurements.m"
      {
#line 998 "measurements.m"
        MR_Word measurements__TypeInfo_21_21;
#line 998 "measurements.m"
        MR_Float measurements__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 998 "measurements.m"
        MR_Float measurements__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 998 "measurements.m"
        MR_Integer measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 998 "measurements.m"
        MR_Float measurements__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 998 "measurements.m"
        MR_Float measurements__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 998 "measurements.m"
        MR_Float measurements__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 998 "measurements.m"
        MR_Float measurements__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
#line 998 "measurements.m"
        MR_Word measurements__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
#line 998 "measurements.m"
        MR_Float measurements__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 998 "measurements.m"
        MR_Float measurements__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 998 "measurements.m"
        MR_Integer measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 998 "measurements.m"
        MR_Float measurements__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 3)));
#line 998 "measurements.m"
        MR_Float measurements__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 4)));
#line 998 "measurements.m"
        MR_Float measurements__V_16_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 5)));
#line 998 "measurements.m"
        MR_Float measurements__V_17_17 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 6)));
#line 998 "measurements.m"
        MR_Word measurements__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 7)));

#line 3866 "measurements.c"
        measurements__succeeded = (measurements__V_3_3 == measurements__V_11_11);
#line 998 "measurements.m"
        if (measurements__succeeded)
#line 998 "measurements.m"
          {
#line 3872 "measurements.c"
            measurements__succeeded = (measurements__V_4_4 == measurements__V_12_12);
#line 998 "measurements.m"
            if (measurements__succeeded)
#line 998 "measurements.m"
              {
#line 3878 "measurements.c"
                measurements__succeeded = (measurements__V_5_5 == measurements__V_13_13);
#line 998 "measurements.m"
                if (measurements__succeeded)
#line 998 "measurements.m"
                  {
#line 3884 "measurements.c"
                    measurements__succeeded = (measurements__V_6_6 == measurements__V_14_14);
#line 998 "measurements.m"
                    if (measurements__succeeded)
#line 998 "measurements.m"
                      {
#line 3890 "measurements.c"
                        measurements__succeeded = (measurements__V_7_7 == measurements__V_15_15);
#line 998 "measurements.m"
                        if (measurements__succeeded)
#line 998 "measurements.m"
                          {
#line 3896 "measurements.c"
                            measurements__succeeded = (measurements__V_8_8 == measurements__V_16_16);
#line 998 "measurements.m"
                            if (measurements__succeeded)
#line 998 "measurements.m"
                              {
#line 3902 "measurements.c"
                                measurements__succeeded = (measurements__V_9_9 == measurements__V_17_17);
#line 998 "measurements.m"
                                if (measurements__succeeded)
#line 998 "measurements.m"
                                  {
#line 3908 "measurements.c"
                                    measurements__TypeInfo_21_21 = (MR_Word) &measurements_scalar_common_1[1];
#line 3910 "measurements.c"
                                    {
#line 3912 "measurements.c"
                                      return measurements__succeeded = mercury__builtin__unify_2_p_0(measurements__TypeInfo_21_21, ((MR_Box) (measurements__V_10_10)), ((MR_Box) (measurements__V_18_18)));
                                    }
#line 998 "measurements.m"
                                  }
#line 998 "measurements.m"
                              }
#line 998 "measurements.m"
                          }
#line 998 "measurements.m"
                      }
#line 998 "measurements.m"
                  }
#line 998 "measurements.m"
              }
#line 998 "measurements.m"
          }
#line 998 "measurements.m"
      }
#line 998 "measurements.m"
    return measurements__succeeded;
#line 998 "measurements.m"
  }
#line 998 "measurements.m"
}

#line 325 "measurements.m"
void MR_CALL 
measurements____Compare____own_prof_info_0_0(
#line 325 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 325 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 325 "measurements.m"
  MR_Word measurements__HeadVar__3_3)
#line 325 "measurements.m"
{
#line 325 "measurements.m"
  {
#line 325 "measurements.m"
    MR_bool measurements__succeeded;
#line 325 "measurements.m"
    MR_Integer measurements__CastX_180 = (MR_Integer) measurements__HeadVar__2_2;
#line 325 "measurements.m"
    MR_Integer measurements__CastY_181 = (MR_Integer) measurements__HeadVar__3_3;

#line 325 "measurements.m"
    measurements__succeeded = (measurements__CastX_180 == measurements__CastY_181);
#line 325 "measurements.m"
    if (measurements__succeeded)
#line 3962 "measurements.c"
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
#line 325 "measurements.m"
    else
#line 325 "measurements.m"
#line 325 "measurements.m"
      switch (MR_tag((MR_Word) measurements__HeadVar__2_2)) {
#line 325 "measurements.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 325 "measurements.m"
        case (MR_Integer) 0:
#line 325 "measurements.m"
          {
#line 325 "measurements.m"
            MR_Integer measurements__V_202_202 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 7)));
#line 325 "measurements.m"
            MR_Integer measurements__V_203_203 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 6)));
#line 325 "measurements.m"
            MR_Integer measurements__V_204_204 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 5)));
#line 325 "measurements.m"
            MR_Integer measurements__V_205_205 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 4)));
#line 325 "measurements.m"
            MR_Integer measurements__V_206_206 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 3)));
#line 325 "measurements.m"
            MR_Integer measurements__V_207_207 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 325 "measurements.m"
            MR_Integer measurements__V_208_208 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "measurements.m"
            MR_Integer measurements__V_209_209 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));

#line 325 "measurements.m"
#line 325 "measurements.m"
            switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
#line 325 "measurements.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 325 "measurements.m"
              case (MR_Integer) 0:
#line 325 "measurements.m"
                {
#line 325 "measurements.m"
                  MR_Integer measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 1)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 2)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 3)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 4)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 5)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 6)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 7)));
#line 325 "measurements.m"
                  MR_Word measurements__V_20_20;

#line 325 "measurements.m"
                  {
#line 325 "measurements.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_20_20, measurements__V_209_209, measurements__V_12_12);
                  }
#line 4025 "measurements.c"
                  measurements__succeeded = (measurements__V_20_20 == (MR_Integer) 0);
#line 325 "measurements.m"
                  measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                  if (measurements__succeeded)
#line 325 "measurements.m"
                    *measurements__HeadVar__1_1 = measurements__V_20_20;
#line 325 "measurements.m"
                  else
#line 325 "measurements.m"
                    {
#line 325 "measurements.m"
                      MR_Word measurements__V_21_21;

#line 325 "measurements.m"
                      {
#line 325 "measurements.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_21_21, measurements__V_208_208, measurements__V_13_13);
                      }
#line 4045 "measurements.c"
                      measurements__succeeded = (measurements__V_21_21 == (MR_Integer) 0);
#line 325 "measurements.m"
                      measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                      if (measurements__succeeded)
#line 325 "measurements.m"
                        *measurements__HeadVar__1_1 = measurements__V_21_21;
#line 325 "measurements.m"
                      else
#line 325 "measurements.m"
                        {
#line 325 "measurements.m"
                          MR_Word measurements__V_22_22;

#line 325 "measurements.m"
                          {
#line 325 "measurements.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_22_22, measurements__V_207_207, measurements__V_14_14);
                          }
#line 4065 "measurements.c"
                          measurements__succeeded = (measurements__V_22_22 == (MR_Integer) 0);
#line 325 "measurements.m"
                          measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                          if (measurements__succeeded)
#line 325 "measurements.m"
                            *measurements__HeadVar__1_1 = measurements__V_22_22;
#line 325 "measurements.m"
                          else
#line 325 "measurements.m"
                            {
#line 325 "measurements.m"
                              MR_Word measurements__V_23_23;

#line 325 "measurements.m"
                              {
#line 325 "measurements.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_23_23, measurements__V_206_206, measurements__V_15_15);
                              }
#line 4085 "measurements.c"
                              measurements__succeeded = (measurements__V_23_23 == (MR_Integer) 0);
#line 325 "measurements.m"
                              measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                              if (measurements__succeeded)
#line 325 "measurements.m"
                                *measurements__HeadVar__1_1 = measurements__V_23_23;
#line 325 "measurements.m"
                              else
#line 325 "measurements.m"
                                {
#line 325 "measurements.m"
                                  MR_Word measurements__V_24_24;

#line 325 "measurements.m"
                                  {
#line 325 "measurements.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_24_24, measurements__V_205_205, measurements__V_16_16);
                                  }
#line 4105 "measurements.c"
                                  measurements__succeeded = (measurements__V_24_24 == (MR_Integer) 0);
#line 325 "measurements.m"
                                  measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                                  if (measurements__succeeded)
#line 325 "measurements.m"
                                    *measurements__HeadVar__1_1 = measurements__V_24_24;
#line 325 "measurements.m"
                                  else
#line 325 "measurements.m"
                                    {
#line 325 "measurements.m"
                                      MR_Word measurements__V_25_25;

#line 325 "measurements.m"
                                      {
#line 325 "measurements.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_25_25, measurements__V_204_204, measurements__V_17_17);
                                      }
#line 4125 "measurements.c"
                                      measurements__succeeded = (measurements__V_25_25 == (MR_Integer) 0);
#line 325 "measurements.m"
                                      measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                                      if (measurements__succeeded)
#line 325 "measurements.m"
                                        *measurements__HeadVar__1_1 = measurements__V_25_25;
#line 325 "measurements.m"
                                      else
#line 325 "measurements.m"
                                        {
#line 325 "measurements.m"
                                          MR_Word measurements__V_26_26;

#line 325 "measurements.m"
                                          {
#line 325 "measurements.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_26_26, measurements__V_203_203, measurements__V_18_18);
                                          }
#line 4145 "measurements.c"
                                          measurements__succeeded = (measurements__V_26_26 == (MR_Integer) 0);
#line 325 "measurements.m"
                                          measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                                          if (measurements__succeeded)
#line 325 "measurements.m"
                                            *measurements__HeadVar__1_1 = measurements__V_26_26;
#line 325 "measurements.m"
                                          else
#line 325 "measurements.m"
                                            {
#line 325 "measurements.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__V_202_202, measurements__V_19_19);
#line 325 "measurements.m"
                                              return;
                                            }
#line 325 "measurements.m"
                                        }
#line 325 "measurements.m"
                                    }
#line 325 "measurements.m"
                                }
#line 325 "measurements.m"
                            }
#line 325 "measurements.m"
                        }
#line 325 "measurements.m"
                    }
#line 325 "measurements.m"
                }
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
              case (MR_Integer) 1:
#line 4180 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
              case (MR_Integer) 2:
#line 4186 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
              case (MR_Integer) 3:
#line 4192 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
            }
#line 325 "measurements.m"
          }
#line 325 "measurements.m"
          break;
#line 325 "measurements.m"
        case (MR_Integer) 1:
#line 325 "measurements.m"
          {
#line 325 "measurements.m"
            MR_Integer measurements__V_210_210 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 4)));
#line 325 "measurements.m"
            MR_Integer measurements__V_211_211 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 3)));
#line 325 "measurements.m"
            MR_Integer measurements__V_212_212 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 325 "measurements.m"
            MR_Integer measurements__V_213_213 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "measurements.m"
            MR_Integer measurements__V_214_214 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));

#line 325 "measurements.m"
#line 325 "measurements.m"
            switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
#line 325 "measurements.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 325 "measurements.m"
              case (MR_Integer) 0:
#line 4224 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
              case (MR_Integer) 1:
#line 325 "measurements.m"
                {
#line 325 "measurements.m"
                  MR_Integer measurements__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 0)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 1)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 2)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 3)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 4)));
#line 325 "measurements.m"
                  MR_Word measurements__V_86_86;

#line 325 "measurements.m"
                  {
#line 325 "measurements.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_86_86, measurements__V_214_214, measurements__V_81_81);
                  }
#line 4250 "measurements.c"
                  measurements__succeeded = (measurements__V_86_86 == (MR_Integer) 0);
#line 325 "measurements.m"
                  measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                  if (measurements__succeeded)
#line 325 "measurements.m"
                    *measurements__HeadVar__1_1 = measurements__V_86_86;
#line 325 "measurements.m"
                  else
#line 325 "measurements.m"
                    {
#line 325 "measurements.m"
                      MR_Word measurements__V_87_87;

#line 325 "measurements.m"
                      {
#line 325 "measurements.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_87_87, measurements__V_213_213, measurements__V_82_82);
                      }
#line 4270 "measurements.c"
                      measurements__succeeded = (measurements__V_87_87 == (MR_Integer) 0);
#line 325 "measurements.m"
                      measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                      if (measurements__succeeded)
#line 325 "measurements.m"
                        *measurements__HeadVar__1_1 = measurements__V_87_87;
#line 325 "measurements.m"
                      else
#line 325 "measurements.m"
                        {
#line 325 "measurements.m"
                          MR_Word measurements__V_88_88;

#line 325 "measurements.m"
                          {
#line 325 "measurements.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_88_88, measurements__V_212_212, measurements__V_83_83);
                          }
#line 4290 "measurements.c"
                          measurements__succeeded = (measurements__V_88_88 == (MR_Integer) 0);
#line 325 "measurements.m"
                          measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                          if (measurements__succeeded)
#line 325 "measurements.m"
                            *measurements__HeadVar__1_1 = measurements__V_88_88;
#line 325 "measurements.m"
                          else
#line 325 "measurements.m"
                            {
#line 325 "measurements.m"
                              MR_Word measurements__V_89_89;

#line 325 "measurements.m"
                              {
#line 325 "measurements.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_89_89, measurements__V_211_211, measurements__V_84_84);
                              }
#line 4310 "measurements.c"
                              measurements__succeeded = (measurements__V_89_89 == (MR_Integer) 0);
#line 325 "measurements.m"
                              measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                              if (measurements__succeeded)
#line 325 "measurements.m"
                                *measurements__HeadVar__1_1 = measurements__V_89_89;
#line 325 "measurements.m"
                              else
#line 325 "measurements.m"
                                {
#line 325 "measurements.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__V_210_210, measurements__V_85_85);
#line 325 "measurements.m"
                                  return;
                                }
#line 325 "measurements.m"
                            }
#line 325 "measurements.m"
                        }
#line 325 "measurements.m"
                    }
#line 325 "measurements.m"
                }
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
              case (MR_Integer) 2:
#line 4339 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
              case (MR_Integer) 3:
#line 4345 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
            }
#line 325 "measurements.m"
          }
#line 325 "measurements.m"
          break;
#line 325 "measurements.m"
        case (MR_Integer) 2:
#line 325 "measurements.m"
          {
#line 325 "measurements.m"
            MR_Integer measurements__V_215_215 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 3)));
#line 325 "measurements.m"
            MR_Integer measurements__V_216_216 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 325 "measurements.m"
            MR_Integer measurements__V_217_217 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "measurements.m"
            MR_Integer measurements__V_218_218 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 0)));

#line 325 "measurements.m"
#line 325 "measurements.m"
            switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
#line 325 "measurements.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 325 "measurements.m"
              case (MR_Integer) 0:
#line 4375 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
              case (MR_Integer) 1:
#line 4381 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
              case (MR_Integer) 2:
#line 325 "measurements.m"
                {
#line 325 "measurements.m"
                  MR_Integer measurements__V_132_132 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, (MR_Integer) 0)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_133_133 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, (MR_Integer) 1)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_134_134 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, (MR_Integer) 2)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_135_135 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, (MR_Integer) 3)));
#line 325 "measurements.m"
                  MR_Word measurements__V_136_136;

#line 325 "measurements.m"
                  {
#line 325 "measurements.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_136_136, measurements__V_218_218, measurements__V_132_132);
                  }
#line 4405 "measurements.c"
                  measurements__succeeded = (measurements__V_136_136 == (MR_Integer) 0);
#line 325 "measurements.m"
                  measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                  if (measurements__succeeded)
#line 325 "measurements.m"
                    *measurements__HeadVar__1_1 = measurements__V_136_136;
#line 325 "measurements.m"
                  else
#line 325 "measurements.m"
                    {
#line 325 "measurements.m"
                      MR_Word measurements__V_137_137;

#line 325 "measurements.m"
                      {
#line 325 "measurements.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_137_137, measurements__V_217_217, measurements__V_133_133);
                      }
#line 4425 "measurements.c"
                      measurements__succeeded = (measurements__V_137_137 == (MR_Integer) 0);
#line 325 "measurements.m"
                      measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                      if (measurements__succeeded)
#line 325 "measurements.m"
                        *measurements__HeadVar__1_1 = measurements__V_137_137;
#line 325 "measurements.m"
                      else
#line 325 "measurements.m"
                        {
#line 325 "measurements.m"
                          MR_Word measurements__V_138_138;

#line 325 "measurements.m"
                          {
#line 325 "measurements.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_138_138, measurements__V_216_216, measurements__V_134_134);
                          }
#line 4445 "measurements.c"
                          measurements__succeeded = (measurements__V_138_138 == (MR_Integer) 0);
#line 325 "measurements.m"
                          measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                          if (measurements__succeeded)
#line 325 "measurements.m"
                            *measurements__HeadVar__1_1 = measurements__V_138_138;
#line 325 "measurements.m"
                          else
#line 325 "measurements.m"
                            {
#line 325 "measurements.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__V_215_215, measurements__V_135_135);
#line 325 "measurements.m"
                              return;
                            }
#line 325 "measurements.m"
                        }
#line 325 "measurements.m"
                    }
#line 325 "measurements.m"
                }
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
              case (MR_Integer) 3:
#line 4472 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
            }
#line 325 "measurements.m"
          }
#line 325 "measurements.m"
          break;
#line 325 "measurements.m"
        case (MR_Integer) 3:
#line 325 "measurements.m"
          {
#line 325 "measurements.m"
            MR_Integer measurements__V_219_219 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 325 "measurements.m"
            MR_Integer measurements__V_220_220 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "measurements.m"
            MR_Integer measurements__V_221_221 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__2_2, (MR_Integer) 0)));

#line 325 "measurements.m"
#line 325 "measurements.m"
            switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
#line 325 "measurements.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 325 "measurements.m"
              case (MR_Integer) 0:
#line 4500 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
              case (MR_Integer) 1:
#line 4506 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
              case (MR_Integer) 2:
#line 4512 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
              case (MR_Integer) 3:
#line 325 "measurements.m"
                {
#line 325 "measurements.m"
                  MR_Integer measurements__V_175_175 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__3_3, (MR_Integer) 0)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_176_176 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__3_3, (MR_Integer) 1)));
#line 325 "measurements.m"
                  MR_Integer measurements__V_177_177 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__3_3, (MR_Integer) 2)));
#line 325 "measurements.m"
                  MR_Word measurements__V_178_178;

#line 325 "measurements.m"
                  {
#line 325 "measurements.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_178_178, measurements__V_221_221, measurements__V_175_175);
                  }
#line 4534 "measurements.c"
                  measurements__succeeded = (measurements__V_178_178 == (MR_Integer) 0);
#line 325 "measurements.m"
                  measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                  if (measurements__succeeded)
#line 325 "measurements.m"
                    *measurements__HeadVar__1_1 = measurements__V_178_178;
#line 325 "measurements.m"
                  else
#line 325 "measurements.m"
                    {
#line 325 "measurements.m"
                      MR_Word measurements__V_179_179;

#line 325 "measurements.m"
                      {
#line 325 "measurements.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_179_179, measurements__V_220_220, measurements__V_176_176);
                      }
#line 4554 "measurements.c"
                      measurements__succeeded = (measurements__V_179_179 == (MR_Integer) 0);
#line 325 "measurements.m"
                      measurements__succeeded = !(measurements__succeeded);
#line 325 "measurements.m"
                      if (measurements__succeeded)
#line 325 "measurements.m"
                        *measurements__HeadVar__1_1 = measurements__V_179_179;
#line 325 "measurements.m"
                      else
#line 325 "measurements.m"
                        {
#line 325 "measurements.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__V_219_219, measurements__V_177_177);
#line 325 "measurements.m"
                          return;
                        }
#line 325 "measurements.m"
                    }
#line 325 "measurements.m"
                }
#line 325 "measurements.m"
                break;
#line 325 "measurements.m"
            }
#line 325 "measurements.m"
          }
#line 325 "measurements.m"
          break;
#line 325 "measurements.m"
      }
#line 325 "measurements.m"
  }
#line 325 "measurements.m"
}

#line 325 "measurements.m"
MR_bool MR_CALL 
measurements____Unify____own_prof_info_0_0(
#line 325 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 325 "measurements.m"
  MR_Word measurements__HeadVar__2_2)
#line 325 "measurements.m"
{
#line 325 "measurements.m"
  {
#line 325 "measurements.m"
    MR_bool measurements__succeeded;
#line 325 "measurements.m"
    MR_Integer measurements__CastX_43 = (MR_Integer) measurements__HeadVar__1_1;
#line 325 "measurements.m"
    MR_Integer measurements__CastY_44 = (MR_Integer) measurements__HeadVar__2_2;

#line 325 "measurements.m"
    measurements__succeeded = (measurements__CastX_43 == measurements__CastY_44);
#line 325 "measurements.m"
    if (measurements__succeeded)
#line 325 "measurements.m"
      measurements__succeeded = MR_TRUE;
#line 325 "measurements.m"
    else
#line 325 "measurements.m"
#line 325 "measurements.m"
      switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 325 "measurements.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 325 "measurements.m"
        case (MR_Integer) 0:
#line 325 "measurements.m"
          {
#line 325 "measurements.m"
            MR_Integer measurements__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 325 "measurements.m"
            MR_Integer measurements__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 325 "measurements.m"
            MR_Integer measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 325 "measurements.m"
            MR_Integer measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 325 "measurements.m"
            MR_Integer measurements__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 325 "measurements.m"
            MR_Integer measurements__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 325 "measurements.m"
            MR_Integer measurements__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
#line 325 "measurements.m"
            MR_Integer measurements__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
#line 325 "measurements.m"
            MR_Integer measurements__V_11_11;
#line 325 "measurements.m"
            MR_Integer measurements__V_12_12;
#line 325 "measurements.m"
            MR_Integer measurements__V_13_13;
#line 325 "measurements.m"
            MR_Integer measurements__V_14_14;
#line 325 "measurements.m"
            MR_Integer measurements__V_15_15;
#line 325 "measurements.m"
            MR_Integer measurements__V_16_16;
#line 325 "measurements.m"
            MR_Integer measurements__V_17_17;
#line 325 "measurements.m"
            MR_Integer measurements__V_18_18;

#line 325 "measurements.m"
            measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 325 "measurements.m"
            if (measurements__succeeded)
#line 325 "measurements.m"
              {
#line 325 "measurements.m"
                measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 325 "measurements.m"
                measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "measurements.m"
                measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 325 "measurements.m"
                measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 3)));
#line 325 "measurements.m"
                measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 4)));
#line 325 "measurements.m"
                measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 5)));
#line 325 "measurements.m"
                measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 6)));
#line 325 "measurements.m"
                measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 7)));
#line 4680 "measurements.c"
                measurements__succeeded = (measurements__V_3_3 == measurements__V_11_11);
#line 325 "measurements.m"
                if (measurements__succeeded)
#line 325 "measurements.m"
                  {
#line 4686 "measurements.c"
                    measurements__succeeded = (measurements__V_4_4 == measurements__V_12_12);
#line 325 "measurements.m"
                    if (measurements__succeeded)
#line 325 "measurements.m"
                      {
#line 4692 "measurements.c"
                        measurements__succeeded = (measurements__V_5_5 == measurements__V_13_13);
#line 325 "measurements.m"
                        if (measurements__succeeded)
#line 325 "measurements.m"
                          {
#line 4698 "measurements.c"
                            measurements__succeeded = (measurements__V_6_6 == measurements__V_14_14);
#line 325 "measurements.m"
                            if (measurements__succeeded)
#line 325 "measurements.m"
                              {
#line 4704 "measurements.c"
                                measurements__succeeded = (measurements__V_7_7 == measurements__V_15_15);
#line 325 "measurements.m"
                                if (measurements__succeeded)
#line 325 "measurements.m"
                                  {
#line 4710 "measurements.c"
                                    measurements__succeeded = (measurements__V_8_8 == measurements__V_16_16);
#line 325 "measurements.m"
                                    if (measurements__succeeded)
#line 325 "measurements.m"
                                      {
#line 4716 "measurements.c"
                                        measurements__succeeded = (measurements__V_9_9 == measurements__V_17_17);
#line 325 "measurements.m"
                                        if (measurements__succeeded)
#line 4720 "measurements.c"
                                          measurements__succeeded = (measurements__V_10_10 == measurements__V_18_18);
#line 325 "measurements.m"
                                      }
#line 325 "measurements.m"
                                  }
#line 325 "measurements.m"
                              }
#line 325 "measurements.m"
                          }
#line 325 "measurements.m"
                      }
#line 325 "measurements.m"
                  }
#line 325 "measurements.m"
              }
#line 325 "measurements.m"
          }
#line 325 "measurements.m"
          break;
#line 325 "measurements.m"
        case (MR_Integer) 1:
#line 325 "measurements.m"
          {
#line 325 "measurements.m"
            MR_Integer measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 325 "measurements.m"
            MR_Integer measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 325 "measurements.m"
            MR_Integer measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 325 "measurements.m"
            MR_Integer measurements__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 325 "measurements.m"
            MR_Integer measurements__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 325 "measurements.m"
            MR_Integer measurements__V_24_24;
#line 325 "measurements.m"
            MR_Integer measurements__V_25_25;
#line 325 "measurements.m"
            MR_Integer measurements__V_26_26;
#line 325 "measurements.m"
            MR_Integer measurements__V_27_27;
#line 325 "measurements.m"
            MR_Integer measurements__V_28_28;

#line 325 "measurements.m"
            measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 325 "measurements.m"
            if (measurements__succeeded)
#line 325 "measurements.m"
              {
#line 325 "measurements.m"
                measurements__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 325 "measurements.m"
                measurements__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "measurements.m"
                measurements__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 325 "measurements.m"
                measurements__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 3)));
#line 325 "measurements.m"
                measurements__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 4)));
#line 4781 "measurements.c"
                measurements__succeeded = (measurements__V_19_19 == measurements__V_24_24);
#line 325 "measurements.m"
                if (measurements__succeeded)
#line 325 "measurements.m"
                  {
#line 4787 "measurements.c"
                    measurements__succeeded = (measurements__V_20_20 == measurements__V_25_25);
#line 325 "measurements.m"
                    if (measurements__succeeded)
#line 325 "measurements.m"
                      {
#line 4793 "measurements.c"
                        measurements__succeeded = (measurements__V_21_21 == measurements__V_26_26);
#line 325 "measurements.m"
                        if (measurements__succeeded)
#line 325 "measurements.m"
                          {
#line 4799 "measurements.c"
                            measurements__succeeded = (measurements__V_22_22 == measurements__V_27_27);
#line 325 "measurements.m"
                            if (measurements__succeeded)
#line 4803 "measurements.c"
                              measurements__succeeded = (measurements__V_23_23 == measurements__V_28_28);
#line 325 "measurements.m"
                          }
#line 325 "measurements.m"
                      }
#line 325 "measurements.m"
                  }
#line 325 "measurements.m"
              }
#line 325 "measurements.m"
          }
#line 325 "measurements.m"
          break;
#line 325 "measurements.m"
        case (MR_Integer) 2:
#line 325 "measurements.m"
          {
#line 325 "measurements.m"
            MR_Integer measurements__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 325 "measurements.m"
            MR_Integer measurements__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 325 "measurements.m"
            MR_Integer measurements__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 325 "measurements.m"
            MR_Integer measurements__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 325 "measurements.m"
            MR_Integer measurements__V_33_33;
#line 325 "measurements.m"
            MR_Integer measurements__V_34_34;
#line 325 "measurements.m"
            MR_Integer measurements__V_35_35;
#line 325 "measurements.m"
            MR_Integer measurements__V_36_36;

#line 325 "measurements.m"
            measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 325 "measurements.m"
            if (measurements__succeeded)
#line 325 "measurements.m"
              {
#line 325 "measurements.m"
                measurements__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 325 "measurements.m"
                measurements__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "measurements.m"
                measurements__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 325 "measurements.m"
                measurements__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 3)));
#line 4852 "measurements.c"
                measurements__succeeded = (measurements__V_29_29 == measurements__V_33_33);
#line 325 "measurements.m"
                if (measurements__succeeded)
#line 325 "measurements.m"
                  {
#line 4858 "measurements.c"
                    measurements__succeeded = (measurements__V_30_30 == measurements__V_34_34);
#line 325 "measurements.m"
                    if (measurements__succeeded)
#line 325 "measurements.m"
                      {
#line 4864 "measurements.c"
                        measurements__succeeded = (measurements__V_31_31 == measurements__V_35_35);
#line 325 "measurements.m"
                        if (measurements__succeeded)
#line 4868 "measurements.c"
                          measurements__succeeded = (measurements__V_32_32 == measurements__V_36_36);
#line 325 "measurements.m"
                      }
#line 325 "measurements.m"
                  }
#line 325 "measurements.m"
              }
#line 325 "measurements.m"
          }
#line 325 "measurements.m"
          break;
#line 325 "measurements.m"
        case (MR_Integer) 3:
#line 325 "measurements.m"
          {
#line 325 "measurements.m"
            MR_Integer measurements__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 325 "measurements.m"
            MR_Integer measurements__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 325 "measurements.m"
            MR_Integer measurements__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 325 "measurements.m"
            MR_Integer measurements__V_40_40;
#line 325 "measurements.m"
            MR_Integer measurements__V_41_41;
#line 325 "measurements.m"
            MR_Integer measurements__V_42_42;

#line 325 "measurements.m"
            measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 325 "measurements.m"
            if (measurements__succeeded)
#line 325 "measurements.m"
              {
#line 325 "measurements.m"
                measurements__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 325 "measurements.m"
                measurements__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "measurements.m"
                measurements__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 4909 "measurements.c"
                measurements__succeeded = (measurements__V_37_37 == measurements__V_40_40);
#line 325 "measurements.m"
                if (measurements__succeeded)
#line 325 "measurements.m"
                  {
#line 4915 "measurements.c"
                    measurements__succeeded = (measurements__V_38_38 == measurements__V_41_41);
#line 325 "measurements.m"
                    if (measurements__succeeded)
#line 4919 "measurements.c"
                      measurements__succeeded = (measurements__V_39_39 == measurements__V_42_42);
#line 325 "measurements.m"
                  }
#line 325 "measurements.m"
              }
#line 325 "measurements.m"
          }
#line 325 "measurements.m"
          break;
#line 325 "measurements.m"
      }
#line 325 "measurements.m"
    return measurements__succeeded;
#line 325 "measurements.m"
  }
#line 325 "measurements.m"
}

#line 80 "measurements.m"
void MR_CALL 
measurements____Compare____is_active_0_0(
#line 80 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 80 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 80 "measurements.m"
  MR_Word measurements__HeadVar__3_3)
#line 80 "measurements.m"
{
#line 80 "measurements.m"
  {
#line 80 "measurements.m"
    MR_bool measurements__succeeded;
#line 80 "measurements.m"
    MR_Integer measurements__Cast_HeadVar1_4 = (MR_Integer) measurements__HeadVar__2_2;
#line 80 "measurements.m"
    MR_Integer measurements__Cast_HeadVar2_5 = (MR_Integer) measurements__HeadVar__3_3;

#line 80 "measurements.m"
    {
#line 80 "measurements.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__Cast_HeadVar1_4, measurements__Cast_HeadVar2_5);
#line 80 "measurements.m"
      return;
    }
#line 80 "measurements.m"
  }
#line 80 "measurements.m"
}

#line 80 "measurements.m"
MR_bool MR_CALL 
measurements____Unify____is_active_0_0(
#line 80 "measurements.m"
  MR_Word measurements__HeadVar__2_1,
#line 80 "measurements.m"
  MR_Word measurements__HeadVar__2_2)
#line 80 "measurements.m"
{
#line 4979 "measurements.c"
  {
#line 4981 "measurements.c"
    MR_bool measurements__succeeded = (measurements__HeadVar__2_1 == measurements__HeadVar__2_2);

#line 4984 "measurements.c"
    return measurements__succeeded;
#line 4986 "measurements.c"
  }
#line 80 "measurements.m"
}

#line 368 "measurements.m"
void MR_CALL 
measurements____Compare____inherit_prof_info_0_0(
#line 368 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 368 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 368 "measurements.m"
  MR_Word measurements__HeadVar__3_3)
#line 368 "measurements.m"
{
#line 368 "measurements.m"
  {
#line 368 "measurements.m"
    MR_bool measurements__succeeded;
#line 368 "measurements.m"
    MR_Integer measurements__CastX_15 = (MR_Integer) measurements__HeadVar__2_2;
#line 368 "measurements.m"
    MR_Integer measurements__CastY_16 = (MR_Integer) measurements__HeadVar__3_3;

#line 368 "measurements.m"
    measurements__succeeded = (measurements__CastX_15 == measurements__CastY_16);
#line 368 "measurements.m"
    if (measurements__succeeded)
#line 5015 "measurements.c"
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
#line 368 "measurements.m"
    else
#line 368 "measurements.m"
      {
#line 368 "measurements.m"
        MR_Integer measurements__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 368 "measurements.m"
        MR_Integer measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 368 "measurements.m"
        MR_Integer measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 368 "measurements.m"
        MR_Integer measurements__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 3)));
#line 368 "measurements.m"
        MR_Integer measurements__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));
#line 368 "measurements.m"
        MR_Integer measurements__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 1)));
#line 368 "measurements.m"
        MR_Integer measurements__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 2)));
#line 368 "measurements.m"
        MR_Integer measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 3)));
#line 368 "measurements.m"
        MR_Word measurements__V_12_12;

#line 368 "measurements.m"
        {
#line 368 "measurements.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_12_12, measurements__V_4_4, measurements__V_8_8);
        }
#line 5045 "measurements.c"
        measurements__succeeded = (measurements__V_12_12 == (MR_Integer) 0);
#line 368 "measurements.m"
        measurements__succeeded = !(measurements__succeeded);
#line 368 "measurements.m"
        if (measurements__succeeded)
#line 368 "measurements.m"
          *measurements__HeadVar__1_1 = measurements__V_12_12;
#line 368 "measurements.m"
        else
#line 368 "measurements.m"
          {
#line 368 "measurements.m"
            MR_Word measurements__V_13_13;

#line 368 "measurements.m"
            {
#line 368 "measurements.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_13_13, measurements__V_5_5, measurements__V_9_9);
            }
#line 5065 "measurements.c"
            measurements__succeeded = (measurements__V_13_13 == (MR_Integer) 0);
#line 368 "measurements.m"
            measurements__succeeded = !(measurements__succeeded);
#line 368 "measurements.m"
            if (measurements__succeeded)
#line 368 "measurements.m"
              *measurements__HeadVar__1_1 = measurements__V_13_13;
#line 368 "measurements.m"
            else
#line 368 "measurements.m"
              {
#line 368 "measurements.m"
                MR_Word measurements__V_14_14;

#line 368 "measurements.m"
                {
#line 368 "measurements.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&measurements__V_14_14, measurements__V_6_6, measurements__V_10_10);
                }
#line 5085 "measurements.c"
                measurements__succeeded = (measurements__V_14_14 == (MR_Integer) 0);
#line 368 "measurements.m"
                measurements__succeeded = !(measurements__succeeded);
#line 368 "measurements.m"
                if (measurements__succeeded)
#line 368 "measurements.m"
                  *measurements__HeadVar__1_1 = measurements__V_14_14;
#line 368 "measurements.m"
                else
#line 368 "measurements.m"
                  {
#line 368 "measurements.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__V_7_7, measurements__V_11_11);
#line 368 "measurements.m"
                    return;
                  }
#line 368 "measurements.m"
              }
#line 368 "measurements.m"
          }
#line 368 "measurements.m"
      }
#line 368 "measurements.m"
  }
#line 368 "measurements.m"
}

#line 368 "measurements.m"
MR_bool MR_CALL 
measurements____Unify____inherit_prof_info_0_0(
#line 368 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 368 "measurements.m"
  MR_Word measurements__HeadVar__2_2)
#line 368 "measurements.m"
{
#line 368 "measurements.m"
  {
#line 368 "measurements.m"
    MR_bool measurements__succeeded;
#line 368 "measurements.m"
    MR_Integer measurements__CastX_11 = (MR_Integer) measurements__HeadVar__1_1;
#line 368 "measurements.m"
    MR_Integer measurements__CastY_12 = (MR_Integer) measurements__HeadVar__2_2;

#line 368 "measurements.m"
    measurements__succeeded = (measurements__CastX_11 == measurements__CastY_12);
#line 368 "measurements.m"
    if (measurements__succeeded)
#line 368 "measurements.m"
      measurements__succeeded = MR_TRUE;
#line 368 "measurements.m"
    else
#line 368 "measurements.m"
      {
#line 368 "measurements.m"
        MR_Integer measurements__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 368 "measurements.m"
        MR_Integer measurements__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 368 "measurements.m"
        MR_Integer measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 368 "measurements.m"
        MR_Integer measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 368 "measurements.m"
        MR_Integer measurements__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 368 "measurements.m"
        MR_Integer measurements__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 368 "measurements.m"
        MR_Integer measurements__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 2)));
#line 368 "measurements.m"
        MR_Integer measurements__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 3)));

#line 5158 "measurements.c"
        measurements__succeeded = (measurements__V_3_3 == measurements__V_7_7);
#line 368 "measurements.m"
        if (measurements__succeeded)
#line 368 "measurements.m"
          {
#line 5164 "measurements.c"
            measurements__succeeded = (measurements__V_4_4 == measurements__V_8_8);
#line 368 "measurements.m"
            if (measurements__succeeded)
#line 368 "measurements.m"
              {
#line 5170 "measurements.c"
                measurements__succeeded = (measurements__V_5_5 == measurements__V_9_9);
#line 368 "measurements.m"
                if (measurements__succeeded)
#line 5174 "measurements.c"
                  measurements__succeeded = (measurements__V_6_6 == measurements__V_10_10);
#line 368 "measurements.m"
              }
#line 368 "measurements.m"
          }
#line 368 "measurements.m"
      }
#line 368 "measurements.m"
    return measurements__succeeded;
#line 368 "measurements.m"
  }
#line 368 "measurements.m"
}

#line 727 "measurements.m"
void MR_CALL 
measurements____Compare____goal_cost_csq_0_0(
#line 727 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 727 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 727 "measurements.m"
  MR_Word measurements__HeadVar__3_3)
#line 727 "measurements.m"
{
#line 727 "measurements.m"
  {
#line 727 "measurements.m"
    MR_bool measurements__succeeded;
#line 727 "measurements.m"
    MR_Integer measurements__CastX_23 = (MR_Integer) measurements__HeadVar__2_2;
#line 727 "measurements.m"
    MR_Integer measurements__CastY_24 = (MR_Integer) measurements__HeadVar__3_3;

#line 727 "measurements.m"
    measurements__succeeded = (measurements__CastX_23 == measurements__CastY_24);
#line 727 "measurements.m"
    if (measurements__succeeded)
#line 5213 "measurements.c"
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
#line 727 "measurements.m"
    else
#line 727 "measurements.m"
#line 727 "measurements.m"
      switch (MR_tag((MR_Word) measurements__HeadVar__2_2)) {
#line 727 "measurements.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 727 "measurements.m"
        case (MR_Integer) 0:
#line 727 "measurements.m"
#line 727 "measurements.m"
          switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
#line 727 "measurements.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 727 "measurements.m"
            case (MR_Integer) 0:
#line 727 "measurements.m"
              *measurements__HeadVar__1_1 = (MR_Integer) 0;
#line 727 "measurements.m"
              break;
#line 727 "measurements.m"
            case (MR_Integer) 1:
#line 5237 "measurements.c"
              *measurements__HeadVar__1_1 = (MR_Integer) 1;
#line 727 "measurements.m"
              break;
#line 727 "measurements.m"
            case (MR_Integer) 2:
#line 5243 "measurements.c"
              *measurements__HeadVar__1_1 = (MR_Integer) 1;
#line 727 "measurements.m"
              break;
#line 727 "measurements.m"
          }
#line 727 "measurements.m"
          break;
#line 727 "measurements.m"
        case (MR_Integer) 1:
#line 727 "measurements.m"
          {
#line 727 "measurements.m"
            MR_Integer measurements__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));

#line 727 "measurements.m"
#line 727 "measurements.m"
            switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
#line 727 "measurements.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 727 "measurements.m"
              case (MR_Integer) 0:
#line 5265 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
#line 727 "measurements.m"
                break;
#line 727 "measurements.m"
              case (MR_Integer) 1:
#line 727 "measurements.m"
                {
#line 727 "measurements.m"
                  MR_Integer measurements__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 0)));

#line 727 "measurements.m"
                  {
#line 727 "measurements.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__V_30_30, measurements__V_9_9);
#line 727 "measurements.m"
                    return;
                  }
#line 727 "measurements.m"
                }
#line 727 "measurements.m"
                break;
#line 727 "measurements.m"
              case (MR_Integer) 2:
#line 5289 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 1;
#line 727 "measurements.m"
                break;
#line 727 "measurements.m"
            }
#line 727 "measurements.m"
          }
#line 727 "measurements.m"
          break;
#line 727 "measurements.m"
        case (MR_Integer) 2:
#line 727 "measurements.m"
          {
#line 727 "measurements.m"
            MR_Integer measurements__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 727 "measurements.m"
            MR_Word measurements__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 0)));

#line 727 "measurements.m"
#line 727 "measurements.m"
            switch (MR_tag((MR_Word) measurements__HeadVar__3_3)) {
#line 727 "measurements.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 727 "measurements.m"
              case (MR_Integer) 0:
#line 5315 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
#line 727 "measurements.m"
                break;
#line 727 "measurements.m"
              case (MR_Integer) 1:
#line 5321 "measurements.c"
                *measurements__HeadVar__1_1 = (MR_Integer) 2;
#line 727 "measurements.m"
                break;
#line 727 "measurements.m"
              case (MR_Integer) 2:
#line 727 "measurements.m"
                {
#line 727 "measurements.m"
                  MR_Word measurements__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, (MR_Integer) 0)));
#line 727 "measurements.m"
                  MR_Integer measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, (MR_Integer) 1)));
#line 727 "measurements.m"
                  MR_Word measurements__V_22_22;
#line 861 "measurements.m"
                  MR_Integer measurements__CastX_39 = (MR_Integer) measurements__V_29_29;
#line 861 "measurements.m"
                  MR_Integer measurements__CastY_40 = (MR_Integer) measurements__V_20_20;

#line 861 "measurements.m"
                  measurements__succeeded = (measurements__CastX_39 == measurements__CastY_40);
#line 861 "measurements.m"
                  if (measurements__succeeded)
#line 5344 "measurements.c"
                    {
#line 5346 "measurements.c"
                      measurements__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 727 "measurements.m"
                      measurements__succeeded = !(measurements__succeeded);
#line 5350 "measurements.c"
                      if (measurements__succeeded)
#line 5352 "measurements.c"
                        {
#line 5354 "measurements.c"
                          measurements__V_22_22 = (MR_Integer) 0;
#line 5356 "measurements.c"
                          measurements__succeeded = MR_TRUE;
#line 5358 "measurements.c"
                        }
#line 5360 "measurements.c"
                    }
#line 861 "measurements.m"
                  else
#line 861 "measurements.m"
                  if (((MR_tag((MR_Word) measurements__V_29_29)) == (MR_mktag((MR_Integer) 0))))
#line 861 "measurements.m"
                    {
#line 861 "measurements.m"
                      MR_Float measurements__V_43_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__V_29_29, (MR_Integer) 0)));

#line 861 "measurements.m"
                      if (((MR_tag((MR_Word) measurements__V_20_20)) == (MR_mktag((MR_Integer) 0))))
#line 861 "measurements.m"
                        {
#line 861 "measurements.m"
                          MR_Float measurements__V_32_32 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__V_20_20, (MR_Integer) 0)));

#line 861 "measurements.m"
                          {
#line 861 "measurements.m"
                            mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_22_22, measurements__V_43_43, measurements__V_32_32);
                          }
#line 5383 "measurements.c"
                          measurements__succeeded = (measurements__V_22_22 == (MR_Integer) 0);
#line 727 "measurements.m"
                          measurements__succeeded = !(measurements__succeeded);
#line 861 "measurements.m"
                        }
#line 861 "measurements.m"
                      else
#line 5391 "measurements.c"
                        {
#line 5393 "measurements.c"
                          measurements__V_22_22 = (MR_Integer) 1;
#line 5395 "measurements.c"
                          measurements__succeeded = MR_TRUE;
#line 5397 "measurements.c"
                        }
#line 861 "measurements.m"
                    }
#line 861 "measurements.m"
                  else
#line 861 "measurements.m"
                    {
#line 861 "measurements.m"
                      MR_Float measurements__V_44_44 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__V_29_29, (MR_Integer) 0)));

#line 861 "measurements.m"
                      if (((MR_tag((MR_Word) measurements__V_20_20)) == (MR_mktag((MR_Integer) 0))))
#line 5410 "measurements.c"
                        {
#line 5412 "measurements.c"
                          measurements__V_22_22 = (MR_Integer) 2;
#line 5414 "measurements.c"
                          measurements__succeeded = MR_TRUE;
#line 5416 "measurements.c"
                        }
#line 861 "measurements.m"
                      else
#line 861 "measurements.m"
                        {
#line 861 "measurements.m"
                          MR_Float measurements__V_38_38 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__V_20_20, (MR_Integer) 0)));

#line 861 "measurements.m"
                          {
#line 861 "measurements.m"
                            mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_22_22, measurements__V_44_44, measurements__V_38_38);
                          }
#line 5430 "measurements.c"
                          measurements__succeeded = (measurements__V_22_22 == (MR_Integer) 0);
#line 727 "measurements.m"
                          measurements__succeeded = !(measurements__succeeded);
#line 861 "measurements.m"
                        }
#line 861 "measurements.m"
                    }
#line 727 "measurements.m"
                  if (measurements__succeeded)
#line 727 "measurements.m"
                    *measurements__HeadVar__1_1 = measurements__V_22_22;
#line 727 "measurements.m"
                  else
#line 727 "measurements.m"
                    {
#line 727 "measurements.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(measurements__HeadVar__1_1, measurements__V_28_28, measurements__V_21_21);
#line 727 "measurements.m"
                      return;
                    }
#line 727 "measurements.m"
                }
#line 727 "measurements.m"
                break;
#line 727 "measurements.m"
            }
#line 727 "measurements.m"
          }
#line 727 "measurements.m"
          break;
#line 727 "measurements.m"
      }
#line 727 "measurements.m"
  }
#line 727 "measurements.m"
}

#line 727 "measurements.m"
MR_bool MR_CALL 
measurements____Unify____goal_cost_csq_0_0(
#line 727 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 727 "measurements.m"
  MR_Word measurements__HeadVar__2_2)
#line 727 "measurements.m"
{
#line 727 "measurements.m"
  {
#line 727 "measurements.m"
    MR_bool measurements__succeeded;
#line 727 "measurements.m"
    MR_Integer measurements__CastX_11 = (MR_Integer) measurements__HeadVar__1_1;
#line 727 "measurements.m"
    MR_Integer measurements__CastY_12 = (MR_Integer) measurements__HeadVar__2_2;

#line 727 "measurements.m"
    measurements__succeeded = (measurements__CastX_11 == measurements__CastY_12);
#line 727 "measurements.m"
    if (measurements__succeeded)
#line 727 "measurements.m"
      measurements__succeeded = MR_TRUE;
#line 727 "measurements.m"
    else
#line 727 "measurements.m"
#line 727 "measurements.m"
      switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 727 "measurements.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 727 "measurements.m"
        case (MR_Integer) 0:
#line 727 "measurements.m"
          {
#line 727 "measurements.m"
            MR_Integer measurements__CastX_3 = (MR_Integer) measurements__HeadVar__1_1;
#line 727 "measurements.m"
            MR_Integer measurements__CastY_4 = (MR_Integer) measurements__HeadVar__2_2;

#line 727 "measurements.m"
            measurements__succeeded = (measurements__CastY_4 == measurements__CastX_3);
#line 727 "measurements.m"
          }
#line 727 "measurements.m"
          break;
#line 727 "measurements.m"
        case (MR_Integer) 1:
#line 727 "measurements.m"
          {
#line 727 "measurements.m"
            MR_Integer measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 727 "measurements.m"
            MR_Integer measurements__V_6_6;

#line 727 "measurements.m"
            measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 727 "measurements.m"
            if (measurements__succeeded)
#line 727 "measurements.m"
              {
#line 727 "measurements.m"
                measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 5531 "measurements.c"
                measurements__succeeded = (measurements__V_5_5 == measurements__V_6_6);
#line 727 "measurements.m"
              }
#line 727 "measurements.m"
          }
#line 727 "measurements.m"
          break;
#line 727 "measurements.m"
        case (MR_Integer) 2:
#line 727 "measurements.m"
          {
#line 727 "measurements.m"
            MR_Word measurements__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 727 "measurements.m"
            MR_Integer measurements__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 727 "measurements.m"
            MR_Word measurements__V_9_9;
#line 727 "measurements.m"
            MR_Integer measurements__V_10_10;
#line 861 "measurements.m"
            MR_Integer measurements__CastX_17;
#line 861 "measurements.m"
            MR_Integer measurements__CastY_18;

#line 727 "measurements.m"
            measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 727 "measurements.m"
            if (measurements__succeeded)
#line 727 "measurements.m"
              {
#line 727 "measurements.m"
                measurements__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 727 "measurements.m"
                measurements__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 861 "measurements.m"
                measurements__CastX_17 = (MR_Integer) measurements__V_7_7;
#line 861 "measurements.m"
                measurements__CastY_18 = (MR_Integer) measurements__V_9_9;
#line 861 "measurements.m"
                measurements__succeeded = (measurements__CastX_17 == measurements__CastY_18);
#line 861 "measurements.m"
                if (measurements__succeeded)
#line 861 "measurements.m"
                  measurements__succeeded = MR_TRUE;
#line 861 "measurements.m"
                else
#line 861 "measurements.m"
                if (((MR_tag((MR_Word) measurements__V_7_7)) == (MR_mktag((MR_Integer) 0))))
#line 861 "measurements.m"
                  {
#line 861 "measurements.m"
                    MR_Float measurements__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__V_7_7, (MR_Integer) 0)));
#line 861 "measurements.m"
                    MR_Float measurements__V_14_14;

#line 861 "measurements.m"
                    measurements__succeeded = ((MR_tag((MR_Word) measurements__V_9_9)) == (MR_mktag((MR_Integer) 0)));
#line 861 "measurements.m"
                    if (measurements__succeeded)
#line 861 "measurements.m"
                      {
#line 861 "measurements.m"
                        measurements__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__V_9_9, (MR_Integer) 0)));
#line 5595 "measurements.c"
                        measurements__succeeded = (measurements__V_13_13 == measurements__V_14_14);
#line 861 "measurements.m"
                      }
#line 861 "measurements.m"
                  }
#line 861 "measurements.m"
                else
#line 861 "measurements.m"
                  {
#line 861 "measurements.m"
                    MR_Float measurements__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__V_7_7, (MR_Integer) 0)));
#line 861 "measurements.m"
                    MR_Float measurements__V_16_16;

#line 861 "measurements.m"
                    measurements__succeeded = ((MR_tag((MR_Word) measurements__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 861 "measurements.m"
                    if (measurements__succeeded)
#line 861 "measurements.m"
                      {
#line 861 "measurements.m"
                        measurements__V_16_16 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__V_9_9, (MR_Integer) 0)));
#line 5618 "measurements.c"
                        measurements__succeeded = (measurements__V_15_15 == measurements__V_16_16);
#line 861 "measurements.m"
                      }
#line 861 "measurements.m"
                  }
#line 727 "measurements.m"
                if (measurements__succeeded)
#line 5626 "measurements.c"
                  measurements__succeeded = (measurements__V_8_8 == measurements__V_10_10);
#line 727 "measurements.m"
              }
#line 727 "measurements.m"
          }
#line 727 "measurements.m"
          break;
#line 727 "measurements.m"
      }
#line 727 "measurements.m"
    return measurements__succeeded;
#line 727 "measurements.m"
  }
#line 727 "measurements.m"
}

#line 662 "measurements.m"
void MR_CALL 
measurements____Compare____cs_cost_csq_0_0(
#line 662 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 662 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 662 "measurements.m"
  MR_Word measurements__HeadVar__3_3)
#line 662 "measurements.m"
{
#line 662 "measurements.m"
  {
#line 662 "measurements.m"
    MR_bool measurements__succeeded;
#line 662 "measurements.m"
    MR_Integer measurements__CastX_9 = (MR_Integer) measurements__HeadVar__2_2;
#line 662 "measurements.m"
    MR_Integer measurements__CastY_10 = (MR_Integer) measurements__HeadVar__3_3;

#line 662 "measurements.m"
    measurements__succeeded = (measurements__CastX_9 == measurements__CastY_10);
#line 662 "measurements.m"
    if (measurements__succeeded)
#line 5667 "measurements.c"
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
#line 662 "measurements.m"
    else
#line 662 "measurements.m"
      {
#line 662 "measurements.m"
        MR_Float measurements__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 662 "measurements.m"
        MR_Word measurements__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 662 "measurements.m"
        MR_Float measurements__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));
#line 662 "measurements.m"
        MR_Word measurements__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 1)));
#line 662 "measurements.m"
        MR_Word measurements__V_8_8;

#line 662 "measurements.m"
        {
#line 662 "measurements.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(&measurements__V_8_8, measurements__V_4_4, measurements__V_6_6);
        }
#line 5689 "measurements.c"
        measurements__succeeded = (measurements__V_8_8 == (MR_Integer) 0);
#line 662 "measurements.m"
        measurements__succeeded = !(measurements__succeeded);
#line 662 "measurements.m"
        if (measurements__succeeded)
#line 662 "measurements.m"
          *measurements__HeadVar__1_1 = measurements__V_8_8;
#line 662 "measurements.m"
        else
#line 861 "measurements.m"
          {
#line 861 "measurements.m"
            MR_Integer measurements__CastX_21 = (MR_Integer) measurements__V_5_5;
#line 861 "measurements.m"
            MR_Integer measurements__CastY_22 = (MR_Integer) measurements__V_7_7;

#line 861 "measurements.m"
            measurements__succeeded = (measurements__CastX_21 == measurements__CastY_22);
#line 861 "measurements.m"
            if (measurements__succeeded)
#line 5710 "measurements.c"
              *measurements__HeadVar__1_1 = (MR_Integer) 0;
#line 861 "measurements.m"
            else
#line 861 "measurements.m"
            if (((MR_tag((MR_Word) measurements__V_5_5)) == (MR_mktag((MR_Integer) 0))))
#line 861 "measurements.m"
              {
#line 861 "measurements.m"
                MR_Float measurements__V_25_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__V_5_5, (MR_Integer) 0)));

#line 861 "measurements.m"
                if (((MR_tag((MR_Word) measurements__V_7_7)) == (MR_mktag((MR_Integer) 0))))
#line 861 "measurements.m"
                  {
#line 861 "measurements.m"
                    MR_Float measurements__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__V_7_7, (MR_Integer) 0)));

#line 861 "measurements.m"
                    {
#line 861 "measurements.m"
                      mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__V_25_25, measurements__V_14_14);
#line 861 "measurements.m"
                      return;
                    }
#line 861 "measurements.m"
                  }
#line 861 "measurements.m"
                else
#line 5739 "measurements.c"
                  *measurements__HeadVar__1_1 = (MR_Integer) 1;
#line 861 "measurements.m"
              }
#line 861 "measurements.m"
            else
#line 861 "measurements.m"
              {
#line 861 "measurements.m"
                MR_Float measurements__V_26_26 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__V_5_5, (MR_Integer) 0)));

#line 861 "measurements.m"
                if (((MR_tag((MR_Word) measurements__V_7_7)) == (MR_mktag((MR_Integer) 0))))
#line 5752 "measurements.c"
                  *measurements__HeadVar__1_1 = (MR_Integer) 2;
#line 861 "measurements.m"
                else
#line 861 "measurements.m"
                  {
#line 861 "measurements.m"
                    MR_Float measurements__V_20_20 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__V_7_7, (MR_Integer) 0)));

#line 861 "measurements.m"
                    {
#line 861 "measurements.m"
                      mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__V_26_26, measurements__V_20_20);
#line 861 "measurements.m"
                      return;
                    }
#line 861 "measurements.m"
                  }
#line 861 "measurements.m"
              }
#line 861 "measurements.m"
          }
#line 662 "measurements.m"
      }
#line 662 "measurements.m"
  }
#line 662 "measurements.m"
}

#line 662 "measurements.m"
MR_bool MR_CALL 
measurements____Unify____cs_cost_csq_0_0(
#line 662 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 662 "measurements.m"
  MR_Word measurements__HeadVar__2_2)
#line 662 "measurements.m"
{
#line 662 "measurements.m"
  {
#line 662 "measurements.m"
    MR_bool measurements__succeeded;
#line 662 "measurements.m"
    MR_Integer measurements__CastX_7 = (MR_Integer) measurements__HeadVar__1_1;
#line 662 "measurements.m"
    MR_Integer measurements__CastY_8 = (MR_Integer) measurements__HeadVar__2_2;

#line 662 "measurements.m"
    measurements__succeeded = (measurements__CastX_7 == measurements__CastY_8);
#line 662 "measurements.m"
    if (measurements__succeeded)
#line 662 "measurements.m"
      measurements__succeeded = MR_TRUE;
#line 662 "measurements.m"
    else
#line 662 "measurements.m"
      {
#line 662 "measurements.m"
        MR_Float measurements__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 662 "measurements.m"
        MR_Word measurements__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 662 "measurements.m"
        MR_Float measurements__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 662 "measurements.m"
        MR_Word measurements__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 861 "measurements.m"
        MR_Integer measurements__CastX_13;
#line 861 "measurements.m"
        MR_Integer measurements__CastY_14;

#line 5822 "measurements.c"
        measurements__succeeded = (measurements__V_3_3 == measurements__V_5_5);
#line 662 "measurements.m"
        if (measurements__succeeded)
#line 662 "measurements.m"
          {
#line 861 "measurements.m"
            measurements__CastX_13 = (MR_Integer) measurements__V_4_4;
#line 861 "measurements.m"
            measurements__CastY_14 = (MR_Integer) measurements__V_6_6;
#line 861 "measurements.m"
            measurements__succeeded = (measurements__CastX_13 == measurements__CastY_14);
#line 861 "measurements.m"
            if (measurements__succeeded)
#line 861 "measurements.m"
              measurements__succeeded = MR_TRUE;
#line 861 "measurements.m"
            else
#line 861 "measurements.m"
            if (((MR_tag((MR_Word) measurements__V_4_4)) == (MR_mktag((MR_Integer) 0))))
#line 861 "measurements.m"
              {
#line 861 "measurements.m"
                MR_Float measurements__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__V_4_4, (MR_Integer) 0)));
#line 861 "measurements.m"
                MR_Float measurements__V_10_10;

#line 861 "measurements.m"
                measurements__succeeded = ((MR_tag((MR_Word) measurements__V_6_6)) == (MR_mktag((MR_Integer) 0)));
#line 861 "measurements.m"
                if (measurements__succeeded)
#line 861 "measurements.m"
                  {
#line 861 "measurements.m"
                    measurements__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__V_6_6, (MR_Integer) 0)));
#line 5857 "measurements.c"
                    measurements__succeeded = (measurements__V_9_9 == measurements__V_10_10);
#line 861 "measurements.m"
                  }
#line 861 "measurements.m"
              }
#line 861 "measurements.m"
            else
#line 861 "measurements.m"
              {
#line 861 "measurements.m"
                MR_Float measurements__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__V_4_4, (MR_Integer) 0)));
#line 861 "measurements.m"
                MR_Float measurements__V_12_12;

#line 861 "measurements.m"
                measurements__succeeded = ((MR_tag((MR_Word) measurements__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 861 "measurements.m"
                if (measurements__succeeded)
#line 861 "measurements.m"
                  {
#line 861 "measurements.m"
                    measurements__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__V_6_6, (MR_Integer) 0)));
#line 5880 "measurements.c"
                    measurements__succeeded = (measurements__V_11_11 == measurements__V_12_12);
#line 861 "measurements.m"
                  }
#line 861 "measurements.m"
              }
#line 662 "measurements.m"
          }
#line 662 "measurements.m"
      }
#line 662 "measurements.m"
    return measurements__succeeded;
#line 662 "measurements.m"
  }
#line 662 "measurements.m"
}

#line 861 "measurements.m"
static void MR_CALL 
measurements____Compare____cost_0_0(
#line 861 "measurements.m"
  MR_Word * measurements__HeadVar__1_1,
#line 861 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 861 "measurements.m"
  MR_Word measurements__HeadVar__3_3)
#line 861 "measurements.m"
{
#line 861 "measurements.m"
  {
#line 861 "measurements.m"
    MR_bool measurements__succeeded;
#line 861 "measurements.m"
    MR_Integer measurements__CastX_12 = (MR_Integer) measurements__HeadVar__2_2;
#line 861 "measurements.m"
    MR_Integer measurements__CastY_13 = (MR_Integer) measurements__HeadVar__3_3;

#line 861 "measurements.m"
    measurements__succeeded = (measurements__CastX_12 == measurements__CastY_13);
#line 861 "measurements.m"
    if (measurements__succeeded)
#line 5921 "measurements.c"
      *measurements__HeadVar__1_1 = (MR_Integer) 0;
#line 861 "measurements.m"
    else
#line 861 "measurements.m"
    if (((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 861 "measurements.m"
      {
#line 861 "measurements.m"
        MR_Float measurements__V_16_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));

#line 861 "measurements.m"
        if (((MR_tag((MR_Word) measurements__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 861 "measurements.m"
          {
#line 861 "measurements.m"
            MR_Float measurements__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, (MR_Integer) 0)));

#line 861 "measurements.m"
            {
#line 861 "measurements.m"
              mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__V_16_16, measurements__V_5_5);
#line 861 "measurements.m"
              return;
            }
#line 861 "measurements.m"
          }
#line 861 "measurements.m"
        else
#line 5950 "measurements.c"
          *measurements__HeadVar__1_1 = (MR_Integer) 1;
#line 861 "measurements.m"
      }
#line 861 "measurements.m"
    else
#line 861 "measurements.m"
      {
#line 861 "measurements.m"
        MR_Float measurements__V_17_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));

#line 861 "measurements.m"
        if (((MR_tag((MR_Word) measurements__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5963 "measurements.c"
          *measurements__HeadVar__1_1 = (MR_Integer) 2;
#line 861 "measurements.m"
        else
#line 861 "measurements.m"
          {
#line 861 "measurements.m"
            MR_Float measurements__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, (MR_Integer) 0)));

#line 861 "measurements.m"
            {
#line 861 "measurements.m"
              mercury__private_builtin__builtin_compare_float_3_p_0(measurements__HeadVar__1_1, measurements__V_17_17, measurements__V_11_11);
#line 861 "measurements.m"
              return;
            }
#line 861 "measurements.m"
          }
#line 861 "measurements.m"
      }
#line 861 "measurements.m"
  }
#line 861 "measurements.m"
}

#line 861 "measurements.m"
static MR_bool MR_CALL 
measurements____Unify____cost_0_0(
#line 861 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 861 "measurements.m"
  MR_Word measurements__HeadVar__2_2)
#line 861 "measurements.m"
{
#line 861 "measurements.m"
  {
#line 861 "measurements.m"
    MR_bool measurements__succeeded;
#line 861 "measurements.m"
    MR_Integer measurements__CastX_7 = (MR_Integer) measurements__HeadVar__1_1;
#line 861 "measurements.m"
    MR_Integer measurements__CastY_8 = (MR_Integer) measurements__HeadVar__2_2;

#line 861 "measurements.m"
    measurements__succeeded = (measurements__CastX_7 == measurements__CastY_8);
#line 861 "measurements.m"
    if (measurements__succeeded)
#line 861 "measurements.m"
      measurements__succeeded = MR_TRUE;
#line 861 "measurements.m"
    else
#line 861 "measurements.m"
    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 861 "measurements.m"
      {
#line 861 "measurements.m"
        MR_Float measurements__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 861 "measurements.m"
        MR_Float measurements__V_4_4;

#line 861 "measurements.m"
        measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 861 "measurements.m"
        if (measurements__succeeded)
#line 861 "measurements.m"
          {
#line 861 "measurements.m"
            measurements__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 6031 "measurements.c"
            measurements__succeeded = (measurements__V_3_3 == measurements__V_4_4);
#line 861 "measurements.m"
          }
#line 861 "measurements.m"
      }
#line 861 "measurements.m"
    else
#line 861 "measurements.m"
      {
#line 861 "measurements.m"
        MR_Float measurements__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 861 "measurements.m"
        MR_Float measurements__V_6_6;

#line 861 "measurements.m"
        measurements__succeeded = ((MR_tag((MR_Word) measurements__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 861 "measurements.m"
        if (measurements__succeeded)
#line 861 "measurements.m"
          {
#line 861 "measurements.m"
            measurements__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 6054 "measurements.c"
            measurements__succeeded = (measurements__V_5_5 == measurements__V_6_6);
#line 861 "measurements.m"
          }
#line 861 "measurements.m"
      }
#line 861 "measurements.m"
    return measurements__succeeded;
#line 861 "measurements.m"
  }
#line 861 "measurements.m"
}

#line 1226 "measurements.m"
static void MR_CALL 
measurements__update_weighted_sum_6_p_0(
#line 1226 "measurements.m"
  MR_Float measurements__Weight_7,
#line 1226 "measurements.m"
  MR_Float measurements__Value_8,
#line 1226 "measurements.m"
  MR_Float measurements__STATE_VARIABLE_WeightedSum_0_11,
#line 1226 "measurements.m"
  MR_Float * measurements__STATE_VARIABLE_WeightedSum_12,
#line 1226 "measurements.m"
  MR_Float measurements__STATE_VARIABLE_TotalWeight_0_13,
#line 1226 "measurements.m"
  MR_Float * measurements__STATE_VARIABLE_TotalWeight_14)
#line 1226 "measurements.m"
{
#line 1229 "measurements.m"
  {
#line 1229 "measurements.m"
    MR_bool measurements__succeeded;
#line 1229 "measurements.m"
    MR_Float measurements__V_16_16 = (measurements__Weight_7 * measurements__Value_8);

#line 1230 "measurements.m"
    *measurements__STATE_VARIABLE_WeightedSum_12 = (measurements__STATE_VARIABLE_WeightedSum_0_11 + measurements__V_16_16);
#line 1231 "measurements.m"
    *measurements__STATE_VARIABLE_TotalWeight_14 = (measurements__STATE_VARIABLE_TotalWeight_0_13 + measurements__Weight_7);
#line 1229 "measurements.m"
  }
#line 1226 "measurements.m"
}

#line 1208 "measurements.m"
static MR_Float MR_CALL 
measurements__pem_get_wait_costs_1_f_0(
#line 1208 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 1208 "measurements.m"
{
#line 1210 "measurements.m"
  {
#line 1210 "measurements.m"
    MR_bool measurements__succeeded;
#line 1210 "measurements.m"
    MR_Float measurements__HeadVar__2_2;

#line 1210 "measurements.m"
    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1211 "measurements.m"
      {
#line 1211 "measurements.m"
        MR_Word measurements__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 1211 "measurements.m"
        MR_Float measurements__WaitsR_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 1211 "measurements.m"
        MR_Float measurements__WaitsL_13;
#line 1211 "measurements.m"
        MR_Float measurements__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 1211 "measurements.m"
        MR_Float measurements__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 1211 "measurements.m"
        MR_Float measurements__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 1211 "measurements.m"
        MR_Float measurements__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));

#line 1213 "measurements.m"
        {
#line 1213 "measurements.m"
          measurements__WaitsL_13 = measurements__pem_get_wait_costs_1_f_0(measurements__Left_6);
        }
#line 1212 "measurements.m"
        measurements__HeadVar__2_2 = (measurements__WaitsR_8 + measurements__WaitsL_13);
#line 1211 "measurements.m"
      }
#line 1210 "measurements.m"
    else
#line 1210 "measurements.m"
      measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
#line 1210 "measurements.m"
    return measurements__HeadVar__2_2;
#line 1210 "measurements.m"
  }
#line 1208 "measurements.m"
}

#line 1201 "measurements.m"
static MR_Float MR_CALL 
measurements__pem_get_signal_costs_1_f_0(
#line 1201 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 1201 "measurements.m"
{
#line 1203 "measurements.m"
  {
#line 1203 "measurements.m"
    MR_bool measurements__succeeded;
#line 1203 "measurements.m"
    MR_Float measurements__HeadVar__2_2;

#line 1203 "measurements.m"
    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1204 "measurements.m"
      {
#line 1204 "measurements.m"
        MR_Word measurements__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 1204 "measurements.m"
        MR_Float measurements__SignalsR_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 1204 "measurements.m"
        MR_Float measurements__SignalsL_13;
#line 1204 "measurements.m"
        MR_Float measurements__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 1204 "measurements.m"
        MR_Float measurements__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 1204 "measurements.m"
        MR_Float measurements__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 1204 "measurements.m"
        MR_Float measurements__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));

#line 1206 "measurements.m"
        {
#line 1206 "measurements.m"
          measurements__SignalsL_13 = measurements__pem_get_signal_costs_1_f_0(measurements__Left_6);
        }
#line 1205 "measurements.m"
        measurements__HeadVar__2_2 = (measurements__SignalsR_7 + measurements__SignalsL_13);
#line 1204 "measurements.m"
      }
#line 1203 "measurements.m"
    else
#line 1203 "measurements.m"
      {
#line 1203 "measurements.m"
        MR_Float measurements__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 1203 "measurements.m"
        MR_Float measurements__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));

#line 1203 "measurements.m"
        measurements__HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 1203 "measurements.m"
      }
#line 1203 "measurements.m"
    return measurements__HeadVar__2_2;
#line 1203 "measurements.m"
  }
#line 1201 "measurements.m"
}

#line 1181 "measurements.m"
static MR_Float MR_CALL 
measurements__pem_get_future_dead_time_1_f_0(
#line 1181 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 1181 "measurements.m"
{
#line 1183 "measurements.m"
  {
#line 1183 "measurements.m"
    MR_bool measurements__succeeded;
#line 1183 "measurements.m"
    MR_Float measurements__HeadVar__2_2;

#line 1183 "measurements.m"
    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1185 "measurements.m"
      {
#line 1185 "measurements.m"
        MR_Word measurements__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 1185 "measurements.m"
        MR_Float measurements__RightDeadTime_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 1185 "measurements.m"
        MR_Float measurements__LeftDeadTime_12;
#line 1184 "measurements.m"
        MR_Float measurements__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 1184 "measurements.m"
        MR_Float measurements__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 1184 "measurements.m"
        MR_Float measurements__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 1184 "measurements.m"
        MR_Float measurements__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));

#line 1186 "measurements.m"
        {
#line 1186 "measurements.m"
          measurements__LeftDeadTime_12 = measurements__pem_get_future_dead_time_1_f_0(measurements__Left_6);
        }
#line 1185 "measurements.m"
        measurements__HeadVar__2_2 = (measurements__RightDeadTime_11 + measurements__LeftDeadTime_12);
#line 1185 "measurements.m"
      }
#line 1183 "measurements.m"
    else
#line 1183 "measurements.m"
      measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
#line 1183 "measurements.m"
    return measurements__HeadVar__2_2;
#line 1183 "measurements.m"
  }
#line 1181 "measurements.m"
}

#line 1174 "measurements.m"
static MR_Float MR_CALL 
measurements__pem_get_first_conj_par_time_1_f_0(
#line 1174 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 1174 "measurements.m"
{
#line 1176 "measurements.m"
  while (MR_TRUE)
#line 1176 "measurements.m"
    {
#line 1176 "measurements.m"
      /* tailcall optimized into a loop */
#line 1176 "measurements.m"
      {
#line 1176 "measurements.m"
        MR_bool measurements__succeeded;
#line 1176 "measurements.m"
        MR_Float measurements__Time_2;

#line 1176 "measurements.m"
        if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1178 "measurements.m"
          {
#line 1178 "measurements.m"
            MR_Word measurements__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 1177 "measurements.m"
            MR_Float measurements__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 1177 "measurements.m"
            MR_Float measurements__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 1177 "measurements.m"
            MR_Float measurements__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 1177 "measurements.m"
            MR_Float measurements__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 1177 "measurements.m"
            MR_Float measurements__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));

#line 1179 "measurements.m"
            /* direct tailcall eliminated */
#line 1179 "measurements.m"
            {
#line 1179 "measurements.m"
              MR_Word measurements__HeadVar__1__tmp_copy_1 = measurements__Left_6;

#line 1179 "measurements.m"
              measurements__HeadVar__1_1 = measurements__HeadVar__1__tmp_copy_1;
#line 1179 "measurements.m"
            }
#line 1179 "measurements.m"
            continue;
#line 1178 "measurements.m"
          }
#line 1176 "measurements.m"
        else
#line 1176 "measurements.m"
          {
#line 1176 "measurements.m"
            MR_Float measurements__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 1176 "measurements.m"
            MR_Float measurements__V_5_5;

#line 1176 "measurements.m"
            measurements__Time_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 1176 "measurements.m"
            measurements__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 1176 "measurements.m"
          }
#line 1176 "measurements.m"
        return measurements__Time_2;
#line 1176 "measurements.m"
      }
#line 1176 "measurements.m"
      break;
#line 1176 "measurements.m"
    }
#line 1174 "measurements.m"
}

#line 1162 "measurements.m"
static MR_Float MR_CALL 
measurements__parallel_exec_metrics_internal_get_seq_time_1_f_0(
#line 1162 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 1162 "measurements.m"
{
#line 1165 "measurements.m"
  {
#line 1165 "measurements.m"
    MR_bool measurements__succeeded;
#line 1165 "measurements.m"
    MR_Float measurements__Time_2;

#line 1165 "measurements.m"
    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1167 "measurements.m"
      {
#line 1167 "measurements.m"
        MR_Word measurements__MetricsLeft_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 1167 "measurements.m"
        MR_Float measurements__TimeRight_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 1167 "measurements.m"
        MR_Float measurements__TimeLeft_13;
#line 1166 "measurements.m"
        MR_Float measurements__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 1166 "measurements.m"
        MR_Float measurements__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 1166 "measurements.m"
        MR_Float measurements__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 1166 "measurements.m"
        MR_Float measurements__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));

#line 1168 "measurements.m"
        {
#line 1168 "measurements.m"
          measurements__TimeLeft_13 = measurements__parallel_exec_metrics_internal_get_seq_time_1_f_0(measurements__MetricsLeft_6);
        }
#line 1169 "measurements.m"
        measurements__Time_2 = (measurements__TimeLeft_13 + measurements__TimeRight_9);
#line 1167 "measurements.m"
      }
#line 1165 "measurements.m"
    else
#line 1165 "measurements.m"
      {
#line 1165 "measurements.m"
        MR_Float measurements__V_4_4;
#line 1165 "measurements.m"
        MR_Float measurements__V_5_5;

#line 1165 "measurements.m"
        measurements__Time_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 1165 "measurements.m"
        measurements__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 1165 "measurements.m"
        measurements__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 1165 "measurements.m"
      }
#line 1165 "measurements.m"
    return measurements__Time_2;
#line 1165 "measurements.m"
  }
#line 1162 "measurements.m"
}

#line 1143 "measurements.m"
static MR_Float MR_CALL 
measurements__parallel_exec_metrics_internal_get_par_time_3_f_0(
#line 1143 "measurements.m"
  MR_Word measurements__PEM_5,
#line 1143 "measurements.m"
  MR_Float measurements__SparkDelay_6,
#line 1143 "measurements.m"
  MR_Integer measurements__Depth_7)
#line 1143 "measurements.m"
{
#line 1148 "measurements.m"
  {
#line 1148 "measurements.m"
    MR_bool measurements__succeeded;
#line 1148 "measurements.m"
    MR_Float measurements__Time_8;

#line 1148 "measurements.m"
    if (((MR_tag((MR_Word) measurements__PEM_5)) == (MR_mktag((MR_Integer) 1))))
#line 1152 "measurements.m"
      {
#line 1152 "measurements.m"
        MR_Word measurements__MetricsLeft_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__PEM_5, (MR_Integer) 0)));
#line 1152 "measurements.m"
        MR_Float measurements__TimeRightPar_16 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__PEM_5, (MR_Integer) 4)));
#line 1152 "measurements.m"
        MR_Float measurements__TimeRightDead_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__PEM_5, (MR_Integer) 5)));
#line 1152 "measurements.m"
        MR_Float measurements__TimeRight_18;
#line 1152 "measurements.m"
        MR_Float measurements__TimeLeft_19;
#line 1152 "measurements.m"
        MR_Float measurements__V_20_20 = (measurements__TimeRightPar_16 + measurements__TimeRightDead_17);
#line 1152 "measurements.m"
        MR_Float measurements__V_21_21;
#line 1152 "measurements.m"
        MR_Float measurements__V_22_22;
#line 1152 "measurements.m"
        MR_Integer measurements__V_23_23 = (measurements__Depth_7 - (MR_Integer) 1);
#line 1152 "measurements.m"
        MR_Integer measurements__V_25_25;
#line 1151 "measurements.m"
        MR_Float measurements__V_13_13 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__PEM_5, (MR_Integer) 1)));
#line 1151 "measurements.m"
        MR_Float measurements__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__PEM_5, (MR_Integer) 2)));
#line 1151 "measurements.m"
        MR_Float measurements__V_15_15 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__PEM_5, (MR_Integer) 3)));

#line 1154 "measurements.m"
        {
#line 1154 "measurements.m"
          measurements__V_22_22 = mercury__float__float_1_f_0(measurements__V_23_23);
        }
#line 1154 "measurements.m"
        measurements__V_21_21 = (measurements__SparkDelay_6 * measurements__V_22_22);
#line 1153 "measurements.m"
        measurements__TimeRight_18 = (measurements__V_20_20 + measurements__V_21_21);
#line 1156 "measurements.m"
        measurements__V_25_25 = (measurements__Depth_7 - (MR_Integer) 1);
#line 1155 "measurements.m"
        {
#line 1155 "measurements.m"
          measurements__TimeLeft_19 = measurements__parallel_exec_metrics_internal_get_par_time_3_f_0(measurements__MetricsLeft_12, measurements__SparkDelay_6, measurements__V_25_25);
        }
#line 1157 "measurements.m"
        {
#line 1157 "measurements.m"
          return measurements__Time_8 = mercury__float__max_2_f_0(measurements__TimeLeft_19, measurements__TimeRight_18);
        }
#line 1152 "measurements.m"
      }
#line 1148 "measurements.m"
    else
#line 1148 "measurements.m"
      {
#line 1148 "measurements.m"
        MR_Float measurements__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__PEM_5, (MR_Integer) 0)));
#line 1148 "measurements.m"
        MR_Float measurements__V_11_11;

#line 1148 "measurements.m"
        measurements__Time_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__PEM_5, (MR_Integer) 1)));
#line 1148 "measurements.m"
        measurements__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__PEM_5, (MR_Integer) 2)));
#line 1148 "measurements.m"
      }
#line 1148 "measurements.m"
    return measurements__Time_8;
#line 1148 "measurements.m"
  }
#line 1143 "measurements.m"
}

#line 1132 "measurements.m"
static MR_Integer MR_CALL 
measurements__parallel_exec_metrics_internal_get_num_conjs_1_f_0(
#line 1132 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 1132 "measurements.m"
{
#line 1135 "measurements.m"
  {
#line 1135 "measurements.m"
    MR_bool measurements__succeeded;
#line 1135 "measurements.m"
    MR_Integer measurements__HeadVar__2_2;

#line 1135 "measurements.m"
    if (((MR_tag((MR_Word) measurements__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1137 "measurements.m"
      {
#line 1137 "measurements.m"
        MR_Word measurements__Left_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 1137 "measurements.m"
        MR_Integer measurements__V_13_13;
#line 1137 "measurements.m"
        MR_Float measurements__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 1137 "measurements.m"
        MR_Float measurements__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 1137 "measurements.m"
        MR_Float measurements__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 1137 "measurements.m"
        MR_Float measurements__V_10_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 1137 "measurements.m"
        MR_Float measurements__V_11_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 5)));

#line 1138 "measurements.m"
        {
#line 1138 "measurements.m"
          measurements__V_13_13 = measurements__parallel_exec_metrics_internal_get_num_conjs_1_f_0(measurements__Left_6);
        }
#line 1138 "measurements.m"
        measurements__HeadVar__2_2 = ((MR_Integer) 1 + measurements__V_13_13);
#line 1137 "measurements.m"
      }
#line 1135 "measurements.m"
    else
#line 1135 "measurements.m"
      measurements__HeadVar__2_2 = (MR_Integer) 1;
#line 1135 "measurements.m"
    return measurements__HeadVar__2_2;
#line 1135 "measurements.m"
  }
#line 1132 "measurements.m"
}

#line 1218 "measurements.m"
static void MR_CALL 
measurements__weighted_average_3_p_0_1(
#line 1218 "measurements.m"
  MR_Box measurements__closure_arg,
#line 1218 "measurements.m"
  MR_Box measurements__wrapper_arg_1,
#line 1218 "measurements.m"
  MR_Box measurements__wrapper_arg_2,
#line 1218 "measurements.m"
  MR_Box measurements__wrapper_arg_3,
#line 1218 "measurements.m"
  MR_Box * measurements__wrapper_arg_4,
#line 1218 "measurements.m"
  MR_Box measurements__wrapper_arg_5,
#line 1218 "measurements.m"
  MR_Box * measurements__wrapper_arg_6)
#line 1218 "measurements.m"
{
#line 1218 "measurements.m"
  {
#line 1218 "measurements.m"
    MR_Box measurements__closure = measurements__closure_arg;
#line 1218 "measurements.m"
    MR_Float measurements__conv1_STATE_VARIABLE_WeightedSum_12;
#line 1218 "measurements.m"
    MR_Float measurements__conv0_STATE_VARIABLE_TotalWeight_14;

#line 1218 "measurements.m"
    {
#line 1218 "measurements.m"
      measurements__update_weighted_sum_6_p_0(MR_unbox_float(measurements__wrapper_arg_1), MR_unbox_float(measurements__wrapper_arg_2), MR_unbox_float(measurements__wrapper_arg_3), &measurements__conv1_STATE_VARIABLE_WeightedSum_12, MR_unbox_float(measurements__wrapper_arg_5), &measurements__conv0_STATE_VARIABLE_TotalWeight_14);
    }
#line 1218 "measurements.m"
    *measurements__wrapper_arg_4 = MR_box_float(measurements__conv1_STATE_VARIABLE_WeightedSum_12);
#line 1218 "measurements.m"
    *measurements__wrapper_arg_6 = MR_box_float(measurements__conv0_STATE_VARIABLE_TotalWeight_14);
#line 1218 "measurements.m"
  }
#line 1218 "measurements.m"
}

#line 309 "measurements.m"
void MR_CALL 
measurements__weighted_average_3_p_0(
#line 309 "measurements.m"
  MR_Word measurements__Weights_4,
#line 309 "measurements.m"
  MR_Word measurements__Values_5,
#line 309 "measurements.m"
  MR_Float * measurements__Average_6)
#line 309 "measurements.m"
{
#line 1217 "measurements.m"
  {
#line 1217 "measurements.m"
    MR_bool measurements__succeeded;
#line 1217 "measurements.m"
    MR_Word measurements__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0;
#line 1217 "measurements.m"
    MR_Float measurements__WeightedSum_7;
#line 1217 "measurements.m"
    MR_Float measurements__TotalWeight_8;
#line 1218 "measurements.m"
    MR_Box measurements__conv3_WeightedSum_7;
#line 1218 "measurements.m"
    MR_Box measurements__conv2_TotalWeight_8;
#line 1220 "measurements.m"
    MR_Float measurements__V_12_12;
#line 1220 "measurements.m"
    MR_Float measurements__V_13_13;

#line 1218 "measurements.m"
    {
#line 1218 "measurements.m"
      mercury__list__foldl2_corresponding_7_p_0(measurements__TypeCtorInfo_20_20, measurements__TypeCtorInfo_20_20, measurements__TypeCtorInfo_20_20, measurements__TypeCtorInfo_20_20, (MR_Word) &measurements_scalar_common_3[4], measurements__Weights_4, measurements__Values_5, MR_box_float((MR_Float) 0.0000000000000000), &measurements__conv3_WeightedSum_7, MR_box_float((MR_Float) 0.0000000000000000), &measurements__conv2_TotalWeight_8);
    }
#line 1218 "measurements.m"
    measurements__WeightedSum_7 = MR_unbox_float(measurements__conv3_WeightedSum_7);
#line 1218 "measurements.m"
    measurements__TotalWeight_8 = MR_unbox_float(measurements__conv2_TotalWeight_8);
#line 1220 "measurements.m"
    {
#line 1220 "measurements.m"
      measurements__V_12_12 = mercury__float__abs_1_f_0(measurements__TotalWeight_8);
    }
#line 1220 "measurements.m"
    {
#line 1220 "measurements.m"
      measurements__V_13_13 = mercury__float__epsilon_0_f_0();
    }
#line 1220 "measurements.m"
    measurements__succeeded = (measurements__V_12_12 < measurements__V_13_13);
#line 1222 "measurements.m"
    if (measurements__succeeded)
#line 1221 "measurements.m"
      *measurements__Average_6 = (MR_Float) 0.0000000000000000;
#line 1222 "measurements.m"
    else
#line 1223 "measurements.m"
      {
#line 1223 "measurements.m"
        *measurements__Average_6 = mercury__float__f_slash_2_f_0(measurements__WeightedSum_7, measurements__TotalWeight_8);
      }
#line 1217 "measurements.m"
  }
#line 309 "measurements.m"
}

#line 304 "measurements.m"
MR_Integer MR_CALL 
measurements__parallel_exec_metrics_get_num_calls_1_f_0(
#line 304 "measurements.m"
  MR_Word measurements__Pem_3)
#line 304 "measurements.m"
{
#line 1129 "measurements.m"
  {
#line 1129 "measurements.m"
    MR_bool measurements__succeeded;
#line 1129 "measurements.m"
    MR_Integer measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 2)));
#line 1129 "measurements.m"
    MR_Float measurements__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 0)));
#line 1129 "measurements.m"
    MR_Float measurements__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 1)));
#line 1129 "measurements.m"
    MR_Float measurements__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 3)));
#line 1129 "measurements.m"
    MR_Float measurements__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 4)));
#line 1129 "measurements.m"
    MR_Float measurements__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 5)));
#line 1129 "measurements.m"
    MR_Float measurements__V_9_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 6)));
#line 1129 "measurements.m"
    MR_Word measurements__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__Pem_3, (MR_Integer) 7)));

#line 1129 "measurements.m"
    return measurements__HeadVar__2_2;
#line 1129 "measurements.m"
  }
#line 304 "measurements.m"
}

#line 297 "measurements.m"
MR_Word MR_CALL 
measurements__finalise_parallel_exec_metrics_1_f_0(
#line 297 "measurements.m"
  MR_Word measurements__IncompleteMetrics_3)
#line 297 "measurements.m"
{
#line 1082 "measurements.m"
  {
#line 1082 "measurements.m"
    MR_bool measurements__succeeded;
#line 1082 "measurements.m"
    MR_Word measurements__Metrics_4;
#line 1082 "measurements.m"
    MR_Float measurements__TimeBefore_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 0)));
#line 1082 "measurements.m"
    MR_Float measurements__TimeAfter_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 1)));
#line 1082 "measurements.m"
    MR_Integer measurements__NumCalls_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 2)));
#line 1082 "measurements.m"
    MR_Float measurements__SparkCost_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 3)));
#line 1082 "measurements.m"
    MR_Float measurements__SparkDelay_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 4)));
#line 1082 "measurements.m"
    MR_Float measurements__BarrierCost_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 5)));
#line 1082 "measurements.m"
    MR_Float measurements__ContextWakeupDelay_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 6)));
#line 1082 "measurements.m"
    MR_Word measurements__MaybeInternal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__IncompleteMetrics_3, (MR_Integer) 7)));
#line 1082 "measurements.m"
    MR_Word measurements__Internal_13;
#line 1082 "measurements.m"
    MR_Float measurements__BeforeAndAfterTime_14;
#line 1082 "measurements.m"
    MR_Integer measurements__NumConjuncts_15;
#line 1082 "measurements.m"
    MR_Float measurements__InnerParTime_16;
#line 1082 "measurements.m"
    MR_Float measurements__FirstConjDeadTime_17;
#line 1082 "measurements.m"
    MR_Float measurements__FirstConjWakeupPenalty_18;
#line 1082 "measurements.m"
    MR_Float measurements__ParTime_19;
#line 1082 "measurements.m"
    MR_Float measurements__InnerSeqTime_20;
#line 1082 "measurements.m"
    MR_Float measurements__SeqTime_21;
#line 1082 "measurements.m"
    MR_Float measurements__FirstConjParTime_22;
#line 1082 "measurements.m"
    MR_Float measurements__FutureDeadTime_23;
#line 1082 "measurements.m"
    MR_Float measurements__SparkCosts_24;
#line 1082 "measurements.m"
    MR_Float measurements__BarrierCosts_25;
#line 1082 "measurements.m"
    MR_Float measurements__SignalCosts_26;
#line 1082 "measurements.m"
    MR_Float measurements__WaitCosts_27;
#line 1082 "measurements.m"
    MR_Float measurements__V_32_32;
#line 1082 "measurements.m"
    MR_Float measurements__V_33_33;
#line 1082 "measurements.m"
    MR_Integer measurements__V_34_34;
#line 1082 "measurements.m"
    MR_Float measurements__V_36_36;

#line 1087 "measurements.m"
    if ((measurements__MaybeInternal_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1088 "measurements.m"
      {
#line 1089 "measurements.m"
        {
#line 1089 "measurements.m"
          mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "function \140measurements.finalise_parallel_exec_metrics\'/1", (MR_String) "cannot finalise empty parallel metrics");
        }
#line 1088 "measurements.m"
      }
#line 1087 "measurements.m"
    else
#line 1086 "measurements.m"
      measurements__Internal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__MaybeInternal_12, (MR_Integer) 0)));
#line 1091 "measurements.m"
    measurements__BeforeAndAfterTime_14 = (measurements__TimeBefore_5 + measurements__TimeAfter_6);
#line 1094 "measurements.m"
    {
#line 1094 "measurements.m"
      measurements__NumConjuncts_15 = measurements__parallel_exec_metrics_internal_get_num_conjs_1_f_0(measurements__Internal_13);
    }
#line 1095 "measurements.m"
    {
#line 1095 "measurements.m"
      measurements__InnerParTime_16 = measurements__parallel_exec_metrics_internal_get_par_time_3_f_0(measurements__Internal_13, measurements__SparkDelay_9, measurements__NumConjuncts_15);
    }
#line 1102 "measurements.m"
    measurements__V_32_32 = (measurements__InnerParTime_16 + measurements__BeforeAndAfterTime_14);
#line 1105 "measurements.m"
    {
#line 1105 "measurements.m"
      measurements__InnerSeqTime_20 = measurements__parallel_exec_metrics_internal_get_seq_time_1_f_0(measurements__Internal_13);
    }
#line 1106 "measurements.m"
    measurements__SeqTime_21 = (measurements__InnerSeqTime_20 + measurements__BeforeAndAfterTime_14);
#line 1109 "measurements.m"
    {
#line 1109 "measurements.m"
      measurements__FirstConjParTime_22 = measurements__pem_get_first_conj_par_time_1_f_0(measurements__Internal_13);
    }
#line 1110 "measurements.m"
    measurements__FirstConjDeadTime_17 = (measurements__InnerParTime_16 - measurements__FirstConjParTime_22);
#line 1097 "measurements.m"
    measurements__succeeded = (measurements__FirstConjDeadTime_17 > ((MR_Float) 0.0000000000000000));
#line 1099 "measurements.m"
    if (measurements__succeeded)
#line 1098 "measurements.m"
      measurements__FirstConjWakeupPenalty_18 = measurements__ContextWakeupDelay_11;
#line 1099 "measurements.m"
    else
#line 1100 "measurements.m"
      measurements__FirstConjWakeupPenalty_18 = (MR_Float) 0.0000000000000000;
#line 1102 "measurements.m"
    measurements__ParTime_19 = (measurements__V_32_32 + measurements__FirstConjWakeupPenalty_18);
#line 1114 "measurements.m"
    {
#line 1114 "measurements.m"
      measurements__FutureDeadTime_23 = measurements__pem_get_future_dead_time_1_f_0(measurements__Internal_13);
    }
#line 1120 "measurements.m"
    measurements__V_34_34 = (measurements__NumConjuncts_15 - (MR_Integer) 1);
#line 1120 "measurements.m"
    {
#line 1120 "measurements.m"
      measurements__V_33_33 = mercury__float__float_1_f_0(measurements__V_34_34);
    }
#line 1120 "measurements.m"
    measurements__SparkCosts_24 = (measurements__V_33_33 * measurements__SparkCost_8);
#line 1121 "measurements.m"
    {
#line 1121 "measurements.m"
      measurements__V_36_36 = mercury__float__float_1_f_0(measurements__NumConjuncts_15);
    }
#line 1121 "measurements.m"
    measurements__BarrierCosts_25 = (measurements__V_36_36 * measurements__BarrierCost_10);
#line 1122 "measurements.m"
    {
#line 1122 "measurements.m"
      measurements__SignalCosts_26 = measurements__pem_get_signal_costs_1_f_0(measurements__Internal_13);
    }
#line 1123 "measurements.m"
    {
#line 1123 "measurements.m"
      measurements__WaitCosts_27 = measurements__pem_get_wait_costs_1_f_0(measurements__Internal_13);
    }
#line 1125 "measurements.m"
    {
#line 1125 "measurements.m"
      measurements__Metrics_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1125 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 0) = ((MR_Box) (measurements__NumCalls_7));
#line 1125 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 1) = MR_box_float(measurements__SeqTime_21);
#line 1125 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 2) = MR_box_float(measurements__ParTime_19);
#line 1125 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 3) = MR_box_float(measurements__SparkCosts_24);
#line 1125 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 4) = MR_box_float(measurements__BarrierCosts_25);
#line 1125 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 5) = MR_box_float(measurements__SignalCosts_26);
#line 1125 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 6) = MR_box_float(measurements__WaitCosts_27);
#line 1125 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 7) = MR_box_float(measurements__FirstConjDeadTime_17);
#line 1125 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_4, 8) = MR_box_float(measurements__FutureDeadTime_23);
#line 1125 "measurements.m"
    }
#line 1082 "measurements.m"
    return measurements__Metrics_4;
#line 1082 "measurements.m"
  }
#line 297 "measurements.m"
}

#line 290 "measurements.m"
MR_Word MR_CALL 
measurements__init_empty_parallel_exec_metrics_7_f_0(
#line 290 "measurements.m"
  MR_Float measurements__TimeBefore_9,
#line 290 "measurements.m"
  MR_Float measurements__TimeAfter_10,
#line 290 "measurements.m"
  MR_Integer measurements__NumCalls_11,
#line 290 "measurements.m"
  MR_Float measurements__SparkCost_12,
#line 290 "measurements.m"
  MR_Float measurements__SparkDelay_13,
#line 290 "measurements.m"
  MR_Float measurements__BarrierCost_14,
#line 290 "measurements.m"
  MR_Float measurements__ContextWakeupDelay_15)
#line 290 "measurements.m"
{
#line 1078 "measurements.m"
  {
#line 1078 "measurements.m"
    MR_bool measurements__succeeded;
#line 1078 "measurements.m"
    MR_Word measurements__HeadVar__8_8;

#line 1079 "measurements.m"
    {
#line 1079 "measurements.m"
      measurements__HeadVar__8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1079 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 0) = MR_box_float(measurements__TimeBefore_9);
#line 1079 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 1) = MR_box_float(measurements__TimeAfter_10);
#line 1079 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 2) = ((MR_Box) (measurements__NumCalls_11));
#line 1079 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 3) = MR_box_float(measurements__SparkCost_12);
#line 1079 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 4) = MR_box_float(measurements__SparkDelay_13);
#line 1079 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 5) = MR_box_float(measurements__BarrierCost_14);
#line 1079 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 6) = MR_box_float(measurements__ContextWakeupDelay_15);
#line 1079 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__8_8, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1079 "measurements.m"
    }
#line 1078 "measurements.m"
    return measurements__HeadVar__8_8;
#line 1078 "measurements.m"
  }
#line 290 "measurements.m"
}

#line 280 "measurements.m"
MR_Word MR_CALL 
measurements__init_parallel_exec_metrics_incomplete_6_f_0(
#line 280 "measurements.m"
  MR_Word measurements__Metrics0_8,
#line 280 "measurements.m"
  MR_Float measurements__TimeSignals_9,
#line 280 "measurements.m"
  MR_Float measurements__TimeWaits_10,
#line 280 "measurements.m"
  MR_Float measurements__TimeBSeq_11,
#line 280 "measurements.m"
  MR_Float measurements__TimeBPar_12,
#line 280 "measurements.m"
  MR_Float measurements__TimeBDead_13)
#line 280 "measurements.m"
{
#line 1057 "measurements.m"
  {
#line 1057 "measurements.m"
    MR_bool measurements__succeeded;
#line 1057 "measurements.m"
    MR_Word measurements__Metrics_14;
#line 1057 "measurements.m"
    MR_Word measurements__MaybeInternal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 7)));
#line 1057 "measurements.m"
    MR_Word measurements__Internal_17;
#line 1057 "measurements.m"
    MR_Word measurements__V_21_21;
#line 1057 "measurements.m"
    MR_Float measurements__V_22_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 0)));
#line 1057 "measurements.m"
    MR_Float measurements__V_23_23 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 1)));
#line 1057 "measurements.m"
    MR_Integer measurements__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 2)));
#line 1057 "measurements.m"
    MR_Float measurements__V_25_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 3)));
#line 1057 "measurements.m"
    MR_Float measurements__V_26_26 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 4)));
#line 1057 "measurements.m"
    MR_Float measurements__V_27_27 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 5)));
#line 1057 "measurements.m"
    MR_Float measurements__V_28_28 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Metrics0_8, (MR_Integer) 6)));

#line 1063 "measurements.m"
    if ((measurements__MaybeInternal0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1064 "measurements.m"
      {
#line 1065 "measurements.m"
        {
#line 1065 "measurements.m"
          measurements__Internal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1065 "measurements.m"
          MR_hl_field(MR_mktag(0), measurements__Internal_17, 0) = MR_box_float(measurements__TimeBSeq_11);
#line 1065 "measurements.m"
          MR_hl_field(MR_mktag(0), measurements__Internal_17, 1) = MR_box_float(measurements__TimeBPar_12);
#line 1065 "measurements.m"
          MR_hl_field(MR_mktag(0), measurements__Internal_17, 2) = MR_box_float(measurements__TimeSignals_9);
#line 1065 "measurements.m"
        }
#line 1067 "measurements.m"
        measurements__succeeded = (measurements__TimeBDead_13 == ((MR_Float) 0.0000000000000000));
#line 1067 "measurements.m"
        if (measurements__succeeded)
#line 1068 "measurements.m"
          measurements__succeeded = (measurements__TimeWaits_10 == ((MR_Float) 0.0000000000000000));
#line 1071 "measurements.m"
        if (measurements__succeeded)
#line 1070 "measurements.m"
          {
#line 1070 "measurements.m"
          }
#line 1071 "measurements.m"
        else
#line 1072 "measurements.m"
          {
#line 1072 "measurements.m"
            {
#line 1072 "measurements.m"
              mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "function \140measurements.init_parallel_exec_metrics_incomplete\'/6", (MR_String) "TimeWaits != 0 or TimeBDead != 0");
            }
#line 1072 "measurements.m"
          }
#line 1064 "measurements.m"
      }
#line 1063 "measurements.m"
    else
#line 1060 "measurements.m"
      {
#line 1060 "measurements.m"
        MR_Word measurements__Internal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurements__MaybeInternal0_15, (MR_Integer) 0)));

#line 1061 "measurements.m"
        {
#line 1061 "measurements.m"
          measurements__Internal_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "measurements.m"
          MR_hl_field(MR_mktag(1), measurements__Internal_17, 0) = ((MR_Box) (measurements__Internal0_16));
#line 1061 "measurements.m"
          MR_hl_field(MR_mktag(1), measurements__Internal_17, 1) = MR_box_float(measurements__TimeSignals_9);
#line 1061 "measurements.m"
          MR_hl_field(MR_mktag(1), measurements__Internal_17, 2) = MR_box_float(measurements__TimeWaits_10);
#line 1061 "measurements.m"
          MR_hl_field(MR_mktag(1), measurements__Internal_17, 3) = MR_box_float(measurements__TimeBSeq_11);
#line 1061 "measurements.m"
          MR_hl_field(MR_mktag(1), measurements__Internal_17, 4) = MR_box_float(measurements__TimeBPar_12);
#line 1061 "measurements.m"
          MR_hl_field(MR_mktag(1), measurements__Internal_17, 5) = MR_box_float(measurements__TimeBDead_13);
#line 1061 "measurements.m"
        }
#line 1060 "measurements.m"
      }
#line 1075 "measurements.m"
    {
#line 1075 "measurements.m"
      measurements__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "measurements.m"
      MR_hl_field(MR_mktag(1), measurements__V_21_21, 0) = ((MR_Box) (measurements__Internal_17));
#line 1075 "measurements.m"
    }
#line 1075 "measurements.m"
    {
#line 1075 "measurements.m"
      measurements__Metrics_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1075 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 0) = MR_box_float(measurements__V_22_22);
#line 1075 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 1) = MR_box_float(measurements__V_23_23);
#line 1075 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 2) = ((MR_Box) (measurements__V_24_24));
#line 1075 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 3) = MR_box_float(measurements__V_25_25);
#line 1075 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 4) = MR_box_float(measurements__V_26_26);
#line 1075 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 5) = MR_box_float(measurements__V_27_27);
#line 1075 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 6) = MR_box_float(measurements__V_28_28);
#line 1075 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Metrics_14, 7) = ((MR_Box) (measurements__V_21_21));
#line 1075 "measurements.m"
    }
#line 1057 "measurements.m"
    return measurements__Metrics_14;
#line 1057 "measurements.m"
  }
#line 280 "measurements.m"
}

#line 257 "measurements.m"
MR_bool MR_CALL 
measurements__exceeded_desired_parallelism_2_p_0(
#line 257 "measurements.m"
  MR_Float measurements__DesiredParallelism_3,
#line 257 "measurements.m"
  MR_Word measurements__Parallelism_4)
#line 257 "measurements.m"
{
#line 992 "measurements.m"
  {
#line 992 "measurements.m"
    MR_bool measurements__succeeded;
#line 992 "measurements.m"
    MR_Float measurements__LikelyParallelism_5 = MR_unbox_float((MR_Box) measurements__Parallelism_4);

#line 994 "measurements.m"
    measurements__succeeded = (measurements__DesiredParallelism_3 < measurements__LikelyParallelism_5);
#line 992 "measurements.m"
    return measurements__succeeded;
#line 992 "measurements.m"
  }
#line 257 "measurements.m"
}

#line 250 "measurements.m"
void MR_CALL 
measurements__sub_computation_parallelism_3_p_0(
#line 250 "measurements.m"
  MR_Word measurements__ParentParallelism_4,
#line 250 "measurements.m"
  MR_Float measurements__Prob_5,
#line 250 "measurements.m"
  MR_Word * measurements__Parallelism_6)
#line 250 "measurements.m"
{
#line 988 "measurements.m"
  {
#line 988 "measurements.m"
    MR_bool measurements__succeeded;
#line 988 "measurements.m"
    MR_Float measurements__ProbFloat_13;
#line 988 "measurements.m"
    MR_Float measurements__ParLikely_14;
#line 988 "measurements.m"
    MR_Float measurements__Likely_16;
#line 988 "measurements.m"
    MR_Float measurements__V_17_17;

#line 982 "measurements.m"
    {
#line 982 "measurements.m"
      measurements__ProbFloat_13 = measurement_units__probability_to_float_1_f_0(measurements__Prob_5);
    }
#line 983 "measurements.m"
    measurements__ParLikely_14 = MR_unbox_float((MR_Box) measurements__ParentParallelism_4);
#line 985 "measurements.m"
    measurements__V_17_17 = (measurements__ProbFloat_13 * (MR_unbox_float((MR_Box) (MR_Word) (MR_Box) &measurements_scalar_common_5[1])));
#line 985 "measurements.m"
    measurements__Likely_16 = (measurements__ParLikely_14 + measurements__V_17_17);
#line 986 "measurements.m"
    *measurements__Parallelism_6 = (MR_Word) MR_box_float(measurements__Likely_16);
#line 988 "measurements.m"
  }
#line 250 "measurements.m"
}

#line 248 "measurements.m"
void MR_CALL 
measurements__sub_computation_parallelism_4_p_0(
#line 248 "measurements.m"
  MR_Word measurements__ParentParallelism_5,
#line 248 "measurements.m"
  MR_Float measurements__Prob_6,
#line 248 "measurements.m"
  MR_Word measurements__ChildParallelism_7,
#line 248 "measurements.m"
  MR_Word * measurements__Parallelism_8)
#line 248 "measurements.m"
{
#line 981 "measurements.m"
  {
#line 981 "measurements.m"
    MR_bool measurements__succeeded;
#line 981 "measurements.m"
    MR_Float measurements__ProbFloat_9;
#line 981 "measurements.m"
    MR_Float measurements__ParLikely_10;
#line 981 "measurements.m"
    MR_Float measurements__ChildLikely_11;
#line 981 "measurements.m"
    MR_Float measurements__Likely_12;
#line 981 "measurements.m"
    MR_Float measurements__V_13_13;

#line 982 "measurements.m"
    {
#line 982 "measurements.m"
      measurements__ProbFloat_9 = measurement_units__probability_to_float_1_f_0(measurements__Prob_6);
    }
#line 983 "measurements.m"
    measurements__ParLikely_10 = MR_unbox_float((MR_Box) measurements__ParentParallelism_5);
#line 984 "measurements.m"
    measurements__ChildLikely_11 = MR_unbox_float((MR_Box) measurements__ChildParallelism_7);
#line 985 "measurements.m"
    measurements__V_13_13 = (measurements__ProbFloat_9 * measurements__ChildLikely_11);
#line 985 "measurements.m"
    measurements__Likely_12 = (measurements__ParLikely_10 + measurements__V_13_13);
#line 986 "measurements.m"
    *measurements__Parallelism_8 = (MR_Word) MR_box_float(measurements__Likely_12);
#line 981 "measurements.m"
  }
#line 248 "measurements.m"
}

#line 231 "measurements.m"
MR_Word MR_CALL 
measurements__some_parallelism_1_f_0(
#line 231 "measurements.m"
  MR_Float measurements__Num_3)
#line 231 "measurements.m"
{
#line 972 "measurements.m"
  {
#line 972 "measurements.m"
    MR_bool measurements__succeeded = (measurements__Num_3 < ((MR_Float) 1.0000000000000000));
#line 972 "measurements.m"
    MR_Word measurements__HeadVar__2_2 = (MR_Word) MR_box_float(measurements__Num_3);

#line 976 "measurements.m"
    if (measurements__succeeded)
#line 974 "measurements.m"
      {
#line 974 "measurements.m"
        {
#line 974 "measurements.m"
          mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "function \140measurements.some_parallelism\'/1", (MR_String) "Parallelism amount cannot ever be less than 1.0");
        }
#line 974 "measurements.m"
      }
#line 976 "measurements.m"
    else
#line 977 "measurements.m"
      {
#line 977 "measurements.m"
      }
#line 972 "measurements.m"
    return measurements__HeadVar__2_2;
#line 972 "measurements.m"
  }
#line 231 "measurements.m"
}

#line 229 "measurements.m"
MR_Word MR_CALL 
measurements__no_parallelism_0_f_0(void)
#line 229 "measurements.m"
{
#line 970 "measurements.m"
  {
#line 970 "measurements.m"
    MR_bool measurements__succeeded;

#line 970 "measurements.m"
    return (MR_Word) (MR_Box) &measurements_scalar_common_5[1];
#line 970 "measurements.m"
  }
#line 229 "measurements.m"
}

#line 220 "measurements.m"
MR_Word MR_CALL 
measurements__static_coverage_maybe_get_coverage_points_1_f_0(
#line 220 "measurements.m"
  MR_Word measurements__MaybeCoverage_3)
#line 220 "measurements.m"
{
#line 945 "measurements.m"
  {
#line 945 "measurements.m"
    MR_bool measurements__succeeded;
#line 945 "measurements.m"
    MR_Word measurements__MaybeCoverage_2 = measurements__MaybeCoverage_3;

#line 945 "measurements.m"
    return measurements__MaybeCoverage_2;
#line 945 "measurements.m"
  }
#line 220 "measurements.m"
}

#line 217 "measurements.m"
void MR_CALL 
measurements__array_to_static_coverage_2_p_0(
#line 217 "measurements.m"
  MR_ArrayPtr measurements__Array_3,
#line 217 "measurements.m"
  MR_Word * measurements__HeadVar__2_2)
#line 217 "measurements.m"
{
#line 943 "measurements.m"
  {
#line 943 "measurements.m"
    MR_bool measurements__succeeded;

#line 943 "measurements.m"
    {
#line 943 "measurements.m"
      MR_Word base;
#line 943 "measurements.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 943 "measurements.m"
      *measurements__HeadVar__2_2 = base;
#line 943 "measurements.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (measurements__Array_3));
#line 943 "measurements.m"
    }
#line 943 "measurements.m"
  }
#line 217 "measurements.m"
}

#line 934 "measurements.m"
static void MR_CALL 
measurements__add_coverage_arrays_3_p_0_1(
#line 934 "measurements.m"
  MR_Box measurements__closure_arg,
#line 934 "measurements.m"
  MR_Box measurements__wrapper_arg_1,
#line 934 "measurements.m"
  MR_Box measurements__wrapper_arg_2,
#line 934 "measurements.m"
  MR_Box measurements__wrapper_arg_3,
#line 934 "measurements.m"
  MR_Box * measurements__wrapper_arg_4)
#line 934 "measurements.m"
{
#line 934 "measurements.m"
  {
#line 934 "measurements.m"
    MR_Box measurements__closure = measurements__closure_arg;
#line 934 "measurements.m"
    MR_ArrayPtr measurements__conv1_HeadVar__4_22;

#line 934 "measurements.m"
    {
#line 934 "measurements.m"
      measurements__IntroducedFrom__pred__add_coverage_arrays__934__1_4_p_0(((MR_Integer) measurements__wrapper_arg_1), ((MR_Integer) measurements__wrapper_arg_2), ((MR_ArrayPtr) measurements__wrapper_arg_3), &measurements__conv1_HeadVar__4_22);
    }
#line 934 "measurements.m"
    *measurements__wrapper_arg_4 = ((MR_Box) (measurements__conv1_HeadVar__4_22));
#line 934 "measurements.m"
  }
#line 934 "measurements.m"
}

#line 214 "measurements.m"
void MR_CALL 
measurements__add_coverage_arrays_3_p_0(
#line 214 "measurements.m"
  MR_ArrayPtr measurements__HeadVar__1_1,
#line 214 "measurements.m"
  MR_Word measurements__HeadVar__2_2,
#line 214 "measurements.m"
  MR_Word * measurements__HeadVar__3_3)
#line 214 "measurements.m"
{
#line 927 "measurements.m"
  {
#line 927 "measurements.m"
    MR_bool measurements__succeeded;

#line 927 "measurements.m"
    if ((measurements__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "measurements.m"
      {
#line 927 "measurements.m"
        MR_Word base;
#line 927 "measurements.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "measurements.m"
        *measurements__HeadVar__3_3 = base;
#line 927 "measurements.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (measurements__HeadVar__1_1));
#line 927 "measurements.m"
      }
#line 927 "measurements.m"
    else
#line 928 "measurements.m"
      {
#line 928 "measurements.m"
        MR_ArrayPtr measurements__STATE_VARIABLE_Array_0_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 928 "measurements.m"
        MR_ArrayPtr measurements__STATE_VARIABLE_Array_15;
#line 930 "measurements.m"
        MR_Word measurements__TypeCtorInfo_31_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 930 "measurements.m"
        MR_Integer measurements__Min_7;
#line 930 "measurements.m"
        MR_Integer measurements__Max_8;
#line 930 "measurements.m"
        MR_Integer measurements__V_35_35;
#line 930 "measurements.m"
        MR_Integer measurements__V_36_36;

#line 930 "measurements.m"
        {
#line 930 "measurements.m"
          mercury__array__bounds_3_p_0(measurements__TypeCtorInfo_31_31, (MR_ArrayPtr) measurements__HeadVar__1_1, &measurements__Min_7, &measurements__Max_8);
        }
#line 931 "measurements.m"
        {
#line 931 "measurements.m"
          mercury__array__bounds_3_p_0(measurements__TypeCtorInfo_31_31, (MR_ArrayPtr) measurements__STATE_VARIABLE_Array_0_14, &measurements__V_35_35, &measurements__V_36_36);
        }
#line 931 "measurements.m"
        measurements__succeeded = (measurements__Min_7 == measurements__V_35_35);
#line 930 "measurements.m"
        if (measurements__succeeded)
#line 931 "measurements.m"
          measurements__succeeded = (measurements__Max_8 == measurements__V_36_36);
#line 939 "measurements.m"
        if (measurements__succeeded)
#line 933 "measurements.m"
          {
#line 933 "measurements.m"
            MR_Word measurements__TypeCtorInfo_32_32 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 933 "measurements.m"
            MR_ArrayPtr measurements__STATE_VARIABLE_Array_16_16;
#line 933 "measurements.m"
            MR_ArrayPtr measurements__conv0_STATE_VARIABLE_Array_16_16;
#line 934 "measurements.m"
            MR_Box measurements__conv2_STATE_VARIABLE_Array_15;

#line 933 "measurements.m"
            {
#line 933 "measurements.m"
              measurements__conv0_STATE_VARIABLE_Array_16_16 = mercury__array__copy_1_f_0(measurements__TypeCtorInfo_32_32, (MR_ArrayPtr) measurements__STATE_VARIABLE_Array_0_14);
            }
#line 933 "measurements.m"
            measurements__STATE_VARIABLE_Array_16_16 = (MR_ArrayPtr) measurements__conv0_STATE_VARIABLE_Array_16_16;
#line 934 "measurements.m"
            {
#line 934 "measurements.m"
              array_util__array_foldl_from_0_4_p_1(measurements__TypeCtorInfo_32_32, (MR_Word) &measurements_scalar_common_1[0], (MR_Word) &measurements_scalar_common_3[3], (MR_ArrayPtr) measurements__HeadVar__1_1, ((MR_Box) (measurements__STATE_VARIABLE_Array_16_16)), &measurements__conv2_STATE_VARIABLE_Array_15);
            }
#line 934 "measurements.m"
            measurements__STATE_VARIABLE_Array_15 = ((MR_ArrayPtr) measurements__conv2_STATE_VARIABLE_Array_15);
#line 933 "measurements.m"
          }
#line 939 "measurements.m"
        else
#line 940 "measurements.m"
          {
#line 940 "measurements.m"
            {
#line 940 "measurements.m"
              mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "predicate \140measurements.add_coverage_arrays\'/3", (MR_String) "arrays\' bounds do not match");
#line 940 "measurements.m"
              return;
            }
#line 940 "measurements.m"
          }
#line 928 "measurements.m"
        {
#line 928 "measurements.m"
          MR_Word base;
#line 928 "measurements.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 928 "measurements.m"
          *measurements__HeadVar__3_3 = base;
#line 928 "measurements.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (measurements__STATE_VARIABLE_Array_15));
#line 928 "measurements.m"
        }
#line 928 "measurements.m"
      }
#line 927 "measurements.m"
  }
#line 214 "measurements.m"
}

#line 212 "measurements.m"
MR_Word MR_CALL 
measurements__zero_static_coverage_0_f_0(void)
#line 212 "measurements.m"
{
#line 925 "measurements.m"
  {
#line 925 "measurements.m"
    MR_bool measurements__succeeded;

#line 925 "measurements.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "measurements.m"
  }
#line 212 "measurements.m"
}

#line 206 "measurements.m"
MR_bool MR_CALL 
measurements__recursion_depth_is_base_case_1_p_0(
#line 206 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 206 "measurements.m"
{
#line 917 "measurements.m"
  {
#line 917 "measurements.m"
    MR_bool measurements__succeeded;
#line 917 "measurements.m"
    MR_Float measurements__D_2 = MR_unbox_float((MR_Box) measurements__HeadVar__1_1);
#line 917 "measurements.m"
    MR_Float measurements__V_4_4;

#line 918 "measurements.m"
    measurements__succeeded = (measurements__D_2 < ((MR_Float) 0.50000000000000000));
#line 917 "measurements.m"
    if (measurements__succeeded)
#line 917 "measurements.m"
      {
#line 919 "measurements.m"
        measurements__V_4_4 = (MR_Float) -0.50000000000000000;
#line 919 "measurements.m"
        measurements__succeeded = (measurements__D_2 >= measurements__V_4_4);
#line 917 "measurements.m"
      }
#line 917 "measurements.m"
    return measurements__succeeded;
#line 917 "measurements.m"
  }
#line 206 "measurements.m"
}

#line 204 "measurements.m"
void MR_CALL 
measurements__recursion_depth_descend_2_p_0(
#line 204 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 204 "measurements.m"
  MR_Word * measurements__HeadVar__2_2)
#line 204 "measurements.m"
{
#line 909 "measurements.m"
  {
#line 909 "measurements.m"
    MR_bool measurements__succeeded;
#line 909 "measurements.m"
    MR_Float measurements__D_3 = MR_unbox_float((MR_Box) measurements__HeadVar__1_1);
#line 909 "measurements.m"
    MR_Float measurements__V_4_4 = (measurements__D_3 - ((MR_Float) 1.0000000000000000));

#line 909 "measurements.m"
    *measurements__HeadVar__2_2 = (MR_Word) MR_box_float(measurements__V_4_4);
#line 910 "measurements.m"
    measurements__succeeded = (measurements__D_3 >= ((MR_Float) 0.50000000000000000));
#line 912 "measurements.m"
    if (measurements__succeeded)
#line 911 "measurements.m"
      {
#line 911 "measurements.m"
      }
#line 912 "measurements.m"
    else
#line 913 "measurements.m"
      {
#line 913 "measurements.m"
        MR_String measurements__V_9_9;
#line 913 "measurements.m"
        MR_Float measurements__V_13_13 = (measurements__D_3 - ((MR_Float) 1.0000000000000000));
#line 913 "measurements.m"
        MR_String measurements__V_16_16;

#line 914 "measurements.m"
        {
#line 914 "measurements.m"
          mercury__string__format__format_float_component_nowidth_noprec_4_p_0((MR_Word) &measurements_scalar_common_6[1], (MR_Integer) 2, measurements__V_13_13, &measurements__V_16_16);
        }
#line 914 "measurements.m"
        {
#line 914 "measurements.m"
          measurements__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "Recursion depth will be less than zero: ", measurements__V_16_16);
        }
#line 913 "measurements.m"
        {
#line 913 "measurements.m"
          mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "predicate \140measurements.recursion_depth_descend\'/2", measurements__V_9_9);
#line 913 "measurements.m"
          return;
        }
#line 913 "measurements.m"
      }
#line 909 "measurements.m"
  }
#line 204 "measurements.m"
}

#line 201 "measurements.m"
MR_Integer MR_CALL 
measurements__recursion_depth_to_int_1_f_0(
#line 201 "measurements.m"
  MR_Word measurements__D_3)
#line 201 "measurements.m"
{
#line 906 "measurements.m"
  {
#line 906 "measurements.m"
    MR_bool measurements__succeeded;
#line 906 "measurements.m"
    MR_Integer measurements__HeadVar__2_2;
#line 906 "measurements.m"
    MR_Float measurements__V_4_4 = MR_unbox_float((MR_Box) measurements__D_3);

#line 907 "measurements.m"
    {
#line 907 "measurements.m"
      return measurements__HeadVar__2_2 = mercury__float__round_to_int_1_f_0(measurements__V_4_4);
    }
#line 906 "measurements.m"
    return measurements__HeadVar__2_2;
#line 906 "measurements.m"
  }
#line 201 "measurements.m"
}

#line 200 "measurements.m"
MR_Float MR_CALL 
measurements__recursion_depth_to_float_1_f_0(
#line 200 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 200 "measurements.m"
{
#line 905 "measurements.m"
  {
#line 905 "measurements.m"
    MR_bool measurements__succeeded;
#line 905 "measurements.m"
    MR_Float measurements__F_3 = MR_unbox_float((MR_Box) measurements__HeadVar__1_1);

#line 905 "measurements.m"
    return measurements__F_3;
#line 905 "measurements.m"
  }
#line 200 "measurements.m"
}

#line 198 "measurements.m"
MR_Word MR_CALL 
measurements__recursion_depth_from_float_1_f_0(
#line 198 "measurements.m"
  MR_Float measurements__F_3)
#line 198 "measurements.m"
{
#line 903 "measurements.m"
  {
#line 903 "measurements.m"
    MR_bool measurements__succeeded;
#line 903 "measurements.m"
    MR_Word measurements__HeadVar__2_2 = (MR_Word) MR_box_float(measurements__F_3);

#line 903 "measurements.m"
    return measurements__HeadVar__2_2;
#line 903 "measurements.m"
  }
#line 198 "measurements.m"
}

#line 192 "measurements.m"
MR_Word MR_CALL 
measurements__goal_cost_change_calls_2_f_0(
#line 192 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 192 "measurements.m"
  MR_Integer measurements__Calls_2)
#line 192 "measurements.m"
{
#line 852 "measurements.m"
  {
#line 852 "measurements.m"
    MR_bool measurements__succeeded;
#line 852 "measurements.m"
    MR_Word measurements__HeadVar__3_3;

#line 852 "measurements.m"
#line 852 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 852 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 852 "measurements.m"
      case (MR_Integer) 0:
#line 852 "measurements.m"
        {
#line 853 "measurements.m"
          MR_Box measurements__conv0_HeadVar__3_3;

#line 853 "measurements.m"
          {
#line 853 "measurements.m"
            measurements__conv0_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) &measurements__measurements__type_ctor_info_goal_cost_csq_0, (MR_String) "measurements", (MR_String) "function \140measurements.goal_cost_change_calls\'/2", (MR_String) "Cannot compute new cost");
          }
#line 853 "measurements.m"
          measurements__HeadVar__3_3 = ((MR_Word) measurements__conv0_HeadVar__3_3);
#line 852 "measurements.m"
        }
#line 852 "measurements.m"
        break;
#line 852 "measurements.m"
      case (MR_Integer) 1:
#line 854 "measurements.m"
        {
#line 854 "measurements.m"
          measurements__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "measurements.m"
          MR_hl_field(MR_mktag(1), measurements__HeadVar__3_3, 0) = ((MR_Box) (measurements__Calls_2));
#line 854 "measurements.m"
        }
#line 852 "measurements.m"
        break;
#line 852 "measurements.m"
      case (MR_Integer) 2:
#line 856 "measurements.m"
        {
#line 856 "measurements.m"
          MR_Word measurements__Cost0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 856 "measurements.m"
          MR_Integer measurements__Calls0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 856 "measurements.m"
          MR_Word measurements__Cost_13;
#line 856 "measurements.m"
          MR_Float measurements__V_14_14;
#line 856 "measurements.m"
          MR_Float measurements__V_15_15;

#line 857 "measurements.m"
          {
#line 857 "measurements.m"
            measurements__V_15_15 = mercury__float__float_1_f_0(measurements__Calls0_11);
          }
#line 872 "measurements.m"
          if (((MR_tag((MR_Word) measurements__Cost0_10)) == (MR_mktag((MR_Integer) 0))))
#line 873 "measurements.m"
            measurements__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Cost0_10, (MR_Integer) 0)));
#line 872 "measurements.m"
          else
#line 872 "measurements.m"
            {
#line 872 "measurements.m"
              MR_Float measurements__Total_18 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Cost0_10, (MR_Integer) 0)));

#line 872 "measurements.m"
              {
#line 872 "measurements.m"
                measurements__V_14_14 = mercury__float__f_slash_2_f_0(measurements__Total_18, measurements__V_15_15);
              }
#line 872 "measurements.m"
            }
#line 857 "measurements.m"
          {
#line 857 "measurements.m"
            measurements__Cost_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 857 "measurements.m"
            MR_hl_field(MR_mktag(0), measurements__Cost_13, 0) = MR_box_float(measurements__V_14_14);
#line 857 "measurements.m"
          }
#line 856 "measurements.m"
          {
#line 856 "measurements.m"
            measurements__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "measurements.m"
            MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 0) = ((MR_Box) (measurements__Cost_13));
#line 856 "measurements.m"
            MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__Calls_2));
#line 856 "measurements.m"
          }
#line 856 "measurements.m"
        }
#line 852 "measurements.m"
        break;
#line 852 "measurements.m"
    }
#line 852 "measurements.m"
    return measurements__HeadVar__3_3;
#line 852 "measurements.m"
  }
#line 192 "measurements.m"
}

#line 190 "measurements.m"
MR_Integer MR_CALL 
measurements__goal_cost_get_calls_1_f_0(
#line 190 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 190 "measurements.m"
{
#line 848 "measurements.m"
  {
#line 848 "measurements.m"
    MR_bool measurements__succeeded;
#line 848 "measurements.m"
    MR_Integer measurements__HeadVar__2_2;

#line 848 "measurements.m"
#line 848 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 848 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 848 "measurements.m"
      case (MR_Integer) 0:
#line 848 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Integer) 0;
#line 848 "measurements.m"
        break;
#line 848 "measurements.m"
      case (MR_Integer) 1:
#line 849 "measurements.m"
        measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 848 "measurements.m"
        break;
#line 848 "measurements.m"
      case (MR_Integer) 2:
#line 850 "measurements.m"
        {
#line 850 "measurements.m"
          MR_Word measurements__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));

#line 850 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 850 "measurements.m"
        }
#line 848 "measurements.m"
        break;
#line 848 "measurements.m"
    }
#line 848 "measurements.m"
    return measurements__HeadVar__2_2;
#line 848 "measurements.m"
  }
#line 190 "measurements.m"
}

#line 188 "measurements.m"
MR_Float MR_CALL 
measurements__goal_cost_get_total_1_f_0(
#line 188 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 188 "measurements.m"
{
#line 843 "measurements.m"
  {
#line 843 "measurements.m"
    MR_bool measurements__succeeded;
#line 843 "measurements.m"
    MR_Float measurements__HeadVar__2_2;

#line 843 "measurements.m"
#line 843 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 843 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 843 "measurements.m"
      case (MR_Integer) 0:
#line 843 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
#line 843 "measurements.m"
        break;
#line 843 "measurements.m"
      case (MR_Integer) 1:
#line 844 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
#line 843 "measurements.m"
        break;
#line 843 "measurements.m"
      case (MR_Integer) 2:
#line 845 "measurements.m"
        {
#line 845 "measurements.m"
          MR_Word measurements__Cost_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 845 "measurements.m"
          MR_Integer measurements__Calls_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 845 "measurements.m"
          MR_Float measurements__V_6_6;

#line 846 "measurements.m"
          {
#line 846 "measurements.m"
            measurements__V_6_6 = mercury__float__float_1_f_0(measurements__Calls_5);
          }
#line 867 "measurements.m"
          if (((MR_tag((MR_Word) measurements__Cost_4)) == (MR_mktag((MR_Integer) 0))))
#line 868 "measurements.m"
            {
#line 868 "measurements.m"
              MR_Float measurements__PC_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Cost_4, (MR_Integer) 0)));

#line 868 "measurements.m"
              measurements__HeadVar__2_2 = (measurements__V_6_6 * measurements__PC_10);
#line 868 "measurements.m"
            }
#line 867 "measurements.m"
          else
#line 867 "measurements.m"
            measurements__HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Cost_4, (MR_Integer) 0)));
#line 845 "measurements.m"
        }
#line 843 "measurements.m"
        break;
#line 843 "measurements.m"
    }
#line 843 "measurements.m"
    return measurements__HeadVar__2_2;
#line 843 "measurements.m"
  }
#line 188 "measurements.m"
}

#line 186 "measurements.m"
MR_Float MR_CALL 
measurements__goal_cost_get_percall_1_f_0(
#line 186 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 186 "measurements.m"
{
#line 834 "measurements.m"
  {
#line 834 "measurements.m"
    MR_bool measurements__succeeded;
#line 834 "measurements.m"
    MR_Float measurements__HeadVar__2_2;

#line 834 "measurements.m"
#line 834 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 834 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 834 "measurements.m"
      case (MR_Integer) 0:
#line 834 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
#line 834 "measurements.m"
        break;
#line 834 "measurements.m"
      case (MR_Integer) 1:
#line 835 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
#line 834 "measurements.m"
        break;
#line 834 "measurements.m"
      case (MR_Integer) 2:
#line 836 "measurements.m"
        {
#line 836 "measurements.m"
          MR_Word measurements__Cost_4 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 836 "measurements.m"
          MR_Integer measurements__Calls_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));

#line 837 "measurements.m"
          measurements__succeeded = (measurements__Calls_5 == (MR_Integer) 0);
#line 836 "measurements.m"
          if (measurements__succeeded)
#line 838 "measurements.m"
            measurements__HeadVar__2_2 = (MR_Float) 0.0000000000000000;
#line 836 "measurements.m"
          else
#line 840 "measurements.m"
            {
#line 840 "measurements.m"
              MR_Float measurements__V_6_6;

#line 840 "measurements.m"
              {
#line 840 "measurements.m"
                measurements__V_6_6 = mercury__float__float_1_f_0(measurements__Calls_5);
              }
#line 872 "measurements.m"
              if (((MR_tag((MR_Word) measurements__Cost_4)) == (MR_mktag((MR_Integer) 0))))
#line 873 "measurements.m"
                measurements__HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Cost_4, (MR_Integer) 0)));
#line 872 "measurements.m"
              else
#line 872 "measurements.m"
                {
#line 872 "measurements.m"
                  MR_Float measurements__Total_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Cost_4, (MR_Integer) 0)));

#line 872 "measurements.m"
                  {
#line 872 "measurements.m"
                    return measurements__HeadVar__2_2 = mercury__float__f_slash_2_f_0(measurements__Total_8, measurements__V_6_6);
                  }
#line 872 "measurements.m"
                }
#line 840 "measurements.m"
            }
#line 836 "measurements.m"
        }
#line 834 "measurements.m"
        break;
#line 834 "measurements.m"
    }
#line 834 "measurements.m"
    return measurements__HeadVar__2_2;
#line 834 "measurements.m"
  }
#line 186 "measurements.m"
}

#line 183 "measurements.m"
MR_Word MR_CALL 
measurements__add_goal_costs_branch_3_f_0(
#line 183 "measurements.m"
  MR_Integer measurements__TotalCalls_5,
#line 183 "measurements.m"
  MR_Word measurements__A_6,
#line 183 "measurements.m"
  MR_Word measurements__B_7)
#line 183 "measurements.m"
{
#line 779 "measurements.m"
  {
#line 779 "measurements.m"
    MR_bool measurements__succeeded = (measurements__TotalCalls_5 == (MR_Integer) 0);
#line 779 "measurements.m"
    MR_Word measurements__R_8;

#line 779 "measurements.m"
    if (measurements__succeeded)
#line 778 "measurements.m"
      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 779 "measurements.m"
    else
#line 820 "measurements.m"
      {
#line 820 "measurements.m"
        MR_Integer measurements__CallsA_9;
#line 820 "measurements.m"
        MR_Integer measurements__CallsB_10;
#line 820 "measurements.m"
        MR_Integer measurements__Calls_44;

#line 793 "measurements.m"
#line 793 "measurements.m"
        switch (MR_tag((MR_Word) measurements__A_6)) {
#line 793 "measurements.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 793 "measurements.m"
          case (MR_Integer) 0:
#line 781 "measurements.m"
            {
#line 782 "measurements.m"
              measurements__CallsA_9 = (MR_Integer) 0;
#line 786 "measurements.m"
#line 786 "measurements.m"
              switch (MR_tag((MR_Word) measurements__B_7)) {
#line 786 "measurements.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 786 "measurements.m"
                case (MR_Integer) 0:
#line 784 "measurements.m"
                  {
#line 785 "measurements.m"
                    {
#line 785 "measurements.m"
                      mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "function \140measurements.add_goal_costs_branch\'/3", (MR_String) "TotalCalls \\= 0 for a dead goal");
                    }
#line 784 "measurements.m"
                  }
#line 786 "measurements.m"
                  break;
#line 786 "measurements.m"
                case (MR_Integer) 1:
#line 787 "measurements.m"
                  {
#line 787 "measurements.m"
                    measurements__CallsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__B_7, (MR_Integer) 0)));
#line 788 "measurements.m"
                    {
#line 788 "measurements.m"
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 788 "measurements.m"
                      MR_hl_field(MR_mktag(1), measurements__R_8, 0) = ((MR_Box) (measurements__TotalCalls_5));
#line 788 "measurements.m"
                    }
#line 787 "measurements.m"
                  }
#line 786 "measurements.m"
                  break;
#line 786 "measurements.m"
                case (MR_Integer) 2:
#line 790 "measurements.m"
                  {
#line 790 "measurements.m"
                    MR_Word measurements__Cost_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__B_7, (MR_Integer) 0)));

#line 790 "measurements.m"
                    measurements__CallsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__B_7, (MR_Integer) 1)));
#line 791 "measurements.m"
                    {
#line 791 "measurements.m"
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__R_8, 0) = ((MR_Box) (measurements__Cost_11));
#line 791 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__R_8, 1) = ((MR_Box) (measurements__TotalCalls_5));
#line 791 "measurements.m"
                    }
#line 790 "measurements.m"
                  }
#line 786 "measurements.m"
                  break;
#line 786 "measurements.m"
              }
#line 781 "measurements.m"
            }
#line 793 "measurements.m"
            break;
#line 793 "measurements.m"
          case (MR_Integer) 1:
#line 794 "measurements.m"
            {
#line 794 "measurements.m"
              measurements__CallsA_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__A_6, (MR_Integer) 0)));
#line 799 "measurements.m"
#line 799 "measurements.m"
              switch (MR_tag((MR_Word) measurements__B_7)) {
#line 799 "measurements.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 799 "measurements.m"
                case (MR_Integer) 0:
#line 796 "measurements.m"
                  {
#line 797 "measurements.m"
                    measurements__CallsB_10 = (MR_Integer) 0;
#line 798 "measurements.m"
                    {
#line 798 "measurements.m"
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 798 "measurements.m"
                      MR_hl_field(MR_mktag(1), measurements__R_8, 0) = ((MR_Box) (measurements__TotalCalls_5));
#line 798 "measurements.m"
                    }
#line 796 "measurements.m"
                  }
#line 799 "measurements.m"
                  break;
#line 799 "measurements.m"
                case (MR_Integer) 1:
#line 800 "measurements.m"
                  {
#line 800 "measurements.m"
                    measurements__CallsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__B_7, (MR_Integer) 0)));
#line 801 "measurements.m"
                    {
#line 801 "measurements.m"
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 801 "measurements.m"
                      MR_hl_field(MR_mktag(1), measurements__R_8, 0) = ((MR_Box) (measurements__TotalCalls_5));
#line 801 "measurements.m"
                    }
#line 800 "measurements.m"
                  }
#line 799 "measurements.m"
                  break;
#line 799 "measurements.m"
                case (MR_Integer) 2:
#line 803 "measurements.m"
                  {
#line 803 "measurements.m"
                    MR_Word measurements__Cost_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__B_7, (MR_Integer) 0)));

#line 803 "measurements.m"
                    measurements__CallsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__B_7, (MR_Integer) 1)));
#line 804 "measurements.m"
                    {
#line 804 "measurements.m"
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__R_8, 0) = ((MR_Box) (measurements__Cost_20));
#line 804 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__R_8, 1) = ((MR_Box) (measurements__TotalCalls_5));
#line 804 "measurements.m"
                    }
#line 803 "measurements.m"
                  }
#line 799 "measurements.m"
                  break;
#line 799 "measurements.m"
              }
#line 794 "measurements.m"
            }
#line 793 "measurements.m"
            break;
#line 793 "measurements.m"
          case (MR_Integer) 2:
#line 807 "measurements.m"
            {
#line 807 "measurements.m"
              MR_Word measurements__CostA_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__A_6, (MR_Integer) 0)));

#line 807 "measurements.m"
              measurements__CallsA_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__A_6, (MR_Integer) 1)));
#line 812 "measurements.m"
#line 812 "measurements.m"
              switch (MR_tag((MR_Word) measurements__B_7)) {
#line 812 "measurements.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 812 "measurements.m"
                case (MR_Integer) 0:
#line 809 "measurements.m"
                  {
#line 810 "measurements.m"
                    measurements__CallsB_10 = (MR_Integer) 0;
#line 811 "measurements.m"
                    {
#line 811 "measurements.m"
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__R_8, 0) = ((MR_Box) (measurements__CostA_12));
#line 811 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__R_8, 1) = ((MR_Box) (measurements__TotalCalls_5));
#line 811 "measurements.m"
                    }
#line 809 "measurements.m"
                  }
#line 812 "measurements.m"
                  break;
#line 812 "measurements.m"
                case (MR_Integer) 1:
#line 813 "measurements.m"
                  {
#line 813 "measurements.m"
                    measurements__CallsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__B_7, (MR_Integer) 0)));
#line 814 "measurements.m"
                    {
#line 814 "measurements.m"
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__R_8, 0) = ((MR_Box) (measurements__CostA_12));
#line 814 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__R_8, 1) = ((MR_Box) (measurements__TotalCalls_5));
#line 814 "measurements.m"
                    }
#line 813 "measurements.m"
                  }
#line 812 "measurements.m"
                  break;
#line 812 "measurements.m"
                case (MR_Integer) 2:
#line 816 "measurements.m"
                  {
#line 816 "measurements.m"
                    MR_Word measurements__CostB_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__B_7, (MR_Integer) 0)));
#line 816 "measurements.m"
                    MR_Float measurements__V_14_14;
#line 816 "measurements.m"
                    MR_Float measurements__V_15_15;
#line 816 "measurements.m"
                    MR_Integer measurements__V_16_16;
#line 816 "measurements.m"
                    MR_Word measurements__Cost_23;
#line 816 "measurements.m"
                    MR_Float measurements__Sum_30;
#line 816 "measurements.m"
                    MR_Float measurements__CostTotalA_31;
#line 816 "measurements.m"
                    MR_Float measurements__CostTotalB_32;

#line 816 "measurements.m"
                    measurements__CallsB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__B_7, (MR_Integer) 1)));
#line 817 "measurements.m"
                    {
#line 817 "measurements.m"
                      measurements__V_14_14 = mercury__float__float_1_f_0(measurements__CallsA_9);
                    }
#line 817 "measurements.m"
                    {
#line 817 "measurements.m"
                      measurements__V_15_15 = mercury__float__float_1_f_0(measurements__CallsB_10);
                    }
#line 867 "measurements.m"
                    if (((MR_tag((MR_Word) measurements__CostA_12)) == (MR_mktag((MR_Integer) 0))))
#line 868 "measurements.m"
                      {
#line 868 "measurements.m"
                        MR_Float measurements__PC_36 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CostA_12, (MR_Integer) 0)));

#line 868 "measurements.m"
                        measurements__CostTotalA_31 = (measurements__V_14_14 * measurements__PC_36);
#line 868 "measurements.m"
                      }
#line 867 "measurements.m"
                    else
#line 867 "measurements.m"
                      measurements__CostTotalA_31 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__CostA_12, (MR_Integer) 0)));
#line 867 "measurements.m"
                    if (((MR_tag((MR_Word) measurements__CostB_13)) == (MR_mktag((MR_Integer) 0))))
#line 868 "measurements.m"
                      {
#line 868 "measurements.m"
                        MR_Float measurements__PC_40 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CostB_13, (MR_Integer) 0)));

#line 868 "measurements.m"
                        measurements__CostTotalB_32 = (measurements__V_15_15 * measurements__PC_40);
#line 868 "measurements.m"
                      }
#line 867 "measurements.m"
                    else
#line 867 "measurements.m"
                      measurements__CostTotalB_32 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__CostB_13, (MR_Integer) 0)));
#line 894 "measurements.m"
                    measurements__Sum_30 = (measurements__CostTotalA_31 + measurements__CostTotalB_32);
#line 893 "measurements.m"
                    {
#line 893 "measurements.m"
                      measurements__Cost_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 893 "measurements.m"
                      MR_hl_field(MR_mktag(1), measurements__Cost_23, 0) = MR_box_float(measurements__Sum_30);
#line 893 "measurements.m"
                    }
#line 818 "measurements.m"
                    measurements__V_16_16 = (measurements__CallsA_9 + measurements__CallsB_10);
#line 818 "measurements.m"
                    {
#line 818 "measurements.m"
                      measurements__R_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__R_8, 0) = ((MR_Box) (measurements__Cost_23));
#line 818 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__R_8, 1) = ((MR_Box) (measurements__V_16_16));
#line 818 "measurements.m"
                    }
#line 816 "measurements.m"
                  }
#line 812 "measurements.m"
                  break;
#line 812 "measurements.m"
              }
#line 807 "measurements.m"
            }
#line 793 "measurements.m"
            break;
#line 793 "measurements.m"
        }
#line 827 "measurements.m"
        measurements__Calls_44 = (measurements__CallsA_9 + measurements__CallsB_10);
#line 828 "measurements.m"
        measurements__succeeded = (measurements__Calls_44 == measurements__TotalCalls_5);
#line 830 "measurements.m"
        if (measurements__succeeded)
#line 829 "measurements.m"
          {
#line 829 "measurements.m"
          }
#line 830 "measurements.m"
        else
#line 831 "measurements.m"
          {
#line 831 "measurements.m"
            {
#line 831 "measurements.m"
              mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "predicate \140measurements.check_total_calls\'/3", (MR_String) "TotalCalls \\= CallsA + CallsB");
            }
#line 831 "measurements.m"
          }
#line 820 "measurements.m"
      }
#line 779 "measurements.m"
    return measurements__R_8;
#line 779 "measurements.m"
  }
#line 183 "measurements.m"
}

#line 176 "measurements.m"
MR_Word MR_CALL 
measurements__add_goal_costs_seq_2_f_0(
#line 176 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 176 "measurements.m"
  MR_Word measurements__HeadVar__2_2)
#line 176 "measurements.m"
{
#line 748 "measurements.m"
  {
#line 748 "measurements.m"
    MR_bool measurements__succeeded;
#line 748 "measurements.m"
    MR_Word measurements__HeadVar__3_3;

#line 748 "measurements.m"
#line 748 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 748 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 748 "measurements.m"
      case (MR_Integer) 0:
#line 748 "measurements.m"
#line 748 "measurements.m"
        switch (MR_tag((MR_Word) measurements__HeadVar__2_2)) {
#line 748 "measurements.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 748 "measurements.m"
          case (MR_Integer) 0:
#line 748 "measurements.m"
            measurements__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 748 "measurements.m"
            break;
#line 748 "measurements.m"
          case (MR_Integer) 1:
#line 749 "measurements.m"
            measurements__HeadVar__3_3 = measurements__HeadVar__2_2;
#line 748 "measurements.m"
            break;
#line 748 "measurements.m"
          case (MR_Integer) 2:
#line 750 "measurements.m"
            measurements__HeadVar__3_3 = measurements__HeadVar__2_2;
#line 748 "measurements.m"
            break;
#line 748 "measurements.m"
        }
#line 748 "measurements.m"
        break;
#line 748 "measurements.m"
      case (MR_Integer) 1:
#line 748 "measurements.m"
        {
#line 748 "measurements.m"
          MR_Integer measurements__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));

#line 748 "measurements.m"
#line 748 "measurements.m"
          switch (MR_tag((MR_Word) measurements__HeadVar__2_2)) {
#line 748 "measurements.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 748 "measurements.m"
            case (MR_Integer) 0:
#line 751 "measurements.m"
              measurements__HeadVar__3_3 = measurements__HeadVar__1_1;
#line 748 "measurements.m"
              break;
#line 748 "measurements.m"
            case (MR_Integer) 1:
#line 753 "measurements.m"
              measurements__HeadVar__3_3 = measurements__HeadVar__1_1;
#line 748 "measurements.m"
              break;
#line 748 "measurements.m"
            case (MR_Integer) 2:
#line 755 "measurements.m"
              {
#line 755 "measurements.m"
                MR_Word measurements__CostB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 755 "measurements.m"
                MR_Integer measurements__CallsB_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 755 "measurements.m"
                MR_Word measurements__Cost_16;
#line 755 "measurements.m"
                MR_Float measurements__CostTotal_17;
#line 755 "measurements.m"
                MR_Float measurements__V_18_18;

#line 756 "measurements.m"
                {
#line 756 "measurements.m"
                  measurements__V_18_18 = mercury__float__float_1_f_0(measurements__CallsB_15);
                }
#line 867 "measurements.m"
                if (((MR_tag((MR_Word) measurements__CostB_14)) == (MR_mktag((MR_Integer) 0))))
#line 868 "measurements.m"
                  {
#line 868 "measurements.m"
                    MR_Float measurements__PC_54 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CostB_14, (MR_Integer) 0)));

#line 868 "measurements.m"
                    measurements__CostTotal_17 = (measurements__V_18_18 * measurements__PC_54);
#line 868 "measurements.m"
                  }
#line 867 "measurements.m"
                else
#line 867 "measurements.m"
                  measurements__CostTotal_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__CostB_14, (MR_Integer) 0)));
#line 757 "measurements.m"
                {
#line 757 "measurements.m"
                  measurements__Cost_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 757 "measurements.m"
                  MR_hl_field(MR_mktag(1), measurements__Cost_16, 0) = MR_box_float(measurements__CostTotal_17);
#line 757 "measurements.m"
                }
#line 755 "measurements.m"
                {
#line 755 "measurements.m"
                  measurements__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 755 "measurements.m"
                  MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 0) = ((MR_Box) (measurements__Cost_16));
#line 755 "measurements.m"
                  MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__V_42_42));
#line 755 "measurements.m"
                }
#line 755 "measurements.m"
              }
#line 748 "measurements.m"
              break;
#line 748 "measurements.m"
          }
#line 748 "measurements.m"
        }
#line 748 "measurements.m"
        break;
#line 748 "measurements.m"
      case (MR_Integer) 2:
#line 748 "measurements.m"
        {
#line 748 "measurements.m"
          MR_Integer measurements__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 748 "measurements.m"
          MR_Word measurements__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));

#line 748 "measurements.m"
#line 748 "measurements.m"
          switch (MR_tag((MR_Word) measurements__HeadVar__2_2)) {
#line 748 "measurements.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 748 "measurements.m"
            case (MR_Integer) 0:
#line 758 "measurements.m"
              measurements__HeadVar__3_3 = measurements__HeadVar__1_1;
#line 748 "measurements.m"
              break;
#line 748 "measurements.m"
            case (MR_Integer) 1:
#line 759 "measurements.m"
              measurements__HeadVar__3_3 = measurements__HeadVar__1_1;
#line 748 "measurements.m"
              break;
#line 748 "measurements.m"
            case (MR_Integer) 2:
#line 762 "measurements.m"
              {
#line 762 "measurements.m"
                MR_Word measurements__CostB_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 0)));
#line 762 "measurements.m"
                MR_Integer measurements__CallsB_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, (MR_Integer) 1)));
#line 762 "measurements.m"
                MR_Word measurements__Cost_30;
#line 762 "measurements.m"
                MR_Float measurements__CostTotal_32;
#line 762 "measurements.m"
                MR_Float measurements__V_33_33;
#line 762 "measurements.m"
                MR_Float measurements__V_34_34;
#line 762 "measurements.m"
                MR_Float measurements__V_35_35;
#line 762 "measurements.m"
                MR_Float measurements__V_36_36;

#line 764 "measurements.m"
                {
#line 764 "measurements.m"
                  measurements__V_34_34 = mercury__float__float_1_f_0(measurements__V_40_40);
                }
#line 867 "measurements.m"
                if (((MR_tag((MR_Word) measurements__V_41_41)) == (MR_mktag((MR_Integer) 0))))
#line 868 "measurements.m"
                  {
#line 868 "measurements.m"
                    MR_Float measurements__PC_46 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__V_41_41, (MR_Integer) 0)));

#line 868 "measurements.m"
                    measurements__V_33_33 = (measurements__V_34_34 * measurements__PC_46);
#line 868 "measurements.m"
                  }
#line 867 "measurements.m"
                else
#line 867 "measurements.m"
                  measurements__V_33_33 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__V_41_41, (MR_Integer) 0)));
#line 765 "measurements.m"
                {
#line 765 "measurements.m"
                  measurements__V_36_36 = mercury__float__float_1_f_0(measurements__CallsB_29);
                }
#line 867 "measurements.m"
                if (((MR_tag((MR_Word) measurements__CostB_28)) == (MR_mktag((MR_Integer) 0))))
#line 868 "measurements.m"
                  {
#line 868 "measurements.m"
                    MR_Float measurements__PC_50 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CostB_28, (MR_Integer) 0)));

#line 868 "measurements.m"
                    measurements__V_35_35 = (measurements__V_36_36 * measurements__PC_50);
#line 868 "measurements.m"
                  }
#line 867 "measurements.m"
                else
#line 867 "measurements.m"
                  measurements__V_35_35 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__CostB_28, (MR_Integer) 0)));
#line 764 "measurements.m"
                measurements__CostTotal_32 = (measurements__V_33_33 + measurements__V_35_35);
#line 766 "measurements.m"
                {
#line 766 "measurements.m"
                  measurements__Cost_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 766 "measurements.m"
                  MR_hl_field(MR_mktag(1), measurements__Cost_30, 0) = MR_box_float(measurements__CostTotal_32);
#line 766 "measurements.m"
                }
#line 762 "measurements.m"
                {
#line 762 "measurements.m"
                  measurements__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "measurements.m"
                  MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 0) = ((MR_Box) (measurements__Cost_30));
#line 762 "measurements.m"
                  MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__V_40_40));
#line 762 "measurements.m"
                }
#line 768 "measurements.m"
                measurements__succeeded = (measurements__V_40_40 == (MR_Integer) 0);
#line 768 "measurements.m"
                if (measurements__succeeded)
#line 768 "measurements.m"
                  {
#line 769 "measurements.m"
                    measurements__succeeded = (measurements__CostTotal_32 == ((MR_Float) 0.0000000000000000));
#line 769 "measurements.m"
                    measurements__succeeded = !(measurements__succeeded);
#line 768 "measurements.m"
                  }
#line 772 "measurements.m"
                if (measurements__succeeded)
#line 771 "measurements.m"
                  {
#line 771 "measurements.m"
                    {
#line 771 "measurements.m"
                      mercury__require__unexpected_3_p_0((MR_String) "measurements", (MR_String) "function \140measurements.add_goal_costs_seq\'/2", (MR_String) "Calls = 0, Cost \\= 0");
                    }
#line 771 "measurements.m"
                  }
#line 772 "measurements.m"
                else
#line 773 "measurements.m"
                  {
#line 773 "measurements.m"
                  }
#line 762 "measurements.m"
              }
#line 748 "measurements.m"
              break;
#line 748 "measurements.m"
          }
#line 748 "measurements.m"
        }
#line 748 "measurements.m"
        break;
#line 748 "measurements.m"
    }
#line 748 "measurements.m"
    return measurements__HeadVar__3_3;
#line 748 "measurements.m"
  }
#line 176 "measurements.m"
}

#line 168 "measurements.m"
MR_Word MR_CALL 
measurements__call_goal_cost_1_f_0(
#line 168 "measurements.m"
  MR_Word measurements__CSCost_3)
#line 168 "measurements.m"
{
#line 744 "measurements.m"
  {
#line 744 "measurements.m"
    MR_bool measurements__succeeded;
#line 744 "measurements.m"
    MR_Word measurements__HeadVar__2_2;
#line 744 "measurements.m"
    MR_Word measurements__Cost_4;
#line 744 "measurements.m"
    MR_Integer measurements__Calls_5;
#line 744 "measurements.m"
    MR_Float measurements__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CSCost_3, (MR_Integer) 0)));
#line 708 "measurements.m"
    MR_Word measurements__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__CSCost_3, (MR_Integer) 1)));
#line 746 "measurements.m"
    MR_Float measurements__V_7_7;

#line 745 "measurements.m"
    {
#line 745 "measurements.m"
      measurements__Calls_5 = mercury__float__round_to_int_1_f_0(measurements__V_6_6);
    }
#line 746 "measurements.m"
    measurements__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CSCost_3, (MR_Integer) 0)));
#line 746 "measurements.m"
    measurements__Cost_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__CSCost_3, (MR_Integer) 1)));
#line 744 "measurements.m"
    {
#line 744 "measurements.m"
      measurements__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "measurements.m"
      MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, 0) = ((MR_Box) (measurements__Cost_4));
#line 744 "measurements.m"
      MR_hl_field(MR_mktag(2), measurements__HeadVar__2_2, 1) = ((MR_Box) (measurements__Calls_5));
#line 744 "measurements.m"
    }
#line 744 "measurements.m"
    return measurements__HeadVar__2_2;
#line 744 "measurements.m"
  }
#line 168 "measurements.m"
}

#line 166 "measurements.m"
MR_Word MR_CALL 
measurements__call_goal_cost_2_f_0(
#line 166 "measurements.m"
  MR_Integer measurements__Calls_4,
#line 166 "measurements.m"
  MR_Float measurements__PercallCost_5)
#line 166 "measurements.m"
{
#line 741 "measurements.m"
  {
#line 741 "measurements.m"
    MR_bool measurements__succeeded;
#line 741 "measurements.m"
    MR_Word measurements__HeadVar__3_3;
#line 741 "measurements.m"
    MR_Word measurements__Cost_6;

#line 742 "measurements.m"
    {
#line 742 "measurements.m"
      measurements__Cost_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 742 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__Cost_6, 0) = MR_box_float(measurements__PercallCost_5);
#line 742 "measurements.m"
    }
#line 741 "measurements.m"
    {
#line 741 "measurements.m"
      measurements__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "measurements.m"
      MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 0) = ((MR_Box) (measurements__Cost_6));
#line 741 "measurements.m"
      MR_hl_field(MR_mktag(2), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__Calls_4));
#line 741 "measurements.m"
    }
#line 741 "measurements.m"
    return measurements__HeadVar__3_3;
#line 741 "measurements.m"
  }
#line 166 "measurements.m"
}

#line 162 "measurements.m"
MR_Word MR_CALL 
measurements__dead_goal_cost_0_f_0(void)
#line 162 "measurements.m"
{
#line 739 "measurements.m"
  {
#line 739 "measurements.m"
    MR_bool measurements__succeeded;

#line 739 "measurements.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 739 "measurements.m"
  }
#line 162 "measurements.m"
}

#line 156 "measurements.m"
MR_Word MR_CALL 
measurements__atomic_goal_cost_1_f_0(
#line 156 "measurements.m"
  MR_Integer measurements__Calls_3)
#line 156 "measurements.m"
{
#line 737 "measurements.m"
  {
#line 737 "measurements.m"
    MR_bool measurements__succeeded;
#line 737 "measurements.m"
    MR_Word measurements__HeadVar__2_2;

#line 737 "measurements.m"
    {
#line 737 "measurements.m"
      measurements__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 737 "measurements.m"
      MR_hl_field(MR_mktag(1), measurements__HeadVar__2_2, 0) = ((MR_Box) (measurements__Calls_3));
#line 737 "measurements.m"
    }
#line 737 "measurements.m"
    return measurements__HeadVar__2_2;
#line 737 "measurements.m"
  }
#line 156 "measurements.m"
}

#line 144 "measurements.m"
MR_Word MR_CALL 
measurements__cs_cost_per_proc_call_2_f_0(
#line 144 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 144 "measurements.m"
  MR_Word measurements__ParentCost_6)
#line 144 "measurements.m"
{
#line 720 "measurements.m"
  {
#line 720 "measurements.m"
    MR_bool measurements__succeeded;
#line 720 "measurements.m"
    MR_Word measurements__HeadVar__3_3;
#line 720 "measurements.m"
    MR_Float measurements__CSCalls0_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 720 "measurements.m"
    MR_Word measurements__CSCost0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 720 "measurements.m"
    MR_Float measurements__CSCalls_7;
#line 720 "measurements.m"
    MR_Word measurements__CSCost_8;
#line 720 "measurements.m"
    MR_Integer measurements__TotalParentCalls_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__ParentCost_6, (MR_Integer) 0)));
#line 720 "measurements.m"
    MR_Float measurements__V_10_10;
#line 684 "measurements.m"
    MR_Integer measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__ParentCost_6, (MR_Integer) 1)));
#line 684 "measurements.m"
    MR_Word measurements__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__ParentCost_6, (MR_Integer) 2)));

#line 722 "measurements.m"
    {
#line 722 "measurements.m"
      measurements__V_10_10 = mercury__float__float_1_f_0(measurements__TotalParentCalls_9);
    }
#line 722 "measurements.m"
    {
#line 722 "measurements.m"
      measurements__CSCalls_7 = mercury__float__f_slash_2_f_0(measurements__CSCalls0_4, measurements__V_10_10);
    }
#line 879 "measurements.m"
    if (((MR_tag((MR_Word) measurements__CSCost0_5)) == (MR_mktag((MR_Integer) 0))))
#line 882 "measurements.m"
      {
#line 882 "measurements.m"
        MR_Float measurements__Percall_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CSCost0_5, (MR_Integer) 0)));
#line 882 "measurements.m"
        MR_Float measurements__V_19_19;
#line 882 "measurements.m"
        MR_Float measurements__V_20_20;

#line 883 "measurements.m"
        {
#line 883 "measurements.m"
          measurements__V_20_20 = mercury__float__float_1_f_0(measurements__TotalParentCalls_9);
        }
#line 883 "measurements.m"
        {
#line 883 "measurements.m"
          measurements__V_19_19 = mercury__float__f_slash_2_f_0(measurements__Percall_18, measurements__V_20_20);
        }
#line 883 "measurements.m"
        {
#line 883 "measurements.m"
          measurements__CSCost_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 883 "measurements.m"
          MR_hl_field(MR_mktag(0), measurements__CSCost_8, 0) = MR_box_float(measurements__V_19_19);
#line 883 "measurements.m"
        }
#line 882 "measurements.m"
      }
#line 879 "measurements.m"
    else
#line 879 "measurements.m"
      {
#line 879 "measurements.m"
        MR_Float measurements__Total_17 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__CSCost0_5, (MR_Integer) 0)));
#line 879 "measurements.m"
        MR_Float measurements__V_21_21;
#line 879 "measurements.m"
        MR_Float measurements__V_22_22;

#line 880 "measurements.m"
        {
#line 880 "measurements.m"
          measurements__V_22_22 = mercury__float__float_1_f_0(measurements__TotalParentCalls_9);
        }
#line 880 "measurements.m"
        {
#line 880 "measurements.m"
          measurements__V_21_21 = mercury__float__f_slash_2_f_0(measurements__Total_17, measurements__V_22_22);
        }
#line 880 "measurements.m"
        {
#line 880 "measurements.m"
          measurements__CSCost_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 880 "measurements.m"
          MR_hl_field(MR_mktag(1), measurements__CSCost_8, 0) = MR_box_float(measurements__V_21_21);
#line 880 "measurements.m"
        }
#line 879 "measurements.m"
      }
#line 720 "measurements.m"
    {
#line 720 "measurements.m"
      measurements__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 720 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, 0) = MR_box_float(measurements__CSCalls_7);
#line 720 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__CSCost_8));
#line 720 "measurements.m"
    }
#line 720 "measurements.m"
    return measurements__HeadVar__3_3;
#line 720 "measurements.m"
  }
#line 144 "measurements.m"
}

#line 141 "measurements.m"
void MR_CALL 
measurements__cs_cost_to_proc_cost_3_p_0(
#line 141 "measurements.m"
  MR_Word measurements__HeadVar__1_1,
#line 141 "measurements.m"
  MR_Integer measurements__TotalCalls_6,
#line 141 "measurements.m"
  MR_Word * measurements__HeadVar__3_3)
#line 141 "measurements.m"
{
#line 713 "measurements.m"
  {
#line 713 "measurements.m"
    MR_bool measurements__succeeded;
#line 713 "measurements.m"
    MR_Float measurements__CSCalls_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 713 "measurements.m"
    MR_Word measurements__CSCost_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 713 "measurements.m"
    MR_Integer measurements__NRCalls_7;
#line 713 "measurements.m"
    MR_Integer measurements__RCalls_8;
#line 713 "measurements.m"
    MR_Word measurements__PCost_9;
#line 713 "measurements.m"
    MR_Integer measurements__V_10_10;
#line 713 "measurements.m"
    MR_Float measurements__V_11_11;
#line 713 "measurements.m"
    MR_Float measurements__V_12_12;
#line 713 "measurements.m"
    MR_Float measurements__V_13_13;

#line 714 "measurements.m"
    {
#line 714 "measurements.m"
      measurements__NRCalls_7 = mercury__float__round_to_int_1_f_0(measurements__CSCalls_4);
    }
#line 715 "measurements.m"
    {
#line 715 "measurements.m"
      measurements__V_10_10 = mercury__float__round_to_int_1_f_0(measurements__CSCalls_4);
    }
#line 715 "measurements.m"
    measurements__RCalls_8 = (measurements__TotalCalls_6 - measurements__V_10_10);
#line 867 "measurements.m"
    if (((MR_tag((MR_Word) measurements__CSCost_5)) == (MR_mktag((MR_Integer) 0))))
#line 868 "measurements.m"
      {
#line 868 "measurements.m"
        MR_Float measurements__PC_18 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__CSCost_5, (MR_Integer) 0)));

#line 868 "measurements.m"
        measurements__V_12_12 = (measurements__CSCalls_4 * measurements__PC_18);
#line 868 "measurements.m"
      }
#line 867 "measurements.m"
    else
#line 867 "measurements.m"
      measurements__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__CSCost_5, (MR_Integer) 0)));
#line 717 "measurements.m"
    measurements__V_13_13 = (((MR_Float) 1.0000000000000000) * measurements__CSCalls_4);
#line 717 "measurements.m"
    measurements__V_11_11 = (measurements__V_12_12 - measurements__V_13_13);
#line 717 "measurements.m"
    {
#line 717 "measurements.m"
      measurements__PCost_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 717 "measurements.m"
      MR_hl_field(MR_mktag(1), measurements__PCost_9, 0) = MR_box_float(measurements__V_11_11);
#line 717 "measurements.m"
    }
#line 713 "measurements.m"
    {
#line 713 "measurements.m"
      MR_Word base;
#line 713 "measurements.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 713 "measurements.m"
      *measurements__HeadVar__3_3 = base;
#line 713 "measurements.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (measurements__NRCalls_7));
#line 713 "measurements.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (measurements__RCalls_8));
#line 713 "measurements.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (measurements__PCost_9));
#line 713 "measurements.m"
    }
#line 713 "measurements.m"
  }
#line 141 "measurements.m"
}

#line 137 "measurements.m"
MR_Float MR_CALL 
measurements__cs_cost_get_calls_1_f_0(
#line 137 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 137 "measurements.m"
{
#line 708 "measurements.m"
  {
#line 708 "measurements.m"
    MR_bool measurements__succeeded;
#line 708 "measurements.m"
    MR_Float measurements__Calls_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 708 "measurements.m"
    MR_Word measurements__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));

#line 708 "measurements.m"
    return measurements__Calls_3;
#line 708 "measurements.m"
  }
#line 137 "measurements.m"
}

#line 133 "measurements.m"
MR_Float MR_CALL 
measurements__cs_cost_get_percall_1_f_0(
#line 133 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 133 "measurements.m"
{
#line 705 "measurements.m"
  {
#line 705 "measurements.m"
    MR_bool measurements__succeeded;
#line 705 "measurements.m"
    MR_Float measurements__HeadVar__2_2;
#line 705 "measurements.m"
    MR_Float measurements__Calls_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 705 "measurements.m"
    MR_Word measurements__Cost_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));

#line 872 "measurements.m"
    if (((MR_tag((MR_Word) measurements__Cost_4)) == (MR_mktag((MR_Integer) 0))))
#line 873 "measurements.m"
      measurements__HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Cost_4, (MR_Integer) 0)));
#line 872 "measurements.m"
    else
#line 872 "measurements.m"
      {
#line 872 "measurements.m"
        MR_Float measurements__Total_6 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Cost_4, (MR_Integer) 0)));

#line 872 "measurements.m"
        {
#line 872 "measurements.m"
          return measurements__HeadVar__2_2 = mercury__float__f_slash_2_f_0(measurements__Total_6, measurements__Calls_3);
        }
#line 872 "measurements.m"
      }
#line 705 "measurements.m"
    return measurements__HeadVar__2_2;
#line 705 "measurements.m"
  }
#line 133 "measurements.m"
}

#line 128 "measurements.m"
MR_Float MR_CALL 
measurements__cs_cost_get_total_1_f_0(
#line 128 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 128 "measurements.m"
{
#line 702 "measurements.m"
  {
#line 702 "measurements.m"
    MR_bool measurements__succeeded;
#line 702 "measurements.m"
    MR_Float measurements__HeadVar__2_2;
#line 702 "measurements.m"
    MR_Float measurements__Calls_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 702 "measurements.m"
    MR_Word measurements__Cost_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));

#line 867 "measurements.m"
    if (((MR_tag((MR_Word) measurements__Cost_4)) == (MR_mktag((MR_Integer) 0))))
#line 868 "measurements.m"
      {
#line 868 "measurements.m"
        MR_Float measurements__PC_8 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Cost_4, (MR_Integer) 0)));

#line 868 "measurements.m"
        measurements__HeadVar__2_2 = (measurements__Calls_3 * measurements__PC_8);
#line 868 "measurements.m"
      }
#line 867 "measurements.m"
    else
#line 867 "measurements.m"
      measurements__HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Cost_4, (MR_Integer) 0)));
#line 702 "measurements.m"
    return measurements__HeadVar__2_2;
#line 702 "measurements.m"
  }
#line 128 "measurements.m"
}

#line 124 "measurements.m"
MR_Integer MR_CALL 
measurements__proc_cost_get_calls_rec_1_f_0(
#line 124 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 124 "measurements.m"
{
#line 686 "measurements.m"
  {
#line 686 "measurements.m"
    MR_bool measurements__succeeded;
#line 686 "measurements.m"
    MR_Integer measurements__RCalls_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 686 "measurements.m"
    MR_Integer measurements__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 686 "measurements.m"
    MR_Word measurements__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));

#line 686 "measurements.m"
    return measurements__RCalls_4;
#line 686 "measurements.m"
  }
#line 124 "measurements.m"
}

#line 123 "measurements.m"
MR_Integer MR_CALL 
measurements__proc_cost_get_calls_nonrec_1_f_0(
#line 123 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 123 "measurements.m"
{
#line 684 "measurements.m"
  {
#line 684 "measurements.m"
    MR_bool measurements__succeeded;
#line 684 "measurements.m"
    MR_Integer measurements__NRCalls_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 684 "measurements.m"
    MR_Integer measurements__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 684 "measurements.m"
    MR_Word measurements__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));

#line 684 "measurements.m"
    return measurements__NRCalls_3;
#line 684 "measurements.m"
  }
#line 123 "measurements.m"
}

#line 122 "measurements.m"
MR_Integer MR_CALL 
measurements__proc_cost_get_calls_total_1_f_0(
#line 122 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 122 "measurements.m"
{
#line 681 "measurements.m"
  {
#line 681 "measurements.m"
    MR_bool measurements__succeeded;
#line 681 "measurements.m"
    MR_Integer measurements__HeadVar__2_2;
#line 681 "measurements.m"
    MR_Integer measurements__NRCalls_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 681 "measurements.m"
    MR_Integer measurements__RCalls_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 681 "measurements.m"
    MR_Word measurements__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));

#line 682 "measurements.m"
    measurements__HeadVar__2_2 = (measurements__NRCalls_3 + measurements__RCalls_4);
#line 681 "measurements.m"
    return measurements__HeadVar__2_2;
#line 681 "measurements.m"
  }
#line 122 "measurements.m"
}

#line 118 "measurements.m"
MR_Float MR_CALL 
measurements__proc_cost_get_total_1_f_0(
#line 118 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 118 "measurements.m"
{
#line 678 "measurements.m"
  {
#line 678 "measurements.m"
    MR_bool measurements__succeeded;
#line 678 "measurements.m"
    MR_Float measurements__HeadVar__2_2;
#line 678 "measurements.m"
    MR_Integer measurements__NRCalls_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 678 "measurements.m"
    MR_Integer measurements__RCalls_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 678 "measurements.m"
    MR_Word measurements__Cost_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 678 "measurements.m"
    MR_Float measurements__V_6_6;
#line 678 "measurements.m"
    MR_Integer measurements__V_7_7 = (measurements__NRCalls_3 + measurements__RCalls_4);

#line 679 "measurements.m"
    {
#line 679 "measurements.m"
      measurements__V_6_6 = mercury__float__float_1_f_0(measurements__V_7_7);
    }
#line 867 "measurements.m"
    if (((MR_tag((MR_Word) measurements__Cost_5)) == (MR_mktag((MR_Integer) 0))))
#line 868 "measurements.m"
      {
#line 868 "measurements.m"
        MR_Float measurements__PC_11 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurements__Cost_5, (MR_Integer) 0)));

#line 868 "measurements.m"
        measurements__HeadVar__2_2 = (measurements__V_6_6 * measurements__PC_11);
#line 868 "measurements.m"
      }
#line 867 "measurements.m"
    else
#line 867 "measurements.m"
      measurements__HeadVar__2_2 = MR_unbox_float((MR_hl_field(MR_mktag(1), measurements__Cost_5, (MR_Integer) 0)));
#line 678 "measurements.m"
    return measurements__HeadVar__2_2;
#line 678 "measurements.m"
  }
#line 118 "measurements.m"
}

#line 114 "measurements.m"
MR_Word MR_CALL 
measurements__zero_cs_cost_0_f_0(void)
#line 114 "measurements.m"
{
#line 696 "measurements.m"
  {
#line 696 "measurements.m"
    MR_bool measurements__succeeded;

#line 696 "measurements.m"
    return (MR_Word) &measurements_scalar_common_1[3];
#line 696 "measurements.m"
  }
#line 114 "measurements.m"
}

#line 110 "measurements.m"
MR_Word MR_CALL 
measurements__build_cs_cost_csq_percall_2_f_0(
#line 110 "measurements.m"
  MR_Float measurements__Calls_4,
#line 110 "measurements.m"
  MR_Float measurements__PercallCost_5)
#line 110 "measurements.m"
{
#line 693 "measurements.m"
  {
#line 693 "measurements.m"
    MR_bool measurements__succeeded;
#line 693 "measurements.m"
    MR_Word measurements__HeadVar__3_3;
#line 693 "measurements.m"
    MR_Word measurements__V_6_6;

#line 694 "measurements.m"
    {
#line 694 "measurements.m"
      measurements__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 694 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__V_6_6, 0) = MR_box_float(measurements__PercallCost_5);
#line 694 "measurements.m"
    }
#line 694 "measurements.m"
    {
#line 694 "measurements.m"
      measurements__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 694 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, 0) = MR_box_float(measurements__Calls_4);
#line 694 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__V_6_6));
#line 694 "measurements.m"
    }
#line 693 "measurements.m"
    return measurements__HeadVar__3_3;
#line 693 "measurements.m"
  }
#line 110 "measurements.m"
}

#line 106 "measurements.m"
MR_Word MR_CALL 
measurements__build_cs_cost_csq_2_f_0(
#line 106 "measurements.m"
  MR_Integer measurements__Calls_4,
#line 106 "measurements.m"
  MR_Float measurements__TotalCost_5)
#line 106 "measurements.m"
{
#line 690 "measurements.m"
  {
#line 690 "measurements.m"
    MR_bool measurements__succeeded;
#line 690 "measurements.m"
    MR_Word measurements__HeadVar__3_3;
#line 690 "measurements.m"
    MR_Float measurements__V_6_6;
#line 690 "measurements.m"
    MR_Word measurements__V_7_7;

#line 691 "measurements.m"
    {
#line 691 "measurements.m"
      measurements__V_6_6 = mercury__float__float_1_f_0(measurements__Calls_4);
    }
#line 691 "measurements.m"
    {
#line 691 "measurements.m"
      measurements__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 691 "measurements.m"
      MR_hl_field(MR_mktag(1), measurements__V_7_7, 0) = MR_box_float(measurements__TotalCost_5);
#line 691 "measurements.m"
    }
#line 691 "measurements.m"
    {
#line 691 "measurements.m"
      measurements__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 691 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, 0) = MR_box_float(measurements__V_6_6);
#line 691 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__3_3, 1) = ((MR_Box) (measurements__V_7_7));
#line 691 "measurements.m"
    }
#line 690 "measurements.m"
    return measurements__HeadVar__3_3;
#line 690 "measurements.m"
  }
#line 106 "measurements.m"
}

#line 102 "measurements.m"
MR_Word MR_CALL 
measurements__build_proc_cost_csq_3_f_0(
#line 102 "measurements.m"
  MR_Integer measurements__NonRecursiveCalls_5,
#line 102 "measurements.m"
  MR_Integer measurements__RecursiveCalls_6,
#line 102 "measurements.m"
  MR_Integer measurements__TotalCost_7)
#line 102 "measurements.m"
{
#line 674 "measurements.m"
  {
#line 674 "measurements.m"
    MR_bool measurements__succeeded;
#line 674 "measurements.m"
    MR_Word measurements__HeadVar__4_4;
#line 674 "measurements.m"
    MR_Word measurements__V_8_8;
#line 674 "measurements.m"
    MR_Float measurements__V_9_9;

#line 676 "measurements.m"
    {
#line 676 "measurements.m"
      measurements__V_9_9 = mercury__float__float_1_f_0(measurements__TotalCost_7);
    }
#line 676 "measurements.m"
    {
#line 676 "measurements.m"
      measurements__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 676 "measurements.m"
      MR_hl_field(MR_mktag(1), measurements__V_8_8, 0) = MR_box_float(measurements__V_9_9);
#line 676 "measurements.m"
    }
#line 675 "measurements.m"
    {
#line 675 "measurements.m"
      measurements__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 675 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__4_4, 0) = ((MR_Box) (measurements__NonRecursiveCalls_5));
#line 675 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__4_4, 1) = ((MR_Box) (measurements__RecursiveCalls_6));
#line 675 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__HeadVar__4_4, 2) = ((MR_Box) (measurements__V_8_8));
#line 675 "measurements.m"
    }
#line 674 "measurements.m"
    return measurements__HeadVar__4_4;
#line 674 "measurements.m"
  }
#line 102 "measurements.m"
}

#line 88 "measurements.m"
MR_Word MR_CALL 
measurements__compute_is_active_1_f_0(
#line 88 "measurements.m"
  MR_Word measurements__Own_3)
#line 88 "measurements.m"
{
#line 641 "measurements.m"
  {
#line 641 "measurements.m"
    MR_bool measurements__succeeded;
#line 641 "measurements.m"
    MR_Word measurements__IsActive_4;

#line 635 "measurements.m"
#line 635 "measurements.m"
    switch (MR_tag((MR_Word) measurements__Own_3)) {
#line 635 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 635 "measurements.m"
      case (MR_Integer) 0:
#line 634 "measurements.m"
        {
#line 634 "measurements.m"
          MR_Integer measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 0)));
#line 634 "measurements.m"
          MR_Integer measurements__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 1)));
#line 634 "measurements.m"
          MR_Integer measurements__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 2)));
#line 634 "measurements.m"
          MR_Integer measurements__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 3)));
#line 634 "measurements.m"
          MR_Integer measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 4)));
#line 634 "measurements.m"
          MR_Integer measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 5)));
#line 634 "measurements.m"
          MR_Integer measurements__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 6)));
#line 634 "measurements.m"
          MR_Integer measurements__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_3, (MR_Integer) 7)));

#line 634 "measurements.m"
          measurements__succeeded = (measurements__V_21_21 == (MR_Integer) 0);
#line 634 "measurements.m"
          if (measurements__succeeded)
#line 634 "measurements.m"
            {
#line 634 "measurements.m"
              measurements__succeeded = (measurements__V_22_22 == (MR_Integer) 0);
#line 634 "measurements.m"
              if (measurements__succeeded)
#line 634 "measurements.m"
                {
#line 634 "measurements.m"
                  measurements__succeeded = (measurements__V_23_23 == (MR_Integer) 0);
#line 634 "measurements.m"
                  if (measurements__succeeded)
#line 634 "measurements.m"
                    measurements__succeeded = (measurements__V_24_24 == (MR_Integer) 0);
#line 634 "measurements.m"
                }
#line 634 "measurements.m"
            }
#line 634 "measurements.m"
        }
#line 635 "measurements.m"
        break;
#line 635 "measurements.m"
      case (MR_Integer) 1:
#line 635 "measurements.m"
        {
#line 635 "measurements.m"
          MR_Integer measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_3, (MR_Integer) 0)));
#line 635 "measurements.m"
          MR_Integer measurements__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_3, (MR_Integer) 1)));
#line 635 "measurements.m"
          MR_Integer measurements__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_3, (MR_Integer) 2)));
#line 635 "measurements.m"
          MR_Integer measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_3, (MR_Integer) 3)));
#line 635 "measurements.m"
          MR_Integer measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_3, (MR_Integer) 4)));

#line 635 "measurements.m"
          measurements__succeeded = (measurements__V_20_20 == (MR_Integer) 0);
#line 635 "measurements.m"
        }
#line 635 "measurements.m"
        break;
#line 635 "measurements.m"
      case (MR_Integer) 2:
#line 636 "measurements.m"
        {
#line 636 "measurements.m"
          MR_Integer measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_3, (MR_Integer) 0)));
#line 636 "measurements.m"
          MR_Integer measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_3, (MR_Integer) 1)));
#line 636 "measurements.m"
          MR_Integer measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_3, (MR_Integer) 2)));
#line 636 "measurements.m"
          MR_Integer measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_3, (MR_Integer) 3)));

#line 636 "measurements.m"
          measurements__succeeded = (measurements__V_19_19 == (MR_Integer) 0);
#line 636 "measurements.m"
        }
#line 635 "measurements.m"
        break;
#line 635 "measurements.m"
      case (MR_Integer) 3:
#line 637 "measurements.m"
        {
#line 637 "measurements.m"
          MR_Integer measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__Own_3, (MR_Integer) 0)));
#line 637 "measurements.m"
          MR_Integer measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__Own_3, (MR_Integer) 1)));
#line 637 "measurements.m"
          MR_Integer measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__Own_3, (MR_Integer) 2)));

#line 637 "measurements.m"
          measurements__succeeded = (measurements__V_17_17 == (MR_Integer) 0);
#line 637 "measurements.m"
          if (measurements__succeeded)
#line 637 "measurements.m"
            measurements__succeeded = (measurements__V_18_18 == (MR_Integer) 0);
#line 637 "measurements.m"
        }
#line 635 "measurements.m"
        break;
#line 635 "measurements.m"
    }
#line 641 "measurements.m"
    if (measurements__succeeded)
#line 640 "measurements.m"
      measurements__IsActive_4 = (MR_Integer) 1;
#line 641 "measurements.m"
    else
#line 642 "measurements.m"
      measurements__IsActive_4 = (MR_Integer) 0;
#line 641 "measurements.m"
    return measurements__IsActive_4;
#line 641 "measurements.m"
  }
#line 88 "measurements.m"
}

#line 78 "measurements.m"
MR_String MR_CALL 
measurements__own_to_string_1_f_0(
#line 78 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 78 "measurements.m"
{
#line 599 "measurements.m"
  {
#line 599 "measurements.m"
    MR_bool measurements__succeeded;
#line 599 "measurements.m"
    MR_String measurements__HeadVar__2_2;

#line 599 "measurements.m"
#line 599 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 599 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 599 "measurements.m"
      case (MR_Integer) 0:
#line 599 "measurements.m"
        {
#line 599 "measurements.m"
          MR_Integer measurements__Exits_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 599 "measurements.m"
          MR_Integer measurements__Fails_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 599 "measurements.m"
          MR_Integer measurements__Redos_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 599 "measurements.m"
          MR_Integer measurements__Excps_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 599 "measurements.m"
          MR_Integer measurements__Quanta_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 599 "measurements.m"
          MR_Integer measurements__CallSeqs_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 599 "measurements.m"
          MR_Integer measurements__Allocs_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
#line 599 "measurements.m"
          MR_Integer measurements__Words_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
#line 599 "measurements.m"
          MR_String measurements__V_12_12;
#line 599 "measurements.m"
          MR_String measurements__V_13_13;
#line 599 "measurements.m"
          MR_String measurements__V_14_14;
#line 599 "measurements.m"
          MR_String measurements__V_16_16;
#line 599 "measurements.m"
          MR_String measurements__V_17_17;
#line 599 "measurements.m"
          MR_String measurements__V_18_18;
#line 599 "measurements.m"
          MR_String measurements__V_20_20;
#line 599 "measurements.m"
          MR_String measurements__V_21_21;
#line 599 "measurements.m"
          MR_String measurements__V_22_22;
#line 599 "measurements.m"
          MR_String measurements__V_24_24;
#line 599 "measurements.m"
          MR_String measurements__V_25_25;
#line 599 "measurements.m"
          MR_String measurements__V_26_26;
#line 599 "measurements.m"
          MR_String measurements__V_28_28;
#line 599 "measurements.m"
          MR_String measurements__V_29_29;
#line 599 "measurements.m"
          MR_String measurements__V_30_30;
#line 599 "measurements.m"
          MR_String measurements__V_32_32;
#line 599 "measurements.m"
          MR_String measurements__V_33_33;
#line 599 "measurements.m"
          MR_String measurements__V_34_34;
#line 599 "measurements.m"
          MR_String measurements__V_36_36;
#line 599 "measurements.m"
          MR_String measurements__V_37_37;
#line 599 "measurements.m"
          MR_String measurements__V_38_38;
#line 599 "measurements.m"
          MR_String measurements__V_40_40;
#line 599 "measurements.m"
          MR_String measurements__V_41_41;

#line 601 "measurements.m"
          {
#line 601 "measurements.m"
            measurements__V_13_13 = mercury__string__int_to_string_1_f_0(measurements__Exits_3);
          }
#line 602 "measurements.m"
          {
#line 602 "measurements.m"
            measurements__V_17_17 = mercury__string__int_to_string_1_f_0(measurements__Fails_4);
          }
#line 603 "measurements.m"
          {
#line 603 "measurements.m"
            measurements__V_21_21 = mercury__string__int_to_string_1_f_0(measurements__Redos_5);
          }
#line 604 "measurements.m"
          {
#line 604 "measurements.m"
            measurements__V_25_25 = mercury__string__int_to_string_1_f_0(measurements__Excps_6);
          }
#line 605 "measurements.m"
          {
#line 605 "measurements.m"
            measurements__V_29_29 = mercury__string__int_to_string_1_f_0(measurements__Quanta_7);
          }
#line 606 "measurements.m"
          {
#line 606 "measurements.m"
            measurements__V_33_33 = mercury__string__int_to_string_1_f_0(measurements__CallSeqs_8);
          }
#line 607 "measurements.m"
          {
#line 607 "measurements.m"
            measurements__V_37_37 = mercury__string__int_to_string_1_f_0(measurements__Allocs_9);
          }
#line 608 "measurements.m"
          {
#line 608 "measurements.m"
            measurements__V_41_41 = mercury__string__int_to_string_1_f_0(measurements__Words_10);
          }
#line 608 "measurements.m"
          {
#line 608 "measurements.m"
            measurements__V_40_40 = mercury__string__f_43_43_2_f_0(measurements__V_41_41, (MR_String) ")");
          }
#line 607 "measurements.m"
          {
#line 607 "measurements.m"
            measurements__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_40_40);
          }
#line 607 "measurements.m"
          {
#line 607 "measurements.m"
            measurements__V_36_36 = mercury__string__f_43_43_2_f_0(measurements__V_37_37, measurements__V_38_38);
          }
#line 606 "measurements.m"
          {
#line 606 "measurements.m"
            measurements__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_36_36);
          }
#line 606 "measurements.m"
          {
#line 606 "measurements.m"
            measurements__V_32_32 = mercury__string__f_43_43_2_f_0(measurements__V_33_33, measurements__V_34_34);
          }
#line 605 "measurements.m"
          {
#line 605 "measurements.m"
            measurements__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_32_32);
          }
#line 605 "measurements.m"
          {
#line 605 "measurements.m"
            measurements__V_28_28 = mercury__string__f_43_43_2_f_0(measurements__V_29_29, measurements__V_30_30);
          }
#line 604 "measurements.m"
          {
#line 604 "measurements.m"
            measurements__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_28_28);
          }
#line 604 "measurements.m"
          {
#line 604 "measurements.m"
            measurements__V_24_24 = mercury__string__f_43_43_2_f_0(measurements__V_25_25, measurements__V_26_26);
          }
#line 603 "measurements.m"
          {
#line 603 "measurements.m"
            measurements__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_24_24);
          }
#line 603 "measurements.m"
          {
#line 603 "measurements.m"
            measurements__V_20_20 = mercury__string__f_43_43_2_f_0(measurements__V_21_21, measurements__V_22_22);
          }
#line 602 "measurements.m"
          {
#line 602 "measurements.m"
            measurements__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_20_20);
          }
#line 602 "measurements.m"
          {
#line 602 "measurements.m"
            measurements__V_16_16 = mercury__string__f_43_43_2_f_0(measurements__V_17_17, measurements__V_18_18);
          }
#line 601 "measurements.m"
          {
#line 601 "measurements.m"
            measurements__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_16_16);
          }
#line 601 "measurements.m"
          {
#line 601 "measurements.m"
            measurements__V_12_12 = mercury__string__f_43_43_2_f_0(measurements__V_13_13, measurements__V_14_14);
          }
#line 600 "measurements.m"
          {
#line 600 "measurements.m"
            return measurements__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "all(", measurements__V_12_12);
          }
#line 599 "measurements.m"
        }
#line 599 "measurements.m"
        break;
#line 599 "measurements.m"
      case (MR_Integer) 1:
#line 610 "measurements.m"
        {
#line 610 "measurements.m"
          MR_Integer measurements__Exits_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 610 "measurements.m"
          MR_Integer measurements__Quanta_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 610 "measurements.m"
          MR_Integer measurements__CallSeqs_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 610 "measurements.m"
          MR_Integer measurements__Allocs_46 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 610 "measurements.m"
          MR_Integer measurements__Words_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 610 "measurements.m"
          MR_String measurements__V_49_49;
#line 610 "measurements.m"
          MR_String measurements__V_50_50;
#line 610 "measurements.m"
          MR_String measurements__V_51_51;
#line 610 "measurements.m"
          MR_String measurements__V_53_53;
#line 610 "measurements.m"
          MR_String measurements__V_54_54;
#line 610 "measurements.m"
          MR_String measurements__V_55_55;
#line 610 "measurements.m"
          MR_String measurements__V_57_57;
#line 610 "measurements.m"
          MR_String measurements__V_58_58;
#line 610 "measurements.m"
          MR_String measurements__V_59_59;
#line 610 "measurements.m"
          MR_String measurements__V_61_61;
#line 610 "measurements.m"
          MR_String measurements__V_62_62;
#line 610 "measurements.m"
          MR_String measurements__V_63_63;
#line 610 "measurements.m"
          MR_String measurements__V_65_65;
#line 610 "measurements.m"
          MR_String measurements__V_66_66;

#line 612 "measurements.m"
          {
#line 612 "measurements.m"
            measurements__V_50_50 = mercury__string__int_to_string_1_f_0(measurements__Exits_43);
          }
#line 613 "measurements.m"
          {
#line 613 "measurements.m"
            measurements__V_54_54 = mercury__string__int_to_string_1_f_0(measurements__Quanta_44);
          }
#line 614 "measurements.m"
          {
#line 614 "measurements.m"
            measurements__V_58_58 = mercury__string__int_to_string_1_f_0(measurements__CallSeqs_45);
          }
#line 615 "measurements.m"
          {
#line 615 "measurements.m"
            measurements__V_62_62 = mercury__string__int_to_string_1_f_0(measurements__Allocs_46);
          }
#line 616 "measurements.m"
          {
#line 616 "measurements.m"
            measurements__V_66_66 = mercury__string__int_to_string_1_f_0(measurements__Words_47);
          }
#line 616 "measurements.m"
          {
#line 616 "measurements.m"
            measurements__V_65_65 = mercury__string__f_43_43_2_f_0(measurements__V_66_66, (MR_String) ")");
          }
#line 615 "measurements.m"
          {
#line 615 "measurements.m"
            measurements__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_65_65);
          }
#line 615 "measurements.m"
          {
#line 615 "measurements.m"
            measurements__V_61_61 = mercury__string__f_43_43_2_f_0(measurements__V_62_62, measurements__V_63_63);
          }
#line 614 "measurements.m"
          {
#line 614 "measurements.m"
            measurements__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_61_61);
          }
#line 614 "measurements.m"
          {
#line 614 "measurements.m"
            measurements__V_57_57 = mercury__string__f_43_43_2_f_0(measurements__V_58_58, measurements__V_59_59);
          }
#line 613 "measurements.m"
          {
#line 613 "measurements.m"
            measurements__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_57_57);
          }
#line 613 "measurements.m"
          {
#line 613 "measurements.m"
            measurements__V_53_53 = mercury__string__f_43_43_2_f_0(measurements__V_54_54, measurements__V_55_55);
          }
#line 612 "measurements.m"
          {
#line 612 "measurements.m"
            measurements__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_53_53);
          }
#line 612 "measurements.m"
          {
#line 612 "measurements.m"
            measurements__V_49_49 = mercury__string__f_43_43_2_f_0(measurements__V_50_50, measurements__V_51_51);
          }
#line 611 "measurements.m"
          {
#line 611 "measurements.m"
            return measurements__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "det(", measurements__V_49_49);
          }
#line 610 "measurements.m"
        }
#line 599 "measurements.m"
        break;
#line 599 "measurements.m"
      case (MR_Integer) 2:
#line 618 "measurements.m"
        {
#line 618 "measurements.m"
          MR_Integer measurements__Exits_68 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 618 "measurements.m"
          MR_Integer measurements__CallSeqs_69 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 618 "measurements.m"
          MR_Integer measurements__Allocs_70 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 618 "measurements.m"
          MR_Integer measurements__Words_71 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 618 "measurements.m"
          MR_String measurements__V_73_73;
#line 618 "measurements.m"
          MR_String measurements__V_74_74;
#line 618 "measurements.m"
          MR_String measurements__V_75_75;
#line 618 "measurements.m"
          MR_String measurements__V_77_77;
#line 618 "measurements.m"
          MR_String measurements__V_78_78;
#line 618 "measurements.m"
          MR_String measurements__V_79_79;
#line 618 "measurements.m"
          MR_String measurements__V_81_81;
#line 618 "measurements.m"
          MR_String measurements__V_82_82;
#line 618 "measurements.m"
          MR_String measurements__V_83_83;
#line 618 "measurements.m"
          MR_String measurements__V_85_85;
#line 618 "measurements.m"
          MR_String measurements__V_86_86;

#line 620 "measurements.m"
          {
#line 620 "measurements.m"
            measurements__V_74_74 = mercury__string__int_to_string_1_f_0(measurements__Exits_68);
          }
#line 621 "measurements.m"
          {
#line 621 "measurements.m"
            measurements__V_78_78 = mercury__string__int_to_string_1_f_0(measurements__CallSeqs_69);
          }
#line 622 "measurements.m"
          {
#line 622 "measurements.m"
            measurements__V_82_82 = mercury__string__int_to_string_1_f_0(measurements__Allocs_70);
          }
#line 623 "measurements.m"
          {
#line 623 "measurements.m"
            measurements__V_86_86 = mercury__string__int_to_string_1_f_0(measurements__Words_71);
          }
#line 623 "measurements.m"
          {
#line 623 "measurements.m"
            measurements__V_85_85 = mercury__string__f_43_43_2_f_0(measurements__V_86_86, (MR_String) ")");
          }
#line 622 "measurements.m"
          {
#line 622 "measurements.m"
            measurements__V_83_83 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_85_85);
          }
#line 622 "measurements.m"
          {
#line 622 "measurements.m"
            measurements__V_81_81 = mercury__string__f_43_43_2_f_0(measurements__V_82_82, measurements__V_83_83);
          }
#line 621 "measurements.m"
          {
#line 621 "measurements.m"
            measurements__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_81_81);
          }
#line 621 "measurements.m"
          {
#line 621 "measurements.m"
            measurements__V_77_77 = mercury__string__f_43_43_2_f_0(measurements__V_78_78, measurements__V_79_79);
          }
#line 620 "measurements.m"
          {
#line 620 "measurements.m"
            measurements__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_77_77);
          }
#line 620 "measurements.m"
          {
#line 620 "measurements.m"
            measurements__V_73_73 = mercury__string__f_43_43_2_f_0(measurements__V_74_74, measurements__V_75_75);
          }
#line 619 "measurements.m"
          {
#line 619 "measurements.m"
            return measurements__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "fast_det(", measurements__V_73_73);
          }
#line 618 "measurements.m"
        }
#line 599 "measurements.m"
        break;
#line 599 "measurements.m"
      case (MR_Integer) 3:
#line 625 "measurements.m"
        {
#line 625 "measurements.m"
          MR_Integer measurements__Exits_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 625 "measurements.m"
          MR_Integer measurements__Fails_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 625 "measurements.m"
          MR_Integer measurements__CallSeqs_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 625 "measurements.m"
          MR_String measurements__V_92_92;
#line 625 "measurements.m"
          MR_String measurements__V_93_93;
#line 625 "measurements.m"
          MR_String measurements__V_94_94;
#line 625 "measurements.m"
          MR_String measurements__V_96_96;
#line 625 "measurements.m"
          MR_String measurements__V_97_97;
#line 625 "measurements.m"
          MR_String measurements__V_98_98;
#line 625 "measurements.m"
          MR_String measurements__V_100_100;
#line 625 "measurements.m"
          MR_String measurements__V_101_101;

#line 627 "measurements.m"
          {
#line 627 "measurements.m"
            measurements__V_93_93 = mercury__string__int_to_string_1_f_0(measurements__Exits_88);
          }
#line 628 "measurements.m"
          {
#line 628 "measurements.m"
            measurements__V_97_97 = mercury__string__int_to_string_1_f_0(measurements__Fails_89);
          }
#line 629 "measurements.m"
          {
#line 629 "measurements.m"
            measurements__V_101_101 = mercury__string__int_to_string_1_f_0(measurements__CallSeqs_90);
          }
#line 629 "measurements.m"
          {
#line 629 "measurements.m"
            measurements__V_100_100 = mercury__string__f_43_43_2_f_0(measurements__V_101_101, (MR_String) ")");
          }
#line 628 "measurements.m"
          {
#line 628 "measurements.m"
            measurements__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_100_100);
          }
#line 628 "measurements.m"
          {
#line 628 "measurements.m"
            measurements__V_96_96 = mercury__string__f_43_43_2_f_0(measurements__V_97_97, measurements__V_98_98);
          }
#line 627 "measurements.m"
          {
#line 627 "measurements.m"
            measurements__V_94_94 = mercury__string__f_43_43_2_f_0((MR_String) ", ", measurements__V_96_96);
          }
#line 627 "measurements.m"
          {
#line 627 "measurements.m"
            measurements__V_92_92 = mercury__string__f_43_43_2_f_0(measurements__V_93_93, measurements__V_94_94);
          }
#line 626 "measurements.m"
          {
#line 626 "measurements.m"
            return measurements__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "fast_det(", measurements__V_92_92);
          }
#line 625 "measurements.m"
        }
#line 599 "measurements.m"
        break;
#line 599 "measurements.m"
    }
#line 599 "measurements.m"
    return measurements__HeadVar__2_2;
#line 599 "measurements.m"
  }
#line 78 "measurements.m"
}

#line 75 "measurements.m"
void MR_CALL 
measurements__decompress_profile_10_p_0(
#line 75 "measurements.m"
  MR_Word measurements__Own_11,
#line 75 "measurements.m"
  MR_Integer * measurements__Calls_12,
#line 75 "measurements.m"
  MR_Integer * measurements__Exits_13,
#line 75 "measurements.m"
  MR_Integer * measurements__Fails_14,
#line 75 "measurements.m"
  MR_Integer * measurements__Redos_15,
#line 75 "measurements.m"
  MR_Integer * measurements__Excps_16,
#line 75 "measurements.m"
  MR_Integer * measurements__Quanta_17,
#line 75 "measurements.m"
  MR_Integer * measurements__CallSeqs_18,
#line 75 "measurements.m"
  MR_Integer * measurements__Allocs_19,
#line 75 "measurements.m"
  MR_Integer * measurements__Words_20)
#line 75 "measurements.m"
{
#line 573 "measurements.m"
  {
#line 573 "measurements.m"
    MR_bool measurements__succeeded;

#line 573 "measurements.m"
#line 573 "measurements.m"
    switch (MR_tag((MR_Word) measurements__Own_11)) {
#line 573 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 573 "measurements.m"
      case (MR_Integer) 0:
#line 573 "measurements.m"
        {
#line 573 "measurements.m"
          MR_Integer measurements__V_21_21;

#line 572 "measurements.m"
          *measurements__Exits_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 0)));
#line 572 "measurements.m"
          *measurements__Fails_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 1)));
#line 572 "measurements.m"
          *measurements__Redos_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 2)));
#line 572 "measurements.m"
          *measurements__Excps_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 3)));
#line 572 "measurements.m"
          *measurements__Quanta_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 4)));
#line 572 "measurements.m"
          *measurements__CallSeqs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 5)));
#line 572 "measurements.m"
          *measurements__Allocs_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 6)));
#line 572 "measurements.m"
          *measurements__Words_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__Own_11, (MR_Integer) 7)));
#line 574 "measurements.m"
          measurements__V_21_21 = (*measurements__Exits_13 + *measurements__Fails_14);
#line 574 "measurements.m"
          *measurements__Calls_12 = (measurements__V_21_21 - *measurements__Redos_15);
#line 573 "measurements.m"
        }
#line 573 "measurements.m"
        break;
#line 573 "measurements.m"
      case (MR_Integer) 1:
#line 576 "measurements.m"
        {
#line 576 "measurements.m"
          *measurements__Exits_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_11, (MR_Integer) 0)));
#line 576 "measurements.m"
          *measurements__Quanta_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_11, (MR_Integer) 1)));
#line 576 "measurements.m"
          *measurements__CallSeqs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_11, (MR_Integer) 2)));
#line 576 "measurements.m"
          *measurements__Allocs_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_11, (MR_Integer) 3)));
#line 576 "measurements.m"
          *measurements__Words_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__Own_11, (MR_Integer) 4)));
#line 577 "measurements.m"
          *measurements__Calls_12 = *measurements__Exits_13;
#line 578 "measurements.m"
          *measurements__Fails_14 = (MR_Integer) 0;
#line 579 "measurements.m"
          *measurements__Redos_15 = (MR_Integer) 0;
#line 580 "measurements.m"
          *measurements__Excps_16 = (MR_Integer) 0;
#line 576 "measurements.m"
        }
#line 573 "measurements.m"
        break;
#line 573 "measurements.m"
      case (MR_Integer) 2:
#line 582 "measurements.m"
        {
#line 582 "measurements.m"
          *measurements__Exits_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_11, (MR_Integer) 0)));
#line 582 "measurements.m"
          *measurements__CallSeqs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_11, (MR_Integer) 1)));
#line 582 "measurements.m"
          *measurements__Allocs_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_11, (MR_Integer) 2)));
#line 582 "measurements.m"
          *measurements__Words_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__Own_11, (MR_Integer) 3)));
#line 583 "measurements.m"
          *measurements__Calls_12 = *measurements__Exits_13;
#line 584 "measurements.m"
          *measurements__Fails_14 = (MR_Integer) 0;
#line 585 "measurements.m"
          *measurements__Redos_15 = (MR_Integer) 0;
#line 586 "measurements.m"
          *measurements__Excps_16 = (MR_Integer) 0;
#line 587 "measurements.m"
          *measurements__Quanta_17 = (MR_Integer) 0;
#line 582 "measurements.m"
        }
#line 573 "measurements.m"
        break;
#line 573 "measurements.m"
      case (MR_Integer) 3:
#line 589 "measurements.m"
        {
#line 589 "measurements.m"
          *measurements__Exits_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__Own_11, (MR_Integer) 0)));
#line 589 "measurements.m"
          *measurements__Fails_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__Own_11, (MR_Integer) 1)));
#line 589 "measurements.m"
          *measurements__CallSeqs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__Own_11, (MR_Integer) 2)));
#line 590 "measurements.m"
          *measurements__Calls_12 = (*measurements__Exits_13 + *measurements__Fails_14);
#line 591 "measurements.m"
          *measurements__Redos_15 = (MR_Integer) 0;
#line 592 "measurements.m"
          *measurements__Excps_16 = (MR_Integer) 0;
#line 593 "measurements.m"
          *measurements__Quanta_17 = (MR_Integer) 0;
#line 594 "measurements.m"
          *measurements__Allocs_19 = (MR_Integer) 0;
#line 595 "measurements.m"
          *measurements__Words_20 = (MR_Integer) 0;
#line 589 "measurements.m"
        }
#line 573 "measurements.m"
        break;
#line 573 "measurements.m"
    }
#line 573 "measurements.m"
  }
#line 75 "measurements.m"
}

#line 73 "measurements.m"
MR_Word MR_CALL 
measurements__compress_profile_1_f_0(
#line 73 "measurements.m"
  MR_Word measurements__PI0_3)
#line 73 "measurements.m"
{
#line 524 "measurements.m"
  {
#line 524 "measurements.m"
    MR_bool measurements__succeeded;
#line 524 "measurements.m"
    MR_Word measurements__PI_4;

#line 524 "measurements.m"
#line 524 "measurements.m"
    switch (MR_tag((MR_Word) measurements__PI0_3)) {
#line 524 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 524 "measurements.m"
      case (MR_Integer) 0:
#line 524 "measurements.m"
        {
#line 524 "measurements.m"
          MR_Integer measurements__Exits_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 0)));
#line 524 "measurements.m"
          MR_Integer measurements__Fails_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 1)));
#line 524 "measurements.m"
          MR_Integer measurements__Redos_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 2)));
#line 524 "measurements.m"
          MR_Integer measurements__Excps_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 3)));
#line 524 "measurements.m"
          MR_Integer measurements__Quanta_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 4)));
#line 524 "measurements.m"
          MR_Integer measurements__CallSeqs_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 5)));
#line 524 "measurements.m"
          MR_Integer measurements__Allocs_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 6)));
#line 524 "measurements.m"
          MR_Integer measurements__Words_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI0_3, (MR_Integer) 7)));

#line 526 "measurements.m"
          measurements__succeeded = (measurements__Redos_7 == (MR_Integer) 0);
#line 526 "measurements.m"
          if (measurements__succeeded)
#line 526 "measurements.m"
            {
#line 527 "measurements.m"
              measurements__succeeded = (measurements__Excps_8 == (MR_Integer) 0);
#line 526 "measurements.m"
              if (measurements__succeeded)
#line 526 "measurements.m"
                {
#line 528 "measurements.m"
                  measurements__succeeded = (measurements__Quanta_9 == (MR_Integer) 0);
#line 526 "measurements.m"
                  if (measurements__succeeded)
#line 526 "measurements.m"
                    {
#line 529 "measurements.m"
                      measurements__succeeded = (measurements__Allocs_11 == (MR_Integer) 0);
#line 526 "measurements.m"
                      if (measurements__succeeded)
#line 530 "measurements.m"
                        measurements__succeeded = (measurements__Words_12 == (MR_Integer) 0);
#line 526 "measurements.m"
                    }
#line 526 "measurements.m"
                }
#line 526 "measurements.m"
            }
#line 533 "measurements.m"
          if (measurements__succeeded)
#line 532 "measurements.m"
            {
#line 532 "measurements.m"
              measurements__PI_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 532 "measurements.m"
              MR_hl_field(MR_mktag(3), measurements__PI_4, 0) = ((MR_Box) (measurements__Exits_5));
#line 532 "measurements.m"
              MR_hl_field(MR_mktag(3), measurements__PI_4, 1) = ((MR_Box) (measurements__Fails_6));
#line 532 "measurements.m"
              MR_hl_field(MR_mktag(3), measurements__PI_4, 2) = ((MR_Box) (measurements__CallSeqs_10));
#line 532 "measurements.m"
            }
#line 533 "measurements.m"
          else
#line 543 "measurements.m"
            {
#line 534 "measurements.m"
              measurements__succeeded = (measurements__Fails_6 == (MR_Integer) 0);
#line 534 "measurements.m"
              if (measurements__succeeded)
#line 534 "measurements.m"
                {
#line 535 "measurements.m"
                  measurements__succeeded = (measurements__Redos_7 == (MR_Integer) 0);
#line 534 "measurements.m"
                  if (measurements__succeeded)
#line 536 "measurements.m"
                    measurements__succeeded = (measurements__Excps_8 == (MR_Integer) 0);
#line 534 "measurements.m"
                }
#line 543 "measurements.m"
              if (measurements__succeeded)
#line 540 "measurements.m"
                {
#line 538 "measurements.m"
                  measurements__succeeded = (measurements__Quanta_9 == (MR_Integer) 0);
#line 540 "measurements.m"
                  if (measurements__succeeded)
#line 539 "measurements.m"
                    {
#line 539 "measurements.m"
                      measurements__PI_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 539 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__PI_4, 0) = ((MR_Box) (measurements__Exits_5));
#line 539 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__PI_4, 1) = ((MR_Box) (measurements__CallSeqs_10));
#line 539 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__PI_4, 2) = ((MR_Box) (measurements__Allocs_11));
#line 539 "measurements.m"
                      MR_hl_field(MR_mktag(2), measurements__PI_4, 3) = ((MR_Box) (measurements__Words_12));
#line 539 "measurements.m"
                    }
#line 540 "measurements.m"
                  else
#line 541 "measurements.m"
                    {
#line 541 "measurements.m"
                      measurements__PI_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 541 "measurements.m"
                      MR_hl_field(MR_mktag(1), measurements__PI_4, 0) = ((MR_Box) (measurements__Exits_5));
#line 541 "measurements.m"
                      MR_hl_field(MR_mktag(1), measurements__PI_4, 1) = ((MR_Box) (measurements__Quanta_9));
#line 541 "measurements.m"
                      MR_hl_field(MR_mktag(1), measurements__PI_4, 2) = ((MR_Box) (measurements__CallSeqs_10));
#line 541 "measurements.m"
                      MR_hl_field(MR_mktag(1), measurements__PI_4, 3) = ((MR_Box) (measurements__Allocs_11));
#line 541 "measurements.m"
                      MR_hl_field(MR_mktag(1), measurements__PI_4, 4) = ((MR_Box) (measurements__Words_12));
#line 541 "measurements.m"
                    }
#line 540 "measurements.m"
                }
#line 543 "measurements.m"
              else
#line 544 "measurements.m"
                measurements__PI_4 = measurements__PI0_3;
#line 543 "measurements.m"
            }
#line 524 "measurements.m"
        }
#line 524 "measurements.m"
        break;
#line 524 "measurements.m"
      case (MR_Integer) 1:
#line 547 "measurements.m"
        {
#line 547 "measurements.m"
          MR_Integer measurements__Exits_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI0_3, (MR_Integer) 0)));
#line 547 "measurements.m"
          MR_Integer measurements__Quanta_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI0_3, (MR_Integer) 1)));
#line 547 "measurements.m"
          MR_Integer measurements__CallSeqs_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI0_3, (MR_Integer) 2)));
#line 547 "measurements.m"
          MR_Integer measurements__Allocs_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI0_3, (MR_Integer) 3)));
#line 547 "measurements.m"
          MR_Integer measurements__Words_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI0_3, (MR_Integer) 4)));

#line 548 "measurements.m"
          measurements__succeeded = (measurements__Allocs_21 == (MR_Integer) 0);
#line 548 "measurements.m"
          if (measurements__succeeded)
#line 548 "measurements.m"
            measurements__succeeded = (measurements__Words_22 == (MR_Integer) 0);
#line 550 "measurements.m"
          if (measurements__succeeded)
#line 549 "measurements.m"
            {
#line 549 "measurements.m"
              {
#line 549 "measurements.m"
                measurements__PI_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 549 "measurements.m"
                MR_hl_field(MR_mktag(3), measurements__PI_4, 0) = ((MR_Box) (measurements__Exits_18));
#line 549 "measurements.m"
                MR_hl_field(MR_mktag(3), measurements__PI_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 549 "measurements.m"
                MR_hl_field(MR_mktag(3), measurements__PI_4, 2) = ((MR_Box) (measurements__CallSeqs_20));
#line 549 "measurements.m"
              }
#line 549 "measurements.m"
            }
#line 550 "measurements.m"
          else
#line 552 "measurements.m"
            {
#line 550 "measurements.m"
              measurements__succeeded = (measurements__Quanta_19 == (MR_Integer) 0);
#line 552 "measurements.m"
              if (measurements__succeeded)
#line 551 "measurements.m"
                {
#line 551 "measurements.m"
                  measurements__PI_4 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 551 "measurements.m"
                  MR_hl_field(MR_mktag(2), measurements__PI_4, 0) = ((MR_Box) (measurements__Exits_18));
#line 551 "measurements.m"
                  MR_hl_field(MR_mktag(2), measurements__PI_4, 1) = ((MR_Box) (measurements__CallSeqs_20));
#line 551 "measurements.m"
                  MR_hl_field(MR_mktag(2), measurements__PI_4, 2) = ((MR_Box) (measurements__Allocs_21));
#line 551 "measurements.m"
                  MR_hl_field(MR_mktag(2), measurements__PI_4, 3) = ((MR_Box) (measurements__Words_22));
#line 551 "measurements.m"
                }
#line 552 "measurements.m"
              else
#line 553 "measurements.m"
                measurements__PI_4 = measurements__PI0_3;
#line 552 "measurements.m"
            }
#line 547 "measurements.m"
        }
#line 524 "measurements.m"
        break;
#line 524 "measurements.m"
      case (MR_Integer) 2:
#line 556 "measurements.m"
        {
#line 556 "measurements.m"
          MR_Integer measurements__Exits_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI0_3, (MR_Integer) 0)));
#line 556 "measurements.m"
          MR_Integer measurements__CallSeqs_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI0_3, (MR_Integer) 1)));
#line 556 "measurements.m"
          MR_Integer measurements__Allocs_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI0_3, (MR_Integer) 2)));
#line 556 "measurements.m"
          MR_Integer measurements__Words_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI0_3, (MR_Integer) 3)));

#line 557 "measurements.m"
          measurements__succeeded = (measurements__Allocs_25 == (MR_Integer) 0);
#line 557 "measurements.m"
          if (measurements__succeeded)
#line 557 "measurements.m"
            measurements__succeeded = (measurements__Words_26 == (MR_Integer) 0);
#line 559 "measurements.m"
          if (measurements__succeeded)
#line 558 "measurements.m"
            {
#line 558 "measurements.m"
              {
#line 558 "measurements.m"
                measurements__PI_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 558 "measurements.m"
                MR_hl_field(MR_mktag(3), measurements__PI_4, 0) = ((MR_Box) (measurements__Exits_23));
#line 558 "measurements.m"
                MR_hl_field(MR_mktag(3), measurements__PI_4, 1) = ((MR_Box) ((MR_Integer) 0));
#line 558 "measurements.m"
                MR_hl_field(MR_mktag(3), measurements__PI_4, 2) = ((MR_Box) (measurements__CallSeqs_24));
#line 558 "measurements.m"
              }
#line 558 "measurements.m"
            }
#line 559 "measurements.m"
          else
#line 560 "measurements.m"
            measurements__PI_4 = measurements__PI0_3;
#line 556 "measurements.m"
        }
#line 524 "measurements.m"
        break;
#line 524 "measurements.m"
      case (MR_Integer) 3:
#line 564 "measurements.m"
        measurements__PI_4 = measurements__PI0_3;
#line 524 "measurements.m"
        break;
#line 524 "measurements.m"
    }
#line 524 "measurements.m"
    return measurements__PI_4;
#line 524 "measurements.m"
  }
#line 73 "measurements.m"
}

#line 71 "measurements.m"
MR_Word MR_CALL 
measurements__compress_profile_8_f_0(
#line 71 "measurements.m"
  MR_Integer measurements__Exits_10,
#line 71 "measurements.m"
  MR_Integer measurements__Fails_11,
#line 71 "measurements.m"
  MR_Integer measurements__Redos_12,
#line 71 "measurements.m"
  MR_Integer measurements__Excps_13,
#line 71 "measurements.m"
  MR_Integer measurements__Quanta_14,
#line 71 "measurements.m"
  MR_Integer measurements__CallSeqs_15,
#line 71 "measurements.m"
  MR_Integer measurements__Allocs_16,
#line 71 "measurements.m"
  MR_Integer measurements__Words_17)
#line 71 "measurements.m"
{
#line 506 "measurements.m"
  {
#line 506 "measurements.m"
    MR_bool measurements__succeeded = (measurements__Redos_12 == (MR_Integer) 0);
#line 506 "measurements.m"
    MR_Word measurements__PI_18;

#line 499 "measurements.m"
    if (measurements__succeeded)
#line 499 "measurements.m"
      {
#line 500 "measurements.m"
        measurements__succeeded = (measurements__Excps_13 == (MR_Integer) 0);
#line 499 "measurements.m"
        if (measurements__succeeded)
#line 499 "measurements.m"
          {
#line 501 "measurements.m"
            measurements__succeeded = (measurements__Quanta_14 == (MR_Integer) 0);
#line 499 "measurements.m"
            if (measurements__succeeded)
#line 499 "measurements.m"
              {
#line 502 "measurements.m"
                measurements__succeeded = (measurements__Allocs_16 == (MR_Integer) 0);
#line 499 "measurements.m"
                if (measurements__succeeded)
#line 503 "measurements.m"
                  measurements__succeeded = (measurements__Words_17 == (MR_Integer) 0);
#line 499 "measurements.m"
              }
#line 499 "measurements.m"
          }
#line 499 "measurements.m"
      }
#line 506 "measurements.m"
    if (measurements__succeeded)
#line 505 "measurements.m"
      {
#line 505 "measurements.m"
        measurements__PI_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 505 "measurements.m"
        MR_hl_field(MR_mktag(3), measurements__PI_18, 0) = ((MR_Box) (measurements__Exits_10));
#line 505 "measurements.m"
        MR_hl_field(MR_mktag(3), measurements__PI_18, 1) = ((MR_Box) (measurements__Fails_11));
#line 505 "measurements.m"
        MR_hl_field(MR_mktag(3), measurements__PI_18, 2) = ((MR_Box) (measurements__CallSeqs_15));
#line 505 "measurements.m"
      }
#line 506 "measurements.m"
    else
#line 516 "measurements.m"
      {
#line 507 "measurements.m"
        measurements__succeeded = (measurements__Fails_11 == (MR_Integer) 0);
#line 507 "measurements.m"
        if (measurements__succeeded)
#line 507 "measurements.m"
          {
#line 508 "measurements.m"
            measurements__succeeded = (measurements__Redos_12 == (MR_Integer) 0);
#line 507 "measurements.m"
            if (measurements__succeeded)
#line 509 "measurements.m"
              measurements__succeeded = (measurements__Excps_13 == (MR_Integer) 0);
#line 507 "measurements.m"
          }
#line 516 "measurements.m"
        if (measurements__succeeded)
#line 513 "measurements.m"
          {
#line 511 "measurements.m"
            measurements__succeeded = (measurements__Quanta_14 == (MR_Integer) 0);
#line 513 "measurements.m"
            if (measurements__succeeded)
#line 512 "measurements.m"
              {
#line 512 "measurements.m"
                measurements__PI_18 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 512 "measurements.m"
                MR_hl_field(MR_mktag(2), measurements__PI_18, 0) = ((MR_Box) (measurements__Exits_10));
#line 512 "measurements.m"
                MR_hl_field(MR_mktag(2), measurements__PI_18, 1) = ((MR_Box) (measurements__CallSeqs_15));
#line 512 "measurements.m"
                MR_hl_field(MR_mktag(2), measurements__PI_18, 2) = ((MR_Box) (measurements__Allocs_16));
#line 512 "measurements.m"
                MR_hl_field(MR_mktag(2), measurements__PI_18, 3) = ((MR_Box) (measurements__Words_17));
#line 512 "measurements.m"
              }
#line 513 "measurements.m"
            else
#line 514 "measurements.m"
              {
#line 514 "measurements.m"
                measurements__PI_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 514 "measurements.m"
                MR_hl_field(MR_mktag(1), measurements__PI_18, 0) = ((MR_Box) (measurements__Exits_10));
#line 514 "measurements.m"
                MR_hl_field(MR_mktag(1), measurements__PI_18, 1) = ((MR_Box) (measurements__Quanta_14));
#line 514 "measurements.m"
                MR_hl_field(MR_mktag(1), measurements__PI_18, 2) = ((MR_Box) (measurements__CallSeqs_15));
#line 514 "measurements.m"
                MR_hl_field(MR_mktag(1), measurements__PI_18, 3) = ((MR_Box) (measurements__Allocs_16));
#line 514 "measurements.m"
                MR_hl_field(MR_mktag(1), measurements__PI_18, 4) = ((MR_Box) (measurements__Words_17));
#line 514 "measurements.m"
              }
#line 513 "measurements.m"
          }
#line 516 "measurements.m"
        else
#line 517 "measurements.m"
          {
#line 517 "measurements.m"
            measurements__PI_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 517 "measurements.m"
            MR_hl_field(MR_mktag(0), measurements__PI_18, 0) = ((MR_Box) (measurements__Exits_10));
#line 517 "measurements.m"
            MR_hl_field(MR_mktag(0), measurements__PI_18, 1) = ((MR_Box) (measurements__Fails_11));
#line 517 "measurements.m"
            MR_hl_field(MR_mktag(0), measurements__PI_18, 2) = ((MR_Box) (measurements__Redos_12));
#line 517 "measurements.m"
            MR_hl_field(MR_mktag(0), measurements__PI_18, 3) = ((MR_Box) (measurements__Excps_13));
#line 517 "measurements.m"
            MR_hl_field(MR_mktag(0), measurements__PI_18, 4) = ((MR_Box) (measurements__Quanta_14));
#line 517 "measurements.m"
            MR_hl_field(MR_mktag(0), measurements__PI_18, 5) = ((MR_Box) (measurements__CallSeqs_15));
#line 517 "measurements.m"
            MR_hl_field(MR_mktag(0), measurements__PI_18, 6) = ((MR_Box) (measurements__Allocs_16));
#line 517 "measurements.m"
            MR_hl_field(MR_mktag(0), measurements__PI_18, 7) = ((MR_Box) (measurements__Words_17));
#line 517 "measurements.m"
          }
#line 516 "measurements.m"
      }
#line 506 "measurements.m"
    return measurements__PI_18;
#line 506 "measurements.m"
  }
#line 71 "measurements.m"
}

#line 494 "measurements.m"
static MR_Box MR_CALL 
measurements__sum_inherit_infos_1_f_0_1(
#line 494 "measurements.m"
  MR_Box measurements__closure_arg,
#line 494 "measurements.m"
  MR_Box measurements__wrapper_arg_1,
#line 494 "measurements.m"
  MR_Box measurements__wrapper_arg_2)
#line 494 "measurements.m"
{
#line 494 "measurements.m"
  {
#line 494 "measurements.m"
    MR_Box measurements__wrapper_arg_3;
#line 494 "measurements.m"
    MR_Box measurements__closure = measurements__closure_arg;
#line 494 "measurements.m"
    MR_Word measurements__conv0_SumPI_6;

#line 494 "measurements.m"
    {
#line 494 "measurements.m"
      measurements__conv0_SumPI_6 = measurements__add_inherit_to_inherit_2_f_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 494 "measurements.m"
    measurements__wrapper_arg_3 = ((MR_Box) (measurements__conv0_SumPI_6));
#line 494 "measurements.m"
    return measurements__wrapper_arg_3;
#line 494 "measurements.m"
  }
#line 494 "measurements.m"
}

#line 69 "measurements.m"
MR_Word MR_CALL 
measurements__sum_inherit_infos_1_f_0(
#line 69 "measurements.m"
  MR_Word measurements__Inherits_3)
#line 69 "measurements.m"
{
#line 493 "measurements.m"
  {
#line 493 "measurements.m"
    MR_bool measurements__succeeded;
#line 493 "measurements.m"
    MR_Word measurements__HeadVar__2_2;
#line 493 "measurements.m"
    MR_Word measurements__TypeCtorInfo_6_6 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 494 "measurements.m"
    MR_Box measurements__conv1_HeadVar__2_2;

#line 494 "measurements.m"
    {
#line 494 "measurements.m"
      measurements__conv1_HeadVar__2_2 = mercury__list__foldl_3_f_0(measurements__TypeCtorInfo_6_6, measurements__TypeCtorInfo_6_6, (MR_Word) &measurements_scalar_common_3[2], measurements__Inherits_3, ((MR_Box) (&measurements_scalar_common_2[0])));
    }
#line 494 "measurements.m"
    measurements__HeadVar__2_2 = ((MR_Word) measurements__conv1_HeadVar__2_2);
#line 493 "measurements.m"
    return measurements__HeadVar__2_2;
#line 493 "measurements.m"
  }
#line 69 "measurements.m"
}

#line 491 "measurements.m"
static MR_Box MR_CALL 
measurements__sum_own_infos_1_f_0_1(
#line 491 "measurements.m"
  MR_Box measurements__closure_arg,
#line 491 "measurements.m"
  MR_Box measurements__wrapper_arg_1,
#line 491 "measurements.m"
  MR_Box measurements__wrapper_arg_2)
#line 491 "measurements.m"
{
#line 491 "measurements.m"
  {
#line 491 "measurements.m"
    MR_Box measurements__wrapper_arg_3;
#line 491 "measurements.m"
    MR_Box measurements__closure = measurements__closure_arg;
#line 491 "measurements.m"
    MR_Word measurements__conv0_SumPI_6;

#line 491 "measurements.m"
    {
#line 491 "measurements.m"
      measurements__conv0_SumPI_6 = measurements__add_own_to_own_2_f_0(((MR_Word) measurements__wrapper_arg_1), ((MR_Word) measurements__wrapper_arg_2));
    }
#line 491 "measurements.m"
    measurements__wrapper_arg_3 = ((MR_Box) (measurements__conv0_SumPI_6));
#line 491 "measurements.m"
    return measurements__wrapper_arg_3;
#line 491 "measurements.m"
  }
#line 491 "measurements.m"
}

#line 68 "measurements.m"
MR_Word MR_CALL 
measurements__sum_own_infos_1_f_0(
#line 68 "measurements.m"
  MR_Word measurements__Owns_3)
#line 68 "measurements.m"
{
#line 490 "measurements.m"
  {
#line 490 "measurements.m"
    MR_bool measurements__succeeded;
#line 490 "measurements.m"
    MR_Word measurements__HeadVar__2_2;
#line 490 "measurements.m"
    MR_Word measurements__TypeCtorInfo_6_6 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 491 "measurements.m"
    MR_Box measurements__conv1_HeadVar__2_2;

#line 491 "measurements.m"
    {
#line 491 "measurements.m"
      measurements__conv1_HeadVar__2_2 = mercury__list__foldl_3_f_0(measurements__TypeCtorInfo_6_6, measurements__TypeCtorInfo_6_6, (MR_Word) &measurements_scalar_common_3[1], measurements__Owns_3, ((MR_Box) (MR_mkword(MR_mktag(3), &measurements_scalar_common_3[0]))));
    }
#line 491 "measurements.m"
    measurements__HeadVar__2_2 = ((MR_Word) measurements__conv1_HeadVar__2_2);
#line 490 "measurements.m"
    return measurements__HeadVar__2_2;
#line 490 "measurements.m"
  }
#line 68 "measurements.m"
}

#line 66 "measurements.m"
MR_Word MR_CALL 
measurements__add_own_to_own_2_f_0(
#line 66 "measurements.m"
  MR_Word measurements__PI1_4,
#line 66 "measurements.m"
  MR_Word measurements__PI2_5)
#line 66 "measurements.m"
{
#line 478 "measurements.m"
  {
#line 478 "measurements.m"
    MR_bool measurements__succeeded;
#line 478 "measurements.m"
    MR_Word measurements__SumPI_6;
#line 478 "measurements.m"
    MR_Integer measurements__Exits_7;
#line 478 "measurements.m"
    MR_Integer measurements__Fails_8;
#line 478 "measurements.m"
    MR_Integer measurements__Redos_9;
#line 478 "measurements.m"
    MR_Integer measurements__Excps_10;
#line 478 "measurements.m"
    MR_Integer measurements__Quanta_11;
#line 478 "measurements.m"
    MR_Integer measurements__CallSeqs_12;
#line 478 "measurements.m"
    MR_Integer measurements__Allocs_13;
#line 478 "measurements.m"
    MR_Integer measurements__Words_14;
#line 478 "measurements.m"
    MR_Integer measurements__V_15_15;
#line 478 "measurements.m"
    MR_Integer measurements__V_16_16;
#line 478 "measurements.m"
    MR_Integer measurements__V_17_17;
#line 478 "measurements.m"
    MR_Integer measurements__V_18_18;
#line 478 "measurements.m"
    MR_Integer measurements__V_19_19;
#line 478 "measurements.m"
    MR_Integer measurements__V_20_20;
#line 478 "measurements.m"
    MR_Integer measurements__V_21_21;
#line 478 "measurements.m"
    MR_Integer measurements__V_22_22;
#line 478 "measurements.m"
    MR_Integer measurements__V_23_23;
#line 478 "measurements.m"
    MR_Integer measurements__V_24_24;
#line 478 "measurements.m"
    MR_Integer measurements__V_25_25;
#line 478 "measurements.m"
    MR_Integer measurements__V_26_26;
#line 478 "measurements.m"
    MR_Integer measurements__V_27_27;
#line 478 "measurements.m"
    MR_Integer measurements__V_28_28;
#line 478 "measurements.m"
    MR_Integer measurements__V_29_29;
#line 478 "measurements.m"
    MR_Integer measurements__V_30_30;

#line 10865 "measurements.c"
#line 10866 "measurements.c"
    switch (MR_tag((MR_Word) measurements__PI2_5)) {
#line 10868 "measurements.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 10870 "measurements.c"
      case (MR_Integer) 0:
#line 385 "measurements.m"
        {
#line 385 "measurements.m"
          MR_Integer measurements__V_65_65;
#line 385 "measurements.m"
          MR_Integer measurements__V_66_66;
#line 385 "measurements.m"
          MR_Integer measurements__V_67_67;
#line 385 "measurements.m"
          MR_Integer measurements__V_68_68;
#line 385 "measurements.m"
          MR_Integer measurements__V_69_69;
#line 385 "measurements.m"
          MR_Integer measurements__V_70_70;

#line 385 "measurements.m"
          measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 0)));
#line 385 "measurements.m"
          measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 1)));
#line 385 "measurements.m"
          measurements__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 2)));
#line 385 "measurements.m"
          measurements__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 3)));
#line 385 "measurements.m"
          measurements__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 4)));
#line 385 "measurements.m"
          measurements__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 5)));
#line 385 "measurements.m"
          measurements__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 6)));
#line 385 "measurements.m"
          measurements__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 7)));
#line 385 "measurements.m"
        }
#line 10905 "measurements.c"
        break;
#line 10907 "measurements.c"
      case (MR_Integer) 1:
#line 10909 "measurements.c"
        {
#line 384 "measurements.m"
          MR_Integer measurements__V_59_59;
#line 384 "measurements.m"
          MR_Integer measurements__V_60_60;
#line 384 "measurements.m"
          MR_Integer measurements__V_61_61;
#line 384 "measurements.m"
          MR_Integer measurements__V_62_62;

#line 384 "measurements.m"
          measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 0)));
#line 384 "measurements.m"
          measurements__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 1)));
#line 384 "measurements.m"
          measurements__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 2)));
#line 384 "measurements.m"
          measurements__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 3)));
#line 384 "measurements.m"
          measurements__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 4)));
#line 389 "measurements.m"
          measurements__V_18_18 = (MR_Integer) 0;
#line 10932 "measurements.c"
        }
#line 10934 "measurements.c"
        break;
#line 10936 "measurements.c"
      case (MR_Integer) 2:
#line 10938 "measurements.c"
        {
#line 383 "measurements.m"
          MR_Integer measurements__V_55_55;
#line 383 "measurements.m"
          MR_Integer measurements__V_56_56;
#line 383 "measurements.m"
          MR_Integer measurements__V_57_57;

#line 383 "measurements.m"
          measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 0)));
#line 383 "measurements.m"
          measurements__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 1)));
#line 383 "measurements.m"
          measurements__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 2)));
#line 383 "measurements.m"
          measurements__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 3)));
#line 388 "measurements.m"
          measurements__V_18_18 = (MR_Integer) 0;
#line 10957 "measurements.c"
        }
#line 10959 "measurements.c"
        break;
#line 10961 "measurements.c"
      case (MR_Integer) 3:
#line 382 "measurements.m"
        {
#line 382 "measurements.m"
          MR_Integer measurements__V_53_53;

#line 382 "measurements.m"
          measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI2_5, (MR_Integer) 0)));
#line 382 "measurements.m"
          measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI2_5, (MR_Integer) 1)));
#line 382 "measurements.m"
          measurements__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI2_5, (MR_Integer) 2)));
#line 382 "measurements.m"
        }
#line 10976 "measurements.c"
        break;
#line 10978 "measurements.c"
    }
#line 10980 "measurements.c"
#line 10981 "measurements.c"
    switch (MR_tag((MR_Word) measurements__PI1_4)) {
#line 10983 "measurements.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 10985 "measurements.c"
      case (MR_Integer) 0:
#line 385 "measurements.m"
        {
#line 385 "measurements.m"
          MR_Integer measurements__V_46_46;
#line 385 "measurements.m"
          MR_Integer measurements__V_47_47;
#line 385 "measurements.m"
          MR_Integer measurements__V_48_48;
#line 385 "measurements.m"
          MR_Integer measurements__V_49_49;
#line 385 "measurements.m"
          MR_Integer measurements__V_50_50;

#line 385 "measurements.m"
          measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
#line 385 "measurements.m"
          measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
#line 385 "measurements.m"
          measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
#line 385 "measurements.m"
          measurements__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));
#line 385 "measurements.m"
          measurements__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 4)));
#line 385 "measurements.m"
          measurements__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 5)));
#line 385 "measurements.m"
          measurements__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 6)));
#line 385 "measurements.m"
          measurements__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 7)));
#line 385 "measurements.m"
        }
#line 11018 "measurements.c"
        break;
#line 11020 "measurements.c"
      case (MR_Integer) 1:
#line 11022 "measurements.c"
        {
#line 384 "measurements.m"
          MR_Integer measurements__V_39_39;
#line 384 "measurements.m"
          MR_Integer measurements__V_40_40;
#line 384 "measurements.m"
          MR_Integer measurements__V_41_41;
#line 384 "measurements.m"
          MR_Integer measurements__V_42_42;

#line 384 "measurements.m"
          measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 0)));
#line 384 "measurements.m"
          measurements__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 1)));
#line 384 "measurements.m"
          measurements__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 2)));
#line 384 "measurements.m"
          measurements__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 3)));
#line 384 "measurements.m"
          measurements__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 4)));
#line 389 "measurements.m"
          measurements__V_17_17 = (MR_Integer) 0;
#line 394 "measurements.m"
          measurements__V_19_19 = (MR_Integer) 0;
#line 11047 "measurements.c"
        }
#line 11049 "measurements.c"
        break;
#line 11051 "measurements.c"
      case (MR_Integer) 2:
#line 11053 "measurements.c"
        {
#line 383 "measurements.m"
          MR_Integer measurements__V_35_35;
#line 383 "measurements.m"
          MR_Integer measurements__V_36_36;
#line 383 "measurements.m"
          MR_Integer measurements__V_37_37;

#line 383 "measurements.m"
          measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 0)));
#line 383 "measurements.m"
          measurements__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 1)));
#line 383 "measurements.m"
          measurements__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 2)));
#line 383 "measurements.m"
          measurements__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 3)));
#line 388 "measurements.m"
          measurements__V_17_17 = (MR_Integer) 0;
#line 481 "measurements.m"
          {
#line 481 "measurements.m"
            measurements__V_19_19 = measurements__redos_1_f_0(measurements__PI1_4);
          }
#line 11077 "measurements.c"
        }
#line 11079 "measurements.c"
        break;
#line 11081 "measurements.c"
      case (MR_Integer) 3:
#line 11083 "measurements.c"
        {
#line 382 "measurements.m"
          MR_Integer measurements__V_33_33;

#line 382 "measurements.m"
          measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 0)));
#line 382 "measurements.m"
          measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 1)));
#line 382 "measurements.m"
          measurements__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 2)));
#line 481 "measurements.m"
          {
#line 481 "measurements.m"
            measurements__V_19_19 = measurements__redos_1_f_0(measurements__PI1_4);
          }
#line 11099 "measurements.c"
        }
#line 11101 "measurements.c"
        break;
#line 11103 "measurements.c"
    }
#line 479 "measurements.m"
    measurements__Exits_7 = (measurements__V_15_15 + measurements__V_16_16);
#line 480 "measurements.m"
    measurements__Fails_8 = (measurements__V_17_17 + measurements__V_18_18);
#line 481 "measurements.m"
    {
#line 481 "measurements.m"
      measurements__V_20_20 = measurements__redos_1_f_0(measurements__PI2_5);
    }
#line 481 "measurements.m"
    measurements__Redos_9 = (measurements__V_19_19 + measurements__V_20_20);
#line 482 "measurements.m"
    {
#line 482 "measurements.m"
      measurements__V_21_21 = measurements__excps_1_f_0(measurements__PI1_4);
    }
#line 482 "measurements.m"
    {
#line 482 "measurements.m"
      measurements__V_22_22 = measurements__excps_1_f_0(measurements__PI2_5);
    }
#line 482 "measurements.m"
    measurements__Excps_10 = (measurements__V_21_21 + measurements__V_22_22);
#line 483 "measurements.m"
    {
#line 483 "measurements.m"
      measurements__V_23_23 = measurements__quanta_1_f_0(measurements__PI1_4);
    }
#line 483 "measurements.m"
    {
#line 483 "measurements.m"
      measurements__V_24_24 = measurements__quanta_1_f_0(measurements__PI2_5);
    }
#line 483 "measurements.m"
    measurements__Quanta_11 = (measurements__V_23_23 + measurements__V_24_24);
#line 484 "measurements.m"
    {
#line 484 "measurements.m"
      measurements__V_25_25 = measurements__callseqs_1_f_0(measurements__PI1_4);
    }
#line 484 "measurements.m"
    {
#line 484 "measurements.m"
      measurements__V_26_26 = measurements__callseqs_1_f_0(measurements__PI2_5);
    }
#line 484 "measurements.m"
    measurements__CallSeqs_12 = (measurements__V_25_25 + measurements__V_26_26);
#line 485 "measurements.m"
    {
#line 485 "measurements.m"
      measurements__V_27_27 = measurements__allocs_1_f_0(measurements__PI1_4);
    }
#line 485 "measurements.m"
    {
#line 485 "measurements.m"
      measurements__V_28_28 = measurements__allocs_1_f_0(measurements__PI2_5);
    }
#line 485 "measurements.m"
    measurements__Allocs_13 = (measurements__V_27_27 + measurements__V_28_28);
#line 486 "measurements.m"
    {
#line 486 "measurements.m"
      measurements__V_29_29 = measurements__words_1_f_0(measurements__PI1_4);
    }
#line 486 "measurements.m"
    {
#line 486 "measurements.m"
      measurements__V_30_30 = measurements__words_1_f_0(measurements__PI2_5);
    }
#line 486 "measurements.m"
    measurements__Words_14 = (measurements__V_29_29 + measurements__V_30_30);
#line 487 "measurements.m"
    {
#line 487 "measurements.m"
      return measurements__SumPI_6 = measurements__compress_profile_8_f_0(measurements__Exits_7, measurements__Fails_8, measurements__Redos_9, measurements__Excps_10, measurements__Quanta_11, measurements__CallSeqs_12, measurements__Allocs_13, measurements__Words_14);
    }
#line 478 "measurements.m"
    return measurements__SumPI_6;
#line 478 "measurements.m"
  }
#line 66 "measurements.m"
}

#line 65 "measurements.m"
MR_Word MR_CALL 
measurements__add_inherit_to_own_2_f_0(
#line 65 "measurements.m"
  MR_Word measurements__PI1_4,
#line 65 "measurements.m"
  MR_Word measurements__PI2_5)
#line 65 "measurements.m"
{
#line 466 "measurements.m"
  {
#line 466 "measurements.m"
    MR_bool measurements__succeeded;
#line 466 "measurements.m"
    MR_Word measurements__SumPI_6;
#line 466 "measurements.m"
    MR_Integer measurements__Exits_7;
#line 466 "measurements.m"
    MR_Integer measurements__Fails_8;
#line 466 "measurements.m"
    MR_Integer measurements__Redos_9;
#line 466 "measurements.m"
    MR_Integer measurements__Excps_10;
#line 466 "measurements.m"
    MR_Integer measurements__Quanta_11;
#line 466 "measurements.m"
    MR_Integer measurements__CallSeqs_12;
#line 466 "measurements.m"
    MR_Integer measurements__Allocs_13;
#line 466 "measurements.m"
    MR_Integer measurements__Words_14;
#line 466 "measurements.m"
    MR_Integer measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
#line 466 "measurements.m"
    MR_Integer measurements__V_16_16;
#line 466 "measurements.m"
    MR_Integer measurements__V_18_18;
#line 466 "measurements.m"
    MR_Integer measurements__V_19_19;
#line 466 "measurements.m"
    MR_Integer measurements__V_20_20;
#line 466 "measurements.m"
    MR_Integer measurements__V_21_21;
#line 466 "measurements.m"
    MR_Integer measurements__V_22_22;
#line 466 "measurements.m"
    MR_Integer measurements__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
#line 429 "measurements.m"
    MR_Integer measurements__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
#line 429 "measurements.m"
    MR_Integer measurements__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));
#line 431 "measurements.m"
    MR_Integer measurements__V_92_92;
#line 431 "measurements.m"
    MR_Integer measurements__V_93_93;
#line 431 "measurements.m"
    MR_Integer measurements__V_94_94;
#line 432 "measurements.m"
    MR_Integer measurements__V_96_96;
#line 432 "measurements.m"
    MR_Integer measurements__V_97_97;
#line 432 "measurements.m"
    MR_Integer measurements__V_98_98;

#line 11252 "measurements.c"
#line 11253 "measurements.c"
    switch (MR_tag((MR_Word) measurements__PI2_5)) {
#line 11255 "measurements.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 11257 "measurements.c"
      case (MR_Integer) 0:
#line 385 "measurements.m"
        {
#line 385 "measurements.m"
          MR_Integer measurements__V_40_40;
#line 385 "measurements.m"
          MR_Integer measurements__V_41_41;
#line 385 "measurements.m"
          MR_Integer measurements__V_42_42;

#line 385 "measurements.m"
          measurements__Exits_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 0)));
#line 385 "measurements.m"
          measurements__Fails_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 1)));
#line 385 "measurements.m"
          measurements__Redos_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 2)));
#line 385 "measurements.m"
          measurements__Excps_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 3)));
#line 385 "measurements.m"
          measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 4)));
#line 385 "measurements.m"
          measurements__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 5)));
#line 385 "measurements.m"
          measurements__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 6)));
#line 385 "measurements.m"
          measurements__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 7)));
#line 385 "measurements.m"
        }
#line 11286 "measurements.c"
        break;
#line 11288 "measurements.c"
      case (MR_Integer) 1:
#line 11290 "measurements.c"
        {
#line 384 "measurements.m"
          MR_Integer measurements__V_32_32;
#line 384 "measurements.m"
          MR_Integer measurements__V_33_33;
#line 384 "measurements.m"
          MR_Integer measurements__V_34_34;

#line 384 "measurements.m"
          measurements__Exits_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 0)));
#line 384 "measurements.m"
          measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 1)));
#line 384 "measurements.m"
          measurements__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 2)));
#line 384 "measurements.m"
          measurements__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 3)));
#line 384 "measurements.m"
          measurements__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI2_5, (MR_Integer) 4)));
#line 389 "measurements.m"
          measurements__Fails_8 = (MR_Integer) 0;
#line 394 "measurements.m"
          measurements__Redos_9 = (MR_Integer) 0;
#line 399 "measurements.m"
          measurements__Excps_10 = (MR_Integer) 0;
#line 11315 "measurements.c"
        }
#line 11317 "measurements.c"
        break;
#line 11319 "measurements.c"
      case (MR_Integer) 2:
#line 11321 "measurements.c"
        {
#line 383 "measurements.m"
          MR_Integer measurements__V_27_27;
#line 383 "measurements.m"
          MR_Integer measurements__V_28_28;
#line 383 "measurements.m"
          MR_Integer measurements__V_29_29;

#line 383 "measurements.m"
          measurements__Exits_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 0)));
#line 383 "measurements.m"
          measurements__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 1)));
#line 383 "measurements.m"
          measurements__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 2)));
#line 383 "measurements.m"
          measurements__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI2_5, (MR_Integer) 3)));
#line 388 "measurements.m"
          measurements__Fails_8 = (MR_Integer) 0;
#line 393 "measurements.m"
          measurements__Redos_9 = (MR_Integer) 0;
#line 398 "measurements.m"
          measurements__Excps_10 = (MR_Integer) 0;
#line 471 "measurements.m"
          {
#line 471 "measurements.m"
            measurements__V_16_16 = measurements__quanta_1_f_0(measurements__PI2_5);
          }
#line 11349 "measurements.c"
        }
#line 11351 "measurements.c"
        break;
#line 11353 "measurements.c"
      case (MR_Integer) 3:
#line 11355 "measurements.c"
        {
#line 382 "measurements.m"
          MR_Integer measurements__V_25_25;

#line 382 "measurements.m"
          measurements__Exits_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI2_5, (MR_Integer) 0)));
#line 382 "measurements.m"
          measurements__Fails_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI2_5, (MR_Integer) 1)));
#line 382 "measurements.m"
          measurements__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI2_5, (MR_Integer) 2)));
#line 392 "measurements.m"
          measurements__Redos_9 = (MR_Integer) 0;
#line 397 "measurements.m"
          measurements__Excps_10 = (MR_Integer) 0;
#line 471 "measurements.m"
          {
#line 471 "measurements.m"
            measurements__V_16_16 = measurements__quanta_1_f_0(measurements__PI2_5);
          }
#line 11375 "measurements.c"
        }
#line 11377 "measurements.c"
        break;
#line 11379 "measurements.c"
    }
#line 471 "measurements.m"
    measurements__Quanta_11 = (measurements__V_15_15 + measurements__V_16_16);
#line 472 "measurements.m"
    {
#line 472 "measurements.m"
      measurements__V_18_18 = measurements__callseqs_1_f_0(measurements__PI2_5);
    }
#line 472 "measurements.m"
    measurements__CallSeqs_12 = (measurements__V_84_84 + measurements__V_18_18);
#line 431 "measurements.m"
    measurements__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
#line 431 "measurements.m"
    measurements__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
#line 431 "measurements.m"
    measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
#line 431 "measurements.m"
    measurements__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));
#line 473 "measurements.m"
    {
#line 473 "measurements.m"
      measurements__V_20_20 = measurements__allocs_1_f_0(measurements__PI2_5);
    }
#line 473 "measurements.m"
    measurements__Allocs_13 = (measurements__V_19_19 + measurements__V_20_20);
#line 432 "measurements.m"
    measurements__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
#line 432 "measurements.m"
    measurements__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
#line 432 "measurements.m"
    measurements__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
#line 432 "measurements.m"
    measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));
#line 474 "measurements.m"
    {
#line 474 "measurements.m"
      measurements__V_22_22 = measurements__words_1_f_0(measurements__PI2_5);
    }
#line 474 "measurements.m"
    measurements__Words_14 = (measurements__V_21_21 + measurements__V_22_22);
#line 475 "measurements.m"
    {
#line 475 "measurements.m"
      return measurements__SumPI_6 = measurements__compress_profile_8_f_0(measurements__Exits_7, measurements__Fails_8, measurements__Redos_9, measurements__Excps_10, measurements__Quanta_11, measurements__CallSeqs_12, measurements__Allocs_13, measurements__Words_14);
    }
#line 466 "measurements.m"
    return measurements__SumPI_6;
#line 466 "measurements.m"
  }
#line 65 "measurements.m"
}

#line 63 "measurements.m"
MR_Word MR_CALL 
measurements__subtract_inherit_from_inherit_2_f_0(
#line 63 "measurements.m"
  MR_Word measurements__PI1_4,
#line 63 "measurements.m"
  MR_Word measurements__PI2_5)
#line 63 "measurements.m"
{
#line 459 "measurements.m"
  {
#line 459 "measurements.m"
    MR_bool measurements__succeeded;
#line 459 "measurements.m"
    MR_Word measurements__SumPI_6;
#line 459 "measurements.m"
    MR_Integer measurements__Quanta_7;
#line 459 "measurements.m"
    MR_Integer measurements__CallSeqs_8;
#line 459 "measurements.m"
    MR_Integer measurements__Allocs_9;
#line 459 "measurements.m"
    MR_Integer measurements__Words_10;
#line 459 "measurements.m"
    MR_Integer measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 0)));
#line 459 "measurements.m"
    MR_Integer measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
#line 459 "measurements.m"
    MR_Integer measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 1)));
#line 459 "measurements.m"
    MR_Integer measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 2)));
#line 459 "measurements.m"
    MR_Integer measurements__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 3)));
#line 459 "measurements.m"
    MR_Integer measurements__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
#line 459 "measurements.m"
    MR_Integer measurements__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
#line 459 "measurements.m"
    MR_Integer measurements__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));

#line 460 "measurements.m"
    measurements__Quanta_7 = (measurements__V_11_11 - measurements__V_12_12);
#line 461 "measurements.m"
    measurements__CallSeqs_8 = (measurements__V_20_20 - measurements__V_24_24);
#line 462 "measurements.m"
    measurements__Allocs_9 = (measurements__V_21_21 - measurements__V_25_25);
#line 463 "measurements.m"
    measurements__Words_10 = (measurements__V_22_22 - measurements__V_26_26);
#line 464 "measurements.m"
    {
#line 464 "measurements.m"
      measurements__SumPI_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 464 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 0) = ((MR_Box) (measurements__Quanta_7));
#line 464 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 1) = ((MR_Box) (measurements__CallSeqs_8));
#line 464 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 2) = ((MR_Box) (measurements__Allocs_9));
#line 464 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 3) = ((MR_Box) (measurements__Words_10));
#line 464 "measurements.m"
    }
#line 459 "measurements.m"
    return measurements__SumPI_6;
#line 459 "measurements.m"
  }
#line 63 "measurements.m"
}

#line 61 "measurements.m"
MR_Word MR_CALL 
measurements__subtract_own_from_inherit_2_f_0(
#line 61 "measurements.m"
  MR_Word measurements__PI1_4,
#line 61 "measurements.m"
  MR_Word measurements__PI2_5)
#line 61 "measurements.m"
{
#line 452 "measurements.m"
  {
#line 452 "measurements.m"
    MR_bool measurements__succeeded;
#line 452 "measurements.m"
    MR_Word measurements__SumPI_6;
#line 452 "measurements.m"
    MR_Integer measurements__Quanta_7;
#line 452 "measurements.m"
    MR_Integer measurements__CallSeqs_8;
#line 452 "measurements.m"
    MR_Integer measurements__Allocs_9;
#line 452 "measurements.m"
    MR_Integer measurements__Words_10;
#line 452 "measurements.m"
    MR_Integer measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 0)));
#line 452 "measurements.m"
    MR_Integer measurements__V_12_12;
#line 452 "measurements.m"
    MR_Integer measurements__V_14_14;
#line 452 "measurements.m"
    MR_Integer measurements__V_16_16;
#line 452 "measurements.m"
    MR_Integer measurements__V_18_18;
#line 452 "measurements.m"
    MR_Integer measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 1)));
#line 452 "measurements.m"
    MR_Integer measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 2)));
#line 452 "measurements.m"
    MR_Integer measurements__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 3)));

#line 11541 "measurements.c"
#line 11542 "measurements.c"
    switch (MR_tag((MR_Word) measurements__PI1_4)) {
#line 11544 "measurements.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 11546 "measurements.c"
      case (MR_Integer) 0:
#line 405 "measurements.m"
        {
#line 405 "measurements.m"
          MR_Integer measurements__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
#line 405 "measurements.m"
          MR_Integer measurements__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
#line 405 "measurements.m"
          MR_Integer measurements__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
#line 405 "measurements.m"
          MR_Integer measurements__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));

#line 405 "measurements.m"
          measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 4)));
#line 405 "measurements.m"
          measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 5)));
#line 405 "measurements.m"
          measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 6)));
#line 405 "measurements.m"
          measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 7)));
#line 405 "measurements.m"
        }
#line 11569 "measurements.c"
        break;
#line 11571 "measurements.c"
      case (MR_Integer) 1:
#line 404 "measurements.m"
        {
#line 404 "measurements.m"
          MR_Integer measurements__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 0)));

#line 404 "measurements.m"
          measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 1)));
#line 404 "measurements.m"
          measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 2)));
#line 404 "measurements.m"
          measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 3)));
#line 404 "measurements.m"
          measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 4)));
#line 404 "measurements.m"
        }
#line 11588 "measurements.c"
        break;
#line 11590 "measurements.c"
      case (MR_Integer) 2:
#line 11592 "measurements.c"
        {
#line 408 "measurements.m"
          MR_Integer measurements__V_50_50;

#line 403 "measurements.m"
          measurements__V_12_12 = (MR_Integer) 0;
#line 408 "measurements.m"
          measurements__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 0)));
#line 408 "measurements.m"
          measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 1)));
#line 408 "measurements.m"
          measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 2)));
#line 408 "measurements.m"
          measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 3)));
#line 11607 "measurements.c"
        }
#line 11609 "measurements.c"
        break;
#line 11611 "measurements.c"
      case (MR_Integer) 3:
#line 11613 "measurements.c"
        {
#line 407 "measurements.m"
          MR_Integer measurements__V_47_47;
#line 407 "measurements.m"
          MR_Integer measurements__V_48_48;

#line 402 "measurements.m"
          measurements__V_12_12 = (MR_Integer) 0;
#line 407 "measurements.m"
          measurements__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 0)));
#line 407 "measurements.m"
          measurements__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 1)));
#line 407 "measurements.m"
          measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 2)));
#line 412 "measurements.m"
          measurements__V_16_16 = (MR_Integer) 0;
#line 417 "measurements.m"
          measurements__V_18_18 = (MR_Integer) 0;
#line 11632 "measurements.c"
        }
#line 11634 "measurements.c"
        break;
#line 11636 "measurements.c"
    }
#line 453 "measurements.m"
    measurements__Quanta_7 = (measurements__V_11_11 - measurements__V_12_12);
#line 454 "measurements.m"
    measurements__CallSeqs_8 = (measurements__V_20_20 - measurements__V_14_14);
#line 455 "measurements.m"
    measurements__Allocs_9 = (measurements__V_21_21 - measurements__V_16_16);
#line 456 "measurements.m"
    measurements__Words_10 = (measurements__V_22_22 - measurements__V_18_18);
#line 457 "measurements.m"
    {
#line 457 "measurements.m"
      measurements__SumPI_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 457 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 0) = ((MR_Box) (measurements__Quanta_7));
#line 457 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 1) = ((MR_Box) (measurements__CallSeqs_8));
#line 457 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 2) = ((MR_Box) (measurements__Allocs_9));
#line 457 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 3) = ((MR_Box) (measurements__Words_10));
#line 457 "measurements.m"
    }
#line 452 "measurements.m"
    return measurements__SumPI_6;
#line 452 "measurements.m"
  }
#line 61 "measurements.m"
}

#line 59 "measurements.m"
MR_Word MR_CALL 
measurements__add_own_to_inherit_2_f_0(
#line 59 "measurements.m"
  MR_Word measurements__PI1_4,
#line 59 "measurements.m"
  MR_Word measurements__PI2_5)
#line 59 "measurements.m"
{
#line 445 "measurements.m"
  {
#line 445 "measurements.m"
    MR_bool measurements__succeeded;
#line 445 "measurements.m"
    MR_Word measurements__SumPI_6;
#line 445 "measurements.m"
    MR_Integer measurements__Quanta_7;
#line 445 "measurements.m"
    MR_Integer measurements__CallSeqs_8;
#line 445 "measurements.m"
    MR_Integer measurements__Allocs_9;
#line 445 "measurements.m"
    MR_Integer measurements__Words_10;
#line 445 "measurements.m"
    MR_Integer measurements__V_11_11;
#line 445 "measurements.m"
    MR_Integer measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 0)));
#line 445 "measurements.m"
    MR_Integer measurements__V_13_13;
#line 445 "measurements.m"
    MR_Integer measurements__V_15_15;
#line 445 "measurements.m"
    MR_Integer measurements__V_17_17;
#line 445 "measurements.m"
    MR_Integer measurements__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 1)));
#line 445 "measurements.m"
    MR_Integer measurements__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 2)));
#line 445 "measurements.m"
    MR_Integer measurements__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 3)));

#line 11707 "measurements.c"
#line 11708 "measurements.c"
    switch (MR_tag((MR_Word) measurements__PI1_4)) {
#line 11710 "measurements.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 11712 "measurements.c"
      case (MR_Integer) 0:
#line 405 "measurements.m"
        {
#line 405 "measurements.m"
          MR_Integer measurements__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
#line 405 "measurements.m"
          MR_Integer measurements__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
#line 405 "measurements.m"
          MR_Integer measurements__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
#line 405 "measurements.m"
          MR_Integer measurements__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));

#line 405 "measurements.m"
          measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 4)));
#line 405 "measurements.m"
          measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 5)));
#line 405 "measurements.m"
          measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 6)));
#line 405 "measurements.m"
          measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 7)));
#line 405 "measurements.m"
        }
#line 11735 "measurements.c"
        break;
#line 11737 "measurements.c"
      case (MR_Integer) 1:
#line 404 "measurements.m"
        {
#line 404 "measurements.m"
          MR_Integer measurements__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 0)));

#line 404 "measurements.m"
          measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 1)));
#line 404 "measurements.m"
          measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 2)));
#line 404 "measurements.m"
          measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 3)));
#line 404 "measurements.m"
          measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__PI1_4, (MR_Integer) 4)));
#line 404 "measurements.m"
        }
#line 11754 "measurements.c"
        break;
#line 11756 "measurements.c"
      case (MR_Integer) 2:
#line 11758 "measurements.c"
        {
#line 408 "measurements.m"
          MR_Integer measurements__V_46_46;

#line 403 "measurements.m"
          measurements__V_11_11 = (MR_Integer) 0;
#line 408 "measurements.m"
          measurements__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 0)));
#line 408 "measurements.m"
          measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 1)));
#line 408 "measurements.m"
          measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 2)));
#line 408 "measurements.m"
          measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__PI1_4, (MR_Integer) 3)));
#line 11773 "measurements.c"
        }
#line 11775 "measurements.c"
        break;
#line 11777 "measurements.c"
      case (MR_Integer) 3:
#line 11779 "measurements.c"
        {
#line 407 "measurements.m"
          MR_Integer measurements__V_43_43;
#line 407 "measurements.m"
          MR_Integer measurements__V_44_44;

#line 402 "measurements.m"
          measurements__V_11_11 = (MR_Integer) 0;
#line 407 "measurements.m"
          measurements__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 0)));
#line 407 "measurements.m"
          measurements__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 1)));
#line 407 "measurements.m"
          measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__PI1_4, (MR_Integer) 2)));
#line 412 "measurements.m"
          measurements__V_15_15 = (MR_Integer) 0;
#line 417 "measurements.m"
          measurements__V_17_17 = (MR_Integer) 0;
#line 11798 "measurements.c"
        }
#line 11800 "measurements.c"
        break;
#line 11802 "measurements.c"
    }
#line 446 "measurements.m"
    measurements__Quanta_7 = (measurements__V_11_11 + measurements__V_12_12);
#line 447 "measurements.m"
    measurements__CallSeqs_8 = (measurements__V_13_13 + measurements__V_40_40);
#line 448 "measurements.m"
    measurements__Allocs_9 = (measurements__V_15_15 + measurements__V_41_41);
#line 449 "measurements.m"
    measurements__Words_10 = (measurements__V_17_17 + measurements__V_42_42);
#line 450 "measurements.m"
    {
#line 450 "measurements.m"
      measurements__SumPI_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 450 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 0) = ((MR_Box) (measurements__Quanta_7));
#line 450 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 1) = ((MR_Box) (measurements__CallSeqs_8));
#line 450 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 2) = ((MR_Box) (measurements__Allocs_9));
#line 450 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 3) = ((MR_Box) (measurements__Words_10));
#line 450 "measurements.m"
    }
#line 445 "measurements.m"
    return measurements__SumPI_6;
#line 445 "measurements.m"
  }
#line 59 "measurements.m"
}

#line 57 "measurements.m"
MR_Word MR_CALL 
measurements__add_inherit_to_inherit_2_f_0(
#line 57 "measurements.m"
  MR_Word measurements__PI1_4,
#line 57 "measurements.m"
  MR_Word measurements__PI2_5)
#line 57 "measurements.m"
{
#line 438 "measurements.m"
  {
#line 438 "measurements.m"
    MR_bool measurements__succeeded;
#line 438 "measurements.m"
    MR_Word measurements__SumPI_6;
#line 438 "measurements.m"
    MR_Integer measurements__Quanta_7;
#line 438 "measurements.m"
    MR_Integer measurements__CallSeqs_8;
#line 438 "measurements.m"
    MR_Integer measurements__Allocs_9;
#line 438 "measurements.m"
    MR_Integer measurements__Words_10;
#line 438 "measurements.m"
    MR_Integer measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 0)));
#line 438 "measurements.m"
    MR_Integer measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 0)));
#line 438 "measurements.m"
    MR_Integer measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 1)));
#line 438 "measurements.m"
    MR_Integer measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 2)));
#line 438 "measurements.m"
    MR_Integer measurements__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI1_4, (MR_Integer) 3)));
#line 438 "measurements.m"
    MR_Integer measurements__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 1)));
#line 438 "measurements.m"
    MR_Integer measurements__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 2)));
#line 438 "measurements.m"
    MR_Integer measurements__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__PI2_5, (MR_Integer) 3)));

#line 439 "measurements.m"
    measurements__Quanta_7 = (measurements__V_11_11 + measurements__V_12_12);
#line 440 "measurements.m"
    measurements__CallSeqs_8 = (measurements__V_20_20 + measurements__V_24_24);
#line 441 "measurements.m"
    measurements__Allocs_9 = (measurements__V_21_21 + measurements__V_25_25);
#line 442 "measurements.m"
    measurements__Words_10 = (measurements__V_22_22 + measurements__V_26_26);
#line 443 "measurements.m"
    {
#line 443 "measurements.m"
      measurements__SumPI_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 443 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 0) = ((MR_Box) (measurements__Quanta_7));
#line 443 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 1) = ((MR_Box) (measurements__CallSeqs_8));
#line 443 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 2) = ((MR_Box) (measurements__Allocs_9));
#line 443 "measurements.m"
      MR_hl_field(MR_mktag(0), measurements__SumPI_6, 3) = ((MR_Box) (measurements__Words_10));
#line 443 "measurements.m"
    }
#line 438 "measurements.m"
    return measurements__SumPI_6;
#line 438 "measurements.m"
  }
#line 57 "measurements.m"
}

#line 55 "measurements.m"
MR_bool MR_CALL 
measurements__is_zero_inherit_prof_info_1_p_0(
#line 55 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 55 "measurements.m"
{
#line 436 "measurements.m"
  {
#line 436 "measurements.m"
    MR_bool measurements__succeeded;
#line 436 "measurements.m"
    MR_Integer measurements__V_2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 436 "measurements.m"
    MR_Integer measurements__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 436 "measurements.m"
    MR_Integer measurements__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 436 "measurements.m"
    MR_Integer measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));

#line 436 "measurements.m"
    measurements__succeeded = (measurements__V_2_2 == (MR_Integer) 0);
#line 436 "measurements.m"
    if (measurements__succeeded)
#line 436 "measurements.m"
      {
#line 436 "measurements.m"
        measurements__succeeded = (measurements__V_3_3 == (MR_Integer) 0);
#line 436 "measurements.m"
        if (measurements__succeeded)
#line 436 "measurements.m"
          {
#line 436 "measurements.m"
            measurements__succeeded = (measurements__V_4_4 == (MR_Integer) 0);
#line 436 "measurements.m"
            if (measurements__succeeded)
#line 436 "measurements.m"
              measurements__succeeded = (measurements__V_5_5 == (MR_Integer) 0);
#line 436 "measurements.m"
          }
#line 436 "measurements.m"
      }
#line 436 "measurements.m"
    return measurements__succeeded;
#line 436 "measurements.m"
  }
#line 55 "measurements.m"
}

#line 53 "measurements.m"
MR_Word MR_CALL 
measurements__zero_inherit_prof_info_0_f_0(void)
#line 53 "measurements.m"
{
#line 434 "measurements.m"
  {
#line 434 "measurements.m"
    MR_bool measurements__succeeded;

#line 434 "measurements.m"
    return (MR_Word) &measurements_scalar_common_2[0];
#line 434 "measurements.m"
  }
#line 53 "measurements.m"
}

#line 51 "measurements.m"
MR_Integer MR_CALL 
measurements__inherit_words_1_f_0(
#line 51 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 51 "measurements.m"
{
#line 432 "measurements.m"
  {
#line 432 "measurements.m"
    MR_bool measurements__succeeded;
#line 432 "measurements.m"
    MR_Integer measurements__Words_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 432 "measurements.m"
    MR_Integer measurements__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 432 "measurements.m"
    MR_Integer measurements__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 432 "measurements.m"
    MR_Integer measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));

#line 432 "measurements.m"
    return measurements__Words_6;
#line 432 "measurements.m"
  }
#line 51 "measurements.m"
}

#line 50 "measurements.m"
MR_Integer MR_CALL 
measurements__inherit_allocs_1_f_0(
#line 50 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 50 "measurements.m"
{
#line 431 "measurements.m"
  {
#line 431 "measurements.m"
    MR_bool measurements__succeeded;
#line 431 "measurements.m"
    MR_Integer measurements__Allocs_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 431 "measurements.m"
    MR_Integer measurements__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 431 "measurements.m"
    MR_Integer measurements__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 431 "measurements.m"
    MR_Integer measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));

#line 431 "measurements.m"
    return measurements__Allocs_5;
#line 431 "measurements.m"
  }
#line 50 "measurements.m"
}

#line 49 "measurements.m"
MR_Integer MR_CALL 
measurements__inherit_callseqs_1_f_0(
#line 49 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 49 "measurements.m"
{
#line 430 "measurements.m"
  {
#line 430 "measurements.m"
    MR_bool measurements__succeeded;
#line 430 "measurements.m"
    MR_Integer measurements__CallSeqs_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 430 "measurements.m"
    MR_Integer measurements__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 430 "measurements.m"
    MR_Integer measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 430 "measurements.m"
    MR_Integer measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));

#line 430 "measurements.m"
    return measurements__CallSeqs_4;
#line 430 "measurements.m"
  }
#line 49 "measurements.m"
}

#line 48 "measurements.m"
MR_Integer MR_CALL 
measurements__inherit_quanta_1_f_0(
#line 48 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 48 "measurements.m"
{
#line 429 "measurements.m"
  {
#line 429 "measurements.m"
    MR_bool measurements__succeeded;
#line 429 "measurements.m"
    MR_Integer measurements__Quanta_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 429 "measurements.m"
    MR_Integer measurements__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 429 "measurements.m"
    MR_Integer measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 429 "measurements.m"
    MR_Integer measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));

#line 429 "measurements.m"
    return measurements__Quanta_3;
#line 429 "measurements.m"
  }
#line 48 "measurements.m"
}

#line 46 "measurements.m"
MR_bool MR_CALL 
measurements__is_zero_own_prof_info_1_p_0(
#line 46 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 46 "measurements.m"
{
#line 424 "measurements.m"
  {
#line 424 "measurements.m"
    MR_bool measurements__succeeded;

#line 424 "measurements.m"
#line 424 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 424 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 424 "measurements.m"
      case (MR_Integer) 0:
#line 424 "measurements.m"
        {
#line 424 "measurements.m"
          MR_Integer measurements__V_2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 424 "measurements.m"
          MR_Integer measurements__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 424 "measurements.m"
          MR_Integer measurements__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 424 "measurements.m"
          MR_Integer measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 424 "measurements.m"
          MR_Integer measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 424 "measurements.m"
          MR_Integer measurements__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 424 "measurements.m"
          MR_Integer measurements__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
#line 424 "measurements.m"
          MR_Integer measurements__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));

#line 424 "measurements.m"
          measurements__succeeded = (measurements__V_2_2 == (MR_Integer) 0);
#line 424 "measurements.m"
          if (measurements__succeeded)
#line 424 "measurements.m"
            {
#line 424 "measurements.m"
              measurements__succeeded = (measurements__V_3_3 == (MR_Integer) 0);
#line 424 "measurements.m"
              if (measurements__succeeded)
#line 424 "measurements.m"
                {
#line 424 "measurements.m"
                  measurements__succeeded = (measurements__V_4_4 == (MR_Integer) 0);
#line 424 "measurements.m"
                  if (measurements__succeeded)
#line 424 "measurements.m"
                    {
#line 424 "measurements.m"
                      measurements__succeeded = (measurements__V_5_5 == (MR_Integer) 0);
#line 424 "measurements.m"
                      if (measurements__succeeded)
#line 424 "measurements.m"
                        {
#line 424 "measurements.m"
                          measurements__succeeded = (measurements__V_6_6 == (MR_Integer) 0);
#line 424 "measurements.m"
                          if (measurements__succeeded)
#line 424 "measurements.m"
                            {
#line 424 "measurements.m"
                              measurements__succeeded = (measurements__V_7_7 == (MR_Integer) 0);
#line 424 "measurements.m"
                              if (measurements__succeeded)
#line 424 "measurements.m"
                                {
#line 424 "measurements.m"
                                  measurements__succeeded = (measurements__V_8_8 == (MR_Integer) 0);
#line 424 "measurements.m"
                                  if (measurements__succeeded)
#line 424 "measurements.m"
                                    measurements__succeeded = (measurements__V_9_9 == (MR_Integer) 0);
#line 424 "measurements.m"
                                }
#line 424 "measurements.m"
                            }
#line 424 "measurements.m"
                        }
#line 424 "measurements.m"
                    }
#line 424 "measurements.m"
                }
#line 424 "measurements.m"
            }
#line 424 "measurements.m"
        }
#line 424 "measurements.m"
        break;
#line 424 "measurements.m"
      case (MR_Integer) 1:
#line 425 "measurements.m"
        {
#line 425 "measurements.m"
          MR_Integer measurements__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 425 "measurements.m"
          MR_Integer measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 425 "measurements.m"
          MR_Integer measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 425 "measurements.m"
          MR_Integer measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 425 "measurements.m"
          MR_Integer measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));

#line 425 "measurements.m"
          measurements__succeeded = (measurements__V_10_10 == (MR_Integer) 0);
#line 425 "measurements.m"
          if (measurements__succeeded)
#line 425 "measurements.m"
            {
#line 425 "measurements.m"
              measurements__succeeded = (measurements__V_11_11 == (MR_Integer) 0);
#line 425 "measurements.m"
              if (measurements__succeeded)
#line 425 "measurements.m"
                {
#line 425 "measurements.m"
                  measurements__succeeded = (measurements__V_12_12 == (MR_Integer) 0);
#line 425 "measurements.m"
                  if (measurements__succeeded)
#line 425 "measurements.m"
                    {
#line 425 "measurements.m"
                      measurements__succeeded = (measurements__V_13_13 == (MR_Integer) 0);
#line 425 "measurements.m"
                      if (measurements__succeeded)
#line 425 "measurements.m"
                        measurements__succeeded = (measurements__V_14_14 == (MR_Integer) 0);
#line 425 "measurements.m"
                    }
#line 425 "measurements.m"
                }
#line 425 "measurements.m"
            }
#line 425 "measurements.m"
        }
#line 424 "measurements.m"
        break;
#line 424 "measurements.m"
      case (MR_Integer) 2:
#line 426 "measurements.m"
        {
#line 426 "measurements.m"
          MR_Integer measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 426 "measurements.m"
          MR_Integer measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 426 "measurements.m"
          MR_Integer measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 426 "measurements.m"
          MR_Integer measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));

#line 426 "measurements.m"
          measurements__succeeded = (measurements__V_15_15 == (MR_Integer) 0);
#line 426 "measurements.m"
          if (measurements__succeeded)
#line 426 "measurements.m"
            {
#line 426 "measurements.m"
              measurements__succeeded = (measurements__V_16_16 == (MR_Integer) 0);
#line 426 "measurements.m"
              if (measurements__succeeded)
#line 426 "measurements.m"
                {
#line 426 "measurements.m"
                  measurements__succeeded = (measurements__V_17_17 == (MR_Integer) 0);
#line 426 "measurements.m"
                  if (measurements__succeeded)
#line 426 "measurements.m"
                    measurements__succeeded = (measurements__V_18_18 == (MR_Integer) 0);
#line 426 "measurements.m"
                }
#line 426 "measurements.m"
            }
#line 426 "measurements.m"
        }
#line 424 "measurements.m"
        break;
#line 424 "measurements.m"
      case (MR_Integer) 3:
#line 427 "measurements.m"
        {
#line 427 "measurements.m"
          MR_Integer measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 427 "measurements.m"
          MR_Integer measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 427 "measurements.m"
          MR_Integer measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));

#line 427 "measurements.m"
          measurements__succeeded = (measurements__V_19_19 == (MR_Integer) 0);
#line 427 "measurements.m"
          if (measurements__succeeded)
#line 427 "measurements.m"
            {
#line 427 "measurements.m"
              measurements__succeeded = (measurements__V_20_20 == (MR_Integer) 0);
#line 427 "measurements.m"
              if (measurements__succeeded)
#line 427 "measurements.m"
                measurements__succeeded = (measurements__V_21_21 == (MR_Integer) 0);
#line 427 "measurements.m"
            }
#line 427 "measurements.m"
        }
#line 424 "measurements.m"
        break;
#line 424 "measurements.m"
    }
#line 424 "measurements.m"
    return measurements__succeeded;
#line 424 "measurements.m"
  }
#line 46 "measurements.m"
}

#line 44 "measurements.m"
MR_Word MR_CALL 
measurements__zero_own_prof_info_0_f_0(void)
#line 44 "measurements.m"
{
#line 422 "measurements.m"
  {
#line 422 "measurements.m"
    MR_bool measurements__succeeded;

#line 422 "measurements.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &measurements_scalar_common_3[0]);
#line 422 "measurements.m"
  }
#line 44 "measurements.m"
}

#line 42 "measurements.m"
MR_Integer MR_CALL 
measurements__words_1_f_0(
#line 42 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 42 "measurements.m"
{
#line 417 "measurements.m"
  {
#line 417 "measurements.m"
    MR_bool measurements__succeeded;
#line 417 "measurements.m"
    MR_Integer measurements__HeadVar__2_2;

#line 417 "measurements.m"
#line 417 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 417 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 417 "measurements.m"
      case (MR_Integer) 0:
#line 420 "measurements.m"
        {
#line 420 "measurements.m"
          MR_Integer measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 420 "measurements.m"
          MR_Integer measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 420 "measurements.m"
          MR_Integer measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 420 "measurements.m"
          MR_Integer measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 420 "measurements.m"
          MR_Integer measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 420 "measurements.m"
          MR_Integer measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 420 "measurements.m"
          MR_Integer measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));

#line 420 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
#line 420 "measurements.m"
        }
#line 417 "measurements.m"
        break;
#line 417 "measurements.m"
      case (MR_Integer) 1:
#line 419 "measurements.m"
        {
#line 419 "measurements.m"
          MR_Integer measurements__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 419 "measurements.m"
          MR_Integer measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 419 "measurements.m"
          MR_Integer measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 419 "measurements.m"
          MR_Integer measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));

#line 419 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 419 "measurements.m"
        }
#line 417 "measurements.m"
        break;
#line 417 "measurements.m"
      case (MR_Integer) 2:
#line 418 "measurements.m"
        {
#line 418 "measurements.m"
          MR_Integer measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 418 "measurements.m"
          MR_Integer measurements__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 418 "measurements.m"
          MR_Integer measurements__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));

#line 418 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 418 "measurements.m"
        }
#line 417 "measurements.m"
        break;
#line 417 "measurements.m"
      case (MR_Integer) 3:
#line 417 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Integer) 0;
#line 417 "measurements.m"
        break;
#line 417 "measurements.m"
    }
#line 417 "measurements.m"
    return measurements__HeadVar__2_2;
#line 417 "measurements.m"
  }
#line 42 "measurements.m"
}

#line 41 "measurements.m"
MR_Integer MR_CALL 
measurements__allocs_1_f_0(
#line 41 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 41 "measurements.m"
{
#line 412 "measurements.m"
  {
#line 412 "measurements.m"
    MR_bool measurements__succeeded;
#line 412 "measurements.m"
    MR_Integer measurements__HeadVar__2_2;

#line 412 "measurements.m"
#line 412 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 412 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 412 "measurements.m"
      case (MR_Integer) 0:
#line 415 "measurements.m"
        {
#line 415 "measurements.m"
          MR_Integer measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 415 "measurements.m"
          MR_Integer measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 415 "measurements.m"
          MR_Integer measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 415 "measurements.m"
          MR_Integer measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 415 "measurements.m"
          MR_Integer measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 415 "measurements.m"
          MR_Integer measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 415 "measurements.m"
          MR_Integer measurements__V_22_22;

#line 415 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
#line 415 "measurements.m"
          measurements__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
#line 415 "measurements.m"
        }
#line 412 "measurements.m"
        break;
#line 412 "measurements.m"
      case (MR_Integer) 1:
#line 414 "measurements.m"
        {
#line 414 "measurements.m"
          MR_Integer measurements__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 414 "measurements.m"
          MR_Integer measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 414 "measurements.m"
          MR_Integer measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 414 "measurements.m"
          MR_Integer measurements__V_14_14;

#line 414 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 414 "measurements.m"
          measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 414 "measurements.m"
        }
#line 412 "measurements.m"
        break;
#line 412 "measurements.m"
      case (MR_Integer) 2:
#line 413 "measurements.m"
        {
#line 413 "measurements.m"
          MR_Integer measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "measurements.m"
          MR_Integer measurements__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 413 "measurements.m"
          MR_Integer measurements__V_9_9;

#line 413 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 413 "measurements.m"
          measurements__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 413 "measurements.m"
        }
#line 412 "measurements.m"
        break;
#line 412 "measurements.m"
      case (MR_Integer) 3:
#line 412 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Integer) 0;
#line 412 "measurements.m"
        break;
#line 412 "measurements.m"
    }
#line 412 "measurements.m"
    return measurements__HeadVar__2_2;
#line 412 "measurements.m"
  }
#line 41 "measurements.m"
}

#line 40 "measurements.m"
MR_Integer MR_CALL 
measurements__callseqs_1_f_0(
#line 40 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 40 "measurements.m"
{
#line 407 "measurements.m"
  {
#line 407 "measurements.m"
    MR_bool measurements__succeeded;
#line 407 "measurements.m"
    MR_Integer measurements__CallSeqs_2;

#line 407 "measurements.m"
#line 407 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 407 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 407 "measurements.m"
      case (MR_Integer) 0:
#line 410 "measurements.m"
        {
#line 410 "measurements.m"
          MR_Integer measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 410 "measurements.m"
          MR_Integer measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 410 "measurements.m"
          MR_Integer measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 410 "measurements.m"
          MR_Integer measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 410 "measurements.m"
          MR_Integer measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 410 "measurements.m"
          MR_Integer measurements__V_21_21;
#line 410 "measurements.m"
          MR_Integer measurements__V_22_22;

#line 410 "measurements.m"
          measurements__CallSeqs_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 410 "measurements.m"
          measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
#line 410 "measurements.m"
          measurements__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
#line 410 "measurements.m"
        }
#line 407 "measurements.m"
        break;
#line 407 "measurements.m"
      case (MR_Integer) 1:
#line 409 "measurements.m"
        {
#line 409 "measurements.m"
          MR_Integer measurements__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 409 "measurements.m"
          MR_Integer measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 409 "measurements.m"
          MR_Integer measurements__V_13_13;
#line 409 "measurements.m"
          MR_Integer measurements__V_14_14;

#line 409 "measurements.m"
          measurements__CallSeqs_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 409 "measurements.m"
          measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 409 "measurements.m"
          measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 409 "measurements.m"
        }
#line 407 "measurements.m"
        break;
#line 407 "measurements.m"
      case (MR_Integer) 2:
#line 408 "measurements.m"
        {
#line 408 "measurements.m"
          MR_Integer measurements__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 408 "measurements.m"
          MR_Integer measurements__V_8_8;
#line 408 "measurements.m"
          MR_Integer measurements__V_9_9;

#line 408 "measurements.m"
          measurements__CallSeqs_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 408 "measurements.m"
          measurements__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 408 "measurements.m"
          measurements__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 408 "measurements.m"
        }
#line 407 "measurements.m"
        break;
#line 407 "measurements.m"
      case (MR_Integer) 3:
#line 407 "measurements.m"
        {
#line 407 "measurements.m"
          MR_Integer measurements__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 407 "measurements.m"
          MR_Integer measurements__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));

#line 407 "measurements.m"
          measurements__CallSeqs_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 407 "measurements.m"
        }
#line 407 "measurements.m"
        break;
#line 407 "measurements.m"
    }
#line 407 "measurements.m"
    return measurements__CallSeqs_2;
#line 407 "measurements.m"
  }
#line 40 "measurements.m"
}

#line 39 "measurements.m"
MR_Integer MR_CALL 
measurements__quanta_1_f_0(
#line 39 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 39 "measurements.m"
{
#line 402 "measurements.m"
  {
#line 402 "measurements.m"
    MR_bool measurements__succeeded;
#line 402 "measurements.m"
    MR_Integer measurements__HeadVar__2_2;

#line 402 "measurements.m"
#line 402 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 402 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 402 "measurements.m"
      case (MR_Integer) 0:
#line 405 "measurements.m"
        {
#line 405 "measurements.m"
          MR_Integer measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 405 "measurements.m"
          MR_Integer measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 405 "measurements.m"
          MR_Integer measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 405 "measurements.m"
          MR_Integer measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 405 "measurements.m"
          MR_Integer measurements__V_20_20;
#line 405 "measurements.m"
          MR_Integer measurements__V_21_21;
#line 405 "measurements.m"
          MR_Integer measurements__V_22_22;

#line 405 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 405 "measurements.m"
          measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 405 "measurements.m"
          measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
#line 405 "measurements.m"
          measurements__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
#line 405 "measurements.m"
        }
#line 402 "measurements.m"
        break;
#line 402 "measurements.m"
      case (MR_Integer) 1:
#line 404 "measurements.m"
        {
#line 404 "measurements.m"
          MR_Integer measurements__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 404 "measurements.m"
          MR_Integer measurements__V_12_12;
#line 404 "measurements.m"
          MR_Integer measurements__V_13_13;
#line 404 "measurements.m"
          MR_Integer measurements__V_14_14;

#line 404 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 404 "measurements.m"
          measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 404 "measurements.m"
          measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 404 "measurements.m"
          measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 404 "measurements.m"
        }
#line 402 "measurements.m"
        break;
#line 402 "measurements.m"
      case (MR_Integer) 2:
#line 403 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Integer) 0;
#line 402 "measurements.m"
        break;
#line 402 "measurements.m"
      case (MR_Integer) 3:
#line 402 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Integer) 0;
#line 402 "measurements.m"
        break;
#line 402 "measurements.m"
    }
#line 402 "measurements.m"
    return measurements__HeadVar__2_2;
#line 402 "measurements.m"
  }
#line 39 "measurements.m"
}

#line 38 "measurements.m"
MR_Integer MR_CALL 
measurements__excps_1_f_0(
#line 38 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 38 "measurements.m"
{
#line 397 "measurements.m"
  {
#line 397 "measurements.m"
    MR_bool measurements__succeeded;
#line 397 "measurements.m"
    MR_Integer measurements__HeadVar__2_2;

#line 397 "measurements.m"
#line 397 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 397 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 397 "measurements.m"
      case (MR_Integer) 0:
#line 400 "measurements.m"
        {
#line 400 "measurements.m"
          MR_Integer measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 400 "measurements.m"
          MR_Integer measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 400 "measurements.m"
          MR_Integer measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 400 "measurements.m"
          MR_Integer measurements__V_19_19;
#line 400 "measurements.m"
          MR_Integer measurements__V_20_20;
#line 400 "measurements.m"
          MR_Integer measurements__V_21_21;
#line 400 "measurements.m"
          MR_Integer measurements__V_22_22;

#line 400 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 400 "measurements.m"
          measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 400 "measurements.m"
          measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 400 "measurements.m"
          measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
#line 400 "measurements.m"
          measurements__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
#line 400 "measurements.m"
        }
#line 397 "measurements.m"
        break;
#line 397 "measurements.m"
      case (MR_Integer) 1:
#line 399 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Integer) 0;
#line 397 "measurements.m"
        break;
#line 397 "measurements.m"
      case (MR_Integer) 2:
#line 398 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Integer) 0;
#line 397 "measurements.m"
        break;
#line 397 "measurements.m"
      case (MR_Integer) 3:
#line 397 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Integer) 0;
#line 397 "measurements.m"
        break;
#line 397 "measurements.m"
    }
#line 397 "measurements.m"
    return measurements__HeadVar__2_2;
#line 397 "measurements.m"
  }
#line 38 "measurements.m"
}

#line 37 "measurements.m"
MR_Integer MR_CALL 
measurements__redos_1_f_0(
#line 37 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 37 "measurements.m"
{
#line 392 "measurements.m"
  {
#line 392 "measurements.m"
    MR_bool measurements__succeeded;
#line 392 "measurements.m"
    MR_Integer measurements__HeadVar__2_2;

#line 392 "measurements.m"
#line 392 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 392 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 392 "measurements.m"
      case (MR_Integer) 0:
#line 395 "measurements.m"
        {
#line 395 "measurements.m"
          MR_Integer measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 395 "measurements.m"
          MR_Integer measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 395 "measurements.m"
          MR_Integer measurements__V_18_18;
#line 395 "measurements.m"
          MR_Integer measurements__V_19_19;
#line 395 "measurements.m"
          MR_Integer measurements__V_20_20;
#line 395 "measurements.m"
          MR_Integer measurements__V_21_21;
#line 395 "measurements.m"
          MR_Integer measurements__V_22_22;

#line 395 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 395 "measurements.m"
          measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 395 "measurements.m"
          measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 395 "measurements.m"
          measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 395 "measurements.m"
          measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
#line 395 "measurements.m"
          measurements__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
#line 395 "measurements.m"
        }
#line 392 "measurements.m"
        break;
#line 392 "measurements.m"
      case (MR_Integer) 1:
#line 394 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Integer) 0;
#line 392 "measurements.m"
        break;
#line 392 "measurements.m"
      case (MR_Integer) 2:
#line 393 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Integer) 0;
#line 392 "measurements.m"
        break;
#line 392 "measurements.m"
      case (MR_Integer) 3:
#line 392 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Integer) 0;
#line 392 "measurements.m"
        break;
#line 392 "measurements.m"
    }
#line 392 "measurements.m"
    return measurements__HeadVar__2_2;
#line 392 "measurements.m"
  }
#line 37 "measurements.m"
}

#line 36 "measurements.m"
MR_Integer MR_CALL 
measurements__fails_1_f_0(
#line 36 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 36 "measurements.m"
{
#line 387 "measurements.m"
  {
#line 387 "measurements.m"
    MR_bool measurements__succeeded;
#line 387 "measurements.m"
    MR_Integer measurements__HeadVar__2_2;

#line 387 "measurements.m"
#line 387 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 387 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 387 "measurements.m"
      case (MR_Integer) 0:
#line 390 "measurements.m"
        {
#line 390 "measurements.m"
          MR_Integer measurements__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 390 "measurements.m"
          MR_Integer measurements__V_17_17;
#line 390 "measurements.m"
          MR_Integer measurements__V_18_18;
#line 390 "measurements.m"
          MR_Integer measurements__V_19_19;
#line 390 "measurements.m"
          MR_Integer measurements__V_20_20;
#line 390 "measurements.m"
          MR_Integer measurements__V_21_21;
#line 390 "measurements.m"
          MR_Integer measurements__V_22_22;

#line 390 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 390 "measurements.m"
          measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 390 "measurements.m"
          measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 390 "measurements.m"
          measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 390 "measurements.m"
          measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 390 "measurements.m"
          measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
#line 390 "measurements.m"
          measurements__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
#line 390 "measurements.m"
        }
#line 387 "measurements.m"
        break;
#line 387 "measurements.m"
      case (MR_Integer) 1:
#line 389 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Integer) 0;
#line 387 "measurements.m"
        break;
#line 387 "measurements.m"
      case (MR_Integer) 2:
#line 388 "measurements.m"
        measurements__HeadVar__2_2 = (MR_Integer) 0;
#line 387 "measurements.m"
        break;
#line 387 "measurements.m"
      case (MR_Integer) 3:
#line 387 "measurements.m"
        {
#line 387 "measurements.m"
          MR_Integer measurements__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 387 "measurements.m"
          MR_Integer measurements__V_5_5;

#line 387 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 387 "measurements.m"
          measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 387 "measurements.m"
        }
#line 387 "measurements.m"
        break;
#line 387 "measurements.m"
    }
#line 387 "measurements.m"
    return measurements__HeadVar__2_2;
#line 387 "measurements.m"
  }
#line 36 "measurements.m"
}

#line 35 "measurements.m"
MR_Integer MR_CALL 
measurements__exits_1_f_0(
#line 35 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 35 "measurements.m"
{
#line 382 "measurements.m"
  {
#line 382 "measurements.m"
    MR_bool measurements__succeeded;
#line 382 "measurements.m"
    MR_Integer measurements__Exits_2;

#line 382 "measurements.m"
#line 382 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 382 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 382 "measurements.m"
      case (MR_Integer) 0:
#line 385 "measurements.m"
        {
#line 385 "measurements.m"
          MR_Integer measurements__V_16_16;
#line 385 "measurements.m"
          MR_Integer measurements__V_17_17;
#line 385 "measurements.m"
          MR_Integer measurements__V_18_18;
#line 385 "measurements.m"
          MR_Integer measurements__V_19_19;
#line 385 "measurements.m"
          MR_Integer measurements__V_20_20;
#line 385 "measurements.m"
          MR_Integer measurements__V_21_21;
#line 385 "measurements.m"
          MR_Integer measurements__V_22_22;

#line 385 "measurements.m"
          measurements__Exits_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 385 "measurements.m"
          measurements__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 385 "measurements.m"
          measurements__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 385 "measurements.m"
          measurements__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 385 "measurements.m"
          measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 385 "measurements.m"
          measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 385 "measurements.m"
          measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
#line 385 "measurements.m"
          measurements__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));
#line 385 "measurements.m"
        }
#line 382 "measurements.m"
        break;
#line 382 "measurements.m"
      case (MR_Integer) 1:
#line 384 "measurements.m"
        {
#line 384 "measurements.m"
          MR_Integer measurements__V_11_11;
#line 384 "measurements.m"
          MR_Integer measurements__V_12_12;
#line 384 "measurements.m"
          MR_Integer measurements__V_13_13;
#line 384 "measurements.m"
          MR_Integer measurements__V_14_14;

#line 384 "measurements.m"
          measurements__Exits_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 384 "measurements.m"
          measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 384 "measurements.m"
          measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 384 "measurements.m"
          measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 384 "measurements.m"
          measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 384 "measurements.m"
        }
#line 382 "measurements.m"
        break;
#line 382 "measurements.m"
      case (MR_Integer) 2:
#line 383 "measurements.m"
        {
#line 383 "measurements.m"
          MR_Integer measurements__V_7_7;
#line 383 "measurements.m"
          MR_Integer measurements__V_8_8;
#line 383 "measurements.m"
          MR_Integer measurements__V_9_9;

#line 383 "measurements.m"
          measurements__Exits_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 383 "measurements.m"
          measurements__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 383 "measurements.m"
          measurements__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 383 "measurements.m"
          measurements__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 383 "measurements.m"
        }
#line 382 "measurements.m"
        break;
#line 382 "measurements.m"
      case (MR_Integer) 3:
#line 382 "measurements.m"
        {
#line 382 "measurements.m"
          MR_Integer measurements__V_4_4;
#line 382 "measurements.m"
          MR_Integer measurements__V_5_5;

#line 382 "measurements.m"
          measurements__Exits_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 382 "measurements.m"
          measurements__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 382 "measurements.m"
          measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 382 "measurements.m"
        }
#line 382 "measurements.m"
        break;
#line 382 "measurements.m"
    }
#line 382 "measurements.m"
    return measurements__Exits_2;
#line 382 "measurements.m"
  }
#line 35 "measurements.m"
}

#line 34 "measurements.m"
MR_Integer MR_CALL 
measurements__calls_1_f_0(
#line 34 "measurements.m"
  MR_Word measurements__HeadVar__1_1)
#line 34 "measurements.m"
{
#line 376 "measurements.m"
  {
#line 376 "measurements.m"
    MR_bool measurements__succeeded;
#line 376 "measurements.m"
    MR_Integer measurements__HeadVar__2_2;

#line 376 "measurements.m"
#line 376 "measurements.m"
    switch (MR_tag((MR_Word) measurements__HeadVar__1_1)) {
#line 376 "measurements.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 376 "measurements.m"
      case (MR_Integer) 0:
#line 379 "measurements.m"
        {
#line 379 "measurements.m"
          MR_Integer measurements__Exits_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 379 "measurements.m"
          MR_Integer measurements__Fails_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 379 "measurements.m"
          MR_Integer measurements__Redos_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 379 "measurements.m"
          MR_Integer measurements__Excps_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 379 "measurements.m"
          MR_Integer measurements__V_23_23;
#line 379 "measurements.m"
          MR_Integer measurements__V_24_24 = (measurements__Exits_15 + measurements__Fails_16);
#line 379 "measurements.m"
          MR_Integer measurements__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 379 "measurements.m"
          MR_Integer measurements__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 5)));
#line 379 "measurements.m"
          MR_Integer measurements__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 6)));
#line 379 "measurements.m"
          MR_Integer measurements__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurements__HeadVar__1_1, (MR_Integer) 7)));

#line 380 "measurements.m"
          measurements__V_23_23 = (measurements__V_24_24 + measurements__Excps_18);
#line 380 "measurements.m"
          measurements__HeadVar__2_2 = (measurements__V_23_23 - measurements__Redos_17);
#line 379 "measurements.m"
        }
#line 376 "measurements.m"
        break;
#line 376 "measurements.m"
      case (MR_Integer) 1:
#line 378 "measurements.m"
        {
#line 378 "measurements.m"
          MR_Integer measurements__V_11_11;
#line 378 "measurements.m"
          MR_Integer measurements__V_12_12;
#line 378 "measurements.m"
          MR_Integer measurements__V_13_13;
#line 378 "measurements.m"
          MR_Integer measurements__V_14_14;

#line 378 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 378 "measurements.m"
          measurements__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 378 "measurements.m"
          measurements__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 378 "measurements.m"
          measurements__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 378 "measurements.m"
          measurements__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), measurements__HeadVar__1_1, (MR_Integer) 4)));
#line 378 "measurements.m"
        }
#line 376 "measurements.m"
        break;
#line 376 "measurements.m"
      case (MR_Integer) 2:
#line 377 "measurements.m"
        {
#line 377 "measurements.m"
          MR_Integer measurements__V_7_7;
#line 377 "measurements.m"
          MR_Integer measurements__V_8_8;
#line 377 "measurements.m"
          MR_Integer measurements__V_9_9;

#line 377 "measurements.m"
          measurements__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 377 "measurements.m"
          measurements__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 377 "measurements.m"
          measurements__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 2)));
#line 377 "measurements.m"
          measurements__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), measurements__HeadVar__1_1, (MR_Integer) 3)));
#line 377 "measurements.m"
        }
#line 376 "measurements.m"
        break;
#line 376 "measurements.m"
      case (MR_Integer) 3:
#line 376 "measurements.m"
        {
#line 376 "measurements.m"
          MR_Integer measurements__Exits_3 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 0)));
#line 376 "measurements.m"
          MR_Integer measurements__Fails_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 1)));
#line 376 "measurements.m"
          MR_Integer measurements__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), measurements__HeadVar__1_1, (MR_Integer) 2)));

#line 376 "measurements.m"
          measurements__HeadVar__2_2 = (measurements__Exits_3 + measurements__Fails_4);
#line 376 "measurements.m"
        }
#line 376 "measurements.m"
        break;
#line 376 "measurements.m"
    }
#line 376 "measurements.m"
    return measurements__HeadVar__2_2;
#line 376 "measurements.m"
  }
#line 34 "measurements.m"
}

void mercury__measurements__init(void)
{
}

void mercury__measurements__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_cost_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_cs_cost_csq_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_goal_cost_csq_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_inherit_prof_info_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_is_active_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_own_prof_info_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_parallel_exec_metrics_incomplete_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_parallel_exec_metrics_internal_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_parallelism_amount_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_proc_cost_csq_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_recursion_depth_0);
	MR_register_type_ctor_info(&measurements__measurements__type_ctor_info_static_coverage_info_0);
}

void mercury__measurements__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module measurements. */
