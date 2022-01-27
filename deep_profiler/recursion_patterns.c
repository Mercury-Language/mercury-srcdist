/*
** Automatically generated from `recursion_patterns.m'
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


/* :- module recursion_patterns. */
/* :- implementation. */

/*
INIT mercury__recursion_patterns__init
ENDINIT
*/

#include "recursion_patterns.mih"


#include "analysis_utils.mih"
#include "array.mih"
#include "array_util.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "coverage.mih"
#include "create_report.mih"
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

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_99_117_114_115_105_111_110_95_100_97_116_97_95_97_110_100_95_112_114_111_98_97_98_105_108_105_116_121_95_95_55_53_56_95_95_49_95_95_91_50_93_95_48_4_p_0(
#line 758 "recursion_patterns.m"
  MR_Float recursion_patterns__Prob_1,
#line 758 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_14,
#line 758 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__4_15);

#line 1005 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_112_114_111_99_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
#line 1005 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 1005 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 1005 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 1005 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5);

#line 1002 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0_1(
#line 1002 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 1002 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 1002 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 1002 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 985 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
#line 985 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 985 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 985 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 985 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5);

#line 857 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0_1(
#line 857 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 857 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 857 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 857 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 822 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0(
#line 822 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 822 "recursion_patterns.m"
  MR_Word recursion_patterns__CliquePtr_8,
#line 822 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_27,
#line 822 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_28);

#line 971 "recursion_patterns.m"
static MR_Integer MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__971__1_1_f_0(
#line 971 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_26);

#line 974 "recursion_patterns.m"
static MR_Word MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__974__1_1_f_0(
#line 974 "recursion_patterns.m"
  MR_String recursion_patterns__HeadVar__1_34);

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__758__1_4_p_0(
#line 758 "recursion_patterns.m"
  MR_Float recursion_patterns__Prob_1,
#line 758 "recursion_patterns.m"
  MR_Integer recursion_patterns__HeadVar__2_13,
#line 758 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_14,
#line 758 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__4_15);

#line 891 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0(
#line 891 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 891 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 891 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 891 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0(
#line 891 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 891 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 883 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0(
#line 883 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 883 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 883 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 883 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0(
#line 883 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 883 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 278 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0(
#line 278 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 278 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 278 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 278 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0(
#line 278 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 278 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 287 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0(
#line 287 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 287 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 287 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 287 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0(
#line 287 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 287 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 268 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0(
#line 268 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 268 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 268 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 268 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0(
#line 268 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 268 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 290 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0(
#line 290 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 290 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 290 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 290 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0(
#line 290 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 290 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 867 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0(
#line 867 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 867 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 867 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 867 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0(
#line 867 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 867 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 859 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0(
#line 859 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 859 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 859 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3);

#line 859 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0(
#line 859 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 859 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2);

#line 1005 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_proc_rec_type_5_p_0(
#line 1005 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 1005 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 1005 "recursion_patterns.m"
  MR_Word recursion_patterns___PSPtr_8,
#line 1005 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 1005 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5);

#line 985 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_rec_type_5_p_0(
#line 985 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 985 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 985 "recursion_patterns.m"
  MR_Word recursion_patterns___RecursionType_8,
#line 985 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 985 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5);

#line 982 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_4_p_0_1(
#line 982 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 982 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 982 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 982 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 977 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_4_p_0(
#line 977 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_5,
#line 977 "recursion_patterns.m"
  MR_Integer recursion_patterns__NumCliques_6,
#line 977 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_8,
#line 977 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_9);

#line 971 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_2(
#line 971 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 971 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1);

#line 974 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_1(
#line 974 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 974 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1);

#line 960 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0(
#line 960 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 960 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__2_2);

#line 940 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__update_procs_map_3_p_0(
#line 940 "recursion_patterns.m"
  MR_Word recursion_patterns__FirstProcInfo_4,
#line 940 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Map_0_16,
#line 940 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Map_17);

#line 898 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__update_histogram_4_p_0(
#line 898 "recursion_patterns.m"
  MR_Word recursion_patterns__MaybeFirstProcInfo_5,
#line 898 "recursion_patterns.m"
  MR_Word recursion_patterns__SimpleType_6,
#line 898 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_19,
#line 898 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_20);

#line 822 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__rec_types_freq_build_histogram_5_p_0(
#line 822 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 822 "recursion_patterns.m"
  MR_Integer recursion_patterns__HeadVar__2_7,
#line 822 "recursion_patterns.m"
  MR_Word recursion_patterns__CliquePtr_8,
#line 822 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_27,
#line 822 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_28);

#line 793 "recursion_patterns.m"
static MR_String MR_CALL 
recursion_patterns__error_to_string_1_f_0(
#line 793 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1);

#line 738 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursions_cross_product_2_4_p_0(
#line 738 "recursion_patterns.m"
  MR_Integer recursion_patterns__HeadVar__1_1,
#line 738 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 738 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3,
#line 738 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__4_4);

#line 728 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursions_cross_product_3_p_0(
#line 728 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 728 "recursion_patterns.m"
  MR_Word recursion_patterns__PairsB_2,
#line 728 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__3_3);

#line 700 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__condense_recursions_2_3_p_0(
#line 700 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 700 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 700 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__3_3);

#line 668 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__merge_recursion_data_sequence_3_p_0(
#line 668 "recursion_patterns.m"
  MR_Word recursion_patterns__A_4,
#line 668 "recursion_patterns.m"
  MR_Word recursion_patterns__B_5,
#line 668 "recursion_patterns.m"
  MR_Word * recursion_patterns__Result_6);

#line 606 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__merge_recursion_data_after_branch_3_p_0(
#line 606 "recursion_patterns.m"
  MR_Word recursion_patterns__A_4,
#line 606 "recursion_patterns.m"
  MR_Word recursion_patterns__B_5,
#line 606 "recursion_patterns.m"
  MR_Word * recursion_patterns__Result_6);

#line 543 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__atomic_goal_recursion_data_4_p_0(
#line 543 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_5,
#line 543 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_6,
#line 543 "recursion_patterns.m"
  MR_Word recursion_patterns__AtomicGoal_7,
#line 543 "recursion_patterns.m"
  MR_Word * recursion_patterns__RecursionData_8);

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_2(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_1(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 512 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0(
#line 512 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_1,
#line 512 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_2,
#line 512 "recursion_patterns.m"
  MR_Integer recursion_patterns__CaseNum_3,
#line 512 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 512 "recursion_patterns.m"
  MR_Float recursion_patterns__TotalCalls_5,
#line 512 "recursion_patterns.m"
  MR_Integer recursion_patterns__CallsRemaining_6,
#line 512 "recursion_patterns.m"
  MR_Word * recursion_patterns__RecursionData_7);

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0_2(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0_1(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 474 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0(
#line 474 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_8,
#line 474 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_9,
#line 474 "recursion_patterns.m"
  MR_Word recursion_patterns__Cond_10,
#line 474 "recursion_patterns.m"
  MR_Word recursion_patterns__Then_11,
#line 474 "recursion_patterns.m"
  MR_Word recursion_patterns__Else_12,
#line 474 "recursion_patterns.m"
  MR_Integer recursion_patterns__Calls_13,
#line 474 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_RecursionData_28);

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_2(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_1(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 416 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0(
#line 416 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_1,
#line 416 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_2,
#line 416 "recursion_patterns.m"
  MR_Integer recursion_patterns__DisjNum_3,
#line 416 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 416 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5);

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_2(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_1(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3);

#line 367 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0(
#line 367 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_1,
#line 367 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_2,
#line 367 "recursion_patterns.m"
  MR_Integer recursion_patterns__ConjNum_3,
#line 367 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 367 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5);

#line 304 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__goal_recursion_data_4_p_0(
#line 304 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_5,
#line 304 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_6,
#line 304 "recursion_patterns.m"
  MR_Word recursion_patterns__GoalRep_7,
#line 304 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_RecursionData_30);

#line 260 "recursion_patterns.m"
static MR_Float MR_CALL 
recursion_patterns__single_rec_average_recursion_cost_3_f_0(
#line 260 "recursion_patterns.m"
  MR_Float recursion_patterns__BaseCost_5,
#line 260 "recursion_patterns.m"
  MR_Float recursion_patterns__RecCost_6,
#line 260 "recursion_patterns.m"
  MR_Float recursion_patterns__AvgMaxDepth_7);

#line 234 "recursion_patterns.m"
static MR_Float MR_CALL 
recursion_patterns__single_rec_recursion_cost_3_f_0(
#line 234 "recursion_patterns.m"
  MR_Float recursion_patterns__BaseCost_5,
#line 234 "recursion_patterns.m"
  MR_Float recursion_patterns__RecCost_6,
#line 234 "recursion_patterns.m"
  MR_Integer recursion_patterns__LevelI_7);

#line 211 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_level_report_3_p_0(
#line 211 "recursion_patterns.m"
  MR_Float recursion_patterns__TotalCalls_4,
#line 211 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 211 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__3_3);

#line 206 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_3(
#line 206 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 206 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1);

#line 201 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_2(
#line 201 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 201 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 201 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_2);

#line 182 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_1(
#line 182 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 182 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1);

#line 139 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0(
#line 139 "recursion_patterns.m"
  MR_Integer recursion_patterns__ParentCallsI_5,
#line 139 "recursion_patterns.m"
  MR_Integer recursion_patterns__TotalCallsI_6,
#line 139 "recursion_patterns.m"
  MR_Word recursion_patterns__RecursionData_7,
#line 139 "recursion_patterns.m"
  MR_Word * recursion_patterns__Type_8);

#line 816 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__create_recursion_types_frequency_report_2_p_0_1(
#line 816 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 816 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 816 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 816 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_3,
#line 816 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_4);

#line 126 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__create_clique_recursion_costs_report_3_p_0_1(
#line 126 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 126 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 126 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 126 "recursion_patterns.m"
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



#include "profile.mh"
#include "profile.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1387 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 1396 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_TypeInfo) &analysis_utils__analysis_utils__type_ctor_info_callee_0
  }
};

#line 1404 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
  }
};

#line 1413 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__tree234__pti_tree234_2__plain_report__type_ctor_info_recursion_type_simple_0__plain_recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_recursion_type_simple_0,
    (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0
  }
};

#line 1422 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct2 recursion_patterns__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_recursion_patterns__type_ctor_info_recursion_level_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0
  }
};

#line 1431 "recursion_patterns.c"
static const MR_FA_PseudoTypeInfo_Struct1 recursion_patterns__maybe__pti_maybe_1__plain_recursion_patterns__type_ctor_info_first_proc_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_first_proc_info_0
  }
};

#line 1439 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_first_proc_info_0_0[2] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0
};

#line 1445 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_first_proc_info_0_0[2] = {
  (MR_String) "fpi_pdesc",
  (MR_String) "fpi_prof_info"
};

#line 1451 "recursion_patterns.c"
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

#line 1466 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_first_proc_info_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_first_proc_info_0_0
};

#line 1471 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_first_proc_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_first_proc_info_0_0
  }
};

#line 1480 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_first_proc_info_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_first_proc_info_0_0
};

#line 1485 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_first_proc_info_0[1] = {
  (MR_Integer) 0
};

#line 1490 "recursion_patterns.c"
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

#line 1507 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_own_and_inherit_prof_info_0_0[2] = {
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
};

#line 1513 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_own_and_inherit_prof_info_0_0[2] = {
  (MR_String) "oai_own",
  (MR_String) "oai_inherit"
};

#line 1519 "recursion_patterns.c"
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

#line 1534 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_own_and_inherit_prof_info_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_own_and_inherit_prof_info_0_0
};

#line 1539 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_own_and_inherit_prof_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_own_and_inherit_prof_info_0_0
  }
};

#line 1548 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_own_and_inherit_prof_info_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_own_and_inherit_prof_info_0_0
};

#line 1553 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_own_and_inherit_prof_info_0[1] = {
  (MR_Integer) 0
};

#line 1558 "recursion_patterns.c"
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

#line 1575 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct2 recursion_patterns__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_TypeInfo) &recursion_patterns__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
  }
};

#line 1584 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0 = {
  &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1,
  {
    (MR_TypeInfo) &coverage__coverage__type_ctor_info_coverage_info_0
  }
};

#line 1592 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_analysis_info_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
  (MR_PseudoTypeInfo) &recursion_patterns__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0,
  (MR_PseudoTypeInfo) &recursion_patterns__mdbcomp__goal_path__ti_goal_attr_array_1coverage__type_ctor_info_coverage_info_0
};

#line 1599 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_analysis_info_0_0[3] = {
  (MR_String) "rai_this_clique",
  (MR_String) "rai_call_sites",
  (MR_String) "rai_coverage_info"
};

#line 1606 "recursion_patterns.c"
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

#line 1621 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_analysis_info_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_analysis_info_0_0
};

#line 1626 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_analysis_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_analysis_info_0_0
  }
};

#line 1635 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_analysis_info_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_analysis_info_0_0
};

#line 1640 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_analysis_info_0[1] = {
  (MR_Integer) 0
};

#line 1645 "recursion_patterns.c"
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

#line 1662 "recursion_patterns.c"
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

#line 1677 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct2 recursion_patterns__pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0
  }
};

#line 1686 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &recursion_patterns__pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0
  }
};

#line 1694 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__set_ordlist__ti_set_ordlist_1recursion_patterns__type_ctor_info_recursion_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0
  }
};

#line 1702 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_data_0_1[3] = {
  (MR_PseudoTypeInfo) &recursion_patterns__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0recursion_patterns__type_ctor_info_recursion_level_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &recursion_patterns__set_ordlist__ti_set_ordlist_1recursion_patterns__type_ctor_info_recursion_error_0
};

#line 1709 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_data_0_1[3] = {
  (MR_String) "rd_recursions",
  (MR_String) "rd_maximum",
  (MR_String) "rd_errors"
};

#line 1716 "recursion_patterns.c"
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

#line 1731 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_0
};

#line 1736 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_data_0_1[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_1
};

#line 1741 "recursion_patterns.c"
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

#line 1755 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_data_0[2] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_0,
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_data_0_1
};

#line 1761 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_data_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1767 "recursion_patterns.c"
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

#line 1784 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_error_0[1] = {
  (MR_Integer) 0
};

#line 1789 "recursion_patterns.c"
static const MR_NotagFunctorDesc recursion_patterns__recursion_patterns__notag_functor_desc_recursion_error_0 = {
  (MR_String) "re_unhandled_determinism",
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0,
  NULL
};

#line 1796 "recursion_patterns.c"
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

#line 1813 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_level_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1819 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_level_0_0[2] = {
  (MR_String) "rl_cost",
  (MR_String) "rl_probability"
};

#line 1825 "recursion_patterns.c"
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

#line 1840 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_level_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_level_0_0
};

#line 1845 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_level_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_level_0_0
  }
};

#line 1854 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_level_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_level_0_0
};

#line 1859 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_level_0[1] = {
  (MR_Integer) 0
};

#line 1864 "recursion_patterns.c"
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

#line 1881 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct1 recursion_patterns__maybe__ti_maybe_1recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0
  }
};

#line 1889 "recursion_patterns.c"
static const MR_FA_TypeInfo_Struct2 recursion_patterns__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0
  }
};

#line 1898 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_type_raw_freq_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &recursion_patterns__maybe__ti_maybe_1recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &recursion_patterns__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0
};

#line 1905 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_type_raw_freq_data_0_0[3] = {
  (MR_String) "rtrfd_freq",
  (MR_String) "rtrfd_maybe_prof_info",
  (MR_String) "rtrfd_entry_procs"
};

#line 1912 "recursion_patterns.c"
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

#line 1927 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_freq_data_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_freq_data_0_0
};

#line 1932 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_freq_data_0_0
  }
};

#line 1941 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_freq_data_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_freq_data_0_0
};

#line 1946 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_freq_data_0[1] = {
  (MR_Integer) 0
};

#line 1951 "recursion_patterns.c"
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

#line 1968 "recursion_patterns.c"
static const MR_PseudoTypeInfo recursion_patterns__recursion_patterns__field_types_recursion_type_raw_proc_freq_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &recursion_patterns__recursion_patterns__type_ctor_info_own_and_inherit_prof_info_0,
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0
};

#line 1975 "recursion_patterns.c"
static const MR_ConstString recursion_patterns__recursion_patterns__field_names_recursion_type_raw_proc_freq_data_0_0[3] = {
  (MR_String) "rtrpfd_freq",
  (MR_String) "rtrpfd_prof_info",
  (MR_String) "rtrpfd_proc_desc"
};

#line 1982 "recursion_patterns.c"
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

#line 1997 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_proc_freq_data_0_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_proc_freq_data_0_0
};

#line 2002 "recursion_patterns.c"
static const MR_DuPtagLayout recursion_patterns__recursion_patterns__du_ptag_ordered_recursion_type_raw_proc_freq_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    recursion_patterns__recursion_patterns__du_stag_ordered_recursion_type_raw_proc_freq_data_0_0
  }
};

#line 2011 "recursion_patterns.c"
static const MR_DuFunctorDescPtr recursion_patterns__recursion_patterns__du_name_ordered_recursion_type_raw_proc_freq_data_0[1] = {
  &recursion_patterns__recursion_patterns__du_functor_desc_recursion_type_raw_proc_freq_data_0_0
};

#line 2016 "recursion_patterns.c"
static const MR_Integer recursion_patterns__recursion_patterns__functor_number_map_recursion_type_raw_proc_freq_data_0[1] = {
  (MR_Integer) 0
};

#line 2021 "recursion_patterns.c"
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

#line 2038 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0_10001(
#line 2041 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2043 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2045 "recursion_patterns.c"
{
#line 2047 "recursion_patterns.c"
  {
#line 2049 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2052 "recursion_patterns.c"
    {
#line 2054 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____first_proc_info_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2057 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2059 "recursion_patterns.c"
  }
#line 2061 "recursion_patterns.c"
}

#line 2064 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0_10001(
#line 2067 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2069 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2071 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2073 "recursion_patterns.c"
{
#line 2075 "recursion_patterns.c"
  {
#line 2077 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2080 "recursion_patterns.c"
    {
#line 2082 "recursion_patterns.c"
      recursion_patterns____Compare____first_proc_info_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2085 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2087 "recursion_patterns.c"
  }
#line 2089 "recursion_patterns.c"
}

#line 2092 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0_10001(
#line 2095 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2097 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2099 "recursion_patterns.c"
{
#line 2101 "recursion_patterns.c"
  {
#line 2103 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2106 "recursion_patterns.c"
    {
#line 2108 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____own_and_inherit_prof_info_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2111 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2113 "recursion_patterns.c"
  }
#line 2115 "recursion_patterns.c"
}

#line 2118 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0_10001(
#line 2121 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2123 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2125 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2127 "recursion_patterns.c"
{
#line 2129 "recursion_patterns.c"
  {
#line 2131 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2134 "recursion_patterns.c"
    {
#line 2136 "recursion_patterns.c"
      recursion_patterns____Compare____own_and_inherit_prof_info_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2139 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2141 "recursion_patterns.c"
  }
#line 2143 "recursion_patterns.c"
}

#line 2146 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0_10001(
#line 2149 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2151 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2153 "recursion_patterns.c"
{
#line 2155 "recursion_patterns.c"
  {
#line 2157 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2160 "recursion_patterns.c"
    {
#line 2162 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_analysis_info_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2165 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2167 "recursion_patterns.c"
  }
#line 2169 "recursion_patterns.c"
}

#line 2172 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0_10001(
#line 2175 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2177 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2179 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2181 "recursion_patterns.c"
{
#line 2183 "recursion_patterns.c"
  {
#line 2185 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2188 "recursion_patterns.c"
    {
#line 2190 "recursion_patterns.c"
      recursion_patterns____Compare____recursion_analysis_info_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2193 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2195 "recursion_patterns.c"
  }
#line 2197 "recursion_patterns.c"
}

#line 2200 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0_10001(
#line 2203 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2205 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2207 "recursion_patterns.c"
{
#line 2209 "recursion_patterns.c"
  {
#line 2211 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2214 "recursion_patterns.c"
    {
#line 2216 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_data_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2219 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2221 "recursion_patterns.c"
  }
#line 2223 "recursion_patterns.c"
}

#line 2226 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0_10001(
#line 2229 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2231 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2233 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2235 "recursion_patterns.c"
{
#line 2237 "recursion_patterns.c"
  {
#line 2239 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2242 "recursion_patterns.c"
    {
#line 2244 "recursion_patterns.c"
      recursion_patterns____Compare____recursion_data_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2247 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2249 "recursion_patterns.c"
  }
#line 2251 "recursion_patterns.c"
}

#line 2254 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0_10001(
#line 2257 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2259 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2261 "recursion_patterns.c"
{
#line 2263 "recursion_patterns.c"
  {
#line 2265 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2268 "recursion_patterns.c"
    {
#line 2270 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_error_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2273 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2275 "recursion_patterns.c"
  }
#line 2277 "recursion_patterns.c"
}

#line 2280 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0_10001(
#line 2283 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2285 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2287 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2289 "recursion_patterns.c"
{
#line 2291 "recursion_patterns.c"
  {
#line 2293 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2296 "recursion_patterns.c"
    {
#line 2298 "recursion_patterns.c"
      recursion_patterns____Compare____recursion_error_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2301 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2303 "recursion_patterns.c"
  }
#line 2305 "recursion_patterns.c"
}

#line 2308 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0_10001(
#line 2311 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2313 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2315 "recursion_patterns.c"
{
#line 2317 "recursion_patterns.c"
  {
#line 2319 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2322 "recursion_patterns.c"
    {
#line 2324 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_level_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2327 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2329 "recursion_patterns.c"
  }
#line 2331 "recursion_patterns.c"
}

#line 2334 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0_10001(
#line 2337 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2339 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2341 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2343 "recursion_patterns.c"
{
#line 2345 "recursion_patterns.c"
  {
#line 2347 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2350 "recursion_patterns.c"
    {
#line 2352 "recursion_patterns.c"
      recursion_patterns____Compare____recursion_level_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2355 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2357 "recursion_patterns.c"
  }
#line 2359 "recursion_patterns.c"
}

#line 2362 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0_10001(
#line 2365 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2367 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2369 "recursion_patterns.c"
{
#line 2371 "recursion_patterns.c"
  {
#line 2373 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2376 "recursion_patterns.c"
    {
#line 2378 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_type_raw_freq_data_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2381 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2383 "recursion_patterns.c"
  }
#line 2385 "recursion_patterns.c"
}

#line 2388 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0_10001(
#line 2391 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2393 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2395 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2397 "recursion_patterns.c"
{
#line 2399 "recursion_patterns.c"
  {
#line 2401 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2404 "recursion_patterns.c"
    {
#line 2406 "recursion_patterns.c"
      recursion_patterns____Compare____recursion_type_raw_freq_data_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2409 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2411 "recursion_patterns.c"
  }
#line 2413 "recursion_patterns.c"
}

#line 2416 "recursion_patterns.c"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0_10001(
#line 2419 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 2421 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2)
#line 2423 "recursion_patterns.c"
{
#line 2425 "recursion_patterns.c"
  {
#line 2427 "recursion_patterns.c"
    MR_bool recursion_patterns__succeeded;

#line 2430 "recursion_patterns.c"
    {
#line 2432 "recursion_patterns.c"
      recursion_patterns__succeeded = recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0(((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2));
    }
#line 2435 "recursion_patterns.c"
    return recursion_patterns__succeeded;
#line 2437 "recursion_patterns.c"
  }
#line 2439 "recursion_patterns.c"
}

#line 2442 "recursion_patterns.c"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0_10001(
#line 2445 "recursion_patterns.c"
  MR_Box * recursion_patterns__wrapper_arg_1,
#line 2447 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 2449 "recursion_patterns.c"
  MR_Box recursion_patterns__wrapper_arg_3)
#line 2451 "recursion_patterns.c"
{
#line 2453 "recursion_patterns.c"
  {
#line 2455 "recursion_patterns.c"
    MR_Word recursion_patterns__conv0_HeadVar__1_1;

#line 2458 "recursion_patterns.c"
    {
#line 2460 "recursion_patterns.c"
      recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0(&recursion_patterns__conv0_HeadVar__1_1, ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3));
    }
#line 2463 "recursion_patterns.c"
    *recursion_patterns__wrapper_arg_1 = ((MR_Box) (recursion_patterns__conv0_HeadVar__1_1));
#line 2465 "recursion_patterns.c"
  }
#line 2467 "recursion_patterns.c"
}

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_99_117_114_115_105_111_110_95_100_97_116_97_95_97_110_100_95_112_114_111_98_97_98_105_108_105_116_121_95_95_55_53_56_95_95_49_95_95_91_50_93_95_48_4_p_0(
#line 758 "recursion_patterns.m"
  MR_Float recursion_patterns__Prob_1,
#line 758 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_14,
#line 758 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__4_15)
#line 758 "recursion_patterns.m"
{
#line 758 "recursion_patterns.m"
  {
#line 758 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 758 "recursion_patterns.m"
    MR_Float recursion_patterns__Cost_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_14, (MR_Integer) 0)));
#line 758 "recursion_patterns.m"
    MR_Float recursion_patterns__Prob0_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_14, (MR_Integer) 1)));
#line 758 "recursion_patterns.m"
    MR_Float recursion_patterns__Prob_23;

#line 768 "recursion_patterns.m"
    {
#line 768 "recursion_patterns.m"
      recursion_patterns__Prob_23 = measurement_units__and_2_f_0(recursion_patterns__Prob0_22, recursion_patterns__Prob_1);
    }
#line 767 "recursion_patterns.m"
    {
#line 767 "recursion_patterns.m"
      MR_Word base;
#line 767 "recursion_patterns.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 767 "recursion_patterns.m"
      *recursion_patterns__HeadVar__4_15 = base;
#line 767 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(recursion_patterns__Cost_21);
#line 767 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 1) = MR_box_float(recursion_patterns__Prob_23);
#line 767 "recursion_patterns.m"
    }
#line 758 "recursion_patterns.m"
  }
#line 758 "recursion_patterns.m"
}

#line 1005 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_112_114_111_99_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
#line 1005 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 1005 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 1005 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 1005 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5)
#line 1005 "recursion_patterns.m"
{
#line 1012 "recursion_patterns.m"
  {
#line 1012 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 1012 "recursion_patterns.m"
    MR_Integer recursion_patterns__Freq_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
#line 1012 "recursion_patterns.m"
    MR_Word recursion_patterns__ProfInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
#line 1012 "recursion_patterns.m"
    MR_Word recursion_patterns__ProcDesc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 2)));
#line 1012 "recursion_patterns.m"
    MR_Word recursion_patterns__Percent_12;
#line 1012 "recursion_patterns.m"
    MR_Word recursion_patterns__Summary_13;
#line 1012 "recursion_patterns.m"
    MR_Word recursion_patterns__Own_14;
#line 1012 "recursion_patterns.m"
    MR_Word recursion_patterns__Inherit_15;
#line 1012 "recursion_patterns.m"
    MR_Float recursion_patterns__V_16_16;
#line 1012 "recursion_patterns.m"
    MR_Float recursion_patterns__V_17_17;

#line 1013 "recursion_patterns.m"
    {
#line 1013 "recursion_patterns.m"
      recursion_patterns__V_17_17 = mercury__float__float_1_f_0(recursion_patterns__Freq_9);
    }
#line 1013 "recursion_patterns.m"
    {
#line 1013 "recursion_patterns.m"
      recursion_patterns__V_16_16 = mercury__float__f_slash_2_f_0(recursion_patterns__V_17_17, recursion_patterns__NumCliques_7);
    }
#line 1013 "recursion_patterns.m"
    {
#line 1013 "recursion_patterns.m"
      recursion_patterns__Percent_12 = measurement_units__percent_1_f_0(recursion_patterns__V_16_16);
    }
#line 1014 "recursion_patterns.m"
    recursion_patterns__Own_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_10, (MR_Integer) 0)));
#line 1014 "recursion_patterns.m"
    recursion_patterns__Inherit_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_10, (MR_Integer) 1)));
#line 1015 "recursion_patterns.m"
    {
#line 1015 "recursion_patterns.m"
      create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_proc_desc_0, recursion_patterns__Deep_6, ((MR_Box) (recursion_patterns__ProcDesc_11)), recursion_patterns__Own_14, recursion_patterns__Inherit_15, &recursion_patterns__Summary_13);
    }
#line 1012 "recursion_patterns.m"
    {
#line 1012 "recursion_patterns.m"
      MR_Word base;
#line 1012 "recursion_patterns.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1012 "recursion_patterns.m"
      *recursion_patterns__HeadVar__5_5 = base;
#line 1012 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__Freq_9));
#line 1012 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recursion_patterns__Percent_12));
#line 1012 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recursion_patterns__Summary_13));
#line 1012 "recursion_patterns.m"
    }
#line 1012 "recursion_patterns.m"
  }
#line 1005 "recursion_patterns.m"
}

#line 1002 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0_1(
#line 1002 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 1002 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 1002 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 1002 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 1002 "recursion_patterns.m"
{
#line 1002 "recursion_patterns.m"
  {
#line 1002 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 1002 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_HeadVar__5_5;

#line 1002 "recursion_patterns.m"
    {
#line 1002 "recursion_patterns.m"
      recursion_patterns__finalize_histogram_proc_rec_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 4))), ((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_HeadVar__5_5);
    }
#line 1002 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_HeadVar__5_5));
#line 1002 "recursion_patterns.m"
  }
#line 1002 "recursion_patterns.m"
}

#line 985 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(
#line 985 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 985 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 985 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 985 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5)
#line 985 "recursion_patterns.m"
{
#line 991 "recursion_patterns.m"
  {
#line 991 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 991 "recursion_patterns.m"
    MR_Integer recursion_patterns__Freq_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
#line 991 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeProfInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
#line 991 "recursion_patterns.m"
    MR_Word recursion_patterns__Percent_12;
#line 991 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeSummary_13;
#line 991 "recursion_patterns.m"
    MR_Word recursion_patterns__STATE_VARIABLE_EntryProcs_0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__4_4, (MR_Integer) 2)));
#line 991 "recursion_patterns.m"
    MR_Word recursion_patterns__STATE_VARIABLE_EntryProcs_19;
#line 991 "recursion_patterns.m"
    MR_Float recursion_patterns__V_20_20;
#line 991 "recursion_patterns.m"
    MR_Float recursion_patterns__V_21_21;
#line 991 "recursion_patterns.m"
    MR_Word recursion_patterns__V_23_23;

#line 992 "recursion_patterns.m"
    {
#line 992 "recursion_patterns.m"
      recursion_patterns__V_21_21 = mercury__float__float_1_f_0(recursion_patterns__Freq_9);
    }
#line 992 "recursion_patterns.m"
    {
#line 992 "recursion_patterns.m"
      recursion_patterns__V_20_20 = mercury__float__f_slash_2_f_0(recursion_patterns__V_21_21, recursion_patterns__NumCliques_7);
    }
#line 992 "recursion_patterns.m"
    {
#line 992 "recursion_patterns.m"
      recursion_patterns__Percent_12 = measurement_units__percent_1_f_0(recursion_patterns__V_20_20);
    }
#line 996 "recursion_patterns.m"
    if ((recursion_patterns__MaybeProfInfo_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 995 "recursion_patterns.m"
      recursion_patterns__MaybeSummary_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 996 "recursion_patterns.m"
    else
#line 997 "recursion_patterns.m"
      {
#line 997 "recursion_patterns.m"
        MR_Word recursion_patterns__ProfInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProfInfo_10, (MR_Integer) 0)));
#line 997 "recursion_patterns.m"
        MR_Word recursion_patterns__Own_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_14, (MR_Integer) 0)));
#line 997 "recursion_patterns.m"
        MR_Word recursion_patterns__Inherit_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_14, (MR_Integer) 1)));
#line 997 "recursion_patterns.m"
        MR_Word recursion_patterns__Summary_17;

#line 999 "recursion_patterns.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 999 "recursion_patterns.m"
        {
#line 999 "recursion_patterns.m"
          create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, recursion_patterns__Deep_6, ((MR_Box) ((MR_Integer) 0)), recursion_patterns__Own_15, recursion_patterns__Inherit_16, &recursion_patterns__Summary_17);
        }
#line 1000 "recursion_patterns.m"
        {
#line 1000 "recursion_patterns.m"
          recursion_patterns__MaybeSummary_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__MaybeSummary_13, 0) = ((MR_Box) (recursion_patterns__Summary_17));
#line 1000 "recursion_patterns.m"
        }
#line 997 "recursion_patterns.m"
      }
#line 1002 "recursion_patterns.m"
    {
#line 1002 "recursion_patterns.m"
      recursion_patterns__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1002 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 0) = ((MR_Box) (&recursion_patterns_scalar_common_5[2]));
#line 1002 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 1) = ((MR_Box) (recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0_1));
#line 1002 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1002 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 3) = ((MR_Box) (recursion_patterns__Deep_6));
#line 1002 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 4) = MR_box_float(recursion_patterns__NumCliques_7);
#line 1002 "recursion_patterns.m"
    }
#line 1002 "recursion_patterns.m"
    {
#line 1002 "recursion_patterns.m"
      mercury__map__map_values_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, (MR_Word) &report__report__type_ctor_info_recursion_type_proc_freq_data_0, recursion_patterns__V_23_23, recursion_patterns__STATE_VARIABLE_EntryProcs_0_18, &recursion_patterns__STATE_VARIABLE_EntryProcs_19);
    }
#line 991 "recursion_patterns.m"
    {
#line 991 "recursion_patterns.m"
      MR_Word base;
#line 991 "recursion_patterns.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 991 "recursion_patterns.m"
      *recursion_patterns__HeadVar__5_5 = base;
#line 991 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__Freq_9));
#line 991 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recursion_patterns__Percent_12));
#line 991 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (recursion_patterns__MaybeSummary_13));
#line 991 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_EntryProcs_19));
#line 991 "recursion_patterns.m"
    }
#line 991 "recursion_patterns.m"
  }
#line 985 "recursion_patterns.m"
}

#line 857 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0_1(
#line 857 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 857 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 857 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 857 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 857 "recursion_patterns.m"
{
#line 857 "recursion_patterns.m"
  {
#line 857 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 857 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_STATE_VARIABLE_Histogram_20;

#line 857 "recursion_patterns.m"
    {
#line 857 "recursion_patterns.m"
      recursion_patterns__update_histogram_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_STATE_VARIABLE_Histogram_20);
    }
#line 857 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_STATE_VARIABLE_Histogram_20));
#line 857 "recursion_patterns.m"
  }
#line 857 "recursion_patterns.m"
}

#line 822 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0(
#line 822 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 822 "recursion_patterns.m"
  MR_Word recursion_patterns__CliquePtr_8,
#line 822 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_27,
#line 822 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_28)
#line 822 "recursion_patterns.m"
{
#line 826 "recursion_patterns.m"
  {
#line 826 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 826 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeCliqueRecursionReport_12;
#line 826 "recursion_patterns.m"
    MR_Word recursion_patterns__SimpleTypes_15;
#line 826 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeFirstPDPtr_17;
#line 826 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeFirstProcInfo_26;
#line 826 "recursion_patterns.m"
    MR_Word recursion_patterns__V_43_43;
#line 827 "recursion_patterns.m"
    MR_Integer recursion_patterns__CliqueNum_11 = (MR_Integer) recursion_patterns__CliquePtr_8;
#line 827 "recursion_patterns.m"
    MR_Word recursion_patterns__V_31_31;
#line 827 "recursion_patterns.m"
    MR_Word recursion_patterns__V_33_33;
#line 841 "recursion_patterns.m"
    MR_Word recursion_patterns___OtherPDPtrs_18;
#line 857 "recursion_patterns.m"
    MR_Box recursion_patterns__conv1_STATE_VARIABLE_Histogram_28;

#line 829 "recursion_patterns.m"
    {
#line 829 "recursion_patterns.m"
      recursion_patterns__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 829 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_33_33, 0) = ((MR_Box) (recursion_patterns__CliqueNum_11));
#line 829 "recursion_patterns.m"
    }
#line 829 "recursion_patterns.m"
    {
#line 829 "recursion_patterns.m"
      recursion_patterns__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_31_31, 0) = ((MR_Box) (recursion_patterns__V_33_33));
#line 829 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 829 "recursion_patterns.m"
    }
#line 829 "recursion_patterns.m"
    {
#line 829 "recursion_patterns.m"
      mercury__io__format_4_p_0((MR_String) "Analyzing clique: %d\n", recursion_patterns__V_31_31);
    }
