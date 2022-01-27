/*
** Automatically generated from `coverage.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 89 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__goal_path__pti_goal_attr_array_1__plain_coverage__type_ctor_info_coverage_info_0;

#line 92 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 95 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 98 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_0;

#line 101 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_1;

#line 104 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_after_0_2[1];

#line 107 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_2;

#line 110 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_0[2];

#line 113 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_1[1];

#line 116 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_after_0[2];

#line 119 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_after_0[3];

#line 122 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_after_0[3];

#line 125 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_0;

#line 128 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_1;

#line 131 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_before_0_2[1];

#line 134 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_2;

#line 137 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_0[2];

#line 140 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_1[1];

#line 143 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_before_0[2];

#line 146 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_before_0[3];

#line 149 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_before_0[3];

#line 152 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_0;

#line 155 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_1;

#line 158 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_2[1];

#line 161 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_2;

#line 164 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_3[2];

#line 167 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_3;

#line 170 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_4[1];

#line 173 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_4;

#line 176 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_5[1];

#line 179 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_5;

#line 182 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_0[2];

#line 185 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_1[1];

#line 188 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_2[1];

#line 191 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_3[2];

#line 194 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_info_0[4];

#line 197 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_info_0[6];

#line 200 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_info_0[6];

#line 203 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_point_0_0[3];

#line 206 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_point_0_0;

#line 209 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_point_0_0[1];

#line 212 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_point_0[1];

#line 215 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_point_0[1];

#line 218 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_point_0[1];

#line 221 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1;

#line 224 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct2 coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1;

#line 227 "coverage.c"
static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0;

#line 230 "coverage.c"
static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 233 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_reference_info_1_0[5];

#line 236 "coverage.c"
static const MR_ConstString coverage__coverage__field_names_coverage_reference_info_1_0[5];

#line 239 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_reference_info_1_0;

#line 242 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_reference_info_1_0[1];

#line 245 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_reference_info_1[1];

#line 248 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_reference_info_1[1];

#line 251 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_reference_info_1[1];

#line 254 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_0;

#line 257 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_1;

#line 260 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_after_0_2[1];

#line 263 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_2;

#line 266 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_0[2];

#line 269 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_1[1];

#line 272 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_after_0[2];

#line 275 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_after_0[3];

#line 278 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_after_0[3];

#line 281 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_0;

#line 284 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_1;

#line 287 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_before_0_2[1];

#line 290 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_2;

#line 293 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_0[2];

#line 296 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_1[1];

#line 299 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_before_0[2];

#line 302 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_before_0[3];

#line 305 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_before_0[3];

#line 308 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0_10001(
#line 311 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 313 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 316 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_after_0_0_10001(
#line 319 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 321 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 323 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 326 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0_10001(
#line 329 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 331 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 334 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_before_0_0_10001(
#line 337 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 339 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 341 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 344 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_info_0_0_10001(
#line 347 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 349 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 352 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_info_0_0_10001(
#line 355 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 357 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 359 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 362 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_point_0_0_10001(
#line 365 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 367 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 370 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_point_0_0_10001(
#line 373 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 375 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 377 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 380 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0_10001(
#line 383 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 385 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 387 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 390 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0_10001(
#line 393 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 395 "coverage.c"
  MR_Box * coverage__wrapper_arg_2,
#line 397 "coverage.c"
  MR_Box coverage__wrapper_arg_3,
#line 399 "coverage.c"
  MR_Box coverage__wrapper_arg_4);

#line 402 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0_10001(
#line 405 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 407 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 410 "coverage.c"
static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0_10001(
#line 413 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 415 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 417 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 420 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0_10001(
#line 423 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 425 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 428 "coverage.c"
static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0_10001(
#line 431 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 433 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 435 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 1022 "coverage.m"
static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_p_0(
#line 1022 "coverage.m"
  MR_Word coverage__HeadVar__1_1);

#line 971 "coverage.m"
static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_p_0(
#line 971 "coverage.m"
  MR_Word coverage__Before_10,
#line 971 "coverage.m"
  MR_Word coverage__After_11,
#line 971 "coverage.m"
  MR_Word coverage__BeforeCond_12,
#line 971 "coverage.m"
  MR_Word coverage__AfterCond_13,
#line 971 "coverage.m"
  MR_Word coverage__BeforeThen_14,
#line 971 "coverage.m"
  MR_Word coverage__AfterThen_15,
#line 971 "coverage.m"
  MR_Word coverage__AfterElse_17,
#line 971 "coverage.m"
  MR_Word coverage__CondDetism_18);

#line 752 "coverage.m"
static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(
#line 752 "coverage.m"
  MR_Word coverage__Info_4,
#line 752 "coverage.m"
  MR_Word coverage__RevGoalPath_5,
#line 752 "coverage.m"
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

#line 1152 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1152__1_2_p_0(
#line 1152 "coverage.m"
  MR_Integer coverage__HeadVar__1_12,
#line 1152 "coverage.m"
  MR_Integer coverage__AfterCountB_18);

#line 1141 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1141__1_2_p_0(
#line 1141 "coverage.m"
  MR_Integer coverage__AfterCountA_8,
#line 1141 "coverage.m"
  MR_Integer coverage__HeadVar__2_15);

#line 1136 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1136__1_2_p_0(
#line 1136 "coverage.m"
  MR_Integer coverage__AfterCountA_8,
#line 1136 "coverage.m"
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

#line 1301 "coverage.m"
static MR_Word MR_CALL 
coverage__before_coverage_1_f_0(
#line 1301 "coverage.m"
  MR_Integer coverage__Count_3);

#line 1292 "coverage.m"
static MR_Word MR_CALL 
coverage__after_coverage_1_f_0(
#line 1292 "coverage.m"
  MR_Integer coverage__Count_3);

#line 1255 "coverage.m"
static void MR_CALL 
coverage__sum_after_coverage_3_p_0(
#line 1255 "coverage.m"
  MR_Word coverage__After_4,
#line 1255 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_8,
#line 1255 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumAfter_9);

#line 1163 "coverage.m"
static void MR_CALL 
coverage__after_count_sum_after_count_2_p_0(
#line 1163 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 1163 "coverage.m"
  MR_Word * coverage__HeadVar__2_2);

#line 1152 "coverage.m"
static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_3(
#line 1152 "coverage.m"
  MR_Box coverage__closure_arg);

#line 1141 "coverage.m"
static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_2(
#line 1141 "coverage.m"
  MR_Box coverage__closure_arg);

#line 1136 "coverage.m"
static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_1(
#line 1136 "coverage.m"
  MR_Box coverage__closure_arg);

#line 1113 "coverage.m"
static void MR_CALL 
coverage__after_count_from_either_source_3_p_0(
#line 1113 "coverage.m"
  MR_Word coverage__AfterA_4,
#line 1113 "coverage.m"
  MR_Word coverage__AfterB_5,
#line 1113 "coverage.m"
  MR_Word * coverage__After_6);

#line 1098 "coverage.m"
static void MR_CALL 
coverage__after_to_before_coverage_2_p_0(
#line 1098 "coverage.m"
  MR_Word coverage__After_3,
#line 1098 "coverage.m"
  MR_Word * coverage__Before_4);

#line 1067 "coverage.m"
static void MR_CALL 
coverage__propagate_detism_coverage_3_p_0(
#line 1067 "coverage.m"
  MR_Word coverage__Detism_4,
#line 1067 "coverage.m"
  MR_Word coverage__Before_5,
#line 1067 "coverage.m"
  MR_Word * coverage__After_6);

#line 946 "coverage.m"
static void MR_CALL 
coverage__sum_switch_case_coverage_4_p_0(
#line 946 "coverage.m"
  MR_Word coverage__Array_5,
#line 946 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 946 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Acc_0_15,
#line 946 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Acc_16);

#line 802 "coverage.m"
static MR_bool MR_CALL 
coverage__check_coverage_regarding_detism_2_p_0(
#line 802 "coverage.m"
  MR_Word coverage__Coverage_3,
#line 802 "coverage.m"
  MR_Word coverage__Detism_4);

#line 778 "coverage.m"
static void MR_CALL 
coverage__scope_annotate_coverage_7_p_0(
#line 778 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_18,
#line 778 "coverage.m"
  MR_Word coverage__Goal_8,
#line 778 "coverage.m"
  MR_Word coverage__Info_9,
#line 778 "coverage.m"
  MR_Word coverage__MaybeCut_10,
#line 778 "coverage.m"
  MR_Word coverage__Before_11,
#line 778 "coverage.m"
  MR_Word * coverage__After_12,
#line 778 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_15,
#line 778 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_16);

#line 763 "coverage.m"
static void MR_CALL 
coverage__negation_annotate_coverage_6_p_0(
#line 763 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_27,
#line 763 "coverage.m"
  MR_Word coverage__Goal_7,
#line 763 "coverage.m"
  MR_Word coverage__Info_8,
#line 763 "coverage.m"
  MR_Word coverage__Before_9,
#line 763 "coverage.m"
  MR_Word * coverage__After_10,
#line 763 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_14,
#line 763 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_15);

#line 615 "coverage.m"
static void MR_CALL 
coverage__ite_annotate_coverage_9_p_0(
#line 615 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_128,
#line 615 "coverage.m"
  MR_Word coverage__Cond_10,
#line 615 "coverage.m"
  MR_Word coverage__Then_11,
#line 615 "coverage.m"
  MR_Word coverage__Else_12,
#line 615 "coverage.m"
  MR_Word coverage__Info_13,
#line 615 "coverage.m"
  MR_Word coverage__RevGoalPath_14,
#line 615 "coverage.m"
  MR_Word coverage__Before_15,
#line 615 "coverage.m"
  MR_Word * coverage__After_16,
#line 615 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_35,
#line 615 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_36);

#line 560 "coverage.m"
static void MR_CALL 
coverage__switch_annotate_coverage_2_10_p_0(
#line 560 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_60,
#line 560 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 560 "coverage.m"
  MR_Word coverage__Info_2,
#line 560 "coverage.m"
  MR_Word coverage__CanFail_3,
#line 560 "coverage.m"
  MR_Word coverage__SwitchBefore_4,
#line 560 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumBefore_0_5,
#line 560 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumBefore_6,
#line 560 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_7,
#line 560 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumAfter_8,
#line 560 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_9,
#line 560 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_10);

#line 916 "coverage.m"
static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0_1(
#line 916 "coverage.m"
  MR_Box coverage__closure_arg,
#line 916 "coverage.m"
  MR_Box coverage__wrapper_arg_1,
#line 916 "coverage.m"
  MR_Box coverage__wrapper_arg_2,
#line 916 "coverage.m"
  MR_Box * coverage__wrapper_arg_3);

#line 503 "coverage.m"
static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0(
#line 503 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_49,
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
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 1031 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__goal_path__pti_goal_attr_array_1__plain_coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_PseudoTypeInfo) &coverage__coverage__type_ctor_info_coverage_info_0
  }
};

#line 1039 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1047 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1055 "coverage.c"
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

#line 1070 "coverage.c"
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

#line 1085 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_after_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1090 "coverage.c"
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

#line 1105 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_coverage_after_0_1
};

#line 1111 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_after_0_2
};

#line 1116 "coverage.c"
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

#line 1130 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_after_0[3] = {
  &coverage__coverage__du_functor_desc_coverage_after_0_2,
  &coverage__coverage__du_functor_desc_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_coverage_after_0_1
};

#line 1137 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_after_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1144 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_after_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_after_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_after_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_after",
  {     coverage__coverage__du_name_ordered_coverage_after_0 },
  {     coverage__coverage__du_ptag_ordered_coverage_after_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_after_0
};

#line 1161 "coverage.c"
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

#line 1176 "coverage.c"
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

#line 1191 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_before_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1196 "coverage.c"
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

#line 1211 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_coverage_before_0_1
};

#line 1217 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_before_0_2
};

#line 1222 "coverage.c"
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

#line 1236 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_before_0[3] = {
  &coverage__coverage__du_functor_desc_coverage_before_0_2,
  &coverage__coverage__du_functor_desc_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_coverage_before_0_1
};

#line 1243 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_before_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1250 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_before_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_before_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_before_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_before",
  {     coverage__coverage__du_name_ordered_coverage_before_0 },
  {     coverage__coverage__du_ptag_ordered_coverage_before_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_before_0
};

#line 1267 "coverage.c"
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

#line 1282 "coverage.c"
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

#line 1297 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1302 "coverage.c"
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

#line 1317 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1323 "coverage.c"
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

#line 1338 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1343 "coverage.c"
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

#line 1358 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1363 "coverage.c"
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

#line 1378 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_0,
  &coverage__coverage__du_functor_desc_coverage_info_0_1
};

#line 1384 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_2
};

#line 1389 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_2[1] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_3
};

#line 1394 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_3[2] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_4,
  &coverage__coverage__du_functor_desc_coverage_info_0_5
};

#line 1400 "coverage.c"
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

#line 1424 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_info_0[6] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_3,
  &coverage__coverage__du_functor_desc_coverage_info_0_5,
  &coverage__coverage__du_functor_desc_coverage_info_0_4,
  &coverage__coverage__du_functor_desc_coverage_info_0_2,
  &coverage__coverage__du_functor_desc_coverage_info_0_1,
  &coverage__coverage__du_functor_desc_coverage_info_0_0
};

#line 1434 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_info_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1444 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_info_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_info_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_info",
  {     coverage__coverage__du_name_ordered_coverage_info_0 },
  {     coverage__coverage__du_ptag_ordered_coverage_info_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_info_0
};

#line 1461 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_point_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0
};

#line 1468 "coverage.c"
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

#line 1483 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_point_0_0[1] = {
  &coverage__coverage__du_functor_desc_coverage_point_0_0
};

#line 1488 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_point_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_point_0_0
  }
};

#line 1497 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_point_0[1] = {
  &coverage__coverage__du_functor_desc_coverage_point_0_0
};

#line 1502 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_point_0[1] = {
  (MR_Integer) 0
};

#line 1507 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_point_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_point_0_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_point_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_point",
  {     coverage__coverage__du_name_ordered_coverage_point_0 },
  {     coverage__coverage__du_ptag_ordered_coverage_point_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_point_0
};

#line 1524 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1532 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct2 coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1
  }
};

#line 1541 "coverage.c"
static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_point_0
  }
};

#line 1550 "coverage.c"
static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 1559 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_reference_info_1_0[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
  (MR_PseudoTypeInfo) &coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1,
  (MR_PseudoTypeInfo) &coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0,
  (MR_PseudoTypeInfo) &coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0,
  (MR_PseudoTypeInfo) &coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 1568 "coverage.c"
static const MR_ConstString coverage__coverage__field_names_coverage_reference_info_1_0[5] = {
  (MR_String) "cri_proc",
  (MR_String) "cri_call_sites",
  (MR_String) "cri_solns_coverage_points",
  (MR_String) "cri_branch_coverage_points",
  (MR_String) "cri_goal_path_map"
};

#line 1577 "coverage.c"
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

#line 1592 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_reference_info_1_0[1] = {
  &coverage__coverage__du_functor_desc_coverage_reference_info_1_0
};

#line 1597 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_reference_info_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_reference_info_1_0
  }
};

#line 1606 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_reference_info_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_reference_info_1_0
};

#line 1611 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_reference_info_1[1] = {
  (MR_Integer) 0
};

#line 1616 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_coverage_reference_info_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____coverage_reference_info_1_0_10001)),
  ((MR_Box) (coverage____Compare____coverage_reference_info_1_0_10001)),
  (MR_String) "coverage",
  (MR_String) "coverage_reference_info",
  {     coverage__coverage__du_name_ordered_coverage_reference_info_1 },
  {     coverage__coverage__du_ptag_ordered_coverage_reference_info_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_coverage_reference_info_1
};

#line 1633 "coverage.c"
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

#line 1648 "coverage.c"
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

#line 1663 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_after_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1668 "coverage.c"
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

#line 1683 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_0[2] = {
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_1
};

#line 1689 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_1[1] = {
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_2
};

#line 1694 "coverage.c"
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

#line 1708 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_after_0[3] = {
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_2,
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_1
};

#line 1715 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_after_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1722 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_sum_coverage_after_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____sum_coverage_after_0_0_10001)),
  ((MR_Box) (coverage____Compare____sum_coverage_after_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "sum_coverage_after",
  {     coverage__coverage__du_name_ordered_sum_coverage_after_0 },
  {     coverage__coverage__du_ptag_ordered_sum_coverage_after_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_sum_coverage_after_0
};

#line 1739 "coverage.c"
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

#line 1754 "coverage.c"
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

#line 1769 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_before_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1774 "coverage.c"
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

#line 1789 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_0[2] = {
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_1
};

#line 1795 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_1[1] = {
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_2
};

#line 1800 "coverage.c"
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

#line 1814 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_before_0[3] = {
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_2,
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_1
};

#line 1821 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_before_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1828 "coverage.c"
const MR_TypeCtorInfo_Struct coverage__coverage__type_ctor_info_sum_coverage_before_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (coverage____Unify____sum_coverage_before_0_0_10001)),
  ((MR_Box) (coverage____Compare____sum_coverage_before_0_0_10001)),
  (MR_String) "coverage",
  (MR_String) "sum_coverage_before",
  {     coverage__coverage__du_name_ordered_sum_coverage_before_0 },
  {     coverage__coverage__du_ptag_ordered_sum_coverage_before_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  coverage__coverage__functor_number_map_sum_coverage_before_0
};

#line 1845 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0_10001(
#line 1848 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 1850 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 1852 "coverage.c"
{
#line 1854 "coverage.c"
  {
#line 1856 "coverage.c"
    MR_bool coverage__succeeded;

#line 1859 "coverage.c"
    {
#line 1861 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_after_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 1864 "coverage.c"
    return coverage__succeeded;
#line 1866 "coverage.c"
  }
#line 1868 "coverage.c"
}

#line 1871 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_after_0_0_10001(
#line 1874 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 1876 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 1878 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 1880 "coverage.c"
{
#line 1882 "coverage.c"
  {
#line 1884 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 1887 "coverage.c"
    {
#line 1889 "coverage.c"
      coverage____Compare____coverage_after_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 1892 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 1894 "coverage.c"
  }
#line 1896 "coverage.c"
}

#line 1899 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0_10001(
#line 1902 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 1904 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 1906 "coverage.c"
{
#line 1908 "coverage.c"
  {
#line 1910 "coverage.c"
    MR_bool coverage__succeeded;

#line 1913 "coverage.c"
    {
#line 1915 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_before_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 1918 "coverage.c"
    return coverage__succeeded;
#line 1920 "coverage.c"
  }
#line 1922 "coverage.c"
}

#line 1925 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_before_0_0_10001(
#line 1928 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 1930 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 1932 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 1934 "coverage.c"
{
#line 1936 "coverage.c"
  {
#line 1938 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 1941 "coverage.c"
    {
#line 1943 "coverage.c"
      coverage____Compare____coverage_before_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 1946 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 1948 "coverage.c"
  }
#line 1950 "coverage.c"
}

#line 1953 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_info_0_0_10001(
#line 1956 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 1958 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 1960 "coverage.c"
{
#line 1962 "coverage.c"
  {
#line 1964 "coverage.c"
    MR_bool coverage__succeeded;

#line 1967 "coverage.c"
    {
#line 1969 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_info_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 1972 "coverage.c"
    return coverage__succeeded;
#line 1974 "coverage.c"
  }
#line 1976 "coverage.c"
}

#line 1979 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_info_0_0_10001(
#line 1982 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 1984 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 1986 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 1988 "coverage.c"
{
#line 1990 "coverage.c"
  {
#line 1992 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 1995 "coverage.c"
    {
#line 1997 "coverage.c"
      coverage____Compare____coverage_info_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2000 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2002 "coverage.c"
  }
#line 2004 "coverage.c"
}

#line 2007 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_point_0_0_10001(
#line 2010 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2012 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 2014 "coverage.c"
{
#line 2016 "coverage.c"
  {
#line 2018 "coverage.c"
    MR_bool coverage__succeeded;

#line 2021 "coverage.c"
    {
#line 2023 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_point_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 2026 "coverage.c"
    return coverage__succeeded;
#line 2028 "coverage.c"
  }
#line 2030 "coverage.c"
}

#line 2033 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_point_0_0_10001(
#line 2036 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 2038 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2040 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2042 "coverage.c"
{
#line 2044 "coverage.c"
  {
#line 2046 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2049 "coverage.c"
    {
#line 2051 "coverage.c"
      coverage____Compare____coverage_point_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2054 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2056 "coverage.c"
  }
#line 2058 "coverage.c"
}

#line 2061 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0_10001(
#line 2064 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2066 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2068 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2070 "coverage.c"
{
#line 2072 "coverage.c"
  {
#line 2074 "coverage.c"
    MR_bool coverage__succeeded;

#line 2077 "coverage.c"
    {
#line 2079 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_reference_info_1_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2082 "coverage.c"
    return coverage__succeeded;
#line 2084 "coverage.c"
  }
#line 2086 "coverage.c"
}

#line 2089 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0_10001(
#line 2092 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2094 "coverage.c"
  MR_Box * coverage__wrapper_arg_2,
#line 2096 "coverage.c"
  MR_Box coverage__wrapper_arg_3,
#line 2098 "coverage.c"
  MR_Box coverage__wrapper_arg_4)
#line 2100 "coverage.c"
{
#line 2102 "coverage.c"
  {
#line 2104 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2107 "coverage.c"
    {
#line 2109 "coverage.c"
      coverage____Compare____coverage_reference_info_1_0(((MR_Word) coverage__wrapper_arg_1), &coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_3), ((MR_Word) coverage__wrapper_arg_4));
    }
#line 2112 "coverage.c"
    *coverage__wrapper_arg_2 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2114 "coverage.c"
  }
#line 2116 "coverage.c"
}

#line 2119 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0_10001(
#line 2122 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2124 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 2126 "coverage.c"
{
#line 2128 "coverage.c"
  {
#line 2130 "coverage.c"
    MR_bool coverage__succeeded;

#line 2133 "coverage.c"
    {
#line 2135 "coverage.c"
      coverage__succeeded = coverage____Unify____sum_coverage_after_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 2138 "coverage.c"
    return coverage__succeeded;
#line 2140 "coverage.c"
  }
#line 2142 "coverage.c"
}

#line 2145 "coverage.c"
static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0_10001(
#line 2148 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 2150 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2152 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2154 "coverage.c"
{
#line 2156 "coverage.c"
  {
#line 2158 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2161 "coverage.c"
    {
#line 2163 "coverage.c"
      coverage____Compare____sum_coverage_after_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2166 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2168 "coverage.c"
  }
#line 2170 "coverage.c"
}

#line 2173 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0_10001(
#line 2176 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2178 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 2180 "coverage.c"
{
#line 2182 "coverage.c"
  {
#line 2184 "coverage.c"
    MR_bool coverage__succeeded;

#line 2187 "coverage.c"
    {
#line 2189 "coverage.c"
      coverage__succeeded = coverage____Unify____sum_coverage_before_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 2192 "coverage.c"
    return coverage__succeeded;
#line 2194 "coverage.c"
  }
#line 2196 "coverage.c"
}

#line 2199 "coverage.c"
static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0_10001(
#line 2202 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 2204 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2206 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2208 "coverage.c"
{
#line 2210 "coverage.c"
  {
#line 2212 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2215 "coverage.c"
    {
#line 2217 "coverage.c"
      coverage____Compare____sum_coverage_before_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2220 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2222 "coverage.c"
  }
#line 2224 "coverage.c"
}

#line 1022 "coverage.m"
static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_99_111_118_101_114_97_103_101_95_99_111_109_112_108_101_116_101_95_95_91_49_44_32_51_93_95_48_2_p_0(
#line 1022 "coverage.m"
  MR_Word coverage__HeadVar__1_1)
#line 1022 "coverage.m"
{
#line 1025 "coverage.m"
  {
#line 1025 "coverage.m"
    MR_bool coverage__succeeded;

#line 1025 "coverage.m"
#line 1025 "coverage.m"
    switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
#line 1025 "coverage.m"
      default:
#line 1025 "coverage.m"
        coverage__succeeded = MR_FALSE;
#line 1025 "coverage.m"
        break;
#line 1025 "coverage.m"
      case (MR_Integer) 0:
#line 1025 "coverage.m"
#line 1025 "coverage.m"
        switch (MR_unmkbody(coverage__HeadVar__1_1)) {
#line 1025 "coverage.m"
          default:
#line 1025 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 1025 "coverage.m"
            break;
#line 1025 "coverage.m"
          case (MR_Integer) 1:
#line 1027 "coverage.m"
            coverage__succeeded = MR_TRUE;
#line 1025 "coverage.m"
            break;
#line 1025 "coverage.m"
        }
#line 1025 "coverage.m"
        break;
#line 1025 "coverage.m"
      case (MR_Integer) 1:
#line 1026 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 1025 "coverage.m"
        break;
#line 1025 "coverage.m"
      case (MR_Integer) 2:
#line 1025 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 1025 "coverage.m"
        break;
#line 1025 "coverage.m"
    }
#line 1025 "coverage.m"
    return coverage__succeeded;
#line 1025 "coverage.m"
  }
#line 1022 "coverage.m"
}

#line 971 "coverage.m"
static MR_bool MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_p_0(
#line 971 "coverage.m"
  MR_Word coverage__Before_10,
#line 971 "coverage.m"
  MR_Word coverage__After_11,
#line 971 "coverage.m"
  MR_Word coverage__BeforeCond_12,
#line 971 "coverage.m"
  MR_Word coverage__AfterCond_13,
#line 971 "coverage.m"
  MR_Word coverage__BeforeThen_14,
#line 971 "coverage.m"
  MR_Word coverage__AfterThen_15,
#line 971 "coverage.m"
  MR_Word coverage__AfterElse_17,
#line 971 "coverage.m"
  MR_Word coverage__CondDetism_18)
#line 971 "coverage.m"
{
#line 978 "coverage.m"
  {
#line 978 "coverage.m"
    MR_bool coverage__succeeded = ((MR_tag((MR_Word) coverage__Before_10)) == (MR_mktag((MR_Integer) 1)));
#line 984 "coverage.m"
    MR_Integer coverage__BeforeExecCount_19;
#line 984 "coverage.m"
    MR_Integer coverage__BeforeCondExecCount_20;
#line 993 "coverage.m"
    MR_Integer coverage__AfterExecCount_21;
#line 993 "coverage.m"
    MR_Integer coverage__AfterThenExecCount_22;
#line 993 "coverage.m"
    MR_Integer coverage__AfterElseExecCount_23;
#line 1001 "coverage.m"
    MR_Integer coverage__AfterCondExecCount_24;
#line 1001 "coverage.m"
    MR_Integer coverage__BeforeKnownExecCount_25;
#line 1018 "coverage.m"
    MR_Integer coverage__AfterCondExecCount2_26;

#line 980 "coverage.m"
    if (coverage__succeeded)
#line 980 "coverage.m"
      {
#line 980 "coverage.m"
        coverage__BeforeExecCount_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_10, (MR_Integer) 0)));
#line 981 "coverage.m"
        coverage__succeeded = ((MR_tag((MR_Word) coverage__BeforeCond_12)) == (MR_mktag((MR_Integer) 1)));
#line 981 "coverage.m"
        if (coverage__succeeded)
#line 981 "coverage.m"
          coverage__BeforeCondExecCount_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeCond_12, (MR_Integer) 0)));
#line 980 "coverage.m"
      }
#line 984 "coverage.m"
    if (coverage__succeeded)
#line 983 "coverage.m"
      coverage__succeeded = (coverage__BeforeExecCount_19 == coverage__BeforeCondExecCount_20);
#line 984 "coverage.m"
    else
#line 985 "coverage.m"
      coverage__succeeded = MR_TRUE;
#line 978 "coverage.m"
    if (coverage__succeeded)
#line 978 "coverage.m"
      {
#line 988 "coverage.m"
        coverage__succeeded = ((MR_tag((MR_Word) coverage__After_11)) == (MR_mktag((MR_Integer) 1)));
#line 988 "coverage.m"
        if (coverage__succeeded)
#line 988 "coverage.m"
          {
#line 988 "coverage.m"
            coverage__AfterExecCount_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_11, (MR_Integer) 0)));
#line 989 "coverage.m"
            coverage__succeeded = ((MR_tag((MR_Word) coverage__AfterThen_15)) == (MR_mktag((MR_Integer) 1)));
#line 989 "coverage.m"
            if (coverage__succeeded)
#line 989 "coverage.m"
              {
#line 989 "coverage.m"
                coverage__AfterThenExecCount_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterThen_15, (MR_Integer) 0)));
#line 990 "coverage.m"
                coverage__succeeded = ((MR_tag((MR_Word) coverage__AfterElse_17)) == (MR_mktag((MR_Integer) 1)));
#line 990 "coverage.m"
                if (coverage__succeeded)
#line 990 "coverage.m"
                  coverage__AfterElseExecCount_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterElse_17, (MR_Integer) 0)));
#line 989 "coverage.m"
              }
#line 988 "coverage.m"
          }
#line 993 "coverage.m"
        if (coverage__succeeded)
#line 992 "coverage.m"
          {
#line 992 "coverage.m"
            MR_Integer coverage__V_28_28 = (coverage__AfterThenExecCount_22 + coverage__AfterElseExecCount_23);

#line 992 "coverage.m"
            coverage__succeeded = (coverage__AfterExecCount_21 == coverage__V_28_28);
#line 992 "coverage.m"
          }
#line 993 "coverage.m"
        else
#line 994 "coverage.m"
          coverage__succeeded = MR_TRUE;
#line 978 "coverage.m"
        if (coverage__succeeded)
#line 978 "coverage.m"
          {
#line 997 "coverage.m"
            coverage__succeeded = ((MR_tag((MR_Word) coverage__AfterCond_13)) == (MR_mktag((MR_Integer) 1)));
#line 997 "coverage.m"
            if (coverage__succeeded)
#line 997 "coverage.m"
              {
#line 997 "coverage.m"
                coverage__AfterCondExecCount_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterCond_13, (MR_Integer) 0)));
#line 998 "coverage.m"
                coverage__succeeded = ((MR_tag((MR_Word) coverage__BeforeThen_14)) == (MR_mktag((MR_Integer) 1)));
#line 998 "coverage.m"
                if (coverage__succeeded)
#line 998 "coverage.m"
                  coverage__BeforeKnownExecCount_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeThen_14, (MR_Integer) 0)));
#line 997 "coverage.m"
              }
#line 1001 "coverage.m"
            if (coverage__succeeded)
#line 1000 "coverage.m"
              coverage__succeeded = (coverage__AfterCondExecCount_24 == coverage__BeforeKnownExecCount_25);
#line 1001 "coverage.m"
            else
#line 1002 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 978 "coverage.m"
            if (coverage__succeeded)
#line 978 "coverage.m"
              {
#line 1008 "coverage.m"
                coverage__succeeded = ((MR_tag((MR_Word) coverage__AfterCond_13)) == (MR_mktag((MR_Integer) 1)));
#line 1008 "coverage.m"
                if (coverage__succeeded)
#line 1008 "coverage.m"
                  {
#line 1008 "coverage.m"
                    coverage__AfterCondExecCount2_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterCond_13, (MR_Integer) 0)));
#line 1009 "coverage.m"
                    {
#line 1009 "coverage.m"
                      MR_Word coverage__NumSolutions_27;

#line 1009 "coverage.m"
                      {
#line 1009 "coverage.m"
                        coverage__NumSolutions_27 = mdbcomp__program_representation__detism_get_solutions_1_f_0(coverage__CondDetism_18);
                      }
#line 1013 "coverage.m"
#line 1013 "coverage.m"
                      switch (coverage__NumSolutions_27) {
#line 1013 "coverage.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1013 "coverage.m"
                        case (MR_Integer) 2:
#line 1015 "coverage.m"
                          coverage__succeeded = MR_TRUE;
#line 1013 "coverage.m"
                          break;
#line 1013 "coverage.m"
                        case (MR_Integer) 1:
#line 1014 "coverage.m"
                          coverage__succeeded = MR_TRUE;
#line 1013 "coverage.m"
                          break;
#line 1013 "coverage.m"
                        case (MR_Integer) 0:
#line 1012 "coverage.m"
                          coverage__succeeded = (coverage__AfterCondExecCount2_26 == (MR_Integer) 0);
#line 1013 "coverage.m"
                          break;
#line 1013 "coverage.m"
                      }
#line 1009 "coverage.m"
                    }
#line 1008 "coverage.m"
                  }
#line 1008 "coverage.m"
                else
#line 1019 "coverage.m"
                  coverage__succeeded = MR_TRUE;
#line 978 "coverage.m"
              }
#line 978 "coverage.m"
          }
#line 978 "coverage.m"
      }
#line 978 "coverage.m"
    return coverage__succeeded;
#line 978 "coverage.m"
  }
#line 971 "coverage.m"
}

#line 752 "coverage.m"
static void MR_CALL 
coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(
#line 752 "coverage.m"
  MR_Word coverage__Info_4,
#line 752 "coverage.m"
  MR_Word coverage__RevGoalPath_5,
#line 752 "coverage.m"
  MR_Word * coverage__Before_6)
#line 752 "coverage.m"
{
#line 759 "coverage.m"
  {
#line 759 "coverage.m"
    MR_bool coverage__succeeded;
#line 759 "coverage.m"
    MR_Word coverage__CP_7;
#line 756 "coverage.m"
    MR_Word coverage__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 3)));
#line 756 "coverage.m"
    MR_Word coverage__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 0)));
#line 756 "coverage.m"
    MR_Word coverage__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 1)));
#line 756 "coverage.m"
    MR_Word coverage__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 2)));
#line 756 "coverage.m"
    MR_Word coverage__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_4, (MR_Integer) 4)));
#line 756 "coverage.m"
    MR_Box coverage__conv0_CP_7;

#line 756 "coverage.m"
    {
#line 756 "coverage.m"
      coverage__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, coverage__V_11_11, ((MR_Box) (coverage__RevGoalPath_5)), &coverage__conv0_CP_7);
    }
#line 756 "coverage.m"
    if (coverage__succeeded)
#line 756 "coverage.m"
      {
#line 756 "coverage.m"
        coverage__CP_7 = ((MR_Word) coverage__conv0_CP_7);
#line 756 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 756 "coverage.m"
      }
#line 759 "coverage.m"
    if (coverage__succeeded)
#line 757 "coverage.m"
      {
#line 757 "coverage.m"
        MR_Integer coverage__ExecCount_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CP_7, (MR_Integer) 0)));
#line 757 "coverage.m"
        MR_Word coverage__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_7, (MR_Integer) 1)));
#line 757 "coverage.m"
        MR_Word coverage__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_7, (MR_Integer) 2)));

#line 1304 "coverage.m"
        coverage__succeeded = (coverage__ExecCount_8 == (MR_Integer) 0);
#line 1303 "coverage.m"
        if (coverage__succeeded)
#line 1305 "coverage.m"
          *coverage__Before_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1303 "coverage.m"
        else
#line 1307 "coverage.m"
          {
#line 1307 "coverage.m"
            MR_Word base;
#line 1307 "coverage.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "coverage.m"
            *coverage__Before_6 = base;
#line 1307 "coverage.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__ExecCount_8));
#line 1307 "coverage.m"
          }
#line 757 "coverage.m"
      }
#line 759 "coverage.m"
    else
#line 760 "coverage.m"
      *coverage__Before_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 759 "coverage.m"
  }
#line 752 "coverage.m"
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
#line 492 "coverage.m"
            switch (MR_tag((MR_Word) coverage__Before0_4)) {
#line 492 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 492 "coverage.m"
              case (MR_Integer) 0:
#line 492 "coverage.m"
#line 492 "coverage.m"
                switch (MR_unmkbody(coverage__Before0_4)) {
#line 492 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 492 "coverage.m"
                  case (MR_Integer) 0:
#line 759 "coverage.m"
                    {
#line 759 "coverage.m"
                      MR_Word coverage__CP_52;
#line 756 "coverage.m"
                      MR_Word coverage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 3)));
#line 756 "coverage.m"
                      MR_Word coverage__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 0)));
#line 756 "coverage.m"
                      MR_Word coverage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 1)));
#line 756 "coverage.m"
                      MR_Word coverage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 2)));
#line 756 "coverage.m"
                      MR_Word coverage__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 4)));
#line 756 "coverage.m"
                      MR_Box coverage__conv1_CP_52;

#line 756 "coverage.m"
                      {
#line 756 "coverage.m"
                        coverage__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, coverage__V_56_56, ((MR_Box) (coverage__DisjRevGoalPath_25)), &coverage__conv1_CP_52);
                      }
#line 756 "coverage.m"
                      if (coverage__succeeded)
#line 756 "coverage.m"
                        {
#line 756 "coverage.m"
                          coverage__CP_52 = ((MR_Word) coverage__conv1_CP_52);
#line 756 "coverage.m"
                          coverage__succeeded = MR_TRUE;
#line 756 "coverage.m"
                        }
#line 759 "coverage.m"
                      if (coverage__succeeded)
#line 757 "coverage.m"
                        {
#line 757 "coverage.m"
                          MR_Integer coverage__ExecCount_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CP_52, (MR_Integer) 0)));
#line 757 "coverage.m"
                          MR_Word coverage__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_52, (MR_Integer) 1)));
#line 757 "coverage.m"
                          MR_Word coverage__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_52, (MR_Integer) 2)));

#line 1304 "coverage.m"
                          coverage__succeeded = (coverage__ExecCount_53 == (MR_Integer) 0);
#line 1303 "coverage.m"
                          if (coverage__succeeded)
#line 1305 "coverage.m"
                            coverage__Before_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1303 "coverage.m"
                          else
#line 1307 "coverage.m"
                            {
#line 1307 "coverage.m"
                              coverage__Before_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "coverage.m"
                              MR_hl_field(MR_mktag(1), coverage__Before_27, 0) = ((MR_Box) (coverage__ExecCount_53));
#line 1307 "coverage.m"
                            }
#line 757 "coverage.m"
                        }
#line 759 "coverage.m"
                      else
#line 760 "coverage.m"
                        coverage__Before_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 759 "coverage.m"
                    }
#line 492 "coverage.m"
                    break;
#line 492 "coverage.m"
                  case (MR_Integer) 1:
#line 491 "coverage.m"
                    coverage__Before_27 = coverage__Before0_4;
#line 492 "coverage.m"
                    break;
#line 492 "coverage.m"
                }
#line 492 "coverage.m"
                break;
#line 492 "coverage.m"
              case (MR_Integer) 1:
#line 491 "coverage.m"
                coverage__Before_27 = coverage__Before0_4;
#line 492 "coverage.m"
                break;
#line 492 "coverage.m"
            }
#line 496 "coverage.m"
            {
#line 496 "coverage.m"
              coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_46, coverage__Disj_18, coverage__Info_2, coverage__Before_27, &coverage__After_28, coverage__STATE_VARIABLE_Array_0_7, &coverage__STATE_VARIABLE_Array_35_35);
            }
#line 1260 "coverage.m"
#line 1260 "coverage.m"
            switch (MR_tag((MR_Word) coverage__STATE_VARIABLE_SumAfter_0_5)) {
#line 1260 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1260 "coverage.m"
              case (MR_Integer) 0:
#line 1260 "coverage.m"
#line 1260 "coverage.m"
                switch (MR_unmkbody(coverage__STATE_VARIABLE_SumAfter_0_5)) {
#line 1260 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1260 "coverage.m"
                  case (MR_Integer) 0:
#line 1282 "coverage.m"
                    coverage__STATE_VARIABLE_SumAfter_36_36 = coverage__STATE_VARIABLE_SumAfter_0_5;
#line 1260 "coverage.m"
                    break;
#line 1260 "coverage.m"
                  case (MR_Integer) 1:
#line 1275 "coverage.m"
#line 1275 "coverage.m"
                    switch (MR_tag((MR_Word) coverage__After_28)) {
#line 1275 "coverage.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1275 "coverage.m"
                      case (MR_Integer) 0:
#line 1275 "coverage.m"
#line 1275 "coverage.m"
                        switch (MR_unmkbody(coverage__After_28)) {
#line 1275 "coverage.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1275 "coverage.m"
                          case (MR_Integer) 0:
#line 1279 "coverage.m"
                            coverage__STATE_VARIABLE_SumAfter_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1275 "coverage.m"
                            break;
#line 1275 "coverage.m"
                          case (MR_Integer) 1:
#line 1276 "coverage.m"
                            coverage__STATE_VARIABLE_SumAfter_36_36 = coverage__STATE_VARIABLE_SumAfter_0_5;
#line 1275 "coverage.m"
                            break;
#line 1275 "coverage.m"
                        }
#line 1275 "coverage.m"
                        break;
#line 1275 "coverage.m"
                      case (MR_Integer) 1:
#line 1273 "coverage.m"
                        {
#line 1273 "coverage.m"
                          MR_Integer coverage__ExecCount_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_28, (MR_Integer) 0)));

#line 1274 "coverage.m"
                          {
#line 1274 "coverage.m"
                            coverage__STATE_VARIABLE_SumAfter_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "coverage.m"
                            MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumAfter_36_36, 0) = ((MR_Box) (coverage__ExecCount_75));
#line 1274 "coverage.m"
                          }
#line 1273 "coverage.m"
                        }
#line 1275 "coverage.m"
                        break;
#line 1275 "coverage.m"
                    }
#line 1260 "coverage.m"
                    break;
#line 1260 "coverage.m"
                }
#line 1260 "coverage.m"
                break;
#line 1260 "coverage.m"
              case (MR_Integer) 1:
#line 1260 "coverage.m"
                {
#line 1260 "coverage.m"
                  MR_Integer coverage__SumExecCount_68 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumAfter_0_5, (MR_Integer) 0)));

#line 1264 "coverage.m"
#line 1264 "coverage.m"
                  switch (MR_tag((MR_Word) coverage__After_28)) {
#line 1264 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "coverage.m"
                    case (MR_Integer) 0:
#line 1264 "coverage.m"
#line 1264 "coverage.m"
                      switch (MR_unmkbody(coverage__After_28)) {
#line 1264 "coverage.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "coverage.m"
                        case (MR_Integer) 0:
#line 1266 "coverage.m"
                          coverage__STATE_VARIABLE_SumAfter_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1264 "coverage.m"
                          break;
#line 1264 "coverage.m"
                        case (MR_Integer) 1:
#line 1268 "coverage.m"
                          coverage__STATE_VARIABLE_SumAfter_36_36 = coverage__STATE_VARIABLE_SumAfter_0_5;
#line 1264 "coverage.m"
                          break;
#line 1264 "coverage.m"
                      }
#line 1264 "coverage.m"
                      break;
#line 1264 "coverage.m"
                    case (MR_Integer) 1:
#line 1262 "coverage.m"
                      {
#line 1262 "coverage.m"
                        MR_Integer coverage__ExecCount_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_28, (MR_Integer) 0)));
#line 1262 "coverage.m"
                        MR_Integer coverage__V_74_74 = (coverage__SumExecCount_68 + coverage__ExecCount_69);

#line 1263 "coverage.m"
                        {
#line 1263 "coverage.m"
                          coverage__STATE_VARIABLE_SumAfter_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "coverage.m"
                          MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumAfter_36_36, 0) = ((MR_Box) (coverage__V_74_74));
#line 1263 "coverage.m"
                        }
#line 1262 "coverage.m"
                      }
#line 1264 "coverage.m"
                      break;
#line 1264 "coverage.m"
                  }
#line 1260 "coverage.m"
                }
#line 1260 "coverage.m"
                break;
#line 1260 "coverage.m"
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

#line 1152 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1152__1_2_p_0(
#line 1152 "coverage.m"
  MR_Integer coverage__HeadVar__1_12,
#line 1152 "coverage.m"
  MR_Integer coverage__AfterCountB_18)
#line 1152 "coverage.m"
{
#line 1152 "coverage.m"
  {
#line 1152 "coverage.m"
    MR_bool coverage__succeeded = (coverage__HeadVar__1_12 == coverage__AfterCountB_18);

#line 1152 "coverage.m"
    return coverage__succeeded;
#line 1152 "coverage.m"
  }
#line 1152 "coverage.m"
}

#line 1141 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1141__1_2_p_0(
#line 1141 "coverage.m"
  MR_Integer coverage__AfterCountA_8,
#line 1141 "coverage.m"
  MR_Integer coverage__HeadVar__2_15)
#line 1141 "coverage.m"
{
#line 1141 "coverage.m"
  {
#line 1141 "coverage.m"
    MR_bool coverage__succeeded = (coverage__AfterCountA_8 == coverage__HeadVar__2_15);

#line 1141 "coverage.m"
    return coverage__succeeded;
#line 1141 "coverage.m"
  }
#line 1141 "coverage.m"
}

#line 1136 "coverage.m"
static MR_bool MR_CALL 
coverage__IntroducedFrom__pred__after_count_from_either_source__1136__1_2_p_0(
#line 1136 "coverage.m"
  MR_Integer coverage__AfterCountA_8,
#line 1136 "coverage.m"
  MR_Integer coverage__AfterCountB_9)
#line 1136 "coverage.m"
{
#line 1136 "coverage.m"
  {
#line 1136 "coverage.m"
    MR_bool coverage__succeeded = (coverage__AfterCountA_8 == coverage__AfterCountB_9);

#line 1136 "coverage.m"
    return coverage__succeeded;
#line 1136 "coverage.m"
  }
#line 1136 "coverage.m"
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
#line 205 "coverage.m"
      switch (MR_tag((MR_Word) coverage__After_25)) {
#line 205 "coverage.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 205 "coverage.m"
        case (MR_Integer) 0:
#line 205 "coverage.m"
#line 205 "coverage.m"
          switch (MR_unmkbody(coverage__After_25)) {
#line 205 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 205 "coverage.m"
            case (MR_Integer) 0:
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
              break;
#line 205 "coverage.m"
            case (MR_Integer) 1:
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
              break;
#line 205 "coverage.m"
          }
#line 205 "coverage.m"
          break;
#line 205 "coverage.m"
        case (MR_Integer) 1:
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
#line 3125 "coverage.c"
                coverage__succeeded = (coverage__V_38_38 == coverage__V_39_39);
#line 205 "coverage.m"
              }
#line 205 "coverage.m"
          }
#line 205 "coverage.m"
          break;
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
#line 3166 "coverage.c"
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "coverage.m"
    else
#line 210 "coverage.m"
#line 210 "coverage.m"
      switch (MR_tag((MR_Word) coverage__HeadVar__2_2)) {
#line 210 "coverage.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 210 "coverage.m"
        case (MR_Integer) 0:
#line 210 "coverage.m"
#line 210 "coverage.m"
          switch (MR_unmkbody(coverage__HeadVar__2_2)) {
#line 210 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 210 "coverage.m"
            case (MR_Integer) 0:
#line 210 "coverage.m"
#line 210 "coverage.m"
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 210 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 210 "coverage.m"
                case (MR_Integer) 0:
#line 210 "coverage.m"
#line 210 "coverage.m"
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 210 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 210 "coverage.m"
                    case (MR_Integer) 0:
#line 210 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "coverage.m"
                      break;
#line 210 "coverage.m"
                    case (MR_Integer) 1:
#line 210 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 210 "coverage.m"
                      break;
#line 210 "coverage.m"
                  }
#line 210 "coverage.m"
                  break;
#line 210 "coverage.m"
                case (MR_Integer) 1:
#line 3214 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 210 "coverage.m"
                  break;
#line 210 "coverage.m"
              }
#line 210 "coverage.m"
              break;
#line 210 "coverage.m"
            case (MR_Integer) 1:
#line 210 "coverage.m"
#line 210 "coverage.m"
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 210 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 210 "coverage.m"
                case (MR_Integer) 0:
#line 210 "coverage.m"
#line 210 "coverage.m"
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 210 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 210 "coverage.m"
                    case (MR_Integer) 0:
#line 210 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 210 "coverage.m"
                      break;
#line 210 "coverage.m"
                    case (MR_Integer) 1:
#line 210 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 210 "coverage.m"
                      break;
#line 210 "coverage.m"
                  }
#line 210 "coverage.m"
                  break;
#line 210 "coverage.m"
                case (MR_Integer) 1:
#line 3254 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 210 "coverage.m"
                  break;
#line 210 "coverage.m"
              }
#line 210 "coverage.m"
              break;
#line 210 "coverage.m"
          }
#line 210 "coverage.m"
          break;
#line 210 "coverage.m"
        case (MR_Integer) 1:
#line 210 "coverage.m"
          {
#line 210 "coverage.m"
            MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 210 "coverage.m"
#line 210 "coverage.m"
            switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 210 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 210 "coverage.m"
              case (MR_Integer) 0:
#line 210 "coverage.m"
#line 210 "coverage.m"
                switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 210 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 210 "coverage.m"
                  case (MR_Integer) 0:
#line 3287 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 210 "coverage.m"
                    break;
#line 210 "coverage.m"
                  case (MR_Integer) 1:
#line 3293 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 210 "coverage.m"
                    break;
#line 210 "coverage.m"
                }
#line 210 "coverage.m"
                break;
#line 210 "coverage.m"
              case (MR_Integer) 1:
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
                break;
#line 210 "coverage.m"
            }
#line 210 "coverage.m"
          }
#line 210 "coverage.m"
          break;
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
#line 210 "coverage.m"
      switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
#line 210 "coverage.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 210 "coverage.m"
        case (MR_Integer) 0:
#line 210 "coverage.m"
#line 210 "coverage.m"
          switch (MR_unmkbody(coverage__HeadVar__1_1)) {
#line 210 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 210 "coverage.m"
            case (MR_Integer) 0:
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
              break;
#line 210 "coverage.m"
            case (MR_Integer) 1:
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
              break;
#line 210 "coverage.m"
          }
#line 210 "coverage.m"
          break;
#line 210 "coverage.m"
        case (MR_Integer) 1:
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
#line 3421 "coverage.c"
                coverage__succeeded = (coverage__V_7_7 == coverage__V_8_8);
#line 210 "coverage.m"
              }
#line 210 "coverage.m"
          }
#line 210 "coverage.m"
          break;
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
#line 3462 "coverage.c"
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 215 "coverage.m"
    else
#line 215 "coverage.m"
#line 215 "coverage.m"
      switch (MR_tag((MR_Word) coverage__HeadVar__2_2)) {
#line 215 "coverage.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 215 "coverage.m"
        case (MR_Integer) 0:
#line 215 "coverage.m"
#line 215 "coverage.m"
          switch (MR_unmkbody(coverage__HeadVar__2_2)) {
#line 215 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 215 "coverage.m"
            case (MR_Integer) 0:
#line 215 "coverage.m"
#line 215 "coverage.m"
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 215 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 215 "coverage.m"
                case (MR_Integer) 0:
#line 215 "coverage.m"
#line 215 "coverage.m"
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 215 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 215 "coverage.m"
                    case (MR_Integer) 0:
#line 215 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 215 "coverage.m"
                      break;
#line 215 "coverage.m"
                    case (MR_Integer) 1:
#line 215 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 215 "coverage.m"
                      break;
#line 215 "coverage.m"
                  }
#line 215 "coverage.m"
                  break;
#line 215 "coverage.m"
                case (MR_Integer) 1:
#line 3510 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 215 "coverage.m"
                  break;
#line 215 "coverage.m"
              }
#line 215 "coverage.m"
              break;
#line 215 "coverage.m"
            case (MR_Integer) 1:
#line 215 "coverage.m"
#line 215 "coverage.m"
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 215 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 215 "coverage.m"
                case (MR_Integer) 0:
#line 215 "coverage.m"
#line 215 "coverage.m"
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 215 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 215 "coverage.m"
                    case (MR_Integer) 0:
#line 215 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 215 "coverage.m"
                      break;
#line 215 "coverage.m"
                    case (MR_Integer) 1:
#line 215 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 215 "coverage.m"
                      break;
#line 215 "coverage.m"
                  }
#line 215 "coverage.m"
                  break;
#line 215 "coverage.m"
                case (MR_Integer) 1:
#line 3550 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 215 "coverage.m"
                  break;
#line 215 "coverage.m"
              }
#line 215 "coverage.m"
              break;
#line 215 "coverage.m"
          }
#line 215 "coverage.m"
          break;
#line 215 "coverage.m"
        case (MR_Integer) 1:
#line 215 "coverage.m"
          {
#line 215 "coverage.m"
            MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 215 "coverage.m"
#line 215 "coverage.m"
            switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 215 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 215 "coverage.m"
              case (MR_Integer) 0:
#line 215 "coverage.m"
#line 215 "coverage.m"
                switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 215 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 215 "coverage.m"
                  case (MR_Integer) 0:
#line 3583 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 215 "coverage.m"
                    break;
#line 215 "coverage.m"
                  case (MR_Integer) 1:
#line 3589 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 215 "coverage.m"
                    break;
#line 215 "coverage.m"
                }
#line 215 "coverage.m"
                break;
#line 215 "coverage.m"
              case (MR_Integer) 1:
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
                break;
#line 215 "coverage.m"
            }
#line 215 "coverage.m"
          }
#line 215 "coverage.m"
          break;
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
#line 215 "coverage.m"
      switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
#line 215 "coverage.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 215 "coverage.m"
        case (MR_Integer) 0:
#line 215 "coverage.m"
#line 215 "coverage.m"
          switch (MR_unmkbody(coverage__HeadVar__1_1)) {
#line 215 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 215 "coverage.m"
            case (MR_Integer) 0:
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
              break;
#line 215 "coverage.m"
            case (MR_Integer) 1:
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
              break;
#line 215 "coverage.m"
          }
#line 215 "coverage.m"
          break;
#line 215 "coverage.m"
        case (MR_Integer) 1:
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
#line 3717 "coverage.c"
                coverage__succeeded = (coverage__V_7_7 == coverage__V_8_8);
#line 215 "coverage.m"
              }
#line 215 "coverage.m"
          }
#line 215 "coverage.m"
          break;
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
#line 3760 "coverage.c"
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
#line 3794 "coverage.c"
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

#line 3811 "coverage.c"
            {
#line 3813 "coverage.c"
              coverage__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3815 "coverage.c"
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_24_24, 0) = ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1));
#line 3817 "coverage.c"
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_24_24, 1) = ((MR_Box) (coverage__TypeInfo_for_Callee_20));
#line 3819 "coverage.c"
            }
#line 265 "coverage.m"
            {
#line 265 "coverage.m"
              mercury__tree234____Compare____tree234_2_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__TypeInfo_24_24, &coverage__V_15_15, coverage__V_5_5, coverage__V_10_10);
            }
#line 3826 "coverage.c"
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
#line 3846 "coverage.c"
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
#line 3866 "coverage.c"
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

#line 3963 "coverage.c"
        {
#line 3965 "coverage.c"
          coverage__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(coverage__V_3_3, coverage__V_8_8);
        }
#line 265 "coverage.m"
        if (coverage__succeeded)
#line 265 "coverage.m"
          {
#line 3972 "coverage.c"
            coverage__TypeCtorInfo_17_17 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 3974 "coverage.c"
            coverage__TypeCtorInfo_18_18 = (MR_Word) &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1;
#line 3976 "coverage.c"
            {
#line 3978 "coverage.c"
              coverage__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3980 "coverage.c"
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_19_19, 0) = ((MR_Box) (coverage__TypeCtorInfo_18_18));
#line 3982 "coverage.c"
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_19_19, 1) = ((MR_Box) (coverage__TypeInfo_for_Callee_15));
#line 3984 "coverage.c"
            }
#line 3986 "coverage.c"
            {
#line 3988 "coverage.c"
              coverage__succeeded = mercury__tree234____Unify____tree234_2_0(coverage__TypeCtorInfo_17_17, coverage__TypeInfo_19_19, coverage__V_4_4, coverage__V_9_9);
            }
#line 265 "coverage.m"
            if (coverage__succeeded)
#line 265 "coverage.m"
              {
#line 3995 "coverage.c"
                coverage__TypeInfo_22_22 = (MR_Word) &coverage_scalar_common_2[0];
#line 3997 "coverage.c"
                {
#line 3999 "coverage.c"
                  coverage__succeeded = mercury__builtin__unify_2_p_0(coverage__TypeInfo_22_22, ((MR_Box) (coverage__V_5_5)), ((MR_Box) (coverage__V_10_10)));
                }
#line 265 "coverage.m"
                if (coverage__succeeded)
#line 265 "coverage.m"
                  {
#line 4006 "coverage.c"
                    coverage__TypeInfo_23_23 = (MR_Word) &coverage_scalar_common_2[0];
#line 4008 "coverage.c"
                    {
#line 4010 "coverage.c"
                      coverage__succeeded = mercury__builtin__unify_2_p_0(coverage__TypeInfo_23_23, ((MR_Box) (coverage__V_6_6)), ((MR_Box) (coverage__V_11_11)));
                    }
#line 265 "coverage.m"
                    if (coverage__succeeded)
#line 265 "coverage.m"
                      {
#line 4017 "coverage.c"
                        coverage__TypeInfo_24_24 = (MR_Word) &coverage_scalar_common_2[1];
#line 4019 "coverage.c"
                        {
#line 4021 "coverage.c"
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
#line 4065 "coverage.c"
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
#line 4091 "coverage.c"
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
#line 4111 "coverage.c"
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

#line 4187 "coverage.c"
        coverage__succeeded = (coverage__V_3_3 == coverage__V_6_6);
#line 61 "coverage.m"
        if (coverage__succeeded)
#line 61 "coverage.m"
          {
#line 4193 "coverage.c"
            {
#line 4195 "coverage.c"
              coverage__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(coverage__V_4_4, coverage__V_7_7);
            }
#line 61 "coverage.m"
            if (coverage__succeeded)
#line 4200 "coverage.c"
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
#line 4237 "coverage.c"
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 30 "coverage.m"
    else
#line 30 "coverage.m"
#line 30 "coverage.m"
      switch (MR_tag((MR_Word) coverage__HeadVar__2_2)) {
#line 30 "coverage.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
        case (MR_Integer) 0:
#line 30 "coverage.m"
#line 30 "coverage.m"
          switch (MR_unmkbody(coverage__HeadVar__2_2)) {
#line 30 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
            case (MR_Integer) 0:
#line 30 "coverage.m"
#line 30 "coverage.m"
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 30 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                case (MR_Integer) 0:
#line 30 "coverage.m"
#line 30 "coverage.m"
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 30 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                    case (MR_Integer) 0:
#line 30 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 30 "coverage.m"
                      break;
#line 30 "coverage.m"
                    case (MR_Integer) 1:
#line 30 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                      break;
#line 30 "coverage.m"
                  }
#line 30 "coverage.m"
                  break;
#line 30 "coverage.m"
                case (MR_Integer) 1:
#line 4285 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                  break;
#line 30 "coverage.m"
                case (MR_Integer) 2:
#line 4291 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                  break;
#line 30 "coverage.m"
                case (MR_Integer) 3:
#line 30 "coverage.m"
#line 30 "coverage.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) {
#line 30 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                    case (MR_Integer) 0:
#line 4304 "coverage.c"
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                      break;
#line 30 "coverage.m"
                    case (MR_Integer) 1:
#line 4310 "coverage.c"
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                      break;
#line 30 "coverage.m"
                  }
#line 30 "coverage.m"
                  break;
#line 30 "coverage.m"
              }
#line 30 "coverage.m"
              break;
#line 30 "coverage.m"
            case (MR_Integer) 1:
#line 30 "coverage.m"
#line 30 "coverage.m"
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 30 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                case (MR_Integer) 0:
#line 30 "coverage.m"
#line 30 "coverage.m"
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 30 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                    case (MR_Integer) 0:
#line 30 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                      break;
#line 30 "coverage.m"
                    case (MR_Integer) 1:
#line 30 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 30 "coverage.m"
                      break;
#line 30 "coverage.m"
                  }
#line 30 "coverage.m"
                  break;
#line 30 "coverage.m"
                case (MR_Integer) 1:
#line 4354 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                  break;
#line 30 "coverage.m"
                case (MR_Integer) 2:
#line 4360 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                  break;
#line 30 "coverage.m"
                case (MR_Integer) 3:
#line 30 "coverage.m"
#line 30 "coverage.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) {
#line 30 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                    case (MR_Integer) 0:
#line 4373 "coverage.c"
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                      break;
#line 30 "coverage.m"
                    case (MR_Integer) 1:
#line 4379 "coverage.c"
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                      break;
#line 30 "coverage.m"
                  }
#line 30 "coverage.m"
                  break;
#line 30 "coverage.m"
              }
#line 30 "coverage.m"
              break;
#line 30 "coverage.m"
          }
#line 30 "coverage.m"
          break;
#line 30 "coverage.m"
        case (MR_Integer) 1:
#line 30 "coverage.m"
          {
#line 30 "coverage.m"
            MR_Integer coverage__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 30 "coverage.m"
#line 30 "coverage.m"
            switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 30 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
              case (MR_Integer) 0:
#line 30 "coverage.m"
#line 30 "coverage.m"
                switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 30 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                  case (MR_Integer) 0:
#line 4416 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                  case (MR_Integer) 1:
#line 4422 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                }
#line 30 "coverage.m"
                break;
#line 30 "coverage.m"
              case (MR_Integer) 1:
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
                break;
#line 30 "coverage.m"
              case (MR_Integer) 2:
#line 4450 "coverage.c"
                *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                break;
#line 30 "coverage.m"
              case (MR_Integer) 3:
#line 30 "coverage.m"
#line 30 "coverage.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) {
#line 30 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                  case (MR_Integer) 0:
#line 4463 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                  case (MR_Integer) 1:
#line 4469 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                }
#line 30 "coverage.m"
                break;
#line 30 "coverage.m"
            }
#line 30 "coverage.m"
          }
#line 30 "coverage.m"
          break;
#line 30 "coverage.m"
        case (MR_Integer) 2:
#line 30 "coverage.m"
          {
#line 30 "coverage.m"
            MR_Integer coverage__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "coverage.m"
            MR_Integer coverage__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 30 "coverage.m"
#line 30 "coverage.m"
            switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 30 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
              case (MR_Integer) 0:
#line 30 "coverage.m"
#line 30 "coverage.m"
                switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 30 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                  case (MR_Integer) 0:
#line 4506 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                  case (MR_Integer) 1:
#line 4512 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                }
#line 30 "coverage.m"
                break;
#line 30 "coverage.m"
              case (MR_Integer) 1:
#line 4522 "coverage.c"
                *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                break;
#line 30 "coverage.m"
              case (MR_Integer) 2:
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
#line 4542 "coverage.c"
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
                break;
#line 30 "coverage.m"
              case (MR_Integer) 3:
#line 30 "coverage.m"
#line 30 "coverage.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) {
#line 30 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                  case (MR_Integer) 0:
#line 4572 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                  case (MR_Integer) 1:
#line 4578 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                }
#line 30 "coverage.m"
                break;
#line 30 "coverage.m"
            }
#line 30 "coverage.m"
          }
#line 30 "coverage.m"
          break;
#line 30 "coverage.m"
        case (MR_Integer) 3:
#line 30 "coverage.m"
#line 30 "coverage.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 0)))) {
#line 30 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
            case (MR_Integer) 0:
#line 30 "coverage.m"
              {
#line 30 "coverage.m"
                MR_Integer coverage__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 1)));

#line 30 "coverage.m"
#line 30 "coverage.m"
                switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 30 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                  case (MR_Integer) 0:
#line 30 "coverage.m"
#line 30 "coverage.m"
                    switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 30 "coverage.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                      case (MR_Integer) 0:
#line 4620 "coverage.c"
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                        break;
#line 30 "coverage.m"
                      case (MR_Integer) 1:
#line 4626 "coverage.c"
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                        break;
#line 30 "coverage.m"
                    }
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                  case (MR_Integer) 1:
#line 4636 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                  case (MR_Integer) 2:
#line 4642 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                  case (MR_Integer) 3:
#line 30 "coverage.m"
#line 30 "coverage.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) {
#line 30 "coverage.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                      case (MR_Integer) 0:
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
                        break;
#line 30 "coverage.m"
                      case (MR_Integer) 1:
#line 4673 "coverage.c"
                        *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                        break;
#line 30 "coverage.m"
                    }
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                }
#line 30 "coverage.m"
              }
#line 30 "coverage.m"
              break;
#line 30 "coverage.m"
            case (MR_Integer) 1:
#line 30 "coverage.m"
              {
#line 30 "coverage.m"
                MR_Integer coverage__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__2_2, (MR_Integer) 1)));

#line 30 "coverage.m"
#line 30 "coverage.m"
                switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 30 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                  case (MR_Integer) 0:
#line 30 "coverage.m"
#line 30 "coverage.m"
                    switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 30 "coverage.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                      case (MR_Integer) 0:
#line 4708 "coverage.c"
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                        break;
#line 30 "coverage.m"
                      case (MR_Integer) 1:
#line 4714 "coverage.c"
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                        break;
#line 30 "coverage.m"
                    }
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                  case (MR_Integer) 1:
#line 4724 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                  case (MR_Integer) 2:
#line 4730 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                  case (MR_Integer) 3:
#line 30 "coverage.m"
#line 30 "coverage.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) {
#line 30 "coverage.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
                      case (MR_Integer) 0:
#line 4743 "coverage.c"
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                        break;
#line 30 "coverage.m"
                      case (MR_Integer) 1:
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
                        break;
#line 30 "coverage.m"
                    }
#line 30 "coverage.m"
                    break;
#line 30 "coverage.m"
                }
#line 30 "coverage.m"
              }
#line 30 "coverage.m"
              break;
#line 30 "coverage.m"
          }
#line 30 "coverage.m"
          break;
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
#line 30 "coverage.m"
      switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
#line 30 "coverage.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
        case (MR_Integer) 0:
#line 30 "coverage.m"
#line 30 "coverage.m"
          switch (MR_unmkbody(coverage__HeadVar__1_1)) {
#line 30 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
            case (MR_Integer) 0:
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
              break;
#line 30 "coverage.m"
            case (MR_Integer) 1:
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
              break;
#line 30 "coverage.m"
          }
#line 30 "coverage.m"
          break;
#line 30 "coverage.m"
        case (MR_Integer) 1:
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
#line 4875 "coverage.c"
                coverage__succeeded = (coverage__V_7_7 == coverage__V_8_8);
#line 30 "coverage.m"
              }
#line 30 "coverage.m"
          }
#line 30 "coverage.m"
          break;
#line 30 "coverage.m"
        case (MR_Integer) 2:
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
#line 4906 "coverage.c"
                coverage__succeeded = (coverage__V_9_9 == coverage__V_11_11);
#line 30 "coverage.m"
                if (coverage__succeeded)
#line 4910 "coverage.c"
                  coverage__succeeded = (coverage__V_10_10 == coverage__V_12_12);
#line 30 "coverage.m"
              }
#line 30 "coverage.m"
          }
#line 30 "coverage.m"
          break;
#line 30 "coverage.m"
        case (MR_Integer) 3:
#line 30 "coverage.m"
#line 30 "coverage.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 0)))) {
#line 30 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 30 "coverage.m"
            case (MR_Integer) 0:
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
#line 4942 "coverage.c"
                    coverage__succeeded = (coverage__V_13_13 == coverage__V_14_14);
#line 30 "coverage.m"
                  }
#line 30 "coverage.m"
              }
#line 30 "coverage.m"
              break;
#line 30 "coverage.m"
            case (MR_Integer) 1:
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
#line 4967 "coverage.c"
                    coverage__succeeded = (coverage__V_15_15 == coverage__V_16_16);
#line 30 "coverage.m"
                  }
#line 30 "coverage.m"
              }
#line 30 "coverage.m"
              break;
#line 30 "coverage.m"
          }
#line 30 "coverage.m"
          break;
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
#line 5012 "coverage.c"
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 200 "coverage.m"
    else
#line 200 "coverage.m"
#line 200 "coverage.m"
      switch (MR_tag((MR_Word) coverage__HeadVar__2_2)) {
#line 200 "coverage.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 200 "coverage.m"
        case (MR_Integer) 0:
#line 200 "coverage.m"
#line 200 "coverage.m"
          switch (MR_unmkbody(coverage__HeadVar__2_2)) {
#line 200 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 200 "coverage.m"
            case (MR_Integer) 0:
#line 200 "coverage.m"
#line 200 "coverage.m"
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 200 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 200 "coverage.m"
                case (MR_Integer) 0:
#line 200 "coverage.m"
#line 200 "coverage.m"
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 200 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 200 "coverage.m"
                    case (MR_Integer) 0:
#line 200 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 200 "coverage.m"
                      break;
#line 200 "coverage.m"
                    case (MR_Integer) 1:
#line 200 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 200 "coverage.m"
                      break;
#line 200 "coverage.m"
                  }
#line 200 "coverage.m"
                  break;
#line 200 "coverage.m"
                case (MR_Integer) 1:
#line 5060 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 200 "coverage.m"
                  break;
#line 200 "coverage.m"
              }
#line 200 "coverage.m"
              break;
#line 200 "coverage.m"
            case (MR_Integer) 1:
#line 200 "coverage.m"
#line 200 "coverage.m"
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 200 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 200 "coverage.m"
                case (MR_Integer) 0:
#line 200 "coverage.m"
#line 200 "coverage.m"
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 200 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 200 "coverage.m"
                    case (MR_Integer) 0:
#line 200 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 200 "coverage.m"
                      break;
#line 200 "coverage.m"
                    case (MR_Integer) 1:
#line 200 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 200 "coverage.m"
                      break;
#line 200 "coverage.m"
                  }
#line 200 "coverage.m"
                  break;
#line 200 "coverage.m"
                case (MR_Integer) 1:
#line 5100 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 200 "coverage.m"
                  break;
#line 200 "coverage.m"
              }
#line 200 "coverage.m"
              break;
#line 200 "coverage.m"
          }
#line 200 "coverage.m"
          break;
#line 200 "coverage.m"
        case (MR_Integer) 1:
#line 200 "coverage.m"
          {
#line 200 "coverage.m"
            MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 200 "coverage.m"
#line 200 "coverage.m"
            switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 200 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 200 "coverage.m"
              case (MR_Integer) 0:
#line 200 "coverage.m"
#line 200 "coverage.m"
                switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 200 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 200 "coverage.m"
                  case (MR_Integer) 0:
#line 5133 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 200 "coverage.m"
                    break;
#line 200 "coverage.m"
                  case (MR_Integer) 1:
#line 5139 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 200 "coverage.m"
                    break;
#line 200 "coverage.m"
                }
#line 200 "coverage.m"
                break;
#line 200 "coverage.m"
              case (MR_Integer) 1:
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
                break;
#line 200 "coverage.m"
            }
#line 200 "coverage.m"
          }
#line 200 "coverage.m"
          break;
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
#line 200 "coverage.m"
      switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
#line 200 "coverage.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 200 "coverage.m"
        case (MR_Integer) 0:
#line 200 "coverage.m"
#line 200 "coverage.m"
          switch (MR_unmkbody(coverage__HeadVar__1_1)) {
#line 200 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 200 "coverage.m"
            case (MR_Integer) 0:
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
              break;
#line 200 "coverage.m"
            case (MR_Integer) 1:
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
              break;
#line 200 "coverage.m"
          }
#line 200 "coverage.m"
          break;
#line 200 "coverage.m"
        case (MR_Integer) 1:
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
#line 5267 "coverage.c"
                coverage__succeeded = (coverage__V_7_7 == coverage__V_8_8);
#line 200 "coverage.m"
              }
#line 200 "coverage.m"
          }
#line 200 "coverage.m"
          break;
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
#line 5308 "coverage.c"
      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "coverage.m"
    else
#line 205 "coverage.m"
#line 205 "coverage.m"
      switch (MR_tag((MR_Word) coverage__HeadVar__2_2)) {
#line 205 "coverage.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 205 "coverage.m"
        case (MR_Integer) 0:
#line 205 "coverage.m"
#line 205 "coverage.m"
          switch (MR_unmkbody(coverage__HeadVar__2_2)) {
#line 205 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 205 "coverage.m"
            case (MR_Integer) 0:
#line 205 "coverage.m"
#line 205 "coverage.m"
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 205 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 205 "coverage.m"
                case (MR_Integer) 0:
#line 205 "coverage.m"
#line 205 "coverage.m"
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 205 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 205 "coverage.m"
                    case (MR_Integer) 0:
#line 205 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "coverage.m"
                      break;
#line 205 "coverage.m"
                    case (MR_Integer) 1:
#line 205 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 205 "coverage.m"
                      break;
#line 205 "coverage.m"
                  }
#line 205 "coverage.m"
                  break;
#line 205 "coverage.m"
                case (MR_Integer) 1:
#line 5356 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 205 "coverage.m"
                  break;
#line 205 "coverage.m"
              }
#line 205 "coverage.m"
              break;
#line 205 "coverage.m"
            case (MR_Integer) 1:
#line 205 "coverage.m"
#line 205 "coverage.m"
              switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 205 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 205 "coverage.m"
                case (MR_Integer) 0:
#line 205 "coverage.m"
#line 205 "coverage.m"
                  switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 205 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 205 "coverage.m"
                    case (MR_Integer) 0:
#line 205 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 205 "coverage.m"
                      break;
#line 205 "coverage.m"
                    case (MR_Integer) 1:
#line 205 "coverage.m"
                      *coverage__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "coverage.m"
                      break;
#line 205 "coverage.m"
                  }
#line 205 "coverage.m"
                  break;
#line 205 "coverage.m"
                case (MR_Integer) 1:
#line 5396 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 205 "coverage.m"
                  break;
#line 205 "coverage.m"
              }
#line 205 "coverage.m"
              break;
#line 205 "coverage.m"
          }
#line 205 "coverage.m"
          break;
#line 205 "coverage.m"
        case (MR_Integer) 1:
#line 205 "coverage.m"
          {
#line 205 "coverage.m"
            MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 205 "coverage.m"
#line 205 "coverage.m"
            switch (MR_tag((MR_Word) coverage__HeadVar__3_3)) {
#line 205 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 205 "coverage.m"
              case (MR_Integer) 0:
#line 205 "coverage.m"
#line 205 "coverage.m"
                switch (MR_unmkbody(coverage__HeadVar__3_3)) {
#line 205 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 205 "coverage.m"
                  case (MR_Integer) 0:
#line 5429 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 205 "coverage.m"
                    break;
#line 205 "coverage.m"
                  case (MR_Integer) 1:
#line 5435 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 205 "coverage.m"
                    break;
#line 205 "coverage.m"
                }
#line 205 "coverage.m"
                break;
#line 205 "coverage.m"
              case (MR_Integer) 1:
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
                break;
#line 205 "coverage.m"
            }
#line 205 "coverage.m"
          }
#line 205 "coverage.m"
          break;
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
#line 205 "coverage.m"
      switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
#line 205 "coverage.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 205 "coverage.m"
        case (MR_Integer) 0:
#line 205 "coverage.m"
#line 205 "coverage.m"
          switch (MR_unmkbody(coverage__HeadVar__1_1)) {
#line 205 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 205 "coverage.m"
            case (MR_Integer) 0:
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
              break;
#line 205 "coverage.m"
            case (MR_Integer) 1:
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
              break;
#line 205 "coverage.m"
          }
#line 205 "coverage.m"
          break;
#line 205 "coverage.m"
        case (MR_Integer) 1:
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
#line 5563 "coverage.c"
                coverage__succeeded = (coverage__V_7_7 == coverage__V_8_8);
#line 205 "coverage.m"
              }
#line 205 "coverage.m"
          }
#line 205 "coverage.m"
          break;
#line 205 "coverage.m"
      }
#line 205 "coverage.m"
    return coverage__succeeded;
#line 205 "coverage.m"
  }
#line 205 "coverage.m"
}

#line 1301 "coverage.m"
static MR_Word MR_CALL 
coverage__before_coverage_1_f_0(
#line 1301 "coverage.m"
  MR_Integer coverage__Count_3)
#line 1301 "coverage.m"
{
#line 1303 "coverage.m"
  {
#line 1303 "coverage.m"
    MR_bool coverage__succeeded = (coverage__Count_3 == (MR_Integer) 0);
#line 1303 "coverage.m"
    MR_Word coverage__HeadVar__2_2;

#line 1303 "coverage.m"
    if (coverage__succeeded)
#line 1305 "coverage.m"
      coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1303 "coverage.m"
    else
#line 1307 "coverage.m"
      {
#line 1307 "coverage.m"
        coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "coverage.m"
        MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, 0) = ((MR_Box) (coverage__Count_3));
#line 1307 "coverage.m"
      }
#line 1303 "coverage.m"
    return coverage__HeadVar__2_2;
#line 1303 "coverage.m"
  }
#line 1301 "coverage.m"
}

#line 1292 "coverage.m"
static MR_Word MR_CALL 
coverage__after_coverage_1_f_0(
#line 1292 "coverage.m"
  MR_Integer coverage__Count_3)
#line 1292 "coverage.m"
{
#line 1294 "coverage.m"
  {
#line 1294 "coverage.m"
    MR_bool coverage__succeeded = (coverage__Count_3 == (MR_Integer) 0);
#line 1294 "coverage.m"
    MR_Word coverage__HeadVar__2_2;

#line 1294 "coverage.m"
    if (coverage__succeeded)
#line 1296 "coverage.m"
      coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1294 "coverage.m"
    else
#line 1298 "coverage.m"
      {
#line 1298 "coverage.m"
        coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "coverage.m"
        MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, 0) = ((MR_Box) (coverage__Count_3));
#line 1298 "coverage.m"
      }
#line 1294 "coverage.m"
    return coverage__HeadVar__2_2;
#line 1294 "coverage.m"
  }
#line 1292 "coverage.m"
}

#line 1255 "coverage.m"
static void MR_CALL 
coverage__sum_after_coverage_3_p_0(
#line 1255 "coverage.m"
  MR_Word coverage__After_4,
#line 1255 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_8,
#line 1255 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumAfter_9)
#line 1255 "coverage.m"
{
#line 1260 "coverage.m"
  {
#line 1260 "coverage.m"
    MR_bool coverage__succeeded;

#line 1260 "coverage.m"
#line 1260 "coverage.m"
    switch (MR_tag((MR_Word) coverage__STATE_VARIABLE_SumAfter_0_8)) {
#line 1260 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1260 "coverage.m"
      case (MR_Integer) 0:
#line 1260 "coverage.m"
#line 1260 "coverage.m"
        switch (MR_unmkbody(coverage__STATE_VARIABLE_SumAfter_0_8)) {
#line 1260 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1260 "coverage.m"
          case (MR_Integer) 0:
#line 1282 "coverage.m"
            *coverage__STATE_VARIABLE_SumAfter_9 = coverage__STATE_VARIABLE_SumAfter_0_8;
#line 1260 "coverage.m"
            break;
#line 1260 "coverage.m"
          case (MR_Integer) 1:
#line 1275 "coverage.m"
#line 1275 "coverage.m"
            switch (MR_tag((MR_Word) coverage__After_4)) {
#line 1275 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1275 "coverage.m"
              case (MR_Integer) 0:
#line 1275 "coverage.m"
#line 1275 "coverage.m"
                switch (MR_unmkbody(coverage__After_4)) {
#line 1275 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1275 "coverage.m"
                  case (MR_Integer) 0:
#line 1279 "coverage.m"
                    *coverage__STATE_VARIABLE_SumAfter_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1275 "coverage.m"
                    break;
#line 1275 "coverage.m"
                  case (MR_Integer) 1:
#line 1276 "coverage.m"
                    *coverage__STATE_VARIABLE_SumAfter_9 = coverage__STATE_VARIABLE_SumAfter_0_8;
#line 1275 "coverage.m"
                    break;
#line 1275 "coverage.m"
                }
#line 1275 "coverage.m"
                break;
#line 1275 "coverage.m"
              case (MR_Integer) 1:
#line 1273 "coverage.m"
                {
#line 1273 "coverage.m"
                  MR_Integer coverage__ExecCount_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_4, (MR_Integer) 0)));

#line 1274 "coverage.m"
                  {
#line 1274 "coverage.m"
                    MR_Word base;
#line 1274 "coverage.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "coverage.m"
                    *coverage__STATE_VARIABLE_SumAfter_9 = base;
#line 1274 "coverage.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__ExecCount_15));
#line 1274 "coverage.m"
                  }
#line 1273 "coverage.m"
                }
#line 1275 "coverage.m"
                break;
#line 1275 "coverage.m"
            }
#line 1260 "coverage.m"
            break;
#line 1260 "coverage.m"
        }
#line 1260 "coverage.m"
        break;
#line 1260 "coverage.m"
      case (MR_Integer) 1:
#line 1260 "coverage.m"
        {
#line 1260 "coverage.m"
          MR_Integer coverage__SumExecCount_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumAfter_0_8, (MR_Integer) 0)));

#line 1264 "coverage.m"
#line 1264 "coverage.m"
          switch (MR_tag((MR_Word) coverage__After_4)) {
#line 1264 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "coverage.m"
            case (MR_Integer) 0:
#line 1264 "coverage.m"
#line 1264 "coverage.m"
              switch (MR_unmkbody(coverage__After_4)) {
#line 1264 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "coverage.m"
                case (MR_Integer) 0:
#line 1266 "coverage.m"
                  *coverage__STATE_VARIABLE_SumAfter_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1264 "coverage.m"
                  break;
#line 1264 "coverage.m"
                case (MR_Integer) 1:
#line 1268 "coverage.m"
                  *coverage__STATE_VARIABLE_SumAfter_9 = coverage__STATE_VARIABLE_SumAfter_0_8;
#line 1264 "coverage.m"
                  break;
#line 1264 "coverage.m"
              }
#line 1264 "coverage.m"
              break;
#line 1264 "coverage.m"
            case (MR_Integer) 1:
#line 1262 "coverage.m"
              {
#line 1262 "coverage.m"
                MR_Integer coverage__ExecCount_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_4, (MR_Integer) 0)));
#line 1262 "coverage.m"
                MR_Integer coverage__V_14_14 = (coverage__SumExecCount_6 + coverage__ExecCount_7);

#line 1263 "coverage.m"
                {
#line 1263 "coverage.m"
                  MR_Word base;
#line 1263 "coverage.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "coverage.m"
                  *coverage__STATE_VARIABLE_SumAfter_9 = base;
#line 1263 "coverage.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__V_14_14));
#line 1263 "coverage.m"
                }
#line 1262 "coverage.m"
              }
#line 1264 "coverage.m"
              break;
#line 1264 "coverage.m"
          }
#line 1260 "coverage.m"
        }
#line 1260 "coverage.m"
        break;
#line 1260 "coverage.m"
    }
#line 1260 "coverage.m"
  }
#line 1255 "coverage.m"
}

#line 1163 "coverage.m"
static void MR_CALL 
coverage__after_count_sum_after_count_2_p_0(
#line 1163 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 1163 "coverage.m"
  MR_Word * coverage__HeadVar__2_2)
#line 1163 "coverage.m"
{
#line 1166 "coverage.m"
  {
#line 1166 "coverage.m"
    MR_bool coverage__succeeded;

#line 1166 "coverage.m"
#line 1166 "coverage.m"
    switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
#line 1166 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1166 "coverage.m"
      case (MR_Integer) 0:
#line 1166 "coverage.m"
#line 1166 "coverage.m"
        switch (MR_unmkbody(coverage__HeadVar__1_1)) {
#line 1166 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1166 "coverage.m"
          case (MR_Integer) 0:
#line 1166 "coverage.m"
            *coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1166 "coverage.m"
            break;
#line 1166 "coverage.m"
          case (MR_Integer) 1:
#line 1167 "coverage.m"
            *coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1166 "coverage.m"
            break;
#line 1166 "coverage.m"
        }
#line 1166 "coverage.m"
        break;
#line 1166 "coverage.m"
      case (MR_Integer) 1:
#line 1168 "coverage.m"
        {
#line 1168 "coverage.m"
          MR_Integer coverage__C_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));

#line 1295 "coverage.m"
          coverage__succeeded = (coverage__C_3 == (MR_Integer) 0);
#line 1294 "coverage.m"
          if (coverage__succeeded)
#line 1296 "coverage.m"
            *coverage__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1294 "coverage.m"
          else
#line 1298 "coverage.m"
            {
#line 1298 "coverage.m"
              MR_Word base;
#line 1298 "coverage.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "coverage.m"
              *coverage__HeadVar__2_2 = base;
#line 1298 "coverage.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__C_3));
#line 1298 "coverage.m"
            }
#line 1168 "coverage.m"
        }
#line 1166 "coverage.m"
        break;
#line 1166 "coverage.m"
    }
#line 1166 "coverage.m"
  }
#line 1163 "coverage.m"
}

#line 1152 "coverage.m"
static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_3(
#line 1152 "coverage.m"
  MR_Box coverage__closure_arg)
#line 1152 "coverage.m"
{
#line 1152 "coverage.m"
  {
#line 1152 "coverage.m"
    MR_bool coverage__succeeded;
#line 1152 "coverage.m"
    MR_Box coverage__closure = coverage__closure_arg;

#line 1152 "coverage.m"
    {
#line 1152 "coverage.m"
      return coverage__succeeded = coverage__IntroducedFrom__pred__after_count_from_either_source__1152__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 4))));
    }
#line 1152 "coverage.m"
    return coverage__succeeded;
#line 1152 "coverage.m"
  }
#line 1152 "coverage.m"
}

#line 1141 "coverage.m"
static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_2(
#line 1141 "coverage.m"
  MR_Box coverage__closure_arg)
#line 1141 "coverage.m"
{
#line 1141 "coverage.m"
  {
#line 1141 "coverage.m"
    MR_bool coverage__succeeded;
#line 1141 "coverage.m"
    MR_Box coverage__closure = coverage__closure_arg;

#line 1141 "coverage.m"
    {
#line 1141 "coverage.m"
      return coverage__succeeded = coverage__IntroducedFrom__pred__after_count_from_either_source__1141__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 4))));
    }
#line 1141 "coverage.m"
    return coverage__succeeded;
#line 1141 "coverage.m"
  }
#line 1141 "coverage.m"
}

#line 1136 "coverage.m"
static MR_bool MR_CALL 
coverage__after_count_from_either_source_3_p_0_1(
#line 1136 "coverage.m"
  MR_Box coverage__closure_arg)
#line 1136 "coverage.m"
{
#line 1136 "coverage.m"
  {
#line 1136 "coverage.m"
    MR_bool coverage__succeeded;
#line 1136 "coverage.m"
    MR_Box coverage__closure = coverage__closure_arg;

#line 1136 "coverage.m"
    {
#line 1136 "coverage.m"
      return coverage__succeeded = coverage__IntroducedFrom__pred__after_count_from_either_source__1136__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 4))));
    }
#line 1136 "coverage.m"
    return coverage__succeeded;
#line 1136 "coverage.m"
  }
#line 1136 "coverage.m"
}

#line 1113 "coverage.m"
static void MR_CALL 
coverage__after_count_from_either_source_3_p_0(
#line 1113 "coverage.m"
  MR_Word coverage__AfterA_4,
#line 1113 "coverage.m"
  MR_Word coverage__AfterB_5,
#line 1113 "coverage.m"
  MR_Word * coverage__After_6)
#line 1113 "coverage.m"
{
#line 1118 "coverage.m"
  {
#line 1118 "coverage.m"
    MR_bool coverage__succeeded;

#line 1118 "coverage.m"
#line 1118 "coverage.m"
    switch (MR_tag((MR_Word) coverage__AfterA_4)) {
#line 1118 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1118 "coverage.m"
      case (MR_Integer) 0:
#line 1118 "coverage.m"
#line 1118 "coverage.m"
        switch (MR_unmkbody(coverage__AfterA_4)) {
#line 1118 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1118 "coverage.m"
          case (MR_Integer) 0:
#line 1122 "coverage.m"
#line 1122 "coverage.m"
            switch (MR_tag((MR_Word) coverage__AfterB_5)) {
#line 1122 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1122 "coverage.m"
              case (MR_Integer) 0:
#line 1122 "coverage.m"
#line 1122 "coverage.m"
                switch (MR_unmkbody(coverage__AfterB_5)) {
#line 1122 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1122 "coverage.m"
                  case (MR_Integer) 0:
#line 1121 "coverage.m"
                    *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1122 "coverage.m"
                    break;
#line 1122 "coverage.m"
                  case (MR_Integer) 1:
#line 1127 "coverage.m"
                    *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1122 "coverage.m"
                    break;
#line 1122 "coverage.m"
                }
#line 1122 "coverage.m"
                break;
#line 1122 "coverage.m"
              case (MR_Integer) 1:
#line 1123 "coverage.m"
                {
#line 1123 "coverage.m"
                  MR_Integer coverage__AfterCount_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterB_5, (MR_Integer) 0)));

#line 1295 "coverage.m"
                  coverage__succeeded = (coverage__AfterCount_7 == (MR_Integer) 0);
#line 1294 "coverage.m"
                  if (coverage__succeeded)
#line 1296 "coverage.m"
                    *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1294 "coverage.m"
                  else
#line 1298 "coverage.m"
                    *coverage__After_6 = coverage__AfterB_5;
#line 1123 "coverage.m"
                }
#line 1122 "coverage.m"
                break;
#line 1122 "coverage.m"
            }
#line 1118 "coverage.m"
            break;
#line 1118 "coverage.m"
          case (MR_Integer) 1:
#line 1150 "coverage.m"
#line 1150 "coverage.m"
            switch (MR_tag((MR_Word) coverage__AfterB_5)) {
#line 1150 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1150 "coverage.m"
              case (MR_Integer) 0:
#line 1150 "coverage.m"
#line 1150 "coverage.m"
                switch (MR_unmkbody(coverage__AfterB_5)) {
#line 1150 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1150 "coverage.m"
                  case (MR_Integer) 0:
#line 1149 "coverage.m"
                    *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1150 "coverage.m"
                    break;
#line 1150 "coverage.m"
                  case (MR_Integer) 1:
#line 1157 "coverage.m"
                    *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1150 "coverage.m"
                    break;
#line 1150 "coverage.m"
                }
#line 1150 "coverage.m"
                break;
#line 1150 "coverage.m"
              case (MR_Integer) 1:
#line 1151 "coverage.m"
                {
#line 1151 "coverage.m"
                  MR_Word coverage__V_10_10;
#line 1151 "coverage.m"
                  MR_Integer coverage__AfterCountB_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterB_5, (MR_Integer) 0)));

#line 1152 "coverage.m"
                  {
#line 1152 "coverage.m"
                    coverage__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1152 "coverage.m"
                    MR_hl_field(MR_mktag(0), coverage__V_10_10, 0) = ((MR_Box) (&coverage_scalar_common_3[2]));
#line 1152 "coverage.m"
                    MR_hl_field(MR_mktag(0), coverage__V_10_10, 1) = ((MR_Box) (coverage__after_count_from_either_source_3_p_0_3));
#line 1152 "coverage.m"
                    MR_hl_field(MR_mktag(0), coverage__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1152 "coverage.m"
                    MR_hl_field(MR_mktag(0), coverage__V_10_10, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1152 "coverage.m"
                    MR_hl_field(MR_mktag(0), coverage__V_10_10, 4) = ((MR_Box) (coverage__AfterCountB_18));
#line 1152 "coverage.m"
                  }
#line 1152 "coverage.m"
                  {
#line 1152 "coverage.m"
                    mercury__require__require_2_p_0(coverage__V_10_10, (MR_String) "after_count_from_either_source: mismatch");
                  }
#line 1154 "coverage.m"
                  *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1151 "coverage.m"
                }
#line 1150 "coverage.m"
                break;
#line 1150 "coverage.m"
            }
#line 1118 "coverage.m"
            break;
#line 1118 "coverage.m"
        }
#line 1118 "coverage.m"
        break;
#line 1118 "coverage.m"
      case (MR_Integer) 1:
#line 1130 "coverage.m"
        {
#line 1130 "coverage.m"
          MR_Integer coverage__AfterCountA_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterA_4, (MR_Integer) 0)));

#line 1134 "coverage.m"
#line 1134 "coverage.m"
          switch (MR_tag((MR_Word) coverage__AfterB_5)) {
#line 1134 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1134 "coverage.m"
            case (MR_Integer) 0:
#line 1134 "coverage.m"
#line 1134 "coverage.m"
              switch (MR_unmkbody(coverage__AfterB_5)) {
#line 1134 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1134 "coverage.m"
                case (MR_Integer) 0:
#line 1294 "coverage.m"
                  {
#line 1295 "coverage.m"
                    coverage__succeeded = (coverage__AfterCountA_8 == (MR_Integer) 0);
#line 1294 "coverage.m"
                    if (coverage__succeeded)
#line 1296 "coverage.m"
                      *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1294 "coverage.m"
                    else
#line 1298 "coverage.m"
                      *coverage__After_6 = coverage__AfterA_4;
#line 1294 "coverage.m"
                  }
#line 1134 "coverage.m"
                  break;
#line 1134 "coverage.m"
                case (MR_Integer) 1:
#line 1140 "coverage.m"
                  {
#line 1140 "coverage.m"
                    MR_Word coverage__V_13_13;

#line 1141 "coverage.m"
                    {
#line 1141 "coverage.m"
                      coverage__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "coverage.m"
                      MR_hl_field(MR_mktag(0), coverage__V_13_13, 0) = ((MR_Box) (&coverage_scalar_common_3[2]));
#line 1141 "coverage.m"
                      MR_hl_field(MR_mktag(0), coverage__V_13_13, 1) = ((MR_Box) (coverage__after_count_from_either_source_3_p_0_2));
#line 1141 "coverage.m"
                      MR_hl_field(MR_mktag(0), coverage__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1141 "coverage.m"
                      MR_hl_field(MR_mktag(0), coverage__V_13_13, 3) = ((MR_Box) (coverage__AfterCountA_8));
#line 1141 "coverage.m"
                      MR_hl_field(MR_mktag(0), coverage__V_13_13, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1141 "coverage.m"
                    }
#line 1141 "coverage.m"
                    {
#line 1141 "coverage.m"
                      mercury__require__require_2_p_0(coverage__V_13_13, (MR_String) "after_count_from_either_source: mismatch");
                    }
#line 1143 "coverage.m"
                    *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1140 "coverage.m"
                  }
#line 1134 "coverage.m"
                  break;
#line 1134 "coverage.m"
              }
#line 1134 "coverage.m"
              break;
#line 1134 "coverage.m"
            case (MR_Integer) 1:
#line 1135 "coverage.m"
              {
#line 1135 "coverage.m"
                MR_Integer coverage__AfterCountB_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterB_5, (MR_Integer) 0)));
#line 1135 "coverage.m"
                MR_Word coverage__V_16_16;

#line 1136 "coverage.m"
                {
#line 1136 "coverage.m"
                  coverage__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1136 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_16_16, 0) = ((MR_Box) (&coverage_scalar_common_3[2]));
#line 1136 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_16_16, 1) = ((MR_Box) (coverage__after_count_from_either_source_3_p_0_1));
#line 1136 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1136 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_16_16, 3) = ((MR_Box) (coverage__AfterCountA_8));
#line 1136 "coverage.m"
                  MR_hl_field(MR_mktag(0), coverage__V_16_16, 4) = ((MR_Box) (coverage__AfterCountB_9));
#line 1136 "coverage.m"
                }
#line 1136 "coverage.m"
                {
#line 1136 "coverage.m"
                  mercury__require__require_2_p_0(coverage__V_16_16, (MR_String) "after_count_from_either_source: mismatch");
                }
#line 1295 "coverage.m"
                coverage__succeeded = (coverage__AfterCountA_8 == (MR_Integer) 0);
#line 1294 "coverage.m"
                if (coverage__succeeded)
#line 1296 "coverage.m"
                  *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1294 "coverage.m"
                else
#line 1298 "coverage.m"
                  *coverage__After_6 = coverage__AfterA_4;
#line 1135 "coverage.m"
              }
#line 1134 "coverage.m"
              break;
#line 1134 "coverage.m"
          }
#line 1130 "coverage.m"
        }
#line 1118 "coverage.m"
        break;
#line 1118 "coverage.m"
    }
#line 1118 "coverage.m"
  }
#line 1113 "coverage.m"
}

#line 1098 "coverage.m"
static void MR_CALL 
coverage__after_to_before_coverage_2_p_0(
#line 1098 "coverage.m"
  MR_Word coverage__After_3,
#line 1098 "coverage.m"
  MR_Word * coverage__Before_4)
#line 1098 "coverage.m"
{
#line 1103 "coverage.m"
  {
#line 1103 "coverage.m"
    MR_bool coverage__succeeded;

#line 1103 "coverage.m"
#line 1103 "coverage.m"
    switch (MR_tag((MR_Word) coverage__After_3)) {
#line 1103 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1103 "coverage.m"
      case (MR_Integer) 0:
#line 1103 "coverage.m"
#line 1103 "coverage.m"
        switch (MR_unmkbody(coverage__After_3)) {
#line 1103 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1103 "coverage.m"
          case (MR_Integer) 0:
#line 1104 "coverage.m"
            *coverage__Before_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1103 "coverage.m"
            break;
#line 1103 "coverage.m"
          case (MR_Integer) 1:
#line 1110 "coverage.m"
            *coverage__Before_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1103 "coverage.m"
            break;
#line 1103 "coverage.m"
        }
#line 1103 "coverage.m"
        break;
#line 1103 "coverage.m"
      case (MR_Integer) 1:
#line 1106 "coverage.m"
        {
#line 1106 "coverage.m"
          MR_Integer coverage__ExecCount_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__After_3, (MR_Integer) 0)));

#line 1107 "coverage.m"
          {
#line 1107 "coverage.m"
            MR_Word base;
#line 1107 "coverage.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "coverage.m"
            *coverage__Before_4 = base;
#line 1107 "coverage.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__ExecCount_5));
#line 1107 "coverage.m"
          }
#line 1106 "coverage.m"
        }
#line 1103 "coverage.m"
        break;
#line 1103 "coverage.m"
    }
#line 1103 "coverage.m"
  }
#line 1098 "coverage.m"
}

#line 1067 "coverage.m"
static void MR_CALL 
coverage__propagate_detism_coverage_3_p_0(
#line 1067 "coverage.m"
  MR_Word coverage__Detism_4,
#line 1067 "coverage.m"
  MR_Word coverage__Before_5,
#line 1067 "coverage.m"
  MR_Word * coverage__After_6)
#line 1067 "coverage.m"
{
#line 1080 "coverage.m"
  {
#line 1080 "coverage.m"
    MR_bool coverage__succeeded;

#line 1080 "coverage.m"
#line 1080 "coverage.m"
    switch (coverage__Detism_4) {
#line 1080 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1080 "coverage.m"
      case (MR_Integer) 5:
#line 1080 "coverage.m"
      case (MR_Integer) 0:
#line 1049 "coverage.m"
#line 1049 "coverage.m"
        switch (MR_tag((MR_Word) coverage__Before_5)) {
#line 1049 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1049 "coverage.m"
          case (MR_Integer) 0:
#line 1049 "coverage.m"
#line 1049 "coverage.m"
            switch (MR_unmkbody(coverage__Before_5)) {
#line 1049 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1049 "coverage.m"
              case (MR_Integer) 0:
#line 1050 "coverage.m"
                *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1049 "coverage.m"
                break;
#line 1049 "coverage.m"
              case (MR_Integer) 1:
#line 1056 "coverage.m"
                *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1049 "coverage.m"
                break;
#line 1049 "coverage.m"
            }
#line 1049 "coverage.m"
            break;
#line 1049 "coverage.m"
          case (MR_Integer) 1:
#line 1052 "coverage.m"
            {
#line 1052 "coverage.m"
              MR_Integer coverage__Count_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_5, (MR_Integer) 0)));

#line 1295 "coverage.m"
              coverage__succeeded = (coverage__Count_9 == (MR_Integer) 0);
#line 1294 "coverage.m"
              if (coverage__succeeded)
#line 1296 "coverage.m"
                *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1294 "coverage.m"
              else
#line 1298 "coverage.m"
                {
#line 1298 "coverage.m"
                  MR_Word base;
#line 1298 "coverage.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "coverage.m"
                  *coverage__After_6 = base;
#line 1298 "coverage.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__Count_9));
#line 1298 "coverage.m"
                }
#line 1052 "coverage.m"
            }
#line 1049 "coverage.m"
            break;
#line 1049 "coverage.m"
        }
#line 1080 "coverage.m"
        break;
#line 1080 "coverage.m"
      case (MR_Integer) 4:
#line 1080 "coverage.m"
      case (MR_Integer) 3:
#line 1080 "coverage.m"
      case (MR_Integer) 2:
#line 1080 "coverage.m"
      case (MR_Integer) 1:
#line 1095 "coverage.m"
        *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1080 "coverage.m"
        break;
#line 1080 "coverage.m"
      case (MR_Integer) 6:
#line 1080 "coverage.m"
      case (MR_Integer) 7:
#line 1087 "coverage.m"
        *coverage__After_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1080 "coverage.m"
        break;
#line 1080 "coverage.m"
    }
#line 1080 "coverage.m"
  }
#line 1067 "coverage.m"
}

#line 946 "coverage.m"
static void MR_CALL 
coverage__sum_switch_case_coverage_4_p_0(
#line 946 "coverage.m"
  MR_Word coverage__Array_5,
#line 946 "coverage.m"
  MR_Word coverage__HeadVar__2_2,
#line 946 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Acc_0_15,
#line 946 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Acc_16)
#line 946 "coverage.m"
{
#line 949 "coverage.m"
  {
#line 949 "coverage.m"
    MR_bool coverage__succeeded;
#line 949 "coverage.m"
    MR_Word coverage__Goal_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 2)));
#line 949 "coverage.m"
    MR_Word coverage__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 0)));
#line 949 "coverage.m"
    MR_Word coverage__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__HeadVar__2_2, (MR_Integer) 1)));

#line 967 "coverage.m"
    if ((coverage__STATE_VARIABLE_Acc_0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 968 "coverage.m"
      *coverage__STATE_VARIABLE_Acc_16 = coverage__STATE_VARIABLE_Acc_0_15;
#line 967 "coverage.m"
    else
#line 951 "coverage.m"
      {
#line 951 "coverage.m"
        MR_Integer coverage__Count_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_Acc_0_15, (MR_Integer) 0)));
#line 951 "coverage.m"
        MR_Word coverage__Coverage_11;
#line 951 "coverage.m"
        MR_Word coverage__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_8, (MR_Integer) 2)));
#line 952 "coverage.m"
        MR_Word coverage__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_8, (MR_Integer) 0)));
#line 952 "coverage.m"
        MR_Word coverage__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_8, (MR_Integer) 1)));
#line 952 "coverage.m"
        MR_Box coverage__conv0_Coverage_11;

#line 952 "coverage.m"
        {
#line 952 "coverage.m"
          coverage__conv0_Coverage_11 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, coverage__Array_5, coverage__V_17_17);
        }
#line 952 "coverage.m"
        coverage__Coverage_11 = ((MR_Word) coverage__conv0_Coverage_11);
#line 959 "coverage.m"
#line 959 "coverage.m"
        switch (MR_tag((MR_Word) coverage__Coverage_11)) {
#line 959 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 959 "coverage.m"
          case (MR_Integer) 0:
#line 959 "coverage.m"
#line 959 "coverage.m"
            switch (MR_unmkbody(coverage__Coverage_11)) {
#line 959 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 959 "coverage.m"
              case (MR_Integer) 0:
#line 965 "coverage.m"
                *coverage__STATE_VARIABLE_Acc_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 959 "coverage.m"
                break;
#line 959 "coverage.m"
              case (MR_Integer) 1:
#line 960 "coverage.m"
                *coverage__STATE_VARIABLE_Acc_16 = coverage__STATE_VARIABLE_Acc_0_15;
#line 959 "coverage.m"
                break;
#line 959 "coverage.m"
            }
#line 959 "coverage.m"
            break;
#line 959 "coverage.m"
          case (MR_Integer) 1:
#line 957 "coverage.m"
            {
#line 957 "coverage.m"
              MR_Integer coverage__Addend_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_11, (MR_Integer) 0)));
#line 957 "coverage.m"
              MR_Integer coverage__V_27_27 = (coverage__Count_10 + coverage__Addend_26);

#line 958 "coverage.m"
              {
#line 958 "coverage.m"
                MR_Word base;
#line 958 "coverage.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 958 "coverage.m"
                *coverage__STATE_VARIABLE_Acc_16 = base;
#line 958 "coverage.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__V_27_27));
#line 958 "coverage.m"
              }
#line 957 "coverage.m"
            }
#line 959 "coverage.m"
            break;
#line 959 "coverage.m"
          case (MR_Integer) 2:
#line 957 "coverage.m"
            {
#line 957 "coverage.m"
              MR_Integer coverage__Addend_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_11, (MR_Integer) 0)));
#line 957 "coverage.m"
              MR_Integer coverage__V_20_20 = (coverage__Count_10 + coverage__Addend_12);
#line 955 "coverage.m"
              MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_11, (MR_Integer) 1)));

#line 958 "coverage.m"
              {
#line 958 "coverage.m"
                MR_Word base;
#line 958 "coverage.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 958 "coverage.m"
                *coverage__STATE_VARIABLE_Acc_16 = base;
#line 958 "coverage.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__V_20_20));
#line 958 "coverage.m"
              }
#line 957 "coverage.m"
            }
#line 959 "coverage.m"
            break;
#line 959 "coverage.m"
          case (MR_Integer) 3:
#line 959 "coverage.m"
#line 959 "coverage.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__Coverage_11, (MR_Integer) 0)))) {
#line 959 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 959 "coverage.m"
              case (MR_Integer) 0:
#line 957 "coverage.m"
                {
#line 957 "coverage.m"
                  MR_Integer coverage__Addend_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__Coverage_11, (MR_Integer) 1)));
#line 957 "coverage.m"
                  MR_Integer coverage__V_25_25 = (coverage__Count_10 + coverage__Addend_24);

#line 958 "coverage.m"
                  {
#line 958 "coverage.m"
                    MR_Word base;
#line 958 "coverage.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 958 "coverage.m"
                    *coverage__STATE_VARIABLE_Acc_16 = base;
#line 958 "coverage.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__V_25_25));
#line 958 "coverage.m"
                  }
#line 957 "coverage.m"
                }
#line 959 "coverage.m"
                break;
#line 959 "coverage.m"
              case (MR_Integer) 1:
#line 965 "coverage.m"
                *coverage__STATE_VARIABLE_Acc_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 959 "coverage.m"
                break;
#line 959 "coverage.m"
            }
#line 959 "coverage.m"
            break;
#line 959 "coverage.m"
        }
#line 951 "coverage.m"
      }
#line 949 "coverage.m"
  }
#line 946 "coverage.m"
}

#line 802 "coverage.m"
static MR_bool MR_CALL 
coverage__check_coverage_regarding_detism_2_p_0(
#line 802 "coverage.m"
  MR_Word coverage__Coverage_3,
#line 802 "coverage.m"
  MR_Word coverage__Detism_4)
#line 802 "coverage.m"
{
#line 814 "coverage.m"
  {
#line 814 "coverage.m"
    MR_bool coverage__succeeded;

#line 814 "coverage.m"
#line 814 "coverage.m"
    switch (coverage__Detism_4) {
#line 814 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 814 "coverage.m"
      case (MR_Integer) 5:
#line 814 "coverage.m"
      case (MR_Integer) 0:
#line 821 "coverage.m"
#line 821 "coverage.m"
        switch (MR_tag((MR_Word) coverage__Coverage_3)) {
#line 821 "coverage.m"
          default:
#line 821 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 821 "coverage.m"
            break;
#line 821 "coverage.m"
          case (MR_Integer) 0:
#line 820 "coverage.m"
            coverage__succeeded = MR_TRUE;
#line 821 "coverage.m"
            break;
#line 821 "coverage.m"
          case (MR_Integer) 1:
#line 820 "coverage.m"
            coverage__succeeded = MR_TRUE;
#line 821 "coverage.m"
            break;
#line 821 "coverage.m"
          case (MR_Integer) 2:
#line 822 "coverage.m"
            {
#line 822 "coverage.m"
              MR_Integer coverage__Entry_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 0)));
#line 822 "coverage.m"
              MR_Integer coverage__Exit_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 1)));

#line 826 "coverage.m"
              coverage__succeeded = (coverage__Entry_10 >= coverage__Exit_11);
#line 822 "coverage.m"
            }
#line 821 "coverage.m"
            break;
#line 821 "coverage.m"
        }
#line 814 "coverage.m"
        break;
#line 814 "coverage.m"
      case (MR_Integer) 4:
#line 814 "coverage.m"
      case (MR_Integer) 1:
#line 851 "coverage.m"
#line 851 "coverage.m"
        switch (MR_tag((MR_Word) coverage__Coverage_3)) {
#line 851 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 851 "coverage.m"
          case (MR_Integer) 0:
#line 850 "coverage.m"
            coverage__succeeded = MR_TRUE;
#line 851 "coverage.m"
            break;
#line 851 "coverage.m"
          case (MR_Integer) 1:
#line 850 "coverage.m"
            coverage__succeeded = MR_TRUE;
#line 851 "coverage.m"
            break;
#line 851 "coverage.m"
          case (MR_Integer) 2:
#line 852 "coverage.m"
            {
#line 852 "coverage.m"
              MR_Integer coverage__Entry_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 0)));
#line 852 "coverage.m"
              MR_Integer coverage__Exit_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 1)));

#line 853 "coverage.m"
              coverage__succeeded = (coverage__Entry_24 >= coverage__Exit_25);
#line 852 "coverage.m"
            }
#line 851 "coverage.m"
            break;
#line 851 "coverage.m"
          case (MR_Integer) 3:
#line 850 "coverage.m"
            coverage__succeeded = MR_TRUE;
#line 851 "coverage.m"
            break;
#line 851 "coverage.m"
        }
#line 814 "coverage.m"
        break;
#line 814 "coverage.m"
      case (MR_Integer) 6:
#line 814 "coverage.m"
      case (MR_Integer) 7:
#line 893 "coverage.m"
#line 893 "coverage.m"
        switch (MR_tag((MR_Word) coverage__Coverage_3)) {
#line 893 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 893 "coverage.m"
          case (MR_Integer) 0:
#line 893 "coverage.m"
#line 893 "coverage.m"
            switch (MR_unmkbody(coverage__Coverage_3)) {
#line 893 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 893 "coverage.m"
              case (MR_Integer) 0:
#line 902 "coverage.m"
                coverage__succeeded = MR_TRUE;
#line 893 "coverage.m"
                break;
#line 893 "coverage.m"
              case (MR_Integer) 1:
#line 897 "coverage.m"
                coverage__succeeded = MR_TRUE;
#line 893 "coverage.m"
                break;
#line 893 "coverage.m"
            }
#line 893 "coverage.m"
            break;
#line 893 "coverage.m"
          case (MR_Integer) 1:
#line 887 "coverage.m"
            {
#line 887 "coverage.m"
              MR_Integer coverage__Exit_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_3, (MR_Integer) 0)));

#line 888 "coverage.m"
              coverage__succeeded = (coverage__Exit_34 == (MR_Integer) 0);
#line 887 "coverage.m"
            }
#line 893 "coverage.m"
            break;
#line 893 "coverage.m"
          case (MR_Integer) 2:
#line 887 "coverage.m"
            {
#line 887 "coverage.m"
              MR_Integer coverage__Exit_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 1)));
#line 884 "coverage.m"
              MR_Integer coverage__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), coverage__Coverage_3, (MR_Integer) 0)));

#line 888 "coverage.m"
              coverage__succeeded = (coverage__Exit_30 == (MR_Integer) 0);
#line 887 "coverage.m"
            }
#line 893 "coverage.m"
            break;
#line 893 "coverage.m"
          case (MR_Integer) 3:
#line 893 "coverage.m"
#line 893 "coverage.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 0)))) {
#line 893 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 893 "coverage.m"
              case (MR_Integer) 0:
#line 897 "coverage.m"
                coverage__succeeded = MR_TRUE;
#line 893 "coverage.m"
                break;
#line 893 "coverage.m"
              case (MR_Integer) 1:
#line 887 "coverage.m"
                {
#line 887 "coverage.m"
                  MR_Integer coverage__Exit_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 1)));

#line 888 "coverage.m"
                  coverage__succeeded = (coverage__Exit_33 == (MR_Integer) 0);
#line 887 "coverage.m"
                }
#line 893 "coverage.m"
                break;
#line 893 "coverage.m"
            }
#line 893 "coverage.m"
            break;
#line 893 "coverage.m"
        }
#line 814 "coverage.m"
        break;
#line 814 "coverage.m"
      case (MR_Integer) 3:
#line 869 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 814 "coverage.m"
        break;
#line 814 "coverage.m"
      case (MR_Integer) 2:
#line 877 "coverage.m"
        coverage__succeeded = MR_TRUE;
#line 814 "coverage.m"
        break;
#line 814 "coverage.m"
    }
#line 814 "coverage.m"
    return coverage__succeeded;
#line 814 "coverage.m"
  }
#line 802 "coverage.m"
}

#line 778 "coverage.m"
static void MR_CALL 
coverage__scope_annotate_coverage_7_p_0(
#line 778 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_18,
#line 778 "coverage.m"
  MR_Word coverage__Goal_8,
#line 778 "coverage.m"
  MR_Word coverage__Info_9,
#line 778 "coverage.m"
  MR_Word coverage__MaybeCut_10,
#line 778 "coverage.m"
  MR_Word coverage__Before_11,
#line 778 "coverage.m"
  MR_Word * coverage__After_12,
#line 778 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_15,
#line 778 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_16)
#line 778 "coverage.m"
{
#line 784 "coverage.m"
  {
#line 784 "coverage.m"
    MR_bool coverage__succeeded;
#line 784 "coverage.m"
    MR_Word coverage__AfterScopedGoal_14;

#line 785 "coverage.m"
    {
#line 785 "coverage.m"
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_18, coverage__Goal_8, coverage__Info_9, coverage__Before_11, &coverage__AfterScopedGoal_14, coverage__STATE_VARIABLE_Array_0_15, coverage__STATE_VARIABLE_Array_16);
    }
#line 789 "coverage.m"
#line 789 "coverage.m"
    switch (coverage__MaybeCut_10) {
#line 789 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 789 "coverage.m"
      case (MR_Integer) 0:
#line 788 "coverage.m"
        *coverage__After_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 789 "coverage.m"
        break;
#line 789 "coverage.m"
      case (MR_Integer) 1:
#line 791 "coverage.m"
        *coverage__After_12 = coverage__AfterScopedGoal_14;
#line 789 "coverage.m"
        break;
#line 789 "coverage.m"
    }
#line 784 "coverage.m"
  }
#line 778 "coverage.m"
}

#line 763 "coverage.m"
static void MR_CALL 
coverage__negation_annotate_coverage_6_p_0(
#line 763 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_27,
#line 763 "coverage.m"
  MR_Word coverage__Goal_7,
#line 763 "coverage.m"
  MR_Word coverage__Info_8,
#line 763 "coverage.m"
  MR_Word coverage__Before_9,
#line 763 "coverage.m"
  MR_Word * coverage__After_10,
#line 763 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_14,
#line 763 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_15)
#line 763 "coverage.m"
{
#line 769 "coverage.m"
  {
#line 769 "coverage.m"
    MR_bool coverage__succeeded;
#line 770 "coverage.m"
    MR_Word coverage___CoverageAfter_12;

#line 770 "coverage.m"
    {
#line 770 "coverage.m"
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_27, coverage__Goal_7, coverage__Info_8, coverage__Before_9, &coverage___CoverageAfter_12, coverage__STATE_VARIABLE_Array_0_14, coverage__STATE_VARIABLE_Array_15);
    }
#line 772 "coverage.m"
    *coverage__After_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 769 "coverage.m"
  }
#line 763 "coverage.m"
}

#line 615 "coverage.m"
static void MR_CALL 
coverage__ite_annotate_coverage_9_p_0(
#line 615 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_128,
#line 615 "coverage.m"
  MR_Word coverage__Cond_10,
#line 615 "coverage.m"
  MR_Word coverage__Then_11,
#line 615 "coverage.m"
  MR_Word coverage__Else_12,
#line 615 "coverage.m"
  MR_Word coverage__Info_13,
#line 615 "coverage.m"
  MR_Word coverage__RevGoalPath_14,
#line 615 "coverage.m"
  MR_Word coverage__Before_15,
#line 615 "coverage.m"
  MR_Word * coverage__After_16,
#line 615 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_35,
#line 615 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_36)
#line 615 "coverage.m"
{
#line 622 "coverage.m"
  {
#line 622 "coverage.m"
    MR_bool coverage__succeeded;
#line 622 "coverage.m"
    MR_Word coverage__CondDetism_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cond_10, (MR_Integer) 1)));
#line 622 "coverage.m"
    MR_Word coverage__GoalPathMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 4)));
#line 622 "coverage.m"
    MR_Word coverage__AfterCond_20;
#line 622 "coverage.m"
    MR_Word coverage__BeforeThen0_21;
#line 622 "coverage.m"
    MR_Word coverage__BeforeThen_23;
#line 622 "coverage.m"
    MR_Word coverage__CondSolns_25;
#line 622 "coverage.m"
    MR_Word coverage__BeforeElse_27;
#line 622 "coverage.m"
    MR_Word coverage__AfterThen_31;
#line 622 "coverage.m"
    MR_Word coverage__AfterElse_32;
#line 622 "coverage.m"
    MR_Word coverage__STATE_VARIABLE_Array_37_37;
#line 622 "coverage.m"
    MR_Word coverage__STATE_VARIABLE_Array_63_63;
#line 623 "coverage.m"
    MR_Word coverage__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cond_10, (MR_Integer) 0)));
#line 623 "coverage.m"
    MR_Word coverage__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Cond_10, (MR_Integer) 2)));
#line 624 "coverage.m"
    MR_Word coverage__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 0)));
#line 624 "coverage.m"
    MR_Word coverage__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 1)));
#line 624 "coverage.m"
    MR_Word coverage__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 2)));
#line 624 "coverage.m"
    MR_Word coverage__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_13, (MR_Integer) 3)));

#line 628 "coverage.m"
    {
#line 628 "coverage.m"
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_128, coverage__Cond_10, coverage__Info_13, coverage__Before_15, &coverage__AfterCond_20, coverage__STATE_VARIABLE_Array_0_35, &coverage__STATE_VARIABLE_Array_37_37);
    }
#line 629 "coverage.m"
    {
#line 629 "coverage.m"
      coverage__after_to_before_coverage_2_p_0(coverage__AfterCond_20, &coverage__BeforeThen0_21);
    }
#line 638 "coverage.m"
#line 638 "coverage.m"
    switch (MR_tag((MR_Word) coverage__BeforeThen0_21)) {
#line 638 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 638 "coverage.m"
      case (MR_Integer) 0:
#line 638 "coverage.m"
#line 638 "coverage.m"
        switch (MR_unmkbody(coverage__BeforeThen0_21)) {
#line 638 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 638 "coverage.m"
          case (MR_Integer) 0:
#line 639 "coverage.m"
            {
#line 639 "coverage.m"
              MR_Word coverage__RevThenGoalPath_24;
#line 639 "coverage.m"
              MR_Word coverage__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Then_11, (MR_Integer) 2)));
#line 640 "coverage.m"
              MR_Word coverage__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Then_11, (MR_Integer) 0)));
#line 640 "coverage.m"
              MR_Word coverage__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Then_11, (MR_Integer) 1)));
#line 640 "coverage.m"
              MR_Box coverage__conv0_RevThenGoalPath_24;

#line 640 "coverage.m"
              {
#line 640 "coverage.m"
                coverage__conv0_RevThenGoalPath_24 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__V_38_38)));
              }
#line 640 "coverage.m"
              coverage__RevThenGoalPath_24 = ((MR_Word) coverage__conv0_RevThenGoalPath_24);
#line 641 "coverage.m"
              {
#line 641 "coverage.m"
                coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevThenGoalPath_24, &coverage__BeforeThen_23);
              }
#line 639 "coverage.m"
            }
#line 638 "coverage.m"
            break;
#line 638 "coverage.m"
          case (MR_Integer) 1:
#line 637 "coverage.m"
            coverage__BeforeThen_23 = coverage__BeforeThen0_21;
#line 638 "coverage.m"
            break;
#line 638 "coverage.m"
        }
#line 638 "coverage.m"
        break;
#line 638 "coverage.m"
      case (MR_Integer) 1:
#line 637 "coverage.m"
        coverage__BeforeThen_23 = coverage__BeforeThen0_21;
#line 638 "coverage.m"
        break;
#line 638 "coverage.m"
    }
#line 644 "coverage.m"
    {
#line 644 "coverage.m"
      coverage__CondSolns_25 = mdbcomp__program_representation__detism_get_solutions_1_f_0(coverage__CondDetism_18);
    }
#line 649 "coverage.m"
#line 649 "coverage.m"
    switch (coverage__CondSolns_25) {
#line 649 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 649 "coverage.m"
      case (MR_Integer) 2:
#line 646 "coverage.m"
        {
#line 646 "coverage.m"
          MR_Word coverage__RevElseGoalPath_26;
#line 646 "coverage.m"
          MR_Word coverage__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 2)));
#line 647 "coverage.m"
          MR_Word coverage__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 0)));
#line 647 "coverage.m"
          MR_Word coverage__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 1)));
#line 647 "coverage.m"
          MR_Box coverage__conv1_RevElseGoalPath_26;

#line 647 "coverage.m"
          {
#line 647 "coverage.m"
            coverage__conv1_RevElseGoalPath_26 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__V_42_42)));
          }
#line 647 "coverage.m"
          coverage__RevElseGoalPath_26 = ((MR_Word) coverage__conv1_RevElseGoalPath_26);
#line 648 "coverage.m"
          {
#line 648 "coverage.m"
            coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevElseGoalPath_26, &coverage__BeforeElse_27);
          }
#line 646 "coverage.m"
        }
#line 649 "coverage.m"
        break;
#line 649 "coverage.m"
      case (MR_Integer) 1:
#line 649 "coverage.m"
      case (MR_Integer) 0:
#line 677 "coverage.m"
#line 677 "coverage.m"
        switch (MR_tag((MR_Word) coverage__BeforeThen_23)) {
#line 677 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 677 "coverage.m"
          case (MR_Integer) 0:
#line 677 "coverage.m"
#line 677 "coverage.m"
            switch (MR_unmkbody(coverage__BeforeThen_23)) {
#line 677 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 677 "coverage.m"
              case (MR_Integer) 0:
#line 678 "coverage.m"
                {
#line 678 "coverage.m"
                  MR_Word coverage__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 2)));
#line 678 "coverage.m"
                  MR_Word coverage__RevElseGoalPath_108;
#line 679 "coverage.m"
                  MR_Word coverage__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 0)));
#line 679 "coverage.m"
                  MR_Word coverage__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 1)));
#line 679 "coverage.m"
                  MR_Box coverage__conv3_RevElseGoalPath_108;

#line 679 "coverage.m"
                  {
#line 679 "coverage.m"
                    coverage__conv3_RevElseGoalPath_108 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__V_39_39)));
                  }
#line 679 "coverage.m"
                  coverage__RevElseGoalPath_108 = ((MR_Word) coverage__conv3_RevElseGoalPath_108);
#line 680 "coverage.m"
                  {
#line 680 "coverage.m"
                    coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevElseGoalPath_108, &coverage__BeforeElse_27);
                  }
#line 678 "coverage.m"
                }
#line 677 "coverage.m"
                break;
#line 677 "coverage.m"
              case (MR_Integer) 1:
#line 662 "coverage.m"
                {
#line 671 "coverage.m"
#line 671 "coverage.m"
                  switch (MR_tag((MR_Word) coverage__Before_15)) {
#line 671 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 671 "coverage.m"
                    case (MR_Integer) 0:
#line 671 "coverage.m"
#line 671 "coverage.m"
                      switch (MR_unmkbody(coverage__Before_15)) {
#line 671 "coverage.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 671 "coverage.m"
                        case (MR_Integer) 0:
#line 672 "coverage.m"
                          {
#line 672 "coverage.m"
                            MR_Word coverage__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 2)));
#line 672 "coverage.m"
                            MR_Word coverage__RevElseGoalPath_147;
#line 673 "coverage.m"
                            MR_Word coverage__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 0)));
#line 673 "coverage.m"
                            MR_Word coverage__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 1)));
#line 673 "coverage.m"
                            MR_Box coverage__conv4_RevElseGoalPath_147;

#line 673 "coverage.m"
                            {
#line 673 "coverage.m"
                              coverage__conv4_RevElseGoalPath_147 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__V_146_146)));
                            }
#line 673 "coverage.m"
                            coverage__RevElseGoalPath_147 = ((MR_Word) coverage__conv4_RevElseGoalPath_147);
#line 675 "coverage.m"
                            {
#line 675 "coverage.m"
                              coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevElseGoalPath_147, &coverage__BeforeElse_27);
                            }
#line 672 "coverage.m"
                          }
#line 671 "coverage.m"
                          break;
#line 671 "coverage.m"
                        case (MR_Integer) 1:
#line 669 "coverage.m"
                          {
#line 670 "coverage.m"
                            {
#line 670 "coverage.m"
                              coverage__BeforeElse_27 = coverage__before_coverage_1_f_0(((MR_Integer) 0 - (MR_Integer) 0));
                            }
#line 669 "coverage.m"
                          }
#line 671 "coverage.m"
                          break;
#line 671 "coverage.m"
                      }
#line 671 "coverage.m"
                      break;
#line 671 "coverage.m"
                    case (MR_Integer) 1:
#line 669 "coverage.m"
                      {
#line 669 "coverage.m"
                        MR_Integer coverage__BeforeCount_142 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_15, (MR_Integer) 0)));
#line 669 "coverage.m"
                        MR_Integer coverage__V_143_143 = (coverage__BeforeCount_142 - (MR_Integer) 0);

#line 670 "coverage.m"
                        {
#line 670 "coverage.m"
                          coverage__BeforeElse_27 = coverage__before_coverage_1_f_0(coverage__V_143_143);
                        }
#line 669 "coverage.m"
                      }
#line 671 "coverage.m"
                      break;
#line 671 "coverage.m"
                  }
#line 662 "coverage.m"
                }
#line 677 "coverage.m"
                break;
#line 677 "coverage.m"
            }
#line 677 "coverage.m"
            break;
#line 677 "coverage.m"
          case (MR_Integer) 1:
#line 662 "coverage.m"
            {
#line 662 "coverage.m"
              MR_Integer coverage__BeforeThenCount_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeThen_23, (MR_Integer) 0)));

#line 671 "coverage.m"
#line 671 "coverage.m"
              switch (MR_tag((MR_Word) coverage__Before_15)) {
#line 671 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 671 "coverage.m"
                case (MR_Integer) 0:
#line 671 "coverage.m"
#line 671 "coverage.m"
                  switch (MR_unmkbody(coverage__Before_15)) {
#line 671 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 671 "coverage.m"
                    case (MR_Integer) 0:
#line 672 "coverage.m"
                      {
#line 672 "coverage.m"
                        MR_Word coverage__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 2)));
#line 672 "coverage.m"
                        MR_Word coverage__RevElseGoalPath_105;
#line 673 "coverage.m"
                        MR_Word coverage__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 0)));
#line 673 "coverage.m"
                        MR_Word coverage__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Else_12, (MR_Integer) 1)));
#line 673 "coverage.m"
                        MR_Box coverage__conv2_RevElseGoalPath_105;

#line 673 "coverage.m"
                        {
#line 673 "coverage.m"
                          coverage__conv2_RevElseGoalPath_105 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__GoalPathMap_19, ((MR_Box) (coverage__V_40_40)));
                        }
#line 673 "coverage.m"
                        coverage__RevElseGoalPath_105 = ((MR_Word) coverage__conv2_RevElseGoalPath_105);
#line 675 "coverage.m"
                        {
#line 675 "coverage.m"
                          coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_98_114_97_110_99_104_95_115_116_97_114_116_95_99_111_118_101_114_97_103_101_95_95_91_49_93_95_48_3_p_0(coverage__Info_13, coverage__RevElseGoalPath_105, &coverage__BeforeElse_27);
                        }
#line 672 "coverage.m"
                      }
#line 671 "coverage.m"
                      break;
#line 671 "coverage.m"
                    case (MR_Integer) 1:
#line 669 "coverage.m"
                      {
#line 669 "coverage.m"
                        MR_Integer coverage__V_141_141 = ((MR_Integer) 0 - coverage__BeforeThenCount_28);

#line 670 "coverage.m"
                        {
#line 670 "coverage.m"
                          coverage__BeforeElse_27 = coverage__before_coverage_1_f_0(coverage__V_141_141);
                        }
#line 669 "coverage.m"
                      }
#line 671 "coverage.m"
                      break;
#line 671 "coverage.m"
                  }
#line 671 "coverage.m"
                  break;
#line 671 "coverage.m"
                case (MR_Integer) 1:
#line 669 "coverage.m"
                  {
#line 669 "coverage.m"
                    MR_Integer coverage__BeforeCount_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_15, (MR_Integer) 0)));
#line 669 "coverage.m"
                    MR_Integer coverage__V_41_41 = (coverage__BeforeCount_29 - coverage__BeforeThenCount_28);

#line 670 "coverage.m"
                    {
#line 670 "coverage.m"
                      coverage__BeforeElse_27 = coverage__before_coverage_1_f_0(coverage__V_41_41);
                    }
#line 669 "coverage.m"
                  }
#line 671 "coverage.m"
                  break;
#line 671 "coverage.m"
              }
#line 662 "coverage.m"
            }
#line 677 "coverage.m"
            break;
#line 677 "coverage.m"
        }
#line 649 "coverage.m"
        break;
#line 649 "coverage.m"
    }
#line 694 "coverage.m"
    {
#line 694 "coverage.m"
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_128, coverage__Then_11, coverage__Info_13, coverage__BeforeThen_23, &coverage__AfterThen_31, coverage__STATE_VARIABLE_Array_37_37, &coverage__STATE_VARIABLE_Array_63_63);
    }
#line 695 "coverage.m"
    {
#line 695 "coverage.m"
      coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_128, coverage__Else_12, coverage__Info_13, coverage__BeforeElse_27, &coverage__AfterElse_32, coverage__STATE_VARIABLE_Array_63_63, coverage__STATE_VARIABLE_Array_36);
    }
#line 711 "coverage.m"
#line 711 "coverage.m"
    switch (MR_tag((MR_Word) coverage__AfterThen_31)) {
#line 711 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 711 "coverage.m"
      case (MR_Integer) 0:
#line 711 "coverage.m"
#line 711 "coverage.m"
        switch (MR_unmkbody(coverage__AfterThen_31)) {
#line 711 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 711 "coverage.m"
          case (MR_Integer) 0:
#line 725 "coverage.m"
            *coverage__After_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "coverage.m"
            break;
#line 711 "coverage.m"
          case (MR_Integer) 1:
#line 716 "coverage.m"
#line 716 "coverage.m"
            switch (MR_tag((MR_Word) coverage__AfterElse_32)) {
#line 716 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 716 "coverage.m"
              case (MR_Integer) 0:
#line 716 "coverage.m"
#line 716 "coverage.m"
                switch (MR_unmkbody(coverage__AfterElse_32)) {
#line 716 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 716 "coverage.m"
                  case (MR_Integer) 0:
#line 721 "coverage.m"
                    *coverage__After_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 716 "coverage.m"
                    break;
#line 716 "coverage.m"
                  case (MR_Integer) 1:
#line 718 "coverage.m"
                    *coverage__After_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 716 "coverage.m"
                    break;
#line 716 "coverage.m"
                }
#line 716 "coverage.m"
                break;
#line 716 "coverage.m"
              case (MR_Integer) 1:
#line 714 "coverage.m"
                {
#line 714 "coverage.m"
                  MR_Integer coverage__AfterElseExecCount_111 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterElse_32, (MR_Integer) 0)));

#line 715 "coverage.m"
                  {
#line 715 "coverage.m"
                    *coverage__After_16 = coverage__after_coverage_1_f_0(coverage__AfterElseExecCount_111);
                  }
#line 714 "coverage.m"
                }
#line 716 "coverage.m"
                break;
#line 716 "coverage.m"
            }
#line 711 "coverage.m"
            break;
#line 711 "coverage.m"
        }
#line 711 "coverage.m"
        break;
#line 711 "coverage.m"
      case (MR_Integer) 1:
#line 700 "coverage.m"
        {
#line 700 "coverage.m"
          MR_Integer coverage__AfterThenExecCount_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterThen_31, (MR_Integer) 0)));

#line 704 "coverage.m"
#line 704 "coverage.m"
          switch (MR_tag((MR_Word) coverage__AfterElse_32)) {
#line 704 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 704 "coverage.m"
            case (MR_Integer) 0:
#line 704 "coverage.m"
#line 704 "coverage.m"
              switch (MR_unmkbody(coverage__AfterElse_32)) {
#line 704 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 704 "coverage.m"
                case (MR_Integer) 0:
#line 709 "coverage.m"
                  *coverage__After_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 704 "coverage.m"
                  break;
#line 704 "coverage.m"
                case (MR_Integer) 1:
#line 706 "coverage.m"
                  {
#line 706 "coverage.m"
                    *coverage__After_16 = coverage__after_coverage_1_f_0(coverage__AfterThenExecCount_33);
                  }
#line 704 "coverage.m"
                  break;
#line 704 "coverage.m"
              }
#line 704 "coverage.m"
              break;
#line 704 "coverage.m"
            case (MR_Integer) 1:
#line 702 "coverage.m"
              {
#line 702 "coverage.m"
                MR_Integer coverage__AfterElseExecCount_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__AfterElse_32, (MR_Integer) 0)));
#line 702 "coverage.m"
                MR_Integer coverage__V_65_65 = (coverage__AfterThenExecCount_33 + coverage__AfterElseExecCount_34);

#line 703 "coverage.m"
                {
#line 703 "coverage.m"
                  *coverage__After_16 = coverage__after_coverage_1_f_0(coverage__V_65_65);
                }
#line 702 "coverage.m"
              }
#line 704 "coverage.m"
              break;
#line 704 "coverage.m"
          }
#line 700 "coverage.m"
        }
#line 711 "coverage.m"
        break;
#line 711 "coverage.m"
    }
#line 730 "coverage.m"
    {
#line 730 "coverage.m"
      coverage__succeeded = coverage__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_105_116_101_95_99_111_118_101_114_97_103_101_95_95_91_55_93_95_48_9_p_0(coverage__Before_15, *coverage__After_16, coverage__Before_15, coverage__AfterCond_20, coverage__BeforeThen_23, coverage__AfterThen_31, coverage__AfterElse_32, coverage__CondDetism_18);
    }
#line 734 "coverage.m"
    if (coverage__succeeded)
#line 733 "coverage.m"
      {
#line 733 "coverage.m"
      }
#line 734 "coverage.m"
    else
#line 735 "coverage.m"
      {
#line 735 "coverage.m"
        MR_Word coverage__TypeCtorInfo_138_138 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_before_0;
#line 735 "coverage.m"
        MR_Word coverage__TypeCtorInfo_139_139;
#line 735 "coverage.m"
        MR_String coverage__V_69_69;
#line 735 "coverage.m"
        MR_Word coverage__V_77_77;
#line 735 "coverage.m"
        MR_Word coverage__V_78_78;
#line 735 "coverage.m"
        MR_String coverage__V_79_79;
#line 735 "coverage.m"
        MR_Word coverage__V_80_80;
#line 735 "coverage.m"
        MR_Word coverage__V_81_81;
#line 735 "coverage.m"
        MR_String coverage__V_82_82;
#line 735 "coverage.m"
        MR_Word coverage__V_83_83;
#line 735 "coverage.m"
        MR_Word coverage__V_84_84;
#line 735 "coverage.m"
        MR_String coverage__V_85_85;
#line 735 "coverage.m"
        MR_Word coverage__V_86_86;
#line 735 "coverage.m"
        MR_Word coverage__V_87_87;
#line 735 "coverage.m"
        MR_String coverage__V_88_88;
#line 735 "coverage.m"
        MR_Word coverage__V_89_89;
#line 735 "coverage.m"
        MR_Word coverage__V_90_90;
#line 735 "coverage.m"
        MR_String coverage__V_91_91;
#line 735 "coverage.m"
        MR_Word coverage__V_92_92;
#line 735 "coverage.m"
        MR_Word coverage__V_93_93;
#line 735 "coverage.m"
        MR_String coverage__V_94_94;
#line 735 "coverage.m"
        MR_Word coverage__V_95_95;
#line 735 "coverage.m"
        MR_Word coverage__V_96_96;
#line 735 "coverage.m"
        MR_String coverage__V_97_97;
#line 735 "coverage.m"
        MR_Word coverage__V_98_98;
#line 735 "coverage.m"
        MR_Word coverage__V_99_99;
#line 735 "coverage.m"
        MR_String coverage__V_100_100;
#line 735 "coverage.m"
        MR_Word coverage__V_101_101;
#line 735 "coverage.m"
        MR_Word coverage__V_102_102;
#line 735 "coverage.m"
        MR_String coverage__V_103_103;

#line 741 "coverage.m"
        {
#line 741 "coverage.m"
          coverage__V_79_79 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_138_138, ((MR_Box) (coverage__Before_15)));
        }
#line 741 "coverage.m"
        {
#line 741 "coverage.m"
          coverage__V_78_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 741 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_78_78, 0) = ((MR_Box) (coverage__V_79_79));
#line 741 "coverage.m"
        }
#line 7604 "coverage.c"
        coverage__TypeCtorInfo_139_139 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_after_0;
#line 741 "coverage.m"
        {
#line 741 "coverage.m"
          coverage__V_82_82 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_139_139, ((MR_Box) (*coverage__After_16)));
        }
#line 741 "coverage.m"
        {
#line 741 "coverage.m"
          coverage__V_81_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 741 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_81_81, 0) = ((MR_Box) (coverage__V_82_82));
#line 741 "coverage.m"
        }
#line 742 "coverage.m"
        {
#line 742 "coverage.m"
          coverage__V_85_85 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_138_138, ((MR_Box) (coverage__Before_15)));
        }
#line 742 "coverage.m"
        {
#line 742 "coverage.m"
          coverage__V_84_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 742 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_84_84, 0) = ((MR_Box) (coverage__V_85_85));
#line 742 "coverage.m"
        }
#line 742 "coverage.m"
        {
#line 742 "coverage.m"
          coverage__V_88_88 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_139_139, ((MR_Box) (coverage__AfterCond_20)));
        }
#line 742 "coverage.m"
        {
#line 742 "coverage.m"
          coverage__V_87_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 742 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_87_87, 0) = ((MR_Box) (coverage__V_88_88));
#line 742 "coverage.m"
        }
#line 743 "coverage.m"
        {
#line 743 "coverage.m"
          coverage__V_91_91 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_138_138, ((MR_Box) (coverage__BeforeThen_23)));
        }
#line 743 "coverage.m"
        {
#line 743 "coverage.m"
          coverage__V_90_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 743 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_90_90, 0) = ((MR_Box) (coverage__V_91_91));
#line 743 "coverage.m"
        }
#line 743 "coverage.m"
        {
#line 743 "coverage.m"
          coverage__V_94_94 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_139_139, ((MR_Box) (coverage__AfterThen_31)));
        }
#line 743 "coverage.m"
        {
#line 743 "coverage.m"
          coverage__V_93_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 743 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_93_93, 0) = ((MR_Box) (coverage__V_94_94));
#line 743 "coverage.m"
        }
#line 744 "coverage.m"
        {
#line 744 "coverage.m"
          coverage__V_97_97 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_138_138, ((MR_Box) (coverage__BeforeElse_27)));
        }
#line 744 "coverage.m"
        {
#line 744 "coverage.m"
          coverage__V_96_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 744 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_96_96, 0) = ((MR_Box) (coverage__V_97_97));
#line 744 "coverage.m"
        }
#line 744 "coverage.m"
        {
#line 744 "coverage.m"
          coverage__V_100_100 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_139_139, ((MR_Box) (coverage__AfterElse_32)));
        }
#line 744 "coverage.m"
        {
#line 744 "coverage.m"
          coverage__V_99_99 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 744 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_99_99, 0) = ((MR_Box) (coverage__V_100_100));
#line 744 "coverage.m"
        }
#line 745 "coverage.m"
        {
#line 745 "coverage.m"
          coverage__V_103_103 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(coverage__RevGoalPath_14);
        }
#line 745 "coverage.m"
        {
#line 745 "coverage.m"
          coverage__V_102_102 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 745 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_102_102, 0) = ((MR_Box) (coverage__V_103_103));
#line 745 "coverage.m"
        }
#line 745 "coverage.m"
        {
#line 745 "coverage.m"
          coverage__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_101_101, 0) = ((MR_Box) (coverage__V_102_102));
#line 745 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 745 "coverage.m"
        }
#line 744 "coverage.m"
        {
#line 744 "coverage.m"
          coverage__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_98_98, 0) = ((MR_Box) (coverage__V_99_99));
#line 744 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_98_98, 1) = ((MR_Box) (coverage__V_101_101));
#line 744 "coverage.m"
        }
#line 744 "coverage.m"
        {
#line 744 "coverage.m"
          coverage__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_95_95, 0) = ((MR_Box) (coverage__V_96_96));
#line 744 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_95_95, 1) = ((MR_Box) (coverage__V_98_98));
#line 744 "coverage.m"
        }
#line 743 "coverage.m"
        {
#line 743 "coverage.m"
          coverage__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_92_92, 0) = ((MR_Box) (coverage__V_93_93));
#line 743 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_92_92, 1) = ((MR_Box) (coverage__V_95_95));
#line 743 "coverage.m"
        }
#line 743 "coverage.m"
        {
#line 743 "coverage.m"
          coverage__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_89_89, 0) = ((MR_Box) (coverage__V_90_90));
#line 743 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_89_89, 1) = ((MR_Box) (coverage__V_92_92));
#line 743 "coverage.m"
        }
#line 742 "coverage.m"
        {
#line 742 "coverage.m"
          coverage__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_86_86, 0) = ((MR_Box) (coverage__V_87_87));
#line 742 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_86_86, 1) = ((MR_Box) (coverage__V_89_89));
#line 742 "coverage.m"
        }
#line 742 "coverage.m"
        {
#line 742 "coverage.m"
          coverage__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_83_83, 0) = ((MR_Box) (coverage__V_84_84));
#line 742 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_83_83, 1) = ((MR_Box) (coverage__V_86_86));
#line 742 "coverage.m"
        }
#line 741 "coverage.m"
        {
#line 741 "coverage.m"
          coverage__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_80_80, 0) = ((MR_Box) (coverage__V_81_81));
#line 741 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_80_80, 1) = ((MR_Box) (coverage__V_83_83));
#line 741 "coverage.m"
        }
#line 741 "coverage.m"
        {
#line 741 "coverage.m"
          coverage__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_77_77, 0) = ((MR_Box) (coverage__V_78_78));
#line 741 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_77_77, 1) = ((MR_Box) (coverage__V_80_80));
#line 741 "coverage.m"
        }
#line 736 "coverage.m"
        {
#line 736 "coverage.m"
          coverage__V_69_69 = mercury__string__format_2_f_0((MR_String) "check_ite_coverage/4 failed\n\tWhole: %s %s\n\tCond: %s %s\n\tThen: %s %s\n\tElse: %s %s\n\tGoalPath: %s\n", coverage__V_77_77);
        }
#line 735 "coverage.m"
        {
#line 735 "coverage.m"
          mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.ite_annotate_coverage\'/9", coverage__V_69_69);
#line 735 "coverage.m"
          return;
        }
#line 735 "coverage.m"
      }
#line 622 "coverage.m"
  }
#line 615 "coverage.m"
}

#line 560 "coverage.m"
static void MR_CALL 
coverage__switch_annotate_coverage_2_10_p_0(
#line 560 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_60,
#line 560 "coverage.m"
  MR_Word coverage__HeadVar__1_1,
#line 560 "coverage.m"
  MR_Word coverage__Info_2,
#line 560 "coverage.m"
  MR_Word coverage__CanFail_3,
#line 560 "coverage.m"
  MR_Word coverage__SwitchBefore_4,
#line 560 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumBefore_0_5,
#line 560 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumBefore_6,
#line 560 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_SumAfter_0_7,
#line 560 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_SumAfter_8,
#line 560 "coverage.m"
  MR_Word coverage__STATE_VARIABLE_Array_0_9,
#line 560 "coverage.m"
  MR_Word * coverage__STATE_VARIABLE_Array_10)
#line 560 "coverage.m"
{
#line 567 "coverage.m"
  while (MR_TRUE)
#line 567 "coverage.m"
    {
#line 567 "coverage.m"
      /* tailcall optimized into a loop */
