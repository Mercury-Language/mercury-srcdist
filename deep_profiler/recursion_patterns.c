/*
** Automatically generated from `recursion_patterns.m'
** by the Mercury compiler,
** version DEV
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


/* :- module recursion_patterns. */
/* :- implementation. */

/*
INIT mercury__recursion_patterns__init
ENDINIT
*/

#include "recursion_patterns.mih"


#include "analysis_utils.mih"
#include "array_util.mih"
#include "coverage.mih"
#include "create_report.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "query.mih"
#include "report.mih"
#include "var_use_analysis.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 92 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0;

#line 95 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

#line 98 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

#line 101 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0;

#line 104 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_recursion_patterns__type_ctor_info_recursion_level_0;

#line 107 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct1 recursion_patterns__maybe__pti_maybe_1__plain_recursion_patterns__type_ctor_info_first_proc_info_0;

#line 110 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_first_proc_info_0_0[2];

#line 113 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_first_proc_info_0_0[2];

#line 116 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_first_proc_info_0_0;

#line 119 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_first_proc_info_0_0[1];

#line 122 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_first_proc_info_0[1];

#line 125 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_first_proc_info_0[1];

#line 128 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_first_proc_info_0[1];

#line 131 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_own_and_inherit_prof_info_0_0[2];

#line 134 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_own_and_inherit_prof_info_0_0[2];

#line 137 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_own_and_inherit_prof_info_0_0;

#line 140 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_own_and_inherit_prof_info_0_0[1];

#line 143 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_own_and_inherit_prof_info_0[1];

#line 146 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_own_and_inherit_prof_info_0[1];

#line 149 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_own_and_inherit_prof_info_0[1];

#line 152 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct2 recursion_patterns__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

#line 155 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0;

#line 158 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_analysis_info_0_0[3];

#line 161 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_analysis_info_0_0[3];

#line 164 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_analysis_info_0_0;

#line 167 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_analysis_info_0_0[1];

#line 170 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_analysis_info_0[1];

#line 173 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_analysis_info_0[1];

#line 176 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_analysis_info_0[1];

#line 179 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_0;

#line 182 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct2 recursion_patterns__pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0;

#line 185 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0;

#line 188 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__set_ordlist__ti_set_ordlist_1recursion_patterns__type_ctor_info_recursion_error_0;

#line 191 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_data_0_1[3];

#line 194 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_data_0_1[3];

#line 197 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_1;

#line 200 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_0[1];

#line 203 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_1[1];

#line 206 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_data_0[2];

#line 209 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_data_0[2];

#line 212 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_data_0[2];

#line 215 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_error_0[1];

#line 218 "recursion_patterns.c"
static const MR_NotagFunctorDesc recursion_patterns__recursion_patterns__notag_functor_desc_recursion_error_0;

#line 221 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_level_0_0[2];

#line 224 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_level_0_0[2];

#line 227 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_level_0_0;

#line 230 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_level_0_0[1];

#line 233 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_level_0[1];

#line 236 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_level_0[1];

#line 239 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_level_0[1];

#line 242 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__maybe__ti_maybe_1recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0;

#line 245 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct2 recursion_patterns__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0;

#line 248 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_type_raw_freq_data_0_0[3];

#line 251 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_type_raw_freq_data_0_0[3];

#line 254 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_freq_data_0_0;

#line 257 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_freq_data_0_0[1];

#line 260 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_freq_data_0[1];

#line 263 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_freq_data_0[1];

#line 266 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_freq_data_0[1];

#line 269 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_type_raw_proc_freq_data_0_0[3];

#line 272 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_type_raw_proc_freq_data_0_0[3];

#line 275 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_proc_freq_data_0_0;

#line 278 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_proc_freq_data_0_0[1];

#line 281 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_proc_freq_data_0[1];

#line 284 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_proc_freq_data_0[1];

#line 287 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_proc_freq_data_0[1];

#line 290 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0_10001(
#line 293 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 295 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2);

#line 298 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0_10001(
#line 301 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 303 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 305 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3);

#line 308 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0_10001(
#line 311 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 313 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2);

#line 316 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0_10001(
#line 319 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 321 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 323 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3);

#line 326 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0_10001(
#line 329 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 331 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2);

#line 334 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0_10001(
#line 337 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 339 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 341 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3);

#line 344 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0_10001(
#line 347 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 349 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2);

#line 352 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0_10001(
#line 355 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 357 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 359 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3);

#line 362 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0_10001(
#line 365 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 367 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2);

#line 370 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0_10001(
#line 373 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 375 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 377 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3);

#line 380 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0_10001(
#line 383 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 385 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2);

#line 388 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0_10001(
#line 391 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 393 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 395 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3);

#line 398 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0_10001(
#line 401 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 403 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2);

#line 406 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0_10001(
#line 409 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 411 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 413 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3);

#line 416 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0_10001(
#line 419 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 421 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2);

#line 424 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0_10001(
#line 427 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 429 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 431 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3);

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_99_117_114_115_105_111_110_95_100_97_116_97_95_97_110_100_95_112_114_111_98_97_98_105_108_105_116_121_95_95_55_53_54_95_95_49_95_95_91_50_93_95_48_4_p_0(
#line 756 "recursion_patterns.m"
  MR_Float recursion_patterns__Prob_1,
#line 756 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_14,
#line 756 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__4_15);

#line 1003 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_112_114_111_99_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
#line 1003 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 1003 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 1003 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 1003 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5);

#line 1000 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0_1(
#line 1000 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 1000 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 1000 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 1000 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 983 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
#line 983 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 983 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 983 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 983 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5);

#line 855 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0_1(
#line 855 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 855 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 855 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 855 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 820 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0(
#line 820 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 820 "recursion_patterns.m"
  MR_Word recursion_patterns__CliquePtr_8,
#line 820 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_27,
#line 820 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_28);

#line 969 "recursion_patterns.m"
static MR_Integer MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__969__1_1_f_0(
#line 969 "recursion_patterns.m"
  MR_Word recursion_patterns__LambdaHeadVar__1_26);

#line 972 "recursion_patterns.m"
static MR_Word MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__972__1_1_f_0(
#line 972 "recursion_patterns.m"
  MR_String recursion_patterns__LambdaHeadVar__1_34);

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(
#line 756 "recursion_patterns.m"
  MR_Float recursion_patterns__Prob_1,
#line 756 "recursion_patterns.m"
  MR_Integer recursion_patterns__HeadVar__2_13,
#line 756 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_14,
#line 756 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__4_15);

#line 889 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0(
#line 889 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 889 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 889 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 889 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0(
#line 889 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 889 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 881 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0(
#line 881 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 881 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 881 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 881 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0(
#line 881 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 881 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 276 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0(
#line 276 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 276 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 276 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 276 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0(
#line 276 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 276 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 285 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0(
#line 285 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 285 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 285 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 285 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0(
#line 285 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 285 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 266 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0(
#line 266 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 266 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 266 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 266 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0(
#line 266 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 266 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 288 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0(
#line 288 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 288 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 288 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 288 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0(
#line 288 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 288 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 865 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0(
#line 865 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 865 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 865 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 865 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0(
#line 865 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 865 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 857 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0(
#line 857 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 857 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 857 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 857 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0(
#line 857 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 857 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 1003 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_proc_rec_type_5_p_0(
#line 1003 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 1003 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 1003 "recursion_patterns.m"
  MR_Word recursion_patterns___PSPtr_8,
#line 1003 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 1003 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5);

#line 983 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_rec_type_5_p_0(
#line 983 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 983 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 983 "recursion_patterns.m"
  MR_Word recursion_patterns___RecursionType_8,
#line 983 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 983 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5);

#line 980 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_4_p_0_1(
#line 980 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 980 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 980 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 980 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 975 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_4_p_0(
#line 975 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_5,
#line 975 "recursion_patterns.m"
  MR_Integer recursion_patterns__NumCliques_6,
#line 975 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_8,
#line 975 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_9);

#line 969 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_2(
#line 969 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 969 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1);

#line 972 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_1(
#line 972 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 972 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1);

#line 958 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0(
#line 958 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 958 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__2_2);

#line 938 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__update_procs_map_3_p_0(
#line 938 "recursion_patterns.m"
  MR_Word recursion_patterns__FirstProcInfo_4,
#line 938 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Map_0_16,
#line 938 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Map_17);

#line 896 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__update_histogram_4_p_0(
#line 896 "recursion_patterns.m"
  MR_Word recursion_patterns__MaybeFirstProcInfo_5,
#line 896 "recursion_patterns.m"
  MR_Word recursion_patterns__SimpleType_6,
#line 896 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_19,
#line 896 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_20);

#line 820 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__rec_types_freq_build_histogram_5_p_0(
#line 820 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 820 "recursion_patterns.m"
  MR_Integer recursion_patterns__HeadVar__2_7,
#line 820 "recursion_patterns.m"
  MR_Word recursion_patterns__CliquePtr_8,
#line 820 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_27,
#line 820 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_28);

#line 791 "recursion_patterns.m"
static MR_String MR_CALL 
recursion_patterns__error_to_string_1_f_0(
#line 791 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1);

#line 736 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursions_cross_product_2_4_p_0(
#line 736 "recursion_patterns.m"
  MR_Integer recursion_patterns__HeadVar__1_1,
#line 736 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 736 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3,
#line 736 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__4_4);

#line 726 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursions_cross_product_3_p_0(
#line 726 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 726 "recursion_patterns.m"
  MR_Word recursion_patterns__PairsB_2,
#line 726 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__3_3);

#line 698 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__condense_recursions_2_3_p_0(
#line 698 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 698 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 698 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__3_3);

#line 666 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__merge_recursion_data_sequence_3_p_0(
#line 666 "recursion_patterns.m"
  MR_Word recursion_patterns__A_4,
#line 666 "recursion_patterns.m"
  MR_Word recursion_patterns__B_5,
#line 666 "recursion_patterns.m"
  MR_Word * recursion_patterns__Result_6);

#line 604 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__merge_recursion_data_after_branch_3_p_0(
#line 604 "recursion_patterns.m"
  MR_Word recursion_patterns__A_4,
#line 604 "recursion_patterns.m"
  MR_Word recursion_patterns__B_5,
#line 604 "recursion_patterns.m"
  MR_Word * recursion_patterns__Result_6);

#line 541 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__atomic_goal_recursion_data_4_p_0(
#line 541 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_5,
#line 541 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_6,
#line 541 "recursion_patterns.m"
  MR_Word recursion_patterns__AtomicGoal_7,
#line 541 "recursion_patterns.m"
  MR_Word * recursion_patterns__RecursionData_8);

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_2(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_1(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 510 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0(
#line 510 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_1,
#line 510 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_2,
#line 510 "recursion_patterns.m"
  MR_Integer recursion_patterns__CaseNum_3,
#line 510 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 510 "recursion_patterns.m"
  MR_Float recursion_patterns__TotalCalls_5,
#line 510 "recursion_patterns.m"
  MR_Integer recursion_patterns__CallsRemaining_6,
#line 510 "recursion_patterns.m"
  MR_Word * recursion_patterns__RecursionData_7);

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0_2(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0_1(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 472 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0(
#line 472 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_8,
#line 472 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_9,
#line 472 "recursion_patterns.m"
  MR_Word recursion_patterns__Cond_10,
#line 472 "recursion_patterns.m"
  MR_Word recursion_patterns__Then_11,
#line 472 "recursion_patterns.m"
  MR_Word recursion_patterns__Else_12,
#line 472 "recursion_patterns.m"
  MR_Integer recursion_patterns__Calls_13,
#line 472 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_RecursionData_28);

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_2(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_1(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 414 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0(
#line 414 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_1,
#line 414 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_2,
#line 414 "recursion_patterns.m"
  MR_Integer recursion_patterns__DisjNum_3,
#line 414 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 414 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5);

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_2(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_1(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 365 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0(
#line 365 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_1,
#line 365 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_2,
#line 365 "recursion_patterns.m"
  MR_Integer recursion_patterns__ConjNum_3,
#line 365 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 365 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5);

#line 302 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__goal_recursion_data_4_p_0(
#line 302 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_5,
#line 302 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_6,
#line 302 "recursion_patterns.m"
  MR_Word recursion_patterns__GoalRep_7,
#line 302 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_RecursionData_30);

#line 258 "recursion_patterns.m"
static MR_Float MR_CALL 
recursion_patterns__single_rec_average_recursion_cost_3_f_0(
#line 258 "recursion_patterns.m"
  MR_Float recursion_patterns__BaseCost_5,
#line 258 "recursion_patterns.m"
  MR_Float recursion_patterns__RecCost_6,
#line 258 "recursion_patterns.m"
  MR_Float recursion_patterns__AvgMaxDepth_7);

#line 232 "recursion_patterns.m"
static MR_Float MR_CALL 
recursion_patterns__single_rec_recursion_cost_3_f_0(
#line 232 "recursion_patterns.m"
  MR_Float recursion_patterns__BaseCost_5,
#line 232 "recursion_patterns.m"
  MR_Float recursion_patterns__RecCost_6,
#line 232 "recursion_patterns.m"
  MR_Integer recursion_patterns__LevelI_7);

#line 209 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_level_report_3_p_0(
#line 209 "recursion_patterns.m"
  MR_Float recursion_patterns__TotalCalls_4,
#line 209 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 209 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__3_3);

#line 204 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_3(
#line 204 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 204 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1);

#line 199 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_2(
#line 199 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 199 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 199 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_2);

#line 180 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_1(
#line 180 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 180 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1);

#line 137 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0(
#line 137 "recursion_patterns.m"
  MR_Integer recursion_patterns__ParentCallsI_5,
#line 137 "recursion_patterns.m"
  MR_Integer recursion_patterns__TotalCallsI_6,
#line 137 "recursion_patterns.m"
  MR_Word recursion_patterns__RecursionData_7,
#line 137 "recursion_patterns.m"
  MR_Word * recursion_patterns__Type_8);

#line 814 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__create_recursion_types_frequency_report_2_p_0_1(
#line 814 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 814 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 814 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 814 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_3,
#line 814 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_4);

#line 124 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__create_clique_recursion_costs_report_3_p_0_1(
#line 124 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 124 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 124 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 124 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);


static /* final */ const MR_Box recursion_patterns_scalar_common_1[8][3];

static /* final */ const MR_Box recursion_patterns_scalar_common_2[9][2];

static /* final */ const MR_Box recursion_patterns_scalar_common_3[3][1];

static /* final */ const MR_Box recursion_patterns_scalar_common_4[4][7];

static /* final */ const MR_Box recursion_patterns_scalar_common_5[3][8];

static /* final */ const MR_Box recursion_patterns_scalar_common_6[1][6];

static /* final */ const MR_Box recursion_patterns_scalar_common_7[3][5];




static /* final */ const MR_Box recursion_patterns_scalar_common_1[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_simple_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&recursion_patterns_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&recursion_patterns_scalar_common_7[0])),
    ((MR_Box) (recursion_patterns__recursion_data_to_recursion_type_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&recursion_patterns_scalar_common_7[1])),
    ((MR_Box) (recursion_patterns__recursion_type_to_simple_type_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&recursion_patterns_scalar_common_7[2])),
    ((MR_Box) (recursion_patterns__recursion_type_to_simple_type_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_2[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&recursion_patterns_scalar_common_1[3]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "This clique doesn\'t appear to have an entry procedure"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "There is no readable procedure representation information file."))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_4[4][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&recursion_patterns__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&recursion_patterns__maybe__pti_maybe_1__plain_recursion_patterns__type_ctor_info_first_proc_info_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_simple_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_5[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0)),
    ((MR_Box) (&recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_simple_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_freq_data_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_proc_freq_data_0))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&recursion_patterns__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_recursion_patterns__type_ctor_info_recursion_level_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_level_report_0))
  },
};

static /* final */ const MR_Box recursion_patterns_scalar_common_7[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_simple_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_level_report_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 1382 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 1391 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_TypeInfo) &analysis_utils__analysis_utils__type_ctor_info_callee_0
  }
};

#line 1399 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
  }
};

#line 1408 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_type_simple_0,
    (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0
  }
};

#line 1417 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_recursion_patterns__type_ctor_info_recursion_level_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0
  }
};

#line 1426 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct1 recursion_patterns__maybe__pti_maybe_1__plain_recursion_patterns__type_ctor_info_first_proc_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_first_proc_info_0
  }
};

#line 1434 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_first_proc_info_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0
};

#line 1440 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_first_proc_info_0_0[2] = {
  (MR_String) "fpi_pdesc",
  (MR_String) "fpi_prof_info"
};

#line 1446 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_first_proc_info_0_0 = {
  (MR_String) "first_proc_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recursion_patterns__recursion_patterns__field_types_first_proc_info_0_0,
  recursion_patterns__recursion_patterns__field_names_first_proc_info_0_0,
  NULL,
  NULL
};

#line 1461 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_first_proc_info_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_first_proc_info_0_0
};

#line 1466 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_first_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_first_proc_info_0_0
  }
};

#line 1475 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_first_proc_info_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_first_proc_info_0_0
};

#line 1480 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_first_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 1485 "recursion_patterns.c"
const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_first_proc_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____first_proc_info_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____first_proc_info_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "first_proc_info",
  {     recursion_patterns__recursion_patterns__du_name_ordered_first_proc_info_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_first_proc_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_first_proc_info_0
};

#line 1502 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_own_and_inherit_prof_info_0_0[2] = {
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
};

#line 1508 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_own_and_inherit_prof_info_0_0[2] = {
  (MR_String) "oai_own",
  (MR_String) "oai_inherit"
};

#line 1514 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_own_and_inherit_prof_info_0_0 = {
  (MR_String) "own_and_inherit_prof_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recursion_patterns__recursion_patterns__field_types_own_and_inherit_prof_info_0_0,
  recursion_patterns__recursion_patterns__field_names_own_and_inherit_prof_info_0_0,
  NULL,
  NULL
};

#line 1529 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_own_and_inherit_prof_info_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_own_and_inherit_prof_info_0_0
};

#line 1534 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_own_and_inherit_prof_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_own_and_inherit_prof_info_0_0
  }
};

#line 1543 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_own_and_inherit_prof_info_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_own_and_inherit_prof_info_0_0
};

#line 1548 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_own_and_inherit_prof_info_0[1] = {
  (MR_Integer) 0
};

#line 1553 "recursion_patterns.c"
const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____own_and_inherit_prof_info_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____own_and_inherit_prof_info_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "own_and_inherit_prof_info",
  {     recursion_patterns__recursion_patterns__du_name_ordered_own_and_inherit_prof_info_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_own_and_inherit_prof_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_own_and_inherit_prof_info_0
};

#line 1570 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct2 recursion_patterns__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_TypeInfo) &recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
  }
};

#line 1579 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_info_0
  }
};

#line 1587 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_analysis_info_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &recursion_patterns__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0,
  (MR_PseudoTypeInfo) &recursion_patterns__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0
};

#line 1594 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_analysis_info_0_0[3] = {
  (MR_String) "rai_this_clique",
  (MR_String) "rai_call_sites",
  (MR_String) "rai_coverage_info"
};

#line 1601 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_analysis_info_0_0 = {
  (MR_String) "recursion_analysis_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recursion_patterns__recursion_patterns__field_types_recursion_analysis_info_0_0,
  recursion_patterns__recursion_patterns__field_names_recursion_analysis_info_0_0,
  NULL,
  NULL
};

#line 1616 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_analysis_info_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_analysis_info_0_0
};

#line 1621 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_analysis_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_analysis_info_0_0
  }
};

#line 1630 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_analysis_info_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_analysis_info_0_0
};

#line 1635 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_analysis_info_0[1] = {
  (MR_Integer) 0
};

#line 1640 "recursion_patterns.c"
const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_analysis_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_analysis_info_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_analysis_info_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_analysis_info",
  {     recursion_patterns__recursion_patterns__du_name_ordered_recursion_analysis_info_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_analysis_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_recursion_analysis_info_0
};

#line 1657 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_0 = {
  (MR_String) "no_recursion_data_dead_proc",
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

#line 1672 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct2 recursion_patterns__pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0
  }
};

#line 1681 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &recursion_patterns__pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0
  }
};

#line 1689 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__set_ordlist__ti_set_ordlist_1recursion_patterns__type_ctor_info_recursion_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0
  }
};

#line 1697 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_data_0_1[3] = {
  (MR_PseudoTypeInfo) &recursion_patterns__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &recursion_patterns__set_ordlist__ti_set_ordlist_1recursion_patterns__type_ctor_info_recursion_error_0
};

#line 1704 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_data_0_1[3] = {
  (MR_String) "rd_recursions",
  (MR_String) "rd_maximum",
  (MR_String) "rd_errors"
};

#line 1711 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_1 = {
  (MR_String) "recursion_data",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  recursion_patterns__recursion_patterns__field_types_recursion_data_0_1,
  recursion_patterns__recursion_patterns__field_names_recursion_data_0_1,
  NULL,
  NULL
};

#line 1726 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_0
};

#line 1731 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_1[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_1
};

#line 1736 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_data_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_1
  }
};

#line 1750 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_data_0[2] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_0,
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_1
};

#line 1756 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_data_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1762 "recursion_patterns.c"
const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_data_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_data_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_data",
  {     recursion_patterns__recursion_patterns__du_name_ordered_recursion_data_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_data_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_recursion_data_0
};

#line 1779 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_error_0[1] = {
  (MR_Integer) 0
};

#line 1784 "recursion_patterns.c"
static const MR_NotagFunctorDesc recursion_patterns__recursion_patterns__notag_functor_desc_recursion_error_0 = {
  (MR_String) "re_unhandled_determinism",
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0,
  NULL
};

#line 1791 "recursion_patterns.c"
const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (recursion_patterns____Unify____recursion_error_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_error_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_error",
  {     &recursion_patterns__recursion_patterns__notag_functor_desc_recursion_error_0 },
  {     &recursion_patterns__recursion_patterns__notag_functor_desc_recursion_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_recursion_error_0
};

#line 1808 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_level_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1814 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_level_0_0[2] = {
  (MR_String) "rl_cost",
  (MR_String) "rl_probability"
};

#line 1820 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_level_0_0 = {
  (MR_String) "recursion_level",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recursion_patterns__recursion_patterns__field_types_recursion_level_0_0,
  recursion_patterns__recursion_patterns__field_names_recursion_level_0_0,
  NULL,
  NULL
};

#line 1835 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_level_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_level_0_0
};

#line 1840 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_level_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_level_0_0
  }
};

#line 1849 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_level_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_level_0_0
};

#line 1854 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_level_0[1] = {
  (MR_Integer) 0
};

#line 1859 "recursion_patterns.c"
const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_level_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_level_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_level",
  {     recursion_patterns__recursion_patterns__du_name_ordered_recursion_level_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_level_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_recursion_level_0
};

#line 1876 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__maybe__ti_maybe_1recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0
  }
};

#line 1884 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct2 recursion_patterns__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0
  }
};

#line 1893 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_type_raw_freq_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &recursion_patterns__maybe__ti_maybe_1recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &recursion_patterns__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0
};

#line 1900 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_type_raw_freq_data_0_0[3] = {
  (MR_String) "rtrfd_freq",
  (MR_String) "rtrfd_maybe_prof_info",
  (MR_String) "rtrfd_entry_procs"
};

#line 1907 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_freq_data_0_0 = {
  (MR_String) "recursion_type_raw_freq_data",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recursion_patterns__recursion_patterns__field_types_recursion_type_raw_freq_data_0_0,
  recursion_patterns__recursion_patterns__field_names_recursion_type_raw_freq_data_0_0,
  NULL,
  NULL
};

#line 1922 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_freq_data_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_freq_data_0_0
};

#line 1927 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_freq_data_0_0
  }
};

#line 1936 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_freq_data_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_freq_data_0_0
};

#line 1941 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_freq_data_0[1] = {
  (MR_Integer) 0
};

#line 1946 "recursion_patterns.c"
const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_type_raw_freq_data_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_type_raw_freq_data_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_type_raw_freq_data",
  {     recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_freq_data_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_freq_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_freq_data_0
};

#line 1963 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_type_raw_proc_freq_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0
};

#line 1970 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_type_raw_proc_freq_data_0_0[3] = {
  (MR_String) "rtrpfd_freq",
  (MR_String) "rtrpfd_prof_info",
  (MR_String) "rtrpfd_proc_desc"
};

#line 1977 "recursion_patterns.c"
static const MR_DuFunctorDesc recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_proc_freq_data_0_0 = {
  (MR_String) "recursion_type_raw_proc_freq_data",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  recursion_patterns__recursion_patterns__field_types_recursion_type_raw_proc_freq_data_0_0,
  recursion_patterns__recursion_patterns__field_names_recursion_type_raw_proc_freq_data_0_0,
  NULL,
  NULL
};

#line 1992 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_proc_freq_data_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_proc_freq_data_0_0
};

#line 1997 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_proc_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_proc_freq_data_0_0
  }
};

#line 2006 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_proc_freq_data_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_proc_freq_data_0_0
};

#line 2011 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_proc_freq_data_0[1] = {
  (MR_Integer) 0
};

#line 2016 "recursion_patterns.c"
const MR_TypeCtorInfo_Struct recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0_10001)),
  ((MR_Box) (recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0_10001)),
  (MR_String) "recursion_patterns",
  (MR_String) "recursion_type_raw_proc_freq_data",
  {     recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_proc_freq_data_0 },
  {     recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_proc_freq_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_proc_freq_data_0
};

#line 2033 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0_10001(
#line 2036 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2038 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2040 "recursion_patterns.c"
{
#line 2042 "recursion_patterns.c"
  {
#line 2044 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2047 "recursion_patterns.c"
    {
#line 2049 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____first_proc_info_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2052 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2054 "recursion_patterns.c"
  }
#line 2056 "recursion_patterns.c"
}

#line 2059 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0_10001(
#line 2062 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2064 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2066 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2068 "recursion_patterns.c"
{
#line 2070 "recursion_patterns.c"
  {
#line 2072 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2075 "recursion_patterns.c"
    {
#line 2077 "recursion_patterns.c"
      recursion_patterns____Compare____first_proc_info_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2080 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2082 "recursion_patterns.c"
  }
#line 2084 "recursion_patterns.c"
}

#line 2087 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0_10001(
#line 2090 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2092 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2094 "recursion_patterns.c"
{
#line 2096 "recursion_patterns.c"
  {
#line 2098 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2101 "recursion_patterns.c"
    {
#line 2103 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____own_and_inherit_prof_info_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2106 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2108 "recursion_patterns.c"
  }
#line 2110 "recursion_patterns.c"
}

#line 2113 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0_10001(
#line 2116 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2118 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2120 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2122 "recursion_patterns.c"
{
#line 2124 "recursion_patterns.c"
  {
#line 2126 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2129 "recursion_patterns.c"
    {
#line 2131 "recursion_patterns.c"
      recursion_patterns____Compare____own_and_inherit_prof_info_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2134 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2136 "recursion_patterns.c"
  }
#line 2138 "recursion_patterns.c"
}

#line 2141 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0_10001(
#line 2144 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2146 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2148 "recursion_patterns.c"
{
#line 2150 "recursion_patterns.c"
  {
#line 2152 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2155 "recursion_patterns.c"
    {
#line 2157 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_analysis_info_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2160 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2162 "recursion_patterns.c"
  }
#line 2164 "recursion_patterns.c"
}

#line 2167 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0_10001(
#line 2170 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2172 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2174 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2176 "recursion_patterns.c"
{
#line 2178 "recursion_patterns.c"
  {
#line 2180 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2183 "recursion_patterns.c"
    {
#line 2185 "recursion_patterns.c"
      recursion_patterns____Compare____recursion_analysis_info_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2188 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2190 "recursion_patterns.c"
  }
#line 2192 "recursion_patterns.c"
}

#line 2195 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0_10001(
#line 2198 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2200 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2202 "recursion_patterns.c"
{
#line 2204 "recursion_patterns.c"
  {
#line 2206 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2209 "recursion_patterns.c"
    {
#line 2211 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_data_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2214 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2216 "recursion_patterns.c"
  }
#line 2218 "recursion_patterns.c"
}

#line 2221 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0_10001(
#line 2224 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2226 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2228 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2230 "recursion_patterns.c"
{
#line 2232 "recursion_patterns.c"
  {
#line 2234 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2237 "recursion_patterns.c"
    {
#line 2239 "recursion_patterns.c"
      recursion_patterns____Compare____recursion_data_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2242 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2244 "recursion_patterns.c"
  }
#line 2246 "recursion_patterns.c"
}

#line 2249 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0_10001(
#line 2252 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2254 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2256 "recursion_patterns.c"
{
#line 2258 "recursion_patterns.c"
  {
#line 2260 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2263 "recursion_patterns.c"
    {
#line 2265 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_error_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2268 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2270 "recursion_patterns.c"
  }
#line 2272 "recursion_patterns.c"
}

#line 2275 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0_10001(
#line 2278 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2280 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2282 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2284 "recursion_patterns.c"
{
#line 2286 "recursion_patterns.c"
  {
#line 2288 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2291 "recursion_patterns.c"
    {
#line 2293 "recursion_patterns.c"
      recursion_patterns____Compare____recursion_error_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2296 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2298 "recursion_patterns.c"
  }
#line 2300 "recursion_patterns.c"
}

#line 2303 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0_10001(
#line 2306 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2308 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2310 "recursion_patterns.c"
{
#line 2312 "recursion_patterns.c"
  {
#line 2314 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2317 "recursion_patterns.c"
    {
#line 2319 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_level_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2322 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2324 "recursion_patterns.c"
  }
#line 2326 "recursion_patterns.c"
}

#line 2329 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0_10001(
#line 2332 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2334 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2336 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2338 "recursion_patterns.c"
{
#line 2340 "recursion_patterns.c"
  {
#line 2342 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2345 "recursion_patterns.c"
    {
#line 2347 "recursion_patterns.c"
      recursion_patterns____Compare____recursion_level_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2350 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2352 "recursion_patterns.c"
  }
#line 2354 "recursion_patterns.c"
}

#line 2357 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0_10001(
#line 2360 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2362 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2364 "recursion_patterns.c"
{
#line 2366 "recursion_patterns.c"
  {
#line 2368 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2371 "recursion_patterns.c"
    {
#line 2373 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_type_raw_freq_data_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2376 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2378 "recursion_patterns.c"
  }
#line 2380 "recursion_patterns.c"
}

#line 2383 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0_10001(
#line 2386 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2388 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2390 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2392 "recursion_patterns.c"
{
#line 2394 "recursion_patterns.c"
  {
#line 2396 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2399 "recursion_patterns.c"
    {
#line 2401 "recursion_patterns.c"
      recursion_patterns____Compare____recursion_type_raw_freq_data_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2404 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2406 "recursion_patterns.c"
  }
#line 2408 "recursion_patterns.c"
}

#line 2411 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0_10001(
#line 2414 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2416 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2418 "recursion_patterns.c"
{
#line 2420 "recursion_patterns.c"
  {
#line 2422 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2425 "recursion_patterns.c"
    {
#line 2427 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2430 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2432 "recursion_patterns.c"
  }
#line 2434 "recursion_patterns.c"
}

#line 2437 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0_10001(
#line 2440 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2442 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2444 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2446 "recursion_patterns.c"
{
#line 2448 "recursion_patterns.c"
  {
#line 2450 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2453 "recursion_patterns.c"
    {
#line 2455 "recursion_patterns.c"
      recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2458 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2460 "recursion_patterns.c"
  }
#line 2462 "recursion_patterns.c"
}

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_99_117_114_115_105_111_110_95_100_97_116_97_95_97_110_100_95_112_114_111_98_97_98_105_108_105_116_121_95_95_55_53_54_95_95_49_95_95_91_50_93_95_48_4_p_0(
#line 756 "recursion_patterns.m"
  MR_Float recursion_patterns__Prob_1,
#line 756 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_14,
#line 756 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__4_15)
#line 756 "recursion_patterns.m"
{
#line 756 "recursion_patterns.m"
  {
#line 756 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 756 "recursion_patterns.m"
    MR_Float recursion_patterns__Cost_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_14, (MR_Integer) 0)));
#line 756 "recursion_patterns.m"
    MR_Float recursion_patterns__Prob0_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_14, (MR_Integer) 1)));
#line 756 "recursion_patterns.m"
    MR_Float recursion_patterns__Prob_23;

#line 766 "recursion_patterns.m"
    {
#line 766 "recursion_patterns.m"
      recursion_patterns__Prob_23 = measurement_units__and_2_f_0(recursion_patterns__Prob0_22, recursion_patterns__Prob_1);
    }
#line 765 "recursion_patterns.m"
    {
#line 765 "recursion_patterns.m"
      MR_Word base;
#line 765 "recursion_patterns.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 765 "recursion_patterns.m"
      *recursion_patterns__HeadVar__4_15 = base;
#line 765 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(recursion_patterns__Cost_21);
#line 765 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(recursion_patterns__Prob_23);
#line 765 "recursion_patterns.m"
    }
#line 756 "recursion_patterns.m"
  }
#line 756 "recursion_patterns.m"
}

#line 1003 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_112_114_111_99_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
#line 1003 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 1003 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 1003 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 1003 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5)
#line 1003 "recursion_patterns.m"
{
#line 1010 "recursion_patterns.m"
  {
#line 1010 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 1010 "recursion_patterns.m"
    MR_Integer recursion_patterns__Freq_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
#line 1010 "recursion_patterns.m"
    MR_Word recursion_patterns__ProfInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
#line 1010 "recursion_patterns.m"
    MR_Word recursion_patterns__ProcDesc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 2)));
#line 1010 "recursion_patterns.m"
    MR_Word recursion_patterns__Percent_12;
#line 1010 "recursion_patterns.m"
    MR_Word recursion_patterns__Summary_13;
#line 1010 "recursion_patterns.m"
    MR_Word recursion_patterns__Own_14;
#line 1010 "recursion_patterns.m"
    MR_Word recursion_patterns__Inherit_15;
#line 1010 "recursion_patterns.m"
    MR_Float recursion_patterns__V_16_16;
#line 1010 "recursion_patterns.m"
    MR_Float recursion_patterns__V_17_17;

#line 1011 "recursion_patterns.m"
    {
#line 1011 "recursion_patterns.m"
      recursion_patterns__V_17_17 = mercury__float__float_1_f_0(recursion_patterns__Freq_9);
    }
#line 1011 "recursion_patterns.m"
    {
#line 1011 "recursion_patterns.m"
      recursion_patterns__V_16_16 = mercury__float__f_slash_2_f_0(recursion_patterns__V_17_17, recursion_patterns__NumCliques_7);
    }
#line 1011 "recursion_patterns.m"
    {
#line 1011 "recursion_patterns.m"
      recursion_patterns__Percent_12 = measurement_units__percent_1_f_0(recursion_patterns__V_16_16);
    }
#line 1012 "recursion_patterns.m"
    recursion_patterns__Own_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_10, (MR_Integer) 0)));
#line 1012 "recursion_patterns.m"
    recursion_patterns__Inherit_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_10, (MR_Integer) 1)));
#line 1013 "recursion_patterns.m"
    {
#line 1013 "recursion_patterns.m"
      create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_proc_desc_0, recursion_patterns__Deep_6, ((MR_Box) (recursion_patterns__ProcDesc_11)), recursion_patterns__Own_14, recursion_patterns__Inherit_15, &recursion_patterns__Summary_13);
    }
#line 1010 "recursion_patterns.m"
    {
#line 1010 "recursion_patterns.m"
      MR_Word base;
#line 1010 "recursion_patterns.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "recursion_patterns.m"
      *recursion_patterns__HeadVar__5_5 = base;
#line 1010 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__Freq_9));
#line 1010 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recursion_patterns__Percent_12));
#line 1010 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recursion_patterns__Summary_13));
#line 1010 "recursion_patterns.m"
    }
#line 1010 "recursion_patterns.m"
  }
#line 1003 "recursion_patterns.m"
}

#line 1000 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0_1(
#line 1000 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 1000 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 1000 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 1000 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 1000 "recursion_patterns.m"
{
#line 1000 "recursion_patterns.m"
  {
#line 1000 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 1000 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_HeadVar__5_5;

#line 1000 "recursion_patterns.m"
    {
#line 1000 "recursion_patterns.m"
      recursion_patterns__finalize_histogram_proc_rec_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 4))), ((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_HeadVar__5_5);
    }
#line 1000 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_HeadVar__5_5));
#line 1000 "recursion_patterns.m"
  }