#line 831 "recursion_patterns.m"
    {
#line 831 "recursion_patterns.m"
      recursion_patterns__create_clique_recursion_costs_report_3_p_0(recursion_patterns__Deep_6, recursion_patterns__CliquePtr_8, &recursion_patterns__MaybeCliqueRecursionReport_12);
    }
#line 837 "recursion_patterns.m"
    if (((MR_tag((MR_Word) recursion_patterns__MaybeCliqueRecursionReport_12)) == (MR_mktag((MR_Integer) 1))))
#line 838 "recursion_patterns.m"
      {
#line 838 "recursion_patterns.m"
        MR_String recursion_patterns__Error_16 = ((MR_String) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeCliqueRecursionReport_12, (MR_Integer) 0)));
#line 838 "recursion_patterns.m"
        MR_Word recursion_patterns__V_35_35;

#line 839 "recursion_patterns.m"
        {
#line 839 "recursion_patterns.m"
          recursion_patterns__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 839 "recursion_patterns.m"
          MR_hl_field(MR_mktag(3), recursion_patterns__V_35_35, 0) = ((MR_Box) (recursion_patterns__Error_16));
#line 839 "recursion_patterns.m"
        }
#line 839 "recursion_patterns.m"
        {
#line 839 "recursion_patterns.m"
          recursion_patterns__SimpleTypes_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__SimpleTypes_15, 0) = ((MR_Box) (recursion_patterns__V_35_35));
#line 839 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__SimpleTypes_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[6])));
#line 839 "recursion_patterns.m"
        }
#line 838 "recursion_patterns.m"
      }
#line 837 "recursion_patterns.m"
    else
#line 834 "recursion_patterns.m"
      {
#line 834 "recursion_patterns.m"
        MR_Word recursion_patterns__CliqueRecursionReport_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__MaybeCliqueRecursionReport_12, (MR_Integer) 0)));
#line 834 "recursion_patterns.m"
        MR_Word recursion_patterns__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_13, (MR_Integer) 1)));
#line 835 "recursion_patterns.m"
        MR_Word recursion_patterns__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_13, (MR_Integer) 0)));
#line 835 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_13, (MR_Integer) 2)));

#line 836 "recursion_patterns.m"
        {
#line 836 "recursion_patterns.m"
          recursion_patterns__recursion_type_to_simple_type_2_p_0(recursion_patterns__Type_14, &recursion_patterns__SimpleTypes_15);
        }
#line 834 "recursion_patterns.m"
      }
#line 841 "recursion_patterns.m"
    {
#line 841 "recursion_patterns.m"
      analysis_utils__find_clique_first_and_other_procs_4_p_0(recursion_patterns__Deep_6, recursion_patterns__CliquePtr_8, &recursion_patterns__MaybeFirstPDPtr_17, &recursion_patterns___OtherPDPtrs_18);
    }
#line 853 "recursion_patterns.m"
    if ((recursion_patterns__MaybeFirstPDPtr_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "recursion_patterns.m"
      recursion_patterns__MaybeFirstProcInfo_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 853 "recursion_patterns.m"
    else
#line 844 "recursion_patterns.m"
      {
#line 844 "recursion_patterns.m"
        MR_Word recursion_patterns__FirstPDPtr_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstPDPtr_17, (MR_Integer) 0)));
#line 844 "recursion_patterns.m"
        MR_Word recursion_patterns__FirstPD_20;
#line 844 "recursion_patterns.m"
        MR_Word recursion_patterns__FirstPSPtr_21;
#line 844 "recursion_patterns.m"
        MR_Word recursion_patterns__PDesc_22;
#line 844 "recursion_patterns.m"
        MR_Word recursion_patterns__ProcOwn_23;
#line 844 "recursion_patterns.m"
        MR_Word recursion_patterns__ProcInherit_24;
#line 844 "recursion_patterns.m"
        MR_Word recursion_patterns__FirstProcInfo_25;
#line 844 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 6)));
#line 844 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_40_40;
#line 844 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_41_41;
#line 844 "recursion_patterns.m"
        MR_Word recursion_patterns__V_42_42;
#line 845 "recursion_patterns.m"
        MR_Word recursion_patterns__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 0)));
#line 845 "recursion_patterns.m"
        MR_String recursion_patterns__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 1)));
#line 845 "recursion_patterns.m"
        MR_String recursion_patterns__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 2)));
#line 845 "recursion_patterns.m"
        MR_String recursion_patterns__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 3)));
#line 845 "recursion_patterns.m"
        MR_Word recursion_patterns__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 4)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 5)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 7)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 8)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 9)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 10)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 11)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 12)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 13)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 14)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 15)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 16)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 17)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 18)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_65_65 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 19)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 20)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 21)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 22)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 23)));
#line 845 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 24)));
#line 845 "recursion_patterns.m"
        MR_Word recursion_patterns__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 25)));
#line 845 "recursion_patterns.m"
        MR_Word recursion_patterns__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 26)));
#line 845 "recursion_patterns.m"
        MR_Word recursion_patterns__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 27)));
#line 845 "recursion_patterns.m"
        MR_Word recursion_patterns__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 28)));
#line 846 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_75_75;
#line 846 "recursion_patterns.m"
        MR_Word recursion_patterns__V_76_76;
#line 848 "recursion_patterns.m"
        MR_Word recursion_patterns__V_77_77;
#line 848 "recursion_patterns.m"
        MR_String recursion_patterns__V_78_78;
#line 848 "recursion_patterns.m"
        MR_String recursion_patterns__V_79_79;
#line 848 "recursion_patterns.m"
        MR_String recursion_patterns__V_80_80;
#line 848 "recursion_patterns.m"
        MR_Word recursion_patterns__V_81_81;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_82_82;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_83_83;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_84_84;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_85_85;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_86_86;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_87_87;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_88_88;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_89_89;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_90_90;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_91_91;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_92_92;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_93_93;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_94_94;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_95_95;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_96_96;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_97_97;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_98_98;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_99_99;
#line 848 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_100_100;
#line 848 "recursion_patterns.m"
        MR_Word recursion_patterns__V_101_101;
#line 848 "recursion_patterns.m"
        MR_Word recursion_patterns__V_102_102;
#line 848 "recursion_patterns.m"
        MR_Word recursion_patterns__V_103_103;
#line 848 "recursion_patterns.m"
        MR_Word recursion_patterns__V_104_104;
#line 849 "recursion_patterns.m"
        MR_Word recursion_patterns__V_105_105;
#line 849 "recursion_patterns.m"
        MR_String recursion_patterns__V_106_106;
#line 849 "recursion_patterns.m"
        MR_String recursion_patterns__V_107_107;
#line 849 "recursion_patterns.m"
        MR_String recursion_patterns__V_108_108;
#line 849 "recursion_patterns.m"
        MR_Word recursion_patterns__V_109_109;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_110_110;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_111_111;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_112_112;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_113_113;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_114_114;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_115_115;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_116_116;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_117_117;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_118_118;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_119_119;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_120_120;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_121_121;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_122_122;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_123_123;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_124_124;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_125_125;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_126_126;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_127_127;
#line 849 "recursion_patterns.m"
        MR_ArrayPtr recursion_patterns__V_128_128;
#line 849 "recursion_patterns.m"
        MR_Word recursion_patterns__V_129_129;
#line 849 "recursion_patterns.m"
        MR_Word recursion_patterns__V_130_130;
#line 849 "recursion_patterns.m"
        MR_Word recursion_patterns__V_131_131;
#line 849 "recursion_patterns.m"
        MR_Word recursion_patterns__V_132_132;

#line 845 "recursion_patterns.m"
        {
#line 845 "recursion_patterns.m"
          profile__lookup_proc_dynamics_3_p_0(recursion_patterns__V_39_39, recursion_patterns__FirstPDPtr_19, &recursion_patterns__FirstPD_20);
        }
#line 846 "recursion_patterns.m"
        recursion_patterns__FirstPSPtr_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstPD_20, (MR_Integer) 0)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstPD_20, (MR_Integer) 1)));
#line 846 "recursion_patterns.m"
        recursion_patterns__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstPD_20, (MR_Integer) 2)));
#line 847 "recursion_patterns.m"
        {
#line 847 "recursion_patterns.m"
          recursion_patterns__PDesc_22 = create_report__describe_proc_2_f_0(recursion_patterns__Deep_6, recursion_patterns__FirstPSPtr_21);
        }
#line 848 "recursion_patterns.m"
        recursion_patterns__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 0)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 1)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_79_79 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 2)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_80_80 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 3)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 4)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_82_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 5)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_83_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 6)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_84_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 7)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_85_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 8)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_86_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 9)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_87_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 10)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_88_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 11)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_89_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 12)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_90_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 13)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_91_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 14)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_92_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 15)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 16)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_93_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 17)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 18)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 19)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 20)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 21)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_98_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 22)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_99_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 23)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_100_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 24)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 25)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 26)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 27)));
#line 848 "recursion_patterns.m"
        recursion_patterns__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 28)));
#line 848 "recursion_patterns.m"
        {
#line 848 "recursion_patterns.m"
          profile__lookup_pd_own_3_p_0(recursion_patterns__V_40_40, recursion_patterns__FirstPDPtr_19, &recursion_patterns__ProcOwn_23);
        }
#line 849 "recursion_patterns.m"
        recursion_patterns__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 0)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 1)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_107_107 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 2)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 3)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 4)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_110_110 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 5)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_111_111 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 6)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_112_112 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 7)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_113_113 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 8)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_114_114 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 9)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_115_115 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 10)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_116_116 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 11)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_117_117 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 12)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_118_118 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 13)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_119_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 14)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_120_120 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 15)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_121_121 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 16)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 17)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_122_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 18)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_123_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 19)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_124_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 20)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_125_125 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 21)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_126_126 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 22)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_127_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 23)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_128_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 24)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 25)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 26)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 27)));
#line 849 "recursion_patterns.m"
        recursion_patterns__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_6, (MR_Integer) 28)));
#line 849 "recursion_patterns.m"
        {
#line 849 "recursion_patterns.m"
          profile__lookup_pd_desc_3_p_0(recursion_patterns__V_41_41, recursion_patterns__FirstPDPtr_19, &recursion_patterns__ProcInherit_24);
        }
#line 851 "recursion_patterns.m"
        {
#line 851 "recursion_patterns.m"
          recursion_patterns__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 851 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_42_42, 0) = ((MR_Box) (recursion_patterns__ProcOwn_23));
#line 851 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_42_42, 1) = ((MR_Box) (recursion_patterns__ProcInherit_24));
#line 851 "recursion_patterns.m"
        }
#line 850 "recursion_patterns.m"
        {
#line 850 "recursion_patterns.m"
          recursion_patterns__FirstProcInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 850 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_25, 0) = ((MR_Box) (recursion_patterns__PDesc_22));
#line 850 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_25, 1) = ((MR_Box) (recursion_patterns__V_42_42));
#line 850 "recursion_patterns.m"
        }
#line 852 "recursion_patterns.m"
        {
#line 852 "recursion_patterns.m"
          recursion_patterns__MaybeFirstProcInfo_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 852 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstProcInfo_26, 0) = ((MR_Box) (recursion_patterns__FirstProcInfo_25));
#line 852 "recursion_patterns.m"
        }
#line 844 "recursion_patterns.m"
      }
#line 857 "recursion_patterns.m"
    {
#line 857 "recursion_patterns.m"
      recursion_patterns__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 857 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_43_43, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[3]));
#line 857 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_43_43, 1) = ((MR_Box) (recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0_1));
#line 857 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 857 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_43_43, 3) = ((MR_Box) (recursion_patterns__MaybeFirstProcInfo_26));
#line 857 "recursion_patterns.m"
    }
#line 857 "recursion_patterns.m"
    {
#line 857 "recursion_patterns.m"
      mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns_scalar_common_1[0], recursion_patterns__V_43_43, recursion_patterns__SimpleTypes_15, ((MR_Box) (recursion_patterns__STATE_VARIABLE_Histogram_0_27)), &recursion_patterns__conv1_STATE_VARIABLE_Histogram_28);
    }
#line 857 "recursion_patterns.m"
    *recursion_patterns__STATE_VARIABLE_Histogram_28 = ((MR_Word) recursion_patterns__conv1_STATE_VARIABLE_Histogram_28);
#line 826 "recursion_patterns.m"
  }
#line 822 "recursion_patterns.m"
}

#line 971 "recursion_patterns.m"
static MR_Integer MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__971__1_1_f_0(
#line 971 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_26)
#line 971 "recursion_patterns.m"
{
#line 971 "recursion_patterns.m"
  {
#line 971 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 971 "recursion_patterns.m"
    MR_Integer recursion_patterns__HeadVar__2_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_26, (MR_Integer) 0)));
#line 971 "recursion_patterns.m"
    MR_Integer recursion_patterns__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_26, (MR_Integer) 1)));
#line 971 "recursion_patterns.m"
    MR_Float recursion_patterns__V_41_41 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_26, (MR_Integer) 2)));
#line 971 "recursion_patterns.m"
    MR_Float recursion_patterns__V_42_42 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_26, (MR_Integer) 3)));
#line 971 "recursion_patterns.m"
    MR_Float recursion_patterns__V_43_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_26, (MR_Integer) 4)));

#line 971 "recursion_patterns.m"
    return recursion_patterns__HeadVar__2_27;
#line 971 "recursion_patterns.m"
  }
#line 971 "recursion_patterns.m"
}

#line 974 "recursion_patterns.m"
static MR_Word MR_CALL 
recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__974__1_1_f_0(
#line 974 "recursion_patterns.m"
  MR_String recursion_patterns__HeadVar__1_34)
#line 974 "recursion_patterns.m"
{
#line 974 "recursion_patterns.m"
  {
#line 974 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 974 "recursion_patterns.m"
    MR_Word recursion_patterns__HeadVar__2_35;

#line 974 "recursion_patterns.m"
    {
#line 974 "recursion_patterns.m"
      recursion_patterns__HeadVar__2_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 974 "recursion_patterns.m"
      MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__2_35, 0) = ((MR_Box) (recursion_patterns__HeadVar__1_34));
#line 974 "recursion_patterns.m"
    }
#line 974 "recursion_patterns.m"
    return recursion_patterns__HeadVar__2_35;
#line 974 "recursion_patterns.m"
  }
#line 974 "recursion_patterns.m"
}

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__758__1_4_p_0(
#line 758 "recursion_patterns.m"
  MR_Float recursion_patterns__Prob_1,
#line 758 "recursion_patterns.m"
  MR_Integer recursion_patterns__HeadVar__2_13,
#line 758 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_14,
#line 758 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__4_15)
#line 758 "recursion_patterns.m"
{
#line 758 "recursion_patterns.m"
  {
#line 758 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 758 "recursion_patterns.m"
    {
#line 758 "recursion_patterns.m"
      recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_114_101_99_117_114_115_105_111_110_95_100_97_116_97_95_97_110_100_95_112_114_111_98_97_98_105_108_105_116_121_95_95_55_53_56_95_95_49_95_95_91_50_93_95_48_4_p_0(recursion_patterns__Prob_1, recursion_patterns__HeadVar__3_14, recursion_patterns__HeadVar__4_15);
#line 758 "recursion_patterns.m"
      return;
    }
#line 758 "recursion_patterns.m"
  }
#line 758 "recursion_patterns.m"
}

#line 891 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_proc_freq_data_0_0(
#line 891 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 891 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 891 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 891 "recursion_patterns.m"
{
#line 891 "recursion_patterns.m"
  {
#line 891 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 891 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_12 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 891 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_13 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 891 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_12 == recursion_patterns__CastY_13);
#line 891 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 3423 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 891 "recursion_patterns.m"
    else
#line 891 "recursion_patterns.m"
      {
#line 891 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 891 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 891 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
#line 891 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 891 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 891 "recursion_patterns.m"
        MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 2)));
#line 891 "recursion_patterns.m"
        MR_Word recursion_patterns__V_10_10;

#line 891 "recursion_patterns.m"
        {
#line 891 "recursion_patterns.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&recursion_patterns__V_10_10, recursion_patterns__V_4_4, recursion_patterns__V_7_7);
        }
#line 3449 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_10_10 == (MR_Integer) 0);
#line 891 "recursion_patterns.m"
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 891 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 891 "recursion_patterns.m"
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_10_10;
#line 891 "recursion_patterns.m"
        else
#line 891 "recursion_patterns.m"
          {
#line 891 "recursion_patterns.m"
            MR_Word recursion_patterns__V_11_11;

#line 891 "recursion_patterns.m"
            {
#line 891 "recursion_patterns.m"
              recursion_patterns____Compare____own_and_inherit_prof_info_0_0(&recursion_patterns__V_11_11, recursion_patterns__V_5_5, recursion_patterns__V_8_8);
            }
#line 3469 "recursion_patterns.c"
            recursion_patterns__succeeded = (recursion_patterns__V_11_11 == (MR_Integer) 0);
#line 891 "recursion_patterns.m"
            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 891 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 891 "recursion_patterns.m"
              *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_11_11;
#line 891 "recursion_patterns.m"
            else
#line 891 "recursion_patterns.m"
              {
#line 891 "recursion_patterns.m"
                report____Compare____proc_desc_0_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_6_6, recursion_patterns__V_9_9);
#line 891 "recursion_patterns.m"
                return;
              }
#line 891 "recursion_patterns.m"
          }
#line 891 "recursion_patterns.m"
      }
#line 891 "recursion_patterns.m"
  }
#line 891 "recursion_patterns.m"
}

#line 891 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_proc_freq_data_0_0(
#line 891 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 891 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 891 "recursion_patterns.m"
{
#line 891 "recursion_patterns.m"
  {
#line 891 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 891 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 891 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 891 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
#line 891 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 891 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 891 "recursion_patterns.m"
    else
#line 891 "recursion_patterns.m"
      {
#line 891 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 891 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 891 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
#line 891 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 891 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 891 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));

#line 3536 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_3_3 == recursion_patterns__V_6_6);
#line 891 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 891 "recursion_patterns.m"
          {
#line 3542 "recursion_patterns.c"
            {
#line 3544 "recursion_patterns.c"
              recursion_patterns__succeeded = recursion_patterns____Unify____own_and_inherit_prof_info_0_0(recursion_patterns__V_4_4, recursion_patterns__V_7_7);
            }
#line 891 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 3549 "recursion_patterns.c"
              {
#line 3551 "recursion_patterns.c"
                return recursion_patterns__succeeded = report____Unify____proc_desc_0_0(recursion_patterns__V_5_5, recursion_patterns__V_8_8);
              }
#line 891 "recursion_patterns.m"
          }
#line 891 "recursion_patterns.m"
      }
#line 891 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 891 "recursion_patterns.m"
  }
#line 891 "recursion_patterns.m"
}

#line 883 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_type_raw_freq_data_0_0(
#line 883 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 883 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 883 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 883 "recursion_patterns.m"
{
#line 883 "recursion_patterns.m"
  {
#line 883 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 883 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_12 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 883 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_13 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 883 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_12 == recursion_patterns__CastY_13);
#line 883 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 3589 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 883 "recursion_patterns.m"
    else
#line 883 "recursion_patterns.m"
      {
#line 883 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 883 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 883 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
#line 883 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 883 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 883 "recursion_patterns.m"
        MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 2)));
#line 883 "recursion_patterns.m"
        MR_Word recursion_patterns__V_10_10;

#line 883 "recursion_patterns.m"
        {
#line 883 "recursion_patterns.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&recursion_patterns__V_10_10, recursion_patterns__V_4_4, recursion_patterns__V_7_7);
        }
#line 3615 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_10_10 == (MR_Integer) 0);
#line 883 "recursion_patterns.m"
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 883 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 883 "recursion_patterns.m"
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_10_10;
#line 883 "recursion_patterns.m"
        else
#line 883 "recursion_patterns.m"
          {
#line 883 "recursion_patterns.m"
            MR_Word recursion_patterns__V_11_11;

#line 883 "recursion_patterns.m"
            {
#line 883 "recursion_patterns.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_2[4], &recursion_patterns__V_11_11, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
            }
#line 3635 "recursion_patterns.c"
            recursion_patterns__succeeded = (recursion_patterns__V_11_11 == (MR_Integer) 0);
#line 883 "recursion_patterns.m"
            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 883 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 883 "recursion_patterns.m"
              *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_11_11;
#line 883 "recursion_patterns.m"
            else
#line 883 "recursion_patterns.m"
              {
#line 883 "recursion_patterns.m"
                {
#line 883 "recursion_patterns.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_1[4], recursion_patterns__HeadVar__1_1, ((MR_Box) (recursion_patterns__V_6_6)), ((MR_Box) (recursion_patterns__V_9_9)));
#line 883 "recursion_patterns.m"
                  return;
                }
#line 883 "recursion_patterns.m"
              }
#line 883 "recursion_patterns.m"
          }
#line 883 "recursion_patterns.m"
      }
#line 883 "recursion_patterns.m"
  }
#line 883 "recursion_patterns.m"
}

#line 883 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_type_raw_freq_data_0_0(
#line 883 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 883 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 883 "recursion_patterns.m"
{
#line 883 "recursion_patterns.m"
  {
#line 883 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 883 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 883 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 883 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
#line 883 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 883 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 883 "recursion_patterns.m"
    else
#line 883 "recursion_patterns.m"
      {
#line 883 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeInfo_11_11;
#line 883 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeInfo_12_12;
#line 883 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 883 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 883 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
#line 883 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 883 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 883 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));

#line 3710 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_3_3 == recursion_patterns__V_6_6);
#line 883 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 883 "recursion_patterns.m"
          {
#line 3716 "recursion_patterns.c"
            recursion_patterns__TypeInfo_11_11 = (MR_Word) &recursion_patterns_scalar_common_2[4];
#line 3718 "recursion_patterns.c"
            {
#line 3720 "recursion_patterns.c"
              recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_11_11, ((MR_Box) (recursion_patterns__V_4_4)), ((MR_Box) (recursion_patterns__V_7_7)));
            }
#line 883 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 883 "recursion_patterns.m"
              {
#line 3727 "recursion_patterns.c"
                recursion_patterns__TypeInfo_12_12 = (MR_Word) &recursion_patterns_scalar_common_1[4];
#line 3729 "recursion_patterns.c"
                {
#line 3731 "recursion_patterns.c"
                  return recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_12_12, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
                }
#line 883 "recursion_patterns.m"
              }
#line 883 "recursion_patterns.m"
          }
#line 883 "recursion_patterns.m"
      }
#line 883 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 883 "recursion_patterns.m"
  }
#line 883 "recursion_patterns.m"
}

#line 278 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_level_0_0(
#line 278 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 278 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 278 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 278 "recursion_patterns.m"
{
#line 278 "recursion_patterns.m"
  {
#line 278 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 278 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 278 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 278 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
#line 278 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 3771 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "recursion_patterns.m"
    else
#line 278 "recursion_patterns.m"
      {
#line 278 "recursion_patterns.m"
        MR_Float recursion_patterns__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 278 "recursion_patterns.m"
        MR_Float recursion_patterns__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 278 "recursion_patterns.m"
        MR_Float recursion_patterns__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 278 "recursion_patterns.m"
        MR_Float recursion_patterns__V_7_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 278 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8;

#line 278 "recursion_patterns.m"
        {
#line 278 "recursion_patterns.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(&recursion_patterns__V_8_8, recursion_patterns__V_4_4, recursion_patterns__V_6_6);
        }
#line 3793 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_8_8 == (MR_Integer) 0);
#line 278 "recursion_patterns.m"
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 278 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 278 "recursion_patterns.m"
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_8_8;
#line 278 "recursion_patterns.m"
        else
#line 278 "recursion_patterns.m"
          {
#line 278 "recursion_patterns.m"
            mercury__private_builtin__builtin_compare_float_3_p_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_5_5, recursion_patterns__V_7_7);
#line 278 "recursion_patterns.m"
            return;
          }
#line 278 "recursion_patterns.m"
      }
#line 278 "recursion_patterns.m"
  }
#line 278 "recursion_patterns.m"
}

#line 278 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_level_0_0(
#line 278 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 278 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 278 "recursion_patterns.m"
{
#line 278 "recursion_patterns.m"
  {
#line 278 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 278 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_7 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 278 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_8 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 278 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_7 == recursion_patterns__CastY_8);
#line 278 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 278 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 278 "recursion_patterns.m"
    else
#line 278 "recursion_patterns.m"
      {
#line 278 "recursion_patterns.m"
        MR_Float recursion_patterns__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 278 "recursion_patterns.m"
        MR_Float recursion_patterns__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 278 "recursion_patterns.m"
        MR_Float recursion_patterns__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 278 "recursion_patterns.m"
        MR_Float recursion_patterns__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));

#line 3854 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_3_3 == recursion_patterns__V_5_5);
#line 278 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 3858 "recursion_patterns.c"
          recursion_patterns__succeeded = (recursion_patterns__V_4_4 == recursion_patterns__V_6_6);
#line 278 "recursion_patterns.m"
      }
#line 278 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 278 "recursion_patterns.m"
  }
#line 278 "recursion_patterns.m"
}

#line 287 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_error_0_0(
#line 287 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 287 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 287 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 287 "recursion_patterns.m"
{
#line 287 "recursion_patterns.m"
  {
#line 287 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 287 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_6 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 287 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_7 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 287 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_6 == recursion_patterns__CastY_7);
#line 287 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 3893 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 287 "recursion_patterns.m"
    else
#line 287 "recursion_patterns.m"
      {
#line 287 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = (MR_Word) recursion_patterns__HeadVar__2_2;
#line 287 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = (MR_Word) recursion_patterns__HeadVar__3_3;
#line 287 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_9_9 = (MR_Integer) recursion_patterns__V_4_4;
#line 287 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_10_10 = (MR_Integer) recursion_patterns__V_5_5;

#line 287 "recursion_patterns.m"
        {
#line 287 "recursion_patterns.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_9_9, recursion_patterns__V_10_10);
#line 287 "recursion_patterns.m"
          return;
        }
#line 287 "recursion_patterns.m"
      }
#line 287 "recursion_patterns.m"
  }
#line 287 "recursion_patterns.m"
}

#line 287 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_error_0_0(
#line 287 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 287 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 287 "recursion_patterns.m"
{
#line 287 "recursion_patterns.m"
  {
#line 287 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 287 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_5 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 287 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_6 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 287 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_5 == recursion_patterns__CastY_6);
#line 287 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 287 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 287 "recursion_patterns.m"
    else
#line 287 "recursion_patterns.m"
      {
#line 287 "recursion_patterns.m"
        MR_Word recursion_patterns__V_3_3 = (MR_Word) recursion_patterns__HeadVar__1_1;
#line 287 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = (MR_Word) recursion_patterns__HeadVar__2_2;

#line 3955 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_3_3 == recursion_patterns__V_4_4);
#line 287 "recursion_patterns.m"
      }
#line 287 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 287 "recursion_patterns.m"
  }
#line 287 "recursion_patterns.m"
}

#line 268 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_data_0_0(
#line 268 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 268 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 268 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 268 "recursion_patterns.m"
{
#line 268 "recursion_patterns.m"
  {
#line 268 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 268 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_18 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 268 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_19 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 268 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_18 == recursion_patterns__CastY_19);
#line 268 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 3990 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 268 "recursion_patterns.m"
    else
#line 268 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 268 "recursion_patterns.m"
      if ((recursion_patterns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 268 "recursion_patterns.m"
        *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 268 "recursion_patterns.m"
      else
#line 4002 "recursion_patterns.c"
        *recursion_patterns__HeadVar__1_1 = (MR_Integer) 1;
#line 268 "recursion_patterns.m"
    else
#line 268 "recursion_patterns.m"
      {
#line 268 "recursion_patterns.m"
        MR_Word recursion_patterns__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
#line 268 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 268 "recursion_patterns.m"
        MR_Word recursion_patterns__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));

#line 268 "recursion_patterns.m"
        if ((recursion_patterns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4017 "recursion_patterns.c"
          *recursion_patterns__HeadVar__1_1 = (MR_Integer) 2;
#line 268 "recursion_patterns.m"
        else
#line 268 "recursion_patterns.m"
          {
#line 268 "recursion_patterns.m"
            MR_Word recursion_patterns__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 268 "recursion_patterns.m"
            MR_Integer recursion_patterns__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 268 "recursion_patterns.m"
            MR_Word recursion_patterns__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 2)));
#line 268 "recursion_patterns.m"
            MR_Word recursion_patterns__V_16_16;

#line 268 "recursion_patterns.m"
            {
#line 268 "recursion_patterns.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_2[2], &recursion_patterns__V_16_16, ((MR_Box) (recursion_patterns__V_25_25)), ((MR_Box) (recursion_patterns__V_13_13)));
            }
#line 4037 "recursion_patterns.c"
            recursion_patterns__succeeded = (recursion_patterns__V_16_16 == (MR_Integer) 0);
#line 268 "recursion_patterns.m"
            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 268 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 268 "recursion_patterns.m"
              *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_16_16;
#line 268 "recursion_patterns.m"
            else
#line 268 "recursion_patterns.m"
              {
#line 268 "recursion_patterns.m"
                MR_Word recursion_patterns__V_17_17;

#line 268 "recursion_patterns.m"
                {
#line 268 "recursion_patterns.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&recursion_patterns__V_17_17, recursion_patterns__V_24_24, recursion_patterns__V_14_14);
                }
#line 4057 "recursion_patterns.c"
                recursion_patterns__succeeded = (recursion_patterns__V_17_17 == (MR_Integer) 0);
#line 268 "recursion_patterns.m"
                recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 268 "recursion_patterns.m"
                if (recursion_patterns__succeeded)
#line 268 "recursion_patterns.m"
                  *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_17_17;
#line 268 "recursion_patterns.m"
                else
#line 268 "recursion_patterns.m"
                  {
#line 268 "recursion_patterns.m"
                    {
#line 268 "recursion_patterns.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_2[3], recursion_patterns__HeadVar__1_1, ((MR_Box) (recursion_patterns__V_23_23)), ((MR_Box) (recursion_patterns__V_15_15)));
#line 268 "recursion_patterns.m"
                      return;
                    }
#line 268 "recursion_patterns.m"
                  }
#line 268 "recursion_patterns.m"
              }
#line 268 "recursion_patterns.m"
          }
#line 268 "recursion_patterns.m"
      }
#line 268 "recursion_patterns.m"
  }
#line 268 "recursion_patterns.m"
}

#line 268 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_data_0_0(
#line 268 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 268 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 268 "recursion_patterns.m"
{
#line 268 "recursion_patterns.m"
  {
#line 268 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 268 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_11 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 268 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_12 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 268 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_11 == recursion_patterns__CastY_12);
#line 268 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 268 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 268 "recursion_patterns.m"
    else
#line 268 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 268 "recursion_patterns.m"
      {
#line 268 "recursion_patterns.m"
        MR_Integer recursion_patterns__CastX_3 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 268 "recursion_patterns.m"
        MR_Integer recursion_patterns__CastY_4 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 268 "recursion_patterns.m"
        recursion_patterns__succeeded = (recursion_patterns__CastY_4 == recursion_patterns__CastX_3);
#line 268 "recursion_patterns.m"
      }
#line 268 "recursion_patterns.m"
    else
#line 268 "recursion_patterns.m"
      {
#line 268 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeInfo_13_13;
#line 268 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeInfo_14_14;
#line 268 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 268 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 268 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
#line 268 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8;
#line 268 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_9_9;
#line 268 "recursion_patterns.m"
        MR_Word recursion_patterns__V_10_10;

#line 268 "recursion_patterns.m"
        recursion_patterns__succeeded = ((MR_tag((MR_Word) recursion_patterns__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 268 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 268 "recursion_patterns.m"
          {
#line 268 "recursion_patterns.m"
            recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 268 "recursion_patterns.m"
            recursion_patterns__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 268 "recursion_patterns.m"
            recursion_patterns__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
#line 4161 "recursion_patterns.c"
            recursion_patterns__TypeInfo_13_13 = (MR_Word) &recursion_patterns_scalar_common_2[2];
#line 4163 "recursion_patterns.c"
            {
#line 4165 "recursion_patterns.c"
              recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_13_13, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
            }
#line 268 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 268 "recursion_patterns.m"
              {
#line 4172 "recursion_patterns.c"
                recursion_patterns__succeeded = (recursion_patterns__V_6_6 == recursion_patterns__V_9_9);
#line 268 "recursion_patterns.m"
                if (recursion_patterns__succeeded)
#line 268 "recursion_patterns.m"
                  {
#line 4178 "recursion_patterns.c"
                    recursion_patterns__TypeInfo_14_14 = (MR_Word) &recursion_patterns_scalar_common_2[3];
#line 4180 "recursion_patterns.c"
                    {
#line 4182 "recursion_patterns.c"
                      return recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_14_14, ((MR_Box) (recursion_patterns__V_7_7)), ((MR_Box) (recursion_patterns__V_10_10)));
                    }
#line 268 "recursion_patterns.m"
                  }
#line 268 "recursion_patterns.m"
              }
#line 268 "recursion_patterns.m"
          }
#line 268 "recursion_patterns.m"
      }
#line 268 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 268 "recursion_patterns.m"
  }
#line 268 "recursion_patterns.m"
}

#line 290 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____recursion_analysis_info_0_0(
#line 290 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 290 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 290 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 290 "recursion_patterns.m"
{
#line 290 "recursion_patterns.m"
  {
#line 290 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 290 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_12 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 290 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_13 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 290 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_12 == recursion_patterns__CastY_13);
#line 290 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 4224 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "recursion_patterns.m"
    else
#line 290 "recursion_patterns.m"
      {
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 2)));
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__V_10_10;
#line 290 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_17_17 = (MR_Integer) recursion_patterns__V_4_4;
#line 290 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_18_18 = (MR_Integer) recursion_patterns__V_7_7;

#line 290 "recursion_patterns.m"
        {
#line 290 "recursion_patterns.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&recursion_patterns__V_10_10, recursion_patterns__V_17_17, recursion_patterns__V_18_18);
        }
#line 4254 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_10_10 == (MR_Integer) 0);
#line 290 "recursion_patterns.m"
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 290 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 290 "recursion_patterns.m"
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_10_10;
#line 290 "recursion_patterns.m"
        else
#line 290 "recursion_patterns.m"
          {
#line 290 "recursion_patterns.m"
            MR_Word recursion_patterns__V_11_11;

#line 290 "recursion_patterns.m"
            {
#line 290 "recursion_patterns.m"
              mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_1[2], &recursion_patterns__V_11_11, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
            }
#line 4274 "recursion_patterns.c"
            recursion_patterns__succeeded = (recursion_patterns__V_11_11 == (MR_Integer) 0);
#line 290 "recursion_patterns.m"
            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 290 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 290 "recursion_patterns.m"
              *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_11_11;
#line 290 "recursion_patterns.m"
            else
#line 290 "recursion_patterns.m"
              {
#line 290 "recursion_patterns.m"
                {
#line 290 "recursion_patterns.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &recursion_patterns_scalar_common_2[1], recursion_patterns__HeadVar__1_1, ((MR_Box) (recursion_patterns__V_6_6)), ((MR_Box) (recursion_patterns__V_9_9)));
#line 290 "recursion_patterns.m"
                  return;
                }
#line 290 "recursion_patterns.m"
              }
#line 290 "recursion_patterns.m"
          }
#line 290 "recursion_patterns.m"
      }
#line 290 "recursion_patterns.m"
  }
#line 290 "recursion_patterns.m"
}

#line 290 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____recursion_analysis_info_0_0(
#line 290 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 290 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 290 "recursion_patterns.m"
{
#line 290 "recursion_patterns.m"
  {
#line 290 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 290 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 290 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 290 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
#line 290 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 290 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 290 "recursion_patterns.m"
    else
#line 290 "recursion_patterns.m"
      {
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeInfo_12_12;
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeInfo_13_13;
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 2)));
#line 290 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_14_14 = (MR_Integer) recursion_patterns__V_3_3;
#line 290 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_15_15 = (MR_Integer) recursion_patterns__V_6_6;

#line 4353 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_14_14 == recursion_patterns__V_15_15);
#line 290 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 290 "recursion_patterns.m"
          {
#line 4359 "recursion_patterns.c"
            recursion_patterns__TypeInfo_12_12 = (MR_Word) &recursion_patterns_scalar_common_1[2];
#line 4361 "recursion_patterns.c"
            {
#line 4363 "recursion_patterns.c"
              recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_12_12, ((MR_Box) (recursion_patterns__V_4_4)), ((MR_Box) (recursion_patterns__V_7_7)));
            }