#line 567 "coverage.m"
      {
#line 567 "coverage.m"
        MR_bool coverage__succeeded;

#line 567 "coverage.m"
        if ((coverage__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 567 "coverage.m"
          {
#line 567 "coverage.m"
            *coverage__STATE_VARIABLE_Array_10 = coverage__STATE_VARIABLE_Array_0_9;
#line 567 "coverage.m"
            *coverage__STATE_VARIABLE_SumAfter_8 = coverage__STATE_VARIABLE_SumAfter_0_7;
#line 567 "coverage.m"
            *coverage__STATE_VARIABLE_SumBefore_6 = coverage__STATE_VARIABLE_SumBefore_0_5;
#line 567 "coverage.m"
          }
#line 567 "coverage.m"
        else
#line 569 "coverage.m"
          {
#line 569 "coverage.m"
            MR_Word coverage__Case_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 569 "coverage.m"
            MR_Word coverage__Cases_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 569 "coverage.m"
            MR_Word coverage__BeforeCase_33;
#line 569 "coverage.m"
            MR_Word coverage__Goal_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Case_23, (MR_Integer) 2)));
#line 569 "coverage.m"
            MR_Word coverage__AfterCase_38;
#line 569 "coverage.m"
            MR_Word coverage__STATE_VARIABLE_Array_48_48;
#line 569 "coverage.m"
            MR_Word coverage__STATE_VARIABLE_SumBefore_49_49;
#line 569 "coverage.m"
            MR_Word coverage__STATE_VARIABLE_SumAfter_50_50;
#line 603 "coverage.m"
            MR_Word coverage___ConsID_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Case_23, (MR_Integer) 0)));