#line 1000 "recursion_patterns.m"
}

#line 983 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
#line 983 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 983 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 983 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 983 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5)
#line 983 "recursion_patterns.m"
{
#line 989 "recursion_patterns.m"
  {
#line 989 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 989 "recursion_patterns.m"
    MR_Integer recursion_patterns__Freq_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
#line 989 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeProfInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
#line 989 "recursion_patterns.m"
    MR_Word recursion_patterns__Percent_12;
#line 989 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeSummary_13;
#line 989 "recursion_patterns.m"
    MR_Word recursion_patterns__STATE_VARIABLE_EntryProcs_0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 2)));
#line 989 "recursion_patterns.m"
    MR_Word recursion_patterns__STATE_VARIABLE_EntryProcs_19;
#line 989 "recursion_patterns.m"
    MR_Float recursion_patterns__V_20_20;
#line 989 "recursion_patterns.m"
    MR_Float recursion_patterns__V_21_21;
#line 989 "recursion_patterns.m"
    MR_Word recursion_patterns__V_23_23;

#line 990 "recursion_patterns.m"
    {
#line 990 "recursion_patterns.m"
      recursion_patterns__V_21_21 = mercury__float__float_1_f_0(recursion_patterns__Freq_9);
    }
#line 990 "recursion_patterns.m"
    {
#line 990 "recursion_patterns.m"
      recursion_patterns__V_20_20 = mercury__float__f_slash_2_f_0(recursion_patterns__V_21_21, recursion_patterns__NumCliques_7);
    }
#line 990 "recursion_patterns.m"
    {
#line 990 "recursion_patterns.m"
      recursion_patterns__Percent_12 = measurement_units__percent_1_f_0(recursion_patterns__V_20_20);
    }
#line 994 "recursion_patterns.m"
    if ((recursion_patterns__MaybeProfInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 993 "recursion_patterns.m"
      recursion_patterns__MaybeSummary_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 994 "recursion_patterns.m"
    else
#line 995 "recursion_patterns.m"
      {
#line 995 "recursion_patterns.m"
        MR_Word recursion_patterns__ProfInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProfInfo_10, (MR_Integer) 0)));
#line 995 "recursion_patterns.m"
        MR_Word recursion_patterns__Own_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_14, (MR_Integer) 0)));
#line 995 "recursion_patterns.m"
        MR_Word recursion_patterns__Inherit_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_14, (MR_Integer) 1)));
#line 995 "recursion_patterns.m"
        MR_Word recursion_patterns__Summary_17;

#line 997 "recursion_patterns.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 997 "recursion_patterns.m"
        {
#line 997 "recursion_patterns.m"
          create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, recursion_patterns__Deep_6, ((MR_Box) ((MR_Integer) 0)), recursion_patterns__Own_15, recursion_patterns__Inherit_16, &recursion_patterns__Summary_17);
        }
#line 998 "recursion_patterns.m"
        {
#line 998 "recursion_patterns.m"
          recursion_patterns__MaybeSummary_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 998 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__MaybeSummary_13, 0) = ((MR_Box) (recursion_patterns__Summary_17));
#line 998 "recursion_patterns.m"
        }
#line 995 "recursion_patterns.m"
      }
#line 1000 "recursion_patterns.m"
    {
#line 1000 "recursion_patterns.m"
      recursion_patterns__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 0) = ((MR_Box) (&recursion_patterns_scalar_common_5[2]));
#line 1000 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 1) = ((MR_Box) (recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0_1));
#line 1000 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1000 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 3) = ((MR_Box) (recursion_patterns__Deep_6));
#line 1000 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 4) = MR_box_float(recursion_patterns__NumCliques_7);
#line 1000 "recursion_patterns.m"
    }
#line 1000 "recursion_patterns.m"
    {
#line 1000 "recursion_patterns.m"
      mercury__map__map_values_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, (MR_Word) &report__report__type_ctor_info_recursion_type_proc_freq_data_0, recursion_patterns__V_23_23, recursion_patterns__STATE_VARIABLE_EntryProcs_0_18, &recursion_patterns__STATE_VARIABLE_EntryProcs_19);
    }
#line 989 "recursion_patterns.m"
    {
#line 989 "recursion_patterns.m"
      MR_Word base;
#line 989 "recursion_patterns.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 989 "recursion_patterns.m"
      *recursion_patterns__HeadVar__5_5 = base;
#line 989 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__Freq_9));
#line 989 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recursion_patterns__Percent_12));
#line 989 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recursion_patterns__MaybeSummary_13));
#line 989 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_EntryProcs_19));
#line 989 "recursion_patterns.m"
    }
#line 989 "recursion_patterns.m"
  }
#line 983 "recursion_patterns.m"
}

#line 855 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0_1(
#line 855 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 855 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 855 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 855 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 855 "recursion_patterns.m"
{
#line 855 "recursion_patterns.m"
  {
#line 855 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 855 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_STATE_VARIABLE_Histogram_20;

#line 855 "recursion_patterns.m"
    {
#line 855 "recursion_patterns.m"
      recursion_patterns__update_histogram_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_STATE_VARIABLE_Histogram_20);
    }
#line 855 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_STATE_VARIABLE_Histogram_20));
#line 855 "recursion_patterns.m"
  }
#line 855 "recursion_patterns.m"
}

#line 820 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0(
#line 820 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 820 "recursion_patterns.m"
  MR_Word recursion_patterns__CliquePtr_8,
#line 820 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_27,
#line 820 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_28)
#line 820 "recursion_patterns.m"
{
#line 824 "recursion_patterns.m"
  {
#line 824 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 824 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeCliqueRecursionReport_12;
#line 824 "recursion_patterns.m"
    MR_Word recursion_patterns__SimpleTypes_15;
#line 824 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeFirstPDPtr_17;
#line 824 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeFirstProcInfo_26;
#line 824 "recursion_patterns.m"
    MR_Word recursion_patterns__V_43_43;
#line 825 "recursion_patterns.m"
    MR_Integer recursion_patterns__CliqueNum_11 = (MR_Integer) recursion_patterns__CliquePtr_8;
#line 825 "recursion_patterns.m"
    MR_String recursion_patterns__V_141_141;
#line 839 "recursion_patterns.m"
    MR_Word recursion_patterns___OtherPDPtrs_18;
#line 855 "recursion_patterns.m"
    MR_Box recursion_patterns__conv1_STATE_VARIABLE_Histogram_28;

#line 827 "recursion_patterns.m"
    {
#line 827 "recursion_patterns.m"
      mercury__io__write_string_3_p_0((MR_String) "Analyzing clique: ");
    }
#line 827 "recursion_patterns.m"
    {
#line 827 "recursion_patterns.m"
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &recursion_patterns_scalar_common_3[2], recursion_patterns__CliqueNum_11, &recursion_patterns__V_141_141);
    }
#line 827 "recursion_patterns.m"
    {
#line 827 "recursion_patterns.m"
      mercury__io__write_string_3_p_0(recursion_patterns__V_141_141);
    }
#line 827 "recursion_patterns.m"
    {
#line 827 "recursion_patterns.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 829 "recursion_patterns.m"
    {
#line 829 "recursion_patterns.m"
      recursion_patterns__create_clique_recursion_costs_report_3_p_0(recursion_patterns__Deep_6, recursion_patterns__CliquePtr_8, &recursion_patterns__MaybeCliqueRecursionReport_12);
    }
#line 835 "recursion_patterns.m"
    if (((MR_tag((MR_Word) recursion_patterns__MaybeCliqueRecursionReport_12)) == (MR_mktag((MR_Integer) 1))))
#line 836 "recursion_patterns.m"
      {
#line 836 "recursion_patterns.m"
        MR_String recursion_patterns__Error_16 = ((MR_String) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeCliqueRecursionReport_12, (MR_Integer) 0)));
#line 836 "recursion_patterns.m"
        MR_Word recursion_patterns__V_35_35;

#line 837 "recursion_patterns.m"
        {
#line 837 "recursion_patterns.m"
          recursion_patterns__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 837 "recursion_patterns.m"
          MR_hl_field(MR_mktag(3), recursion_patterns__V_35_35, 0) = ((MR_Box) (recursion_patterns__Error_16));
#line 837 "recursion_patterns.m"
        }
#line 837 "recursion_patterns.m"
        {
#line 837 "recursion_patterns.m"
          recursion_patterns__SimpleTypes_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__SimpleTypes_15, 0) = ((MR_Box) (recursion_patterns__V_35_35));
#line 837 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__SimpleTypes_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[6])));
#line 837 "recursion_patterns.m"
        }
#line 836 "recursion_patterns.m"
      }
#line 835 "recursion_patterns.m"
    else
#line 832 "recursion_patterns.m"
      {
#line 832 "recursion_patterns.m"
        MR_Word recursion_patterns__CliqueRecursionReport_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__MaybeCliqueRecursionReport_12, (MR_Integer) 0)));
#line 832 "recursion_patterns.m"
        MR_Word recursion_patterns__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_13, (MR_Integer) 1)));
#line 833 "recursion_patterns.m"
        MR_Word recursion_patterns__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_13, (MR_Integer) 0)));
#line 833 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_13, (MR_Integer) 2)));

#line 834 "recursion_patterns.m"
        {
#line 834 "recursion_patterns.m"
          recursion_patterns__recursion_type_to_simple_type_2_p_0(recursion_patterns__Type_14, &recursion_patterns__SimpleTypes_15);
        }
#line 832 "recursion_patterns.m"
      }
#line 839 "recursion_patterns.m"
    {
#line 839 "recursion_patterns.m"
      analysis_utils__find_clique_first_and_other_procs_4_p_0(recursion_patterns__Deep_6, recursion_patterns__CliquePtr_8, &recursion_patterns__MaybeFirstPDPtr_17, &recursion_patterns___OtherPDPtrs_18);
    }
#line 851 "recursion_patterns.m"
    if ((recursion_patterns__MaybeFirstPDPtr_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 853 "recursion_patterns.m"
      recursion_patterns__MaybeFirstProcInfo_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 851 "recursion_patterns.m"
    else
#line 842 "recursion_patterns.m"
      {
#line 842 "recursion_patterns.m"
        MR_Word recursion_patterns__FirstPDPtr_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstPDPtr_17, (MR_Integer) 0)));
#line 842 "recursion_patterns.m"
        MR_Word recursion_patterns__FirstPD_20;
#line 842 "recursion_patterns.m"
        MR_Word recursion_patterns__FirstPSPtr_21;
#line 842 "recursion_patterns.m"
        MR_Word recursion_patterns__PDesc_22;
#line 842 "recursion_patterns.m"
        MR_Word recursion_patterns__ProcOwn_23;
#line 842 "recursion_patterns.m"
        MR_Word recursion_patterns__ProcInherit_24;
#line 842 "recursion_patterns.m"
        MR_Word recursion_patterns__FirstProcInfo_25;
#line 842 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 6)));
#line 842 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_40_40;
#line 842 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_41_41;
#line 842 "recursion_patterns.m"
        MR_Word recursion_patterns__V_42_42;
#line 843 "recursion_patterns.m"
        MR_Word recursion_patterns__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 0)));
#line 843 "recursion_patterns.m"
        MR_String recursion_patterns__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 1)));
#line 843 "recursion_patterns.m"
        MR_String recursion_patterns__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 2)));
#line 843 "recursion_patterns.m"
        MR_String recursion_patterns__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 3)));
#line 843 "recursion_patterns.m"
        MR_Word recursion_patterns__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 4)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 5)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 7)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 8)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 9)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 10)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 11)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 12)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 13)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 14)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 15)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 16)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 17)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 18)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 19)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 20)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 21)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 22)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 23)));
#line 843 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 24)));
#line 843 "recursion_patterns.m"
        MR_Word recursion_patterns__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 25)));
#line 843 "recursion_patterns.m"
        MR_Word recursion_patterns__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 26)));
#line 843 "recursion_patterns.m"
        MR_Word recursion_patterns__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 27)));
#line 843 "recursion_patterns.m"
        MR_Word recursion_patterns__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 28)));
#line 844 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_75_75;
#line 844 "recursion_patterns.m"
        MR_Word recursion_patterns__V_76_76;
#line 846 "recursion_patterns.m"
        MR_Word recursion_patterns__V_77_77;
#line 846 "recursion_patterns.m"
        MR_String recursion_patterns__V_78_78;
#line 846 "recursion_patterns.m"
        MR_String recursion_patterns__V_79_79;
#line 846 "recursion_patterns.m"
        MR_String recursion_patterns__V_80_80;
#line 846 "recursion_patterns.m"
        MR_Word recursion_patterns__V_81_81;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_82_82;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_83_83;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_84_84;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_85_85;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_86_86;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_87_87;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_88_88;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_89_89;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_90_90;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_91_91;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_92_92;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_93_93;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_94_94;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_95_95;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_96_96;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_97_97;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_98_98;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_99_99;
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_100_100;
#line 846 "recursion_patterns.m"
        MR_Word recursion_patterns__V_101_101;
#line 846 "recursion_patterns.m"
        MR_Word recursion_patterns__V_102_102;
#line 846 "recursion_patterns.m"
        MR_Word recursion_patterns__V_103_103;
#line 846 "recursion_patterns.m"
        MR_Word recursion_patterns__V_104_104;
#line 847 "recursion_patterns.m"
        MR_Word recursion_patterns__V_105_105;
#line 847 "recursion_patterns.m"
        MR_String recursion_patterns__V_106_106;
#line 847 "recursion_patterns.m"
        MR_String recursion_patterns__V_107_107;
#line 847 "recursion_patterns.m"
        MR_String recursion_patterns__V_108_108;
#line 847 "recursion_patterns.m"
        MR_Word recursion_patterns__V_109_109;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_110_110;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_111_111;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_112_112;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_113_113;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_114_114;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_115_115;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_116_116;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_117_117;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_118_118;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_119_119;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_120_120;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_121_121;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_122_122;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_123_123;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_124_124;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_125_125;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_126_126;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_127_127;
#line 847 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_128_128;
#line 847 "recursion_patterns.m"
        MR_Word recursion_patterns__V_129_129;
#line 847 "recursion_patterns.m"
        MR_Word recursion_patterns__V_130_130;
#line 847 "recursion_patterns.m"
        MR_Word recursion_patterns__V_131_131;
#line 847 "recursion_patterns.m"
        MR_Word recursion_patterns__V_132_132;

#line 843 "recursion_patterns.m"
        {
#line 843 "recursion_patterns.m"
          profile__lookup_proc_dynamics_3_p_0(recursion_patterns__V_39_39, recursion_patterns__FirstPDPtr_19, &recursion_patterns__FirstPD_20);
        }
#line 844 "recursion_patterns.m"
        recursion_patterns__FirstPSPtr_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstPD_20, (MR_Integer) 0)));
#line 844 "recursion_patterns.m"
        recursion_patterns__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstPD_20, (MR_Integer) 1)));
#line 844 "recursion_patterns.m"
        recursion_patterns__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstPD_20, (MR_Integer) 2)));
#line 845 "recursion_patterns.m"
        {
#line 845 "recursion_patterns.m"
          recursion_patterns__PDesc_22 = create_report__describe_proc_2_f_0(recursion_patterns__Deep_6, recursion_patterns__FirstPSPtr_21);
        }
#line 846 "recursion_patterns.m"
        recursion_patterns__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 0)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 1)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_79_79 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 2)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 3)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 4)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_82_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 5)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_83_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 6)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_84_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 7)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_85_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 8)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_86_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 9)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_87_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 10)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_88_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 11)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_89_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 12)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_90_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 13)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_91_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 14)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_92_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 15)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 16)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_93_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 17)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 18)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 19)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 20)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 21)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_98_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 22)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_99_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 23)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_100_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 24)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 25)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 26)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 27)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 28)));
#line 846 "recursion_patterns.m"
        {
#line 846 "recursion_patterns.m"
          profile__lookup_pd_own_3_p_0(recursion_patterns__V_40_40, recursion_patterns__FirstPDPtr_19, &recursion_patterns__ProcOwn_23);
        }
#line 847 "recursion_patterns.m"
        recursion_patterns__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 0)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 1)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_107_107 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 2)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 3)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 4)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_110_110 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 5)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_111_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 6)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_112_112 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 7)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_113_113 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 8)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_114_114 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 9)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_115_115 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 10)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_116_116 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 11)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_117_117 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 12)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_118_118 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 13)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_119_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 14)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_120_120 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 15)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_121_121 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 16)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 17)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_122_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 18)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_123_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 19)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_124_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 20)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_125_125 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 21)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_126_126 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 22)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_127_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 23)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_128_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 24)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 25)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 26)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 27)));
#line 847 "recursion_patterns.m"
        recursion_patterns__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 28)));
#line 847 "recursion_patterns.m"
        {
#line 847 "recursion_patterns.m"
          profile__lookup_pd_desc_3_p_0(recursion_patterns__V_41_41, recursion_patterns__FirstPDPtr_19, &recursion_patterns__ProcInherit_24);
        }
#line 849 "recursion_patterns.m"
        {
#line 849 "recursion_patterns.m"
          recursion_patterns__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 849 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_42_42, 0) = ((MR_Box) (recursion_patterns__ProcOwn_23));
#line 849 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_42_42, 1) = ((MR_Box) (recursion_patterns__ProcInherit_24));
#line 849 "recursion_patterns.m"
        }
#line 848 "recursion_patterns.m"
        {
#line 848 "recursion_patterns.m"
          recursion_patterns__FirstProcInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 848 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_25, 0) = ((MR_Box) (recursion_patterns__PDesc_22));
#line 848 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_25, 1) = ((MR_Box) (recursion_patterns__V_42_42));
#line 848 "recursion_patterns.m"
        }
#line 850 "recursion_patterns.m"
        {
#line 850 "recursion_patterns.m"
          recursion_patterns__MaybeFirstProcInfo_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 850 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstProcInfo_26, 0) = ((MR_Box) (recursion_patterns__FirstProcInfo_25));
#line 850 "recursion_patterns.m"
        }
#line 842 "recursion_patterns.m"
      }
#line 855 "recursion_patterns.m"
    {
#line 855 "recursion_patterns.m"
      recursion_patterns__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 855 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_43_43, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[3]));
#line 855 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_43_43, 1) = ((MR_Box) (recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0_1));
#line 855 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 855 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_43_43, 3) = ((MR_Box) (recursion_patterns__MaybeFirstProcInfo_26));
#line 855 "recursion_patterns.m"
    }
#line 855 "recursion_patterns.m"
    {
#line 855 "recursion_patterns.m"
      mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns_scalar_common_1[0], recursion_patterns__V_43_43, recursion_patterns__SimpleTypes_15, ((MR_Box) (recursion_patterns__STATE_VARIABLE_Histogram_0_27)), &recursion_patterns__conv1_STATE_VARIABLE_Histogram_28);
    }
#line 855 "recursion_patterns.m"
    *recursion_patterns__STATE_VARIABLE_Histogram_28 = ((MR_Word) recursion_patterns__conv1_STATE_VARIABLE_Histogram_28);
#line 824 "recursion_patterns.m"
  }
#line 820 "recursion_patterns.m"
}

#line 969 "recursion_patterns.m"
static MR_Integer MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__969__1_1_f_0(
#line 969 "recursion_patterns.m"
  MR_Word recursion_patterns__LambdaHeadVar__1_26)
#line 969 "recursion_patterns.m"
{
#line 969 "recursion_patterns.m"
  {
#line 969 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 969 "recursion_patterns.m"
    MR_Integer recursion_patterns__LambdaHeadVar__2_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__LambdaHeadVar__1_26, (MR_Integer) 0)));
#line 969 "recursion_patterns.m"
    MR_Integer recursion_patterns__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__LambdaHeadVar__1_26, (MR_Integer) 1)));
#line 969 "recursion_patterns.m"
    MR_Float recursion_patterns__V_41_41 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__LambdaHeadVar__1_26, (MR_Integer) 2)));
#line 969 "recursion_patterns.m"
    MR_Float recursion_patterns__V_42_42 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__LambdaHeadVar__1_26, (MR_Integer) 3)));
#line 969 "recursion_patterns.m"
    MR_Float recursion_patterns__V_43_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__LambdaHeadVar__1_26, (MR_Integer) 4)));

#line 969 "recursion_patterns.m"
    return recursion_patterns__LambdaHeadVar__2_27;
#line 969 "recursion_patterns.m"
  }
#line 969 "recursion_patterns.m"
}

#line 972 "recursion_patterns.m"
static MR_Word MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__972__1_1_f_0(
#line 972 "recursion_patterns.m"
  MR_String recursion_patterns__LambdaHeadVar__1_34)
#line 972 "recursion_patterns.m"
{
#line 972 "recursion_patterns.m"
  {
#line 972 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 972 "recursion_patterns.m"
    MR_Word recursion_patterns__LambdaHeadVar__2_35;

#line 972 "recursion_patterns.m"
    {
#line 972 "recursion_patterns.m"
      recursion_patterns__LambdaHeadVar__2_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 972 "recursion_patterns.m"
      MR_hl_field(MR_mktag(3), recursion_patterns__LambdaHeadVar__2_35, 0) = ((MR_Box) (recursion_patterns__LambdaHeadVar__1_34));
#line 972 "recursion_patterns.m"
    }
#line 972 "recursion_patterns.m"
    return recursion_patterns__LambdaHeadVar__2_35;
#line 972 "recursion_patterns.m"
  }
#line 972 "recursion_patterns.m"
}

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(
#line 756 "recursion_patterns.m"
  MR_Float recursion_patterns__Prob_1,
#line 756 "recursion_patterns.m"
  MR_Integer recursion_patterns__HeadVar__2_13,
#line 756 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_14,
#line 756 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__4_15)
#line 756 "recursion_patterns.m"
{
#line 756 "recursion_patterns.m"
  {
#line 756 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 756 "recursion_patterns.m"
    {
#line 756 "recursion_patterns.m"
      recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_99_117_114_115_105_111_110_95_100_97_116_97_95_97_110_100_95_112_114_111_98_97_98_105_108_105_116_121_95_95_55_53_54_95_95_49_95_95_91_50_93_95_48_4_p_0(recursion_patterns__Prob_1, recursion_patterns__HeadVar__3_14, recursion_patterns__HeadVar__4_15);
    }
#line 756 "recursion_patterns.m"
  }
#line 756 "recursion_patterns.m"
}

#line 889 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0(
#line 889 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 889 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 889 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 889 "recursion_patterns.m"
{
#line 889 "recursion_patterns.m"
  {
#line 889 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 889 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_12 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 889 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_13 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 889 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_12 == recursion_patterns__CastY_13);
#line 889 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 3411 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 889 "recursion_patterns.m"
    else
#line 889 "recursion_patterns.m"
      {
#line 889 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 889 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 889 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
#line 889 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 889 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 889 "recursion_patterns.m"
        MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 2)));
#line 889 "recursion_patterns.m"
        MR_Word recursion_patterns__V_10_10;

#line 889 "recursion_patterns.m"
        {
#line 889 "recursion_patterns.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&recursion_patterns__V_10_10, recursion_patterns__V_4_4, recursion_patterns__V_7_7);
        }
#line 3437 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_10_10 == (MR_Integer) 0);
#line 889 "recursion_patterns.m"
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 889 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 889 "recursion_patterns.m"
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_10_10;
#line 889 "recursion_patterns.m"
        else
#line 889 "recursion_patterns.m"
          {
#line 889 "recursion_patterns.m"
            MR_Word recursion_patterns__V_11_11;

#line 889 "recursion_patterns.m"
            {
#line 889 "recursion_patterns.m"
              recursion_patterns____Compare____own_and_inherit_prof_info_0_0(&recursion_patterns__V_11_11, recursion_patterns__V_5_5, recursion_patterns__V_8_8);
            }
#line 3457 "recursion_patterns.c"
            recursion_patterns__succeeded = (recursion_patterns__V_11_11 == (MR_Integer) 0);
#line 889 "recursion_patterns.m"
            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 889 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 889 "recursion_patterns.m"
              *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_11_11;
#line 889 "recursion_patterns.m"
            else
#line 889 "recursion_patterns.m"
              {
#line 889 "recursion_patterns.m"
                report____Compare____proc_desc_0_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_6_6, recursion_patterns__V_9_9);
              }
#line 889 "recursion_patterns.m"
          }
#line 889 "recursion_patterns.m"
      }
#line 889 "recursion_patterns.m"
  }
#line 889 "recursion_patterns.m"
}

#line 889 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0(
#line 889 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 889 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 889 "recursion_patterns.m"
{
#line 889 "recursion_patterns.m"
  {
#line 889 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 889 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 889 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 889 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
#line 889 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 889 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 889 "recursion_patterns.m"
    else
#line 889 "recursion_patterns.m"
      {
#line 889 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 889 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 889 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
#line 889 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 889 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 889 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));

#line 3522 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_3_3 == recursion_patterns__V_6_6);
#line 889 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 889 "recursion_patterns.m"
          {
#line 3528 "recursion_patterns.c"
            {
#line 3530 "recursion_patterns.c"
              recursion_patterns__succeeded = recursion_patterns____Unify____own_and_inherit_prof_info_0_0(recursion_patterns__V_4_4, recursion_patterns__V_7_7);
            }
#line 889 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 3535 "recursion_patterns.c"
              {
#line 3537 "recursion_patterns.c"
                recursion_patterns__succeeded = report____Unify____proc_desc_0_0(recursion_patterns__V_5_5, recursion_patterns__V_8_8);
              }
#line 889 "recursion_patterns.m"
          }
#line 889 "recursion_patterns.m"
      }
#line 889 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 889 "recursion_patterns.m"
  }
#line 889 "recursion_patterns.m"
}

#line 881 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0(
#line 881 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 881 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 881 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 881 "recursion_patterns.m"
{
#line 881 "recursion_patterns.m"
  {
#line 881 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 881 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_12 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 881 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_13 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 881 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_12 == recursion_patterns__CastY_13);
#line 881 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 3575 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 881 "recursion_patterns.m"
    else
#line 881 "recursion_patterns.m"
      {
#line 881 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 881 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 881 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
#line 881 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 881 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 881 "recursion_patterns.m"
        MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 2)));
#line 881 "recursion_patterns.m"
        MR_Word recursion_patterns__V_10_10;

#line 881 "recursion_patterns.m"
        {
#line 881 "recursion_patterns.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&recursion_patterns__V_10_10, recursion_patterns__V_4_4, recursion_patterns__V_7_7);
        }
#line 3601 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_10_10 == (MR_Integer) 0);
#line 881 "recursion_patterns.m"
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 881 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 881 "recursion_patterns.m"
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_10_10;
#line 881 "recursion_patterns.m"
        else
#line 881 "recursion_patterns.m"
          {
#line 881 "recursion_patterns.m"
            MR_Word recursion_patterns__V_11_11;

#line 881 "recursion_patterns.m"
            {
#line 881 "recursion_patterns.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_2[4], &recursion_patterns__V_11_11, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
            }
#line 3621 "recursion_patterns.c"
            recursion_patterns__succeeded = (recursion_patterns__V_11_11 == (MR_Integer) 0);
#line 881 "recursion_patterns.m"
            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 881 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 881 "recursion_patterns.m"
              *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_11_11;
#line 881 "recursion_patterns.m"
            else
#line 881 "recursion_patterns.m"
              {
#line 881 "recursion_patterns.m"
                {
#line 881 "recursion_patterns.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_1[4], recursion_patterns__HeadVar__1_1, ((MR_Box) (recursion_patterns__V_6_6)), ((MR_Box) (recursion_patterns__V_9_9)));
                }
#line 881 "recursion_patterns.m"
              }
#line 881 "recursion_patterns.m"
          }
#line 881 "recursion_patterns.m"
      }
#line 881 "recursion_patterns.m"
  }
#line 881 "recursion_patterns.m"
}

#line 881 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0(
#line 881 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 881 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 881 "recursion_patterns.m"
{
#line 881 "recursion_patterns.m"
  {
#line 881 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 881 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 881 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 881 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
#line 881 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 881 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 881 "recursion_patterns.m"
    else
#line 881 "recursion_patterns.m"
      {
#line 881 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeInfo_11_11;
#line 881 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeInfo_12_12;
#line 881 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 881 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 881 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
#line 881 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 881 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 881 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));

#line 3694 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_3_3 == recursion_patterns__V_6_6);
#line 881 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 881 "recursion_patterns.m"
          {
#line 3700 "recursion_patterns.c"
            recursion_patterns__TypeInfo_11_11 = (MR_Word) &recursion_patterns_scalar_common_2[4];
#line 3702 "recursion_patterns.c"
            {
#line 3704 "recursion_patterns.c"
              recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_11_11, ((MR_Box) (recursion_patterns__V_4_4)), ((MR_Box) (recursion_patterns__V_7_7)));
            }
#line 881 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 881 "recursion_patterns.m"
              {
#line 3711 "recursion_patterns.c"
                recursion_patterns__TypeInfo_12_12 = (MR_Word) &recursion_patterns_scalar_common_1[4];
#line 3713 "recursion_patterns.c"
                {
#line 3715 "recursion_patterns.c"
                  recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_12_12, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
                }
#line 881 "recursion_patterns.m"
              }
#line 881 "recursion_patterns.m"
          }
#line 881 "recursion_patterns.m"
      }
#line 881 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 881 "recursion_patterns.m"
  }
#line 881 "recursion_patterns.m"
}

#line 276 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0(
#line 276 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 276 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 276 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 276 "recursion_patterns.m"
{
#line 276 "recursion_patterns.m"
  {
#line 276 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 276 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 276 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 276 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
#line 276 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 3755 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 276 "recursion_patterns.m"
    else
#line 276 "recursion_patterns.m"
      {
#line 276 "recursion_patterns.m"
        MR_Float recursion_patterns__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "recursion_patterns.m"
        MR_Float recursion_patterns__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "recursion_patterns.m"
        MR_Float recursion_patterns__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 276 "recursion_patterns.m"
        MR_Float recursion_patterns__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 276 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8;

#line 276 "recursion_patterns.m"
        {
#line 276 "recursion_patterns.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(&recursion_patterns__V_8_8, recursion_patterns__V_4_4, recursion_patterns__V_6_6);
        }
#line 3777 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_8_8 == (MR_Integer) 0);
#line 276 "recursion_patterns.m"
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 276 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 276 "recursion_patterns.m"
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_8_8;
#line 276 "recursion_patterns.m"
        else
#line 276 "recursion_patterns.m"
          {
#line 276 "recursion_patterns.m"
            mercury__private_builtin__builtin_compare_float_3_p_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_5_5, recursion_patterns__V_7_7);
          }
#line 276 "recursion_patterns.m"
      }
#line 276 "recursion_patterns.m"
  }
#line 276 "recursion_patterns.m"
}

#line 276 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0(
#line 276 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 276 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 276 "recursion_patterns.m"
{
#line 276 "recursion_patterns.m"
  {
#line 276 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 276 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_7 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 276 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_8 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 276 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_7 == recursion_patterns__CastY_8);
#line 276 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 276 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 276 "recursion_patterns.m"
    else
#line 276 "recursion_patterns.m"
      {
#line 276 "recursion_patterns.m"
        MR_Float recursion_patterns__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 276 "recursion_patterns.m"
        MR_Float recursion_patterns__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "recursion_patterns.m"
        MR_Float recursion_patterns__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 276 "recursion_patterns.m"
        MR_Float recursion_patterns__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));

#line 3836 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_3_3 == recursion_patterns__V_5_5);
#line 276 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 3840 "recursion_patterns.c"
          recursion_patterns__succeeded = (recursion_patterns__V_4_4 == recursion_patterns__V_6_6);
#line 276 "recursion_patterns.m"
      }
#line 276 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 276 "recursion_patterns.m"
  }
#line 276 "recursion_patterns.m"
}

#line 285 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0(
#line 285 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 285 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 285 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 285 "recursion_patterns.m"
{
#line 285 "recursion_patterns.m"
  {
#line 285 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 285 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_6 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 285 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_7 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 285 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_6 == recursion_patterns__CastY_7);
#line 285 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 3875 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 285 "recursion_patterns.m"
    else
#line 285 "recursion_patterns.m"
      {
#line 285 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = (MR_Word) recursion_patterns__HeadVar__2_2;
#line 285 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = (MR_Word) recursion_patterns__HeadVar__3_3;
#line 285 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_9_9 = (MR_Integer) recursion_patterns__V_4_4;
#line 285 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_10_10 = (MR_Integer) recursion_patterns__V_5_5;

#line 285 "recursion_patterns.m"
        {
#line 285 "recursion_patterns.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_9_9, recursion_patterns__V_10_10);
        }
#line 285 "recursion_patterns.m"
      }
#line 285 "recursion_patterns.m"
  }
#line 285 "recursion_patterns.m"
}

#line 285 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0(
#line 285 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 285 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 285 "recursion_patterns.m"
{
#line 285 "recursion_patterns.m"
  {
#line 285 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 285 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_5 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 285 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_6 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 285 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_5 == recursion_patterns__CastY_6);
#line 285 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 285 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 285 "recursion_patterns.m"
    else
#line 285 "recursion_patterns.m"
      {
#line 285 "recursion_patterns.m"
        MR_Word recursion_patterns__V_3_3 = (MR_Word) recursion_patterns__HeadVar__1_1;
#line 285 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = (MR_Word) recursion_patterns__HeadVar__2_2;

#line 3935 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_3_3 == recursion_patterns__V_4_4);
#line 285 "recursion_patterns.m"
      }
#line 285 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 285 "recursion_patterns.m"
  }
#line 285 "recursion_patterns.m"
}

#line 266 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0(
#line 266 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 266 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 266 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 266 "recursion_patterns.m"
{
#line 266 "recursion_patterns.m"
  {
#line 266 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 266 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_18 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 266 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_19 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 266 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_18 == recursion_patterns__CastY_19);
#line 266 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 3970 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 266 "recursion_patterns.m"
    else
#line 266 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "recursion_patterns.m"
      if ((recursion_patterns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "recursion_patterns.m"
        *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 266 "recursion_patterns.m"
      else
#line 3982 "recursion_patterns.c"
        *recursion_patterns__HeadVar__1_1 = (MR_Integer) 1;
#line 266 "recursion_patterns.m"
    else
#line 266 "recursion_patterns.m"
      {
#line 266 "recursion_patterns.m"
        MR_Word recursion_patterns__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
#line 266 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 266 "recursion_patterns.m"
        MR_Word recursion_patterns__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));

#line 266 "recursion_patterns.m"
        if ((recursion_patterns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3997 "recursion_patterns.c"
          *recursion_patterns__HeadVar__1_1 = (MR_Integer) 2;
#line 266 "recursion_patterns.m"
        else
#line 266 "recursion_patterns.m"
          {
#line 266 "recursion_patterns.m"
            MR_Word recursion_patterns__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 266 "recursion_patterns.m"
            MR_Integer recursion_patterns__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 266 "recursion_patterns.m"
            MR_Word recursion_patterns__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 2)));
#line 266 "recursion_patterns.m"
            MR_Word recursion_patterns__V_16_16;

#line 266 "recursion_patterns.m"
            {
#line 266 "recursion_patterns.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_2[2], &recursion_patterns__V_16_16, ((MR_Box) (recursion_patterns__V_25_25)), ((MR_Box) (recursion_patterns__V_13_13)));
            }
#line 4017 "recursion_patterns.c"
            recursion_patterns__succeeded = (recursion_patterns__V_16_16 == (MR_Integer) 0);
#line 266 "recursion_patterns.m"
            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 266 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 266 "recursion_patterns.m"
              *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_16_16;
#line 266 "recursion_patterns.m"
            else
#line 266 "recursion_patterns.m"
              {
#line 266 "recursion_patterns.m"
                MR_Word recursion_patterns__V_17_17;

#line 266 "recursion_patterns.m"
                {
#line 266 "recursion_patterns.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&recursion_patterns__V_17_17, recursion_patterns__V_24_24, recursion_patterns__V_14_14);
                }
#line 4037 "recursion_patterns.c"
                recursion_patterns__succeeded = (recursion_patterns__V_17_17 == (MR_Integer) 0);
#line 266 "recursion_patterns.m"
                recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 266 "recursion_patterns.m"
                if (recursion_patterns__succeeded)
#line 266 "recursion_patterns.m"
                  *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_17_17;
#line 266 "recursion_patterns.m"
                else
#line 266 "recursion_patterns.m"
                  {
#line 266 "recursion_patterns.m"
                    {
#line 266 "recursion_patterns.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_2[3], recursion_patterns__HeadVar__1_1, ((MR_Box) (recursion_patterns__V_23_23)), ((MR_Box) (recursion_patterns__V_15_15)));
                    }
#line 266 "recursion_patterns.m"
                  }
#line 266 "recursion_patterns.m"
              }
#line 266 "recursion_patterns.m"
          }
#line 266 "recursion_patterns.m"
      }
#line 266 "recursion_patterns.m"
  }