#line 290 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 290 "recursion_patterns.m"
              {
#line 4370 "recursion_patterns.c"
                recursion_patterns__TypeInfo_13_13 = (MR_Word) &recursion_patterns_scalar_common_2[1];
#line 4372 "recursion_patterns.c"
                {
#line 4374 "recursion_patterns.c"
                  return recursion_patterns__succeeded = mercury__builtin__unify_2_p_0(recursion_patterns__TypeInfo_13_13, ((MR_Box) (recursion_patterns__V_5_5)), ((MR_Box) (recursion_patterns__V_8_8)));
                }
#line 290 "recursion_patterns.m"
              }
#line 290 "recursion_patterns.m"
          }
#line 290 "recursion_patterns.m"
      }
#line 290 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 290 "recursion_patterns.m"
  }
#line 290 "recursion_patterns.m"
}

#line 867 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____own_and_inherit_prof_info_0_0(
#line 867 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 867 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 867 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 867 "recursion_patterns.m"
{
#line 867 "recursion_patterns.m"
  {
#line 867 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 867 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 867 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 867 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
#line 867 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 4414 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 867 "recursion_patterns.m"
    else
#line 867 "recursion_patterns.m"
      {
#line 867 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 867 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 867 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 867 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 867 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8;

#line 867 "recursion_patterns.m"
        {
#line 867 "recursion_patterns.m"
          measurements____Compare____own_prof_info_0_0(&recursion_patterns__V_8_8, recursion_patterns__V_4_4, recursion_patterns__V_6_6);
        }
#line 4436 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_8_8 == (MR_Integer) 0);
#line 867 "recursion_patterns.m"
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 867 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 867 "recursion_patterns.m"
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_8_8;
#line 867 "recursion_patterns.m"
        else
#line 867 "recursion_patterns.m"
          {
#line 867 "recursion_patterns.m"
            measurements____Compare____inherit_prof_info_0_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_5_5, recursion_patterns__V_7_7);
#line 867 "recursion_patterns.m"
            return;
          }
#line 867 "recursion_patterns.m"
      }
#line 867 "recursion_patterns.m"
  }
#line 867 "recursion_patterns.m"
}

#line 867 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____own_and_inherit_prof_info_0_0(
#line 867 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 867 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 867 "recursion_patterns.m"
{
#line 867 "recursion_patterns.m"
  {
#line 867 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 867 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_7 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 867 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_8 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 867 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_7 == recursion_patterns__CastY_8);
#line 867 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 867 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 867 "recursion_patterns.m"
    else
#line 867 "recursion_patterns.m"
      {
#line 867 "recursion_patterns.m"
        MR_Word recursion_patterns__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 867 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 867 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 867 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));

#line 4497 "recursion_patterns.c"
        {
#line 4499 "recursion_patterns.c"
          recursion_patterns__succeeded = measurements____Unify____own_prof_info_0_0(recursion_patterns__V_3_3, recursion_patterns__V_5_5);
        }
#line 867 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 4504 "recursion_patterns.c"
          {
#line 4506 "recursion_patterns.c"
            return recursion_patterns__succeeded = measurements____Unify____inherit_prof_info_0_0(recursion_patterns__V_4_4, recursion_patterns__V_6_6);
          }
#line 867 "recursion_patterns.m"
      }
#line 867 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 867 "recursion_patterns.m"
  }
#line 867 "recursion_patterns.m"
}

#line 859 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns____Compare____first_proc_info_0_0(
#line 859 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__1_1,
#line 859 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 859 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3)
#line 859 "recursion_patterns.m"
{
#line 859 "recursion_patterns.m"
  {
#line 859 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 859 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_9 = (MR_Integer) recursion_patterns__HeadVar__2_2;
#line 859 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_10 = (MR_Integer) recursion_patterns__HeadVar__3_3;

#line 859 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_9 == recursion_patterns__CastY_10);
#line 859 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 4542 "recursion_patterns.c"
      *recursion_patterns__HeadVar__1_1 = (MR_Integer) 0;
#line 859 "recursion_patterns.m"
    else
#line 859 "recursion_patterns.m"
      {
#line 859 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 859 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 859 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 859 "recursion_patterns.m"
        MR_Word recursion_patterns__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 859 "recursion_patterns.m"
        MR_Word recursion_patterns__V_8_8;

#line 859 "recursion_patterns.m"
        {
#line 859 "recursion_patterns.m"
          report____Compare____proc_desc_0_0(&recursion_patterns__V_8_8, recursion_patterns__V_4_4, recursion_patterns__V_6_6);
        }
#line 4564 "recursion_patterns.c"
        recursion_patterns__succeeded = (recursion_patterns__V_8_8 == (MR_Integer) 0);
#line 859 "recursion_patterns.m"
        recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 859 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 859 "recursion_patterns.m"
          *recursion_patterns__HeadVar__1_1 = recursion_patterns__V_8_8;
#line 859 "recursion_patterns.m"
        else
#line 859 "recursion_patterns.m"
          {
#line 859 "recursion_patterns.m"
            recursion_patterns____Compare____own_and_inherit_prof_info_0_0(recursion_patterns__HeadVar__1_1, recursion_patterns__V_5_5, recursion_patterns__V_7_7);
#line 859 "recursion_patterns.m"
            return;
          }
#line 859 "recursion_patterns.m"
      }
#line 859 "recursion_patterns.m"
  }
#line 859 "recursion_patterns.m"
}

#line 859 "recursion_patterns.m"
static MR_bool MR_CALL 
recursion_patterns____Unify____first_proc_info_0_0(
#line 859 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 859 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2)
#line 859 "recursion_patterns.m"
{
#line 859 "recursion_patterns.m"
  {
#line 859 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 859 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastX_7 = (MR_Integer) recursion_patterns__HeadVar__1_1;
#line 859 "recursion_patterns.m"
    MR_Integer recursion_patterns__CastY_8 = (MR_Integer) recursion_patterns__HeadVar__2_2;

#line 859 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__CastX_7 == recursion_patterns__CastY_8);
#line 859 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 859 "recursion_patterns.m"
      recursion_patterns__succeeded = MR_TRUE;
#line 859 "recursion_patterns.m"
    else
#line 859 "recursion_patterns.m"
      {
#line 859 "recursion_patterns.m"
        MR_Word recursion_patterns__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 859 "recursion_patterns.m"
        MR_Word recursion_patterns__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 859 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 859 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));

#line 4625 "recursion_patterns.c"
        {
#line 4627 "recursion_patterns.c"
          recursion_patterns__succeeded = report____Unify____proc_desc_0_0(recursion_patterns__V_3_3, recursion_patterns__V_5_5);
        }
#line 859 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 4632 "recursion_patterns.c"
          {
#line 4634 "recursion_patterns.c"
            return recursion_patterns__succeeded = recursion_patterns____Unify____own_and_inherit_prof_info_0_0(recursion_patterns__V_4_4, recursion_patterns__V_6_6);
          }
#line 859 "recursion_patterns.m"
      }
#line 859 "recursion_patterns.m"
    return recursion_patterns__succeeded;
#line 859 "recursion_patterns.m"
  }
#line 859 "recursion_patterns.m"
}

#line 1005 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_proc_rec_type_5_p_0(
#line 1005 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 1005 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 1005 "recursion_patterns.m"
  MR_Word recursion_patterns___PSPtr_8,
#line 1005 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 1005 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5)
#line 1005 "recursion_patterns.m"
{
#line 1012 "recursion_patterns.m"
  {
#line 1012 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 1012 "recursion_patterns.m"
    {
#line 1012 "recursion_patterns.m"
      recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_112_114_111_99_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(recursion_patterns__Deep_6, recursion_patterns__NumCliques_7, recursion_patterns__HeadVar__4_4, recursion_patterns__HeadVar__5_5);
#line 1012 "recursion_patterns.m"
      return;
    }
#line 1012 "recursion_patterns.m"
  }
#line 1005 "recursion_patterns.m"
}

#line 985 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_rec_type_5_p_0(
#line 985 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 985 "recursion_patterns.m"
  MR_Float recursion_patterns__NumCliques_7,
#line 985 "recursion_patterns.m"
  MR_Word recursion_patterns___RecursionType_8,
#line 985 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 985 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5)
#line 985 "recursion_patterns.m"
{
#line 991 "recursion_patterns.m"
  {
#line 991 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 991 "recursion_patterns.m"
    {
#line 991 "recursion_patterns.m"
      recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_97_108_105_122_101_95_104_105_115_116_111_103_114_97_109_95_114_101_99_95_116_121_112_101_95_95_91_51_93_95_48_5_p_0(recursion_patterns__Deep_6, recursion_patterns__NumCliques_7, recursion_patterns__HeadVar__4_4, recursion_patterns__HeadVar__5_5);
#line 991 "recursion_patterns.m"
      return;
    }
#line 991 "recursion_patterns.m"
  }
#line 985 "recursion_patterns.m"
}

#line 982 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_4_p_0_1(
#line 982 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 982 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 982 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 982 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 982 "recursion_patterns.m"
{
#line 982 "recursion_patterns.m"
  {
#line 982 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 982 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_HeadVar__5_5;

#line 982 "recursion_patterns.m"
    {
#line 982 "recursion_patterns.m"
      recursion_patterns__finalize_histogram_rec_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 4))), ((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_HeadVar__5_5);
    }
#line 982 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_HeadVar__5_5));
#line 982 "recursion_patterns.m"
  }
#line 982 "recursion_patterns.m"
}

#line 977 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__finalize_histogram_4_p_0(
#line 977 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_5,
#line 977 "recursion_patterns.m"
  MR_Integer recursion_patterns__NumCliques_6,
#line 977 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_8,
#line 977 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_9)
#line 977 "recursion_patterns.m"
{
#line 981 "recursion_patterns.m"
  {
#line 981 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 981 "recursion_patterns.m"
    MR_Word recursion_patterns__V_10_10;
#line 981 "recursion_patterns.m"
    MR_Float recursion_patterns__V_12_12;

#line 982 "recursion_patterns.m"
    {
#line 982 "recursion_patterns.m"
      recursion_patterns__V_12_12 = mercury__float__float_1_f_0(recursion_patterns__NumCliques_6);
    }
#line 982 "recursion_patterns.m"
    {
#line 982 "recursion_patterns.m"
      recursion_patterns__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 982 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 0) = ((MR_Box) (&recursion_patterns_scalar_common_5[1]));
#line 982 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 1) = ((MR_Box) (recursion_patterns__finalize_histogram_4_p_0_1));
#line 982 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 982 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 3) = ((MR_Box) (recursion_patterns__Deep_5));
#line 982 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), recursion_patterns__V_10_10, 4) = MR_box_float(recursion_patterns__V_12_12);
#line 982 "recursion_patterns.m"
    }
#line 982 "recursion_patterns.m"
    {
#line 982 "recursion_patterns.m"
      mercury__map__map_values_3_p_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0, (MR_Word) &report__report__type_ctor_info_recursion_type_freq_data_0, recursion_patterns__V_10_10, recursion_patterns__STATE_VARIABLE_Histogram_0_8, recursion_patterns__STATE_VARIABLE_Histogram_9);
#line 982 "recursion_patterns.m"
      return;
    }
#line 981 "recursion_patterns.m"
  }
#line 977 "recursion_patterns.m"
}

#line 971 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_2(
#line 971 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 971 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1)
#line 971 "recursion_patterns.m"
{
#line 971 "recursion_patterns.m"
  {
#line 971 "recursion_patterns.m"
    MR_Box recursion_patterns__wrapper_arg_2;
#line 971 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 971 "recursion_patterns.m"
    MR_Integer recursion_patterns__conv1_HeadVar__2_27;

#line 971 "recursion_patterns.m"
    {
#line 971 "recursion_patterns.m"
      recursion_patterns__conv1_HeadVar__2_27 = recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__971__1_1_f_0(((MR_Word) recursion_patterns__wrapper_arg_1));
    }
#line 971 "recursion_patterns.m"
    recursion_patterns__wrapper_arg_2 = ((MR_Box) (recursion_patterns__conv1_HeadVar__2_27));
#line 971 "recursion_patterns.m"
    return recursion_patterns__wrapper_arg_2;
#line 971 "recursion_patterns.m"
  }
#line 971 "recursion_patterns.m"
}

#line 974 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0_1(
#line 974 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 974 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1)
#line 974 "recursion_patterns.m"
{
#line 974 "recursion_patterns.m"
  {
#line 974 "recursion_patterns.m"
    MR_Box recursion_patterns__wrapper_arg_2;
#line 974 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 974 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_HeadVar__2_35;

#line 974 "recursion_patterns.m"
    {
#line 974 "recursion_patterns.m"
      recursion_patterns__conv0_HeadVar__2_35 = recursion_patterns__IntroducedFrom__func__recursion_type_to_simple_type__974__1_1_f_0(((MR_String) recursion_patterns__wrapper_arg_1));
    }
#line 974 "recursion_patterns.m"
    recursion_patterns__wrapper_arg_2 = ((MR_Box) (recursion_patterns__conv0_HeadVar__2_35));
#line 974 "recursion_patterns.m"
    return recursion_patterns__wrapper_arg_2;
#line 974 "recursion_patterns.m"
  }
#line 974 "recursion_patterns.m"
}

#line 960 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_type_to_simple_type_2_p_0(
#line 960 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 960 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__2_2)
#line 960 "recursion_patterns.m"
{
#line 963 "recursion_patterns.m"
  {
#line 963 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 963 "recursion_patterns.m"
#line 963 "recursion_patterns.m"
    switch (MR_tag((MR_Word) recursion_patterns__HeadVar__1_1)) {
#line 963 "recursion_patterns.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 963 "recursion_patterns.m"
      case (MR_Integer) 0:
#line 963 "recursion_patterns.m"
        {
#line 963 "recursion_patterns.m"
          *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[7]);
#line 963 "recursion_patterns.m"
        }
#line 963 "recursion_patterns.m"
        break;
#line 963 "recursion_patterns.m"
      case (MR_Integer) 1:
#line 964 "recursion_patterns.m"
        {
#line 964 "recursion_patterns.m"
          *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[8]);
#line 964 "recursion_patterns.m"
        }
#line 963 "recursion_patterns.m"
        break;
#line 963 "recursion_patterns.m"
      case (MR_Integer) 2:
#line 965 "recursion_patterns.m"
        {
#line 966 "recursion_patterns.m"
          *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[5]);
#line 965 "recursion_patterns.m"
        }
#line 963 "recursion_patterns.m"
        break;
#line 963 "recursion_patterns.m"
      case (MR_Integer) 3:
#line 963 "recursion_patterns.m"
#line 963 "recursion_patterns.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)))) {
#line 963 "recursion_patterns.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 963 "recursion_patterns.m"
          case (MR_Integer) 0:
#line 967 "recursion_patterns.m"
            {
#line 967 "recursion_patterns.m"
              MR_Integer recursion_patterns__NumProcs_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 967 "recursion_patterns.m"
              MR_Word recursion_patterns__V_17_17;

#line 968 "recursion_patterns.m"
              {
#line 968 "recursion_patterns.m"
                recursion_patterns__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 968 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), recursion_patterns__V_17_17, 0) = ((MR_Box) (recursion_patterns__NumProcs_16));
#line 968 "recursion_patterns.m"
              }
#line 968 "recursion_patterns.m"
              {
#line 968 "recursion_patterns.m"
                MR_Word base;
#line 968 "recursion_patterns.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "recursion_patterns.m"
                *recursion_patterns__HeadVar__2_2 = base;
#line 968 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_17_17));
#line 968 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 968 "recursion_patterns.m"
              }
#line 967 "recursion_patterns.m"
            }
#line 963 "recursion_patterns.m"
            break;
#line 963 "recursion_patterns.m"
          case (MR_Integer) 1:
#line 969 "recursion_patterns.m"
            {
#line 969 "recursion_patterns.m"
              MR_Word recursion_patterns__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 969 "recursion_patterns.m"
              MR_Word recursion_patterns__Levels_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 969 "recursion_patterns.m"
              MR_Word recursion_patterns__SimpleLevels_20;
#line 969 "recursion_patterns.m"
              MR_Word recursion_patterns__V_22_22;
#line 969 "recursion_patterns.m"
              MR_Word recursion_patterns__V_24_24;

#line 971 "recursion_patterns.m"
              {
#line 971 "recursion_patterns.m"
                recursion_patterns__V_24_24 = mercury__list__map_2_f_0((MR_Word) &report__report__type_ctor_info_recursion_level_report_0, recursion_patterns__TypeCtorInfo_44_44, (MR_Word) &recursion_patterns_scalar_common_1[7], recursion_patterns__Levels_19);
              }
#line 970 "recursion_patterns.m"
              {
#line 970 "recursion_patterns.m"
                recursion_patterns__SimpleLevels_20 = mercury__set__from_list_1_f_0(recursion_patterns__TypeCtorInfo_44_44, recursion_patterns__V_24_24);
              }
#line 969 "recursion_patterns.m"
              {
#line 969 "recursion_patterns.m"
                recursion_patterns__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 969 "recursion_patterns.m"
                MR_hl_field(MR_mktag(2), recursion_patterns__V_22_22, 0) = ((MR_Box) (recursion_patterns__SimpleLevels_20));
#line 969 "recursion_patterns.m"
              }
#line 969 "recursion_patterns.m"
              {
#line 969 "recursion_patterns.m"
                MR_Word base;
#line 969 "recursion_patterns.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "recursion_patterns.m"
                *recursion_patterns__HeadVar__2_2 = base;
#line 969 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_22_22));
#line 969 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 969 "recursion_patterns.m"
              }
#line 969 "recursion_patterns.m"
            }
#line 963 "recursion_patterns.m"
            break;
#line 963 "recursion_patterns.m"
          case (MR_Integer) 2:
#line 972 "recursion_patterns.m"
            {
#line 972 "recursion_patterns.m"
              MR_Word recursion_patterns__TypeCtorInfo_46_46 = (MR_Word) &report__report__type_ctor_info_recursion_type_simple_0;
#line 972 "recursion_patterns.m"
              MR_Word recursion_patterns__Errors_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 972 "recursion_patterns.m"
              MR_Word recursion_patterns__V_32_32;

#line 974 "recursion_patterns.m"
              {
#line 974 "recursion_patterns.m"
                recursion_patterns__V_32_32 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, recursion_patterns__TypeCtorInfo_46_46, (MR_Word) &recursion_patterns_scalar_common_1[6], recursion_patterns__Errors_29);
              }
#line 975 "recursion_patterns.m"
              {
#line 975 "recursion_patterns.m"
                *recursion_patterns__HeadVar__2_2 = mercury__list__f_43_43_2_f_0(recursion_patterns__TypeCtorInfo_46_46, recursion_patterns__V_32_32, (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_2[6]));
              }
#line 972 "recursion_patterns.m"
            }
#line 963 "recursion_patterns.m"
            break;
#line 963 "recursion_patterns.m"
        }
#line 963 "recursion_patterns.m"
        break;
#line 963 "recursion_patterns.m"
    }
#line 963 "recursion_patterns.m"
  }
#line 960 "recursion_patterns.m"
}

#line 940 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__update_procs_map_3_p_0(
#line 940 "recursion_patterns.m"
  MR_Word recursion_patterns__FirstProcInfo_4,
#line 940 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Map_0_16,
#line 940 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Map_17)
#line 940 "recursion_patterns.m"
{
#line 944 "recursion_patterns.m"
  {
#line 944 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 944 "recursion_patterns.m"
    MR_Word recursion_patterns__PSDesc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_4, (MR_Integer) 0)));
#line 944 "recursion_patterns.m"
    MR_Word recursion_patterns__FirstProfInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_4, (MR_Integer) 1)));
#line 944 "recursion_patterns.m"
    MR_Word recursion_patterns__PsPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 0)));
#line 944 "recursion_patterns.m"
    MR_Word recursion_patterns__ProcFreqData_15;
#line 946 "recursion_patterns.m"
    MR_String recursion_patterns__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 1)));
#line 946 "recursion_patterns.m"
    MR_Integer recursion_patterns__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 2)));
#line 946 "recursion_patterns.m"
    MR_String recursion_patterns__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 3)));
#line 946 "recursion_patterns.m"
    MR_String recursion_patterns__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 4)));
#line 946 "recursion_patterns.m"
    MR_String recursion_patterns__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_6, (MR_Integer) 5)));
#line 954 "recursion_patterns.m"
    MR_Word recursion_patterns__ProcFreqData0_9;
#line 947 "recursion_patterns.m"
    MR_Box recursion_patterns__conv0_ProcFreqData0_9;

#line 947 "recursion_patterns.m"
    {
#line 947 "recursion_patterns.m"
      recursion_patterns__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, recursion_patterns__STATE_VARIABLE_Map_0_16, ((MR_Box) (recursion_patterns__PsPtr_8)), &recursion_patterns__conv0_ProcFreqData0_9);
    }
#line 947 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 947 "recursion_patterns.m"
      {
#line 947 "recursion_patterns.m"
        recursion_patterns__ProcFreqData0_9 = ((MR_Word) recursion_patterns__conv0_ProcFreqData0_9);
#line 947 "recursion_patterns.m"
        recursion_patterns__succeeded = MR_TRUE;
#line 947 "recursion_patterns.m"
      }
#line 954 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 949 "recursion_patterns.m"
      {
#line 949 "recursion_patterns.m"
        MR_Integer recursion_patterns__Count0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_9, (MR_Integer) 0)));
#line 949 "recursion_patterns.m"
        MR_Word recursion_patterns__ProfInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_9, (MR_Integer) 1)));
#line 949 "recursion_patterns.m"
        MR_Word recursion_patterns__ProcDesc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_9, (MR_Integer) 2)));
#line 949 "recursion_patterns.m"
        MR_Word recursion_patterns__ProfInfo_13;
#line 949 "recursion_patterns.m"
        MR_Integer recursion_patterns__Count_14;
#line 949 "recursion_patterns.m"
        MR_Word recursion_patterns__OwnA_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_7, (MR_Integer) 0)));
#line 949 "recursion_patterns.m"
        MR_Word recursion_patterns__InheritA_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_7, (MR_Integer) 1)));
#line 949 "recursion_patterns.m"
        MR_Word recursion_patterns__OwnB_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_11, (MR_Integer) 0)));
#line 949 "recursion_patterns.m"
        MR_Word recursion_patterns__InheritB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_11, (MR_Integer) 1)));
#line 949 "recursion_patterns.m"
        MR_Word recursion_patterns__Own_34;
#line 949 "recursion_patterns.m"
        MR_Word recursion_patterns__Inherit_35;

#line 880 "recursion_patterns.m"
        {
#line 880 "recursion_patterns.m"
          recursion_patterns__Own_34 = measurements__add_own_to_own_2_f_0(recursion_patterns__OwnA_30, recursion_patterns__OwnB_32);
        }
#line 881 "recursion_patterns.m"
        {
#line 881 "recursion_patterns.m"
          recursion_patterns__Inherit_35 = measurements__add_inherit_to_inherit_2_f_0(recursion_patterns__InheritA_31, recursion_patterns__InheritB_33);
        }
#line 879 "recursion_patterns.m"
        {
#line 879 "recursion_patterns.m"
          recursion_patterns__ProfInfo_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_13, 0) = ((MR_Box) (recursion_patterns__Own_34));
#line 879 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_13, 1) = ((MR_Box) (recursion_patterns__Inherit_35));
#line 879 "recursion_patterns.m"
        }
#line 951 "recursion_patterns.m"
        recursion_patterns__Count_14 = (recursion_patterns__Count0_10 + (MR_Integer) 1);
#line 952 "recursion_patterns.m"
        {
#line 952 "recursion_patterns.m"
          recursion_patterns__ProcFreqData_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 952 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 0) = ((MR_Box) (recursion_patterns__Count_14));
#line 952 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 1) = ((MR_Box) (recursion_patterns__ProfInfo_13));
#line 952 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 2) = ((MR_Box) (recursion_patterns__ProcDesc_12));
#line 952 "recursion_patterns.m"
        }
#line 949 "recursion_patterns.m"
      }
#line 954 "recursion_patterns.m"
    else
#line 955 "recursion_patterns.m"
      {
#line 956 "recursion_patterns.m"
        {
#line 956 "recursion_patterns.m"
          recursion_patterns__ProcFreqData_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 956 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 0) = ((MR_Box) ((MR_Integer) 1));
#line 956 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 1) = ((MR_Box) (recursion_patterns__FirstProfInfo_7));
#line 956 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_15, 2) = ((MR_Box) (recursion_patterns__PSDesc_6));
#line 956 "recursion_patterns.m"
        }
#line 955 "recursion_patterns.m"
      }
#line 958 "recursion_patterns.m"
    {
#line 958 "recursion_patterns.m"
      mercury__map__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, ((MR_Box) (recursion_patterns__PsPtr_8)), ((MR_Box) (recursion_patterns__ProcFreqData_15)), recursion_patterns__STATE_VARIABLE_Map_0_16, recursion_patterns__STATE_VARIABLE_Map_17);
#line 958 "recursion_patterns.m"
      return;
    }
#line 944 "recursion_patterns.m"
  }
#line 940 "recursion_patterns.m"
}

#line 898 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__update_histogram_4_p_0(
#line 898 "recursion_patterns.m"
  MR_Word recursion_patterns__MaybeFirstProcInfo_5,
#line 898 "recursion_patterns.m"
  MR_Word recursion_patterns__SimpleType_6,
#line 898 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_19,
#line 898 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_20)
#line 898 "recursion_patterns.m"
{
#line 903 "recursion_patterns.m"
  {
#line 903 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 903 "recursion_patterns.m"
    MR_Word recursion_patterns__Data_18;
#line 925 "recursion_patterns.m"
    MR_Word recursion_patterns__Data0_8;
#line 904 "recursion_patterns.m"
    MR_Box recursion_patterns__conv0_Data0_8;

#line 904 "recursion_patterns.m"
    {
#line 904 "recursion_patterns.m"
      recursion_patterns__succeeded = mercury__map__search_3_p_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0, recursion_patterns__STATE_VARIABLE_Histogram_0_19, ((MR_Box) (recursion_patterns__SimpleType_6)), &recursion_patterns__conv0_Data0_8);
    }
#line 904 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 904 "recursion_patterns.m"
      {
#line 904 "recursion_patterns.m"
        recursion_patterns__Data0_8 = ((MR_Word) recursion_patterns__conv0_Data0_8);
#line 904 "recursion_patterns.m"
        recursion_patterns__succeeded = MR_TRUE;
#line 904 "recursion_patterns.m"
      }
#line 925 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 905 "recursion_patterns.m"
      {
#line 905 "recursion_patterns.m"
        MR_Integer recursion_patterns__Count0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__Data0_8, (MR_Integer) 0)));
#line 905 "recursion_patterns.m"
        MR_Word recursion_patterns__MaybeProfInfo0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Data0_8, (MR_Integer) 1)));
#line 905 "recursion_patterns.m"
        MR_Word recursion_patterns__Procs0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Data0_8, (MR_Integer) 2)));
#line 905 "recursion_patterns.m"
        MR_Word recursion_patterns__MaybeProfInfo_15;
#line 905 "recursion_patterns.m"
        MR_Word recursion_patterns__Procs_16;
#line 905 "recursion_patterns.m"
        MR_Integer recursion_patterns__Count_17;

#line 918 "recursion_patterns.m"
        if ((recursion_patterns__MaybeFirstProcInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 919 "recursion_patterns.m"
          {
#line 920 "recursion_patterns.m"
            recursion_patterns__MaybeProfInfo_15 = recursion_patterns__MaybeProfInfo0_10;
#line 921 "recursion_patterns.m"
            recursion_patterns__Procs_16 = recursion_patterns__Procs0_11;
#line 919 "recursion_patterns.m"
          }
#line 918 "recursion_patterns.m"
        else
#line 907 "recursion_patterns.m"
          {
#line 907 "recursion_patterns.m"
            MR_Word recursion_patterns__FirstProcInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstProcInfo_5, (MR_Integer) 0)));
#line 907 "recursion_patterns.m"
            MR_Word recursion_patterns__ProfInfo_14;
#line 907 "recursion_patterns.m"
            MR_Word recursion_patterns__PSDesc_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_12, (MR_Integer) 0)));
#line 907 "recursion_patterns.m"
            MR_Word recursion_patterns__FirstProfInfo_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_12, (MR_Integer) 1)));
#line 907 "recursion_patterns.m"
            MR_Word recursion_patterns__PsPtr_57;
#line 907 "recursion_patterns.m"
            MR_Word recursion_patterns__ProcFreqData_64;
#line 946 "recursion_patterns.m"
            MR_String recursion_patterns__V_68_68;
#line 946 "recursion_patterns.m"
            MR_Integer recursion_patterns__V_69_69;
#line 946 "recursion_patterns.m"
            MR_String recursion_patterns__V_70_70;
#line 946 "recursion_patterns.m"
            MR_String recursion_patterns__V_71_71;
#line 946 "recursion_patterns.m"
            MR_String recursion_patterns__V_72_72;
#line 954 "recursion_patterns.m"
            MR_Word recursion_patterns__ProcFreqData0_58;
#line 947 "recursion_patterns.m"
            MR_Box recursion_patterns__conv1_ProcFreqData0_58;

#line 912 "recursion_patterns.m"
            if ((recursion_patterns__MaybeProfInfo0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "recursion_patterns.m"
              recursion_patterns__ProfInfo_14 = recursion_patterns__FirstProfInfo_56;
#line 912 "recursion_patterns.m"
            else
#line 909 "recursion_patterns.m"
              {
#line 909 "recursion_patterns.m"
                MR_Word recursion_patterns__ProfInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProfInfo0_10, (MR_Integer) 0)));
#line 909 "recursion_patterns.m"
                MR_Word recursion_patterns__OwnA_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_56, (MR_Integer) 0)));
#line 909 "recursion_patterns.m"
                MR_Word recursion_patterns__InheritA_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_56, (MR_Integer) 1)));
#line 909 "recursion_patterns.m"
                MR_Word recursion_patterns__OwnB_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_13, (MR_Integer) 0)));
#line 909 "recursion_patterns.m"
                MR_Word recursion_patterns__InheritB_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_13, (MR_Integer) 1)));
#line 909 "recursion_patterns.m"
                MR_Word recursion_patterns__Own_49;
#line 909 "recursion_patterns.m"
                MR_Word recursion_patterns__Inherit_50;

#line 880 "recursion_patterns.m"
                {
#line 880 "recursion_patterns.m"
                  recursion_patterns__Own_49 = measurements__add_own_to_own_2_f_0(recursion_patterns__OwnA_45, recursion_patterns__OwnB_47);
                }
#line 881 "recursion_patterns.m"
                {
#line 881 "recursion_patterns.m"
                  recursion_patterns__Inherit_50 = measurements__add_inherit_to_inherit_2_f_0(recursion_patterns__InheritA_46, recursion_patterns__InheritB_48);
                }
#line 879 "recursion_patterns.m"
                {
#line 879 "recursion_patterns.m"
                  recursion_patterns__ProfInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_14, 0) = ((MR_Box) (recursion_patterns__Own_49));
#line 879 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_14, 1) = ((MR_Box) (recursion_patterns__Inherit_50));
#line 879 "recursion_patterns.m"
                }
#line 909 "recursion_patterns.m"
              }
#line 916 "recursion_patterns.m"
            {
#line 916 "recursion_patterns.m"
              recursion_patterns__MaybeProfInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 916 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProfInfo_15, 0) = ((MR_Box) (recursion_patterns__ProfInfo_14));
#line 916 "recursion_patterns.m"
            }
#line 946 "recursion_patterns.m"
            recursion_patterns__PsPtr_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 0)));
#line 946 "recursion_patterns.m"
            recursion_patterns__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 1)));
#line 946 "recursion_patterns.m"
            recursion_patterns__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 2)));
#line 946 "recursion_patterns.m"
            recursion_patterns__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 3)));
#line 946 "recursion_patterns.m"
            recursion_patterns__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 4)));
#line 946 "recursion_patterns.m"
            recursion_patterns__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__PSDesc_55, (MR_Integer) 5)));
#line 947 "recursion_patterns.m"
            {
#line 947 "recursion_patterns.m"
              recursion_patterns__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, recursion_patterns__Procs0_11, ((MR_Box) (recursion_patterns__PsPtr_57)), &recursion_patterns__conv1_ProcFreqData0_58);
            }
#line 947 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 947 "recursion_patterns.m"
              {
#line 947 "recursion_patterns.m"
                recursion_patterns__ProcFreqData0_58 = ((MR_Word) recursion_patterns__conv1_ProcFreqData0_58);
#line 947 "recursion_patterns.m"
                recursion_patterns__succeeded = MR_TRUE;
#line 947 "recursion_patterns.m"
              }
#line 954 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 949 "recursion_patterns.m"
              {
#line 949 "recursion_patterns.m"
                MR_Integer recursion_patterns__Count0_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_58, (MR_Integer) 0)));
#line 949 "recursion_patterns.m"
                MR_Word recursion_patterns__ProfInfo0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_58, (MR_Integer) 1)));
#line 949 "recursion_patterns.m"
                MR_Word recursion_patterns__ProcDesc_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData0_58, (MR_Integer) 2)));
#line 949 "recursion_patterns.m"
                MR_Word recursion_patterns__ProfInfo_62;
#line 949 "recursion_patterns.m"
                MR_Integer recursion_patterns__Count_63;
#line 949 "recursion_patterns.m"
                MR_Word recursion_patterns__OwnA_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_56, (MR_Integer) 0)));
#line 949 "recursion_patterns.m"
                MR_Word recursion_patterns__InheritA_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProfInfo_56, (MR_Integer) 1)));
#line 949 "recursion_patterns.m"
                MR_Word recursion_patterns__OwnB_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_60, (MR_Integer) 0)));
#line 949 "recursion_patterns.m"
                MR_Word recursion_patterns__InheritB_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo0_60, (MR_Integer) 1)));
#line 949 "recursion_patterns.m"
                MR_Word recursion_patterns__Own_81;
#line 949 "recursion_patterns.m"
                MR_Word recursion_patterns__Inherit_82;

#line 880 "recursion_patterns.m"
                {
#line 880 "recursion_patterns.m"
                  recursion_patterns__Own_81 = measurements__add_own_to_own_2_f_0(recursion_patterns__OwnA_77, recursion_patterns__OwnB_79);
                }
#line 881 "recursion_patterns.m"
                {
#line 881 "recursion_patterns.m"
                  recursion_patterns__Inherit_82 = measurements__add_inherit_to_inherit_2_f_0(recursion_patterns__InheritA_78, recursion_patterns__InheritB_80);
                }
#line 879 "recursion_patterns.m"
                {
#line 879 "recursion_patterns.m"
                  recursion_patterns__ProfInfo_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_62, 0) = ((MR_Box) (recursion_patterns__Own_81));
#line 879 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProfInfo_62, 1) = ((MR_Box) (recursion_patterns__Inherit_82));
#line 879 "recursion_patterns.m"
                }
#line 951 "recursion_patterns.m"
                recursion_patterns__Count_63 = (recursion_patterns__Count0_59 + (MR_Integer) 1);
#line 952 "recursion_patterns.m"
                {
#line 952 "recursion_patterns.m"
                  recursion_patterns__ProcFreqData_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 952 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 0) = ((MR_Box) (recursion_patterns__Count_63));
#line 952 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 1) = ((MR_Box) (recursion_patterns__ProfInfo_62));
#line 952 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 2) = ((MR_Box) (recursion_patterns__ProcDesc_61));
#line 952 "recursion_patterns.m"
                }
#line 949 "recursion_patterns.m"
              }
#line 954 "recursion_patterns.m"
            else
#line 955 "recursion_patterns.m"
              {
#line 956 "recursion_patterns.m"
                {
#line 956 "recursion_patterns.m"
                  recursion_patterns__ProcFreqData_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 956 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 0) = ((MR_Box) ((MR_Integer) 1));
#line 956 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 1) = ((MR_Box) (recursion_patterns__FirstProfInfo_56));
#line 956 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__ProcFreqData_64, 2) = ((MR_Box) (recursion_patterns__PSDesc_55));
#line 956 "recursion_patterns.m"
                }
#line 955 "recursion_patterns.m"
              }