#line 603 "coverage.m"
            MR_Word coverage___OtherConsIDs_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Case_23, (MR_Integer) 1)));
#line 595 "coverage.m"
            MR_Integer coverage__SwitchBeforeExecCount_31;
#line 595 "coverage.m"
            MR_Integer coverage__SumBeforeExecCount_32;

#line 578 "coverage.m"
            coverage__succeeded = (coverage__Cases_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 578 "coverage.m"
            if (coverage__succeeded)
#line 578 "coverage.m"
              {
#line 579 "coverage.m"
                coverage__succeeded = (coverage__CanFail_3 == (MR_Integer) 1);
#line 578 "coverage.m"
                if (coverage__succeeded)
#line 578 "coverage.m"
                  {
#line 582 "coverage.m"
                    if ((coverage__SwitchBefore_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 584 "coverage.m"
                      {
#line 584 "coverage.m"
                        coverage__SwitchBeforeExecCount_31 = (MR_Integer) 0;
#line 584 "coverage.m"
                        coverage__succeeded = MR_TRUE;
#line 584 "coverage.m"
                      }
#line 582 "coverage.m"
                    else
#line 582 "coverage.m"
                    if (((MR_tag((MR_Word) coverage__SwitchBefore_4)) == (MR_mktag((MR_Integer) 1))))
#line 581 "coverage.m"
                      {
#line 581 "coverage.m"
                        coverage__SwitchBeforeExecCount_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__SwitchBefore_4, (MR_Integer) 0)));
#line 581 "coverage.m"
                        coverage__succeeded = MR_TRUE;
#line 581 "coverage.m"
                      }
#line 582 "coverage.m"
                    else
#line 582 "coverage.m"
                      coverage__succeeded = MR_FALSE;
#line 578 "coverage.m"
                    if (coverage__succeeded)
#line 588 "coverage.m"
                      {
#line 588 "coverage.m"
                        if ((coverage__STATE_VARIABLE_SumBefore_0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 590 "coverage.m"
                          {
#line 590 "coverage.m"
                            coverage__SumBeforeExecCount_32 = (MR_Integer) 0;
#line 590 "coverage.m"
                            coverage__succeeded = MR_TRUE;
#line 590 "coverage.m"
                          }
#line 588 "coverage.m"
                        else
#line 588 "coverage.m"
                        if (((MR_tag((MR_Word) coverage__STATE_VARIABLE_SumBefore_0_5)) == (MR_mktag((MR_Integer) 1))))
#line 587 "coverage.m"
                          {
#line 587 "coverage.m"
                            coverage__SumBeforeExecCount_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumBefore_0_5, (MR_Integer) 0)));
#line 587 "coverage.m"
                            coverage__succeeded = MR_TRUE;
#line 587 "coverage.m"
                          }
#line 588 "coverage.m"
                        else
#line 588 "coverage.m"
                          coverage__succeeded = MR_FALSE;
#line 588 "coverage.m"
                      }
#line 578 "coverage.m"
                  }
