/*
** Automatically generated from `coverage.m'
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


/* :- module coverage. */
/* :- implementation. */

/*
INIT mercury__coverage__init
ENDINIT
*/

#include "coverage.mih"


#include "analysis_utils.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exclude.mih"
#include "float.mih"
#include "int.mih"
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
#include "report.mih"
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
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 85 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__goal_path__pti_goal_attr_array_1__plain_coverage__type_ctor_info_coverage_info_0;

#line 88 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 91 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 94 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_0;

#line 97 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_1;

#line 100 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_after_0_2[1];

#line 103 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_2;

#line 106 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_0[2];

#line 109 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_1[1];

#line 112 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_after_0[2];

#line 115 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_after_0[3];

#line 118 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_after_0[3];

#line 121 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_0;

#line 124 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_1;

#line 127 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_before_0_2[1];

#line 130 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_2;

#line 133 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_0[2];

#line 136 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_1[1];

#line 139 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_before_0[2];

#line 142 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_before_0[3];

#line 145 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_before_0[3];

#line 148 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_0;

#line 151 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_1;

#line 154 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_2[1];

#line 157 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_2;

#line 160 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_3[2];

#line 163 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_3;

#line 166 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_4[1];

#line 169 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_4;

#line 172 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_5[1];

#line 175 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_5;

#line 178 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_0[2];

#line 181 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_1[1];

#line 184 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_2[1];

#line 187 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_3[2];

#line 190 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_info_0[4];

#line 193 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_info_0[6];

#line 196 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_info_0[6];

#line 199 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_point_0_0[3];

#line 202 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_point_0_0;

#line 205 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_point_0_0[1];

#line 208 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_point_0[1];

#line 211 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_point_0[1];

#line 214 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_point_0[1];

#line 217 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1;

#line 220 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct2 coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1;

#line 223 "coverage.c"
static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0;

#line 226 "coverage.c"
static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 229 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_reference_info_1_0[5];

#line 232 "coverage.c"
static const MR_ConstString coverage__coverage__field_names_coverage_reference_info_1_0[5];

#line 235 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_reference_info_1_0;

#line 238 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_reference_info_1_0[1];

#line 241 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_reference_info_1[1];

#line 244 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_reference_info_1[1];

#line 247 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_reference_info_1[1];

#line 250 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_0;

#line 253 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_1;

#line 256 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_after_0_2[1];

#line 259 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_2;

#line 262 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_0[2];

#line 265 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_1[1];

#line 268 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_after_0[2];

#line 271 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_after_0[3];

#line 274 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_after_0[3];

#line 277 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_0;

#line 280 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_1;

#line 283 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_before_0_2[1];

#line 286 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_2;

#line 289 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_0[2];

#line 292 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_1[1];

#line 295 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_before_0[2];

#line 298 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_before_0[3];

#line 301 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_before_0[3];

#line 304 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0_10001(
#line 307 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 309 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 312 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_after_0_0_10001(
#line 315 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 317 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 319 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 322 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0_10001(
#line 325 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 327 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 330 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_before_0_0_10001(
#line 333 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 335 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 337 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 340 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_info_0_0_10001(
#line 343 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 345 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 348 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_info_0_0_10001(
#line 351 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 353 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 355 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 358 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_point_0_0_10001(
#line 361 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 363 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 366 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_point_0_0_10001(
#line 369 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 371 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 373 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 376 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0_10001(
#line 379 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 381 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 383 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 386 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0_10001(
#line 389 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 391 "coverage.c"
  MR_Box * coverage__wrapper_arg_2,
#line 393 "coverage.c"
  MR_Box coverage__wrapper_arg_3,
#line 395 "coverage.c"
  MR_Box coverage__wrapper_arg_4);

#line 398 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0_10001(
#line 401 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 403 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 406 "coverage.c"
static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0_10001(
#line 409 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 411 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 413 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 416 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0_10001(
#line 419 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 421 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 424 "coverage.c"
static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0_10001(
#line 427 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 429 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 431 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 1018 "coverage.m"
static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_p_0(
#line 1018 "coverage.m"
  MR_Word coverage__HeadVar__1_1);

#line 967 "coverage.m"
static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_p_0(
#line 967 "coverage.m"
  MR_Word coverage__Before_10,
#line 967 "coverage.m"
  MR_Word coverage__After_11,
#line 967 "coverage.m"
  MR_Word coverage__BeforeCond_12,
#line 967 "coverage.m"
  MR_Word coverage__AfterCond_13,
#line 967 "coverage.m"
  MR_Word coverage__BeforeThen_14,
#line 967 "coverage.m"
  MR_Word coverage__AfterThen_15,
#line 967 "coverage.m"
  MR_Word coverage__AfterElse_17,
#line 967 "coverage.m"
  MR_Word coverage__CondDetism_18);

#line 748 "coverage.m"
static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(
#line 748 "coverage.m"
  MR_Word coverage__Info_4,
#line 748 "coverage.m"
  MR_Word coverage__RevGoalPath_5,
#line 748 "coverage.m"
  MR_Word * coverage__Before_6);

#line 476 "coverage.m"
static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_95_91_52_93_95_48_8_p_0(
#line 476 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_46,
#line 476 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 476 "coverage.m"
  MR_Word coverage__Info_2,
#line 476 "coverage.m"
  MR_Word coverage__Before0_4,
#line 476 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_5,
#line 476 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumAfter_6,
#line 476 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_7,
#line 476 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_8);

#line 1148 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1148__1_2_p_0(
#line 1148 "coverage.m"
  MR_Integer coverage__HeadVar__1_12,
#line 1148 "coverage.m"
  MR_Integer coverage__AfterCountB_18);

#line 1137 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1137__1_2_p_0(
#line 1137 "coverage.m"
  MR_Integer coverage__AfterCountA_8,
#line 1137 "coverage.m"
  MR_Integer coverage__HeadVar__2_15);

#line 1132 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1132__1_2_p_0(
#line 1132 "coverage.m"
  MR_Integer coverage__AfterCountA_8,
#line 1132 "coverage.m"
  MR_Integer coverage__AfterCountB_9);

#line 334 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__goal_annotate_coverage__334__1_2_p_0(
#line 334 "coverage.m"
  MR_Word coverage__Before_9,
#line 334 "coverage.m"
  MR_Word coverage__HeadVar__2_83);

#line 254 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__goal_annotate_with_coverage__254__1_2_p_0(
#line 254 "coverage.m"
  MR_Word coverage__After_25,
#line 254 "coverage.m"
  MR_Word coverage__HeadVar__2_28);

#line 210 "coverage.m"
static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0(
#line 210 "coverage.m"
  MR_Word * coverage__HeadVar__1_1,
#line 210 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 210 "coverage.m"
  MR_Word coverage__HeadVar__3_3);

#line 210 "coverage.m"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0(
#line 210 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 210 "coverage.m"
  MR_Word coverage__HeadVar__2_2);

#line 215 "coverage.m"
static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0(
#line 215 "coverage.m"
  MR_Word * coverage__HeadVar__1_1,
#line 215 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 215 "coverage.m"
  MR_Word coverage__HeadVar__3_3);

#line 215 "coverage.m"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0(
#line 215 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 215 "coverage.m"
  MR_Word coverage__HeadVar__2_2);

#line 265 "coverage.m"
static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0(
#line 265 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_20,
#line 265 "coverage.m"
  MR_Word * coverage__HeadVar__1_1,
#line 265 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 265 "coverage.m"
  MR_Word coverage__HeadVar__3_3);

#line 265 "coverage.m"
static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0(
#line 265 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_15,
#line 265 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 265 "coverage.m"
  MR_Word coverage__HeadVar__2_2);

#line 200 "coverage.m"
static void MR_CALL 
coverage____Compare____coverage_before_0_0(
#line 200 "coverage.m"
  MR_Word * coverage__HeadVar__1_1,
#line 200 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 200 "coverage.m"
  MR_Word coverage__HeadVar__3_3);

#line 200 "coverage.m"
static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0(
#line 200 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 200 "coverage.m"
  MR_Word coverage__HeadVar__2_2);

#line 205 "coverage.m"
static void MR_CALL 
coverage____Compare____coverage_after_0_0(
#line 205 "coverage.m"
  MR_Word * coverage__HeadVar__1_1,
#line 205 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 205 "coverage.m"
  MR_Word coverage__HeadVar__3_3);

#line 205 "coverage.m"
static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0(
#line 205 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 205 "coverage.m"
  MR_Word coverage__HeadVar__2_2);

#line 1297 "coverage.m"
static MR_Word MR_CALL 
coverage__before_coverage_1_f_0(
#line 1297 "coverage.m"
  MR_Integer coverage__Count_3);

#line 1288 "coverage.m"
static MR_Word MR_CALL 
coverage__after_coverage_1_f_0(
#line 1288 "coverage.m"
  MR_Integer coverage__Count_3);

#line 1251 "coverage.m"
static void MR_CALL 
coverage__sum_after_coverage_3_p_0(
#line 1251 "coverage.m"
  MR_Word coverage__After_4,
#line 1251 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_8,
#line 1251 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumAfter_9);

#line 1159 "coverage.m"
static void MR_CALL 
coverage__after_count_sum_after_count_2_p_0(
#line 1159 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 1159 "coverage.m"
  MR_Word * coverage__HeadVar__2_2);

#line 1132 "coverage.m"
static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_3(
#line 1132 "coverage.m"
  MR_Box coverage__closure_arg);

#line 1137 "coverage.m"
static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_2(
#line 1137 "coverage.m"
  MR_Box coverage__closure_arg);

#line 1148 "coverage.m"
static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_1(
#line 1148 "coverage.m"
  MR_Box coverage__closure_arg);

#line 1109 "coverage.m"
static void MR_CALL 
coverage__after_count_from_either_source_3_p_0(
#line 1109 "coverage.m"
  MR_Word coverage__AfterA_4,
#line 1109 "coverage.m"
  MR_Word coverage__AfterB_5,
#line 1109 "coverage.m"
  MR_Word * coverage__After_6);

#line 1094 "coverage.m"
static void MR_CALL 
coverage__after_to_before_coverage_2_p_0(
#line 1094 "coverage.m"
  MR_Word coverage__After_3,
#line 1094 "coverage.m"
  MR_Word * coverage__Before_4);

#line 1063 "coverage.m"
static void MR_CALL 
coverage__propagate_detism_coverage_3_p_0(
#line 1063 "coverage.m"
  MR_Word coverage__Detism_4,
#line 1063 "coverage.m"
  MR_Word coverage__Before_5,
#line 1063 "coverage.m"
  MR_Word * coverage__After_6);

#line 942 "coverage.m"
static void MR_CALL 
coverage__sum_switch_case_coverage_4_p_0(
#line 942 "coverage.m"
  MR_Word coverage__Array_5,
#line 942 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 942 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Acc_0_15,
#line 942 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Acc_16);

#line 798 "coverage.m"
static MR_bool MR_CALL 
coverage__check_coverage_regarding_detism_2_p_0(
#line 798 "coverage.m"
  MR_Word coverage__Coverage_3,
#line 798 "coverage.m"
  MR_Word coverage__Detism_4);

#line 774 "coverage.m"
static void MR_CALL 
coverage__scope_annotate_coverage_7_p_0(
#line 774 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_18,
#line 774 "coverage.m"
  MR_Word coverage__Goal_8,
#line 774 "coverage.m"
  MR_Word coverage__Info_9,
#line 774 "coverage.m"
  MR_Word coverage__MaybeCut_10,
#line 774 "coverage.m"
  MR_Word coverage__Before_11,
#line 774 "coverage.m"
  MR_Word * coverage__After_12,
#line 774 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_15,
#line 774 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_16);

#line 759 "coverage.m"
static void MR_CALL 
coverage__negation_annotate_coverage_6_p_0(
#line 759 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_27,
#line 759 "coverage.m"
  MR_Word coverage__Goal_7,
#line 759 "coverage.m"
  MR_Word coverage__Info_8,
#line 759 "coverage.m"
  MR_Word coverage__Before_9,
#line 759 "coverage.m"
  MR_Word * coverage__After_10,
#line 759 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_14,
#line 759 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_15);

#line 613 "coverage.m"
static void MR_CALL 
coverage__ite_annotate_coverage_9_p_0(
#line 613 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_126,
#line 613 "coverage.m"
  MR_Word coverage__Cond_10,
#line 613 "coverage.m"
  MR_Word coverage__Then_11,
#line 613 "coverage.m"
  MR_Word coverage__Else_12,
#line 613 "coverage.m"
  MR_Word coverage__Info_13,
#line 613 "coverage.m"
  MR_Word coverage__RevGoalPath_14,
#line 613 "coverage.m"
  MR_Word coverage__Before_15,
#line 613 "coverage.m"
  MR_Word * coverage__After_16,
#line 613 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_35,
#line 613 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_36);

#line 558 "coverage.m"
static void MR_CALL 
coverage__switch_annotate_coverage_2_10_p_0(
#line 558 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_60,
#line 558 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 558 "coverage.m"
  MR_Word coverage__Info_2,
#line 558 "coverage.m"
  MR_Word coverage__CanFail_3,
#line 558 "coverage.m"
  MR_Word coverage__SwitchBefore_4,
#line 558 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumBefore_0_5,
#line 558 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumBefore_6,
#line 558 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_7,
#line 558 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumAfter_8,
#line 558 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_9,
#line 558 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_10);

#line 912 "coverage.m"
static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0_1(
#line 912 "coverage.m"
  MR_Box coverage__closure_arg,
#line 912 "coverage.m"
  MR_Box coverage__wrapper_arg_1,
#line 912 "coverage.m"
  MR_Box coverage__wrapper_arg_2,
#line 912 "coverage.m"
  MR_Box * coverage__wrapper_arg_3);

#line 503 "coverage.m"
static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0(
#line 503 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_47,
#line 503 "coverage.m"
  MR_Word coverage__Cases_8,
#line 503 "coverage.m"
  MR_Word coverage__Info_9,
#line 503 "coverage.m"
  MR_Word coverage__CanFail_10,
#line 503 "coverage.m"
  MR_Word coverage__Before_11,
#line 503 "coverage.m"
  MR_Word * coverage__After_12,
#line 503 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_18,
#line 503 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_19);

#line 454 "coverage.m"
static void MR_CALL 
coverage__conj_annotate_coverage_6_p_0(
#line 454 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_25,
#line 454 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 454 "coverage.m"
  MR_Word coverage__Info_2,
#line 454 "coverage.m"
  MR_Word coverage__Before_3,
#line 454 "coverage.m"
  MR_Word * coverage__After_4,
#line 454 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_5,
#line 454 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_6);

#line 402 "coverage.m"
static MR_Word MR_CALL 
coverage__construct_before_after_coverage_2_f_0(
#line 402 "coverage.m"
  MR_Word coverage__Before_4,
#line 402 "coverage.m"
  MR_Word coverage__After_5);

#line 334 "coverage.m"
static MR_bool MR_CALL 
coverage__goal_annotate_coverage_6_p_0_1(
#line 334 "coverage.m"
  MR_Box coverage__closure_arg);

#line 280 "coverage.m"
static void MR_CALL 
coverage__goal_annotate_coverage_6_p_0(
#line 280 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_164,
#line 280 "coverage.m"
  MR_Word coverage__Goal_7,
#line 280 "coverage.m"
  MR_Word coverage__Info_8,
#line 280 "coverage.m"
  MR_Word coverage__Before_9,
#line 280 "coverage.m"
  MR_Word * coverage__After_10,
#line 280 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_75,
#line 280 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_76);

#line 181 "coverage.m"
static void MR_CALL 
coverage__coverage_point_arrays_to_list_2_6_p_0(
#line 181 "coverage.m"
  MR_Integer coverage__Num_7,
#line 181 "coverage.m"
  MR_Integer coverage__Max_8,
#line 181 "coverage.m"
  MR_ArrayPtr coverage__StaticArray_9,
#line 181 "coverage.m"
  MR_ArrayPtr coverage__DynamicArray_10,
#line 181 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_CoveragePoints_0_16,
#line 181 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_CoveragePoints_17);

#line 254 "coverage.m"
static MR_bool MR_CALL 
coverage__goal_annotate_with_coverage_9_p_0_1(
#line 254 "coverage.m"
  MR_Box coverage__closure_arg);


static /* final */ const MR_Box coverage_scalar_common_1[5][2];

static /* final */ const MR_Box coverage_scalar_common_2[2][3];

static /* final */ const MR_Box coverage_scalar_common_3[3][5];

static /* final */ const MR_Box coverage_scalar_common_4[1][7];

static /* final */ const MR_Box coverage_scalar_common_5[1][1];




static /* final */ const MR_Box coverage_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&coverage_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box coverage_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0))
  },
};

static /* final */ const MR_Box coverage_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_after_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_after_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_before_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_before_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box coverage_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&coverage__mdbcomp__goal_path__pti_goal_attr_array_1__plain_coverage__type_ctor_info_coverage_info_0)),
    ((MR_Box) (&coverage__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box coverage_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "array.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
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



#line 1035 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__goal_path__pti_goal_attr_array_1__plain_coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_PseudoTypeInfo) &coverage__coverage__type_ctor_info_coverage_info_0
  }
};

#line 1043 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1051 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1059 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_0 = {
  (MR_String) "after_unknown",
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

#line 1074 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_1 = {
  (MR_String) "after_zero",
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

#line 1089 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_after_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1094 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_2 = {
  (MR_String) "after_known",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  coverage__coverage__field_types_coverage_after_0_2,
  NULL,
  NULL,
  NULL
};

#line 1109 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_coverage_after_0_1
};

#line 1115 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_after_0_2
};

#line 1120 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_after_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    coverage__coverage__du_stag_ordered_coverage_after_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_after_0_1
  }
};

#line 1134 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_after_0[3] = {
  &coverage__coverage__du_functor_desc_coverage_after_0_2,
  &coverage__coverage__du_functor_desc_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_coverage_after_0_1
};

#line 1141 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_after_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1148 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_after_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_after_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_after_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_after",
  {
    coverage__coverage__du_name_ordered_coverage_after_0
  },
  {
    coverage__coverage__du_ptag_ordered_coverage_after_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_after_0
};

#line 1169 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_0 = {
  (MR_String) "before_unknown",
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

#line 1184 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_1 = {
  (MR_String) "before_zero",
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

#line 1199 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_before_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1204 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_2 = {
  (MR_String) "before_known",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  coverage__coverage__field_types_coverage_before_0_2,
  NULL,
  NULL,
  NULL
};

#line 1219 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_coverage_before_0_1
};

#line 1225 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_before_0_2
};

#line 1230 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_before_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    coverage__coverage__du_stag_ordered_coverage_before_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_before_0_1
  }
};

#line 1244 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_before_0[3] = {
  &coverage__coverage__du_functor_desc_coverage_before_0_2,
  &coverage__coverage__du_functor_desc_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_coverage_before_0_1
};

#line 1251 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_before_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1258 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_before_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_before_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_before_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_before",
  {
    coverage__coverage__du_name_ordered_coverage_before_0
  },
  {
    coverage__coverage__du_ptag_ordered_coverage_before_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_before_0
};

#line 1279 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_0 = {
  (MR_String) "coverage_unknown",
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

#line 1294 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_1 = {
  (MR_String) "coverage_known_zero",
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

#line 1309 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1314 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_2 = {
  (MR_String) "coverage_known_same",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  coverage__coverage__field_types_coverage_info_0_2,
  NULL,
  NULL,
  NULL
};

#line 1329 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1335 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_3 = {
  (MR_String) "coverage_known",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  coverage__coverage__field_types_coverage_info_0_3,
  NULL,
  NULL,
  NULL
};

#line 1350 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1355 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_4 = {
  (MR_String) "coverage_known_before",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4,
  coverage__coverage__field_types_coverage_info_0_4,
  NULL,
  NULL,
  NULL
};

#line 1370 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1375 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_5 = {
  (MR_String) "coverage_known_after",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5,
  coverage__coverage__field_types_coverage_info_0_5,
  NULL,
  NULL,
  NULL
};

#line 1390 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_0,
  &coverage__coverage__du_functor_desc_coverage_info_0_1
};

#line 1396 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_2
};

#line 1401 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_2[1] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_3
};

#line 1406 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_3[2] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_4,
  &coverage__coverage__du_functor_desc_coverage_info_0_5
};

#line 1412 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_info_0[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    coverage__coverage__du_stag_ordered_coverage_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_info_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_info_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    coverage__coverage__du_stag_ordered_coverage_info_0_3
  }
};

#line 1436 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_info_0[6] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_3,
  &coverage__coverage__du_functor_desc_coverage_info_0_5,
  &coverage__coverage__du_functor_desc_coverage_info_0_4,
  &coverage__coverage__du_functor_desc_coverage_info_0_2,
  &coverage__coverage__du_functor_desc_coverage_info_0_1,
  &coverage__coverage__du_functor_desc_coverage_info_0_0
};

#line 1446 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_info_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1456 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_info_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_info_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_info",
  {
    coverage__coverage__du_name_ordered_coverage_info_0
  },
  {
    coverage__coverage__du_ptag_ordered_coverage_info_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_info_0
};

#line 1477 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_point_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0
};

#line 1484 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_point_0_0 = {
  (MR_String) "coverage_point",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  coverage__coverage__field_types_coverage_point_0_0,
  NULL,
  NULL,
  NULL
};

#line 1499 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_point_0_0[1] = {
  &coverage__coverage__du_functor_desc_coverage_point_0_0
};

#line 1504 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_point_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_point_0_0
  }
};

#line 1513 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_point_0[1] = {
  &coverage__coverage__du_functor_desc_coverage_point_0_0
};

#line 1518 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_point_0[1] = {
  (MR_Integer) 0
};

#line 1523 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_point_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_point_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_point_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_point",
  {
    coverage__coverage__du_name_ordered_coverage_point_0
  },
  {
    coverage__coverage__du_ptag_ordered_coverage_point_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_point_0
};

#line 1544 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1552 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct2 coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1
  }
};

#line 1561 "coverage.c"
static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_point_0
  }
};

#line 1570 "coverage.c"
static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 1579 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_reference_info_1_0[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
  (MR_PseudoTypeInfo) &coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1,
  (MR_PseudoTypeInfo) &coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0,
  (MR_PseudoTypeInfo) &coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0,
  (MR_PseudoTypeInfo) &coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 1588 "coverage.c"
static const MR_ConstString coverage__coverage__field_names_coverage_reference_info_1_0[5] = {
  (MR_String) "cri_proc",
  (MR_String) "cri_call_sites",
  (MR_String) "cri_solns_coverage_points",
  (MR_String) "cri_branch_coverage_points",
  (MR_String) "cri_goal_path_map"
};

#line 1597 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_reference_info_1_0 = {
  (MR_String) "coverage_reference_info",
  (MR_Integer) 5,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  coverage__coverage__field_types_coverage_reference_info_1_0,
  coverage__coverage__field_names_coverage_reference_info_1_0,
  NULL,
  NULL
};

#line 1612 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_reference_info_1_0[1] = {
  &coverage__coverage__du_functor_desc_coverage_reference_info_1_0
};

#line 1617 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_reference_info_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_reference_info_1_0
  }
};

#line 1626 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_reference_info_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_reference_info_1_0
};

#line 1631 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_reference_info_1[1] = {
  (MR_Integer) 0
};

#line 1636 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_reference_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_reference_info_1_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_reference_info_1_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_reference_info",
  {
    coverage__coverage__du_name_ordered_coverage_reference_info_1
  },
  {
    coverage__coverage__du_ptag_ordered_coverage_reference_info_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_reference_info_1
};

#line 1657 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_0 = {
  (MR_String) "sum_after_unknown",
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

#line 1672 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_1 = {
  (MR_String) "sum_after_zero",
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

#line 1687 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_after_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1692 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_2 = {
  (MR_String) "sum_after_known",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  coverage__coverage__field_types_sum_coverage_after_0_2,
  NULL,
  NULL,
  NULL
};

#line 1707 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_0[2] = {
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_1
};

#line 1713 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_1[1] = {
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_2
};

#line 1718 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_after_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    coverage__coverage__du_stag_ordered_sum_coverage_after_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_sum_coverage_after_0_1
  }
};

#line 1732 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_after_0[3] = {
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_2,
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_1
};

#line 1739 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_after_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1746 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_sum_coverage_after_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____sum_coverage_after_0_0_10001)),
  ((MR_Box) (coverage____Compare____sum_coverage_after_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "sum_coverage_after",
  {
    coverage__coverage__du_name_ordered_sum_coverage_after_0
  },
  {
    coverage__coverage__du_ptag_ordered_sum_coverage_after_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_sum_coverage_after_0
};

#line 1767 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_0 = {
  (MR_String) "sum_before_unknown",
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

#line 1782 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_1 = {
  (MR_String) "sum_before_zero",
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

#line 1797 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_before_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1802 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_2 = {
  (MR_String) "sum_before_known",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  coverage__coverage__field_types_sum_coverage_before_0_2,
  NULL,
  NULL,
  NULL
};

#line 1817 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_0[2] = {
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_1
};

#line 1823 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_1[1] = {
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_2
};

#line 1828 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_before_0[2] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    coverage__coverage__du_stag_ordered_sum_coverage_before_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_sum_coverage_before_0_1
  }
};

#line 1842 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_before_0[3] = {
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_2,
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_1
};