#line 266 "recursion_patterns.m"
}

#line 266 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0(
#line 266 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 266 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 266 "recursion_patterns.m"
{
#line 266 "recursion_patterns.m"
  {
#line 266 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 266 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_11 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 266 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_12 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 266 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_11 == recursion_patterns__CastY_12);
#line 266 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 266 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 266 "recursion_patterns.m"
    else
#line 266 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "recursion_patterns.m"
      {
#line 266 "recursion_patterns.m"
        MR_Integer recursion_patterns__CastX_3 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 266 "recursion_patterns.m"
        MR_Integer recursion_patterns__CastY_4 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 266 "recursion_patterns.m"
        recursion_patterns__succeeded = (recursion_patterns__CastY_4 == recursion_patterns__CastX_3);
#line 266 "recursion_patterns.m"
      }
#line 266 "recursion_patterns.m"
    else
#line 266 "recursion_patterns.m"
      {
#line 266 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeInfo_13_13;
#line 266 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeInfo_14_14;
#line 266 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 266 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 266 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
#line 266 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8;
#line 266 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_9_9;
#line 266 "recursion_patterns.m"
        MR_Word recursion_patterns__V_10_10;

#line 266 "recursion_patterns.m"
        recursion_patterns__succeeded = ((MR_tag((MR_Word) recursion_patterns__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 266 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 266 "recursion_patterns.m"
          {
#line 266 "recursion_patterns.m"
            recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 266 "recursion_patterns.m"
            recursion_patterns__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 266 "recursion_patterns.m"
            recursion_patterns__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
#line 4139 "recursion_patterns.c"
            recursion_patterns__TypeInfo_13_13 = (MR_Word) &recursion_patterns_scalar_common_2[2];
#line 4141 "recursion_patterns.c"
            {
#line 4143 "recursion_patterns.c"
              recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_13_13, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
            }
#line 266 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 266 "recursion_patterns.m"
              {
#line 4150 "recursion_patterns.c"
                recursion_patterns__succeeded = (recursion_patterns__V_6_6 == recursion_patterns__V_9_9);
#line 266 "recursion_patterns.m"
                if (recursion_patterns__succeeded)
#line 266 "recursion_patterns.m"
                  {
#line 4156 "recursion_patterns.c"
                    recursion_patterns__TypeInfo_14_14 = (MR_Word) &recursion_patterns_scalar_common_2[3];
#line 4158 "recursion_patterns.c"
                    {
#line 4160 "recursion_patterns.c"
                      recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_14_14, ((MR_Box) (recursion_patterns__V_7_7)), ((MR_Box) (recursion_patterns__V_10_10)));
                    }
#line 266 "recursion_patterns.m"
                  }
#line 266 "recursion_patterns.m"
              }
#line 266 "recursion_patterns.m"
          }
#line 266 "recursion_patterns.m"
      }
#line 266 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 266 "recursion_patterns.m"
  }
#line 266 "recursion_patterns.m"
}

#line 288 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0(
#line 288 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 288 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 288 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 288 "recursion_patterns.m"
{
#line 288 "recursion_patterns.m"
  {
#line 288 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 288 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_12 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 288 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_13 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 288 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_12 == recursion_patterns__CastY_13);
#line 288 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 4202 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 288 "recursion_patterns.m"
    else
#line 288 "recursion_patterns.m"
      {
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 2)));
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__V_10_10;
#line 288 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_17_17 = (MR_Integer) recursion_patterns__V_4_4;
#line 288 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_18_18 = (MR_Integer) recursion_patterns__V_7_7;

#line 288 "recursion_patterns.m"
        {
#line 288 "recursion_patterns.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&recursion_patterns__V_10_10, recursion_patterns__V_17_17, recursion_patterns__V_18_18);
        }
#line 4232 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_10_10 == (MR_Integer) 0);
#line 288 "recursion_patterns.m"
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 288 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 288 "recursion_patterns.m"
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_10_10;
#line 288 "recursion_patterns.m"
        else
#line 288 "recursion_patterns.m"
          {
#line 288 "recursion_patterns.m"
            MR_Word recursion_patterns__V_11_11;

#line 288 "recursion_patterns.m"
            {
#line 288 "recursion_patterns.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_1[2], &recursion_patterns__V_11_11, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
            }
#line 4252 "recursion_patterns.c"
            recursion_patterns__succeeded = (recursion_patterns__V_11_11 == (MR_Integer) 0);
#line 288 "recursion_patterns.m"
            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 288 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 288 "recursion_patterns.m"
              *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_11_11;
#line 288 "recursion_patterns.m"
            else
#line 288 "recursion_patterns.m"
              {
#line 288 "recursion_patterns.m"
                {
#line 288 "recursion_patterns.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_2[1], recursion_patterns__HeadVar__1_1, ((MR_Box) (recursion_patterns__V_6_6)), ((MR_Box) (recursion_patterns__V_9_9)));
                }
#line 288 "recursion_patterns.m"
              }
#line 288 "recursion_patterns.m"
          }
#line 288 "recursion_patterns.m"
      }
#line 288 "recursion_patterns.m"
  }
#line 288 "recursion_patterns.m"
}

#line 288 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0(
#line 288 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 288 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 288 "recursion_patterns.m"
{
#line 288 "recursion_patterns.m"
  {
#line 288 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 288 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 288 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 288 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
#line 288 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 288 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 288 "recursion_patterns.m"
    else
#line 288 "recursion_patterns.m"
      {
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeInfo_12_12;
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeInfo_13_13;
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 288 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
#line 288 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_14_14 = (MR_Integer) recursion_patterns__V_3_3;
#line 288 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_15_15 = (MR_Integer) recursion_patterns__V_6_6;

#line 4329 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_14_14 == recursion_patterns__V_15_15);
#line 288 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 288 "recursion_patterns.m"
          {
#line 4335 "recursion_patterns.c"
            recursion_patterns__TypeInfo_12_12 = (MR_Word) &recursion_patterns_scalar_common_1[2];
#line 4337 "recursion_patterns.c"
            {
#line 4339 "recursion_patterns.c"
              recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_12_12, ((MR_Box) (recursion_patterns__V_4_4)), ((MR_Box) (recursion_patterns__V_7_7)));
            }
#line 288 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 288 "recursion_patterns.m"
              {
#line 4346 "recursion_patterns.c"
                recursion_patterns__TypeInfo_13_13 = (MR_Word) &recursion_patterns_scalar_common_2[1];
#line 4348 "recursion_patterns.c"
                {
#line 4350 "recursion_patterns.c"
                  recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_13_13, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
                }
#line 288 "recursion_patterns.m"
              }
#line 288 "recursion_patterns.m"
          }
#line 288 "recursion_patterns.m"
      }
#line 288 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 288 "recursion_patterns.m"
  }
#line 288 "recursion_patterns.m"
}

#line 865 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0(
#line 865 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 865 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 865 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 865 "recursion_patterns.m"
{
#line 865 "recursion_patterns.m"
  {
#line 865 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 865 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 865 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 865 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
#line 865 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 4390 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 865 "recursion_patterns.m"
    else
#line 865 "recursion_patterns.m"
      {
#line 865 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 865 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 865 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 865 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 865 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8;

#line 865 "recursion_patterns.m"
        {
#line 865 "recursion_patterns.m"
          measurements____Compare____own_prof_info_0_0(&recursion_patterns__V_8_8, recursion_patterns__V_4_4, recursion_patterns__V_6_6);
        }
#line 4412 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_8_8 == (MR_Integer) 0);
#line 865 "recursion_patterns.m"
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 865 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 865 "recursion_patterns.m"
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_8_8;
#line 865 "recursion_patterns.m"
        else
#line 865 "recursion_patterns.m"
          {
#line 865 "recursion_patterns.m"
            measurements____Compare____inherit_prof_info_0_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_5_5, recursion_patterns__V_7_7);
          }
#line 865 "recursion_patterns.m"
      }
#line 865 "recursion_patterns.m"
  }
#line 865 "recursion_patterns.m"
}

#line 865 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0(
#line 865 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 865 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 865 "recursion_patterns.m"
{
#line 865 "recursion_patterns.m"
  {
#line 865 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 865 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_7 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 865 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_8 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 865 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_7 == recursion_patterns__CastY_8);
#line 865 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 865 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 865 "recursion_patterns.m"
    else
#line 865 "recursion_patterns.m"
      {
#line 865 "recursion_patterns.m"
        MR_Word recursion_patterns__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 865 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 865 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 865 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));

#line 4471 "recursion_patterns.c"
        {
#line 4473 "recursion_patterns.c"
          recursion_patterns__succeeded = measurements____Unify____own_prof_info_0_0(recursion_patterns__V_3_3, recursion_patterns__V_5_5);
        }
#line 865 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 4478 "recursion_patterns.c"
          {
#line 4480 "recursion_patterns.c"
            recursion_patterns__succeeded = measurements____Unify____inherit_prof_info_0_0(recursion_patterns__V_4_4, recursion_patterns__V_6_6);
          }
#line 865 "recursion_patterns.m"
      }
#line 865 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 865 "recursion_patterns.m"
  }
#line 865 "recursion_patterns.m"
}

#line 857 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0(
#line 857 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 857 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 857 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 857 "recursion_patterns.m"
{
#line 857 "recursion_patterns.m"
  {
#line 857 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 857 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 857 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 857 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
#line 857 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 4516 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 857 "recursion_patterns.m"
    else
#line 857 "recursion_patterns.m"
      {
#line 857 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 857 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 857 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 857 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 857 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8;

#line 857 "recursion_patterns.m"
        {
#line 857 "recursion_patterns.m"
          report____Compare____proc_desc_0_0(&recursion_patterns__V_8_8, recursion_patterns__V_4_4, recursion_patterns__V_6_6);
        }
#line 4538 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_8_8 == (MR_Integer) 0);
#line 857 "recursion_patterns.m"
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 857 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 857 "recursion_patterns.m"
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_8_8;
#line 857 "recursion_patterns.m"
        else
#line 857 "recursion_patterns.m"
          {
#line 857 "recursion_patterns.m"
            recursion_patterns____Compare____own_and_inherit_prof_info_0_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_5_5, recursion_patterns__V_7_7);
          }
#line 857 "recursion_patterns.m"
      }
#line 857 "recursion_patterns.m"
  }
#line 857 "recursion_patterns.m"
}

#line 857 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0(
#line 857 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 857 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 857 "recursion_patterns.m"
{
#line 857 "recursion_patterns.m"
  {
#line 857 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 857 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_7 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 857 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_8 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 857 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_7 == recursion_patterns__CastY_8);
#line 857 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 857 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 857 "recursion_patterns.m"
    else
#line 857 "recursion_patterns.m"
      {
#line 857 "recursion_patterns.m"
        MR_Word recursion_patterns__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 857 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 857 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 857 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));

#line 4597 "recursion_patterns.c"
        {
#line 4599 "recursion_patterns.c"
          recursion_patterns__succeeded = report____Unify____proc_desc_0_0(recursion_patterns__V_3_3, recursion_patterns__V_5_5);
        }
#line 857 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 4604 "recursion_patterns.c"
          {
#line 4606 "recursion_patterns.c"
            recursion_patterns__succeeded = recursion_patterns____Unify____own_and_inherit_prof_info_0_0(recursion_patterns__V_4_4, recursion_patterns__V_6_6);
          }
#line 857 "recursion_patterns.m"
      }
#line 857 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 857 "recursion_patterns.m"
  }
#line 857 "recursion_patterns.m"
}

#line 1003 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_proc_rec_type_5_p_0(
#line 1003 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 1003 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 1003 "recursion_patterns.m"
  MR_Word recursion_patterns___PSPtr_8,
#line 1003 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 1003 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5)
#line 1003 "recursion_patterns.m"
{
#line 1010 "recursion_patterns.m"
  {
#line 1010 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 1010 "recursion_patterns.m"
    {
#line 1010 "recursion_patterns.m"
      recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_112_114_111_99_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(recursion_patterns__Deep_6, recursion_patterns__NumCliques_7, recursion_patterns__HeadVar__4_4, recursion_patterns__HeadVar__5_5);
    }
#line 1010 "recursion_patterns.m"
  }
#line 1003 "recursion_patterns.m"
}

#line 983 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_rec_type_5_p_0(
#line 983 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 983 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 983 "recursion_patterns.m"
  MR_Word recursion_patterns___RecursionType_8,
#line 983 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 983 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5)
#line 983 "recursion_patterns.m"
{
#line 989 "recursion_patterns.m"
  {
#line 989 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 989 "recursion_patterns.m"
    {
#line 989 "recursion_patterns.m"
      recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(recursion_patterns__Deep_6, recursion_patterns__NumCliques_7, recursion_patterns__HeadVar__4_4, recursion_patterns__HeadVar__5_5);
    }
#line 989 "recursion_patterns.m"
  }
#line 983 "recursion_patterns.m"
}

#line 980 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_4_p_0_1(
#line 980 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 980 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 980 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 980 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 980 "recursion_patterns.m"
{
#line 980 "recursion_patterns.m"
  {
#line 980 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 980 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_HeadVar__5_5;

#line 980 "recursion_patterns.m"
    {
#line 980 "recursion_patterns.m"
      recursion_patterns__finalize_histogram_rec_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 4))), ((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_HeadVar__5_5);
    }
#line 980 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_HeadVar__5_5));
#line 980 "recursion_patterns.m"
  }
#line 980 "recursion_patterns.m"
}

#line 975 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_4_p_0(
#line 975 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_5,
#line 975 "recursion_patterns.m"
  MR_Integer recursion_patterns__NumCliques_6,
#line 975 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_8,
#line 975 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_9)
#line 975 "recursion_patterns.m"
{
#line 979 "recursion_patterns.m"
  {
#line 979 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 979 "recursion_patterns.m"
    MR_Word recursion_patterns__V_10_10;
#line 979 "recursion_patterns.m"
    MR_Float recursion_patterns__V_12_12;

#line 980 "recursion_patterns.m"
    {
#line 980 "recursion_patterns.m"
      recursion_patterns__V_12_12 = mercury__float__float_1_f_0(recursion_patterns__NumCliques_6);
    }
#line 980 "recursion_patterns.m"
    {
#line 980 "recursion_patterns.m"
      recursion_patterns__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 980 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 0) = ((MR_Box) (&recursion_patterns_scalar_common_5[1]));
#line 980 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 1) = ((MR_Box) (recursion_patterns__finalize_histogram_4_p_0_1));
#line 980 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 980 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 3) = ((MR_Box) (recursion_patterns__Deep_5));
#line 980 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 4) = MR_box_float(recursion_patterns__V_12_12);
#line 980 "recursion_patterns.m"
    }
#line 980 "recursion_patterns.m"
    {
#line 980 "recursion_patterns.m"
      mercury__map__map_values_3_p_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0, (MR_Word) &report__report__type_ctor_info_recursion_type_freq_data_0, recursion_patterns__V_10_10, recursion_patterns__STATE_VARIABLE_Histogram_0_8, recursion_patterns__STATE_VARIABLE_Histogram_9);
    }
#line 979 "recursion_patterns.m"
  }
#line 975 "recursion_patterns.m"
}

#line 969 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_2(
#line 969 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 969 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1)
#line 969 "recursion_patterns.m"
{
#line 969 "recursion_patterns.m"
  {
#line 969 "recursion_patterns.m"
    MR_Box recursion_patterns__wrapper_arg_2;
#line 969 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 969 "recursion_patterns.m"
    MR_Integer recursion_patterns__conv1_LambdaHeadVar__2_27;

#line 969 "recursion_patterns.m"
    {
#line 969 "recursion_patterns.m"
      recursion_patterns__conv1_LambdaHeadVar__2_27 = recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__969__1_1_f_0(((MR_Word) recursion_patterns__wrapper_arg_1));
    }
#line 969 "recursion_patterns.m"
    recursion_patterns__wrapper_arg_2 = ((MR_Box) (recursion_patterns__conv1_LambdaHeadVar__2_27));
#line 969 "recursion_patterns.m"
    return recursion_patterns__wrapper_arg_2;
#line 969 "recursion_patterns.m"
  }
#line 969 "recursion_patterns.m"
}

#line 972 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_1(
#line 972 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 972 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1)
#line 972 "recursion_patterns.m"
{
#line 972 "recursion_patterns.m"
  {
#line 972 "recursion_patterns.m"
    MR_Box recursion_patterns__wrapper_arg_2;
#line 972 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 972 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_LambdaHeadVar__2_35;

#line 972 "recursion_patterns.m"
    {
#line 972 "recursion_patterns.m"
      recursion_patterns__conv0_LambdaHeadVar__2_35 = recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__972__1_1_f_0(((MR_String) recursion_patterns__wrapper_arg_1));
    }
#line 972 "recursion_patterns.m"
    recursion_patterns__wrapper_arg_2 = ((MR_Box) (recursion_patterns__conv0_LambdaHeadVar__2_35));
#line 972 "recursion_patterns.m"
    return recursion_patterns__wrapper_arg_2;
#line 972 "recursion_patterns.m"
  }
#line 972 "recursion_patterns.m"
}

#line 958 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0(
#line 958 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 958 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__2_2)
#line 958 "recursion_patterns.m"
{
#line 961 "recursion_patterns.m"
  {
#line 961 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 961 "recursion_patterns.m"
#line 961 "recursion_patterns.m"
    switch (MR_tag((MR_Word) recursion_patterns__HeadVar__1_1)) {
#line 961 "recursion_patterns.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 961 "recursion_patterns.m"
      case (MR_Integer) 0:
#line 961 "recursion_patterns.m"
        {
#line 961 "recursion_patterns.m"
          *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[7]);
#line 961 "recursion_patterns.m"
        }
#line 961 "recursion_patterns.m"
        break;
#line 961 "recursion_patterns.m"
      case (MR_Integer) 1:
#line 962 "recursion_patterns.m"
        {
#line 962 "recursion_patterns.m"
          *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[8]);
#line 962 "recursion_patterns.m"
        }
#line 961 "recursion_patterns.m"
        break;
#line 961 "recursion_patterns.m"
      case (MR_Integer) 2:
#line 963 "recursion_patterns.m"
        {
#line 964 "recursion_patterns.m"
          *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[5]);
#line 963 "recursion_patterns.m"
        }
#line 961 "recursion_patterns.m"
        break;
#line 961 "recursion_patterns.m"
      case (MR_Integer) 3:
#line 961 "recursion_patterns.m"
#line 961 "recursion_patterns.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)))) {
#line 961 "recursion_patterns.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 961 "recursion_patterns.m"
          case (MR_Integer) 0:
#line 965 "recursion_patterns.m"
            {
#line 965 "recursion_patterns.m"
              MR_Integer recursion_patterns__NumProcs_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 965 "recursion_patterns.m"
              MR_Word recursion_patterns__V_17_17;

#line 966 "recursion_patterns.m"
              {
#line 966 "recursion_patterns.m"
                recursion_patterns__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 966 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), recursion_patterns__V_17_17, 0) = ((MR_Box) (recursion_patterns__NumProcs_16));
#line 966 "recursion_patterns.m"
              }
#line 966 "recursion_patterns.m"
              {
#line 966 "recursion_patterns.m"
                MR_Word base;
#line 966 "recursion_patterns.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "recursion_patterns.m"
                *recursion_patterns__HeadVar__2_2 = base;
#line 966 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_17_17));
#line 966 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 966 "recursion_patterns.m"
              }
#line 965 "recursion_patterns.m"
            }
#line 961 "recursion_patterns.m"
            break;
#line 961 "recursion_patterns.m"
          case (MR_Integer) 1:
#line 967 "recursion_patterns.m"
            {
#line 967 "recursion_patterns.m"
              MR_Word recursion_patterns__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 967 "recursion_patterns.m"
              MR_Word recursion_patterns__Levels_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 967 "recursion_patterns.m"
              MR_Word recursion_patterns__SimpleLevels_20;
#line 967 "recursion_patterns.m"
              MR_Word recursion_patterns__V_22_22;
#line 967 "recursion_patterns.m"
              MR_Word recursion_patterns__V_24_24;

#line 969 "recursion_patterns.m"
              {
#line 969 "recursion_patterns.m"
                recursion_patterns__V_24_24 = mercury__list__map_2_f_0((MR_Word) &report__report__type_ctor_info_recursion_level_report_0, recursion_patterns__TypeCtorInfo_44_44, (MR_Word) &recursion_patterns_scalar_common_1[7], recursion_patterns__Levels_19);
              }
#line 968 "recursion_patterns.m"
              {
#line 968 "recursion_patterns.m"
                recursion_patterns__SimpleLevels_20 = mercury__set__from_list_1_f_0(recursion_patterns__TypeCtorInfo_44_44, recursion_patterns__V_24_24);
              }
#line 967 "recursion_patterns.m"
              {
#line 967 "recursion_patterns.m"
                recursion_patterns__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 967 "recursion_patterns.m"
                MR_hl_field(MR_mktag(2), recursion_patterns__V_22_22, 0) = ((MR_Box) (recursion_patterns__SimpleLevels_20));
#line 967 "recursion_patterns.m"
              }
#line 967 "recursion_patterns.m"
              {
#line 967 "recursion_patterns.m"
                MR_Word base;
#line 967 "recursion_patterns.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "recursion_patterns.m"
                *recursion_patterns__HeadVar__2_2 = base;
#line 967 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_22_22));
#line 967 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 967 "recursion_patterns.m"
              }
#line 967 "recursion_patterns.m"
            }
#line 961 "recursion_patterns.m"
            break;
#line 961 "recursion_patterns.m"
          case (MR_Integer) 2:
#line 970 "recursion_patterns.m"
            {
#line 970 "recursion_patterns.m"
              MR_Word recursion_patterns__TypeCtorInfo_46_46 = (MR_Word) &report__report__type_ctor_info_recursion_type_simple_0;
#line 970 "recursion_patterns.m"
              MR_Word recursion_patterns__Errors_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 970 "recursion_patterns.m"
              MR_Word recursion_patterns__V_32_32;

#line 972 "recursion_patterns.m"
              {
#line 972 "recursion_patterns.m"
                recursion_patterns__V_32_32 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, recursion_patterns__TypeCtorInfo_46_46, (MR_Word) &recursion_patterns_scalar_common_1[6], recursion_patterns__Errors_29);
              }
#line 973 "recursion_patterns.m"
              {
#line 973 "recursion_patterns.m"
                *recursion_patterns__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(recursion_patterns__TypeCtorInfo_46_46, recursion_patterns__V_32_32, (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[6]));
              }
#line 970 "recursion_patterns.m"
            }
#line 961 "recursion_patterns.m"
            break;
#line 961 "recursion_patterns.m"
        }
#line 961 "recursion_patterns.m"
        break;
#line 961 "recursion_patterns.m"
    }
#line 961 "recursion_patterns.m"
  }
#line 958 "recursion_patterns.m"
}

#line 938 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__update_procs_map_3_p_0(
#line 938 "recursion_patterns.m"
  MR_Word recursion_patterns__FirstProcInfo_4,
#line 938 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Map_0_16,
#line 938 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Map_17)
#line 938 "recursion_patterns.m"
{
#line 942 "recursion_patterns.m"
  {
#line 942 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 942 "recursion_patterns.m"
    MR_Word recursion_patterns__PSDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_4, (MR_Integer) 0)));
#line 942 "recursion_patterns.m"
    MR_Word recursion_patterns__FirstProfInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_4, (MR_Integer) 1)));
#line 942 "recursion_patterns.m"
    MR_Word recursion_patterns__PsPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 0)));
#line 942 "recursion_patterns.m"
    MR_Word recursion_patterns__ProcFreqData_15;
#line 944 "recursion_patterns.m"
    MR_String recursion_patterns__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 1)));
#line 944 "recursion_patterns.m"
    MR_Integer recursion_patterns__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 2)));
#line 944 "recursion_patterns.m"
    MR_String recursion_patterns__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 3)));
#line 944 "recursion_patterns.m"
    MR_String recursion_patterns__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 4)));
#line 944 "recursion_patterns.m"
    MR_String recursion_patterns__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 5)));
#line 952 "recursion_patterns.m"
    MR_Word recursion_patterns__ProcFreqData0_9;
#line 945 "recursion_patterns.m"
    MR_Box recursion_patterns__conv0_ProcFreqData0_9;

#line 945 "recursion_patterns.m"
    {
#line 945 "recursion_patterns.m"
      recursion_patterns__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, recursion_patterns__STATE_VARIABLE_Map_0_16, ((MR_Box) (recursion_patterns__PsPtr_8)), &recursion_patterns__conv0_ProcFreqData0_9);
    }
#line 945 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 945 "recursion_patterns.m"
      {
#line 945 "recursion_patterns.m"
        recursion_patterns__ProcFreqData0_9 = ((MR_Word) recursion_patterns__conv0_ProcFreqData0_9);
#line 945 "recursion_patterns.m"
        recursion_patterns__succeeded = MR_TRUE;
#line 945 "recursion_patterns.m"
      }
#line 952 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 947 "recursion_patterns.m"
      {
#line 947 "recursion_patterns.m"
        MR_Integer recursion_patterns__Count0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_9, (MR_Integer) 0)));
#line 947 "recursion_patterns.m"
        MR_Word recursion_patterns__ProfInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_9, (MR_Integer) 1)));
#line 947 "recursion_patterns.m"
        MR_Word recursion_patterns__ProcDesc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_9, (MR_Integer) 2)));
#line 947 "recursion_patterns.m"
        MR_Word recursion_patterns__ProfInfo_13;
#line 947 "recursion_patterns.m"
        MR_Integer recursion_patterns__Count_14;
#line 947 "recursion_patterns.m"
        MR_Word recursion_patterns__OwnA_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_7, (MR_Integer) 0)));
#line 947 "recursion_patterns.m"
        MR_Word recursion_patterns__InheritA_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_7, (MR_Integer) 1)));
#line 947 "recursion_patterns.m"
        MR_Word recursion_patterns__OwnB_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_11, (MR_Integer) 0)));
#line 947 "recursion_patterns.m"
        MR_Word recursion_patterns__InheritB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_11, (MR_Integer) 1)));
#line 947 "recursion_patterns.m"
        MR_Word recursion_patterns__Own_34;
#line 947 "recursion_patterns.m"
        MR_Word recursion_patterns__Inherit_35;

#line 878 "recursion_patterns.m"
        {
#line 878 "recursion_patterns.m"
          recursion_patterns__Own_34 = measurements__add_own_to_own_2_f_0(recursion_patterns__OwnA_30, recursion_patterns__OwnB_32);
        }
#line 879 "recursion_patterns.m"
        {
#line 879 "recursion_patterns.m"
          recursion_patterns__Inherit_35 = measurements__add_inherit_to_inherit_2_f_0(recursion_patterns__InheritA_31, recursion_patterns__InheritB_33);
        }
#line 877 "recursion_patterns.m"
        {
#line 877 "recursion_patterns.m"
          recursion_patterns__ProfInfo_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 877 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_13, 0) = ((MR_Box) (recursion_patterns__Own_34));
#line 877 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_13, 1) = ((MR_Box) (recursion_patterns__Inherit_35));
#line 877 "recursion_patterns.m"
        }
#line 949 "recursion_patterns.m"
        recursion_patterns__Count_14 = (recursion_patterns__Count0_10 + (MR_Integer) 1);
#line 950 "recursion_patterns.m"
        {
#line 950 "recursion_patterns.m"
          recursion_patterns__ProcFreqData_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 950 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 0) = ((MR_Box) (recursion_patterns__Count_14));
#line 950 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 1) = ((MR_Box) (recursion_patterns__ProfInfo_13));
#line 950 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 2) = ((MR_Box) (recursion_patterns__ProcDesc_12));
#line 950 "recursion_patterns.m"
        }
#line 947 "recursion_patterns.m"
      }
#line 952 "recursion_patterns.m"
    else
#line 953 "recursion_patterns.m"
      {
#line 954 "recursion_patterns.m"
        {
#line 954 "recursion_patterns.m"
          recursion_patterns__ProcFreqData_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 954 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 0) = ((MR_Box) ((MR_Integer) 1));
#line 954 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 1) = ((MR_Box) (recursion_patterns__FirstProfInfo_7));
#line 954 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 2) = ((MR_Box) (recursion_patterns__PSDesc_6));
#line 954 "recursion_patterns.m"
        }
#line 953 "recursion_patterns.m"
      }
#line 956 "recursion_patterns.m"
    {
#line 956 "recursion_patterns.m"
      mercury__map__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, ((MR_Box) (recursion_patterns__PsPtr_8)), ((MR_Box) (recursion_patterns__ProcFreqData_15)), recursion_patterns__STATE_VARIABLE_Map_0_16, recursion_patterns__STATE_VARIABLE_Map_17);
    }
#line 942 "recursion_patterns.m"
  }
#line 938 "recursion_patterns.m"
}

#line 896 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__update_histogram_4_p_0(
#line 896 "recursion_patterns.m"
  MR_Word recursion_patterns__MaybeFirstProcInfo_5,
#line 896 "recursion_patterns.m"
  MR_Word recursion_patterns__SimpleType_6,
#line 896 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_19,
#line 896 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_20)
#line 896 "recursion_patterns.m"
{
#line 901 "recursion_patterns.m"
  {
#line 901 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 901 "recursion_patterns.m"
    MR_Word recursion_patterns__Data_18;
#line 923 "recursion_patterns.m"
    MR_Word recursion_patterns__Data0_8;
#line 902 "recursion_patterns.m"
    MR_Box recursion_patterns__conv0_Data0_8;

#line 902 "recursion_patterns.m"
    {
#line 902 "recursion_patterns.m"
      recursion_patterns__succeeded = mercury__map__search_3_p_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0, recursion_patterns__STATE_VARIABLE_Histogram_0_19, ((MR_Box) (recursion_patterns__SimpleType_6)), &recursion_patterns__conv0_Data0_8);
    }
#line 902 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 902 "recursion_patterns.m"
      {
#line 902 "recursion_patterns.m"
        recursion_patterns__Data0_8 = ((MR_Word) recursion_patterns__conv0_Data0_8);
#line 902 "recursion_patterns.m"
        recursion_patterns__succeeded = MR_TRUE;
#line 902 "recursion_patterns.m"
      }
#line 923 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 903 "recursion_patterns.m"
      {
#line 903 "recursion_patterns.m"
        MR_Integer recursion_patterns__Count0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__Data0_8, (MR_Integer) 0)));
#line 903 "recursion_patterns.m"
        MR_Word recursion_patterns__MaybeProfInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Data0_8, (MR_Integer) 1)));
#line 903 "recursion_patterns.m"
        MR_Word recursion_patterns__Procs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Data0_8, (MR_Integer) 2)));
#line 903 "recursion_patterns.m"
        MR_Word recursion_patterns__MaybeProfInfo_15;
#line 903 "recursion_patterns.m"
        MR_Word recursion_patterns__Procs_16;
#line 903 "recursion_patterns.m"
        MR_Integer recursion_patterns__Count_17;

#line 916 "recursion_patterns.m"
        if ((recursion_patterns__MaybeFirstProcInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 917 "recursion_patterns.m"
          {
#line 918 "recursion_patterns.m"
            recursion_patterns__MaybeProfInfo_15 = recursion_patterns__MaybeProfInfo0_10;
#line 919 "recursion_patterns.m"
            recursion_patterns__Procs_16 = recursion_patterns__Procs0_11;
#line 917 "recursion_patterns.m"
          }
#line 916 "recursion_patterns.m"
        else
#line 905 "recursion_patterns.m"
          {
#line 905 "recursion_patterns.m"
            MR_Word recursion_patterns__FirstProcInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstProcInfo_5, (MR_Integer) 0)));
#line 905 "recursion_patterns.m"
            MR_Word recursion_patterns__ProfInfo_14;
#line 905 "recursion_patterns.m"
            MR_Word recursion_patterns__PSDesc_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_12, (MR_Integer) 0)));
#line 905 "recursion_patterns.m"
            MR_Word recursion_patterns__FirstProfInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_12, (MR_Integer) 1)));
#line 905 "recursion_patterns.m"
            MR_Word recursion_patterns__PsPtr_57;
#line 905 "recursion_patterns.m"
            MR_Word recursion_patterns__ProcFreqData_64;
#line 944 "recursion_patterns.m"
            MR_String recursion_patterns__V_68_68;
#line 944 "recursion_patterns.m"
            MR_Integer recursion_patterns__V_69_69;
#line 944 "recursion_patterns.m"
            MR_String recursion_patterns__V_70_70;
#line 944 "recursion_patterns.m"
            MR_String recursion_patterns__V_71_71;
#line 944 "recursion_patterns.m"
            MR_String recursion_patterns__V_72_72;
#line 952 "recursion_patterns.m"
            MR_Word recursion_patterns__ProcFreqData0_58;
#line 945 "recursion_patterns.m"
            MR_Box recursion_patterns__conv1_ProcFreqData0_58;

#line 910 "recursion_patterns.m"
            if ((recursion_patterns__MaybeProfInfo0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 911 "recursion_patterns.m"
              recursion_patterns__ProfInfo_14 = recursion_patterns__FirstProfInfo_56;
#line 910 "recursion_patterns.m"
            else
#line 907 "recursion_patterns.m"
              {
#line 907 "recursion_patterns.m"
                MR_Word recursion_patterns__ProfInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProfInfo0_10, (MR_Integer) 0)));
#line 907 "recursion_patterns.m"
                MR_Word recursion_patterns__OwnA_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_56, (MR_Integer) 0)));
#line 907 "recursion_patterns.m"
                MR_Word recursion_patterns__InheritA_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_56, (MR_Integer) 1)));
#line 907 "recursion_patterns.m"
                MR_Word recursion_patterns__OwnB_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_13, (MR_Integer) 0)));
#line 907 "recursion_patterns.m"
                MR_Word recursion_patterns__InheritB_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_13, (MR_Integer) 1)));
#line 907 "recursion_patterns.m"
                MR_Word recursion_patterns__Own_49;
#line 907 "recursion_patterns.m"
                MR_Word recursion_patterns__Inherit_50;

#line 878 "recursion_patterns.m"
                {
#line 878 "recursion_patterns.m"
                  recursion_patterns__Own_49 = measurements__add_own_to_own_2_f_0(recursion_patterns__OwnA_45, recursion_patterns__OwnB_47);
                }
#line 879 "recursion_patterns.m"
                {
#line 879 "recursion_patterns.m"
                  recursion_patterns__Inherit_50 = measurements__add_inherit_to_inherit_2_f_0(recursion_patterns__InheritA_46, recursion_patterns__InheritB_48);
                }
#line 877 "recursion_patterns.m"
                {
#line 877 "recursion_patterns.m"
                  recursion_patterns__ProfInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 877 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_14, 0) = ((MR_Box) (recursion_patterns__Own_49));
#line 877 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_14, 1) = ((MR_Box) (recursion_patterns__Inherit_50));
#line 877 "recursion_patterns.m"
                }
#line 907 "recursion_patterns.m"
              }
#line 914 "recursion_patterns.m"
            {
#line 914 "recursion_patterns.m"
              recursion_patterns__MaybeProfInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 914 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProfInfo_15, 0) = ((MR_Box) (recursion_patterns__ProfInfo_14));
#line 914 "recursion_patterns.m"
            }
#line 944 "recursion_patterns.m"
            recursion_patterns__PsPtr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 0)));
#line 944 "recursion_patterns.m"
            recursion_patterns__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 1)));
#line 944 "recursion_patterns.m"
            recursion_patterns__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 2)));