#line 958 "recursion_patterns.m"
            {
#line 958 "recursion_patterns.m"
              mercury__map__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0, ((MR_Box) (recursion_patterns__PsPtr_57)), ((MR_Box) (recursion_patterns__ProcFreqData_64)), recursion_patterns__Procs0_11, &recursion_patterns__Procs_16);
            }
#line 907 "recursion_patterns.m"
          }
#line 923 "recursion_patterns.m"
        recursion_patterns__Count_17 = (recursion_patterns__Count0_9 + (MR_Integer) 1);
#line 924 "recursion_patterns.m"
        {
#line 924 "recursion_patterns.m"
          recursion_patterns__Data_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 924 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 0) = ((MR_Box) (recursion_patterns__Count_17));
#line 924 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 1) = ((MR_Box) (recursion_patterns__MaybeProfInfo_15));
#line 924 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 2) = ((MR_Box) (recursion_patterns__Procs_16));
#line 924 "recursion_patterns.m"
        }
#line 905 "recursion_patterns.m"
      }
#line 925 "recursion_patterns.m"
    else
#line 926 "recursion_patterns.m"
      {
#line 926 "recursion_patterns.m"
        MR_Word recursion_patterns__MaybeProfInfo_29;
#line 926 "recursion_patterns.m"
        MR_Word recursion_patterns__Procs_30;

#line 931 "recursion_patterns.m"
        if ((recursion_patterns__MaybeFirstProcInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "recursion_patterns.m"
          {
#line 933 "recursion_patterns.m"
            recursion_patterns__MaybeProfInfo_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 934 "recursion_patterns.m"
            {
#line 934 "recursion_patterns.m"
              recursion_patterns__Procs_30 = mercury__map__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0);
            }
#line 932 "recursion_patterns.m"
          }
#line 931 "recursion_patterns.m"
        else
#line 928 "recursion_patterns.m"
          {
#line 928 "recursion_patterns.m"
            MR_Word recursion_patterns__V_23_23;
#line 928 "recursion_patterns.m"
            MR_Word recursion_patterns__V_24_24;
#line 928 "recursion_patterns.m"
            MR_Word recursion_patterns__FirstProcInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstProcInfo_5, (MR_Integer) 0)));
#line 929 "recursion_patterns.m"
            MR_Word recursion_patterns__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_26, (MR_Integer) 0)));

#line 929 "recursion_patterns.m"
            recursion_patterns__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__FirstProcInfo_26, (MR_Integer) 1)));
#line 929 "recursion_patterns.m"
            {
#line 929 "recursion_patterns.m"
              recursion_patterns__MaybeProfInfo_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 929 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProfInfo_29, 0) = ((MR_Box) (recursion_patterns__V_23_23));
#line 929 "recursion_patterns.m"
            }
#line 930 "recursion_patterns.m"
            {
#line 930 "recursion_patterns.m"
              recursion_patterns__V_24_24 = mercury__map__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_proc_freq_data_0);
            }
#line 930 "recursion_patterns.m"
            {
#line 930 "recursion_patterns.m"
              recursion_patterns__update_procs_map_3_p_0(recursion_patterns__FirstProcInfo_26, recursion_patterns__V_24_24, &recursion_patterns__Procs_30);
            }
#line 928 "recursion_patterns.m"
          }
#line 936 "recursion_patterns.m"
        {
#line 936 "recursion_patterns.m"
          recursion_patterns__Data_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 936 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 0) = ((MR_Box) ((MR_Integer) 1));
#line 936 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 1) = ((MR_Box) (recursion_patterns__MaybeProfInfo_29));
#line 936 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Data_18, 2) = ((MR_Box) (recursion_patterns__Procs_30));
#line 936 "recursion_patterns.m"
        }
#line 926 "recursion_patterns.m"
      }
#line 938 "recursion_patterns.m"
    {
#line 938 "recursion_patterns.m"
      mercury__map__set_4_p_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0, ((MR_Box) (recursion_patterns__SimpleType_6)), ((MR_Box) (recursion_patterns__Data_18)), recursion_patterns__STATE_VARIABLE_Histogram_0_19, recursion_patterns__STATE_VARIABLE_Histogram_20);
#line 938 "recursion_patterns.m"
      return;
    }
#line 903 "recursion_patterns.m"
  }
#line 898 "recursion_patterns.m"
}

#line 822 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__rec_types_freq_build_histogram_5_p_0(
#line 822 "recursion_patterns.m"
  MR_Word recursion_patterns__Deep_6,
#line 822 "recursion_patterns.m"
  MR_Integer recursion_patterns__HeadVar__2_7,
#line 822 "recursion_patterns.m"
  MR_Word recursion_patterns__CliquePtr_8,
#line 822 "recursion_patterns.m"
  MR_Word recursion_patterns__STATE_VARIABLE_Histogram_0_27,
#line 822 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_Histogram_28)
#line 822 "recursion_patterns.m"
{
#line 826 "recursion_patterns.m"
  {
#line 826 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 826 "recursion_patterns.m"
    {
#line 826 "recursion_patterns.m"
      recursion_patterns__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_95_116_121_112_101_115_95_102_114_101_113_95_98_117_105_108_100_95_104_105_115_116_111_103_114_97_109_95_95_91_50_93_95_48_5_p_0(recursion_patterns__Deep_6, recursion_patterns__CliquePtr_8, recursion_patterns__STATE_VARIABLE_Histogram_0_27, recursion_patterns__STATE_VARIABLE_Histogram_28);
#line 826 "recursion_patterns.m"
      return;
    }
#line 826 "recursion_patterns.m"
  }
#line 822 "recursion_patterns.m"
}

#line 793 "recursion_patterns.m"
static MR_String MR_CALL 
recursion_patterns__error_to_string_1_f_0(
#line 793 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1)
#line 793 "recursion_patterns.m"
{
#line 795 "recursion_patterns.m"
  {
#line 795 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 795 "recursion_patterns.m"
    MR_String recursion_patterns__HeadVar__2_2;
#line 795 "recursion_patterns.m"
    MR_Word recursion_patterns__Detism_3 = (MR_Word) recursion_patterns__HeadVar__1_1;
#line 795 "recursion_patterns.m"
    MR_String recursion_patterns__V_7_7;
#line 795 "recursion_patterns.m"
    MR_String recursion_patterns__V_11_11;

#line 796 "recursion_patterns.m"
    {
#line 796 "recursion_patterns.m"
      recursion_patterns__V_7_7 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0, ((MR_Box) (recursion_patterns__Detism_3)));
    }
#line 796 "recursion_patterns.m"
    {
#line 796 "recursion_patterns.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &recursion_patterns_scalar_common_3[2], recursion_patterns__V_7_7, &recursion_patterns__V_11_11);
    }
#line 796 "recursion_patterns.m"
    {
#line 796 "recursion_patterns.m"
      return recursion_patterns__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(recursion_patterns__V_11_11, (MR_String) " code is not handled");
    }
#line 795 "recursion_patterns.m"
    return recursion_patterns__HeadVar__2_2;
#line 795 "recursion_patterns.m"
  }
#line 793 "recursion_patterns.m"
}

#line 738 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursions_cross_product_2_4_p_0(
#line 738 "recursion_patterns.m"
  MR_Integer recursion_patterns__HeadVar__1_1,
#line 738 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 738 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__3_3,
#line 738 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__4_4)
#line 738 "recursion_patterns.m"
{
#line 742 "recursion_patterns.m"
  {
#line 742 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 742 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 742 "recursion_patterns.m"
      *recursion_patterns__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 742 "recursion_patterns.m"
    else
#line 744 "recursion_patterns.m"
      {
#line 744 "recursion_patterns.m"
        MR_Float recursion_patterns__CostA_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 744 "recursion_patterns.m"
        MR_Float recursion_patterns__ProbA_10 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 744 "recursion_patterns.m"
        MR_Integer recursion_patterns__NumB_11;
#line 744 "recursion_patterns.m"
        MR_Float recursion_patterns__CostB_12;
#line 744 "recursion_patterns.m"
        MR_Float recursion_patterns__ProbB_13;
#line 744 "recursion_patterns.m"
        MR_Word recursion_patterns__PairsB_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 1)));
#line 744 "recursion_patterns.m"
        MR_Word recursion_patterns__Pairs0_16;
#line 744 "recursion_patterns.m"
        MR_Integer recursion_patterns__Num_17;
#line 744 "recursion_patterns.m"
        MR_Float recursion_patterns__Prob_18;
#line 744 "recursion_patterns.m"
        MR_Float recursion_patterns__Cost_19;
#line 744 "recursion_patterns.m"
        MR_Word recursion_patterns__Pair_20;
#line 744 "recursion_patterns.m"
        MR_Word recursion_patterns__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__3_3, (MR_Integer) 0)));
#line 744 "recursion_patterns.m"
        MR_Word recursion_patterns__V_22_22;
#line 744 "recursion_patterns.m"
        MR_Word recursion_patterns__V_23_23;

#line 744 "recursion_patterns.m"
        recursion_patterns__NumB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__V_21_21, (MR_Integer) 0)));
#line 744 "recursion_patterns.m"
        recursion_patterns__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_21_21, (MR_Integer) 1)));
#line 744 "recursion_patterns.m"
        recursion_patterns__CostB_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__V_22_22, (MR_Integer) 0)));
#line 744 "recursion_patterns.m"
        recursion_patterns__ProbB_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__V_22_22, (MR_Integer) 1)));
#line 745 "recursion_patterns.m"
        {
#line 745 "recursion_patterns.m"
          recursion_patterns__recursions_cross_product_2_4_p_0(recursion_patterns__HeadVar__1_1, recursion_patterns__HeadVar__2_2, recursion_patterns__PairsB_14, &recursion_patterns__Pairs0_16);
        }
#line 746 "recursion_patterns.m"
        recursion_patterns__Num_17 = (recursion_patterns__HeadVar__1_1 + recursion_patterns__NumB_11);
#line 747 "recursion_patterns.m"
        {
#line 747 "recursion_patterns.m"
          recursion_patterns__Prob_18 = measurement_units__and_2_f_0(recursion_patterns__ProbA_10, recursion_patterns__ProbB_13);
        }
#line 748 "recursion_patterns.m"
        recursion_patterns__Cost_19 = (recursion_patterns__CostA_9 + recursion_patterns__CostB_12);
#line 749 "recursion_patterns.m"
        {
#line 749 "recursion_patterns.m"
          recursion_patterns__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 749 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 0) = MR_box_float(recursion_patterns__Cost_19);
#line 749 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_23_23, 1) = MR_box_float(recursion_patterns__Prob_18);
#line 749 "recursion_patterns.m"
        }
#line 749 "recursion_patterns.m"
        {
#line 749 "recursion_patterns.m"
          recursion_patterns__Pair_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 749 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Pair_20, 0) = ((MR_Box) (recursion_patterns__Num_17));
#line 749 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__Pair_20, 1) = ((MR_Box) (recursion_patterns__V_23_23));
#line 749 "recursion_patterns.m"
        }
#line 750 "recursion_patterns.m"
        {
#line 750 "recursion_patterns.m"
          MR_Word base;
#line 750 "recursion_patterns.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "recursion_patterns.m"
          *recursion_patterns__HeadVar__4_4 = base;
#line 750 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__Pair_20));
#line 750 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__Pairs0_16));
#line 750 "recursion_patterns.m"
        }
#line 744 "recursion_patterns.m"
      }
#line 742 "recursion_patterns.m"
  }
#line 738 "recursion_patterns.m"
}

#line 728 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursions_cross_product_3_p_0(
#line 728 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 728 "recursion_patterns.m"
  MR_Word recursion_patterns__PairsB_2,
#line 728 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__3_3)
#line 728 "recursion_patterns.m"
{
#line 732 "recursion_patterns.m"
  {
#line 732 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 732 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 732 "recursion_patterns.m"
      *recursion_patterns__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 732 "recursion_patterns.m"
    else
#line 733 "recursion_patterns.m"
      {
#line 733 "recursion_patterns.m"
        MR_Integer recursion_patterns__NumA_5;
#line 733 "recursion_patterns.m"
        MR_Word recursion_patterns__RecA_6;
#line 733 "recursion_patterns.m"
        MR_Word recursion_patterns__PairsA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 733 "recursion_patterns.m"
        MR_Word recursion_patterns__InnerLoop_10;
#line 733 "recursion_patterns.m"
        MR_Word recursion_patterns__OuterLoopTail_11;
#line 733 "recursion_patterns.m"
        MR_Word recursion_patterns__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));

#line 733 "recursion_patterns.m"
        recursion_patterns__NumA_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__V_12_12, (MR_Integer) 0)));
#line 733 "recursion_patterns.m"
        recursion_patterns__RecA_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_12_12, (MR_Integer) 1)));
#line 734 "recursion_patterns.m"
        {
#line 734 "recursion_patterns.m"
          recursion_patterns__recursions_cross_product_2_4_p_0(recursion_patterns__NumA_5, recursion_patterns__RecA_6, recursion_patterns__PairsB_2, &recursion_patterns__InnerLoop_10);
        }
#line 735 "recursion_patterns.m"
        {
#line 735 "recursion_patterns.m"
          recursion_patterns__recursions_cross_product_3_p_0(recursion_patterns__PairsA_7, recursion_patterns__PairsB_2, &recursion_patterns__OuterLoopTail_11);
        }
#line 736 "recursion_patterns.m"
        {
#line 736 "recursion_patterns.m"
          *recursion_patterns__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &recursion_patterns_scalar_common_1[3], recursion_patterns__InnerLoop_10, recursion_patterns__OuterLoopTail_11);
        }
#line 733 "recursion_patterns.m"
      }
#line 732 "recursion_patterns.m"
  }
#line 728 "recursion_patterns.m"
}

#line 700 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__condense_recursions_2_3_p_0(
#line 700 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__1_1,
#line 700 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 700 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__3_3)
#line 700 "recursion_patterns.m"
{
#line 704 "recursion_patterns.m"
  while (MR_TRUE)
#line 704 "recursion_patterns.m"
    {
#line 704 "recursion_patterns.m"
      /* tailcall optimized into a loop */
#line 704 "recursion_patterns.m"
      {
#line 704 "recursion_patterns.m"
        MR_bool recursion_patterns__succeeded;

#line 704 "recursion_patterns.m"
        if ((recursion_patterns__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 704 "recursion_patterns.m"
          {
#line 704 "recursion_patterns.m"
            {
#line 704 "recursion_patterns.m"
              MR_Word base;
#line 704 "recursion_patterns.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "recursion_patterns.m"
              *recursion_patterns__HeadVar__3_3 = base;
#line 704 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__HeadVar__1_1));
#line 704 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 704 "recursion_patterns.m"
            }
#line 704 "recursion_patterns.m"
          }
#line 704 "recursion_patterns.m"
        else
#line 705 "recursion_patterns.m"
          {
#line 705 "recursion_patterns.m"
            MR_Integer recursion_patterns__NumA_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 705 "recursion_patterns.m"
            MR_Word recursion_patterns__RecA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 705 "recursion_patterns.m"
            MR_Integer recursion_patterns__NumB_8;
#line 705 "recursion_patterns.m"
            MR_Word recursion_patterns__RecB_9;
#line 705 "recursion_patterns.m"
            MR_Word recursion_patterns__Pairs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 705 "recursion_patterns.m"
            MR_Word recursion_patterns__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));

#line 705 "recursion_patterns.m"
            recursion_patterns__NumB_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__V_20_20, (MR_Integer) 0)));
#line 705 "recursion_patterns.m"
            recursion_patterns__RecB_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_20_20, (MR_Integer) 1)));
#line 706 "recursion_patterns.m"
            recursion_patterns__succeeded = (recursion_patterns__NumA_6 == recursion_patterns__NumB_8);
#line 716 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 707 "recursion_patterns.m"
              {
#line 707 "recursion_patterns.m"
                MR_Float recursion_patterns__CostA_12 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RecA_7, (MR_Integer) 0)));
#line 707 "recursion_patterns.m"
                MR_Float recursion_patterns__ProbabilityA_13 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RecA_7, (MR_Integer) 1)));
#line 707 "recursion_patterns.m"
                MR_Float recursion_patterns__CostB_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RecB_9, (MR_Integer) 0)));
#line 707 "recursion_patterns.m"
                MR_Float recursion_patterns__ProbabilityB_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RecB_9, (MR_Integer) 1)));
#line 707 "recursion_patterns.m"
                MR_Float recursion_patterns__Cost_16;
#line 707 "recursion_patterns.m"
                MR_Float recursion_patterns__Probability_17;
#line 707 "recursion_patterns.m"
                MR_Word recursion_patterns__Rec_18;
#line 707 "recursion_patterns.m"
                MR_Word recursion_patterns__V_21_21;
#line 707 "recursion_patterns.m"
                MR_Word recursion_patterns__V_22_22;
#line 707 "recursion_patterns.m"
                MR_Float recursion_patterns__V_23_23;
#line 707 "recursion_patterns.m"
                MR_Word recursion_patterns__V_24_24;
#line 707 "recursion_patterns.m"
                MR_Float recursion_patterns__V_25_25;
#line 707 "recursion_patterns.m"
                MR_Word recursion_patterns__V_27_27;
#line 707 "recursion_patterns.m"
                MR_Word recursion_patterns__V_29_29;

#line 710 "recursion_patterns.m"
                {
#line 710 "recursion_patterns.m"
                  recursion_patterns__V_23_23 = measurement_units__probability_to_float_1_f_0(recursion_patterns__ProbabilityA_13);
                }
#line 711 "recursion_patterns.m"
                {
#line 711 "recursion_patterns.m"
                  recursion_patterns__V_25_25 = measurement_units__probability_to_float_1_f_0(recursion_patterns__ProbabilityB_15);
                }
#line 711 "recursion_patterns.m"
                {
#line 711 "recursion_patterns.m"
                  recursion_patterns__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_24_24, 0) = MR_box_float(recursion_patterns__V_25_25);
#line 711 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "recursion_patterns.m"
                }
#line 710 "recursion_patterns.m"
                {
#line 710 "recursion_patterns.m"
                  recursion_patterns__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_21_21, 0) = MR_box_float(recursion_patterns__V_23_23);
#line 710 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_21_21, 1) = ((MR_Box) (recursion_patterns__V_24_24));
#line 710 "recursion_patterns.m"
                }
#line 712 "recursion_patterns.m"
                {
#line 712 "recursion_patterns.m"
                  recursion_patterns__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_27_27, 0) = MR_box_float(recursion_patterns__CostB_14);
#line 712 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "recursion_patterns.m"
                }
#line 712 "recursion_patterns.m"
                {
#line 712 "recursion_patterns.m"
                  recursion_patterns__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_22_22, 0) = MR_box_float(recursion_patterns__CostA_12);
#line 712 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_22_22, 1) = ((MR_Box) (recursion_patterns__V_27_27));
#line 712 "recursion_patterns.m"
                }
#line 709 "recursion_patterns.m"
                {
#line 709 "recursion_patterns.m"
                  measurements__weighted_average_3_p_0(recursion_patterns__V_21_21, recursion_patterns__V_22_22, &recursion_patterns__Cost_16);
                }
#line 713 "recursion_patterns.m"
                {
#line 713 "recursion_patterns.m"
                  recursion_patterns__Probability_17 = measurement_units__or_2_f_0(recursion_patterns__ProbabilityA_13, recursion_patterns__ProbabilityB_15);
                }
#line 714 "recursion_patterns.m"
                {
#line 714 "recursion_patterns.m"
                  recursion_patterns__Rec_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 714 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__Rec_18, 0) = MR_box_float(recursion_patterns__Cost_16);
#line 714 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__Rec_18, 1) = MR_box_float(recursion_patterns__Probability_17);
#line 714 "recursion_patterns.m"
                }
#line 715 "recursion_patterns.m"
                {
#line 715 "recursion_patterns.m"
                  recursion_patterns__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 715 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_29_29, 0) = ((MR_Box) (recursion_patterns__NumA_6));
#line 715 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_29_29, 1) = ((MR_Box) (recursion_patterns__Rec_18));
#line 715 "recursion_patterns.m"
                }
#line 715 "recursion_patterns.m"
                /* direct tailcall eliminated */
#line 715 "recursion_patterns.m"
                {
#line 715 "recursion_patterns.m"
                  MR_Word recursion_patterns__HeadVar__1__tmp_copy_1 = recursion_patterns__V_29_29;
#line 715 "recursion_patterns.m"
                  MR_Word recursion_patterns__HeadVar__2__tmp_copy_2 = recursion_patterns__Pairs0_10;

#line 715 "recursion_patterns.m"
                  recursion_patterns__HeadVar__2_2 = recursion_patterns__HeadVar__2__tmp_copy_2;
#line 715 "recursion_patterns.m"
                  recursion_patterns__HeadVar__1_1 = recursion_patterns__HeadVar__1__tmp_copy_1;
#line 715 "recursion_patterns.m"
                }
#line 715 "recursion_patterns.m"
                continue;
#line 707 "recursion_patterns.m"
              }
#line 716 "recursion_patterns.m"
            else
#line 717 "recursion_patterns.m"
              {
#line 717 "recursion_patterns.m"
                MR_Word recursion_patterns__Pairs1_19;
#line 717 "recursion_patterns.m"
                MR_Word recursion_patterns__Pairs0_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 717 "recursion_patterns.m"
                MR_Word recursion_patterns__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));

#line 698 "recursion_patterns.m"
                {
#line 698 "recursion_patterns.m"
                  recursion_patterns__condense_recursions_2_3_p_0(recursion_patterns__V_37_37, recursion_patterns__Pairs0_35, &recursion_patterns__Pairs1_19);
                }
#line 718 "recursion_patterns.m"
                {
#line 718 "recursion_patterns.m"
                  MR_Word base;
#line 718 "recursion_patterns.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "recursion_patterns.m"
                  *recursion_patterns__HeadVar__3_3 = base;
#line 718 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__HeadVar__1_1));
#line 718 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__Pairs1_19));
#line 718 "recursion_patterns.m"
                }
#line 717 "recursion_patterns.m"
              }
#line 705 "recursion_patterns.m"
          }
#line 704 "recursion_patterns.m"
      }
#line 704 "recursion_patterns.m"
      break;
#line 704 "recursion_patterns.m"
    }
#line 700 "recursion_patterns.m"
}

#line 668 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__merge_recursion_data_sequence_3_p_0(
#line 668 "recursion_patterns.m"
  MR_Word recursion_patterns__A_4,
#line 668 "recursion_patterns.m"
  MR_Word recursion_patterns__B_5,
#line 668 "recursion_patterns.m"
  MR_Word * recursion_patterns__Result_6)
#line 668 "recursion_patterns.m"
{
#line 673 "recursion_patterns.m"
  {
#line 673 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 673 "recursion_patterns.m"
    if ((recursion_patterns__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 689 "recursion_patterns.m"
      *recursion_patterns__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 673 "recursion_patterns.m"
    else
#line 673 "recursion_patterns.m"
      {
#line 673 "recursion_patterns.m"
        MR_Word recursion_patterns__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 2)));
#line 673 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 1)));
#line 673 "recursion_patterns.m"
        MR_Word recursion_patterns__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 0)));

#line 673 "recursion_patterns.m"
        if ((recursion_patterns__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "recursion_patterns.m"
          *recursion_patterns__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 673 "recursion_patterns.m"
        else
#line 673 "recursion_patterns.m"
          {
#line 673 "recursion_patterns.m"
            MR_Word recursion_patterns__RecursionsB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 0)));
#line 673 "recursion_patterns.m"
            MR_Integer recursion_patterns__MaxLevelB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 1)));
#line 673 "recursion_patterns.m"
            MR_Word recursion_patterns__ErrorsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 2)));
#line 673 "recursion_patterns.m"
            MR_Word recursion_patterns__Recursions0_13;
#line 673 "recursion_patterns.m"
            MR_Word recursion_patterns__Recursions1_14;
#line 673 "recursion_patterns.m"
            MR_Word recursion_patterns__Recursions_15;
#line 673 "recursion_patterns.m"
            MR_Integer recursion_patterns__MaxLevel_16;
#line 673 "recursion_patterns.m"
            MR_Word recursion_patterns__Errors_17;

#line 675 "recursion_patterns.m"
            {
#line 675 "recursion_patterns.m"
              recursion_patterns__recursions_cross_product_3_p_0(recursion_patterns__V_25_25, recursion_patterns__RecursionsB_10, &recursion_patterns__Recursions0_13);
            }
#line 676 "recursion_patterns.m"
            {
#line 676 "recursion_patterns.m"
              mercury__list__sort_2_p_0((MR_Word) &recursion_patterns_scalar_common_1[3], recursion_patterns__Recursions0_13, &recursion_patterns__Recursions1_14);
            }
#line 696 "recursion_patterns.m"
            if ((recursion_patterns__Recursions1_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "recursion_patterns.m"
              recursion_patterns__Recursions_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "recursion_patterns.m"
            else
#line 697 "recursion_patterns.m"
              {
#line 697 "recursion_patterns.m"
                MR_Word recursion_patterns__Pairs0_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__Recursions1_14, (MR_Integer) 1)));
#line 697 "recursion_patterns.m"
                MR_Word recursion_patterns__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__Recursions1_14, (MR_Integer) 0)));

#line 698 "recursion_patterns.m"
                {
#line 698 "recursion_patterns.m"
                  recursion_patterns__condense_recursions_2_3_p_0(recursion_patterns__V_30_30, recursion_patterns__Pairs0_28, &recursion_patterns__Recursions_15);
                }
#line 697 "recursion_patterns.m"
              }
#line 681 "recursion_patterns.m"
            recursion_patterns__MaxLevel_16 = (recursion_patterns__V_24_24 + recursion_patterns__MaxLevelB_11);
#line 682 "recursion_patterns.m"
            {
#line 682 "recursion_patterns.m"
              recursion_patterns__Errors_17 = mercury__set__union_2_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0, recursion_patterns__V_23_23, recursion_patterns__ErrorsB_12);
            }
#line 683 "recursion_patterns.m"
            {
#line 683 "recursion_patterns.m"
              MR_Word base;
#line 683 "recursion_patterns.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 683 "recursion_patterns.m"
              *recursion_patterns__Result_6 = base;
#line 683 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__Recursions_15));
#line 683 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__MaxLevel_16));
#line 683 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__Errors_17));
#line 683 "recursion_patterns.m"
            }
#line 673 "recursion_patterns.m"
          }
#line 673 "recursion_patterns.m"
      }
#line 673 "recursion_patterns.m"
  }
#line 668 "recursion_patterns.m"
}

#line 606 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__merge_recursion_data_after_branch_3_p_0(
#line 606 "recursion_patterns.m"
  MR_Word recursion_patterns__A_4,
#line 606 "recursion_patterns.m"
  MR_Word recursion_patterns__B_5,
#line 606 "recursion_patterns.m"
  MR_Word * recursion_patterns__Result_6)
#line 606 "recursion_patterns.m"
{
#line 611 "recursion_patterns.m"
  {
#line 611 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 611 "recursion_patterns.m"
    if ((recursion_patterns__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 611 "recursion_patterns.m"
      if ((recursion_patterns__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 627 "recursion_patterns.m"
        *recursion_patterns__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 611 "recursion_patterns.m"
      else
#line 625 "recursion_patterns.m"
        *recursion_patterns__Result_6 = recursion_patterns__B_5;
#line 611 "recursion_patterns.m"
    else
#line 611 "recursion_patterns.m"
      {
#line 611 "recursion_patterns.m"
        MR_Word recursion_patterns__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 2)));
#line 611 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 1)));
#line 611 "recursion_patterns.m"
        MR_Word recursion_patterns__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__A_4, (MR_Integer) 0)));

#line 611 "recursion_patterns.m"
        if ((recursion_patterns__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 621 "recursion_patterns.m"
          *recursion_patterns__Result_6 = recursion_patterns__A_4;
#line 611 "recursion_patterns.m"
        else
#line 611 "recursion_patterns.m"
          {
#line 611 "recursion_patterns.m"
            MR_Word recursion_patterns__RecursionsB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 0)));
#line 611 "recursion_patterns.m"
            MR_Integer recursion_patterns__MaxLevelB_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 1)));
#line 611 "recursion_patterns.m"
            MR_Word recursion_patterns__ErrorsB_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__B_5, (MR_Integer) 2)));
#line 611 "recursion_patterns.m"
            MR_Word recursion_patterns__Recursions0_13;
#line 611 "recursion_patterns.m"
            MR_Word recursion_patterns__Recursions_14;
#line 611 "recursion_patterns.m"
            MR_Integer recursion_patterns__MaxLevel_15;
#line 611 "recursion_patterns.m"
            MR_Word recursion_patterns__Errors_16;

#line 613 "recursion_patterns.m"
            {
#line 613 "recursion_patterns.m"
              recursion_patterns__Recursions0_13 = mercury__assoc_list__merge_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0, recursion_patterns__V_28_28, recursion_patterns__RecursionsB_10);
            }
#line 696 "recursion_patterns.m"
            if ((recursion_patterns__Recursions0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "recursion_patterns.m"
              recursion_patterns__Recursions_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "recursion_patterns.m"
            else
#line 697 "recursion_patterns.m"
              {
#line 697 "recursion_patterns.m"
                MR_Word recursion_patterns__Pairs0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__Recursions0_13, (MR_Integer) 1)));
#line 697 "recursion_patterns.m"
                MR_Word recursion_patterns__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__Recursions0_13, (MR_Integer) 0)));

#line 698 "recursion_patterns.m"
                {
#line 698 "recursion_patterns.m"
                  recursion_patterns__condense_recursions_2_3_p_0(recursion_patterns__V_33_33, recursion_patterns__Pairs0_31, &recursion_patterns__Recursions_14);
                }
#line 697 "recursion_patterns.m"
              }
#line 615 "recursion_patterns.m"
            {
#line 615 "recursion_patterns.m"
              recursion_patterns__MaxLevel_15 = mercury__int__max_2_f_0(recursion_patterns__V_27_27, recursion_patterns__MaxLevelB_11);
            }
#line 616 "recursion_patterns.m"
            {
#line 616 "recursion_patterns.m"
              recursion_patterns__Errors_16 = mercury__set__union_2_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0, recursion_patterns__V_26_26, recursion_patterns__ErrorsB_12);
            }
#line 617 "recursion_patterns.m"
            {
#line 617 "recursion_patterns.m"
              MR_Word base;
#line 617 "recursion_patterns.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 617 "recursion_patterns.m"
              *recursion_patterns__Result_6 = base;
#line 617 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__Recursions_14));
#line 617 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__MaxLevel_15));
#line 617 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__Errors_16));
#line 617 "recursion_patterns.m"
            }
#line 611 "recursion_patterns.m"
          }
#line 611 "recursion_patterns.m"
      }
#line 611 "recursion_patterns.m"
  }
#line 606 "recursion_patterns.m"
}

#line 543 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__atomic_goal_recursion_data_4_p_0(
#line 543 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_5,
#line 543 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_6,
#line 543 "recursion_patterns.m"
  MR_Word recursion_patterns__AtomicGoal_7,
#line 543 "recursion_patterns.m"
  MR_Word * recursion_patterns__RecursionData_8)
#line 543 "recursion_patterns.m"
{
#line 546 "recursion_patterns.m"
  {
#line 546 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 546 "recursion_patterns.m"
    MR_Word recursion_patterns__RecursionLevel_33;
#line 546 "recursion_patterns.m"
    MR_Integer recursion_patterns__RecursiveCalls_47;
#line 546 "recursion_patterns.m"
    MR_Word recursion_patterns__V_61_61;
#line 546 "recursion_patterns.m"
    MR_Word recursion_patterns__V_63_63;
#line 581 "recursion_patterns.m"
    MR_Word recursion_patterns__V_48_48;

#line 563 "recursion_patterns.m"
#line 563 "recursion_patterns.m"
    switch (MR_tag((MR_Word) recursion_patterns__AtomicGoal_7)) {
#line 563 "recursion_patterns.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 563 "recursion_patterns.m"
      case (MR_Integer) 0:
#line 563 "recursion_patterns.m"
      case (MR_Integer) 1:
#line 563 "recursion_patterns.m"
      case (MR_Integer) 2:
#line 561 "recursion_patterns.m"
        {
#line 561 "recursion_patterns.m"
          MR_Word recursion_patterns__V_58_58;
#line 561 "recursion_patterns.m"
          MR_Float recursion_patterns__V_60_60;

#line 562 "recursion_patterns.m"
          {
#line 562 "recursion_patterns.m"
            recursion_patterns__V_60_60 = measurement_units__certain_0_f_0();
          }
#line 562 "recursion_patterns.m"
          {
#line 562 "recursion_patterns.m"
            recursion_patterns__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 562 "recursion_patterns.m"
            MR_hl_field(MR_mktag(0), recursion_patterns__V_58_58, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 562 "recursion_patterns.m"
            MR_hl_field(MR_mktag(0), recursion_patterns__V_58_58, 1) = MR_box_float(recursion_patterns__V_60_60);
#line 562 "recursion_patterns.m"
          }
#line 562 "recursion_patterns.m"
          {
#line 562 "recursion_patterns.m"
            recursion_patterns__RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 562 "recursion_patterns.m"
            MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 0));
#line 562 "recursion_patterns.m"
            MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 1) = ((MR_Box) (recursion_patterns__V_58_58));
#line 562 "recursion_patterns.m"
          }
#line 561 "recursion_patterns.m"
        }
#line 563 "recursion_patterns.m"
        break;
#line 563 "recursion_patterns.m"
      case (MR_Integer) 3:
#line 563 "recursion_patterns.m"
#line 563 "recursion_patterns.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__AtomicGoal_7, (MR_Integer) 0)))) {
#line 563 "recursion_patterns.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 563 "recursion_patterns.m"
          case (MR_Integer) 0:
#line 563 "recursion_patterns.m"
          case (MR_Integer) 1:
#line 563 "recursion_patterns.m"
          case (MR_Integer) 2:
#line 563 "recursion_patterns.m"
          case (MR_Integer) 3:
#line 563 "recursion_patterns.m"
          case (MR_Integer) 4:
#line 563 "recursion_patterns.m"
          case (MR_Integer) 8:
#line 563 "recursion_patterns.m"
          case (MR_Integer) 9:
#line 561 "recursion_patterns.m"
            {
#line 561 "recursion_patterns.m"
              MR_Word recursion_patterns__V_58_58;
#line 561 "recursion_patterns.m"
              MR_Float recursion_patterns__V_60_60;

#line 562 "recursion_patterns.m"
              {
#line 562 "recursion_patterns.m"
                recursion_patterns__V_60_60 = measurement_units__certain_0_f_0();
              }
#line 562 "recursion_patterns.m"
              {
#line 562 "recursion_patterns.m"
                recursion_patterns__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 562 "recursion_patterns.m"
                MR_hl_field(MR_mktag(0), recursion_patterns__V_58_58, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 562 "recursion_patterns.m"
                MR_hl_field(MR_mktag(0), recursion_patterns__V_58_58, 1) = MR_box_float(recursion_patterns__V_60_60);
#line 562 "recursion_patterns.m"
              }
#line 562 "recursion_patterns.m"
              {
#line 562 "recursion_patterns.m"
                recursion_patterns__RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 562 "recursion_patterns.m"
                MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 0));
#line 562 "recursion_patterns.m"
                MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 1) = ((MR_Box) (recursion_patterns__V_58_58));
#line 562 "recursion_patterns.m"
              }
#line 561 "recursion_patterns.m"
            }
#line 563 "recursion_patterns.m"
            break;
#line 563 "recursion_patterns.m"
          case (MR_Integer) 5:
#line 563 "recursion_patterns.m"
          case (MR_Integer) 6:
#line 563 "recursion_patterns.m"
          case (MR_Integer) 7:
#line 567 "recursion_patterns.m"
            {
#line 567 "recursion_patterns.m"
              MR_Word recursion_patterns__ThisClique_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 0)));
#line 567 "recursion_patterns.m"
              MR_Word recursion_patterns__CallSiteMap_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 1)));
#line 567 "recursion_patterns.m"
              MR_Word recursion_patterns__CostAndCallees_45;
#line 570 "recursion_patterns.m"
              MR_Word recursion_patterns__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 2)));
#line 571 "recursion_patterns.m"
              MR_Box recursion_patterns__conv0_CostAndCallees_45;

#line 571 "recursion_patterns.m"
              {
#line 571 "recursion_patterns.m"
                mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &recursion_patterns_scalar_common_2[0], recursion_patterns__CallSiteMap_43, ((MR_Box) (recursion_patterns__RevGoalPath_6)), &recursion_patterns__conv0_CostAndCallees_45);
              }