#line 1849 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_before_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1856 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_sum_coverage_before_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____sum_coverage_before_0_0_10001)),
  ((MR_Box) (coverage____Compare____sum_coverage_before_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "sum_coverage_before",
  {
    coverage__coverage__du_name_ordered_sum_coverage_before_0
  },
  {
    coverage__coverage__du_ptag_ordered_sum_coverage_before_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_sum_coverage_before_0
};

#line 1877 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0_10001(
#line 1880 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 1882 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 1884 "coverage.c"
{
#line 1886 "coverage.c"
  {
#line 1888 "coverage.c"
    MR_bool coverage__succeeded;

#line 1891 "coverage.c"
    {
#line 1893 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_after_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 1896 "coverage.c"
    return coverage__succeeded;
#line 1898 "coverage.c"
  }
#line 1900 "coverage.c"
}

#line 1903 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_after_0_0_10001(
#line 1906 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 1908 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 1910 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 1912 "coverage.c"
{
#line 1914 "coverage.c"
  {
#line 1916 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 1919 "coverage.c"
    {
#line 1921 "coverage.c"
      coverage____Compare____coverage_after_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 1924 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 1926 "coverage.c"
  }
#line 1928 "coverage.c"
}

#line 1931 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0_10001(
#line 1934 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 1936 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 1938 "coverage.c"
{
#line 1940 "coverage.c"
  {
#line 1942 "coverage.c"
    MR_bool coverage__succeeded;

#line 1945 "coverage.c"
    {
#line 1947 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_before_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 1950 "coverage.c"
    return coverage__succeeded;
#line 1952 "coverage.c"
  }
#line 1954 "coverage.c"
}

#line 1957 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_before_0_0_10001(
#line 1960 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 1962 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 1964 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 1966 "coverage.c"
{
#line 1968 "coverage.c"
  {
#line 1970 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 1973 "coverage.c"
    {
#line 1975 "coverage.c"
      coverage____Compare____coverage_before_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 1978 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 1980 "coverage.c"
  }
#line 1982 "coverage.c"
}

#line 1985 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_info_0_0_10001(
#line 1988 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 1990 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 1992 "coverage.c"
{
#line 1994 "coverage.c"
  {
#line 1996 "coverage.c"
    MR_bool coverage__succeeded;

#line 1999 "coverage.c"
    {
#line 2001 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_info_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 2004 "coverage.c"
    return coverage__succeeded;
#line 2006 "coverage.c"
  }
#line 2008 "coverage.c"
}

#line 2011 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_info_0_0_10001(
#line 2014 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 2016 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2018 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2020 "coverage.c"
{
#line 2022 "coverage.c"
  {
#line 2024 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2027 "coverage.c"
    {
#line 2029 "coverage.c"
      coverage____Compare____coverage_info_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2032 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2034 "coverage.c"
  }
#line 2036 "coverage.c"
}

#line 2039 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_point_0_0_10001(
#line 2042 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2044 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 2046 "coverage.c"
{
#line 2048 "coverage.c"
  {
#line 2050 "coverage.c"
    MR_bool coverage__succeeded;

#line 2053 "coverage.c"
    {
#line 2055 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_point_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 2058 "coverage.c"
    return coverage__succeeded;
#line 2060 "coverage.c"
  }
#line 2062 "coverage.c"
}

#line 2065 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_point_0_0_10001(
#line 2068 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 2070 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2072 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2074 "coverage.c"
{
#line 2076 "coverage.c"
  {
#line 2078 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2081 "coverage.c"
    {
#line 2083 "coverage.c"
      coverage____Compare____coverage_point_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2086 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2088 "coverage.c"
  }
#line 2090 "coverage.c"
}

#line 2093 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0_10001(
#line 2096 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2098 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2100 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2102 "coverage.c"
{
#line 2104 "coverage.c"
  {
#line 2106 "coverage.c"
    MR_bool coverage__succeeded;

#line 2109 "coverage.c"
    {
#line 2111 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_reference_info_1_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2114 "coverage.c"
    return coverage__succeeded;
#line 2116 "coverage.c"
  }
#line 2118 "coverage.c"
}

#line 2121 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0_10001(
#line 2124 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2126 "coverage.c"
  MR_Box * coverage__wrapper_arg_2,
#line 2128 "coverage.c"
  MR_Box coverage__wrapper_arg_3,
#line 2130 "coverage.c"
  MR_Box coverage__wrapper_arg_4)
#line 2132 "coverage.c"
{
#line 2134 "coverage.c"
  {
#line 2136 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2139 "coverage.c"
    {
#line 2141 "coverage.c"
      coverage____Compare____coverage_reference_info_1_0(((MR_Word) coverage__wrapper_arg_1), &coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_3), ((MR_Word) coverage__wrapper_arg_4));
    }
#line 2144 "coverage.c"
    *coverage__wrapper_arg_2 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2146 "coverage.c"
  }
#line 2148 "coverage.c"
}

#line 2151 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0_10001(
#line 2154 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2156 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 2158 "coverage.c"
{
#line 2160 "coverage.c"
  {
#line 2162 "coverage.c"
    MR_bool coverage__succeeded;

#line 2165 "coverage.c"
    {
#line 2167 "coverage.c"
      coverage__succeeded = coverage____Unify____sum_coverage_after_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 2170 "coverage.c"
    return coverage__succeeded;
#line 2172 "coverage.c"
  }
#line 2174 "coverage.c"
}

#line 2177 "coverage.c"
static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0_10001(
#line 2180 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 2182 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2184 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2186 "coverage.c"
{
#line 2188 "coverage.c"
  {
#line 2190 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2193 "coverage.c"
    {
#line 2195 "coverage.c"
      coverage____Compare____sum_coverage_after_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2198 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2200 "coverage.c"
  }
#line 2202 "coverage.c"
}

#line 2205 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0_10001(
#line 2208 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2210 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 2212 "coverage.c"
{
#line 2214 "coverage.c"
  {
#line 2216 "coverage.c"
    MR_bool coverage__succeeded;

#line 2219 "coverage.c"
    {
#line 2221 "coverage.c"
      coverage__succeeded = coverage____Unify____sum_coverage_before_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 2224 "coverage.c"
    return coverage__succeeded;
#line 2226 "coverage.c"
  }
#line 2228 "coverage.c"
}

#line 2231 "coverage.c"
static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0_10001(
#line 2234 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 2236 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2238 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2240 "coverage.c"
{
#line 2242 "coverage.c"
  {
#line 2244 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2247 "coverage.c"
    {
#line 2249 "coverage.c"
      coverage____Compare____sum_coverage_before_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2252 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2254 "coverage.c"
  }
#line 2256 "coverage.c"
}

#line 1018 "coverage.m"
static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_p_0(
#line 1018 "coverage.m"
  MR_Word coverage__HeadVar__1_1)
#line 1018 "coverage.m"
{
#line 1021 "coverage.m"
  {
#line 1021 "coverage.m"
    MR_bool coverage__succeeded;

#line 1021 "coverage.m"
    if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1023 "coverage.m"
      coverage__succeeded = MR_TRUE;
#line 1021 "coverage.m"
    else
#line 1021 "coverage.m"
      if (((MR_tag((MR_Word) coverage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1021 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 1021 "coverage.m"
      else
#line 1021 "coverage.m"
        if (((MR_tag((MR_Word) coverage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1022 "coverage.m"
          coverage__succeeded = MR_TRUE;
#line 1021 "coverage.m"
        else
#line 1021 "coverage.m"
          coverage__succeeded = MR_FALSE;
#line 1021 "coverage.m"
    return coverage__succeeded;
#line 1021 "coverage.m"
  }
#line 1018 "coverage.m"
}

#line 967 "coverage.m"
static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_p_0(
#line 967 "coverage.m"
  MR_Word coverage__Before_10,
#line 967 "coverage.m"
  MR_Word coverage__After_11,
#line 967 "coverage.m"
  MR_Word coverage__BeforeCond_12,
#line 967 "coverage.m"
  MR_Word coverage__AfterCond_13,
#line 967 "coverage.m"
  MR_Word coverage__BeforeThen_14,
#line 967 "coverage.m"
  MR_Word coverage__AfterThen_15,
#line 967 "coverage.m"
  MR_Word coverage__AfterElse_17,
#line 967 "coverage.m"
  MR_Word coverage__CondDetism_18)
#line 967 "coverage.m"
{
#line 974 "coverage.m"
  {
#line 974 "coverage.m"
    MR_bool coverage__succeeded = ((MR_tag((MR_Word) coverage__Before_10)) == (MR_mktag((MR_Integer) 1)));
#line 980 "coverage.m"
    MR_Integer coverage__BeforeExecCount_19;
#line 980 "coverage.m"
    MR_Integer coverage__BeforeCondExecCount_20;
#line 989 "coverage.m"
    MR_Integer coverage__AfterExecCount_21;
#line 989 "coverage.m"
    MR_Integer coverage__AfterThenExecCount_22;
#line 989 "coverage.m"
    MR_Integer coverage__AfterElseExecCount_23;
#line 997 "coverage.m"
    MR_Integer coverage__AfterCondExecCount_24;
#line 997 "coverage.m"
    MR_Integer coverage__BeforeKnownExecCount_25;
#line 1014 "coverage.m"
    MR_Integer coverage__AfterCondExecCount2_26;

#line 976 "coverage.m"
    if (coverage__succeeded)
#line 976 "coverage.m"
      {
#line 976 "coverage.m"
        coverage__BeforeExecCount_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_10, (MR_Integer) 0)));
#line 977 "coverage.m"
        coverage__succeeded = ((MR_tag((MR_Word) coverage__BeforeCond_12)) == (MR_mktag((MR_Integer) 1)));
#line 977 "coverage.m"
        if (coverage__succeeded)
#line 977 "coverage.m"
          coverage__BeforeCondExecCount_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeCond_12, (MR_Integer) 0)));
#line 976 "coverage.m"
      }
#line 980 "coverage.m"
    if (coverage__succeeded)
#line 979 "coverage.m"
      coverage__succeeded = (coverage__BeforeExecCount_19 == coverage__BeforeCondExecCount_20);
#line 980 "coverage.m"
    else
#line 981 "coverage.m"
      coverage__succeeded = MR_TRUE;
#line 974 "coverage.m"
    if (coverage__succeeded)
#line 974 "coverage.m"
      {
#line 984 "coverage.m"
        coverage__succeeded = ((MR_tag((MR_Word) coverage__After_11)) == (MR_mktag((MR_Integer) 1)));
#line 984 "coverage.m"
        if (coverage__succeeded)
#line 984 "coverage.m"
          {
#line 984 "coverage.m"
            coverage__AfterExecCount_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_11, (MR_Integer) 0)));
#line 985 "coverage.m"
            coverage__succeeded = ((MR_tag((MR_Word) coverage__AfterThen_15)) == (MR_mktag((MR_Integer) 1)));
#line 985 "coverage.m"
            if (coverage__succeeded)
#line 985 "coverage.m"
              {
#line 985 "coverage.m"
                coverage__AfterThenExecCount_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterThen_15, (MR_Integer) 0)));
#line 986 "coverage.m"
                coverage__succeeded = ((MR_tag((MR_Word) coverage__AfterElse_17)) == (MR_mktag((MR_Integer) 1)));
#line 986 "coverage.m"
                if (coverage__succeeded)
#line 986 "coverage.m"
                  coverage__AfterElseExecCount_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterElse_17, (MR_Integer) 0)));
#line 985 "coverage.m"
              }
#line 984 "coverage.m"
          }
#line 989 "coverage.m"
        if (coverage__succeeded)
#line 988 "coverage.m"
          {
#line 988 "coverage.m"
            MR_Integer coverage__V_28_28 = (coverage__AfterThenExecCount_22 + coverage__AfterElseExecCount_23);

#line 988 "coverage.m"
            coverage__succeeded = (coverage__AfterExecCount_21 == coverage__V_28_28);
#line 988 "coverage.m"
          }
#line 989 "coverage.m"
        else
#line 990 "coverage.m"
          coverage__succeeded = MR_TRUE;
#line 974 "coverage.m"
        if (coverage__succeeded)
#line 974 "coverage.m"
          {
#line 993 "coverage.m"
            coverage__succeeded = ((MR_tag((MR_Word) coverage__AfterCond_13)) == (MR_mktag((MR_Integer) 1)));
#line 993 "coverage.m"
            if (coverage__succeeded)
#line 993 "coverage.m"
              {
#line 993 "coverage.m"
                coverage__AfterCondExecCount_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterCond_13, (MR_Integer) 0)));
#line 994 "coverage.m"
                coverage__succeeded = ((MR_tag((MR_Word) coverage__BeforeThen_14)) == (MR_mktag((MR_Integer) 1)));
#line 994 "coverage.m"
                if (coverage__succeeded)
#line 994 "coverage.m"
                  coverage__BeforeKnownExecCount_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeThen_14, (MR_Integer) 0)));
#line 993 "coverage.m"
              }
#line 997 "coverage.m"
            if (coverage__succeeded)
#line 996 "coverage.m"
              coverage__succeeded = (coverage__AfterCondExecCount_24 == coverage__BeforeKnownExecCount_25);
#line 997 "coverage.m"
            else
#line 998 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 974 "coverage.m"
            if (coverage__succeeded)
#line 974 "coverage.m"
              {
#line 1004 "coverage.m"
                coverage__succeeded = ((MR_tag((MR_Word) coverage__AfterCond_13)) == (MR_mktag((MR_Integer) 1)));
#line 1004 "coverage.m"
                if (coverage__succeeded)
#line 1004 "coverage.m"
                  {
#line 1004 "coverage.m"
                    coverage__AfterCondExecCount2_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterCond_13, (MR_Integer) 0)));
#line 1005 "coverage.m"
                    {
#line 1005 "coverage.m"
                      MR_Word coverage__NumSolutions_27;

#line 1005 "coverage.m"
                      {
#line 1005 "coverage.m"
                        coverage__NumSolutions_27 = mdbcomp__program_representation__detism_get_solutions_1_f_0(coverage__CondDetism_18);
                      }
#line 1009 "coverage.m"
                      if ((coverage__NumSolutions_27 == (MR_Integer) 2))
#line 1011 "coverage.m"
                        coverage__succeeded = MR_TRUE;
#line 1009 "coverage.m"
                      else
#line 1009 "coverage.m"
                        if ((coverage__NumSolutions_27 == (MR_Integer) 1))
#line 1010 "coverage.m"
                          coverage__succeeded = MR_TRUE;
#line 1009 "coverage.m"
                        else
#line 1008 "coverage.m"
                          coverage__succeeded = (coverage__AfterCondExecCount2_26 == (MR_Integer) 0);
#line 1005 "coverage.m"
                    }
#line 1004 "coverage.m"
                  }
#line 1004 "coverage.m"
                else
#line 1015 "coverage.m"
                  coverage__succeeded = MR_TRUE;
#line 974 "coverage.m"
              }
#line 974 "coverage.m"
          }
#line 974 "coverage.m"
      }
#line 974 "coverage.m"
    return coverage__succeeded;
#line 974 "coverage.m"
  }
#line 967 "coverage.m"
}

#line 748 "coverage.m"
static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(
#line 748 "coverage.m"
  MR_Word coverage__Info_4,
#line 748 "coverage.m"
  MR_Word coverage__RevGoalPath_5,
#line 748 "coverage.m"
  MR_Word * coverage__Before_6)
#line 748 "coverage.m"
{
#line 755 "coverage.m"
  {
#line 755 "coverage.m"
    MR_bool coverage__succeeded;
#line 755 "coverage.m"
    MR_Word coverage__CP_7;
#line 752 "coverage.m"
    MR_Word coverage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 3)));
#line 752 "coverage.m"
    MR_Word coverage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 0)));
#line 752 "coverage.m"
    MR_Word coverage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 1)));
#line 752 "coverage.m"
    MR_Word coverage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 2)));
#line 752 "coverage.m"
    MR_Word coverage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 4)));
#line 752 "coverage.m"
    MR_Box coverage__conv0_CP_7;

#line 752 "coverage.m"
    {
#line 752 "coverage.m"
      coverage__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, coverage__V_11_11, ((MR_Box) (coverage__RevGoalPath_5)), &coverage__conv0_CP_7);
    }
#line 752 "coverage.m"
    if (coverage__succeeded)
#line 752 "coverage.m"
      {
#line 752 "coverage.m"
        coverage__CP_7 = ((MR_Word) coverage__conv0_CP_7);
#line 752 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 752 "coverage.m"
      }
#line 755 "coverage.m"
    if (coverage__succeeded)
#line 753 "coverage.m"
      {
#line 753 "coverage.m"
        MR_Integer coverage__ExecCount_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CP_7, (MR_Integer) 0)));
#line 753 "coverage.m"
        MR_Word coverage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_7, (MR_Integer) 1)));
#line 753 "coverage.m"
        MR_Word coverage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_7, (MR_Integer) 2)));

#line 1300 "coverage.m"
        coverage__succeeded = (coverage__ExecCount_8 == (MR_Integer) 0);
#line 1299 "coverage.m"
        if (coverage__succeeded)
#line 1301 "coverage.m"
          *coverage__Before_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1299 "coverage.m"
        else
#line 1303 "coverage.m"
          {
#line 1303 "coverage.m"
            MR_Word base;
#line 1303 "coverage.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "coverage.m"
            *coverage__Before_6 = base;
#line 1303 "coverage.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__ExecCount_8));
#line 1303 "coverage.m"
          }
#line 753 "coverage.m"
      }
#line 755 "coverage.m"
    else
#line 756 "coverage.m"
      *coverage__Before_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "coverage.m"
  }
#line 748 "coverage.m"
}

#line 476 "coverage.m"
static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_95_91_52_93_95_48_8_p_0(
#line 476 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_46,
#line 476 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 476 "coverage.m"
  MR_Word coverage__Info_2,
#line 476 "coverage.m"
  MR_Word coverage__Before0_4,
#line 476 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_5,
#line 476 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumAfter_6,
#line 476 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_7,
#line 476 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_8)
#line 476 "coverage.m"
{
#line 482 "coverage.m"
  while (MR_TRUE)
#line 482 "coverage.m"
    {
#line 482 "coverage.m"
      /* tailcall optimized into a loop */
#line 482 "coverage.m"
      {
#line 482 "coverage.m"
        MR_bool coverage__succeeded;

#line 482 "coverage.m"
        if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 482 "coverage.m"
          {
#line 482 "coverage.m"
            *coverage__STATE_VARIABLE_Array_8 = coverage__STATE_VARIABLE_Array_0_7;
#line 482 "coverage.m"
            *coverage__STATE_VARIABLE_SumAfter_6 = coverage__STATE_VARIABLE_SumAfter_0_5;
#line 482 "coverage.m"
          }
#line 482 "coverage.m"
        else
#line 484 "coverage.m"
          {
#line 484 "coverage.m"
            MR_Word coverage__Disj_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 484 "coverage.m"
            MR_Word coverage__Disjs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 484 "coverage.m"
            MR_Word coverage__DisjRevGoalPath_25;
#line 484 "coverage.m"
            MR_Word coverage__Before_27;
#line 484 "coverage.m"
            MR_Word coverage__After_28;
#line 484 "coverage.m"
            MR_Word coverage__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 4)));
#line 484 "coverage.m"
            MR_Word coverage__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Disj_18, (MR_Integer) 2)));
#line 484 "coverage.m"
            MR_Word coverage__STATE_VARIABLE_Array_35_35;
#line 484 "coverage.m"
            MR_Word coverage__STATE_VARIABLE_SumAfter_36_36;
#line 486 "coverage.m"
            MR_Word coverage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 0)));
#line 486 "coverage.m"
            MR_Word coverage__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 1)));
#line 486 "coverage.m"
            MR_Word coverage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 2)));
#line 486 "coverage.m"
            MR_Word coverage__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 3)));
#line 486 "coverage.m"
            MR_Word coverage__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Disj_18, (MR_Integer) 0)));
#line 486 "coverage.m"
            MR_Word coverage__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Disj_18, (MR_Integer) 1)));
#line 486 "coverage.m"
            MR_Box coverage__conv0_DisjRevGoalPath_25;

#line 486 "coverage.m"
            {
#line 486 "coverage.m"
              coverage__conv0_DisjRevGoalPath_25 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__V_33_33, ((MR_Box) (coverage__V_34_34)));
            }
#line 486 "coverage.m"
            coverage__DisjRevGoalPath_25 = ((MR_Word) coverage__conv0_DisjRevGoalPath_25);
#line 492 "coverage.m"
            if ((coverage__Before0_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 755 "coverage.m"
              {
#line 755 "coverage.m"
                MR_Word coverage__CP_52;
#line 752 "coverage.m"
                MR_Word coverage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 3)));
#line 752 "coverage.m"
                MR_Word coverage__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 0)));
#line 752 "coverage.m"
                MR_Word coverage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 1)));
#line 752 "coverage.m"
                MR_Word coverage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 2)));
#line 752 "coverage.m"
                MR_Word coverage__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 4)));
#line 752 "coverage.m"
                MR_Box coverage__conv1_CP_52;

#line 752 "coverage.m"
                {
#line 752 "coverage.m"
                  coverage__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, coverage__V_56_56, ((MR_Box) (coverage__DisjRevGoalPath_25)), &coverage__conv1_CP_52);
                }
#line 752 "coverage.m"
                if (coverage__succeeded)
#line 752 "coverage.m"
                  {
#line 752 "coverage.m"
                    coverage__CP_52 = ((MR_Word) coverage__conv1_CP_52);
#line 752 "coverage.m"
                    coverage__succeeded = MR_TRUE;
#line 752 "coverage.m"
                  }
#line 755 "coverage.m"
                if (coverage__succeeded)
#line 753 "coverage.m"
                  {
#line 753 "coverage.m"
                    MR_Integer coverage__ExecCount_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CP_52, (MR_Integer) 0)));
#line 753 "coverage.m"
                    MR_Word coverage__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_52, (MR_Integer) 1)));
#line 753 "coverage.m"
                    MR_Word coverage__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_52, (MR_Integer) 2)));

#line 1300 "coverage.m"
                    coverage__succeeded = (coverage__ExecCount_53 == (MR_Integer) 0);
#line 1299 "coverage.m"
                    if (coverage__succeeded)
#line 1301 "coverage.m"
                      coverage__Before_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1299 "coverage.m"
                    else
#line 1303 "coverage.m"
                      {
#line 1303 "coverage.m"
                        coverage__Before_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__Before_27, 0) = ((MR_Box) (coverage__ExecCount_53));
#line 1303 "coverage.m"
                      }
#line 753 "coverage.m"
                  }
#line 755 "coverage.m"
                else
#line 756 "coverage.m"
                  coverage__Before_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "coverage.m"
              }
#line 492 "coverage.m"
            else
#line 491 "coverage.m"
              coverage__Before_27 = coverage__Before0_4;
#line 496 "coverage.m"
            {
#line 496 "coverage.m"
              coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_46, coverage__Disj_18, coverage__Info_2, coverage__Before_27, &coverage__After_28, coverage__STATE_VARIABLE_Array_0_7, &coverage__STATE_VARIABLE_Array_35_35);
            }
#line 1256 "coverage.m"
            if ((coverage__STATE_VARIABLE_SumAfter_0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1278 "coverage.m"
              coverage__STATE_VARIABLE_SumAfter_36_36 = coverage__STATE_VARIABLE_SumAfter_0_5;
#line 1256 "coverage.m"
            else
#line 1256 "coverage.m"
              if ((coverage__STATE_VARIABLE_SumAfter_0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1271 "coverage.m"
                if ((coverage__After_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1275 "coverage.m"
                  coverage__STATE_VARIABLE_SumAfter_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1271 "coverage.m"
                else
#line 1271 "coverage.m"
                  if ((coverage__After_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1272 "coverage.m"
                    coverage__STATE_VARIABLE_SumAfter_36_36 = coverage__STATE_VARIABLE_SumAfter_0_5;
#line 1271 "coverage.m"
                  else
#line 1269 "coverage.m"
                    {
#line 1269 "coverage.m"
                      MR_Integer coverage__ExecCount_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_28, (MR_Integer) 0)));

#line 1270 "coverage.m"
                      {
#line 1270 "coverage.m"
                        coverage__STATE_VARIABLE_SumAfter_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumAfter_36_36, 0) = ((MR_Box) (coverage__ExecCount_75));
#line 1270 "coverage.m"
                      }
#line 1269 "coverage.m"
                    }
#line 1256 "coverage.m"
              else
#line 1256 "coverage.m"
                {
#line 1256 "coverage.m"
                  MR_Integer coverage__SumExecCount_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumAfter_0_5, (MR_Integer) 0)));

#line 1260 "coverage.m"
                  if ((coverage__After_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1262 "coverage.m"
                    coverage__STATE_VARIABLE_SumAfter_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1260 "coverage.m"
                  else
#line 1260 "coverage.m"
                    if ((coverage__After_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1264 "coverage.m"
                      coverage__STATE_VARIABLE_SumAfter_36_36 = coverage__STATE_VARIABLE_SumAfter_0_5;
#line 1260 "coverage.m"
                    else
#line 1258 "coverage.m"
                      {
#line 1258 "coverage.m"
                        MR_Integer coverage__ExecCount_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_28, (MR_Integer) 0)));
#line 1258 "coverage.m"
                        MR_Integer coverage__V_74_74 = (coverage__SumExecCount_68 + coverage__ExecCount_69);

#line 1259 "coverage.m"
                        {
#line 1259 "coverage.m"
                          coverage__STATE_VARIABLE_SumAfter_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "coverage.m"
                          MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumAfter_36_36, 0) = ((MR_Box) (coverage__V_74_74));
#line 1259 "coverage.m"
                        }
#line 1258 "coverage.m"
                      }
#line 1256 "coverage.m"
                }
#line 500 "coverage.m"
            /* direct tailcall eliminated */
#line 500 "coverage.m"
            {
#line 500 "coverage.m"
              MR_Word coverage__HeadVar__1__tmp_copy_1 = coverage__Disjs_19;
#line 500 "coverage.m"
              MR_Word coverage__STATE_VARIABLE_SumAfter_0__tmp_copy_5 = coverage__STATE_VARIABLE_SumAfter_36_36;
#line 500 "coverage.m"
              MR_Word coverage__STATE_VARIABLE_Array_0__tmp_copy_7 = coverage__STATE_VARIABLE_Array_35_35;

#line 500 "coverage.m"
              coverage__STATE_VARIABLE_Array_0_7 = coverage__STATE_VARIABLE_Array_0__tmp_copy_7;
#line 500 "coverage.m"
              coverage__STATE_VARIABLE_SumAfter_0_5 = coverage__STATE_VARIABLE_SumAfter_0__tmp_copy_5;
#line 500 "coverage.m"
              coverage__Before0_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 500 "coverage.m"
              coverage__HeadVar__1_1 = coverage__HeadVar__1__tmp_copy_1;
#line 500 "coverage.m"
            }
#line 500 "coverage.m"
            continue;
#line 484 "coverage.m"
          }
#line 482 "coverage.m"
      }
#line 482 "coverage.m"
      break;
#line 482 "coverage.m"
    }
#line 476 "coverage.m"
}

#line 1148 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1148__1_2_p_0(
#line 1148 "coverage.m"
  MR_Integer coverage__HeadVar__1_12,
#line 1148 "coverage.m"
  MR_Integer coverage__AfterCountB_18)
#line 1148 "coverage.m"
{
#line 1148 "coverage.m"
  {
#line 1148 "coverage.m"
    MR_bool coverage__succeeded = (coverage__HeadVar__1_12 == coverage__AfterCountB_18);

#line 1148 "coverage.m"
    return coverage__succeeded;
#line 1148 "coverage.m"
  }
#line 1148 "coverage.m"
}

#line 1137 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1137__1_2_p_0(
#line 1137 "coverage.m"
  MR_Integer coverage__AfterCountA_8,
#line 1137 "coverage.m"
  MR_Integer coverage__HeadVar__2_15)
#line 1137 "coverage.m"
{
#line 1137 "coverage.m"
  {
#line 1137 "coverage.m"
    MR_bool coverage__succeeded = (coverage__AfterCountA_8 == coverage__HeadVar__2_15);

#line 1137 "coverage.m"
    return coverage__succeeded;
#line 1137 "coverage.m"
  }
#line 1137 "coverage.m"
}

#line 1132 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1132__1_2_p_0(
#line 1132 "coverage.m"
  MR_Integer coverage__AfterCountA_8,
#line 1132 "coverage.m"
  MR_Integer coverage__AfterCountB_9)
#line 1132 "coverage.m"
{
#line 1132 "coverage.m"
  {
#line 1132 "coverage.m"
    MR_bool coverage__succeeded = (coverage__AfterCountA_8 == coverage__AfterCountB_9);

#line 1132 "coverage.m"
    return coverage__succeeded;
#line 1132 "coverage.m"
  }
#line 1132 "coverage.m"
}

#line 334 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__goal_annotate_coverage__334__1_2_p_0(
#line 334 "coverage.m"
  MR_Word coverage__Before_9,
#line 334 "coverage.m"
  MR_Word coverage__HeadVar__2_83)
#line 334 "coverage.m"
{
#line 334 "coverage.m"
  {
#line 334 "coverage.m"
    MR_bool coverage__succeeded;

#line 334 "coverage.m"
    {
#line 334 "coverage.m"
      return coverage__succeeded = coverage____Unify____coverage_before_0_0(coverage__Before_9, coverage__HeadVar__2_83);
    }
#line 334 "coverage.m"
    return coverage__succeeded;
#line 334 "coverage.m"
  }
#line 334 "coverage.m"
}

#line 254 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__goal_annotate_with_coverage__254__1_2_p_0(
#line 254 "coverage.m"
  MR_Word coverage__After_25,
#line 254 "coverage.m"
  MR_Word coverage__HeadVar__2_28)
#line 254 "coverage.m"
{
#line 205 "coverage.m"
  {
#line 205 "coverage.m"
    MR_bool coverage__succeeded;
#line 205 "coverage.m"
    MR_Integer coverage__CastX_40 = (MR_Integer) coverage__After_25;
#line 205 "coverage.m"
    MR_Integer coverage__CastY_41 = (MR_Integer) coverage__HeadVar__2_28;

#line 205 "coverage.m"
    coverage__succeeded = (coverage__CastX_40 == coverage__CastY_41);
#line 205 "coverage.m"
    if (coverage__succeeded)
#line 205 "coverage.m"
      coverage__succeeded = MR_TRUE;
#line 205 "coverage.m"
    else
#line 205 "coverage.m"
      if ((coverage__After_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "coverage.m"
        {
#line 205 "coverage.m"
          MR_Integer coverage__CastX_34 = (MR_Integer) coverage__After_25;
#line 205 "coverage.m"
          MR_Integer coverage__CastY_35 = (MR_Integer) coverage__HeadVar__2_28;

#line 205 "coverage.m"
          coverage__succeeded = (coverage__CastY_35 == coverage__CastX_34);
#line 205 "coverage.m"
        }
#line 205 "coverage.m"
      else
#line 205 "coverage.m"
        if ((coverage__After_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 205 "coverage.m"
          {
#line 205 "coverage.m"
            MR_Integer coverage__CastX_36 = (MR_Integer) coverage__After_25;
#line 205 "coverage.m"
            MR_Integer coverage__CastY_37 = (MR_Integer) coverage__HeadVar__2_28;

#line 205 "coverage.m"
            coverage__succeeded = (coverage__CastY_37 == coverage__CastX_36);
#line 205 "coverage.m"
          }
#line 205 "coverage.m"
        else
#line 205 "coverage.m"
          {
#line 205 "coverage.m"
            MR_Integer coverage__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_25, (MR_Integer) 0)));
#line 205 "coverage.m"
            MR_Integer coverage__V_39_39;

#line 205 "coverage.m"
            coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_28)) == (MR_mktag((MR_Integer) 1)));
#line 205 "coverage.m"
            if (coverage__succeeded)
#line 205 "coverage.m"
              {
#line 205 "coverage.m"
                coverage__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_28, (MR_Integer) 0)));
#line 3010 "coverage.c"
                coverage__succeeded = (coverage__V_38_38 == coverage__V_39_39);
#line 205 "coverage.m"
              }
#line 205 "coverage.m"
          }
#line 205 "coverage.m"
    return coverage__succeeded;
#line 205 "coverage.m"
  }
#line 254 "coverage.m"
}

#line 210 "coverage.m"
static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0(
#line 210 "coverage.m"
  MR_Word * coverage__HeadVar__1_1,
#line 210 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 210 "coverage.m"
  MR_Word coverage__HeadVar__3_3)
#line 210 "coverage.m"
{
#line 210 "coverage.m"
  {
#line 210 "coverage.m"
    MR_bool coverage__succeeded;
#line 210 "coverage.m"
    MR_Integer coverage__CastX_10 = (MR_Integer) coverage__HeadVar__2_2;
#line 210 "coverage.m"
    MR_Integer coverage__CastY_11 = (MR_Integer) coverage__HeadVar__3_3;

#line 210 "coverage.m"
    coverage__succeeded = (coverage__CastX_10 == coverage__CastY_11);
#line 210 "coverage.m"
    if (coverage__succeeded)
#line 3047 "coverage.c"
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "coverage.m"
    else
#line 210 "coverage.m"
      if ((coverage__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 210 "coverage.m"
        if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 210 "coverage.m"
          *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "coverage.m"
        else
#line 210 "coverage.m"
          if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 210 "coverage.m"
            *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 210 "coverage.m"
          else
#line 3065 "coverage.c"
            *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 210 "coverage.m"
      else
#line 210 "coverage.m"
        if ((coverage__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 210 "coverage.m"
          if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 210 "coverage.m"
            *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 210 "coverage.m"
          else
#line 210 "coverage.m"
            if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 210 "coverage.m"
              *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "coverage.m"
            else
#line 3083 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 210 "coverage.m"
        else
#line 210 "coverage.m"
          {
#line 210 "coverage.m"
            MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 210 "coverage.m"
            if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3094 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 210 "coverage.m"
            else
#line 210 "coverage.m"
              if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3100 "coverage.c"
                *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 210 "coverage.m"
              else
#line 210 "coverage.m"
                {
#line 210 "coverage.m"
                  MR_Integer coverage__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__3_3, (MR_Integer) 0)));

#line 210 "coverage.m"
                  {
#line 210 "coverage.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__V_13_13, coverage__V_9_9);
#line 210 "coverage.m"
                    return;
                  }
#line 210 "coverage.m"
                }
#line 210 "coverage.m"
          }
#line 210 "coverage.m"
  }
#line 210 "coverage.m"
}

#line 210 "coverage.m"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0(
#line 210 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 210 "coverage.m"
  MR_Word coverage__HeadVar__2_2)
#line 210 "coverage.m"
{
#line 210 "coverage.m"
  {
#line 210 "coverage.m"
    MR_bool coverage__succeeded;
#line 210 "coverage.m"
    MR_Integer coverage__CastX_9 = (MR_Integer) coverage__HeadVar__1_1;
#line 210 "coverage.m"
    MR_Integer coverage__CastY_10 = (MR_Integer) coverage__HeadVar__2_2;

#line 210 "coverage.m"
    coverage__succeeded = (coverage__CastX_9 == coverage__CastY_10);
#line 210 "coverage.m"
    if (coverage__succeeded)
#line 210 "coverage.m"
      coverage__succeeded = MR_TRUE;
#line 210 "coverage.m"
    else
#line 210 "coverage.m"
      if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 210 "coverage.m"
        {
#line 210 "coverage.m"
          MR_Integer coverage__CastX_3 = (MR_Integer) coverage__HeadVar__1_1;
#line 210 "coverage.m"
          MR_Integer coverage__CastY_4 = (MR_Integer) coverage__HeadVar__2_2;

#line 210 "coverage.m"
          coverage__succeeded = (coverage__CastY_4 == coverage__CastX_3);
#line 210 "coverage.m"
        }
#line 210 "coverage.m"
      else
#line 210 "coverage.m"
        if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 210 "coverage.m"
          {
#line 210 "coverage.m"
            MR_Integer coverage__CastX_5 = (MR_Integer) coverage__HeadVar__1_1;
#line 210 "coverage.m"
            MR_Integer coverage__CastY_6 = (MR_Integer) coverage__HeadVar__2_2;

#line 210 "coverage.m"
            coverage__succeeded = (coverage__CastY_6 == coverage__CastX_5);
#line 210 "coverage.m"
          }
#line 210 "coverage.m"
        else
#line 210 "coverage.m"
          {
#line 210 "coverage.m"
            MR_Integer coverage__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 210 "coverage.m"
            MR_Integer coverage__V_8_8;

#line 210 "coverage.m"
            coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 210 "coverage.m"
            if (coverage__succeeded)
#line 210 "coverage.m"
              {
#line 210 "coverage.m"
                coverage__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));
#line 3196 "coverage.c"
                coverage__succeeded = (coverage__V_7_7 == coverage__V_8_8);
#line 210 "coverage.m"
              }
#line 210 "coverage.m"
          }
#line 210 "coverage.m"
    return coverage__succeeded;
#line 210 "coverage.m"
  }
#line 210 "coverage.m"
}

#line 215 "coverage.m"
static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0(
#line 215 "coverage.m"
  MR_Word * coverage__HeadVar__1_1,
#line 215 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 215 "coverage.m"
  MR_Word coverage__HeadVar__3_3)