#line 944 "recursion_patterns.m"
            recursion_patterns__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 3)));
#line 944 "recursion_patterns.m"
            recursion_patterns__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 4)));
#line 944 "recursion_patterns.m"
            recursion_patterns__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 5)));
#line 945 "recursion_patterns.m"
            {
#line 945 "recursion_patterns.m"
              recursion_patterns__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, recursion_patterns__Procs0_11, ((MR_Box) (recursion_patterns__PsPtr_57)), &recursion_patterns__conv1_ProcFreqData0_58);
            }
#line 945 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 945 "recursion_patterns.m"
              {
#line 945 "recursion_patterns.m"
                recursion_patterns__ProcFreqData0_58 = ((MR_Word) recursion_patterns__conv1_ProcFreqData0_58);
#line 945 "recursion_patterns.m"
                recursion_patterns__succeeded = MR_TRUE;
#line 945 "recursion_patterns.m"
              }
#line 952 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 947 "recursion_patterns.m"
              {
#line 947 "recursion_patterns.m"
                MR_Integer recursion_patterns__Count0_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_58, (MR_Integer) 0)));
#line 947 "recursion_patterns.m"
                MR_Word recursion_patterns__ProfInfo0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_58, (MR_Integer) 1)));
#line 947 "recursion_patterns.m"
                MR_Word recursion_patterns__ProcDesc_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_58, (MR_Integer) 2)));
#line 947 "recursion_patterns.m"
                MR_Word recursion_patterns__ProfInfo_62;
#line 947 "recursion_patterns.m"
                MR_Integer recursion_patterns__Count_63;
#line 947 "recursion_patterns.m"
                MR_Word recursion_patterns__OwnA_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_56, (MR_Integer) 0)));
#line 947 "recursion_patterns.m"
                MR_Word recursion_patterns__InheritA_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_56, (MR_Integer) 1)));
#line 947 "recursion_patterns.m"
                MR_Word recursion_patterns__OwnB_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_60, (MR_Integer) 0)));
#line 947 "recursion_patterns.m"
                MR_Word recursion_patterns__InheritB_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_60, (MR_Integer) 1)));
#line 947 "recursion_patterns.m"
                MR_Word recursion_patterns__Own_81;
#line 947 "recursion_patterns.m"
                MR_Word recursion_patterns__Inherit_82;

#line 878 "recursion_patterns.m"
                {
#line 878 "recursion_patterns.m"
                  recursion_patterns__Own_81 = measurements__add_own_to_own_2_f_0(recursion_patterns__OwnA_77, recursion_patterns__OwnB_79);
                }
#line 879 "recursion_patterns.m"
                {
#line 879 "recursion_patterns.m"
                  recursion_patterns__Inherit_82 = measurements__add_inherit_to_inherit_2_f_0(recursion_patterns__InheritA_78, recursion_patterns__InheritB_80);
                }
#line 877 "recursion_patterns.m"
                {
#line 877 "recursion_patterns.m"
                  recursion_patterns__ProfInfo_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 877 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_62, 0) = ((MR_Box) (recursion_patterns__Own_81));
#line 877 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_62, 1) = ((MR_Box) (recursion_patterns__Inherit_82));
#line 877 "recursion_patterns.m"
                }
#line 949 "recursion_patterns.m"
                recursion_patterns__Count_63 = (recursion_patterns__Count0_59 + (MR_Integer) 1);
#line 950 "recursion_patterns.m"
                {
#line 950 "recursion_patterns.m"
                  recursion_patterns__ProcFreqData_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 950 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 0) = ((MR_Box) (recursion_patterns__Count_63));
#line 950 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 1) = ((MR_Box) (recursion_patterns__ProfInfo_62));
#line 950 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 2) = ((MR_Box) (recursion_patterns__ProcDesc_61));
#line 950 "recursion_patterns.m"
                }
#line 947 "recursion_patterns.m"
              }
#line 952 "recursion_patterns.m"
            else
#line 953 "recursion_patterns.m"
              {
#line 954 "recursion_patterns.m"
                {
#line 954 "recursion_patterns.m"
                  recursion_patterns__ProcFreqData_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 954 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 0) = ((MR_Box) ((MR_Integer) 1));
#line 954 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 1) = ((MR_Box) (recursion_patterns__FirstProfInfo_56));
#line 954 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 2) = ((MR_Box) (recursion_patterns__PSDesc_55));
#line 954 "recursion_patterns.m"
                }
#line 953 "recursion_patterns.m"
              }
#line 956 "recursion_patterns.m"
            {
#line 956 "recursion_patterns.m"
              mercury__map__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, ((MR_Box) (recursion_patterns__PsPtr_57)), ((MR_Box) (recursion_patterns__ProcFreqData_64)), recursion_patterns__Procs0_11, &recursion_patterns__Procs_16);
            }
#line 905 "recursion_patterns.m"
          }
#line 921 "recursion_patterns.m"
        recursion_patterns__Count_17 = (recursion_patterns__Count0_9 + (MR_Integer) 1);
#line 922 "recursion_patterns.m"
        {
#line 922 "recursion_patterns.m"
          recursion_patterns__Data_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 922 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 0) = ((MR_Box) (recursion_patterns__Count_17));
#line 922 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 1) = ((MR_Box) (recursion_patterns__MaybeProfInfo_15));
#line 922 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 2) = ((MR_Box) (recursion_patterns__Procs_16));
#line 922 "recursion_patterns.m"
        }
#line 903 "recursion_patterns.m"
      }
#line 923 "recursion_patterns.m"
    else
#line 924 "recursion_patterns.m"
      {
#line 924 "recursion_patterns.m"
        MR_Word recursion_patterns__MaybeProfInfo_29;
#line 924 "recursion_patterns.m"
        MR_Word recursion_patterns__Procs_30;

#line 929 "recursion_patterns.m"
        if ((recursion_patterns__MaybeFirstProcInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "recursion_patterns.m"
          {
#line 931 "recursion_patterns.m"
            recursion_patterns__MaybeProfInfo_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 932 "recursion_patterns.m"
            {
#line 932 "recursion_patterns.m"
              recursion_patterns__Procs_30 = mercury__map__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0);
            }
#line 930 "recursion_patterns.m"
          }
#line 929 "recursion_patterns.m"
        else
#line 926 "recursion_patterns.m"
          {
#line 926 "recursion_patterns.m"
            MR_Word recursion_patterns__V_23_23;
#line 926 "recursion_patterns.m"
            MR_Word recursion_patterns__V_24_24;
#line 926 "recursion_patterns.m"
            MR_Word recursion_patterns__FirstProcInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstProcInfo_5, (MR_Integer) 0)));
#line 927 "recursion_patterns.m"
            MR_Word recursion_patterns__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_26, (MR_Integer) 0)));

#line 927 "recursion_patterns.m"
            recursion_patterns__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_26, (MR_Integer) 1)));
#line 927 "recursion_patterns.m"
            {
#line 927 "recursion_patterns.m"
              recursion_patterns__MaybeProfInfo_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProfInfo_29, 0) = ((MR_Box) (recursion_patterns__V_23_23));
#line 927 "recursion_patterns.m"
            }
#line 928 "recursion_patterns.m"
            {
#line 928 "recursion_patterns.m"
              recursion_patterns__V_24_24 = mercury__map__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0);
            }
#line 928 "recursion_patterns.m"
            {
#line 928 "recursion_patterns.m"
              recursion_patterns__update_procs_map_3_p_0(recursion_patterns__FirstProcInfo_26, recursion_patterns__V_24_24, &recursion_patterns__Procs_30);
            }
#line 926 "recursion_patterns.m"
          }
#line 934 "recursion_patterns.m"
        {
#line 934 "recursion_patterns.m"
          recursion_patterns__Data_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 934 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 0) = ((MR_Box) ((MR_Integer) 1));
#line 934 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 1) = ((MR_Box) (recursion_patterns__MaybeProfInfo_29));
#line 934 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 2) = ((MR_Box) (recursion_patterns__Procs_30));
#line 934 "recursion_patterns.m"
        }
#line 924 "recursion_patterns.m"
      }
#line 936 "recursion_patterns.m"
    {
#line 936 "recursion_patterns.m"
      mercury__map__set_4_p_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0, ((MR_Box) (recursion_patterns__SimpleType_6)), ((MR_Box) (recursion_patterns__Data_18)), recursion_patterns__STATE_VARIABLE_Histogram_0_19, recursion_patterns__STATE_VARIABLE_Histogram_20);
    }
#line 901 "recursion_patterns.m"
  }
#line 896 "recursion_patterns.m"
}

#line 820 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__rec_types_freq_build_histogram_5_p_0(
#line 820 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 820 "recursion_patterns.m"
  MR_Integer recursion_patterns__HeadVar__2_7,
#line 820 "recursion_patterns.m"
  MR_Word recursion_patterns__CliquePtr_8,
#line 820 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_27,
#line 820 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_28)
#line 820 "recursion_patterns.m"
{
#line 824 "recursion_patterns.m"
  {
#line 824 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 824 "recursion_patterns.m"
    {
#line 824 "recursion_patterns.m"
      recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0(recursion_patterns__Deep_6, recursion_patterns__CliquePtr_8, recursion_patterns__STATE_VARIABLE_Histogram_0_27, recursion_patterns__STATE_VARIABLE_Histogram_28);
    }
#line 824 "recursion_patterns.m"
  }
#line 820 "recursion_patterns.m"
}

#line 791 "recursion_patterns.m"
static MR_String MR_CALL 
recursion_patterns__error_to_string_1_f_0(
#line 791 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1)
#line 791 "recursion_patterns.m"
{
#line 793 "recursion_patterns.m"
  {
#line 793 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 793 "recursion_patterns.m"
    MR_String recursion_patterns__HeadVar__2_2;
#line 793 "recursion_patterns.m"
    MR_Word recursion_patterns__Detism_3 = (MR_Word) recursion_patterns__HeadVar__1_1;
#line 793 "recursion_patterns.m"
    MR_String recursion_patterns__V_7_7;
#line 793 "recursion_patterns.m"
    MR_String recursion_patterns__V_11_11;

#line 794 "recursion_patterns.m"
    {
#line 794 "recursion_patterns.m"
      recursion_patterns__V_7_7 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0, ((MR_Box) (recursion_patterns__Detism_3)));
    }
#line 794 "recursion_patterns.m"
    {
#line 794 "recursion_patterns.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &recursion_patterns_scalar_common_3[2], recursion_patterns__V_7_7, &recursion_patterns__V_11_11);
    }
#line 794 "recursion_patterns.m"
    {
#line 794 "recursion_patterns.m"
      recursion_patterns__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(recursion_patterns__V_11_11, (MR_String) " code is not handled");
    }
#line 793 "recursion_patterns.m"
    return recursion_patterns__HeadVar__2_2;
#line 793 "recursion_patterns.m"
  }
#line 791 "recursion_patterns.m"
}

#line 736 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursions_cross_product_2_4_p_0(
#line 736 "recursion_patterns.m"
  MR_Integer recursion_patterns__HeadVar__1_1,
#line 736 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 736 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3,
#line 736 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__4_4)
#line 736 "recursion_patterns.m"
{
#line 740 "recursion_patterns.m"
  {
#line 740 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 740 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "recursion_patterns.m"
      *recursion_patterns__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 740 "recursion_patterns.m"
    else
#line 742 "recursion_patterns.m"
      {
#line 742 "recursion_patterns.m"
        MR_Float recursion_patterns__CostA_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 742 "recursion_patterns.m"
        MR_Float recursion_patterns__ProbA_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 742 "recursion_patterns.m"
        MR_Integer recursion_patterns__NumB_11;
#line 742 "recursion_patterns.m"
        MR_Float recursion_patterns__CostB_12;
#line 742 "recursion_patterns.m"
        MR_Float recursion_patterns__ProbB_13;
#line 742 "recursion_patterns.m"
        MR_Word recursion_patterns__PairsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 742 "recursion_patterns.m"
        MR_Word recursion_patterns__Pairs0_16;
#line 742 "recursion_patterns.m"
        MR_Integer recursion_patterns__Num_17;
#line 742 "recursion_patterns.m"
        MR_Float recursion_patterns__Prob_18;
#line 742 "recursion_patterns.m"
        MR_Float recursion_patterns__Cost_19;
#line 742 "recursion_patterns.m"
        MR_Word recursion_patterns__Pair_20;
#line 742 "recursion_patterns.m"
        MR_Word recursion_patterns__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 742 "recursion_patterns.m"
        MR_Word recursion_patterns__V_22_22;
#line 742 "recursion_patterns.m"
        MR_Word recursion_patterns__V_23_23;

#line 742 "recursion_patterns.m"
        recursion_patterns__NumB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__V_21_21, (MR_Integer) 0)));
#line 742 "recursion_patterns.m"
        recursion_patterns__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_21_21, (MR_Integer) 1)));
#line 742 "recursion_patterns.m"
        recursion_patterns__CostB_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__V_22_22, (MR_Integer) 0)));
#line 742 "recursion_patterns.m"
        recursion_patterns__ProbB_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__V_22_22, (MR_Integer) 1)));
#line 743 "recursion_patterns.m"
        {
#line 743 "recursion_patterns.m"
          recursion_patterns__recursions_cross_product_2_4_p_0(recursion_patterns__HeadVar__1_1, recursion_patterns__HeadVar__2_2, recursion_patterns__PairsB_14, &recursion_patterns__Pairs0_16);
        }
#line 744 "recursion_patterns.m"
        recursion_patterns__Num_17 = (recursion_patterns__HeadVar__1_1 + recursion_patterns__NumB_11);
#line 745 "recursion_patterns.m"
        {
#line 745 "recursion_patterns.m"
          recursion_patterns__Prob_18 = measurement_units__and_2_f_0(recursion_patterns__ProbA_10, recursion_patterns__ProbB_13);
        }
#line 746 "recursion_patterns.m"
        recursion_patterns__Cost_19 = (recursion_patterns__CostA_9 + recursion_patterns__CostB_12);
#line 747 "recursion_patterns.m"
        {
#line 747 "recursion_patterns.m"
          recursion_patterns__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 747 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 0) = MR_box_float(recursion_patterns__Cost_19);
#line 747 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 1) = MR_box_float(recursion_patterns__Prob_18);
#line 747 "recursion_patterns.m"
        }
#line 747 "recursion_patterns.m"
        {
#line 747 "recursion_patterns.m"
          recursion_patterns__Pair_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 747 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Pair_20, 0) = ((MR_Box) (recursion_patterns__Num_17));
#line 747 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Pair_20, 1) = ((MR_Box) (recursion_patterns__V_23_23));
#line 747 "recursion_patterns.m"
        }
#line 748 "recursion_patterns.m"
        {
#line 748 "recursion_patterns.m"
          MR_Word base;
#line 748 "recursion_patterns.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "recursion_patterns.m"
          *recursion_patterns__HeadVar__4_4 = base;
#line 748 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__Pair_20));
#line 748 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__Pairs0_16));
#line 748 "recursion_patterns.m"
        }
#line 742 "recursion_patterns.m"
      }
#line 740 "recursion_patterns.m"
  }
#line 736 "recursion_patterns.m"
}

#line 726 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursions_cross_product_3_p_0(
#line 726 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 726 "recursion_patterns.m"
  MR_Word recursion_patterns__PairsB_2,
#line 726 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__3_3)
#line 726 "recursion_patterns.m"
{
#line 730 "recursion_patterns.m"
  {
#line 730 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 730 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "recursion_patterns.m"
      *recursion_patterns__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 730 "recursion_patterns.m"
    else
#line 731 "recursion_patterns.m"
      {
#line 731 "recursion_patterns.m"
        MR_Integer recursion_patterns__NumA_5;
#line 731 "recursion_patterns.m"
        MR_Word recursion_patterns__RecA_6;
#line 731 "recursion_patterns.m"
        MR_Word recursion_patterns__PairsA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 731 "recursion_patterns.m"
        MR_Word recursion_patterns__InnerLoop_10;
#line 731 "recursion_patterns.m"
        MR_Word recursion_patterns__OuterLoopTail_11;
#line 731 "recursion_patterns.m"
        MR_Word recursion_patterns__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));

#line 731 "recursion_patterns.m"
        recursion_patterns__NumA_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__V_12_12, (MR_Integer) 0)));
#line 731 "recursion_patterns.m"
        recursion_patterns__RecA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_12_12, (MR_Integer) 1)));
#line 732 "recursion_patterns.m"
        {
#line 732 "recursion_patterns.m"
          recursion_patterns__recursions_cross_product_2_4_p_0(recursion_patterns__NumA_5, recursion_patterns__RecA_6, recursion_patterns__PairsB_2, &recursion_patterns__InnerLoop_10);
        }
#line 733 "recursion_patterns.m"
        {
#line 733 "recursion_patterns.m"
          recursion_patterns__recursions_cross_product_3_p_0(recursion_patterns__PairsA_7, recursion_patterns__PairsB_2, &recursion_patterns__OuterLoopTail_11);
        }
#line 734 "recursion_patterns.m"
        {
#line 734 "recursion_patterns.m"
          *recursion_patterns__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &recursion_patterns_scalar_common_1[3], recursion_patterns__InnerLoop_10, recursion_patterns__OuterLoopTail_11);
        }
#line 731 "recursion_patterns.m"
      }
#line 730 "recursion_patterns.m"
  }
#line 726 "recursion_patterns.m"
}

#line 698 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__condense_recursions_2_3_p_0(
#line 698 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 698 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 698 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__3_3)
#line 698 "recursion_patterns.m"
{
#line 702 "recursion_patterns.m"
  while (MR_TRUE)
#line 702 "recursion_patterns.m"
    {
#line 702 "recursion_patterns.m"
      /* tailcall optimized into a loop */
#line 702 "recursion_patterns.m"
      {
#line 702 "recursion_patterns.m"
        MR_bool recursion_patterns__succeeded;

#line 702 "recursion_patterns.m"
        if ((recursion_patterns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 702 "recursion_patterns.m"
          {
#line 702 "recursion_patterns.m"
            {
#line 702 "recursion_patterns.m"
              MR_Word base;
#line 702 "recursion_patterns.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "recursion_patterns.m"
              *recursion_patterns__HeadVar__3_3 = base;
#line 702 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__HeadVar__1_1));
#line 702 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "recursion_patterns.m"
            }
#line 702 "recursion_patterns.m"
          }
#line 702 "recursion_patterns.m"
        else
#line 703 "recursion_patterns.m"
          {
#line 703 "recursion_patterns.m"
            MR_Integer recursion_patterns__NumA_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 703 "recursion_patterns.m"
            MR_Word recursion_patterns__RecA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 703 "recursion_patterns.m"
            MR_Integer recursion_patterns__NumB_8;
#line 703 "recursion_patterns.m"
            MR_Word recursion_patterns__RecB_9;
#line 703 "recursion_patterns.m"
            MR_Word recursion_patterns__Pairs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 703 "recursion_patterns.m"
            MR_Word recursion_patterns__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));

#line 703 "recursion_patterns.m"
            recursion_patterns__NumB_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__V_20_20, (MR_Integer) 0)));
#line 703 "recursion_patterns.m"
            recursion_patterns__RecB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_20_20, (MR_Integer) 1)));
#line 704 "recursion_patterns.m"
            recursion_patterns__succeeded = (recursion_patterns__NumA_6 == recursion_patterns__NumB_8);
#line 714 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 705 "recursion_patterns.m"
              {
#line 705 "recursion_patterns.m"
                MR_Float recursion_patterns__CostA_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RecA_7, (MR_Integer) 0)));
#line 705 "recursion_patterns.m"
                MR_Float recursion_patterns__ProbabilityA_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RecA_7, (MR_Integer) 1)));
#line 705 "recursion_patterns.m"
                MR_Float recursion_patterns__CostB_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RecB_9, (MR_Integer) 0)));
#line 705 "recursion_patterns.m"
                MR_Float recursion_patterns__ProbabilityB_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RecB_9, (MR_Integer) 1)));
#line 705 "recursion_patterns.m"
                MR_Float recursion_patterns__Cost_16;
#line 705 "recursion_patterns.m"
                MR_Float recursion_patterns__Probability_17;
#line 705 "recursion_patterns.m"
                MR_Word recursion_patterns__Rec_18;
#line 705 "recursion_patterns.m"
                MR_Word recursion_patterns__V_21_21;
#line 705 "recursion_patterns.m"
                MR_Word recursion_patterns__V_22_22;
#line 705 "recursion_patterns.m"
                MR_Float recursion_patterns__V_23_23;
#line 705 "recursion_patterns.m"
                MR_Word recursion_patterns__V_24_24;
#line 705 "recursion_patterns.m"
                MR_Float recursion_patterns__V_25_25;
#line 705 "recursion_patterns.m"
                MR_Word recursion_patterns__V_27_27;
#line 705 "recursion_patterns.m"
                MR_Word recursion_patterns__V_29_29;

#line 708 "recursion_patterns.m"
                {
#line 708 "recursion_patterns.m"
                  recursion_patterns__V_23_23 = measurement_units__probability_to_float_1_f_0(recursion_patterns__ProbabilityA_13);
                }
#line 709 "recursion_patterns.m"
                {
#line 709 "recursion_patterns.m"
                  recursion_patterns__V_25_25 = measurement_units__probability_to_float_1_f_0(recursion_patterns__ProbabilityB_15);
                }
#line 709 "recursion_patterns.m"
                {
#line 709 "recursion_patterns.m"
                  recursion_patterns__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_24_24, 0) = MR_box_float(recursion_patterns__V_25_25);
#line 709 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 709 "recursion_patterns.m"
                }
#line 708 "recursion_patterns.m"
                {
#line 708 "recursion_patterns.m"
                  recursion_patterns__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_21_21, 0) = MR_box_float(recursion_patterns__V_23_23);
#line 708 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_21_21, 1) = ((MR_Box) (recursion_patterns__V_24_24));
#line 708 "recursion_patterns.m"
                }
#line 710 "recursion_patterns.m"
                {
#line 710 "recursion_patterns.m"
                  recursion_patterns__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_27_27, 0) = MR_box_float(recursion_patterns__CostB_14);
#line 710 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 710 "recursion_patterns.m"
                }
#line 710 "recursion_patterns.m"
                {
#line 710 "recursion_patterns.m"
                  recursion_patterns__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_22_22, 0) = MR_box_float(recursion_patterns__CostA_12);
#line 710 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_22_22, 1) = ((MR_Box) (recursion_patterns__V_27_27));
#line 710 "recursion_patterns.m"
                }
#line 707 "recursion_patterns.m"
                {
#line 707 "recursion_patterns.m"
                  measurements__weighted_average_3_p_0(recursion_patterns__V_21_21, recursion_patterns__V_22_22, &recursion_patterns__Cost_16);
                }
#line 711 "recursion_patterns.m"
                {
#line 711 "recursion_patterns.m"
                  recursion_patterns__Probability_17 = measurement_units__or_2_f_0(recursion_patterns__ProbabilityA_13, recursion_patterns__ProbabilityB_15);
                }
#line 712 "recursion_patterns.m"
                {
#line 712 "recursion_patterns.m"
                  recursion_patterns__Rec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 712 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__Rec_18, 0) = MR_box_float(recursion_patterns__Cost_16);
#line 712 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__Rec_18, 1) = MR_box_float(recursion_patterns__Probability_17);
#line 712 "recursion_patterns.m"
                }
#line 713 "recursion_patterns.m"
                {
#line 713 "recursion_patterns.m"
                  recursion_patterns__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 713 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_29_29, 0) = ((MR_Box) (recursion_patterns__NumA_6));
#line 713 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_29_29, 1) = ((MR_Box) (recursion_patterns__Rec_18));
#line 713 "recursion_patterns.m"
                }
#line 713 "recursion_patterns.m"
                /* direct tailcall eliminated */
#line 713 "recursion_patterns.m"
                {
#line 713 "recursion_patterns.m"
                  MR_Word recursion_patterns__HeadVar__1__tmp_copy_1 = recursion_patterns__V_29_29;
#line 713 "recursion_patterns.m"
                  MR_Word recursion_patterns__HeadVar__2__tmp_copy_2 = recursion_patterns__Pairs0_10;

#line 713 "recursion_patterns.m"
                  recursion_patterns__HeadVar__2_2 = recursion_patterns__HeadVar__2__tmp_copy_2;
#line 713 "recursion_patterns.m"
                  recursion_patterns__HeadVar__1_1 = recursion_patterns__HeadVar__1__tmp_copy_1;
#line 713 "recursion_patterns.m"
                }
#line 713 "recursion_patterns.m"
                continue;
#line 705 "recursion_patterns.m"
              }
#line 714 "recursion_patterns.m"
            else
#line 715 "recursion_patterns.m"
              {
#line 715 "recursion_patterns.m"
                MR_Word recursion_patterns__Pairs1_19;
#line 715 "recursion_patterns.m"
                MR_Word recursion_patterns__Pairs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 715 "recursion_patterns.m"
                MR_Word recursion_patterns__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));

#line 696 "recursion_patterns.m"
                {
#line 696 "recursion_patterns.m"
                  recursion_patterns__condense_recursions_2_3_p_0(recursion_patterns__V_37_37, recursion_patterns__Pairs0_35, &recursion_patterns__Pairs1_19);
                }
#line 716 "recursion_patterns.m"
                {
#line 716 "recursion_patterns.m"
                  MR_Word base;
#line 716 "recursion_patterns.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "recursion_patterns.m"
                  *recursion_patterns__HeadVar__3_3 = base;
#line 716 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__HeadVar__1_1));
#line 716 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__Pairs1_19));
#line 716 "recursion_patterns.m"
                }
#line 715 "recursion_patterns.m"
              }
#line 703 "recursion_patterns.m"
          }
#line 702 "recursion_patterns.m"
      }
#line 702 "recursion_patterns.m"
      break;
#line 702 "recursion_patterns.m"
    }
#line 698 "recursion_patterns.m"
}

#line 666 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__merge_recursion_data_sequence_3_p_0(
#line 666 "recursion_patterns.m"
  MR_Word recursion_patterns__A_4,
#line 666 "recursion_patterns.m"
  MR_Word recursion_patterns__B_5,
#line 666 "recursion_patterns.m"
  MR_Word * recursion_patterns__Result_6)
#line 666 "recursion_patterns.m"
{
#line 671 "recursion_patterns.m"
  {
#line 671 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 671 "recursion_patterns.m"
    if ((recursion_patterns__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "recursion_patterns.m"
      *recursion_patterns__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "recursion_patterns.m"
    else
#line 671 "recursion_patterns.m"
      {
#line 671 "recursion_patterns.m"
        MR_Word recursion_patterns__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 2)));
#line 671 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 1)));
#line 671 "recursion_patterns.m"
        MR_Word recursion_patterns__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 0)));

#line 671 "recursion_patterns.m"
        if ((recursion_patterns__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "recursion_patterns.m"
          *recursion_patterns__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "recursion_patterns.m"
        else
#line 671 "recursion_patterns.m"
          {
#line 671 "recursion_patterns.m"
            MR_Word recursion_patterns__RecursionsB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 0)));
#line 671 "recursion_patterns.m"
            MR_Integer recursion_patterns__MaxLevelB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 1)));
#line 671 "recursion_patterns.m"
            MR_Word recursion_patterns__ErrorsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 2)));
#line 671 "recursion_patterns.m"
            MR_Word recursion_patterns__Recursions0_13;
#line 671 "recursion_patterns.m"
            MR_Word recursion_patterns__Recursions1_14;
#line 671 "recursion_patterns.m"
            MR_Word recursion_patterns__Recursions_15;
#line 671 "recursion_patterns.m"
            MR_Integer recursion_patterns__MaxLevel_16;
#line 671 "recursion_patterns.m"
            MR_Word recursion_patterns__Errors_17;

#line 673 "recursion_patterns.m"
            {
#line 673 "recursion_patterns.m"
              recursion_patterns__recursions_cross_product_3_p_0(recursion_patterns__V_25_25, recursion_patterns__RecursionsB_10, &recursion_patterns__Recursions0_13);
            }
#line 674 "recursion_patterns.m"
            {
#line 674 "recursion_patterns.m"
              mercury__list__sort_2_p_0((MR_Word) &recursion_patterns_scalar_common_1[3], recursion_patterns__Recursions0_13, &recursion_patterns__Recursions1_14);
            }
#line 694 "recursion_patterns.m"
            if ((recursion_patterns__Recursions1_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 694 "recursion_patterns.m"
              recursion_patterns__Recursions_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "recursion_patterns.m"
            else
#line 695 "recursion_patterns.m"
              {
#line 695 "recursion_patterns.m"
                MR_Word recursion_patterns__Pairs0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__Recursions1_14, (MR_Integer) 1)));
#line 695 "recursion_patterns.m"
                MR_Word recursion_patterns__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__Recursions1_14, (MR_Integer) 0)));

#line 696 "recursion_patterns.m"
                {
#line 696 "recursion_patterns.m"
                  recursion_patterns__condense_recursions_2_3_p_0(recursion_patterns__V_30_30, recursion_patterns__Pairs0_28, &recursion_patterns__Recursions_15);
                }
#line 695 "recursion_patterns.m"
              }
#line 679 "recursion_patterns.m"
            recursion_patterns__MaxLevel_16 = (recursion_patterns__V_24_24 + recursion_patterns__MaxLevelB_11);
#line 680 "recursion_patterns.m"
            {
#line 680 "recursion_patterns.m"
              recursion_patterns__Errors_17 = mercury__set__union_2_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0, recursion_patterns__V_23_23, recursion_patterns__ErrorsB_12);
            }
#line 681 "recursion_patterns.m"
            {
#line 681 "recursion_patterns.m"
              MR_Word base;
#line 681 "recursion_patterns.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 681 "recursion_patterns.m"
              *recursion_patterns__Result_6 = base;
#line 681 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__Recursions_15));
#line 681 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__MaxLevel_16));
#line 681 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__Errors_17));
#line 681 "recursion_patterns.m"
            }
#line 671 "recursion_patterns.m"
          }
#line 671 "recursion_patterns.m"
      }
#line 671 "recursion_patterns.m"
  }
#line 666 "recursion_patterns.m"
}

#line 604 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__merge_recursion_data_after_branch_3_p_0(
#line 604 "recursion_patterns.m"
  MR_Word recursion_patterns__A_4,
#line 604 "recursion_patterns.m"
  MR_Word recursion_patterns__B_5,
#line 604 "recursion_patterns.m"
  MR_Word * recursion_patterns__Result_6)
#line 604 "recursion_patterns.m"
{
#line 609 "recursion_patterns.m"
  {
#line 609 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 609 "recursion_patterns.m"
    if ((recursion_patterns__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "recursion_patterns.m"
      if ((recursion_patterns__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 625 "recursion_patterns.m"
        *recursion_patterns__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 609 "recursion_patterns.m"
      else
#line 623 "recursion_patterns.m"
        *recursion_patterns__Result_6 = recursion_patterns__B_5;
#line 609 "recursion_patterns.m"
    else
#line 609 "recursion_patterns.m"
      {
#line 609 "recursion_patterns.m"
        MR_Word recursion_patterns__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 2)));
#line 609 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 1)));
#line 609 "recursion_patterns.m"
        MR_Word recursion_patterns__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 0)));

#line 609 "recursion_patterns.m"
        if ((recursion_patterns__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 619 "recursion_patterns.m"
          *recursion_patterns__Result_6 = recursion_patterns__A_4;
#line 609 "recursion_patterns.m"
        else
#line 609 "recursion_patterns.m"
          {
#line 609 "recursion_patterns.m"
            MR_Word recursion_patterns__RecursionsB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 0)));
#line 609 "recursion_patterns.m"
            MR_Integer recursion_patterns__MaxLevelB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 1)));
#line 609 "recursion_patterns.m"
            MR_Word recursion_patterns__ErrorsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 2)));
#line 609 "recursion_patterns.m"
            MR_Word recursion_patterns__Recursions0_13;
#line 609 "recursion_patterns.m"
            MR_Word recursion_patterns__Recursions_14;
#line 609 "recursion_patterns.m"
            MR_Integer recursion_patterns__MaxLevel_15;
#line 609 "recursion_patterns.m"
            MR_Word recursion_patterns__Errors_16;

#line 611 "recursion_patterns.m"
            {
#line 611 "recursion_patterns.m"
              recursion_patterns__Recursions0_13 = mercury__assoc_list__merge_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0, recursion_patterns__V_28_28, recursion_patterns__RecursionsB_10);
            }
#line 694 "recursion_patterns.m"
            if ((recursion_patterns__Recursions0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 694 "recursion_patterns.m"
              recursion_patterns__Recursions_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 694 "recursion_patterns.m"
            else
#line 695 "recursion_patterns.m"
              {
#line 695 "recursion_patterns.m"
                MR_Word recursion_patterns__Pairs0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__Recursions0_13, (MR_Integer) 1)));
#line 695 "recursion_patterns.m"
                MR_Word recursion_patterns__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__Recursions0_13, (MR_Integer) 0)));

#line 696 "recursion_patterns.m"
                {
#line 696 "recursion_patterns.m"
                  recursion_patterns__condense_recursions_2_3_p_0(recursion_patterns__V_33_33, recursion_patterns__Pairs0_31, &recursion_patterns__Recursions_14);
                }
#line 695 "recursion_patterns.m"
              }
#line 613 "recursion_patterns.m"
            {
#line 613 "recursion_patterns.m"
              recursion_patterns__MaxLevel_15 = mercury__int__max_2_f_0(recursion_patterns__V_27_27, recursion_patterns__MaxLevelB_11);
            }
#line 614 "recursion_patterns.m"
            {
#line 614 "recursion_patterns.m"
              recursion_patterns__Errors_16 = mercury__set__union_2_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0, recursion_patterns__V_26_26, recursion_patterns__ErrorsB_12);
            }
#line 615 "recursion_patterns.m"
            {
#line 615 "recursion_patterns.m"
              MR_Word base;
#line 615 "recursion_patterns.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 615 "recursion_patterns.m"
              *recursion_patterns__Result_6 = base;
#line 615 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__Recursions_14));
#line 615 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__MaxLevel_15));
#line 615 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__Errors_16));
#line 615 "recursion_patterns.m"
            }
#line 609 "recursion_patterns.m"
          }
#line 609 "recursion_patterns.m"
      }
#line 609 "recursion_patterns.m"
  }
#line 604 "recursion_patterns.m"
}

#line 541 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__atomic_goal_recursion_data_4_p_0(
#line 541 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_5,
#line 541 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_6,
#line 541 "recursion_patterns.m"
  MR_Word recursion_patterns__AtomicGoal_7,
#line 541 "recursion_patterns.m"
  MR_Word * recursion_patterns__RecursionData_8)