#line 571 "recursion_patterns.m"
              recursion_patterns__CostAndCallees_45 = ((MR_Word) recursion_patterns__conv0_CostAndCallees_45);
#line 572 "recursion_patterns.m"
              {
#line 572 "recursion_patterns.m"
                recursion_patterns__succeeded = analysis_utils__cost_and_callees_is_recursive_2_p_0(recursion_patterns__ThisClique_42, recursion_patterns__CostAndCallees_45);
              }
#line 576 "recursion_patterns.m"
              if (recursion_patterns__succeeded)
#line 575 "recursion_patterns.m"
                {
#line 575 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_50_50;
#line 575 "recursion_patterns.m"
                  MR_Float recursion_patterns__V_52_52;

#line 575 "recursion_patterns.m"
                  {
#line 575 "recursion_patterns.m"
                    recursion_patterns__V_52_52 = measurement_units__certain_0_f_0();
                  }
#line 575 "recursion_patterns.m"
                  {
#line 575 "recursion_patterns.m"
                    recursion_patterns__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 575 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_50_50, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 575 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_50_50, 1) = MR_box_float(recursion_patterns__V_52_52);
#line 575 "recursion_patterns.m"
                  }
#line 575 "recursion_patterns.m"
                  {
#line 575 "recursion_patterns.m"
                    recursion_patterns__RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 575 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 1));
#line 575 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 1) = ((MR_Box) (recursion_patterns__V_50_50));
#line 575 "recursion_patterns.m"
                  }
#line 575 "recursion_patterns.m"
                }
#line 576 "recursion_patterns.m"
              else
#line 577 "recursion_patterns.m"
                {
#line 577 "recursion_patterns.m"
                  MR_Float recursion_patterns__CostPercall_46;
#line 577 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CostAndCallees_45, (MR_Integer) 0)));
#line 577 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_55_55;
#line 577 "recursion_patterns.m"
                  MR_Float recursion_patterns__V_56_56;
#line 577 "recursion_patterns.m"
                  MR_Integer recursion_patterns__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__CostAndCallees_45, (MR_Integer) 1)));
#line 577 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CostAndCallees_45, (MR_Integer) 2)));
#line 577 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CostAndCallees_45, (MR_Integer) 3)));

#line 577 "recursion_patterns.m"
                  {
#line 577 "recursion_patterns.m"
                    recursion_patterns__CostPercall_46 = measurements__cs_cost_get_percall_1_f_0(recursion_patterns__V_53_53);
                  }
#line 578 "recursion_patterns.m"
                  {
#line 578 "recursion_patterns.m"
                    recursion_patterns__V_56_56 = measurement_units__certain_0_f_0();
                  }
#line 578 "recursion_patterns.m"
                  {
#line 578 "recursion_patterns.m"
                    recursion_patterns__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_55_55, 0) = MR_box_float(recursion_patterns__CostPercall_46);
#line 578 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_55_55, 1) = MR_box_float(recursion_patterns__V_56_56);
#line 578 "recursion_patterns.m"
                  }
#line 578 "recursion_patterns.m"
                  {
#line 578 "recursion_patterns.m"
                    recursion_patterns__RecursionLevel_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 0) = ((MR_Box) ((MR_Integer) 0));
#line 578 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, 1) = ((MR_Box) (recursion_patterns__V_55_55));
#line 578 "recursion_patterns.m"
                  }
#line 577 "recursion_patterns.m"
                }
#line 567 "recursion_patterns.m"
            }
#line 563 "recursion_patterns.m"
            break;
#line 563 "recursion_patterns.m"
        }
#line 563 "recursion_patterns.m"
        break;
#line 563 "recursion_patterns.m"
    }
#line 581 "recursion_patterns.m"
    recursion_patterns__RecursiveCalls_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, (MR_Integer) 0)));
#line 581 "recursion_patterns.m"
    recursion_patterns__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__RecursionLevel_33, (MR_Integer) 1)));
#line 582 "recursion_patterns.m"
    {
#line 582 "recursion_patterns.m"
      recursion_patterns__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_61_61, 0) = ((MR_Box) (recursion_patterns__RecursionLevel_33));
#line 582 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 582 "recursion_patterns.m"
    }
#line 582 "recursion_patterns.m"
    {
#line 582 "recursion_patterns.m"
      recursion_patterns__V_63_63 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
    }
#line 582 "recursion_patterns.m"
    {
#line 582 "recursion_patterns.m"
      MR_Word base;
#line 582 "recursion_patterns.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 582 "recursion_patterns.m"
      *recursion_patterns__RecursionData_8 = base;
#line 582 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_61_61));
#line 582 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__RecursiveCalls_47));
#line 582 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__V_63_63));
#line 582 "recursion_patterns.m"
    }
#line 546 "recursion_patterns.m"
  }
#line 543 "recursion_patterns.m"
}

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_2(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 758 "recursion_patterns.m"
{
#line 758 "recursion_patterns.m"
  {
#line 758 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 758 "recursion_patterns.m"
    MR_Word recursion_patterns__conv2_HeadVar__4_15;

#line 758 "recursion_patterns.m"
    {
#line 758 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__758__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv2_HeadVar__4_15);
    }
#line 758 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv2_HeadVar__4_15));
#line 758 "recursion_patterns.m"
  }
#line 758 "recursion_patterns.m"
}

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0_1(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 758 "recursion_patterns.m"
{
#line 758 "recursion_patterns.m"
  {
#line 758 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 758 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_HeadVar__4_15;

#line 758 "recursion_patterns.m"
    {
#line 758 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__758__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_HeadVar__4_15);
    }
#line 758 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_HeadVar__4_15));
#line 758 "recursion_patterns.m"
  }
#line 758 "recursion_patterns.m"
}

#line 512 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__switch_recursion_data_7_p_0(
#line 512 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_1,
#line 512 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_2,
#line 512 "recursion_patterns.m"
  MR_Integer recursion_patterns__CaseNum_3,
#line 512 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 512 "recursion_patterns.m"
  MR_Float recursion_patterns__TotalCalls_5,
#line 512 "recursion_patterns.m"
  MR_Integer recursion_patterns__CallsRemaining_6,
#line 512 "recursion_patterns.m"
  MR_Word * recursion_patterns__RecursionData_7)
#line 512 "recursion_patterns.m"
{
#line 517 "recursion_patterns.m"
  {
#line 517 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 517 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "recursion_patterns.m"
      {
#line 517 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeCtorInfo_18_79;
#line 517 "recursion_patterns.m"
        MR_Float recursion_patterns__FailProb_14;
#line 517 "recursion_patterns.m"
        MR_Float recursion_patterns__V_16_16;
#line 517 "recursion_patterns.m"
        MR_Float recursion_patterns__V_17_17;
#line 517 "recursion_patterns.m"
        MR_Word recursion_patterns__V_59_59;
#line 517 "recursion_patterns.m"
        MR_Word recursion_patterns__V_60_60;
#line 517 "recursion_patterns.m"
        MR_Float recursion_patterns__V_61_61;
#line 517 "recursion_patterns.m"
        MR_Word recursion_patterns__Errors_68;
#line 517 "recursion_patterns.m"
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_69;
#line 517 "recursion_patterns.m"
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_70;
#line 517 "recursion_patterns.m"
        MR_Word recursion_patterns__V_71_71;

#line 519 "recursion_patterns.m"
        {
#line 519 "recursion_patterns.m"
          recursion_patterns__V_17_17 = mercury__float__float_1_f_0(recursion_patterns__CallsRemaining_6);
        }
#line 519 "recursion_patterns.m"
        {
#line 519 "recursion_patterns.m"
          recursion_patterns__V_16_16 = mercury__float__f_slash_2_f_0(recursion_patterns__V_17_17, recursion_patterns__TotalCalls_5);
        }
#line 519 "recursion_patterns.m"
        {
#line 519 "recursion_patterns.m"
          recursion_patterns__FailProb_14 = measurement_units__probable_1_f_0(recursion_patterns__V_16_16);
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__V_61_61 = measurement_units__certain_0_f_0();
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_60_60, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_60_60, 1) = MR_box_float(recursion_patterns__V_61_61);
#line 791 "recursion_patterns.m"
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_59_59, 0) = ((MR_Box) ((MR_Integer) 0));
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_59_59, 1) = ((MR_Box) (recursion_patterns__V_60_60));
#line 791 "recursion_patterns.m"
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__STATE_VARIABLE_Recursions_0_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_69, 0) = ((MR_Box) (recursion_patterns__V_59_59));
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "recursion_patterns.m"
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__Errors_68 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
        }
#line 758 "recursion_patterns.m"
        {
#line 758 "recursion_patterns.m"
          recursion_patterns__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 758 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 758 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 1) = ((MR_Box) (recursion_patterns__switch_recursion_data_7_p_0_1));
#line 758 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 758 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 3) = MR_box_float(recursion_patterns__FailProb_14);
#line 758 "recursion_patterns.m"
        }
#line 6766 "recursion_patterns.c"
        recursion_patterns__TypeCtorInfo_18_79 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 758 "recursion_patterns.m"
        {
#line 758 "recursion_patterns.m"
          mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__V_71_71, recursion_patterns__STATE_VARIABLE_Recursions_0_69, &recursion_patterns__STATE_VARIABLE_Recursions_70);
        }
#line 757 "recursion_patterns.m"
        {
#line 757 "recursion_patterns.m"
          MR_Word base;
#line 757 "recursion_patterns.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 757 "recursion_patterns.m"
          *recursion_patterns__RecursionData_7 = base;
#line 757 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_70));
#line 757 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 757 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__Errors_68));
#line 757 "recursion_patterns.m"
        }
#line 517 "recursion_patterns.m"
      }
#line 517 "recursion_patterns.m"
    else
#line 523 "recursion_patterns.m"
      {
#line 523 "recursion_patterns.m"
        MR_Word recursion_patterns__Case_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
#line 523 "recursion_patterns.m"
        MR_Word recursion_patterns__Cases_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
#line 523 "recursion_patterns.m"
        MR_Word recursion_patterns__Goal_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Case_23, (MR_Integer) 2)));
#line 523 "recursion_patterns.m"
        MR_Word recursion_patterns__RevArmPath_31;
#line 523 "recursion_patterns.m"
        MR_Word recursion_patterns__CaseRecursionData0_32;
#line 523 "recursion_patterns.m"
        MR_Word recursion_patterns__CoverageInfo_33;
#line 523 "recursion_patterns.m"
        MR_Integer recursion_patterns__Calls_35;
#line 523 "recursion_patterns.m"
        MR_Float recursion_patterns__CaseProb_36;
#line 523 "recursion_patterns.m"
        MR_Word recursion_patterns__CaseRecursionData_37;
#line 523 "recursion_patterns.m"
        MR_Word recursion_patterns__CasesRecursionData_38;
#line 523 "recursion_patterns.m"
        MR_Word recursion_patterns__V_39_39;
#line 523 "recursion_patterns.m"
        MR_Word recursion_patterns__V_41_41;
#line 523 "recursion_patterns.m"
        MR_Word recursion_patterns__V_42_42;
#line 523 "recursion_patterns.m"
        MR_Float recursion_patterns__V_46_46;
#line 523 "recursion_patterns.m"
        MR_Float recursion_patterns__V_47_47;
#line 523 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_48_48;
#line 523 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_49_49;
#line 524 "recursion_patterns.m"
        MR_Word recursion_patterns__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Case_23, (MR_Integer) 0)));
#line 524 "recursion_patterns.m"
        MR_Word recursion_patterns__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Case_23, (MR_Integer) 1)));
#line 528 "recursion_patterns.m"
        MR_Word recursion_patterns__V_51_51;
#line 528 "recursion_patterns.m"
        MR_Word recursion_patterns__V_52_52;
#line 528 "recursion_patterns.m"
        MR_Word recursion_patterns__V_53_53;
#line 528 "recursion_patterns.m"
        MR_Word recursion_patterns__V_54_54;
#line 528 "recursion_patterns.m"
        MR_Box recursion_patterns__conv1_CoverageInfo_33;
#line 532 "recursion_patterns.m"
        MR_Integer recursion_patterns__CallsPrime_34;

#line 526 "recursion_patterns.m"
        {
#line 526 "recursion_patterns.m"
          recursion_patterns__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 526 "recursion_patterns.m"
          MR_hl_field(MR_mktag(3), recursion_patterns__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 526 "recursion_patterns.m"
          MR_hl_field(MR_mktag(3), recursion_patterns__V_39_39, 1) = ((MR_Box) (recursion_patterns__CaseNum_3));
#line 526 "recursion_patterns.m"
          MR_hl_field(MR_mktag(3), recursion_patterns__V_39_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "recursion_patterns.m"
        }
#line 525 "recursion_patterns.m"
        {
#line 525 "recursion_patterns.m"
          recursion_patterns__RevArmPath_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__RevArmPath_31, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_2));
#line 525 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__RevArmPath_31, 1) = ((MR_Box) (recursion_patterns__V_39_39));
#line 525 "recursion_patterns.m"
        }
#line 527 "recursion_patterns.m"
        {
#line 527 "recursion_patterns.m"
          recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_1, recursion_patterns__RevArmPath_31, recursion_patterns__Goal_30, &recursion_patterns__CaseRecursionData0_32);
        }
#line 528 "recursion_patterns.m"
        recursion_patterns__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 0)));
#line 528 "recursion_patterns.m"
        recursion_patterns__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 1)));
#line 528 "recursion_patterns.m"
        recursion_patterns__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 2)));
#line 528 "recursion_patterns.m"
        recursion_patterns__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Goal_30, (MR_Integer) 0)));
#line 528 "recursion_patterns.m"
        recursion_patterns__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Goal_30, (MR_Integer) 1)));
#line 528 "recursion_patterns.m"
        recursion_patterns__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Goal_30, (MR_Integer) 2)));
#line 528 "recursion_patterns.m"
        {
#line 528 "recursion_patterns.m"
          recursion_patterns__conv1_CoverageInfo_33 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, recursion_patterns__V_41_41, recursion_patterns__V_42_42);
        }
#line 528 "recursion_patterns.m"
        recursion_patterns__CoverageInfo_33 = ((MR_Word) recursion_patterns__conv1_CoverageInfo_33);
#line 530 "recursion_patterns.m"
        {
#line 530 "recursion_patterns.m"
          recursion_patterns__succeeded = coverage__get_coverage_before_2_p_0(recursion_patterns__CoverageInfo_33, &recursion_patterns__CallsPrime_34);
        }
#line 532 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 531 "recursion_patterns.m"
          recursion_patterns__Calls_35 = recursion_patterns__CallsPrime_34;
#line 532 "recursion_patterns.m"
        else
#line 533 "recursion_patterns.m"
          {
#line 533 "recursion_patterns.m"
            {
#line 533 "recursion_patterns.m"
              mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.switch_recursion_data\'/7", (MR_String) "expected coverage information");
#line 533 "recursion_patterns.m"
              return;
            }
#line 533 "recursion_patterns.m"
          }
#line 535 "recursion_patterns.m"
        {
#line 535 "recursion_patterns.m"
          recursion_patterns__V_47_47 = mercury__float__float_1_f_0(recursion_patterns__Calls_35);
        }
#line 535 "recursion_patterns.m"
        {
#line 535 "recursion_patterns.m"
          recursion_patterns__V_46_46 = mercury__float__f_slash_2_f_0(recursion_patterns__V_47_47, recursion_patterns__TotalCalls_5);
        }
#line 535 "recursion_patterns.m"
        {
#line 535 "recursion_patterns.m"
          recursion_patterns__CaseProb_36 = measurement_units__probable_1_f_0(recursion_patterns__V_46_46);
        }
#line 757 "recursion_patterns.m"
        if ((recursion_patterns__CaseRecursionData0_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 761 "recursion_patterns.m"
          recursion_patterns__CaseRecursionData_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 757 "recursion_patterns.m"
        else
#line 757 "recursion_patterns.m"
          {
#line 757 "recursion_patterns.m"
            MR_Word recursion_patterns__TypeCtorInfo_18_94;
#line 757 "recursion_patterns.m"
            MR_Integer recursion_patterns__MaxLevel_82 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData0_32, (MR_Integer) 1)));
#line 757 "recursion_patterns.m"
            MR_Word recursion_patterns__Errors_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData0_32, (MR_Integer) 2)));
#line 757 "recursion_patterns.m"
            MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData0_32, (MR_Integer) 0)));
#line 757 "recursion_patterns.m"
            MR_Word recursion_patterns__STATE_VARIABLE_Recursions_85;
#line 757 "recursion_patterns.m"
            MR_Word recursion_patterns__V_86_86;

#line 758 "recursion_patterns.m"
            {
#line 758 "recursion_patterns.m"
              recursion_patterns__V_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 758 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_86_86, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 758 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_86_86, 1) = ((MR_Box) (recursion_patterns__switch_recursion_data_7_p_0_2));
#line 758 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_86_86, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 758 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_86_86, 3) = MR_box_float(recursion_patterns__CaseProb_36);
#line 758 "recursion_patterns.m"
            }
#line 6964 "recursion_patterns.c"
            recursion_patterns__TypeCtorInfo_18_94 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 758 "recursion_patterns.m"
            {
#line 758 "recursion_patterns.m"
              mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_94, recursion_patterns__TypeCtorInfo_18_94, recursion_patterns__V_86_86, recursion_patterns__STATE_VARIABLE_Recursions_0_84, &recursion_patterns__STATE_VARIABLE_Recursions_85);
            }
#line 757 "recursion_patterns.m"
            {
#line 757 "recursion_patterns.m"
              recursion_patterns__CaseRecursionData_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 757 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData_37, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_85));
#line 757 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData_37, 1) = ((MR_Box) (recursion_patterns__MaxLevel_82));
#line 757 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__CaseRecursionData_37, 2) = ((MR_Box) (recursion_patterns__Errors_83));
#line 757 "recursion_patterns.m"
            }
#line 757 "recursion_patterns.m"
          }
#line 538 "recursion_patterns.m"
        recursion_patterns__V_48_48 = (recursion_patterns__CaseNum_3 + (MR_Integer) 1);
#line 539 "recursion_patterns.m"
        recursion_patterns__V_49_49 = (recursion_patterns__CallsRemaining_6 - recursion_patterns__Calls_35);
#line 538 "recursion_patterns.m"
        {
#line 538 "recursion_patterns.m"
          recursion_patterns__switch_recursion_data_7_p_0(recursion_patterns__Info_1, recursion_patterns__RevGoalPath_2, recursion_patterns__V_48_48, recursion_patterns__Cases_24, recursion_patterns__TotalCalls_5, recursion_patterns__V_49_49, &recursion_patterns__CasesRecursionData_38);
        }
#line 540 "recursion_patterns.m"
        {
#line 540 "recursion_patterns.m"
          recursion_patterns__merge_recursion_data_after_branch_3_p_0(recursion_patterns__CaseRecursionData_37, recursion_patterns__CasesRecursionData_38, recursion_patterns__RecursionData_7);
#line 540 "recursion_patterns.m"
          return;
        }
#line 523 "recursion_patterns.m"
      }
#line 517 "recursion_patterns.m"
  }
#line 512 "recursion_patterns.m"
}

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0_2(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 758 "recursion_patterns.m"
{
#line 758 "recursion_patterns.m"
  {
#line 758 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 758 "recursion_patterns.m"
    MR_Word recursion_patterns__conv3_HeadVar__4_15;

#line 758 "recursion_patterns.m"
    {
#line 758 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__758__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv3_HeadVar__4_15);
    }
#line 758 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv3_HeadVar__4_15));
#line 758 "recursion_patterns.m"
  }
#line 758 "recursion_patterns.m"
}

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0_1(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 758 "recursion_patterns.m"
{
#line 758 "recursion_patterns.m"
  {
#line 758 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 758 "recursion_patterns.m"
    MR_Word recursion_patterns__conv2_HeadVar__4_15;

#line 758 "recursion_patterns.m"
    {
#line 758 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__758__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv2_HeadVar__4_15);
    }
#line 758 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv2_HeadVar__4_15));
#line 758 "recursion_patterns.m"
  }
#line 758 "recursion_patterns.m"
}

#line 474 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__ite_recursion_data_7_p_0(
#line 474 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_8,
#line 474 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_9,
#line 474 "recursion_patterns.m"
  MR_Word recursion_patterns__Cond_10,
#line 474 "recursion_patterns.m"
  MR_Word recursion_patterns__Then_11,
#line 474 "recursion_patterns.m"
  MR_Word recursion_patterns__Else_12,
#line 474 "recursion_patterns.m"
  MR_Integer recursion_patterns__Calls_13,
#line 474 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_RecursionData_28)
#line 474 "recursion_patterns.m"
{
#line 480 "recursion_patterns.m"
  {
#line 480 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__TypeCtorInfo_49_49;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__CondRecursionData_15;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__ThenRecursionData0_16;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__ElseRecursionData0_17;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__Coverage_18;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__ThenCoverageInfo_19;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__ElseCoverageInfo_20;
#line 480 "recursion_patterns.m"
    MR_Integer recursion_patterns__ThenCalls_21;
#line 480 "recursion_patterns.m"
    MR_Integer recursion_patterns__ElseCalls_22;
#line 480 "recursion_patterns.m"
    MR_Float recursion_patterns__CallsF_23;
#line 480 "recursion_patterns.m"
    MR_Float recursion_patterns__ThenProb_24;
#line 480 "recursion_patterns.m"
    MR_Float recursion_patterns__ElseProb_25;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__ThenRecursionData_26;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__ElseRecursionData_27;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__V_29_29;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__V_31_31;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__V_33_33;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__V_35_35;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__V_36_36;
#line 480 "recursion_patterns.m"
    MR_Float recursion_patterns__V_37_37;
#line 480 "recursion_patterns.m"
    MR_Float recursion_patterns__V_38_38;
#line 480 "recursion_patterns.m"
    MR_Float recursion_patterns__V_39_39;
#line 480 "recursion_patterns.m"
    MR_Float recursion_patterns__V_40_40;
#line 480 "recursion_patterns.m"
    MR_Word recursion_patterns__STATE_VARIABLE_RecursionData_41_41;
#line 489 "recursion_patterns.m"
    MR_Word recursion_patterns__V_43_43;
#line 489 "recursion_patterns.m"
    MR_Word recursion_patterns__V_44_44;
#line 491 "recursion_patterns.m"
    MR_Word recursion_patterns__V_45_45;
#line 491 "recursion_patterns.m"
    MR_Word recursion_patterns__V_46_46;
#line 491 "recursion_patterns.m"
    MR_Box recursion_patterns__conv0_ThenCoverageInfo_19;
#line 493 "recursion_patterns.m"
    MR_Word recursion_patterns__V_47_47;
#line 493 "recursion_patterns.m"
    MR_Word recursion_patterns__V_48_48;
#line 493 "recursion_patterns.m"
    MR_Box recursion_patterns__conv1_ElseCoverageInfo_20;

#line 481 "recursion_patterns.m"
    {
#line 481 "recursion_patterns.m"
      recursion_patterns__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_29_29, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_9));
#line 481 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 481 "recursion_patterns.m"
    }
#line 481 "recursion_patterns.m"
    {
#line 481 "recursion_patterns.m"
      recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_8, recursion_patterns__V_29_29, recursion_patterns__Cond_10, &recursion_patterns__CondRecursionData_15);
    }
#line 483 "recursion_patterns.m"
    {
#line 483 "recursion_patterns.m"
      recursion_patterns__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_31_31, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_9));
#line 483 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 483 "recursion_patterns.m"
    }
#line 483 "recursion_patterns.m"
    {
#line 483 "recursion_patterns.m"
      recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_8, recursion_patterns__V_31_31, recursion_patterns__Then_11, &recursion_patterns__ThenRecursionData0_16);
    }
#line 485 "recursion_patterns.m"
    {
#line 485 "recursion_patterns.m"
      recursion_patterns__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_33_33, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_9));
#line 485 "recursion_patterns.m"
      MR_hl_field(MR_mktag(1), recursion_patterns__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 485 "recursion_patterns.m"
    }
#line 485 "recursion_patterns.m"
    {
#line 485 "recursion_patterns.m"
      recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_8, recursion_patterns__V_33_33, recursion_patterns__Else_12, &recursion_patterns__ElseRecursionData0_17);
    }
#line 489 "recursion_patterns.m"
    recursion_patterns__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_8, (MR_Integer) 0)));
#line 489 "recursion_patterns.m"
    recursion_patterns__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_8, (MR_Integer) 1)));
#line 489 "recursion_patterns.m"
    recursion_patterns__Coverage_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_8, (MR_Integer) 2)));
#line 7211 "recursion_patterns.c"
    recursion_patterns__TypeCtorInfo_49_49 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0;
#line 491 "recursion_patterns.m"
    recursion_patterns__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Then_11, (MR_Integer) 0)));
#line 491 "recursion_patterns.m"
    recursion_patterns__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Then_11, (MR_Integer) 1)));
#line 491 "recursion_patterns.m"
    recursion_patterns__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Then_11, (MR_Integer) 2)));
#line 491 "recursion_patterns.m"
    {
#line 491 "recursion_patterns.m"
      recursion_patterns__conv0_ThenCoverageInfo_19 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(recursion_patterns__TypeCtorInfo_49_49, recursion_patterns__Coverage_18, recursion_patterns__V_35_35);
    }
#line 491 "recursion_patterns.m"
    recursion_patterns__ThenCoverageInfo_19 = ((MR_Word) recursion_patterns__conv0_ThenCoverageInfo_19);
#line 493 "recursion_patterns.m"
    recursion_patterns__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Else_12, (MR_Integer) 0)));
#line 493 "recursion_patterns.m"
    recursion_patterns__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Else_12, (MR_Integer) 1)));
#line 493 "recursion_patterns.m"
    recursion_patterns__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Else_12, (MR_Integer) 2)));
#line 493 "recursion_patterns.m"
    {
#line 493 "recursion_patterns.m"
      recursion_patterns__conv1_ElseCoverageInfo_20 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0(recursion_patterns__TypeCtorInfo_49_49, recursion_patterns__Coverage_18, recursion_patterns__V_36_36);
    }
#line 493 "recursion_patterns.m"
    recursion_patterns__ElseCoverageInfo_20 = ((MR_Word) recursion_patterns__conv1_ElseCoverageInfo_20);
#line 494 "recursion_patterns.m"
    {
#line 494 "recursion_patterns.m"
      coverage__get_coverage_before_det_2_p_0(recursion_patterns__ThenCoverageInfo_19, &recursion_patterns__ThenCalls_21);
    }
#line 495 "recursion_patterns.m"
    {
#line 495 "recursion_patterns.m"
      coverage__get_coverage_before_det_2_p_0(recursion_patterns__ElseCoverageInfo_20, &recursion_patterns__ElseCalls_22);
    }
#line 496 "recursion_patterns.m"
    {
#line 496 "recursion_patterns.m"
      recursion_patterns__CallsF_23 = mercury__float__float_1_f_0(recursion_patterns__Calls_13);
    }
#line 497 "recursion_patterns.m"
    {
#line 497 "recursion_patterns.m"
      recursion_patterns__V_38_38 = mercury__float__float_1_f_0(recursion_patterns__ThenCalls_21);
    }
#line 497 "recursion_patterns.m"
    {
#line 497 "recursion_patterns.m"
      recursion_patterns__V_37_37 = mercury__float__f_slash_2_f_0(recursion_patterns__V_38_38, recursion_patterns__CallsF_23);
    }
#line 497 "recursion_patterns.m"
    {
#line 497 "recursion_patterns.m"
      recursion_patterns__ThenProb_24 = measurement_units__probable_1_f_0(recursion_patterns__V_37_37);
    }
#line 498 "recursion_patterns.m"
    {
#line 498 "recursion_patterns.m"
      recursion_patterns__V_40_40 = mercury__float__float_1_f_0(recursion_patterns__ElseCalls_22);
    }
#line 498 "recursion_patterns.m"
    {
#line 498 "recursion_patterns.m"
      recursion_patterns__V_39_39 = mercury__float__f_slash_2_f_0(recursion_patterns__V_40_40, recursion_patterns__CallsF_23);
    }
#line 498 "recursion_patterns.m"
    {
#line 498 "recursion_patterns.m"
      recursion_patterns__ElseProb_25 = measurement_units__probable_1_f_0(recursion_patterns__V_39_39);
    }
#line 757 "recursion_patterns.m"
    if ((recursion_patterns__ThenRecursionData0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 761 "recursion_patterns.m"
      recursion_patterns__ThenRecursionData_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 757 "recursion_patterns.m"
    else
#line 757 "recursion_patterns.m"
      {
#line 757 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeCtorInfo_18_64;
#line 757 "recursion_patterns.m"
        MR_Integer recursion_patterns__MaxLevel_52 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData0_16, (MR_Integer) 1)));
#line 757 "recursion_patterns.m"
        MR_Word recursion_patterns__Errors_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData0_16, (MR_Integer) 2)));
#line 757 "recursion_patterns.m"
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData0_16, (MR_Integer) 0)));
#line 757 "recursion_patterns.m"
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_55;
#line 757 "recursion_patterns.m"
        MR_Word recursion_patterns__V_56_56;

#line 758 "recursion_patterns.m"
        {
#line 758 "recursion_patterns.m"
          recursion_patterns__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 758 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_56_56, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 758 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_56_56, 1) = ((MR_Box) (recursion_patterns__ite_recursion_data_7_p_0_1));
#line 758 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 758 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_56_56, 3) = MR_box_float(recursion_patterns__ThenProb_24);
#line 758 "recursion_patterns.m"
        }
#line 7319 "recursion_patterns.c"
        recursion_patterns__TypeCtorInfo_18_64 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 758 "recursion_patterns.m"
        {
#line 758 "recursion_patterns.m"
          mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_64, recursion_patterns__TypeCtorInfo_18_64, recursion_patterns__V_56_56, recursion_patterns__STATE_VARIABLE_Recursions_0_54, &recursion_patterns__STATE_VARIABLE_Recursions_55);
        }
#line 757 "recursion_patterns.m"
        {
#line 757 "recursion_patterns.m"
          recursion_patterns__ThenRecursionData_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 757 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData_26, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_55));
#line 757 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData_26, 1) = ((MR_Box) (recursion_patterns__MaxLevel_52));
#line 757 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__ThenRecursionData_26, 2) = ((MR_Box) (recursion_patterns__Errors_53));
#line 757 "recursion_patterns.m"
        }
#line 757 "recursion_patterns.m"
      }
#line 757 "recursion_patterns.m"
    if ((recursion_patterns__ElseRecursionData0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 761 "recursion_patterns.m"
      recursion_patterns__ElseRecursionData_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 757 "recursion_patterns.m"
    else
#line 757 "recursion_patterns.m"
      {
#line 757 "recursion_patterns.m"
        MR_Word recursion_patterns__TypeCtorInfo_18_79;
#line 757 "recursion_patterns.m"
        MR_Integer recursion_patterns__MaxLevel_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData0_17, (MR_Integer) 1)));
#line 757 "recursion_patterns.m"
        MR_Word recursion_patterns__Errors_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData0_17, (MR_Integer) 2)));
#line 757 "recursion_patterns.m"
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData0_17, (MR_Integer) 0)));
#line 757 "recursion_patterns.m"
        MR_Word recursion_patterns__STATE_VARIABLE_Recursions_70;
#line 757 "recursion_patterns.m"
        MR_Word recursion_patterns__V_71_71;

#line 758 "recursion_patterns.m"
        {
#line 758 "recursion_patterns.m"
          recursion_patterns__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 758 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 758 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 1) = ((MR_Box) (recursion_patterns__ite_recursion_data_7_p_0_2));
#line 758 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 758 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 3) = MR_box_float(recursion_patterns__ElseProb_25);
#line 758 "recursion_patterns.m"
        }
#line 7375 "recursion_patterns.c"
        recursion_patterns__TypeCtorInfo_18_79 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 758 "recursion_patterns.m"
        {
#line 758 "recursion_patterns.m"
          mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__V_71_71, recursion_patterns__STATE_VARIABLE_Recursions_0_69, &recursion_patterns__STATE_VARIABLE_Recursions_70);
        }
#line 757 "recursion_patterns.m"
        {
#line 757 "recursion_patterns.m"
          recursion_patterns__ElseRecursionData_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 757 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData_27, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_70));
#line 757 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData_27, 1) = ((MR_Box) (recursion_patterns__MaxLevel_67));
#line 757 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__ElseRecursionData_27, 2) = ((MR_Box) (recursion_patterns__Errors_68));
#line 757 "recursion_patterns.m"
        }
#line 757 "recursion_patterns.m"
      }
#line 508 "recursion_patterns.m"
    {
#line 508 "recursion_patterns.m"
      recursion_patterns__merge_recursion_data_after_branch_3_p_0(recursion_patterns__ThenRecursionData_26, recursion_patterns__ElseRecursionData_27, &recursion_patterns__STATE_VARIABLE_RecursionData_41_41);
    }
#line 510 "recursion_patterns.m"
    {
#line 510 "recursion_patterns.m"
      recursion_patterns__merge_recursion_data_sequence_3_p_0(recursion_patterns__CondRecursionData_15, recursion_patterns__STATE_VARIABLE_RecursionData_41_41, recursion_patterns__STATE_VARIABLE_RecursionData_28);
#line 510 "recursion_patterns.m"
      return;
    }
#line 480 "recursion_patterns.m"
  }
#line 474 "recursion_patterns.m"
}

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_2(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 758 "recursion_patterns.m"
{
#line 758 "recursion_patterns.m"
  {
#line 758 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 758 "recursion_patterns.m"
    MR_Word recursion_patterns__conv2_HeadVar__4_15;

#line 758 "recursion_patterns.m"
    {
#line 758 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__758__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv2_HeadVar__4_15);
    }
#line 758 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv2_HeadVar__4_15));
#line 758 "recursion_patterns.m"
  }
#line 758 "recursion_patterns.m"
}

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0_1(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 758 "recursion_patterns.m"
{
#line 758 "recursion_patterns.m"
  {
#line 758 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 758 "recursion_patterns.m"
    MR_Word recursion_patterns__conv1_HeadVar__4_15;

#line 758 "recursion_patterns.m"
    {
#line 758 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__758__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv1_HeadVar__4_15);
    }
#line 758 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv1_HeadVar__4_15));
#line 758 "recursion_patterns.m"
  }
#line 758 "recursion_patterns.m"
}

#line 416 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__disj_recursion_data_5_p_0(
#line 416 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_1,
#line 416 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_2,
#line 416 "recursion_patterns.m"
  MR_Integer recursion_patterns__DisjNum_3,
#line 416 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 416 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5)
#line 416 "recursion_patterns.m"
{
#line 420 "recursion_patterns.m"
  {
#line 420 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 420 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "recursion_patterns.m"
      {
#line 420 "recursion_patterns.m"
        MR_Word recursion_patterns__V_44_44;
#line 420 "recursion_patterns.m"
        MR_Word recursion_patterns__V_45_45;
#line 420 "recursion_patterns.m"
        MR_Word recursion_patterns__V_46_46;
#line 420 "recursion_patterns.m"
        MR_Float recursion_patterns__V_47_47;
#line 420 "recursion_patterns.m"
        MR_Word recursion_patterns__V_49_49;

#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__V_47_47 = measurement_units__certain_0_f_0();
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_46_46, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_46_46, 1) = MR_box_float(recursion_patterns__V_47_47);
#line 791 "recursion_patterns.m"
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_45_45, 0) = ((MR_Box) ((MR_Integer) 0));
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_45_45, 1) = ((MR_Box) (recursion_patterns__V_46_46));
#line 791 "recursion_patterns.m"
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_44_44, 0) = ((MR_Box) (recursion_patterns__V_45_45));
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "recursion_patterns.m"
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__V_49_49 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          MR_Word base;
#line 791 "recursion_patterns.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 791 "recursion_patterns.m"
          *recursion_patterns__HeadVar__5_5 = base;
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_44_44));
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__V_49_49));
#line 791 "recursion_patterns.m"
        }
#line 420 "recursion_patterns.m"
      }
#line 420 "recursion_patterns.m"
    else