#line 215 "coverage.m"
{
#line 215 "coverage.m"
  {
#line 215 "coverage.m"
    MR_bool coverage__succeeded;
#line 215 "coverage.m"
    MR_Integer coverage__CastX_10 = (MR_Integer) coverage__HeadVar__2_2;
#line 215 "coverage.m"
    MR_Integer coverage__CastY_11 = (MR_Integer) coverage__HeadVar__3_3;

#line 215 "coverage.m"
    coverage__succeeded = (coverage__CastX_10 == coverage__CastY_11);
#line 215 "coverage.m"
    if (coverage__succeeded)
#line 3233 "coverage.c"
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 215 "coverage.m"
    else
#line 215 "coverage.m"
      if ((coverage__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "coverage.m"
        if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "coverage.m"
          *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 215 "coverage.m"
        else
#line 215 "coverage.m"
          if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 215 "coverage.m"
            *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 215 "coverage.m"
          else
#line 3251 "coverage.c"
            *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 215 "coverage.m"
      else
#line 215 "coverage.m"
        if ((coverage__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 215 "coverage.m"
          if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "coverage.m"
            *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 215 "coverage.m"
          else
#line 215 "coverage.m"
            if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 215 "coverage.m"
              *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 215 "coverage.m"
            else
#line 3269 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 215 "coverage.m"
        else
#line 215 "coverage.m"
          {
#line 215 "coverage.m"
            MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 215 "coverage.m"
            if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3280 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 215 "coverage.m"
            else
#line 215 "coverage.m"
              if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3286 "coverage.c"
                *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 215 "coverage.m"
              else
#line 215 "coverage.m"
                {
#line 215 "coverage.m"
                  MR_Integer coverage__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__3_3, (MR_Integer) 0)));

#line 215 "coverage.m"
                  {
#line 215 "coverage.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__V_13_13, coverage__V_9_9);
#line 215 "coverage.m"
                    return;
                  }
#line 215 "coverage.m"
                }
#line 215 "coverage.m"
          }
#line 215 "coverage.m"
  }
#line 215 "coverage.m"
}

#line 215 "coverage.m"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0(
#line 215 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 215 "coverage.m"
  MR_Word coverage__HeadVar__2_2)
#line 215 "coverage.m"
{
#line 215 "coverage.m"
  {
#line 215 "coverage.m"
    MR_bool coverage__succeeded;
#line 215 "coverage.m"
    MR_Integer coverage__CastX_9 = (MR_Integer) coverage__HeadVar__1_1;
#line 215 "coverage.m"
    MR_Integer coverage__CastY_10 = (MR_Integer) coverage__HeadVar__2_2;

#line 215 "coverage.m"
    coverage__succeeded = (coverage__CastX_9 == coverage__CastY_10);
#line 215 "coverage.m"
    if (coverage__succeeded)
#line 215 "coverage.m"
      coverage__succeeded = MR_TRUE;
#line 215 "coverage.m"
    else
#line 215 "coverage.m"
      if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "coverage.m"
        {
#line 215 "coverage.m"
          MR_Integer coverage__CastX_3 = (MR_Integer) coverage__HeadVar__1_1;
#line 215 "coverage.m"
          MR_Integer coverage__CastY_4 = (MR_Integer) coverage__HeadVar__2_2;

#line 215 "coverage.m"
          coverage__succeeded = (coverage__CastY_4 == coverage__CastX_3);
#line 215 "coverage.m"
        }
#line 215 "coverage.m"
      else
#line 215 "coverage.m"
        if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 215 "coverage.m"
          {
#line 215 "coverage.m"
            MR_Integer coverage__CastX_5 = (MR_Integer) coverage__HeadVar__1_1;
#line 215 "coverage.m"
            MR_Integer coverage__CastY_6 = (MR_Integer) coverage__HeadVar__2_2;

#line 215 "coverage.m"
            coverage__succeeded = (coverage__CastY_6 == coverage__CastX_5);
#line 215 "coverage.m"
          }
#line 215 "coverage.m"
        else
#line 215 "coverage.m"
          {
#line 215 "coverage.m"
            MR_Integer coverage__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 215 "coverage.m"
            MR_Integer coverage__V_8_8;

#line 215 "coverage.m"
            coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 215 "coverage.m"
            if (coverage__succeeded)
#line 215 "coverage.m"
              {
#line 215 "coverage.m"
                coverage__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));
#line 3382 "coverage.c"
                coverage__succeeded = (coverage__V_7_7 == coverage__V_8_8);
#line 215 "coverage.m"
              }
#line 215 "coverage.m"
          }
#line 215 "coverage.m"
    return coverage__succeeded;
#line 215 "coverage.m"
  }
#line 215 "coverage.m"
}

#line 265 "coverage.m"
static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0(
#line 265 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_20,
#line 265 "coverage.m"
  MR_Word * coverage__HeadVar__1_1,
#line 265 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 265 "coverage.m"
  MR_Word coverage__HeadVar__3_3)
#line 265 "coverage.m"
{
#line 265 "coverage.m"
  {
#line 265 "coverage.m"
    MR_bool coverage__succeeded;
#line 265 "coverage.m"
    MR_Integer coverage__CastX_18 = (MR_Integer) coverage__HeadVar__2_2;
#line 265 "coverage.m"
    MR_Integer coverage__CastY_19 = (MR_Integer) coverage__HeadVar__3_3;

#line 265 "coverage.m"
    coverage__succeeded = (coverage__CastX_18 == coverage__CastY_19);
#line 265 "coverage.m"
    if (coverage__succeeded)
#line 3421 "coverage.c"
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 265 "coverage.m"
    else
#line 265 "coverage.m"
      {
#line 265 "coverage.m"
        MR_Word coverage__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 0)));
#line 265 "coverage.m"
        MR_Word coverage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 1)));
#line 265 "coverage.m"
        MR_Word coverage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 2)));
#line 265 "coverage.m"
        MR_Word coverage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 3)));
#line 265 "coverage.m"
        MR_Word coverage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 4)));
#line 265 "coverage.m"
        MR_Word coverage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 0)));
#line 265 "coverage.m"
        MR_Word coverage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 1)));
#line 265 "coverage.m"
        MR_Word coverage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 2)));
#line 265 "coverage.m"
        MR_Word coverage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 3)));
#line 265 "coverage.m"
        MR_Word coverage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 4)));
#line 265 "coverage.m"
        MR_Word coverage__V_14_14;

#line 265 "coverage.m"
        {
#line 265 "coverage.m"
          mdbcomp__program_representation____Compare____string_proc_label_0_0(&coverage__V_14_14, coverage__V_4_4, coverage__V_9_9);
        }
#line 3455 "coverage.c"
        coverage__succeeded = (coverage__V_14_14 == (MR_Integer) 0);
#line 265 "coverage.m"
        coverage__succeeded = !(coverage__succeeded);
#line 265 "coverage.m"
        if (coverage__succeeded)
#line 265 "coverage.m"
          *coverage__HeadVar__1_1 = coverage__V_14_14;
#line 265 "coverage.m"
        else
#line 265 "coverage.m"
          {
#line 265 "coverage.m"
            MR_Word coverage__V_15_15;
#line 265 "coverage.m"
            MR_Word coverage__TypeInfo_24_24;

#line 3472 "coverage.c"
            {
#line 3474 "coverage.c"
              coverage__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3476 "coverage.c"
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_24_24, 0) = ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1));
#line 3478 "coverage.c"
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_24_24, 1) = ((MR_Box) (coverage__TypeInfo_for_Callee_20));
#line 3480 "coverage.c"
            }
#line 265 "coverage.m"
            {
#line 265 "coverage.m"
              mercury__tree234____Compare____tree234_2_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__TypeInfo_24_24, &coverage__V_15_15, coverage__V_5_5, coverage__V_10_10);
            }
#line 3487 "coverage.c"
            coverage__succeeded = (coverage__V_15_15 == (MR_Integer) 0);
#line 265 "coverage.m"
            coverage__succeeded = !(coverage__succeeded);
#line 265 "coverage.m"
            if (coverage__succeeded)
#line 265 "coverage.m"
              *coverage__HeadVar__1_1 = coverage__V_15_15;
#line 265 "coverage.m"
            else
#line 265 "coverage.m"
              {
#line 265 "coverage.m"
                MR_Word coverage__V_16_16;

#line 265 "coverage.m"
                {
#line 265 "coverage.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &coverage_scalar_common_2[0], &coverage__V_16_16, ((MR_Box) (coverage__V_6_6)), ((MR_Box) (coverage__V_11_11)));
                }
#line 3507 "coverage.c"
                coverage__succeeded = (coverage__V_16_16 == (MR_Integer) 0);
#line 265 "coverage.m"
                coverage__succeeded = !(coverage__succeeded);
#line 265 "coverage.m"
                if (coverage__succeeded)
#line 265 "coverage.m"
                  *coverage__HeadVar__1_1 = coverage__V_16_16;
#line 265 "coverage.m"
                else
#line 265 "coverage.m"
                  {
#line 265 "coverage.m"
                    MR_Word coverage__V_17_17;

#line 265 "coverage.m"
                    {
#line 265 "coverage.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &coverage_scalar_common_2[0], &coverage__V_17_17, ((MR_Box) (coverage__V_7_7)), ((MR_Box) (coverage__V_12_12)));
                    }
#line 3527 "coverage.c"
                    coverage__succeeded = (coverage__V_17_17 == (MR_Integer) 0);
#line 265 "coverage.m"
                    coverage__succeeded = !(coverage__succeeded);
#line 265 "coverage.m"
                    if (coverage__succeeded)
#line 265 "coverage.m"
                      *coverage__HeadVar__1_1 = coverage__V_17_17;
#line 265 "coverage.m"
                    else
#line 265 "coverage.m"
                      {
#line 265 "coverage.m"
                        {
#line 265 "coverage.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &coverage_scalar_common_2[1], coverage__HeadVar__1_1, ((MR_Box) (coverage__V_8_8)), ((MR_Box) (coverage__V_13_13)));
#line 265 "coverage.m"
                          return;
                        }
#line 265 "coverage.m"
                      }
#line 265 "coverage.m"
                  }
#line 265 "coverage.m"
              }
#line 265 "coverage.m"
          }
#line 265 "coverage.m"
      }
#line 265 "coverage.m"
  }
#line 265 "coverage.m"
}

#line 265 "coverage.m"
static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0(
#line 265 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_15,
#line 265 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 265 "coverage.m"
  MR_Word coverage__HeadVar__2_2)
#line 265 "coverage.m"
{
#line 265 "coverage.m"
  {
#line 265 "coverage.m"
    MR_bool coverage__succeeded;
#line 265 "coverage.m"
    MR_Integer coverage__CastX_13 = (MR_Integer) coverage__HeadVar__1_1;
#line 265 "coverage.m"
    MR_Integer coverage__CastY_14 = (MR_Integer) coverage__HeadVar__2_2;

#line 265 "coverage.m"
    coverage__succeeded = (coverage__CastX_13 == coverage__CastY_14);
#line 265 "coverage.m"
    if (coverage__succeeded)
#line 265 "coverage.m"
      coverage__succeeded = MR_TRUE;
#line 265 "coverage.m"
    else
#line 265 "coverage.m"
      {
#line 265 "coverage.m"
        MR_Word coverage__TypeCtorInfo_17_17;
#line 265 "coverage.m"
        MR_Word coverage__TypeCtorInfo_18_18;
#line 265 "coverage.m"
        MR_Word coverage__TypeInfo_19_19;
#line 265 "coverage.m"
        MR_Word coverage__TypeInfo_22_22;
#line 265 "coverage.m"
        MR_Word coverage__TypeInfo_23_23;
#line 265 "coverage.m"
        MR_Word coverage__TypeInfo_24_24;
#line 265 "coverage.m"
        MR_Word coverage__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 265 "coverage.m"
        MR_Word coverage__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 265 "coverage.m"
        MR_Word coverage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 2)));
#line 265 "coverage.m"
        MR_Word coverage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 3)));
#line 265 "coverage.m"
        MR_Word coverage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 4)));
#line 265 "coverage.m"
        MR_Word coverage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 0)));
#line 265 "coverage.m"
        MR_Word coverage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 1)));
#line 265 "coverage.m"
        MR_Word coverage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 2)));
#line 265 "coverage.m"
        MR_Word coverage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 3)));
#line 265 "coverage.m"
        MR_Word coverage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 4)));

#line 3624 "coverage.c"
        {
#line 3626 "coverage.c"
          coverage__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(coverage__V_3_3, coverage__V_8_8);
        }
#line 265 "coverage.m"
        if (coverage__succeeded)
#line 265 "coverage.m"
          {
#line 3633 "coverage.c"
            coverage__TypeCtorInfo_17_17 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 3635 "coverage.c"
            coverage__TypeCtorInfo_18_18 = (MR_Word) &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1;
#line 3637 "coverage.c"
            {
#line 3639 "coverage.c"
              coverage__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3641 "coverage.c"
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_19_19, 0) = ((MR_Box) (coverage__TypeCtorInfo_18_18));
#line 3643 "coverage.c"
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_19_19, 1) = ((MR_Box) (coverage__TypeInfo_for_Callee_15));
#line 3645 "coverage.c"
            }
#line 3647 "coverage.c"
            {
#line 3649 "coverage.c"
              coverage__succeeded = mercury__tree234____Unify____tree234_2_0(coverage__TypeCtorInfo_17_17, coverage__TypeInfo_19_19, coverage__V_4_4, coverage__V_9_9);
            }
#line 265 "coverage.m"
            if (coverage__succeeded)
#line 265 "coverage.m"
              {
#line 3656 "coverage.c"
                coverage__TypeInfo_22_22 = (MR_Word) &coverage_scalar_common_2[0];
#line 3658 "coverage.c"
                {
#line 3660 "coverage.c"
                  coverage__succeeded = mercury__builtin__unify_2_p_0(coverage__TypeInfo_22_22, ((MR_Box) (coverage__V_5_5)), ((MR_Box) (coverage__V_10_10)));
                }
#line 265 "coverage.m"
                if (coverage__succeeded)
#line 265 "coverage.m"
                  {
#line 3667 "coverage.c"
                    coverage__TypeInfo_23_23 = (MR_Word) &coverage_scalar_common_2[0];
#line 3669 "coverage.c"
                    {
#line 3671 "coverage.c"
                      coverage__succeeded = mercury__builtin__unify_2_p_0(coverage__TypeInfo_23_23, ((MR_Box) (coverage__V_6_6)), ((MR_Box) (coverage__V_11_11)));
                    }
#line 265 "coverage.m"
                    if (coverage__succeeded)
#line 265 "coverage.m"
                      {
#line 3678 "coverage.c"
                        coverage__TypeInfo_24_24 = (MR_Word) &coverage_scalar_common_2[1];
#line 3680 "coverage.c"
                        {
#line 3682 "coverage.c"
                          return coverage__succeeded = mercury__builtin__unify_2_p_0(coverage__TypeInfo_24_24, ((MR_Box) (coverage__V_7_7)), ((MR_Box) (coverage__V_12_12)));
                        }
#line 265 "coverage.m"
                      }
#line 265 "coverage.m"
                  }
#line 265 "coverage.m"
              }
#line 265 "coverage.m"
          }
#line 265 "coverage.m"
      }
#line 265 "coverage.m"
    return coverage__succeeded;
#line 265 "coverage.m"
  }
#line 265 "coverage.m"
}

#line 61 "coverage.m"
void MR_CALL 
coverage____Compare____coverage_point_0_0(
#line 61 "coverage.m"
  MR_Word * coverage__HeadVar__1_1,
#line 61 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 61 "coverage.m"
  MR_Word coverage__HeadVar__3_3)
#line 61 "coverage.m"
{
#line 61 "coverage.m"
  {
#line 61 "coverage.m"
    MR_bool coverage__succeeded;
#line 61 "coverage.m"
    MR_Integer coverage__CastX_12 = (MR_Integer) coverage__HeadVar__2_2;
#line 61 "coverage.m"
    MR_Integer coverage__CastY_13 = (MR_Integer) coverage__HeadVar__3_3;

#line 61 "coverage.m"
    coverage__succeeded = (coverage__CastX_12 == coverage__CastY_13);
#line 61 "coverage.m"
    if (coverage__succeeded)
#line 3726 "coverage.c"
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "coverage.m"
    else
#line 61 "coverage.m"
      {
#line 61 "coverage.m"
        MR_Integer coverage__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 0)));
#line 61 "coverage.m"
        MR_Word coverage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 1)));
#line 61 "coverage.m"
        MR_Word coverage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 2)));
#line 61 "coverage.m"
        MR_Integer coverage__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 0)));
#line 61 "coverage.m"
        MR_Word coverage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 1)));
#line 61 "coverage.m"
        MR_Word coverage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__3_3, (MR_Integer) 2)));
#line 61 "coverage.m"
        MR_Word coverage__V_10_10;

#line 61 "coverage.m"
        {
#line 61 "coverage.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&coverage__V_10_10, coverage__V_4_4, coverage__V_7_7);
        }
#line 3752 "coverage.c"
        coverage__succeeded = (coverage__V_10_10 == (MR_Integer) 0);
#line 61 "coverage.m"
        coverage__succeeded = !(coverage__succeeded);
#line 61 "coverage.m"
        if (coverage__succeeded)
#line 61 "coverage.m"
          *coverage__HeadVar__1_1 = coverage__V_10_10;
#line 61 "coverage.m"
        else
#line 61 "coverage.m"
          {
#line 61 "coverage.m"
            MR_Word coverage__V_11_11;

#line 61 "coverage.m"
            {
#line 61 "coverage.m"
              mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&coverage__V_11_11, coverage__V_5_5, coverage__V_8_8);
            }
#line 3772 "coverage.c"
            coverage__succeeded = (coverage__V_11_11 == (MR_Integer) 0);
#line 61 "coverage.m"
            coverage__succeeded = !(coverage__succeeded);
#line 61 "coverage.m"
            if (coverage__succeeded)
#line 61 "coverage.m"
              *coverage__HeadVar__1_1 = coverage__V_11_11;
#line 61 "coverage.m"
            else
#line 61 "coverage.m"
              {
#line 61 "coverage.m"
                MR_Integer coverage__V_17_17 = (MR_Integer) coverage__V_6_6;
#line 61 "coverage.m"
                MR_Integer coverage__V_18_18 = (MR_Integer) coverage__V_9_9;

#line 61 "coverage.m"
                {
#line 61 "coverage.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__V_17_17, coverage__V_18_18);
#line 61 "coverage.m"
                  return;
                }
#line 61 "coverage.m"
              }
#line 61 "coverage.m"
          }
#line 61 "coverage.m"
      }
#line 61 "coverage.m"
  }
#line 61 "coverage.m"
}

#line 61 "coverage.m"
MR_bool MR_CALL 
coverage____Unify____coverage_point_0_0(
#line 61 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 61 "coverage.m"
  MR_Word coverage__HeadVar__2_2)
#line 61 "coverage.m"
{
#line 61 "coverage.m"
  {
#line 61 "coverage.m"
    MR_bool coverage__succeeded;
#line 61 "coverage.m"
    MR_Integer coverage__CastX_9 = (MR_Integer) coverage__HeadVar__1_1;
#line 61 "coverage.m"
    MR_Integer coverage__CastY_10 = (MR_Integer) coverage__HeadVar__2_2;

#line 61 "coverage.m"
    coverage__succeeded = (coverage__CastX_9 == coverage__CastY_10);
#line 61 "coverage.m"
    if (coverage__succeeded)
#line 61 "coverage.m"
      coverage__succeeded = MR_TRUE;
#line 61 "coverage.m"
    else
#line 61 "coverage.m"
      {
#line 61 "coverage.m"
        MR_Integer coverage__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 61 "coverage.m"
        MR_Word coverage__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 61 "coverage.m"
        MR_Word coverage__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__1_1, (MR_Integer) 2)));
#line 61 "coverage.m"
        MR_Integer coverage__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 0)));
#line 61 "coverage.m"
        MR_Word coverage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 1)));
#line 61 "coverage.m"
        MR_Word coverage__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 2)));

#line 3848 "coverage.c"
        coverage__succeeded = (coverage__V_3_3 == coverage__V_6_6);
#line 61 "coverage.m"
        if (coverage__succeeded)
#line 61 "coverage.m"
          {
#line 3854 "coverage.c"
            {
#line 3856 "coverage.c"
              coverage__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(coverage__V_4_4, coverage__V_7_7);
            }
#line 61 "coverage.m"
            if (coverage__succeeded)
#line 3861 "coverage.c"
              coverage__succeeded = (coverage__V_5_5 == coverage__V_8_8);
#line 61 "coverage.m"
          }
#line 61 "coverage.m"
      }
#line 61 "coverage.m"
    return coverage__succeeded;
#line 61 "coverage.m"
  }
#line 61 "coverage.m"
}

#line 30 "coverage.m"
void MR_CALL 
coverage____Compare____coverage_info_0_0(
#line 30 "coverage.m"
  MR_Word * coverage__HeadVar__1_1,
#line 30 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 30 "coverage.m"
  MR_Word coverage__HeadVar__3_3)