#line 541 "recursion_patterns.m"
{
#line 544 "recursion_patterns.m"
  {
#line 544 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 544 "recursion_patterns.m"
    MR_Word recursion_patterns__RecursionLevel_33;
#line 544 "recursion_patterns.m"
    MR_Integer recursion_patterns__RecursiveCalls_47;
#line 544 "recursion_patterns.m"
    MR_Word recursion_patterns__V_61_61;
#line 544 "recursion_patterns.m"
    MR_Word recursion_patterns__V_63_63;
#line 579 "recursion_patterns.m"
    MR_Word recursion_patterns__V_48_48;

#line 561 "recursion_patterns.m"
#line 561 "recursion_patterns.m"
    switch (MR_tag((MR_Word) recursion_patterns__AtomicGoal_7)) {
#line 561 "recursion_patterns.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 561 "recursion_patterns.m"
      case (MR_Integer) 0:
#line 561 "recursion_patterns.m"
      case (MR_Integer) 1:
#line 561 "recursion_patterns.m"
      case (MR_Integer) 2:
#line 559 "recursion_patterns.m"
        {
#line 559 "recursion_patterns.m"
          MR_Word recursion_patterns__V_58_58;
#line 559 "recursion_patterns.m"
          MR_Float recursion_patterns__V_60_60;

#line 560 "recursion_patterns.m"
          {
#line 560 "recursion_patterns.m"
            recursion_patterns__V_60_60 = measurement_units__certain_0_f_0();
          }
#line 560 "recursion_patterns.m"
          {
#line 560 "recursion_patterns.m"
            recursion_patterns__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 560 "recursion_patterns.m"
            MR_hl_field(MR_mktag(0), recursion_patterns__V_58_58, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 560 "recursion_patterns.m"
            MR_hl_field(MR_mktag(0), recursion_patterns__V_58_58, 1) = MR_box_float(recursion_patterns__V_60_60);
#line 560 "recursion_patterns.m"
          }
#line 560 "recursion_patterns.m"
          {
#line 560 "recursion_patterns.m"
            recursion_patterns__RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 560 "recursion_patterns.m"
            MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 0));
#line 560 "recursion_patterns.m"
            MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 1) = ((MR_Box) (recursion_patterns__V_58_58));
#line 560 "recursion_patterns.m"
          }
#line 559 "recursion_patterns.m"
        }
#line 561 "recursion_patterns.m"
        break;
#line 561 "recursion_patterns.m"
      case (MR_Integer) 3:
#line 561 "recursion_patterns.m"
#line 561 "recursion_patterns.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__AtomicGoal_7, (MR_Integer) 0)))) {
#line 561 "recursion_patterns.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 561 "recursion_patterns.m"
          case (MR_Integer) 0:
#line 561 "recursion_patterns.m"
          case (MR_Integer) 1:
#line 561 "recursion_patterns.m"
          case (MR_Integer) 2:
#line 561 "recursion_patterns.m"
          case (MR_Integer) 3:
#line 561 "recursion_patterns.m"
          case (MR_Integer) 4:
#line 561 "recursion_patterns.m"
          case (MR_Integer) 8:
#line 561 "recursion_patterns.m"
          case (MR_Integer) 9:
#line 559 "recursion_patterns.m"
            {
#line 559 "recursion_patterns.m"
              MR_Word recursion_patterns__V_58_58;
#line 559 "recursion_patterns.m"
              MR_Float recursion_patterns__V_60_60;

#line 560 "recursion_patterns.m"
              {
#line 560 "recursion_patterns.m"
                recursion_patterns__V_60_60 = measurement_units__certain_0_f_0();
              }
#line 560 "recursion_patterns.m"
              {
#line 560 "recursion_patterns.m"
                recursion_patterns__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 560 "recursion_patterns.m"
                MR_hl_field(MR_mktag(0), recursion_patterns__V_58_58, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 560 "recursion_patterns.m"
                MR_hl_field(MR_mktag(0), recursion_patterns__V_58_58, 1) = MR_box_float(recursion_patterns__V_60_60);
#line 560 "recursion_patterns.m"
              }
#line 560 "recursion_patterns.m"
              {
#line 560 "recursion_patterns.m"
                recursion_patterns__RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 560 "recursion_patterns.m"
                MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 0));
#line 560 "recursion_patterns.m"
                MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 1) = ((MR_Box) (recursion_patterns__V_58_58));
#line 560 "recursion_patterns.m"
              }
#line 559 "recursion_patterns.m"
            }
#line 561 "recursion_patterns.m"
            break;
#line 561 "recursion_patterns.m"
          case (MR_Integer) 5:
#line 561 "recursion_patterns.m"
          case (MR_Integer) 6:
#line 561 "recursion_patterns.m"
          case (MR_Integer) 7:
#line 565 "recursion_patterns.m"
            {
#line 565 "recursion_patterns.m"
              MR_Word recursion_patterns__ThisClique_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 0)));
#line 565 "recursion_patterns.m"
              MR_Word recursion_patterns__CallSiteMap_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 1)));
#line 565 "recursion_patterns.m"
              MR_Word recursion_patterns__CostAndCallees_45;
#line 568 "recursion_patterns.m"
              MR_Word recursion_patterns__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 2)));
#line 569 "recursion_patterns.m"
              MR_Box recursion_patterns__conv0_CostAndCallees_45;

#line 569 "recursion_patterns.m"
              {
#line 569 "recursion_patterns.m"
                mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &recursion_patterns_scalar_common_2[0], recursion_patterns__CallSiteMap_43, ((MR_Box) (recursion_patterns__RevGoalPath_6)), &recursion_patterns__conv0_CostAndCallees_45);
              }
#line 569 "recursion_patterns.m"
              recursion_patterns__CostAndCallees_45 = ((MR_Word) recursion_patterns__conv0_CostAndCallees_45);
#line 570 "recursion_patterns.m"
              {
#line 570 "recursion_patterns.m"
                recursion_patterns__succeeded = analysis_utils__cost_and_callees_is_recursive_2_p_0(recursion_patterns__ThisClique_42, recursion_patterns__CostAndCallees_45);
              }
#line 574 "recursion_patterns.m"
              if (recursion_patterns__succeeded)
#line 573 "recursion_patterns.m"
                {
#line 573 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_50_50;
#line 573 "recursion_patterns.m"
                  MR_Float recursion_patterns__V_52_52;

#line 573 "recursion_patterns.m"
                  {
#line 573 "recursion_patterns.m"
                    recursion_patterns__V_52_52 = measurement_units__certain_0_f_0();
                  }
#line 573 "recursion_patterns.m"
                  {
#line 573 "recursion_patterns.m"
                    recursion_patterns__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 573 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_50_50, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 573 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_50_50, 1) = MR_box_float(recursion_patterns__V_52_52);
#line 573 "recursion_patterns.m"
                  }
#line 573 "recursion_patterns.m"
                  {
#line 573 "recursion_patterns.m"
                    recursion_patterns__RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 573 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 1));
#line 573 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 1) = ((MR_Box) (recursion_patterns__V_50_50));
#line 573 "recursion_patterns.m"
                  }
#line 573 "recursion_patterns.m"
                }
#line 574 "recursion_patterns.m"
              else
#line 575 "recursion_patterns.m"
                {
#line 575 "recursion_patterns.m"
                  MR_Float recursion_patterns__CostPercall_46;
#line 575 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CostAndCallees_45, (MR_Integer) 0)));
#line 575 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_55_55;
#line 575 "recursion_patterns.m"
                  MR_Float recursion_patterns__V_56_56;
#line 575 "recursion_patterns.m"
                  MR_Integer recursion_patterns__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__CostAndCallees_45, (MR_Integer) 1)));
#line 575 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CostAndCallees_45, (MR_Integer) 2)));
#line 575 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CostAndCallees_45, (MR_Integer) 3)));

#line 575 "recursion_patterns.m"
                  {
#line 575 "recursion_patterns.m"
                    recursion_patterns__CostPercall_46 = measurements__cs_cost_get_percall_1_f_0(recursion_patterns__V_53_53);
                  }
#line 576 "recursion_patterns.m"
                  {
#line 576 "recursion_patterns.m"
                    recursion_patterns__V_56_56 = measurement_units__certain_0_f_0();
                  }
#line 576 "recursion_patterns.m"
                  {
#line 576 "recursion_patterns.m"
                    recursion_patterns__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_55_55, 0) = MR_box_float(recursion_patterns__CostPercall_46);
#line 576 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_55_55, 1) = MR_box_float(recursion_patterns__V_56_56);
#line 576 "recursion_patterns.m"
                  }
#line 576 "recursion_patterns.m"
                  {
#line 576 "recursion_patterns.m"
                    recursion_patterns__RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 0));
#line 576 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 1) = ((MR_Box) (recursion_patterns__V_55_55));
#line 576 "recursion_patterns.m"
                  }
#line 575 "recursion_patterns.m"
                }
#line 565 "recursion_patterns.m"
            }
#line 561 "recursion_patterns.m"
            break;
#line 561 "recursion_patterns.m"
        }
#line 561 "recursion_patterns.m"
        break;
#line 561 "recursion_patterns.m"
    }
#line 579 "recursion_patterns.m"
    recursion_patterns__RecursiveCalls_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, (MR_Integer) 0)));
#line 579 "recursion_patterns.m"
    recursion_patterns__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, (MR_Integer) 1)));
#line 580 "recursion_patterns.m"
    {
#line 580 "recursion_patterns.m"
      recursion_patterns__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_61_61, 0) = ((MR_Box) (recursion_patterns__RecursionLevel_33));
#line 580 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 580 "recursion_patterns.m"
    }
#line 580 "recursion_patterns.m"
    {
#line 580 "recursion_patterns.m"
      recursion_patterns__V_63_63 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
    }
#line 580 "recursion_patterns.m"
    {
#line 580 "recursion_patterns.m"
      MR_Word base;
#line 580 "recursion_patterns.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 580 "recursion_patterns.m"
      *recursion_patterns__RecursionData_8 = base;
#line 580 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_61_61));
#line 580 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__RecursiveCalls_47));
#line 580 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__V_63_63));
#line 580 "recursion_patterns.m"
    }
#line 544 "recursion_patterns.m"
  }
#line 541 "recursion_patterns.m"
}

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_2(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 756 "recursion_patterns.m"
{
#line 756 "recursion_patterns.m"
  {
#line 756 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 756 "recursion_patterns.m"
    MR_Word recursion_patterns__conv2_HeadVar__4_15;

#line 756 "recursion_patterns.m"
    {
#line 756 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv2_HeadVar__4_15);
    }
#line 756 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv2_HeadVar__4_15));
#line 756 "recursion_patterns.m"
  }
#line 756 "recursion_patterns.m"
}

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_1(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 756 "recursion_patterns.m"
{
#line 756 "recursion_patterns.m"
  {
#line 756 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 756 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_HeadVar__4_15;

#line 756 "recursion_patterns.m"
    {
#line 756 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_HeadVar__4_15);
    }
#line 756 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_HeadVar__4_15));
#line 756 "recursion_patterns.m"
  }
#line 756 "recursion_patterns.m"
}

#line 510 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0(
#line 510 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_1,
#line 510 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_2,
#line 510 "recursion_patterns.m"
  MR_Integer recursion_patterns__CaseNum_3,
#line 510 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 510 "recursion_patterns.m"
  MR_Float recursion_patterns__TotalCalls_5,
#line 510 "recursion_patterns.m"
  MR_Integer recursion_patterns__CallsRemaining_6,
#line 510 "recursion_patterns.m"
  MR_Word * recursion_patterns__RecursionData_7)
#line 510 "recursion_patterns.m"
{
#line 515 "recursion_patterns.m"
  {
#line 515 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 515 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "recursion_patterns.m"
      {
#line 515 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeCtorInfo_18_79;
#line 515 "recursion_patterns.m"
        MR_Float recursion_patterns__FailProb_14;
#line 515 "recursion_patterns.m"
        MR_Float recursion_patterns__V_16_16;
#line 515 "recursion_patterns.m"
        MR_Float recursion_patterns__V_17_17;
#line 515 "recursion_patterns.m"
        MR_Word recursion_patterns__V_59_59;
#line 515 "recursion_patterns.m"
        MR_Word recursion_patterns__V_60_60;
#line 515 "recursion_patterns.m"
        MR_Float recursion_patterns__V_61_61;
#line 515 "recursion_patterns.m"
        MR_Word recursion_patterns__Errors_68;
#line 515 "recursion_patterns.m"
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_69;
#line 515 "recursion_patterns.m"
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_70;
#line 515 "recursion_patterns.m"
        MR_Word recursion_patterns__V_71_71;

#line 517 "recursion_patterns.m"
        {
#line 517 "recursion_patterns.m"
          recursion_patterns__V_17_17 = mercury__float__float_1_f_0(recursion_patterns__CallsRemaining_6);
        }
#line 517 "recursion_patterns.m"
        {
#line 517 "recursion_patterns.m"
          recursion_patterns__V_16_16 = mercury__float__f_slash_2_f_0(recursion_patterns__V_17_17, recursion_patterns__TotalCalls_5);
        }
#line 517 "recursion_patterns.m"
        {
#line 517 "recursion_patterns.m"
          recursion_patterns__FailProb_14 = measurement_units__probable_1_f_0(recursion_patterns__V_16_16);
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__V_61_61 = measurement_units__certain_0_f_0();
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_60_60, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_60_60, 1) = MR_box_float(recursion_patterns__V_61_61);
#line 789 "recursion_patterns.m"
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_59_59, 0) = ((MR_Box) ((MR_Integer) 0));
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_59_59, 1) = ((MR_Box) (recursion_patterns__V_60_60));
#line 789 "recursion_patterns.m"
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__STATE_VARIABLE_Recursions_0_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_69, 0) = ((MR_Box) (recursion_patterns__V_59_59));
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "recursion_patterns.m"
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__Errors_68 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
        }
#line 756 "recursion_patterns.m"
        {
#line 756 "recursion_patterns.m"
          recursion_patterns__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 756 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 756 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 1) = ((MR_Box) (recursion_patterns__switch_recursion_data_7_p_0_1));
#line 756 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 756 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 3) = MR_box_float(recursion_patterns__FailProb_14);
#line 756 "recursion_patterns.m"
        }
#line 6726 "recursion_patterns.c"
        recursion_patterns__TypeCtorInfo_18_79 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 756 "recursion_patterns.m"
        {
#line 756 "recursion_patterns.m"
          mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__V_71_71, recursion_patterns__STATE_VARIABLE_Recursions_0_69, &recursion_patterns__STATE_VARIABLE_Recursions_70);
        }
#line 755 "recursion_patterns.m"
        {
#line 755 "recursion_patterns.m"
          MR_Word base;
#line 755 "recursion_patterns.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 755 "recursion_patterns.m"
          *recursion_patterns__RecursionData_7 = base;
#line 755 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_70));
#line 755 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 755 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__Errors_68));
#line 755 "recursion_patterns.m"
        }
#line 515 "recursion_patterns.m"
      }
#line 515 "recursion_patterns.m"
    else
#line 521 "recursion_patterns.m"
      {
#line 521 "recursion_patterns.m"
        MR_Word recursion_patterns__Case_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
#line 521 "recursion_patterns.m"
        MR_Word recursion_patterns__Cases_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
#line 521 "recursion_patterns.m"
        MR_Word recursion_patterns__Goal_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Case_23, (MR_Integer) 2)));
#line 521 "recursion_patterns.m"
        MR_Word recursion_patterns__RevArmPath_31;
#line 521 "recursion_patterns.m"
        MR_Word recursion_patterns__CaseRecursionData0_32;
#line 521 "recursion_patterns.m"
        MR_Word recursion_patterns__CoverageInfo_33;
#line 521 "recursion_patterns.m"
        MR_Integer recursion_patterns__Calls_35;
#line 521 "recursion_patterns.m"
        MR_Float recursion_patterns__CaseProb_36;
#line 521 "recursion_patterns.m"
        MR_Word recursion_patterns__CaseRecursionData_37;
#line 521 "recursion_patterns.m"
        MR_Word recursion_patterns__CasesRecursionData_38;
#line 521 "recursion_patterns.m"
        MR_Word recursion_patterns__V_39_39;
#line 521 "recursion_patterns.m"
        MR_Word recursion_patterns__V_41_41;
#line 521 "recursion_patterns.m"
        MR_Word recursion_patterns__V_42_42;
#line 521 "recursion_patterns.m"
        MR_Float recursion_patterns__V_46_46;
#line 521 "recursion_patterns.m"
        MR_Float recursion_patterns__V_47_47;
#line 521 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_48_48;
#line 521 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_49_49;
#line 522 "recursion_patterns.m"
        MR_Word recursion_patterns__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Case_23, (MR_Integer) 0)));
#line 522 "recursion_patterns.m"
        MR_Word recursion_patterns__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Case_23, (MR_Integer) 1)));
#line 526 "recursion_patterns.m"
        MR_Word recursion_patterns__V_51_51;
#line 526 "recursion_patterns.m"
        MR_Word recursion_patterns__V_52_52;
#line 526 "recursion_patterns.m"
        MR_Word recursion_patterns__V_53_53;
#line 526 "recursion_patterns.m"
        MR_Word recursion_patterns__V_54_54;
#line 526 "recursion_patterns.m"
        MR_Box recursion_patterns__conv1_CoverageInfo_33;
#line 530 "recursion_patterns.m"
        MR_Integer recursion_patterns__CallsPrime_34;

#line 524 "recursion_patterns.m"
        {
#line 524 "recursion_patterns.m"
          recursion_patterns__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 524 "recursion_patterns.m"
          MR_hl_field(MR_mktag(3), recursion_patterns__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 524 "recursion_patterns.m"
          MR_hl_field(MR_mktag(3), recursion_patterns__V_39_39, 1) = ((MR_Box) (recursion_patterns__CaseNum_3));
#line 524 "recursion_patterns.m"
          MR_hl_field(MR_mktag(3), recursion_patterns__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "recursion_patterns.m"
        }
#line 523 "recursion_patterns.m"
        {
#line 523 "recursion_patterns.m"
          recursion_patterns__RevArmPath_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__RevArmPath_31, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_2));
#line 523 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__RevArmPath_31, 1) = ((MR_Box) (recursion_patterns__V_39_39));
#line 523 "recursion_patterns.m"
        }
#line 525 "recursion_patterns.m"
        {
#line 525 "recursion_patterns.m"
          recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_1, recursion_patterns__RevArmPath_31, recursion_patterns__Goal_30, &recursion_patterns__CaseRecursionData0_32);
        }
#line 526 "recursion_patterns.m"
        recursion_patterns__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 0)));
#line 526 "recursion_patterns.m"
        recursion_patterns__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 1)));
#line 526 "recursion_patterns.m"
        recursion_patterns__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 2)));
#line 526 "recursion_patterns.m"
        recursion_patterns__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Goal_30, (MR_Integer) 0)));
#line 526 "recursion_patterns.m"
        recursion_patterns__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Goal_30, (MR_Integer) 1)));
#line 526 "recursion_patterns.m"
        recursion_patterns__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Goal_30, (MR_Integer) 2)));
#line 526 "recursion_patterns.m"
        {
#line 526 "recursion_patterns.m"
          recursion_patterns__conv1_CoverageInfo_33 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, recursion_patterns__V_41_41, recursion_patterns__V_42_42);
        }
#line 526 "recursion_patterns.m"
        recursion_patterns__CoverageInfo_33 = ((MR_Word) recursion_patterns__conv1_CoverageInfo_33);
#line 528 "recursion_patterns.m"
        {
#line 528 "recursion_patterns.m"
          recursion_patterns__succeeded = coverage__get_coverage_before_2_p_0(recursion_patterns__CoverageInfo_33, &recursion_patterns__CallsPrime_34);
        }
#line 530 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 529 "recursion_patterns.m"
          recursion_patterns__Calls_35 = recursion_patterns__CallsPrime_34;
#line 530 "recursion_patterns.m"
        else
#line 531 "recursion_patterns.m"
          {
#line 531 "recursion_patterns.m"
            {
#line 531 "recursion_patterns.m"
              mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.switch_recursion_data\'/7", (MR_String) "expected coverage information");
#line 531 "recursion_patterns.m"
              return;
            }
#line 531 "recursion_patterns.m"
          }
#line 533 "recursion_patterns.m"
        {
#line 533 "recursion_patterns.m"
          recursion_patterns__V_47_47 = mercury__float__float_1_f_0(recursion_patterns__Calls_35);
        }
#line 533 "recursion_patterns.m"
        {
#line 533 "recursion_patterns.m"
          recursion_patterns__V_46_46 = mercury__float__f_slash_2_f_0(recursion_patterns__V_47_47, recursion_patterns__TotalCalls_5);
        }
#line 533 "recursion_patterns.m"
        {
#line 533 "recursion_patterns.m"
          recursion_patterns__CaseProb_36 = measurement_units__probable_1_f_0(recursion_patterns__V_46_46);
        }
#line 755 "recursion_patterns.m"
        if ((recursion_patterns__CaseRecursionData0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "recursion_patterns.m"
          recursion_patterns__CaseRecursionData_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "recursion_patterns.m"
        else
#line 755 "recursion_patterns.m"
          {
#line 755 "recursion_patterns.m"
            MR_Word recursion_patterns__TypeCtorInfo_18_94;
#line 755 "recursion_patterns.m"
            MR_Integer recursion_patterns__MaxLevel_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData0_32, (MR_Integer) 1)));
#line 755 "recursion_patterns.m"
            MR_Word recursion_patterns__Errors_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData0_32, (MR_Integer) 2)));
#line 755 "recursion_patterns.m"
            MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData0_32, (MR_Integer) 0)));
#line 755 "recursion_patterns.m"
            MR_Word recursion_patterns__STATE_VARIABLE_Recursions_85;
#line 755 "recursion_patterns.m"
            MR_Word recursion_patterns__V_86_86;

#line 756 "recursion_patterns.m"
            {
#line 756 "recursion_patterns.m"
              recursion_patterns__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 756 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_86_86, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 756 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_86_86, 1) = ((MR_Box) (recursion_patterns__switch_recursion_data_7_p_0_2));
#line 756 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 756 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_86_86, 3) = MR_box_float(recursion_patterns__CaseProb_36);
#line 756 "recursion_patterns.m"
            }
#line 6924 "recursion_patterns.c"
            recursion_patterns__TypeCtorInfo_18_94 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 756 "recursion_patterns.m"
            {
#line 756 "recursion_patterns.m"
              mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_94, recursion_patterns__TypeCtorInfo_18_94, recursion_patterns__V_86_86, recursion_patterns__STATE_VARIABLE_Recursions_0_84, &recursion_patterns__STATE_VARIABLE_Recursions_85);
            }
#line 755 "recursion_patterns.m"
            {
#line 755 "recursion_patterns.m"
              recursion_patterns__CaseRecursionData_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 755 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData_37, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_85));
#line 755 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData_37, 1) = ((MR_Box) (recursion_patterns__MaxLevel_82));
#line 755 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData_37, 2) = ((MR_Box) (recursion_patterns__Errors_83));
#line 755 "recursion_patterns.m"
            }
#line 755 "recursion_patterns.m"
          }
#line 536 "recursion_patterns.m"
        recursion_patterns__V_48_48 = (recursion_patterns__CaseNum_3 + (MR_Integer) 1);
#line 537 "recursion_patterns.m"
        recursion_patterns__V_49_49 = (recursion_patterns__CallsRemaining_6 - recursion_patterns__Calls_35);
#line 536 "recursion_patterns.m"
        {
#line 536 "recursion_patterns.m"
          recursion_patterns__switch_recursion_data_7_p_0(recursion_patterns__Info_1, recursion_patterns__RevGoalPath_2, recursion_patterns__V_48_48, recursion_patterns__Cases_24, recursion_patterns__TotalCalls_5, recursion_patterns__V_49_49, &recursion_patterns__CasesRecursionData_38);
        }
#line 538 "recursion_patterns.m"
        {
#line 538 "recursion_patterns.m"
          recursion_patterns__merge_recursion_data_after_branch_3_p_0(recursion_patterns__CaseRecursionData_37, recursion_patterns__CasesRecursionData_38, recursion_patterns__RecursionData_7);
        }
#line 521 "recursion_patterns.m"
      }
#line 515 "recursion_patterns.m"
  }
#line 510 "recursion_patterns.m"
}

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0_2(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 756 "recursion_patterns.m"
{
#line 756 "recursion_patterns.m"
  {
#line 756 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 756 "recursion_patterns.m"
    MR_Word recursion_patterns__conv3_HeadVar__4_15;

#line 756 "recursion_patterns.m"
    {
#line 756 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv3_HeadVar__4_15);
    }
#line 756 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv3_HeadVar__4_15));
#line 756 "recursion_patterns.m"
  }
#line 756 "recursion_patterns.m"
}

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0_1(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 756 "recursion_patterns.m"
{
#line 756 "recursion_patterns.m"
  {
#line 756 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 756 "recursion_patterns.m"
    MR_Word recursion_patterns__conv2_HeadVar__4_15;

#line 756 "recursion_patterns.m"
    {
#line 756 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv2_HeadVar__4_15);
    }
#line 756 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv2_HeadVar__4_15));
#line 756 "recursion_patterns.m"
  }
#line 756 "recursion_patterns.m"
}

#line 472 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0(
#line 472 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_8,
#line 472 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_9,
#line 472 "recursion_patterns.m"
  MR_Word recursion_patterns__Cond_10,
#line 472 "recursion_patterns.m"
  MR_Word recursion_patterns__Then_11,
#line 472 "recursion_patterns.m"
  MR_Word recursion_patterns__Else_12,
#line 472 "recursion_patterns.m"
  MR_Integer recursion_patterns__Calls_13,
#line 472 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_RecursionData_28)
#line 472 "recursion_patterns.m"
{
#line 478 "recursion_patterns.m"
  {
#line 478 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__TypeCtorInfo_49_49;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__CondRecursionData_15;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__ThenRecursionData0_16;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__ElseRecursionData0_17;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__Coverage_18;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__ThenCoverageInfo_19;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__ElseCoverageInfo_20;
#line 478 "recursion_patterns.m"
    MR_Integer recursion_patterns__ThenCalls_21;
#line 478 "recursion_patterns.m"
    MR_Integer recursion_patterns__ElseCalls_22;
#line 478 "recursion_patterns.m"
    MR_Float recursion_patterns__CallsF_23;
#line 478 "recursion_patterns.m"
    MR_Float recursion_patterns__ThenProb_24;
#line 478 "recursion_patterns.m"
    MR_Float recursion_patterns__ElseProb_25;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__ThenRecursionData_26;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__ElseRecursionData_27;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__V_29_29;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__V_31_31;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__V_33_33;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__V_35_35;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__V_36_36;
#line 478 "recursion_patterns.m"
    MR_Float recursion_patterns__V_37_37;
#line 478 "recursion_patterns.m"
    MR_Float recursion_patterns__V_38_38;
#line 478 "recursion_patterns.m"
    MR_Float recursion_patterns__V_39_39;
#line 478 "recursion_patterns.m"
    MR_Float recursion_patterns__V_40_40;
#line 478 "recursion_patterns.m"
    MR_Word recursion_patterns__STATE_VARIABLE_RecursionData_41_41;
#line 487 "recursion_patterns.m"
    MR_Word recursion_patterns__V_43_43;
#line 487 "recursion_patterns.m"
    MR_Word recursion_patterns__V_44_44;
#line 489 "recursion_patterns.m"
    MR_Word recursion_patterns__V_45_45;
#line 489 "recursion_patterns.m"
    MR_Word recursion_patterns__V_46_46;
#line 489 "recursion_patterns.m"
    MR_Box recursion_patterns__conv0_ThenCoverageInfo_19;
#line 491 "recursion_patterns.m"
    MR_Word recursion_patterns__V_47_47;
#line 491 "recursion_patterns.m"
    MR_Word recursion_patterns__V_48_48;
#line 491 "recursion_patterns.m"
    MR_Box recursion_patterns__conv1_ElseCoverageInfo_20;

#line 479 "recursion_patterns.m"
    {
#line 479 "recursion_patterns.m"
      recursion_patterns__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_29_29, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_9));
#line 479 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "recursion_patterns.m"
    }
#line 479 "recursion_patterns.m"
    {
#line 479 "recursion_patterns.m"
      recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_8, recursion_patterns__V_29_29, recursion_patterns__Cond_10, &recursion_patterns__CondRecursionData_15);
    }
#line 481 "recursion_patterns.m"
    {
#line 481 "recursion_patterns.m"
      recursion_patterns__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_31_31, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_9));
#line 481 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 481 "recursion_patterns.m"
    }
#line 481 "recursion_patterns.m"
    {
#line 481 "recursion_patterns.m"
      recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_8, recursion_patterns__V_31_31, recursion_patterns__Then_11, &recursion_patterns__ThenRecursionData0_16);
    }
#line 483 "recursion_patterns.m"
    {
#line 483 "recursion_patterns.m"
      recursion_patterns__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_33_33, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_9));
#line 483 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 483 "recursion_patterns.m"
    }
#line 483 "recursion_patterns.m"
    {
#line 483 "recursion_patterns.m"
      recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_8, recursion_patterns__V_33_33, recursion_patterns__Else_12, &recursion_patterns__ElseRecursionData0_17);
    }
#line 487 "recursion_patterns.m"
    recursion_patterns__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_8, (MR_Integer) 0)));
#line 487 "recursion_patterns.m"
    recursion_patterns__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_8, (MR_Integer) 1)));
#line 487 "recursion_patterns.m"
    recursion_patterns__Coverage_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_8, (MR_Integer) 2)));
#line 7169 "recursion_patterns.c"
    recursion_patterns__TypeCtorInfo_49_49 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0;
#line 489 "recursion_patterns.m"
    recursion_patterns__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Then_11, (MR_Integer) 0)));
#line 489 "recursion_patterns.m"
    recursion_patterns__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Then_11, (MR_Integer) 1)));
#line 489 "recursion_patterns.m"
    recursion_patterns__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Then_11, (MR_Integer) 2)));
#line 489 "recursion_patterns.m"
    {
#line 489 "recursion_patterns.m"
      recursion_patterns__conv0_ThenCoverageInfo_19 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(recursion_patterns__TypeCtorInfo_49_49, recursion_patterns__Coverage_18, recursion_patterns__V_35_35);
    }
#line 489 "recursion_patterns.m"
    recursion_patterns__ThenCoverageInfo_19 = ((MR_Word) recursion_patterns__conv0_ThenCoverageInfo_19);
#line 491 "recursion_patterns.m"
    recursion_patterns__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Else_12, (MR_Integer) 0)));
#line 491 "recursion_patterns.m"
    recursion_patterns__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Else_12, (MR_Integer) 1)));
#line 491 "recursion_patterns.m"
    recursion_patterns__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Else_12, (MR_Integer) 2)));
#line 491 "recursion_patterns.m"
    {
#line 491 "recursion_patterns.m"
      recursion_patterns__conv1_ElseCoverageInfo_20 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(recursion_patterns__TypeCtorInfo_49_49, recursion_patterns__Coverage_18, recursion_patterns__V_36_36);
    }
#line 491 "recursion_patterns.m"
    recursion_patterns__ElseCoverageInfo_20 = ((MR_Word) recursion_patterns__conv1_ElseCoverageInfo_20);
#line 492 "recursion_patterns.m"
    {
#line 492 "recursion_patterns.m"
      coverage__get_coverage_before_det_2_p_0(recursion_patterns__ThenCoverageInfo_19, &recursion_patterns__ThenCalls_21);
    }
#line 493 "recursion_patterns.m"
    {
#line 493 "recursion_patterns.m"
      coverage__get_coverage_before_det_2_p_0(recursion_patterns__ElseCoverageInfo_20, &recursion_patterns__ElseCalls_22);
    }
#line 494 "recursion_patterns.m"
    {
#line 494 "recursion_patterns.m"
      recursion_patterns__CallsF_23 = mercury__float__float_1_f_0(recursion_patterns__Calls_13);
    }
#line 495 "recursion_patterns.m"
    {
#line 495 "recursion_patterns.m"
      recursion_patterns__V_38_38 = mercury__float__float_1_f_0(recursion_patterns__ThenCalls_21);
    }
#line 495 "recursion_patterns.m"
    {
#line 495 "recursion_patterns.m"
      recursion_patterns__V_37_37 = mercury__float__f_slash_2_f_0(recursion_patterns__V_38_38, recursion_patterns__CallsF_23);
    }
#line 495 "recursion_patterns.m"
    {
#line 495 "recursion_patterns.m"
      recursion_patterns__ThenProb_24 = measurement_units__probable_1_f_0(recursion_patterns__V_37_37);
    }
#line 496 "recursion_patterns.m"
    {
#line 496 "recursion_patterns.m"
      recursion_patterns__V_40_40 = mercury__float__float_1_f_0(recursion_patterns__ElseCalls_22);
    }
#line 496 "recursion_patterns.m"
    {
#line 496 "recursion_patterns.m"
      recursion_patterns__V_39_39 = mercury__float__f_slash_2_f_0(recursion_patterns__V_40_40, recursion_patterns__CallsF_23);
    }
#line 496 "recursion_patterns.m"
    {
#line 496 "recursion_patterns.m"
      recursion_patterns__ElseProb_25 = measurement_units__probable_1_f_0(recursion_patterns__V_39_39);
    }
#line 755 "recursion_patterns.m"
    if ((recursion_patterns__ThenRecursionData0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "recursion_patterns.m"
      recursion_patterns__ThenRecursionData_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "recursion_patterns.m"
    else
#line 755 "recursion_patterns.m"
      {
#line 755 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeCtorInfo_18_64;
#line 755 "recursion_patterns.m"
        MR_Integer recursion_patterns__MaxLevel_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData0_16, (MR_Integer) 1)));
#line 755 "recursion_patterns.m"
        MR_Word recursion_patterns__Errors_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData0_16, (MR_Integer) 2)));
#line 755 "recursion_patterns.m"
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData0_16, (MR_Integer) 0)));
#line 755 "recursion_patterns.m"
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_55;
#line 755 "recursion_patterns.m"
        MR_Word recursion_patterns__V_56_56;

#line 756 "recursion_patterns.m"
        {
#line 756 "recursion_patterns.m"
          recursion_patterns__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 756 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_56_56, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 756 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_56_56, 1) = ((MR_Box) (recursion_patterns__ite_recursion_data_7_p_0_1));
#line 756 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 756 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_56_56, 3) = MR_box_float(recursion_patterns__ThenProb_24);
#line 756 "recursion_patterns.m"
        }
#line 7277 "recursion_patterns.c"
        recursion_patterns__TypeCtorInfo_18_64 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 756 "recursion_patterns.m"
        {
#line 756 "recursion_patterns.m"
          mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_64, recursion_patterns__TypeCtorInfo_18_64, recursion_patterns__V_56_56, recursion_patterns__STATE_VARIABLE_Recursions_0_54, &recursion_patterns__STATE_VARIABLE_Recursions_55);
        }
#line 755 "recursion_patterns.m"
        {
#line 755 "recursion_patterns.m"
          recursion_patterns__ThenRecursionData_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 755 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData_26, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_55));
#line 755 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData_26, 1) = ((MR_Box) (recursion_patterns__MaxLevel_52));
#line 755 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData_26, 2) = ((MR_Box) (recursion_patterns__Errors_53));
#line 755 "recursion_patterns.m"
        }
#line 755 "recursion_patterns.m"
      }
#line 755 "recursion_patterns.m"
    if ((recursion_patterns__ElseRecursionData0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "recursion_patterns.m"
      recursion_patterns__ElseRecursionData_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "recursion_patterns.m"
    else
#line 755 "recursion_patterns.m"
      {
#line 755 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeCtorInfo_18_79;
#line 755 "recursion_patterns.m"
        MR_Integer recursion_patterns__MaxLevel_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData0_17, (MR_Integer) 1)));
#line 755 "recursion_patterns.m"
        MR_Word recursion_patterns__Errors_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData0_17, (MR_Integer) 2)));
#line 755 "recursion_patterns.m"
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData0_17, (MR_Integer) 0)));
#line 755 "recursion_patterns.m"
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_70;
#line 755 "recursion_patterns.m"
        MR_Word recursion_patterns__V_71_71;

#line 756 "recursion_patterns.m"
        {
#line 756 "recursion_patterns.m"
          recursion_patterns__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 756 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 756 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 1) = ((MR_Box) (recursion_patterns__ite_recursion_data_7_p_0_2));
#line 756 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 756 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 3) = MR_box_float(recursion_patterns__ElseProb_25);
#line 756 "recursion_patterns.m"
        }
#line 7333 "recursion_patterns.c"
        recursion_patterns__TypeCtorInfo_18_79 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 756 "recursion_patterns.m"
        {
#line 756 "recursion_patterns.m"
          mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__V_71_71, recursion_patterns__STATE_VARIABLE_Recursions_0_69, &recursion_patterns__STATE_VARIABLE_Recursions_70);
        }
#line 755 "recursion_patterns.m"
        {
#line 755 "recursion_patterns.m"
          recursion_patterns__ElseRecursionData_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 755 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData_27, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_70));
#line 755 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData_27, 1) = ((MR_Box) (recursion_patterns__MaxLevel_67));
#line 755 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData_27, 2) = ((MR_Box) (recursion_patterns__Errors_68));
#line 755 "recursion_patterns.m"
        }
#line 755 "recursion_patterns.m"
      }
#line 506 "recursion_patterns.m"
    {
#line 506 "recursion_patterns.m"
      recursion_patterns__merge_recursion_data_after_branch_3_p_0(recursion_patterns__ThenRecursionData_26, recursion_patterns__ElseRecursionData_27, &recursion_patterns__STATE_VARIABLE_RecursionData_41_41);
    }