#line 578 "coverage.m"
              }
#line 595 "coverage.m"
            if (coverage__succeeded)
#line 593 "coverage.m"
              {
#line 593 "coverage.m"
                MR_Integer coverage__V_45_45 = (coverage__SwitchBeforeExecCount_31 - coverage__SumBeforeExecCount_32);

#line 1304 "coverage.m"
                coverage__succeeded = (coverage__V_45_45 == (MR_Integer) 0);
#line 1303 "coverage.m"
                if (coverage__succeeded)
#line 1305 "coverage.m"
                  coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1303 "coverage.m"
                else
#line 1307 "coverage.m"
                  {
#line 1307 "coverage.m"
                    coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "coverage.m"
                    MR_hl_field(MR_mktag(1), coverage__BeforeCase_33, 0) = ((MR_Box) (coverage__V_45_45));
#line 1307 "coverage.m"
                  }
#line 593 "coverage.m"
              }
#line 595 "coverage.m"
            else
#line 598 "coverage.m"
              {
#line 598 "coverage.m"
                MR_Word coverage__RevCaseGoalPath_34;
#line 598 "coverage.m"
                MR_Word coverage__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 4)));
#line 598 "coverage.m"
                MR_Word coverage__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_35, (MR_Integer) 2)));
#line 597 "coverage.m"
                MR_Word coverage__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 0)));