#line 30 "coverage.m"
{
#line 30 "coverage.m"
  {
#line 30 "coverage.m"
    MR_bool coverage__succeeded;
#line 30 "coverage.m"
    MR_Integer coverage__CastX_65 = (MR_Integer) coverage__HeadVar__2_2;
#line 30 "coverage.m"
    MR_Integer coverage__CastY_66 = (MR_Integer) coverage__HeadVar__3_3;

#line 30 "coverage.m"
    coverage__succeeded = (coverage__CastX_65 == coverage__CastY_66);
#line 30 "coverage.m"
    if (coverage__succeeded)
#line 3898 "coverage.c"
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 30 "coverage.m"
    else
#line 30 "coverage.m"
      if ((coverage__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 30 "coverage.m"
        if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 30 "coverage.m"
          *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 30 "coverage.m"
        else
#line 30 "coverage.m"
          if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 30 "coverage.m"
            *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
          else
#line 30 "coverage.m"
            if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3918 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
            else
#line 30 "coverage.m"
              if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3924 "coverage.c"
                *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
              else
#line 30 "coverage.m"
                if (((((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3930 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                else
#line 3934 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
      else
#line 30 "coverage.m"
        if ((coverage__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 30 "coverage.m"
          if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 30 "coverage.m"
            *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
          else
#line 30 "coverage.m"
            if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 30 "coverage.m"
              *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 30 "coverage.m"
            else
#line 30 "coverage.m"
              if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3954 "coverage.c"
                *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
              else
#line 30 "coverage.m"
                if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3960 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                else
#line 30 "coverage.m"
                  if (((((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3966 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                  else
#line 3970 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
        else
#line 30 "coverage.m"
          if (((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 30 "coverage.m"
            {
#line 30 "coverage.m"
              MR_Integer coverage__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "coverage.m"
              MR_Integer coverage__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 30 "coverage.m"
              if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3985 "coverage.c"
                *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
              else
#line 30 "coverage.m"
                if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3991 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                else
#line 30 "coverage.m"
                  if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 30 "coverage.m"
                    {
#line 30 "coverage.m"
                      MR_Integer coverage__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__3_3, (MR_Integer) 0)));
#line 30 "coverage.m"
                      MR_Integer coverage__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__3_3, (MR_Integer) 1)));
#line 30 "coverage.m"
                      MR_Word coverage__V_36_36;

#line 30 "coverage.m"
                      {
#line 30 "coverage.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&coverage__V_36_36, coverage__V_73_73, coverage__V_34_34);
                      }
#line 4011 "coverage.c"
                      coverage__succeeded = (coverage__V_36_36 == (MR_Integer) 0);
#line 30 "coverage.m"
                      coverage__succeeded = !(coverage__succeeded);
#line 30 "coverage.m"
                      if (coverage__succeeded)
#line 30 "coverage.m"
                        *coverage__HeadVar__1_1 = coverage__V_36_36;
#line 30 "coverage.m"
                      else
#line 30 "coverage.m"
                        {
#line 30 "coverage.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__V_72_72, coverage__V_35_35);
#line 30 "coverage.m"
                          return;
                        }
#line 30 "coverage.m"
                    }
#line 30 "coverage.m"
                  else
#line 30 "coverage.m"
                    if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4034 "coverage.c"
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    else
#line 30 "coverage.m"
                      if (((((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4040 "coverage.c"
                        *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                      else
#line 4044 "coverage.c"
                        *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
            }
#line 30 "coverage.m"
          else
#line 30 "coverage.m"
            if (((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 30 "coverage.m"
              {
#line 30 "coverage.m"
                MR_Integer coverage__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 30 "coverage.m"
                if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4059 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                else
#line 30 "coverage.m"
                  if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4065 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                  else
#line 30 "coverage.m"
                    if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4071 "coverage.c"
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                    else
#line 30 "coverage.m"
                      if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 30 "coverage.m"
                        {
#line 30 "coverage.m"
                          MR_Integer coverage__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__3_3, (MR_Integer) 0)));

#line 30 "coverage.m"
                          {
#line 30 "coverage.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__V_76_76, coverage__V_17_17);
#line 30 "coverage.m"
                            return;
                          }
#line 30 "coverage.m"
                        }
#line 30 "coverage.m"
                      else
#line 30 "coverage.m"
                        if (((((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4095 "coverage.c"
                          *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                        else
#line 4099 "coverage.c"
                          *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
              }
#line 30 "coverage.m"
            else
#line 30 "coverage.m"
              if (((((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 30 "coverage.m"
                {
#line 30 "coverage.m"
                  MR_Integer coverage__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 1)));

#line 30 "coverage.m"
                  if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4114 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                  else
#line 30 "coverage.m"
                    if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4120 "coverage.c"
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    else
#line 30 "coverage.m"
                      if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4126 "coverage.c"
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                      else
#line 30 "coverage.m"
                        if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4132 "coverage.c"
                          *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                        else
#line 30 "coverage.m"
                          if (((((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 30 "coverage.m"
                            {
#line 30 "coverage.m"
                              MR_Integer coverage__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 1)));

#line 30 "coverage.m"
                              {
#line 30 "coverage.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__V_74_74, coverage__V_64_64);
#line 30 "coverage.m"
                                return;
                              }
#line 30 "coverage.m"
                            }
#line 30 "coverage.m"
                          else
#line 4154 "coverage.c"
                            *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                }
#line 30 "coverage.m"
              else
#line 30 "coverage.m"
                {
#line 30 "coverage.m"
                  MR_Integer coverage__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 1)));

#line 30 "coverage.m"
                  if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4167 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                  else
#line 30 "coverage.m"
                    if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4173 "coverage.c"
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    else
#line 30 "coverage.m"
                      if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4179 "coverage.c"
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                      else
#line 30 "coverage.m"
                        if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4185 "coverage.c"
                          *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                        else
#line 30 "coverage.m"
                          if (((((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4191 "coverage.c"
                            *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                          else
#line 30 "coverage.m"
                            {
#line 30 "coverage.m"
                              MR_Integer coverage__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 1)));

#line 30 "coverage.m"
                              {
#line 30 "coverage.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__V_75_75, coverage__V_51_51);
#line 30 "coverage.m"
                                return;
                              }
#line 30 "coverage.m"
                            }
#line 30 "coverage.m"
                }
#line 30 "coverage.m"
  }
#line 30 "coverage.m"
}

#line 30 "coverage.m"
MR_bool MR_CALL 
coverage____Unify____coverage_info_0_0(
#line 30 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 30 "coverage.m"
  MR_Word coverage__HeadVar__2_2)
#line 30 "coverage.m"
{
#line 30 "coverage.m"
  {
#line 30 "coverage.m"
    MR_bool coverage__succeeded;
#line 30 "coverage.m"
    MR_Integer coverage__CastX_17 = (MR_Integer) coverage__HeadVar__1_1;
#line 30 "coverage.m"
    MR_Integer coverage__CastY_18 = (MR_Integer) coverage__HeadVar__2_2;

#line 30 "coverage.m"
    coverage__succeeded = (coverage__CastX_17 == coverage__CastY_18);
#line 30 "coverage.m"
    if (coverage__succeeded)
#line 30 "coverage.m"
      coverage__succeeded = MR_TRUE;
#line 30 "coverage.m"
    else
#line 30 "coverage.m"
      if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 30 "coverage.m"
        {
#line 30 "coverage.m"
          MR_Integer coverage__CastX_5 = (MR_Integer) coverage__HeadVar__1_1;
#line 30 "coverage.m"
          MR_Integer coverage__CastY_6 = (MR_Integer) coverage__HeadVar__2_2;

#line 30 "coverage.m"
          coverage__succeeded = (coverage__CastY_6 == coverage__CastX_5);
#line 30 "coverage.m"
        }
#line 30 "coverage.m"
      else
#line 30 "coverage.m"
        if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 30 "coverage.m"
          {
#line 30 "coverage.m"
            MR_Integer coverage__CastX_3 = (MR_Integer) coverage__HeadVar__1_1;
#line 30 "coverage.m"
            MR_Integer coverage__CastY_4 = (MR_Integer) coverage__HeadVar__2_2;

#line 30 "coverage.m"
            coverage__succeeded = (coverage__CastY_4 == coverage__CastX_3);
#line 30 "coverage.m"
          }
#line 30 "coverage.m"
        else
#line 30 "coverage.m"
          if (((MR_tag((MR_Word) coverage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 30 "coverage.m"
            {
#line 30 "coverage.m"
              MR_Integer coverage__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 30 "coverage.m"
              MR_Integer coverage__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "coverage.m"
              MR_Integer coverage__V_11_11;
#line 30 "coverage.m"
              MR_Integer coverage__V_12_12;

#line 30 "coverage.m"
              coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 30 "coverage.m"
              if (coverage__succeeded)
#line 30 "coverage.m"
                {
#line 30 "coverage.m"
                  coverage__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__2_2, (MR_Integer) 0)));
#line 30 "coverage.m"
                  coverage__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__2_2, (MR_Integer) 1)));
#line 4295 "coverage.c"
                  coverage__succeeded = (coverage__V_9_9 == coverage__V_11_11);
#line 30 "coverage.m"
                  if (coverage__succeeded)
#line 4299 "coverage.c"
                    coverage__succeeded = (coverage__V_10_10 == coverage__V_12_12);
#line 30 "coverage.m"
                }
#line 30 "coverage.m"
            }
#line 30 "coverage.m"
          else
#line 30 "coverage.m"
            if (((MR_tag((MR_Word) coverage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 30 "coverage.m"
              {
#line 30 "coverage.m"
                MR_Integer coverage__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 30 "coverage.m"
                MR_Integer coverage__V_8_8;

#line 30 "coverage.m"
                coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 30 "coverage.m"
                if (coverage__succeeded)
#line 30 "coverage.m"
                  {
#line 30 "coverage.m"
                    coverage__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));
#line 4324 "coverage.c"
                    coverage__succeeded = (coverage__V_7_7 == coverage__V_8_8);
#line 30 "coverage.m"
                  }
#line 30 "coverage.m"
              }
#line 30 "coverage.m"
            else
#line 30 "coverage.m"
              if (((((MR_tag((MR_Word) coverage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 30 "coverage.m"
                {
#line 30 "coverage.m"
                  MR_Integer coverage__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "coverage.m"
                  MR_Integer coverage__V_16_16;

#line 30 "coverage.m"
                  coverage__succeeded = ((((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 30 "coverage.m"
                  if (coverage__succeeded)
#line 30 "coverage.m"
                    {
#line 30 "coverage.m"
                      coverage__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 1)));
#line 4349 "coverage.c"
                      coverage__succeeded = (coverage__V_15_15 == coverage__V_16_16);
#line 30 "coverage.m"
                    }
#line 30 "coverage.m"
                }
#line 30 "coverage.m"
              else
#line 30 "coverage.m"
                {
#line 30 "coverage.m"
                  MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "coverage.m"
                  MR_Integer coverage__V_14_14;

#line 30 "coverage.m"
                  coverage__succeeded = ((((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 30 "coverage.m"
                  if (coverage__succeeded)
#line 30 "coverage.m"
                    {
#line 30 "coverage.m"
                      coverage__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 1)));
#line 4372 "coverage.c"
                      coverage__succeeded = (coverage__V_13_13 == coverage__V_14_14);
#line 30 "coverage.m"
                    }
#line 30 "coverage.m"
                }
#line 30 "coverage.m"
    return coverage__succeeded;
#line 30 "coverage.m"
  }
#line 30 "coverage.m"
}

#line 200 "coverage.m"
static void MR_CALL 
coverage____Compare____coverage_before_0_0(
#line 200 "coverage.m"
  MR_Word * coverage__HeadVar__1_1,
#line 200 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 200 "coverage.m"
  MR_Word coverage__HeadVar__3_3)
#line 200 "coverage.m"
{
#line 200 "coverage.m"
  {
#line 200 "coverage.m"
    MR_bool coverage__succeeded;
#line 200 "coverage.m"
    MR_Integer coverage__CastX_10 = (MR_Integer) coverage__HeadVar__2_2;
#line 200 "coverage.m"
    MR_Integer coverage__CastY_11 = (MR_Integer) coverage__HeadVar__3_3;

#line 200 "coverage.m"
    coverage__succeeded = (coverage__CastX_10 == coverage__CastY_11);
#line 200 "coverage.m"
    if (coverage__succeeded)
#line 4409 "coverage.c"
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 200 "coverage.m"
    else
#line 200 "coverage.m"
      if ((coverage__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "coverage.m"
        if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "coverage.m"
          *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 200 "coverage.m"
        else
#line 200 "coverage.m"
          if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 200 "coverage.m"
            *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 200 "coverage.m"
          else
#line 4427 "coverage.c"
            *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 200 "coverage.m"
      else
#line 200 "coverage.m"
        if ((coverage__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 200 "coverage.m"
          if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "coverage.m"
            *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 200 "coverage.m"
          else
#line 200 "coverage.m"
            if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 200 "coverage.m"
              *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 200 "coverage.m"
            else
#line 4445 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 200 "coverage.m"
        else
#line 200 "coverage.m"
          {
#line 200 "coverage.m"
            MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 200 "coverage.m"
            if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4456 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 200 "coverage.m"
            else
#line 200 "coverage.m"
              if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4462 "coverage.c"
                *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 200 "coverage.m"
              else
#line 200 "coverage.m"
                {
#line 200 "coverage.m"
                  MR_Integer coverage__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__3_3, (MR_Integer) 0)));

#line 200 "coverage.m"
                  {
#line 200 "coverage.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__V_13_13, coverage__V_9_9);
#line 200 "coverage.m"
                    return;
                  }
#line 200 "coverage.m"
                }
#line 200 "coverage.m"
          }
#line 200 "coverage.m"
  }
#line 200 "coverage.m"
}

#line 200 "coverage.m"
static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0(
#line 200 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 200 "coverage.m"
  MR_Word coverage__HeadVar__2_2)
#line 200 "coverage.m"
{
#line 200 "coverage.m"
  {
#line 200 "coverage.m"
    MR_bool coverage__succeeded;
#line 200 "coverage.m"
    MR_Integer coverage__CastX_9 = (MR_Integer) coverage__HeadVar__1_1;
#line 200 "coverage.m"
    MR_Integer coverage__CastY_10 = (MR_Integer) coverage__HeadVar__2_2;

#line 200 "coverage.m"
    coverage__succeeded = (coverage__CastX_9 == coverage__CastY_10);
#line 200 "coverage.m"
    if (coverage__succeeded)
#line 200 "coverage.m"
      coverage__succeeded = MR_TRUE;
#line 200 "coverage.m"
    else
#line 200 "coverage.m"
      if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 200 "coverage.m"
        {
#line 200 "coverage.m"
          MR_Integer coverage__CastX_3 = (MR_Integer) coverage__HeadVar__1_1;
#line 200 "coverage.m"
          MR_Integer coverage__CastY_4 = (MR_Integer) coverage__HeadVar__2_2;

#line 200 "coverage.m"
          coverage__succeeded = (coverage__CastY_4 == coverage__CastX_3);
#line 200 "coverage.m"
        }
#line 200 "coverage.m"
      else
#line 200 "coverage.m"
        if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 200 "coverage.m"
          {
#line 200 "coverage.m"
            MR_Integer coverage__CastX_5 = (MR_Integer) coverage__HeadVar__1_1;
#line 200 "coverage.m"
            MR_Integer coverage__CastY_6 = (MR_Integer) coverage__HeadVar__2_2;

#line 200 "coverage.m"
            coverage__succeeded = (coverage__CastY_6 == coverage__CastX_5);
#line 200 "coverage.m"
          }
#line 200 "coverage.m"
        else
#line 200 "coverage.m"
          {
#line 200 "coverage.m"
            MR_Integer coverage__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 200 "coverage.m"
            MR_Integer coverage__V_8_8;

#line 200 "coverage.m"
            coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 200 "coverage.m"
            if (coverage__succeeded)
#line 200 "coverage.m"
              {
#line 200 "coverage.m"
                coverage__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));
#line 4558 "coverage.c"
                coverage__succeeded = (coverage__V_7_7 == coverage__V_8_8);
#line 200 "coverage.m"
              }
#line 200 "coverage.m"
          }
#line 200 "coverage.m"
    return coverage__succeeded;
#line 200 "coverage.m"
  }
#line 200 "coverage.m"
}

#line 205 "coverage.m"
static void MR_CALL 
coverage____Compare____coverage_after_0_0(
#line 205 "coverage.m"
  MR_Word * coverage__HeadVar__1_1,
#line 205 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 205 "coverage.m"
  MR_Word coverage__HeadVar__3_3)
#line 205 "coverage.m"
{
#line 205 "coverage.m"
  {
#line 205 "coverage.m"
    MR_bool coverage__succeeded;
#line 205 "coverage.m"
    MR_Integer coverage__CastX_10 = (MR_Integer) coverage__HeadVar__2_2;
#line 205 "coverage.m"
    MR_Integer coverage__CastY_11 = (MR_Integer) coverage__HeadVar__3_3;

#line 205 "coverage.m"
    coverage__succeeded = (coverage__CastX_10 == coverage__CastY_11);
#line 205 "coverage.m"
    if (coverage__succeeded)
#line 4595 "coverage.c"
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "coverage.m"
    else
#line 205 "coverage.m"
      if ((coverage__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "coverage.m"
        if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "coverage.m"
          *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "coverage.m"
        else
#line 205 "coverage.m"
          if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 205 "coverage.m"
            *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 205 "coverage.m"
          else
#line 4613 "coverage.c"
            *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 205 "coverage.m"
      else
#line 205 "coverage.m"
        if ((coverage__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 205 "coverage.m"
          if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "coverage.m"
            *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 205 "coverage.m"
          else
#line 205 "coverage.m"
            if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 205 "coverage.m"
              *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "coverage.m"
            else
#line 4631 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 205 "coverage.m"
        else
#line 205 "coverage.m"
          {
#line 205 "coverage.m"
            MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 205 "coverage.m"
            if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4642 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 205 "coverage.m"
            else
#line 205 "coverage.m"
              if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4648 "coverage.c"
                *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 205 "coverage.m"
              else
#line 205 "coverage.m"
                {
#line 205 "coverage.m"
                  MR_Integer coverage__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__3_3, (MR_Integer) 0)));

#line 205 "coverage.m"
                  {
#line 205 "coverage.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(coverage__HeadVar__1_1, coverage__V_13_13, coverage__V_9_9);
#line 205 "coverage.m"
                    return;
                  }
#line 205 "coverage.m"
                }
#line 205 "coverage.m"
          }
#line 205 "coverage.m"
  }
#line 205 "coverage.m"
}

#line 205 "coverage.m"
static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0(
#line 205 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 205 "coverage.m"
  MR_Word coverage__HeadVar__2_2)
#line 205 "coverage.m"
{
#line 205 "coverage.m"
  {
#line 205 "coverage.m"
    MR_bool coverage__succeeded;
#line 205 "coverage.m"
    MR_Integer coverage__CastX_9 = (MR_Integer) coverage__HeadVar__1_1;
#line 205 "coverage.m"
    MR_Integer coverage__CastY_10 = (MR_Integer) coverage__HeadVar__2_2;

#line 205 "coverage.m"
    coverage__succeeded = (coverage__CastX_9 == coverage__CastY_10);
#line 205 "coverage.m"
    if (coverage__succeeded)
#line 205 "coverage.m"
      coverage__succeeded = MR_TRUE;
#line 205 "coverage.m"
    else
#line 205 "coverage.m"
      if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "coverage.m"
        {
#line 205 "coverage.m"
          MR_Integer coverage__CastX_3 = (MR_Integer) coverage__HeadVar__1_1;
#line 205 "coverage.m"
          MR_Integer coverage__CastY_4 = (MR_Integer) coverage__HeadVar__2_2;

#line 205 "coverage.m"
          coverage__succeeded = (coverage__CastY_4 == coverage__CastX_3);
#line 205 "coverage.m"
        }
#line 205 "coverage.m"
      else
#line 205 "coverage.m"
        if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 205 "coverage.m"
          {
#line 205 "coverage.m"
            MR_Integer coverage__CastX_5 = (MR_Integer) coverage__HeadVar__1_1;
#line 205 "coverage.m"
            MR_Integer coverage__CastY_6 = (MR_Integer) coverage__HeadVar__2_2;

#line 205 "coverage.m"
            coverage__succeeded = (coverage__CastY_6 == coverage__CastX_5);
#line 205 "coverage.m"
          }
#line 205 "coverage.m"
        else
#line 205 "coverage.m"
          {
#line 205 "coverage.m"
            MR_Integer coverage__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "coverage.m"
            MR_Integer coverage__V_8_8;

#line 205 "coverage.m"
            coverage__succeeded = ((MR_tag((MR_Word) coverage__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 205 "coverage.m"
            if (coverage__succeeded)
#line 205 "coverage.m"
              {
#line 205 "coverage.m"
                coverage__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));
#line 4744 "coverage.c"
                coverage__succeeded = (coverage__V_7_7 == coverage__V_8_8);
#line 205 "coverage.m"
              }
#line 205 "coverage.m"
          }
#line 205 "coverage.m"
    return coverage__succeeded;
#line 205 "coverage.m"
  }
#line 205 "coverage.m"
}

#line 1297 "coverage.m"
static MR_Word MR_CALL 
coverage__before_coverage_1_f_0(
#line 1297 "coverage.m"
  MR_Integer coverage__Count_3)
#line 1297 "coverage.m"
{
#line 1299 "coverage.m"
  {
#line 1299 "coverage.m"
    MR_bool coverage__succeeded = (coverage__Count_3 == (MR_Integer) 0);
#line 1299 "coverage.m"
    MR_Word coverage__HeadVar__2_2;

#line 1299 "coverage.m"
    if (coverage__succeeded)
#line 1301 "coverage.m"
      coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1299 "coverage.m"
    else
#line 1303 "coverage.m"
      {
#line 1303 "coverage.m"
        coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "coverage.m"
        MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, 0) = ((MR_Box) (coverage__Count_3));
#line 1303 "coverage.m"
      }
#line 1299 "coverage.m"
    return coverage__HeadVar__2_2;
#line 1299 "coverage.m"
  }
#line 1297 "coverage.m"
}

#line 1288 "coverage.m"
static MR_Word MR_CALL 
coverage__after_coverage_1_f_0(
#line 1288 "coverage.m"
  MR_Integer coverage__Count_3)
#line 1288 "coverage.m"
{
#line 1290 "coverage.m"
  {
#line 1290 "coverage.m"
    MR_bool coverage__succeeded = (coverage__Count_3 == (MR_Integer) 0);
#line 1290 "coverage.m"
    MR_Word coverage__HeadVar__2_2;

#line 1290 "coverage.m"
    if (coverage__succeeded)
#line 1292 "coverage.m"
      coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1290 "coverage.m"
    else
#line 1294 "coverage.m"
      {
#line 1294 "coverage.m"
        coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "coverage.m"
        MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, 0) = ((MR_Box) (coverage__Count_3));
#line 1294 "coverage.m"
      }
#line 1290 "coverage.m"
    return coverage__HeadVar__2_2;
#line 1290 "coverage.m"
  }
#line 1288 "coverage.m"
}

#line 1251 "coverage.m"
static void MR_CALL 
coverage__sum_after_coverage_3_p_0(
#line 1251 "coverage.m"
  MR_Word coverage__After_4,
#line 1251 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_8,
#line 1251 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumAfter_9)
#line 1251 "coverage.m"
{
#line 1256 "coverage.m"
  {
#line 1256 "coverage.m"
    MR_bool coverage__succeeded;

#line 1256 "coverage.m"
    if ((coverage__STATE_VARIABLE_SumAfter_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1278 "coverage.m"
      *coverage__STATE_VARIABLE_SumAfter_9 = coverage__STATE_VARIABLE_SumAfter_0_8;
#line 1256 "coverage.m"
    else
#line 1256 "coverage.m"
      if ((coverage__STATE_VARIABLE_SumAfter_0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1271 "coverage.m"
        if ((coverage__After_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1275 "coverage.m"
          *coverage__STATE_VARIABLE_SumAfter_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1271 "coverage.m"
        else
#line 1271 "coverage.m"
          if ((coverage__After_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1272 "coverage.m"
            *coverage__STATE_VARIABLE_SumAfter_9 = coverage__STATE_VARIABLE_SumAfter_0_8;
#line 1271 "coverage.m"
          else
#line 1269 "coverage.m"
            {
#line 1269 "coverage.m"
              MR_Integer coverage__ExecCount_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_4, (MR_Integer) 0)));

#line 1270 "coverage.m"
              {
#line 1270 "coverage.m"
                MR_Word base;
#line 1270 "coverage.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "coverage.m"
                *coverage__STATE_VARIABLE_SumAfter_9 = base;
#line 1270 "coverage.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__ExecCount_15));
#line 1270 "coverage.m"
              }
#line 1269 "coverage.m"
            }
#line 1256 "coverage.m"
      else
#line 1256 "coverage.m"
        {
#line 1256 "coverage.m"
          MR_Integer coverage__SumExecCount_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumAfter_0_8, (MR_Integer) 0)));

#line 1260 "coverage.m"
          if ((coverage__After_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1262 "coverage.m"
            *coverage__STATE_VARIABLE_SumAfter_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1260 "coverage.m"
          else
#line 1260 "coverage.m"
            if ((coverage__After_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1264 "coverage.m"
              *coverage__STATE_VARIABLE_SumAfter_9 = coverage__STATE_VARIABLE_SumAfter_0_8;
#line 1260 "coverage.m"
            else
#line 1258 "coverage.m"
              {
#line 1258 "coverage.m"
                MR_Integer coverage__ExecCount_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_4, (MR_Integer) 0)));
#line 1258 "coverage.m"
                MR_Integer coverage__V_14_14 = (coverage__SumExecCount_6 + coverage__ExecCount_7);

#line 1259 "coverage.m"
                {
#line 1259 "coverage.m"
                  MR_Word base;
#line 1259 "coverage.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "coverage.m"
                  *coverage__STATE_VARIABLE_SumAfter_9 = base;
#line 1259 "coverage.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__V_14_14));
#line 1259 "coverage.m"
                }
#line 1258 "coverage.m"
              }
#line 1256 "coverage.m"
        }
#line 1256 "coverage.m"
  }
#line 1251 "coverage.m"
}

#line 1159 "coverage.m"
static void MR_CALL 
coverage__after_count_sum_after_count_2_p_0(
#line 1159 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 1159 "coverage.m"
  MR_Word * coverage__HeadVar__2_2)
#line 1159 "coverage.m"
{
#line 1162 "coverage.m"
  {
#line 1162 "coverage.m"
    MR_bool coverage__succeeded;

#line 1162 "coverage.m"
    if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1162 "coverage.m"
      *coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1162 "coverage.m"
    else
#line 1162 "coverage.m"
      if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1163 "coverage.m"
        *coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1162 "coverage.m"
      else
#line 1164 "coverage.m"
        {
#line 1164 "coverage.m"
          MR_Integer coverage__C_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));

#line 1291 "coverage.m"
          coverage__succeeded = (coverage__C_3 == (MR_Integer) 0);
#line 1290 "coverage.m"
          if (coverage__succeeded)
#line 1292 "coverage.m"
            *coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1290 "coverage.m"
          else
#line 1294 "coverage.m"
            {
#line 1294 "coverage.m"
              MR_Word base;
#line 1294 "coverage.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "coverage.m"
              *coverage__HeadVar__2_2 = base;
#line 1294 "coverage.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__C_3));
#line 1294 "coverage.m"
            }
#line 1164 "coverage.m"
        }
#line 1162 "coverage.m"
  }
#line 1159 "coverage.m"
}

#line 1132 "coverage.m"
static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_3(
#line 1132 "coverage.m"
  MR_Box coverage__closure_arg)
#line 1132 "coverage.m"
{
#line 1132 "coverage.m"
  {
#line 1132 "coverage.m"
    MR_bool coverage__succeeded;
#line 1132 "coverage.m"
    MR_Box coverage__closure = coverage__closure_arg;

#line 1132 "coverage.m"
    {
#line 1132 "coverage.m"
      return coverage__succeeded = coverage__IntroducedFrom__pred__after_count_from_either_source__1132__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 4))));
    }
#line 1132 "coverage.m"
    return coverage__succeeded;
#line 1132 "coverage.m"
  }
#line 1132 "coverage.m"
}

#line 1137 "coverage.m"
static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_2(
#line 1137 "coverage.m"
  MR_Box coverage__closure_arg)
#line 1137 "coverage.m"
{
#line 1137 "coverage.m"
  {
#line 1137 "coverage.m"
    MR_bool coverage__succeeded;
#line 1137 "coverage.m"
    MR_Box coverage__closure = coverage__closure_arg;

#line 1137 "coverage.m"
    {
#line 1137 "coverage.m"
      return coverage__succeeded = coverage__IntroducedFrom__pred__after_count_from_either_source__1137__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 4))));
    }
#line 1137 "coverage.m"
    return coverage__succeeded;
#line 1137 "coverage.m"
  }
#line 1137 "coverage.m"
}

#line 1148 "coverage.m"
static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_1(
#line 1148 "coverage.m"
  MR_Box coverage__closure_arg)
#line 1148 "coverage.m"
{
#line 1148 "coverage.m"
  {
#line 1148 "coverage.m"
    MR_bool coverage__succeeded;
#line 1148 "coverage.m"
    MR_Box coverage__closure = coverage__closure_arg;

#line 1148 "coverage.m"
    {
#line 1148 "coverage.m"
      return coverage__succeeded = coverage__IntroducedFrom__pred__after_count_from_either_source__1148__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 4))));
    }
#line 1148 "coverage.m"
    return coverage__succeeded;
#line 1148 "coverage.m"
  }
#line 1148 "coverage.m"
}

#line 1109 "coverage.m"
static void MR_CALL 
coverage__after_count_from_either_source_3_p_0(
#line 1109 "coverage.m"
  MR_Word coverage__AfterA_4,
#line 1109 "coverage.m"
  MR_Word coverage__AfterB_5,
#line 1109 "coverage.m"
  MR_Word * coverage__After_6)
#line 1109 "coverage.m"
{
#line 1114 "coverage.m"
  {
#line 1114 "coverage.m"
    MR_bool coverage__succeeded;

#line 1114 "coverage.m"
    if ((coverage__AfterA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1118 "coverage.m"
      if ((coverage__AfterB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1117 "coverage.m"
        *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1118 "coverage.m"
      else
#line 1118 "coverage.m"
        if ((coverage__AfterB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1123 "coverage.m"
          *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1118 "coverage.m"
        else
#line 1119 "coverage.m"
          {
#line 1119 "coverage.m"
            MR_Integer coverage__AfterCount_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterB_5, (MR_Integer) 0)));

#line 1291 "coverage.m"
            coverage__succeeded = (coverage__AfterCount_7 == (MR_Integer) 0);
#line 1290 "coverage.m"
            if (coverage__succeeded)
#line 1292 "coverage.m"
              *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1290 "coverage.m"
            else
#line 1294 "coverage.m"
              *coverage__After_6 = coverage__AfterB_5;
#line 1119 "coverage.m"
          }
#line 1114 "coverage.m"
    else
#line 1114 "coverage.m"
      if ((coverage__AfterA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1146 "coverage.m"
        if ((coverage__AfterB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1145 "coverage.m"
          *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1146 "coverage.m"
        else
#line 1146 "coverage.m"
          if ((coverage__AfterB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1153 "coverage.m"
            *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1146 "coverage.m"
          else
#line 1147 "coverage.m"
            {
#line 1147 "coverage.m"
              MR_Word coverage__V_10_10;
#line 1147 "coverage.m"
              MR_Integer coverage__AfterCountB_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterB_5, (MR_Integer) 0)));

#line 1148 "coverage.m"
              {
#line 1148 "coverage.m"
                coverage__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "coverage.m"
                MR_hl_field(MR_mktag(0), coverage__V_10_10, 0) = ((MR_Box) (&coverage_scalar_common_3[2]));
#line 1148 "coverage.m"
                MR_hl_field(MR_mktag(0), coverage__V_10_10, 1) = ((MR_Box) (coverage__after_count_from_either_source_3_p_0_1));
#line 1148 "coverage.m"
                MR_hl_field(MR_mktag(0), coverage__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1148 "coverage.m"
                MR_hl_field(MR_mktag(0), coverage__V_10_10, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1148 "coverage.m"
                MR_hl_field(MR_mktag(0), coverage__V_10_10, 4) = ((MR_Box) (coverage__AfterCountB_18));
#line 1148 "coverage.m"
              }
#line 1148 "coverage.m"
              {
#line 1148 "coverage.m"
                mercury__require__require_2_p_0(coverage__V_10_10, (MR_String) "after_count_from_either_source: mismatch");
              }
#line 1150 "coverage.m"
              *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1147 "coverage.m"
            }
#line 1114 "coverage.m"
      else
#line 1126 "coverage.m"
        {
#line 1126 "coverage.m"
          MR_Integer coverage__AfterCountA_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterA_4, (MR_Integer) 0)));

#line 1130 "coverage.m"
          if ((coverage__AfterB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1290 "coverage.m"
            {
#line 1291 "coverage.m"
              coverage__succeeded = (coverage__AfterCountA_8 == (MR_Integer) 0);
#line 1290 "coverage.m"
              if (coverage__succeeded)
#line 1292 "coverage.m"
                *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1290 "coverage.m"
              else
#line 1294 "coverage.m"
                *coverage__After_6 = coverage__AfterA_4;
#line 1290 "coverage.m"
            }
#line 1130 "coverage.m"
          else
#line 1130 "coverage.m"
            if ((coverage__AfterB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1136 "coverage.m"
              {
#line 1136 "coverage.m"
                MR_Word coverage__V_13_13;

#line 1137 "coverage.m"
                {
#line 1137 "coverage.m"
                  coverage__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_13_13, 0) = ((MR_Box) (&coverage_scalar_common_3[2]));
#line 1137 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_13_13, 1) = ((MR_Box) (coverage__after_count_from_either_source_3_p_0_2));
#line 1137 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1137 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_13_13, 3) = ((MR_Box) (coverage__AfterCountA_8));
#line 1137 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_13_13, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1137 "coverage.m"
                }
#line 1137 "coverage.m"
                {
#line 1137 "coverage.m"
                  mercury__require__require_2_p_0(coverage__V_13_13, (MR_String) "after_count_from_either_source: mismatch");
                }
#line 1139 "coverage.m"
                *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1136 "coverage.m"
              }
#line 1130 "coverage.m"
            else
#line 1131 "coverage.m"
              {
#line 1131 "coverage.m"
                MR_Integer coverage__AfterCountB_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterB_5, (MR_Integer) 0)));
#line 1131 "coverage.m"
                MR_Word coverage__V_16_16;

#line 1132 "coverage.m"
                {
#line 1132 "coverage.m"
                  coverage__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1132 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_16_16, 0) = ((MR_Box) (&coverage_scalar_common_3[2]));
#line 1132 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_16_16, 1) = ((MR_Box) (coverage__after_count_from_either_source_3_p_0_3));
#line 1132 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1132 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_16_16, 3) = ((MR_Box) (coverage__AfterCountA_8));
#line 1132 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_16_16, 4) = ((MR_Box) (coverage__AfterCountB_9));
#line 1132 "coverage.m"
                }
#line 1132 "coverage.m"
                {
#line 1132 "coverage.m"
                  mercury__require__require_2_p_0(coverage__V_16_16, (MR_String) "after_count_from_either_source: mismatch");
                }
#line 1291 "coverage.m"
                coverage__succeeded = (coverage__AfterCountA_8 == (MR_Integer) 0);
#line 1290 "coverage.m"
                if (coverage__succeeded)
#line 1292 "coverage.m"
                  *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1290 "coverage.m"
                else
#line 1294 "coverage.m"
                  *coverage__After_6 = coverage__AfterA_4;
#line 1131 "coverage.m"
              }
#line 1126 "coverage.m"
        }
#line 1114 "coverage.m"
  }
#line 1109 "coverage.m"
}

#line 1094 "coverage.m"
static void MR_CALL 
coverage__after_to_before_coverage_2_p_0(
#line 1094 "coverage.m"
  MR_Word coverage__After_3,
#line 1094 "coverage.m"
  MR_Word * coverage__Before_4)
#line 1094 "coverage.m"
{
#line 1099 "coverage.m"
  {
#line 1099 "coverage.m"
    MR_bool coverage__succeeded;

#line 1099 "coverage.m"
    if ((coverage__After_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1100 "coverage.m"
      *coverage__Before_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1099 "coverage.m"
    else
#line 1099 "coverage.m"
      if ((coverage__After_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1106 "coverage.m"
        *coverage__Before_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1099 "coverage.m"
      else
#line 1102 "coverage.m"
        {
#line 1102 "coverage.m"
          MR_Integer coverage__ExecCount_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_3, (MR_Integer) 0)));

#line 1103 "coverage.m"
          {
#line 1103 "coverage.m"
            MR_Word base;
#line 1103 "coverage.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "coverage.m"
            *coverage__Before_4 = base;
#line 1103 "coverage.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__ExecCount_5));
#line 1103 "coverage.m"
          }
#line 1102 "coverage.m"
        }
#line 1099 "coverage.m"
  }
#line 1094 "coverage.m"
}

#line 1063 "coverage.m"
static void MR_CALL 
coverage__propagate_detism_coverage_3_p_0(
#line 1063 "coverage.m"
  MR_Word coverage__Detism_4,
#line 1063 "coverage.m"
  MR_Word coverage__Before_5,
#line 1063 "coverage.m"
  MR_Word * coverage__After_6)
#line 1063 "coverage.m"
{
#line 1076 "coverage.m"
  {
#line 1076 "coverage.m"
    MR_bool coverage__succeeded;

#line 1076 "coverage.m"
    if ((((coverage__Detism_4 == (MR_Integer) 5)) || ((coverage__Detism_4 == (MR_Integer) 0))))
#line 1045 "coverage.m"
      if ((coverage__Before_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1046 "coverage.m"
        *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1045 "coverage.m"
      else
#line 1045 "coverage.m"
        if ((coverage__Before_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1052 "coverage.m"
          *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1045 "coverage.m"
        else
#line 1048 "coverage.m"
          {
#line 1048 "coverage.m"
            MR_Integer coverage__Count_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_5, (MR_Integer) 0)));

#line 1291 "coverage.m"
            coverage__succeeded = (coverage__Count_9 == (MR_Integer) 0);
#line 1290 "coverage.m"
            if (coverage__succeeded)
#line 1292 "coverage.m"
              *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1290 "coverage.m"
            else
#line 1294 "coverage.m"
              {
#line 1294 "coverage.m"
                MR_Word base;
#line 1294 "coverage.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "coverage.m"
                *coverage__After_6 = base;
#line 1294 "coverage.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__Count_9));
#line 1294 "coverage.m"
              }
#line 1048 "coverage.m"
          }
#line 1076 "coverage.m"
    else
#line 1076 "coverage.m"
      if ((((coverage__Detism_4 == (MR_Integer) 6)) || ((coverage__Detism_4 == (MR_Integer) 7))))
#line 1083 "coverage.m"
        *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1076 "coverage.m"
      else
#line 1091 "coverage.m"
        *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1076 "coverage.m"
  }
#line 1063 "coverage.m"
}

#line 942 "coverage.m"
static void MR_CALL 
coverage__sum_switch_case_coverage_4_p_0(
#line 942 "coverage.m"
  MR_Word coverage__Array_5,
#line 942 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 942 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Acc_0_15,
#line 942 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Acc_16)
#line 942 "coverage.m"
{
#line 945 "coverage.m"
  {
#line 945 "coverage.m"
    MR_bool coverage__succeeded;
#line 945 "coverage.m"
    MR_Word coverage__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 2)));
#line 945 "coverage.m"
    MR_Word coverage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 0)));
#line 945 "coverage.m"
    MR_Word coverage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 1)));

#line 963 "coverage.m"
    if ((coverage__STATE_VARIABLE_Acc_0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "coverage.m"
      *coverage__STATE_VARIABLE_Acc_16 = coverage__STATE_VARIABLE_Acc_0_15;
#line 963 "coverage.m"
    else
#line 947 "coverage.m"
      {
#line 947 "coverage.m"
        MR_Integer coverage__Count_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_Acc_0_15, (MR_Integer) 0)));
#line 947 "coverage.m"
        MR_Word coverage__Coverage_11;
#line 947 "coverage.m"
        MR_Word coverage__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_8, (MR_Integer) 2)));
#line 948 "coverage.m"
        MR_Word coverage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_8, (MR_Integer) 0)));
#line 948 "coverage.m"
        MR_Word coverage__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_8, (MR_Integer) 1)));
#line 948 "coverage.m"
        MR_Box coverage__conv0_Coverage_11;

#line 948 "coverage.m"
        {
#line 948 "coverage.m"
          coverage__conv0_Coverage_11 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, coverage__Array_5, coverage__V_17_17);
        }
#line 948 "coverage.m"
        coverage__Coverage_11 = ((MR_Word) coverage__conv0_Coverage_11);
#line 955 "coverage.m"
        if ((coverage__Coverage_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 956 "coverage.m"
          *coverage__STATE_VARIABLE_Acc_16 = coverage__STATE_VARIABLE_Acc_0_15;
#line 955 "coverage.m"
        else
#line 955 "coverage.m"
          if (((MR_tag((MR_Word) coverage__Coverage_11)) == (MR_mktag((MR_Integer) 2))))
#line 953 "coverage.m"
            {
#line 953 "coverage.m"
              MR_Integer coverage__Addend_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_11, (MR_Integer) 0)));
#line 953 "coverage.m"
              MR_Integer coverage__V_20_20 = (coverage__Count_10 + coverage__Addend_12);
#line 951 "coverage.m"
              MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_11, (MR_Integer) 1)));

#line 954 "coverage.m"
              {
#line 954 "coverage.m"
                MR_Word base;
#line 954 "coverage.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 954 "coverage.m"
                *coverage__STATE_VARIABLE_Acc_16 = base;
#line 954 "coverage.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__V_20_20));
#line 954 "coverage.m"
              }
#line 953 "coverage.m"
            }
#line 955 "coverage.m"
          else
#line 955 "coverage.m"
            if (((MR_tag((MR_Word) coverage__Coverage_11)) == (MR_mktag((MR_Integer) 1))))
#line 953 "coverage.m"
              {
#line 953 "coverage.m"
                MR_Integer coverage__Addend_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_11, (MR_Integer) 0)));
#line 953 "coverage.m"
                MR_Integer coverage__V_27_27 = (coverage__Count_10 + coverage__Addend_26);

#line 954 "coverage.m"
                {
#line 954 "coverage.m"
                  MR_Word base;
#line 954 "coverage.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 954 "coverage.m"
                  *coverage__STATE_VARIABLE_Acc_16 = base;
#line 954 "coverage.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__V_27_27));
#line 954 "coverage.m"
                }
#line 953 "coverage.m"
              }
#line 955 "coverage.m"
            else
#line 955 "coverage.m"
              if (((((MR_tag((MR_Word) coverage__Coverage_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__Coverage_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 953 "coverage.m"
                {
#line 953 "coverage.m"
                  MR_Integer coverage__Addend_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__Coverage_11, (MR_Integer) 1)));
#line 953 "coverage.m"
                  MR_Integer coverage__V_25_25 = (coverage__Count_10 + coverage__Addend_24);

#line 954 "coverage.m"
                  {
#line 954 "coverage.m"
                    MR_Word base;
#line 954 "coverage.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 954 "coverage.m"
                    *coverage__STATE_VARIABLE_Acc_16 = base;
#line 954 "coverage.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__V_25_25));
#line 954 "coverage.m"
                  }
#line 953 "coverage.m"
                }
#line 955 "coverage.m"
              else
#line 961 "coverage.m"
                *coverage__STATE_VARIABLE_Acc_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 947 "coverage.m"
      }
#line 945 "coverage.m"
  }
#line 942 "coverage.m"
}

#line 798 "coverage.m"
static MR_bool MR_CALL 
coverage__check_coverage_regarding_detism_2_p_0(
#line 798 "coverage.m"
  MR_Word coverage__Coverage_3,
#line 798 "coverage.m"
  MR_Word coverage__Detism_4)
#line 798 "coverage.m"
{
#line 810 "coverage.m"
  {
#line 810 "coverage.m"
    MR_bool coverage__succeeded;

#line 810 "coverage.m"
    if ((coverage__Detism_4 == (MR_Integer) 3))
#line 865 "coverage.m"
      coverage__succeeded = MR_TRUE;
#line 810 "coverage.m"
    else
#line 810 "coverage.m"
      if ((coverage__Detism_4 == (MR_Integer) 2))
#line 873 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 810 "coverage.m"
      else
#line 810 "coverage.m"
        if ((((coverage__Detism_4 == (MR_Integer) 5)) || ((coverage__Detism_4 == (MR_Integer) 0))))
#line 817 "coverage.m"
          if (((MR_tag((MR_Word) coverage__Coverage_3)) == (MR_mktag((MR_Integer) 2))))
#line 818 "coverage.m"
            {
#line 818 "coverage.m"
              MR_Integer coverage__Entry_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 0)));
#line 818 "coverage.m"
              MR_Integer coverage__Exit_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 1)));

#line 822 "coverage.m"
              coverage__succeeded = (coverage__Entry_10 >= coverage__Exit_11);
#line 818 "coverage.m"
            }