#line 422 "recursion_patterns.m"
      {
#line 422 "recursion_patterns.m"
        MR_Word recursion_patterns__Disj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
#line 422 "recursion_patterns.m"
        MR_Word recursion_patterns__Disjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
#line 422 "recursion_patterns.m"
        MR_Word recursion_patterns__DisjRecursionData_17;
#line 422 "recursion_patterns.m"
        MR_Word recursion_patterns__V_29_29;
#line 422 "recursion_patterns.m"
        MR_Word recursion_patterns__V_30_30;

#line 425 "recursion_patterns.m"
        {
#line 425 "recursion_patterns.m"
          recursion_patterns__V_30_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 425 "recursion_patterns.m"
          MR_hl_field(MR_mktag(2), recursion_patterns__V_30_30, 0) = ((MR_Box) (recursion_patterns__DisjNum_3));
#line 425 "recursion_patterns.m"
        }
#line 425 "recursion_patterns.m"
        {
#line 425 "recursion_patterns.m"
          recursion_patterns__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_29_29, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_2));
#line 425 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_29_29, 1) = ((MR_Box) (recursion_patterns__V_30_30));
#line 425 "recursion_patterns.m"
        }
#line 425 "recursion_patterns.m"
        {
#line 425 "recursion_patterns.m"
          recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_1, recursion_patterns__V_29_29, recursion_patterns__Disj_14, &recursion_patterns__DisjRecursionData_17);
        }
#line 432 "recursion_patterns.m"
        if ((recursion_patterns__DisjRecursionData_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "recursion_patterns.m"
          *recursion_patterns__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 432 "recursion_patterns.m"
        else
#line 433 "recursion_patterns.m"
          {
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__TypeCtorInfo_18_99;
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__CoverageInfo_21;
#line 433 "recursion_patterns.m"
            MR_Float recursion_patterns__DisjSuccessProb_22;
#line 433 "recursion_patterns.m"
            MR_Float recursion_patterns__DisjFailureProb_23;
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__DisjsRecursionData0_24;
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__DisjsRecursionData_25;
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__Finish_27;
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__BranchRecursionData_28;
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 2)));
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Disj_14, (MR_Integer) 2)));
#line 433 "recursion_patterns.m"
            MR_Integer recursion_patterns__V_33_33;
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__V_79_79;
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__V_80_80;
#line 433 "recursion_patterns.m"
            MR_Float recursion_patterns__V_81_81;
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__Errors_88;
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_89;
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__STATE_VARIABLE_Recursions_90;
#line 433 "recursion_patterns.m"
            MR_Word recursion_patterns__V_91_91;
#line 434 "recursion_patterns.m"
            MR_Word recursion_patterns__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 0)));
#line 434 "recursion_patterns.m"
            MR_Word recursion_patterns__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 1)));
#line 434 "recursion_patterns.m"
            MR_Word recursion_patterns__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Disj_14, (MR_Integer) 0)));
#line 434 "recursion_patterns.m"
            MR_Word recursion_patterns__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Disj_14, (MR_Integer) 1)));
#line 434 "recursion_patterns.m"
            MR_Box recursion_patterns__conv0_CoverageInfo_21;
#line 470 "recursion_patterns.m"
            MR_Integer recursion_patterns__Before_53;
#line 470 "recursion_patterns.m"
            MR_Integer recursion_patterns__After_54;

#line 434 "recursion_patterns.m"
            {
#line 434 "recursion_patterns.m"
              recursion_patterns__conv0_CoverageInfo_21 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, recursion_patterns__V_31_31, recursion_patterns__V_32_32);
            }
#line 434 "recursion_patterns.m"
            recursion_patterns__CoverageInfo_21 = ((MR_Word) recursion_patterns__conv0_CoverageInfo_21);
#line 463 "recursion_patterns.m"
            {
#line 463 "recursion_patterns.m"
              recursion_patterns__succeeded = coverage__get_coverage_before_and_after_3_p_0(recursion_patterns__CoverageInfo_21, &recursion_patterns__Before_53, &recursion_patterns__After_54);
            }
#line 470 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 467 "recursion_patterns.m"
              {
#line 464 "recursion_patterns.m"
                recursion_patterns__succeeded = (recursion_patterns__After_54 > recursion_patterns__Before_53);
#line 467 "recursion_patterns.m"
                if (recursion_patterns__succeeded)
#line 466 "recursion_patterns.m"
                  {
#line 466 "recursion_patterns.m"
                    recursion_patterns__DisjSuccessProb_22 = measurement_units__certain_0_f_0();
                  }
#line 467 "recursion_patterns.m"
                else
#line 468 "recursion_patterns.m"
                  {
#line 468 "recursion_patterns.m"
                    MR_Float recursion_patterns__V_55_55;
#line 468 "recursion_patterns.m"
                    MR_Float recursion_patterns__V_56_56;
#line 468 "recursion_patterns.m"
                    MR_Float recursion_patterns__V_57_57;

#line 468 "recursion_patterns.m"
                    {
#line 468 "recursion_patterns.m"
                      recursion_patterns__V_56_56 = mercury__float__float_1_f_0(recursion_patterns__After_54);
                    }
#line 468 "recursion_patterns.m"
                    {
#line 468 "recursion_patterns.m"
                      recursion_patterns__V_57_57 = mercury__float__float_1_f_0(recursion_patterns__Before_53);
                    }
#line 468 "recursion_patterns.m"
                    {
#line 468 "recursion_patterns.m"
                      recursion_patterns__V_55_55 = mercury__float__f_slash_2_f_0(recursion_patterns__V_56_56, recursion_patterns__V_57_57);
                    }
#line 468 "recursion_patterns.m"
                    {
#line 468 "recursion_patterns.m"
                      recursion_patterns__DisjSuccessProb_22 = measurement_units__probable_1_f_0(recursion_patterns__V_55_55);
                    }
#line 468 "recursion_patterns.m"
                  }
#line 467 "recursion_patterns.m"
              }
#line 470 "recursion_patterns.m"
            else
#line 471 "recursion_patterns.m"
              {
#line 471 "recursion_patterns.m"
                {
#line 471 "recursion_patterns.m"
                  mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.success_probability_from_coverage\'/2", (MR_String) "expected complete coverage information");
#line 471 "recursion_patterns.m"
                  return;
                }
#line 471 "recursion_patterns.m"
              }
#line 438 "recursion_patterns.m"
            {
#line 438 "recursion_patterns.m"
              recursion_patterns__DisjFailureProb_23 = measurement_units__not_probability_1_f_0(recursion_patterns__DisjSuccessProb_22);
            }
#line 442 "recursion_patterns.m"
            recursion_patterns__V_33_33 = (recursion_patterns__DisjNum_3 + (MR_Integer) 1);
#line 442 "recursion_patterns.m"
            {
#line 442 "recursion_patterns.m"
              recursion_patterns__disj_recursion_data_5_p_0(recursion_patterns__Info_1, recursion_patterns__RevGoalPath_2, recursion_patterns__V_33_33, recursion_patterns__Disjs_15, &recursion_patterns__DisjsRecursionData0_24);
            }
#line 757 "recursion_patterns.m"
            if ((recursion_patterns__DisjsRecursionData0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 761 "recursion_patterns.m"
              recursion_patterns__DisjsRecursionData_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 757 "recursion_patterns.m"
            else
#line 757 "recursion_patterns.m"
              {
#line 757 "recursion_patterns.m"
                MR_Word recursion_patterns__TypeCtorInfo_18_75;
#line 757 "recursion_patterns.m"
                MR_Integer recursion_patterns__MaxLevel_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData0_24, (MR_Integer) 1)));
#line 757 "recursion_patterns.m"
                MR_Word recursion_patterns__Errors_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData0_24, (MR_Integer) 2)));
#line 757 "recursion_patterns.m"
                MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData0_24, (MR_Integer) 0)));
#line 757 "recursion_patterns.m"
                MR_Word recursion_patterns__STATE_VARIABLE_Recursions_66;
#line 757 "recursion_patterns.m"
                MR_Word recursion_patterns__V_67_67;

#line 758 "recursion_patterns.m"
                {
#line 758 "recursion_patterns.m"
                  recursion_patterns__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 758 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_67_67, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 758 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_67_67, 1) = ((MR_Box) (recursion_patterns__disj_recursion_data_5_p_0_1));
#line 758 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 758 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_67_67, 3) = MR_box_float(recursion_patterns__DisjFailureProb_23);
#line 758 "recursion_patterns.m"
                }
#line 7787 "recursion_patterns.c"
                recursion_patterns__TypeCtorInfo_18_75 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 758 "recursion_patterns.m"
                {
#line 758 "recursion_patterns.m"
                  mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_75, recursion_patterns__TypeCtorInfo_18_75, recursion_patterns__V_67_67, recursion_patterns__STATE_VARIABLE_Recursions_0_65, &recursion_patterns__STATE_VARIABLE_Recursions_66);
                }
#line 757 "recursion_patterns.m"
                {
#line 757 "recursion_patterns.m"
                  recursion_patterns__DisjsRecursionData_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 757 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData_25, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_66));
#line 757 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData_25, 1) = ((MR_Box) (recursion_patterns__MaxLevel_63));
#line 757 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__DisjsRecursionData_25, 2) = ((MR_Box) (recursion_patterns__Errors_64));
#line 757 "recursion_patterns.m"
                }
#line 757 "recursion_patterns.m"
              }
#line 791 "recursion_patterns.m"
            {
#line 791 "recursion_patterns.m"
              recursion_patterns__V_81_81 = measurement_units__certain_0_f_0();
            }
#line 791 "recursion_patterns.m"
            {
#line 791 "recursion_patterns.m"
              recursion_patterns__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_80_80, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 791 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_80_80, 1) = MR_box_float(recursion_patterns__V_81_81);
#line 791 "recursion_patterns.m"
            }
#line 791 "recursion_patterns.m"
            {
#line 791 "recursion_patterns.m"
              recursion_patterns__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_79_79, 0) = ((MR_Box) ((MR_Integer) 0));
#line 791 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_79_79, 1) = ((MR_Box) (recursion_patterns__V_80_80));
#line 791 "recursion_patterns.m"
            }
#line 791 "recursion_patterns.m"
            {
#line 791 "recursion_patterns.m"
              recursion_patterns__STATE_VARIABLE_Recursions_0_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_89, 0) = ((MR_Box) (recursion_patterns__V_79_79));
#line 791 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "recursion_patterns.m"
            }
#line 791 "recursion_patterns.m"
            {
#line 791 "recursion_patterns.m"
              recursion_patterns__Errors_88 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
            }
#line 758 "recursion_patterns.m"
            {
#line 758 "recursion_patterns.m"
              recursion_patterns__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 758 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_91_91, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 758 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_91_91, 1) = ((MR_Box) (recursion_patterns__disj_recursion_data_5_p_0_2));
#line 758 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 758 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_91_91, 3) = MR_box_float(recursion_patterns__DisjSuccessProb_22);
#line 758 "recursion_patterns.m"
            }
#line 7862 "recursion_patterns.c"
            recursion_patterns__TypeCtorInfo_18_99 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 758 "recursion_patterns.m"
            {
#line 758 "recursion_patterns.m"
              mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_99, recursion_patterns__TypeCtorInfo_18_99, recursion_patterns__V_91_91, recursion_patterns__STATE_VARIABLE_Recursions_0_89, &recursion_patterns__STATE_VARIABLE_Recursions_90);
            }
#line 757 "recursion_patterns.m"
            {
#line 757 "recursion_patterns.m"
              recursion_patterns__Finish_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 757 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__Finish_27, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_90));
#line 757 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__Finish_27, 1) = ((MR_Box) ((MR_Integer) 0));
#line 757 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), recursion_patterns__Finish_27, 2) = ((MR_Box) (recursion_patterns__Errors_88));
#line 757 "recursion_patterns.m"
            }
#line 453 "recursion_patterns.m"
            {
#line 453 "recursion_patterns.m"
              recursion_patterns__merge_recursion_data_after_branch_3_p_0(recursion_patterns__Finish_27, recursion_patterns__DisjsRecursionData_25, &recursion_patterns__BranchRecursionData_28);
            }
#line 455 "recursion_patterns.m"
            {
#line 455 "recursion_patterns.m"
              recursion_patterns__merge_recursion_data_sequence_3_p_0(recursion_patterns__DisjRecursionData_17, recursion_patterns__BranchRecursionData_28, recursion_patterns__HeadVar__5_5);
#line 455 "recursion_patterns.m"
              return;
            }
#line 433 "recursion_patterns.m"
          }
#line 422 "recursion_patterns.m"
      }
#line 420 "recursion_patterns.m"
  }
#line 416 "recursion_patterns.m"
}

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_2(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 758 "recursion_patterns.m"
{
#line 758 "recursion_patterns.m"
  {
#line 758 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 758 "recursion_patterns.m"
    MR_Word recursion_patterns__conv2_HeadVar__4_15;

#line 758 "recursion_patterns.m"
    {
#line 758 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__758__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv2_HeadVar__4_15);
    }
#line 758 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv2_HeadVar__4_15));
#line 758 "recursion_patterns.m"
  }
#line 758 "recursion_patterns.m"
}

#line 758 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0_1(
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 758 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 758 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 758 "recursion_patterns.m"
{
#line 758 "recursion_patterns.m"
  {
#line 758 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 758 "recursion_patterns.m"
    MR_Word recursion_patterns__conv1_HeadVar__4_15;

#line 758 "recursion_patterns.m"
    {
#line 758 "recursion_patterns.m"
      recursion_patterns__IntroducedFrom__pred__recursion_data_and_probability__758__1_4_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv1_HeadVar__4_15);
    }
#line 758 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv1_HeadVar__4_15));
#line 758 "recursion_patterns.m"
  }
#line 758 "recursion_patterns.m"
}

#line 367 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__conj_recursion_data_5_p_0(
#line 367 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_1,
#line 367 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_2,
#line 367 "recursion_patterns.m"
  MR_Integer recursion_patterns__ConjNum_3,
#line 367 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__4_4,
#line 367 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__5_5)
#line 367 "recursion_patterns.m"
{
#line 371 "recursion_patterns.m"
  {
#line 371 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 371 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 371 "recursion_patterns.m"
      {
#line 371 "recursion_patterns.m"
        MR_Word recursion_patterns__V_48_48;
#line 371 "recursion_patterns.m"
        MR_Word recursion_patterns__V_49_49;
#line 371 "recursion_patterns.m"
        MR_Word recursion_patterns__V_50_50;
#line 371 "recursion_patterns.m"
        MR_Float recursion_patterns__V_51_51;
#line 371 "recursion_patterns.m"
        MR_Word recursion_patterns__V_53_53;

#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__V_51_51 = measurement_units__certain_0_f_0();
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_50_50, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_50_50, 1) = MR_box_float(recursion_patterns__V_51_51);
#line 791 "recursion_patterns.m"
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_49_49, 0) = ((MR_Box) ((MR_Integer) 0));
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__V_49_49, 1) = ((MR_Box) (recursion_patterns__V_50_50));
#line 791 "recursion_patterns.m"
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_48_48, 0) = ((MR_Box) (recursion_patterns__V_49_49));
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "recursion_patterns.m"
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          recursion_patterns__V_53_53 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
        }
#line 791 "recursion_patterns.m"
        {
#line 791 "recursion_patterns.m"
          MR_Word base;
#line 791 "recursion_patterns.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 791 "recursion_patterns.m"
          *recursion_patterns__HeadVar__5_5 = base;
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_48_48));
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 791 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__V_53_53));
#line 791 "recursion_patterns.m"
        }
#line 371 "recursion_patterns.m"
      }
#line 371 "recursion_patterns.m"
    else
#line 375 "recursion_patterns.m"
      {
#line 375 "recursion_patterns.m"
        MR_Word recursion_patterns__Conj_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 0)));
#line 375 "recursion_patterns.m"
        MR_Word recursion_patterns__Conjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__4_4, (MR_Integer) 1)));
#line 375 "recursion_patterns.m"
        MR_Word recursion_patterns__ConjRecursionData_17;
#line 375 "recursion_patterns.m"
        MR_Word recursion_patterns__V_30_30;
#line 375 "recursion_patterns.m"
        MR_Word recursion_patterns__V_31_31;

#line 376 "recursion_patterns.m"
        {
#line 376 "recursion_patterns.m"
          recursion_patterns__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 376 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_31_31, 0) = ((MR_Box) (recursion_patterns__ConjNum_3));
#line 376 "recursion_patterns.m"
        }
#line 376 "recursion_patterns.m"
        {
#line 376 "recursion_patterns.m"
          recursion_patterns__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 376 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_30_30, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_2));
#line 376 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), recursion_patterns__V_30_30, 1) = ((MR_Box) (recursion_patterns__V_31_31));
#line 376 "recursion_patterns.m"
        }
#line 376 "recursion_patterns.m"
        {
#line 376 "recursion_patterns.m"
          recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_1, recursion_patterns__V_30_30, recursion_patterns__Conj_14, &recursion_patterns__ConjRecursionData_17);
        }
#line 384 "recursion_patterns.m"
        if ((recursion_patterns__ConjRecursionData_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 383 "recursion_patterns.m"
          *recursion_patterns__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 384 "recursion_patterns.m"
        else
#line 385 "recursion_patterns.m"
          {
#line 385 "recursion_patterns.m"
            MR_Word recursion_patterns__ConjsRecursionData0_21;
#line 385 "recursion_patterns.m"
            MR_Word recursion_patterns__CanFail_22;
#line 385 "recursion_patterns.m"
            MR_Integer recursion_patterns__V_32_32 = (recursion_patterns__ConjNum_3 + (MR_Integer) 1);
#line 385 "recursion_patterns.m"
            MR_Word recursion_patterns__V_34_34;
#line 389 "recursion_patterns.m"
            MR_Word recursion_patterns__V_39_39;
#line 389 "recursion_patterns.m"
            MR_Word recursion_patterns__V_40_40;

#line 387 "recursion_patterns.m"
            {
#line 387 "recursion_patterns.m"
              recursion_patterns__conj_recursion_data_5_p_0(recursion_patterns__Info_1, recursion_patterns__RevGoalPath_2, recursion_patterns__V_32_32, recursion_patterns__Conjs_15, &recursion_patterns__ConjsRecursionData0_21);
            }
#line 389 "recursion_patterns.m"
            recursion_patterns__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 0)));
#line 389 "recursion_patterns.m"
            recursion_patterns__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 1)));
#line 389 "recursion_patterns.m"
            recursion_patterns__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 2)));
#line 389 "recursion_patterns.m"
            {
#line 389 "recursion_patterns.m"
              recursion_patterns__CanFail_22 = mdbcomp__program_representation__detism_get_can_fail_1_f_0(recursion_patterns__V_34_34);
            }
#line 394 "recursion_patterns.m"
#line 394 "recursion_patterns.m"
            switch (recursion_patterns__CanFail_22) {
#line 394 "recursion_patterns.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 394 "recursion_patterns.m"
              case (MR_Integer) 0:
#line 395 "recursion_patterns.m"
                {
#line 395 "recursion_patterns.m"
                  MR_Word recursion_patterns__TypeCtorInfo_18_103;
#line 395 "recursion_patterns.m"
                  MR_Word recursion_patterns__CoverageInfo_23;
#line 395 "recursion_patterns.m"
                  MR_Float recursion_patterns__ConjSuccessProb_24;
#line 395 "recursion_patterns.m"
                  MR_Word recursion_patterns__ConjsRecursionData_25;
#line 395 "recursion_patterns.m"
                  MR_Float recursion_patterns__ConjFailureProb_26;
#line 395 "recursion_patterns.m"
                  MR_Word recursion_patterns__Failure_28;
#line 395 "recursion_patterns.m"
                  MR_Word recursion_patterns__BranchRecursionData_29;
#line 395 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 2)));
#line 395 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 2)));
#line 395 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_83_83;
#line 395 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_84_84;
#line 395 "recursion_patterns.m"
                  MR_Float recursion_patterns__V_85_85;
#line 395 "recursion_patterns.m"
                  MR_Word recursion_patterns__Errors_92;
#line 395 "recursion_patterns.m"
                  MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_93;
#line 395 "recursion_patterns.m"
                  MR_Word recursion_patterns__STATE_VARIABLE_Recursions_94;
#line 395 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_95_95;
#line 400 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 0)));
#line 400 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_1, (MR_Integer) 1)));
#line 400 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 0)));
#line 400 "recursion_patterns.m"
                  MR_Word recursion_patterns__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Conj_14, (MR_Integer) 1)));
#line 400 "recursion_patterns.m"
                  MR_Box recursion_patterns__conv0_CoverageInfo_23;
#line 470 "recursion_patterns.m"
                  MR_Integer recursion_patterns__Before_57;
#line 470 "recursion_patterns.m"
                  MR_Integer recursion_patterns__After_58;

#line 400 "recursion_patterns.m"
                  {
#line 400 "recursion_patterns.m"
                    recursion_patterns__conv0_CoverageInfo_23 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, recursion_patterns__V_35_35, recursion_patterns__V_36_36);
                  }
#line 400 "recursion_patterns.m"
                  recursion_patterns__CoverageInfo_23 = ((MR_Word) recursion_patterns__conv0_CoverageInfo_23);
#line 463 "recursion_patterns.m"
                  {
#line 463 "recursion_patterns.m"
                    recursion_patterns__succeeded = coverage__get_coverage_before_and_after_3_p_0(recursion_patterns__CoverageInfo_23, &recursion_patterns__Before_57, &recursion_patterns__After_58);
                  }
#line 470 "recursion_patterns.m"
                  if (recursion_patterns__succeeded)
#line 467 "recursion_patterns.m"
                    {
#line 464 "recursion_patterns.m"
                      recursion_patterns__succeeded = (recursion_patterns__After_58 > recursion_patterns__Before_57);
#line 467 "recursion_patterns.m"
                      if (recursion_patterns__succeeded)
#line 466 "recursion_patterns.m"
                        {
#line 466 "recursion_patterns.m"
                          recursion_patterns__ConjSuccessProb_24 = measurement_units__certain_0_f_0();
                        }
#line 467 "recursion_patterns.m"
                      else
#line 468 "recursion_patterns.m"
                        {
#line 468 "recursion_patterns.m"
                          MR_Float recursion_patterns__V_59_59;
#line 468 "recursion_patterns.m"
                          MR_Float recursion_patterns__V_60_60;
#line 468 "recursion_patterns.m"
                          MR_Float recursion_patterns__V_61_61;

#line 468 "recursion_patterns.m"
                          {
#line 468 "recursion_patterns.m"
                            recursion_patterns__V_60_60 = mercury__float__float_1_f_0(recursion_patterns__After_58);
                          }
#line 468 "recursion_patterns.m"
                          {
#line 468 "recursion_patterns.m"
                            recursion_patterns__V_61_61 = mercury__float__float_1_f_0(recursion_patterns__Before_57);
                          }
#line 468 "recursion_patterns.m"
                          {
#line 468 "recursion_patterns.m"
                            recursion_patterns__V_59_59 = mercury__float__f_slash_2_f_0(recursion_patterns__V_60_60, recursion_patterns__V_61_61);
                          }
#line 468 "recursion_patterns.m"
                          {
#line 468 "recursion_patterns.m"
                            recursion_patterns__ConjSuccessProb_24 = measurement_units__probable_1_f_0(recursion_patterns__V_59_59);
                          }
#line 468 "recursion_patterns.m"
                        }
#line 467 "recursion_patterns.m"
                    }
#line 470 "recursion_patterns.m"
                  else
#line 471 "recursion_patterns.m"
                    {
#line 471 "recursion_patterns.m"
                      {
#line 471 "recursion_patterns.m"
                        mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.success_probability_from_coverage\'/2", (MR_String) "expected complete coverage information");
#line 471 "recursion_patterns.m"
                        return;
                      }
#line 471 "recursion_patterns.m"
                    }
#line 757 "recursion_patterns.m"
                  if ((recursion_patterns__ConjsRecursionData0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 761 "recursion_patterns.m"
                    recursion_patterns__ConjsRecursionData_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 757 "recursion_patterns.m"
                  else
#line 757 "recursion_patterns.m"
                    {
#line 757 "recursion_patterns.m"
                      MR_Word recursion_patterns__TypeCtorInfo_18_79;
#line 757 "recursion_patterns.m"
                      MR_Integer recursion_patterns__MaxLevel_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData0_21, (MR_Integer) 1)));
#line 757 "recursion_patterns.m"
                      MR_Word recursion_patterns__Errors_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData0_21, (MR_Integer) 2)));
#line 757 "recursion_patterns.m"
                      MR_Word recursion_patterns__STATE_VARIABLE_Recursions_0_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData0_21, (MR_Integer) 0)));
#line 757 "recursion_patterns.m"
                      MR_Word recursion_patterns__STATE_VARIABLE_Recursions_70;
#line 757 "recursion_patterns.m"
                      MR_Word recursion_patterns__V_71_71;

#line 758 "recursion_patterns.m"
                      {
#line 758 "recursion_patterns.m"
                        recursion_patterns__V_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 758 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 758 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 1) = ((MR_Box) (recursion_patterns__conj_recursion_data_5_p_0_1));
#line 758 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 758 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(0), recursion_patterns__V_71_71, 3) = MR_box_float(recursion_patterns__ConjSuccessProb_24);
#line 758 "recursion_patterns.m"
                      }
#line 8298 "recursion_patterns.c"
                      recursion_patterns__TypeCtorInfo_18_79 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 758 "recursion_patterns.m"
                      {
#line 758 "recursion_patterns.m"
                        mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__TypeCtorInfo_18_79, recursion_patterns__V_71_71, recursion_patterns__STATE_VARIABLE_Recursions_0_69, &recursion_patterns__STATE_VARIABLE_Recursions_70);
                      }
#line 757 "recursion_patterns.m"
                      {
#line 757 "recursion_patterns.m"
                        recursion_patterns__ConjsRecursionData_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 757 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData_25, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_70));
#line 757 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData_25, 1) = ((MR_Box) (recursion_patterns__MaxLevel_67));
#line 757 "recursion_patterns.m"
                        MR_hl_field(MR_mktag(1), recursion_patterns__ConjsRecursionData_25, 2) = ((MR_Box) (recursion_patterns__Errors_68));
#line 757 "recursion_patterns.m"
                      }
#line 757 "recursion_patterns.m"
                    }
#line 406 "recursion_patterns.m"
                  {
#line 406 "recursion_patterns.m"
                    recursion_patterns__ConjFailureProb_26 = measurement_units__not_probability_1_f_0(recursion_patterns__ConjSuccessProb_24);
                  }
#line 791 "recursion_patterns.m"
                  {
#line 791 "recursion_patterns.m"
                    recursion_patterns__V_85_85 = measurement_units__certain_0_f_0();
                  }
#line 791 "recursion_patterns.m"
                  {
#line 791 "recursion_patterns.m"
                    recursion_patterns__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_84_84, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 791 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_84_84, 1) = MR_box_float(recursion_patterns__V_85_85);
#line 791 "recursion_patterns.m"
                  }
#line 791 "recursion_patterns.m"
                  {
#line 791 "recursion_patterns.m"
                    recursion_patterns__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_83_83, 0) = ((MR_Box) ((MR_Integer) 0));
#line 791 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_83_83, 1) = ((MR_Box) (recursion_patterns__V_84_84));
#line 791 "recursion_patterns.m"
                  }
#line 791 "recursion_patterns.m"
                  {
#line 791 "recursion_patterns.m"
                    recursion_patterns__STATE_VARIABLE_Recursions_0_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_93, 0) = ((MR_Box) (recursion_patterns__V_83_83));
#line 791 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_Recursions_0_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "recursion_patterns.m"
                  }
#line 791 "recursion_patterns.m"
                  {
#line 791 "recursion_patterns.m"
                    recursion_patterns__Errors_92 = mercury__set__init_0_f_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0);
                  }
#line 758 "recursion_patterns.m"
                  {
#line 758 "recursion_patterns.m"
                    recursion_patterns__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 758 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_95_95, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[2]));
#line 758 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_95_95, 1) = ((MR_Box) (recursion_patterns__conj_recursion_data_5_p_0_2));
#line 758 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 758 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(0), recursion_patterns__V_95_95, 3) = MR_box_float(recursion_patterns__ConjFailureProb_26);
#line 758 "recursion_patterns.m"
                  }
#line 8378 "recursion_patterns.c"
                  recursion_patterns__TypeCtorInfo_18_103 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 758 "recursion_patterns.m"
                  {
#line 758 "recursion_patterns.m"
                    mercury__assoc_list__map_values_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, recursion_patterns__TypeCtorInfo_18_103, recursion_patterns__TypeCtorInfo_18_103, recursion_patterns__V_95_95, recursion_patterns__STATE_VARIABLE_Recursions_0_93, &recursion_patterns__STATE_VARIABLE_Recursions_94);
                  }
#line 757 "recursion_patterns.m"
                  {
#line 757 "recursion_patterns.m"
                    recursion_patterns__Failure_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 757 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(1), recursion_patterns__Failure_28, 0) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Recursions_94));
#line 757 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(1), recursion_patterns__Failure_28, 1) = ((MR_Box) ((MR_Integer) 0));
#line 757 "recursion_patterns.m"
                    MR_hl_field(MR_mktag(1), recursion_patterns__Failure_28, 2) = ((MR_Box) (recursion_patterns__Errors_92));
#line 757 "recursion_patterns.m"
                  }
#line 409 "recursion_patterns.m"
                  {
#line 409 "recursion_patterns.m"
                    recursion_patterns__merge_recursion_data_after_branch_3_p_0(recursion_patterns__ConjsRecursionData_25, recursion_patterns__Failure_28, &recursion_patterns__BranchRecursionData_29);
                  }
#line 411 "recursion_patterns.m"
                  {
#line 411 "recursion_patterns.m"
                    recursion_patterns__merge_recursion_data_sequence_3_p_0(recursion_patterns__ConjRecursionData_17, recursion_patterns__BranchRecursionData_29, recursion_patterns__HeadVar__5_5);
#line 411 "recursion_patterns.m"
                    return;
                  }
#line 395 "recursion_patterns.m"
                }
#line 394 "recursion_patterns.m"
                break;
#line 394 "recursion_patterns.m"
              case (MR_Integer) 1:
#line 392 "recursion_patterns.m"
                {
#line 392 "recursion_patterns.m"
                  recursion_patterns__merge_recursion_data_sequence_3_p_0(recursion_patterns__ConjRecursionData_17, recursion_patterns__ConjsRecursionData0_21, recursion_patterns__HeadVar__5_5);
#line 392 "recursion_patterns.m"
                  return;
                }
#line 394 "recursion_patterns.m"
                break;
#line 394 "recursion_patterns.m"
            }
#line 385 "recursion_patterns.m"
          }
#line 375 "recursion_patterns.m"
      }
#line 371 "recursion_patterns.m"
  }
#line 367 "recursion_patterns.m"
}

#line 304 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__goal_recursion_data_4_p_0(
#line 304 "recursion_patterns.m"
  MR_Word recursion_patterns__Info_5,
#line 304 "recursion_patterns.m"
  MR_Word recursion_patterns__RevGoalPath_6,
#line 304 "recursion_patterns.m"
  MR_Word recursion_patterns__GoalRep_7,
#line 304 "recursion_patterns.m"
  MR_Word * recursion_patterns__STATE_VARIABLE_RecursionData_30)
#line 304 "recursion_patterns.m"
{
#line 308 "recursion_patterns.m"
  {
#line 308 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 308 "recursion_patterns.m"
    MR_Word recursion_patterns__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__GoalRep_7, (MR_Integer) 0)));
#line 308 "recursion_patterns.m"
    MR_Word recursion_patterns__Detism_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__GoalRep_7, (MR_Integer) 1)));
#line 308 "recursion_patterns.m"
    MR_Word recursion_patterns__GoalId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__GoalRep_7, (MR_Integer) 2)));
#line 308 "recursion_patterns.m"
    MR_Word recursion_patterns__CoverageInfo_12;
#line 308 "recursion_patterns.m"
    MR_Integer recursion_patterns__Calls_14;
#line 308 "recursion_patterns.m"
    MR_Word recursion_patterns__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 2)));
#line 308 "recursion_patterns.m"
    MR_Word recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 310 "recursion_patterns.m"
    MR_Word recursion_patterns__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 0)));
#line 310 "recursion_patterns.m"
    MR_Word recursion_patterns__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Info_5, (MR_Integer) 1)));
#line 310 "recursion_patterns.m"
    MR_Box recursion_patterns__conv0_CoverageInfo_12;
#line 313 "recursion_patterns.m"
    MR_Integer recursion_patterns__CallsPrime_13;

#line 310 "recursion_patterns.m"
    {
#line 310 "recursion_patterns.m"
      recursion_patterns__conv0_CoverageInfo_12 = mdbcomp__goal_path__get_goal_attribute_det_2_f_0((MR_Word) &coverage__coverage__type_ctor_info_coverage_info_0, recursion_patterns__V_31_31, recursion_patterns__GoalId_11);
    }
#line 310 "recursion_patterns.m"
    recursion_patterns__CoverageInfo_12 = ((MR_Word) recursion_patterns__conv0_CoverageInfo_12);
#line 311 "recursion_patterns.m"
    {
#line 311 "recursion_patterns.m"
      recursion_patterns__succeeded = coverage__get_coverage_before_2_p_0(recursion_patterns__CoverageInfo_12, &recursion_patterns__CallsPrime_13);
    }
#line 313 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 312 "recursion_patterns.m"
      recursion_patterns__Calls_14 = recursion_patterns__CallsPrime_13;
#line 313 "recursion_patterns.m"
    else
#line 314 "recursion_patterns.m"
      {
#line 314 "recursion_patterns.m"
        {
#line 314 "recursion_patterns.m"
          mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.goal_recursion_data\'/4", (MR_String) "couldn\'t retrieve coverage information");
#line 314 "recursion_patterns.m"
          return;
        }
#line 314 "recursion_patterns.m"
      }
#line 316 "recursion_patterns.m"
    recursion_patterns__succeeded = (recursion_patterns__Calls_14 == (MR_Integer) 0);
#line 318 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 317 "recursion_patterns.m"
      recursion_patterns__STATE_VARIABLE_RecursionData_35_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 318 "recursion_patterns.m"
    else
#line 323 "recursion_patterns.m"
#line 323 "recursion_patterns.m"
      switch (MR_tag((MR_Word) recursion_patterns__GoalExpr_9)) {
#line 323 "recursion_patterns.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 323 "recursion_patterns.m"
        case (MR_Integer) 0:
#line 320 "recursion_patterns.m"
          {
#line 320 "recursion_patterns.m"
            MR_Word recursion_patterns__Conjs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__GoalExpr_9, (MR_Integer) 0)));

#line 321 "recursion_patterns.m"
            {
#line 321 "recursion_patterns.m"
              recursion_patterns__conj_recursion_data_5_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, (MR_Integer) 1, recursion_patterns__Conjs_15, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
            }
#line 320 "recursion_patterns.m"
          }
#line 323 "recursion_patterns.m"
          break;
#line 323 "recursion_patterns.m"
        case (MR_Integer) 1:
#line 324 "recursion_patterns.m"
          {
#line 324 "recursion_patterns.m"
            MR_Word recursion_patterns__Disjs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__GoalExpr_9, (MR_Integer) 0)));

#line 325 "recursion_patterns.m"
            {
#line 325 "recursion_patterns.m"
              recursion_patterns__disj_recursion_data_5_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, (MR_Integer) 1, recursion_patterns__Disjs_16, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
            }
#line 324 "recursion_patterns.m"
          }
#line 323 "recursion_patterns.m"
          break;
#line 323 "recursion_patterns.m"
        case (MR_Integer) 2:
#line 328 "recursion_patterns.m"
          {
#line 328 "recursion_patterns.m"
            MR_Word recursion_patterns__Cases_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), recursion_patterns__GoalExpr_9, (MR_Integer) 2)));
#line 328 "recursion_patterns.m"
            MR_Float recursion_patterns__V_41_41;
#line 328 "recursion_patterns.m"
            MR_Integer recursion_patterns__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), recursion_patterns__GoalExpr_9, (MR_Integer) 0)));
#line 328 "recursion_patterns.m"
            MR_Word recursion_patterns__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));

#line 330 "recursion_patterns.m"
            {
#line 330 "recursion_patterns.m"
              recursion_patterns__V_41_41 = mercury__float__float_1_f_0(recursion_patterns__Calls_14);
            }
#line 329 "recursion_patterns.m"
            {
#line 329 "recursion_patterns.m"
              recursion_patterns__switch_recursion_data_7_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, (MR_Integer) 1, recursion_patterns__Cases_19, recursion_patterns__V_41_41, recursion_patterns__Calls_14, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
            }
