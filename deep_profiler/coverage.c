/*
** Automatically generated from `coverage.m'
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 88 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__goal_path__pti_goal_attr_array_1__plain_coverage__type_ctor_info_coverage_info_0;

#line 91 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0;

#line 94 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0;

#line 97 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_0;

#line 100 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_1;

#line 103 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_after_0_2[1];

#line 106 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_after_0_2;

#line 109 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_0[2];

#line 112 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_1[1];

#line 115 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_after_0[2];

#line 118 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_after_0[3];

#line 121 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_after_0[3];

#line 124 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_0;

#line 127 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_1;

#line 130 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_before_0_2[1];

#line 133 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_before_0_2;

#line 136 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_0[2];

#line 139 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_1[1];

#line 142 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_before_0[2];

#line 145 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_before_0[3];

#line 148 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_before_0[3];

#line 151 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_0;

#line 154 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_1;

#line 157 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_2[1];

#line 160 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_2;

#line 163 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_3[2];

#line 166 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_3;

#line 169 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_4[1];

#line 172 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_4;

#line 175 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_5[1];

#line 178 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_info_0_5;

#line 181 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_0[2];

#line 184 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_1[1];

#line 187 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_2[1];

#line 190 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_3[2];

#line 193 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_info_0[4];

#line 196 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_info_0[6];

#line 199 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_info_0[6];

#line 202 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_point_0_0[3];

#line 205 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_point_0_0;

#line 208 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_point_0_0[1];

#line 211 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_point_0[1];

#line 214 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_point_0[1];

#line 217 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_point_0[1];

#line 220 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1;

#line 223 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct2 coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1;

#line 226 "coverage.c"
static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0;

#line 229 "coverage.c"
static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 232 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_reference_info_1_0[5];

#line 235 "coverage.c"
static const MR_ConstString coverage__coverage__field_names_coverage_reference_info_1_0[5];

#line 238 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_coverage_reference_info_1_0;

#line 241 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_reference_info_1_0[1];

#line 244 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_reference_info_1[1];

#line 247 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_reference_info_1[1];

#line 250 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_reference_info_1[1];

#line 253 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_0;

#line 256 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_1;

#line 259 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_after_0_2[1];

#line 262 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_after_0_2;

#line 265 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_0[2];

#line 268 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_1[1];

#line 271 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_after_0[2];

#line 274 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_after_0[3];

#line 277 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_after_0[3];

#line 280 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_0;

#line 283 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_1;

#line 286 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_before_0_2[1];

#line 289 "coverage.c"
static const MR_DuFunctorDesc coverage__coverage__du_functor_desc_sum_coverage_before_0_2;

#line 292 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_0[2];

#line 295 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_1[1];

#line 298 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_sum_coverage_before_0[2];

#line 301 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_before_0[3];

#line 304 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_before_0[3];

#line 307 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0_10001(
#line 310 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 312 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 315 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_after_0_0_10001(
#line 318 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 320 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 322 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 325 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0_10001(
#line 328 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 330 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 333 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_before_0_0_10001(
#line 336 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 338 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 340 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 343 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_info_0_0_10001(
#line 346 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 348 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 351 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_info_0_0_10001(
#line 354 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 356 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 358 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 361 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_point_0_0_10001(
#line 364 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 366 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 369 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_point_0_0_10001(
#line 372 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 374 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 376 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 379 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0_10001(
#line 382 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 384 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 386 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 389 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0_10001(
#line 392 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 394 "coverage.c"
  MR_Box * coverage__wrapper_arg_2,
#line 396 "coverage.c"
  MR_Box coverage__wrapper_arg_3,
#line 398 "coverage.c"
  MR_Box coverage__wrapper_arg_4);

#line 401 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0_10001(
#line 404 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 406 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 409 "coverage.c"
static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0_10001(
#line 412 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 414 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 416 "coverage.c"
  MR_Box coverage__wrapper_arg_3);

#line 419 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0_10001(
#line 422 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 424 "coverage.c"
  MR_Box coverage__wrapper_arg_2);

#line 427 "coverage.c"
static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0_10001(
#line 430 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 432 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 434 "coverage.c"
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



#line 1038 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__goal_path__pti_goal_attr_array_1__plain_coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_PseudoTypeInfo) &coverage__coverage__type_ctor_info_coverage_info_0
  }
};

#line 1046 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__mdbcomp__program_representation__pti_case_rep_1__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_case_rep_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
  }
};

#line 1054 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__maybe__pti_maybe_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1062 "coverage.c"
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

#line 1077 "coverage.c"
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

#line 1092 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_after_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1097 "coverage.c"
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

#line 1112 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_coverage_after_0_1
};

#line 1118 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_after_0_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_after_0_2
};

#line 1123 "coverage.c"
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

#line 1137 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_after_0[3] = {
  &coverage__coverage__du_functor_desc_coverage_after_0_2,
  &coverage__coverage__du_functor_desc_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_coverage_after_0_1
};

#line 1144 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_after_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1151 "coverage.c"
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

#line 1172 "coverage.c"
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

#line 1187 "coverage.c"
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

#line 1202 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_before_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1207 "coverage.c"
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

#line 1222 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_coverage_before_0_1
};

#line 1228 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_before_0_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_before_0_2
};

#line 1233 "coverage.c"
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

#line 1247 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_before_0[3] = {
  &coverage__coverage__du_functor_desc_coverage_before_0_2,
  &coverage__coverage__du_functor_desc_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_coverage_before_0_1
};

#line 1254 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_before_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1261 "coverage.c"
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

#line 1282 "coverage.c"
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

#line 1297 "coverage.c"
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

#line 1312 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1317 "coverage.c"
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

#line 1332 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_3[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1338 "coverage.c"
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

#line 1353 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1358 "coverage.c"
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

#line 1373 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_info_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1378 "coverage.c"
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

#line 1393 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_0[2] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_0,
  &coverage__coverage__du_functor_desc_coverage_info_0_1
};

#line 1399 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_2
};

#line 1404 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_2[1] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_3
};

#line 1409 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_info_0_3[2] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_4,
  &coverage__coverage__du_functor_desc_coverage_info_0_5
};

#line 1415 "coverage.c"
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

#line 1439 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_info_0[6] = {
  &coverage__coverage__du_functor_desc_coverage_info_0_3,
  &coverage__coverage__du_functor_desc_coverage_info_0_5,
  &coverage__coverage__du_functor_desc_coverage_info_0_4,
  &coverage__coverage__du_functor_desc_coverage_info_0_2,
  &coverage__coverage__du_functor_desc_coverage_info_0_1,
  &coverage__coverage__du_functor_desc_coverage_info_0_0
};

#line 1449 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_info_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1459 "coverage.c"
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

#line 1480 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_point_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_cp_type_0
};

#line 1487 "coverage.c"
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

#line 1502 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_point_0_0[1] = {
  &coverage__coverage__du_functor_desc_coverage_point_0_0
};

#line 1507 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_point_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_point_0_0
  }
};

#line 1516 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_point_0[1] = {
  &coverage__coverage__du_functor_desc_coverage_point_0_0
};

#line 1521 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_point_0[1] = {
  (MR_Integer) 0
};

#line 1526 "coverage.c"
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

#line 1547 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct1 coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1555 "coverage.c"
static const MR_FA_PseudoTypeInfo_Struct2 coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &coverage__analysis_utils__pti_cost_and_callees_1__pseudo_1
  }
};

#line 1564 "coverage.c"
static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_point_0
  }
};

#line 1573 "coverage.c"
static const MR_FA_TypeInfo_Struct2 coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 1582 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_coverage_reference_info_1_0[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
  (MR_PseudoTypeInfo) &coverage__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__pseudo_analysis_utils__pti_cost_and_callees_1__pseudo_1,
  (MR_PseudoTypeInfo) &coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0,
  (MR_PseudoTypeInfo) &coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0coverage__type_ctor_info_coverage_point_0,
  (MR_PseudoTypeInfo) &coverage__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 1591 "coverage.c"
static const MR_ConstString coverage__coverage__field_names_coverage_reference_info_1_0[5] = {
  (MR_String) "cri_proc",
  (MR_String) "cri_call_sites",
  (MR_String) "cri_solns_coverage_points",
  (MR_String) "cri_branch_coverage_points",
  (MR_String) "cri_goal_path_map"
};

#line 1600 "coverage.c"
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

#line 1615 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_coverage_reference_info_1_0[1] = {
  &coverage__coverage__du_functor_desc_coverage_reference_info_1_0
};

#line 1620 "coverage.c"
static const MR_DuPtagLayout coverage__coverage__du_ptag_ordered_coverage_reference_info_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    coverage__coverage__du_stag_ordered_coverage_reference_info_1_0
  }
};

#line 1629 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_coverage_reference_info_1[1] = {
  &coverage__coverage__du_functor_desc_coverage_reference_info_1_0
};

#line 1634 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_coverage_reference_info_1[1] = {
  (MR_Integer) 0
};

#line 1639 "coverage.c"
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

#line 1660 "coverage.c"
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

#line 1675 "coverage.c"
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

#line 1690 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_after_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1695 "coverage.c"
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

#line 1710 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_0[2] = {
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_1
};

#line 1716 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_after_0_1[1] = {
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_2
};

#line 1721 "coverage.c"
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

#line 1735 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_after_0[3] = {
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_2,
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_after_0_1
};

#line 1742 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_after_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1749 "coverage.c"
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

#line 1770 "coverage.c"
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

#line 1785 "coverage.c"
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

#line 1800 "coverage.c"
static const MR_PseudoTypeInfo coverage__coverage__field_types_sum_coverage_before_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1805 "coverage.c"
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

#line 1820 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_0[2] = {
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_1
};

#line 1826 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_stag_ordered_sum_coverage_before_0_1[1] = {
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_2
};

#line 1831 "coverage.c"
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

#line 1845 "coverage.c"
static const MR_DuFunctorDescPtr coverage__coverage__du_name_ordered_sum_coverage_before_0[3] = {
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_2,
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_0,
  &coverage__coverage__du_functor_desc_sum_coverage_before_0_1
};

#line 1852 "coverage.c"
static const MR_Integer coverage__coverage__functor_number_map_sum_coverage_before_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1859 "coverage.c"
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

#line 1880 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_after_0_0_10001(
#line 1883 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 1885 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 1887 "coverage.c"
{
#line 1889 "coverage.c"
  {
#line 1891 "coverage.c"
    MR_bool coverage__succeeded;

#line 1894 "coverage.c"
    {
#line 1896 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_after_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 1899 "coverage.c"
    return coverage__succeeded;
#line 1901 "coverage.c"
  }
#line 1903 "coverage.c"
}

#line 1906 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_after_0_0_10001(
#line 1909 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 1911 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 1913 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 1915 "coverage.c"
{
#line 1917 "coverage.c"
  {
#line 1919 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 1922 "coverage.c"
    {
#line 1924 "coverage.c"
      coverage____Compare____coverage_after_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 1927 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 1929 "coverage.c"
  }
#line 1931 "coverage.c"
}

#line 1934 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_before_0_0_10001(
#line 1937 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 1939 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 1941 "coverage.c"
{
#line 1943 "coverage.c"
  {
#line 1945 "coverage.c"
    MR_bool coverage__succeeded;

#line 1948 "coverage.c"
    {
#line 1950 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_before_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 1953 "coverage.c"
    return coverage__succeeded;
#line 1955 "coverage.c"
  }
#line 1957 "coverage.c"
}

#line 1960 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_before_0_0_10001(
#line 1963 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 1965 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 1967 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 1969 "coverage.c"
{
#line 1971 "coverage.c"
  {
#line 1973 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 1976 "coverage.c"
    {
#line 1978 "coverage.c"
      coverage____Compare____coverage_before_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 1981 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 1983 "coverage.c"
  }
#line 1985 "coverage.c"
}

#line 1988 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_info_0_0_10001(
#line 1991 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 1993 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 1995 "coverage.c"
{
#line 1997 "coverage.c"
  {
#line 1999 "coverage.c"
    MR_bool coverage__succeeded;

#line 2002 "coverage.c"
    {
#line 2004 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_info_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 2007 "coverage.c"
    return coverage__succeeded;
#line 2009 "coverage.c"
  }
#line 2011 "coverage.c"
}

#line 2014 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_info_0_0_10001(
#line 2017 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 2019 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2021 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2023 "coverage.c"
{
#line 2025 "coverage.c"
  {
#line 2027 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2030 "coverage.c"
    {
#line 2032 "coverage.c"
      coverage____Compare____coverage_info_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2035 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2037 "coverage.c"
  }
#line 2039 "coverage.c"
}

#line 2042 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_point_0_0_10001(
#line 2045 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2047 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 2049 "coverage.c"
{
#line 2051 "coverage.c"
  {
#line 2053 "coverage.c"
    MR_bool coverage__succeeded;

#line 2056 "coverage.c"
    {
#line 2058 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_point_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 2061 "coverage.c"
    return coverage__succeeded;
#line 2063 "coverage.c"
  }
#line 2065 "coverage.c"
}

#line 2068 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_point_0_0_10001(
#line 2071 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 2073 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2075 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2077 "coverage.c"
{
#line 2079 "coverage.c"
  {
#line 2081 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2084 "coverage.c"
    {
#line 2086 "coverage.c"
      coverage____Compare____coverage_point_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2089 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2091 "coverage.c"
  }
#line 2093 "coverage.c"
}

#line 2096 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____coverage_reference_info_1_0_10001(
#line 2099 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2101 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2103 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2105 "coverage.c"
{
#line 2107 "coverage.c"
  {
#line 2109 "coverage.c"
    MR_bool coverage__succeeded;

#line 2112 "coverage.c"
    {
#line 2114 "coverage.c"
      coverage__succeeded = coverage____Unify____coverage_reference_info_1_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2117 "coverage.c"
    return coverage__succeeded;
#line 2119 "coverage.c"
  }
#line 2121 "coverage.c"
}

#line 2124 "coverage.c"
static void MR_CALL 
coverage____Compare____coverage_reference_info_1_0_10001(
#line 2127 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2129 "coverage.c"
  MR_Box * coverage__wrapper_arg_2,
#line 2131 "coverage.c"
  MR_Box coverage__wrapper_arg_3,
#line 2133 "coverage.c"
  MR_Box coverage__wrapper_arg_4)
#line 2135 "coverage.c"
{
#line 2137 "coverage.c"
  {
#line 2139 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2142 "coverage.c"
    {
#line 2144 "coverage.c"
      coverage____Compare____coverage_reference_info_1_0(((MR_Word) coverage__wrapper_arg_1), &coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_3), ((MR_Word) coverage__wrapper_arg_4));
    }
#line 2147 "coverage.c"
    *coverage__wrapper_arg_2 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2149 "coverage.c"
  }
#line 2151 "coverage.c"
}

#line 2154 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_after_0_0_10001(
#line 2157 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2159 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 2161 "coverage.c"
{
#line 2163 "coverage.c"
  {
#line 2165 "coverage.c"
    MR_bool coverage__succeeded;

#line 2168 "coverage.c"
    {
#line 2170 "coverage.c"
      coverage__succeeded = coverage____Unify____sum_coverage_after_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 2173 "coverage.c"
    return coverage__succeeded;
#line 2175 "coverage.c"
  }
#line 2177 "coverage.c"
}

#line 2180 "coverage.c"
static void MR_CALL 
coverage____Compare____sum_coverage_after_0_0_10001(
#line 2183 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 2185 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2187 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2189 "coverage.c"
{
#line 2191 "coverage.c"
  {
#line 2193 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2196 "coverage.c"
    {
#line 2198 "coverage.c"
      coverage____Compare____sum_coverage_after_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2201 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2203 "coverage.c"
  }
#line 2205 "coverage.c"
}

#line 2208 "coverage.c"
static MR_bool MR_CALL 
coverage____Unify____sum_coverage_before_0_0_10001(
#line 2211 "coverage.c"
  MR_Box coverage__wrapper_arg_1,
#line 2213 "coverage.c"
  MR_Box coverage__wrapper_arg_2)
#line 2215 "coverage.c"
{
#line 2217 "coverage.c"
  {
#line 2219 "coverage.c"
    MR_bool coverage__succeeded;

#line 2222 "coverage.c"
    {
#line 2224 "coverage.c"
      coverage__succeeded = coverage____Unify____sum_coverage_before_0_0(((MR_Word) coverage__wrapper_arg_1), ((MR_Word) coverage__wrapper_arg_2));
    }
#line 2227 "coverage.c"
    return coverage__succeeded;
#line 2229 "coverage.c"
  }
#line 2231 "coverage.c"
}

#line 2234 "coverage.c"
static void MR_CALL 
coverage____Compare____sum_coverage_before_0_0_10001(
#line 2237 "coverage.c"
  MR_Box * coverage__wrapper_arg_1,
#line 2239 "coverage.c"
  MR_Box coverage__wrapper_arg_2,
#line 2241 "coverage.c"
  MR_Box coverage__wrapper_arg_3)
#line 2243 "coverage.c"
{
#line 2245 "coverage.c"
  {
#line 2247 "coverage.c"
    MR_Word coverage__conv0_HeadVar__1_1;

#line 2250 "coverage.c"
    {
#line 2252 "coverage.c"
      coverage____Compare____sum_coverage_before_0_0(&coverage__conv0_HeadVar__1_1, ((MR_Word) coverage__wrapper_arg_2), ((MR_Word) coverage__wrapper_arg_3));
    }
#line 2255 "coverage.c"
    *coverage__wrapper_arg_1 = ((MR_Box) (coverage__conv0_HeadVar__1_1));
#line 2257 "coverage.c"
  }
#line 2259 "coverage.c"
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
#line 3013 "coverage.c"
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
#line 3050 "coverage.c"
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
#line 3068 "coverage.c"
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
#line 3086 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 210 "coverage.m"
        else
#line 210 "coverage.m"
          {
#line 210 "coverage.m"
            MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 210 "coverage.m"
            if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3097 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 210 "coverage.m"
            else
#line 210 "coverage.m"
              if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3103 "coverage.c"
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
#line 3199 "coverage.c"
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
#line 3236 "coverage.c"
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
#line 3254 "coverage.c"
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
#line 3272 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 215 "coverage.m"
        else
#line 215 "coverage.m"
          {
#line 215 "coverage.m"
            MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 215 "coverage.m"
            if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3283 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 215 "coverage.m"
            else
#line 215 "coverage.m"
              if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3289 "coverage.c"
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
#line 3385 "coverage.c"
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
#line 3424 "coverage.c"
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
#line 3458 "coverage.c"
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

#line 3475 "coverage.c"
            {
#line 3477 "coverage.c"
              coverage__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3479 "coverage.c"
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_24_24, 0) = ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1));
#line 3481 "coverage.c"
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_24_24, 1) = ((MR_Box) (coverage__TypeInfo_for_Callee_20));
#line 3483 "coverage.c"
            }
#line 265 "coverage.m"
            {
#line 265 "coverage.m"
              mercury__tree234____Compare____tree234_2_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, coverage__TypeInfo_24_24, &coverage__V_15_15, coverage__V_5_5, coverage__V_10_10);
            }
#line 3490 "coverage.c"
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
#line 3510 "coverage.c"
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
#line 3530 "coverage.c"
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

#line 3627 "coverage.c"
        {
#line 3629 "coverage.c"
          coverage__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(coverage__V_3_3, coverage__V_8_8);
        }
#line 265 "coverage.m"
        if (coverage__succeeded)
#line 265 "coverage.m"
          {
#line 3636 "coverage.c"
            coverage__TypeCtorInfo_17_17 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 3638 "coverage.c"
            coverage__TypeCtorInfo_18_18 = (MR_Word) &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1;
#line 3640 "coverage.c"
            {
#line 3642 "coverage.c"
              coverage__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3644 "coverage.c"
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_19_19, 0) = ((MR_Box) (coverage__TypeCtorInfo_18_18));
#line 3646 "coverage.c"
              MR_hl_field(MR_mktag(0), coverage__TypeInfo_19_19, 1) = ((MR_Box) (coverage__TypeInfo_for_Callee_15));
#line 3648 "coverage.c"
            }
#line 3650 "coverage.c"
            {
#line 3652 "coverage.c"
              coverage__succeeded = mercury__tree234____Unify____tree234_2_0(coverage__TypeCtorInfo_17_17, coverage__TypeInfo_19_19, coverage__V_4_4, coverage__V_9_9);
            }
#line 265 "coverage.m"
            if (coverage__succeeded)
#line 265 "coverage.m"
              {
#line 3659 "coverage.c"
                coverage__TypeInfo_22_22 = (MR_Word) &coverage_scalar_common_2[0];
#line 3661 "coverage.c"
                {
#line 3663 "coverage.c"
                  coverage__succeeded = mercury__builtin__unify_2_p_0(coverage__TypeInfo_22_22, ((MR_Box) (coverage__V_5_5)), ((MR_Box) (coverage__V_10_10)));
                }
#line 265 "coverage.m"
                if (coverage__succeeded)
#line 265 "coverage.m"
                  {
#line 3670 "coverage.c"
                    coverage__TypeInfo_23_23 = (MR_Word) &coverage_scalar_common_2[0];
#line 3672 "coverage.c"
                    {
#line 3674 "coverage.c"
                      coverage__succeeded = mercury__builtin__unify_2_p_0(coverage__TypeInfo_23_23, ((MR_Box) (coverage__V_6_6)), ((MR_Box) (coverage__V_11_11)));
                    }
#line 265 "coverage.m"
                    if (coverage__succeeded)
#line 265 "coverage.m"
                      {
#line 3681 "coverage.c"
                        coverage__TypeInfo_24_24 = (MR_Word) &coverage_scalar_common_2[1];
#line 3683 "coverage.c"
                        {
#line 3685 "coverage.c"
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
#line 3729 "coverage.c"
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
#line 3755 "coverage.c"
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
#line 3775 "coverage.c"
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

#line 3851 "coverage.c"
        coverage__succeeded = (coverage__V_3_3 == coverage__V_6_6);
#line 61 "coverage.m"
        if (coverage__succeeded)
#line 61 "coverage.m"
          {
#line 3857 "coverage.c"
            {
#line 3859 "coverage.c"
              coverage__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(coverage__V_4_4, coverage__V_7_7);
            }
#line 61 "coverage.m"
            if (coverage__succeeded)
#line 3864 "coverage.c"
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
#line 3901 "coverage.c"
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
#line 3921 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
            else
#line 30 "coverage.m"
              if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3927 "coverage.c"
                *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
              else
#line 30 "coverage.m"
                if (((((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3933 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                else
#line 3937 "coverage.c"
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
#line 3957 "coverage.c"
                *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
              else
#line 30 "coverage.m"
                if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3963 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                else
#line 30 "coverage.m"
                  if (((((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3969 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                  else
#line 3973 "coverage.c"
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
#line 3988 "coverage.c"
                *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
              else
#line 30 "coverage.m"
                if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3994 "coverage.c"
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
#line 4014 "coverage.c"
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
#line 4037 "coverage.c"
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    else
#line 30 "coverage.m"
                      if (((((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4043 "coverage.c"
                        *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                      else
#line 4047 "coverage.c"
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
#line 4062 "coverage.c"
                  *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                else
#line 30 "coverage.m"
                  if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4068 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                  else
#line 30 "coverage.m"
                    if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4074 "coverage.c"
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
#line 4098 "coverage.c"
                          *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "coverage.m"
                        else
#line 4102 "coverage.c"
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
#line 4117 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                  else
#line 30 "coverage.m"
                    if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4123 "coverage.c"
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    else
#line 30 "coverage.m"
                      if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4129 "coverage.c"
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                      else
#line 30 "coverage.m"
                        if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4135 "coverage.c"
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
#line 4157 "coverage.c"
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
#line 4170 "coverage.c"
                    *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                  else
#line 30 "coverage.m"
                    if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4176 "coverage.c"
                      *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                    else
#line 30 "coverage.m"
                      if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4182 "coverage.c"
                        *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                      else
#line 30 "coverage.m"
                        if (((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4188 "coverage.c"
                          *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "coverage.m"
                        else
#line 30 "coverage.m"
                          if (((((MR_tag((MR_Word) coverage__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), coverage__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4194 "coverage.c"
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
#line 4298 "coverage.c"
                  coverage__succeeded = (coverage__V_9_9 == coverage__V_11_11);
#line 30 "coverage.m"
                  if (coverage__succeeded)
#line 4302 "coverage.c"
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
#line 4327 "coverage.c"
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
#line 4352 "coverage.c"
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
#line 4375 "coverage.c"
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
#line 4412 "coverage.c"
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
#line 4430 "coverage.c"
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
#line 4448 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 200 "coverage.m"
        else
#line 200 "coverage.m"
          {
#line 200 "coverage.m"
            MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 200 "coverage.m"
            if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4459 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 200 "coverage.m"
            else
#line 200 "coverage.m"
              if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4465 "coverage.c"
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
#line 4561 "coverage.c"
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
#line 4598 "coverage.c"
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
#line 4616 "coverage.c"
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
#line 4634 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 1;
#line 205 "coverage.m"
        else
#line 205 "coverage.m"
          {
#line 205 "coverage.m"
            MR_Integer coverage__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__HeadVar__2_2, (MR_Integer) 0)));

#line 205 "coverage.m"
            if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4645 "coverage.c"
              *coverage__HeadVar__1_1 = (MR_Integer) 2;
#line 205 "coverage.m"
            else
#line 205 "coverage.m"
              if ((coverage__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4651 "coverage.c"
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
#line 4747 "coverage.c"
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
        MR_Word coverage__V_75_75;
#line 733 "coverage.m"
        MR_Word coverage__V_76_76;
#line 733 "coverage.m"
        MR_String coverage__V_77_77;
#line 733 "coverage.m"
        MR_Word coverage__V_78_78;
#line 733 "coverage.m"
        MR_Word coverage__V_79_79;
#line 733 "coverage.m"
        MR_String coverage__V_80_80;
#line 733 "coverage.m"
        MR_Word coverage__V_81_81;
#line 733 "coverage.m"
        MR_Word coverage__V_82_82;
#line 733 "coverage.m"
        MR_String coverage__V_83_83;
#line 733 "coverage.m"
        MR_Word coverage__V_84_84;
#line 733 "coverage.m"
        MR_Word coverage__V_85_85;
#line 733 "coverage.m"
        MR_String coverage__V_86_86;
#line 733 "coverage.m"
        MR_Word coverage__V_87_87;
#line 733 "coverage.m"
        MR_Word coverage__V_88_88;
#line 733 "coverage.m"
        MR_String coverage__V_89_89;
#line 733 "coverage.m"
        MR_Word coverage__V_90_90;
#line 733 "coverage.m"
        MR_Word coverage__V_91_91;
#line 733 "coverage.m"
        MR_String coverage__V_92_92;
#line 733 "coverage.m"
        MR_Word coverage__V_93_93;
#line 733 "coverage.m"
        MR_Word coverage__V_94_94;
#line 733 "coverage.m"
        MR_String coverage__V_95_95;
#line 733 "coverage.m"
        MR_Word coverage__V_96_96;
#line 733 "coverage.m"
        MR_Word coverage__V_97_97;
#line 733 "coverage.m"
        MR_String coverage__V_98_98;
#line 733 "coverage.m"
        MR_Word coverage__V_99_99;
#line 733 "coverage.m"
        MR_Word coverage__V_100_100;
#line 733 "coverage.m"
        MR_String coverage__V_101_101;

#line 737 "coverage.m"
        {
#line 737 "coverage.m"
          coverage__V_77_77 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_136_136, ((MR_Box) (coverage__Before_15)));
        }
#line 737 "coverage.m"
        {
#line 737 "coverage.m"
          coverage__V_76_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 737 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_76_76, 0) = ((MR_Box) (coverage__V_77_77));
#line 737 "coverage.m"
        }
#line 6226 "coverage.c"
        coverage__TypeCtorInfo_137_137 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_after_0;
#line 737 "coverage.m"
        {
#line 737 "coverage.m"
          coverage__V_80_80 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_137_137, ((MR_Box) (*coverage__After_16)));
        }
#line 737 "coverage.m"
        {
#line 737 "coverage.m"
          coverage__V_79_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 737 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_79_79, 0) = ((MR_Box) (coverage__V_80_80));
#line 737 "coverage.m"
        }
#line 738 "coverage.m"
        {
#line 738 "coverage.m"
          coverage__V_83_83 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_136_136, ((MR_Box) (coverage__Before_15)));
        }
#line 738 "coverage.m"
        {
#line 738 "coverage.m"
          coverage__V_82_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 738 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_82_82, 0) = ((MR_Box) (coverage__V_83_83));
#line 738 "coverage.m"
        }
#line 738 "coverage.m"
        {
#line 738 "coverage.m"
          coverage__V_86_86 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_137_137, ((MR_Box) (coverage__AfterCond_20)));
        }
#line 738 "coverage.m"
        {
#line 738 "coverage.m"
          coverage__V_85_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 738 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_85_85, 0) = ((MR_Box) (coverage__V_86_86));
#line 738 "coverage.m"
        }
#line 739 "coverage.m"
        {
#line 739 "coverage.m"
          coverage__V_89_89 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_136_136, ((MR_Box) (coverage__BeforeThen_23)));
        }
#line 739 "coverage.m"
        {
#line 739 "coverage.m"
          coverage__V_88_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 739 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_88_88, 0) = ((MR_Box) (coverage__V_89_89));
#line 739 "coverage.m"
        }
#line 739 "coverage.m"
        {
#line 739 "coverage.m"
          coverage__V_92_92 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_137_137, ((MR_Box) (coverage__AfterThen_31)));
        }
#line 739 "coverage.m"
        {
#line 739 "coverage.m"
          coverage__V_91_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 739 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_91_91, 0) = ((MR_Box) (coverage__V_92_92));
#line 739 "coverage.m"
        }
#line 740 "coverage.m"
        {
#line 740 "coverage.m"
          coverage__V_95_95 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_136_136, ((MR_Box) (coverage__BeforeElse_27)));
        }
#line 740 "coverage.m"
        {
#line 740 "coverage.m"
          coverage__V_94_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 740 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_94_94, 0) = ((MR_Box) (coverage__V_95_95));
#line 740 "coverage.m"
        }
#line 740 "coverage.m"
        {
#line 740 "coverage.m"
          coverage__V_98_98 = mercury__string__string_1_f_0(coverage__TypeCtorInfo_137_137, ((MR_Box) (coverage__AfterElse_32)));
        }
#line 740 "coverage.m"
        {
#line 740 "coverage.m"
          coverage__V_97_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 740 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_97_97, 0) = ((MR_Box) (coverage__V_98_98));
#line 740 "coverage.m"
        }
#line 741 "coverage.m"
        {
#line 741 "coverage.m"
          coverage__V_101_101 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(coverage__RevGoalPath_14);
        }
#line 741 "coverage.m"
        {
#line 741 "coverage.m"
          coverage__V_100_100 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 741 "coverage.m"
          MR_hl_field(MR_mktag(2), coverage__V_100_100, 0) = ((MR_Box) (coverage__V_101_101));
#line 741 "coverage.m"
        }
#line 741 "coverage.m"
        {
#line 741 "coverage.m"
          coverage__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_99_99, 0) = ((MR_Box) (coverage__V_100_100));
#line 741 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 741 "coverage.m"
        }
#line 740 "coverage.m"
        {
#line 740 "coverage.m"
          coverage__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_96_96, 0) = ((MR_Box) (coverage__V_97_97));
#line 740 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_96_96, 1) = ((MR_Box) (coverage__V_99_99));
#line 740 "coverage.m"
        }
#line 740 "coverage.m"
        {
#line 740 "coverage.m"
          coverage__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_93_93, 0) = ((MR_Box) (coverage__V_94_94));
#line 740 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_93_93, 1) = ((MR_Box) (coverage__V_96_96));
#line 740 "coverage.m"
        }
#line 739 "coverage.m"
        {
#line 739 "coverage.m"
          coverage__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_90_90, 0) = ((MR_Box) (coverage__V_91_91));
#line 739 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_90_90, 1) = ((MR_Box) (coverage__V_93_93));
#line 739 "coverage.m"
        }
#line 739 "coverage.m"
        {
#line 739 "coverage.m"
          coverage__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_87_87, 0) = ((MR_Box) (coverage__V_88_88));
#line 739 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_87_87, 1) = ((MR_Box) (coverage__V_90_90));
#line 739 "coverage.m"
        }
#line 738 "coverage.m"
        {
#line 738 "coverage.m"
          coverage__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_84_84, 0) = ((MR_Box) (coverage__V_85_85));
#line 738 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_84_84, 1) = ((MR_Box) (coverage__V_87_87));
#line 738 "coverage.m"
        }
#line 738 "coverage.m"
        {
#line 738 "coverage.m"
          coverage__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_81_81, 0) = ((MR_Box) (coverage__V_82_82));
#line 738 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_81_81, 1) = ((MR_Box) (coverage__V_84_84));
#line 738 "coverage.m"
        }
#line 737 "coverage.m"
        {
#line 737 "coverage.m"
          coverage__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_78_78, 0) = ((MR_Box) (coverage__V_79_79));
#line 737 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_78_78, 1) = ((MR_Box) (coverage__V_81_81));
#line 737 "coverage.m"
        }
#line 737 "coverage.m"
        {
#line 737 "coverage.m"
          coverage__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_75_75, 0) = ((MR_Box) (coverage__V_76_76));
#line 737 "coverage.m"
          MR_hl_field(MR_mktag(1), coverage__V_75_75, 1) = ((MR_Box) (coverage__V_78_78));
#line 737 "coverage.m"
        }
#line 733 "coverage.m"
        {
#line 733 "coverage.m"
          coverage__V_67_67 = mercury__string__format_2_f_0((MR_String) "check_ite_coverage/4 failed\n\tWhole: %s %s\n\tCond: %s %s\n\tThen: %s %s\n\tElse: %s %s\n\tGoalPath: %s\n", coverage__V_75_75);
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
          MR_Integer coverage__C_53 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__SumAfter_16, (MR_Integer) 0)));

#line 1291 "coverage.m"
          coverage__succeeded = (coverage__C_53 == (MR_Integer) 0);
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
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (coverage__C_53));
#line 1294 "coverage.m"
            }
#line 1164 "coverage.m"
        }
#line 6950 "coverage.c"
    if ((coverage__CanFail_10 == (MR_Integer) 0))
#line 939 "coverage.m"
      {
#line 939 "coverage.m"
      }
#line 6956 "coverage.c"
    else
#line 6958 "coverage.c"
      {
#line 6960 "coverage.c"
        MR_Word coverage__MaybeSum_60;
#line 6962 "coverage.c"
        MR_Word coverage__V_63_63;
#line 912 "coverage.m"
        MR_Box coverage__conv1_MaybeSum_60;

#line 912 "coverage.m"
        {
#line 912 "coverage.m"
          coverage__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 912 "coverage.m"
          MR_hl_field(MR_mktag(0), coverage__V_63_63, 0) = ((MR_Box) (&coverage_scalar_common_4[0]));
#line 912 "coverage.m"
          MR_hl_field(MR_mktag(0), coverage__V_63_63, 1) = ((MR_Box) (coverage__switch_annotate_coverage_7_p_0_1));
#line 912 "coverage.m"
          MR_hl_field(MR_mktag(0), coverage__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 912 "coverage.m"
          MR_hl_field(MR_mktag(0), coverage__V_63_63, 3) = ((MR_Box) (*coverage__STATE_VARIABLE_Array_19));
#line 912 "coverage.m"
        }
#line 912 "coverage.m"
        {
#line 912 "coverage.m"
          mercury__list__foldl_4_p_0((MR_Word) &coverage_scalar_common_1[0], (MR_Word) &coverage_scalar_common_1[2], coverage__V_63_63, coverage__Cases_8, ((MR_Box) (MR_mkword(MR_mktag(1), &coverage_scalar_common_5[0]))), &coverage__conv1_MaybeSum_60);
        }
#line 912 "coverage.m"
        coverage__MaybeSum_60 = ((MR_Word) coverage__conv1_MaybeSum_60);
#line 6988 "coverage.c"
        if ((coverage__MaybeSum_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "coverage.m"
          {
#line 935 "coverage.m"
          }
#line 6994 "coverage.c"
        else
#line 6996 "coverage.c"
          {
#line 6998 "coverage.c"
            MR_Integer coverage__SumA_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__MaybeSum_60, (MR_Integer) 0)));

#line 7001 "coverage.c"
            if ((coverage__Before_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 918 "coverage.m"
              {
#line 918 "coverage.m"
              }
#line 7007 "coverage.c"
            else
#line 7009 "coverage.c"
              if ((coverage__Before_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7011 "coverage.c"
                {
#line 926 "coverage.m"
                  coverage__succeeded = (coverage__SumA_61 == (MR_Integer) 0);
#line 7015 "coverage.c"
                  if (coverage__succeeded)
#line 927 "coverage.m"
                    {
#line 927 "coverage.m"
                    }
#line 7021 "coverage.c"
                  else
#line 7023 "coverage.c"
                    {
#line 7025 "coverage.c"
                      MR_String coverage__V_75_75;
#line 7027 "coverage.c"
                      MR_Word coverage__V_77_77;
#line 7029 "coverage.c"
                      MR_Word coverage__V_78_78;
#line 7031 "coverage.c"
                      MR_String coverage__V_79_79;
#line 7033 "coverage.c"
                      MR_Word coverage__V_80_80;
#line 7035 "coverage.c"
                      MR_Word coverage__V_81_81;
#line 7037 "coverage.c"
                      MR_String coverage__V_82_82;
#line 7039 "coverage.c"
                      MR_Word coverage__V_83_83;
#line 7041 "coverage.c"
                      MR_Word coverage__V_84_84;
#line 7043 "coverage.c"
                      MR_String coverage__V_85_85;
#line 7045 "coverage.c"
                      MR_Word coverage__V_86_86;
#line 7047 "coverage.c"
                      MR_Word coverage__V_87_87;
#line 7049 "coverage.c"
                      MR_String coverage__V_88_88;

#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_79_79 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_switch_can_fail_rep_0, ((MR_Box) (coverage__CanFail_10)));
                      }
#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_78_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "coverage.m"
                        MR_hl_field(MR_mktag(2), coverage__V_78_78, 0) = ((MR_Box) (coverage__V_79_79));
#line 540 "coverage.m"
                      }
#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_82_82 = mercury__string__string_1_f_0((MR_Word) &coverage_scalar_common_1[1], ((MR_Box) (coverage__Cases_8)));
                      }
#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_81_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "coverage.m"
                        MR_hl_field(MR_mktag(2), coverage__V_81_81, 0) = ((MR_Box) (coverage__V_82_82));
#line 540 "coverage.m"
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_85_85 = mercury__string__string_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_before_0, ((MR_Box) (coverage__Before_11)));
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_84_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 541 "coverage.m"
                        MR_hl_field(MR_mktag(2), coverage__V_84_84, 0) = ((MR_Box) (coverage__V_85_85));
#line 541 "coverage.m"
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_88_88 = mercury__string__string_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_after_0, ((MR_Box) (*coverage__After_12)));
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_87_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 541 "coverage.m"
                        MR_hl_field(MR_mktag(2), coverage__V_87_87, 0) = ((MR_Box) (coverage__V_88_88));
#line 541 "coverage.m"
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_86_86, 0) = ((MR_Box) (coverage__V_87_87));
#line 541 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "coverage.m"
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_83_83, 0) = ((MR_Box) (coverage__V_84_84));
#line 541 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_83_83, 1) = ((MR_Box) (coverage__V_86_86));
#line 541 "coverage.m"
                      }
#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_80_80, 0) = ((MR_Box) (coverage__V_81_81));
#line 540 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_80_80, 1) = ((MR_Box) (coverage__V_83_83));
#line 540 "coverage.m"
                      }
#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_77_77, 0) = ((MR_Box) (coverage__V_78_78));
#line 540 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_77_77, 1) = ((MR_Box) (coverage__V_80_80));
#line 540 "coverage.m"
                      }
#line 538 "coverage.m"
                      {
#line 538 "coverage.m"
                        coverage__V_75_75 = mercury__string__format_2_f_0((MR_String) "check_switch_coverage failed\n\tCanFail: %s\n\tCases: %s\n\tBefore: %s, After: %s\n", coverage__V_77_77);
                      }
#line 538 "coverage.m"
                      {
#line 538 "coverage.m"
                        mercury__require__error_1_p_0(coverage__V_75_75);
#line 538 "coverage.m"
                        return;
                      }
#line 7156 "coverage.c"
                    }
#line 7158 "coverage.c"
                }
#line 7160 "coverage.c"
              else
#line 7162 "coverage.c"
                {
#line 7164 "coverage.c"
                  MR_Integer coverage__SumB_62 = ((MR_Integer) (MR_hl_field(MR_mktag(1), coverage__Before_11, (MR_Integer) 0)));

#line 926 "coverage.m"
                  coverage__succeeded = (coverage__SumA_61 == coverage__SumB_62);
#line 7169 "coverage.c"
                  if (coverage__succeeded)
#line 927 "coverage.m"
                    {
#line 927 "coverage.m"
                    }
#line 7175 "coverage.c"
                  else
#line 7177 "coverage.c"
                    {
#line 7179 "coverage.c"
                      MR_String coverage__V_30_30;
#line 7181 "coverage.c"
                      MR_Word coverage__V_34_34;
#line 7183 "coverage.c"
                      MR_Word coverage__V_35_35;
#line 7185 "coverage.c"
                      MR_String coverage__V_36_36;
#line 7187 "coverage.c"
                      MR_Word coverage__V_37_37;
#line 7189 "coverage.c"
                      MR_Word coverage__V_38_38;
#line 7191 "coverage.c"
                      MR_String coverage__V_39_39;
#line 7193 "coverage.c"
                      MR_Word coverage__V_40_40;
#line 7195 "coverage.c"
                      MR_Word coverage__V_41_41;
#line 7197 "coverage.c"
                      MR_String coverage__V_42_42;
#line 7199 "coverage.c"
                      MR_Word coverage__V_43_43;
#line 7201 "coverage.c"
                      MR_Word coverage__V_44_44;
#line 7203 "coverage.c"
                      MR_String coverage__V_45_45;

#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_36_36 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_switch_can_fail_rep_0, ((MR_Box) (coverage__CanFail_10)));
                      }
#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "coverage.m"
                        MR_hl_field(MR_mktag(2), coverage__V_35_35, 0) = ((MR_Box) (coverage__V_36_36));
#line 540 "coverage.m"
                      }
#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_39_39 = mercury__string__string_1_f_0((MR_Word) &coverage_scalar_common_1[1], ((MR_Box) (coverage__Cases_8)));
                      }
#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 540 "coverage.m"
                        MR_hl_field(MR_mktag(2), coverage__V_38_38, 0) = ((MR_Box) (coverage__V_39_39));
#line 540 "coverage.m"
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_42_42 = mercury__string__string_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_before_0, ((MR_Box) (coverage__Before_11)));
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_41_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 541 "coverage.m"
                        MR_hl_field(MR_mktag(2), coverage__V_41_41, 0) = ((MR_Box) (coverage__V_42_42));
#line 541 "coverage.m"
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_45_45 = mercury__string__string_1_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_after_0, ((MR_Box) (*coverage__After_12)));
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_44_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 541 "coverage.m"
                        MR_hl_field(MR_mktag(2), coverage__V_44_44, 0) = ((MR_Box) (coverage__V_45_45));
#line 541 "coverage.m"
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_43_43, 0) = ((MR_Box) (coverage__V_44_44));
#line 541 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "coverage.m"
                      }
#line 541 "coverage.m"
                      {
#line 541 "coverage.m"
                        coverage__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_40_40, 0) = ((MR_Box) (coverage__V_41_41));
#line 541 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_40_40, 1) = ((MR_Box) (coverage__V_43_43));
#line 541 "coverage.m"
                      }
#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_37_37, 0) = ((MR_Box) (coverage__V_38_38));
#line 540 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_37_37, 1) = ((MR_Box) (coverage__V_40_40));
#line 540 "coverage.m"
                      }
#line 540 "coverage.m"
                      {
#line 540 "coverage.m"
                        coverage__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_34_34, 0) = ((MR_Box) (coverage__V_35_35));
#line 540 "coverage.m"
                        MR_hl_field(MR_mktag(1), coverage__V_34_34, 1) = ((MR_Box) (coverage__V_37_37));
#line 540 "coverage.m"
                      }
#line 538 "coverage.m"
                      {
#line 538 "coverage.m"
                        coverage__V_30_30 = mercury__string__format_2_f_0((MR_String) "check_switch_coverage failed\n\tCanFail: %s\n\tCases: %s\n\tBefore: %s, After: %s\n", coverage__V_34_34);
                      }
#line 538 "coverage.m"
                      {
#line 538 "coverage.m"
                        mercury__require__error_1_p_0(coverage__V_30_30);
#line 538 "coverage.m"
                        return;
                      }
#line 7310 "coverage.c"
                    }
#line 7312 "coverage.c"
                }
#line 7314 "coverage.c"
          }
#line 7316 "coverage.c"
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

#line 7847 "coverage.c"
                  {
#line 7849 "coverage.c"
                    coverage__TypeInfo_168_168 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7851 "coverage.c"
                    MR_hl_field(MR_mktag(0), coverage__TypeInfo_168_168, 0) = ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1));
#line 7853 "coverage.c"
                    MR_hl_field(MR_mktag(0), coverage__TypeInfo_168_168, 1) = ((MR_Box) (coverage__TypeInfo_for_Callee_164));
#line 7855 "coverage.c"
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
#line 319 "coverage.m"
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
#line 8104 "coverage.c"
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
#line 1314 "coverage.m"
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
#line 1311 "coverage.m"
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