#line 817 "coverage.m"
          else
#line 817 "coverage.m"
            if (((((((MR_tag((MR_Word) coverage__Coverage_3)) == (MR_mktag((MR_Integer) 1)))) || ((coverage__Coverage_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || ((coverage__Coverage_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 816 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 817 "coverage.m"
            else
#line 817 "coverage.m"
              coverage__succeeded = MR_FALSE;
#line 810 "coverage.m"
        else
#line 810 "coverage.m"
          if ((((coverage__Detism_4 == (MR_Integer) 4)) || ((coverage__Detism_4 == (MR_Integer) 1))))
#line 847 "coverage.m"
            if (((MR_tag((MR_Word) coverage__Coverage_3)) == (MR_mktag((MR_Integer) 2))))
#line 848 "coverage.m"
              {
#line 848 "coverage.m"
                MR_Integer coverage__Entry_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 0)));
#line 848 "coverage.m"
                MR_Integer coverage__Exit_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 1)));

#line 849 "coverage.m"
                coverage__succeeded = (coverage__Entry_24 >= coverage__Exit_25);
#line 848 "coverage.m"
              }
#line 847 "coverage.m"
            else
#line 846 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 810 "coverage.m"
          else
#line 889 "coverage.m"
            if ((coverage__Coverage_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 898 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 889 "coverage.m"
            else
#line 889 "coverage.m"
              if (((MR_tag((MR_Word) coverage__Coverage_3)) == (MR_mktag((MR_Integer) 2))))
#line 883 "coverage.m"
                {
#line 883 "coverage.m"
                  MR_Integer coverage__Exit_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 1)));
#line 880 "coverage.m"
                  MR_Integer coverage__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 0)));

#line 884 "coverage.m"
                  coverage__succeeded = (coverage__Exit_30 == (MR_Integer) 0);
#line 883 "coverage.m"
                }
#line 889 "coverage.m"
              else
#line 889 "coverage.m"
                if (((MR_tag((MR_Word) coverage__Coverage_3)) == (MR_mktag((MR_Integer) 1))))
#line 883 "coverage.m"
                  {
#line 883 "coverage.m"
                    MR_Integer coverage__Exit_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_3, (MR_Integer) 0)));

#line 884 "coverage.m"
                    coverage__succeeded = (coverage__Exit_34 == (MR_Integer) 0);
#line 883 "coverage.m"
                  }
#line 889 "coverage.m"
                else
#line 889 "coverage.m"
                  if (((((MR_tag((MR_Word) coverage__Coverage_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 883 "coverage.m"
                    {
#line 883 "coverage.m"
                      MR_Integer coverage__Exit_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 1)));

#line 884 "coverage.m"
                      coverage__succeeded = (coverage__Exit_33 == (MR_Integer) 0);
#line 883 "coverage.m"
                    }
#line 889 "coverage.m"
                  else
#line 893 "coverage.m"
                    coverage__succeeded = MR_TRUE;
#line 810 "coverage.m"
    return coverage__succeeded;
#line 810 "coverage.m"
  }
#line 798 "coverage.m"
}

#line 774 "coverage.m"
static void MR_CALL 
coverage__scope_annotate_coverage_7_p_0(
#line 774 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_18,
#line 774 "coverage.m"
  MR_Word coverage__Goal_8,
#line 774 "coverage.m"
  MR_Word coverage__Info_9,
#line 774 "coverage.m"
  MR_Word coverage__MaybeCut_10,
#line 774 "coverage.m"
  MR_Word coverage__Before_11,
#line 774 "coverage.m"
  MR_Word * coverage__After_12,
#line 774 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_15,
#line 774 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_16)
#line 774 "coverage.m"
{
#line 780 "coverage.m"
  {
#line 780 "coverage.m"
    MR_bool coverage__succeeded;
#line 780 "coverage.m"
    MR_Word coverage__AfterScopedGoal_14;

#line 781 "coverage.m"
    {
#line 781 "coverage.m"
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_18, coverage__Goal_8, coverage__Info_9, coverage__Before_11, &coverage__AfterScopedGoal_14, coverage__STATE_VARIABLE_Array_0_15, coverage__STATE_VARIABLE_Array_16);
    }
#line 785 "coverage.m"
    if ((coverage__MaybeCut_10 == (MR_Integer) 0))
#line 784 "coverage.m"
      *coverage__After_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 785 "coverage.m"
    else
#line 787 "coverage.m"
      *coverage__After_12 = coverage__AfterScopedGoal_14;
#line 780 "coverage.m"
  }
#line 774 "coverage.m"
}

#line 759 "coverage.m"
static void MR_CALL 
coverage__negation_annotate_coverage_6_p_0(
#line 759 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_27,
#line 759 "coverage.m"
  MR_Word coverage__Goal_7,
#line 759 "coverage.m"
  MR_Word coverage__Info_8,
#line 759 "coverage.m"
  MR_Word coverage__Before_9,
#line 759 "coverage.m"
  MR_Word * coverage__After_10,
#line 759 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_14,
#line 759 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_15)
#line 759 "coverage.m"
{
#line 765 "coverage.m"
  {
#line 765 "coverage.m"
    MR_bool coverage__succeeded;
#line 766 "coverage.m"
    MR_Word coverage___CoverageAfter_12;

#line 766 "coverage.m"
    {
#line 766 "coverage.m"
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_27, coverage__Goal_7, coverage__Info_8, coverage__Before_9, &coverage___CoverageAfter_12, coverage__STATE_VARIABLE_Array_0_14, coverage__STATE_VARIABLE_Array_15);
    }
#line 768 "coverage.m"
    *coverage__After_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "coverage.m"
  }
#line 759 "coverage.m"
}

#line 613 "coverage.m"
static void MR_CALL 
coverage__ite_annotate_coverage_9_p_0(
#line 613 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_126,
#line 613 "coverage.m"
  MR_Word coverage__Cond_10,
#line 613 "coverage.m"
  MR_Word coverage__Then_11,
#line 613 "coverage.m"
  MR_Word coverage__Else_12,
#line 613 "coverage.m"
  MR_Word coverage__Info_13,
#line 613 "coverage.m"
  MR_Word coverage__RevGoalPath_14,
#line 613 "coverage.m"
  MR_Word coverage__Before_15,
#line 613 "coverage.m"
  MR_Word * coverage__After_16,
#line 613 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_35,
#line 613 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_36)
#line 613 "coverage.m"
{
#line 620 "coverage.m"
  {
#line 620 "coverage.m"
    MR_bool coverage__succeeded;
#line 620 "coverage.m"
    MR_Word coverage__CondDetism_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cond_10, (MR_Integer) 1)));
#line 620 "coverage.m"
    MR_Word coverage__GoalPathMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 4)));
#line 620 "coverage.m"
    MR_Word coverage__AfterCond_20;
#line 620 "coverage.m"
    MR_Word coverage__BeforeThen0_21;
#line 620 "coverage.m"
    MR_Word coverage__BeforeThen_23;
#line 620 "coverage.m"
    MR_Word coverage__CondSolns_25;
#line 620 "coverage.m"
    MR_Word coverage__BeforeElse_27;
#line 620 "coverage.m"
    MR_Word coverage__AfterThen_31;
#line 620 "coverage.m"
    MR_Word coverage__AfterElse_32;
#line 620 "coverage.m"
    MR_Word coverage__STATE_VARIABLE_Array_37_37;
#line 620 "coverage.m"
    MR_Word coverage__STATE_VARIABLE_Array_63_63;
#line 621 "coverage.m"
    MR_Word coverage__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cond_10, (MR_Integer) 0)));
#line 621 "coverage.m"
    MR_Word coverage__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cond_10, (MR_Integer) 2)));
#line 622 "coverage.m"
    MR_Word coverage__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 0)));
#line 622 "coverage.m"
    MR_Word coverage__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 1)));
#line 622 "coverage.m"
    MR_Word coverage__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 2)));
#line 622 "coverage.m"
    MR_Word coverage__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 3)));

#line 626 "coverage.m"
    {
#line 626 "coverage.m"
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_126, coverage__Cond_10, coverage__Info_13, coverage__Before_15, &coverage__AfterCond_20, coverage__STATE_VARIABLE_Array_0_35, &coverage__STATE_VARIABLE_Array_37_37);
    }
#line 627 "coverage.m"
    {
#line 627 "coverage.m"
      coverage__after_to_before_coverage_2_p_0(coverage__AfterCond_20, &coverage__BeforeThen0_21);
    }
#line 636 "coverage.m"
    if ((coverage__BeforeThen0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 637 "coverage.m"
      {
#line 637 "coverage.m"
        MR_Word coverage__RevThenGoalPath_24;
#line 637 "coverage.m"
        MR_Word coverage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Then_11, (MR_Integer) 2)));
#line 638 "coverage.m"
        MR_Word coverage__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Then_11, (MR_Integer) 0)));
#line 638 "coverage.m"
        MR_Word coverage__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Then_11, (MR_Integer) 1)));
#line 638 "coverage.m"
        MR_Box coverage__conv0_RevThenGoalPath_24;

#line 638 "coverage.m"
        {
#line 638 "coverage.m"
          coverage__conv0_RevThenGoalPath_24 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__V_38_38)));
        }
#line 638 "coverage.m"
        coverage__RevThenGoalPath_24 = ((MR_Word) coverage__conv0_RevThenGoalPath_24);
#line 639 "coverage.m"
        {
#line 639 "coverage.m"
          coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevThenGoalPath_24, &coverage__BeforeThen_23);
        }
#line 637 "coverage.m"
      }
#line 636 "coverage.m"
    else
#line 635 "coverage.m"
      coverage__BeforeThen_23 = coverage__BeforeThen0_21;
#line 642 "coverage.m"
    {
#line 642 "coverage.m"
      coverage__CondSolns_25 = mdbcomp__program_representation__detism_get_solutions_1_f_0(coverage__CondDetism_18);
    }
#line 647 "coverage.m"
    if ((coverage__CondSolns_25 == (MR_Integer) 2))
#line 644 "coverage.m"
      {
#line 644 "coverage.m"
        MR_Word coverage__RevElseGoalPath_26;
#line 644 "coverage.m"
        MR_Word coverage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 2)));
#line 645 "coverage.m"
        MR_Word coverage__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 0)));
#line 645 "coverage.m"
        MR_Word coverage__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 1)));
#line 645 "coverage.m"
        MR_Box coverage__conv1_RevElseGoalPath_26;

#line 645 "coverage.m"
        {
#line 645 "coverage.m"
          coverage__conv1_RevElseGoalPath_26 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__V_42_42)));
        }
#line 645 "coverage.m"
        coverage__RevElseGoalPath_26 = ((MR_Word) coverage__conv1_RevElseGoalPath_26);
#line 646 "coverage.m"
        {
#line 646 "coverage.m"
          coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevElseGoalPath_26, &coverage__BeforeElse_27);
        }
#line 644 "coverage.m"
      }
#line 647 "coverage.m"
    else
#line 675 "coverage.m"
      if ((coverage__BeforeThen_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 676 "coverage.m"
        {
#line 676 "coverage.m"
          MR_Word coverage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 2)));
#line 676 "coverage.m"
          MR_Word coverage__RevElseGoalPath_106;
#line 677 "coverage.m"
          MR_Word coverage__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 0)));
#line 677 "coverage.m"
          MR_Word coverage__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 1)));
#line 677 "coverage.m"
          MR_Box coverage__conv2_RevElseGoalPath_106;

#line 677 "coverage.m"
          {
#line 677 "coverage.m"
            coverage__conv2_RevElseGoalPath_106 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__V_39_39)));
          }
#line 677 "coverage.m"
          coverage__RevElseGoalPath_106 = ((MR_Word) coverage__conv2_RevElseGoalPath_106);
#line 678 "coverage.m"
          {
#line 678 "coverage.m"
            coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevElseGoalPath_106, &coverage__BeforeElse_27);
          }
#line 676 "coverage.m"
        }
#line 675 "coverage.m"
      else
#line 675 "coverage.m"
        if ((coverage__BeforeThen_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 660 "coverage.m"
          {
#line 669 "coverage.m"
            if ((coverage__Before_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 670 "coverage.m"
              {
#line 670 "coverage.m"
                MR_Word coverage__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 2)));
#line 670 "coverage.m"
                MR_Word coverage__RevElseGoalPath_145;
#line 671 "coverage.m"
                MR_Word coverage__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 0)));
#line 671 "coverage.m"
                MR_Word coverage__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 1)));
#line 671 "coverage.m"
                MR_Box coverage__conv3_RevElseGoalPath_145;

#line 671 "coverage.m"
                {
#line 671 "coverage.m"
                  coverage__conv3_RevElseGoalPath_145 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__V_144_144)));
                }
#line 671 "coverage.m"
                coverage__RevElseGoalPath_145 = ((MR_Word) coverage__conv3_RevElseGoalPath_145);
#line 673 "coverage.m"
                {
#line 673 "coverage.m"
                  coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevElseGoalPath_145, &coverage__BeforeElse_27);
                }
#line 670 "coverage.m"
              }
#line 669 "coverage.m"
            else
#line 669 "coverage.m"
              if ((coverage__Before_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 667 "coverage.m"
                {
#line 668 "coverage.m"
                  {
#line 668 "coverage.m"
                    coverage__BeforeElse_27 = coverage__before_coverage_1_f_0((MR_Integer) 0);
                  }
#line 667 "coverage.m"
                }
#line 669 "coverage.m"
              else
#line 667 "coverage.m"
                {
#line 667 "coverage.m"
                  MR_Integer coverage__BeforeCount_140 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_15, (MR_Integer) 0)));
#line 667 "coverage.m"
                  MR_Integer coverage__V_141_141 = (coverage__BeforeCount_140 - (MR_Integer) 0);

#line 668 "coverage.m"
                  {
#line 668 "coverage.m"
                    coverage__BeforeElse_27 = coverage__before_coverage_1_f_0(coverage__V_141_141);
                  }
#line 667 "coverage.m"
                }
#line 660 "coverage.m"
          }
#line 675 "coverage.m"
        else
#line 660 "coverage.m"
          {
#line 660 "coverage.m"
            MR_Integer coverage__BeforeThenCount_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeThen_23, (MR_Integer) 0)));

#line 669 "coverage.m"
            if ((coverage__Before_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 670 "coverage.m"
              {
#line 670 "coverage.m"
                MR_Word coverage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 2)));
#line 670 "coverage.m"
                MR_Word coverage__RevElseGoalPath_103;
#line 671 "coverage.m"
                MR_Word coverage__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 0)));
#line 671 "coverage.m"
                MR_Word coverage__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 1)));
#line 671 "coverage.m"
                MR_Box coverage__conv4_RevElseGoalPath_103;

#line 671 "coverage.m"
                {
#line 671 "coverage.m"
                  coverage__conv4_RevElseGoalPath_103 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__V_40_40)));
                }
#line 671 "coverage.m"
                coverage__RevElseGoalPath_103 = ((MR_Word) coverage__conv4_RevElseGoalPath_103);
#line 673 "coverage.m"
                {
#line 673 "coverage.m"
                  coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevElseGoalPath_103, &coverage__BeforeElse_27);
                }
#line 670 "coverage.m"
              }
#line 669 "coverage.m"
            else
#line 669 "coverage.m"
              if ((coverage__Before_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 667 "coverage.m"
                {
#line 667 "coverage.m"
                  MR_Integer coverage__V_139_139 = ((MR_Integer) 0 - coverage__BeforeThenCount_28);

#line 668 "coverage.m"
                  {
#line 668 "coverage.m"
                    coverage__BeforeElse_27 = coverage__before_coverage_1_f_0(coverage__V_139_139);
                  }
#line 667 "coverage.m"
                }
#line 669 "coverage.m"
              else
#line 667 "coverage.m"
                {
#line 667 "coverage.m"
                  MR_Integer coverage__BeforeCount_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_15, (MR_Integer) 0)));
#line 667 "coverage.m"
                  MR_Integer coverage__V_41_41 = (coverage__BeforeCount_29 - coverage__BeforeThenCount_28);

#line 668 "coverage.m"
                  {
#line 668 "coverage.m"
                    coverage__BeforeElse_27 = coverage__before_coverage_1_f_0(coverage__V_41_41);
                  }
#line 667 "coverage.m"
                }
#line 660 "coverage.m"
          }
#line 692 "coverage.m"
    {
#line 692 "coverage.m"
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_126, coverage__Then_11, coverage__Info_13, coverage__BeforeThen_23, &coverage__AfterThen_31, coverage__STATE_VARIABLE_Array_37_37, &coverage__STATE_VARIABLE_Array_63_63);
    }
#line 693 "coverage.m"
    {
#line 693 "coverage.m"
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_126, coverage__Else_12, coverage__Info_13, coverage__BeforeElse_27, &coverage__AfterElse_32, coverage__STATE_VARIABLE_Array_63_63, coverage__STATE_VARIABLE_Array_36);
    }
#line 709 "coverage.m"
    if ((coverage__AfterThen_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 723 "coverage.m"
      *coverage__After_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 709 "coverage.m"
    else
#line 709 "coverage.m"
      if ((coverage__AfterThen_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 714 "coverage.m"
        if ((coverage__AfterElse_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 719 "coverage.m"
          *coverage__After_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 714 "coverage.m"
        else
#line 714 "coverage.m"
          if ((coverage__AfterElse_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 716 "coverage.m"
            *coverage__After_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 714 "coverage.m"
          else
#line 712 "coverage.m"
            {
#line 712 "coverage.m"
              MR_Integer coverage__AfterElseExecCount_109 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterElse_32, (MR_Integer) 0)));

#line 713 "coverage.m"
              {
#line 713 "coverage.m"
                *coverage__After_16 = coverage__after_coverage_1_f_0(coverage__AfterElseExecCount_109);
              }
#line 712 "coverage.m"
            }
#line 709 "coverage.m"
      else
#line 698 "coverage.m"
        {
#line 698 "coverage.m"
          MR_Integer coverage__AfterThenExecCount_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterThen_31, (MR_Integer) 0)));

#line 702 "coverage.m"
          if ((coverage__AfterElse_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 707 "coverage.m"
            *coverage__After_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 702 "coverage.m"
          else
#line 702 "coverage.m"
            if ((coverage__AfterElse_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 704 "coverage.m"
              {
#line 704 "coverage.m"
                *coverage__After_16 = coverage__after_coverage_1_f_0(coverage__AfterThenExecCount_33);
              }
#line 702 "coverage.m"
            else
#line 700 "coverage.m"
              {
#line 700 "coverage.m"
                MR_Integer coverage__AfterElseExecCount_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterElse_32, (MR_Integer) 0)));
#line 700 "coverage.m"
                MR_Integer coverage__V_65_65 = (coverage__AfterThenExecCount_33 + coverage__AfterElseExecCount_34);

#line 701 "coverage.m"
                {
#line 701 "coverage.m"
                  *coverage__After_16 = coverage__after_coverage_1_f_0(coverage__V_65_65);
                }
#line 700 "coverage.m"
              }
#line 698 "coverage.m"
        }
#line 728 "coverage.m"
    {
#line 728 "coverage.m"
      coverage__succeeded = coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_p_0(coverage__Before_15, *coverage__After_16, coverage__Before_15, coverage__AfterCond_20, coverage__BeforeThen_23, coverage__AfterThen_31, coverage__AfterElse_32, coverage__CondDetism_18);
    }
#line 732 "coverage.m"
    if (coverage__succeeded)
#line 731 "coverage.m"
      {
#line 731 "coverage.m"
      }
#line 732 "coverage.m"
    else
#line 733 "coverage.m"
      {
#line 733 "coverage.m"
        MR_Word coverage__TypeCtorInfo_136_136 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_before_0;
#line 733 "coverage.m"
        MR_Word coverage__TypeCtorInfo_137_137;
#line 733 "coverage.m"
        MR_String coverage__V_67_67;
#line 733 "coverage.m"
        MR_String coverage__V_77_77;
#line 733 "coverage.m"
        MR_String coverage__V_80_80;
#line 733 "coverage.m"
        MR_String coverage__V_83_83;
#line 733 "coverage.m"
        MR_String coverage__V_86_86;
#line 733 "coverage.m"
        MR_String coverage__V_89_89;
#line 733 "coverage.m"
        MR_String coverage__V_92_92;
#line 733 "coverage.m"
        MR_String coverage__V_95_95;
#line 733 "coverage.m"
        MR_String coverage__V_98_98;
#line 733 "coverage.m"
        MR_String coverage__V_101_101;
#line 733 "coverage.m"
        MR_String coverage__V_170_170;
#line 733 "coverage.m"
        MR_String coverage__V_172_172;
#line 733 "coverage.m"
        MR_String coverage__V_173_173;
#line 733 "coverage.m"
        MR_String coverage__V_175_175;
#line 733 "coverage.m"
        MR_String coverage__V_176_176;
#line 733 "coverage.m"
        MR_String coverage__V_178_178;
#line 733 "coverage.m"
        MR_String coverage__V_179_179;
#line 733 "coverage.m"
        MR_String coverage__V_181_181;
#line 733 "coverage.m"
        MR_String coverage__V_182_182;
#line 733 "coverage.m"
        MR_String coverage__V_184_184;
#line 733 "coverage.m"
        MR_String coverage__V_185_185;
#line 733 "coverage.m"
        MR_String coverage__V_187_187;
#line 733 "coverage.m"
        MR_String coverage__V_188_188;
#line 733 "coverage.m"
        MR_String coverage__V_190_190;
#line 733 "coverage.m"
        MR_String coverage__V_191_191;
#line 733 "coverage.m"
        MR_String coverage__V_193_193;
#line 733 "coverage.m"
        MR_String coverage__V_194_194;

#line 737 "coverage.m"
        {
#line 737 "coverage.m"
          coverage__V_77_77 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_136_136, ((MR_Box) (coverage__Before_15)));
        }
#line 6213 "coverage.c"
        coverage__TypeCtorInfo_137_137 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_after_0;
#line 737 "coverage.m"
        {
#line 737 "coverage.m"
          coverage__V_80_80 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_137_137, ((MR_Box) (*coverage__After_16)));
        }
#line 738 "coverage.m"
        {
#line 738 "coverage.m"
          coverage__V_83_83 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_136_136, ((MR_Box) (coverage__Before_15)));
        }
#line 738 "coverage.m"
        {
#line 738 "coverage.m"
          coverage__V_86_86 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_137_137, ((MR_Box) (coverage__AfterCond_20)));
        }
#line 739 "coverage.m"
        {
#line 739 "coverage.m"
          coverage__V_89_89 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_136_136, ((MR_Box) (coverage__BeforeThen_23)));
        }
#line 739 "coverage.m"
        {
#line 739 "coverage.m"
          coverage__V_92_92 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_137_137, ((MR_Box) (coverage__AfterThen_31)));
        }
#line 740 "coverage.m"
        {
#line 740 "coverage.m"
          coverage__V_95_95 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_136_136, ((MR_Box) (coverage__BeforeElse_27)));
        }
#line 740 "coverage.m"
        {
#line 740 "coverage.m"
          coverage__V_98_98 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_137_137, ((MR_Box) (coverage__AfterElse_32)));
        }
#line 741 "coverage.m"
        {
#line 741 "coverage.m"
          coverage__V_101_101 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(coverage__RevGoalPath_14);
        }
#line 6255 "coverage.c"
        {
#line 6257 "coverage.c"
          coverage__V_170_170 = mercury__string__f_43_43_2_f_0(coverage__V_101_101, (MR_String) "\n");
        }
#line 6260 "coverage.c"
        {
#line 6262 "coverage.c"
          coverage__V_172_172 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tGoalPath: ", coverage__V_170_170);
        }
#line 6265 "coverage.c"
        {
#line 6267 "coverage.c"
          coverage__V_173_173 = mercury__string__f_43_43_2_f_0(coverage__V_98_98, coverage__V_172_172);
        }
#line 6270 "coverage.c"
        {
#line 6272 "coverage.c"
          coverage__V_175_175 = mercury__string__f_43_43_2_f_0((MR_String) " ", coverage__V_173_173);
        }
#line 6275 "coverage.c"
        {
#line 6277 "coverage.c"
          coverage__V_176_176 = mercury__string__f_43_43_2_f_0(coverage__V_95_95, coverage__V_175_175);
        }
#line 6280 "coverage.c"
        {
#line 6282 "coverage.c"
          coverage__V_178_178 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tElse: ", coverage__V_176_176);
        }
#line 6285 "coverage.c"
        {
#line 6287 "coverage.c"
          coverage__V_179_179 = mercury__string__f_43_43_2_f_0(coverage__V_92_92, coverage__V_178_178);
        }
#line 6290 "coverage.c"
        {
#line 6292 "coverage.c"
          coverage__V_181_181 = mercury__string__f_43_43_2_f_0((MR_String) " ", coverage__V_179_179);
        }
#line 6295 "coverage.c"
        {
#line 6297 "coverage.c"
          coverage__V_182_182 = mercury__string__f_43_43_2_f_0(coverage__V_89_89, coverage__V_181_181);
        }
#line 6300 "coverage.c"
        {
#line 6302 "coverage.c"
          coverage__V_184_184 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tThen: ", coverage__V_182_182);
        }
#line 6305 "coverage.c"
        {
#line 6307 "coverage.c"
          coverage__V_185_185 = mercury__string__f_43_43_2_f_0(coverage__V_86_86, coverage__V_184_184);
        }
#line 6310 "coverage.c"
        {
#line 6312 "coverage.c"
          coverage__V_187_187 = mercury__string__f_43_43_2_f_0((MR_String) " ", coverage__V_185_185);
        }
#line 6315 "coverage.c"
        {
#line 6317 "coverage.c"
          coverage__V_188_188 = mercury__string__f_43_43_2_f_0(coverage__V_83_83, coverage__V_187_187);
        }
#line 6320 "coverage.c"
        {
#line 6322 "coverage.c"
          coverage__V_190_190 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tCond: ", coverage__V_188_188);
        }
#line 6325 "coverage.c"
        {
#line 6327 "coverage.c"
          coverage__V_191_191 = mercury__string__f_43_43_2_f_0(coverage__V_80_80, coverage__V_190_190);
        }
#line 6330 "coverage.c"
        {
#line 6332 "coverage.c"
          coverage__V_193_193 = mercury__string__f_43_43_2_f_0((MR_String) " ", coverage__V_191_191);
        }
#line 6335 "coverage.c"
        {
#line 6337 "coverage.c"
          coverage__V_194_194 = mercury__string__f_43_43_2_f_0(coverage__V_77_77, coverage__V_193_193);
        }
#line 6340 "coverage.c"
        {
#line 6342 "coverage.c"
          coverage__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "check_ite_coverage/4 failed\n\tWhole: ", coverage__V_194_194);
        }
#line 733 "coverage.m"
        {
#line 733 "coverage.m"
          mercury__require__error_1_p_0(coverage__V_67_67);
#line 733 "coverage.m"
          return;
        }
#line 733 "coverage.m"
      }
#line 620 "coverage.m"
  }
#line 613 "coverage.m"
}

#line 558 "coverage.m"
static void MR_CALL 
coverage__switch_annotate_coverage_2_10_p_0(
#line 558 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_60,
#line 558 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 558 "coverage.m"
  MR_Word coverage__Info_2,
#line 558 "coverage.m"
  MR_Word coverage__CanFail_3,
#line 558 "coverage.m"
  MR_Word coverage__SwitchBefore_4,
#line 558 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumBefore_0_5,
#line 558 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumBefore_6,
#line 558 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_7,
#line 558 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumAfter_8,
#line 558 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_9,
#line 558 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_10)
#line 558 "coverage.m"
{
#line 565 "coverage.m"
  while (MR_TRUE)
#line 565 "coverage.m"
    {
#line 565 "coverage.m"
      /* tailcall optimized into a loop */
#line 565 "coverage.m"
      {
#line 565 "coverage.m"
        MR_bool coverage__succeeded;

#line 565 "coverage.m"
        if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 565 "coverage.m"
          {
#line 565 "coverage.m"
            *coverage__STATE_VARIABLE_Array_10 = coverage__STATE_VARIABLE_Array_0_9;
#line 565 "coverage.m"
            *coverage__STATE_VARIABLE_SumAfter_8 = coverage__STATE_VARIABLE_SumAfter_0_7;
#line 565 "coverage.m"
            *coverage__STATE_VARIABLE_SumBefore_6 = coverage__STATE_VARIABLE_SumBefore_0_5;
#line 565 "coverage.m"
          }
#line 565 "coverage.m"
        else
#line 567 "coverage.m"
          {
#line 567 "coverage.m"
            MR_Word coverage__Case_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 567 "coverage.m"
            MR_Word coverage__Cases_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 567 "coverage.m"
            MR_Word coverage__BeforeCase_33;
#line 567 "coverage.m"
            MR_Word coverage__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Case_23, (MR_Integer) 2)));
#line 567 "coverage.m"
            MR_Word coverage__AfterCase_38;
#line 567 "coverage.m"
            MR_Word coverage__STATE_VARIABLE_Array_48_48;
#line 567 "coverage.m"
            MR_Word coverage__STATE_VARIABLE_SumBefore_49_49;
#line 567 "coverage.m"
            MR_Word coverage__STATE_VARIABLE_SumAfter_50_50;
#line 601 "coverage.m"
            MR_Word coverage___ConsID_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Case_23, (MR_Integer) 0)));