#line 597 "coverage.m"
                MR_Word coverage__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 1)));
#line 597 "coverage.m"
                MR_Word coverage__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 2)));
#line 597 "coverage.m"
                MR_Word coverage__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 3)));
#line 597 "coverage.m"
                MR_Word coverage__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_35, (MR_Integer) 0)));
#line 597 "coverage.m"
                MR_Word coverage__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Goal_35, (MR_Integer) 1)));
#line 597 "coverage.m"
                MR_Box coverage__conv0_RevCaseGoalPath_34;
#line 759 "coverage.m"
                MR_Word coverage__CP_67;
#line 756 "coverage.m"
                MR_Word coverage__V_71_71;
#line 756 "coverage.m"
                MR_Word coverage__V_72_72;
#line 756 "coverage.m"
                MR_Word coverage__V_73_73;
#line 756 "coverage.m"
                MR_Word coverage__V_74_74;
#line 756 "coverage.m"
                MR_Word coverage__V_75_75;
#line 756 "coverage.m"
                MR_Box coverage__conv1_CP_67;

#line 597 "coverage.m"
                {
#line 597 "coverage.m"
                  coverage__conv0_RevCaseGoalPath_34 = mercury__map__lookup_2_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__V_46_46, ((MR_Box) (coverage__V_47_47)));
                }