#line 508 "recursion_patterns.m"
    {
#line 508 "recursion_patterns.m"
      recursion_patterns__merge_recursion_data_sequence_3_p_0(recursion_patterns__CondRecursionData_15, recursion_patterns__STATE_VARIABLE_RecursionData_41_41, recursion_patterns__STATE_VARIABLE_RecursionData_28);
    }
#line 478 "recursion_patterns.m"
  }
#line 472 "recursion_patterns.m"
}

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_2(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 756 "recursion_patterns.m"
{
#line 756 "recursion_patterns.m"
  {
#line 756 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 756 "recursion_patterns.m"
    MR_Word recursion_patterns__conv2_HeadVar__4_15;

#line 756 "recursion_patterns.m"
    {
#line 756 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv2_HeadVar__4_15);
    }
#line 756 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv2_HeadVar__4_15));
#line 756 "recursion_patterns.m"
  }
#line 756 "recursion_patterns.m"
}

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_1(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 756 "recursion_patterns.m"
{
#line 756 "recursion_patterns.m"
  {
#line 756 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 756 "recursion_patterns.m"
    MR_Word recursion_patterns__conv1_HeadVar__4_15;

#line 756 "recursion_patterns.m"
    {
#line 756 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv1_HeadVar__4_15);
    }
#line 756 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv1_HeadVar__4_15));
#line 756 "recursion_patterns.m"
  }
#line 756 "recursion_patterns.m"
}

#line 414 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0(
#line 414 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_1,
#line 414 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_2,
#line 414 "recursion_patterns.m"
  MR_Integer recursion_patterns__DisjNum_3,
#line 414 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 414 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5)
#line 414 "recursion_patterns.m"
{
#line 418 "recursion_patterns.m"
  {
#line 418 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 418 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 418 "recursion_patterns.m"
      {
#line 418 "recursion_patterns.m"
        MR_Word recursion_patterns__V_44_44;
#line 418 "recursion_patterns.m"
        MR_Word recursion_patterns__V_45_45;
#line 418 "recursion_patterns.m"
        MR_Word recursion_patterns__V_46_46;
#line 418 "recursion_patterns.m"
        MR_Float recursion_patterns__V_47_47;
#line 418 "recursion_patterns.m"
        MR_Word recursion_patterns__V_49_49;

#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__V_47_47 = measurement_units__certain_0_f_0();
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_46_46, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_46_46, 1) = MR_box_float(recursion_patterns__V_47_47);
#line 789 "recursion_patterns.m"
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_45_45, 0) = ((MR_Box) ((MR_Integer) 0));
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_45_45, 1) = ((MR_Box) (recursion_patterns__V_46_46));
#line 789 "recursion_patterns.m"
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_44_44, 0) = ((MR_Box) (recursion_patterns__V_45_45));
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "recursion_patterns.m"
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__V_49_49 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          MR_Word base;
#line 789 "recursion_patterns.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 789 "recursion_patterns.m"
          *recursion_patterns__HeadVar__5_5 = base;
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_44_44));
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__V_49_49));
#line 789 "recursion_patterns.m"
        }
#line 418 "recursion_patterns.m"
      }
#line 418 "recursion_patterns.m"
    else
#line 420 "recursion_patterns.m"
      {
#line 420 "recursion_patterns.m"
        MR_Word recursion_patterns__Disj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
#line 420 "recursion_patterns.m"
        MR_Word recursion_patterns__Disjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
#line 420 "recursion_patterns.m"
        MR_Word recursion_patterns__DisjRecursionData_17;
#line 420 "recursion_patterns.m"
        MR_Word recursion_patterns__V_29_29;
#line 420 "recursion_patterns.m"
        MR_Word recursion_patterns__V_30_30;

#line 423 "recursion_patterns.m"
        {
#line 423 "recursion_patterns.m"
          recursion_patterns__V_30_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 423 "recursion_patterns.m"
          MR_hl_field(MR_mktag(2), recursion_patterns__V_30_30, 0) = ((MR_Box) (recursion_patterns__DisjNum_3));
#line 423 "recursion_patterns.m"
        }
#line 423 "recursion_patterns.m"
        {
#line 423 "recursion_patterns.m"
          recursion_patterns__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_29_29, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_2));
#line 423 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_29_29, 1) = ((MR_Box) (recursion_patterns__V_30_30));
#line 423 "recursion_patterns.m"
        }
#line 423 "recursion_patterns.m"
        {
#line 423 "recursion_patterns.m"
          recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_1, recursion_patterns__V_29_29, recursion_patterns__Disj_14, &recursion_patterns__DisjRecursionData_17);
        }
#line 430 "recursion_patterns.m"
        if ((recursion_patterns__DisjRecursionData_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 429 "recursion_patterns.m"
          *recursion_patterns__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 430 "recursion_patterns.m"
        else
#line 431 "recursion_patterns.m"
          {
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__TypeCtorInfo_18_99;
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__CoverageInfo_21;
#line 431 "recursion_patterns.m"
            MR_Float recursion_patterns__DisjSuccessProb_22;
#line 431 "recursion_patterns.m"
            MR_Float recursion_patterns__DisjFailureProb_23;
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__DisjsRecursionData0_24;
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__DisjsRecursionData_25;
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__Finish_27;
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__BranchRecursionData_28;
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 2)));
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Disj_14, (MR_Integer) 2)));
#line 431 "recursion_patterns.m"
            MR_Integer recursion_patterns__V_33_33;
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__V_79_79;
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__V_80_80;
#line 431 "recursion_patterns.m"
            MR_Float recursion_patterns__V_81_81;
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__Errors_88;
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_89;
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__STATE_VARIABLE_Recursions_90;
#line 431 "recursion_patterns.m"
            MR_Word recursion_patterns__V_91_91;
#line 432 "recursion_patterns.m"
            MR_Word recursion_patterns__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 0)));
#line 432 "recursion_patterns.m"
            MR_Word recursion_patterns__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 1)));
#line 432 "recursion_patterns.m"
            MR_Word recursion_patterns__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Disj_14, (MR_Integer) 0)));
#line 432 "recursion_patterns.m"
            MR_Word recursion_patterns__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Disj_14, (MR_Integer) 1)));
#line 432 "recursion_patterns.m"
            MR_Box recursion_patterns__conv0_CoverageInfo_21;
#line 468 "recursion_patterns.m"
            MR_Integer recursion_patterns__Before_53;
#line 468 "recursion_patterns.m"
            MR_Integer recursion_patterns__After_54;

#line 432 "recursion_patterns.m"
            {
#line 432 "recursion_patterns.m"
              recursion_patterns__conv0_CoverageInfo_21 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, recursion_patterns__V_31_31, recursion_patterns__V_32_32);
            }
#line 432 "recursion_patterns.m"
            recursion_patterns__CoverageInfo_21 = ((MR_Word) recursion_patterns__conv0_CoverageInfo_21);
#line 461 "recursion_patterns.m"
            {
#line 461 "recursion_patterns.m"
              recursion_patterns__succeeded = coverage__get_coverage_before_and_after_3_p_0(recursion_patterns__CoverageInfo_21, &recursion_patterns__Before_53, &recursion_patterns__After_54);
            }
#line 468 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 465 "recursion_patterns.m"
              {
#line 462 "recursion_patterns.m"
                recursion_patterns__succeeded = (recursion_patterns__After_54 > recursion_patterns__Before_53);
#line 465 "recursion_patterns.m"
                if (recursion_patterns__succeeded)
#line 464 "recursion_patterns.m"
                  {
#line 464 "recursion_patterns.m"
                    recursion_patterns__DisjSuccessProb_22 = measurement_units__certain_0_f_0();
                  }
#line 465 "recursion_patterns.m"
                else
#line 466 "recursion_patterns.m"
                  {
#line 466 "recursion_patterns.m"
                    MR_Float recursion_patterns__V_55_55;
#line 466 "recursion_patterns.m"
                    MR_Float recursion_patterns__V_56_56;
#line 466 "recursion_patterns.m"
                    MR_Float recursion_patterns__V_57_57;

#line 466 "recursion_patterns.m"
                    {
#line 466 "recursion_patterns.m"
                      recursion_patterns__V_56_56 = mercury__float__float_1_f_0(recursion_patterns__After_54);
                    }
#line 466 "recursion_patterns.m"
                    {
#line 466 "recursion_patterns.m"
                      recursion_patterns__V_57_57 = mercury__float__float_1_f_0(recursion_patterns__Before_53);
                    }
#line 466 "recursion_patterns.m"
                    {
#line 466 "recursion_patterns.m"
                      recursion_patterns__V_55_55 = mercury__float__f_slash_2_f_0(recursion_patterns__V_56_56, recursion_patterns__V_57_57);
                    }
#line 466 "recursion_patterns.m"
                    {
#line 466 "recursion_patterns.m"
                      recursion_patterns__DisjSuccessProb_22 = measurement_units__probable_1_f_0(recursion_patterns__V_55_55);
                    }
#line 466 "recursion_patterns.m"
                  }
#line 465 "recursion_patterns.m"
              }
#line 468 "recursion_patterns.m"
            else
#line 469 "recursion_patterns.m"
              {
#line 469 "recursion_patterns.m"
                {
#line 469 "recursion_patterns.m"
                  mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.success_probability_from_coverage\'/2", (MR_String) "expected complete coverage information");
#line 469 "recursion_patterns.m"
                  return;
                }
#line 469 "recursion_patterns.m"
              }
#line 436 "recursion_patterns.m"
            {
#line 436 "recursion_patterns.m"
              recursion_patterns__DisjFailureProb_23 = measurement_units__not_probability_1_f_0(recursion_patterns__DisjSuccessProb_22);
            }
#line 440 "recursion_patterns.m"
            recursion_patterns__V_33_33 = (recursion_patterns__DisjNum_3 + (MR_Integer) 1);
#line 440 "recursion_patterns.m"
            {
#line 440 "recursion_patterns.m"
              recursion_patterns__disj_recursion_data_5_p_0(recursion_patterns__Info_1, recursion_patterns__RevGoalPath_2, recursion_patterns__V_33_33, recursion_patterns__Disjs_15, &recursion_patterns__DisjsRecursionData0_24);
            }
#line 755 "recursion_patterns.m"
            if ((recursion_patterns__DisjsRecursionData0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "recursion_patterns.m"
              recursion_patterns__DisjsRecursionData_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "recursion_patterns.m"
            else
#line 755 "recursion_patterns.m"
              {
#line 755 "recursion_patterns.m"
                MR_Word recursion_patterns__TypeCtorInfo_18_75;
#line 755 "recursion_patterns.m"
                MR_Integer recursion_patterns__MaxLevel_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData0_24, (MR_Integer) 1)));
#line 755 "recursion_patterns.m"
                MR_Word recursion_patterns__Errors_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData0_24, (MR_Integer) 2)));
#line 755 "recursion_patterns.m"
                MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData0_24, (MR_Integer) 0)));
#line 755 "recursion_patterns.m"
                MR_Word recursion_patterns__STATE_VARIABLE_Recursions_66;
#line 755 "recursion_patterns.m"
                MR_Word recursion_patterns__V_67_67;

#line 756 "recursion_patterns.m"
                {
#line 756 "recursion_patterns.m"
                  recursion_patterns__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 756 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_67_67, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 756 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_67_67, 1) = ((MR_Box) (recursion_patterns__disj_recursion_data_5_p_0_1));
#line 756 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 756 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_67_67, 3) = MR_box_float(recursion_patterns__DisjFailureProb_23);
#line 756 "recursion_patterns.m"
                }
#line 7743 "recursion_patterns.c"
                recursion_patterns__TypeCtorInfo_18_75 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 756 "recursion_patterns.m"
                {
#line 756 "recursion_patterns.m"
                  mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_75, recursion_patterns__TypeCtorInfo_18_75, recursion_patterns__V_67_67, recursion_patterns__STATE_VARIABLE_Recursions_0_65, &recursion_patterns__STATE_VARIABLE_Recursions_66);
                }
#line 755 "recursion_patterns.m"
                {
#line 755 "recursion_patterns.m"
                  recursion_patterns__DisjsRecursionData_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 755 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData_25, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_66));
#line 755 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData_25, 1) = ((MR_Box) (recursion_patterns__MaxLevel_63));
#line 755 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData_25, 2) = ((MR_Box) (recursion_patterns__Errors_64));
#line 755 "recursion_patterns.m"
                }
#line 755 "recursion_patterns.m"
              }
#line 789 "recursion_patterns.m"
            {
#line 789 "recursion_patterns.m"
              recursion_patterns__V_81_81 = measurement_units__certain_0_f_0();
            }
#line 789 "recursion_patterns.m"
            {
#line 789 "recursion_patterns.m"
              recursion_patterns__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_80_80, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 789 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_80_80, 1) = MR_box_float(recursion_patterns__V_81_81);
#line 789 "recursion_patterns.m"
            }
#line 789 "recursion_patterns.m"
            {
#line 789 "recursion_patterns.m"
              recursion_patterns__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_79_79, 0) = ((MR_Box) ((MR_Integer) 0));
#line 789 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_79_79, 1) = ((MR_Box) (recursion_patterns__V_80_80));
#line 789 "recursion_patterns.m"
            }
#line 789 "recursion_patterns.m"
            {
#line 789 "recursion_patterns.m"
              recursion_patterns__STATE_VARIABLE_Recursions_0_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_89, 0) = ((MR_Box) (recursion_patterns__V_79_79));
#line 789 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "recursion_patterns.m"
            }
#line 789 "recursion_patterns.m"
            {
#line 789 "recursion_patterns.m"
              recursion_patterns__Errors_88 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
            }
#line 756 "recursion_patterns.m"
            {
#line 756 "recursion_patterns.m"
              recursion_patterns__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 756 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_91_91, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 756 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_91_91, 1) = ((MR_Box) (recursion_patterns__disj_recursion_data_5_p_0_2));
#line 756 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 756 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_91_91, 3) = MR_box_float(recursion_patterns__DisjSuccessProb_22);
#line 756 "recursion_patterns.m"
            }
#line 7818 "recursion_patterns.c"
            recursion_patterns__TypeCtorInfo_18_99 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 756 "recursion_patterns.m"
            {
#line 756 "recursion_patterns.m"
              mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_99, recursion_patterns__TypeCtorInfo_18_99, recursion_patterns__V_91_91, recursion_patterns__STATE_VARIABLE_Recursions_0_89, &recursion_patterns__STATE_VARIABLE_Recursions_90);
            }
#line 755 "recursion_patterns.m"
            {
#line 755 "recursion_patterns.m"
              recursion_patterns__Finish_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 755 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__Finish_27, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_90));
#line 755 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__Finish_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 755 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__Finish_27, 2) = ((MR_Box) (recursion_patterns__Errors_88));
#line 755 "recursion_patterns.m"
            }
#line 451 "recursion_patterns.m"
            {
#line 451 "recursion_patterns.m"
              recursion_patterns__merge_recursion_data_after_branch_3_p_0(recursion_patterns__Finish_27, recursion_patterns__DisjsRecursionData_25, &recursion_patterns__BranchRecursionData_28);
            }
#line 453 "recursion_patterns.m"
            {
#line 453 "recursion_patterns.m"
              recursion_patterns__merge_recursion_data_sequence_3_p_0(recursion_patterns__DisjRecursionData_17, recursion_patterns__BranchRecursionData_28, recursion_patterns__HeadVar__5_5);
            }
#line 431 "recursion_patterns.m"
          }
#line 420 "recursion_patterns.m"
      }
#line 418 "recursion_patterns.m"
  }
#line 414 "recursion_patterns.m"
}

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_2(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 756 "recursion_patterns.m"
{
#line 756 "recursion_patterns.m"
  {
#line 756 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 756 "recursion_patterns.m"
    MR_Word recursion_patterns__conv2_HeadVar__4_15;

#line 756 "recursion_patterns.m"
    {
#line 756 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv2_HeadVar__4_15);
    }
#line 756 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv2_HeadVar__4_15));
#line 756 "recursion_patterns.m"
  }
#line 756 "recursion_patterns.m"
}

#line 756 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_1(
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 756 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 756 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 756 "recursion_patterns.m"
{
#line 756 "recursion_patterns.m"
  {
#line 756 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 756 "recursion_patterns.m"
    MR_Word recursion_patterns__conv1_HeadVar__4_15;

#line 756 "recursion_patterns.m"
    {
#line 756 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__756__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv1_HeadVar__4_15);
    }
#line 756 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv1_HeadVar__4_15));
#line 756 "recursion_patterns.m"
  }
#line 756 "recursion_patterns.m"
}

#line 365 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0(
#line 365 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_1,
#line 365 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_2,
#line 365 "recursion_patterns.m"
  MR_Integer recursion_patterns__ConjNum_3,
#line 365 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 365 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5)
#line 365 "recursion_patterns.m"
{
#line 369 "recursion_patterns.m"
  {
#line 369 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 369 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 369 "recursion_patterns.m"
      {
#line 369 "recursion_patterns.m"
        MR_Word recursion_patterns__V_48_48;
#line 369 "recursion_patterns.m"
        MR_Word recursion_patterns__V_49_49;
#line 369 "recursion_patterns.m"
        MR_Word recursion_patterns__V_50_50;
#line 369 "recursion_patterns.m"
        MR_Float recursion_patterns__V_51_51;
#line 369 "recursion_patterns.m"
        MR_Word recursion_patterns__V_53_53;

#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__V_51_51 = measurement_units__certain_0_f_0();
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_50_50, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_50_50, 1) = MR_box_float(recursion_patterns__V_51_51);
#line 789 "recursion_patterns.m"
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_49_49, 0) = ((MR_Box) ((MR_Integer) 0));
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_49_49, 1) = ((MR_Box) (recursion_patterns__V_50_50));
#line 789 "recursion_patterns.m"
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_48_48, 0) = ((MR_Box) (recursion_patterns__V_49_49));
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "recursion_patterns.m"
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          recursion_patterns__V_53_53 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
        }
#line 789 "recursion_patterns.m"
        {
#line 789 "recursion_patterns.m"
          MR_Word base;
#line 789 "recursion_patterns.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 789 "recursion_patterns.m"
          *recursion_patterns__HeadVar__5_5 = base;
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_48_48));
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 789 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__V_53_53));
#line 789 "recursion_patterns.m"
        }
#line 369 "recursion_patterns.m"
      }
#line 369 "recursion_patterns.m"
    else
#line 373 "recursion_patterns.m"
      {
#line 373 "recursion_patterns.m"
        MR_Word recursion_patterns__Conj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
#line 373 "recursion_patterns.m"
        MR_Word recursion_patterns__Conjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
#line 373 "recursion_patterns.m"
        MR_Word recursion_patterns__ConjRecursionData_17;
#line 373 "recursion_patterns.m"
        MR_Word recursion_patterns__V_30_30;
#line 373 "recursion_patterns.m"
        MR_Word recursion_patterns__V_31_31;

#line 374 "recursion_patterns.m"
        {
#line 374 "recursion_patterns.m"
          recursion_patterns__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 374 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_31_31, 0) = ((MR_Box) (recursion_patterns__ConjNum_3));
#line 374 "recursion_patterns.m"
        }
#line 374 "recursion_patterns.m"
        {
#line 374 "recursion_patterns.m"
          recursion_patterns__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_30_30, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_2));
#line 374 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_30_30, 1) = ((MR_Box) (recursion_patterns__V_31_31));
#line 374 "recursion_patterns.m"
        }
#line 374 "recursion_patterns.m"
        {
#line 374 "recursion_patterns.m"
          recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_1, recursion_patterns__V_30_30, recursion_patterns__Conj_14, &recursion_patterns__ConjRecursionData_17);
        }
#line 382 "recursion_patterns.m"
        if ((recursion_patterns__ConjRecursionData_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "recursion_patterns.m"
          *recursion_patterns__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "recursion_patterns.m"
        else
#line 383 "recursion_patterns.m"
          {
#line 383 "recursion_patterns.m"
            MR_Word recursion_patterns__ConjsRecursionData0_21;
#line 383 "recursion_patterns.m"
            MR_Word recursion_patterns__CanFail_22;
#line 383 "recursion_patterns.m"
            MR_Integer recursion_patterns__V_32_32 = (recursion_patterns__ConjNum_3 + (MR_Integer) 1);
#line 383 "recursion_patterns.m"
            MR_Word recursion_patterns__V_34_34;
#line 387 "recursion_patterns.m"
            MR_Word recursion_patterns__V_39_39;
#line 387 "recursion_patterns.m"
            MR_Word recursion_patterns__V_40_40;

#line 385 "recursion_patterns.m"
            {
#line 385 "recursion_patterns.m"
              recursion_patterns__conj_recursion_data_5_p_0(recursion_patterns__Info_1, recursion_patterns__RevGoalPath_2, recursion_patterns__V_32_32, recursion_patterns__Conjs_15, &recursion_patterns__ConjsRecursionData0_21);
            }
#line 387 "recursion_patterns.m"
            recursion_patterns__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 0)));
#line 387 "recursion_patterns.m"
            recursion_patterns__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 1)));
#line 387 "recursion_patterns.m"
            recursion_patterns__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 2)));
#line 387 "recursion_patterns.m"
            {
#line 387 "recursion_patterns.m"
              recursion_patterns__CanFail_22 = mdbcomp__program_representation__detism_get_can_fail_1_f_0(recursion_patterns__V_34_34);
            }
#line 392 "recursion_patterns.m"
#line 392 "recursion_patterns.m"
            switch (recursion_patterns__CanFail_22) {
#line 392 "recursion_patterns.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 392 "recursion_patterns.m"
              case (MR_Integer) 0:
#line 393 "recursion_patterns.m"
                {
#line 393 "recursion_patterns.m"
                  MR_Word recursion_patterns__TypeCtorInfo_18_103;
#line 393 "recursion_patterns.m"
                  MR_Word recursion_patterns__CoverageInfo_23;
#line 393 "recursion_patterns.m"
                  MR_Float recursion_patterns__ConjSuccessProb_24;
#line 393 "recursion_patterns.m"
                  MR_Word recursion_patterns__ConjsRecursionData_25;
#line 393 "recursion_patterns.m"
                  MR_Float recursion_patterns__ConjFailureProb_26;
#line 393 "recursion_patterns.m"
                  MR_Word recursion_patterns__Failure_28;
#line 393 "recursion_patterns.m"
                  MR_Word recursion_patterns__BranchRecursionData_29;
#line 393 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 2)));
#line 393 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 2)));
#line 393 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_83_83;
#line 393 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_84_84;
#line 393 "recursion_patterns.m"
                  MR_Float recursion_patterns__V_85_85;
#line 393 "recursion_patterns.m"
                  MR_Word recursion_patterns__Errors_92;
#line 393 "recursion_patterns.m"
                  MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_93;
#line 393 "recursion_patterns.m"
                  MR_Word recursion_patterns__STATE_VARIABLE_Recursions_94;
#line 393 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_95_95;
#line 398 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 0)));
#line 398 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 1)));
#line 398 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 0)));
#line 398 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 1)));
#line 398 "recursion_patterns.m"
                  MR_Box recursion_patterns__conv0_CoverageInfo_23;
#line 468 "recursion_patterns.m"
                  MR_Integer recursion_patterns__Before_57;
#line 468 "recursion_patterns.m"
                  MR_Integer recursion_patterns__After_58;

#line 398 "recursion_patterns.m"
                  {
#line 398 "recursion_patterns.m"
                    recursion_patterns__conv0_CoverageInfo_23 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, recursion_patterns__V_35_35, recursion_patterns__V_36_36);
                  }
#line 398 "recursion_patterns.m"
                  recursion_patterns__CoverageInfo_23 = ((MR_Word) recursion_patterns__conv0_CoverageInfo_23);
#line 461 "recursion_patterns.m"
                  {
#line 461 "recursion_patterns.m"
                    recursion_patterns__succeeded = coverage__get_coverage_before_and_after_3_p_0(recursion_patterns__CoverageInfo_23, &recursion_patterns__Before_57, &recursion_patterns__After_58);
                  }
#line 468 "recursion_patterns.m"
                  if (recursion_patterns__succeeded)
#line 465 "recursion_patterns.m"
                    {
#line 462 "recursion_patterns.m"
                      recursion_patterns__succeeded = (recursion_patterns__After_58 > recursion_patterns__Before_57);
#line 465 "recursion_patterns.m"
                      if (recursion_patterns__succeeded)
#line 464 "recursion_patterns.m"
                        {
#line 464 "recursion_patterns.m"
                          recursion_patterns__ConjSuccessProb_24 = measurement_units__certain_0_f_0();
                        }
#line 465 "recursion_patterns.m"
                      else
#line 466 "recursion_patterns.m"
                        {
#line 466 "recursion_patterns.m"
                          MR_Float recursion_patterns__V_59_59;
#line 466 "recursion_patterns.m"
                          MR_Float recursion_patterns__V_60_60;
#line 466 "recursion_patterns.m"
                          MR_Float recursion_patterns__V_61_61;

#line 466 "recursion_patterns.m"
                          {
#line 466 "recursion_patterns.m"
                            recursion_patterns__V_60_60 = mercury__float__float_1_f_0(recursion_patterns__After_58);
                          }
#line 466 "recursion_patterns.m"
                          {
#line 466 "recursion_patterns.m"
                            recursion_patterns__V_61_61 = mercury__float__float_1_f_0(recursion_patterns__Before_57);
                          }
#line 466 "recursion_patterns.m"
                          {
#line 466 "recursion_patterns.m"
                            recursion_patterns__V_59_59 = mercury__float__f_slash_2_f_0(recursion_patterns__V_60_60, recursion_patterns__V_61_61);
                          }
#line 466 "recursion_patterns.m"
                          {
#line 466 "recursion_patterns.m"
                            recursion_patterns__ConjSuccessProb_24 = measurement_units__probable_1_f_0(recursion_patterns__V_59_59);
                          }
#line 466 "recursion_patterns.m"
                        }
#line 465 "recursion_patterns.m"
                    }
#line 468 "recursion_patterns.m"
                  else
#line 469 "recursion_patterns.m"
                    {
#line 469 "recursion_patterns.m"
                      {
#line 469 "recursion_patterns.m"
                        mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.success_probability_from_coverage\'/2", (MR_String) "expected complete coverage information");
#line 469 "recursion_patterns.m"
                        return;
                      }
#line 469 "recursion_patterns.m"
                    }
#line 755 "recursion_patterns.m"
                  if ((recursion_patterns__ConjsRecursionData0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "recursion_patterns.m"
                    recursion_patterns__ConjsRecursionData_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 755 "recursion_patterns.m"
                  else
#line 755 "recursion_patterns.m"
                    {
#line 755 "recursion_patterns.m"
                      MR_Word recursion_patterns__TypeCtorInfo_18_79;
#line 755 "recursion_patterns.m"
                      MR_Integer recursion_patterns__MaxLevel_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData0_21, (MR_Integer) 1)));
#line 755 "recursion_patterns.m"
                      MR_Word recursion_patterns__Errors_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData0_21, (MR_Integer) 2)));
#line 755 "recursion_patterns.m"
                      MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData0_21, (MR_Integer) 0)));
#line 755 "recursion_patterns.m"
                      MR_Word recursion_patterns__STATE_VARIABLE_Recursions_70;
#line 755 "recursion_patterns.m"
                      MR_Word recursion_patterns__V_71_71;

#line 756 "recursion_patterns.m"
                      {
#line 756 "recursion_patterns.m"
                        recursion_patterns__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 756 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 756 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 1) = ((MR_Box) (recursion_patterns__conj_recursion_data_5_p_0_1));
#line 756 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 756 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 3) = MR_box_float(recursion_patterns__ConjSuccessProb_24);
#line 756 "recursion_patterns.m"
                      }
#line 8252 "recursion_patterns.c"
                      recursion_patterns__TypeCtorInfo_18_79 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 756 "recursion_patterns.m"
                      {
#line 756 "recursion_patterns.m"
                        mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__V_71_71, recursion_patterns__STATE_VARIABLE_Recursions_0_69, &recursion_patterns__STATE_VARIABLE_Recursions_70);
                      }
#line 755 "recursion_patterns.m"
                      {
#line 755 "recursion_patterns.m"
                        recursion_patterns__ConjsRecursionData_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 755 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData_25, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_70));
#line 755 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData_25, 1) = ((MR_Box) (recursion_patterns__MaxLevel_67));
#line 755 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData_25, 2) = ((MR_Box) (recursion_patterns__Errors_68));
#line 755 "recursion_patterns.m"
                      }
#line 755 "recursion_patterns.m"
                    }
#line 404 "recursion_patterns.m"
                  {
#line 404 "recursion_patterns.m"
                    recursion_patterns__ConjFailureProb_26 = measurement_units__not_probability_1_f_0(recursion_patterns__ConjSuccessProb_24);
                  }
#line 789 "recursion_patterns.m"
                  {
#line 789 "recursion_patterns.m"
                    recursion_patterns__V_85_85 = measurement_units__certain_0_f_0();
                  }
#line 789 "recursion_patterns.m"
                  {
#line 789 "recursion_patterns.m"
                    recursion_patterns__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_84_84, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 789 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_84_84, 1) = MR_box_float(recursion_patterns__V_85_85);
#line 789 "recursion_patterns.m"
                  }
#line 789 "recursion_patterns.m"
                  {
#line 789 "recursion_patterns.m"
                    recursion_patterns__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 789 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_83_83, 0) = ((MR_Box) ((MR_Integer) 0));
#line 789 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_83_83, 1) = ((MR_Box) (recursion_patterns__V_84_84));
#line 789 "recursion_patterns.m"
                  }
#line 789 "recursion_patterns.m"
                  {
#line 789 "recursion_patterns.m"
                    recursion_patterns__STATE_VARIABLE_Recursions_0_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_93, 0) = ((MR_Box) (recursion_patterns__V_83_83));
#line 789 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "recursion_patterns.m"
                  }
#line 789 "recursion_patterns.m"
                  {
#line 789 "recursion_patterns.m"
                    recursion_patterns__Errors_92 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
                  }
#line 756 "recursion_patterns.m"
                  {
#line 756 "recursion_patterns.m"
                    recursion_patterns__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 756 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_95_95, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 756 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_95_95, 1) = ((MR_Box) (recursion_patterns__conj_recursion_data_5_p_0_2));
#line 756 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 756 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_95_95, 3) = MR_box_float(recursion_patterns__ConjFailureProb_26);
#line 756 "recursion_patterns.m"
                  }
#line 8332 "recursion_patterns.c"
                  recursion_patterns__TypeCtorInfo_18_103 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 756 "recursion_patterns.m"
                  {
#line 756 "recursion_patterns.m"
                    mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_103, recursion_patterns__TypeCtorInfo_18_103, recursion_patterns__V_95_95, recursion_patterns__STATE_VARIABLE_Recursions_0_93, &recursion_patterns__STATE_VARIABLE_Recursions_94);
                  }
#line 755 "recursion_patterns.m"
                  {
#line 755 "recursion_patterns.m"
                    recursion_patterns__Failure_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 755 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(1), recursion_patterns__Failure_28, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_94));
#line 755 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(1), recursion_patterns__Failure_28, 1) = ((MR_Box) ((MR_Integer) 0));
#line 755 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(1), recursion_patterns__Failure_28, 2) = ((MR_Box) (recursion_patterns__Errors_92));
#line 755 "recursion_patterns.m"
                  }
#line 407 "recursion_patterns.m"
                  {
#line 407 "recursion_patterns.m"
                    recursion_patterns__merge_recursion_data_after_branch_3_p_0(recursion_patterns__ConjsRecursionData_25, recursion_patterns__Failure_28, &recursion_patterns__BranchRecursionData_29);
                  }
#line 409 "recursion_patterns.m"
                  {
#line 409 "recursion_patterns.m"
                    recursion_patterns__merge_recursion_data_sequence_3_p_0(recursion_patterns__ConjRecursionData_17, recursion_patterns__BranchRecursionData_29, recursion_patterns__HeadVar__5_5);
                  }
#line 393 "recursion_patterns.m"
                }
#line 392 "recursion_patterns.m"
                break;
#line 392 "recursion_patterns.m"
              case (MR_Integer) 1:
#line 390 "recursion_patterns.m"
                {
#line 390 "recursion_patterns.m"
                  recursion_patterns__merge_recursion_data_sequence_3_p_0(recursion_patterns__ConjRecursionData_17, recursion_patterns__ConjsRecursionData0_21, recursion_patterns__HeadVar__5_5);
                }
#line 392 "recursion_patterns.m"
                break;
#line 392 "recursion_patterns.m"
            }
#line 383 "recursion_patterns.m"
          }
#line 373 "recursion_patterns.m"
      }
#line 369 "recursion_patterns.m"
  }
#line 365 "recursion_patterns.m"
}

#line 302 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__goal_recursion_data_4_p_0(
#line 302 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_5,
#line 302 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_6,
#line 302 "recursion_patterns.m"
  MR_Word recursion_patterns__GoalRep_7,
#line 302 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_RecursionData_30)
#line 302 "recursion_patterns.m"
{
#line 306 "recursion_patterns.m"
  {
#line 306 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 306 "recursion_patterns.m"
    MR_Word recursion_patterns__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__GoalRep_7, (MR_Integer) 0)));
#line 306 "recursion_patterns.m"
    MR_Word recursion_patterns__Detism_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__GoalRep_7, (MR_Integer) 1)));
#line 306 "recursion_patterns.m"
    MR_Word recursion_patterns__GoalId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__GoalRep_7, (MR_Integer) 2)));
#line 306 "recursion_patterns.m"
    MR_Word recursion_patterns__CoverageInfo_12;
#line 306 "recursion_patterns.m"
    MR_Integer recursion_patterns__Calls_14;
#line 306 "recursion_patterns.m"
    MR_Word recursion_patterns__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 2)));
#line 306 "recursion_patterns.m"
    MR_Word recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 308 "recursion_patterns.m"
    MR_Word recursion_patterns__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 0)));
#line 308 "recursion_patterns.m"
    MR_Word recursion_patterns__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 1)));
#line 308 "recursion_patterns.m"
    MR_Box recursion_patterns__conv0_CoverageInfo_12;
#line 311 "recursion_patterns.m"
    MR_Integer recursion_patterns__CallsPrime_13;

#line 308 "recursion_patterns.m"
    {
#line 308 "recursion_patterns.m"
      recursion_patterns__conv0_CoverageInfo_12 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, recursion_patterns__V_31_31, recursion_patterns__GoalId_11);
    }
#line 308 "recursion_patterns.m"
    recursion_patterns__CoverageInfo_12 = ((MR_Word) recursion_patterns__conv0_CoverageInfo_12);
#line 309 "recursion_patterns.m"
    {
#line 309 "recursion_patterns.m"
      recursion_patterns__succeeded = coverage__get_coverage_before_2_p_0(recursion_patterns__CoverageInfo_12, &recursion_patterns__CallsPrime_13);
    }
#line 311 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 310 "recursion_patterns.m"
      recursion_patterns__Calls_14 = recursion_patterns__CallsPrime_13;
#line 311 "recursion_patterns.m"
    else
#line 312 "recursion_patterns.m"
      {
#line 312 "recursion_patterns.m"
        {
#line 312 "recursion_patterns.m"
          mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.goal_recursion_data\'/4", (MR_String) "couldn\'t retrieve coverage information");
#line 312 "recursion_patterns.m"
          return;
        }
#line 312 "recursion_patterns.m"
      }
#line 314 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__Calls_14 == (MR_Integer) 0);
#line 316 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 315 "recursion_patterns.m"
      recursion_patterns__STATE_VARIABLE_RecursionData_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 316 "recursion_patterns.m"
    else
#line 321 "recursion_patterns.m"
#line 321 "recursion_patterns.m"
      switch (MR_tag((MR_Word) recursion_patterns__GoalExpr_9)) {
#line 321 "recursion_patterns.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 321 "recursion_patterns.m"
        case (MR_Integer) 0:
#line 318 "recursion_patterns.m"
          {
#line 318 "recursion_patterns.m"
            MR_Word recursion_patterns__Conjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__GoalExpr_9, (MR_Integer) 0)));

#line 319 "recursion_patterns.m"
            {
#line 319 "recursion_patterns.m"
              recursion_patterns__conj_recursion_data_5_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, (MR_Integer) 1, recursion_patterns__Conjs_15, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
            }
#line 318 "recursion_patterns.m"
          }