#line 601 "coverage.m"
            MR_Word coverage___OtherConsIDs_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Case_23, (MR_Integer) 1)));
#line 593 "coverage.m"
            MR_Integer coverage__SwitchBeforeExecCount_31;
#line 593 "coverage.m"
            MR_Integer coverage__SumBeforeExecCount_32;

#line 576 "coverage.m"
            coverage__succeeded = (coverage__Cases_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 576 "coverage.m"
            if (coverage__succeeded)
#line 576 "coverage.m"
              {
#line 577 "coverage.m"
                coverage__succeeded = (coverage__CanFail_3 == (MR_Integer) 1);
#line 576 "coverage.m"
                if (coverage__succeeded)
#line 576 "coverage.m"
                  {
#line 580 "coverage.m"
                    if ((coverage__SwitchBefore_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 582 "coverage.m"
                      {
#line 582 "coverage.m"
                        coverage__SwitchBeforeExecCount_31 = (MR_Integer) 0;
#line 582 "coverage.m"
                        coverage__succeeded = MR_TRUE;
#line 582 "coverage.m"
                      }
#line 580 "coverage.m"
                    else
#line 580 "coverage.m"
                      if (((MR_tag((MR_Word) coverage__SwitchBefore_4)) == (MR_mktag((MR_Integer) 1))))
#line 579 "coverage.m"
                        {
#line 579 "coverage.m"
                          coverage__SwitchBeforeExecCount_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__SwitchBefore_4, (MR_Integer) 0)));
#line 579 "coverage.m"
                          coverage__succeeded = MR_TRUE;
#line 579 "coverage.m"
                        }
#line 580 "coverage.m"
                      else
#line 580 "coverage.m"
                        coverage__succeeded = MR_FALSE;
#line 576 "coverage.m"
                    if (coverage__succeeded)
#line 586 "coverage.m"
                      {
#line 586 "coverage.m"
                        if ((coverage__STATE_VARIABLE_SumBefore_0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 588 "coverage.m"
                          {
#line 588 "coverage.m"
                            coverage__SumBeforeExecCount_32 = (MR_Integer) 0;
#line 588 "coverage.m"
                            coverage__succeeded = MR_TRUE;
#line 588 "coverage.m"
                          }
#line 586 "coverage.m"
                        else
#line 586 "coverage.m"
                          if (((MR_tag((MR_Word) coverage__STATE_VARIABLE_SumBefore_0_5)) == (MR_mktag((MR_Integer) 1))))
#line 585 "coverage.m"
                            {
#line 585 "coverage.m"
                              coverage__SumBeforeExecCount_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumBefore_0_5, (MR_Integer) 0)));
#line 585 "coverage.m"
                              coverage__succeeded = MR_TRUE;
#line 585 "coverage.m"
                            }
#line 586 "coverage.m"
                          else
#line 586 "coverage.m"
                            coverage__succeeded = MR_FALSE;
#line 586 "coverage.m"
                      }
#line 576 "coverage.m"
                  }
#line 576 "coverage.m"
              }
#line 593 "coverage.m"
            if (coverage__succeeded)
#line 591 "coverage.m"
              {
#line 591 "coverage.m"
                MR_Integer coverage__V_45_45 = (coverage__SwitchBeforeExecCount_31 - coverage__SumBeforeExecCount_32);

#line 1300 "coverage.m"
                coverage__succeeded = (coverage__V_45_45 == (MR_Integer) 0);
#line 1299 "coverage.m"
                if (coverage__succeeded)
#line 1301 "coverage.m"
                  coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1299 "coverage.m"
                else
#line 1303 "coverage.m"
                  {
#line 1303 "coverage.m"
                    coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "coverage.m"
                    MR_hl_field(MR_mktag(1), coverage__BeforeCase_33, 0) = ((MR_Box) (coverage__V_45_45));
#line 1303 "coverage.m"
                  }
#line 591 "coverage.m"
              }
#line 593 "coverage.m"
            else
#line 596 "coverage.m"
              {
#line 596 "coverage.m"
                MR_Word coverage__RevCaseGoalPath_34;
#line 596 "coverage.m"
                MR_Word coverage__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 4)));
#line 596 "coverage.m"
                MR_Word coverage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_35, (MR_Integer) 2)));
#line 595 "coverage.m"
                MR_Word coverage__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 0)));
#line 595 "coverage.m"
                MR_Word coverage__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 1)));
#line 595 "coverage.m"
                MR_Word coverage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 2)));
#line 595 "coverage.m"
                MR_Word coverage__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 3)));
#line 595 "coverage.m"
                MR_Word coverage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_35, (MR_Integer) 0)));
#line 595 "coverage.m"
                MR_Word coverage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_35, (MR_Integer) 1)));
#line 595 "coverage.m"
                MR_Box coverage__conv0_RevCaseGoalPath_34;
#line 755 "coverage.m"
                MR_Word coverage__CP_67;
#line 752 "coverage.m"
                MR_Word coverage__V_71_71;
#line 752 "coverage.m"
                MR_Word coverage__V_72_72;
#line 752 "coverage.m"
                MR_Word coverage__V_73_73;
#line 752 "coverage.m"
                MR_Word coverage__V_74_74;
#line 752 "coverage.m"
                MR_Word coverage__V_75_75;
#line 752 "coverage.m"
                MR_Box coverage__conv1_CP_67;

#line 595 "coverage.m"
                {
#line 595 "coverage.m"
                  coverage__conv0_RevCaseGoalPath_34 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__V_46_46, ((MR_Box) (coverage__V_47_47)));
                }
#line 595 "coverage.m"
                coverage__RevCaseGoalPath_34 = ((MR_Word) coverage__conv0_RevCaseGoalPath_34);
#line 752 "coverage.m"
                coverage__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 0)));
#line 752 "coverage.m"
                coverage__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 1)));
#line 752 "coverage.m"
                coverage__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 2)));
#line 752 "coverage.m"
                coverage__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 3)));
#line 752 "coverage.m"
                coverage__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 4)));
#line 752 "coverage.m"
                {
#line 752 "coverage.m"
                  coverage__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, coverage__V_71_71, ((MR_Box) (coverage__RevCaseGoalPath_34)), &coverage__conv1_CP_67);
                }
#line 752 "coverage.m"
                if (coverage__succeeded)
#line 752 "coverage.m"
                  {
#line 752 "coverage.m"
                    coverage__CP_67 = ((MR_Word) coverage__conv1_CP_67);
#line 752 "coverage.m"
                    coverage__succeeded = MR_TRUE;
#line 752 "coverage.m"
                  }
#line 755 "coverage.m"
                if (coverage__succeeded)
#line 753 "coverage.m"
                  {
#line 753 "coverage.m"
                    MR_Integer coverage__ExecCount_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CP_67, (MR_Integer) 0)));
#line 753 "coverage.m"
                    MR_Word coverage__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_67, (MR_Integer) 1)));
#line 753 "coverage.m"
                    MR_Word coverage__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_67, (MR_Integer) 2)));

#line 1300 "coverage.m"
                    coverage__succeeded = (coverage__ExecCount_68 == (MR_Integer) 0);
#line 1299 "coverage.m"
                    if (coverage__succeeded)
#line 1301 "coverage.m"
                      coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1299 "coverage.m"
                    else
#line 1303 "coverage.m"
                      {
#line 1303 "coverage.m"
                        coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__BeforeCase_33, 0) = ((MR_Box) (coverage__ExecCount_68));
#line 1303 "coverage.m"
                      }
#line 753 "coverage.m"
                  }
#line 755 "coverage.m"
                else
#line 756 "coverage.m"
                  coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 596 "coverage.m"
              }
#line 602 "coverage.m"
            {
#line 602 "coverage.m"
              coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_60, coverage__Goal_35, coverage__Info_2, coverage__BeforeCase_33, &coverage__AfterCase_38, coverage__STATE_VARIABLE_Array_0_9, &coverage__STATE_VARIABLE_Array_48_48);
            }
#line 1226 "coverage.m"
            if ((coverage__STATE_VARIABLE_SumBefore_0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1248 "coverage.m"
              coverage__STATE_VARIABLE_SumBefore_49_49 = coverage__STATE_VARIABLE_SumBefore_0_5;
#line 1226 "coverage.m"
            else
#line 1226 "coverage.m"
              if ((coverage__STATE_VARIABLE_SumBefore_0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1241 "coverage.m"
                if ((coverage__BeforeCase_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1245 "coverage.m"
                  coverage__STATE_VARIABLE_SumBefore_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1241 "coverage.m"
                else
#line 1241 "coverage.m"
                  if ((coverage__BeforeCase_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1242 "coverage.m"
                    coverage__STATE_VARIABLE_SumBefore_49_49 = coverage__STATE_VARIABLE_SumBefore_0_5;
#line 1241 "coverage.m"
                  else
#line 1239 "coverage.m"
                    {
#line 1239 "coverage.m"
                      MR_Integer coverage__ExecCount_90 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeCase_33, (MR_Integer) 0)));

#line 1240 "coverage.m"
                      {
#line 1240 "coverage.m"
                        coverage__STATE_VARIABLE_SumBefore_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumBefore_49_49, 0) = ((MR_Box) (coverage__ExecCount_90));
#line 1240 "coverage.m"
                      }
#line 1239 "coverage.m"
                    }
#line 1226 "coverage.m"
              else
#line 1226 "coverage.m"
                {
#line 1226 "coverage.m"
                  MR_Integer coverage__SumExecCount_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumBefore_0_5, (MR_Integer) 0)));

#line 1230 "coverage.m"
                  if ((coverage__BeforeCase_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1234 "coverage.m"
                    coverage__STATE_VARIABLE_SumBefore_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1230 "coverage.m"
                  else
#line 1230 "coverage.m"
                    if ((coverage__BeforeCase_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1231 "coverage.m"
                      coverage__STATE_VARIABLE_SumBefore_49_49 = coverage__STATE_VARIABLE_SumBefore_0_5;
#line 1230 "coverage.m"
                    else
#line 1228 "coverage.m"
                      {
#line 1228 "coverage.m"
                        MR_Integer coverage__ExecCount_84 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeCase_33, (MR_Integer) 0)));
#line 1228 "coverage.m"
                        MR_Integer coverage__V_89_89 = (coverage__SumExecCount_83 + coverage__ExecCount_84);

#line 1229 "coverage.m"
                        {
#line 1229 "coverage.m"
                          coverage__STATE_VARIABLE_SumBefore_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "coverage.m"
                          MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumBefore_49_49, 0) = ((MR_Box) (coverage__V_89_89));
#line 1229 "coverage.m"
                        }
#line 1228 "coverage.m"
                      }
#line 1226 "coverage.m"
                }
#line 606 "coverage.m"
            {
#line 606 "coverage.m"
              coverage__sum_after_coverage_3_p_0(coverage__AfterCase_38, coverage__STATE_VARIABLE_SumAfter_0_7, &coverage__STATE_VARIABLE_SumAfter_50_50);
            }
#line 608 "coverage.m"
            /* direct tailcall eliminated */
#line 608 "coverage.m"
            {
#line 608 "coverage.m"
              MR_Word coverage__HeadVar__1__tmp_copy_1 = coverage__Cases_24;
#line 608 "coverage.m"
              MR_Word coverage__STATE_VARIABLE_SumBefore_0__tmp_copy_5 = coverage__STATE_VARIABLE_SumBefore_49_49;
#line 608 "coverage.m"
              MR_Word coverage__STATE_VARIABLE_SumAfter_0__tmp_copy_7 = coverage__STATE_VARIABLE_SumAfter_50_50;
#line 608 "coverage.m"
              MR_Word coverage__STATE_VARIABLE_Array_0__tmp_copy_9 = coverage__STATE_VARIABLE_Array_48_48;

#line 608 "coverage.m"
              coverage__STATE_VARIABLE_Array_0_9 = coverage__STATE_VARIABLE_Array_0__tmp_copy_9;
#line 608 "coverage.m"
              coverage__STATE_VARIABLE_SumAfter_0_7 = coverage__STATE_VARIABLE_SumAfter_0__tmp_copy_7;
#line 608 "coverage.m"
              coverage__STATE_VARIABLE_SumBefore_0_5 = coverage__STATE_VARIABLE_SumBefore_0__tmp_copy_5;
#line 608 "coverage.m"
              coverage__HeadVar__1_1 = coverage__HeadVar__1__tmp_copy_1;
#line 608 "coverage.m"
            }
#line 608 "coverage.m"
            continue;
#line 567 "coverage.m"
          }
#line 565 "coverage.m"
      }
#line 565 "coverage.m"
      break;
#line 565 "coverage.m"
    }
#line 558 "coverage.m"
}

#line 912 "coverage.m"
static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0_1(
#line 912 "coverage.m"
  MR_Box coverage__closure_arg,
#line 912 "coverage.m"
  MR_Box coverage__wrapper_arg_1,
#line 912 "coverage.m"
  MR_Box coverage__wrapper_arg_2,
#line 912 "coverage.m"
  MR_Box * coverage__wrapper_arg_3)
#line 912 "coverage.m"
{
#line 912 "coverage.m"
  {
#line 912 "coverage.m"
    MR_Box coverage__closure = coverage__closure_arg;
#line 912 "coverage.m"
    MR_Word coverage__conv0_STATE_VARIABLE_Acc_16;

#line 912 "coverage.m"
    {
#line 912 "coverage.m"
      coverage__sum_switch_case_coverage_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2), &coverage__conv0_STATE_VARIABLE_Acc_16);
    }
#line 912 "coverage.m"
    *coverage__wrapper_arg_3 = ((MR_Box) (coverage__conv0_STATE_VARIABLE_Acc_16));
#line 912 "coverage.m"
  }
#line 912 "coverage.m"
}

#line 503 "coverage.m"
static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0(
#line 503 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_47,
#line 503 "coverage.m"
  MR_Word coverage__Cases_8,
#line 503 "coverage.m"
  MR_Word coverage__Info_9,
#line 503 "coverage.m"
  MR_Word coverage__CanFail_10,
#line 503 "coverage.m"
  MR_Word coverage__Before_11,
#line 503 "coverage.m"
  MR_Word * coverage__After_12,
#line 503 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_18,
#line 503 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_19)
#line 503 "coverage.m"
{
#line 509 "coverage.m"
  {
#line 509 "coverage.m"
    MR_bool coverage__succeeded;
#line 509 "coverage.m"
    MR_Word coverage__SumAfter_16;
#line 514 "coverage.m"
    MR_Word coverage___SumBefore_15;

#line 514 "coverage.m"
    {
#line 514 "coverage.m"
      coverage__switch_annotate_coverage_2_10_p_0(coverage__TypeInfo_for_Callee_47, coverage__Cases_8, coverage__Info_9, coverage__CanFail_10, coverage__Before_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &coverage___SumBefore_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &coverage__SumAfter_16, coverage__STATE_VARIABLE_Array_0_18, coverage__STATE_VARIABLE_Array_19);
    }
#line 1162 "coverage.m"
    if ((coverage__SumAfter_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1162 "coverage.m"
      *coverage__After_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1162 "coverage.m"
    else
#line 1162 "coverage.m"
      if ((coverage__SumAfter_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1163 "coverage.m"
        *coverage__After_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1162 "coverage.m"
      else
#line 1164 "coverage.m"
        {
#line 1164 "coverage.m"
          MR_Integer coverage__C_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__SumAfter_16, (MR_Integer) 0)));

#line 1291 "coverage.m"
          coverage__succeeded = (coverage__C_57 == (MR_Integer) 0);
#line 1290 "coverage.m"
          if (coverage__succeeded)
#line 1292 "coverage.m"
            *coverage__After_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1290 "coverage.m"
          else
#line 1294 "coverage.m"
            {
#line 1294 "coverage.m"
              MR_Word base;
#line 1294 "coverage.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "coverage.m"
              *coverage__After_12 = base;
#line 1294 "coverage.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__C_57));
#line 1294 "coverage.m"
            }
#line 1164 "coverage.m"
        }
#line 6868 "coverage.c"
    if ((coverage__CanFail_10 == (MR_Integer) 0))
#line 939 "coverage.m"
      {
#line 939 "coverage.m"
      }
#line 6874 "coverage.c"
    else
#line 6876 "coverage.c"
      {
#line 6878 "coverage.c"
        MR_Word coverage__MaybeSum_64;
#line 6880 "coverage.c"
        MR_Word coverage__V_67_67;
#line 912 "coverage.m"
        MR_Box coverage__conv1_MaybeSum_64;

#line 912 "coverage.m"
        {
#line 912 "coverage.m"
          coverage__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 912 "coverage.m"
          MR_hl_field(MR_mktag(0), coverage__V_67_67, 0) = ((MR_Box) (&coverage_scalar_common_4[0]));
#line 912 "coverage.m"
          MR_hl_field(MR_mktag(0), coverage__V_67_67, 1) = ((MR_Box) (coverage__switch_annotate_coverage_7_p_0_1));
#line 912 "coverage.m"
          MR_hl_field(MR_mktag(0), coverage__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 912 "coverage.m"
          MR_hl_field(MR_mktag(0), coverage__V_67_67, 3) = ((MR_Box) (*coverage__STATE_VARIABLE_Array_19));
#line 912 "coverage.m"
        }
#line 912 "coverage.m"
        {
#line 912 "coverage.m"
          mercury__list__foldl_4_p_0((MR_Word) &coverage_scalar_common_1[0], (MR_Word) &coverage_scalar_common_1[2], coverage__V_67_67, coverage__Cases_8, ((MR_Box) (MR_mkword(MR_mktag(1), &coverage_scalar_common_5[0]))), &coverage__conv1_MaybeSum_64);
        }
#line 912 "coverage.m"
        coverage__MaybeSum_64 = ((MR_Word) coverage__conv1_MaybeSum_64);
#line 6906 "coverage.c"
        if ((coverage__MaybeSum_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "coverage.m"
          {
#line 935 "coverage.m"
          }
#line 6912 "coverage.c"
        else
#line 6914 "coverage.c"
          {
#line 6916 "coverage.c"
            MR_Integer coverage__SumA_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__MaybeSum_64, (MR_Integer) 0)));

#line 6919 "coverage.c"
            if ((coverage__Before_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 918 "coverage.m"
              {
#line 918 "coverage.m"
              }
#line 6925 "coverage.c"
            else
#line 6927 "coverage.c"
              if ((coverage__Before_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6929 "coverage.c"
                {
#line 926 "coverage.m"
                  coverage__succeeded = (coverage__SumA_65 == (MR_Integer) 0);
#line 6933 "coverage.c"
                  if (coverage__succeeded)
#line 927 "coverage.m"
                    {
#line 927 "coverage.m"
                    }
#line 6939 "coverage.c"
                  else
#line 6941 "coverage.c"
                    {
#line 6943 "coverage.c"
                      MR_String coverage__V_79_79;
#line 6945 "coverage.c"
                      MR_String coverage__V_83_83;
#line 6947 "coverage.c"
                      MR_String coverage__V_86_86;
#line 6949 "coverage.c"
                      MR_String coverage__V_89_89;
#line 6951 "coverage.c"
                      MR_String coverage__V_92_92;
#line 6953 "coverage.c"
                      MR_String coverage__V_154_154;
#line 6955 "coverage.c"
                      MR_String coverage__V_156_156;
#line 6957 "coverage.c"
                      MR_String coverage__V_157_157;
#line 6959 "coverage.c"
                      MR_String coverage__V_159_159;
#line 6961 "coverage.c"
                      MR_String coverage__V_160_160;
#line 6963 "coverage.c"
                      MR_String coverage__V_162_162;
#line 6965 "coverage.c"
                      MR_String coverage__V_163_163;

#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_83_83 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_switch_can_fail_rep_0, ((MR_Box) (coverage__CanFail_10)));
                      }
#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_86_86 = mercury__string__string_1_f_0((MR_Word) &coverage_scalar_common_1[1], ((MR_Box) (coverage__Cases_8)));
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_89_89 = mercury__string__string_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_before_0, ((MR_Box) (coverage__Before_11)));
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_92_92 = mercury__string__string_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_after_0, ((MR_Box) (*coverage__After_12)));
                      }
#line 6988 "coverage.c"
                      {
#line 6990 "coverage.c"
                        coverage__V_154_154 = mercury__string__f_43_43_2_f_0(coverage__V_92_92, (MR_String) "\n");
                      }
#line 6993 "coverage.c"
                      {
#line 6995 "coverage.c"
                        coverage__V_156_156 = mercury__string__f_43_43_2_f_0((MR_String) ", After: ", coverage__V_154_154);
                      }
#line 6998 "coverage.c"
                      {
#line 7000 "coverage.c"
                        coverage__V_157_157 = mercury__string__f_43_43_2_f_0(coverage__V_89_89, coverage__V_156_156);
                      }
#line 7003 "coverage.c"
                      {
#line 7005 "coverage.c"
                        coverage__V_159_159 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tBefore: ", coverage__V_157_157);
                      }
#line 7008 "coverage.c"
                      {
#line 7010 "coverage.c"
                        coverage__V_160_160 = mercury__string__f_43_43_2_f_0(coverage__V_86_86, coverage__V_159_159);
                      }
#line 7013 "coverage.c"
                      {
#line 7015 "coverage.c"
                        coverage__V_162_162 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tCases: ", coverage__V_160_160);
                      }
#line 7018 "coverage.c"
                      {
#line 7020 "coverage.c"
                        coverage__V_163_163 = mercury__string__f_43_43_2_f_0(coverage__V_83_83, coverage__V_162_162);
                      }
#line 7023 "coverage.c"
                      {
#line 7025 "coverage.c"
                        coverage__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "check_switch_coverage failed\n\tCanFail: ", coverage__V_163_163);
                      }
#line 538 "coverage.m"
                      {
#line 538 "coverage.m"
                        mercury__require__error_1_p_0(coverage__V_79_79);
#line 538 "coverage.m"
                        return;
                      }
#line 7035 "coverage.c"
                    }
#line 7037 "coverage.c"
                }
#line 7039 "coverage.c"
              else
#line 7041 "coverage.c"
                {
#line 7043 "coverage.c"
                  MR_Integer coverage__SumB_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_11, (MR_Integer) 0)));

#line 926 "coverage.m"
                  coverage__succeeded = (coverage__SumA_65 == coverage__SumB_66);
#line 7048 "coverage.c"
                  if (coverage__succeeded)
#line 927 "coverage.m"
                    {
#line 927 "coverage.m"
                    }
#line 7054 "coverage.c"
                  else
#line 7056 "coverage.c"
                    {
#line 7058 "coverage.c"
                      MR_String coverage__V_30_30;
#line 7060 "coverage.c"
                      MR_String coverage__V_36_36;
#line 7062 "coverage.c"
                      MR_String coverage__V_39_39;
#line 7064 "coverage.c"
                      MR_String coverage__V_42_42;
#line 7066 "coverage.c"
                      MR_String coverage__V_45_45;
#line 7068 "coverage.c"
                      MR_String coverage__V_142_142;
#line 7070 "coverage.c"
                      MR_String coverage__V_144_144;
#line 7072 "coverage.c"
                      MR_String coverage__V_145_145;
#line 7074 "coverage.c"
                      MR_String coverage__V_147_147;
#line 7076 "coverage.c"
                      MR_String coverage__V_148_148;
#line 7078 "coverage.c"
                      MR_String coverage__V_150_150;
#line 7080 "coverage.c"
                      MR_String coverage__V_151_151;

#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_36_36 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_switch_can_fail_rep_0, ((MR_Box) (coverage__CanFail_10)));
                      }
#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_39_39 = mercury__string__string_1_f_0((MR_Word) &coverage_scalar_common_1[1], ((MR_Box) (coverage__Cases_8)));
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_42_42 = mercury__string__string_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_before_0, ((MR_Box) (coverage__Before_11)));
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_45_45 = mercury__string__string_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_after_0, ((MR_Box) (*coverage__After_12)));
                      }
#line 7103 "coverage.c"
                      {
#line 7105 "coverage.c"
                        coverage__V_142_142 = mercury__string__f_43_43_2_f_0(coverage__V_45_45, (MR_String) "\n");
                      }
#line 7108 "coverage.c"
                      {
#line 7110 "coverage.c"
                        coverage__V_144_144 = mercury__string__f_43_43_2_f_0((MR_String) ", After: ", coverage__V_142_142);
                      }
#line 7113 "coverage.c"
                      {
#line 7115 "coverage.c"
                        coverage__V_145_145 = mercury__string__f_43_43_2_f_0(coverage__V_42_42, coverage__V_144_144);
                      }
#line 7118 "coverage.c"
                      {
#line 7120 "coverage.c"
                        coverage__V_147_147 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tBefore: ", coverage__V_145_145);
                      }
#line 7123 "coverage.c"
                      {
#line 7125 "coverage.c"
                        coverage__V_148_148 = mercury__string__f_43_43_2_f_0(coverage__V_39_39, coverage__V_147_147);
                      }
#line 7128 "coverage.c"
                      {
#line 7130 "coverage.c"
                        coverage__V_150_150 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tCases: ", coverage__V_148_148);
                      }
#line 7133 "coverage.c"
                      {
#line 7135 "coverage.c"
                        coverage__V_151_151 = mercury__string__f_43_43_2_f_0(coverage__V_36_36, coverage__V_150_150);
                      }
#line 7138 "coverage.c"
                      {
#line 7140 "coverage.c"
                        coverage__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "check_switch_coverage failed\n\tCanFail: ", coverage__V_151_151);
                      }
#line 538 "coverage.m"
                      {
#line 538 "coverage.m"
                        mercury__require__error_1_p_0(coverage__V_30_30);
#line 538 "coverage.m"
                        return;
                      }
#line 7150 "coverage.c"
                    }
#line 7152 "coverage.c"
                }
#line 7154 "coverage.c"
          }
#line 7156 "coverage.c"
      }
#line 509 "coverage.m"
  }
#line 503 "coverage.m"
}