#line 597 "coverage.m"
                coverage__RevCaseGoalPath_34 = ((MR_Word) coverage__conv0_RevCaseGoalPath_34);
#line 756 "coverage.m"
                coverage__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 0)));
#line 756 "coverage.m"
                coverage__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 1)));
#line 756 "coverage.m"
                coverage__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 2)));
#line 756 "coverage.m"
                coverage__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 3)));
#line 756 "coverage.m"
                coverage__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__Info_2, (MR_Integer) 4)));
#line 756 "coverage.m"
                {
#line 756 "coverage.m"
                  coverage__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, coverage__V_71_71, ((MR_Box) (coverage__RevCaseGoalPath_34)), &coverage__conv1_CP_67);
                }
#line 756 "coverage.m"
                if (coverage__succeeded)
#line 756 "coverage.m"
                  {
#line 756 "coverage.m"
                    coverage__CP_67 = ((MR_Word) coverage__conv1_CP_67);
#line 756 "coverage.m"
                    coverage__succeeded = MR_TRUE;
#line 756 "coverage.m"
                  }
#line 759 "coverage.m"
                if (coverage__succeeded)
#line 757 "coverage.m"
                  {
#line 757 "coverage.m"
                    MR_Integer coverage__ExecCount_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CP_67, (MR_Integer) 0)));