#line 321 "recursion_patterns.m"
          break;
#line 321 "recursion_patterns.m"
        case (MR_Integer) 1:
#line 322 "recursion_patterns.m"
          {
#line 322 "recursion_patterns.m"
            MR_Word recursion_patterns__Disjs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__GoalExpr_9, (MR_Integer) 0)));

#line 323 "recursion_patterns.m"
            {
#line 323 "recursion_patterns.m"
              recursion_patterns__disj_recursion_data_5_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, (MR_Integer) 1, recursion_patterns__Disjs_16, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
            }
#line 322 "recursion_patterns.m"
          }
#line 321 "recursion_patterns.m"
          break;
#line 321 "recursion_patterns.m"
        case (MR_Integer) 2:
#line 326 "recursion_patterns.m"
          {
#line 326 "recursion_patterns.m"
            MR_Word recursion_patterns__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), recursion_patterns__GoalExpr_9, (MR_Integer) 2)));
#line 326 "recursion_patterns.m"
            MR_Float recursion_patterns__V_41_41;
#line 326 "recursion_patterns.m"
            MR_Integer recursion_patterns__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), recursion_patterns__GoalExpr_9, (MR_Integer) 0)));
#line 326 "recursion_patterns.m"
            MR_Word recursion_patterns__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));

#line 328 "recursion_patterns.m"
            {
#line 328 "recursion_patterns.m"
              recursion_patterns__V_41_41 = mercury__float__float_1_f_0(recursion_patterns__Calls_14);
            }
#line 327 "recursion_patterns.m"
            {
#line 327 "recursion_patterns.m"
              recursion_patterns__switch_recursion_data_7_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, (MR_Integer) 1, recursion_patterns__Cases_19, recursion_patterns__V_41_41, recursion_patterns__Calls_14, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
            }
#line 326 "recursion_patterns.m"
          }
#line 321 "recursion_patterns.m"
          break;
#line 321 "recursion_patterns.m"
        case (MR_Integer) 3:
#line 321 "recursion_patterns.m"
#line 321 "recursion_patterns.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 0)))) {
#line 321 "recursion_patterns.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 321 "recursion_patterns.m"
            case (MR_Integer) 0:
#line 330 "recursion_patterns.m"
              {
#line 330 "recursion_patterns.m"
                MR_Word recursion_patterns__Cond_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));
#line 330 "recursion_patterns.m"
                MR_Word recursion_patterns__Then_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 2)));
#line 330 "recursion_patterns.m"
                MR_Word recursion_patterns__Else_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 3)));

#line 331 "recursion_patterns.m"
                {
#line 331 "recursion_patterns.m"
                  recursion_patterns__ite_recursion_data_7_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, recursion_patterns__Cond_20, recursion_patterns__Then_21, recursion_patterns__Else_22, recursion_patterns__Calls_14, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
                }
#line 330 "recursion_patterns.m"
              }
#line 321 "recursion_patterns.m"
              break;
#line 321 "recursion_patterns.m"
            case (MR_Integer) 1:
#line 340 "recursion_patterns.m"
              {
#line 340 "recursion_patterns.m"
                MR_Word recursion_patterns__SubGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));
#line 340 "recursion_patterns.m"
                MR_Word recursion_patterns__V_37_37;

#line 341 "recursion_patterns.m"
                {
#line 341 "recursion_patterns.m"
                  recursion_patterns__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_37_37, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_6));
#line 341 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 341 "recursion_patterns.m"
                }
#line 341 "recursion_patterns.m"
                {
#line 341 "recursion_patterns.m"
                  recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_5, recursion_patterns__V_37_37, recursion_patterns__SubGoal_23, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
                }
#line 340 "recursion_patterns.m"
              }
#line 321 "recursion_patterns.m"
              break;
#line 321 "recursion_patterns.m"
            case (MR_Integer) 2:
#line 340 "recursion_patterns.m"
              {
#line 340 "recursion_patterns.m"
                MR_Word recursion_patterns__MaybeCut_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 2)));
#line 340 "recursion_patterns.m"
                MR_Word recursion_patterns__SubGoal_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));
#line 340 "recursion_patterns.m"
                MR_Word recursion_patterns__GoalPathStep_53;
#line 340 "recursion_patterns.m"
                MR_Word recursion_patterns__V_54_54;

#line 339 "recursion_patterns.m"
                {
#line 339 "recursion_patterns.m"
                  recursion_patterns__GoalPathStep_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(3), recursion_patterns__GoalPathStep_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 339 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(3), recursion_patterns__GoalPathStep_53, 1) = ((MR_Box) (recursion_patterns__MaybeCut_25));
#line 339 "recursion_patterns.m"
                }
#line 341 "recursion_patterns.m"
                {
#line 341 "recursion_patterns.m"
                  recursion_patterns__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_54_54, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_6));
#line 341 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_54_54, 1) = ((MR_Box) (recursion_patterns__GoalPathStep_53));
#line 341 "recursion_patterns.m"
                }
#line 341 "recursion_patterns.m"
                {
#line 341 "recursion_patterns.m"
                  recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_5, recursion_patterns__V_54_54, recursion_patterns__SubGoal_52, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
                }
#line 340 "recursion_patterns.m"
              }
#line 321 "recursion_patterns.m"
              break;
#line 321 "recursion_patterns.m"
            case (MR_Integer) 3:
#line 344 "recursion_patterns.m"
              {
#line 344 "recursion_patterns.m"
                MR_Word recursion_patterns__AtomicGoalRep_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 4)));
#line 344 "recursion_patterns.m"
                MR_String recursion_patterns__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));
#line 344 "recursion_patterns.m"
                MR_Integer recursion_patterns__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 2)));
#line 344 "recursion_patterns.m"
                MR_Word recursion_patterns__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 3)));

#line 345 "recursion_patterns.m"
                {
#line 345 "recursion_patterns.m"
                  recursion_patterns__atomic_goal_recursion_data_4_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, recursion_patterns__AtomicGoalRep_29, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
                }
#line 344 "recursion_patterns.m"
              }
#line 321 "recursion_patterns.m"
              break;
#line 321 "recursion_patterns.m"
          }
#line 321 "recursion_patterns.m"
          break;
#line 321 "recursion_patterns.m"
      }
#line 357 "recursion_patterns.m"
#line 357 "recursion_patterns.m"
    switch (recursion_patterns__Detism_10) {
#line 357 "recursion_patterns.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 357 "recursion_patterns.m"
      case (MR_Integer) 5:
#line 353 "recursion_patterns.m"
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 357 "recursion_patterns.m"
        break;
#line 357 "recursion_patterns.m"
      case (MR_Integer) 4:
#line 352 "recursion_patterns.m"
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 357 "recursion_patterns.m"
        break;
#line 357 "recursion_patterns.m"
      case (MR_Integer) 0:
#line 350 "recursion_patterns.m"
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 357 "recursion_patterns.m"
        break;
#line 357 "recursion_patterns.m"
      case (MR_Integer) 6:
#line 354 "recursion_patterns.m"
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 357 "recursion_patterns.m"
        break;
#line 357 "recursion_patterns.m"
      case (MR_Integer) 7:
#line 355 "recursion_patterns.m"
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 357 "recursion_patterns.m"
        break;
#line 357 "recursion_patterns.m"
      case (MR_Integer) 3:
#line 357 "recursion_patterns.m"
      case (MR_Integer) 2:
#line 360 "recursion_patterns.m"
        {
#line 360 "recursion_patterns.m"
          MR_Word recursion_patterns__V_47_47 = (MR_Word) recursion_patterns__Detism_10;

#line 777 "recursion_patterns.m"
          if ((recursion_patterns__STATE_VARIABLE_RecursionData_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "recursion_patterns.m"
            *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 777 "recursion_patterns.m"
          else
#line 774 "recursion_patterns.m"
            {
#line 774 "recursion_patterns.m"
              MR_Word recursion_patterns__STATE_VARIABLE_Errors_11_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 2)));
#line 774 "recursion_patterns.m"
              MR_Word recursion_patterns__STATE_VARIABLE_Errors_12_63;
#line 774 "recursion_patterns.m"
              MR_Word recursion_patterns__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 0)));
#line 774 "recursion_patterns.m"
              MR_Integer recursion_patterns__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 1)));
#line 776 "recursion_patterns.m"
              MR_Word recursion_patterns__V_65_65;
#line 776 "recursion_patterns.m"
              MR_Integer recursion_patterns__V_66_66;
#line 776 "recursion_patterns.m"
              MR_Word recursion_patterns__V_67_67;

#line 775 "recursion_patterns.m"
              {
#line 775 "recursion_patterns.m"
                mercury__set__insert_3_p_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0, ((MR_Box) (recursion_patterns__V_47_47)), recursion_patterns__STATE_VARIABLE_Errors_11_62, &recursion_patterns__STATE_VARIABLE_Errors_12_63);
              }
#line 776 "recursion_patterns.m"
              recursion_patterns__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 0)));
#line 776 "recursion_patterns.m"
              recursion_patterns__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 1)));
#line 776 "recursion_patterns.m"
              recursion_patterns__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 2)));
#line 776 "recursion_patterns.m"
              {
#line 776 "recursion_patterns.m"
                MR_Word base;
#line 776 "recursion_patterns.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 776 "recursion_patterns.m"
                *recursion_patterns__STATE_VARIABLE_RecursionData_30 = base;
#line 776 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_65_65));
#line 776 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__V_66_66));
#line 776 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Errors_12_63));
#line 776 "recursion_patterns.m"
              }
#line 774 "recursion_patterns.m"
            }
#line 360 "recursion_patterns.m"
        }
#line 357 "recursion_patterns.m"
        break;
#line 357 "recursion_patterns.m"
      case (MR_Integer) 1:
#line 351 "recursion_patterns.m"
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 357 "recursion_patterns.m"
        break;
#line 357 "recursion_patterns.m"
    }
#line 306 "recursion_patterns.m"
  }
#line 302 "recursion_patterns.m"
}

#line 258 "recursion_patterns.m"
static MR_Float MR_CALL 
recursion_patterns__single_rec_average_recursion_cost_3_f_0(
#line 258 "recursion_patterns.m"
  MR_Float recursion_patterns__BaseCost_5,
#line 258 "recursion_patterns.m"
  MR_Float recursion_patterns__RecCost_6,
#line 258 "recursion_patterns.m"
  MR_Float recursion_patterns__AvgMaxDepth_7)
#line 258 "recursion_patterns.m"
{
#line 260 "recursion_patterns.m"
  {
#line 260 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 260 "recursion_patterns.m"
    MR_Float recursion_patterns__Cost_8;
#line 260 "recursion_patterns.m"
    MR_Float recursion_patterns__Sum_9;
#line 260 "recursion_patterns.m"
    MR_Float recursion_patterns__V_10_10 = (((MR_Float) 0.50000000000000000) * recursion_patterns__RecCost_6);
#line 260 "recursion_patterns.m"
    MR_Float recursion_patterns__V_12_12;
#line 260 "recursion_patterns.m"
    MR_Float recursion_patterns__V_13_13 = (recursion_patterns__AvgMaxDepth_7 * recursion_patterns__AvgMaxDepth_7);
#line 260 "recursion_patterns.m"
    MR_Float recursion_patterns__V_15_15;
#line 260 "recursion_patterns.m"
    MR_Float recursion_patterns__V_16_16;

#line 261 "recursion_patterns.m"
    recursion_patterns__V_12_12 = (recursion_patterns__V_13_13 + recursion_patterns__AvgMaxDepth_7);
#line 261 "recursion_patterns.m"
    recursion_patterns__Sum_9 = (recursion_patterns__V_10_10 * recursion_patterns__V_12_12);
#line 262 "recursion_patterns.m"
    recursion_patterns__V_16_16 = (recursion_patterns__AvgMaxDepth_7 + ((MR_Float) 1.0000000000000000));
#line 262 "recursion_patterns.m"
    {
#line 262 "recursion_patterns.m"
      recursion_patterns__V_15_15 = mercury__float__f_slash_2_f_0(recursion_patterns__Sum_9, recursion_patterns__V_16_16);
    }
#line 262 "recursion_patterns.m"
    recursion_patterns__Cost_8 = (recursion_patterns__BaseCost_5 + recursion_patterns__V_15_15);
#line 260 "recursion_patterns.m"
    return recursion_patterns__Cost_8;
#line 260 "recursion_patterns.m"
  }
#line 258 "recursion_patterns.m"
}

#line 232 "recursion_patterns.m"
static MR_Float MR_CALL 
recursion_patterns__single_rec_recursion_cost_3_f_0(
#line 232 "recursion_patterns.m"
  MR_Float recursion_patterns__BaseCost_5,
#line 232 "recursion_patterns.m"
  MR_Float recursion_patterns__RecCost_6,
#line 232 "recursion_patterns.m"
  MR_Integer recursion_patterns__LevelI_7)
#line 232 "recursion_patterns.m"
{
#line 234 "recursion_patterns.m"
  {
#line 234 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 234 "recursion_patterns.m"
    MR_Float recursion_patterns__Cost_8;
#line 234 "recursion_patterns.m"
    MR_Float recursion_patterns__V_9_9;
#line 234 "recursion_patterns.m"
    MR_Float recursion_patterns__V_10_10;
#line 234 "recursion_patterns.m"
    MR_Float recursion_patterns__V_11_11;

#line 235 "recursion_patterns.m"
    {
#line 235 "recursion_patterns.m"
      recursion_patterns__V_10_10 = mercury__float__float_1_f_0(recursion_patterns__LevelI_7);
    }
#line 235 "recursion_patterns.m"
    recursion_patterns__V_11_11 = (recursion_patterns__RecCost_6 + ((MR_Float) 1.0000000000000000));
#line 235 "recursion_patterns.m"
    recursion_patterns__V_9_9 = (recursion_patterns__V_10_10 * recursion_patterns__V_11_11);
#line 235 "recursion_patterns.m"
    recursion_patterns__Cost_8 = (recursion_patterns__BaseCost_5 + recursion_patterns__V_9_9);
#line 234 "recursion_patterns.m"
    return recursion_patterns__Cost_8;
#line 234 "recursion_patterns.m"
  }
#line 232 "recursion_patterns.m"
}

#line 209 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_level_report_3_p_0(
#line 209 "recursion_patterns.m"
  MR_Float recursion_patterns__TotalCalls_4,
#line 209 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 209 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__3_3)
#line 209 "recursion_patterns.m"
{
#line 213 "recursion_patterns.m"
  {
#line 213 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 213 "recursion_patterns.m"
    MR_Integer recursion_patterns__Level_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 213 "recursion_patterns.m"
    MR_Float recursion_patterns__NonRecCost_6;
#line 213 "recursion_patterns.m"
    MR_Float recursion_patterns__Prob_7;
#line 213 "recursion_patterns.m"
    MR_Integer recursion_patterns__Calls_8;
#line 213 "recursion_patterns.m"
    MR_Float recursion_patterns__CostExChild_9;
#line 213 "recursion_patterns.m"
    MR_Float recursion_patterns__CallsF_10;
#line 213 "recursion_patterns.m"
    MR_Word recursion_patterns__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 213 "recursion_patterns.m"
    MR_Float recursion_patterns__V_12_12;
#line 213 "recursion_patterns.m"
    MR_Float recursion_patterns__V_13_13;

#line 212 "recursion_patterns.m"
    recursion_patterns__NonRecCost_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__V_11_11, (MR_Integer) 0)));
#line 212 "recursion_patterns.m"
    recursion_patterns__Prob_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__V_11_11, (MR_Integer) 1)));
#line 214 "recursion_patterns.m"
    {
#line 214 "recursion_patterns.m"
      recursion_patterns__V_12_12 = measurement_units__probability_to_float_1_f_0(recursion_patterns__Prob_7);
    }
#line 214 "recursion_patterns.m"
    recursion_patterns__CallsF_10 = (recursion_patterns__V_12_12 * recursion_patterns__TotalCalls_4);
#line 215 "recursion_patterns.m"
    {
#line 215 "recursion_patterns.m"
      recursion_patterns__Calls_8 = mercury__float__round_to_int_1_f_0(recursion_patterns__CallsF_10);
    }
#line 216 "recursion_patterns.m"
    {
#line 216 "recursion_patterns.m"
      recursion_patterns__V_13_13 = mercury__float__float_1_f_0(recursion_patterns__Level_5);
    }
#line 216 "recursion_patterns.m"
    recursion_patterns__CostExChild_9 = (recursion_patterns__V_13_13 * recursion_patterns__CallsF_10);
#line 213 "recursion_patterns.m"
    {
#line 213 "recursion_patterns.m"
      MR_Word base;
#line 213 "recursion_patterns.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 213 "recursion_patterns.m"
      *recursion_patterns__HeadVar__3_3 = base;
#line 213 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__Level_5));
#line 213 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recursion_patterns__Calls_8));
#line 213 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(recursion_patterns__Prob_7);
#line 213 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(recursion_patterns__NonRecCost_6);
#line 213 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 4) = MR_box_float(recursion_patterns__CostExChild_9);
#line 213 "recursion_patterns.m"
    }
#line 213 "recursion_patterns.m"
  }
#line 209 "recursion_patterns.m"
}

#line 204 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_3(
#line 204 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 204 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1)
#line 204 "recursion_patterns.m"
{
#line 204 "recursion_patterns.m"
  {
#line 204 "recursion_patterns.m"
    MR_Box recursion_patterns__wrapper_arg_2;
#line 204 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 204 "recursion_patterns.m"
    MR_String recursion_patterns__conv6_HeadVar__2_2;

#line 204 "recursion_patterns.m"
    {
#line 204 "recursion_patterns.m"
      recursion_patterns__conv6_HeadVar__2_2 = recursion_patterns__error_to_string_1_f_0(((MR_Word) recursion_patterns__wrapper_arg_1));
    }
#line 204 "recursion_patterns.m"
    recursion_patterns__wrapper_arg_2 = ((MR_Box) (recursion_patterns__conv6_HeadVar__2_2));
#line 204 "recursion_patterns.m"
    return recursion_patterns__wrapper_arg_2;
#line 204 "recursion_patterns.m"
  }
#line 204 "recursion_patterns.m"
}

#line 199 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_2(
#line 199 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 199 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 199 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_2)
#line 199 "recursion_patterns.m"
{
#line 199 "recursion_patterns.m"
  {
#line 199 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 199 "recursion_patterns.m"
    MR_Word recursion_patterns__conv5_HeadVar__3_3;

#line 199 "recursion_patterns.m"
    {
#line 199 "recursion_patterns.m"
      recursion_patterns__recursion_level_report_3_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Word) recursion_patterns__wrapper_arg_1), &recursion_patterns__conv5_HeadVar__3_3);
    }
#line 199 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_2 = ((MR_Box) (recursion_patterns__conv5_HeadVar__3_3));
#line 199 "recursion_patterns.m"
  }
#line 199 "recursion_patterns.m"
}

#line 180 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_1(
#line 180 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 180 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1)
#line 180 "recursion_patterns.m"
{
#line 180 "recursion_patterns.m"
  {
#line 180 "recursion_patterns.m"
    MR_Box recursion_patterns__wrapper_arg_2;
#line 180 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 180 "recursion_patterns.m"
    MR_Float recursion_patterns__conv2_Cost_8;

#line 180 "recursion_patterns.m"
    {
#line 180 "recursion_patterns.m"
      recursion_patterns__conv2_Cost_8 = recursion_patterns__single_rec_recursion_cost_3_f_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 4))), ((MR_Integer) recursion_patterns__wrapper_arg_1));
    }
#line 180 "recursion_patterns.m"
    recursion_patterns__wrapper_arg_2 = MR_box_float(recursion_patterns__conv2_Cost_8);
#line 180 "recursion_patterns.m"
    return recursion_patterns__wrapper_arg_2;
#line 180 "recursion_patterns.m"
  }
#line 180 "recursion_patterns.m"
}

#line 137 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0(
#line 137 "recursion_patterns.m"
  MR_Integer recursion_patterns__ParentCallsI_5,
#line 137 "recursion_patterns.m"
  MR_Integer recursion_patterns__TotalCallsI_6,
#line 137 "recursion_patterns.m"
  MR_Word recursion_patterns__RecursionData_7,
#line 137 "recursion_patterns.m"
  MR_Word * recursion_patterns__Type_8)
#line 137 "recursion_patterns.m"
{
#line 143 "recursion_patterns.m"
  {
#line 143 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 143 "recursion_patterns.m"
    if ((recursion_patterns__RecursionData_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 145 "recursion_patterns.m"
      *recursion_patterns__Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 143 "recursion_patterns.m"
    else
#line 147 "recursion_patterns.m"
      {
#line 147 "recursion_patterns.m"
        MR_Word recursion_patterns__Levels_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__RecursionData_7, (MR_Integer) 0)));
#line 147 "recursion_patterns.m"
        MR_Integer recursion_patterns__Maximum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__RecursionData_7, (MR_Integer) 1)));
#line 147 "recursion_patterns.m"
        MR_Word recursion_patterns__Errors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__RecursionData_7, (MR_Integer) 2)));
#line 147 "recursion_patterns.m"
        MR_Float recursion_patterns__ParentCalls_12;
#line 147 "recursion_patterns.m"
        MR_Float recursion_patterns__TotalCalls_13;
#line 147 "recursion_patterns.m"
        MR_Float recursion_patterns__BaseCost_15;
#line 147 "recursion_patterns.m"
        MR_Float recursion_patterns__BaseProb_16;
#line 147 "recursion_patterns.m"
        MR_Integer recursion_patterns__BaseCount_18;
#line 147 "recursion_patterns.m"
        MR_Word recursion_patterns__BaseLevel_19;
#line 154 "recursion_patterns.m"
        MR_Word recursion_patterns__RLBase_14;
#line 150 "recursion_patterns.m"
        MR_Box recursion_patterns__conv0_RLBase_14;

#line 148 "recursion_patterns.m"
        {
#line 148 "recursion_patterns.m"
          recursion_patterns__ParentCalls_12 = mercury__float__float_1_f_0(recursion_patterns__ParentCallsI_5);
        }
#line 149 "recursion_patterns.m"
        {
#line 149 "recursion_patterns.m"
          recursion_patterns__TotalCalls_13 = mercury__float__float_1_f_0(recursion_patterns__TotalCallsI_6);
        }
#line 150 "recursion_patterns.m"
        {
#line 150 "recursion_patterns.m"
          recursion_patterns__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0, recursion_patterns__Levels_9, ((MR_Box) ((MR_Integer) 0)), &recursion_patterns__conv0_RLBase_14);
        }
#line 150 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 150 "recursion_patterns.m"
          {
#line 150 "recursion_patterns.m"
            recursion_patterns__RLBase_14 = ((MR_Word) recursion_patterns__conv0_RLBase_14);
#line 150 "recursion_patterns.m"
            recursion_patterns__succeeded = MR_TRUE;
#line 150 "recursion_patterns.m"
          }
#line 154 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 151 "recursion_patterns.m"
          {
#line 151 "recursion_patterns.m"
            MR_Float recursion_patterns__BaseCountF_17;
#line 151 "recursion_patterns.m"
            MR_Float recursion_patterns__V_33_33;

#line 151 "recursion_patterns.m"
            recursion_patterns__BaseCost_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLBase_14, (MR_Integer) 0)));
#line 151 "recursion_patterns.m"
            recursion_patterns__BaseProb_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLBase_14, (MR_Integer) 1)));
#line 152 "recursion_patterns.m"
            {
#line 152 "recursion_patterns.m"
              recursion_patterns__V_33_33 = measurement_units__probability_to_float_1_f_0(recursion_patterns__BaseProb_16);
            }
#line 152 "recursion_patterns.m"
            recursion_patterns__BaseCountF_17 = (recursion_patterns__V_33_33 * recursion_patterns__TotalCalls_13);
#line 153 "recursion_patterns.m"
            {
#line 153 "recursion_patterns.m"
              recursion_patterns__BaseCount_18 = mercury__float__round_to_int_1_f_0(recursion_patterns__BaseCountF_17);
            }
#line 151 "recursion_patterns.m"
          }
#line 154 "recursion_patterns.m"
        else
#line 155 "recursion_patterns.m"
          {
#line 155 "recursion_patterns.m"
            recursion_patterns__BaseCost_15 = (MR_Float) 0.0000000000000000;
#line 156 "recursion_patterns.m"
            recursion_patterns__BaseCount_18 = (MR_Integer) 0;
#line 157 "recursion_patterns.m"
            {
#line 157 "recursion_patterns.m"
              recursion_patterns__BaseProb_16 = measurement_units__impossible_0_f_0();
            }
#line 155 "recursion_patterns.m"
          }
#line 160 "recursion_patterns.m"
        {
#line 160 "recursion_patterns.m"
          recursion_patterns__BaseLevel_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 160 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 0) = ((MR_Box) ((MR_Integer) 0));
#line 160 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 1) = ((MR_Box) (recursion_patterns__BaseCount_18));
#line 160 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 2) = MR_box_float(recursion_patterns__BaseProb_16);
#line 160 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 3) = MR_box_float(recursion_patterns__BaseCost_15);
#line 160 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 4) = MR_box_float((MR_Float) 0.0000000000000000);
#line 160 "recursion_patterns.m"
        }
#line 161 "recursion_patterns.m"
        {
#line 161 "recursion_patterns.m"
          recursion_patterns__succeeded = mercury__set__empty_1_p_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0, recursion_patterns__Errors_11);
        }
#line 203 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 165 "recursion_patterns.m"
          {
#line 162 "recursion_patterns.m"
            recursion_patterns__succeeded = (recursion_patterns__Maximum_10 < (MR_Integer) 0);
#line 165 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 163 "recursion_patterns.m"
              {
#line 163 "recursion_patterns.m"
                {
#line 163 "recursion_patterns.m"
                  mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.recursion_data_to_recursion_type\'/4", (MR_String) "negative number of recursive calls");
#line 163 "recursion_patterns.m"
                  return;
                }
#line 163 "recursion_patterns.m"
              }
#line 165 "recursion_patterns.m"
            else
#line 167 "recursion_patterns.m"
              {
#line 165 "recursion_patterns.m"
                recursion_patterns__succeeded = (recursion_patterns__Maximum_10 == (MR_Integer) 0);
#line 167 "recursion_patterns.m"
                if (recursion_patterns__succeeded)
#line 166 "recursion_patterns.m"
                  *recursion_patterns__Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 167 "recursion_patterns.m"
                else
#line 183 "recursion_patterns.m"
                  {
#line 167 "recursion_patterns.m"
                    recursion_patterns__succeeded = (recursion_patterns__Maximum_10 == (MR_Integer) 1);
#line 183 "recursion_patterns.m"
                    if (recursion_patterns__succeeded)
#line 176 "recursion_patterns.m"
                      {
#line 176 "recursion_patterns.m"
                        MR_Float recursion_patterns__RecCost_21;
#line 176 "recursion_patterns.m"
                        MR_Word recursion_patterns__RecLevel_24;
#line 176 "recursion_patterns.m"
                        MR_Float recursion_patterns__AvgMaxDepth_26;
#line 176 "recursion_patterns.m"
                        MR_Float recursion_patterns__AvgRecCost_27;
#line 176 "recursion_patterns.m"
                        MR_Word recursion_patterns__AnyRecCost_28;
#line 173 "recursion_patterns.m"
                        MR_Word recursion_patterns__RLRec_20;
#line 168 "recursion_patterns.m"
                        MR_Box recursion_patterns__conv1_RLRec_20;

#line 168 "recursion_patterns.m"
                        {
#line 168 "recursion_patterns.m"
                          recursion_patterns__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0, recursion_patterns__Levels_9, ((MR_Box) ((MR_Integer) 1)), &recursion_patterns__conv1_RLRec_20);
                        }
#line 168 "recursion_patterns.m"
                        if (recursion_patterns__succeeded)
#line 168 "recursion_patterns.m"
                          {
#line 168 "recursion_patterns.m"
                            recursion_patterns__RLRec_20 = ((MR_Word) recursion_patterns__conv1_RLRec_20);
#line 168 "recursion_patterns.m"
                            recursion_patterns__succeeded = MR_TRUE;
#line 168 "recursion_patterns.m"
                          }
#line 173 "recursion_patterns.m"
                        if (recursion_patterns__succeeded)
#line 169 "recursion_patterns.m"
                          {
#line 169 "recursion_patterns.m"
                            MR_Float recursion_patterns__RecProb_22;
#line 169 "recursion_patterns.m"
                            MR_Float recursion_patterns__RecCountF_23;
#line 169 "recursion_patterns.m"
                            MR_Float recursion_patterns__V_41_41;
#line 169 "recursion_patterns.m"
                            MR_Integer recursion_patterns__V_43_43;

#line 169 "recursion_patterns.m"
                            recursion_patterns__RecCost_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLRec_20, (MR_Integer) 0)));
#line 169 "recursion_patterns.m"
                            recursion_patterns__RecProb_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLRec_20, (MR_Integer) 1)));
#line 170 "recursion_patterns.m"
                            {
#line 170 "recursion_patterns.m"
                              recursion_patterns__V_41_41 = measurement_units__probability_to_float_1_f_0(recursion_patterns__RecProb_22);
                            }
#line 170 "recursion_patterns.m"
                            recursion_patterns__RecCountF_23 = (recursion_patterns__V_41_41 * recursion_patterns__TotalCalls_13);
#line 172 "recursion_patterns.m"
                            {
#line 172 "recursion_patterns.m"
                              recursion_patterns__V_43_43 = mercury__float__round_to_int_1_f_0(recursion_patterns__RecCountF_23);
                            }
#line 171 "recursion_patterns.m"
                            {
#line 171 "recursion_patterns.m"
                              recursion_patterns__RecLevel_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 171 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 0) = ((MR_Box) ((MR_Integer) 1));
#line 171 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 1) = ((MR_Box) (recursion_patterns__V_43_43));
#line 171 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 2) = MR_box_float(recursion_patterns__RecProb_22);
#line 171 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 3) = MR_box_float(recursion_patterns__RecCost_21);
#line 171 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 4) = MR_box_float((MR_Float) 1.0000000000000000);
#line 171 "recursion_patterns.m"
                            }
#line 169 "recursion_patterns.m"
                          }
#line 173 "recursion_patterns.m"
                        else
#line 174 "recursion_patterns.m"
                          {
#line 174 "recursion_patterns.m"
                            MR_String recursion_patterns__Msg_25;
#line 174 "recursion_patterns.m"
                            MR_String recursion_patterns__V_110_110;
#line 174 "recursion_patterns.m"
                            MR_String recursion_patterns__V_117_117;

#line 174 "recursion_patterns.m"
                            {
#line 174 "recursion_patterns.m"
                              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &recursion_patterns_scalar_common_3[2], (MR_Integer) 1, &recursion_patterns__V_110_110);
                            }
#line 174 "recursion_patterns.m"
                            {
#line 174 "recursion_patterns.m"
                              recursion_patterns__V_117_117 = mercury__string__f_43_43_2_f_0(recursion_patterns__V_110_110, (MR_String) " not found");
                            }
#line 174 "recursion_patterns.m"
                            {
#line 174 "recursion_patterns.m"
                              recursion_patterns__Msg_25 = mercury__string__f_43_43_2_f_0((MR_String) "maximum level ", recursion_patterns__V_117_117);
                            }
#line 175 "recursion_patterns.m"
                            {
#line 175 "recursion_patterns.m"
                              mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.recursion_data_to_recursion_type\'/4", recursion_patterns__Msg_25);
#line 175 "recursion_patterns.m"
                              return;
                            }
#line 174 "recursion_patterns.m"
                          }
#line 177 "recursion_patterns.m"
                        {
#line 177 "recursion_patterns.m"
                          recursion_patterns__AvgMaxDepth_26 = mercury__float__f_slash_2_f_0(recursion_patterns__TotalCalls_13, recursion_patterns__ParentCalls_12);
                        }
#line 178 "recursion_patterns.m"
                        {
#line 178 "recursion_patterns.m"
                          recursion_patterns__AvgRecCost_27 = recursion_patterns__single_rec_average_recursion_cost_3_f_0(recursion_patterns__BaseCost_15, recursion_patterns__RecCost_21, recursion_patterns__AvgMaxDepth_26);
                        }
#line 180 "recursion_patterns.m"
                        {
#line 180 "recursion_patterns.m"
                          recursion_patterns__AnyRecCost_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 180 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[1]));
#line 180 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 1) = ((MR_Box) (recursion_patterns__recursion_data_to_recursion_type_4_p_0_1));
#line 180 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 180 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 3) = MR_box_float(recursion_patterns__BaseCost_15);
#line 180 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 4) = MR_box_float(recursion_patterns__RecCost_21);
#line 180 "recursion_patterns.m"
                        }
#line 181 "recursion_patterns.m"
                        {
#line 181 "recursion_patterns.m"
                          MR_Word base;
#line 181 "recursion_patterns.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 181 "recursion_patterns.m"
                          *recursion_patterns__Type_8 = base;
#line 181 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__BaseLevel_19));
#line 181 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__RecLevel_24));
#line 181 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(1), base, 2) = MR_box_float(recursion_patterns__AvgMaxDepth_26);
#line 181 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(recursion_patterns__AvgRecCost_27);
#line 181 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (recursion_patterns__AnyRecCost_28));
#line 181 "recursion_patterns.m"
                        }
#line 176 "recursion_patterns.m"
                      }
#line 183 "recursion_patterns.m"
                    else
#line 198 "recursion_patterns.m"
                      {
#line 185 "recursion_patterns.m"
                        MR_Word recursion_patterns__TypeCtorInfo_97_97;
#line 185 "recursion_patterns.m"
                        MR_Word recursion_patterns__TypeCtorInfo_98_98;
#line 185 "recursion_patterns.m"
                        MR_Integer recursion_patterns__V_52_52;
#line 185 "recursion_patterns.m"
                        MR_Word recursion_patterns__V_29_29;
#line 185 "recursion_patterns.m"
                        MR_Box recursion_patterns__conv3_V_29_29;

#line 184 "recursion_patterns.m"
                        recursion_patterns__succeeded = (recursion_patterns__Maximum_10 == (MR_Integer) 2);
#line 184 "recursion_patterns.m"
                        if (recursion_patterns__succeeded)
#line 184 "recursion_patterns.m"
                          {
#line 185 "recursion_patterns.m"
                            recursion_patterns__V_52_52 = (MR_Integer) 1;
#line 9391 "recursion_patterns.c"
                            recursion_patterns__TypeCtorInfo_97_97 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9393 "recursion_patterns.c"
                            recursion_patterns__TypeCtorInfo_98_98 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 185 "recursion_patterns.m"
                            {
#line 185 "recursion_patterns.m"
                              recursion_patterns__succeeded = mercury__assoc_list__search_3_p_0(recursion_patterns__TypeCtorInfo_97_97, recursion_patterns__TypeCtorInfo_98_98, recursion_patterns__Levels_9, ((MR_Box) (recursion_patterns__V_52_52)), &recursion_patterns__conv3_V_29_29);
                            }
#line 185 "recursion_patterns.m"
                            if (recursion_patterns__succeeded)
#line 185 "recursion_patterns.m"
                              {
#line 185 "recursion_patterns.m"
                                recursion_patterns__V_29_29 = ((MR_Word) recursion_patterns__conv3_V_29_29);
#line 185 "recursion_patterns.m"
                                recursion_patterns__succeeded = MR_TRUE;
#line 185 "recursion_patterns.m"
                              }
#line 185 "recursion_patterns.m"
                            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 184 "recursion_patterns.m"
                          }
#line 198 "recursion_patterns.m"
                        if (recursion_patterns__succeeded)
#line 196 "recursion_patterns.m"
                          {
#line 196 "recursion_patterns.m"
                            MR_Word recursion_patterns__RecLevel_82;
#line 193 "recursion_patterns.m"
                            MR_Word recursion_patterns__RLRec_73;
#line 187 "recursion_patterns.m"
                            MR_Box recursion_patterns__conv4_RLRec_73;

#line 187 "recursion_patterns.m"
                            {
#line 187 "recursion_patterns.m"
                              recursion_patterns__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0, recursion_patterns__Levels_9, ((MR_Box) ((MR_Integer) 2)), &recursion_patterns__conv4_RLRec_73);
                            }
#line 187 "recursion_patterns.m"
                            if (recursion_patterns__succeeded)
#line 187 "recursion_patterns.m"
                              {
#line 187 "recursion_patterns.m"
                                recursion_patterns__RLRec_73 = ((MR_Word) recursion_patterns__conv4_RLRec_73);
#line 187 "recursion_patterns.m"
                                recursion_patterns__succeeded = MR_TRUE;
#line 187 "recursion_patterns.m"
                              }
#line 193 "recursion_patterns.m"
                            if (recursion_patterns__succeeded)
#line 188 "recursion_patterns.m"
                              {
#line 188 "recursion_patterns.m"
                                MR_Float recursion_patterns__V_54_54;
#line 188 "recursion_patterns.m"
                                MR_Integer recursion_patterns__V_56_56;
#line 188 "recursion_patterns.m"
                                MR_Float recursion_patterns__V_57_57;
#line 188 "recursion_patterns.m"
                                MR_Float recursion_patterns__RecCost_69 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLRec_73, (MR_Integer) 0)));