#line 328 "recursion_patterns.m"
          }
#line 323 "recursion_patterns.m"
          break;
#line 323 "recursion_patterns.m"
        case (MR_Integer) 3:
#line 323 "recursion_patterns.m"
#line 323 "recursion_patterns.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 0)))) {
#line 323 "recursion_patterns.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 323 "recursion_patterns.m"
            case (MR_Integer) 0:
#line 332 "recursion_patterns.m"
              {
#line 332 "recursion_patterns.m"
                MR_Word recursion_patterns__Cond_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));
#line 332 "recursion_patterns.m"
                MR_Word recursion_patterns__Then_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 2)));
#line 332 "recursion_patterns.m"
                MR_Word recursion_patterns__Else_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 3)));

#line 333 "recursion_patterns.m"
                {
#line 333 "recursion_patterns.m"
                  recursion_patterns__ite_recursion_data_7_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, recursion_patterns__Cond_20, recursion_patterns__Then_21, recursion_patterns__Else_22, recursion_patterns__Calls_14, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
                }
#line 332 "recursion_patterns.m"
              }
#line 323 "recursion_patterns.m"
              break;
#line 323 "recursion_patterns.m"
            case (MR_Integer) 1:
#line 342 "recursion_patterns.m"
              {
#line 342 "recursion_patterns.m"
                MR_Word recursion_patterns__SubGoal_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));
#line 342 "recursion_patterns.m"
                MR_Word recursion_patterns__V_37_37;

#line 343 "recursion_patterns.m"
                {
#line 343 "recursion_patterns.m"
                  recursion_patterns__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_37_37, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_6));
#line 343 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 343 "recursion_patterns.m"
                }
#line 343 "recursion_patterns.m"
                {
#line 343 "recursion_patterns.m"
                  recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_5, recursion_patterns__V_37_37, recursion_patterns__SubGoal_23, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
                }
#line 342 "recursion_patterns.m"
              }
#line 323 "recursion_patterns.m"
              break;
#line 323 "recursion_patterns.m"
            case (MR_Integer) 2:
#line 342 "recursion_patterns.m"
              {
#line 342 "recursion_patterns.m"
                MR_Word recursion_patterns__MaybeCut_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 2)));
#line 342 "recursion_patterns.m"
                MR_Word recursion_patterns__SubGoal_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));
#line 342 "recursion_patterns.m"
                MR_Word recursion_patterns__GoalPathStep_53;
#line 342 "recursion_patterns.m"
                MR_Word recursion_patterns__V_54_54;

#line 341 "recursion_patterns.m"
                {
#line 341 "recursion_patterns.m"
                  recursion_patterns__GoalPathStep_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(3), recursion_patterns__GoalPathStep_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 341 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(3), recursion_patterns__GoalPathStep_53, 1) = ((MR_Box) (recursion_patterns__MaybeCut_25));
#line 341 "recursion_patterns.m"
                }
#line 343 "recursion_patterns.m"
                {
#line 343 "recursion_patterns.m"
                  recursion_patterns__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_54_54, 0) = ((MR_Box) (recursion_patterns__RevGoalPath_6));
#line 343 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(1), recursion_patterns__V_54_54, 1) = ((MR_Box) (recursion_patterns__GoalPathStep_53));
#line 343 "recursion_patterns.m"
                }
#line 343 "recursion_patterns.m"
                {
#line 343 "recursion_patterns.m"
                  recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_5, recursion_patterns__V_54_54, recursion_patterns__SubGoal_52, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
                }
#line 342 "recursion_patterns.m"
              }
#line 323 "recursion_patterns.m"
              break;
#line 323 "recursion_patterns.m"
            case (MR_Integer) 3:
#line 346 "recursion_patterns.m"
              {
#line 346 "recursion_patterns.m"
                MR_Word recursion_patterns__AtomicGoalRep_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 4)));
#line 346 "recursion_patterns.m"
                MR_String recursion_patterns__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 1)));
#line 346 "recursion_patterns.m"
                MR_Integer recursion_patterns__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 2)));
#line 346 "recursion_patterns.m"
                MR_Word recursion_patterns__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__GoalExpr_9, (MR_Integer) 3)));

#line 347 "recursion_patterns.m"
                {
#line 347 "recursion_patterns.m"
                  recursion_patterns__atomic_goal_recursion_data_4_p_0(recursion_patterns__Info_5, recursion_patterns__RevGoalPath_6, recursion_patterns__AtomicGoalRep_29, &recursion_patterns__STATE_VARIABLE_RecursionData_35_35);
                }
#line 346 "recursion_patterns.m"
              }
#line 323 "recursion_patterns.m"
              break;
#line 323 "recursion_patterns.m"
          }
#line 323 "recursion_patterns.m"
          break;
#line 323 "recursion_patterns.m"
      }
#line 359 "recursion_patterns.m"
#line 359 "recursion_patterns.m"
    switch (recursion_patterns__Detism_10) {
#line 359 "recursion_patterns.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 359 "recursion_patterns.m"
      case (MR_Integer) 5:
#line 355 "recursion_patterns.m"
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 359 "recursion_patterns.m"
        break;
#line 359 "recursion_patterns.m"
      case (MR_Integer) 4:
#line 354 "recursion_patterns.m"
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 359 "recursion_patterns.m"
        break;
#line 359 "recursion_patterns.m"
      case (MR_Integer) 0:
#line 352 "recursion_patterns.m"
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 359 "recursion_patterns.m"
        break;
#line 359 "recursion_patterns.m"
      case (MR_Integer) 6:
#line 356 "recursion_patterns.m"
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 359 "recursion_patterns.m"
        break;
#line 359 "recursion_patterns.m"
      case (MR_Integer) 7:
#line 357 "recursion_patterns.m"
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 359 "recursion_patterns.m"
        break;
#line 359 "recursion_patterns.m"
      case (MR_Integer) 3:
#line 359 "recursion_patterns.m"
      case (MR_Integer) 2:
#line 362 "recursion_patterns.m"
        {
#line 362 "recursion_patterns.m"
          MR_Word recursion_patterns__V_47_47 = (MR_Word) recursion_patterns__Detism_10;

#line 779 "recursion_patterns.m"
          if ((recursion_patterns__STATE_VARIABLE_RecursionData_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 780 "recursion_patterns.m"
            *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 779 "recursion_patterns.m"
          else
#line 776 "recursion_patterns.m"
            {
#line 776 "recursion_patterns.m"
              MR_Word recursion_patterns__STATE_VARIABLE_Errors_11_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 2)));
#line 776 "recursion_patterns.m"
              MR_Word recursion_patterns__STATE_VARIABLE_Errors_12_63;
#line 776 "recursion_patterns.m"
              MR_Word recursion_patterns__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 0)));
#line 776 "recursion_patterns.m"
              MR_Integer recursion_patterns__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 1)));
#line 778 "recursion_patterns.m"
              MR_Word recursion_patterns__V_65_65;
#line 778 "recursion_patterns.m"
              MR_Integer recursion_patterns__V_66_66;
#line 778 "recursion_patterns.m"
              MR_Word recursion_patterns__V_67_67;

#line 777 "recursion_patterns.m"
              {
#line 777 "recursion_patterns.m"
                mercury__set__insert_3_p_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0, ((MR_Box) (recursion_patterns__V_47_47)), recursion_patterns__STATE_VARIABLE_Errors_11_62, &recursion_patterns__STATE_VARIABLE_Errors_12_63);
              }
#line 778 "recursion_patterns.m"
              recursion_patterns__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 0)));
#line 778 "recursion_patterns.m"
              recursion_patterns__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 1)));
#line 778 "recursion_patterns.m"
              recursion_patterns__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__STATE_VARIABLE_RecursionData_35_35, (MR_Integer) 2)));
#line 778 "recursion_patterns.m"
              {
#line 778 "recursion_patterns.m"
                MR_Word base;
#line 778 "recursion_patterns.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 778 "recursion_patterns.m"
                *recursion_patterns__STATE_VARIABLE_RecursionData_30 = base;
#line 778 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_65_65));
#line 778 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__V_66_66));
#line 778 "recursion_patterns.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (recursion_patterns__STATE_VARIABLE_Errors_12_63));
#line 778 "recursion_patterns.m"
              }
#line 776 "recursion_patterns.m"
            }
#line 362 "recursion_patterns.m"
        }
#line 359 "recursion_patterns.m"
        break;
#line 359 "recursion_patterns.m"
      case (MR_Integer) 1:
#line 353 "recursion_patterns.m"
        *recursion_patterns__STATE_VARIABLE_RecursionData_30 = recursion_patterns__STATE_VARIABLE_RecursionData_35_35;
#line 359 "recursion_patterns.m"
        break;
#line 359 "recursion_patterns.m"
    }
#line 308 "recursion_patterns.m"
  }
#line 304 "recursion_patterns.m"
}

#line 260 "recursion_patterns.m"
static MR_Float MR_CALL 
recursion_patterns__single_rec_average_recursion_cost_3_f_0(
#line 260 "recursion_patterns.m"
  MR_Float recursion_patterns__BaseCost_5,
#line 260 "recursion_patterns.m"
  MR_Float recursion_patterns__RecCost_6,
#line 260 "recursion_patterns.m"
  MR_Float recursion_patterns__AvgMaxDepth_7)
#line 260 "recursion_patterns.m"
{
#line 262 "recursion_patterns.m"
  {
#line 262 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 262 "recursion_patterns.m"
    MR_Float recursion_patterns__Cost_8;
#line 262 "recursion_patterns.m"
    MR_Float recursion_patterns__Sum_9;
#line 262 "recursion_patterns.m"
    MR_Float recursion_patterns__V_10_10 = (((MR_Float) 0.50000000000000000) * recursion_patterns__RecCost_6);
#line 262 "recursion_patterns.m"
    MR_Float recursion_patterns__V_12_12;
#line 262 "recursion_patterns.m"
    MR_Float recursion_patterns__V_13_13 = (recursion_patterns__AvgMaxDepth_7 * recursion_patterns__AvgMaxDepth_7);
#line 262 "recursion_patterns.m"
    MR_Float recursion_patterns__V_15_15;
#line 262 "recursion_patterns.m"
    MR_Float recursion_patterns__V_16_16;

#line 263 "recursion_patterns.m"
    recursion_patterns__V_12_12 = (recursion_patterns__V_13_13 + recursion_patterns__AvgMaxDepth_7);
#line 263 "recursion_patterns.m"
    recursion_patterns__Sum_9 = (recursion_patterns__V_10_10 * recursion_patterns__V_12_12);
#line 264 "recursion_patterns.m"
    recursion_patterns__V_16_16 = (recursion_patterns__AvgMaxDepth_7 + ((MR_Float) 1.0000000000000000));
#line 264 "recursion_patterns.m"
    {
#line 264 "recursion_patterns.m"
      recursion_patterns__V_15_15 = mercury__float__f_slash_2_f_0(recursion_patterns__Sum_9, recursion_patterns__V_16_16);
    }
#line 264 "recursion_patterns.m"
    recursion_patterns__Cost_8 = (recursion_patterns__BaseCost_5 + recursion_patterns__V_15_15);
#line 262 "recursion_patterns.m"
    return recursion_patterns__Cost_8;
#line 262 "recursion_patterns.m"
  }
#line 260 "recursion_patterns.m"
}

#line 234 "recursion_patterns.m"
static MR_Float MR_CALL 
recursion_patterns__single_rec_recursion_cost_3_f_0(
#line 234 "recursion_patterns.m"
  MR_Float recursion_patterns__BaseCost_5,
#line 234 "recursion_patterns.m"
  MR_Float recursion_patterns__RecCost_6,
#line 234 "recursion_patterns.m"
  MR_Integer recursion_patterns__LevelI_7)
#line 234 "recursion_patterns.m"
{
#line 236 "recursion_patterns.m"
  {
#line 236 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 236 "recursion_patterns.m"
    MR_Float recursion_patterns__Cost_8;
#line 236 "recursion_patterns.m"
    MR_Float recursion_patterns__V_9_9;
#line 236 "recursion_patterns.m"
    MR_Float recursion_patterns__V_10_10;
#line 236 "recursion_patterns.m"
    MR_Float recursion_patterns__V_11_11;

#line 237 "recursion_patterns.m"
    {
#line 237 "recursion_patterns.m"
      recursion_patterns__V_10_10 = mercury__float__float_1_f_0(recursion_patterns__LevelI_7);
    }
#line 237 "recursion_patterns.m"
    recursion_patterns__V_11_11 = (recursion_patterns__RecCost_6 + ((MR_Float) 1.0000000000000000));
#line 237 "recursion_patterns.m"
    recursion_patterns__V_9_9 = (recursion_patterns__V_10_10 * recursion_patterns__V_11_11);
#line 237 "recursion_patterns.m"
    recursion_patterns__Cost_8 = (recursion_patterns__BaseCost_5 + recursion_patterns__V_9_9);
#line 236 "recursion_patterns.m"
    return recursion_patterns__Cost_8;
#line 236 "recursion_patterns.m"
  }
#line 234 "recursion_patterns.m"
}

#line 211 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_level_report_3_p_0(
#line 211 "recursion_patterns.m"
  MR_Float recursion_patterns__TotalCalls_4,
#line 211 "recursion_patterns.m"
  MR_Word recursion_patterns__HeadVar__2_2,
#line 211 "recursion_patterns.m"
  MR_Word * recursion_patterns__HeadVar__3_3)
#line 211 "recursion_patterns.m"
{
#line 215 "recursion_patterns.m"
  {
#line 215 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 215 "recursion_patterns.m"
    MR_Integer recursion_patterns__Level_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 0)));
#line 215 "recursion_patterns.m"
    MR_Float recursion_patterns__NonRecCost_6;
#line 215 "recursion_patterns.m"
    MR_Float recursion_patterns__Prob_7;
#line 215 "recursion_patterns.m"
    MR_Integer recursion_patterns__Calls_8;
#line 215 "recursion_patterns.m"
    MR_Float recursion_patterns__CostExChild_9;
#line 215 "recursion_patterns.m"
    MR_Float recursion_patterns__CallsF_10;
#line 215 "recursion_patterns.m"
    MR_Word recursion_patterns__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__HeadVar__2_2, (MR_Integer) 1)));
#line 215 "recursion_patterns.m"
    MR_Float recursion_patterns__V_12_12;
#line 215 "recursion_patterns.m"
    MR_Float recursion_patterns__V_13_13;

#line 214 "recursion_patterns.m"
    recursion_patterns__NonRecCost_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__V_11_11, (MR_Integer) 0)));
#line 214 "recursion_patterns.m"
    recursion_patterns__Prob_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__V_11_11, (MR_Integer) 1)));
#line 216 "recursion_patterns.m"
    {
#line 216 "recursion_patterns.m"
      recursion_patterns__V_12_12 = measurement_units__probability_to_float_1_f_0(recursion_patterns__Prob_7);
    }
#line 216 "recursion_patterns.m"
    recursion_patterns__CallsF_10 = (recursion_patterns__V_12_12 * recursion_patterns__TotalCalls_4);
#line 217 "recursion_patterns.m"
    {
#line 217 "recursion_patterns.m"
      recursion_patterns__Calls_8 = mercury__float__round_to_int_1_f_0(recursion_patterns__CallsF_10);
    }
#line 218 "recursion_patterns.m"
    {
#line 218 "recursion_patterns.m"
      recursion_patterns__V_13_13 = mercury__float__float_1_f_0(recursion_patterns__Level_5);
    }
#line 218 "recursion_patterns.m"
    recursion_patterns__CostExChild_9 = (recursion_patterns__V_13_13 * recursion_patterns__CallsF_10);
#line 215 "recursion_patterns.m"
    {
#line 215 "recursion_patterns.m"
      MR_Word base;
#line 215 "recursion_patterns.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 215 "recursion_patterns.m"
      *recursion_patterns__HeadVar__3_3 = base;
#line 215 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__Level_5));
#line 215 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (recursion_patterns__Calls_8));
#line 215 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 2) = MR_box_float(recursion_patterns__Prob_7);
#line 215 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 3) = MR_box_float(recursion_patterns__NonRecCost_6);
#line 215 "recursion_patterns.m"
      MR_hl_field(MR_mktag(0), base, 4) = MR_box_float(recursion_patterns__CostExChild_9);
#line 215 "recursion_patterns.m"
    }
#line 215 "recursion_patterns.m"
  }
#line 211 "recursion_patterns.m"
}

#line 206 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_3(
#line 206 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 206 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1)
#line 206 "recursion_patterns.m"
{
#line 206 "recursion_patterns.m"
  {
#line 206 "recursion_patterns.m"
    MR_Box recursion_patterns__wrapper_arg_2;
#line 206 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 206 "recursion_patterns.m"
    MR_String recursion_patterns__conv6_HeadVar__2_2;

#line 206 "recursion_patterns.m"
    {
#line 206 "recursion_patterns.m"
      recursion_patterns__conv6_HeadVar__2_2 = recursion_patterns__error_to_string_1_f_0(((MR_Word) recursion_patterns__wrapper_arg_1));
    }
#line 206 "recursion_patterns.m"
    recursion_patterns__wrapper_arg_2 = ((MR_Box) (recursion_patterns__conv6_HeadVar__2_2));
#line 206 "recursion_patterns.m"
    return recursion_patterns__wrapper_arg_2;
#line 206 "recursion_patterns.m"
  }
#line 206 "recursion_patterns.m"
}

#line 201 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_2(
#line 201 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 201 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 201 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_2)
#line 201 "recursion_patterns.m"
{
#line 201 "recursion_patterns.m"
  {
#line 201 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 201 "recursion_patterns.m"
    MR_Word recursion_patterns__conv5_HeadVar__3_3;

#line 201 "recursion_patterns.m"
    {
#line 201 "recursion_patterns.m"
      recursion_patterns__recursion_level_report_3_p_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Word) recursion_patterns__wrapper_arg_1), &recursion_patterns__conv5_HeadVar__3_3);
    }
#line 201 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_2 = ((MR_Box) (recursion_patterns__conv5_HeadVar__3_3));
#line 201 "recursion_patterns.m"
  }
#line 201 "recursion_patterns.m"
}

#line 182 "recursion_patterns.m"
static MR_Box MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0_1(
#line 182 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 182 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1)
#line 182 "recursion_patterns.m"
{
#line 182 "recursion_patterns.m"
  {
#line 182 "recursion_patterns.m"
    MR_Box recursion_patterns__wrapper_arg_2;
#line 182 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 182 "recursion_patterns.m"
    MR_Float recursion_patterns__conv2_Cost_8;

#line 182 "recursion_patterns.m"
    {
#line 182 "recursion_patterns.m"
      recursion_patterns__conv2_Cost_8 = recursion_patterns__single_rec_recursion_cost_3_f_0(MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 4))), ((MR_Integer) recursion_patterns__wrapper_arg_1));
    }
#line 182 "recursion_patterns.m"
    recursion_patterns__wrapper_arg_2 = MR_box_float(recursion_patterns__conv2_Cost_8);
#line 182 "recursion_patterns.m"
    return recursion_patterns__wrapper_arg_2;
#line 182 "recursion_patterns.m"
  }
#line 182 "recursion_patterns.m"
}

#line 139 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__recursion_data_to_recursion_type_4_p_0(
#line 139 "recursion_patterns.m"
  MR_Integer recursion_patterns__ParentCallsI_5,
#line 139 "recursion_patterns.m"
  MR_Integer recursion_patterns__TotalCallsI_6,
#line 139 "recursion_patterns.m"
  MR_Word recursion_patterns__RecursionData_7,
#line 139 "recursion_patterns.m"
  MR_Word * recursion_patterns__Type_8)
#line 139 "recursion_patterns.m"
{
#line 145 "recursion_patterns.m"
  {
#line 145 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 145 "recursion_patterns.m"
    if ((recursion_patterns__RecursionData_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "recursion_patterns.m"
      *recursion_patterns__Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 145 "recursion_patterns.m"
    else
#line 149 "recursion_patterns.m"
      {
#line 149 "recursion_patterns.m"
        MR_Word recursion_patterns__Levels_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__RecursionData_7, (MR_Integer) 0)));
#line 149 "recursion_patterns.m"
        MR_Integer recursion_patterns__Maximum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), recursion_patterns__RecursionData_7, (MR_Integer) 1)));
#line 149 "recursion_patterns.m"
        MR_Word recursion_patterns__Errors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__RecursionData_7, (MR_Integer) 2)));
#line 149 "recursion_patterns.m"
        MR_Float recursion_patterns__ParentCalls_12;
#line 149 "recursion_patterns.m"
        MR_Float recursion_patterns__TotalCalls_13;
#line 149 "recursion_patterns.m"
        MR_Float recursion_patterns__BaseCost_15;
#line 149 "recursion_patterns.m"
        MR_Float recursion_patterns__BaseProb_16;
#line 149 "recursion_patterns.m"
        MR_Integer recursion_patterns__BaseCount_18;
#line 149 "recursion_patterns.m"
        MR_Word recursion_patterns__BaseLevel_19;
#line 156 "recursion_patterns.m"
        MR_Word recursion_patterns__RLBase_14;
#line 152 "recursion_patterns.m"
        MR_Box recursion_patterns__conv0_RLBase_14;

#line 150 "recursion_patterns.m"
        {
#line 150 "recursion_patterns.m"
          recursion_patterns__ParentCalls_12 = mercury__float__float_1_f_0(recursion_patterns__ParentCallsI_5);
        }
#line 151 "recursion_patterns.m"
        {
#line 151 "recursion_patterns.m"
          recursion_patterns__TotalCalls_13 = mercury__float__float_1_f_0(recursion_patterns__TotalCallsI_6);
        }
#line 152 "recursion_patterns.m"
        {
#line 152 "recursion_patterns.m"
          recursion_patterns__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0, recursion_patterns__Levels_9, ((MR_Box) ((MR_Integer) 0)), &recursion_patterns__conv0_RLBase_14);
        }
#line 152 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 152 "recursion_patterns.m"
          {
#line 152 "recursion_patterns.m"
            recursion_patterns__RLBase_14 = ((MR_Word) recursion_patterns__conv0_RLBase_14);
#line 152 "recursion_patterns.m"
            recursion_patterns__succeeded = MR_TRUE;
#line 152 "recursion_patterns.m"
          }
#line 156 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 153 "recursion_patterns.m"
          {
#line 153 "recursion_patterns.m"
            MR_Float recursion_patterns__BaseCountF_17;
#line 153 "recursion_patterns.m"
            MR_Float recursion_patterns__V_33_33;

#line 153 "recursion_patterns.m"
            recursion_patterns__BaseCost_15 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLBase_14, (MR_Integer) 0)));
#line 153 "recursion_patterns.m"
            recursion_patterns__BaseProb_16 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLBase_14, (MR_Integer) 1)));
#line 154 "recursion_patterns.m"
            {
#line 154 "recursion_patterns.m"
              recursion_patterns__V_33_33 = measurement_units__probability_to_float_1_f_0(recursion_patterns__BaseProb_16);
            }
#line 154 "recursion_patterns.m"
            recursion_patterns__BaseCountF_17 = (recursion_patterns__V_33_33 * recursion_patterns__TotalCalls_13);
#line 155 "recursion_patterns.m"
            {
#line 155 "recursion_patterns.m"
              recursion_patterns__BaseCount_18 = mercury__float__round_to_int_1_f_0(recursion_patterns__BaseCountF_17);
            }
#line 153 "recursion_patterns.m"
          }
#line 156 "recursion_patterns.m"
        else
#line 157 "recursion_patterns.m"
          {
#line 157 "recursion_patterns.m"
            recursion_patterns__BaseCost_15 = (MR_Float) 0.0000000000000000;
#line 158 "recursion_patterns.m"
            recursion_patterns__BaseCount_18 = (MR_Integer) 0;
#line 159 "recursion_patterns.m"
            {
#line 159 "recursion_patterns.m"
              recursion_patterns__BaseProb_16 = measurement_units__impossible_0_f_0();
            }
#line 157 "recursion_patterns.m"
          }
#line 162 "recursion_patterns.m"
        {
#line 162 "recursion_patterns.m"
          recursion_patterns__BaseLevel_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 162 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 0) = ((MR_Box) ((MR_Integer) 0));
#line 162 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 1) = ((MR_Box) (recursion_patterns__BaseCount_18));
#line 162 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 2) = MR_box_float(recursion_patterns__BaseProb_16);
#line 162 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 3) = MR_box_float(recursion_patterns__BaseCost_15);
#line 162 "recursion_patterns.m"
          MR_hl_field(MR_mktag(0), recursion_patterns__BaseLevel_19, 4) = MR_box_float((MR_Float) 0.0000000000000000);
#line 162 "recursion_patterns.m"
        }
#line 163 "recursion_patterns.m"
        {
#line 163 "recursion_patterns.m"
          recursion_patterns__succeeded = mercury__set__empty_1_p_0((MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0, recursion_patterns__Errors_11);
        }
#line 205 "recursion_patterns.m"
        if (recursion_patterns__succeeded)
#line 167 "recursion_patterns.m"
          {
#line 164 "recursion_patterns.m"
            recursion_patterns__succeeded = (recursion_patterns__Maximum_10 < (MR_Integer) 0);
#line 167 "recursion_patterns.m"
            if (recursion_patterns__succeeded)
#line 165 "recursion_patterns.m"
              {
#line 165 "recursion_patterns.m"
                {
#line 165 "recursion_patterns.m"
                  mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.recursion_data_to_recursion_type\'/4", (MR_String) "negative number of recursive calls");
#line 165 "recursion_patterns.m"
                  return;
                }
#line 165 "recursion_patterns.m"
              }
#line 167 "recursion_patterns.m"
            else
#line 169 "recursion_patterns.m"
              {
#line 167 "recursion_patterns.m"
                recursion_patterns__succeeded = (recursion_patterns__Maximum_10 == (MR_Integer) 0);
#line 169 "recursion_patterns.m"
                if (recursion_patterns__succeeded)
#line 168 "recursion_patterns.m"
                  *recursion_patterns__Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 169 "recursion_patterns.m"
                else
#line 185 "recursion_patterns.m"
                  {
#line 169 "recursion_patterns.m"
                    recursion_patterns__succeeded = (recursion_patterns__Maximum_10 == (MR_Integer) 1);
#line 185 "recursion_patterns.m"
                    if (recursion_patterns__succeeded)
#line 178 "recursion_patterns.m"
                      {
#line 178 "recursion_patterns.m"
                        MR_Float recursion_patterns__RecCost_21;
#line 178 "recursion_patterns.m"
                        MR_Word recursion_patterns__RecLevel_24;
#line 178 "recursion_patterns.m"
                        MR_Float recursion_patterns__AvgMaxDepth_26;
#line 178 "recursion_patterns.m"
                        MR_Float recursion_patterns__AvgRecCost_27;
#line 178 "recursion_patterns.m"
                        MR_Word recursion_patterns__AnyRecCost_28;
#line 175 "recursion_patterns.m"
                        MR_Word recursion_patterns__RLRec_20;
#line 170 "recursion_patterns.m"
                        MR_Box recursion_patterns__conv1_RLRec_20;

#line 170 "recursion_patterns.m"
                        {
#line 170 "recursion_patterns.m"
                          recursion_patterns__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0, recursion_patterns__Levels_9, ((MR_Box) ((MR_Integer) 1)), &recursion_patterns__conv1_RLRec_20);
                        }
#line 170 "recursion_patterns.m"
                        if (recursion_patterns__succeeded)
#line 170 "recursion_patterns.m"
                          {
#line 170 "recursion_patterns.m"
                            recursion_patterns__RLRec_20 = ((MR_Word) recursion_patterns__conv1_RLRec_20);
#line 170 "recursion_patterns.m"
                            recursion_patterns__succeeded = MR_TRUE;
#line 170 "recursion_patterns.m"
                          }
#line 175 "recursion_patterns.m"
                        if (recursion_patterns__succeeded)
#line 171 "recursion_patterns.m"
                          {
#line 171 "recursion_patterns.m"
                            MR_Float recursion_patterns__RecProb_22;
#line 171 "recursion_patterns.m"
                            MR_Float recursion_patterns__RecCountF_23;
#line 171 "recursion_patterns.m"
                            MR_Float recursion_patterns__V_41_41;
#line 171 "recursion_patterns.m"
                            MR_Integer recursion_patterns__V_43_43;

#line 171 "recursion_patterns.m"
                            recursion_patterns__RecCost_21 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLRec_20, (MR_Integer) 0)));
#line 171 "recursion_patterns.m"
                            recursion_patterns__RecProb_22 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLRec_20, (MR_Integer) 1)));
#line 172 "recursion_patterns.m"
                            {
#line 172 "recursion_patterns.m"
                              recursion_patterns__V_41_41 = measurement_units__probability_to_float_1_f_0(recursion_patterns__RecProb_22);
                            }
#line 172 "recursion_patterns.m"
                            recursion_patterns__RecCountF_23 = (recursion_patterns__V_41_41 * recursion_patterns__TotalCalls_13);
#line 174 "recursion_patterns.m"
                            {
#line 174 "recursion_patterns.m"
                              recursion_patterns__V_43_43 = mercury__float__round_to_int_1_f_0(recursion_patterns__RecCountF_23);
                            }
#line 173 "recursion_patterns.m"
                            {
#line 173 "recursion_patterns.m"
                              recursion_patterns__RecLevel_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 173 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 0) = ((MR_Box) ((MR_Integer) 1));
#line 173 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 1) = ((MR_Box) (recursion_patterns__V_43_43));
#line 173 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 2) = MR_box_float(recursion_patterns__RecProb_22);
#line 173 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 3) = MR_box_float(recursion_patterns__RecCost_21);
#line 173 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_24, 4) = MR_box_float((MR_Float) 1.0000000000000000);
#line 173 "recursion_patterns.m"
                            }
#line 171 "recursion_patterns.m"
                          }
#line 175 "recursion_patterns.m"
                        else
#line 176 "recursion_patterns.m"
                          {
#line 176 "recursion_patterns.m"
                            MR_String recursion_patterns__Msg_25;
#line 176 "recursion_patterns.m"
                            MR_String recursion_patterns__V_110_110;
#line 176 "recursion_patterns.m"
                            MR_String recursion_patterns__V_117_117;

#line 176 "recursion_patterns.m"
                            {
#line 176 "recursion_patterns.m"
                              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &recursion_patterns_scalar_common_3[2], (MR_Integer) 1, &recursion_patterns__V_110_110);
                            }
#line 176 "recursion_patterns.m"
                            {
#line 176 "recursion_patterns.m"
                              recursion_patterns__V_117_117 = mercury__string__f_43_43_2_f_0(recursion_patterns__V_110_110, (MR_String) " not found");
                            }
#line 176 "recursion_patterns.m"
                            {
#line 176 "recursion_patterns.m"
                              recursion_patterns__Msg_25 = mercury__string__f_43_43_2_f_0((MR_String) "maximum level ", recursion_patterns__V_117_117);
                            }
#line 177 "recursion_patterns.m"
                            {
#line 177 "recursion_patterns.m"
                              mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.recursion_data_to_recursion_type\'/4", recursion_patterns__Msg_25);
#line 177 "recursion_patterns.m"
                              return;
                            }
#line 176 "recursion_patterns.m"
                          }
#line 179 "recursion_patterns.m"
                        {
#line 179 "recursion_patterns.m"
                          recursion_patterns__AvgMaxDepth_26 = mercury__float__f_slash_2_f_0(recursion_patterns__TotalCalls_13, recursion_patterns__ParentCalls_12);
                        }
#line 180 "recursion_patterns.m"
                        {
#line 180 "recursion_patterns.m"
                          recursion_patterns__AvgRecCost_27 = recursion_patterns__single_rec_average_recursion_cost_3_f_0(recursion_patterns__BaseCost_15, recursion_patterns__RecCost_21, recursion_patterns__AvgMaxDepth_26);
                        }
#line 182 "recursion_patterns.m"
                        {
#line 182 "recursion_patterns.m"
                          recursion_patterns__AnyRecCost_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 182 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[1]));
#line 182 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 1) = ((MR_Box) (recursion_patterns__recursion_data_to_recursion_type_4_p_0_1));
#line 182 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 182 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 3) = MR_box_float(recursion_patterns__BaseCost_15);
#line 182 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(0), recursion_patterns__AnyRecCost_28, 4) = MR_box_float(recursion_patterns__RecCost_21);
#line 182 "recursion_patterns.m"
                        }
#line 183 "recursion_patterns.m"
                        {
#line 183 "recursion_patterns.m"
                          MR_Word base;
#line 183 "recursion_patterns.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 183 "recursion_patterns.m"
                          *recursion_patterns__Type_8 = base;
#line 183 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__BaseLevel_19));
#line 183 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (recursion_patterns__RecLevel_24));
#line 183 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(1), base, 2) = MR_box_float(recursion_patterns__AvgMaxDepth_26);
#line 183 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(1), base, 3) = MR_box_float(recursion_patterns__AvgRecCost_27);
#line 183 "recursion_patterns.m"
                          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (recursion_patterns__AnyRecCost_28));
#line 183 "recursion_patterns.m"
                        }
#line 178 "recursion_patterns.m"
                      }
#line 185 "recursion_patterns.m"
                    else
#line 200 "recursion_patterns.m"
                      {
#line 187 "recursion_patterns.m"
                        MR_Word recursion_patterns__TypeCtorInfo_97_97;
#line 187 "recursion_patterns.m"
                        MR_Word recursion_patterns__TypeCtorInfo_98_98;
#line 187 "recursion_patterns.m"
                        MR_Integer recursion_patterns__V_52_52;
#line 187 "recursion_patterns.m"
                        MR_Word recursion_patterns__V_29_29;
#line 187 "recursion_patterns.m"
                        MR_Box recursion_patterns__conv3_V_29_29;

#line 186 "recursion_patterns.m"
                        recursion_patterns__succeeded = (recursion_patterns__Maximum_10 == (MR_Integer) 2);
#line 186 "recursion_patterns.m"
                        if (recursion_patterns__succeeded)
#line 186 "recursion_patterns.m"
                          {
#line 187 "recursion_patterns.m"
                            recursion_patterns__V_52_52 = (MR_Integer) 1;
#line 9441 "recursion_patterns.c"
                            recursion_patterns__TypeCtorInfo_97_97 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9443 "recursion_patterns.c"
                            recursion_patterns__TypeCtorInfo_98_98 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0;
#line 187 "recursion_patterns.m"
                            {
#line 187 "recursion_patterns.m"
                              recursion_patterns__succeeded = mercury__assoc_list__search_3_p_0(recursion_patterns__TypeCtorInfo_97_97, recursion_patterns__TypeCtorInfo_98_98, recursion_patterns__Levels_9, ((MR_Box) (recursion_patterns__V_52_52)), &recursion_patterns__conv3_V_29_29);
                            }
#line 187 "recursion_patterns.m"
                            if (recursion_patterns__succeeded)
#line 187 "recursion_patterns.m"
                              {
#line 187 "recursion_patterns.m"
                                recursion_patterns__V_29_29 = ((MR_Word) recursion_patterns__conv3_V_29_29);
#line 187 "recursion_patterns.m"
                                recursion_patterns__succeeded = MR_TRUE;
#line 187 "recursion_patterns.m"
                              }
#line 187 "recursion_patterns.m"
                            recursion_patterns__succeeded = !(recursion_patterns__succeeded);
#line 186 "recursion_patterns.m"
                          }
#line 200 "recursion_patterns.m"
                        if (recursion_patterns__succeeded)
#line 198 "recursion_patterns.m"
                          {
#line 198 "recursion_patterns.m"
                            MR_Word recursion_patterns__RecLevel_82;
#line 195 "recursion_patterns.m"
                            MR_Word recursion_patterns__RLRec_73;
#line 189 "recursion_patterns.m"
                            MR_Box recursion_patterns__conv4_RLRec_73;

#line 189 "recursion_patterns.m"
                            {
#line 189 "recursion_patterns.m"
                              recursion_patterns__succeeded = mercury__assoc_list__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_level_0, recursion_patterns__Levels_9, ((MR_Box) ((MR_Integer) 2)), &recursion_patterns__conv4_RLRec_73);
                            }
#line 189 "recursion_patterns.m"
                            if (recursion_patterns__succeeded)
#line 189 "recursion_patterns.m"
                              {
#line 189 "recursion_patterns.m"
                                recursion_patterns__RLRec_73 = ((MR_Word) recursion_patterns__conv4_RLRec_73);
#line 189 "recursion_patterns.m"
                                recursion_patterns__succeeded = MR_TRUE;
#line 189 "recursion_patterns.m"
                              }
#line 195 "recursion_patterns.m"
                            if (recursion_patterns__succeeded)
#line 190 "recursion_patterns.m"
                              {
#line 190 "recursion_patterns.m"
                                MR_Float recursion_patterns__V_54_54;
#line 190 "recursion_patterns.m"
                                MR_Integer recursion_patterns__V_56_56;
#line 190 "recursion_patterns.m"
                                MR_Float recursion_patterns__V_57_57;
#line 190 "recursion_patterns.m"
                                MR_Float recursion_patterns__RecCost_69 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLRec_73, (MR_Integer) 0)));