#line 757 "coverage.m"
                    MR_Word coverage__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_67, (MR_Integer) 1)));
#line 757 "coverage.m"
                    MR_Word coverage__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CP_67, (MR_Integer) 2)));

#line 1304 "coverage.m"
                    coverage__succeeded = (coverage__ExecCount_68 == (MR_Integer) 0);
#line 1303 "coverage.m"
                    if (coverage__succeeded)
#line 1305 "coverage.m"
                      coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1303 "coverage.m"
                    else
#line 1307 "coverage.m"
                      {
#line 1307 "coverage.m"
                        coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__BeforeCase_33, 0) = ((MR_Box) (coverage__ExecCount_68));
#line 1307 "coverage.m"
                      }
#line 757 "coverage.m"
                  }
#line 759 "coverage.m"
                else
#line 760 "coverage.m"
                  coverage__BeforeCase_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "coverage.m"
              }
#line 604 "coverage.m"
            {
#line 604 "coverage.m"
              coverage__goal_annotate_coverage_6_p_0(coverage__TypeInfo_for_Callee_60, coverage__Goal_35, coverage__Info_2, coverage__BeforeCase_33, &coverage__AfterCase_38, coverage__STATE_VARIABLE_Array_0_9, &coverage__STATE_VARIABLE_Array_48_48);
            }
#line 1230 "coverage.m"
#line 1230 "coverage.m"
            switch (MR_tag((MR_Word) coverage__STATE_VARIABLE_SumBefore_0_5)) {
#line 1230 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1230 "coverage.m"
              case (MR_Integer) 0:
#line 1230 "coverage.m"
#line 1230 "coverage.m"
                switch (MR_unmkbody(coverage__STATE_VARIABLE_SumBefore_0_5)) {
#line 1230 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1230 "coverage.m"
                  case (MR_Integer) 0:
#line 1252 "coverage.m"
                    coverage__STATE_VARIABLE_SumBefore_49_49 = coverage__STATE_VARIABLE_SumBefore_0_5;
#line 1230 "coverage.m"
                    break;
#line 1230 "coverage.m"
                  case (MR_Integer) 1:
#line 1245 "coverage.m"
#line 1245 "coverage.m"
                    switch (MR_tag((MR_Word) coverage__BeforeCase_33)) {
#line 1245 "coverage.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1245 "coverage.m"
                      case (MR_Integer) 0:
#line 1245 "coverage.m"
#line 1245 "coverage.m"
                        switch (MR_unmkbody(coverage__BeforeCase_33)) {
#line 1245 "coverage.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1245 "coverage.m"
                          case (MR_Integer) 0:
#line 1249 "coverage.m"
                            coverage__STATE_VARIABLE_SumBefore_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1245 "coverage.m"
                            break;
#line 1245 "coverage.m"
                          case (MR_Integer) 1:
#line 1246 "coverage.m"
                            coverage__STATE_VARIABLE_SumBefore_49_49 = coverage__STATE_VARIABLE_SumBefore_0_5;
#line 1245 "coverage.m"
                            break;
#line 1245 "coverage.m"
                        }
#line 1245 "coverage.m"
                        break;
#line 1245 "coverage.m"
                      case (MR_Integer) 1:
#line 1243 "coverage.m"
                        {
#line 1243 "coverage.m"
                          MR_Integer coverage__ExecCount_90 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeCase_33, (MR_Integer) 0)));

#line 1244 "coverage.m"
                          {
#line 1244 "coverage.m"
                            coverage__STATE_VARIABLE_SumBefore_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "coverage.m"
                            MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumBefore_49_49, 0) = ((MR_Box) (coverage__ExecCount_90));
#line 1244 "coverage.m"
                          }
#line 1243 "coverage.m"
                        }
#line 1245 "coverage.m"
                        break;
#line 1245 "coverage.m"
                    }
#line 1230 "coverage.m"
                    break;
#line 1230 "coverage.m"
                }
#line 1230 "coverage.m"
                break;
#line 1230 "coverage.m"
              case (MR_Integer) 1:
#line 1230 "coverage.m"
                {
#line 1230 "coverage.m"
                  MR_Integer coverage__SumExecCount_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumBefore_0_5, (MR_Integer) 0)));

#line 1234 "coverage.m"
#line 1234 "coverage.m"
                  switch (MR_tag((MR_Word) coverage__BeforeCase_33)) {
#line 1234 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1234 "coverage.m"
                    case (MR_Integer) 0:
#line 1234 "coverage.m"
#line 1234 "coverage.m"
                      switch (MR_unmkbody(coverage__BeforeCase_33)) {
#line 1234 "coverage.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1234 "coverage.m"
                        case (MR_Integer) 0:
#line 1238 "coverage.m"
                          coverage__STATE_VARIABLE_SumBefore_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1234 "coverage.m"
                          break;
#line 1234 "coverage.m"
                        case (MR_Integer) 1:
#line 1235 "coverage.m"
                          coverage__STATE_VARIABLE_SumBefore_49_49 = coverage__STATE_VARIABLE_SumBefore_0_5;
#line 1234 "coverage.m"
                          break;
#line 1234 "coverage.m"
                      }
#line 1234 "coverage.m"
                      break;
#line 1234 "coverage.m"
                    case (MR_Integer) 1:
#line 1232 "coverage.m"
                      {
#line 1232 "coverage.m"
                        MR_Integer coverage__ExecCount_84 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__BeforeCase_33, (MR_Integer) 0)));
#line 1232 "coverage.m"
                        MR_Integer coverage__V_89_89 = (coverage__SumExecCount_83 + coverage__ExecCount_84);

#line 1233 "coverage.m"
                        {
#line 1233 "coverage.m"
                          coverage__STATE_VARIABLE_SumBefore_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "coverage.m"
                          MR_hl_field(MR_mktag(1), coverage__STATE_VARIABLE_SumBefore_49_49, 0) = ((MR_Box) (coverage__V_89_89));
#line 1233 "coverage.m"
                        }
#line 1232 "coverage.m"
                      }
#line 1234 "coverage.m"
                      break;
#line 1234 "coverage.m"
                  }
#line 1230 "coverage.m"
                }
#line 1230 "coverage.m"
                break;
#line 1230 "coverage.m"
            }
#line 608 "coverage.m"
            {
#line 608 "coverage.m"
              coverage__sum_after_coverage_3_p_0(coverage__AfterCase_38, coverage__STATE_VARIABLE_SumAfter_0_7, &coverage__STATE_VARIABLE_SumAfter_50_50);
            }
#line 610 "coverage.m"
            /* direct tailcall eliminated */
#line 610 "coverage.m"
            {
#line 610 "coverage.m"
              MR_Word coverage__HeadVar__1__tmp_copy_1 = coverage__Cases_24;
#line 610 "coverage.m"
              MR_Word coverage__STATE_VARIABLE_SumBefore_0__tmp_copy_5 = coverage__STATE_VARIABLE_SumBefore_49_49;
#line 610 "coverage.m"
              MR_Word coverage__STATE_VARIABLE_SumAfter_0__tmp_copy_7 = coverage__STATE_VARIABLE_SumAfter_50_50;
#line 610 "coverage.m"
              MR_Word coverage__STATE_VARIABLE_Array_0__tmp_copy_9 = coverage__STATE_VARIABLE_Array_48_48;

#line 610 "coverage.m"
              coverage__STATE_VARIABLE_Array_0_9 = coverage__STATE_VARIABLE_Array_0__tmp_copy_9;
#line 610 "coverage.m"
              coverage__STATE_VARIABLE_SumAfter_0_7 = coverage__STATE_VARIABLE_SumAfter_0__tmp_copy_7;
#line 610 "coverage.m"
              coverage__STATE_VARIABLE_SumBefore_0_5 = coverage__STATE_VARIABLE_SumBefore_0__tmp_copy_5;
#line 610 "coverage.m"
              coverage__HeadVar__1_1 = coverage__HeadVar__1__tmp_copy_1;
#line 610 "coverage.m"
            }
#line 610 "coverage.m"
            continue;
#line 569 "coverage.m"
          }
#line 567 "coverage.m"
      }
#line 567 "coverage.m"
      break;
#line 567 "coverage.m"
    }
#line 560 "coverage.m"
}

#line 916 "coverage.m"
static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0_1(
#line 916 "coverage.m"
  MR_Box coverage__closure_arg,
#line 916 "coverage.m"
  MR_Box coverage__wrapper_arg_1,
#line 916 "coverage.m"
  MR_Box coverage__wrapper_arg_2,
#line 916 "coverage.m"
  MR_Box * coverage__wrapper_arg_3)
#line 916 "coverage.m"
{
#line 916 "coverage.m"
  {
#line 916 "coverage.m"
    MR_Box coverage__closure = coverage__closure_arg;
#line 916 "coverage.m"
    MR_Word coverage__conv0_STATE_VARIABLE_Acc_16;

#line 916 "coverage.m"
    {
#line 916 "coverage.m"
      coverage__sum_switch_case_coverage_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), coverage__closure, (MR_Integer) 3))), ((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2), &coverage__conv0_STATE_VARIABLE_Acc_16);
    }
#line 916 "coverage.m"
    *coverage__wrapper_arg_3 = ((MR_Box) (coverage__conv0_STATE_VARIABLE_Acc_16));
#line 916 "coverage.m"
  }
#line 916 "coverage.m"
}

#line 503 "coverage.m"
static void MR_CALL 
coverage__switch_annotate_coverage_7_p_0(
#line 503 "coverage.m"
  MR_Word coverage__TypeInfo_for_Callee_49,
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
#line 533 "coverage.m"
    MR_Word coverage__Result_17;

#line 514 "coverage.m"
    {
#line 514 "coverage.m"
      coverage__switch_annotate_coverage_2_10_p_0(coverage__TypeInfo_for_Callee_49, coverage__Cases_8, coverage__Info_9, coverage__CanFail_10, coverage__Before_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &coverage___SumBefore_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), &coverage__SumAfter_16, coverage__STATE_VARIABLE_Array_0_18, coverage__STATE_VARIABLE_Array_19);
    }
#line 1166 "coverage.m"
#line 1166 "coverage.m"
    switch (MR_tag((MR_Word) coverage__SumAfter_16)) {
#line 1166 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1166 "coverage.m"
      case (MR_Integer) 0:
#line 1166 "coverage.m"
#line 1166 "coverage.m"
        switch (MR_unmkbody(coverage__SumAfter_16)) {
#line 1166 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1166 "coverage.m"
          case (MR_Integer) 0:
#line 1166 "coverage.m"
            *coverage__After_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1166 "coverage.m"
            break;
#line 1166 "coverage.m"
          case (MR_Integer) 1:
#line 1167 "coverage.m"
            *coverage__After_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1166 "coverage.m"
            break;
#line 1166 "coverage.m"
        }
#line 1166 "coverage.m"
        break;
#line 1166 "coverage.m"
      case (MR_Integer) 1:
#line 1168 "coverage.m"
        {
#line 1168 "coverage.m"
          MR_Integer coverage__C_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__SumAfter_16, (MR_Integer) 0)));

#line 1295 "coverage.m"
          coverage__succeeded = (coverage__C_55 == (MR_Integer) 0);
#line 1294 "coverage.m"
          if (coverage__succeeded)
#line 1296 "coverage.m"
            *coverage__After_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1294 "coverage.m"
          else
#line 1298 "coverage.m"
            {
#line 1298 "coverage.m"
              MR_Word base;
#line 1298 "coverage.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "coverage.m"
              *coverage__After_12 = base;
#line 1298 "coverage.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__C_55));
#line 1298 "coverage.m"
            }
#line 1168 "coverage.m"
        }
#line 1166 "coverage.m"
        break;
#line 1166 "coverage.m"
    }
#line 915 "coverage.m"
#line 915 "coverage.m"
    switch (coverage__CanFail_10) {
#line 915 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 915 "coverage.m"
      case (MR_Integer) 0:
#line 943 "coverage.m"
        coverage__Result_17 = (MR_Integer) 1;
#line 915 "coverage.m"
        break;
#line 915 "coverage.m"
      case (MR_Integer) 1:
#line 915 "coverage.m"
        {
#line 915 "coverage.m"
          MR_Word coverage__MaybeSum_62;
#line 915 "coverage.m"
          MR_Word coverage__V_65_65;
#line 916 "coverage.m"
          MR_Box coverage__conv1_MaybeSum_62;

#line 916 "coverage.m"
          {
#line 916 "coverage.m"
            coverage__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 916 "coverage.m"
            MR_hl_field(MR_mktag(0), coverage__V_65_65, 0) = ((MR_Box) (&coverage_scalar_common_4[0]));
#line 916 "coverage.m"
            MR_hl_field(MR_mktag(0), coverage__V_65_65, 1) = ((MR_Box) (coverage__switch_annotate_coverage_7_p_0_1));
#line 916 "coverage.m"
            MR_hl_field(MR_mktag(0), coverage__V_65_65, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 916 "coverage.m"
            MR_hl_field(MR_mktag(0), coverage__V_65_65, 3) = ((MR_Box) (*coverage__STATE_VARIABLE_Array_19));
#line 916 "coverage.m"
          }
#line 916 "coverage.m"
          {
#line 916 "coverage.m"
            mercury__list__foldl_4_p_0((MR_Word) &coverage_scalar_common_1[0], (MR_Word) &coverage_scalar_common_1[2], coverage__V_65_65, coverage__Cases_8, ((MR_Box) (MR_mkword(MR_mktag(1), &coverage_scalar_common_5[0]))), &coverage__conv1_MaybeSum_62);
          }
#line 916 "coverage.m"
          coverage__MaybeSum_62 = ((MR_Word) coverage__conv1_MaybeSum_62);
#line 937 "coverage.m"
          if ((coverage__MaybeSum_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 939 "coverage.m"
            coverage__Result_17 = (MR_Integer) 1;
#line 937 "coverage.m"
          else
#line 918 "coverage.m"
            {
#line 918 "coverage.m"
              MR_Integer coverage__SumA_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__MaybeSum_62, (MR_Integer) 0)));

#line 923 "coverage.m"
#line 923 "coverage.m"
              switch (MR_tag((MR_Word) coverage__Before_11)) {
#line 923 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 923 "coverage.m"
                case (MR_Integer) 0:
#line 923 "coverage.m"
#line 923 "coverage.m"
                  switch (MR_unmkbody(coverage__Before_11)) {
#line 923 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 923 "coverage.m"
                    case (MR_Integer) 0:
#line 922 "coverage.m"
                      coverage__Result_17 = (MR_Integer) 1;
#line 923 "coverage.m"
                      break;
#line 923 "coverage.m"
                    case (MR_Integer) 1:
#line 929 "coverage.m"
                      {
#line 930 "coverage.m"
                        coverage__succeeded = (coverage__SumA_63 == (MR_Integer) 0);
#line 932 "coverage.m"
                        if (coverage__succeeded)
#line 931 "coverage.m"
                          coverage__Result_17 = (MR_Integer) 1;
#line 932 "coverage.m"
                        else
#line 933 "coverage.m"
                          coverage__Result_17 = (MR_Integer) 0;
#line 929 "coverage.m"
                      }
#line 923 "coverage.m"
                      break;
#line 923 "coverage.m"
                  }
#line 923 "coverage.m"
                  break;
#line 923 "coverage.m"
                case (MR_Integer) 1:
#line 929 "coverage.m"
                  {
#line 929 "coverage.m"
                    MR_Integer coverage__SumB_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_11, (MR_Integer) 0)));

#line 930 "coverage.m"
                    coverage__succeeded = (coverage__SumA_63 == coverage__SumB_64);
#line 932 "coverage.m"
                    if (coverage__succeeded)
#line 931 "coverage.m"
                      coverage__Result_17 = (MR_Integer) 1;
#line 932 "coverage.m"
                    else
#line 933 "coverage.m"
                      coverage__Result_17 = (MR_Integer) 0;
#line 929 "coverage.m"
                  }
#line 923 "coverage.m"
                  break;
#line 923 "coverage.m"
              }
#line 918 "coverage.m"
            }
#line 915 "coverage.m"
        }
#line 915 "coverage.m"
        break;
#line 915 "coverage.m"
    }
#line 536 "coverage.m"
#line 536 "coverage.m"
    switch (coverage__Result_17) {
#line 536 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 536 "coverage.m"
      case (MR_Integer) 0:
#line 537 "coverage.m"
        {
#line 537 "coverage.m"
          MR_String coverage__V_32_32;
#line 537 "coverage.m"
          MR_Word coverage__V_36_36;
#line 537 "coverage.m"
          MR_Word coverage__V_37_37;
#line 537 "coverage.m"
          MR_String coverage__V_38_38;
#line 537 "coverage.m"
          MR_Word coverage__V_39_39;
#line 537 "coverage.m"
          MR_Word coverage__V_40_40;
#line 537 "coverage.m"
          MR_String coverage__V_41_41;
#line 537 "coverage.m"
          MR_Word coverage__V_42_42;
#line 537 "coverage.m"
          MR_Word coverage__V_43_43;
#line 537 "coverage.m"
          MR_String coverage__V_44_44;
#line 537 "coverage.m"
          MR_Word coverage__V_45_45;
#line 537 "coverage.m"
          MR_Word coverage__V_46_46;
#line 537 "coverage.m"
          MR_String coverage__V_47_47;

#line 542 "coverage.m"
          {
#line 542 "coverage.m"
            coverage__V_38_38 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_switch_can_fail_rep_0, ((MR_Box) (coverage__CanFail_10)));
          }
#line 542 "coverage.m"
          {
#line 542 "coverage.m"
            coverage__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 542 "coverage.m"
            MR_hl_field(MR_mktag(2), coverage__V_37_37, 0) = ((MR_Box) (coverage__V_38_38));
#line 542 "coverage.m"
          }
#line 542 "coverage.m"
          {
#line 542 "coverage.m"
            coverage__V_41_41 = mercury__string__string_1_f_0((MR_Word) &coverage_scalar_common_1[1], ((MR_Box) (coverage__Cases_8)));
          }
#line 542 "coverage.m"
          {
#line 542 "coverage.m"
            coverage__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 542 "coverage.m"
            MR_hl_field(MR_mktag(2), coverage__V_40_40, 0) = ((MR_Box) (coverage__V_41_41));
#line 542 "coverage.m"
          }
#line 543 "coverage.m"
          {
#line 543 "coverage.m"
            coverage__V_44_44 = mercury__string__string_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_before_0, ((MR_Box) (coverage__Before_11)));
          }
#line 543 "coverage.m"
          {
#line 543 "coverage.m"
            coverage__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "coverage.m"
            MR_hl_field(MR_mktag(2), coverage__V_43_43, 0) = ((MR_Box) (coverage__V_44_44));
#line 543 "coverage.m"
          }
#line 543 "coverage.m"
          {
#line 543 "coverage.m"
            coverage__V_47_47 = mercury__string__string_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_after_0, ((MR_Box) (*coverage__After_12)));
          }
#line 543 "coverage.m"
          {
#line 543 "coverage.m"
            coverage__V_46_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "coverage.m"
            MR_hl_field(MR_mktag(2), coverage__V_46_46, 0) = ((MR_Box) (coverage__V_47_47));
#line 543 "coverage.m"
          }
#line 543 "coverage.m"
          {
#line 543 "coverage.m"
            coverage__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "coverage.m"
            MR_hl_field(MR_mktag(1), coverage__V_45_45, 0) = ((MR_Box) (coverage__V_46_46));
#line 543 "coverage.m"
            MR_hl_field(MR_mktag(1), coverage__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "coverage.m"
          }
#line 543 "coverage.m"
          {
#line 543 "coverage.m"
            coverage__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "coverage.m"
            MR_hl_field(MR_mktag(1), coverage__V_42_42, 0) = ((MR_Box) (coverage__V_43_43));
#line 543 "coverage.m"
            MR_hl_field(MR_mktag(1), coverage__V_42_42, 1) = ((MR_Box) (coverage__V_45_45));
#line 543 "coverage.m"
          }
#line 542 "coverage.m"
          {
#line 542 "coverage.m"
            coverage__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "coverage.m"
            MR_hl_field(MR_mktag(1), coverage__V_39_39, 0) = ((MR_Box) (coverage__V_40_40));
#line 542 "coverage.m"
            MR_hl_field(MR_mktag(1), coverage__V_39_39, 1) = ((MR_Box) (coverage__V_42_42));
#line 542 "coverage.m"
          }
#line 542 "coverage.m"
          {
#line 542 "coverage.m"
            coverage__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 542 "coverage.m"
            MR_hl_field(MR_mktag(1), coverage__V_36_36, 0) = ((MR_Box) (coverage__V_37_37));
#line 542 "coverage.m"
            MR_hl_field(MR_mktag(1), coverage__V_36_36, 1) = ((MR_Box) (coverage__V_39_39));
#line 542 "coverage.m"
          }
#line 539 "coverage.m"
          {
#line 539 "coverage.m"
            coverage__V_32_32 = mercury__string__format_2_f_0((MR_String) "check_switch_coverage failed\n\tCanFail: %s\n\tCases: %s\n\tBefore: %s, After: %s\n", coverage__V_36_36);
          }
#line 538 "coverage.m"
          {
#line 538 "coverage.m"
            mercury__require__unexpected_3_p_0((MR_String) "coverage", (MR_String) "predicate \140coverage.switch_annotate_coverage\'/7", coverage__V_32_32);
#line 538 "coverage.m"
            return;
          }
#line 537 "coverage.m"
        }
#line 536 "coverage.m"
        break;
#line 536 "coverage.m"
      case (MR_Integer) 1:
#line 535 "coverage.m"
        {
#line 535 "coverage.m"
        }
#line 536 "coverage.m"
        break;
#line 536 "coverage.m"
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
#line 1049 "coverage.m"
#line 1049 "coverage.m"
            switch (MR_tag((MR_Word) coverage__Before_3)) {
#line 1049 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1049 "coverage.m"
              case (MR_Integer) 0:
#line 1049 "coverage.m"
#line 1049 "coverage.m"
                switch (MR_unmkbody(coverage__Before_3)) {
#line 1049 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1049 "coverage.m"
                  case (MR_Integer) 0:
#line 1050 "coverage.m"
                    *coverage__After_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1049 "coverage.m"
                    break;
#line 1049 "coverage.m"
                  case (MR_Integer) 1:
#line 1056 "coverage.m"
                    *coverage__After_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1049 "coverage.m"
                    break;
#line 1049 "coverage.m"
                }
#line 1049 "coverage.m"
                break;
#line 1049 "coverage.m"
              case (MR_Integer) 1:
#line 1052 "coverage.m"
                {
#line 1052 "coverage.m"
                  MR_Integer coverage__Count_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_3, (MR_Integer) 0)));

#line 1295 "coverage.m"
                  coverage__succeeded = (coverage__Count_28 == (MR_Integer) 0);
#line 1294 "coverage.m"
                  if (coverage__succeeded)
#line 1296 "coverage.m"
                    *coverage__After_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1294 "coverage.m"
                  else
#line 1298 "coverage.m"
                    {
#line 1298 "coverage.m"
                      MR_Word base;
#line 1298 "coverage.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "coverage.m"
                      *coverage__After_4 = base;
#line 1298 "coverage.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__Count_28));
#line 1298 "coverage.m"
                    }
#line 1052 "coverage.m"
                }
#line 1049 "coverage.m"
                break;
#line 1049 "coverage.m"
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
#line 1103 "coverage.m"
#line 1103 "coverage.m"
            switch (MR_tag((MR_Word) coverage__CoverageAfterHead_19)) {
#line 1103 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1103 "coverage.m"
              case (MR_Integer) 0:
#line 1103 "coverage.m"
#line 1103 "coverage.m"
                switch (MR_unmkbody(coverage__CoverageAfterHead_19)) {
#line 1103 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1103 "coverage.m"
                  case (MR_Integer) 0:
#line 1104 "coverage.m"
                    coverage__CoverageBeforeTail_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1103 "coverage.m"
                    break;
#line 1103 "coverage.m"
                  case (MR_Integer) 1:
#line 1110 "coverage.m"
                    coverage__CoverageBeforeTail_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1103 "coverage.m"
                    break;
#line 1103 "coverage.m"
                }
#line 1103 "coverage.m"
                break;
#line 1103 "coverage.m"
              case (MR_Integer) 1:
#line 1106 "coverage.m"
                {
#line 1106 "coverage.m"
                  MR_Integer coverage__ExecCount_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__CoverageAfterHead_19, (MR_Integer) 0)));