#line 188 "recursion_patterns.m"
                                MR_Float recursion_patterns__RecProb_70 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLRec_73, (MR_Integer) 1)));
#line 188 "recursion_patterns.m"
                                MR_Float recursion_patterns__RecCountF_71;

#line 189 "recursion_patterns.m"
                                {
#line 189 "recursion_patterns.m"
                                  recursion_patterns__V_54_54 = measurement_units__probability_to_float_1_f_0(recursion_patterns__RecProb_70);
                                }
#line 189 "recursion_patterns.m"
                                recursion_patterns__RecCountF_71 = (recursion_patterns__V_54_54 * recursion_patterns__ParentCalls_12);
#line 191 "recursion_patterns.m"
                                {
#line 191 "recursion_patterns.m"
                                  recursion_patterns__V_56_56 = mercury__float__round_to_int_1_f_0(recursion_patterns__RecCountF_71);
                                }
#line 192 "recursion_patterns.m"
                                recursion_patterns__V_57_57 = (recursion_patterns__RecCountF_71 * ((MR_Float) 2.0000000000000000));
#line 190 "recursion_patterns.m"
                                {
#line 190 "recursion_patterns.m"
                                  recursion_patterns__RecLevel_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 190 "recursion_patterns.m"
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 0) = ((MR_Box) ((MR_Integer) 2));
#line 190 "recursion_patterns.m"
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 1) = ((MR_Box) (recursion_patterns__V_56_56));
#line 190 "recursion_patterns.m"
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 2) = MR_box_float(recursion_patterns__RecProb_70);
#line 190 "recursion_patterns.m"
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 3) = MR_box_float(recursion_patterns__RecCost_69);
#line 190 "recursion_patterns.m"
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 4) = MR_box_float(recursion_patterns__V_57_57);
#line 190 "recursion_patterns.m"
                                }
#line 188 "recursion_patterns.m"
                              }
#line 193 "recursion_patterns.m"
                            else
#line 194 "recursion_patterns.m"
                              {
#line 194 "recursion_patterns.m"
                                MR_String recursion_patterns__Msg_72;
#line 194 "recursion_patterns.m"
                                MR_String recursion_patterns__V_120_120;
#line 194 "recursion_patterns.m"
                                MR_String recursion_patterns__V_127_127;

#line 194 "recursion_patterns.m"
                                {
#line 194 "recursion_patterns.m"
                                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &recursion_patterns_scalar_common_3[2], (MR_Integer) 1, &recursion_patterns__V_120_120);
                                }
#line 194 "recursion_patterns.m"
                                {
#line 194 "recursion_patterns.m"
                                  recursion_patterns__V_127_127 = mercury__string__f_43_43_2_f_0(recursion_patterns__V_120_120, (MR_String) " not found");
                                }
#line 194 "recursion_patterns.m"
                                {
#line 194 "recursion_patterns.m"
                                  recursion_patterns__Msg_72 = mercury__string__f_43_43_2_f_0((MR_String) "maximum level ", recursion_patterns__V_127_127);
                                }
#line 195 "recursion_patterns.m"
                                {
#line 195 "recursion_patterns.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.recursion_data_to_recursion_type\'/4", recursion_patterns__Msg_72);
#line 195 "recursion_patterns.m"
                                  return;
                                }
#line 194 "recursion_patterns.m"
                              }
#line 197 "recursion_patterns.m"
                            {
#line 197 "recursion_patterns.m"
                              MR_Word base;
#line 197 "recursion_patterns.m"
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "recursion_patterns.m"
                              *recursion_patterns__Type_8 = base;
#line 197 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (recursion_patterns__BaseLevel_19));
#line 197 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (recursion_patterns__RecLevel_82));
#line 197 "recursion_patterns.m"
                            }
#line 196 "recursion_patterns.m"
                          }
#line 198 "recursion_patterns.m"
                        else
#line 200 "recursion_patterns.m"
                          {
#line 200 "recursion_patterns.m"
                            MR_Word recursion_patterns__LevelsReport_30;
#line 200 "recursion_patterns.m"
                            MR_Word recursion_patterns__V_66_66;

#line 199 "recursion_patterns.m"
                            {
#line 199 "recursion_patterns.m"
                              recursion_patterns__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 199 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__V_66_66, 0) = ((MR_Box) (&recursion_patterns_scalar_common_6[0]));
#line 199 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__V_66_66, 1) = ((MR_Box) (recursion_patterns__recursion_data_to_recursion_type_4_p_0_2));
#line 199 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 199 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__V_66_66, 3) = MR_box_float(recursion_patterns__TotalCalls_13);
#line 199 "recursion_patterns.m"
                            }
#line 199 "recursion_patterns.m"
                            {
#line 199 "recursion_patterns.m"
                              mercury__list__map_3_p_0((MR_Word) &recursion_patterns_scalar_common_1[3], (MR_Word) &report__report__type_ctor_info_recursion_level_report_0, recursion_patterns__V_66_66, recursion_patterns__Levels_9, &recursion_patterns__LevelsReport_30);
                            }
#line 201 "recursion_patterns.m"
                            {
#line 201 "recursion_patterns.m"
                              MR_Word base;
#line 201 "recursion_patterns.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "recursion_patterns.m"
                              *recursion_patterns__Type_8 = base;
#line 201 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 201 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (recursion_patterns__LevelsReport_30));
#line 201 "recursion_patterns.m"
                            }
#line 200 "recursion_patterns.m"
                          }
#line 198 "recursion_patterns.m"
                      }
#line 183 "recursion_patterns.m"
                  }
#line 167 "recursion_patterns.m"
              }
#line 165 "recursion_patterns.m"
          }
#line 203 "recursion_patterns.m"
        else
#line 204 "recursion_patterns.m"
          {
#line 204 "recursion_patterns.m"
            MR_Word recursion_patterns__TypeCtorInfo_105_105 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0;
#line 204 "recursion_patterns.m"
            MR_Word recursion_patterns__Messages_31;
#line 204 "recursion_patterns.m"
            MR_Word recursion_patterns__V_68_68;

#line 204 "recursion_patterns.m"
            {
#line 204 "recursion_patterns.m"
              recursion_patterns__V_68_68 = mercury__set__to_sorted_list_1_f_0(recursion_patterns__TypeCtorInfo_105_105, recursion_patterns__Errors_11);
            }
#line 204 "recursion_patterns.m"
            {
#line 204 "recursion_patterns.m"
              recursion_patterns__Messages_31 = mercury__list__map_2_f_0(recursion_patterns__TypeCtorInfo_105_105, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recursion_patterns_scalar_common_1[5], recursion_patterns__V_68_68);
            }
#line 205 "recursion_patterns.m"
            {
#line 205 "recursion_patterns.m"
              MR_Word base;
#line 205 "recursion_patterns.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 205 "recursion_patterns.m"
              *recursion_patterns__Type_8 = base;
#line 205 "recursion_patterns.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 205 "recursion_patterns.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (recursion_patterns__Messages_31));
#line 205 "recursion_patterns.m"
            }
#line 204 "recursion_patterns.m"
          }
#line 147 "recursion_patterns.m"
      }
#line 143 "recursion_patterns.m"
  }
#line 137 "recursion_patterns.m"
}

#line 40 "recursion_patterns.m"
void MR_CALL 
recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_1(
#line 40 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 40 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__2_2)
#line 40 "recursion_patterns.m"
{
#line 1018 "recursion_patterns.m"
  {
#line 1018 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 1018 "recursion_patterns.m"
#line 1018 "recursion_patterns.m"
    switch (MR_tag((MR_Word) recursion_patterns__HeadVar__1_1)) {
#line 1018 "recursion_patterns.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1018 "recursion_patterns.m"
      case (MR_Integer) 0:
#line 1018 "recursion_patterns.m"
        {
#line 1018 "recursion_patterns.m"
          MR_Word recursion_patterns__V_3_3;

#line 1019 "recursion_patterns.m"
          {
#line 1019 "recursion_patterns.m"
            recursion_patterns__V_3_3 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
          }
#line 1019 "recursion_patterns.m"
          {
#line 1019 "recursion_patterns.m"
            MR_Word base;
#line 1019 "recursion_patterns.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "recursion_patterns.m"
            *recursion_patterns__HeadVar__2_2 = base;
#line 1019 "recursion_patterns.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_3_3));
#line 1019 "recursion_patterns.m"
          }
#line 1018 "recursion_patterns.m"
        }
#line 1018 "recursion_patterns.m"
        break;
#line 1018 "recursion_patterns.m"
      case (MR_Integer) 1:
#line 1020 "recursion_patterns.m"
        {
#line 1020 "recursion_patterns.m"
          MR_Float recursion_patterns__Depth_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
#line 1020 "recursion_patterns.m"
          MR_Word recursion_patterns__V_10_10;
#line 1020 "recursion_patterns.m"
          MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 1020 "recursion_patterns.m"
          MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 1020 "recursion_patterns.m"
          MR_Float recursion_patterns__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 3)));
#line 1020 "recursion_patterns.m"
          MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 4)));

#line 1021 "recursion_patterns.m"
          {
#line 1021 "recursion_patterns.m"
            recursion_patterns__V_10_10 = measurements__recursion_depth_from_float_1_f_0(recursion_patterns__Depth_7);
          }
#line 1021 "recursion_patterns.m"
          {
#line 1021 "recursion_patterns.m"
            MR_Word base;
#line 1021 "recursion_patterns.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "recursion_patterns.m"
            *recursion_patterns__HeadVar__2_2 = base;
#line 1021 "recursion_patterns.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_10_10));
#line 1021 "recursion_patterns.m"
          }
#line 1020 "recursion_patterns.m"
        }
#line 1018 "recursion_patterns.m"
        break;
#line 1018 "recursion_patterns.m"
      case (MR_Integer) 2:
#line 1022 "recursion_patterns.m"
        *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1018 "recursion_patterns.m"
        break;
#line 1018 "recursion_patterns.m"
      case (MR_Integer) 3:
#line 1018 "recursion_patterns.m"
#line 1018 "recursion_patterns.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)))) {
#line 1018 "recursion_patterns.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1018 "recursion_patterns.m"
          case (MR_Integer) 0:
#line 1023 "recursion_patterns.m"
            *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1018 "recursion_patterns.m"
            break;
#line 1018 "recursion_patterns.m"
          case (MR_Integer) 1:
#line 1024 "recursion_patterns.m"
            *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1018 "recursion_patterns.m"
            break;
#line 1018 "recursion_patterns.m"
          case (MR_Integer) 2:
#line 1025 "recursion_patterns.m"
            *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1018 "recursion_patterns.m"
            break;
#line 1018 "recursion_patterns.m"
        }
#line 1018 "recursion_patterns.m"
        break;
#line 1018 "recursion_patterns.m"
    }
#line 1018 "recursion_patterns.m"
  }
#line 40 "recursion_patterns.m"
}

#line 38 "recursion_patterns.m"
void MR_CALL 
recursion_patterns__recursion_type_get_maybe_avg_max_depth_2_p_0(
#line 38 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 38 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__2_2)
#line 38 "recursion_patterns.m"
{
#line 1018 "recursion_patterns.m"
  {
#line 1018 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 1018 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1018 "recursion_patterns.m"
      {
#line 1018 "recursion_patterns.m"
        MR_Word recursion_patterns__V_3_3;

#line 1019 "recursion_patterns.m"
        {
#line 1019 "recursion_patterns.m"
          recursion_patterns__V_3_3 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
        }
#line 1019 "recursion_patterns.m"
        {
#line 1019 "recursion_patterns.m"
          MR_Word base;
#line 1019 "recursion_patterns.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "recursion_patterns.m"
          *recursion_patterns__HeadVar__2_2 = base;
#line 1019 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_3_3));
#line 1019 "recursion_patterns.m"
        }
#line 1018 "recursion_patterns.m"
      }
#line 1018 "recursion_patterns.m"
    else
#line 1020 "recursion_patterns.m"
      {
#line 1020 "recursion_patterns.m"
        MR_Float recursion_patterns__Depth_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
#line 1020 "recursion_patterns.m"
        MR_Word recursion_patterns__V_10_10;
#line 1020 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 1020 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 1020 "recursion_patterns.m"
        MR_Float recursion_patterns__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 3)));
#line 1020 "recursion_patterns.m"
        MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 4)));

#line 1021 "recursion_patterns.m"
        {
#line 1021 "recursion_patterns.m"
          recursion_patterns__V_10_10 = measurements__recursion_depth_from_float_1_f_0(recursion_patterns__Depth_7);
        }
#line 1021 "recursion_patterns.m"
        {
#line 1021 "recursion_patterns.m"
          MR_Word base;
#line 1021 "recursion_patterns.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "recursion_patterns.m"
          *recursion_patterns__HeadVar__2_2 = base;
#line 1021 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_10_10));
#line 1021 "recursion_patterns.m"
        }
#line 1020 "recursion_patterns.m"
      }
#line 1018 "recursion_patterns.m"
  }
#line 38 "recursion_patterns.m"
}

#line 814 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__create_recursion_types_frequency_report_2_p_0_1(
#line 814 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 814 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 814 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 814 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_3,
#line 814 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_4)
#line 814 "recursion_patterns.m"
{
#line 814 "recursion_patterns.m"
  {
#line 814 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 814 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_STATE_VARIABLE_Histogram_28;

#line 814 "recursion_patterns.m"
    {
#line 814 "recursion_patterns.m"
      recursion_patterns__rec_types_freq_build_histogram_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3), &recursion_patterns__conv0_STATE_VARIABLE_Histogram_28);
    }
#line 814 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_4 = ((MR_Box) (recursion_patterns__conv0_STATE_VARIABLE_Histogram_28));
#line 814 "recursion_patterns.m"
  }
#line 814 "recursion_patterns.m"
}

#line 31 "recursion_patterns.m"
void MR_CALL 
recursion_patterns__create_recursion_types_frequency_report_2_p_0(
#line 31 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_3,
#line 31 "recursion_patterns.m"
  MR_Word * recursion_patterns__MaybeReport_4)
#line 31 "recursion_patterns.m"
{
#line 798 "recursion_patterns.m"
  {
#line 798 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 798 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeProgRepResult_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 28)));
#line 798 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 9)));
#line 801 "recursion_patterns.m"
    MR_Word recursion_patterns__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 0)));
#line 801 "recursion_patterns.m"
    MR_String recursion_patterns__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 1)));
#line 801 "recursion_patterns.m"
    MR_String recursion_patterns__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 2)));
#line 801 "recursion_patterns.m"
    MR_String recursion_patterns__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 3)));
#line 801 "recursion_patterns.m"
    MR_Word recursion_patterns__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 4)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 5)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 6)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 7)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 8)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 10)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 11)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 12)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 13)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 14)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 15)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 16)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 17)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 18)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 19)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 20)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 21)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 22)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 23)));
#line 801 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 24)));
#line 801 "recursion_patterns.m"
    MR_Word recursion_patterns__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 25)));
#line 801 "recursion_patterns.m"
    MR_Word recursion_patterns__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 26)));
#line 801 "recursion_patterns.m"
    MR_Word recursion_patterns__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 27)));

#line 806 "recursion_patterns.m"
    if ((recursion_patterns__MaybeProgRepResult_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "recursion_patterns.m"
      {
#line 804 "recursion_patterns.m"
        *recursion_patterns__MaybeReport_4 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_3[1]);
#line 803 "recursion_patterns.m"
      }
#line 806 "recursion_patterns.m"
    else
#line 806 "recursion_patterns.m"
      {
#line 806 "recursion_patterns.m"
        MR_Word recursion_patterns__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProgRepResult_5, (MR_Integer) 0)));

#line 806 "recursion_patterns.m"
        if (((MR_tag((MR_Word) recursion_patterns__V_88_88)) == (MR_mktag((MR_Integer) 1))))
#line 807 "recursion_patterns.m"
          {
#line 807 "recursion_patterns.m"
            MR_String recursion_patterns__Error_6 = ((MR_String) (MR_hl_field(MR_mktag(1), recursion_patterns__V_88_88, (MR_Integer) 0)));
#line 807 "recursion_patterns.m"
            MR_String recursion_patterns__V_17_17;
#line 807 "recursion_patterns.m"
            MR_String recursion_patterns__V_19_19;

#line 809 "recursion_patterns.m"
            {
#line 809 "recursion_patterns.m"
              recursion_patterns__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "information file: ", recursion_patterns__Error_6);
            }
#line 808 "recursion_patterns.m"
            {
#line 808 "recursion_patterns.m"
              recursion_patterns__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading procedure representation ", recursion_patterns__V_19_19);
            }
#line 808 "recursion_patterns.m"
            {
#line 808 "recursion_patterns.m"
              MR_Word base;
#line 808 "recursion_patterns.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 808 "recursion_patterns.m"
              *recursion_patterns__MaybeReport_4 = base;
#line 808 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_17_17));
#line 808 "recursion_patterns.m"
            }
#line 807 "recursion_patterns.m"
          }
#line 806 "recursion_patterns.m"
        else
#line 811 "recursion_patterns.m"
          {
#line 811 "recursion_patterns.m"
            MR_Word recursion_patterns__TypeCtorInfo_80_80 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
#line 811 "recursion_patterns.m"
            MR_Integer recursion_patterns__NumCliques_9;
#line 811 "recursion_patterns.m"
            MR_Word recursion_patterns__Histogram0_10;
#line 811 "recursion_patterns.m"
            MR_Word recursion_patterns__Histogram_11;
#line 811 "recursion_patterns.m"
            MR_Word recursion_patterns__V_13_13;
#line 811 "recursion_patterns.m"
            MR_Word recursion_patterns__V_14_14;
#line 811 "recursion_patterns.m"
            MR_Word recursion_patterns__V_15_15;
#line 814 "recursion_patterns.m"
            MR_Box recursion_patterns__conv1_Histogram0_10;

#line 813 "recursion_patterns.m"
            {
#line 813 "recursion_patterns.m"
              mercury__array__size_2_p_0(recursion_patterns__TypeCtorInfo_80_80, (MR_ArrayPtr) recursion_patterns__V_33_33, &recursion_patterns__NumCliques_9);
            }
#line 814 "recursion_patterns.m"
            {
#line 814 "recursion_patterns.m"
              recursion_patterns__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 814 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_13_13, 0) = ((MR_Box) (&recursion_patterns_scalar_common_5[0]));
#line 814 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_13_13, 1) = ((MR_Box) (recursion_patterns__create_recursion_types_frequency_report_2_p_0_1));
#line 814 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 814 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_13_13, 3) = ((MR_Box) (recursion_patterns__Deep_3));
#line 814 "recursion_patterns.m"
            }
#line 815 "recursion_patterns.m"
            {
#line 815 "recursion_patterns.m"
              recursion_patterns__V_14_14 = mercury__map__init_0_f_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0);
            }
#line 814 "recursion_patterns.m"
            {
#line 814 "recursion_patterns.m"
              array_util__array_foldl_from_1_4_p_1(recursion_patterns__TypeCtorInfo_80_80, (MR_Word) &recursion_patterns_scalar_common_1[0], recursion_patterns__V_13_13, (MR_ArrayPtr) recursion_patterns__V_33_33, ((MR_Box) (recursion_patterns__V_14_14)), &recursion_patterns__conv1_Histogram0_10);
            }
#line 814 "recursion_patterns.m"
            recursion_patterns__Histogram0_10 = ((MR_Word) recursion_patterns__conv1_Histogram0_10);
#line 816 "recursion_patterns.m"
            {
#line 816 "recursion_patterns.m"
              recursion_patterns__finalize_histogram_4_p_0(recursion_patterns__Deep_3, recursion_patterns__NumCliques_9, recursion_patterns__Histogram0_10, &recursion_patterns__Histogram_11);
            }
#line 817 "recursion_patterns.m"
            recursion_patterns__V_15_15 = (MR_Word) recursion_patterns__Histogram_11;
#line 817 "recursion_patterns.m"
            {
#line 817 "recursion_patterns.m"
              MR_Word base;
#line 817 "recursion_patterns.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 817 "recursion_patterns.m"
              *recursion_patterns__MaybeReport_4 = base;
#line 817 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__V_15_15));
#line 817 "recursion_patterns.m"
            }
#line 811 "recursion_patterns.m"
          }
#line 806 "recursion_patterns.m"
      }
#line 798 "recursion_patterns.m"
  }
#line 31 "recursion_patterns.m"
}

#line 124 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__create_clique_recursion_costs_report_3_p_0_1(
#line 124 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 124 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 124 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 124 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 124 "recursion_patterns.m"
{
#line 124 "recursion_patterns.m"
  {
#line 124 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 124 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_HeadVar__4_4;

#line 124 "recursion_patterns.m"
    {
#line 124 "recursion_patterns.m"
      analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_HeadVar__4_4);
    }
#line 124 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_HeadVar__4_4));
#line 124 "recursion_patterns.m"
  }
#line 124 "recursion_patterns.m"
}

#line 28 "recursion_patterns.m"
void MR_CALL 
recursion_patterns__create_clique_recursion_costs_report_3_p_0(
#line 28 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_4,
#line 28 "recursion_patterns.m"
  MR_Word recursion_patterns__CliquePtr_5,
#line 28 "recursion_patterns.m"
  MR_Word * recursion_patterns__MaybeCliqueRecursionReport_6)
#line 28 "recursion_patterns.m"
{
#line 72 "recursion_patterns.m"
  {
#line 72 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 72 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeFirstPDPtr_7;
#line 72 "recursion_patterns.m"
    MR_Word recursion_patterns__OtherPDPtrs_8;
#line 72 "recursion_patterns.m"
    MR_Word recursion_patterns__ParentCallPtr_9;
#line 72 "recursion_patterns.m"
    MR_Integer recursion_patterns__ParentCalls_11;

#line 73 "recursion_patterns.m"
    {
#line 73 "recursion_patterns.m"
      analysis_utils__find_clique_first_and_other_procs_4_p_0(recursion_patterns__Deep_4, recursion_patterns__CliquePtr_5, &recursion_patterns__MaybeFirstPDPtr_7, &recursion_patterns__OtherPDPtrs_8);
    }
#line 75 "recursion_patterns.m"
    {
#line 75 "recursion_patterns.m"
      profile__deep_lookup_clique_parents_3_p_0(recursion_patterns__Deep_4, recursion_patterns__CliquePtr_5, &recursion_patterns__ParentCallPtr_9);
    }
#line 76 "recursion_patterns.m"
    {
#line 76 "recursion_patterns.m"
      recursion_patterns__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(recursion_patterns__Deep_4, recursion_patterns__ParentCallPtr_9);
    }
#line 79 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 77 "recursion_patterns.m"
      {
#line 77 "recursion_patterns.m"
        MR_Word recursion_patterns__ParentCall_10;
#line 77 "recursion_patterns.m"
        MR_Word recursion_patterns__V_20_20;
#line 78 "recursion_patterns.m"
        MR_Word recursion_patterns__V_25_25;
#line 78 "recursion_patterns.m"
        MR_Word recursion_patterns__V_26_26;

#line 77 "recursion_patterns.m"
        {
#line 77 "recursion_patterns.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(recursion_patterns__Deep_4, recursion_patterns__ParentCallPtr_9, &recursion_patterns__ParentCall_10);
        }
#line 78 "recursion_patterns.m"
        recursion_patterns__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ParentCall_10, (MR_Integer) 0)));
#line 78 "recursion_patterns.m"
        recursion_patterns__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ParentCall_10, (MR_Integer) 1)));
#line 78 "recursion_patterns.m"
        recursion_patterns__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ParentCall_10, (MR_Integer) 2)));
#line 78 "recursion_patterns.m"
        {
#line 78 "recursion_patterns.m"
          recursion_patterns__ParentCalls_11 = measurements__calls_1_f_0(recursion_patterns__V_20_20);
        }
#line 77 "recursion_patterns.m"
      }
#line 79 "recursion_patterns.m"
    else
#line 81 "recursion_patterns.m"
      recursion_patterns__ParentCalls_11 = (MR_Integer) 1;
#line 105 "recursion_patterns.m"
    if ((recursion_patterns__MaybeFirstPDPtr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 106 "recursion_patterns.m"
      {
#line 107 "recursion_patterns.m"
        *recursion_patterns__MaybeCliqueRecursionReport_6 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_3[0]);
#line 106 "recursion_patterns.m"
      }
#line 105 "recursion_patterns.m"
    else
#line 84 "recursion_patterns.m"
      {
#line 84 "recursion_patterns.m"
        MR_Word recursion_patterns__FirstPDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstPDPtr_7, (MR_Integer) 0)));
#line 84 "recursion_patterns.m"
        MR_Integer recursion_patterns__NumProcs_13;
#line 84 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_22_22;

#line 85 "recursion_patterns.m"
        {
#line 85 "recursion_patterns.m"
          recursion_patterns__V_22_22 = mercury__list__length_1_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, recursion_patterns__OtherPDPtrs_8);
        }
#line 85 "recursion_patterns.m"
        recursion_patterns__NumProcs_13 = (recursion_patterns__V_22_22 + (MR_Integer) 1);
#line 10212 "recursion_patterns.c"
        if ((recursion_patterns__OtherPDPtrs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10214 "recursion_patterns.c"
          {
#line 10216 "recursion_patterns.c"
            MR_Word recursion_patterns__MaybeRecursionType_14;
#line 10218 "recursion_patterns.c"
            MR_Word recursion_patterns__PDOwn_33;
#line 10220 "recursion_patterns.c"
            MR_Integer recursion_patterns__TotalCalls_34;
#line 10222 "recursion_patterns.c"
            MR_Word recursion_patterns__MaybeCoverageReport_35;

#line 116 "recursion_patterns.m"
            {
#line 116 "recursion_patterns.m"
              profile__deep_lookup_pd_own_3_p_0(recursion_patterns__Deep_4, recursion_patterns__FirstPDPtr_12, &recursion_patterns__PDOwn_33);
            }
#line 117 "recursion_patterns.m"
            {
#line 117 "recursion_patterns.m"
              recursion_patterns__TotalCalls_34 = measurements__calls_1_f_0(recursion_patterns__PDOwn_33);
            }
#line 118 "recursion_patterns.m"
            {
#line 118 "recursion_patterns.m"
              create_report__create_dynamic_procrep_coverage_report_3_p_0(recursion_patterns__Deep_4, recursion_patterns__FirstPDPtr_12, &recursion_patterns__MaybeCoverageReport_35);
            }
#line 132 "recursion_patterns.m"
            if (((MR_tag((MR_Word) recursion_patterns__MaybeCoverageReport_35)) == (MR_mktag((MR_Integer) 1))))
#line 134 "recursion_patterns.m"
              recursion_patterns__MaybeRecursionType_14 = (MR_Word) recursion_patterns__MaybeCoverageReport_35;
#line 132 "recursion_patterns.m"
            else
#line 120 "recursion_patterns.m"
              {
#line 120 "recursion_patterns.m"
                MR_Word recursion_patterns__CoverageReport_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__MaybeCoverageReport_35, (MR_Integer) 0)));
#line 120 "recursion_patterns.m"
                MR_Word recursion_patterns__ProcRep_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CoverageReport_36, (MR_Integer) 1)));
#line 120 "recursion_patterns.m"
                MR_Word recursion_patterns__CoverageArray_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CoverageReport_36, (MR_Integer) 2)));
#line 120 "recursion_patterns.m"
                MR_Word recursion_patterns__Goal_40;
#line 120 "recursion_patterns.m"
                MR_Word recursion_patterns__Slots_41;
#line 120 "recursion_patterns.m"
                MR_Word recursion_patterns__CallSitesMap_42;
#line 120 "recursion_patterns.m"
                MR_Word recursion_patterns__Info_43;
#line 120 "recursion_patterns.m"
                MR_Word recursion_patterns__RecursionData_44;
#line 120 "recursion_patterns.m"
                MR_Word recursion_patterns__RecursionType_45;
#line 120 "recursion_patterns.m"
                MR_Word recursion_patterns__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcRep_38, (MR_Integer) 1)));
#line 120 "recursion_patterns.m"
                MR_Word recursion_patterns__V_48_48;
#line 120 "recursion_patterns.m"
                MR_Word recursion_patterns__V_49_49;
#line 121 "recursion_patterns.m"
                MR_Word recursion_patterns__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CoverageReport_36, (MR_Integer) 0)));
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcRep_38, (MR_Integer) 0)));
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 0)));
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__V_53_53;
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__V_54_54;
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__V_55_55;
#line 124 "recursion_patterns.m"
                MR_Box recursion_patterns__conv1_CallSitesMap_42;

#line 122 "recursion_patterns.m"
                recursion_patterns__Goal_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 1)));
#line 122 "recursion_patterns.m"
                recursion_patterns__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 2)));
#line 122 "recursion_patterns.m"
                recursion_patterns__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 3)));
#line 122 "recursion_patterns.m"
                recursion_patterns__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 4)));
#line 123 "recursion_patterns.m"
                {
#line 123 "recursion_patterns.m"
                  analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(recursion_patterns__Deep_4, recursion_patterns__FirstPDPtr_12, &recursion_patterns__Slots_41);
                }
#line 124 "recursion_patterns.m"
                {
#line 124 "recursion_patterns.m"
                  recursion_patterns__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 124 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_48_48, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[0]));
#line 124 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_48_48, 1) = ((MR_Box) (recursion_patterns__create_clique_recursion_costs_report_3_p_0_1));
#line 124 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 124 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_48_48, 3) = ((MR_Box) (recursion_patterns__Deep_4));
#line 124 "recursion_patterns.m"
                }
#line 125 "recursion_patterns.m"
                {
#line 125 "recursion_patterns.m"
                  recursion_patterns__V_49_49 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &recursion_patterns_scalar_common_2[0]);
                }
#line 124 "recursion_patterns.m"
                {
#line 124 "recursion_patterns.m"
                  mercury__list__foldl_4_p_0((MR_Word) &recursion_patterns_scalar_common_1[1], (MR_Word) &recursion_patterns_scalar_common_1[2], recursion_patterns__V_48_48, recursion_patterns__Slots_41, ((MR_Box) (recursion_patterns__V_49_49)), &recursion_patterns__conv1_CallSitesMap_42);
                }
#line 124 "recursion_patterns.m"
                recursion_patterns__CallSitesMap_42 = ((MR_Word) recursion_patterns__conv1_CallSitesMap_42);
#line 126 "recursion_patterns.m"
                {
#line 126 "recursion_patterns.m"
                  recursion_patterns__Info_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 126 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__Info_43, 0) = ((MR_Box) (recursion_patterns__CliquePtr_5));
#line 126 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__Info_43, 1) = ((MR_Box) (recursion_patterns__CallSitesMap_42));
#line 126 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__Info_43, 2) = ((MR_Box) (recursion_patterns__CoverageArray_39));
#line 126 "recursion_patterns.m"
                }
#line 128 "recursion_patterns.m"
                {
#line 128 "recursion_patterns.m"
                  recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), recursion_patterns__Goal_40, &recursion_patterns__RecursionData_44);
                }
#line 129 "recursion_patterns.m"
                {
#line 129 "recursion_patterns.m"
                  recursion_patterns__recursion_data_to_recursion_type_4_p_0(recursion_patterns__ParentCalls_11, recursion_patterns__TotalCalls_34, recursion_patterns__RecursionData_44, &recursion_patterns__RecursionType_45);
                }
#line 131 "recursion_patterns.m"
                {
#line 131 "recursion_patterns.m"
                  recursion_patterns__MaybeRecursionType_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 131 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__MaybeRecursionType_14, 0) = ((MR_Box) (recursion_patterns__RecursionType_45));
#line 131 "recursion_patterns.m"
                }
#line 120 "recursion_patterns.m"
              }
#line 101 "recursion_patterns.m"
            if (((MR_tag((MR_Word) recursion_patterns__MaybeRecursionType_14)) == (MR_mktag((MR_Integer) 1))))
#line 103 "recursion_patterns.m"
              *recursion_patterns__MaybeCliqueRecursionReport_6 = (MR_Word) recursion_patterns__MaybeRecursionType_14;
#line 101 "recursion_patterns.m"
            else
#line 97 "recursion_patterns.m"
              {
#line 97 "recursion_patterns.m"
                MR_Word recursion_patterns__RecursionType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__MaybeRecursionType_14, (MR_Integer) 0)));
#line 97 "recursion_patterns.m"
                MR_Word recursion_patterns__CliqueRecursionReport_18;

#line 98 "recursion_patterns.m"
                {
#line 98 "recursion_patterns.m"
                  recursion_patterns__CliqueRecursionReport_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 98 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_18, 0) = ((MR_Box) (recursion_patterns__CliquePtr_5));
#line 98 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_18, 1) = ((MR_Box) (recursion_patterns__RecursionType_17));
#line 98 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_18, 2) = ((MR_Box) (recursion_patterns__NumProcs_13));
#line 98 "recursion_patterns.m"
                }
#line 100 "recursion_patterns.m"
                {
#line 100 "recursion_patterns.m"
                  MR_Word base;
#line 100 "recursion_patterns.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 100 "recursion_patterns.m"
                  *recursion_patterns__MaybeCliqueRecursionReport_6 = base;
#line 100 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__CliqueRecursionReport_18));
#line 100 "recursion_patterns.m"
                }
#line 97 "recursion_patterns.m"
              }
#line 10397 "recursion_patterns.c"
          }
#line 10399 "recursion_patterns.c"
        else
#line 10401 "recursion_patterns.c"
          {
#line 10403 "recursion_patterns.c"
            MR_Word recursion_patterns__RecursionType_65;
#line 10405 "recursion_patterns.c"
            MR_Word recursion_patterns__CliqueRecursionReport_66;

#line 94 "recursion_patterns.m"
            {
#line 94 "recursion_patterns.m"
              recursion_patterns__RecursionType_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 94 "recursion_patterns.m"
              MR_hl_field(MR_mktag(3), recursion_patterns__RecursionType_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 94 "recursion_patterns.m"
              MR_hl_field(MR_mktag(3), recursion_patterns__RecursionType_65, 1) = ((MR_Box) (recursion_patterns__NumProcs_13));
#line 94 "recursion_patterns.m"
            }
#line 98 "recursion_patterns.m"
            {
#line 98 "recursion_patterns.m"
              recursion_patterns__CliqueRecursionReport_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 98 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_66, 0) = ((MR_Box) (recursion_patterns__CliquePtr_5));
#line 98 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_66, 1) = ((MR_Box) (recursion_patterns__RecursionType_65));
#line 98 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_66, 2) = ((MR_Box) (recursion_patterns__NumProcs_13));
#line 98 "recursion_patterns.m"
            }
#line 100 "recursion_patterns.m"
            {
#line 100 "recursion_patterns.m"
              MR_Word base;
#line 100 "recursion_patterns.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 100 "recursion_patterns.m"
              *recursion_patterns__MaybeCliqueRecursionReport_6 = base;
#line 100 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__CliqueRecursionReport_66));
#line 100 "recursion_patterns.m"
            }
#line 10442 "recursion_patterns.c"
          }
#line 84 "recursion_patterns.m"
      }
#line 72 "recursion_patterns.m"
  }
#line 28 "recursion_patterns.m"
}

void mercury__recursion_patterns__init(void)
{
}

void mercury__recursion_patterns__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_first_proc_info_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_recursion_analysis_info_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_recursion_data_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0);
	MR_register_type_ctor_info(&recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0);
}

void mercury__recursion_patterns__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module recursion_patterns. */