#line 454 "coverage.m"
static void MR_CALL 
coverage__conj_annotate_coverage_6_p_0(
#line 454 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_25,
#line 454 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 454 "coverage.m"
  MR_Word coverage__Info_2,
#line 454 "coverage.m"
  MR_Word coverage__Before_3,
#line 454 "coverage.m"
  MR_Word * coverage__After_4,
#line 454 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_5,
#line 454 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_6)
#line 454 "coverage.m"
{
#line 460 "coverage.m"
  while (MR_TRUE)
#line 460 "coverage.m"
    {
#line 460 "coverage.m"
      /* tailcall optimized into a loop */
#line 460 "coverage.m"
      {
#line 460 "coverage.m"
        MR_bool coverage__succeeded;

#line 460 "coverage.m"
        if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 460 "coverage.m"
          {
#line 1045 "coverage.m"
            if ((coverage__Before_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1046 "coverage.m"
              *coverage__After_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1045 "coverage.m"
            else
#line 1045 "coverage.m"
              if ((coverage__Before_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1052 "coverage.m"
                *coverage__After_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1045 "coverage.m"
              else
#line 1048 "coverage.m"
                {
#line 1048 "coverage.m"
                  MR_Integer coverage__Count_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_3, (MR_Integer) 0)));

#line 1291 "coverage.m"
                  coverage__succeeded = (coverage__Count_28 == (MR_Integer) 0);
#line 1290 "coverage.m"
                  if (coverage__succeeded)
#line 1292 "coverage.m"
                    *coverage__After_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1290 "coverage.m"
                  else
#line 1294 "coverage.m"
                    {
#line 1294 "coverage.m"
                      MR_Word base;
#line 1294 "coverage.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "coverage.m"
                      *coverage__After_4 = base;
#line 1294 "coverage.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__Count_28));
#line 1294 "coverage.m"
                    }
#line 1048 "coverage.m"
                }
#line 460 "coverage.m"
            *coverage__STATE_VARIABLE_Array_6 = coverage__STATE_VARIABLE_Array_0_5;
#line 460 "coverage.m"
          }
#line 460 "coverage.m"
        else
#line 463 "coverage.m"
          {
#line 463 "coverage.m"
            MR_Word coverage__Conj_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 463 "coverage.m"
            MR_Word coverage__Conjs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 463 "coverage.m"
            MR_Word coverage__CoverageAfterHead_19;
#line 463 "coverage.m"
            MR_Word coverage__CoverageBeforeTail_20;
#line 463 "coverage.m"
            MR_Word coverage__STATE_VARIABLE_Array_23_23;

#line 464 "coverage.m"
            {
#line 464 "coverage.m"
              coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_25, coverage__Conj_13, coverage__Info_2, coverage__Before_3, &coverage__CoverageAfterHead_19, coverage__STATE_VARIABLE_Array_0_5, &coverage__STATE_VARIABLE_Array_23_23);
            }
#line 1099 "coverage.m"
            if ((coverage__CoverageAfterHead_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1100 "coverage.m"
              coverage__CoverageBeforeTail_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1099 "coverage.m"
            else
#line 1099 "coverage.m"
              if ((coverage__CoverageAfterHead_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1106 "coverage.m"
                coverage__CoverageBeforeTail_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1099 "coverage.m"
              else
#line 1102 "coverage.m"
                {
#line 1102 "coverage.m"
                  MR_Integer coverage__ExecCount_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__CoverageAfterHead_19, (MR_Integer) 0)));

#line 1103 "coverage.m"
                  {
#line 1103 "coverage.m"
                    coverage__CoverageBeforeTail_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "coverage.m"
                    MR_hl_field(MR_mktag(1), coverage__CoverageBeforeTail_20, 0) = ((MR_Box) (coverage__ExecCount_32));
#line 1103 "coverage.m"
                  }
#line 1102 "coverage.m"
                }
#line 466 "coverage.m"
            /* direct tailcall eliminated */
#line 466 "coverage.m"
            {
#line 466 "coverage.m"
              MR_Word coverage__HeadVar__1__tmp_copy_1 = coverage__Conjs_14;
#line 466 "coverage.m"
              MR_Word coverage__Before__tmp_copy_3 = coverage__CoverageBeforeTail_20;
#line 466 "coverage.m"
              MR_Word coverage__STATE_VARIABLE_Array_0__tmp_copy_5 = coverage__STATE_VARIABLE_Array_23_23;

#line 466 "coverage.m"
              coverage__STATE_VARIABLE_Array_0_5 = coverage__STATE_VARIABLE_Array_0__tmp_copy_5;
#line 466 "coverage.m"
              coverage__Before_3 = coverage__Before__tmp_copy_3;
#line 466 "coverage.m"
              coverage__HeadVar__1_1 = coverage__HeadVar__1__tmp_copy_1;
#line 466 "coverage.m"
            }
#line 466 "coverage.m"
            continue;
#line 463 "coverage.m"
          }
#line 460 "coverage.m"
      }
#line 460 "coverage.m"
      break;
#line 460 "coverage.m"
    }
#line 454 "coverage.m"
}

#line 402 "coverage.m"
static MR_Word MR_CALL 
coverage__construct_before_after_coverage_2_f_0(
#line 402 "coverage.m"
  MR_Word coverage__Before_4,
#line 402 "coverage.m"
  MR_Word coverage__After_5)
#line 402 "coverage.m"
{
#line 407 "coverage.m"
  {
#line 407 "coverage.m"
    MR_bool coverage__succeeded;
#line 407 "coverage.m"
    MR_Word coverage__Coverage_6;

#line 407 "coverage.m"
    if ((coverage__Before_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 411 "coverage.m"
      if ((coverage__After_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 410 "coverage.m"
        coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "coverage.m"
      else
#line 411 "coverage.m"
        if ((coverage__After_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 415 "coverage.m"
          {
#line 416 "coverage.m"
            coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(3), &coverage_scalar_common_1[3]);
#line 415 "coverage.m"
          }
#line 411 "coverage.m"
        else
#line 412 "coverage.m"
          {
#line 412 "coverage.m"
            MR_Integer coverage__AfterExecCount_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_5, (MR_Integer) 0)));

#line 413 "coverage.m"
            {
#line 413 "coverage.m"
              coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "coverage.m"
              MR_hl_field(MR_mktag(3), coverage__Coverage_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 413 "coverage.m"
              MR_hl_field(MR_mktag(3), coverage__Coverage_6, 1) = ((MR_Box) (coverage__AfterExecCount_7));
#line 413 "coverage.m"
            }
#line 412 "coverage.m"
          }
#line 407 "coverage.m"
    else
#line 407 "coverage.m"
      if ((coverage__Before_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 423 "coverage.m"
        if ((coverage__After_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "coverage.m"
          {
#line 422 "coverage.m"
            coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(3), &coverage_scalar_common_1[4]);
#line 421 "coverage.m"
          }
#line 423 "coverage.m"
        else
#line 423 "coverage.m"
          if ((coverage__After_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 425 "coverage.m"
            coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 423 "coverage.m"
          else
#line 427 "coverage.m"
            {
#line 427 "coverage.m"
              MR_Integer coverage__AfterExecCount_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_5, (MR_Integer) 0)));

#line 428 "coverage.m"
              {
#line 428 "coverage.m"
                coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "coverage.m"
                MR_hl_field(MR_mktag(2), coverage__Coverage_6, 0) = ((MR_Box) ((MR_Integer) 0));
#line 428 "coverage.m"
                MR_hl_field(MR_mktag(2), coverage__Coverage_6, 1) = ((MR_Box) (coverage__AfterExecCount_13));
#line 428 "coverage.m"
              }
#line 427 "coverage.m"
            }
#line 407 "coverage.m"
      else
#line 431 "coverage.m"
        {
#line 431 "coverage.m"
          MR_Integer coverage__BeforeExecCount_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_4, (MR_Integer) 0)));

#line 435 "coverage.m"
          if ((coverage__After_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 434 "coverage.m"
            {
#line 434 "coverage.m"
              coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "coverage.m"
              MR_hl_field(MR_mktag(3), coverage__Coverage_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 434 "coverage.m"
              MR_hl_field(MR_mktag(3), coverage__Coverage_6, 1) = ((MR_Box) (coverage__BeforeExecCount_8));
#line 434 "coverage.m"
            }
#line 435 "coverage.m"
          else
#line 435 "coverage.m"
            if ((coverage__After_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 443 "coverage.m"
              {
#line 444 "coverage.m"
                {
#line 444 "coverage.m"
                  coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "coverage.m"
                  MR_hl_field(MR_mktag(2), coverage__Coverage_6, 0) = ((MR_Box) (coverage__BeforeExecCount_8));
#line 444 "coverage.m"
                  MR_hl_field(MR_mktag(2), coverage__Coverage_6, 1) = ((MR_Box) ((MR_Integer) 0));
#line 444 "coverage.m"
                }
#line 443 "coverage.m"
              }
#line 435 "coverage.m"
            else
#line 436 "coverage.m"
              {
#line 436 "coverage.m"
                MR_Integer coverage__AfterExecCount_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_5, (MR_Integer) 0)));

#line 437 "coverage.m"
                coverage__succeeded = (coverage__BeforeExecCount_8 == coverage__AfterExecCount_16);
#line 439 "coverage.m"
                if (coverage__succeeded)
#line 438 "coverage.m"
                  {
#line 438 "coverage.m"
                    coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 438 "coverage.m"
                    MR_hl_field(MR_mktag(1), coverage__Coverage_6, 0) = ((MR_Box) (coverage__BeforeExecCount_8));
#line 438 "coverage.m"
                  }
#line 439 "coverage.m"
                else
#line 440 "coverage.m"
                  {
#line 440 "coverage.m"
                    coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "coverage.m"
                    MR_hl_field(MR_mktag(2), coverage__Coverage_6, 0) = ((MR_Box) (coverage__BeforeExecCount_8));
#line 440 "coverage.m"
                    MR_hl_field(MR_mktag(2), coverage__Coverage_6, 1) = ((MR_Box) (coverage__AfterExecCount_16));
#line 440 "coverage.m"
                  }
#line 436 "coverage.m"
              }
#line 431 "coverage.m"
        }
#line 407 "coverage.m"
    return coverage__Coverage_6;
#line 407 "coverage.m"
  }
#line 402 "coverage.m"
}

#line 334 "coverage.m"
static MR_bool MR_CALL 
coverage__goal_annotate_coverage_6_p_0_1(
#line 334 "coverage.m"
  MR_Box coverage__closure_arg)
#line 334 "coverage.m"
{
#line 334 "coverage.m"
  {
#line 334 "coverage.m"
    MR_bool coverage__succeeded;
#line 334 "coverage.m"
    MR_Box coverage__closure = coverage__closure_arg;

#line 334 "coverage.m"
    {
#line 334 "coverage.m"
      return coverage__succeeded = coverage__IntroducedFrom__pred__goal_annotate_coverage__334__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 4))));
    }
#line 334 "coverage.m"
    return coverage__succeeded;
#line 334 "coverage.m"
  }
#line 334 "coverage.m"
}

#line 280 "coverage.m"
static void MR_CALL 
coverage__goal_annotate_coverage_6_p_0(
#line 280 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_164,
#line 280 "coverage.m"
  MR_Word coverage__Goal_7,
#line 280 "coverage.m"
  MR_Word coverage__Info_8,
#line 280 "coverage.m"
  MR_Word coverage__Before_9,
#line 280 "coverage.m"
  MR_Word * coverage__After_10,
#line 280 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_75,
#line 280 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_76)
#line 280 "coverage.m"
{
#line 286 "coverage.m"
  {
#line 286 "coverage.m"
    MR_bool coverage__succeeded;
#line 286 "coverage.m"
    MR_Word coverage__TypeCtorInfo_166_166 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 286 "coverage.m"
    MR_Word coverage__TypeCtorInfo_171_171;
#line 286 "coverage.m"
    MR_Word coverage__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_7, (MR_Integer) 0)));
#line 286 "coverage.m"
    MR_Word coverage__Detism_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_7, (MR_Integer) 1)));
#line 286 "coverage.m"
    MR_Word coverage__GoalId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_7, (MR_Integer) 2)));
#line 286 "coverage.m"
    MR_Word coverage__RevGoalPath_15;
#line 286 "coverage.m"
    MR_Word coverage__After0_17;
#line 286 "coverage.m"
    MR_Word coverage__GoalCoverage_73;
#line 286 "coverage.m"
    MR_Word coverage__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 4)));
#line 286 "coverage.m"
    MR_Word coverage__STATE_VARIABLE_Array_95_95;
#line 288 "coverage.m"
    MR_Word coverage__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 0)));
#line 288 "coverage.m"
    MR_Word coverage__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 1)));
#line 288 "coverage.m"
    MR_Word coverage__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 2)));
#line 288 "coverage.m"
    MR_Word coverage__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 3)));
#line 288 "coverage.m"
    MR_Box coverage__conv0_RevGoalPath_15;
#line 369 "coverage.m"
    MR_Word coverage__CoveragePoint_69;
#line 363 "coverage.m"
    MR_Word coverage__V_96_96;
#line 363 "coverage.m"
    MR_Word coverage__V_156_156;
#line 363 "coverage.m"
    MR_Word coverage__V_157_157;
#line 363 "coverage.m"
    MR_Word coverage__V_158_158;
#line 363 "coverage.m"
    MR_Word coverage__V_159_159;
#line 363 "coverage.m"
    MR_Box coverage__conv2_CoveragePoint_69;

#line 288 "coverage.m"
    {
#line 288 "coverage.m"
      coverage__conv0_RevGoalPath_15 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, coverage__TypeCtorInfo_166_166, coverage__V_77_77, ((MR_Box) (coverage__GoalId_14)));
    }
#line 288 "coverage.m"
    coverage__RevGoalPath_15 = ((MR_Word) coverage__conv0_RevGoalPath_15);
#line 294 "coverage.m"
    if (((MR_tag((MR_Word) coverage__GoalExpr_12)) == (MR_mktag((MR_Integer) 0))))
#line 292 "coverage.m"
      {
#line 292 "coverage.m"
        MR_Word coverage__Conjs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__GoalExpr_12, (MR_Integer) 0)));

#line 293 "coverage.m"
        {
#line 293 "coverage.m"
          coverage__conj_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_164, coverage__Conjs_16, coverage__Info_8, coverage__Before_9, &coverage__After0_17, coverage__STATE_VARIABLE_Array_0_75, &coverage__STATE_VARIABLE_Array_95_95);
        }
#line 292 "coverage.m"
      }
#line 294 "coverage.m"
    else
#line 294 "coverage.m"
      if (((MR_tag((MR_Word) coverage__GoalExpr_12)) == (MR_mktag((MR_Integer) 1))))
#line 295 "coverage.m"
        {
#line 295 "coverage.m"
          MR_Word coverage__Disjs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__GoalExpr_12, (MR_Integer) 0)));
#line 295 "coverage.m"
          MR_Word coverage__SumAfterDisjuncts_20;
#line 296 "coverage.m"
          MR_Word coverage__Solutions_19;

#line 296 "coverage.m"
          {
#line 296 "coverage.m"
            coverage__Solutions_19 = mdbcomp__program_representation__detism_get_solutions_1_f_0(coverage__Detism_13);
          }
#line 301 "coverage.m"
          {
#line 301 "coverage.m"
            coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_105_115_106_95_97_110_110_111_116_97_116_101_95_99_111_118_101_114_97_103_101_95_95_91_52_93_95_48_8_p_0(coverage__TypeInfo_for_Callee_164, coverage__Disjs_18, coverage__Info_8, coverage__Before_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &coverage__SumAfterDisjuncts_20, coverage__STATE_VARIABLE_Array_0_75, &coverage__STATE_VARIABLE_Array_95_95);
          }
#line 303 "coverage.m"
          {
#line 303 "coverage.m"
            coverage__after_count_sum_after_count_2_p_0(coverage__SumAfterDisjuncts_20, &coverage__After0_17);
          }
#line 295 "coverage.m"
        }
#line 294 "coverage.m"
      else
#line 294 "coverage.m"
        if (((MR_tag((MR_Word) coverage__GoalExpr_12)) == (MR_mktag((MR_Integer) 2))))
#line 305 "coverage.m"
          {
#line 305 "coverage.m"
            MR_Word coverage__CanFail_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), coverage__GoalExpr_12, (MR_Integer) 1)));
#line 305 "coverage.m"
            MR_Word coverage__Cases_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), coverage__GoalExpr_12, (MR_Integer) 2)));
#line 305 "coverage.m"
            MR_Integer coverage___Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__GoalExpr_12, (MR_Integer) 0)));

#line 306 "coverage.m"
            {
#line 306 "coverage.m"
              coverage__switch_annotate_coverage_7_p_0(coverage__TypeInfo_for_Callee_164, coverage__Cases_23, coverage__Info_8, coverage__CanFail_22, coverage__Before_9, &coverage__After0_17, coverage__STATE_VARIABLE_Array_0_75, &coverage__STATE_VARIABLE_Array_95_95);
            }
#line 305 "coverage.m"
          }
#line 294 "coverage.m"
        else
#line 294 "coverage.m"
          if (((((MR_tag((MR_Word) coverage__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 319 "coverage.m"
            {
#line 319 "coverage.m"
              MR_Word coverage__AtomicGoal_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 4)));
#line 319 "coverage.m"
              MR_String coverage__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 1)));
#line 319 "coverage.m"
              MR_Integer coverage__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 2)));
#line 319 "coverage.m"
              MR_Word coverage__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 3)));

#line 342 "coverage.m"
              if (((((((((MR_tag((MR_Word) coverage__AtomicGoal_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__AtomicGoal_33, (MR_Integer) 0)))) == (MR_Integer) 5)))) || (((((MR_tag((MR_Word) coverage__AtomicGoal_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__AtomicGoal_33, (MR_Integer) 0)))) == (MR_Integer) 6)))))) || (((((MR_tag((MR_Word) coverage__AtomicGoal_33)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__AtomicGoal_33, (MR_Integer) 0)))) == (MR_Integer) 7))))))
#line 337 "coverage.m"
                {
#line 337 "coverage.m"
                  MR_Word coverage__Cost_42;
#line 326 "coverage.m"
                  MR_Word coverage__TypeInfo_168_168;
#line 326 "coverage.m"
                  MR_Word coverage__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 1)));
#line 326 "coverage.m"
                  MR_Word coverage__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 0)));
#line 326 "coverage.m"
                  MR_Word coverage__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 2)));
#line 326 "coverage.m"
                  MR_Word coverage__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 3)));
#line 326 "coverage.m"
                  MR_Word coverage__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 4)));
#line 326 "coverage.m"
                  MR_Box coverage__conv1_Cost_42;

#line 7687 "coverage.c"
                  {
#line 7689 "coverage.c"
                    coverage__TypeInfo_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7691 "coverage.c"
                    MR_hl_field(MR_mktag(0), coverage__TypeInfo_168_168, 0) = ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1));
#line 7693 "coverage.c"
                    MR_hl_field(MR_mktag(0), coverage__TypeInfo_168_168, 1) = ((MR_Box) (coverage__TypeInfo_for_Callee_164));
#line 7695 "coverage.c"
                  }
#line 326 "coverage.m"
                  {
#line 326 "coverage.m"
                    coverage__succeeded = mercury__map__search_3_p_0(coverage__TypeCtorInfo_166_166, coverage__TypeInfo_168_168, coverage__V_78_78, ((MR_Box) (coverage__RevGoalPath_15)), &coverage__conv1_Cost_42);
                  }
#line 326 "coverage.m"
                  if (coverage__succeeded)
#line 326 "coverage.m"
                    {
#line 326 "coverage.m"
                      coverage__Cost_42 = ((MR_Word) coverage__conv1_Cost_42);
#line 326 "coverage.m"
                      coverage__succeeded = MR_TRUE;
#line 326 "coverage.m"
                    }
#line 337 "coverage.m"
                  if (coverage__succeeded)
#line 332 "coverage.m"
                    {
#line 332 "coverage.m"
                      MR_Integer coverage__Calls_43;
#line 332 "coverage.m"
                      MR_Integer coverage__Exits_44;
#line 332 "coverage.m"
                      MR_Float coverage__V_79_79;
#line 332 "coverage.m"
                      MR_Word coverage__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 0)));
#line 332 "coverage.m"
                      MR_Word coverage__V_81_81;
#line 332 "coverage.m"
                      MR_Word coverage__V_83_83;
#line 332 "coverage.m"
                      MR_Integer coverage__V_150_150 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 1)));
#line 332 "coverage.m"
                      MR_Word coverage__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 2)));
#line 332 "coverage.m"
                      MR_Word coverage__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 3)));
#line 333 "coverage.m"
                      MR_Word coverage__V_153_153;
#line 333 "coverage.m"
                      MR_Word coverage__V_154_154;
#line 333 "coverage.m"
                      MR_Word coverage__V_155_155;

#line 332 "coverage.m"
                      {
#line 332 "coverage.m"
                        coverage__V_79_79 = measurements__cs_cost_get_calls_1_f_0(coverage__V_80_80);
                      }
#line 332 "coverage.m"
                      {
#line 332 "coverage.m"
                        coverage__Calls_43 = mercury__float__round_to_int_1_f_0(coverage__V_79_79);
                      }
#line 333 "coverage.m"
                      coverage__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 0)));
#line 333 "coverage.m"
                      coverage__Exits_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 1)));
#line 333 "coverage.m"
                      coverage__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 2)));
#line 333 "coverage.m"
                      coverage__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cost_42, (MR_Integer) 3)));
#line 334 "coverage.m"
                      {
#line 334 "coverage.m"
                        coverage__V_83_83 = coverage__before_coverage_1_f_0(coverage__Calls_43);
                      }
#line 334 "coverage.m"
                      {
#line 334 "coverage.m"
                        coverage__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 334 "coverage.m"
                        MR_hl_field(MR_mktag(0), coverage__V_81_81, 0) = ((MR_Box) (&coverage_scalar_common_3[1]));
#line 334 "coverage.m"
                        MR_hl_field(MR_mktag(0), coverage__V_81_81, 1) = ((MR_Box) (coverage__goal_annotate_coverage_6_p_0_1));
#line 334 "coverage.m"
                        MR_hl_field(MR_mktag(0), coverage__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 334 "coverage.m"
                        MR_hl_field(MR_mktag(0), coverage__V_81_81, 3) = ((MR_Box) (coverage__Before_9));
#line 334 "coverage.m"
                        MR_hl_field(MR_mktag(0), coverage__V_81_81, 4) = ((MR_Box) (coverage__V_83_83));
#line 334 "coverage.m"
                      }
#line 334 "coverage.m"
                      {
#line 334 "coverage.m"
                        mercury__require__require_2_p_0(coverage__V_81_81, (MR_String) "Coverage before call doesn\'t match calls port on call site");
                      }
#line 336 "coverage.m"
                      {
#line 336 "coverage.m"
                        coverage__After0_17 = coverage__after_coverage_1_f_0(coverage__Exits_44);
                      }
#line 332 "coverage.m"
                    }
#line 337 "coverage.m"
                  else
#line 338 "coverage.m"
                    {
#line 338 "coverage.m"
                      MR_String coverage__V_86_86;
#line 338 "coverage.m"
                      MR_String coverage__V_88_88;

#line 340 "coverage.m"
                      {
#line 340 "coverage.m"
                        coverage__V_88_88 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(coverage__RevGoalPath_15);
                      }
#line 339 "coverage.m"
                      {
#line 339 "coverage.m"
                        coverage__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t look up call site for port counts GP: ", coverage__V_88_88);
                      }
#line 338 "coverage.m"
                      {
#line 338 "coverage.m"
                        mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.goal_annotate_coverage\'/6", coverage__V_86_86);
#line 338 "coverage.m"
                        return;
                      }
#line 338 "coverage.m"
                    }
#line 337 "coverage.m"
                }
#line 342 "coverage.m"
              else
#line 354 "coverage.m"
                {
#line 354 "coverage.m"
                  coverage__propagate_detism_coverage_3_p_0(coverage__Detism_13, coverage__Before_9, &coverage__After0_17);
                }
#line 354 "coverage.m"
              coverage__STATE_VARIABLE_Array_95_95 = coverage__STATE_VARIABLE_Array_0_75;
#line 319 "coverage.m"
            }
#line 294 "coverage.m"
          else
#line 294 "coverage.m"
            if (((((MR_tag((MR_Word) coverage__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 308 "coverage.m"
              {
#line 308 "coverage.m"
                MR_Word coverage__Cond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 1)));
#line 308 "coverage.m"
                MR_Word coverage__Then_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 2)));
#line 308 "coverage.m"
                MR_Word coverage__Else_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 3)));

#line 309 "coverage.m"
                {
#line 309 "coverage.m"
                  coverage__ite_annotate_coverage_9_p_0(coverage__TypeInfo_for_Callee_164, coverage__Cond_24, coverage__Then_25, coverage__Else_26, coverage__Info_8, coverage__RevGoalPath_15, coverage__Before_9, &coverage__After0_17, coverage__STATE_VARIABLE_Array_0_75, &coverage__STATE_VARIABLE_Array_95_95);
                }
#line 308 "coverage.m"
              }
#line 294 "coverage.m"
            else
#line 294 "coverage.m"
              if (((((MR_tag((MR_Word) coverage__GoalExpr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 312 "coverage.m"
                {
#line 312 "coverage.m"
                  MR_Word coverage__NegGoal_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 1)));

#line 313 "coverage.m"
                  {
#line 313 "coverage.m"
                    coverage__negation_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_164, coverage__NegGoal_27, coverage__Info_8, coverage__Before_9, &coverage__After0_17, coverage__STATE_VARIABLE_Array_0_75, &coverage__STATE_VARIABLE_Array_95_95);
                  }
#line 312 "coverage.m"
                }
#line 294 "coverage.m"
              else
#line 315 "coverage.m"
                {
#line 315 "coverage.m"
                  MR_Word coverage__ScopedGoal_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 1)));
#line 315 "coverage.m"
                  MR_Word coverage__MaybeCut_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 2)));

#line 316 "coverage.m"
                  {
#line 316 "coverage.m"
                    coverage__scope_annotate_coverage_7_p_0(coverage__TypeInfo_for_Callee_164, coverage__ScopedGoal_28, coverage__Info_8, coverage__MaybeCut_29, coverage__Before_9, &coverage__After0_17, coverage__STATE_VARIABLE_Array_0_75, &coverage__STATE_VARIABLE_Array_95_95);
                  }
#line 315 "coverage.m"
                }
#line 363 "coverage.m"
    coverage__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 0)));
#line 363 "coverage.m"
    coverage__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 1)));
#line 363 "coverage.m"
    coverage__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 2)));
#line 363 "coverage.m"
    coverage__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 3)));
#line 363 "coverage.m"
    coverage__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 4)));
#line 363 "coverage.m"
    {
#line 363 "coverage.m"
      coverage__succeeded = mercury__map__search_3_p_0(coverage__TypeCtorInfo_166_166, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, coverage__V_96_96, ((MR_Box) (coverage__RevGoalPath_15)), &coverage__conv2_CoveragePoint_69);
    }
#line 363 "coverage.m"
    if (coverage__succeeded)
#line 363 "coverage.m"
      {
#line 363 "coverage.m"
        coverage__CoveragePoint_69 = ((MR_Word) coverage__conv2_CoveragePoint_69);
#line 363 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 363 "coverage.m"
      }
#line 369 "coverage.m"
    if (coverage__succeeded)
#line 366 "coverage.m"
      {
#line 366 "coverage.m"
        MR_Integer coverage__CoverageAfterCount_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_69, (MR_Integer) 0)));
#line 366 "coverage.m"
        MR_Word coverage__V_97_97;
#line 366 "coverage.m"
        MR_Word coverage__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_69, (MR_Integer) 1)));
#line 366 "coverage.m"
        MR_Word coverage__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_69, (MR_Integer) 2)));

#line 367 "coverage.m"
        {
#line 367 "coverage.m"
          coverage__V_97_97 = coverage__after_coverage_1_f_0(coverage__CoverageAfterCount_70);
        }
#line 367 "coverage.m"
        {
#line 367 "coverage.m"
          coverage__after_count_from_either_source_3_p_0(coverage__V_97_97, coverage__After0_17, coverage__After_10);
        }
#line 366 "coverage.m"
      }
#line 369 "coverage.m"
    else
#line 370 "coverage.m"
      *coverage__After_10 = coverage__After0_17;
#line 372 "coverage.m"
    {
#line 372 "coverage.m"
      coverage__GoalCoverage_73 = coverage__construct_before_after_coverage_2_f_0(coverage__Before_9, *coverage__After_10);
    }
#line 7944 "coverage.c"
    coverage__TypeCtorInfo_171_171 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0;
#line 373 "coverage.m"
    {
#line 373 "coverage.m"
      mdbcomp__goal_path__update_goal_attribute_4_p_0(coverage__TypeCtorInfo_171_171, coverage__GoalId_14, ((MR_Box) (coverage__GoalCoverage_73)), coverage__STATE_VARIABLE_Array_95_95, coverage__STATE_VARIABLE_Array_76);
    }
#line 383 "coverage.m"
    {
#line 383 "coverage.m"
      coverage__succeeded = coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_p_0(coverage__GoalCoverage_73);
    }
#line 385 "coverage.m"
    if (coverage__succeeded)
#line 384 "coverage.m"
      {
#line 384 "coverage.m"
      }
#line 385 "coverage.m"
    else
#line 386 "coverage.m"
      {
#line 386 "coverage.m"
        MR_String coverage__V_116_116;
#line 386 "coverage.m"
        MR_String coverage__V_122_122;
#line 386 "coverage.m"
        MR_String coverage__V_125_125;
#line 386 "coverage.m"
        MR_String coverage__V_128_128;
#line 386 "coverage.m"
        MR_Word coverage__V_129_129;
#line 386 "coverage.m"
        MR_String coverage__V_190_190;
#line 386 "coverage.m"
        MR_String coverage__V_192_192;
#line 386 "coverage.m"
        MR_String coverage__V_193_193;
#line 386 "coverage.m"
        MR_String coverage__V_195_195;
#line 386 "coverage.m"
        MR_String coverage__V_196_196;
#line 391 "coverage.m"
        MR_Word coverage__V_160_160;
#line 391 "coverage.m"
        MR_Word coverage__V_161_161;
#line 391 "coverage.m"
        MR_Word coverage__V_162_162;
#line 391 "coverage.m"
        MR_Word coverage__V_163_163;

#line 389 "coverage.m"
        {
#line 389 "coverage.m"
          coverage__V_122_122 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_171_171, ((MR_Box) (coverage__GoalCoverage_73)));
        }
#line 390 "coverage.m"
        {
#line 390 "coverage.m"
          coverage__V_125_125 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(coverage__RevGoalPath_15);
        }
#line 391 "coverage.m"
        coverage__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 0)));
#line 391 "coverage.m"
        coverage__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 1)));
#line 391 "coverage.m"
        coverage__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 2)));
#line 391 "coverage.m"
        coverage__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 3)));
#line 391 "coverage.m"
        coverage__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_8, (MR_Integer) 4)));
#line 391 "coverage.m"
        {
#line 391 "coverage.m"
          coverage__V_128_128 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0, ((MR_Box) (coverage__V_129_129)));
        }
#line 8020 "coverage.c"
        {
#line 8022 "coverage.c"
          coverage__V_190_190 = mercury__string__f_43_43_2_f_0(coverage__V_128_128, (MR_String) "\n");
        }
#line 8025 "coverage.c"
        {
#line 8027 "coverage.c"
          coverage__V_192_192 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tProc: ", coverage__V_190_190);
        }
#line 8030 "coverage.c"
        {
#line 8032 "coverage.c"
          coverage__V_193_193 = mercury__string__f_43_43_2_f_0(coverage__V_125_125, coverage__V_192_192);
        }
#line 8035 "coverage.c"
        {
#line 8037 "coverage.c"
          coverage__V_195_195 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tGoalPath: ", coverage__V_193_193);
        }
#line 8040 "coverage.c"
        {
#line 8042 "coverage.c"
          coverage__V_196_196 = mercury__string__f_43_43_2_f_0(coverage__V_122_122, coverage__V_195_195);
        }
#line 8045 "coverage.c"
        {
#line 8047 "coverage.c"
          coverage__V_116_116 = mercury__string__f_43_43_2_f_0((MR_String) "check_coverage_complete failed\n\tCoverage: ", coverage__V_196_196);
        }
#line 386 "coverage.m"
        {
#line 386 "coverage.m"
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.goal_annotate_coverage\'/6", coverage__V_116_116);
#line 386 "coverage.m"
          return;
        }
#line 386 "coverage.m"
      }
#line 393 "coverage.m"
    {
#line 393 "coverage.m"
      coverage__succeeded = coverage__check_coverage_regarding_detism_2_p_0(coverage__GoalCoverage_73, coverage__Detism_13);
    }
#line 395 "coverage.m"
    if (coverage__succeeded)
#line 394 "coverage.m"
      {
#line 394 "coverage.m"
      }
#line 395 "coverage.m"
    else
#line 396 "coverage.m"
      {
#line 396 "coverage.m"
        MR_String coverage__V_133_133;
#line 396 "coverage.m"
        MR_String coverage__V_137_137;
#line 396 "coverage.m"
        MR_String coverage__V_140_140;
#line 396 "coverage.m"
        MR_String coverage__V_186_186;
#line 396 "coverage.m"
        MR_String coverage__V_187_187;

#line 398 "coverage.m"
        {
#line 398 "coverage.m"
          coverage__V_137_137 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_171_171, ((MR_Box) (coverage__GoalCoverage_73)));
        }
#line 398 "coverage.m"
        {
#line 398 "coverage.m"
          coverage__V_140_140 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0, ((MR_Box) (coverage__Detism_13)));
        }
#line 8095 "coverage.c"
        {
#line 8097 "coverage.c"
          coverage__V_186_186 = mercury__string__f_43_43_2_f_0((MR_String) " ", coverage__V_140_140);
        }
#line 8100 "coverage.c"
        {
#line 8102 "coverage.c"
          coverage__V_187_187 = mercury__string__f_43_43_2_f_0(coverage__V_137_137, coverage__V_186_186);
        }
#line 8105 "coverage.c"
        {
#line 8107 "coverage.c"
          coverage__V_133_133 = mercury__string__f_43_43_2_f_0((MR_String) "check_coverage_regarding_detism failed: ", coverage__V_187_187);
        }
#line 396 "coverage.m"
        {
#line 396 "coverage.m"
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.goal_annotate_coverage\'/6", coverage__V_133_133);
#line 396 "coverage.m"
          return;
        }
#line 396 "coverage.m"
      }
#line 286 "coverage.m"
  }
#line 280 "coverage.m"
}

#line 181 "coverage.m"
static void MR_CALL 
coverage__coverage_point_arrays_to_list_2_6_p_0(
#line 181 "coverage.m"
  MR_Integer coverage__Num_7,
#line 181 "coverage.m"
  MR_Integer coverage__Max_8,
#line 181 "coverage.m"
  MR_ArrayPtr coverage__StaticArray_9,
#line 181 "coverage.m"
  MR_ArrayPtr coverage__DynamicArray_10,
#line 181 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_CoveragePoints_0_16,
#line 181 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_CoveragePoints_17)
#line 181 "coverage.m"
{
#line 194 "coverage.m"
  while (MR_TRUE)
#line 194 "coverage.m"
    {
#line 194 "coverage.m"
      /* tailcall optimized into a loop */
#line 194 "coverage.m"
      {
#line 194 "coverage.m"
        MR_bool coverage__succeeded = (coverage__Num_7 <= coverage__Max_8);

#line 194 "coverage.m"
        if (coverage__succeeded)
#line 188 "coverage.m"
          {
#line 188 "coverage.m"
            MR_Word coverage__GoalPath_12;
#line 188 "coverage.m"
            MR_Word coverage__CPType_13;
#line 188 "coverage.m"
            MR_Integer coverage__Count_14;
#line 188 "coverage.m"
            MR_Word coverage__CP_15;
#line 188 "coverage.m"
            MR_Word coverage__V_18_18;
#line 188 "coverage.m"
            MR_Word coverage__STATE_VARIABLE_CoveragePoints_19_19;
#line 188 "coverage.m"
            MR_Integer coverage__V_20_20;
#line 188 "coverage.m"
            MR_Box coverage__conv0_V_18_18;
#line 189 "coverage.m"
            MR_Box coverage__conv1_Count_14;

#line 188 "coverage.m"
            {
#line 188 "coverage.m"
              mercury__array__lookup_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_ArrayPtr) coverage__StaticArray_9, coverage__Num_7, &coverage__conv0_V_18_18);
            }
#line 188 "coverage.m"
            coverage__V_18_18 = ((MR_Word) coverage__conv0_V_18_18);
#line 188 "coverage.m"
            coverage__GoalPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__V_18_18, (MR_Integer) 0)));