#line 1107 "coverage.m"
                  {
#line 1107 "coverage.m"
                    coverage__CoverageBeforeTail_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "coverage.m"
                    MR_hl_field(MR_mktag(1), coverage__CoverageBeforeTail_20, 0) = ((MR_Box) (coverage__ExecCount_32));
#line 1107 "coverage.m"
                  }
#line 1106 "coverage.m"
                }
#line 1103 "coverage.m"
                break;
#line 1103 "coverage.m"
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
#line 407 "coverage.m"
    switch (MR_tag((MR_Word) coverage__Before_4)) {
#line 407 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 407 "coverage.m"
      case (MR_Integer) 0:
#line 407 "coverage.m"
#line 407 "coverage.m"
        switch (MR_unmkbody(coverage__Before_4)) {
#line 407 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 407 "coverage.m"
          case (MR_Integer) 0:
#line 411 "coverage.m"
#line 411 "coverage.m"
            switch (MR_tag((MR_Word) coverage__After_5)) {
#line 411 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 411 "coverage.m"
              case (MR_Integer) 0:
#line 411 "coverage.m"
#line 411 "coverage.m"
                switch (MR_unmkbody(coverage__After_5)) {
#line 411 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 411 "coverage.m"
                  case (MR_Integer) 0:
#line 410 "coverage.m"
                    coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 411 "coverage.m"
                    break;
#line 411 "coverage.m"
                  case (MR_Integer) 1:
#line 415 "coverage.m"
                    {
#line 416 "coverage.m"
                      coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(3), &coverage_scalar_common_1[3]);
#line 415 "coverage.m"
                    }
#line 411 "coverage.m"
                    break;
#line 411 "coverage.m"
                }
#line 411 "coverage.m"
                break;
#line 411 "coverage.m"
              case (MR_Integer) 1:
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
#line 411 "coverage.m"
                break;
#line 411 "coverage.m"
            }
#line 407 "coverage.m"
            break;
#line 407 "coverage.m"
          case (MR_Integer) 1:
#line 423 "coverage.m"
#line 423 "coverage.m"
            switch (MR_tag((MR_Word) coverage__After_5)) {
#line 423 "coverage.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 423 "coverage.m"
              case (MR_Integer) 0:
#line 423 "coverage.m"
#line 423 "coverage.m"
                switch (MR_unmkbody(coverage__After_5)) {
#line 423 "coverage.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 423 "coverage.m"
                  case (MR_Integer) 0:
#line 421 "coverage.m"
                    {
#line 422 "coverage.m"
                      coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(3), &coverage_scalar_common_1[4]);
#line 421 "coverage.m"
                    }
#line 423 "coverage.m"
                    break;
#line 423 "coverage.m"
                  case (MR_Integer) 1:
#line 425 "coverage.m"
                    coverage__Coverage_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 423 "coverage.m"
                    break;
#line 423 "coverage.m"
                }
#line 423 "coverage.m"
                break;
#line 423 "coverage.m"
              case (MR_Integer) 1:
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
#line 423 "coverage.m"
                break;
#line 423 "coverage.m"
            }
#line 407 "coverage.m"
            break;
#line 407 "coverage.m"
        }
#line 407 "coverage.m"
        break;
#line 407 "coverage.m"
      case (MR_Integer) 1:
#line 431 "coverage.m"
        {
#line 431 "coverage.m"
          MR_Integer coverage__BeforeExecCount_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_4, (MR_Integer) 0)));

#line 435 "coverage.m"
#line 435 "coverage.m"
          switch (MR_tag((MR_Word) coverage__After_5)) {
#line 435 "coverage.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 435 "coverage.m"
            case (MR_Integer) 0:
#line 435 "coverage.m"
#line 435 "coverage.m"
              switch (MR_unmkbody(coverage__After_5)) {
#line 435 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 435 "coverage.m"
                case (MR_Integer) 0:
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
                  break;
#line 435 "coverage.m"
                case (MR_Integer) 1:
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
                  break;
#line 435 "coverage.m"
              }
#line 435 "coverage.m"
              break;
#line 435 "coverage.m"
            case (MR_Integer) 1:
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
#line 435 "coverage.m"
              break;
#line 435 "coverage.m"
          }
#line 431 "coverage.m"
        }
#line 407 "coverage.m"
        break;
#line 407 "coverage.m"
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
#line 294 "coverage.m"
    switch (MR_tag((MR_Word) coverage__GoalExpr_12)) {
#line 294 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 294 "coverage.m"
      case (MR_Integer) 0:
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
        break;
#line 294 "coverage.m"
      case (MR_Integer) 1:
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
        break;
#line 294 "coverage.m"
      case (MR_Integer) 2:
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
        break;
#line 294 "coverage.m"
      case (MR_Integer) 3:
#line 294 "coverage.m"
#line 294 "coverage.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__GoalExpr_12, (MR_Integer) 0)))) {
#line 294 "coverage.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 294 "coverage.m"
          case (MR_Integer) 0:
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
            break;
#line 294 "coverage.m"
          case (MR_Integer) 1:
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
            break;
#line 294 "coverage.m"
          case (MR_Integer) 2:
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
#line 294 "coverage.m"
            break;
#line 294 "coverage.m"
          case (MR_Integer) 3:
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
#line 342 "coverage.m"
              switch (MR_tag((MR_Word) coverage__AtomicGoal_33)) {
#line 342 "coverage.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 342 "coverage.m"
                case (MR_Integer) 0:
#line 342 "coverage.m"
                case (MR_Integer) 1:
#line 342 "coverage.m"
                case (MR_Integer) 2:
#line 354 "coverage.m"
                  {
#line 354 "coverage.m"
                    coverage__propagate_detism_coverage_3_p_0(coverage__Detism_13, coverage__Before_9, &coverage__After0_17);
                  }
#line 342 "coverage.m"
                  break;
#line 342 "coverage.m"
                case (MR_Integer) 3:
#line 342 "coverage.m"
#line 342 "coverage.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__AtomicGoal_33, (MR_Integer) 0)))) {
#line 342 "coverage.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 342 "coverage.m"
                    case (MR_Integer) 0:
#line 342 "coverage.m"
                    case (MR_Integer) 1:
#line 342 "coverage.m"
                    case (MR_Integer) 2:
#line 342 "coverage.m"
                    case (MR_Integer) 3:
#line 342 "coverage.m"
                    case (MR_Integer) 4:
#line 342 "coverage.m"
                    case (MR_Integer) 8:
#line 342 "coverage.m"
                    case (MR_Integer) 9:
#line 354 "coverage.m"
                      {
#line 354 "coverage.m"
                        coverage__propagate_detism_coverage_3_p_0(coverage__Detism_13, coverage__Before_9, &coverage__After0_17);
                      }
#line 342 "coverage.m"
                      break;
#line 342 "coverage.m"
                    case (MR_Integer) 5:
#line 342 "coverage.m"
                    case (MR_Integer) 6:
#line 342 "coverage.m"
                    case (MR_Integer) 7:
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

#line 9474 "coverage.c"
                        {
#line 9476 "coverage.c"
                          coverage__TypeInfo_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9478 "coverage.c"
                          MR_hl_field(MR_mktag(0), coverage__TypeInfo_168_168, 0) = ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1));
#line 9480 "coverage.c"
                          MR_hl_field(MR_mktag(0), coverage__TypeInfo_168_168, 1) = ((MR_Box) (coverage__TypeInfo_for_Callee_164));
#line 9482 "coverage.c"
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
                      break;
#line 342 "coverage.m"
                  }
#line 342 "coverage.m"
                  break;
#line 342 "coverage.m"
              }
#line 319 "coverage.m"
              coverage__STATE_VARIABLE_Array_95_95 = coverage__STATE_VARIABLE_Array_0_75;
#line 319 "coverage.m"
            }
#line 294 "coverage.m"
            break;
#line 294 "coverage.m"
        }
#line 294 "coverage.m"
        break;
#line 294 "coverage.m"
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
#line 9688 "coverage.c"
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
        MR_Word coverage__V_120_120;
#line 386 "coverage.m"
        MR_Word coverage__V_121_121;
#line 386 "coverage.m"
        MR_String coverage__V_122_122;
#line 386 "coverage.m"
        MR_Word coverage__V_123_123;
#line 386 "coverage.m"
        MR_Word coverage__V_124_124;
#line 386 "coverage.m"
        MR_String coverage__V_125_125;
#line 386 "coverage.m"
        MR_Word coverage__V_126_126;
#line 386 "coverage.m"
        MR_Word coverage__V_127_127;
#line 386 "coverage.m"
        MR_String coverage__V_128_128;
#line 386 "coverage.m"
        MR_Word coverage__V_129_129;
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
#line 389 "coverage.m"
        {
#line 389 "coverage.m"
          coverage__V_121_121 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 389 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_121_121, 0) = ((MR_Box) (coverage__V_122_122));
#line 389 "coverage.m"
        }
#line 390 "coverage.m"
        {
#line 390 "coverage.m"
          coverage__V_125_125 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(coverage__RevGoalPath_15);
        }
#line 390 "coverage.m"
        {
#line 390 "coverage.m"
          coverage__V_124_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 390 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_124_124, 0) = ((MR_Box) (coverage__V_125_125));
#line 390 "coverage.m"
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
#line 391 "coverage.m"
        {
#line 391 "coverage.m"
          coverage__V_127_127 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 391 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_127_127, 0) = ((MR_Box) (coverage__V_128_128));
#line 391 "coverage.m"
        }
#line 391 "coverage.m"
        {
#line 391 "coverage.m"
          coverage__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_126_126, 0) = ((MR_Box) (coverage__V_127_127));
#line 391 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "coverage.m"
        }
#line 390 "coverage.m"
        {
#line 390 "coverage.m"
          coverage__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_123_123, 0) = ((MR_Box) (coverage__V_124_124));
#line 390 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_123_123, 1) = ((MR_Box) (coverage__V_126_126));
#line 390 "coverage.m"
        }
#line 389 "coverage.m"
        {
#line 389 "coverage.m"
          coverage__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_120_120, 0) = ((MR_Box) (coverage__V_121_121));
#line 389 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_120_120, 1) = ((MR_Box) (coverage__V_123_123));
#line 389 "coverage.m"
        }
#line 387 "coverage.m"
        {
#line 387 "coverage.m"
          coverage__V_116_116 = mercury__string__format_2_f_0((MR_String) "check_coverage_complete failed\n\tCoverage: %s\n\tGoalPath: %s\n\tProc: %s\n", coverage__V_120_120);
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
        MR_Word coverage__V_135_135;
#line 396 "coverage.m"
        MR_Word coverage__V_136_136;
#line 396 "coverage.m"
        MR_String coverage__V_137_137;
#line 396 "coverage.m"
        MR_Word coverage__V_138_138;
#line 396 "coverage.m"
        MR_Word coverage__V_139_139;
#line 396 "coverage.m"
        MR_String coverage__V_140_140;

#line 398 "coverage.m"
        {
#line 398 "coverage.m"
          coverage__V_137_137 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_171_171, ((MR_Box) (coverage__GoalCoverage_73)));
        }
#line 398 "coverage.m"
        {
#line 398 "coverage.m"
          coverage__V_136_136 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_136_136, 0) = ((MR_Box) (coverage__V_137_137));
#line 398 "coverage.m"
        }
#line 398 "coverage.m"
        {
#line 398 "coverage.m"
          coverage__V_140_140 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0, ((MR_Box) (coverage__Detism_13)));
        }
#line 398 "coverage.m"
        {
#line 398 "coverage.m"
          coverage__V_139_139 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_139_139, 0) = ((MR_Box) (coverage__V_140_140));
#line 398 "coverage.m"
        }
#line 398 "coverage.m"
        {
#line 398 "coverage.m"
          coverage__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_138_138, 0) = ((MR_Box) (coverage__V_139_139));
#line 398 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 398 "coverage.m"
        }
#line 398 "coverage.m"
        {
#line 398 "coverage.m"
          coverage__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_135_135, 0) = ((MR_Box) (coverage__V_136_136));
#line 398 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_135_135, 1) = ((MR_Box) (coverage__V_138_138));
#line 398 "coverage.m"
        }
#line 397 "coverage.m"
        {
#line 397 "coverage.m"
          coverage__V_133_133 = mercury__string__format_2_f_0((MR_String) "check_coverage_regarding_detism failed: %s %s", coverage__V_135_135);
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
#line 194 "coverage.m"
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
#line 1312 "coverage.m"
  {
#line 1312 "coverage.m"
    MR_bool coverage__succeeded;
#line 1312 "coverage.m"
    MR_Word coverage__GoalPath_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_6, (MR_Integer) 1)));
#line 1312 "coverage.m"
    MR_Word coverage__CPType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_6, (MR_Integer) 2)));
#line 1313 "coverage.m"
    MR_Integer coverage__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), coverage__CoveragePoint_6, (MR_Integer) 0)));

#line 1317 "coverage.m"
#line 1317 "coverage.m"
    switch (coverage__CPType_11) {
#line 1317 "coverage.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1317 "coverage.m"
      case ((int) MR_cp_type_branch_arm):
#line 1318 "coverage.m"
        {
#line 1319 "coverage.m"
          {
#line 1319 "coverage.m"
            mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, ((MR_Box) (coverage__GoalPath_10)), ((MR_Box) (coverage__CoveragePoint_6)), coverage__STATE_VARIABLE_BranchMap_0_14, coverage__STATE_VARIABLE_BranchMap_15);
          }
#line 1318 "coverage.m"
          *coverage__STATE_VARIABLE_SolnsMap_13 = coverage__STATE_VARIABLE_SolnsMap_0_12;
#line 1318 "coverage.m"
        }
#line 1317 "coverage.m"
        break;
#line 1317 "coverage.m"
      case ((int) MR_cp_type_coverage_after):
#line 1315 "coverage.m"
        {
#line 1316 "coverage.m"
          {
#line 1316 "coverage.m"
            mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0, ((MR_Box) (coverage__GoalPath_10)), ((MR_Box) (coverage__CoveragePoint_6)), coverage__STATE_VARIABLE_SolnsMap_0_12, coverage__STATE_VARIABLE_SolnsMap_13);
          }
#line 1315 "coverage.m"
          *coverage__STATE_VARIABLE_BranchMap_15 = coverage__STATE_VARIABLE_BranchMap_0_14;
#line 1315 "coverage.m"
        }
#line 1317 "coverage.m"
        break;
#line 1317 "coverage.m"
    }
#line 1312 "coverage.m"
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
#line 1304 "coverage.m"
    coverage__succeeded = (coverage__Calls_19 == (MR_Integer) 0);
#line 1303 "coverage.m"
    if (coverage__succeeded)
#line 1305 "coverage.m"
      coverage__Before_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1303 "coverage.m"
    else
#line 1307 "coverage.m"
      {
#line 1307 "coverage.m"
        coverage__Before_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "coverage.m"
        MR_hl_field(MR_mktag(1), coverage__Before_21, 0) = ((MR_Box) (coverage__Calls_19));
#line 1307 "coverage.m"
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
#line 1295 "coverage.m"
    coverage__succeeded = (coverage__Exits_20 == (MR_Integer) 0);
#line 1294 "coverage.m"
    if (coverage__succeeded)
#line 1296 "coverage.m"
      coverage__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1294 "coverage.m"
    else
#line 1298 "coverage.m"
      {
#line 1298 "coverage.m"
        coverage__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "coverage.m"
        MR_hl_field(MR_mktag(1), coverage__V_28_28, 0) = ((MR_Box) (coverage__Exits_20));
#line 1298 "coverage.m"
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
#line 137 "coverage.m"
    switch (MR_tag((MR_Word) coverage__Coverage_3)) {
#line 137 "coverage.m"
      default:
#line 137 "coverage.m"
        coverage__succeeded = MR_FALSE;
#line 137 "coverage.m"
        break;
#line 137 "coverage.m"
      case (MR_Integer) 0:
#line 137 "coverage.m"
#line 137 "coverage.m"
        switch (MR_unmkbody(coverage__Coverage_3)) {
#line 137 "coverage.m"
          default:
#line 137 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 137 "coverage.m"
            break;
#line 137 "coverage.m"
          case (MR_Integer) 1:
#line 138 "coverage.m"
            {
#line 138 "coverage.m"
              coverage__AfterPrime_5 = (MR_Integer) 0;
#line 138 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 138 "coverage.m"
            }
#line 137 "coverage.m"
            break;
#line 137 "coverage.m"
        }
#line 137 "coverage.m"
        break;
#line 137 "coverage.m"
      case (MR_Integer) 1:
#line 139 "coverage.m"
        {
#line 139 "coverage.m"
          coverage__AfterPrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_3, (MR_Integer) 0)));
#line 139 "coverage.m"
          coverage__succeeded = MR_TRUE;
#line 139 "coverage.m"
        }
#line 137 "coverage.m"
        break;
#line 137 "coverage.m"
      case (MR_Integer) 2:
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
        break;
#line 137 "coverage.m"
      case (MR_Integer) 3:
#line 137 "coverage.m"
#line 137 "coverage.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 0)))) {
#line 137 "coverage.m"
          default:
#line 137 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 137 "coverage.m"
            break;
#line 137 "coverage.m"
          case (MR_Integer) 1:
#line 140 "coverage.m"
            {
#line 140 "coverage.m"
              coverage__AfterPrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 1)));
#line 140 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 140 "coverage.m"
            }
#line 137 "coverage.m"
            break;
#line 137 "coverage.m"
        }
#line 137 "coverage.m"
        break;
#line 137 "coverage.m"
    }
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
#line 133 "coverage.m"
    switch (MR_tag((MR_Word) coverage__Coverage_4)) {
#line 133 "coverage.m"
      default:
#line 133 "coverage.m"
        coverage__succeeded = MR_FALSE;
#line 133 "coverage.m"
        break;
#line 133 "coverage.m"
      case (MR_Integer) 0:
#line 133 "coverage.m"
#line 133 "coverage.m"
        switch (MR_unmkbody(coverage__Coverage_4)) {
#line 133 "coverage.m"
          default:
#line 133 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 133 "coverage.m"
            break;
#line 133 "coverage.m"
          case (MR_Integer) 1:
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
            break;
#line 133 "coverage.m"
        }
#line 133 "coverage.m"
        break;
#line 133 "coverage.m"
      case (MR_Integer) 1:
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
        break;
#line 133 "coverage.m"
      case (MR_Integer) 2:
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
        break;
#line 133 "coverage.m"
    }
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
#line 128 "coverage.m"
    switch (MR_tag((MR_Word) coverage__Coverage_3)) {
#line 128 "coverage.m"
      default:
#line 128 "coverage.m"
        coverage__succeeded = MR_FALSE;
#line 128 "coverage.m"
        break;
#line 128 "coverage.m"
      case (MR_Integer) 0:
#line 128 "coverage.m"
#line 128 "coverage.m"
        switch (MR_unmkbody(coverage__Coverage_3)) {
#line 128 "coverage.m"
          default:
#line 128 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 128 "coverage.m"
            break;
#line 128 "coverage.m"
          case (MR_Integer) 1:
#line 129 "coverage.m"
            {
#line 129 "coverage.m"
              coverage__BeforePrime_5 = (MR_Integer) 0;
#line 129 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 129 "coverage.m"
            }
#line 128 "coverage.m"
            break;
#line 128 "coverage.m"
        }
#line 128 "coverage.m"
        break;
#line 128 "coverage.m"
      case (MR_Integer) 1:
#line 130 "coverage.m"
        {
#line 130 "coverage.m"
          coverage__BeforePrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Coverage_3, (MR_Integer) 0)));
#line 130 "coverage.m"
          coverage__succeeded = MR_TRUE;
#line 130 "coverage.m"
        }
#line 128 "coverage.m"
        break;
#line 128 "coverage.m"
      case (MR_Integer) 2:
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
        break;
#line 128 "coverage.m"
      case (MR_Integer) 3:
#line 128 "coverage.m"
#line 128 "coverage.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 0)))) {
#line 128 "coverage.m"
          default:
#line 128 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 128 "coverage.m"
            break;
#line 128 "coverage.m"
          case (MR_Integer) 0:
#line 131 "coverage.m"
            {
#line 131 "coverage.m"
              coverage__BeforePrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__Coverage_3, (MR_Integer) 1)));
#line 131 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 131 "coverage.m"
            }
#line 128 "coverage.m"
            break;
#line 128 "coverage.m"
        }
#line 128 "coverage.m"
        break;
#line 128 "coverage.m"
    }
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
#line 137 "coverage.m"
    switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
#line 137 "coverage.m"
      default:
#line 137 "coverage.m"
        coverage__succeeded = MR_FALSE;
#line 137 "coverage.m"
        break;
#line 137 "coverage.m"
      case (MR_Integer) 0:
#line 137 "coverage.m"
#line 137 "coverage.m"
        switch (MR_unmkbody(coverage__HeadVar__1_1)) {
#line 137 "coverage.m"
          default:
#line 137 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 137 "coverage.m"
            break;
#line 137 "coverage.m"
          case (MR_Integer) 1:
#line 138 "coverage.m"
            {
#line 138 "coverage.m"
              *coverage__HeadVar__2_2 = (MR_Integer) 0;
#line 138 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 138 "coverage.m"
            }
#line 137 "coverage.m"
            break;
#line 137 "coverage.m"
        }
#line 137 "coverage.m"
        break;
#line 137 "coverage.m"
      case (MR_Integer) 1:
#line 139 "coverage.m"
        {
#line 139 "coverage.m"
          *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 139 "coverage.m"
          coverage__succeeded = MR_TRUE;
#line 139 "coverage.m"
        }
#line 137 "coverage.m"
        break;
#line 137 "coverage.m"
      case (MR_Integer) 2:
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
        break;
#line 137 "coverage.m"
      case (MR_Integer) 3:
#line 137 "coverage.m"
#line 137 "coverage.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 0)))) {
#line 137 "coverage.m"
          default:
#line 137 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 137 "coverage.m"
            break;
#line 137 "coverage.m"
          case (MR_Integer) 1:
#line 140 "coverage.m"
            {
#line 140 "coverage.m"
              *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 140 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 140 "coverage.m"
            }
#line 137 "coverage.m"
            break;
#line 137 "coverage.m"
        }
#line 137 "coverage.m"
        break;
#line 137 "coverage.m"
    }
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
#line 133 "coverage.m"
    switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
#line 133 "coverage.m"
      default:
#line 133 "coverage.m"
        coverage__succeeded = MR_FALSE;
#line 133 "coverage.m"
        break;
#line 133 "coverage.m"
      case (MR_Integer) 0:
#line 133 "coverage.m"
#line 133 "coverage.m"
        switch (MR_unmkbody(coverage__HeadVar__1_1)) {
#line 133 "coverage.m"
          default:
#line 133 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 133 "coverage.m"
            break;
#line 133 "coverage.m"
          case (MR_Integer) 1:
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
            break;
#line 133 "coverage.m"
        }
#line 133 "coverage.m"
        break;
#line 133 "coverage.m"
      case (MR_Integer) 1:
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
        break;
#line 133 "coverage.m"
      case (MR_Integer) 2:
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
        break;
#line 133 "coverage.m"
    }
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
#line 128 "coverage.m"
    switch (MR_tag((MR_Word) coverage__HeadVar__1_1)) {
#line 128 "coverage.m"
      default:
#line 128 "coverage.m"
        coverage__succeeded = MR_FALSE;
#line 128 "coverage.m"
        break;
#line 128 "coverage.m"
      case (MR_Integer) 0:
#line 128 "coverage.m"
#line 128 "coverage.m"
        switch (MR_unmkbody(coverage__HeadVar__1_1)) {
#line 128 "coverage.m"
          default:
#line 128 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 128 "coverage.m"
            break;
#line 128 "coverage.m"
          case (MR_Integer) 1:
#line 129 "coverage.m"
            {
#line 129 "coverage.m"
              *coverage__HeadVar__2_2 = (MR_Integer) 0;
#line 129 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 129 "coverage.m"
            }
#line 128 "coverage.m"
            break;
#line 128 "coverage.m"
        }
#line 128 "coverage.m"
        break;
#line 128 "coverage.m"
      case (MR_Integer) 1:
#line 130 "coverage.m"
        {
#line 130 "coverage.m"
          *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "coverage.m"
          coverage__succeeded = MR_TRUE;
#line 130 "coverage.m"
        }
#line 128 "coverage.m"
        break;
#line 128 "coverage.m"
      case (MR_Integer) 2:
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
        break;
#line 128 "coverage.m"
      case (MR_Integer) 3:
#line 128 "coverage.m"
#line 128 "coverage.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 0)))) {
#line 128 "coverage.m"
          default:
#line 128 "coverage.m"
            coverage__succeeded = MR_FALSE;
#line 128 "coverage.m"
            break;
#line 128 "coverage.m"
          case (MR_Integer) 0:
#line 131 "coverage.m"
            {
#line 131 "coverage.m"
              *coverage__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(3), coverage__HeadVar__1_1, (MR_Integer) 1)));
#line 131 "coverage.m"
              coverage__succeeded = MR_TRUE;
#line 131 "coverage.m"
            }
#line 128 "coverage.m"
            break;
#line 128 "coverage.m"
        }
#line 128 "coverage.m"
        break;
#line 128 "coverage.m"
    }
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