#line 190 "recursion_patterns.m"
                                MR_Float recursion_patterns__RecProb_70 = MR_unbox_float((MR_hl_field(MR_mktag(0), recursion_patterns__RLRec_73, (MR_Integer) 1)));
#line 190 "recursion_patterns.m"
                                MR_Float recursion_patterns__RecCountF_71;

#line 191 "recursion_patterns.m"
                                {
#line 191 "recursion_patterns.m"
                                  recursion_patterns__V_54_54 = measurement_units__probability_to_float_1_f_0(recursion_patterns__RecProb_70);
                                }
#line 191 "recursion_patterns.m"
                                recursion_patterns__RecCountF_71 = (recursion_patterns__V_54_54 * recursion_patterns__ParentCalls_12);
#line 193 "recursion_patterns.m"
                                {
#line 193 "recursion_patterns.m"
                                  recursion_patterns__V_56_56 = mercury__float__round_to_int_1_f_0(recursion_patterns__RecCountF_71);
                                }
#line 194 "recursion_patterns.m"
                                recursion_patterns__V_57_57 = (recursion_patterns__RecCountF_71 * ((MR_Float) 2.0000000000000000));
#line 192 "recursion_patterns.m"
                                {
#line 192 "recursion_patterns.m"
                                  recursion_patterns__RecLevel_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 192 "recursion_patterns.m"
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 0) = ((MR_Box) ((MR_Integer) 2));
#line 192 "recursion_patterns.m"
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 1) = ((MR_Box) (recursion_patterns__V_56_56));
#line 192 "recursion_patterns.m"
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 2) = MR_box_float(recursion_patterns__RecProb_70);
#line 192 "recursion_patterns.m"
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 3) = MR_box_float(recursion_patterns__RecCost_69);
#line 192 "recursion_patterns.m"
                                  MR_hl_field(MR_mktag(0), recursion_patterns__RecLevel_82, 4) = MR_box_float(recursion_patterns__V_57_57);
#line 192 "recursion_patterns.m"
                                }
#line 190 "recursion_patterns.m"
                              }
#line 195 "recursion_patterns.m"
                            else
#line 196 "recursion_patterns.m"
                              {
#line 196 "recursion_patterns.m"
                                MR_String recursion_patterns__Msg_72;
#line 196 "recursion_patterns.m"
                                MR_String recursion_patterns__V_120_120;
#line 196 "recursion_patterns.m"
                                MR_String recursion_patterns__V_127_127;

#line 196 "recursion_patterns.m"
                                {
#line 196 "recursion_patterns.m"
                                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &recursion_patterns_scalar_common_3[2], (MR_Integer) 1, &recursion_patterns__V_120_120);
                                }
#line 196 "recursion_patterns.m"
                                {
#line 196 "recursion_patterns.m"
                                  recursion_patterns__V_127_127 = mercury__string__f_43_43_2_f_0(recursion_patterns__V_120_120, (MR_String) " not found");
                                }
#line 196 "recursion_patterns.m"
                                {
#line 196 "recursion_patterns.m"
                                  recursion_patterns__Msg_72 = mercury__string__f_43_43_2_f_0((MR_String) "maximum level ", recursion_patterns__V_127_127);
                                }
#line 197 "recursion_patterns.m"
                                {
#line 197 "recursion_patterns.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "recursion_patterns", (MR_String) "predicate \140recursion_patterns.recursion_data_to_recursion_type\'/4", recursion_patterns__Msg_72);
#line 197 "recursion_patterns.m"
                                  return;
                                }
#line 196 "recursion_patterns.m"
                              }
#line 199 "recursion_patterns.m"
                            {
#line 199 "recursion_patterns.m"
                              MR_Word base;
#line 199 "recursion_patterns.m"
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 199 "recursion_patterns.m"
                              *recursion_patterns__Type_8 = base;
#line 199 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (recursion_patterns__BaseLevel_19));
#line 199 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (recursion_patterns__RecLevel_82));
#line 199 "recursion_patterns.m"
                            }
#line 198 "recursion_patterns.m"
                          }
#line 200 "recursion_patterns.m"
                        else
#line 202 "recursion_patterns.m"
                          {
#line 202 "recursion_patterns.m"
                            MR_Word recursion_patterns__LevelsReport_30;
#line 202 "recursion_patterns.m"
                            MR_Word recursion_patterns__V_66_66;

#line 201 "recursion_patterns.m"
                            {
#line 201 "recursion_patterns.m"
                              recursion_patterns__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 201 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__V_66_66, 0) = ((MR_Box) (&recursion_patterns_scalar_common_6[0]));
#line 201 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__V_66_66, 1) = ((MR_Box) (recursion_patterns__recursion_data_to_recursion_type_4_p_0_2));
#line 201 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 201 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(0), recursion_patterns__V_66_66, 3) = MR_box_float(recursion_patterns__TotalCalls_13);
#line 201 "recursion_patterns.m"
                            }
#line 201 "recursion_patterns.m"
                            {
#line 201 "recursion_patterns.m"
                              mercury__list__map_3_p_0((MR_Word) &recursion_patterns_scalar_common_1[3], (MR_Word) &report__report__type_ctor_info_recursion_level_report_0, recursion_patterns__V_66_66, recursion_patterns__Levels_9, &recursion_patterns__LevelsReport_30);
                            }
#line 203 "recursion_patterns.m"
                            {
#line 203 "recursion_patterns.m"
                              MR_Word base;
#line 203 "recursion_patterns.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 203 "recursion_patterns.m"
                              *recursion_patterns__Type_8 = base;
#line 203 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 203 "recursion_patterns.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (recursion_patterns__LevelsReport_30));
#line 203 "recursion_patterns.m"
                            }
#line 202 "recursion_patterns.m"
                          }
#line 200 "recursion_patterns.m"
                      }
#line 185 "recursion_patterns.m"
                  }
#line 169 "recursion_patterns.m"
              }
#line 167 "recursion_patterns.m"
          }
#line 205 "recursion_patterns.m"
        else
#line 206 "recursion_patterns.m"
          {
#line 206 "recursion_patterns.m"
            MR_Word recursion_patterns__TypeCtorInfo_105_105 = (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_error_0;
#line 206 "recursion_patterns.m"
            MR_Word recursion_patterns__Messages_31;
#line 206 "recursion_patterns.m"
            MR_Word recursion_patterns__V_68_68;

#line 206 "recursion_patterns.m"
            {
#line 206 "recursion_patterns.m"
              recursion_patterns__V_68_68 = mercury__set__to_sorted_list_1_f_0(recursion_patterns__TypeCtorInfo_105_105, recursion_patterns__Errors_11);
            }
#line 206 "recursion_patterns.m"
            {
#line 206 "recursion_patterns.m"
              recursion_patterns__Messages_31 = mercury__list__map_2_f_0(recursion_patterns__TypeCtorInfo_105_105, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &recursion_patterns_scalar_common_1[5], recursion_patterns__V_68_68);
            }
#line 207 "recursion_patterns.m"
            {
#line 207 "recursion_patterns.m"
              MR_Word base;
#line 207 "recursion_patterns.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "recursion_patterns.m"
              *recursion_patterns__Type_8 = base;
#line 207 "recursion_patterns.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 207 "recursion_patterns.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (recursion_patterns__Messages_31));
#line 207 "recursion_patterns.m"
            }
#line 206 "recursion_patterns.m"
          }
#line 149 "recursion_patterns.m"
      }
#line 145 "recursion_patterns.m"
  }
#line 139 "recursion_patterns.m"
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
#line 1020 "recursion_patterns.m"
  {
#line 1020 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 1020 "recursion_patterns.m"
#line 1020 "recursion_patterns.m"
    switch (MR_tag((MR_Word) recursion_patterns__HeadVar__1_1)) {
#line 1020 "recursion_patterns.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1020 "recursion_patterns.m"
      case (MR_Integer) 0:
#line 1020 "recursion_patterns.m"
        {
#line 1020 "recursion_patterns.m"
          MR_Word recursion_patterns__V_3_3;

#line 1021 "recursion_patterns.m"
          {
#line 1021 "recursion_patterns.m"
            recursion_patterns__V_3_3 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
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
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_3_3));
#line 1021 "recursion_patterns.m"
          }
#line 1020 "recursion_patterns.m"
        }
#line 1020 "recursion_patterns.m"
        break;
#line 1020 "recursion_patterns.m"
      case (MR_Integer) 1:
#line 1022 "recursion_patterns.m"
        {
#line 1022 "recursion_patterns.m"
          MR_Float recursion_patterns__Depth_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
#line 1022 "recursion_patterns.m"
          MR_Word recursion_patterns__V_10_10;
#line 1022 "recursion_patterns.m"
          MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 1022 "recursion_patterns.m"
          MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 1022 "recursion_patterns.m"
          MR_Float recursion_patterns__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 3)));
#line 1022 "recursion_patterns.m"
          MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 4)));

#line 1023 "recursion_patterns.m"
          {
#line 1023 "recursion_patterns.m"
            recursion_patterns__V_10_10 = measurements__recursion_depth_from_float_1_f_0(recursion_patterns__Depth_7);
          }
#line 1023 "recursion_patterns.m"
          {
#line 1023 "recursion_patterns.m"
            MR_Word base;
#line 1023 "recursion_patterns.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "recursion_patterns.m"
            *recursion_patterns__HeadVar__2_2 = base;
#line 1023 "recursion_patterns.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_10_10));
#line 1023 "recursion_patterns.m"
          }
#line 1022 "recursion_patterns.m"
        }
#line 1020 "recursion_patterns.m"
        break;
#line 1020 "recursion_patterns.m"
      case (MR_Integer) 2:
#line 1024 "recursion_patterns.m"
        *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1020 "recursion_patterns.m"
        break;
#line 1020 "recursion_patterns.m"
      case (MR_Integer) 3:
#line 1020 "recursion_patterns.m"
#line 1020 "recursion_patterns.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)))) {
#line 1020 "recursion_patterns.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1020 "recursion_patterns.m"
          case (MR_Integer) 0:
#line 1025 "recursion_patterns.m"
            *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1020 "recursion_patterns.m"
            break;
#line 1020 "recursion_patterns.m"
          case (MR_Integer) 1:
#line 1026 "recursion_patterns.m"
            *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1020 "recursion_patterns.m"
            break;
#line 1020 "recursion_patterns.m"
          case (MR_Integer) 2:
#line 1027 "recursion_patterns.m"
            *recursion_patterns__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1020 "recursion_patterns.m"
            break;
#line 1020 "recursion_patterns.m"
        }
#line 1020 "recursion_patterns.m"
        break;
#line 1020 "recursion_patterns.m"
    }
#line 1020 "recursion_patterns.m"
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
#line 1020 "recursion_patterns.m"
  {
#line 1020 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;

#line 1020 "recursion_patterns.m"
    if ((recursion_patterns__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1020 "recursion_patterns.m"
      {
#line 1020 "recursion_patterns.m"
        MR_Word recursion_patterns__V_3_3;

#line 1021 "recursion_patterns.m"
        {
#line 1021 "recursion_patterns.m"
          recursion_patterns__V_3_3 = measurements__recursion_depth_from_float_1_f_0((MR_Float) 0.0000000000000000);
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
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_3_3));
#line 1021 "recursion_patterns.m"
        }
#line 1020 "recursion_patterns.m"
      }
#line 1020 "recursion_patterns.m"
    else
#line 1022 "recursion_patterns.m"
      {
#line 1022 "recursion_patterns.m"
        MR_Float recursion_patterns__Depth_7 = MR_unbox_float((MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 2)));
#line 1022 "recursion_patterns.m"
        MR_Word recursion_patterns__V_10_10;
#line 1022 "recursion_patterns.m"
        MR_Word recursion_patterns__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 0)));
#line 1022 "recursion_patterns.m"
        MR_Word recursion_patterns__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 1)));
#line 1022 "recursion_patterns.m"
        MR_Float recursion_patterns__V_8_8 = MR_unbox_float((MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 3)));
#line 1022 "recursion_patterns.m"
        MR_Word recursion_patterns__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__HeadVar__1_1, (MR_Integer) 4)));

#line 1023 "recursion_patterns.m"
        {
#line 1023 "recursion_patterns.m"
          recursion_patterns__V_10_10 = measurements__recursion_depth_from_float_1_f_0(recursion_patterns__Depth_7);
        }
#line 1023 "recursion_patterns.m"
        {
#line 1023 "recursion_patterns.m"
          MR_Word base;
#line 1023 "recursion_patterns.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "recursion_patterns.m"
          *recursion_patterns__HeadVar__2_2 = base;
#line 1023 "recursion_patterns.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_10_10));
#line 1023 "recursion_patterns.m"
        }
#line 1022 "recursion_patterns.m"
      }
#line 1020 "recursion_patterns.m"
  }
#line 38 "recursion_patterns.m"
}

#line 816 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__create_recursion_types_frequency_report_2_p_0_1(
#line 816 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 816 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 816 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 816 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_3,
#line 816 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_4)
#line 816 "recursion_patterns.m"
{
#line 816 "recursion_patterns.m"
  {
#line 816 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 816 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_STATE_VARIABLE_Histogram_28;

#line 816 "recursion_patterns.m"
    {
#line 816 "recursion_patterns.m"
      recursion_patterns__rec_types_freq_build_histogram_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Integer) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), ((MR_Word) recursion_patterns__wrapper_arg_3), &recursion_patterns__conv0_STATE_VARIABLE_Histogram_28);
    }
#line 816 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_4 = ((MR_Box) (recursion_patterns__conv0_STATE_VARIABLE_Histogram_28));
#line 816 "recursion_patterns.m"
  }
#line 816 "recursion_patterns.m"
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
#line 800 "recursion_patterns.m"
  {
#line 800 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 800 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeProgRepResult_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 28)));
#line 800 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 9)));
#line 803 "recursion_patterns.m"
    MR_Word recursion_patterns__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 0)));
#line 803 "recursion_patterns.m"
    MR_String recursion_patterns__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 1)));
#line 803 "recursion_patterns.m"
    MR_String recursion_patterns__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 2)));
#line 803 "recursion_patterns.m"
    MR_String recursion_patterns__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 3)));
#line 803 "recursion_patterns.m"
    MR_Word recursion_patterns__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 4)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 5)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 6)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 7)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 8)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 10)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 11)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 12)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 13)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 14)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 15)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 16)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 17)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 18)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 19)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 20)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 21)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 22)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 23)));
#line 803 "recursion_patterns.m"
    MR_ArrayPtr recursion_patterns__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 24)));
#line 803 "recursion_patterns.m"
    MR_Word recursion_patterns__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 25)));
#line 803 "recursion_patterns.m"
    MR_Word recursion_patterns__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 26)));
#line 803 "recursion_patterns.m"
    MR_Word recursion_patterns__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__Deep_3, (MR_Integer) 27)));

#line 808 "recursion_patterns.m"
    if ((recursion_patterns__MaybeProgRepResult_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 805 "recursion_patterns.m"
      {
#line 806 "recursion_patterns.m"
        *recursion_patterns__MaybeReport_4 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_3[1]);
#line 805 "recursion_patterns.m"
      }
#line 808 "recursion_patterns.m"
    else
#line 808 "recursion_patterns.m"
      {
#line 808 "recursion_patterns.m"
        MR_Word recursion_patterns__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeProgRepResult_5, (MR_Integer) 0)));

#line 808 "recursion_patterns.m"
        if (((MR_tag((MR_Word) recursion_patterns__V_88_88)) == (MR_mktag((MR_Integer) 1))))
#line 809 "recursion_patterns.m"
          {
#line 809 "recursion_patterns.m"
            MR_String recursion_patterns__Error_6 = ((MR_String) (MR_hl_field(MR_mktag(1), recursion_patterns__V_88_88, (MR_Integer) 0)));
#line 809 "recursion_patterns.m"
            MR_String recursion_patterns__V_17_17;
#line 809 "recursion_patterns.m"
            MR_String recursion_patterns__V_19_19;

#line 811 "recursion_patterns.m"
            {
#line 811 "recursion_patterns.m"
              recursion_patterns__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "information file: ", recursion_patterns__Error_6);
            }
#line 810 "recursion_patterns.m"
            {
#line 810 "recursion_patterns.m"
              recursion_patterns__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading procedure representation ", recursion_patterns__V_19_19);
            }
#line 810 "recursion_patterns.m"
            {
#line 810 "recursion_patterns.m"
              MR_Word base;
#line 810 "recursion_patterns.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 810 "recursion_patterns.m"
              *recursion_patterns__MaybeReport_4 = base;
#line 810 "recursion_patterns.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (recursion_patterns__V_17_17));
#line 810 "recursion_patterns.m"
            }
#line 809 "recursion_patterns.m"
          }
#line 808 "recursion_patterns.m"
        else
#line 813 "recursion_patterns.m"
          {
#line 813 "recursion_patterns.m"
            MR_Word recursion_patterns__TypeCtorInfo_80_80 = (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0;
#line 813 "recursion_patterns.m"
            MR_Integer recursion_patterns__NumCliques_9;
#line 813 "recursion_patterns.m"
            MR_Word recursion_patterns__Histogram0_10;
#line 813 "recursion_patterns.m"
            MR_Word recursion_patterns__Histogram_11;
#line 813 "recursion_patterns.m"
            MR_Word recursion_patterns__V_13_13;
#line 813 "recursion_patterns.m"
            MR_Word recursion_patterns__V_14_14;
#line 813 "recursion_patterns.m"
            MR_Word recursion_patterns__V_15_15;
#line 816 "recursion_patterns.m"
            MR_Box recursion_patterns__conv1_Histogram0_10;

#line 815 "recursion_patterns.m"
            {
#line 815 "recursion_patterns.m"
              mercury__array__size_2_p_0(recursion_patterns__TypeCtorInfo_80_80, (MR_ArrayPtr) recursion_patterns__V_33_33, &recursion_patterns__NumCliques_9);
            }
#line 816 "recursion_patterns.m"
            {
#line 816 "recursion_patterns.m"
              recursion_patterns__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 816 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_13_13, 0) = ((MR_Box) (&recursion_patterns_scalar_common_5[0]));
#line 816 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_13_13, 1) = ((MR_Box) (recursion_patterns__create_recursion_types_frequency_report_2_p_0_1));
#line 816 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 816 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__V_13_13, 3) = ((MR_Box) (recursion_patterns__Deep_3));
#line 816 "recursion_patterns.m"
            }
#line 817 "recursion_patterns.m"
            {
#line 817 "recursion_patterns.m"
              recursion_patterns__V_14_14 = mercury__map__init_0_f_0((MR_Word) &report__report__type_ctor_info_recursion_type_simple_0, (MR_Word) &recursion_patterns__recursion_patterns__type_ctor_info_recursion_type_raw_freq_data_0);
            }
#line 816 "recursion_patterns.m"
            {
#line 816 "recursion_patterns.m"
              array_util__array_foldl_from_1_4_p_1(recursion_patterns__TypeCtorInfo_80_80, (MR_Word) &recursion_patterns_scalar_common_1[0], recursion_patterns__V_13_13, (MR_ArrayPtr) recursion_patterns__V_33_33, ((MR_Box) (recursion_patterns__V_14_14)), &recursion_patterns__conv1_Histogram0_10);
            }
#line 816 "recursion_patterns.m"
            recursion_patterns__Histogram0_10 = ((MR_Word) recursion_patterns__conv1_Histogram0_10);
#line 818 "recursion_patterns.m"
            {
#line 818 "recursion_patterns.m"
              recursion_patterns__finalize_histogram_4_p_0(recursion_patterns__Deep_3, recursion_patterns__NumCliques_9, recursion_patterns__Histogram0_10, &recursion_patterns__Histogram_11);
            }
#line 819 "recursion_patterns.m"
            recursion_patterns__V_15_15 = (MR_Word) recursion_patterns__Histogram_11;
#line 819 "recursion_patterns.m"
            {
#line 819 "recursion_patterns.m"
              MR_Word base;
#line 819 "recursion_patterns.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 819 "recursion_patterns.m"
              *recursion_patterns__MaybeReport_4 = base;
#line 819 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__V_15_15));
#line 819 "recursion_patterns.m"
            }
#line 813 "recursion_patterns.m"
          }
#line 808 "recursion_patterns.m"
      }
#line 800 "recursion_patterns.m"
  }
#line 31 "recursion_patterns.m"
}

#line 126 "recursion_patterns.m"
static void MR_CALL 
recursion_patterns__create_clique_recursion_costs_report_3_p_0_1(
#line 126 "recursion_patterns.m"
  MR_Box recursion_patterns__closure_arg,
#line 126 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_1,
#line 126 "recursion_patterns.m"
  MR_Box recursion_patterns__wrapper_arg_2,
#line 126 "recursion_patterns.m"
  MR_Box * recursion_patterns__wrapper_arg_3)
#line 126 "recursion_patterns.m"
{
#line 126 "recursion_patterns.m"
  {
#line 126 "recursion_patterns.m"
    MR_Box recursion_patterns__closure = recursion_patterns__closure_arg;
#line 126 "recursion_patterns.m"
    MR_Word recursion_patterns__conv0_HeadVar__4_4;

#line 126 "recursion_patterns.m"
    {
#line 126 "recursion_patterns.m"
      analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__closure, (MR_Integer) 3))), ((MR_Word) recursion_patterns__wrapper_arg_1), ((MR_Word) recursion_patterns__wrapper_arg_2), &recursion_patterns__conv0_HeadVar__4_4);
    }
#line 126 "recursion_patterns.m"
    *recursion_patterns__wrapper_arg_3 = ((MR_Box) (recursion_patterns__conv0_HeadVar__4_4));
#line 126 "recursion_patterns.m"
  }
#line 126 "recursion_patterns.m"
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
#line 74 "recursion_patterns.m"
  {
#line 74 "recursion_patterns.m"
    MR_bool recursion_patterns__succeeded;
#line 74 "recursion_patterns.m"
    MR_Word recursion_patterns__MaybeFirstPDPtr_7;
#line 74 "recursion_patterns.m"
    MR_Word recursion_patterns__OtherPDPtrs_8;
#line 74 "recursion_patterns.m"
    MR_Word recursion_patterns__ParentCallPtr_9;
#line 74 "recursion_patterns.m"
    MR_Integer recursion_patterns__ParentCalls_11;

#line 75 "recursion_patterns.m"
    {
#line 75 "recursion_patterns.m"
      analysis_utils__find_clique_first_and_other_procs_4_p_0(recursion_patterns__Deep_4, recursion_patterns__CliquePtr_5, &recursion_patterns__MaybeFirstPDPtr_7, &recursion_patterns__OtherPDPtrs_8);
    }
#line 77 "recursion_patterns.m"
    {
#line 77 "recursion_patterns.m"
      profile__deep_lookup_clique_parents_3_p_0(recursion_patterns__Deep_4, recursion_patterns__CliquePtr_5, &recursion_patterns__ParentCallPtr_9);
    }
#line 78 "recursion_patterns.m"
    {
#line 78 "recursion_patterns.m"
      recursion_patterns__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(recursion_patterns__Deep_4, recursion_patterns__ParentCallPtr_9);
    }
#line 81 "recursion_patterns.m"
    if (recursion_patterns__succeeded)
#line 79 "recursion_patterns.m"
      {
#line 79 "recursion_patterns.m"
        MR_Word recursion_patterns__ParentCall_10;
#line 79 "recursion_patterns.m"
        MR_Word recursion_patterns__V_20_20;
#line 80 "recursion_patterns.m"
        MR_Word recursion_patterns__V_25_25;
#line 80 "recursion_patterns.m"
        MR_Word recursion_patterns__V_26_26;

#line 79 "recursion_patterns.m"
        {
#line 79 "recursion_patterns.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(recursion_patterns__Deep_4, recursion_patterns__ParentCallPtr_9, &recursion_patterns__ParentCall_10);
        }
#line 80 "recursion_patterns.m"
        recursion_patterns__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ParentCall_10, (MR_Integer) 0)));
#line 80 "recursion_patterns.m"
        recursion_patterns__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ParentCall_10, (MR_Integer) 1)));
#line 80 "recursion_patterns.m"
        recursion_patterns__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ParentCall_10, (MR_Integer) 2)));
#line 80 "recursion_patterns.m"
        {
#line 80 "recursion_patterns.m"
          recursion_patterns__ParentCalls_11 = measurements__calls_1_f_0(recursion_patterns__V_20_20);
        }
#line 79 "recursion_patterns.m"
      }
#line 81 "recursion_patterns.m"
    else
#line 83 "recursion_patterns.m"
      recursion_patterns__ParentCalls_11 = (MR_Integer) 1;
#line 107 "recursion_patterns.m"
    if ((recursion_patterns__MaybeFirstPDPtr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 108 "recursion_patterns.m"
      {
#line 109 "recursion_patterns.m"
        *recursion_patterns__MaybeCliqueRecursionReport_6 = (MR_Word) MR_mkword(MR_mktag(1), &recursion_patterns_scalar_common_3[0]);
#line 108 "recursion_patterns.m"
      }
#line 107 "recursion_patterns.m"
    else
#line 86 "recursion_patterns.m"
      {
#line 86 "recursion_patterns.m"
        MR_Word recursion_patterns__FirstPDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), recursion_patterns__MaybeFirstPDPtr_7, (MR_Integer) 0)));
#line 86 "recursion_patterns.m"
        MR_Integer recursion_patterns__NumProcs_13;
#line 86 "recursion_patterns.m"
        MR_Integer recursion_patterns__V_22_22;

#line 87 "recursion_patterns.m"
        {
#line 87 "recursion_patterns.m"
          recursion_patterns__V_22_22 = mercury__list__length_1_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, recursion_patterns__OtherPDPtrs_8);
        }
#line 87 "recursion_patterns.m"
        recursion_patterns__NumProcs_13 = (recursion_patterns__V_22_22 + (MR_Integer) 1);
#line 10262 "recursion_patterns.c"
        if ((recursion_patterns__OtherPDPtrs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 10264 "recursion_patterns.c"
          {
#line 10266 "recursion_patterns.c"
            MR_Word recursion_patterns__MaybeRecursionType_14;
#line 10268 "recursion_patterns.c"
            MR_Word recursion_patterns__PDOwn_33;
#line 10270 "recursion_patterns.c"
            MR_Integer recursion_patterns__TotalCalls_34;
#line 10272 "recursion_patterns.c"
            MR_Word recursion_patterns__MaybeCoverageReport_35;

#line 118 "recursion_patterns.m"
            {
#line 118 "recursion_patterns.m"
              profile__deep_lookup_pd_own_3_p_0(recursion_patterns__Deep_4, recursion_patterns__FirstPDPtr_12, &recursion_patterns__PDOwn_33);
            }
#line 119 "recursion_patterns.m"
            {
#line 119 "recursion_patterns.m"
              recursion_patterns__TotalCalls_34 = measurements__calls_1_f_0(recursion_patterns__PDOwn_33);
            }
#line 120 "recursion_patterns.m"
            {
#line 120 "recursion_patterns.m"
              create_report__create_dynamic_procrep_coverage_report_3_p_0(recursion_patterns__Deep_4, recursion_patterns__FirstPDPtr_12, &recursion_patterns__MaybeCoverageReport_35);
            }
#line 134 "recursion_patterns.m"
            if (((MR_tag((MR_Word) recursion_patterns__MaybeCoverageReport_35)) == (MR_mktag((MR_Integer) 1))))
#line 136 "recursion_patterns.m"
              recursion_patterns__MaybeRecursionType_14 = (MR_Word) recursion_patterns__MaybeCoverageReport_35;
#line 134 "recursion_patterns.m"
            else
#line 122 "recursion_patterns.m"
              {
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__CoverageReport_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__MaybeCoverageReport_35, (MR_Integer) 0)));
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__ProcRep_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CoverageReport_36, (MR_Integer) 1)));
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__CoverageArray_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CoverageReport_36, (MR_Integer) 2)));
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__Goal_40;
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__Slots_41;
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__CallSitesMap_42;
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__Info_43;
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__RecursionData_44;
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__RecursionType_45;
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcRep_38, (MR_Integer) 1)));
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__V_48_48;
#line 122 "recursion_patterns.m"
                MR_Word recursion_patterns__V_49_49;
#line 123 "recursion_patterns.m"
                MR_Word recursion_patterns__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__CoverageReport_36, (MR_Integer) 0)));
#line 124 "recursion_patterns.m"
                MR_Word recursion_patterns__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__ProcRep_38, (MR_Integer) 0)));
#line 124 "recursion_patterns.m"
                MR_Word recursion_patterns__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 0)));
#line 124 "recursion_patterns.m"
                MR_Word recursion_patterns__V_53_53;
#line 124 "recursion_patterns.m"
                MR_Word recursion_patterns__V_54_54;
#line 124 "recursion_patterns.m"
                MR_Word recursion_patterns__V_55_55;
#line 126 "recursion_patterns.m"
                MR_Box recursion_patterns__conv1_CallSitesMap_42;

#line 124 "recursion_patterns.m"
                recursion_patterns__Goal_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 1)));
#line 124 "recursion_patterns.m"
                recursion_patterns__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 2)));
#line 124 "recursion_patterns.m"
                recursion_patterns__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 3)));
#line 124 "recursion_patterns.m"
                recursion_patterns__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__V_47_47, (MR_Integer) 4)));
#line 125 "recursion_patterns.m"
                {
#line 125 "recursion_patterns.m"
                  analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(recursion_patterns__Deep_4, recursion_patterns__FirstPDPtr_12, &recursion_patterns__Slots_41);
                }
#line 126 "recursion_patterns.m"
                {
#line 126 "recursion_patterns.m"
                  recursion_patterns__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 126 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_48_48, 0) = ((MR_Box) (&recursion_patterns_scalar_common_4[0]));
#line 126 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_48_48, 1) = ((MR_Box) (recursion_patterns__create_clique_recursion_costs_report_3_p_0_1));
#line 126 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 126 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__V_48_48, 3) = ((MR_Box) (recursion_patterns__Deep_4));
#line 126 "recursion_patterns.m"
                }
#line 127 "recursion_patterns.m"
                {
#line 127 "recursion_patterns.m"
                  recursion_patterns__V_49_49 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &recursion_patterns_scalar_common_2[0]);
                }
#line 126 "recursion_patterns.m"
                {
#line 126 "recursion_patterns.m"
                  mercury__list__foldl_4_p_0((MR_Word) &recursion_patterns_scalar_common_1[1], (MR_Word) &recursion_patterns_scalar_common_1[2], recursion_patterns__V_48_48, recursion_patterns__Slots_41, ((MR_Box) (recursion_patterns__V_49_49)), &recursion_patterns__conv1_CallSitesMap_42);
                }
#line 126 "recursion_patterns.m"
                recursion_patterns__CallSitesMap_42 = ((MR_Word) recursion_patterns__conv1_CallSitesMap_42);
#line 128 "recursion_patterns.m"
                {
#line 128 "recursion_patterns.m"
                  recursion_patterns__Info_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 128 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__Info_43, 0) = ((MR_Box) (recursion_patterns__CliquePtr_5));
#line 128 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__Info_43, 1) = ((MR_Box) (recursion_patterns__CallSitesMap_42));
#line 128 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__Info_43, 2) = ((MR_Box) (recursion_patterns__CoverageArray_39));
#line 128 "recursion_patterns.m"
                }
#line 130 "recursion_patterns.m"
                {
#line 130 "recursion_patterns.m"
                  recursion_patterns__goal_recursion_data_4_p_0(recursion_patterns__Info_43, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), recursion_patterns__Goal_40, &recursion_patterns__RecursionData_44);
                }
#line 131 "recursion_patterns.m"
                {
#line 131 "recursion_patterns.m"
                  recursion_patterns__recursion_data_to_recursion_type_4_p_0(recursion_patterns__ParentCalls_11, recursion_patterns__TotalCalls_34, recursion_patterns__RecursionData_44, &recursion_patterns__RecursionType_45);
                }
#line 133 "recursion_patterns.m"
                {
#line 133 "recursion_patterns.m"
                  recursion_patterns__MaybeRecursionType_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 133 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__MaybeRecursionType_14, 0) = ((MR_Box) (recursion_patterns__RecursionType_45));
#line 133 "recursion_patterns.m"
                }
#line 122 "recursion_patterns.m"
              }
#line 103 "recursion_patterns.m"
            if (((MR_tag((MR_Word) recursion_patterns__MaybeRecursionType_14)) == (MR_mktag((MR_Integer) 1))))
#line 105 "recursion_patterns.m"
              *recursion_patterns__MaybeCliqueRecursionReport_6 = (MR_Word) recursion_patterns__MaybeRecursionType_14;
#line 103 "recursion_patterns.m"
            else
#line 99 "recursion_patterns.m"
              {
#line 99 "recursion_patterns.m"
                MR_Word recursion_patterns__RecursionType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), recursion_patterns__MaybeRecursionType_14, (MR_Integer) 0)));
#line 99 "recursion_patterns.m"
                MR_Word recursion_patterns__CliqueRecursionReport_18;

#line 100 "recursion_patterns.m"
                {
#line 100 "recursion_patterns.m"
                  recursion_patterns__CliqueRecursionReport_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 100 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_18, 0) = ((MR_Box) (recursion_patterns__CliquePtr_5));
#line 100 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_18, 1) = ((MR_Box) (recursion_patterns__RecursionType_17));
#line 100 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_18, 2) = ((MR_Box) (recursion_patterns__NumProcs_13));
#line 100 "recursion_patterns.m"
                }
#line 102 "recursion_patterns.m"
                {
#line 102 "recursion_patterns.m"
                  MR_Word base;
#line 102 "recursion_patterns.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 102 "recursion_patterns.m"
                  *recursion_patterns__MaybeCliqueRecursionReport_6 = base;
#line 102 "recursion_patterns.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__CliqueRecursionReport_18));
#line 102 "recursion_patterns.m"
                }
#line 99 "recursion_patterns.m"
              }
#line 10447 "recursion_patterns.c"
          }
#line 10449 "recursion_patterns.c"
        else
#line 10451 "recursion_patterns.c"
          {
#line 10453 "recursion_patterns.c"
            MR_Word recursion_patterns__RecursionType_65;
#line 10455 "recursion_patterns.c"
            MR_Word recursion_patterns__CliqueRecursionReport_66;

#line 96 "recursion_patterns.m"
            {
#line 96 "recursion_patterns.m"
              recursion_patterns__RecursionType_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 96 "recursion_patterns.m"
              MR_hl_field(MR_mktag(3), recursion_patterns__RecursionType_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 96 "recursion_patterns.m"
              MR_hl_field(MR_mktag(3), recursion_patterns__RecursionType_65, 1) = ((MR_Box) (recursion_patterns__NumProcs_13));
#line 96 "recursion_patterns.m"
            }
#line 100 "recursion_patterns.m"
            {
#line 100 "recursion_patterns.m"
              recursion_patterns__CliqueRecursionReport_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 100 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_66, 0) = ((MR_Box) (recursion_patterns__CliquePtr_5));
#line 100 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_66, 1) = ((MR_Box) (recursion_patterns__RecursionType_65));
#line 100 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), recursion_patterns__CliqueRecursionReport_66, 2) = ((MR_Box) (recursion_patterns__NumProcs_13));
#line 100 "recursion_patterns.m"
            }
#line 102 "recursion_patterns.m"
            {
#line 102 "recursion_patterns.m"
              MR_Word base;
#line 102 "recursion_patterns.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 102 "recursion_patterns.m"
              *recursion_patterns__MaybeCliqueRecursionReport_6 = base;
#line 102 "recursion_patterns.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (recursion_patterns__CliqueRecursionReport_66));
#line 102 "recursion_patterns.m"
            }
#line 10492 "recursion_patterns.c"
          }
#line 86 "recursion_patterns.m"
      }
#line 74 "recursion_patterns.m"
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