#line 188 "coverage.m"
            coverage__CPType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__V_18_18, (MR_Integer) 1)));
#line 189 "coverage.m"
            {
#line 189 "coverage.m"
              mercury__array__lookup_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) coverage__DynamicArray_10, coverage__Num_7, &coverage__conv1_Count_14);
            }
#line 189 "coverage.m"
            coverage__Count_14 = ((MR_Integer) coverage__conv1_Count_14);
#line 190 "coverage.m"
            {
#line 190 "coverage.m"
              coverage__CP_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 190 "coverage.m"
              MR_hl_field(MR_mktag(0), coverage__CP_15, 0) = ((MR_Box) (coverage__Count_14));
#line 190 "coverage.m"
              MR_hl_field(MR_mktag(0), coverage__CP_15, 1) = ((MR_Box) (coverage__GoalPath_12));
#line 190 "coverage.m"
              MR_hl_field(MR_mktag(0), coverage__CP_15, 2) = ((MR_Box) (coverage__CPType_13));
#line 190 "coverage.m"
            }
#line 191 "coverage.m"
            {
#line 191 "coverage.m"
              coverage__STATE_VARIABLE_CoveragePoints_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "coverage.m"
              MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_CoveragePoints_19_19, 0) = ((MR_Box) (coverage__CP_15));
#line 191 "coverage.m"
              MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_CoveragePoints_19_19, 1) = ((MR_Box) (coverage__STATE_VARIABLE_CoveragePoints_0_16));
#line 191 "coverage.m"
            }
#line 192 "coverage.m"
            coverage__V_20_20 = (coverage__Num_7 + (MR_Integer) 1);
#line 192 "coverage.m"
            /* direct tailcall eliminated */
#line 192 "coverage.m"
            {
#line 192 "coverage.m"
              MR_Integer coverage__Num__tmp_copy_7 = coverage__V_20_20;
#line 192 "coverage.m"
              MR_Word coverage__STATE_VARIABLE_CoveragePoints_0__tmp_copy_16 = coverage__STATE_VARIABLE_CoveragePoints_19_19;

#line 192 "coverage.m"
              coverage__STATE_VARIABLE_CoveragePoints_0_16 = coverage__STATE_VARIABLE_CoveragePoints_0__tmp_copy_16;
#line 192 "coverage.m"
              coverage__Num_7 = coverage__Num__tmp_copy_7;
#line 192 "coverage.m"
            }
#line 192 "coverage.m"
            continue;
#line 188 "coverage.m"
          }
#line 194 "coverage.m"
        else
#line 192 "coverage.m"
          *coverage__STATE_VARIABLE_CoveragePoints_17 = coverage__STATE_VARIABLE_CoveragePoints_0_16;
#line 194 "coverage.m"
      }
#line 194 "coverage.m"
      break;
#line 194 "coverage.m"
    }
#line 181 "coverage.m"
}

#line 108 "coverage.m"
void MR_CALL 
coverage__add_coverage_point_to_map_5_p_0(
#line 108 "coverage.m"
  MR_Word coverage__CoveragePoint_6,
#line 108 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SolnsMap_0_12,
#line 108 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SolnsMap_13,
#line 108 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_BranchMap_0_14,
#line 108 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_BranchMap_15)
#line 108 "coverage.m"
{
#line 1308 "coverage.m"
  {
#line 1308 "coverage.m"
    MR_bool coverage__succeeded;
#line 1308 "coverage.m"
    MR_Word coverage__GoalPath_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_6, (MR_Integer) 1)));
#line 1308 "coverage.m"
    MR_Word coverage__CPType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_6, (MR_Integer) 2)));
#line 1309 "coverage.m"
    MR_Integer coverage__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_6, (MR_Integer) 0)));

#line 1313 "coverage.m"
    if ((coverage__CPType_11 == ((int) MR_cp_type_branch_arm)))
#line 1314 "coverage.m"
      {
#line 1315 "coverage.m"
        {
#line 1315 "coverage.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, ((MR_Box) (coverage__GoalPath_10)), ((MR_Box) (coverage__CoveragePoint_6)), coverage__STATE_VARIABLE_BranchMap_0_14, coverage__STATE_VARIABLE_BranchMap_15);
        }
#line 1315 "coverage.m"
        *coverage__STATE_VARIABLE_SolnsMap_13 = coverage__STATE_VARIABLE_SolnsMap_0_12;
#line 1314 "coverage.m"
      }
#line 1313 "coverage.m"
    else
#line 1311 "coverage.m"
      {
#line 1312 "coverage.m"
        {
#line 1312 "coverage.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, ((MR_Box) (coverage__GoalPath_10)), ((MR_Box) (coverage__CoveragePoint_6)), coverage__STATE_VARIABLE_SolnsMap_0_12, coverage__STATE_VARIABLE_SolnsMap_13);
        }
#line 1312 "coverage.m"
        *coverage__STATE_VARIABLE_BranchMap_15 = coverage__STATE_VARIABLE_BranchMap_0_14;
#line 1311 "coverage.m"
      }
#line 1308 "coverage.m"
  }
#line 108 "coverage.m"
}

#line 254 "coverage.m"
static MR_bool MR_CALL 
coverage__goal_annotate_with_coverage_9_p_0_1(
#line 254 "coverage.m"
  MR_Box coverage__closure_arg)
#line 254 "coverage.m"
{
#line 254 "coverage.m"
  {
#line 254 "coverage.m"
    MR_bool coverage__succeeded;
#line 254 "coverage.m"
    MR_Box coverage__closure = coverage__closure_arg;

#line 254 "coverage.m"
    {
#line 254 "coverage.m"
      return coverage__succeeded = coverage__IntroducedFrom__pred__goal_annotate_with_coverage__254__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 4))));
    }
#line 254 "coverage.m"
    return coverage__succeeded;
#line 254 "coverage.m"
  }
#line 254 "coverage.m"
}

#line 95 "coverage.m"
void MR_CALL 
coverage__goal_annotate_with_coverage_9_p_0(
#line 95 "coverage.m"
  MR_Word coverage__TypeInfo_for_T_31,
#line 95 "coverage.m"
  MR_Word coverage__ProcLabel_10,
#line 95 "coverage.m"
  MR_Word coverage__GoalRep_11,
#line 95 "coverage.m"
  MR_Word coverage__OwnProf_12,
#line 95 "coverage.m"
  MR_Word coverage__CallSites_13,
#line 95 "coverage.m"
  MR_Word coverage__SolnsCoveragePoints_14,
#line 95 "coverage.m"
  MR_Word coverage__BranchCoveragePoints_15,
#line 95 "coverage.m"
  MR_Word coverage__ContainingGoalMap_16,
#line 95 "coverage.m"
  MR_Word coverage__LastGoalId_17,
#line 95 "coverage.m"
  MR_Word * coverage__CoverageArray_18)
#line 95 "coverage.m"
{
#line 244 "coverage.m"
  {
#line 244 "coverage.m"
    MR_bool coverage__succeeded;
#line 244 "coverage.m"
    MR_Integer coverage__Calls_19;
#line 244 "coverage.m"
    MR_Integer coverage__Exits_20;
#line 244 "coverage.m"
    MR_Word coverage__Before_21;
#line 244 "coverage.m"
    MR_Word coverage__GoalPathMap_22;
#line 244 "coverage.m"
    MR_Word coverage__CoverageReference_23;
#line 244 "coverage.m"
    MR_Word coverage__CoverageArray0_24;
#line 244 "coverage.m"
    MR_Word coverage__After_25;
#line 244 "coverage.m"
    MR_Word coverage__V_26_26;
#line 244 "coverage.m"
    MR_Word coverage__V_28_28;

#line 245 "coverage.m"
    {
#line 245 "coverage.m"
      coverage__Calls_19 = measurements__calls_1_f_0(coverage__OwnProf_12);
    }
#line 246 "coverage.m"
    {
#line 246 "coverage.m"
      coverage__Exits_20 = measurements__exits_1_f_0(coverage__OwnProf_12);
    }
#line 1300 "coverage.m"
    coverage__succeeded = (coverage__Calls_19 == (MR_Integer) 0);
#line 1299 "coverage.m"
    if (coverage__succeeded)
#line 1301 "coverage.m"
      coverage__Before_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1299 "coverage.m"
    else
#line 1303 "coverage.m"
      {
#line 1303 "coverage.m"
        coverage__Before_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "coverage.m"
        MR_hl_field(MR_mktag(1), coverage__Before_21, 0) = ((MR_Box) (coverage__Calls_19));
#line 1303 "coverage.m"
      }
#line 248 "coverage.m"
    {
#line 248 "coverage.m"
      coverage__GoalPathMap_22 = mdbcomp__goal_path__create_reverse_goal_path_map_1_f_0(coverage__ContainingGoalMap_16);
    }
#line 249 "coverage.m"
    {
#line 249 "coverage.m"
      coverage__CoverageReference_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 249 "coverage.m"
      MR_hl_field(MR_mktag(0), coverage__CoverageReference_23, 0) = ((MR_Box) (coverage__ProcLabel_10));
#line 249 "coverage.m"
      MR_hl_field(MR_mktag(0), coverage__CoverageReference_23, 1) = ((MR_Box) (coverage__CallSites_13));
#line 249 "coverage.m"
      MR_hl_field(MR_mktag(0), coverage__CoverageReference_23, 2) = ((MR_Box) (coverage__SolnsCoveragePoints_14));
#line 249 "coverage.m"
      MR_hl_field(MR_mktag(0), coverage__CoverageReference_23, 3) = ((MR_Box) (coverage__BranchCoveragePoints_15));
#line 249 "coverage.m"
      MR_hl_field(MR_mktag(0), coverage__CoverageReference_23, 4) = ((MR_Box) (coverage__GoalPathMap_22));
#line 249 "coverage.m"
    }
#line 251 "coverage.m"
    {
#line 251 "coverage.m"
      coverage__CoverageArray0_24 = mdbcomp__goal_path__create_goal_id_array_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, coverage__LastGoalId_17);
    }
#line 252 "coverage.m"
    {
#line 252 "coverage.m"
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_T_31, coverage__GoalRep_11, coverage__CoverageReference_23, coverage__Before_21, &coverage__After_25, coverage__CoverageArray0_24, coverage__CoverageArray_18);
    }
#line 1291 "coverage.m"
    coverage__succeeded = (coverage__Exits_20 == (MR_Integer) 0);
#line 1290 "coverage.m"
    if (coverage__succeeded)
#line 1292 "coverage.m"
      coverage__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1290 "coverage.m"
    else
#line 1294 "coverage.m"
      {
#line 1294 "coverage.m"
        coverage__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "coverage.m"
        MR_hl_field(MR_mktag(1), coverage__V_28_28, 0) = ((MR_Box) (coverage__Exits_20));
#line 1294 "coverage.m"
      }
#line 254 "coverage.m"
    {
#line 254 "coverage.m"
      coverage__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 254 "coverage.m"
      MR_hl_field(MR_mktag(0), coverage__V_26_26, 0) = ((MR_Box) (&coverage_scalar_common_3[0]));
#line 254 "coverage.m"
      MR_hl_field(MR_mktag(0), coverage__V_26_26, 1) = ((MR_Box) (coverage__goal_annotate_with_coverage_9_p_0_1));
#line 254 "coverage.m"
      MR_hl_field(MR_mktag(0), coverage__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 254 "coverage.m"
      MR_hl_field(MR_mktag(0), coverage__V_26_26, 3) = ((MR_Box) (coverage__After_25));
#line 254 "coverage.m"
      MR_hl_field(MR_mktag(0), coverage__V_26_26, 4) = ((MR_Box) (coverage__V_28_28));
#line 254 "coverage.m"
    }
#line 254 "coverage.m"
    {
#line 254 "coverage.m"
      mercury__require__require_2_p_0(coverage__V_26_26, (MR_String) "Coverage after procedure not equal with exit count of procedure");
#line 254 "coverage.m"
      return;
    }
#line 244 "coverage.m"
  }
#line 95 "coverage.m"
}

#line 87 "coverage.m"
void MR_CALL 
coverage__procrep_annotate_with_coverage_8_p_0(
#line 87 "coverage.m"
  MR_Word coverage__TypeInfo_for_T_26,
#line 87 "coverage.m"
  MR_Word coverage__ProcRep_9,
#line 87 "coverage.m"
  MR_Word coverage__OwnProf_10,
#line 87 "coverage.m"
  MR_Word coverage__CallSites_11,
#line 87 "coverage.m"
  MR_Word coverage__SolnsCoveragePoints_12,
#line 87 "coverage.m"
  MR_Word coverage__BranchCoveragePoints_13,
#line 87 "coverage.m"
  MR_Word coverage__ContainingGoalMap_14,
#line 87 "coverage.m"
  MR_Word coverage__LastGoalId_15,
#line 87 "coverage.m"
  MR_Word * coverage__CoverageArray_16)
#line 87 "coverage.m"
{
#line 235 "coverage.m"
  {
#line 235 "coverage.m"
    MR_bool coverage__succeeded;
#line 235 "coverage.m"
    MR_Word coverage__GoalRep_17;
#line 235 "coverage.m"
    MR_Word coverage__ProcLabel_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__ProcRep_9, (MR_Integer) 0)));
#line 235 "coverage.m"
    MR_Word coverage__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__ProcRep_9, (MR_Integer) 1)));
#line 236 "coverage.m"
    MR_Word coverage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__V_19_19, (MR_Integer) 0)));
#line 236 "coverage.m"
    MR_Word coverage__V_22_22;
#line 236 "coverage.m"
    MR_Word coverage__V_23_23;
#line 236 "coverage.m"
    MR_Word coverage__V_24_24;

#line 236 "coverage.m"
    coverage__GoalRep_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__V_19_19, (MR_Integer) 1)));
#line 236 "coverage.m"
    coverage__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__V_19_19, (MR_Integer) 2)));
#line 236 "coverage.m"
    coverage__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__V_19_19, (MR_Integer) 3)));
#line 236 "coverage.m"
    coverage__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__V_19_19, (MR_Integer) 4)));
#line 238 "coverage.m"
    {
#line 238 "coverage.m"
      coverage__goal_annotate_with_coverage_9_p_0(coverage__TypeInfo_for_T_26, coverage__ProcLabel_18, coverage__GoalRep_17, coverage__OwnProf_10, coverage__CallSites_11, coverage__SolnsCoveragePoints_12, coverage__BranchCoveragePoints_13, coverage__ContainingGoalMap_14, coverage__LastGoalId_15, coverage__CoverageArray_16);
#line 238 "coverage.m"
      return;
    }
#line 235 "coverage.m"
  }
#line 87 "coverage.m"
}

#line 80 "coverage.m"
void MR_CALL 
coverage__coverage_point_arrays_to_list_3_p_0(
#line 80 "coverage.m"
  MR_ArrayPtr coverage__StaticArray_4,
#line 80 "coverage.m"
  MR_ArrayPtr coverage__DynamicArray_5,
#line 80 "coverage.m"
  MR_Word * coverage__CoveragePoints_6)
#line 80 "coverage.m"
{
#line 171 "coverage.m"
  {
#line 171 "coverage.m"
    MR_bool coverage__succeeded;
#line 171 "coverage.m"
    MR_Integer coverage__Min_7;
#line 171 "coverage.m"
    MR_Integer coverage__Max_8;
#line 173 "coverage.m"
    MR_Integer coverage__V_15_15;
#line 173 "coverage.m"
    MR_Integer coverage__V_16_16;

#line 172 "coverage.m"
    {
#line 172 "coverage.m"
      mercury__array__bounds_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_ArrayPtr) coverage__StaticArray_4, &coverage__Min_7, &coverage__Max_8);
    }
#line 173 "coverage.m"
    {
#line 173 "coverage.m"
      mercury__array__bounds_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_ArrayPtr) coverage__DynamicArray_5, &coverage__V_15_15, &coverage__V_16_16);
    }
#line 173 "coverage.m"
    coverage__succeeded = (coverage__Min_7 == coverage__V_15_15);
#line 173 "coverage.m"
    if (coverage__succeeded)
#line 173 "coverage.m"
      coverage__succeeded = (coverage__Max_8 == coverage__V_16_16);
#line 175 "coverage.m"
    if (coverage__succeeded)
#line 174 "coverage.m"
      {
#line 174 "coverage.m"
      }
#line 175 "coverage.m"
    else
#line 176 "coverage.m"
      {
#line 176 "coverage.m"
        {
#line 176 "coverage.m"
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.coverage_point_arrays_to_list\'/3", (MR_String) "bounds do not match");
#line 176 "coverage.m"
          return;
        }
#line 176 "coverage.m"
      }
#line 178 "coverage.m"
    {
#line 178 "coverage.m"
      coverage__coverage_point_arrays_to_list_2_6_p_0(coverage__Min_7, coverage__Max_8, coverage__StaticArray_4, coverage__DynamicArray_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), coverage__CoveragePoints_6);
#line 178 "coverage.m"
      return;
    }
#line 171 "coverage.m"
  }
#line 80 "coverage.m"
}

#line 53 "coverage.m"
void MR_CALL 
coverage__get_coverage_after_det_2_p_0(
#line 53 "coverage.m"
  MR_Word coverage__Coverage_3,
#line 53 "coverage.m"
  MR_Integer * coverage__After_4)
#line 53 "coverage.m"
{
#line 160 "coverage.m"
  {
#line 160 "coverage.m"
    MR_bool coverage__succeeded;
#line 160 "coverage.m"
    MR_Integer coverage__AfterPrime_5;

#line 137 "coverage.m"
    if ((coverage__Coverage_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 138 "coverage.m"
      {
#line 138 "coverage.m"
        coverage__AfterPrime_5 = (MR_Integer) 0;
#line 138 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 138 "coverage.m"
      }
#line 137 "coverage.m"
    else
#line 137 "coverage.m"
      if (((MR_tag((MR_Word) coverage__Coverage_3)) == (MR_mktag((MR_Integer) 2))))
#line 137 "coverage.m"
        {
#line 137 "coverage.m"
          MR_Integer coverage__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 0)));

#line 137 "coverage.m"
          coverage__AfterPrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 1)));
#line 137 "coverage.m"
          coverage__succeeded = MR_TRUE;
#line 137 "coverage.m"
        }
#line 137 "coverage.m"
      else
#line 137 "coverage.m"
        if (((MR_tag((MR_Word) coverage__Coverage_3)) == (MR_mktag((MR_Integer) 1))))
#line 139 "coverage.m"
          {
#line 139 "coverage.m"
            coverage__AfterPrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_3, (MR_Integer) 0)));
#line 139 "coverage.m"
            coverage__succeeded = MR_TRUE;
#line 139 "coverage.m"
          }
#line 137 "coverage.m"
        else
#line 137 "coverage.m"
          if (((((MR_tag((MR_Word) coverage__Coverage_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 140 "coverage.m"
            {
#line 140 "coverage.m"
              coverage__AfterPrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 1)));
#line 140 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 140 "coverage.m"
            }
#line 137 "coverage.m"
          else
#line 137 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 160 "coverage.m"
    if (coverage__succeeded)
#line 159 "coverage.m"
      *coverage__After_4 = coverage__AfterPrime_5;
#line 160 "coverage.m"
    else
#line 166 "coverage.m"
      {
#line 167 "coverage.m"
        {
#line 167 "coverage.m"
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.complete_coverage_error\'/0", (MR_String) "Expected complete coverage information");
#line 167 "coverage.m"
          return;
        }
#line 166 "coverage.m"
      }
#line 160 "coverage.m"
  }
#line 53 "coverage.m"
}

#line 51 "coverage.m"
void MR_CALL 
coverage__get_coverage_before_and_after_det_3_p_0(
#line 51 "coverage.m"
  MR_Word coverage__Coverage_4,
#line 51 "coverage.m"
  MR_Integer * coverage__Before_5,
#line 51 "coverage.m"
  MR_Integer * coverage__After_6)
#line 51 "coverage.m"
{
#line 153 "coverage.m"
  {
#line 153 "coverage.m"
    MR_bool coverage__succeeded;
#line 153 "coverage.m"
    MR_Integer coverage__BeforePrime_7;
#line 153 "coverage.m"
    MR_Integer coverage__AfterPrime_8;

#line 133 "coverage.m"
    if ((coverage__Coverage_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 135 "coverage.m"
      {
#line 135 "coverage.m"
        coverage__BeforePrime_7 = (MR_Integer) 0;
#line 135 "coverage.m"
        coverage__AfterPrime_8 = (MR_Integer) 0;
#line 135 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 135 "coverage.m"
      }
#line 133 "coverage.m"
    else
#line 133 "coverage.m"
      if (((MR_tag((MR_Word) coverage__Coverage_4)) == (MR_mktag((MR_Integer) 2))))
#line 133 "coverage.m"
        {
#line 133 "coverage.m"
          coverage__BeforePrime_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_4, (MR_Integer) 0)));
#line 133 "coverage.m"
          coverage__AfterPrime_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_4, (MR_Integer) 1)));
#line 133 "coverage.m"
          coverage__succeeded = MR_TRUE;
#line 133 "coverage.m"
        }
#line 133 "coverage.m"
      else
#line 133 "coverage.m"
        if (((MR_tag((MR_Word) coverage__Coverage_4)) == (MR_mktag((MR_Integer) 1))))
#line 134 "coverage.m"
          {
#line 134 "coverage.m"
            coverage__BeforePrime_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_4, (MR_Integer) 0)));
#line 134 "coverage.m"
            coverage__AfterPrime_8 = coverage__BeforePrime_7;
#line 134 "coverage.m"
            coverage__succeeded = MR_TRUE;
#line 134 "coverage.m"
          }
#line 133 "coverage.m"
        else
#line 133 "coverage.m"
          coverage__succeeded = MR_FALSE;
#line 153 "coverage.m"
    if (coverage__succeeded)
#line 151 "coverage.m"
      {
#line 151 "coverage.m"
        *coverage__Before_5 = coverage__BeforePrime_7;
#line 152 "coverage.m"
        *coverage__After_6 = coverage__AfterPrime_8;
#line 151 "coverage.m"
      }
#line 153 "coverage.m"
    else
#line 166 "coverage.m"
      {
#line 167 "coverage.m"
        {
#line 167 "coverage.m"
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.complete_coverage_error\'/0", (MR_String) "Expected complete coverage information");
#line 167 "coverage.m"
          return;
        }
#line 166 "coverage.m"
      }
#line 153 "coverage.m"
  }
#line 51 "coverage.m"
}

#line 50 "coverage.m"
void MR_CALL 
coverage__get_coverage_before_det_2_p_0(
#line 50 "coverage.m"
  MR_Word coverage__Coverage_3,
#line 50 "coverage.m"
  MR_Integer * coverage__Before_4)
#line 50 "coverage.m"
{
#line 145 "coverage.m"
  {
#line 145 "coverage.m"
    MR_bool coverage__succeeded;
#line 145 "coverage.m"
    MR_Integer coverage__BeforePrime_5;

#line 128 "coverage.m"
    if ((coverage__Coverage_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 129 "coverage.m"
      {
#line 129 "coverage.m"
        coverage__BeforePrime_5 = (MR_Integer) 0;
#line 129 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 129 "coverage.m"
      }
#line 128 "coverage.m"
    else
#line 128 "coverage.m"
      if (((MR_tag((MR_Word) coverage__Coverage_3)) == (MR_mktag((MR_Integer) 2))))
#line 128 "coverage.m"
        {
#line 128 "coverage.m"
          MR_Integer coverage__V_7_7;

#line 128 "coverage.m"
          coverage__BeforePrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 0)));
#line 128 "coverage.m"
          coverage__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 1)));
#line 128 "coverage.m"
          coverage__succeeded = MR_TRUE;
#line 128 "coverage.m"
        }
#line 128 "coverage.m"
      else
#line 128 "coverage.m"
        if (((MR_tag((MR_Word) coverage__Coverage_3)) == (MR_mktag((MR_Integer) 1))))
#line 130 "coverage.m"
          {
#line 130 "coverage.m"
            coverage__BeforePrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_3, (MR_Integer) 0)));
#line 130 "coverage.m"
            coverage__succeeded = MR_TRUE;
#line 130 "coverage.m"
          }
#line 128 "coverage.m"
        else
#line 128 "coverage.m"
          if (((((MR_tag((MR_Word) coverage__Coverage_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 131 "coverage.m"
            {
#line 131 "coverage.m"
              coverage__BeforePrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 1)));
#line 131 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 131 "coverage.m"
            }
#line 128 "coverage.m"
          else
#line 128 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 145 "coverage.m"
    if (coverage__succeeded)
#line 144 "coverage.m"
      *coverage__Before_4 = coverage__BeforePrime_5;
#line 145 "coverage.m"
    else
#line 166 "coverage.m"
      {
#line 167 "coverage.m"
        {
#line 167 "coverage.m"
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.complete_coverage_error\'/0", (MR_String) "Expected complete coverage information");
#line 167 "coverage.m"
          return;
        }
#line 166 "coverage.m"
      }
#line 145 "coverage.m"
  }
#line 50 "coverage.m"
}

#line 48 "coverage.m"
MR_bool MR_CALL 
coverage__get_coverage_after_2_p_0(
#line 48 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 48 "coverage.m"
  MR_Integer * coverage__HeadVar__2_2)
#line 48 "coverage.m"
{
#line 137 "coverage.m"
  {
#line 137 "coverage.m"
    MR_bool coverage__succeeded;

#line 137 "coverage.m"
    if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 138 "coverage.m"
      {
#line 138 "coverage.m"
        *coverage__HeadVar__2_2 = (MR_Integer) 0;
#line 138 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 138 "coverage.m"
      }
#line 137 "coverage.m"
    else
#line 137 "coverage.m"
      if (((MR_tag((MR_Word) coverage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 137 "coverage.m"
        {
#line 137 "coverage.m"
          MR_Integer coverage__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 0)));

#line 137 "coverage.m"
          *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 137 "coverage.m"
          coverage__succeeded = MR_TRUE;
#line 137 "coverage.m"
        }
#line 137 "coverage.m"
      else
#line 137 "coverage.m"
        if (((MR_tag((MR_Word) coverage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 139 "coverage.m"
          {
#line 139 "coverage.m"
            *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 139 "coverage.m"
            coverage__succeeded = MR_TRUE;
#line 139 "coverage.m"
          }
#line 137 "coverage.m"
        else
#line 137 "coverage.m"
          if (((((MR_tag((MR_Word) coverage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 140 "coverage.m"
            {
#line 140 "coverage.m"
              *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 140 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 140 "coverage.m"
            }
#line 137 "coverage.m"
          else
#line 137 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 137 "coverage.m"
    return coverage__succeeded;
#line 137 "coverage.m"
  }
#line 48 "coverage.m"
}

#line 46 "coverage.m"
MR_bool MR_CALL 
coverage__get_coverage_before_and_after_3_p_0(
#line 46 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 46 "coverage.m"
  MR_Integer * coverage__HeadVar__2_2,
#line 46 "coverage.m"
  MR_Integer * coverage__HeadVar__3_3)
#line 46 "coverage.m"
{
#line 133 "coverage.m"
  {
#line 133 "coverage.m"
    MR_bool coverage__succeeded;

#line 133 "coverage.m"
    if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 135 "coverage.m"
      {
#line 135 "coverage.m"
        *coverage__HeadVar__2_2 = (MR_Integer) 0;
#line 135 "coverage.m"
        *coverage__HeadVar__3_3 = (MR_Integer) 0;
#line 135 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 135 "coverage.m"
      }
#line 133 "coverage.m"
    else
#line 133 "coverage.m"
      if (((MR_tag((MR_Word) coverage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 133 "coverage.m"
        {
#line 133 "coverage.m"
          *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 133 "coverage.m"
          *coverage__HeadVar__3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "coverage.m"
          coverage__succeeded = MR_TRUE;
#line 133 "coverage.m"
        }
#line 133 "coverage.m"
      else
#line 133 "coverage.m"
        if (((MR_tag((MR_Word) coverage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 134 "coverage.m"
          {
#line 134 "coverage.m"
            *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 134 "coverage.m"
            *coverage__HeadVar__3_3 = *coverage__HeadVar__2_2;
#line 134 "coverage.m"
            coverage__succeeded = MR_TRUE;
#line 134 "coverage.m"
          }
#line 133 "coverage.m"
        else
#line 133 "coverage.m"
          coverage__succeeded = MR_FALSE;
#line 133 "coverage.m"
    return coverage__succeeded;
#line 133 "coverage.m"
  }
#line 46 "coverage.m"
}

#line 45 "coverage.m"
MR_bool MR_CALL 
coverage__get_coverage_before_2_p_0(
#line 45 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 45 "coverage.m"
  MR_Integer * coverage__HeadVar__2_2)
#line 45 "coverage.m"
{
#line 128 "coverage.m"
  {
#line 128 "coverage.m"
    MR_bool coverage__succeeded;

#line 128 "coverage.m"
    if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 129 "coverage.m"
      {
#line 129 "coverage.m"
        *coverage__HeadVar__2_2 = (MR_Integer) 0;
#line 129 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 129 "coverage.m"
      }
#line 128 "coverage.m"
    else
#line 128 "coverage.m"
      if (((MR_tag((MR_Word) coverage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 128 "coverage.m"
        {
#line 128 "coverage.m"
          MR_Integer coverage__V_4_4;

#line 128 "coverage.m"
          *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 128 "coverage.m"
          coverage__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 128 "coverage.m"
          coverage__succeeded = MR_TRUE;
#line 128 "coverage.m"
        }
#line 128 "coverage.m"
      else
#line 128 "coverage.m"
        if (((MR_tag((MR_Word) coverage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 130 "coverage.m"
          {
#line 130 "coverage.m"
            *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "coverage.m"
            coverage__succeeded = MR_TRUE;
#line 130 "coverage.m"
          }
#line 128 "coverage.m"
        else
#line 128 "coverage.m"
          if (((((MR_tag((MR_Word) coverage__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 131 "coverage.m"
            {
#line 131 "coverage.m"
              *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 131 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 131 "coverage.m"
            }
#line 128 "coverage.m"
          else
#line 128 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 128 "coverage.m"
    return coverage__succeeded;
#line 128 "coverage.m"
  }
#line 45 "coverage.m"
}

void mercury__coverage__init(void)
{
}

void mercury__coverage__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_coverage_after_0);
	MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_coverage_before_0);
	MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_coverage_info_0);
	MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_coverage_point_0);
	MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_coverage_reference_info_1);
	MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_sum_coverage_after_0);
	MR_register_type_ctor_info(&coverage__coverage__type_ctor_info_sum_coverage_before_0);
}

void mercury__coverage__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module coverage. */
