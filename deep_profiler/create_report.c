/*
** Automatically generated from `create_report.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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


/* :- module create_report. */
/* :- implementation. */

/*
INIT mercury__create_report__init
ENDINIT
*/

#include "create_report.mih"


#include "analysis_utils.mih"
#include "apply_exclusion.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "coverage.mih"
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
#include "program_representation_utils.mih"
#include "query.mih"
#include "random.mih"
#include "recursion_patterns.mih"
#include "report.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "top_procs.mih"
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




#line 90 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 93 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__maybe__pti_maybe_error_2__plain_report__type_ctor_info_var_use_and_name_0__plain_builtin__type_ctor_info_string_0;

#line 96 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0;

#line 99 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0;

#line 102 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0;

#line 105 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

#line 108 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

#line 111 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0;

#line 114 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 117 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 120 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 123 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0;

#line 126 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0;

#line 129 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0;

#line 132 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_module_active_0;

#line 135 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_active_0;

#line 138 "create_report.c"
static const MR_FA_TypeInfo_Struct2 create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

#line 141 "create_report.c"
static const MR_FA_TypeInfo_Struct2 create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

#line 144 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__plain_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

#line 147 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

#line 150 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0;

#line 153 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 156 "create_report.c"
static const MR_FA_TypeInfo_Struct2 create_report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 159 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 162 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 165 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 168 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__set_ordlist__pti_set_ordlist_1__plain_exclude__type_ctor_info_exclude_spec_0;

#line 171 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 174 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 177 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_call_site_desc_0;

#line 180 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 183 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 186 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_builtin__type_ctor_info_string_0;

#line 189 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0;

#line 192 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__report__pti_gs_field_info_2__plain_create_report__type_ctor_info_gs_field_raw_data_0__plain_unit__type_ctor_info_unit_0;

#line 195 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__report__pti_gs_field_info_2__plain_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0__plain_report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 198 "create_report.c"
static const MR_PseudoTypeInfo create_report__create_report__field_types_call_site_callee_perf_0_0[3];

#line 201 "create_report.c"
static const MR_ConstString create_report__create_report__field_names_call_site_callee_perf_0_0[3];

#line 204 "create_report.c"
static const MR_DuFunctorDesc create_report__create_report__du_functor_desc_call_site_callee_perf_0_0;

#line 207 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_stag_ordered_call_site_callee_perf_0_0[1];

#line 210 "create_report.c"
static const MR_DuPtagLayout create_report__create_report__du_ptag_ordered_call_site_callee_perf_0[1];

#line 213 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_name_ordered_call_site_callee_perf_0[1];

#line 216 "create_report.c"
static const MR_Integer create_report__create_report__functor_number_map_call_site_callee_perf_0[1];

#line 219 "create_report.c"
static const MR_PseudoTypeInfo create_report__create_report__field_types_gs_field_raw_data_0_0[3];

#line 222 "create_report.c"
static const MR_ConstString create_report__create_report__field_names_gs_field_raw_data_0_0[3];

#line 225 "create_report.c"
static const MR_DuFunctorDesc create_report__create_report__du_functor_desc_gs_field_raw_data_0_0;

#line 228 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_stag_ordered_gs_field_raw_data_0_0[1];

#line 231 "create_report.c"
static const MR_DuPtagLayout create_report__create_report__du_ptag_ordered_gs_field_raw_data_0[1];

#line 234 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_name_ordered_gs_field_raw_data_0[1];

#line 237 "create_report.c"
static const MR_Integer create_report__create_report__functor_number_map_gs_field_raw_data_0[1];

#line 240 "create_report.c"
static const MR_FA_TypeInfo_Struct2 create_report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

#line 243 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0_10001(
#line 246 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 248 "create_report.c"
  MR_Box create_report__wrapper_arg_2);

#line 251 "create_report.c"
static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0_10001(
#line 254 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 256 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 258 "create_report.c"
  MR_Box create_report__wrapper_arg_3);

#line 261 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0_10001(
#line 264 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 266 "create_report.c"
  MR_Box create_report__wrapper_arg_2);

#line 269 "create_report.c"
static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0_10001(
#line 272 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 274 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 276 "create_report.c"
  MR_Box create_report__wrapper_arg_3);

#line 279 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0_10001(
#line 282 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 284 "create_report.c"
  MR_Box create_report__wrapper_arg_2);

#line 287 "create_report.c"
static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0_10001(
#line 290 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 292 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 294 "create_report.c"
  MR_Box create_report__wrapper_arg_3);

#line 297 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0_10001(
#line 300 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 302 "create_report.c"
  MR_Box create_report__wrapper_arg_2);

#line 305 "create_report.c"
static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0_10001(
#line 308 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 310 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 312 "create_report.c"
  MR_Box create_report__wrapper_arg_3);

#line 315 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0_10001(
#line 318 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 320 "create_report.c"
  MR_Box create_report__wrapper_arg_2);

#line 323 "create_report.c"
static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0_10001(
#line 326 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 328 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 330 "create_report.c"
  MR_Box create_report__wrapper_arg_3);

#line 1527 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(
#line 1527 "create_report.m"
  MR_Word create_report__Deep_6,
#line 1527 "create_report.m"
  MR_Box create_report__Subject_7,
#line 1527 "create_report.m"
  MR_Word create_report__Own_8,
#line 1527 "create_report.m"
  MR_Word create_report__MaybeDesc_9,
#line 1527 "create_report.m"
  MR_Word * create_report__RowData_10);

#line 1469 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
#line 1469 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 1469 "create_report.m"
  MR_Word * create_report__HeadVar__2_2);

#line 668 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_p_0(
#line 668 "create_report.m"
  MR_Word create_report__Deep_5,
#line 668 "create_report.m"
  MR_Word create_report__RawData_7,
#line 668 "create_report.m"
  MR_Word * create_report__Data_8);

#line 666 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0_1(
#line 666 "create_report.m"
  MR_Box create_report__closure_arg,
#line 666 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 666 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 666 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 662 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0(
#line 662 "create_report.m"
  MR_Word create_report__Deep_5,
#line 662 "create_report.m"
  MR_Word create_report__RawMap_7,
#line 662 "create_report.m"
  MR_Word * create_report__Map_8);

#line 453 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_2(
#line 453 "create_report.m"
  MR_Box create_report__closure_arg,
#line 453 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 453 "create_report.m"
  MR_Box * create_report__wrapper_arg_2);

#line 439 "create_report.m"
static MR_bool MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_1(
#line 439 "create_report.m"
  MR_Box create_report__closure_arg);

#line 425 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(
#line 425 "create_report.m"
  MR_Word create_report__Deep_8,
#line 425 "create_report.m"
  MR_Word create_report__ProcDesc_10,
#line 425 "create_report.m"
  MR_Word create_report__PDPtr_11,
#line 425 "create_report.m"
  MR_Word * create_report__Own_12,
#line 425 "create_report.m"
  MR_Word * create_report__Desc_13,
#line 425 "create_report.m"
  MR_Word * create_report__CliquePDReport_14);

#line 935 "create_report.m"
static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_call_site_summary__935__1_2_p_0(
#line 935 "create_report.m"
  MR_Word create_report__CalleePSPtr_13,
#line 935 "create_report.m"
  MR_Word create_report__CalleePSPtrFromCall_21);

#line 439 "create_report.m"
static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__439__1_2_p_0(
#line 439 "create_report.m"
  MR_Word create_report__PSPtr_17,
#line 439 "create_report.m"
  MR_Word create_report__HeadVar__2_21);

#line 636 "create_report.m"
static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0(
#line 636 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 636 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 636 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 636 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0(
#line 636 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 636 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 635 "create_report.m"
static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0(
#line 635 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 635 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 635 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 635 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0(
#line 635 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 635 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 637 "create_report.m"
static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0(
#line 637 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 637 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 637 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 637 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0(
#line 637 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 637 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 628 "create_report.m"
static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0(
#line 628 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 628 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 628 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 628 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0(
#line 628 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 628 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 972 "create_report.m"
static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0(
#line 972 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 972 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 972 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 972 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0(
#line 972 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 972 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 1737 "create_report.m"
static MR_Word MR_CALL 
create_report__describe_clique_member_2_f_0(
#line 1737 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1737 "create_report.m"
  MR_Word create_report__PDPtr_5);

#line 1665 "create_report.m"
static MR_Word MR_CALL 
create_report__describe_call_site_2_f_0(
#line 1665 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1665 "create_report.m"
  MR_Word create_report__CSSPtr_5);

#line 1634 "create_report.m"
static MR_Word MR_CALL 
create_report__percent_from_ints_2_f_0(
#line 1634 "create_report.m"
  MR_Integer create_report__Nom_4,
#line 1634 "create_report.m"
  MR_Integer create_report__Denom_5);

#line 1623 "create_report.m"
static MR_Float MR_CALL 
create_report__int_per_call_2_f_0(
#line 1623 "create_report.m"
  MR_Integer create_report__Num_4,
#line 1623 "create_report.m"
  MR_Integer create_report__Calls_5);

#line 1513 "create_report.m"
static void MR_CALL 
create_report__psi_to_perf_row_data_3_p_0(
#line 1513 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1513 "create_report.m"
  MR_Integer create_report__PSI_5,
#line 1513 "create_report.m"
  MR_Word * create_report__RowData_6);

#line 1484 "create_report.m"
static void MR_CALL 
create_report__get_recursive_csd_cost_4_p_0(
#line 1484 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1484 "create_report.m"
  MR_Word create_report__CSDPtr_6,
#line 1484 "create_report.m"
  MR_Word create_report__RecursionType_7,
#line 1484 "create_report.m"
  MR_Word * create_report__MaybeCost_8);

#line 1447 "create_report.m"
static void MR_CALL 
create_report__call_site_dynamic_var_use_arg_9_p_0(
#line 1447 "create_report.m"
  MR_Word create_report__Deep_10,
#line 1447 "create_report.m"
  MR_Word create_report__CSDPtr_11,
#line 1447 "create_report.m"
  MR_Word create_report__RecursionType_12,
#line 1447 "create_report.m"
  MR_Float create_report__Cost_13,
#line 1447 "create_report.m"
  MR_Word create_report__VarNameTable_14,
#line 1447 "create_report.m"
  MR_Word create_report__HeadVar_15,
#line 1447 "create_report.m"
  MR_Word * create_report__MaybeUseAndName_16,
#line 1447 "create_report.m"
  MR_Integer create_report__STATE_VARIABLE_ArgNum_0_26,
#line 1447 "create_report.m"
  MR_Integer * create_report__STATE_VARIABLE_ArgNum_27);

#line 1728 "create_report.m"
static MR_Box MR_CALL 
create_report__create_clique_dump_report_3_p_0_1(
#line 1728 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1728 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1371 "create_report.m"
static void MR_CALL 
create_report__create_clique_dump_report_3_p_0(
#line 1371 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1371 "create_report.m"
  MR_Word create_report__CliquePtr_5,
#line 1371 "create_report.m"
  MR_Word * create_report__MaybeCliqueDumpInfo_6);

#line 1350 "create_report.m"
static void MR_CALL 
create_report__create_call_site_dynamic_dump_report_3_p_0(
#line 1350 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1350 "create_report.m"
  MR_Word create_report__CSDPtr_5,
#line 1350 "create_report.m"
  MR_Word * create_report__MaybeCallSiteDynamicDumpInfo_6);

#line 1334 "create_report.m"
static void MR_CALL 
create_report__create_call_site_static_dump_report_3_p_0(
#line 1334 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1334 "create_report.m"
  MR_Word create_report__CSSPtr_5,
#line 1334 "create_report.m"
  MR_Word * create_report__MaybeCallSiteStaticDumpInfo_6);

#line 1304 "create_report.m"
static void MR_CALL 
create_report__create_proc_dynamic_dump_report_3_p_0(
#line 1304 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1304 "create_report.m"
  MR_Word create_report__PDPtr_5,
#line 1304 "create_report.m"
  MR_Word * create_report__MaybeProcDynamicDumpInfo_6);

#line 1281 "create_report.m"
static void MR_CALL 
create_report__create_proc_static_dump_report_3_p_0(
#line 1281 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1281 "create_report.m"
  MR_Word create_report__PSPtr_5,
#line 1281 "create_report.m"
  MR_Word * create_report__MaybeProcStaticDumpInfo_6);

#line 1264 "create_report.m"
static void MR_CALL 
create_report__maybe_create_procrep_coverage_report_6_p_0_1(
#line 1264 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1264 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1264 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 1264 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 1264 "create_report.m"
  MR_Box create_report__wrapper_arg_4,
#line 1264 "create_report.m"
  MR_Box * create_report__wrapper_arg_5);

#line 1245 "create_report.m"
static void MR_CALL 
create_report__maybe_create_procrep_coverage_report_6_p_0(
#line 1245 "create_report.m"
  MR_Word create_report__TypeInfo_for_Callee_63,
#line 1245 "create_report.m"
  MR_Word create_report__Deep_1,
#line 1245 "create_report.m"
  MR_Word create_report__PSPtr_2,
#line 1245 "create_report.m"
  MR_Word create_report__Own_3,
#line 1245 "create_report.m"
  MR_Word create_report__HeadVar__4_4,
#line 1245 "create_report.m"
  MR_Word create_report__CallSitesMap_5,
#line 1245 "create_report.m"
  MR_Word * create_report__HeadVar__6_6);

#line 1728 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_caller_cliques_3_f_0_1(
#line 1728 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1728 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1184 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_cliques_3_f_0(
#line 1184 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1184 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1184 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 1174 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_modules_3_f_0(
#line 1174 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1174 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1174 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 1163 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_procedures_3_f_0(
#line 1163 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1163 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1163 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 1152 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_call_sites_3_f_0(
#line 1152 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1152 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1152 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 1123 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_6(
#line 1123 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1123 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1131 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_5(
#line 1131 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1131 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1139 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_4(
#line 1139 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1139 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1115 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_3(
#line 1115 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1115 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1068 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_2(
#line 1068 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1068 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1094 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_1(
#line 1094 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1094 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1056 "create_report.m"
static void MR_CALL 
create_report__create_proc_callers_report_7_p_0(
#line 1056 "create_report.m"
  MR_Word create_report__Deep_8,
#line 1056 "create_report.m"
  MR_Word create_report__PSPtr_9,
#line 1056 "create_report.m"
  MR_Word create_report__CallerGroups_10,
#line 1056 "create_report.m"
  MR_Integer create_report__BunchNum_11,
#line 1056 "create_report.m"
  MR_Integer create_report__CallersPerBunch_12,
#line 1056 "create_report.m"
  MR_Word create_report__Contour_13,
#line 1056 "create_report.m"
  MR_Word * create_report__MaybeProcCallersReport_14);

#line 1038 "create_report.m"
static void MR_CALL 
create_report__accumulate_call_site_callees_7_p_0(
#line 1038 "create_report.m"
  MR_Word create_report__Deep_8,
#line 1038 "create_report.m"
  MR_Word create_report__CalleePerf_9,
#line 1038 "create_report.m"
  MR_Word * create_report__RowData_10,
#line 1038 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Own_0_17,
#line 1038 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Own_18,
#line 1038 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Desc_0_19,
#line 1038 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Desc_20);

#line 1021 "create_report.m"
static void MR_CALL 
create_report__accumulate_csd_prof_info_7_p_0(
#line 1021 "create_report.m"
  MR_Word create_report__Deep_8,
#line 1021 "create_report.m"
  MR_Word create_report__CallerPSPtr_9,
#line 1021 "create_report.m"
  MR_Word create_report__CSDPtr_10,
#line 1021 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Own_0_17,
#line 1021 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Own_18,
#line 1021 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Desc_0_19,
#line 1021 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Desc_20);

#line 989 "create_report.m"
static void MR_CALL 
create_report__summarize_callers_11_p_0(
#line 989 "create_report.m"
  MR_Word create_report__Deep_12,
#line 989 "create_report.m"
  MR_Word create_report__CallerCSDPtrs0_13,
#line 989 "create_report.m"
  MR_Word create_report__CalleePSPtr_14,
#line 989 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_PSSeen_0_27,
#line 989 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_PSSeen_28,
#line 989 "create_report.m"
  MR_Integer create_report__STATE_VARIABLE_NumDynamic_0_29,
#line 989 "create_report.m"
  MR_Integer * create_report__STATE_VARIABLE_NumDynamic_30,
#line 989 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Own_0_31,
#line 989 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Own_32,
#line 989 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Desc_0_33,
#line 989 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Desc_34);

#line 985 "create_report.m"
static void MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0_1(
#line 985 "create_report.m"
  MR_Box create_report__closure_arg,
#line 985 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 985 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 985 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 985 "create_report.m"
  MR_Box create_report__wrapper_arg_4,
#line 985 "create_report.m"
  MR_Box * create_report__wrapper_arg_5);

#line 979 "create_report.m"
static MR_Word MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0(
#line 979 "create_report.m"
  MR_Word create_report__Deep_5,
#line 979 "create_report.m"
  MR_Word create_report__CallerPSPtr_6,
#line 979 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 935 "create_report.m"
static MR_bool MR_CALL 
create_report__create_call_site_summary_2_f_0_9(
#line 935 "create_report.m"
  MR_Box create_report__closure_arg);

#line 964 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_8(
#line 964 "create_report.m"
  MR_Box create_report__closure_arg,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_6);

#line 962 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_7(
#line 962 "create_report.m"
  MR_Box create_report__closure_arg,
#line 962 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 964 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_6(
#line 964 "create_report.m"
  MR_Box create_report__closure_arg,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_6);

#line 962 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_5(
#line 962 "create_report.m"
  MR_Box create_report__closure_arg,
#line 962 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 964 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_4(
#line 964 "create_report.m"
  MR_Box create_report__closure_arg,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_6);

#line 962 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_3(
#line 962 "create_report.m"
  MR_Box create_report__closure_arg,
#line 962 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 964 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_2(
#line 964 "create_report.m"
  MR_Box create_report__closure_arg,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_6);

#line 962 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_1(
#line 962 "create_report.m"
  MR_Box create_report__closure_arg,
#line 962 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 911 "create_report.m"
static MR_Word MR_CALL 
create_report__create_call_site_summary_2_f_0(
#line 911 "create_report.m"
  MR_Word create_report__Deep_4,
#line 911 "create_report.m"
  MR_Word create_report__CSSPtr_5);

#line 811 "create_report.m"
static void MR_CALL 
create_report__create_module_rep_report_3_p_0(
#line 811 "create_report.m"
  MR_Word create_report__Deep_4,
#line 811 "create_report.m"
  MR_String create_report__ModuleName_5,
#line 811 "create_report.m"
  MR_Word * create_report__MaybeModuleRepReport_6);

#line 782 "create_report.m"
static MR_bool MR_CALL 
create_report__is_getter_or_setter_2_4_p_0(
#line 782 "create_report.m"
  MR_Word create_report__NameChars_5,
#line 782 "create_report.m"
  MR_Word * create_report__GetterSetter_6,
#line 782 "create_report.m"
  MR_Word * create_report__DataStructNameChars_7,
#line 782 "create_report.m"
  MR_Word * create_report__FieldNameChars_8);

#line 699 "create_report.m"
static void MR_CALL 
create_report__gather_getters_setters_4_p_0(
#line 699 "create_report.m"
  MR_Word create_report__Deep_5,
#line 699 "create_report.m"
  MR_Word create_report__PSPtr_6,
#line 699 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_GSDSRawMap_0_32,
#line 699 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_GSDSRawMap_33);

#line 668 "create_report.m"
static void MR_CALL 
create_report__getter_setter_raw_data_to_info_4_p_0(
#line 668 "create_report.m"
  MR_Word create_report__Deep_5,
#line 668 "create_report.m"
  MR_Word create_report___FieldName_6,
#line 668 "create_report.m"
  MR_Word create_report__RawData_7,
#line 668 "create_report.m"
  MR_Word * create_report__Data_8);

#line 662 "create_report.m"
static void MR_CALL 
create_report__getter_setter_raw_map_to_info_map_4_p_0(
#line 662 "create_report.m"
  MR_Word create_report__Deep_5,
#line 662 "create_report.m"
  MR_Word create_report___DataStructName_6,
#line 662 "create_report.m"
  MR_Word create_report__RawMap_7,
#line 662 "create_report.m"
  MR_Word * create_report__Map_8);

#line 651 "create_report.m"
static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_2(
#line 651 "create_report.m"
  MR_Box create_report__closure_arg,
#line 651 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 651 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 651 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 649 "create_report.m"
static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_1(
#line 649 "create_report.m"
  MR_Box create_report__closure_arg,
#line 649 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 649 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 649 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 642 "create_report.m"
static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0(
#line 642 "create_report.m"
  MR_Word create_report__Deep_4,
#line 642 "create_report.m"
  MR_String create_report__ModuleName_5,
#line 642 "create_report.m"
  MR_Word * create_report__MaybeModuleGetterSettersReport_6);

#line 605 "create_report.m"
static MR_Word MR_CALL 
create_report__proc_to_active_row_data_2_f_0(
#line 605 "create_report.m"
  MR_Word create_report__Deep_4,
#line 605 "create_report.m"
  MR_Word create_report__PSPtr_5);

#line 596 "create_report.m"
static MR_Box MR_CALL 
create_report__create_module_report_3_p_0_1(
#line 596 "create_report.m"
  MR_Box create_report__closure_arg,
#line 596 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 580 "create_report.m"
static void MR_CALL 
create_report__create_module_report_3_p_0(
#line 580 "create_report.m"
  MR_Word create_report__Deep_4,
#line 580 "create_report.m"
  MR_String create_report__ModuleName_5,
#line 580 "create_report.m"
  MR_Word * create_report__MaybeModuleReport_6);

#line 555 "create_report.m"
static MR_Word MR_CALL 
create_report__module_pair_to_row_data_2_f_0(
#line 555 "create_report.m"
  MR_Word create_report__Deep_4,
#line 555 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 550 "create_report.m"
static MR_bool MR_CALL 
create_report__not_mercury_runtime_1_p_0(
#line 550 "create_report.m"
  MR_Word create_report__HeadVar__1_1);

#line 546 "create_report.m"
static MR_Box MR_CALL 
create_report__create_program_modules_report_2_p_0_2(
#line 546 "create_report.m"
  MR_Box create_report__closure_arg,
#line 546 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 545 "create_report.m"
static MR_bool MR_CALL 
create_report__create_program_modules_report_2_p_0_1(
#line 545 "create_report.m"
  MR_Box create_report__closure_arg,
#line 545 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 540 "create_report.m"
static void MR_CALL 
create_report__create_program_modules_report_2_p_0(
#line 540 "create_report.m"
  MR_Word create_report__Deep_3,
#line 540 "create_report.m"
  MR_Word * create_report__MaybeProgramModulesReport_4);

#line 1728 "create_report.m"
static MR_Box MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_2(
#line 1728 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1728 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 521 "create_report.m"
static MR_bool MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_1(
#line 521 "create_report.m"
  MR_Box create_report__closure_arg);

#line 515 "create_report.m"
static void MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0(
#line 515 "create_report.m"
  MR_Word create_report__Deep_6,
#line 515 "create_report.m"
  MR_Word create_report__CSDPtr_7,
#line 515 "create_report.m"
  MR_Word * create_report__Own_8,
#line 515 "create_report.m"
  MR_Word * create_report__Desc_9,
#line 515 "create_report.m"
  MR_Word * create_report__CalleeCliqueRowData_10);

#line 505 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_4(
#line 505 "create_report.m"
  MR_Box create_report__closure_arg,
#line 505 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_4);

#line 505 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_3(
#line 505 "create_report.m"
  MR_Box create_report__closure_arg,
#line 505 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_4);

#line 505 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_2(
#line 505 "create_report.m"
  MR_Box create_report__closure_arg,
#line 505 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_4);

#line 505 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_1(
#line 505 "create_report.m"
  MR_Box create_report__closure_arg,
#line 505 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_4);

#line 456 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0(
#line 456 "create_report.m"
  MR_Word create_report__Deep_4,
#line 456 "create_report.m"
  MR_Word create_report__Pair_5,
#line 456 "create_report.m"
  MR_Word * create_report__CliqueCallSiteReport_6);

#line 425 "create_report.m"
static void MR_CALL 
create_report__create_clique_proc_dynamic_report_7_p_0(
#line 425 "create_report.m"
  MR_Word create_report__Deep_8,
#line 425 "create_report.m"
  MR_Word create_report___CliquePtr_9,
#line 425 "create_report.m"
  MR_Word create_report__ProcDesc_10,
#line 425 "create_report.m"
  MR_Word create_report__PDPtr_11,
#line 425 "create_report.m"
  MR_Word * create_report__Own_12,
#line 425 "create_report.m"
  MR_Word * create_report__Desc_13,
#line 425 "create_report.m"
  MR_Word * create_report__CliquePDReport_14);

#line 415 "create_report.m"
static void MR_CALL 
create_report__create_clique_proc_report_4_p_0_1(
#line 415 "create_report.m"
  MR_Box create_report__closure_arg,
#line 415 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 415 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 415 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 415 "create_report.m"
  MR_Box * create_report__wrapper_arg_4);

#line 402 "create_report.m"
static void MR_CALL 
create_report__create_clique_proc_report_4_p_0(
#line 402 "create_report.m"
  MR_Word create_report__Deep_5,
#line 402 "create_report.m"
  MR_Word create_report__CliquePtr_6,
#line 402 "create_report.m"
  MR_Word create_report__HeadVar__3_3,
#line 402 "create_report.m"
  MR_Word * create_report__CliqueProcReport_9);

#line 396 "create_report.m"
static MR_bool MR_CALL 
create_report__proc_group_contains_2_p_0(
#line 396 "create_report.m"
  MR_Word create_report__EntryPDPtr_3,
#line 396 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 385 "create_report.m"
static MR_bool MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0_1(
#line 385 "create_report.m"
  MR_Box create_report__closure_arg);

#line 380 "create_report.m"
static void MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0(
#line 380 "create_report.m"
  MR_Word create_report__Deep_5,
#line 380 "create_report.m"
  MR_Word create_report__PDPtr_6,
#line 380 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_PStoPDsMap_0_12,
#line 380 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_PStoPDsMap_13);

#line 347 "create_report.m"
static MR_Word MR_CALL 
create_report__find_clique_ancestors_2_f_0(
#line 347 "create_report.m"
  MR_Word create_report__Deep_4,
#line 347 "create_report.m"
  MR_Word create_report__CliquePtr_5);

#line 299 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_callee_4_p_0(
#line 299 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 299 "create_report.m"
  MR_Word create_report__RowData_6,
#line 299 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_13,
#line 299 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_14);

#line 296 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0_1(
#line 296 "create_report.m"
  MR_Box create_report__closure_arg,
#line 296 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 296 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 296 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 291 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0(
#line 291 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 291 "create_report.m"
  MR_Word create_report__CallSiteReport_6,
#line 291 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_11,
#line 291 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_12);

#line 288 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0_1(
#line 288 "create_report.m"
  MR_Box create_report__closure_arg,
#line 288 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 288 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 288 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 281 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0(
#line 281 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 281 "create_report.m"
  MR_Word create_report__CliquePDReport_6,
#line 281 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_10,
#line 281 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_11);

#line 278 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_2(
#line 278 "create_report.m"
  MR_Box create_report__closure_arg,
#line 278 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 278 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 278 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 288 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_1(
#line 288 "create_report.m"
  MR_Box create_report__closure_arg,
#line 288 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 288 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 288 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 270 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0(
#line 270 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 270 "create_report.m"
  MR_Word create_report__CliqueProcReport_6,
#line 270 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_11,
#line 270 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_12);

#line 258 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_4_p_0_1(
#line 258 "create_report.m"
  MR_Box create_report__closure_arg,
#line 258 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 258 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 258 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 253 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_4_p_0(
#line 253 "create_report.m"
  MR_Word create_report__Deep_5,
#line 253 "create_report.m"
  MR_Integer create_report__Percent_6,
#line 253 "create_report.m"
  MR_Word create_report__CurrentReport_7,
#line 253 "create_report.m"
  MR_Word * create_report__SelectedReport_8);

#line 232 "create_report.m"
static void MR_CALL 
create_report__create_root_report_3_p_0(
#line 232 "create_report.m"
  MR_Word create_report__Deep_4,
#line 232 "create_report.m"
  MR_Word create_report__MaybePercent_5,
#line 232 "create_report.m"
  MR_Word * create_report__MaybeReport_6);

#line 341 "create_report.m"
static void MR_CALL 
create_report__create_clique_report_3_p_0_3(
#line 341 "create_report.m"
  MR_Box create_report__closure_arg,
#line 341 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 341 "create_report.m"
  MR_Box * create_report__wrapper_arg_2);

#line 335 "create_report.m"
static MR_bool MR_CALL 
create_report__create_clique_report_3_p_0_2(
#line 335 "create_report.m"
  MR_Box create_report__closure_arg,
#line 335 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 328 "create_report.m"
static void MR_CALL 
create_report__create_clique_report_3_p_0_1(
#line 328 "create_report.m"
  MR_Box create_report__closure_arg,
#line 328 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 328 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 328 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 871 "create_report.m"
static void MR_CALL 
create_report__create_top_procs_report_6_p_0_1(
#line 871 "create_report.m"
  MR_Box create_report__closure_arg,
#line 871 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 871 "create_report.m"
  MR_Box * create_report__wrapper_arg_2);

#line 1231 "create_report.m"
static void MR_CALL 
create_report__create_dynamic_procrep_coverage_report_3_p_0_1(
#line 1231 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1231 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1231 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 1231 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 1209 "create_report.m"
static void MR_CALL 
create_report__create_static_procrep_coverage_report_3_p_0_1(
#line 1209 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1209 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1209 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 1209 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 892 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_report_3_p_0_1(
#line 892 "create_report.m"
  MR_Box create_report__closure_arg,
#line 892 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1416 "create_report.m"
static void MR_CALL 
create_report__create_call_site_dynamic_var_use_report_3_p_0_1(
#line 1416 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1416 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1416 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 1416 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 1416 "create_report.m"
  MR_Box * create_report__wrapper_arg_4);


static /* final */ const MR_Box create_report_scalar_common_1[13][2];

static /* final */ const MR_Box create_report_scalar_common_2[21][3];

static /* final */ const MR_Box create_report_scalar_common_3[1][12];

static /* final */ const MR_Box create_report_scalar_common_4[6][6];

static /* final */ const MR_Box create_report_scalar_common_5[10][1];

static /* final */ const MR_Box create_report_scalar_common_6[17][7];

static /* final */ const MR_Box create_report_scalar_common_7[5][5];

static /* final */ const MR_Box create_report_scalar_common_8[3][10];

static /* final */ const MR_Box create_report_scalar_common_9[2][8];

static /* final */ const MR_Box create_report_scalar_common_10[1][4];




static /* final */ const MR_Box create_report_scalar_common_1[13][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_proc_desc_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_clique_desc_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_module_active_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_module_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_proc_active_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_call_site_desc_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_2[21][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_var_use_and_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&create_report_scalar_common_1[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&create_report_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[0]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_module_data_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&report__report__type_ctor_info_gs_field_info_2)),
    ((MR_Box) (&create_report__create_report__type_ctor_info_gs_field_raw_data_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_field_name_0)),
    ((MR_Box) (&create_report_scalar_common_2[7]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_data_struct_name_0)),
    ((MR_Box) (&create_report_scalar_common_2[8]))
  },
  /* row 10 */
  {
    ((MR_Box) (&report__report__type_ctor_info_gs_field_info_2)),
    ((MR_Box) (&create_report_scalar_common_1[3])),
    ((MR_Box) (&create_report_scalar_common_1[9]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_field_name_0)),
    ((MR_Box) (&create_report_scalar_common_2[10]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[10]))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[10]))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&create_report_scalar_common_1[10]))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[10]))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&create_report_scalar_common_10[0])),
    ((MR_Box) (create_report__create_program_modules_report_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&create_report_scalar_common_7[4])),
    ((MR_Box) (create_report__create_proc_callers_report_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&create_report_scalar_common_9[1])),
    ((MR_Box) (create_report__maybe_create_procrep_coverage_report_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_3[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&report__report__type_ctor_info_recursion_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0)),
    ((MR_Box) (&create_report__maybe__pti_maybe_error_2__plain_report__type_ctor_info_var_use_and_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_4[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&report__report__type_ctor_info_call_site_perf_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&report__report__type_ctor_info_proc_desc_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_module_active_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_active_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&report__report__type_ctor_info_clique_call_site_report_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_5[10][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "invalid proc_static index"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "Information about module representations is not available.\n"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "No coverage information available"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "invalid proc_dynamic index"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "invalid call_site_static index"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "invalid call_site_dynamic index"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "invalid clique_ptr"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "get_recursive_csd_cost called for non-recursive clique"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "get_recursive_csd_cost: unhandled recursion type"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box create_report_scalar_common_6[17][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&report__report__type_ctor_info_clique_proc_report_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&report__report__type_ctor_info_clique_proc_report_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&report__report__type_ctor_info_clique_call_site_report_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&report__report__type_ctor_info_clique_proc_dynamic_report_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__plain_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__plain_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&report__report__type_ctor_info_data_struct_name_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__create_report__type_ctor_info_call_site_callee_perf_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&create_report__set_ordlist__pti_set_ordlist_1__plain_exclude__type_ctor_info_exclude_spec_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_call_site_desc_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0))
  },
  /* row 16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&report__report__type_ctor_info_field_name_0)),
    ((MR_Box) (&create_report__report__pti_gs_field_info_2__plain_create_report__type_ctor_info_gs_field_raw_data_0__plain_unit__type_ctor_info_unit_0)),
    ((MR_Box) (&create_report__report__pti_gs_field_info_2__plain_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0__plain_report__ti_perf_row_data_1unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_7[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_8[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&report__report__type_ctor_info_proc_desc_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&report__report__type_ctor_info_clique_proc_dynamic_report_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&create_report__create_report__type_ctor_info_call_site_callee_perf_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_9[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_10[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0))
  },
};



#include "profile.mh"
#include "profile.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 2210 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2219 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__maybe__pti_maybe_error_2__plain_report__type_ctor_info_var_use_and_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_var_use_and_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2228 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 2236 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &create_report__analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 2245 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

#line 2254 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_TypeInfo) &analysis_utils__analysis_utils__type_ctor_info_callee_0
  }
};

#line 2262 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &create_report__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
  }
};

#line 2271 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 2279 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 2287 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &create_report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 2296 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &create_report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 2305 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 2313 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_clique_desc_0
  }
};

#line 2321 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_module_data_0
  }
};

#line 2330 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_module_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_module_active_0
  }
};

#line 2338 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_active_0
  }
};

#line 2346 "create_report.c"
static const MR_FA_TypeInfo_Struct2 create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_TypeInfo) &create_report__create_report__type_ctor_info_gs_field_raw_data_0,
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 2355 "create_report.c"
static const MR_FA_TypeInfo_Struct2 create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_TypeInfo) &create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
  }
};

#line 2364 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__plain_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_data_struct_name_0,
    (MR_PseudoTypeInfo) &create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
  }
};

#line 2373 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_PseudoTypeInfo) &create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
  }
};

#line 2382 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

#line 2390 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 2398 "create_report.c"
static const MR_FA_TypeInfo_Struct2 create_report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_TypeInfo) &create_report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
    (MR_TypeInfo) &create_report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 2407 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_PseudoTypeInfo) &create_report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 2416 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2424 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2433 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__set_ordlist__pti_set_ordlist_1__plain_exclude__type_ctor_info_exclude_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &exclude__exclude__type_ctor_info_exclude_spec_0
  }
};

#line 2441 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2450 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
    (MR_PseudoTypeInfo) &create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2459 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_call_site_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_call_site_desc_0
  }
};

#line 2467 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
    (MR_PseudoTypeInfo) &create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2476 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2485 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_builtin__type_ctor_info_string_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2493 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &coverage__coverage__type_ctor_info_coverage_point_0
  }
};

#line 2502 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__report__pti_gs_field_info_2__plain_create_report__type_ctor_info_gs_field_raw_data_0__plain_unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_PseudoTypeInfo) &create_report__create_report__type_ctor_info_gs_field_raw_data_0,
    (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 2511 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__report__pti_gs_field_info_2__plain_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0__plain_report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_PseudoTypeInfo) &create_report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
    (MR_PseudoTypeInfo) &create_report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

#line 2520 "create_report.c"
static const MR_PseudoTypeInfo create_report__create_report__field_types_call_site_callee_perf_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
};

#line 2527 "create_report.c"
static const MR_ConstString create_report__create_report__field_names_call_site_callee_perf_0_0[3] = {
  (MR_String) "cscpi_callee",
  (MR_String) "cscpi_own_prof_info",
  (MR_String) "cscpi_inherit_prof_info"
};

#line 2534 "create_report.c"
static const MR_DuFunctorDesc create_report__create_report__du_functor_desc_call_site_callee_perf_0_0 = {
  (MR_String) "call_site_callee_perf",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  create_report__create_report__field_types_call_site_callee_perf_0_0,
  create_report__create_report__field_names_call_site_callee_perf_0_0,
  NULL,
  NULL
};

#line 2549 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_stag_ordered_call_site_callee_perf_0_0[1] = {
  &create_report__create_report__du_functor_desc_call_site_callee_perf_0_0
};

#line 2554 "create_report.c"
static const MR_DuPtagLayout create_report__create_report__du_ptag_ordered_call_site_callee_perf_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    create_report__create_report__du_stag_ordered_call_site_callee_perf_0_0
  }
};

#line 2563 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_name_ordered_call_site_callee_perf_0[1] = {
  &create_report__create_report__du_functor_desc_call_site_callee_perf_0_0
};

#line 2568 "create_report.c"
static const MR_Integer create_report__create_report__functor_number_map_call_site_callee_perf_0[1] = {
  (MR_Integer) 0
};

#line 2573 "create_report.c"
const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_call_site_callee_perf_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (create_report____Unify____call_site_callee_perf_0_0_10001)),
  ((MR_Box) (create_report____Compare____call_site_callee_perf_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "call_site_callee_perf",
  {
    create_report__create_report__du_name_ordered_call_site_callee_perf_0
  },
  {
    create_report__create_report__du_ptag_ordered_call_site_callee_perf_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  create_report__create_report__functor_number_map_call_site_callee_perf_0
};

#line 2594 "create_report.c"
static const MR_PseudoTypeInfo create_report__create_report__field_types_gs_field_raw_data_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
};

#line 2601 "create_report.c"
static const MR_ConstString create_report__create_report__field_names_gs_field_raw_data_0_0[3] = {
  (MR_String) "gs_raw_proc",
  (MR_String) "gs_raw_own",
  (MR_String) "gs_raw_desc"
};

#line 2608 "create_report.c"
static const MR_DuFunctorDesc create_report__create_report__du_functor_desc_gs_field_raw_data_0_0 = {
  (MR_String) "gs_field_raw_data",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  create_report__create_report__field_types_gs_field_raw_data_0_0,
  create_report__create_report__field_names_gs_field_raw_data_0_0,
  NULL,
  NULL
};

#line 2623 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_stag_ordered_gs_field_raw_data_0_0[1] = {
  &create_report__create_report__du_functor_desc_gs_field_raw_data_0_0
};

#line 2628 "create_report.c"
static const MR_DuPtagLayout create_report__create_report__du_ptag_ordered_gs_field_raw_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    create_report__create_report__du_stag_ordered_gs_field_raw_data_0_0
  }
};

#line 2637 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_name_ordered_gs_field_raw_data_0[1] = {
  &create_report__create_report__du_functor_desc_gs_field_raw_data_0_0
};

#line 2642 "create_report.c"
static const MR_Integer create_report__create_report__functor_number_map_gs_field_raw_data_0[1] = {
  (MR_Integer) 0
};

#line 2647 "create_report.c"
const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_gs_field_raw_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (create_report____Unify____gs_field_raw_data_0_0_10001)),
  ((MR_Box) (create_report____Compare____gs_field_raw_data_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "gs_field_raw_data",
  {
    create_report__create_report__du_name_ordered_gs_field_raw_data_0
  },
  {
    create_report__create_report__du_ptag_ordered_gs_field_raw_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  create_report__create_report__functor_number_map_gs_field_raw_data_0
};

#line 2668 "create_report.c"
static const MR_FA_TypeInfo_Struct2 create_report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_data_struct_name_0,
    (MR_TypeInfo) &create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
  }
};

#line 2677 "create_report.c"
const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_raw_gs_ds_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (create_report____Unify____raw_gs_ds_map_0_0_10001)),
  ((MR_Box) (create_report____Compare____raw_gs_ds_map_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "raw_gs_ds_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &create_report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2698 "create_report.c"
const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_raw_gs_field_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (create_report____Unify____raw_gs_field_info_0_0_10001)),
  ((MR_Box) (create_report____Compare____raw_gs_field_info_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "raw_gs_field_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2719 "create_report.c"
const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_raw_gs_field_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (create_report____Unify____raw_gs_field_map_0_0_10001)),
  ((MR_Box) (create_report____Compare____raw_gs_field_map_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "raw_gs_field_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2740 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0_10001(
#line 2743 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 2745 "create_report.c"
  MR_Box create_report__wrapper_arg_2)
#line 2747 "create_report.c"
{
#line 2749 "create_report.c"
  {
#line 2751 "create_report.c"
    MR_bool create_report__succeeded;

#line 2754 "create_report.c"
    {
#line 2756 "create_report.c"
      create_report__succeeded = create_report____Unify____call_site_callee_perf_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
#line 2759 "create_report.c"
    return create_report__succeeded;
#line 2761 "create_report.c"
  }
#line 2763 "create_report.c"
}

#line 2766 "create_report.c"
static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0_10001(
#line 2769 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 2771 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 2773 "create_report.c"
  MR_Box create_report__wrapper_arg_3)
#line 2775 "create_report.c"
{
#line 2777 "create_report.c"
  {
#line 2779 "create_report.c"
    MR_Word create_report__conv0_HeadVar__1_1;

#line 2782 "create_report.c"
    {
#line 2784 "create_report.c"
      create_report____Compare____call_site_callee_perf_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
#line 2787 "create_report.c"
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
#line 2789 "create_report.c"
  }
#line 2791 "create_report.c"
}

#line 2794 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0_10001(
#line 2797 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 2799 "create_report.c"
  MR_Box create_report__wrapper_arg_2)
#line 2801 "create_report.c"
{
#line 2803 "create_report.c"
  {
#line 2805 "create_report.c"
    MR_bool create_report__succeeded;

#line 2808 "create_report.c"
    {
#line 2810 "create_report.c"
      create_report__succeeded = create_report____Unify____gs_field_raw_data_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
#line 2813 "create_report.c"
    return create_report__succeeded;
#line 2815 "create_report.c"
  }
#line 2817 "create_report.c"
}

#line 2820 "create_report.c"
static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0_10001(
#line 2823 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 2825 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 2827 "create_report.c"
  MR_Box create_report__wrapper_arg_3)
#line 2829 "create_report.c"
{
#line 2831 "create_report.c"
  {
#line 2833 "create_report.c"
    MR_Word create_report__conv0_HeadVar__1_1;

#line 2836 "create_report.c"
    {
#line 2838 "create_report.c"
      create_report____Compare____gs_field_raw_data_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
#line 2841 "create_report.c"
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
#line 2843 "create_report.c"
  }
#line 2845 "create_report.c"
}

#line 2848 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0_10001(
#line 2851 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 2853 "create_report.c"
  MR_Box create_report__wrapper_arg_2)
#line 2855 "create_report.c"
{
#line 2857 "create_report.c"
  {
#line 2859 "create_report.c"
    MR_bool create_report__succeeded;

#line 2862 "create_report.c"
    {
#line 2864 "create_report.c"
      create_report__succeeded = create_report____Unify____raw_gs_ds_map_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
#line 2867 "create_report.c"
    return create_report__succeeded;
#line 2869 "create_report.c"
  }
#line 2871 "create_report.c"
}

#line 2874 "create_report.c"
static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0_10001(
#line 2877 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 2879 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 2881 "create_report.c"
  MR_Box create_report__wrapper_arg_3)
#line 2883 "create_report.c"
{
#line 2885 "create_report.c"
  {
#line 2887 "create_report.c"
    MR_Word create_report__conv0_HeadVar__1_1;

#line 2890 "create_report.c"
    {
#line 2892 "create_report.c"
      create_report____Compare____raw_gs_ds_map_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
#line 2895 "create_report.c"
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
#line 2897 "create_report.c"
  }
#line 2899 "create_report.c"
}

#line 2902 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0_10001(
#line 2905 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 2907 "create_report.c"
  MR_Box create_report__wrapper_arg_2)
#line 2909 "create_report.c"
{
#line 2911 "create_report.c"
  {
#line 2913 "create_report.c"
    MR_bool create_report__succeeded;

#line 2916 "create_report.c"
    {
#line 2918 "create_report.c"
      create_report__succeeded = create_report____Unify____raw_gs_field_info_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
#line 2921 "create_report.c"
    return create_report__succeeded;
#line 2923 "create_report.c"
  }
#line 2925 "create_report.c"
}

#line 2928 "create_report.c"
static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0_10001(
#line 2931 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 2933 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 2935 "create_report.c"
  MR_Box create_report__wrapper_arg_3)
#line 2937 "create_report.c"
{
#line 2939 "create_report.c"
  {
#line 2941 "create_report.c"
    MR_Word create_report__conv0_HeadVar__1_1;

#line 2944 "create_report.c"
    {
#line 2946 "create_report.c"
      create_report____Compare____raw_gs_field_info_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
#line 2949 "create_report.c"
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
#line 2951 "create_report.c"
  }
#line 2953 "create_report.c"
}

#line 2956 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0_10001(
#line 2959 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 2961 "create_report.c"
  MR_Box create_report__wrapper_arg_2)
#line 2963 "create_report.c"
{
#line 2965 "create_report.c"
  {
#line 2967 "create_report.c"
    MR_bool create_report__succeeded;

#line 2970 "create_report.c"
    {
#line 2972 "create_report.c"
      create_report__succeeded = create_report____Unify____raw_gs_field_map_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
#line 2975 "create_report.c"
    return create_report__succeeded;
#line 2977 "create_report.c"
  }
#line 2979 "create_report.c"
}

#line 2982 "create_report.c"
static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0_10001(
#line 2985 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 2987 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 2989 "create_report.c"
  MR_Box create_report__wrapper_arg_3)
#line 2991 "create_report.c"
{
#line 2993 "create_report.c"
  {
#line 2995 "create_report.c"
    MR_Word create_report__conv0_HeadVar__1_1;

#line 2998 "create_report.c"
    {
#line 3000 "create_report.c"
      create_report____Compare____raw_gs_field_map_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
#line 3003 "create_report.c"
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
#line 3005 "create_report.c"
  }
#line 3007 "create_report.c"
}

#line 1527 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(
#line 1527 "create_report.m"
  MR_Word create_report__Deep_6,
#line 1527 "create_report.m"
  MR_Box create_report__Subject_7,
#line 1527 "create_report.m"
  MR_Word create_report__Own_8,
#line 1527 "create_report.m"
  MR_Word create_report__MaybeDesc_9,
#line 1527 "create_report.m"
  MR_Word * create_report__RowData_10)
#line 1527 "create_report.m"
{
#line 1532 "create_report.m"
  {
#line 1532 "create_report.m"
    MR_bool create_report__succeeded;
#line 1532 "create_report.m"
    MR_Word create_report__ProfileStats_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 0)));
#line 1532 "create_report.m"
    MR_Integer create_report__TicksPerSec_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 5)));
#line 1532 "create_report.m"
    MR_Integer create_report__WordSize_13;
#line 1532 "create_report.m"
    MR_Word create_report__Root_14;
#line 1532 "create_report.m"
    MR_Integer create_report__RootQuanta_15;
#line 1532 "create_report.m"
    MR_Integer create_report__RootCallseqs_16;
#line 1532 "create_report.m"
    MR_Integer create_report__RootAllocs_17;
#line 1532 "create_report.m"
    MR_Integer create_report__RootWords_18;
#line 1532 "create_report.m"
    MR_Integer create_report__Calls_19;
#line 1532 "create_report.m"
    MR_Integer create_report__Exits_20;
#line 1532 "create_report.m"
    MR_Integer create_report__Fails_21;
#line 1532 "create_report.m"
    MR_Integer create_report__Redos_22;
#line 1532 "create_report.m"
    MR_Integer create_report__Excps_23;
#line 1532 "create_report.m"
    MR_Integer create_report__SelfTicks_24;
#line 1532 "create_report.m"
    MR_Word create_report__SelfTime_25;
#line 1532 "create_report.m"
    MR_Word create_report__SelfTimePercent_26;
#line 1532 "create_report.m"
    MR_Word create_report__SelfTimePerCall_27;
#line 1532 "create_report.m"
    MR_Integer create_report__SelfCallseqs_28;
#line 1532 "create_report.m"
    MR_Word create_report__SelfCallseqsPercent_29;
#line 1532 "create_report.m"
    MR_Float create_report__SelfCallseqsPerCall_30;
#line 1532 "create_report.m"
    MR_Integer create_report__SelfAllocs_31;
#line 1532 "create_report.m"
    MR_Word create_report__SelfAllocsPercent_32;
#line 1532 "create_report.m"
    MR_Float create_report__SelfAllocsPerCall_33;
#line 1532 "create_report.m"
    MR_Integer create_report__SelfWords_34;
#line 1532 "create_report.m"
    MR_Word create_report__SelfMemory_35;
#line 1532 "create_report.m"
    MR_Word create_report__SelfMemoryPercent_36;
#line 1532 "create_report.m"
    MR_Word create_report__SelfMemoryPerCall_37;
#line 1532 "create_report.m"
    MR_Word create_report__SelfPerf_38;
#line 1532 "create_report.m"
    MR_Word create_report__MaybeTotalPerf_39;
#line 1532 "create_report.m"
    MR_Word create_report__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 9)));
#line 1534 "create_report.m"
    MR_String create_report__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 1)));
#line 1534 "create_report.m"
    MR_String create_report__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 2)));
#line 1534 "create_report.m"
    MR_String create_report__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 3)));
#line 1534 "create_report.m"
    MR_Word create_report__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 4)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 5)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 6)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 7)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 8)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 9)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_71_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 10)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_72_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 11)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_73_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 12)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_74_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 13)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 14)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_76_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 15)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_77_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 16)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_78_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 17)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_79_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 18)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_80_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 19)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_81_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 20)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_82_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 21)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_83_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 22)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_84_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 23)));
#line 1534 "create_report.m"
    MR_ArrayPtr create_report__V_85_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 24)));
#line 1534 "create_report.m"
    MR_Word create_report__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 25)));
#line 1534 "create_report.m"
    MR_Word create_report__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 26)));
#line 1534 "create_report.m"
    MR_Word create_report__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 27)));
#line 1534 "create_report.m"
    MR_Word create_report__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 28)));
#line 1535 "create_report.m"
    MR_String create_report__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 0)));
#line 1535 "create_report.m"
    MR_Integer create_report__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 1)));
#line 1535 "create_report.m"
    MR_Integer create_report__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 2)));
#line 1535 "create_report.m"
    MR_Integer create_report__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 3)));
#line 1535 "create_report.m"
    MR_Integer create_report__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 4)));
#line 1535 "create_report.m"
    MR_Integer create_report__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 6)));
#line 1535 "create_report.m"
    MR_Integer create_report__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 7)));
#line 1535 "create_report.m"
    MR_Integer create_report__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 8)));
#line 1536 "create_report.m"
    MR_Word create_report__V_108_108;
#line 1536 "create_report.m"
    MR_Word create_report__V_110_110;

#line 1536 "create_report.m"
    create_report__WordSize_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__V_98_98, (MR_Integer) 0)));
#line 1536 "create_report.m"
    create_report__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_98_98, (MR_Integer) 1)));
#line 1536 "create_report.m"
    create_report__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_98_98, (MR_Integer) 3)));
#line 1538 "create_report.m"
    {
#line 1538 "create_report.m"
      create_report__Root_14 = profile__root_total_info_1_f_0(create_report__Deep_6);
    }
#line 1539 "create_report.m"
    {
#line 1539 "create_report.m"
      create_report__RootQuanta_15 = measurements__inherit_quanta_1_f_0(create_report__Root_14);
    }
#line 1540 "create_report.m"
    {
#line 1540 "create_report.m"
      create_report__RootCallseqs_16 = measurements__inherit_callseqs_1_f_0(create_report__Root_14);
    }
#line 1541 "create_report.m"
    {
#line 1541 "create_report.m"
      create_report__RootAllocs_17 = measurements__inherit_allocs_1_f_0(create_report__Root_14);
    }
#line 1542 "create_report.m"
    {
#line 1542 "create_report.m"
      create_report__RootWords_18 = measurements__inherit_words_1_f_0(create_report__Root_14);
    }
#line 1545 "create_report.m"
    {
#line 1545 "create_report.m"
      create_report__Calls_19 = measurements__calls_1_f_0(create_report__Own_8);
    }
#line 1546 "create_report.m"
    {
#line 1546 "create_report.m"
      create_report__Exits_20 = measurements__exits_1_f_0(create_report__Own_8);
    }
#line 1547 "create_report.m"
    {
#line 1547 "create_report.m"
      create_report__Fails_21 = measurements__fails_1_f_0(create_report__Own_8);
    }
#line 1548 "create_report.m"
    {
#line 1548 "create_report.m"
      create_report__Redos_22 = measurements__redos_1_f_0(create_report__Own_8);
    }
#line 1549 "create_report.m"
    {
#line 1549 "create_report.m"
      create_report__Excps_23 = measurements__excps_1_f_0(create_report__Own_8);
    }
#line 1552 "create_report.m"
    {
#line 1552 "create_report.m"
      create_report__SelfTicks_24 = measurements__quanta_1_f_0(create_report__Own_8);
    }
#line 1553 "create_report.m"
    {
#line 1553 "create_report.m"
      create_report__SelfTime_25 = measurement_units__ticks_to_time_2_f_0(create_report__SelfTicks_24, create_report__TicksPerSec_12);
    }
#line 1554 "create_report.m"
    {
#line 1554 "create_report.m"
      create_report__SelfTimePercent_26 = create_report__percent_from_ints_2_f_0(create_report__SelfTicks_24, create_report__RootQuanta_15);
    }
#line 1555 "create_report.m"
    {
#line 1555 "create_report.m"
      create_report__SelfTimePerCall_27 = measurement_units__time_percall_2_f_0(create_report__SelfTime_25, create_report__Calls_19);
    }
#line 1558 "create_report.m"
    {
#line 1558 "create_report.m"
      create_report__SelfCallseqs_28 = measurements__callseqs_1_f_0(create_report__Own_8);
    }
#line 1559 "create_report.m"
    {
#line 1559 "create_report.m"
      create_report__SelfCallseqsPercent_29 = create_report__percent_from_ints_2_f_0(create_report__SelfCallseqs_28, create_report__RootCallseqs_16);
    }
#line 1560 "create_report.m"
    {
#line 1560 "create_report.m"
      create_report__SelfCallseqsPerCall_30 = create_report__int_per_call_2_f_0(create_report__SelfCallseqs_28, create_report__Calls_19);
    }
#line 1563 "create_report.m"
    {
#line 1563 "create_report.m"
      create_report__SelfAllocs_31 = measurements__allocs_1_f_0(create_report__Own_8);
    }
#line 1564 "create_report.m"
    {
#line 1564 "create_report.m"
      create_report__SelfAllocsPercent_32 = create_report__percent_from_ints_2_f_0(create_report__SelfAllocs_31, create_report__RootAllocs_17);
    }
#line 1565 "create_report.m"
    {
#line 1565 "create_report.m"
      create_report__SelfAllocsPerCall_33 = create_report__int_per_call_2_f_0(create_report__SelfAllocs_31, create_report__Calls_19);
    }
#line 1568 "create_report.m"
    {
#line 1568 "create_report.m"
      create_report__SelfWords_34 = measurements__words_1_f_0(create_report__Own_8);
    }
#line 1569 "create_report.m"
    {
#line 1569 "create_report.m"
      create_report__SelfMemory_35 = measurement_units__memory_words_2_f_0(create_report__SelfWords_34, create_report__WordSize_13);
    }
#line 1570 "create_report.m"
    {
#line 1570 "create_report.m"
      create_report__SelfMemoryPercent_36 = create_report__percent_from_ints_2_f_0(create_report__SelfWords_34, create_report__RootWords_18);
    }
#line 1571 "create_report.m"
    {
#line 1571 "create_report.m"
      create_report__SelfMemoryPerCall_37 = measurement_units__f_slash_2_f_0(create_report__SelfMemory_35, create_report__Calls_19);
    }
#line 1573 "create_report.m"
    {
#line 1573 "create_report.m"
      create_report__SelfPerf_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 1573 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 0) = ((MR_Box) (create_report__SelfTicks_24));
#line 1573 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 1) = ((MR_Box) (create_report__SelfTime_25));
#line 1573 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 2) = ((MR_Box) (create_report__SelfTimePercent_26));
#line 1573 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 3) = ((MR_Box) (create_report__SelfTimePerCall_27));
#line 1573 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 4) = ((MR_Box) (create_report__SelfCallseqs_28));
#line 1573 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 5) = ((MR_Box) (create_report__SelfCallseqsPercent_29));
#line 1573 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 6) = MR_box_float(create_report__SelfCallseqsPerCall_30);
#line 1573 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 7) = ((MR_Box) (create_report__SelfAllocs_31));
#line 1573 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 8) = ((MR_Box) (create_report__SelfAllocsPercent_32));
#line 1573 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 9) = MR_box_float(create_report__SelfAllocsPerCall_33);
#line 1573 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 10) = ((MR_Box) (create_report__SelfMemory_35));
#line 1573 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 11) = ((MR_Box) (create_report__SelfMemoryPercent_36));
#line 1573 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 12) = ((MR_Box) (create_report__SelfMemoryPerCall_37));
#line 1573 "create_report.m"
    }
#line 1582 "create_report.m"
    if ((create_report__MaybeDesc_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1581 "create_report.m"
      create_report__MaybeTotalPerf_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1582 "create_report.m"
    else
#line 1583 "create_report.m"
      {
#line 1583 "create_report.m"
        MR_Word create_report__Desc_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__MaybeDesc_9, (MR_Integer) 0)));
#line 1583 "create_report.m"
        MR_Integer create_report__TotalTicks_41;
#line 1583 "create_report.m"
        MR_Word create_report__TotalTime_42;
#line 1583 "create_report.m"
        MR_Word create_report__TotalTimePercent_43;
#line 1583 "create_report.m"
        MR_Word create_report__TotalTimePerCall_44;
#line 1583 "create_report.m"
        MR_Integer create_report__TotalCallseqs_45;
#line 1583 "create_report.m"
        MR_Word create_report__TotalCallseqsPercent_46;
#line 1583 "create_report.m"
        MR_Float create_report__TotalCallseqsPerCall_47;
#line 1583 "create_report.m"
        MR_Integer create_report__TotalAllocs_48;
#line 1583 "create_report.m"
        MR_Word create_report__TotalAllocsPercent_49;
#line 1583 "create_report.m"
        MR_Float create_report__TotalAllocsPerCall_50;
#line 1583 "create_report.m"
        MR_Integer create_report__TotalWords_51;
#line 1583 "create_report.m"
        MR_Word create_report__TotalMemory_52;
#line 1583 "create_report.m"
        MR_Word create_report__TotalMemoryPercent_53;
#line 1583 "create_report.m"
        MR_Word create_report__TotalMemoryPerCall_54;
#line 1583 "create_report.m"
        MR_Word create_report__TotalPerf_55;
#line 1583 "create_report.m"
        MR_Integer create_report__V_57_57;
#line 1583 "create_report.m"
        MR_Integer create_report__V_58_58;
#line 1583 "create_report.m"
        MR_Integer create_report__V_59_59;
#line 1583 "create_report.m"
        MR_Integer create_report__V_60_60;
#line 1583 "create_report.m"
        MR_Integer create_report__V_61_61;

#line 1586 "create_report.m"
        {
#line 1586 "create_report.m"
          create_report__V_57_57 = measurements__inherit_quanta_1_f_0(create_report__Desc_40);
        }
#line 1586 "create_report.m"
        create_report__TotalTicks_41 = (create_report__SelfTicks_24 + create_report__V_57_57);
#line 1587 "create_report.m"
        {
#line 1587 "create_report.m"
          create_report__TotalTime_42 = measurement_units__ticks_to_time_2_f_0(create_report__TotalTicks_41, create_report__TicksPerSec_12);
        }
#line 1588 "create_report.m"
        {
#line 1588 "create_report.m"
          create_report__TotalTimePercent_43 = create_report__percent_from_ints_2_f_0(create_report__TotalTicks_41, create_report__RootQuanta_15);
        }
#line 1589 "create_report.m"
        {
#line 1589 "create_report.m"
          create_report__TotalTimePerCall_44 = measurement_units__time_percall_2_f_0(create_report__TotalTime_42, create_report__Calls_19);
        }
#line 1592 "create_report.m"
        {
#line 1592 "create_report.m"
          create_report__V_58_58 = measurements__callseqs_1_f_0(create_report__Own_8);
        }
#line 1592 "create_report.m"
        {
#line 1592 "create_report.m"
          create_report__V_59_59 = measurements__inherit_callseqs_1_f_0(create_report__Desc_40);
        }
#line 1592 "create_report.m"
        create_report__TotalCallseqs_45 = (create_report__V_58_58 + create_report__V_59_59);
#line 1593 "create_report.m"
        {
#line 1593 "create_report.m"
          create_report__TotalCallseqsPercent_46 = create_report__percent_from_ints_2_f_0(create_report__TotalCallseqs_45, create_report__RootCallseqs_16);
        }
#line 1594 "create_report.m"
        {
#line 1594 "create_report.m"
          create_report__TotalCallseqsPerCall_47 = create_report__int_per_call_2_f_0(create_report__TotalCallseqs_45, create_report__Calls_19);
        }
#line 1597 "create_report.m"
        {
#line 1597 "create_report.m"
          create_report__V_60_60 = measurements__inherit_allocs_1_f_0(create_report__Desc_40);
        }
#line 1597 "create_report.m"
        create_report__TotalAllocs_48 = (create_report__SelfAllocs_31 + create_report__V_60_60);
#line 1598 "create_report.m"
        {
#line 1598 "create_report.m"
          create_report__TotalAllocsPercent_49 = create_report__percent_from_ints_2_f_0(create_report__TotalAllocs_48, create_report__RootAllocs_17);
        }
#line 1599 "create_report.m"
        {
#line 1599 "create_report.m"
          create_report__TotalAllocsPerCall_50 = create_report__int_per_call_2_f_0(create_report__TotalAllocs_48, create_report__Calls_19);
        }
#line 1602 "create_report.m"
        {
#line 1602 "create_report.m"
          create_report__V_61_61 = measurements__inherit_words_1_f_0(create_report__Desc_40);
        }
#line 1602 "create_report.m"
        create_report__TotalWords_51 = (create_report__SelfWords_34 + create_report__V_61_61);
#line 1603 "create_report.m"
        {
#line 1603 "create_report.m"
          create_report__TotalMemory_52 = measurement_units__memory_words_2_f_0(create_report__TotalWords_51, create_report__WordSize_13);
        }
#line 1604 "create_report.m"
        {
#line 1604 "create_report.m"
          create_report__TotalMemoryPercent_53 = create_report__percent_from_ints_2_f_0(create_report__TotalWords_51, create_report__RootWords_18);
        }
#line 1605 "create_report.m"
        {
#line 1605 "create_report.m"
          create_report__TotalMemoryPerCall_54 = measurement_units__f_slash_2_f_0(create_report__TotalMemory_52, create_report__Calls_19);
        }
#line 1607 "create_report.m"
        {
#line 1607 "create_report.m"
          create_report__TotalPerf_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 1607 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 0) = ((MR_Box) (create_report__TotalTicks_41));
#line 1607 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 1) = ((MR_Box) (create_report__TotalTime_42));
#line 1607 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 2) = ((MR_Box) (create_report__TotalTimePercent_43));
#line 1607 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 3) = ((MR_Box) (create_report__TotalTimePerCall_44));
#line 1607 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 4) = ((MR_Box) (create_report__TotalCallseqs_45));
#line 1607 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 5) = ((MR_Box) (create_report__TotalCallseqsPercent_46));
#line 1607 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 6) = MR_box_float(create_report__TotalCallseqsPerCall_47);
#line 1607 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 7) = ((MR_Box) (create_report__TotalAllocs_48));
#line 1607 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 8) = ((MR_Box) (create_report__TotalAllocsPercent_49));
#line 1607 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 9) = MR_box_float(create_report__TotalAllocsPerCall_50);
#line 1607 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 10) = ((MR_Box) (create_report__TotalMemory_52));
#line 1607 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 11) = ((MR_Box) (create_report__TotalMemoryPercent_53));
#line 1607 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 12) = ((MR_Box) (create_report__TotalMemoryPerCall_54));
#line 1607 "create_report.m"
        }
#line 1612 "create_report.m"
        {
#line 1612 "create_report.m"
          create_report__MaybeTotalPerf_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1612 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__MaybeTotalPerf_39, 0) = ((MR_Box) (create_report__TotalPerf_55));
#line 1612 "create_report.m"
        }
#line 1583 "create_report.m"
      }
#line 1615 "create_report.m"
    {
#line 1615 "create_report.m"
      MR_Word base;
#line 1615 "create_report.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1615 "create_report.m"
      *create_report__RowData_10 = base;
#line 1615 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 0) = create_report__Subject_7;
#line 1615 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__Calls_19));
#line 1615 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (create_report__Exits_20));
#line 1615 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (create_report__Fails_21));
#line 1615 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (create_report__Redos_22));
#line 1615 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (create_report__Excps_23));
#line 1615 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (create_report__WordSize_13));
#line 1615 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (create_report__SelfPerf_38));
#line 1615 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (create_report__MaybeTotalPerf_39));
#line 1615 "create_report.m"
    }
#line 1532 "create_report.m"
  }
#line 1527 "create_report.m"
}

#line 1469 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
#line 1469 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 1469 "create_report.m"
  MR_Word * create_report__HeadVar__2_2)
#line 1469 "create_report.m"
{
#line 1472 "create_report.m"
  {
#line 1472 "create_report.m"
    MR_bool create_report__succeeded;

#line 1472 "create_report.m"
    if ((create_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1472 "create_report.m"
      {
#line 1472 "create_report.m"
        *create_report__HeadVar__2_2 = (MR_Word) &create_report_scalar_common_5[9];
#line 1472 "create_report.m"
      }
#line 1472 "create_report.m"
    else
#line 1472 "create_report.m"
      {
#line 1472 "create_report.m"
        MR_Word create_report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1472 "create_report.m"
        MR_Word create_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__HeadVar__1_1, (MR_Integer) 0)));

#line 1472 "create_report.m"
        if (((MR_tag((MR_Word) create_report__V_17_17)) == (MR_mktag((MR_Integer) 1))))
#line 1473 "create_report.m"
          *create_report__HeadVar__2_2 = (MR_Word) create_report__V_17_17;
#line 1472 "create_report.m"
        else
#line 1474 "create_report.m"
          {
#line 1474 "create_report.m"
            MR_Box create_report__X_7 = (MR_hl_field(MR_mktag(0), create_report__V_17_17, (MR_Integer) 0));
#line 1474 "create_report.m"
            MR_Word create_report__MaybeXs1_10;

#line 1475 "create_report.m"
            {
#line 1475 "create_report.m"
              create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(create_report__V_16_16, &create_report__MaybeXs1_10);
            }
#line 1479 "create_report.m"
            if (((MR_tag((MR_Word) create_report__MaybeXs1_10)) == (MR_mktag((MR_Integer) 1))))
#line 1481 "create_report.m"
              *create_report__HeadVar__2_2 = create_report__MaybeXs1_10;
#line 1479 "create_report.m"
            else
#line 1477 "create_report.m"
              {
#line 1477 "create_report.m"
                MR_Word create_report__Xs1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeXs1_10, (MR_Integer) 0)));
#line 1477 "create_report.m"
                MR_Word create_report__V_14_14;

#line 1478 "create_report.m"
                {
#line 1478 "create_report.m"
                  create_report__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1478 "create_report.m"
                  MR_hl_field(MR_mktag(1), create_report__V_14_14, 0) = create_report__X_7;
#line 1478 "create_report.m"
                  MR_hl_field(MR_mktag(1), create_report__V_14_14, 1) = ((MR_Box) (create_report__Xs1_11));
#line 1478 "create_report.m"
                }
#line 1478 "create_report.m"
                {
#line 1478 "create_report.m"
                  MR_Word base;
#line 1478 "create_report.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1478 "create_report.m"
                  *create_report__HeadVar__2_2 = base;
#line 1478 "create_report.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__V_14_14));
#line 1478 "create_report.m"
                }
#line 1477 "create_report.m"
              }
#line 1474 "create_report.m"
          }
#line 1472 "create_report.m"
      }
#line 1472 "create_report.m"
  }
#line 1469 "create_report.m"
}

#line 668 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_p_0(
#line 668 "create_report.m"
  MR_Word create_report__Deep_5,
#line 668 "create_report.m"
  MR_Word create_report__RawData_7,
#line 668 "create_report.m"
  MR_Word * create_report__Data_8)
#line 668 "create_report.m"
{
#line 673 "create_report.m"
  {
#line 673 "create_report.m"
    MR_bool create_report__succeeded;

#line 673 "create_report.m"
    if (((MR_tag((MR_Word) create_report__RawData_7)) == (MR_mktag((MR_Integer) 0))))
#line 673 "create_report.m"
      {
#line 673 "create_report.m"
        MR_Word create_report__RawGetter_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawData_7, (MR_Integer) 0)));
#line 673 "create_report.m"
        MR_Word create_report__RawSetter_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawData_7, (MR_Integer) 1)));
#line 673 "create_report.m"
        MR_Word create_report__GetterProcDesc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_9, (MR_Integer) 0)));
#line 673 "create_report.m"
        MR_Word create_report__GetterOwn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_9, (MR_Integer) 1)));
#line 673 "create_report.m"
        MR_Word create_report__GetterDesc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_9, (MR_Integer) 2)));
#line 673 "create_report.m"
        MR_Word create_report__SetterProcDesc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_10, (MR_Integer) 0)));
#line 673 "create_report.m"
        MR_Word create_report__SetterOwn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_10, (MR_Integer) 1)));
#line 673 "create_report.m"
        MR_Word create_report__SetterDesc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_10, (MR_Integer) 2)));
#line 673 "create_report.m"
        MR_Word create_report__GetterRowData_18;
#line 673 "create_report.m"
        MR_Word create_report__SetterRowData_19;
#line 673 "create_report.m"
        MR_Word create_report__SumOwn_20;
#line 673 "create_report.m"
        MR_Word create_report__SumDesc_21;
#line 673 "create_report.m"
        MR_Word create_report__SumRowData_22;
#line 673 "create_report.m"
        MR_Word create_report__V_43_43;
#line 673 "create_report.m"
        MR_Word create_report__V_49_49;
#line 673 "create_report.m"
        MR_Word create_report__V_55_55;

#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_43_43, 0) = ((MR_Box) (create_report__GetterDesc_14));
#line 1524 "create_report.m"
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__GetterProcDesc_12)), create_report__GetterOwn_13, create_report__V_43_43, &create_report__GetterRowData_18);
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_49_49, 0) = ((MR_Box) (create_report__SetterDesc_17));
#line 1524 "create_report.m"
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__SetterProcDesc_15)), create_report__SetterOwn_16, create_report__V_49_49, &create_report__SetterRowData_19);
        }
#line 680 "create_report.m"
        {
#line 680 "create_report.m"
          create_report__SumOwn_20 = measurements__add_own_to_own_2_f_0(create_report__GetterOwn_13, create_report__SetterOwn_16);
        }
#line 681 "create_report.m"
        {
#line 681 "create_report.m"
          create_report__SumDesc_21 = measurements__add_inherit_to_inherit_2_f_0(create_report__GetterDesc_14, create_report__SetterDesc_17);
        }
#line 682 "create_report.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_55_55, 0) = ((MR_Box) (create_report__SumDesc_21));
#line 1524 "create_report.m"
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) ((MR_Integer) 0)), create_report__SumOwn_20, create_report__V_55_55, &create_report__SumRowData_22);
        }
#line 684 "create_report.m"
        {
#line 684 "create_report.m"
          MR_Word base;
#line 684 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 684 "create_report.m"
          *create_report__Data_8 = base;
#line 684 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__GetterRowData_18));
#line 684 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__SetterRowData_19));
#line 684 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (create_report__SumRowData_22));
#line 684 "create_report.m"
        }
#line 673 "create_report.m"
      }
#line 673 "create_report.m"
    else
#line 673 "create_report.m"
      if (((MR_tag((MR_Word) create_report__RawData_7)) == (MR_mktag((MR_Integer) 1))))
#line 686 "create_report.m"
        {
#line 686 "create_report.m"
          MR_Word create_report__RawGetter_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__RawData_7, (MR_Integer) 0)));
#line 686 "create_report.m"
          MR_Word create_report__GetterProcDesc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_24, (MR_Integer) 0)));
#line 686 "create_report.m"
          MR_Word create_report__GetterOwn_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_24, (MR_Integer) 1)));
#line 686 "create_report.m"
          MR_Word create_report__GetterDesc_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_24, (MR_Integer) 2)));
#line 686 "create_report.m"
          MR_Word create_report__GetterRowData_28;
#line 686 "create_report.m"
          MR_Word create_report__V_61_61;

#line 1524 "create_report.m"
          {
#line 1524 "create_report.m"
            create_report__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
            MR_hl_field(MR_mktag(1), create_report__V_61_61, 0) = ((MR_Box) (create_report__GetterDesc_27));
#line 1524 "create_report.m"
          }
#line 1524 "create_report.m"
          {
#line 1524 "create_report.m"
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__GetterProcDesc_25)), create_report__GetterOwn_26, create_report__V_61_61, &create_report__GetterRowData_28);
          }
#line 690 "create_report.m"
          {
#line 690 "create_report.m"
            MR_Word base;
#line 690 "create_report.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 690 "create_report.m"
            *create_report__Data_8 = base;
#line 690 "create_report.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__GetterRowData_28));
#line 690 "create_report.m"
          }
#line 686 "create_report.m"
        }
#line 673 "create_report.m"
      else
#line 692 "create_report.m"
        {
#line 692 "create_report.m"
          MR_Word create_report__RawSetter_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__RawData_7, (MR_Integer) 0)));
#line 692 "create_report.m"
          MR_Word create_report__SetterProcDesc_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_29, (MR_Integer) 0)));
#line 692 "create_report.m"
          MR_Word create_report__SetterOwn_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_29, (MR_Integer) 1)));
#line 692 "create_report.m"
          MR_Word create_report__SetterDesc_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_29, (MR_Integer) 2)));
#line 692 "create_report.m"
          MR_Word create_report__SetterRowData_33;
#line 692 "create_report.m"
          MR_Word create_report__V_67_67;

#line 1524 "create_report.m"
          {
#line 1524 "create_report.m"
            create_report__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
            MR_hl_field(MR_mktag(1), create_report__V_67_67, 0) = ((MR_Box) (create_report__SetterDesc_32));
#line 1524 "create_report.m"
          }
#line 1524 "create_report.m"
          {
#line 1524 "create_report.m"
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__SetterProcDesc_30)), create_report__SetterOwn_31, create_report__V_67_67, &create_report__SetterRowData_33);
          }
#line 696 "create_report.m"
          {
#line 696 "create_report.m"
            MR_Word base;
#line 696 "create_report.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 696 "create_report.m"
            *create_report__Data_8 = base;
#line 696 "create_report.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (create_report__SetterRowData_33));
#line 696 "create_report.m"
          }
#line 692 "create_report.m"
        }
#line 673 "create_report.m"
  }
#line 668 "create_report.m"
}

#line 666 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0_1(
#line 666 "create_report.m"
  MR_Box create_report__closure_arg,
#line 666 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 666 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 666 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 666 "create_report.m"
{
#line 666 "create_report.m"
  {
#line 666 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 666 "create_report.m"
    MR_Word create_report__conv0_Data_8;

#line 666 "create_report.m"
    {
#line 666 "create_report.m"
      create_report__getter_setter_raw_data_to_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_Data_8);
    }
#line 666 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_Data_8));
#line 666 "create_report.m"
  }
#line 666 "create_report.m"
}

#line 662 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0(
#line 662 "create_report.m"
  MR_Word create_report__Deep_5,
#line 662 "create_report.m"
  MR_Word create_report__RawMap_7,
#line 662 "create_report.m"
  MR_Word * create_report__Map_8)
#line 662 "create_report.m"
{
#line 665 "create_report.m"
  {
#line 665 "create_report.m"
    MR_bool create_report__succeeded;
#line 665 "create_report.m"
    MR_Word create_report__V_9_9;

#line 666 "create_report.m"
    {
#line 666 "create_report.m"
      create_report__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 666 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_9_9, 0) = ((MR_Box) (&create_report_scalar_common_6[16]));
#line 666 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_9_9, 1) = ((MR_Box) (create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0_1));
#line 666 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 666 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_9_9, 3) = ((MR_Box) (create_report__Deep_5));
#line 666 "create_report.m"
    }
#line 666 "create_report.m"
    {
#line 666 "create_report.m"
      mercury__map__map_values_3_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[7], (MR_Word) &create_report_scalar_common_2[10], create_report__V_9_9, create_report__RawMap_7, create_report__Map_8);
#line 666 "create_report.m"
      return;
    }
#line 665 "create_report.m"
  }
#line 662 "create_report.m"
}

#line 453 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_2(
#line 453 "create_report.m"
  MR_Box create_report__closure_arg,
#line 453 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 453 "create_report.m"
  MR_Box * create_report__wrapper_arg_2)
#line 453 "create_report.m"
{
#line 453 "create_report.m"
  {
#line 453 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 453 "create_report.m"
    MR_Word create_report__conv0_CliqueCallSiteReport_6;

#line 453 "create_report.m"
    {
#line 453 "create_report.m"
      create_report__create_child_call_site_report_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv0_CliqueCallSiteReport_6);
    }
#line 453 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_CliqueCallSiteReport_6));
#line 453 "create_report.m"
  }
#line 453 "create_report.m"
}

#line 439 "create_report.m"
static MR_bool MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_1(
#line 439 "create_report.m"
  MR_Box create_report__closure_arg)
#line 439 "create_report.m"
{
#line 439 "create_report.m"
  {
#line 439 "create_report.m"
    MR_bool create_report__succeeded;
#line 439 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;

#line 439 "create_report.m"
    {
#line 439 "create_report.m"
      return create_report__succeeded = create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__439__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))));
    }
#line 439 "create_report.m"
    return create_report__succeeded;
#line 439 "create_report.m"
  }
#line 439 "create_report.m"
}

#line 425 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(
#line 425 "create_report.m"
  MR_Word create_report__Deep_8,
#line 425 "create_report.m"
  MR_Word create_report__ProcDesc_10,
#line 425 "create_report.m"
  MR_Word create_report__PDPtr_11,
#line 425 "create_report.m"
  MR_Word * create_report__Own_12,
#line 425 "create_report.m"
  MR_Word * create_report__Desc_13,
#line 425 "create_report.m"
  MR_Word * create_report__CliquePDReport_14)
#line 425 "create_report.m"
{
#line 444 "create_report.m"
  {
#line 444 "create_report.m"
    MR_bool create_report__succeeded;

#line 432 "create_report.m"
    {
#line 432 "create_report.m"
      create_report__succeeded = profile__valid_proc_dynamic_ptr_2_p_0(create_report__Deep_8, create_report__PDPtr_11);
    }
#line 444 "create_report.m"
    if (create_report__succeeded)
#line 433 "create_report.m"
      {
#line 433 "create_report.m"
        MR_Word create_report__PDRowData_15;
#line 433 "create_report.m"
        MR_Word create_report__PD_16;
#line 433 "create_report.m"
        MR_Word create_report__PSPtr_17;
#line 433 "create_report.m"
        MR_Word create_report__CliqueCallSiteReports_18;
#line 433 "create_report.m"
        MR_Word create_report__V_19_19;
#line 433 "create_report.m"
        MR_Word create_report__V_21_21;
#line 433 "create_report.m"
        MR_Word create_report__V_39_39;
#line 433 "create_report.m"
        MR_Word create_report__PairedSlots_43;
#line 433 "create_report.m"
        MR_Word create_report__V_44_44;
#line 438 "create_report.m"
        MR_ArrayPtr create_report__V_25_25;
#line 438 "create_report.m"
        MR_Word create_report__V_26_26;
#line 439 "create_report.m"
        MR_String create_report__V_27_27;
#line 439 "create_report.m"
        MR_Integer create_report__V_28_28;
#line 439 "create_report.m"
        MR_String create_report__V_29_29;
#line 439 "create_report.m"
        MR_String create_report__V_30_30;
#line 439 "create_report.m"
        MR_String create_report__V_31_31;

#line 433 "create_report.m"
        {
#line 433 "create_report.m"
          profile__deep_lookup_pd_own_3_p_0(create_report__Deep_8, create_report__PDPtr_11, create_report__Own_12);
        }
#line 434 "create_report.m"
        {
#line 434 "create_report.m"
          profile__deep_lookup_pd_desc_3_p_0(create_report__Deep_8, create_report__PDPtr_11, create_report__Desc_13);
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_39_39, 0) = ((MR_Box) (*create_report__Desc_13));
#line 1524 "create_report.m"
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_8, ((MR_Box) (create_report__ProcDesc_10)), *create_report__Own_12, create_report__V_39_39, &create_report__PDRowData_15);
        }
#line 437 "create_report.m"
        {
#line 437 "create_report.m"
          profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_8, create_report__PDPtr_11, &create_report__PD_16);
        }
#line 438 "create_report.m"
        create_report__PSPtr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_16, (MR_Integer) 0)));
#line 438 "create_report.m"
        create_report__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_16, (MR_Integer) 1)));
#line 438 "create_report.m"
        create_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_16, (MR_Integer) 2)));
#line 439 "create_report.m"
        create_report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 0)));
#line 439 "create_report.m"
        create_report__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 1)));
#line 439 "create_report.m"
        create_report__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 2)));
#line 439 "create_report.m"
        create_report__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 3)));
#line 439 "create_report.m"
        create_report__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 4)));
#line 439 "create_report.m"
        create_report__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 5)));
#line 439 "create_report.m"
        {
#line 439 "create_report.m"
          create_report__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 439 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_19_19, 0) = ((MR_Box) (&create_report_scalar_common_7[3]));
#line 439 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_19_19, 1) = ((MR_Box) (create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_1));
#line 439 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 439 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_19_19, 3) = ((MR_Box) (create_report__PSPtr_17));
#line 439 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_19_19, 4) = ((MR_Box) (create_report__V_21_21));
#line 439 "create_report.m"
        }
#line 439 "create_report.m"
        {
#line 439 "create_report.m"
          mercury__require__require_2_p_0(create_report__V_19_19, (MR_String) "create_clique_proc_dynamic_report: psptr mismatch");
        }
#line 452 "create_report.m"
        {
#line 452 "create_report.m"
          analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(create_report__Deep_8, create_report__PDPtr_11, &create_report__PairedSlots_43);
        }
#line 453 "create_report.m"
        {
#line 453 "create_report.m"
          create_report__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 453 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_44_44, 0) = ((MR_Box) (&create_report_scalar_common_4[5]));
#line 453 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_44_44, 1) = ((MR_Box) (create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_2));
#line 453 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 453 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_44_44, 3) = ((MR_Box) (create_report__Deep_8));
#line 453 "create_report.m"
        }
#line 453 "create_report.m"
        {
#line 453 "create_report.m"
          mercury__list__map_3_p_0((MR_Word) &create_report_scalar_common_2[2], (MR_Word) &report__report__type_ctor_info_clique_call_site_report_0, create_report__V_44_44, create_report__PairedSlots_43, &create_report__CliqueCallSiteReports_18);
        }
#line 442 "create_report.m"
        {
#line 442 "create_report.m"
          MR_Word base;
#line 442 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 442 "create_report.m"
          *create_report__CliquePDReport_14 = base;
#line 442 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__PDRowData_15));
#line 442 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__CliqueCallSiteReports_18));
#line 442 "create_report.m"
        }
#line 433 "create_report.m"
      }
#line 444 "create_report.m"
    else
#line 445 "create_report.m"
      {
#line 445 "create_report.m"
        {
#line 445 "create_report.m"
          mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_clique_proc_dynamic_report\'/7", (MR_String) "invalid proc_dynamic index");
#line 445 "create_report.m"
          return;
        }
#line 445 "create_report.m"
      }
#line 444 "create_report.m"
  }
#line 425 "create_report.m"
}

#line 935 "create_report.m"
static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_call_site_summary__935__1_2_p_0(
#line 935 "create_report.m"
  MR_Word create_report__CalleePSPtr_13,
#line 935 "create_report.m"
  MR_Word create_report__CalleePSPtrFromCall_21)
#line 935 "create_report.m"
{
#line 935 "create_report.m"
  {
#line 935 "create_report.m"
    MR_bool create_report__succeeded;
#line 935 "create_report.m"
    MR_Integer create_report__V_135_135 = (MR_Integer) create_report__CalleePSPtr_13;
#line 935 "create_report.m"
    MR_Integer create_report__V_136_136 = (MR_Integer) create_report__CalleePSPtrFromCall_21;

#line 935 "create_report.m"
    create_report__succeeded = (create_report__V_135_135 == create_report__V_136_136);
#line 935 "create_report.m"
    return create_report__succeeded;
#line 935 "create_report.m"
  }
#line 935 "create_report.m"
}

#line 439 "create_report.m"
static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__439__1_2_p_0(
#line 439 "create_report.m"
  MR_Word create_report__PSPtr_17,
#line 439 "create_report.m"
  MR_Word create_report__HeadVar__2_21)
#line 439 "create_report.m"
{
#line 439 "create_report.m"
  {
#line 439 "create_report.m"
    MR_bool create_report__succeeded;
#line 439 "create_report.m"
    MR_Integer create_report__V_34_34 = (MR_Integer) create_report__PSPtr_17;
#line 439 "create_report.m"
    MR_Integer create_report__V_35_35 = (MR_Integer) create_report__HeadVar__2_21;

#line 439 "create_report.m"
    create_report__succeeded = (create_report__V_34_34 == create_report__V_35_35);
#line 439 "create_report.m"
    return create_report__succeeded;
#line 439 "create_report.m"
  }
#line 439 "create_report.m"
}

#line 636 "create_report.m"
static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0(
#line 636 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 636 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 636 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 636 "create_report.m"
{
#line 636 "create_report.m"
  {
#line 636 "create_report.m"
    MR_bool create_report__succeeded;
#line 636 "create_report.m"
    MR_Word create_report__Cast_HeadVar1_4 = create_report__HeadVar__2_2;
#line 636 "create_report.m"
    MR_Word create_report__Cast_HeadVar2_5 = create_report__HeadVar__3_3;

#line 636 "create_report.m"
    {
#line 636 "create_report.m"
      mercury__builtin__compare_3_p_0((MR_Word) &create_report_scalar_common_2[8], create_report__HeadVar__1_1, ((MR_Box) (create_report__Cast_HeadVar1_4)), ((MR_Box) (create_report__Cast_HeadVar2_5)));
#line 636 "create_report.m"
      return;
    }
#line 636 "create_report.m"
  }
#line 636 "create_report.m"
}

#line 636 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0(
#line 636 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 636 "create_report.m"
  MR_Word create_report__HeadVar__2_2)
#line 636 "create_report.m"
{
#line 636 "create_report.m"
  {
#line 636 "create_report.m"
    MR_bool create_report__succeeded;
#line 636 "create_report.m"
    MR_Word create_report__Cast_HeadVar1_3 = create_report__HeadVar__1_1;
#line 636 "create_report.m"
    MR_Word create_report__Cast_HeadVar2_4 = create_report__HeadVar__2_2;

#line 636 "create_report.m"
    {
#line 636 "create_report.m"
      return create_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &create_report_scalar_common_2[8], ((MR_Box) (create_report__Cast_HeadVar1_3)), ((MR_Box) (create_report__Cast_HeadVar2_4)));
    }
#line 636 "create_report.m"
    return create_report__succeeded;
#line 636 "create_report.m"
  }
#line 636 "create_report.m"
}

#line 635 "create_report.m"
static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0(
#line 635 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 635 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 635 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 635 "create_report.m"
{
#line 635 "create_report.m"
  {
#line 635 "create_report.m"
    MR_bool create_report__succeeded;
#line 635 "create_report.m"
    MR_Word create_report__Cast_HeadVar1_4 = create_report__HeadVar__2_2;
#line 635 "create_report.m"
    MR_Word create_report__Cast_HeadVar2_5 = create_report__HeadVar__3_3;

#line 635 "create_report.m"
    {
#line 635 "create_report.m"
      mercury__builtin__compare_3_p_0((MR_Word) &create_report_scalar_common_2[7], create_report__HeadVar__1_1, ((MR_Box) (create_report__Cast_HeadVar1_4)), ((MR_Box) (create_report__Cast_HeadVar2_5)));
#line 635 "create_report.m"
      return;
    }
#line 635 "create_report.m"
  }
#line 635 "create_report.m"
}

#line 635 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0(
#line 635 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 635 "create_report.m"
  MR_Word create_report__HeadVar__2_2)
#line 635 "create_report.m"
{
#line 635 "create_report.m"
  {
#line 635 "create_report.m"
    MR_bool create_report__succeeded;
#line 635 "create_report.m"
    MR_Word create_report__Cast_HeadVar1_3 = create_report__HeadVar__1_1;
#line 635 "create_report.m"
    MR_Word create_report__Cast_HeadVar2_4 = create_report__HeadVar__2_2;

#line 635 "create_report.m"
    {
#line 635 "create_report.m"
      return create_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &create_report_scalar_common_2[7], ((MR_Box) (create_report__Cast_HeadVar1_3)), ((MR_Box) (create_report__Cast_HeadVar2_4)));
    }
#line 635 "create_report.m"
    return create_report__succeeded;
#line 635 "create_report.m"
  }
#line 635 "create_report.m"
}

#line 637 "create_report.m"
static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0(
#line 637 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 637 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 637 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 637 "create_report.m"
{
#line 637 "create_report.m"
  {
#line 637 "create_report.m"
    MR_bool create_report__succeeded;
#line 637 "create_report.m"
    MR_Word create_report__Cast_HeadVar1_4 = create_report__HeadVar__2_2;
#line 637 "create_report.m"
    MR_Word create_report__Cast_HeadVar2_5 = create_report__HeadVar__3_3;

#line 637 "create_report.m"
    {
#line 637 "create_report.m"
      mercury__builtin__compare_3_p_0((MR_Word) &create_report_scalar_common_2[9], create_report__HeadVar__1_1, ((MR_Box) (create_report__Cast_HeadVar1_4)), ((MR_Box) (create_report__Cast_HeadVar2_5)));
#line 637 "create_report.m"
      return;
    }
#line 637 "create_report.m"
  }
#line 637 "create_report.m"
}

#line 637 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0(
#line 637 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 637 "create_report.m"
  MR_Word create_report__HeadVar__2_2)
#line 637 "create_report.m"
{
#line 637 "create_report.m"
  {
#line 637 "create_report.m"
    MR_bool create_report__succeeded;
#line 637 "create_report.m"
    MR_Word create_report__Cast_HeadVar1_3 = create_report__HeadVar__1_1;
#line 637 "create_report.m"
    MR_Word create_report__Cast_HeadVar2_4 = create_report__HeadVar__2_2;

#line 637 "create_report.m"
    {
#line 637 "create_report.m"
      return create_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &create_report_scalar_common_2[9], ((MR_Box) (create_report__Cast_HeadVar1_3)), ((MR_Box) (create_report__Cast_HeadVar2_4)));
    }
#line 637 "create_report.m"
    return create_report__succeeded;
#line 637 "create_report.m"
  }
#line 637 "create_report.m"
}

#line 628 "create_report.m"
static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0(
#line 628 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 628 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 628 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 628 "create_report.m"
{
#line 628 "create_report.m"
  {
#line 628 "create_report.m"
    MR_bool create_report__succeeded;
#line 628 "create_report.m"
    MR_Integer create_report__CastX_12 = (MR_Integer) create_report__HeadVar__2_2;
#line 628 "create_report.m"
    MR_Integer create_report__CastY_13 = (MR_Integer) create_report__HeadVar__3_3;

#line 628 "create_report.m"
    create_report__succeeded = (create_report__CastX_12 == create_report__CastY_13);
#line 628 "create_report.m"
    if (create_report__succeeded)
#line 4430 "create_report.c"
      *create_report__HeadVar__1_1 = (MR_Integer) 0;
#line 628 "create_report.m"
    else
#line 628 "create_report.m"
      {
#line 628 "create_report.m"
        MR_Word create_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
#line 628 "create_report.m"
        MR_Word create_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
#line 628 "create_report.m"
        MR_Word create_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 2)));
#line 628 "create_report.m"
        MR_Word create_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 628 "create_report.m"
        MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 628 "create_report.m"
        MR_Word create_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 2)));
#line 628 "create_report.m"
        MR_Word create_report__V_10_10;

#line 628 "create_report.m"
        {
#line 628 "create_report.m"
          report____Compare____proc_desc_0_0(&create_report__V_10_10, create_report__V_4_4, create_report__V_7_7);
        }
#line 4456 "create_report.c"
        create_report__succeeded = (create_report__V_10_10 == (MR_Integer) 0);
#line 628 "create_report.m"
        create_report__succeeded = !(create_report__succeeded);
#line 628 "create_report.m"
        if (create_report__succeeded)
#line 628 "create_report.m"
          *create_report__HeadVar__1_1 = create_report__V_10_10;
#line 628 "create_report.m"
        else
#line 628 "create_report.m"
          {
#line 628 "create_report.m"
            MR_Word create_report__V_11_11;

#line 628 "create_report.m"
            {
#line 628 "create_report.m"
              measurements____Compare____own_prof_info_0_0(&create_report__V_11_11, create_report__V_5_5, create_report__V_8_8);
            }
#line 4476 "create_report.c"
            create_report__succeeded = (create_report__V_11_11 == (MR_Integer) 0);
#line 628 "create_report.m"
            create_report__succeeded = !(create_report__succeeded);
#line 628 "create_report.m"
            if (create_report__succeeded)
#line 628 "create_report.m"
              *create_report__HeadVar__1_1 = create_report__V_11_11;
#line 628 "create_report.m"
            else
#line 628 "create_report.m"
              {
#line 628 "create_report.m"
                measurements____Compare____inherit_prof_info_0_0(create_report__HeadVar__1_1, create_report__V_6_6, create_report__V_9_9);
#line 628 "create_report.m"
                return;
              }
#line 628 "create_report.m"
          }
#line 628 "create_report.m"
      }
#line 628 "create_report.m"
  }
#line 628 "create_report.m"
}

#line 628 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0(
#line 628 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 628 "create_report.m"
  MR_Word create_report__HeadVar__2_2)
#line 628 "create_report.m"
{
#line 628 "create_report.m"
  {
#line 628 "create_report.m"
    MR_bool create_report__succeeded;
#line 628 "create_report.m"
    MR_Integer create_report__CastX_9 = (MR_Integer) create_report__HeadVar__1_1;
#line 628 "create_report.m"
    MR_Integer create_report__CastY_10 = (MR_Integer) create_report__HeadVar__2_2;

#line 628 "create_report.m"
    create_report__succeeded = (create_report__CastX_9 == create_report__CastY_10);
#line 628 "create_report.m"
    if (create_report__succeeded)
#line 628 "create_report.m"
      create_report__succeeded = MR_TRUE;
#line 628 "create_report.m"
    else
#line 628 "create_report.m"
      {
#line 628 "create_report.m"
        MR_Word create_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 0)));
#line 628 "create_report.m"
        MR_Word create_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 1)));
#line 628 "create_report.m"
        MR_Word create_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 2)));
#line 628 "create_report.m"
        MR_Word create_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
#line 628 "create_report.m"
        MR_Word create_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
#line 628 "create_report.m"
        MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 2)));

#line 4543 "create_report.c"
        {
#line 4545 "create_report.c"
          create_report__succeeded = report____Unify____proc_desc_0_0(create_report__V_3_3, create_report__V_6_6);
        }
#line 628 "create_report.m"
        if (create_report__succeeded)
#line 628 "create_report.m"
          {
#line 4552 "create_report.c"
            {
#line 4554 "create_report.c"
              create_report__succeeded = measurements____Unify____own_prof_info_0_0(create_report__V_4_4, create_report__V_7_7);
            }
#line 628 "create_report.m"
            if (create_report__succeeded)
#line 4559 "create_report.c"
              {
#line 4561 "create_report.c"
                return create_report__succeeded = measurements____Unify____inherit_prof_info_0_0(create_report__V_5_5, create_report__V_8_8);
              }
#line 628 "create_report.m"
          }
#line 628 "create_report.m"
      }
#line 628 "create_report.m"
    return create_report__succeeded;
#line 628 "create_report.m"
  }
#line 628 "create_report.m"
}

#line 972 "create_report.m"
static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0(
#line 972 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 972 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 972 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 972 "create_report.m"
{
#line 972 "create_report.m"
  {
#line 972 "create_report.m"
    MR_bool create_report__succeeded;
#line 972 "create_report.m"
    MR_Integer create_report__CastX_12 = (MR_Integer) create_report__HeadVar__2_2;
#line 972 "create_report.m"
    MR_Integer create_report__CastY_13 = (MR_Integer) create_report__HeadVar__3_3;

#line 972 "create_report.m"
    create_report__succeeded = (create_report__CastX_12 == create_report__CastY_13);
#line 972 "create_report.m"
    if (create_report__succeeded)
#line 4599 "create_report.c"
      *create_report__HeadVar__1_1 = (MR_Integer) 0;
#line 972 "create_report.m"
    else
#line 972 "create_report.m"
      {
#line 972 "create_report.m"
        MR_Word create_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
#line 972 "create_report.m"
        MR_Word create_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
#line 972 "create_report.m"
        MR_Word create_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 2)));
#line 972 "create_report.m"
        MR_Word create_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 972 "create_report.m"
        MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 972 "create_report.m"
        MR_Word create_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 2)));
#line 972 "create_report.m"
        MR_Word create_report__V_10_10;
#line 972 "create_report.m"
        MR_Integer create_report__V_17_17 = (MR_Integer) create_report__V_4_4;
#line 972 "create_report.m"
        MR_Integer create_report__V_18_18 = (MR_Integer) create_report__V_7_7;

#line 972 "create_report.m"
        {
#line 972 "create_report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&create_report__V_10_10, create_report__V_17_17, create_report__V_18_18);
        }
#line 4629 "create_report.c"
        create_report__succeeded = (create_report__V_10_10 == (MR_Integer) 0);
#line 972 "create_report.m"
        create_report__succeeded = !(create_report__succeeded);
#line 972 "create_report.m"
        if (create_report__succeeded)
#line 972 "create_report.m"
          *create_report__HeadVar__1_1 = create_report__V_10_10;
#line 972 "create_report.m"
        else
#line 972 "create_report.m"
          {
#line 972 "create_report.m"
            MR_Word create_report__V_11_11;

#line 972 "create_report.m"
            {
#line 972 "create_report.m"
              measurements____Compare____own_prof_info_0_0(&create_report__V_11_11, create_report__V_5_5, create_report__V_8_8);
            }
#line 4649 "create_report.c"
            create_report__succeeded = (create_report__V_11_11 == (MR_Integer) 0);
#line 972 "create_report.m"
            create_report__succeeded = !(create_report__succeeded);
#line 972 "create_report.m"
            if (create_report__succeeded)
#line 972 "create_report.m"
              *create_report__HeadVar__1_1 = create_report__V_11_11;
#line 972 "create_report.m"
            else
#line 972 "create_report.m"
              {
#line 972 "create_report.m"
                measurements____Compare____inherit_prof_info_0_0(create_report__HeadVar__1_1, create_report__V_6_6, create_report__V_9_9);
#line 972 "create_report.m"
                return;
              }
#line 972 "create_report.m"
          }
#line 972 "create_report.m"
      }
#line 972 "create_report.m"
  }
#line 972 "create_report.m"
}

#line 972 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0(
#line 972 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 972 "create_report.m"
  MR_Word create_report__HeadVar__2_2)
#line 972 "create_report.m"
{
#line 972 "create_report.m"
  {
#line 972 "create_report.m"
    MR_bool create_report__succeeded;
#line 972 "create_report.m"
    MR_Integer create_report__CastX_9 = (MR_Integer) create_report__HeadVar__1_1;
#line 972 "create_report.m"
    MR_Integer create_report__CastY_10 = (MR_Integer) create_report__HeadVar__2_2;

#line 972 "create_report.m"
    create_report__succeeded = (create_report__CastX_9 == create_report__CastY_10);
#line 972 "create_report.m"
    if (create_report__succeeded)
#line 972 "create_report.m"
      create_report__succeeded = MR_TRUE;
#line 972 "create_report.m"
    else
#line 972 "create_report.m"
      {
#line 972 "create_report.m"
        MR_Word create_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 0)));
#line 972 "create_report.m"
        MR_Word create_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 1)));
#line 972 "create_report.m"
        MR_Word create_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 2)));
#line 972 "create_report.m"
        MR_Word create_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
#line 972 "create_report.m"
        MR_Word create_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
#line 972 "create_report.m"
        MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 2)));
#line 972 "create_report.m"
        MR_Integer create_report__V_14_14 = (MR_Integer) create_report__V_3_3;
#line 972 "create_report.m"
        MR_Integer create_report__V_15_15 = (MR_Integer) create_report__V_6_6;

#line 4720 "create_report.c"
        create_report__succeeded = (create_report__V_14_14 == create_report__V_15_15);
#line 972 "create_report.m"
        if (create_report__succeeded)
#line 972 "create_report.m"
          {
#line 4726 "create_report.c"
            {
#line 4728 "create_report.c"
              create_report__succeeded = measurements____Unify____own_prof_info_0_0(create_report__V_4_4, create_report__V_7_7);
            }
#line 972 "create_report.m"
            if (create_report__succeeded)
#line 4733 "create_report.c"
              {
#line 4735 "create_report.c"
                return create_report__succeeded = measurements____Unify____inherit_prof_info_0_0(create_report__V_5_5, create_report__V_8_8);
              }
#line 972 "create_report.m"
          }
#line 972 "create_report.m"
      }
#line 972 "create_report.m"
    return create_report__succeeded;
#line 972 "create_report.m"
  }
#line 972 "create_report.m"
}

#line 1737 "create_report.m"
static MR_Word MR_CALL 
create_report__describe_clique_member_2_f_0(
#line 1737 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1737 "create_report.m"
  MR_Word create_report__PDPtr_5)
#line 1737 "create_report.m"
{
#line 1739 "create_report.m"
  {
#line 1739 "create_report.m"
    MR_bool create_report__succeeded;
#line 1739 "create_report.m"
    MR_Word create_report__ProcDesc_6;
#line 1739 "create_report.m"
    MR_Word create_report__PD_7;
#line 1739 "create_report.m"
    MR_Word create_report__V_8_8;
#line 1741 "create_report.m"
    MR_ArrayPtr create_report__V_9_9;
#line 1741 "create_report.m"
    MR_Word create_report__V_10_10;

#line 1740 "create_report.m"
    {
#line 1740 "create_report.m"
      profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__PD_7);
    }
#line 1741 "create_report.m"
    create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 0)));
#line 1741 "create_report.m"
    create_report__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 1)));
#line 1741 "create_report.m"
    create_report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 2)));
#line 1741 "create_report.m"
    {
#line 1741 "create_report.m"
      return create_report__ProcDesc_6 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__V_8_8);
    }
#line 1739 "create_report.m"
    return create_report__ProcDesc_6;
#line 1739 "create_report.m"
  }
#line 1737 "create_report.m"
}

#line 1665 "create_report.m"
static MR_Word MR_CALL 
create_report__describe_call_site_2_f_0(
#line 1665 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1665 "create_report.m"
  MR_Word create_report__CSSPtr_5)
#line 1665 "create_report.m"
{
#line 1667 "create_report.m"
  {
#line 1667 "create_report.m"
    MR_bool create_report__succeeded;
#line 1667 "create_report.m"
    MR_Word create_report__CallSiteDesc_6;
#line 1667 "create_report.m"
    MR_Word create_report__ContainingPSPtr_8;
#line 1667 "create_report.m"
    MR_Integer create_report__SlotNumber_9;
#line 1667 "create_report.m"
    MR_Integer create_report__LineNumber_11;
#line 1667 "create_report.m"
    MR_Word create_report__RevGoalPath_12;
#line 1667 "create_report.m"
    MR_String create_report__FileName_14;
#line 1667 "create_report.m"
    MR_String create_report__ModuleName_15;
#line 1667 "create_report.m"
    MR_String create_report__UnQualRefinedName_16;
#line 1667 "create_report.m"
    MR_String create_report__QualRefinedName_17;
#line 1667 "create_report.m"
    MR_Word create_report__MaybeCalleeDesc_21;

#line 1668 "create_report.m"
    {
#line 1668 "create_report.m"
      create_report__succeeded = profile__valid_call_site_static_ptr_2_p_0(create_report__Deep_4, create_report__CSSPtr_5);
    }
#line 1689 "create_report.m"
    if (create_report__succeeded)
#line 1669 "create_report.m"
      {
#line 1669 "create_report.m"
        MR_Word create_report__CSS_7;
#line 1669 "create_report.m"
        MR_Word create_report__Kind_10;
#line 1669 "create_report.m"
        MR_Word create_report__ContainingPS_13;
#line 1673 "create_report.m"
        MR_Word create_report__V_22_22;
#line 1673 "create_report.m"
        MR_String create_report__V_26_26;
#line 1673 "create_report.m"
        MR_Integer create_report__V_27_27;
#line 1673 "create_report.m"
        MR_Word create_report__V_28_28;
#line 1673 "create_report.m"
        MR_ArrayPtr create_report__V_29_29;
#line 1673 "create_report.m"
        MR_ArrayPtr create_report__V_30_30;
#line 1673 "create_report.m"
        MR_Word create_report__V_31_31;
#line 1673 "create_report.m"
        MR_Word create_report__V_32_32;

#line 1669 "create_report.m"
        {
#line 1669 "create_report.m"
          profile__deep_lookup_call_site_statics_3_p_0(create_report__Deep_4, create_report__CSSPtr_5, &create_report__CSS_7);
        }
#line 1670 "create_report.m"
        create_report__ContainingPSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 0)));
#line 1670 "create_report.m"
        create_report__SlotNumber_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 1)));
#line 1670 "create_report.m"
        create_report__Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 2)));
#line 1670 "create_report.m"
        create_report__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 3)));
#line 1670 "create_report.m"
        create_report__RevGoalPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 4)));
#line 1672 "create_report.m"
        {
#line 1672 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__ContainingPSPtr_8, &create_report__ContainingPS_13);
        }
#line 1673 "create_report.m"
        create_report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 0)));
#line 1673 "create_report.m"
        create_report__ModuleName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 1)));
#line 1673 "create_report.m"
        create_report__UnQualRefinedName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 2)));
#line 1673 "create_report.m"
        create_report__QualRefinedName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 3)));
#line 1673 "create_report.m"
        create_report__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 4)));
#line 1673 "create_report.m"
        create_report__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 5)));
#line 1673 "create_report.m"
        create_report__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 6)));
#line 1673 "create_report.m"
        create_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 7)));
#line 1673 "create_report.m"
        create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 8)));
#line 1673 "create_report.m"
        create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 9)));
#line 1673 "create_report.m"
        create_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 10)));
#line 1673 "create_report.m"
        create_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 11)));
#line 1681 "create_report.m"
        if (((MR_tag((MR_Word) create_report__Kind_10)) == (MR_mktag((MR_Integer) 1))))
#line 1678 "create_report.m"
          {
#line 1678 "create_report.m"
            MR_Word create_report__CalleePSPtr_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Kind_10, (MR_Integer) 0)));
#line 1678 "create_report.m"
            MR_Word create_report__CalleeDesc_20;
#line 1678 "create_report.m"
            MR_String create_report___TypeSubst_19 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__Kind_10, (MR_Integer) 1)));

#line 1679 "create_report.m"
            {
#line 1679 "create_report.m"
              create_report__CalleeDesc_20 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__CalleePSPtr_18);
            }
#line 1680 "create_report.m"
            {
#line 1680 "create_report.m"
              create_report__MaybeCalleeDesc_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1680 "create_report.m"
              MR_hl_field(MR_mktag(1), create_report__MaybeCalleeDesc_21, 0) = ((MR_Box) (create_report__CalleeDesc_20));
#line 1680 "create_report.m"
            }
#line 1678 "create_report.m"
          }
#line 1681 "create_report.m"
        else
#line 1687 "create_report.m"
          create_report__MaybeCalleeDesc_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1669 "create_report.m"
      }
#line 1689 "create_report.m"
    else
#line 1690 "create_report.m"
      {
#line 1690 "create_report.m"
        {
#line 1690 "create_report.m"
          create_report__ContainingPSPtr_8 = profile__dummy_proc_static_ptr_0_f_0();
        }
#line 1691 "create_report.m"
        create_report__FileName_14 = (MR_String) "";
#line 1692 "create_report.m"
        create_report__LineNumber_11 = (MR_Integer) 0;
#line 1693 "create_report.m"
        create_report__ModuleName_15 = (MR_String) "";
#line 1694 "create_report.m"
        create_report__UnQualRefinedName_16 = (MR_String) "mercury_runtime";
#line 1695 "create_report.m"
        create_report__QualRefinedName_17 = (MR_String) "mercury_runtime";
#line 1696 "create_report.m"
        create_report__SlotNumber_9 = (MR_Integer) -1;
#line 1697 "create_report.m"
        create_report__RevGoalPath_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1698 "create_report.m"
        create_report__MaybeCalleeDesc_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1690 "create_report.m"
      }
#line 1700 "create_report.m"
    {
#line 1700 "create_report.m"
      create_report__CallSiteDesc_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1700 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 0) = ((MR_Box) (create_report__CSSPtr_5));
#line 1700 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 1) = ((MR_Box) (create_report__ContainingPSPtr_8));
#line 1700 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 2) = ((MR_Box) (create_report__FileName_14));
#line 1700 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 3) = ((MR_Box) (create_report__LineNumber_11));
#line 1700 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 4) = ((MR_Box) (create_report__ModuleName_15));
#line 1700 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 5) = ((MR_Box) (create_report__UnQualRefinedName_16));
#line 1700 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 6) = ((MR_Box) (create_report__QualRefinedName_17));
#line 1700 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 7) = ((MR_Box) (create_report__SlotNumber_9));
#line 1700 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 8) = ((MR_Box) (create_report__RevGoalPath_12));
#line 1700 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 9) = ((MR_Box) (create_report__MaybeCalleeDesc_21));
#line 1700 "create_report.m"
    }
#line 1667 "create_report.m"
    return create_report__CallSiteDesc_6;
#line 1667 "create_report.m"
  }
#line 1665 "create_report.m"
}

#line 1634 "create_report.m"
static MR_Word MR_CALL 
create_report__percent_from_ints_2_f_0(
#line 1634 "create_report.m"
  MR_Integer create_report__Nom_4,
#line 1634 "create_report.m"
  MR_Integer create_report__Denom_5)
#line 1634 "create_report.m"
{
#line 1639 "create_report.m"
  {
#line 1639 "create_report.m"
    MR_bool create_report__succeeded = (create_report__Denom_5 == (MR_Integer) 0);
#line 1639 "create_report.m"
    MR_Word create_report__Percent_6;

#line 1639 "create_report.m"
    if (create_report__succeeded)
#line 1638 "create_report.m"
      {
#line 1638 "create_report.m"
        {
#line 1638 "create_report.m"
          return create_report__Percent_6 = measurement_units__percent_1_f_0((MR_Float) 0.0000000000000000);
        }
#line 1638 "create_report.m"
      }
#line 1639 "create_report.m"
    else
#line 1640 "create_report.m"
      {
#line 1640 "create_report.m"
        MR_Float create_report__V_8_8;
#line 1640 "create_report.m"
        MR_Float create_report__V_9_9;
#line 1640 "create_report.m"
        MR_Float create_report__V_10_10;

#line 1640 "create_report.m"
        {
#line 1640 "create_report.m"
          create_report__V_9_9 = mercury__float__float_1_f_0(create_report__Nom_4);
        }
#line 1640 "create_report.m"
        {
#line 1640 "create_report.m"
          create_report__V_10_10 = mercury__float__float_1_f_0(create_report__Denom_5);
        }
#line 1640 "create_report.m"
        {
#line 1640 "create_report.m"
          create_report__V_8_8 = mercury__float__f_slash_2_f_0(create_report__V_9_9, create_report__V_10_10);
        }
#line 1640 "create_report.m"
        {
#line 1640 "create_report.m"
          return create_report__Percent_6 = measurement_units__percent_1_f_0(create_report__V_8_8);
        }
#line 1640 "create_report.m"
      }
#line 1639 "create_report.m"
    return create_report__Percent_6;
#line 1639 "create_report.m"
  }
#line 1634 "create_report.m"
}

#line 1623 "create_report.m"
static MR_Float MR_CALL 
create_report__int_per_call_2_f_0(
#line 1623 "create_report.m"
  MR_Integer create_report__Num_4,
#line 1623 "create_report.m"
  MR_Integer create_report__Calls_5)
#line 1623 "create_report.m"
{
#line 1625 "create_report.m"
  {
#line 1625 "create_report.m"
    MR_bool create_report__succeeded = (create_report__Calls_5 == (MR_Integer) 0);
#line 1625 "create_report.m"
    MR_Float create_report__HeadVar__3_3;

#line 1625 "create_report.m"
    if (create_report__succeeded)
#line 1625 "create_report.m"
      create_report__HeadVar__3_3 = (MR_Float) 0.0000000000000000;
#line 1625 "create_report.m"
    else
#line 1629 "create_report.m"
      {
#line 1629 "create_report.m"
        MR_Float create_report__V_6_6;
#line 1629 "create_report.m"
        MR_Float create_report__V_7_7;

#line 1629 "create_report.m"
        {
#line 1629 "create_report.m"
          create_report__V_6_6 = mercury__float__float_1_f_0(create_report__Num_4);
        }
#line 1629 "create_report.m"
        {
#line 1629 "create_report.m"
          create_report__V_7_7 = mercury__float__float_1_f_0(create_report__Calls_5);
        }
#line 1625 "create_report.m"
        {
#line 1625 "create_report.m"
          return create_report__HeadVar__3_3 = mercury__float__f_slash_2_f_0(create_report__V_6_6, create_report__V_7_7);
        }
#line 1629 "create_report.m"
      }
#line 1625 "create_report.m"
    return create_report__HeadVar__3_3;
#line 1625 "create_report.m"
  }
#line 1623 "create_report.m"
}

#line 1513 "create_report.m"
static void MR_CALL 
create_report__psi_to_perf_row_data_3_p_0(
#line 1513 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1513 "create_report.m"
  MR_Integer create_report__PSI_5,
#line 1513 "create_report.m"
  MR_Word * create_report__RowData_6)
#line 1513 "create_report.m"
{
#line 1516 "create_report.m"
  {
#line 1516 "create_report.m"
    MR_bool create_report__succeeded;
#line 1516 "create_report.m"
    MR_Word create_report__PSPtr_7 = (MR_Word) create_report__PSI_5;
#line 1516 "create_report.m"
    MR_Word create_report__ProcDesc_8;
#line 1516 "create_report.m"
    MR_Word create_report__Own_9;
#line 1516 "create_report.m"
    MR_Word create_report__Desc_10;
#line 1516 "create_report.m"
    MR_Word create_report__V_17_17;

#line 1518 "create_report.m"
    {
#line 1518 "create_report.m"
      create_report__ProcDesc_8 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__PSPtr_7);
    }
#line 1519 "create_report.m"
    {
#line 1519 "create_report.m"
      profile__deep_lookup_ps_own_3_p_0(create_report__Deep_4, create_report__PSPtr_7, &create_report__Own_9);
    }
#line 1520 "create_report.m"
    {
#line 1520 "create_report.m"
      profile__deep_lookup_ps_desc_3_p_0(create_report__Deep_4, create_report__PSPtr_7, &create_report__Desc_10);
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_17_17, 0) = ((MR_Box) (create_report__Desc_10));
#line 1524 "create_report.m"
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__ProcDesc_8)), create_report__Own_9, create_report__V_17_17, create_report__RowData_6);
#line 1524 "create_report.m"
      return;
    }
#line 1516 "create_report.m"
  }
#line 1513 "create_report.m"
}

#line 1484 "create_report.m"
static void MR_CALL 
create_report__get_recursive_csd_cost_4_p_0(
#line 1484 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1484 "create_report.m"
  MR_Word create_report__CSDPtr_6,
#line 1484 "create_report.m"
  MR_Word create_report__RecursionType_7,
#line 1484 "create_report.m"
  MR_Word * create_report__MaybeCost_8)
#line 1484 "create_report.m"
{
#line 1489 "create_report.m"
  {
#line 1489 "create_report.m"
    MR_bool create_report__succeeded;

#line 1489 "create_report.m"
    if ((create_report__RecursionType_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1489 "create_report.m"
      {
#line 1490 "create_report.m"
        *create_report__MaybeCost_8 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_5[7]);
#line 1489 "create_report.m"
      }
#line 1489 "create_report.m"
    else
#line 1489 "create_report.m"
      if (((MR_tag((MR_Word) create_report__RecursionType_7)) == (MR_mktag((MR_Integer) 1))))
#line 1493 "create_report.m"
        {
#line 1493 "create_report.m"
          MR_Float create_report__AvgMaxDepth_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 2)));
#line 1493 "create_report.m"
          MR_Word create_report__CostFn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 4)));
#line 1493 "create_report.m"
          MR_Word create_report__Own_14;
#line 1493 "create_report.m"
          MR_Float create_report__Calls_15;
#line 1493 "create_report.m"
          MR_Integer create_report__V_24_24;
#line 1493 "create_report.m"
          MR_Float create_report__V_25_25;
#line 1493 "create_report.m"
          MR_Float create_report__V_26_26;
#line 1493 "create_report.m"
          MR_Integer create_report__V_27_27;
#line 1493 "create_report.m"
          MR_Integer create_report__V_28_28;
#line 1493 "create_report.m"
          MR_Word create_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 0)));
#line 1493 "create_report.m"
          MR_Word create_report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 1)));
#line 1493 "create_report.m"
          MR_Float create_report__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 3)));
#line 1496 "create_report.m"
          MR_Box MR_CALL (* create_report__func_0)(MR_Box, MR_Box);
#line 1496 "create_report.m"
          MR_Box create_report__conv1_V_26_26;

#line 1494 "create_report.m"
          {
#line 1494 "create_report.m"
            profile__deep_lookup_csd_own_3_p_0(create_report__Deep_5, create_report__CSDPtr_6, &create_report__Own_14);
          }
#line 1495 "create_report.m"
          {
#line 1495 "create_report.m"
            create_report__V_24_24 = measurements__calls_1_f_0(create_report__Own_14);
          }
#line 1495 "create_report.m"
          {
#line 1495 "create_report.m"
            create_report__Calls_15 = mercury__float__float_1_f_0(create_report__V_24_24);
          }
#line 1496 "create_report.m"
          {
#line 1496 "create_report.m"
            create_report__V_28_28 = mercury__float__round_to_int_1_f_0(create_report__AvgMaxDepth_11);
          }
#line 1496 "create_report.m"
          create_report__V_27_27 = (create_report__V_28_28 - (MR_Integer) 1);
#line 1496 "create_report.m"
          create_report__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), create_report__CostFn_13, (MR_Integer) 1)));
#line 1496 "create_report.m"
          {
#line 1496 "create_report.m"
            create_report__conv1_V_26_26 = create_report__func_0(((MR_Box) create_report__CostFn_13), ((MR_Box) (create_report__V_27_27)));
          }
#line 1496 "create_report.m"
          create_report__V_26_26 = MR_unbox_float(create_report__conv1_V_26_26);
#line 1496 "create_report.m"
          create_report__V_25_25 = (create_report__V_26_26 * create_report__Calls_15);
#line 1496 "create_report.m"
          {
#line 1496 "create_report.m"
            MR_Word base;
#line 1496 "create_report.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1496 "create_report.m"
            *create_report__MaybeCost_8 = base;
#line 1496 "create_report.m"
            MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(create_report__V_25_25);
#line 1496 "create_report.m"
          }
#line 1493 "create_report.m"
        }
#line 1489 "create_report.m"
      else
#line 1489 "create_report.m"
        if (((((MR_tag((MR_Word) create_report__RecursionType_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__RecursionType_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1504 "create_report.m"
          {
#line 1504 "create_report.m"
            MR_Word create_report__Errors_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__RecursionType_7, (MR_Integer) 1)));
#line 1504 "create_report.m"
            MR_String create_report__V_21_21;

#line 1505 "create_report.m"
            {
#line 1505 "create_report.m"
              create_report__V_21_21 = mercury__string__join_list_2_f_0((MR_String) "\n", create_report__Errors_20);
            }
#line 1505 "create_report.m"
            {
#line 1505 "create_report.m"
              MR_Word base;
#line 1505 "create_report.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1505 "create_report.m"
              *create_report__MaybeCost_8 = base;
#line 1505 "create_report.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__V_21_21));
#line 1505 "create_report.m"
            }
#line 1504 "create_report.m"
          }
#line 1489 "create_report.m"
        else
#line 1501 "create_report.m"
          {
#line 1502 "create_report.m"
            *create_report__MaybeCost_8 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_5[8]);
#line 1501 "create_report.m"
          }
#line 1489 "create_report.m"
  }
#line 1484 "create_report.m"
}

#line 1447 "create_report.m"
static void MR_CALL 
create_report__call_site_dynamic_var_use_arg_9_p_0(
#line 1447 "create_report.m"
  MR_Word create_report__Deep_10,
#line 1447 "create_report.m"
  MR_Word create_report__CSDPtr_11,
#line 1447 "create_report.m"
  MR_Word create_report__RecursionType_12,
#line 1447 "create_report.m"
  MR_Float create_report__Cost_13,
#line 1447 "create_report.m"
  MR_Word create_report__VarNameTable_14,
#line 1447 "create_report.m"
  MR_Word create_report__HeadVar_15,
#line 1447 "create_report.m"
  MR_Word * create_report__MaybeUseAndName_16,
#line 1447 "create_report.m"
  MR_Integer create_report__STATE_VARIABLE_ArgNum_0_26,
#line 1447 "create_report.m"
  MR_Integer * create_report__STATE_VARIABLE_ArgNum_27)
#line 1447 "create_report.m"
{
#line 1452 "create_report.m"
  {
#line 1452 "create_report.m"
    MR_bool create_report__succeeded;
#line 1452 "create_report.m"
    MR_Integer create_report__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__HeadVar_15, (MR_Integer) 0)));
#line 1452 "create_report.m"
    MR_Word create_report__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar_15, (MR_Integer) 1)));
#line 1452 "create_report.m"
    MR_Word create_report__UseType_20;
#line 1452 "create_report.m"
    MR_Word create_report__UseOptions_21;
#line 1452 "create_report.m"
    MR_Word create_report__MaybeUse_22;

#line 1454 "create_report.m"
    {
#line 1454 "create_report.m"
      var_use_analysis__var_mode_to_var_use_type_2_p_0(create_report__Mode_19, &create_report__UseType_20);
    }
#line 1456 "create_report.m"
    {
#line 1456 "create_report.m"
      create_report__UseOptions_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1456 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__UseOptions_21, 0) = ((MR_Box) (create_report__Deep_10));
#line 1456 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__UseOptions_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1456 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__UseOptions_21, 2) = ((MR_Box) (create_report__UseType_20));
#line 1456 "create_report.m"
    }
#line 1457 "create_report.m"
    {
#line 1457 "create_report.m"
      var_use_analysis__call_site_dynamic_var_use_info_6_p_1(create_report__CSDPtr_11, create_report__STATE_VARIABLE_ArgNum_0_26, create_report__RecursionType_12, create_report__Cost_13, create_report__UseOptions_21, &create_report__MaybeUse_22);
    }
#line 1463 "create_report.m"
    if (((MR_tag((MR_Word) create_report__MaybeUse_22)) == (MR_mktag((MR_Integer) 1))))
#line 1465 "create_report.m"
      *create_report__MaybeUseAndName_16 = (MR_Word) create_report__MaybeUse_22;
#line 1463 "create_report.m"
    else
#line 1460 "create_report.m"
      {
#line 1460 "create_report.m"
        MR_Word create_report__Use_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeUse_22, (MR_Integer) 0)));
#line 1460 "create_report.m"
        MR_String create_report__Name_24;
#line 1460 "create_report.m"
        MR_Word create_report__V_29_29;

#line 1461 "create_report.m"
        {
#line 1461 "create_report.m"
          mdbcomp__program_representation__lookup_var_name_3_p_0(create_report__VarNameTable_14, create_report__Var_18, &create_report__Name_24);
        }
#line 1462 "create_report.m"
        {
#line 1462 "create_report.m"
          create_report__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1462 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_29_29, 0) = ((MR_Box) (create_report__Name_24));
#line 1462 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_29_29, 1) = ((MR_Box) (create_report__Use_23));
#line 1462 "create_report.m"
        }
#line 1462 "create_report.m"
        {
#line 1462 "create_report.m"
          MR_Word base;
#line 1462 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1462 "create_report.m"
          *create_report__MaybeUseAndName_16 = base;
#line 1462 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__V_29_29));
#line 1462 "create_report.m"
        }
#line 1460 "create_report.m"
      }
#line 1467 "create_report.m"
    *create_report__STATE_VARIABLE_ArgNum_27 = (create_report__STATE_VARIABLE_ArgNum_0_26 + (MR_Integer) 1);
#line 1452 "create_report.m"
  }
#line 1447 "create_report.m"
}

#line 1728 "create_report.m"
static MR_Box MR_CALL 
create_report__create_clique_dump_report_3_p_0_1(
#line 1728 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1728 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1728 "create_report.m"
{
#line 1728 "create_report.m"
  {
#line 1728 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1728 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1728 "create_report.m"
    MR_Word create_report__conv0_ProcDesc_6;

#line 1728 "create_report.m"
    {
#line 1728 "create_report.m"
      create_report__conv0_ProcDesc_6 = create_report__describe_clique_member_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1728 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_ProcDesc_6));
#line 1728 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1728 "create_report.m"
  }
#line 1728 "create_report.m"
}

#line 1371 "create_report.m"
static void MR_CALL 
create_report__create_clique_dump_report_3_p_0(
#line 1371 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1371 "create_report.m"
  MR_Word create_report__CliquePtr_5,
#line 1371 "create_report.m"
  MR_Word * create_report__MaybeCliqueDumpInfo_6)
#line 1371 "create_report.m"
{
#line 1382 "create_report.m"
  {
#line 1382 "create_report.m"
    MR_bool create_report__succeeded;

#line 1375 "create_report.m"
    {
#line 1375 "create_report.m"
      create_report__succeeded = profile__valid_clique_ptr_2_p_0(create_report__Deep_4, create_report__CliquePtr_5);
    }
#line 1382 "create_report.m"
    if (create_report__succeeded)
#line 1376 "create_report.m"
      {
#line 1376 "create_report.m"
        MR_Word create_report__CliqueDesc_7;
#line 1376 "create_report.m"
        MR_Word create_report__ParentCSDPtr_8;
#line 1376 "create_report.m"
        MR_Word create_report__MemberPDPtrs_9;
#line 1376 "create_report.m"
        MR_Word create_report__CliqueDumpInfo_10;

#line 1715 "create_report.m"
        {
#line 1715 "create_report.m"
          create_report__succeeded = profile__valid_clique_ptr_2_p_0(create_report__Deep_4, create_report__CliquePtr_5);
        }
#line 1733 "create_report.m"
        if (create_report__succeeded)
#line 1716 "create_report.m"
          {
#line 1716 "create_report.m"
            MR_Word create_report__MemberPDPtrs_17;
#line 1716 "create_report.m"
            MR_Word create_report__ParentCSDPtr_18;
#line 1716 "create_report.m"
            MR_Word create_report__ParentCSD_19;
#line 1716 "create_report.m"
            MR_Word create_report__EntryPDPtr_20;
#line 1723 "create_report.m"
            MR_Word create_report__V_31_31;
#line 1723 "create_report.m"
            MR_Word create_report__V_32_32;
#line 1730 "create_report.m"
            MR_Word create_report__OtherPDPtrs_21;

#line 1716 "create_report.m"
            {
#line 1716 "create_report.m"
              profile__deep_lookup_clique_members_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__MemberPDPtrs_17);
            }
#line 1717 "create_report.m"
            {
#line 1717 "create_report.m"
              profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__ParentCSDPtr_18);
            }
#line 1718 "create_report.m"
            {
#line 1718 "create_report.m"
              profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__ParentCSDPtr_18, &create_report__ParentCSD_19);
            }
#line 1723 "create_report.m"
            create_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_19, (MR_Integer) 0)));
#line 1723 "create_report.m"
            create_report__EntryPDPtr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_19, (MR_Integer) 1)));
#line 1723 "create_report.m"
            create_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_19, (MR_Integer) 2)));
#line 1725 "create_report.m"
            {
#line 1725 "create_report.m"
              create_report__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, create_report__MemberPDPtrs_17, ((MR_Box) (create_report__EntryPDPtr_20)), &create_report__OtherPDPtrs_21);
            }
#line 1730 "create_report.m"
            if (create_report__succeeded)
#line 1726 "create_report.m"
              {
#line 1726 "create_report.m"
                MR_Word create_report__EntryProcDesc_22;
#line 1726 "create_report.m"
                MR_Word create_report__OtherProcDescs_23;
#line 1726 "create_report.m"
                MR_Word create_report__V_24_24;
#line 1726 "create_report.m"
                MR_Word create_report__PD_41;
#line 1726 "create_report.m"
                MR_Word create_report__V_42_42;
#line 1741 "create_report.m"
                MR_ArrayPtr create_report__V_43_43;
#line 1741 "create_report.m"
                MR_Word create_report__V_44_44;

#line 1740 "create_report.m"
                {
#line 1740 "create_report.m"
                  profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__EntryPDPtr_20, &create_report__PD_41);
                }
#line 1741 "create_report.m"
                create_report__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_41, (MR_Integer) 0)));
#line 1741 "create_report.m"
                create_report__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_41, (MR_Integer) 1)));
#line 1741 "create_report.m"
                create_report__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_41, (MR_Integer) 2)));
#line 1741 "create_report.m"
                {
#line 1741 "create_report.m"
                  create_report__EntryProcDesc_22 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__V_42_42);
                }
#line 1728 "create_report.m"
                {
#line 1728 "create_report.m"
                  create_report__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1728 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__V_24_24, 0) = ((MR_Box) (&create_report_scalar_common_4[2]));
#line 1728 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__V_24_24, 1) = ((MR_Box) (create_report__create_clique_dump_report_3_p_0_1));
#line 1728 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1728 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__V_24_24, 3) = ((MR_Box) (create_report__Deep_4));
#line 1728 "create_report.m"
                }
#line 1727 "create_report.m"
                {
#line 1727 "create_report.m"
                  create_report__OtherProcDescs_23 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &report__report__type_ctor_info_proc_desc_0, create_report__V_24_24, create_report__OtherPDPtrs_21);
                }
#line 1729 "create_report.m"
                {
#line 1729 "create_report.m"
                  create_report__CliqueDesc_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1729 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__CliqueDesc_7, 0) = ((MR_Box) (create_report__CliquePtr_5));
#line 1729 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__CliqueDesc_7, 1) = ((MR_Box) (create_report__EntryProcDesc_22));
#line 1729 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__CliqueDesc_7, 2) = ((MR_Box) (create_report__OtherProcDescs_23));
#line 1729 "create_report.m"
                }
#line 1726 "create_report.m"
              }
#line 1730 "create_report.m"
            else
#line 1731 "create_report.m"
              {
#line 1731 "create_report.m"
                {
#line 1731 "create_report.m"
                  mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "entry pdptr not a member");
#line 1731 "create_report.m"
                  return;
                }
#line 1731 "create_report.m"
              }
#line 1716 "create_report.m"
          }
#line 1733 "create_report.m"
        else
#line 1734 "create_report.m"
          {
#line 1734 "create_report.m"
            {
#line 1734 "create_report.m"
              mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "invalid clique_ptr");
#line 1734 "create_report.m"
              return;
            }
#line 1734 "create_report.m"
          }
#line 1377 "create_report.m"
        {
#line 1377 "create_report.m"
          profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__ParentCSDPtr_8);
        }
#line 1378 "create_report.m"
        {
#line 1378 "create_report.m"
          profile__deep_lookup_clique_members_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__MemberPDPtrs_9);
        }
#line 1379 "create_report.m"
        {
#line 1379 "create_report.m"
          create_report__CliqueDumpInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1379 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CliqueDumpInfo_10, 0) = ((MR_Box) (create_report__CliqueDesc_7));
#line 1379 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CliqueDumpInfo_10, 1) = ((MR_Box) (create_report__ParentCSDPtr_8));
#line 1379 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CliqueDumpInfo_10, 2) = ((MR_Box) (create_report__MemberPDPtrs_9));
#line 1379 "create_report.m"
        }
#line 1381 "create_report.m"
        {
#line 1381 "create_report.m"
          MR_Word base;
#line 1381 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1381 "create_report.m"
          *create_report__MaybeCliqueDumpInfo_6 = base;
#line 1381 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__CliqueDumpInfo_10));
#line 1381 "create_report.m"
        }
#line 1376 "create_report.m"
      }
#line 1382 "create_report.m"
    else
#line 1383 "create_report.m"
      {
#line 1383 "create_report.m"
        *create_report__MaybeCliqueDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_5[6]);
#line 1383 "create_report.m"
      }
#line 1382 "create_report.m"
  }
#line 1371 "create_report.m"
}

#line 1350 "create_report.m"
static void MR_CALL 
create_report__create_call_site_dynamic_dump_report_3_p_0(
#line 1350 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1350 "create_report.m"
  MR_Word create_report__CSDPtr_5,
#line 1350 "create_report.m"
  MR_Word * create_report__MaybeCallSiteDynamicDumpInfo_6)
#line 1350 "create_report.m"
{
#line 1367 "create_report.m"
  {
#line 1367 "create_report.m"
    MR_bool create_report__succeeded;

#line 1356 "create_report.m"
    {
#line 1356 "create_report.m"
      create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__CSDPtr_5);
    }
#line 1367 "create_report.m"
    if (create_report__succeeded)
#line 1357 "create_report.m"
      {
#line 1357 "create_report.m"
        MR_Word create_report__CSD_7;
#line 1357 "create_report.m"
        MR_Word create_report__CallerPSPtr_8;
#line 1357 "create_report.m"
        MR_Word create_report__CalleePSDPtr_9;
#line 1357 "create_report.m"
        MR_Word create_report__Own_10;
#line 1357 "create_report.m"
        MR_Word create_report__Desc_11;
#line 1357 "create_report.m"
        MR_Word create_report__CSSPtr_12;
#line 1357 "create_report.m"
        MR_Word create_report__CallSiteDesc_13;
#line 1357 "create_report.m"
        MR_Word create_report__PerfRowData_14;
#line 1357 "create_report.m"
        MR_Word create_report__CallSiteDynamicDumpInfo_15;
#line 1357 "create_report.m"
        MR_Word create_report__V_23_23;

#line 1357 "create_report.m"
        {
#line 1357 "create_report.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__CSD_7);
        }
#line 1358 "create_report.m"
        create_report__CallerPSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 0)));
#line 1358 "create_report.m"
        create_report__CalleePSDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 1)));
#line 1358 "create_report.m"
        create_report__Own_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 2)));
#line 1359 "create_report.m"
        {
#line 1359 "create_report.m"
          create_report__Desc_11 = measurements__zero_inherit_prof_info_0_f_0();
        }
#line 1360 "create_report.m"
        {
#line 1360 "create_report.m"
          profile__deep_lookup_call_site_static_map_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__CSSPtr_12);
        }
#line 1361 "create_report.m"
        {
#line 1361 "create_report.m"
          create_report__CallSiteDesc_13 = create_report__describe_call_site_2_f_0(create_report__Deep_4, create_report__CSSPtr_12);
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_23_23, 0) = ((MR_Box) (create_report__Desc_11));
#line 1524 "create_report.m"
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_13)), create_report__Own_10, create_report__V_23_23, &create_report__PerfRowData_14);
        }
#line 1364 "create_report.m"
        {
#line 1364 "create_report.m"
          create_report__CallSiteDynamicDumpInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1364 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteDynamicDumpInfo_15, 0) = ((MR_Box) (create_report__CSDPtr_5));
#line 1364 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteDynamicDumpInfo_15, 1) = ((MR_Box) (create_report__CallerPSPtr_8));
#line 1364 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteDynamicDumpInfo_15, 2) = ((MR_Box) (create_report__CalleePSDPtr_9));
#line 1364 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteDynamicDumpInfo_15, 3) = ((MR_Box) (create_report__PerfRowData_14));
#line 1364 "create_report.m"
        }
#line 1366 "create_report.m"
        {
#line 1366 "create_report.m"
          MR_Word base;
#line 1366 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1366 "create_report.m"
          *create_report__MaybeCallSiteDynamicDumpInfo_6 = base;
#line 1366 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__CallSiteDynamicDumpInfo_15));
#line 1366 "create_report.m"
        }
#line 1357 "create_report.m"
      }
#line 1367 "create_report.m"
    else
#line 1368 "create_report.m"
      {
#line 1368 "create_report.m"
        *create_report__MaybeCallSiteDynamicDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_5[5]);
#line 1368 "create_report.m"
      }
#line 1367 "create_report.m"
  }
#line 1350 "create_report.m"
}

#line 1334 "create_report.m"
static void MR_CALL 
create_report__create_call_site_static_dump_report_3_p_0(
#line 1334 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1334 "create_report.m"
  MR_Word create_report__CSSPtr_5,
#line 1334 "create_report.m"
  MR_Word * create_report__MaybeCallSiteStaticDumpInfo_6)
#line 1334 "create_report.m"
{
#line 1346 "create_report.m"
  {
#line 1346 "create_report.m"
    MR_bool create_report__succeeded;

#line 1339 "create_report.m"
    {
#line 1339 "create_report.m"
      create_report__succeeded = profile__valid_call_site_static_ptr_2_p_0(create_report__Deep_4, create_report__CSSPtr_5);
    }
#line 1346 "create_report.m"
    if (create_report__succeeded)
#line 1340 "create_report.m"
      {
#line 1340 "create_report.m"
        MR_Word create_report__CSS_7;
#line 1340 "create_report.m"
        MR_Word create_report__ContainingPSPtr_8;
#line 1340 "create_report.m"
        MR_Integer create_report__SlotNumber_9;
#line 1340 "create_report.m"
        MR_Word create_report__CallSiteKind_10;
#line 1340 "create_report.m"
        MR_Integer create_report__LineNumber_11;
#line 1340 "create_report.m"
        MR_Word create_report__GoalPath_12;
#line 1340 "create_report.m"
        MR_Word create_report__CallSiteStaticDumpInfo_13;

#line 1340 "create_report.m"
        {
#line 1340 "create_report.m"
          profile__deep_lookup_call_site_statics_3_p_0(create_report__Deep_4, create_report__CSSPtr_5, &create_report__CSS_7);
        }
#line 1341 "create_report.m"
        create_report__ContainingPSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 0)));
#line 1341 "create_report.m"
        create_report__SlotNumber_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 1)));
#line 1341 "create_report.m"
        create_report__CallSiteKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 2)));
#line 1341 "create_report.m"
        create_report__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 3)));
#line 1341 "create_report.m"
        create_report__GoalPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 4)));
#line 1343 "create_report.m"
        {
#line 1343 "create_report.m"
          create_report__CallSiteStaticDumpInfo_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 0) = ((MR_Box) (create_report__CSSPtr_5));
#line 1343 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 1) = ((MR_Box) (create_report__ContainingPSPtr_8));
#line 1343 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 2) = ((MR_Box) (create_report__SlotNumber_9));
#line 1343 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 3) = ((MR_Box) (create_report__LineNumber_11));
#line 1343 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 4) = ((MR_Box) (create_report__GoalPath_12));
#line 1343 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 5) = ((MR_Box) (create_report__CallSiteKind_10));
#line 1343 "create_report.m"
        }
#line 1345 "create_report.m"
        {
#line 1345 "create_report.m"
          MR_Word base;
#line 1345 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1345 "create_report.m"
          *create_report__MaybeCallSiteStaticDumpInfo_6 = base;
#line 1345 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__CallSiteStaticDumpInfo_13));
#line 1345 "create_report.m"
        }
#line 1340 "create_report.m"
      }
#line 1346 "create_report.m"
    else
#line 1347 "create_report.m"
      {
#line 1347 "create_report.m"
        *create_report__MaybeCallSiteStaticDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_5[4]);
#line 1347 "create_report.m"
      }
#line 1346 "create_report.m"
  }
#line 1334 "create_report.m"
}

#line 1304 "create_report.m"
static void MR_CALL 
create_report__create_proc_dynamic_dump_report_3_p_0(
#line 1304 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1304 "create_report.m"
  MR_Word create_report__PDPtr_5,
#line 1304 "create_report.m"
  MR_Word * create_report__MaybeProcDynamicDumpInfo_6)
#line 1304 "create_report.m"
{
#line 1330 "create_report.m"
  {
#line 1330 "create_report.m"
    MR_bool create_report__succeeded;

#line 1308 "create_report.m"
    {
#line 1308 "create_report.m"
      create_report__succeeded = profile__valid_proc_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__PDPtr_5);
    }
#line 1330 "create_report.m"
    if (create_report__succeeded)
#line 1309 "create_report.m"
      {
#line 1309 "create_report.m"
        MR_Word create_report__PD_7;
#line 1309 "create_report.m"
        MR_Word create_report__PSPtr_8;
#line 1309 "create_report.m"
        MR_ArrayPtr create_report__CallSiteArray_9;
#line 1309 "create_report.m"
        MR_Word create_report__MaybeCPCounts_10;
#line 1309 "create_report.m"
        MR_Word create_report__PS_11;
#line 1309 "create_report.m"
        MR_String create_report__RawName_12;
#line 1309 "create_report.m"
        MR_String create_report__ModuleName_13;
#line 1309 "create_report.m"
        MR_String create_report__UnQualRefinedName_14;
#line 1309 "create_report.m"
        MR_String create_report__QualRefinedName_15;
#line 1309 "create_report.m"
        MR_Word create_report__CallSites_16;
#line 1309 "create_report.m"
        MR_Word create_report__MaybeCPs_20;
#line 1309 "create_report.m"
        MR_Word create_report__ProcDynamicDumpInfo_21;
#line 1312 "create_report.m"
        MR_Word create_report__V_23_23;
#line 1312 "create_report.m"
        MR_String create_report__V_27_27;
#line 1312 "create_report.m"
        MR_Integer create_report__V_28_28;
#line 1312 "create_report.m"
        MR_Word create_report__V_29_29;
#line 1312 "create_report.m"
        MR_ArrayPtr create_report__V_30_30;
#line 1312 "create_report.m"
        MR_ArrayPtr create_report__V_31_31;
#line 1312 "create_report.m"
        MR_Word create_report__V_32_32;
#line 1312 "create_report.m"
        MR_Word create_report__V_33_33;

#line 1309 "create_report.m"
        {
#line 1309 "create_report.m"
          profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__PD_7);
        }
#line 1310 "create_report.m"
        create_report__PSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 0)));
#line 1310 "create_report.m"
        create_report__CallSiteArray_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 1)));
#line 1310 "create_report.m"
        create_report__MaybeCPCounts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 2)));
#line 1311 "create_report.m"
        {
#line 1311 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_8, &create_report__PS_11);
        }
#line 1312 "create_report.m"
        create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 0)));
#line 1312 "create_report.m"
        create_report__ModuleName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 1)));
#line 1312 "create_report.m"
        create_report__UnQualRefinedName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 2)));
#line 1312 "create_report.m"
        create_report__QualRefinedName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 3)));
#line 1312 "create_report.m"
        create_report__RawName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 4)));
#line 1312 "create_report.m"
        create_report__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 5)));
#line 1312 "create_report.m"
        create_report__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 6)));
#line 1312 "create_report.m"
        create_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 7)));
#line 1312 "create_report.m"
        create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 8)));
#line 1312 "create_report.m"
        create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 9)));
#line 1312 "create_report.m"
        create_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 10)));
#line 1312 "create_report.m"
        create_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 11)));
#line 1316 "create_report.m"
        {
#line 1316 "create_report.m"
          mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) create_report__CallSiteArray_9, &create_report__CallSites_16);
        }
#line 1322 "create_report.m"
        if ((create_report__MaybeCPCounts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1324 "create_report.m"
          create_report__MaybeCPs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1322 "create_report.m"
        else
#line 1318 "create_report.m"
          {
#line 1318 "create_report.m"
            MR_ArrayPtr create_report__CPCounts_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__MaybeCPCounts_10, (MR_Integer) 0)));
#line 1318 "create_report.m"
            MR_ArrayPtr create_report__CPInfos_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 9)));
#line 1318 "create_report.m"
            MR_Word create_report__CPs_19;
#line 1319 "create_report.m"
            MR_Word create_report__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 0)));
#line 1319 "create_report.m"
            MR_String create_report__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 1)));
#line 1319 "create_report.m"
            MR_String create_report__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 2)));
#line 1319 "create_report.m"
            MR_String create_report__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 3)));
#line 1319 "create_report.m"
            MR_String create_report__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 4)));
#line 1319 "create_report.m"
            MR_String create_report__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 5)));
#line 1319 "create_report.m"
            MR_Integer create_report__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 6)));
#line 1319 "create_report.m"
            MR_Word create_report__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 7)));
#line 1319 "create_report.m"
            MR_ArrayPtr create_report__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 8)));
#line 1319 "create_report.m"
            MR_Word create_report__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 10)));
#line 1319 "create_report.m"
            MR_Word create_report__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 11)));

#line 1320 "create_report.m"
            {
#line 1320 "create_report.m"
              coverage__coverage_point_arrays_to_list_3_p_0(create_report__CPInfos_18, create_report__CPCounts_17, &create_report__CPs_19);
            }
#line 1321 "create_report.m"
            {
#line 1321 "create_report.m"
              create_report__MaybeCPs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1321 "create_report.m"
              MR_hl_field(MR_mktag(1), create_report__MaybeCPs_20, 0) = ((MR_Box) (create_report__CPs_19));
#line 1321 "create_report.m"
            }
#line 1318 "create_report.m"
          }
#line 1326 "create_report.m"
        {
#line 1326 "create_report.m"
          create_report__ProcDynamicDumpInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1326 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 0) = ((MR_Box) (create_report__PDPtr_5));
#line 1326 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 1) = ((MR_Box) (create_report__PSPtr_8));
#line 1326 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 2) = ((MR_Box) (create_report__RawName_12));
#line 1326 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 3) = ((MR_Box) (create_report__ModuleName_13));
#line 1326 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 4) = ((MR_Box) (create_report__UnQualRefinedName_14));
#line 1326 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 5) = ((MR_Box) (create_report__QualRefinedName_15));
#line 1326 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 6) = ((MR_Box) (create_report__CallSites_16));
#line 1326 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 7) = ((MR_Box) (create_report__MaybeCPs_20));
#line 1326 "create_report.m"
        }
#line 1329 "create_report.m"
        {
#line 1329 "create_report.m"
          MR_Word base;
#line 1329 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1329 "create_report.m"
          *create_report__MaybeProcDynamicDumpInfo_6 = base;
#line 1329 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcDynamicDumpInfo_21));
#line 1329 "create_report.m"
        }
#line 1309 "create_report.m"
      }
#line 1330 "create_report.m"
    else
#line 1331 "create_report.m"
      {
#line 1331 "create_report.m"
        *create_report__MaybeProcDynamicDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_5[3]);
#line 1331 "create_report.m"
      }
#line 1330 "create_report.m"
  }
#line 1304 "create_report.m"
}

#line 1281 "create_report.m"
static void MR_CALL 
create_report__create_proc_static_dump_report_3_p_0(
#line 1281 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1281 "create_report.m"
  MR_Word create_report__PSPtr_5,
#line 1281 "create_report.m"
  MR_Word * create_report__MaybeProcStaticDumpInfo_6)
#line 1281 "create_report.m"
{
#line 1300 "create_report.m"
  {
#line 1300 "create_report.m"
    MR_bool create_report__succeeded;

#line 1285 "create_report.m"
    {
#line 1285 "create_report.m"
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_4, create_report__PSPtr_5);
    }
#line 1300 "create_report.m"
    if (create_report__succeeded)
#line 1286 "create_report.m"
      {
#line 1286 "create_report.m"
        MR_Word create_report__PS_7;
#line 1286 "create_report.m"
        MR_String create_report__UnQualRefinedName_10;
#line 1286 "create_report.m"
        MR_String create_report__QualRefinedName_11;
#line 1286 "create_report.m"
        MR_String create_report__RawName_12;
#line 1286 "create_report.m"
        MR_String create_report__FileName_13;
#line 1286 "create_report.m"
        MR_Integer create_report__LineNumber_14;
#line 1286 "create_report.m"
        MR_ArrayPtr create_report__CallSites_16;
#line 1286 "create_report.m"
        MR_ArrayPtr create_report__CoveragePointInfos_17;
#line 1286 "create_report.m"
        MR_Integer create_report__MaxCallSiteIdx_20;
#line 1286 "create_report.m"
        MR_Integer create_report__NumCallSites_21;
#line 1286 "create_report.m"
        MR_Integer create_report__MaxCoveragePointIdx_22;
#line 1286 "create_report.m"
        MR_Integer create_report__NumCoveragePoints_23;
#line 1286 "create_report.m"
        MR_Word create_report__ProcStaticDumpInfo_24;
#line 1288 "create_report.m"
        MR_Word create_report___ProcId_8;
#line 1288 "create_report.m"
        MR_String create_report___DeclModule_9;
#line 1288 "create_report.m"
        MR_Word create_report___InInterface_15;
#line 1288 "create_report.m"
        MR_Word create_report___MaybeCoveragePoints_18;
#line 1288 "create_report.m"
        MR_Word create_report___IsZeroed_19;

#line 1286 "create_report.m"
        {
#line 1286 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__PS_7);
        }
#line 1288 "create_report.m"
        create_report___ProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 0)));
#line 1288 "create_report.m"
        create_report___DeclModule_9 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 1)));
#line 1288 "create_report.m"
        create_report__UnQualRefinedName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 2)));
#line 1288 "create_report.m"
        create_report__QualRefinedName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 3)));
#line 1288 "create_report.m"
        create_report__RawName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 4)));
#line 1288 "create_report.m"
        create_report__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 5)));
#line 1288 "create_report.m"
        create_report__LineNumber_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 6)));
#line 1288 "create_report.m"
        create_report___InInterface_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 7)));
#line 1288 "create_report.m"
        create_report__CallSites_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 8)));
#line 1288 "create_report.m"
        create_report__CoveragePointInfos_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 9)));
#line 1288 "create_report.m"
        create_report___MaybeCoveragePoints_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 10)));
#line 1288 "create_report.m"
        create_report___IsZeroed_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 11)));
#line 1292 "create_report.m"
        {
#line 1292 "create_report.m"
          mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) create_report__CallSites_16, &create_report__MaxCallSiteIdx_20);
        }
#line 1293 "create_report.m"
        create_report__NumCallSites_21 = (create_report__MaxCallSiteIdx_20 + (MR_Integer) 1);
#line 1294 "create_report.m"
        {
#line 1294 "create_report.m"
          mercury__array__max_2_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_ArrayPtr) create_report__CoveragePointInfos_17, &create_report__MaxCoveragePointIdx_22);
        }
#line 1295 "create_report.m"
        create_report__NumCoveragePoints_23 = (create_report__MaxCoveragePointIdx_22 + (MR_Integer) 1);
#line 1296 "create_report.m"
        {
#line 1296 "create_report.m"
          create_report__ProcStaticDumpInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1296 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 0) = ((MR_Box) (create_report__PSPtr_5));
#line 1296 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 1) = ((MR_Box) (create_report__RawName_12));
#line 1296 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 2) = ((MR_Box) (create_report__UnQualRefinedName_10));
#line 1296 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 3) = ((MR_Box) (create_report__QualRefinedName_11));
#line 1296 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 4) = ((MR_Box) (create_report__FileName_13));
#line 1296 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 5) = ((MR_Box) (create_report__LineNumber_14));
#line 1296 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 6) = ((MR_Box) (create_report__NumCallSites_21));
#line 1296 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 7) = ((MR_Box) (create_report__NumCoveragePoints_23));
#line 1296 "create_report.m"
        }
#line 1299 "create_report.m"
        {
#line 1299 "create_report.m"
          MR_Word base;
#line 1299 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "create_report.m"
          *create_report__MaybeProcStaticDumpInfo_6 = base;
#line 1299 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcStaticDumpInfo_24));
#line 1299 "create_report.m"
        }
#line 1286 "create_report.m"
      }
#line 1300 "create_report.m"
    else
#line 1301 "create_report.m"
      {
#line 1301 "create_report.m"
        *create_report__MaybeProcStaticDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_5[0]);
#line 1301 "create_report.m"
      }
#line 1300 "create_report.m"
  }
#line 1281 "create_report.m"
}

#line 1264 "create_report.m"
static void MR_CALL 
create_report__maybe_create_procrep_coverage_report_6_p_0_1(
#line 1264 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1264 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1264 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 1264 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 1264 "create_report.m"
  MR_Box create_report__wrapper_arg_4,
#line 1264 "create_report.m"
  MR_Box * create_report__wrapper_arg_5)
#line 1264 "create_report.m"
{
#line 1264 "create_report.m"
  {
#line 1264 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1264 "create_report.m"
    MR_Word create_report__conv1_HeadVar__3_3;
#line 1264 "create_report.m"
    MR_Word create_report__conv0_HeadVar__5_5;

#line 1264 "create_report.m"
    {
#line 1264 "create_report.m"
      coverage__add_coverage_point_to_map_5_p_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv1_HeadVar__3_3, ((MR_Word) create_report__wrapper_arg_4), &create_report__conv0_HeadVar__5_5);
    }
#line 1264 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_HeadVar__3_3));
#line 1264 "create_report.m"
    *create_report__wrapper_arg_5 = ((MR_Box) (create_report__conv0_HeadVar__5_5));
#line 1264 "create_report.m"
  }
#line 1264 "create_report.m"
}

#line 1245 "create_report.m"
static void MR_CALL 
create_report__maybe_create_procrep_coverage_report_6_p_0(
#line 1245 "create_report.m"
  MR_Word create_report__TypeInfo_for_Callee_63,
#line 1245 "create_report.m"
  MR_Word create_report__Deep_1,
#line 1245 "create_report.m"
  MR_Word create_report__PSPtr_2,
#line 1245 "create_report.m"
  MR_Word create_report__Own_3,
#line 1245 "create_report.m"
  MR_Word create_report__HeadVar__4_4,
#line 1245 "create_report.m"
  MR_Word create_report__CallSitesMap_5,
#line 1245 "create_report.m"
  MR_Word * create_report__HeadVar__6_6)
#line 1245 "create_report.m"
{
#line 1250 "create_report.m"
  {
#line 1250 "create_report.m"
    MR_bool create_report__succeeded;

#line 1250 "create_report.m"
    if ((create_report__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1250 "create_report.m"
      {
#line 1250 "create_report.m"
        *create_report__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_5[2]);
#line 1250 "create_report.m"
      }
#line 1250 "create_report.m"
    else
#line 1253 "create_report.m"
      {
#line 1253 "create_report.m"
        MR_ArrayPtr create_report__CoveragePointsArray_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__HeadVar__4_4, (MR_Integer) 0)));
#line 1253 "create_report.m"
        MR_Word create_report__PS_18;
#line 1253 "create_report.m"
        MR_Word create_report__CoveragePoints_19;
#line 1253 "create_report.m"
        MR_Word create_report__MaybeProcRep0_20;
#line 1253 "create_report.m"
        MR_ArrayPtr create_report__V_31_31;
#line 1255 "create_report.m"
        MR_Word create_report__V_39_39;
#line 1255 "create_report.m"
        MR_String create_report__V_40_40;
#line 1255 "create_report.m"
        MR_String create_report__V_41_41;
#line 1255 "create_report.m"
        MR_String create_report__V_42_42;
#line 1255 "create_report.m"
        MR_String create_report__V_43_43;
#line 1255 "create_report.m"
        MR_String create_report__V_44_44;
#line 1255 "create_report.m"
        MR_Integer create_report__V_45_45;
#line 1255 "create_report.m"
        MR_Word create_report__V_46_46;
#line 1255 "create_report.m"
        MR_ArrayPtr create_report__V_47_47;
#line 1255 "create_report.m"
        MR_Word create_report__V_48_48;
#line 1255 "create_report.m"
        MR_Word create_report__V_49_49;

#line 1254 "create_report.m"
        {
#line 1254 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_1, create_report__PSPtr_2, &create_report__PS_18);
        }
#line 1255 "create_report.m"
        create_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 0)));
#line 1255 "create_report.m"
        create_report__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 1)));
#line 1255 "create_report.m"
        create_report__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 2)));
#line 1255 "create_report.m"
        create_report__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 3)));
#line 1255 "create_report.m"
        create_report__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 4)));
#line 1255 "create_report.m"
        create_report__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 5)));
#line 1255 "create_report.m"
        create_report__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 6)));
#line 1255 "create_report.m"
        create_report__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 7)));
#line 1255 "create_report.m"
        create_report__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 8)));
#line 1255 "create_report.m"
        create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 9)));
#line 1255 "create_report.m"
        create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 10)));
#line 1255 "create_report.m"
        create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 11)));
#line 1255 "create_report.m"
        {
#line 1255 "create_report.m"
          coverage__coverage_point_arrays_to_list_3_p_0(create_report__V_31_31, create_report__CoveragePointsArray_15, &create_report__CoveragePoints_19);
        }
#line 1257 "create_report.m"
        {
#line 1257 "create_report.m"
          analysis_utils__deep_get_maybe_procrep_3_p_0(create_report__Deep_1, create_report__PSPtr_2, &create_report__MaybeProcRep0_20);
        }
#line 1261 "create_report.m"
        if (((MR_tag((MR_Word) create_report__MaybeProcRep0_20)) == (MR_mktag((MR_Integer) 1))))
#line 1260 "create_report.m"
          *create_report__HeadVar__6_6 = (MR_Word) create_report__MaybeProcRep0_20;
#line 1261 "create_report.m"
        else
#line 1262 "create_report.m"
          {
#line 1262 "create_report.m"
            MR_Word create_report__TypeCtorInfo_69_69 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 1262 "create_report.m"
            MR_Word create_report__TypeCtorInfo_70_70 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0;
#line 1262 "create_report.m"
            MR_Word create_report__TypeInfo_71_71;
#line 1262 "create_report.m"
            MR_Word create_report__ProcRep0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeProcRep0_20, (MR_Integer) 0)));
#line 1262 "create_report.m"
            MR_Word create_report__SolnsCoveragePointMap_23;
#line 1262 "create_report.m"
            MR_Word create_report__BranchCoveragePointMap_24;
#line 1262 "create_report.m"
            MR_Word create_report__Goal0_25;
#line 1262 "create_report.m"
            MR_Word create_report__LastGoalId_26;
#line 1262 "create_report.m"
            MR_Word create_report__ContainingGoalMap_27;
#line 1262 "create_report.m"
            MR_Word create_report__Goal_28;
#line 1262 "create_report.m"
            MR_Word create_report__ProcRep_29;
#line 1262 "create_report.m"
            MR_Word create_report__CoverageArray_30;
#line 1262 "create_report.m"
            MR_Word create_report__V_33_33;
#line 1262 "create_report.m"
            MR_Word create_report__V_34_34;
#line 1262 "create_report.m"
            MR_Word create_report__V_35_35;
#line 1262 "create_report.m"
            MR_Word create_report__V_36_36;
#line 1262 "create_report.m"
            MR_Word create_report__V_37_37;
#line 1262 "create_report.m"
            MR_Word create_report__V_38_38;
#line 1262 "create_report.m"
            MR_Word create_report__V_55_55;
#line 1264 "create_report.m"
            MR_Box create_report__conv3_SolnsCoveragePointMap_23;
#line 1264 "create_report.m"
            MR_Box create_report__conv2_BranchCoveragePointMap_24;
#line 1267 "create_report.m"
            MR_Word create_report__V_50_50;
#line 1267 "create_report.m"
            MR_Word create_report__V_51_51;
#line 1267 "create_report.m"
            MR_Word create_report__V_52_52;
#line 1267 "create_report.m"
            MR_Word create_report__V_53_53;
#line 1267 "create_report.m"
            MR_Word create_report__V_54_54;
#line 1269 "create_report.m"
            MR_Word create_report__V_56_56;
#line 1269 "create_report.m"
            MR_Word create_report__V_58_58;
#line 1269 "create_report.m"
            MR_Word create_report__V_59_59;
#line 1269 "create_report.m"
            MR_Word create_report__V_60_60;
#line 1269 "create_report.m"
            MR_Word create_report__V_57_57;

#line 1264 "create_report.m"
            {
#line 1264 "create_report.m"
              create_report__V_33_33 = mercury__map__init_0_f_0(create_report__TypeCtorInfo_69_69, create_report__TypeCtorInfo_70_70);
            }
#line 1264 "create_report.m"
            {
#line 1264 "create_report.m"
              create_report__V_34_34 = mercury__map__init_0_f_0(create_report__TypeCtorInfo_69_69, create_report__TypeCtorInfo_70_70);
            }
#line 6523 "create_report.c"
            create_report__TypeInfo_71_71 = (MR_Word) &create_report_scalar_common_2[17];
#line 1264 "create_report.m"
            {
#line 1264 "create_report.m"
              mercury__list__foldl2_6_p_0(create_report__TypeCtorInfo_70_70, create_report__TypeInfo_71_71, create_report__TypeInfo_71_71, (MR_Word) &create_report_scalar_common_2[20], create_report__CoveragePoints_19, ((MR_Box) (create_report__V_33_33)), &create_report__conv3_SolnsCoveragePointMap_23, ((MR_Box) (create_report__V_34_34)), &create_report__conv2_BranchCoveragePointMap_24);
            }
#line 1264 "create_report.m"
            create_report__SolnsCoveragePointMap_23 = ((MR_Word) create_report__conv3_SolnsCoveragePointMap_23);
#line 1264 "create_report.m"
            create_report__BranchCoveragePointMap_24 = ((MR_Word) create_report__conv2_BranchCoveragePointMap_24);
#line 1267 "create_report.m"
            create_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcRep0_22, (MR_Integer) 0)));
#line 1267 "create_report.m"
            create_report__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcRep0_22, (MR_Integer) 1)));
#line 1267 "create_report.m"
            create_report__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_35_35, (MR_Integer) 0)));
#line 1267 "create_report.m"
            create_report__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_35_35, (MR_Integer) 1)));
#line 1267 "create_report.m"
            create_report__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_35_35, (MR_Integer) 2)));
#line 1267 "create_report.m"
            create_report__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_35_35, (MR_Integer) 3)));
#line 1267 "create_report.m"
            create_report__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_35_35, (MR_Integer) 4)));
#line 1268 "create_report.m"
            {
#line 1268 "create_report.m"
              program_representation_utils__label_goals_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, &create_report__LastGoalId_26, &create_report__ContainingGoalMap_27, create_report__Goal0_25, &create_report__Goal_28);
            }
#line 1269 "create_report.m"
            create_report__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcRep0_22, (MR_Integer) 0)));
#line 1269 "create_report.m"
            create_report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcRep0_22, (MR_Integer) 1)));
#line 1269 "create_report.m"
            create_report__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_36_36, (MR_Integer) 0)));
#line 1269 "create_report.m"
            create_report__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_36_36, (MR_Integer) 1)));
#line 1269 "create_report.m"
            create_report__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_36_36, (MR_Integer) 2)));
#line 1269 "create_report.m"
            create_report__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_36_36, (MR_Integer) 3)));
#line 1269 "create_report.m"
            create_report__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_36_36, (MR_Integer) 4)));
#line 1269 "create_report.m"
            {
#line 1269 "create_report.m"
              create_report__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1269 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_37_37, 0) = ((MR_Box) (create_report__V_56_56));
#line 1269 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_37_37, 1) = ((MR_Box) (create_report__Goal_28));
#line 1269 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_37_37, 2) = ((MR_Box) (create_report__V_58_58));
#line 1269 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_37_37, 3) = ((MR_Box) (create_report__V_59_59));
#line 1269 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_37_37, 4) = ((MR_Box) (create_report__V_60_60));
#line 1269 "create_report.m"
            }
#line 1269 "create_report.m"
            {
#line 1269 "create_report.m"
              create_report__ProcRep_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1269 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcRep_29, 0) = ((MR_Box) (create_report__V_55_55));
#line 1269 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcRep_29, 1) = ((MR_Box) (create_report__V_37_37));
#line 1269 "create_report.m"
            }
#line 1270 "create_report.m"
            {
#line 1270 "create_report.m"
              coverage__procrep_annotate_with_coverage_8_p_0(create_report__TypeInfo_for_Callee_63, create_report__ProcRep_29, create_report__Own_3, create_report__CallSitesMap_5, create_report__SolnsCoveragePointMap_23, create_report__BranchCoveragePointMap_24, create_report__ContainingGoalMap_27, create_report__LastGoalId_26, &create_report__CoverageArray_30);
            }
#line 1273 "create_report.m"
            {
#line 1273 "create_report.m"
              create_report__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_38_38, 0) = ((MR_Box) (create_report__PSPtr_2));
#line 1273 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_38_38, 1) = ((MR_Box) (create_report__ProcRep_29));
#line 1273 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_38_38, 2) = ((MR_Box) (create_report__CoverageArray_30));
#line 1273 "create_report.m"
            }
#line 1273 "create_report.m"
            {
#line 1273 "create_report.m"
              MR_Word base;
#line 1273 "create_report.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "create_report.m"
              *create_report__HeadVar__6_6 = base;
#line 1273 "create_report.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__V_38_38));
#line 1273 "create_report.m"
            }
#line 1262 "create_report.m"
          }
#line 1253 "create_report.m"
      }
#line 1250 "create_report.m"
  }
#line 1245 "create_report.m"
}

#line 1728 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_caller_cliques_3_f_0_1(
#line 1728 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1728 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1728 "create_report.m"
{
#line 1728 "create_report.m"
  {
#line 1728 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1728 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1728 "create_report.m"
    MR_Word create_report__conv0_ProcDesc_6;

#line 1728 "create_report.m"
    {
#line 1728 "create_report.m"
      create_report__conv0_ProcDesc_6 = create_report__describe_clique_member_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1728 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_ProcDesc_6));
#line 1728 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1728 "create_report.m"
  }
#line 1728 "create_report.m"
}

#line 1184 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_cliques_3_f_0(
#line 1184 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1184 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1184 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 1184 "create_report.m"
{
#line 1189 "create_report.m"
  {
#line 1189 "create_report.m"
    MR_bool create_report__succeeded;
#line 1189 "create_report.m"
    MR_Word create_report__PerfRowData_9;
#line 1189 "create_report.m"
    MR_Word create_report__CliquePtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1189 "create_report.m"
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1189 "create_report.m"
    MR_Word create_report__CliqueDesc_10;
#line 1189 "create_report.m"
    MR_Word create_report__Own_11;
#line 1189 "create_report.m"
    MR_Word create_report__Desc_12;
#line 1189 "create_report.m"
    MR_Word create_report__V_52_52;

#line 1715 "create_report.m"
    {
#line 1715 "create_report.m"
      create_report__succeeded = profile__valid_clique_ptr_2_p_0(create_report__Deep_5, create_report__CliquePtr_7);
    }
#line 1733 "create_report.m"
    if (create_report__succeeded)
#line 1716 "create_report.m"
      {
#line 1716 "create_report.m"
        MR_Word create_report__MemberPDPtrs_19;
#line 1716 "create_report.m"
        MR_Word create_report__ParentCSDPtr_20;
#line 1716 "create_report.m"
        MR_Word create_report__ParentCSD_21;
#line 1716 "create_report.m"
        MR_Word create_report__EntryPDPtr_22;
#line 1723 "create_report.m"
        MR_Word create_report__V_33_33;
#line 1723 "create_report.m"
        MR_Word create_report__V_34_34;
#line 1730 "create_report.m"
        MR_Word create_report__OtherPDPtrs_23;

#line 1716 "create_report.m"
        {
#line 1716 "create_report.m"
          profile__deep_lookup_clique_members_3_p_0(create_report__Deep_5, create_report__CliquePtr_7, &create_report__MemberPDPtrs_19);
        }
#line 1717 "create_report.m"
        {
#line 1717 "create_report.m"
          profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_5, create_report__CliquePtr_7, &create_report__ParentCSDPtr_20);
        }
#line 1718 "create_report.m"
        {
#line 1718 "create_report.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_5, create_report__ParentCSDPtr_20, &create_report__ParentCSD_21);
        }
#line 1723 "create_report.m"
        create_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_21, (MR_Integer) 0)));
#line 1723 "create_report.m"
        create_report__EntryPDPtr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_21, (MR_Integer) 1)));
#line 1723 "create_report.m"
        create_report__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_21, (MR_Integer) 2)));
#line 1725 "create_report.m"
        {
#line 1725 "create_report.m"
          create_report__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, create_report__MemberPDPtrs_19, ((MR_Box) (create_report__EntryPDPtr_22)), &create_report__OtherPDPtrs_23);
        }
#line 1730 "create_report.m"
        if (create_report__succeeded)
#line 1726 "create_report.m"
          {
#line 1726 "create_report.m"
            MR_Word create_report__EntryProcDesc_24;
#line 1726 "create_report.m"
            MR_Word create_report__OtherProcDescs_25;
#line 1726 "create_report.m"
            MR_Word create_report__V_26_26;
#line 1726 "create_report.m"
            MR_Word create_report__PD_43;
#line 1726 "create_report.m"
            MR_Word create_report__V_44_44;
#line 1741 "create_report.m"
            MR_ArrayPtr create_report__V_45_45;
#line 1741 "create_report.m"
            MR_Word create_report__V_46_46;

#line 1740 "create_report.m"
            {
#line 1740 "create_report.m"
              profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_5, create_report__EntryPDPtr_22, &create_report__PD_43);
            }
#line 1741 "create_report.m"
            create_report__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_43, (MR_Integer) 0)));
#line 1741 "create_report.m"
            create_report__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_43, (MR_Integer) 1)));
#line 1741 "create_report.m"
            create_report__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_43, (MR_Integer) 2)));
#line 1741 "create_report.m"
            {
#line 1741 "create_report.m"
              create_report__EntryProcDesc_24 = create_report__describe_proc_2_f_0(create_report__Deep_5, create_report__V_44_44);
            }
#line 1728 "create_report.m"
            {
#line 1728 "create_report.m"
              create_report__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1728 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_26_26, 0) = ((MR_Box) (&create_report_scalar_common_4[2]));
#line 1728 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_26_26, 1) = ((MR_Box) (create_report__create_proc_caller_cliques_3_f_0_1));
#line 1728 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1728 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_26_26, 3) = ((MR_Box) (create_report__Deep_5));
#line 1728 "create_report.m"
            }
#line 1727 "create_report.m"
            {
#line 1727 "create_report.m"
              create_report__OtherProcDescs_25 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &report__report__type_ctor_info_proc_desc_0, create_report__V_26_26, create_report__OtherPDPtrs_23);
            }
#line 1729 "create_report.m"
            {
#line 1729 "create_report.m"
              create_report__CliqueDesc_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_10, 0) = ((MR_Box) (create_report__CliquePtr_7));
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_10, 1) = ((MR_Box) (create_report__EntryProcDesc_24));
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_10, 2) = ((MR_Box) (create_report__OtherProcDescs_25));
#line 1729 "create_report.m"
            }
#line 1726 "create_report.m"
          }
#line 1730 "create_report.m"
        else
#line 1731 "create_report.m"
          {
#line 1731 "create_report.m"
            {
#line 1731 "create_report.m"
              mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "entry pdptr not a member");
            }
#line 1731 "create_report.m"
          }
#line 1716 "create_report.m"
      }
#line 1733 "create_report.m"
    else
#line 1734 "create_report.m"
      {
#line 1734 "create_report.m"
        {
#line 1734 "create_report.m"
          mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "invalid clique_ptr");
        }
#line 1734 "create_report.m"
      }
#line 1191 "create_report.m"
    {
#line 1191 "create_report.m"
      apply_exclusion__compute_parent_csd_prof_info_5_p_0(create_report__Deep_5, create_report__CalleePSPtr_6, create_report__CSDPtrs_8, &create_report__Own_11, &create_report__Desc_12);
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_52_52, 0) = ((MR_Box) (create_report__Desc_12));
#line 1524 "create_report.m"
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__CliqueDesc_10)), create_report__Own_11, create_report__V_52_52, &create_report__PerfRowData_9);
    }
#line 1189 "create_report.m"
    return create_report__PerfRowData_9;
#line 1189 "create_report.m"
  }
#line 1184 "create_report.m"
}

#line 1174 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_modules_3_f_0(
#line 1174 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1174 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1174 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 1174 "create_report.m"
{
#line 1179 "create_report.m"
  {
#line 1179 "create_report.m"
    MR_bool create_report__succeeded;
#line 1179 "create_report.m"
    MR_Word create_report__PerfRowData_9;
#line 1179 "create_report.m"
    MR_String create_report__ModuleName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1179 "create_report.m"
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1179 "create_report.m"
    MR_Word create_report__Own_10;
#line 1179 "create_report.m"
    MR_Word create_report__Desc_11;
#line 1179 "create_report.m"
    MR_Word create_report__V_18_18;

#line 1180 "create_report.m"
    {
#line 1180 "create_report.m"
      apply_exclusion__compute_parent_csd_prof_info_5_p_0(create_report__Deep_5, create_report__CalleePSPtr_6, create_report__CSDPtrs_8, &create_report__Own_10, &create_report__Desc_11);
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_18_18, 0) = ((MR_Box) (create_report__Desc_11));
#line 1524 "create_report.m"
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__ModuleName_7)), create_report__Own_10, create_report__V_18_18, &create_report__PerfRowData_9);
    }
#line 1179 "create_report.m"
    return create_report__PerfRowData_9;
#line 1179 "create_report.m"
  }
#line 1174 "create_report.m"
}

#line 1163 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_procedures_3_f_0(
#line 1163 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1163 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1163 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 1163 "create_report.m"
{
#line 1168 "create_report.m"
  {
#line 1168 "create_report.m"
    MR_bool create_report__succeeded;
#line 1168 "create_report.m"
    MR_Word create_report__PerfRowData_9;
#line 1168 "create_report.m"
    MR_Word create_report__PSSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1168 "create_report.m"
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1168 "create_report.m"
    MR_Word create_report__ProcDesc_10;
#line 1168 "create_report.m"
    MR_Word create_report__Own_11;
#line 1168 "create_report.m"
    MR_Word create_report__Desc_12;
#line 1168 "create_report.m"
    MR_Word create_report__V_19_19;

#line 1169 "create_report.m"
    {
#line 1169 "create_report.m"
      create_report__ProcDesc_10 = create_report__describe_proc_2_f_0(create_report__Deep_5, create_report__PSSPtr_7);
    }
#line 1170 "create_report.m"
    {
#line 1170 "create_report.m"
      apply_exclusion__compute_parent_csd_prof_info_5_p_0(create_report__Deep_5, create_report__CalleePSPtr_6, create_report__CSDPtrs_8, &create_report__Own_11, &create_report__Desc_12);
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_19_19, 0) = ((MR_Box) (create_report__Desc_12));
#line 1524 "create_report.m"
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__ProcDesc_10)), create_report__Own_11, create_report__V_19_19, &create_report__PerfRowData_9);
    }
#line 1168 "create_report.m"
    return create_report__PerfRowData_9;
#line 1168 "create_report.m"
  }
#line 1163 "create_report.m"
}

#line 1152 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_call_sites_3_f_0(
#line 1152 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1152 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1152 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 1152 "create_report.m"
{
#line 1157 "create_report.m"
  {
#line 1157 "create_report.m"
    MR_bool create_report__succeeded;
#line 1157 "create_report.m"
    MR_Word create_report__PerfRowData_9;
#line 1157 "create_report.m"
    MR_Word create_report__CSSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1157 "create_report.m"
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1157 "create_report.m"
    MR_Word create_report__CallSiteDesc_10;
#line 1157 "create_report.m"
    MR_Word create_report__Own_11;
#line 1157 "create_report.m"
    MR_Word create_report__Desc_12;
#line 1157 "create_report.m"
    MR_Word create_report__V_19_19;

#line 1158 "create_report.m"
    {
#line 1158 "create_report.m"
      create_report__CallSiteDesc_10 = create_report__describe_call_site_2_f_0(create_report__Deep_5, create_report__CSSPtr_7);
    }
#line 1159 "create_report.m"
    {
#line 1159 "create_report.m"
      apply_exclusion__compute_parent_csd_prof_info_5_p_0(create_report__Deep_5, create_report__CalleePSPtr_6, create_report__CSDPtrs_8, &create_report__Own_11, &create_report__Desc_12);
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_19_19, 0) = ((MR_Box) (create_report__Desc_12));
#line 1524 "create_report.m"
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__CallSiteDesc_10)), create_report__Own_11, create_report__V_19_19, &create_report__PerfRowData_9);
    }
#line 1157 "create_report.m"
    return create_report__PerfRowData_9;
#line 1157 "create_report.m"
  }
#line 1152 "create_report.m"
}

#line 1123 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_6(
#line 1123 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1123 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1123 "create_report.m"
{
#line 1123 "create_report.m"
  {
#line 1123 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1123 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1123 "create_report.m"
    MR_Word create_report__conv5_PerfRowData_9;

#line 1123 "create_report.m"
    {
#line 1123 "create_report.m"
      create_report__conv5_PerfRowData_9 = create_report__create_proc_caller_procedures_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1123 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv5_PerfRowData_9));
#line 1123 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1123 "create_report.m"
  }
#line 1123 "create_report.m"
}

#line 1131 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_5(
#line 1131 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1131 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1131 "create_report.m"
{
#line 1131 "create_report.m"
  {
#line 1131 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1131 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1131 "create_report.m"
    MR_Word create_report__conv4_PerfRowData_9;

#line 1131 "create_report.m"
    {
#line 1131 "create_report.m"
      create_report__conv4_PerfRowData_9 = create_report__create_proc_caller_modules_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1131 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv4_PerfRowData_9));
#line 1131 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1131 "create_report.m"
  }
#line 1131 "create_report.m"
}

#line 1139 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_4(
#line 1139 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1139 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1139 "create_report.m"
{
#line 1139 "create_report.m"
  {
#line 1139 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1139 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1139 "create_report.m"
    MR_Word create_report__conv3_PerfRowData_9;

#line 1139 "create_report.m"
    {
#line 1139 "create_report.m"
      create_report__conv3_PerfRowData_9 = create_report__create_proc_caller_cliques_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1139 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv3_PerfRowData_9));
#line 1139 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1139 "create_report.m"
  }
#line 1139 "create_report.m"
}

#line 1115 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_3(
#line 1115 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1115 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1115 "create_report.m"
{
#line 1115 "create_report.m"
  {
#line 1115 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1115 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1115 "create_report.m"
    MR_Word create_report__conv2_PerfRowData_9;

#line 1115 "create_report.m"
    {
#line 1115 "create_report.m"
      create_report__conv2_PerfRowData_9 = create_report__create_proc_caller_call_sites_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1115 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_PerfRowData_9));
#line 1115 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1115 "create_report.m"
  }
#line 1115 "create_report.m"
}

#line 1068 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_2(
#line 1068 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1068 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1068 "create_report.m"
{
#line 1068 "create_report.m"
  {
#line 1068 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1068 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1068 "create_report.m"
    MR_Word create_report__conv1_HeadVar__2_2;

#line 1068 "create_report.m"
    {
#line 1068 "create_report.m"
      create_report__conv1_HeadVar__2_2 = apply_exclusion__pair_self_1_f_0(((MR_Word) create_report__wrapper_arg_1));
    }
#line 1068 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv1_HeadVar__2_2));
#line 1068 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1068 "create_report.m"
  }
#line 1068 "create_report.m"
}

#line 1094 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_1(
#line 1094 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1094 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1094 "create_report.m"
{
#line 1094 "create_report.m"
  {
#line 1094 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1094 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1094 "create_report.m"
    MR_Word create_report__conv0_HeadVar__4_4;

#line 1094 "create_report.m"
    {
#line 1094 "create_report.m"
      create_report__conv0_HeadVar__4_4 = apply_exclusion__pair_contour_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1094 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_HeadVar__4_4));
#line 1094 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1094 "create_report.m"
  }
#line 1094 "create_report.m"
}

#line 1056 "create_report.m"
static void MR_CALL 
create_report__create_proc_callers_report_7_p_0(
#line 1056 "create_report.m"
  MR_Word create_report__Deep_8,
#line 1056 "create_report.m"
  MR_Word create_report__PSPtr_9,
#line 1056 "create_report.m"
  MR_Word create_report__CallerGroups_10,
#line 1056 "create_report.m"
  MR_Integer create_report__BunchNum_11,
#line 1056 "create_report.m"
  MR_Integer create_report__CallersPerBunch_12,
#line 1056 "create_report.m"
  MR_Word create_report__Contour_13,
#line 1056 "create_report.m"
  MR_Word * create_report__MaybeProcCallersReport_14)
#line 1056 "create_report.m"
{
#line 1148 "create_report.m"
  {
#line 1148 "create_report.m"
    MR_bool create_report__succeeded;

#line 1062 "create_report.m"
    {
#line 1062 "create_report.m"
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_8, create_report__PSPtr_9);
    }
#line 1148 "create_report.m"
    if (create_report__succeeded)
#line 1063 "create_report.m"
      {
#line 1063 "create_report.m"
        MR_Word create_report__ProcDesc_15;
#line 1063 "create_report.m"
        MR_Word create_report__CallerCSDPtrs0_16;
#line 1063 "create_report.m"
        MR_Word create_report__MaybeCallerCSDPtrPairs_18;
#line 1063 "create_report.m"
        MR_Word create_report__MaybeWarnMessage_19;

#line 1063 "create_report.m"
        {
#line 1063 "create_report.m"
          create_report__ProcDesc_15 = create_report__describe_proc_2_f_0(create_report__Deep_8, create_report__PSPtr_9);
        }
#line 1065 "create_report.m"
        {
#line 1065 "create_report.m"
          profile__deep_lookup_proc_callers_3_p_0(create_report__Deep_8, create_report__PSPtr_9, &create_report__CallerCSDPtrs0_16);
        }
#line 1071 "create_report.m"
        if ((create_report__Contour_13 == (MR_Integer) 0))
#line 1072 "create_report.m"
          {
#line 1072 "create_report.m"
            MR_Word create_report__ExcludeFile_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 27)));
#line 1072 "create_report.m"
            MR_String create_report__ExcludeFileName_21 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ExcludeFile_20, (MR_Integer) 0)));
#line 1072 "create_report.m"
            MR_Word create_report__ExcludeContents_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ExcludeFile_20, (MR_Integer) 1)));
#line 1073 "create_report.m"
            MR_Word create_report__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 0)));
#line 1073 "create_report.m"
            MR_String create_report__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 1)));
#line 1073 "create_report.m"
            MR_String create_report__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 2)));
#line 1073 "create_report.m"
            MR_String create_report__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 3)));
#line 1073 "create_report.m"
            MR_Word create_report__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 4)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 5)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 6)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 7)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 8)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 9)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_71_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 10)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_72_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 11)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_73_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 12)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_74_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 13)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 14)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_76_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 15)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_77_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 16)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_78_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 17)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_79_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 18)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_80_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 19)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_81_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 20)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_82_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 21)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_83_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 22)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_84_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 23)));
#line 1073 "create_report.m"
            MR_ArrayPtr create_report__V_85_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 24)));
#line 1073 "create_report.m"
            MR_Word create_report__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 25)));
#line 1073 "create_report.m"
            MR_Word create_report__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 26)));
#line 1073 "create_report.m"
            MR_Word create_report__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 28)));

#line 1084 "create_report.m"
            if ((create_report__ExcludeContents_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1076 "create_report.m"
              {
#line 1076 "create_report.m"
                MR_String create_report__ErrorMessage0_23;
#line 1076 "create_report.m"
                MR_String create_report__V_114_114;

#line 7353 "create_report.c"
                {
#line 7355 "create_report.c"
                  create_report__V_114_114 = mercury__string__f_43_43_2_f_0(create_report__ExcludeFileName_21, (MR_String) "\'.");
                }
#line 7358 "create_report.c"
                {
#line 7360 "create_report.c"
                  create_report__ErrorMessage0_23 = mercury__string__f_43_43_2_f_0((MR_String) "Could not read contour exclusion file \140", create_report__V_114_114);
                }
#line 1082 "create_report.m"
                {
#line 1082 "create_report.m"
                  create_report__MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "create_report.m"
                  MR_hl_field(MR_mktag(1), create_report__MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (create_report__ErrorMessage0_23));
#line 1082 "create_report.m"
                }
#line 1083 "create_report.m"
                create_report__MaybeWarnMessage_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1076 "create_report.m"
              }
#line 1084 "create_report.m"
            else
#line 1084 "create_report.m"
              if (((MR_tag((MR_Word) create_report__ExcludeContents_22)) == (MR_mktag((MR_Integer) 2))))
#line 1093 "create_report.m"
                {
#line 1093 "create_report.m"
                  MR_Word create_report__ExcludeModules_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__ExcludeContents_22, (MR_Integer) 0)));
#line 1093 "create_report.m"
                  MR_Word create_report__MaybeWarnMsg_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__ExcludeContents_22, (MR_Integer) 1)));
#line 1093 "create_report.m"
                  MR_Word create_report__V_40_40;
#line 1093 "create_report.m"
                  MR_Word create_report__CallerCSDPtrPairs0_58;

#line 1094 "create_report.m"
                  {
#line 1094 "create_report.m"
                    create_report__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1094 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_40_40, 0) = ((MR_Box) (&create_report_scalar_common_6[11]));
#line 1094 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_40_40, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_1));
#line 1094 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1094 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_40_40, 3) = ((MR_Box) (create_report__Deep_8));
#line 1094 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_40_40, 4) = ((MR_Box) (create_report__ExcludeModules_25));
#line 1094 "create_report.m"
                  }
#line 1094 "create_report.m"
                  {
#line 1094 "create_report.m"
                    create_report__CallerCSDPtrPairs0_58 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &create_report_scalar_common_2[13], create_report__V_40_40, create_report__CallerCSDPtrs0_16);
                  }
#line 1096 "create_report.m"
                  {
#line 1096 "create_report.m"
                    create_report__MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (create_report__CallerCSDPtrPairs0_58));
#line 1096 "create_report.m"
                  }
#line 1100 "create_report.m"
                  if ((create_report__MaybeWarnMsg_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1099 "create_report.m"
                    create_report__MaybeWarnMessage_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1100 "create_report.m"
                  else
#line 1102 "create_report.m"
                    create_report__MaybeWarnMessage_19 = create_report__MaybeWarnMsg_26;
#line 1093 "create_report.m"
                }
#line 1084 "create_report.m"
              else
#line 1085 "create_report.m"
                {
#line 1085 "create_report.m"
                  MR_String create_report__ErrorMsg_24 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__ExcludeContents_22, (MR_Integer) 0)));
#line 1085 "create_report.m"
                  MR_String create_report__ErrorMessage0_57;
#line 1085 "create_report.m"
                  MR_String create_report__V_117_117;
#line 1085 "create_report.m"
                  MR_String create_report__V_119_119;
#line 1085 "create_report.m"
                  MR_String create_report__V_120_120;

#line 7444 "create_report.c"
                  {
#line 7446 "create_report.c"
                    create_report__V_117_117 = mercury__string__f_43_43_2_f_0(create_report__ErrorMsg_24, (MR_String) ".");
                  }
#line 7449 "create_report.c"
                  {
#line 7451 "create_report.c"
                    create_report__V_119_119 = mercury__string__f_43_43_2_f_0((MR_String) "\' has an error: ", create_report__V_117_117);
                  }
#line 7454 "create_report.c"
                  {
#line 7456 "create_report.c"
                    create_report__V_120_120 = mercury__string__f_43_43_2_f_0(create_report__ExcludeFileName_21, create_report__V_119_119);
                  }
#line 7459 "create_report.c"
                  {
#line 7461 "create_report.c"
                    create_report__ErrorMessage0_57 = mercury__string__f_43_43_2_f_0((MR_String) "The contour exclusion file \140", create_report__V_120_120);
                  }
#line 1089 "create_report.m"
                  {
#line 1089 "create_report.m"
                    create_report__MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "create_report.m"
                    MR_hl_field(MR_mktag(1), create_report__MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (create_report__ErrorMessage0_57));
#line 1089 "create_report.m"
                  }
#line 1090 "create_report.m"
                  create_report__MaybeWarnMessage_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1085 "create_report.m"
                }
#line 1072 "create_report.m"
          }
#line 1071 "create_report.m"
        else
#line 1067 "create_report.m"
          {
#line 1067 "create_report.m"
            MR_Word create_report__CallerCSDPtrPairs0_17;

#line 1068 "create_report.m"
            {
#line 1068 "create_report.m"
              create_report__CallerCSDPtrPairs0_17 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &create_report_scalar_common_2[13], (MR_Word) &create_report_scalar_common_2[19], create_report__CallerCSDPtrs0_16);
            }
#line 1069 "create_report.m"
            {
#line 1069 "create_report.m"
              create_report__MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1069 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (create_report__CallerCSDPtrPairs0_17));
#line 1069 "create_report.m"
            }
#line 1070 "create_report.m"
            create_report__MaybeWarnMessage_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1067 "create_report.m"
          }
#line 1109 "create_report.m"
        if (((MR_tag((MR_Word) create_report__MaybeCallerCSDPtrPairs_18)) == (MR_mktag((MR_Integer) 1))))
#line 1108 "create_report.m"
          *create_report__MaybeProcCallersReport_14 = (MR_Word) create_report__MaybeCallerCSDPtrPairs_18;
#line 1109 "create_report.m"
        else
#line 1110 "create_report.m"
          {
#line 1110 "create_report.m"
            MR_Word create_report__CallerCSDPtrPairs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeCallerCSDPtrPairs_18, (MR_Integer) 0)));
#line 1110 "create_report.m"
            MR_Word create_report__Callers_32;
#line 1110 "create_report.m"
            MR_Word create_report__ProcCallersReport_39;

#line 1119 "create_report.m"
            if ((create_report__CallerGroups_10 == (MR_Integer) 0))
#line 1112 "create_report.m"
              {
#line 1112 "create_report.m"
                MR_Word create_report__CallSiteCallerGroups_30;
#line 1112 "create_report.m"
                MR_Word create_report__ProcCallerCallSites_31;
#line 1112 "create_report.m"
                MR_Word create_report__V_55_55;

#line 1113 "create_report.m"
                {
#line 1113 "create_report.m"
                  create_report__CallSiteCallerGroups_30 = apply_exclusion__group_csds_by_call_site_2_f_0(create_report__Deep_8, create_report__CallerCSDPtrPairs_29);
                }
#line 1115 "create_report.m"
                {
#line 1115 "create_report.m"
                  create_report__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1115 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__V_55_55, 0) = ((MR_Box) (&create_report_scalar_common_6[12]));
#line 1115 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__V_55_55, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_3));
#line 1115 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1115 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__V_55_55, 3) = ((MR_Box) (create_report__Deep_8));
#line 1115 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__V_55_55, 4) = ((MR_Box) (create_report__PSPtr_9));
#line 1115 "create_report.m"
                }
#line 1115 "create_report.m"
                {
#line 1115 "create_report.m"
                  create_report__ProcCallerCallSites_31 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[14], (MR_Word) &create_report_scalar_common_1[11], create_report__V_55_55, create_report__CallSiteCallerGroups_30);
                }
#line 1118 "create_report.m"
                {
#line 1118 "create_report.m"
                  create_report__Callers_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__Callers_32, 0) = ((MR_Box) (create_report__ProcCallerCallSites_31));
#line 1118 "create_report.m"
                }
#line 1112 "create_report.m"
              }
#line 1119 "create_report.m"
            else
#line 1119 "create_report.m"
              if ((create_report__CallerGroups_10 == (MR_Integer) 3))
#line 1136 "create_report.m"
                {
#line 1136 "create_report.m"
                  MR_Word create_report__CliqueCallerGroups_37;
#line 1136 "create_report.m"
                  MR_Word create_report__ProcCallerCliques_38;
#line 1136 "create_report.m"
                  MR_Word create_report__V_52_52;

#line 1137 "create_report.m"
                  {
#line 1137 "create_report.m"
                    create_report__CliqueCallerGroups_37 = apply_exclusion__group_csds_by_clique_2_f_0(create_report__Deep_8, create_report__CallerCSDPtrPairs_29);
                  }
#line 1139 "create_report.m"
                  {
#line 1139 "create_report.m"
                    create_report__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1139 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_52_52, 0) = ((MR_Box) (&create_report_scalar_common_6[13]));
#line 1139 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_52_52, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_4));
#line 1139 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1139 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_52_52, 3) = ((MR_Box) (create_report__Deep_8));
#line 1139 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_52_52, 4) = ((MR_Box) (create_report__PSPtr_9));
#line 1139 "create_report.m"
                  }
#line 1139 "create_report.m"
                  {
#line 1139 "create_report.m"
                    create_report__ProcCallerCliques_38 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[16], (MR_Word) &create_report_scalar_common_1[5], create_report__V_52_52, create_report__CliqueCallerGroups_37);
                  }
#line 1142 "create_report.m"
                  {
#line 1142 "create_report.m"
                    create_report__Callers_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "create_report.m"
                    MR_hl_field(MR_mktag(3), create_report__Callers_32, 0) = ((MR_Box) (create_report__ProcCallerCliques_38));
#line 1142 "create_report.m"
                  }
#line 1136 "create_report.m"
                }
#line 1119 "create_report.m"
              else
#line 1119 "create_report.m"
                if ((create_report__CallerGroups_10 == (MR_Integer) 2))
#line 1128 "create_report.m"
                  {
#line 1128 "create_report.m"
                    MR_Word create_report__ModuleCallerGroups_35;
#line 1128 "create_report.m"
                    MR_Word create_report__ProcCallerModules_36;
#line 1128 "create_report.m"
                    MR_Word create_report__V_53_53;

#line 1129 "create_report.m"
                    {
#line 1129 "create_report.m"
                      create_report__ModuleCallerGroups_35 = apply_exclusion__group_csds_by_module_2_f_0(create_report__Deep_8, create_report__CallerCSDPtrPairs_29);
                    }
#line 1131 "create_report.m"
                    {
#line 1131 "create_report.m"
                      create_report__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1131 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_53_53, 0) = ((MR_Box) (&create_report_scalar_common_6[14]));
#line 1131 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_53_53, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_5));
#line 1131 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1131 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_53_53, 3) = ((MR_Box) (create_report__Deep_8));
#line 1131 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_53_53, 4) = ((MR_Box) (create_report__PSPtr_9));
#line 1131 "create_report.m"
                    }
#line 1131 "create_report.m"
                    {
#line 1131 "create_report.m"
                      create_report__ProcCallerModules_36 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[15], (MR_Word) &create_report_scalar_common_1[12], create_report__V_53_53, create_report__ModuleCallerGroups_35);
                    }
#line 1134 "create_report.m"
                    {
#line 1134 "create_report.m"
                      create_report__Callers_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "create_report.m"
                      MR_hl_field(MR_mktag(2), create_report__Callers_32, 0) = ((MR_Box) (create_report__ProcCallerModules_36));
#line 1134 "create_report.m"
                    }
#line 1128 "create_report.m"
                  }
#line 1119 "create_report.m"
                else
#line 1120 "create_report.m"
                  {
#line 1120 "create_report.m"
                    MR_Word create_report__ProcCallerGroups_33;
#line 1120 "create_report.m"
                    MR_Word create_report__ProcCallerProcs_34;
#line 1120 "create_report.m"
                    MR_Word create_report__V_54_54;

#line 1121 "create_report.m"
                    {
#line 1121 "create_report.m"
                      create_report__ProcCallerGroups_33 = apply_exclusion__group_csds_by_procedure_2_f_0(create_report__Deep_8, create_report__CallerCSDPtrPairs_29);
                    }
#line 1123 "create_report.m"
                    {
#line 1123 "create_report.m"
                      create_report__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1123 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_54_54, 0) = ((MR_Box) (&create_report_scalar_common_6[15]));
#line 1123 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_54_54, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_6));
#line 1123 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1123 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_54_54, 3) = ((MR_Box) (create_report__Deep_8));
#line 1123 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_54_54, 4) = ((MR_Box) (create_report__PSPtr_9));
#line 1123 "create_report.m"
                    }
#line 1123 "create_report.m"
                    {
#line 1123 "create_report.m"
                      create_report__ProcCallerProcs_34 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[12], (MR_Word) &create_report_scalar_common_1[3], create_report__V_54_54, create_report__ProcCallerGroups_33);
                    }
#line 1126 "create_report.m"
                    {
#line 1126 "create_report.m"
                      create_report__Callers_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "create_report.m"
                      MR_hl_field(MR_mktag(1), create_report__Callers_32, 0) = ((MR_Box) (create_report__ProcCallerProcs_34));
#line 1126 "create_report.m"
                    }
#line 1120 "create_report.m"
                  }
#line 1144 "create_report.m"
            {
#line 1144 "create_report.m"
              create_report__ProcCallersReport_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1144 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 0) = ((MR_Box) (create_report__ProcDesc_15));
#line 1144 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 1) = ((MR_Box) (create_report__Callers_32));
#line 1144 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 2) = ((MR_Box) (create_report__BunchNum_11));
#line 1144 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 3) = ((MR_Box) (create_report__CallersPerBunch_12));
#line 1144 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 4) = ((MR_Box) (create_report__Contour_13));
#line 1144 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 5) = ((MR_Box) (create_report__MaybeWarnMessage_19));
#line 1144 "create_report.m"
            }
#line 1146 "create_report.m"
            {
#line 1146 "create_report.m"
              MR_Word base;
#line 1146 "create_report.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1146 "create_report.m"
              *create_report__MaybeProcCallersReport_14 = base;
#line 1146 "create_report.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcCallersReport_39));
#line 1146 "create_report.m"
            }
#line 1110 "create_report.m"
          }
#line 1063 "create_report.m"
      }
#line 1148 "create_report.m"
    else
#line 1149 "create_report.m"
      {
#line 1149 "create_report.m"
        *create_report__MaybeProcCallersReport_14 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_5[0]);
#line 1149 "create_report.m"
      }
#line 1148 "create_report.m"
  }
#line 1056 "create_report.m"
}

#line 1038 "create_report.m"
static void MR_CALL 
create_report__accumulate_call_site_callees_7_p_0(
#line 1038 "create_report.m"
  MR_Word create_report__Deep_8,
#line 1038 "create_report.m"
  MR_Word create_report__CalleePerf_9,
#line 1038 "create_report.m"
  MR_Word * create_report__RowData_10,
#line 1038 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Own_0_17,
#line 1038 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Own_18,
#line 1038 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Desc_0_19,
#line 1038 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Desc_20)
#line 1038 "create_report.m"
{
#line 1043 "create_report.m"
  {
#line 1043 "create_report.m"
    MR_bool create_report__succeeded;
#line 1043 "create_report.m"
    MR_Word create_report__CalleePSPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePerf_9, (MR_Integer) 0)));
#line 1043 "create_report.m"
    MR_Word create_report__CalleeOwn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePerf_9, (MR_Integer) 1)));
#line 1043 "create_report.m"
    MR_Word create_report__CalleeDesc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePerf_9, (MR_Integer) 2)));
#line 1043 "create_report.m"
    MR_Word create_report__CalleeProcDesc_16;
#line 1043 "create_report.m"
    MR_Word create_report__V_29_29;

#line 1045 "create_report.m"
    {
#line 1045 "create_report.m"
      create_report__CalleeProcDesc_16 = create_report__describe_proc_2_f_0(create_report__Deep_8, create_report__CalleePSPtr_13);
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_29_29, 0) = ((MR_Box) (create_report__CalleeDesc_15));
#line 1524 "create_report.m"
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_8, ((MR_Box) (create_report__CalleeProcDesc_16)), create_report__CalleeOwn_14, create_report__V_29_29, create_report__RowData_10);
    }
#line 1048 "create_report.m"
    {
#line 1048 "create_report.m"
      *create_report__STATE_VARIABLE_Own_18 = measurements__add_own_to_own_2_f_0(create_report__STATE_VARIABLE_Own_0_17, create_report__CalleeOwn_14);
    }
#line 1049 "create_report.m"
    {
#line 1049 "create_report.m"
      *create_report__STATE_VARIABLE_Desc_20 = measurements__add_inherit_to_inherit_2_f_0(create_report__STATE_VARIABLE_Desc_0_19, create_report__CalleeDesc_15);
    }
#line 1043 "create_report.m"
  }
#line 1038 "create_report.m"
}

#line 1021 "create_report.m"
static void MR_CALL 
create_report__accumulate_csd_prof_info_7_p_0(
#line 1021 "create_report.m"
  MR_Word create_report__Deep_8,
#line 1021 "create_report.m"
  MR_Word create_report__CallerPSPtr_9,
#line 1021 "create_report.m"
  MR_Word create_report__CSDPtr_10,
#line 1021 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Own_0_17,
#line 1021 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Own_18,
#line 1021 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Desc_0_19,
#line 1021 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Desc_20)
#line 1021 "create_report.m"
{
#line 1026 "create_report.m"
  {
#line 1026 "create_report.m"
    MR_bool create_report__succeeded;
#line 1026 "create_report.m"
    MR_Word create_report__CSDOwn_13;
#line 1026 "create_report.m"
    MR_Word create_report__CSDDesc_14;
#line 1026 "create_report.m"
    MR_Word create_report__CompTableArray_15;
#line 1026 "create_report.m"
    MR_Word create_report__STATE_VARIABLE_Desc_22_22;
#line 1034 "create_report.m"
    MR_Word create_report__InnerTotal_16;
#line 1032 "create_report.m"
    MR_Box create_report__conv0_InnerTotal_16;

#line 1027 "create_report.m"
    {
#line 1027 "create_report.m"
      profile__deep_lookup_csd_own_3_p_0(create_report__Deep_8, create_report__CSDPtr_10, &create_report__CSDOwn_13);
    }
#line 1028 "create_report.m"
    {
#line 1028 "create_report.m"
      profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_8, create_report__CSDPtr_10, &create_report__CSDDesc_14);
    }
#line 1029 "create_report.m"
    {
#line 1029 "create_report.m"
      *create_report__STATE_VARIABLE_Own_18 = measurements__add_own_to_own_2_f_0(create_report__STATE_VARIABLE_Own_0_17, create_report__CSDOwn_13);
    }
#line 1030 "create_report.m"
    {
#line 1030 "create_report.m"
      create_report__STATE_VARIABLE_Desc_22_22 = measurements__add_inherit_to_inherit_2_f_0(create_report__STATE_VARIABLE_Desc_0_19, create_report__CSDDesc_14);
    }
#line 1031 "create_report.m"
    {
#line 1031 "create_report.m"
      profile__deep_lookup_csd_comp_table_3_p_0(create_report__Deep_8, create_report__CSDPtr_10, &create_report__CompTableArray_15);
    }
#line 1032 "create_report.m"
    {
#line 1032 "create_report.m"
      create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__CompTableArray_15, ((MR_Box) (create_report__CallerPSPtr_9)), &create_report__conv0_InnerTotal_16);
    }
#line 1032 "create_report.m"
    if (create_report__succeeded)
#line 1032 "create_report.m"
      {
#line 1032 "create_report.m"
        create_report__InnerTotal_16 = ((MR_Word) create_report__conv0_InnerTotal_16);
#line 1032 "create_report.m"
        create_report__succeeded = MR_TRUE;
#line 1032 "create_report.m"
      }
#line 1034 "create_report.m"
    if (create_report__succeeded)
#line 1033 "create_report.m"
      {
#line 1033 "create_report.m"
        *create_report__STATE_VARIABLE_Desc_20 = measurements__subtract_inherit_from_inherit_2_f_0(create_report__InnerTotal_16, create_report__STATE_VARIABLE_Desc_22_22);
      }
#line 1034 "create_report.m"
    else
#line 1033 "create_report.m"
      *create_report__STATE_VARIABLE_Desc_20 = create_report__STATE_VARIABLE_Desc_22_22;
#line 1026 "create_report.m"
  }
#line 1021 "create_report.m"
}

#line 989 "create_report.m"
static void MR_CALL 
create_report__summarize_callers_11_p_0(
#line 989 "create_report.m"
  MR_Word create_report__Deep_12,
#line 989 "create_report.m"
  MR_Word create_report__CallerCSDPtrs0_13,
#line 989 "create_report.m"
  MR_Word create_report__CalleePSPtr_14,
#line 989 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_PSSeen_0_27,
#line 989 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_PSSeen_28,
#line 989 "create_report.m"
  MR_Integer create_report__STATE_VARIABLE_NumDynamic_0_29,
#line 989 "create_report.m"
  MR_Integer * create_report__STATE_VARIABLE_NumDynamic_30,
#line 989 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Own_0_31,
#line 989 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Own_32,
#line 989 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Desc_0_33,
#line 989 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Desc_34)
#line 989 "create_report.m"
{
#line 997 "create_report.m"
  while (MR_TRUE)
#line 997 "create_report.m"
    {
#line 997 "create_report.m"
      /* tailcall optimized into a loop */
#line 997 "create_report.m"
      {
#line 997 "create_report.m"
        MR_bool create_report__succeeded;

#line 997 "create_report.m"
        if ((create_report__CallerCSDPtrs0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 997 "create_report.m"
          {
#line 997 "create_report.m"
            *create_report__STATE_VARIABLE_PSSeen_28 = create_report__STATE_VARIABLE_PSSeen_0_27;
#line 997 "create_report.m"
            *create_report__STATE_VARIABLE_NumDynamic_30 = create_report__STATE_VARIABLE_NumDynamic_0_29;
#line 997 "create_report.m"
            *create_report__STATE_VARIABLE_Own_32 = create_report__STATE_VARIABLE_Own_0_31;
#line 997 "create_report.m"
            *create_report__STATE_VARIABLE_Desc_34 = create_report__STATE_VARIABLE_Desc_0_33;
#line 997 "create_report.m"
          }
#line 997 "create_report.m"
        else
#line 999 "create_report.m"
          {
#line 999 "create_report.m"
            MR_Word create_report__CSDPtr_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallerCSDPtrs0_13, (MR_Integer) 0)));
#line 999 "create_report.m"
            MR_Word create_report__CallerCSDPtrs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallerCSDPtrs0_13, (MR_Integer) 1)));
#line 999 "create_report.m"
            MR_Word create_report__CSD_21;
#line 999 "create_report.m"
            MR_Word create_report__CallerPDPtr_22;
#line 999 "create_report.m"
            MR_Word create_report__CallerPD_23;
#line 999 "create_report.m"
            MR_Word create_report__CallerPSPtr_24;
#line 999 "create_report.m"
            MR_Integer create_report__STATE_VARIABLE_NumDynamic_35_35;
#line 999 "create_report.m"
            MR_Word create_report__STATE_VARIABLE_PSSeen_37_37;
#line 999 "create_report.m"
            MR_Word create_report__STATE_VARIABLE_Own_38_38;
#line 999 "create_report.m"
            MR_Word create_report__STATE_VARIABLE_Desc_39_39;
#line 1002 "create_report.m"
            MR_Word create_report__V_44_44;
#line 1002 "create_report.m"
            MR_Word create_report__V_45_45;
#line 1004 "create_report.m"
            MR_ArrayPtr create_report__V_46_46;
#line 1004 "create_report.m"
            MR_Word create_report__V_47_47;
#line 1005 "create_report.m"
            MR_Integer create_report__V_52_52;
#line 1005 "create_report.m"
            MR_Integer create_report__V_53_53;

#line 1001 "create_report.m"
            {
#line 1001 "create_report.m"
              profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_12, create_report__CSDPtr_19, &create_report__CSD_21);
            }
#line 1002 "create_report.m"
            create_report__CallerPDPtr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 0)));
#line 1002 "create_report.m"
            create_report__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 1)));
#line 1002 "create_report.m"
            create_report__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 2)));
#line 1003 "create_report.m"
            {
#line 1003 "create_report.m"
              profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_12, create_report__CallerPDPtr_22, &create_report__CallerPD_23);
            }
#line 1004 "create_report.m"
            create_report__CallerPSPtr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallerPD_23, (MR_Integer) 0)));
#line 1004 "create_report.m"
            create_report__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__CallerPD_23, (MR_Integer) 1)));
#line 1004 "create_report.m"
            create_report__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallerPD_23, (MR_Integer) 2)));
#line 1005 "create_report.m"
            create_report__V_52_52 = (MR_Integer) create_report__CallerPSPtr_24;
#line 1005 "create_report.m"
            create_report__V_53_53 = (MR_Integer) create_report__CalleePSPtr_14;
#line 1005 "create_report.m"
            create_report__succeeded = (create_report__V_52_52 == create_report__V_53_53);
#line 1008 "create_report.m"
            if (create_report__succeeded)
#line 1007 "create_report.m"
              {
#line 1007 "create_report.m"
                create_report__STATE_VARIABLE_Desc_39_39 = create_report__STATE_VARIABLE_Desc_0_33;
#line 1007 "create_report.m"
                create_report__STATE_VARIABLE_Own_38_38 = create_report__STATE_VARIABLE_Own_0_31;
#line 1007 "create_report.m"
                create_report__STATE_VARIABLE_NumDynamic_35_35 = create_report__STATE_VARIABLE_NumDynamic_0_29;
#line 1007 "create_report.m"
                create_report__STATE_VARIABLE_PSSeen_37_37 = create_report__STATE_VARIABLE_PSSeen_0_27;
#line 1007 "create_report.m"
              }
#line 1008 "create_report.m"
            else
#line 1009 "create_report.m"
              {
#line 1009 "create_report.m"
                MR_Word create_report__CSDOwn_25;
#line 1009 "create_report.m"
                MR_Word create_report__CSDInherit_26;
#line 1011 "create_report.m"
                MR_Word create_report__V_48_48;
#line 1011 "create_report.m"
                MR_Word create_report__V_49_49;

#line 1009 "create_report.m"
                create_report__STATE_VARIABLE_NumDynamic_35_35 = (create_report__STATE_VARIABLE_NumDynamic_0_29 + (MR_Integer) 1);
#line 1010 "create_report.m"
                {
#line 1010 "create_report.m"
                  mercury__set__insert_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, ((MR_Box) (create_report__CallerPSPtr_24)), create_report__STATE_VARIABLE_PSSeen_0_27, &create_report__STATE_VARIABLE_PSSeen_37_37);
                }
#line 1011 "create_report.m"
                create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 0)));
#line 1011 "create_report.m"
                create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 1)));
#line 1011 "create_report.m"
                create_report__CSDOwn_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 2)));
#line 1012 "create_report.m"
                {
#line 1012 "create_report.m"
                  create_report__STATE_VARIABLE_Own_38_38 = measurements__add_own_to_own_2_f_0(create_report__STATE_VARIABLE_Own_0_31, create_report__CSDOwn_25);
                }
#line 1013 "create_report.m"
                {
#line 1013 "create_report.m"
                  profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_12, create_report__CSDPtr_19, &create_report__CSDInherit_26);
                }
#line 1014 "create_report.m"
                {
#line 1014 "create_report.m"
                  create_report__STATE_VARIABLE_Desc_39_39 = measurements__add_inherit_to_inherit_2_f_0(create_report__STATE_VARIABLE_Desc_0_33, create_report__CSDInherit_26);
                }
#line 1009 "create_report.m"
              }
#line 1017 "create_report.m"
            /* direct tailcall eliminated */
#line 1017 "create_report.m"
            {
#line 1017 "create_report.m"
              MR_Word create_report__CallerCSDPtrs0__tmp_copy_13 = create_report__CallerCSDPtrs_20;
#line 1017 "create_report.m"
              MR_Word create_report__STATE_VARIABLE_PSSeen_0__tmp_copy_27 = create_report__STATE_VARIABLE_PSSeen_37_37;
#line 1017 "create_report.m"
              MR_Integer create_report__STATE_VARIABLE_NumDynamic_0__tmp_copy_29 = create_report__STATE_VARIABLE_NumDynamic_35_35;
#line 1017 "create_report.m"
              MR_Word create_report__STATE_VARIABLE_Own_0__tmp_copy_31 = create_report__STATE_VARIABLE_Own_38_38;
#line 1017 "create_report.m"
              MR_Word create_report__STATE_VARIABLE_Desc_0__tmp_copy_33 = create_report__STATE_VARIABLE_Desc_39_39;

#line 1017 "create_report.m"
              create_report__STATE_VARIABLE_Desc_0_33 = create_report__STATE_VARIABLE_Desc_0__tmp_copy_33;
#line 1017 "create_report.m"
              create_report__STATE_VARIABLE_Own_0_31 = create_report__STATE_VARIABLE_Own_0__tmp_copy_31;
#line 1017 "create_report.m"
              create_report__STATE_VARIABLE_NumDynamic_0_29 = create_report__STATE_VARIABLE_NumDynamic_0__tmp_copy_29;
#line 1017 "create_report.m"
              create_report__STATE_VARIABLE_PSSeen_0_27 = create_report__STATE_VARIABLE_PSSeen_0__tmp_copy_27;
#line 1017 "create_report.m"
              create_report__CallerCSDPtrs0_13 = create_report__CallerCSDPtrs0__tmp_copy_13;
#line 1017 "create_report.m"
            }
#line 1017 "create_report.m"
            continue;
#line 999 "create_report.m"
          }
#line 997 "create_report.m"
      }
#line 997 "create_report.m"
      break;
#line 997 "create_report.m"
    }
#line 989 "create_report.m"
}

#line 985 "create_report.m"
static void MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0_1(
#line 985 "create_report.m"
  MR_Box create_report__closure_arg,
#line 985 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 985 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 985 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 985 "create_report.m"
  MR_Box create_report__wrapper_arg_4,
#line 985 "create_report.m"
  MR_Box * create_report__wrapper_arg_5)
#line 985 "create_report.m"
{
#line 985 "create_report.m"
  {
#line 985 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 985 "create_report.m"
    MR_Word create_report__conv1_STATE_VARIABLE_Own_18;
#line 985 "create_report.m"
    MR_Word create_report__conv0_STATE_VARIABLE_Desc_20;

#line 985 "create_report.m"
    {
#line 985 "create_report.m"
      create_report__accumulate_csd_prof_info_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv1_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_4), &create_report__conv0_STATE_VARIABLE_Desc_20);
    }
#line 985 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_STATE_VARIABLE_Own_18));
#line 985 "create_report.m"
    *create_report__wrapper_arg_5 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_Desc_20));
#line 985 "create_report.m"
  }
#line 985 "create_report.m"
}

#line 979 "create_report.m"
static MR_Word MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0(
#line 979 "create_report.m"
  MR_Word create_report__Deep_5,
#line 979 "create_report.m"
  MR_Word create_report__CallerPSPtr_6,
#line 979 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 979 "create_report.m"
{
#line 984 "create_report.m"
  {
#line 984 "create_report.m"
    MR_bool create_report__succeeded;
#line 984 "create_report.m"
    MR_Word create_report__CalleeProf_9;
#line 984 "create_report.m"
    MR_Word create_report__PSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 984 "create_report.m"
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 984 "create_report.m"
    MR_Word create_report__Own_10;
#line 984 "create_report.m"
    MR_Word create_report__Desc_11;
#line 984 "create_report.m"
    MR_Word create_report__V_12_12;
#line 984 "create_report.m"
    MR_Word create_report__V_13_13;
#line 984 "create_report.m"
    MR_Word create_report__V_14_14;
#line 985 "create_report.m"
    MR_Box create_report__conv3_Own_10;
#line 985 "create_report.m"
    MR_Box create_report__conv2_Desc_11;

#line 985 "create_report.m"
    {
#line 985 "create_report.m"
      create_report__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 985 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 0) = ((MR_Box) (&create_report_scalar_common_8[2]));
#line 985 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 1) = ((MR_Box) (create_report__generate_call_site_callee_perf_3_f_0_1));
#line 985 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 985 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 3) = ((MR_Box) (create_report__Deep_5));
#line 985 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 4) = ((MR_Box) (create_report__CallerPSPtr_6));
#line 985 "create_report.m"
    }
#line 985 "create_report.m"
    {
#line 985 "create_report.m"
      create_report__V_13_13 = measurements__zero_own_prof_info_0_f_0();
    }
#line 985 "create_report.m"
    {
#line 985 "create_report.m"
      create_report__V_14_14 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 985 "create_report.m"
    {
#line 985 "create_report.m"
      mercury__list__foldl2_6_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__V_12_12, create_report__CSDPtrs_8, ((MR_Box) (create_report__V_13_13)), &create_report__conv3_Own_10, ((MR_Box) (create_report__V_14_14)), &create_report__conv2_Desc_11);
    }
#line 985 "create_report.m"
    create_report__Own_10 = ((MR_Word) create_report__conv3_Own_10);
#line 985 "create_report.m"
    create_report__Desc_11 = ((MR_Word) create_report__conv2_Desc_11);
#line 987 "create_report.m"
    {
#line 987 "create_report.m"
      create_report__CalleeProf_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 987 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CalleeProf_9, 0) = ((MR_Box) (create_report__PSPtr_7));
#line 987 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CalleeProf_9, 1) = ((MR_Box) (create_report__Own_10));
#line 987 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CalleeProf_9, 2) = ((MR_Box) (create_report__Desc_11));
#line 987 "create_report.m"
    }
#line 984 "create_report.m"
    return create_report__CalleeProf_9;
#line 984 "create_report.m"
  }
#line 979 "create_report.m"
}

#line 935 "create_report.m"
static MR_bool MR_CALL 
create_report__create_call_site_summary_2_f_0_9(
#line 935 "create_report.m"
  MR_Box create_report__closure_arg)
#line 935 "create_report.m"
{
#line 935 "create_report.m"
  {
#line 935 "create_report.m"
    MR_bool create_report__succeeded;
#line 935 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;

#line 935 "create_report.m"
    {
#line 935 "create_report.m"
      return create_report__succeeded = create_report__IntroducedFrom__pred__create_call_site_summary__935__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))));
    }
#line 935 "create_report.m"
    return create_report__succeeded;
#line 935 "create_report.m"
  }
#line 935 "create_report.m"
}

#line 964 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_8(
#line 964 "create_report.m"
  MR_Box create_report__closure_arg,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_6)
#line 964 "create_report.m"
{
#line 964 "create_report.m"
  {
#line 964 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 964 "create_report.m"
    MR_Word create_report__conv21_RowData_10;
#line 964 "create_report.m"
    MR_Word create_report__conv20_STATE_VARIABLE_Own_18;
#line 964 "create_report.m"
    MR_Word create_report__conv19_STATE_VARIABLE_Desc_20;

#line 964 "create_report.m"
    {
#line 964 "create_report.m"
      create_report__accumulate_call_site_callees_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv21_RowData_10, ((MR_Word) create_report__wrapper_arg_3), &create_report__conv20_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_5), &create_report__conv19_STATE_VARIABLE_Desc_20);
    }
#line 964 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv21_RowData_10));
#line 964 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv20_STATE_VARIABLE_Own_18));
#line 964 "create_report.m"
    *create_report__wrapper_arg_6 = ((MR_Box) (create_report__conv19_STATE_VARIABLE_Desc_20));
#line 964 "create_report.m"
  }
#line 964 "create_report.m"
}

#line 962 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_7(
#line 962 "create_report.m"
  MR_Box create_report__closure_arg,
#line 962 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 962 "create_report.m"
{
#line 962 "create_report.m"
  {
#line 962 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 962 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 962 "create_report.m"
    MR_Word create_report__conv18_CalleeProf_9;

#line 962 "create_report.m"
    {
#line 962 "create_report.m"
      create_report__conv18_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 962 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv18_CalleeProf_9));
#line 962 "create_report.m"
    return create_report__wrapper_arg_2;
#line 962 "create_report.m"
  }
#line 962 "create_report.m"
}

#line 964 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_6(
#line 964 "create_report.m"
  MR_Box create_report__closure_arg,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_6)
#line 964 "create_report.m"
{
#line 964 "create_report.m"
  {
#line 964 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 964 "create_report.m"
    MR_Word create_report__conv15_RowData_10;
#line 964 "create_report.m"
    MR_Word create_report__conv14_STATE_VARIABLE_Own_18;
#line 964 "create_report.m"
    MR_Word create_report__conv13_STATE_VARIABLE_Desc_20;

#line 964 "create_report.m"
    {
#line 964 "create_report.m"
      create_report__accumulate_call_site_callees_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv15_RowData_10, ((MR_Word) create_report__wrapper_arg_3), &create_report__conv14_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_5), &create_report__conv13_STATE_VARIABLE_Desc_20);
    }
#line 964 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv15_RowData_10));
#line 964 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv14_STATE_VARIABLE_Own_18));
#line 964 "create_report.m"
    *create_report__wrapper_arg_6 = ((MR_Box) (create_report__conv13_STATE_VARIABLE_Desc_20));
#line 964 "create_report.m"
  }
#line 964 "create_report.m"
}

#line 962 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_5(
#line 962 "create_report.m"
  MR_Box create_report__closure_arg,
#line 962 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 962 "create_report.m"
{
#line 962 "create_report.m"
  {
#line 962 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 962 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 962 "create_report.m"
    MR_Word create_report__conv12_CalleeProf_9;

#line 962 "create_report.m"
    {
#line 962 "create_report.m"
      create_report__conv12_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 962 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv12_CalleeProf_9));
#line 962 "create_report.m"
    return create_report__wrapper_arg_2;
#line 962 "create_report.m"
  }
#line 962 "create_report.m"
}

#line 964 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_4(
#line 964 "create_report.m"
  MR_Box create_report__closure_arg,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_6)
#line 964 "create_report.m"
{
#line 964 "create_report.m"
  {
#line 964 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 964 "create_report.m"
    MR_Word create_report__conv9_RowData_10;
#line 964 "create_report.m"
    MR_Word create_report__conv8_STATE_VARIABLE_Own_18;
#line 964 "create_report.m"
    MR_Word create_report__conv7_STATE_VARIABLE_Desc_20;

#line 964 "create_report.m"
    {
#line 964 "create_report.m"
      create_report__accumulate_call_site_callees_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv9_RowData_10, ((MR_Word) create_report__wrapper_arg_3), &create_report__conv8_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_5), &create_report__conv7_STATE_VARIABLE_Desc_20);
    }
#line 964 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv9_RowData_10));
#line 964 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv8_STATE_VARIABLE_Own_18));
#line 964 "create_report.m"
    *create_report__wrapper_arg_6 = ((MR_Box) (create_report__conv7_STATE_VARIABLE_Desc_20));
#line 964 "create_report.m"
  }
#line 964 "create_report.m"
}

#line 962 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_3(
#line 962 "create_report.m"
  MR_Box create_report__closure_arg,
#line 962 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 962 "create_report.m"
{
#line 962 "create_report.m"
  {
#line 962 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 962 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 962 "create_report.m"
    MR_Word create_report__conv6_CalleeProf_9;

#line 962 "create_report.m"
    {
#line 962 "create_report.m"
      create_report__conv6_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 962 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv6_CalleeProf_9));
#line 962 "create_report.m"
    return create_report__wrapper_arg_2;
#line 962 "create_report.m"
  }
#line 962 "create_report.m"
}

#line 964 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_2(
#line 964 "create_report.m"
  MR_Box create_report__closure_arg,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 964 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 964 "create_report.m"
  MR_Box * create_report__wrapper_arg_6)
#line 964 "create_report.m"
{
#line 964 "create_report.m"
  {
#line 964 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 964 "create_report.m"
    MR_Word create_report__conv3_RowData_10;
#line 964 "create_report.m"
    MR_Word create_report__conv2_STATE_VARIABLE_Own_18;
#line 964 "create_report.m"
    MR_Word create_report__conv1_STATE_VARIABLE_Desc_20;

#line 964 "create_report.m"
    {
#line 964 "create_report.m"
      create_report__accumulate_call_site_callees_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv3_RowData_10, ((MR_Word) create_report__wrapper_arg_3), &create_report__conv2_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_5), &create_report__conv1_STATE_VARIABLE_Desc_20);
    }
#line 964 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv3_RowData_10));
#line 964 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv2_STATE_VARIABLE_Own_18));
#line 964 "create_report.m"
    *create_report__wrapper_arg_6 = ((MR_Box) (create_report__conv1_STATE_VARIABLE_Desc_20));
#line 964 "create_report.m"
  }
#line 964 "create_report.m"
}

#line 962 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_1(
#line 962 "create_report.m"
  MR_Box create_report__closure_arg,
#line 962 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 962 "create_report.m"
{
#line 962 "create_report.m"
  {
#line 962 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 962 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 962 "create_report.m"
    MR_Word create_report__conv0_CalleeProf_9;

#line 962 "create_report.m"
    {
#line 962 "create_report.m"
      create_report__conv0_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 962 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_CalleeProf_9));
#line 962 "create_report.m"
    return create_report__wrapper_arg_2;
#line 962 "create_report.m"
  }
#line 962 "create_report.m"
}

#line 911 "create_report.m"
static MR_Word MR_CALL 
create_report__create_call_site_summary_2_f_0(
#line 911 "create_report.m"
  MR_Word create_report__Deep_4,
#line 911 "create_report.m"
  MR_Word create_report__CSSPtr_5)
#line 911 "create_report.m"
{
#line 913 "create_report.m"
  {
#line 913 "create_report.m"
    MR_bool create_report__succeeded;
#line 913 "create_report.m"
    MR_Word create_report__CallSitePerf_6;
#line 913 "create_report.m"
    MR_Word create_report__CallSiteDesc_7;
#line 913 "create_report.m"
    MR_Word create_report__CSS_8;
#line 913 "create_report.m"
    MR_Word create_report__KindAndCallee_9;
#line 913 "create_report.m"
    MR_Word create_report__CallerPSPtr_10;
#line 913 "create_report.m"
    MR_Word create_report__CallSiteCallMap_11;
#line 913 "create_report.m"
    MR_Word create_report__CallSiteCalls_12;
#line 913 "create_report.m"
    MR_Word create_report__KindAndInfo_17;
#line 913 "create_report.m"
    MR_Word create_report__SummaryRowData_28;
#line 913 "create_report.m"
    MR_Word create_report__SubRowDatas_29;
#line 917 "create_report.m"
    MR_Integer create_report__V_45_45;
#line 917 "create_report.m"
    MR_Integer create_report__V_46_46;
#line 917 "create_report.m"
    MR_Word create_report__V_47_47;

#line 914 "create_report.m"
    {
#line 914 "create_report.m"
      create_report__CallSiteDesc_7 = create_report__describe_call_site_2_f_0(create_report__Deep_4, create_report__CSSPtr_5);
    }
#line 916 "create_report.m"
    {
#line 916 "create_report.m"
      profile__deep_lookup_call_site_statics_3_p_0(create_report__Deep_4, create_report__CSSPtr_5, &create_report__CSS_8);
    }
#line 917 "create_report.m"
    create_report__CallerPSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 0)));
#line 917 "create_report.m"
    create_report__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 1)));
#line 917 "create_report.m"
    create_report__KindAndCallee_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 2)));
#line 917 "create_report.m"
    create_report__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 3)));
#line 917 "create_report.m"
    create_report__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 4)));
#line 920 "create_report.m"
    {
#line 920 "create_report.m"
      profile__deep_lookup_call_site_calls_3_p_0(create_report__Deep_4, create_report__CSSPtr_5, &create_report__CallSiteCallMap_11);
    }
#line 921 "create_report.m"
    {
#line 921 "create_report.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[10], create_report__CallSiteCallMap_11, &create_report__CallSiteCalls_12);
    }
#line 947 "create_report.m"
    if ((create_report__KindAndCallee_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 960 "create_report.m"
      {
#line 960 "create_report.m"
        MR_Word create_report__TypeCtorInfo_57_57;
#line 960 "create_report.m"
        MR_Word create_report__CallSiteCalleePerfs_30;
#line 960 "create_report.m"
        MR_Word create_report__SumOwn_31;
#line 960 "create_report.m"
        MR_Word create_report__SumDesc_32;
#line 960 "create_report.m"
        MR_Word create_report__V_33_33;
#line 960 "create_report.m"
        MR_Word create_report__V_34_34;
#line 960 "create_report.m"
        MR_Word create_report__V_35_35;
#line 960 "create_report.m"
        MR_Word create_report__V_36_36;
#line 964 "create_report.m"
        MR_Box create_report__conv5_SumOwn_31;
#line 964 "create_report.m"
        MR_Box create_report__conv4_SumDesc_32;

#line 959 "create_report.m"
        create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 8694 "create_report.c"
        create_report__TypeCtorInfo_57_57 = (MR_Word) &create_report__create_report__type_ctor_info_call_site_callee_perf_0;
#line 962 "create_report.m"
        {
#line 962 "create_report.m"
          create_report__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 962 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_33_33, 0) = ((MR_Box) (&create_report_scalar_common_6[10]));
#line 962 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_33_33, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_1));
#line 962 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 962 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_33_33, 3) = ((MR_Box) (create_report__Deep_4));
#line 962 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_33_33, 4) = ((MR_Box) (create_report__CallerPSPtr_10));
#line 962 "create_report.m"
        }
#line 961 "create_report.m"
        {
#line 961 "create_report.m"
          create_report__CallSiteCalleePerfs_30 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[12], create_report__TypeCtorInfo_57_57, create_report__V_33_33, create_report__CallSiteCalls_12);
        }
#line 964 "create_report.m"
        {
#line 964 "create_report.m"
          create_report__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 964 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_34_34, 0) = ((MR_Box) (&create_report_scalar_common_8[1]));
#line 964 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_34_34, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_2));
#line 964 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 964 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_34_34, 3) = ((MR_Box) (create_report__Deep_4));
#line 964 "create_report.m"
        }
#line 964 "create_report.m"
        {
#line 964 "create_report.m"
          create_report__V_35_35 = measurements__zero_own_prof_info_0_f_0();
        }
#line 964 "create_report.m"
        {
#line 964 "create_report.m"
          create_report__V_36_36 = measurements__zero_inherit_prof_info_0_f_0();
        }
#line 964 "create_report.m"
        {
#line 964 "create_report.m"
          mercury__list__map_foldl2_7_p_0(create_report__TypeCtorInfo_57_57, (MR_Word) &create_report_scalar_common_1[3], (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__V_34_34, create_report__CallSiteCalleePerfs_30, &create_report__SubRowDatas_29, ((MR_Box) (create_report__V_35_35)), &create_report__conv5_SumOwn_31, ((MR_Box) (create_report__V_36_36)), &create_report__conv4_SumDesc_32);
        }
#line 964 "create_report.m"
        create_report__SumOwn_31 = ((MR_Word) create_report__conv5_SumOwn_31);
#line 964 "create_report.m"
        create_report__SumDesc_32 = ((MR_Word) create_report__conv4_SumDesc_32);
#line 967 "create_report.m"
        {
#line 967 "create_report.m"
          create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__SumOwn_31, create_report__SumDesc_32, &create_report__SummaryRowData_28);
        }
#line 960 "create_report.m"
      }
#line 947 "create_report.m"
    else
#line 947 "create_report.m"
      if ((create_report__KindAndCallee_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 960 "create_report.m"
        {
#line 960 "create_report.m"
          MR_Word create_report__TypeCtorInfo_57_86;
#line 960 "create_report.m"
          MR_Word create_report__CallSiteCalleePerfs_78;
#line 960 "create_report.m"
          MR_Word create_report__SumOwn_79;
#line 960 "create_report.m"
          MR_Word create_report__SumDesc_80;
#line 960 "create_report.m"
          MR_Word create_report__V_81_81;
#line 960 "create_report.m"
          MR_Word create_report__V_82_82;
#line 960 "create_report.m"
          MR_Word create_report__V_83_83;
#line 960 "create_report.m"
          MR_Word create_report__V_84_84;
#line 964 "create_report.m"
          MR_Box create_report__conv11_SumOwn_79;
#line 964 "create_report.m"
          MR_Box create_report__conv10_SumDesc_80;

#line 953 "create_report.m"
          create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 8786 "create_report.c"
          create_report__TypeCtorInfo_57_86 = (MR_Word) &create_report__create_report__type_ctor_info_call_site_callee_perf_0;
#line 962 "create_report.m"
          {
#line 962 "create_report.m"
            create_report__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 962 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__V_81_81, 0) = ((MR_Box) (&create_report_scalar_common_6[10]));
#line 962 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__V_81_81, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_3));
#line 962 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 962 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__V_81_81, 3) = ((MR_Box) (create_report__Deep_4));
#line 962 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__V_81_81, 4) = ((MR_Box) (create_report__CallerPSPtr_10));
#line 962 "create_report.m"
          }
#line 961 "create_report.m"
          {
#line 961 "create_report.m"
            create_report__CallSiteCalleePerfs_78 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[12], create_report__TypeCtorInfo_57_86, create_report__V_81_81, create_report__CallSiteCalls_12);
          }
#line 964 "create_report.m"
          {
#line 964 "create_report.m"
            create_report__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 964 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__V_82_82, 0) = ((MR_Box) (&create_report_scalar_common_8[1]));
#line 964 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__V_82_82, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_4));
#line 964 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 964 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__V_82_82, 3) = ((MR_Box) (create_report__Deep_4));
#line 964 "create_report.m"
          }
#line 964 "create_report.m"
          {
#line 964 "create_report.m"
            create_report__V_83_83 = measurements__zero_own_prof_info_0_f_0();
          }
#line 964 "create_report.m"
          {
#line 964 "create_report.m"
            create_report__V_84_84 = measurements__zero_inherit_prof_info_0_f_0();
          }
#line 964 "create_report.m"
          {
#line 964 "create_report.m"
            mercury__list__map_foldl2_7_p_0(create_report__TypeCtorInfo_57_86, (MR_Word) &create_report_scalar_common_1[3], (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__V_82_82, create_report__CallSiteCalleePerfs_78, &create_report__SubRowDatas_29, ((MR_Box) (create_report__V_83_83)), &create_report__conv11_SumOwn_79, ((MR_Box) (create_report__V_84_84)), &create_report__conv10_SumDesc_80);
          }
#line 964 "create_report.m"
          create_report__SumOwn_79 = ((MR_Word) create_report__conv11_SumOwn_79);
#line 964 "create_report.m"
          create_report__SumDesc_80 = ((MR_Word) create_report__conv10_SumDesc_80);
#line 967 "create_report.m"
          {
#line 967 "create_report.m"
            create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__SumOwn_79, create_report__SumDesc_80, &create_report__SummaryRowData_28);
          }
#line 960 "create_report.m"
        }
#line 947 "create_report.m"
      else
#line 947 "create_report.m"
        if ((create_report__KindAndCallee_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 960 "create_report.m"
          {
#line 960 "create_report.m"
            MR_Word create_report__TypeCtorInfo_57_107;
#line 960 "create_report.m"
            MR_Word create_report__CallSiteCalleePerfs_99;
#line 960 "create_report.m"
            MR_Word create_report__SumOwn_100;
#line 960 "create_report.m"
            MR_Word create_report__SumDesc_101;
#line 960 "create_report.m"
            MR_Word create_report__V_102_102;
#line 960 "create_report.m"
            MR_Word create_report__V_103_103;
#line 960 "create_report.m"
            MR_Word create_report__V_104_104;
#line 960 "create_report.m"
            MR_Word create_report__V_105_105;
#line 964 "create_report.m"
            MR_Box create_report__conv17_SumOwn_100;
#line 964 "create_report.m"
            MR_Box create_report__conv16_SumDesc_101;

#line 956 "create_report.m"
            create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 8878 "create_report.c"
            create_report__TypeCtorInfo_57_107 = (MR_Word) &create_report__create_report__type_ctor_info_call_site_callee_perf_0;
#line 962 "create_report.m"
            {
#line 962 "create_report.m"
              create_report__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 962 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_102_102, 0) = ((MR_Box) (&create_report_scalar_common_6[10]));
#line 962 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_102_102, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_5));
#line 962 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_102_102, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 962 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_102_102, 3) = ((MR_Box) (create_report__Deep_4));
#line 962 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_102_102, 4) = ((MR_Box) (create_report__CallerPSPtr_10));
#line 962 "create_report.m"
            }
#line 961 "create_report.m"
            {
#line 961 "create_report.m"
              create_report__CallSiteCalleePerfs_99 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[12], create_report__TypeCtorInfo_57_107, create_report__V_102_102, create_report__CallSiteCalls_12);
            }
#line 964 "create_report.m"
            {
#line 964 "create_report.m"
              create_report__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 964 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_103_103, 0) = ((MR_Box) (&create_report_scalar_common_8[1]));
#line 964 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_103_103, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_6));
#line 964 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 964 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_103_103, 3) = ((MR_Box) (create_report__Deep_4));
#line 964 "create_report.m"
            }
#line 964 "create_report.m"
            {
#line 964 "create_report.m"
              create_report__V_104_104 = measurements__zero_own_prof_info_0_f_0();
            }
#line 964 "create_report.m"
            {
#line 964 "create_report.m"
              create_report__V_105_105 = measurements__zero_inherit_prof_info_0_f_0();
            }
#line 964 "create_report.m"
            {
#line 964 "create_report.m"
              mercury__list__map_foldl2_7_p_0(create_report__TypeCtorInfo_57_107, (MR_Word) &create_report_scalar_common_1[3], (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__V_103_103, create_report__CallSiteCalleePerfs_99, &create_report__SubRowDatas_29, ((MR_Box) (create_report__V_104_104)), &create_report__conv17_SumOwn_100, ((MR_Box) (create_report__V_105_105)), &create_report__conv16_SumDesc_101);
            }
#line 964 "create_report.m"
            create_report__SumOwn_100 = ((MR_Word) create_report__conv17_SumOwn_100);
#line 964 "create_report.m"
            create_report__SumDesc_101 = ((MR_Word) create_report__conv16_SumDesc_101);
#line 967 "create_report.m"
            {
#line 967 "create_report.m"
              create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__SumOwn_100, create_report__SumDesc_101, &create_report__SummaryRowData_28);
            }
#line 960 "create_report.m"
          }
#line 947 "create_report.m"
        else
#line 947 "create_report.m"
          if ((create_report__KindAndCallee_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 960 "create_report.m"
            {
#line 960 "create_report.m"
              MR_Word create_report__TypeCtorInfo_57_128;
#line 960 "create_report.m"
              MR_Word create_report__CallSiteCalleePerfs_120;
#line 960 "create_report.m"
              MR_Word create_report__SumOwn_121;
#line 960 "create_report.m"
              MR_Word create_report__SumDesc_122;
#line 960 "create_report.m"
              MR_Word create_report__V_123_123;
#line 960 "create_report.m"
              MR_Word create_report__V_124_124;
#line 960 "create_report.m"
              MR_Word create_report__V_125_125;
#line 960 "create_report.m"
              MR_Word create_report__V_126_126;
#line 964 "create_report.m"
              MR_Box create_report__conv23_SumOwn_121;
#line 964 "create_report.m"
              MR_Box create_report__conv22_SumDesc_122;

#line 950 "create_report.m"
              create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8970 "create_report.c"
              create_report__TypeCtorInfo_57_128 = (MR_Word) &create_report__create_report__type_ctor_info_call_site_callee_perf_0;
#line 962 "create_report.m"
              {
#line 962 "create_report.m"
                create_report__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 962 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_123_123, 0) = ((MR_Box) (&create_report_scalar_common_6[10]));
#line 962 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_123_123, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_7));
#line 962 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_123_123, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 962 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_123_123, 3) = ((MR_Box) (create_report__Deep_4));
#line 962 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_123_123, 4) = ((MR_Box) (create_report__CallerPSPtr_10));
#line 962 "create_report.m"
              }
#line 961 "create_report.m"
              {
#line 961 "create_report.m"
                create_report__CallSiteCalleePerfs_120 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[12], create_report__TypeCtorInfo_57_128, create_report__V_123_123, create_report__CallSiteCalls_12);
              }
#line 964 "create_report.m"
              {
#line 964 "create_report.m"
                create_report__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 964 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_124_124, 0) = ((MR_Box) (&create_report_scalar_common_8[1]));
#line 964 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_124_124, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_8));
#line 964 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_124_124, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 964 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_124_124, 3) = ((MR_Box) (create_report__Deep_4));
#line 964 "create_report.m"
              }
#line 964 "create_report.m"
              {
#line 964 "create_report.m"
                create_report__V_125_125 = measurements__zero_own_prof_info_0_f_0();
              }
#line 964 "create_report.m"
              {
#line 964 "create_report.m"
                create_report__V_126_126 = measurements__zero_inherit_prof_info_0_f_0();
              }
#line 964 "create_report.m"
              {
#line 964 "create_report.m"
                mercury__list__map_foldl2_7_p_0(create_report__TypeCtorInfo_57_128, (MR_Word) &create_report_scalar_common_1[3], (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__V_124_124, create_report__CallSiteCalleePerfs_120, &create_report__SubRowDatas_29, ((MR_Box) (create_report__V_125_125)), &create_report__conv23_SumOwn_121, ((MR_Box) (create_report__V_126_126)), &create_report__conv22_SumDesc_122);
              }
#line 964 "create_report.m"
              create_report__SumOwn_121 = ((MR_Word) create_report__conv23_SumOwn_121);
#line 964 "create_report.m"
              create_report__SumDesc_122 = ((MR_Word) create_report__conv22_SumDesc_122);
#line 967 "create_report.m"
              {
#line 967 "create_report.m"
                create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__SumOwn_121, create_report__SumDesc_122, &create_report__SummaryRowData_28);
              }
#line 960 "create_report.m"
            }
#line 947 "create_report.m"
          else
#line 924 "create_report.m"
            {
#line 924 "create_report.m"
              MR_Word create_report__CalleePSPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__KindAndCallee_9, (MR_Integer) 0)));
#line 924 "create_report.m"
              MR_String create_report__TypeSubstStr_14 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__KindAndCallee_9, (MR_Integer) 1)));
#line 924 "create_report.m"
              MR_Word create_report__CalleeDesc_15;
#line 924 "create_report.m"
              MR_Word create_report__NormalCallId_16;
#line 924 "create_report.m"
              MR_Word create_report__Own_18;
#line 924 "create_report.m"
              MR_Word create_report__Desc_19;

#line 925 "create_report.m"
              {
#line 925 "create_report.m"
                create_report__CalleeDesc_15 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__CalleePSPtr_13);
              }
#line 926 "create_report.m"
              {
#line 926 "create_report.m"
                create_report__NormalCallId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 926 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__NormalCallId_16, 0) = ((MR_Box) (create_report__CalleeDesc_15));
#line 926 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__NormalCallId_16, 1) = ((MR_Box) (create_report__TypeSubstStr_14));
#line 926 "create_report.m"
              }
#line 927 "create_report.m"
              {
#line 927 "create_report.m"
                create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 927 "create_report.m"
                MR_hl_field(MR_mktag(1), create_report__KindAndInfo_17, 0) = ((MR_Box) (create_report__NormalCallId_16));
#line 927 "create_report.m"
              }
#line 932 "create_report.m"
              if ((create_report__CallSiteCalls_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "create_report.m"
                {
#line 930 "create_report.m"
                  {
#line 930 "create_report.m"
                    create_report__Own_18 = measurements__zero_own_prof_info_0_f_0();
                  }
#line 931 "create_report.m"
                  {
#line 931 "create_report.m"
                    create_report__Desc_19 = measurements__zero_inherit_prof_info_0_f_0();
                  }
#line 929 "create_report.m"
                }
#line 932 "create_report.m"
              else
#line 932 "create_report.m"
                {
#line 932 "create_report.m"
                  MR_Word create_report__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteCalls_12, (MR_Integer) 1)));
#line 932 "create_report.m"
                  MR_Word create_report__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteCalls_12, (MR_Integer) 0)));

#line 932 "create_report.m"
                  if ((create_report__V_133_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 933 "create_report.m"
                    {
#line 933 "create_report.m"
                      MR_Word create_report__CalleePSPtrFromCall_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_134_134, (MR_Integer) 0)));
#line 933 "create_report.m"
                      MR_Word create_report__CallSiteCalleePerf_23;
#line 933 "create_report.m"
                      MR_Word create_report__V_42_42;
#line 934 "create_report.m"
                      MR_Word create_report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_134_134, (MR_Integer) 1)));
#line 939 "create_report.m"
                      MR_Word create_report__V_24_24;

#line 935 "create_report.m"
                      {
#line 935 "create_report.m"
                        create_report__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 935 "create_report.m"
                        MR_hl_field(MR_mktag(0), create_report__V_42_42, 0) = ((MR_Box) (&create_report_scalar_common_7[3]));
#line 935 "create_report.m"
                        MR_hl_field(MR_mktag(0), create_report__V_42_42, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_9));
#line 935 "create_report.m"
                        MR_hl_field(MR_mktag(0), create_report__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 935 "create_report.m"
                        MR_hl_field(MR_mktag(0), create_report__V_42_42, 3) = ((MR_Box) (create_report__CalleePSPtr_13));
#line 935 "create_report.m"
                        MR_hl_field(MR_mktag(0), create_report__V_42_42, 4) = ((MR_Box) (create_report__CalleePSPtrFromCall_21));
#line 935 "create_report.m"
                      }
#line 935 "create_report.m"
                      {
#line 935 "create_report.m"
                        mercury__require__require_2_p_0(create_report__V_42_42, (MR_String) "create_call_site_summary: callee mismatch");
                      }
#line 937 "create_report.m"
                      {
#line 937 "create_report.m"
                        create_report__CallSiteCalleePerf_23 = create_report__generate_call_site_callee_perf_3_f_0(create_report__Deep_4, create_report__CallerPSPtr_10, create_report__V_134_134);
                      }
#line 939 "create_report.m"
                      create_report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteCalleePerf_23, (MR_Integer) 0)));
#line 939 "create_report.m"
                      create_report__Own_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteCalleePerf_23, (MR_Integer) 1)));
#line 939 "create_report.m"
                      create_report__Desc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteCalleePerf_23, (MR_Integer) 2)));
#line 933 "create_report.m"
                    }
#line 932 "create_report.m"
                  else
#line 941 "create_report.m"
                    {
#line 942 "create_report.m"
                      {
#line 942 "create_report.m"
                        mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.create_call_site_summary\'/2", (MR_String) ">1 proc called at normal site");
                      }
#line 941 "create_report.m"
                    }
#line 932 "create_report.m"
                }
#line 944 "create_report.m"
              {
#line 944 "create_report.m"
                create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__Own_18, create_report__Desc_19, &create_report__SummaryRowData_28);
              }
#line 946 "create_report.m"
              create_report__SubRowDatas_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 924 "create_report.m"
            }
#line 970 "create_report.m"
    {
#line 970 "create_report.m"
      create_report__CallSitePerf_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 970 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSitePerf_6, 0) = ((MR_Box) (create_report__KindAndInfo_17));
#line 970 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSitePerf_6, 1) = ((MR_Box) (create_report__SummaryRowData_28));
#line 970 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSitePerf_6, 2) = ((MR_Box) (create_report__SubRowDatas_29));
#line 970 "create_report.m"
    }
#line 913 "create_report.m"
    return create_report__CallSitePerf_6;
#line 913 "create_report.m"
  }
#line 911 "create_report.m"
}

#line 811 "create_report.m"
static void MR_CALL 
create_report__create_module_rep_report_3_p_0(
#line 811 "create_report.m"
  MR_Word create_report__Deep_4,
#line 811 "create_report.m"
  MR_String create_report__ModuleName_5,
#line 811 "create_report.m"
  MR_Word * create_report__MaybeModuleRepReport_6)
#line 811 "create_report.m"
{
#line 814 "create_report.m"
  {
#line 814 "create_report.m"
    MR_bool create_report__succeeded;
#line 814 "create_report.m"
    MR_Word create_report__MaybeProgRep_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));
#line 815 "create_report.m"
    MR_Word create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
#line 815 "create_report.m"
    MR_String create_report__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
#line 815 "create_report.m"
    MR_String create_report__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
#line 815 "create_report.m"
    MR_String create_report__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
#line 815 "create_report.m"
    MR_Word create_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
#line 815 "create_report.m"
    MR_ArrayPtr create_report__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
#line 815 "create_report.m"
    MR_Word create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
#line 815 "create_report.m"
    MR_Word create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
#line 815 "create_report.m"
    MR_Word create_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));

#line 835 "create_report.m"
    if ((create_report__MaybeProgRep_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 836 "create_report.m"
      {
#line 838 "create_report.m"
        *create_report__MaybeModuleRepReport_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_5[1]);
#line 836 "create_report.m"
      }
#line 835 "create_report.m"
    else
#line 817 "create_report.m"
      {
#line 817 "create_report.m"
        MR_Word create_report__MaybeErrorProgRep_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__MaybeProgRep_7, (MR_Integer) 0)));

#line 831 "create_report.m"
        if (((MR_tag((MR_Word) create_report__MaybeErrorProgRep_8)) == (MR_mktag((MR_Integer) 1))))
#line 833 "create_report.m"
          *create_report__MaybeModuleRepReport_6 = (MR_Word) create_report__MaybeErrorProgRep_8;
#line 831 "create_report.m"
        else
#line 819 "create_report.m"
          {
#line 819 "create_report.m"
            MR_Word create_report__ProgRep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeErrorProgRep_8, (MR_Integer) 0)));
#line 819 "create_report.m"
            MR_Word create_report__ModuleRepMap_10 = (MR_Word) create_report__ProgRep_9;
#line 826 "create_report.m"
            MR_Word create_report__ModuleRep_11;
#line 821 "create_report.m"
            MR_Box create_report__conv0_ModuleRep_11;

#line 821 "create_report.m"
            {
#line 821 "create_report.m"
              create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &create_report_scalar_common_1[7], create_report__ModuleRepMap_10, ((MR_Box) (create_report__ModuleName_5)), &create_report__conv0_ModuleRep_11);
            }
#line 821 "create_report.m"
            if (create_report__succeeded)
#line 821 "create_report.m"
              {
#line 821 "create_report.m"
                create_report__ModuleRep_11 = ((MR_Word) create_report__conv0_ModuleRep_11);
#line 821 "create_report.m"
                create_report__succeeded = MR_TRUE;
#line 821 "create_report.m"
              }
#line 826 "create_report.m"
            if (create_report__succeeded)
#line 822 "create_report.m"
              {
#line 822 "create_report.m"
                MR_Word create_report__CordStrs_12;
#line 822 "create_report.m"
                MR_String create_report__Str_13;
#line 822 "create_report.m"
                MR_Word create_report__ModuleRepReport_14;
#line 822 "create_report.m"
                MR_Word create_report__V_16_16;

#line 822 "create_report.m"
                {
#line 822 "create_report.m"
                  program_representation_utils__print_module_to_strings_2_p_0(create_report__ModuleRep_11, &create_report__CordStrs_12);
                }
#line 823 "create_report.m"
                {
#line 823 "create_report.m"
                  create_report__V_16_16 = mercury__cord__list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, create_report__CordStrs_12);
                }
#line 823 "create_report.m"
                {
#line 823 "create_report.m"
                  create_report__Str_13 = mercury__string__append_list_1_f_0(create_report__V_16_16);
                }
#line 824 "create_report.m"
                {
#line 824 "create_report.m"
                  create_report__ModuleRepReport_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 824 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__ModuleRepReport_14, 0) = ((MR_Box) (create_report__ModuleName_5));
#line 824 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__ModuleRepReport_14, 1) = ((MR_Box) (create_report__Str_13));
#line 824 "create_report.m"
                }
#line 825 "create_report.m"
                {
#line 825 "create_report.m"
                  MR_Word base;
#line 825 "create_report.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 825 "create_report.m"
                  *create_report__MaybeModuleRepReport_6 = base;
#line 825 "create_report.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ModuleRepReport_14));
#line 825 "create_report.m"
                }
#line 822 "create_report.m"
              }
#line 826 "create_report.m"
            else
#line 828 "create_report.m"
              {
#line 828 "create_report.m"
                MR_String create_report__Msg_15;
#line 828 "create_report.m"
                MR_String create_report__V_55_55;

#line 9370 "create_report.c"
                {
#line 9372 "create_report.c"
                  create_report__V_55_55 = mercury__string__f_43_43_2_f_0(create_report__ModuleName_5, (MR_String) ".\n");
                }
#line 9375 "create_report.c"
                {
#line 9377 "create_report.c"
                  create_report__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "There is no module named ", create_report__V_55_55);
                }
#line 829 "create_report.m"
                {
#line 829 "create_report.m"
                  MR_Word base;
#line 829 "create_report.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 829 "create_report.m"
                  *create_report__MaybeModuleRepReport_6 = base;
#line 829 "create_report.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Msg_15));
#line 829 "create_report.m"
                }
#line 828 "create_report.m"
              }
#line 819 "create_report.m"
          }
#line 817 "create_report.m"
      }
#line 814 "create_report.m"
  }
#line 811 "create_report.m"
}

#line 782 "create_report.m"
static MR_bool MR_CALL 
create_report__is_getter_or_setter_2_4_p_0(
#line 782 "create_report.m"
  MR_Word create_report__NameChars_5,
#line 782 "create_report.m"
  MR_Word * create_report__GetterSetter_6,
#line 782 "create_report.m"
  MR_Word * create_report__DataStructNameChars_7,
#line 782 "create_report.m"
  MR_Word * create_report__FieldNameChars_8)
#line 782 "create_report.m"
{
#line 791 "create_report.m"
  {
#line 791 "create_report.m"
    MR_bool create_report__succeeded = ((MR_tag((MR_Word) create_report__NameChars_5)) == (MR_mktag((MR_Integer) 1)));
#line 791 "create_report.m"
    MR_Word create_report__FieldNameCharsPrime_9;
#line 787 "create_report.m"
    MR_Char create_report__V_13_13;
#line 787 "create_report.m"
    MR_Word create_report__V_14_14;
#line 787 "create_report.m"
    MR_Char create_report__V_15_15;
#line 787 "create_report.m"
    MR_Word create_report__V_16_16;
#line 787 "create_report.m"
    MR_Char create_report__V_17_17;
#line 787 "create_report.m"
    MR_Word create_report__V_18_18;
#line 787 "create_report.m"
    MR_Char create_report__V_19_19;
#line 787 "create_report.m"
    MR_Word create_report__V_20_20;
#line 787 "create_report.m"
    MR_Char create_report__V_21_21;

#line 787 "create_report.m"
    if (create_report__succeeded)
#line 787 "create_report.m"
      {
#line 787 "create_report.m"
        create_report__V_13_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 0)));
#line 787 "create_report.m"
        create_report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 1)));
#line 787 "create_report.m"
        create_report__succeeded = (create_report__V_13_13 == (MR_Char) 95);
#line 787 "create_report.m"
        if (create_report__succeeded)
#line 787 "create_report.m"
          {
#line 787 "create_report.m"
            create_report__succeeded = ((MR_tag((MR_Word) create_report__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 787 "create_report.m"
            if (create_report__succeeded)
#line 787 "create_report.m"
              {
#line 787 "create_report.m"
                create_report__V_15_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_14_14, (MR_Integer) 0)));
#line 787 "create_report.m"
                create_report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_14_14, (MR_Integer) 1)));
#line 787 "create_report.m"
                create_report__succeeded = (create_report__V_15_15 == (MR_Char) 103);
#line 787 "create_report.m"
                if (create_report__succeeded)
#line 787 "create_report.m"
                  {
#line 787 "create_report.m"
                    create_report__succeeded = ((MR_tag((MR_Word) create_report__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 787 "create_report.m"
                    if (create_report__succeeded)
#line 787 "create_report.m"
                      {
#line 787 "create_report.m"
                        create_report__V_17_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_16_16, (MR_Integer) 0)));
#line 787 "create_report.m"
                        create_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_16_16, (MR_Integer) 1)));
#line 787 "create_report.m"
                        create_report__succeeded = (create_report__V_17_17 == (MR_Char) 101);
#line 787 "create_report.m"
                        if (create_report__succeeded)
#line 787 "create_report.m"
                          {
#line 787 "create_report.m"
                            create_report__succeeded = ((MR_tag((MR_Word) create_report__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 787 "create_report.m"
                            if (create_report__succeeded)
#line 787 "create_report.m"
                              {
#line 787 "create_report.m"
                                create_report__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_18_18, (MR_Integer) 0)));
#line 787 "create_report.m"
                                create_report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_18_18, (MR_Integer) 1)));
#line 787 "create_report.m"
                                create_report__succeeded = (create_report__V_19_19 == (MR_Char) 116);
#line 787 "create_report.m"
                                if (create_report__succeeded)
#line 787 "create_report.m"
                                  {
#line 787 "create_report.m"
                                    create_report__succeeded = ((MR_tag((MR_Word) create_report__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 787 "create_report.m"
                                    if (create_report__succeeded)
#line 787 "create_report.m"
                                      {
#line 787 "create_report.m"
                                        create_report__V_21_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_20_20, (MR_Integer) 0)));
#line 787 "create_report.m"
                                        create_report__FieldNameCharsPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_20_20, (MR_Integer) 1)));
#line 787 "create_report.m"
                                        create_report__succeeded = (create_report__V_21_21 == (MR_Char) 95);
#line 787 "create_report.m"
                                      }
#line 787 "create_report.m"
                                  }
#line 787 "create_report.m"
                              }
#line 787 "create_report.m"
                          }
#line 787 "create_report.m"
                      }
#line 787 "create_report.m"
                  }
#line 787 "create_report.m"
              }
#line 787 "create_report.m"
          }
#line 787 "create_report.m"
      }
#line 791 "create_report.m"
    if (create_report__succeeded)
#line 788 "create_report.m"
      {
#line 788 "create_report.m"
        *create_report__GetterSetter_6 = (MR_Integer) 0;
#line 789 "create_report.m"
        *create_report__DataStructNameChars_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 790 "create_report.m"
        *create_report__FieldNameChars_8 = create_report__FieldNameCharsPrime_9;
#line 788 "create_report.m"
        create_report__succeeded = MR_TRUE;
#line 788 "create_report.m"
      }
#line 791 "create_report.m"
    else
#line 795 "create_report.m"
      {
#line 795 "create_report.m"
        MR_Word create_report__FieldNameCharsPrime_31;
#line 791 "create_report.m"
        MR_Char create_report__V_22_22;
#line 791 "create_report.m"
        MR_Word create_report__V_23_23;
#line 791 "create_report.m"
        MR_Char create_report__V_24_24;
#line 791 "create_report.m"
        MR_Word create_report__V_25_25;
#line 791 "create_report.m"
        MR_Char create_report__V_26_26;
#line 791 "create_report.m"
        MR_Word create_report__V_27_27;
#line 791 "create_report.m"
        MR_Char create_report__V_28_28;
#line 791 "create_report.m"
        MR_Word create_report__V_29_29;
#line 791 "create_report.m"
        MR_Char create_report__V_30_30;

#line 791 "create_report.m"
        create_report__succeeded = ((MR_tag((MR_Word) create_report__NameChars_5)) == (MR_mktag((MR_Integer) 1)));
#line 791 "create_report.m"
        if (create_report__succeeded)
#line 791 "create_report.m"
          {
#line 791 "create_report.m"
            create_report__V_22_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 0)));
#line 791 "create_report.m"
            create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 1)));
#line 791 "create_report.m"
            create_report__succeeded = (create_report__V_22_22 == (MR_Char) 95);
#line 791 "create_report.m"
            if (create_report__succeeded)
#line 791 "create_report.m"
              {
#line 791 "create_report.m"
                create_report__succeeded = ((MR_tag((MR_Word) create_report__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 791 "create_report.m"
                if (create_report__succeeded)
#line 791 "create_report.m"
                  {
#line 791 "create_report.m"
                    create_report__V_24_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_23_23, (MR_Integer) 0)));
#line 791 "create_report.m"
                    create_report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_23_23, (MR_Integer) 1)));
#line 791 "create_report.m"
                    create_report__succeeded = (create_report__V_24_24 == (MR_Char) 115);
#line 791 "create_report.m"
                    if (create_report__succeeded)
#line 791 "create_report.m"
                      {
#line 791 "create_report.m"
                        create_report__succeeded = ((MR_tag((MR_Word) create_report__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 791 "create_report.m"
                        if (create_report__succeeded)
#line 791 "create_report.m"
                          {
#line 791 "create_report.m"
                            create_report__V_26_26 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_25_25, (MR_Integer) 0)));
#line 791 "create_report.m"
                            create_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_25_25, (MR_Integer) 1)));
#line 791 "create_report.m"
                            create_report__succeeded = (create_report__V_26_26 == (MR_Char) 101);
#line 791 "create_report.m"
                            if (create_report__succeeded)
#line 791 "create_report.m"
                              {
#line 791 "create_report.m"
                                create_report__succeeded = ((MR_tag((MR_Word) create_report__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 791 "create_report.m"
                                if (create_report__succeeded)
#line 791 "create_report.m"
                                  {
#line 791 "create_report.m"
                                    create_report__V_28_28 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_27_27, (MR_Integer) 0)));
#line 791 "create_report.m"
                                    create_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_27_27, (MR_Integer) 1)));
#line 791 "create_report.m"
                                    create_report__succeeded = (create_report__V_28_28 == (MR_Char) 116);
#line 791 "create_report.m"
                                    if (create_report__succeeded)
#line 791 "create_report.m"
                                      {
#line 791 "create_report.m"
                                        create_report__succeeded = ((MR_tag((MR_Word) create_report__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 791 "create_report.m"
                                        if (create_report__succeeded)
#line 791 "create_report.m"
                                          {
#line 791 "create_report.m"
                                            create_report__V_30_30 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_29_29, (MR_Integer) 0)));
#line 791 "create_report.m"
                                            create_report__FieldNameCharsPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_29_29, (MR_Integer) 1)));
#line 791 "create_report.m"
                                            create_report__succeeded = (create_report__V_30_30 == (MR_Char) 95);
#line 791 "create_report.m"
                                          }
#line 791 "create_report.m"
                                      }
#line 791 "create_report.m"
                                  }
#line 791 "create_report.m"
                              }
#line 791 "create_report.m"
                          }
#line 791 "create_report.m"
                      }
#line 791 "create_report.m"
                  }
#line 791 "create_report.m"
              }
#line 791 "create_report.m"
          }
#line 795 "create_report.m"
        if (create_report__succeeded)
#line 792 "create_report.m"
          {
#line 792 "create_report.m"
            *create_report__GetterSetter_6 = (MR_Integer) 1;
#line 793 "create_report.m"
            *create_report__DataStructNameChars_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 794 "create_report.m"
            *create_report__FieldNameChars_8 = create_report__FieldNameCharsPrime_31;
#line 792 "create_report.m"
            create_report__succeeded = MR_TRUE;
#line 792 "create_report.m"
          }
#line 795 "create_report.m"
        else
#line 796 "create_report.m"
          {
#line 796 "create_report.m"
            MR_Char create_report__FirstNameChar_10;
#line 796 "create_report.m"
            MR_Word create_report__LaterNameChars_11;
#line 796 "create_report.m"
            MR_Word create_report__LaterDataStructNameChars_12;

#line 796 "create_report.m"
            create_report__succeeded = ((MR_tag((MR_Word) create_report__NameChars_5)) == (MR_mktag((MR_Integer) 1)));
#line 796 "create_report.m"
            if (create_report__succeeded)
#line 796 "create_report.m"
              {
#line 796 "create_report.m"
                create_report__FirstNameChar_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 0)));
#line 796 "create_report.m"
                create_report__LaterNameChars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 1)));
#line 797 "create_report.m"
                {
#line 797 "create_report.m"
                  create_report__succeeded = create_report__is_getter_or_setter_2_4_p_0(create_report__LaterNameChars_11, create_report__GetterSetter_6, &create_report__LaterDataStructNameChars_12, create_report__FieldNameChars_8);
                }
#line 796 "create_report.m"
                if (create_report__succeeded)
#line 796 "create_report.m"
                  {
#line 799 "create_report.m"
                    {
#line 799 "create_report.m"
                      MR_Word base;
#line 799 "create_report.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "create_report.m"
                      *create_report__DataStructNameChars_7 = base;
#line 799 "create_report.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (create_report__FirstNameChar_10));
#line 799 "create_report.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (create_report__LaterDataStructNameChars_12));
#line 799 "create_report.m"
                    }
#line 799 "create_report.m"
                    create_report__succeeded = MR_TRUE;
#line 796 "create_report.m"
                  }
#line 796 "create_report.m"
              }
#line 796 "create_report.m"
          }
#line 795 "create_report.m"
      }
#line 791 "create_report.m"
    return create_report__succeeded;
#line 791 "create_report.m"
  }
#line 782 "create_report.m"
}

#line 699 "create_report.m"
static void MR_CALL 
create_report__gather_getters_setters_4_p_0(
#line 699 "create_report.m"
  MR_Word create_report__Deep_5,
#line 699 "create_report.m"
  MR_Word create_report__PSPtr_6,
#line 699 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_GSDSRawMap_0_32,
#line 699 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_GSDSRawMap_33)
#line 699 "create_report.m"
{
#line 755 "create_report.m"
  {
#line 755 "create_report.m"
    MR_bool create_report__succeeded;

#line 703 "create_report.m"
    {
#line 703 "create_report.m"
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_5, create_report__PSPtr_6);
    }
#line 755 "create_report.m"
    if (create_report__succeeded)
#line 704 "create_report.m"
      {
#line 704 "create_report.m"
        MR_Word create_report__PS_8;
#line 704 "create_report.m"
        MR_Word create_report__Id_9;
#line 705 "create_report.m"
        MR_String create_report__V_44_44;
#line 705 "create_report.m"
        MR_String create_report__V_45_45;
#line 705 "create_report.m"
        MR_String create_report__V_46_46;
#line 705 "create_report.m"
        MR_String create_report__V_47_47;
#line 705 "create_report.m"
        MR_String create_report__V_48_48;
#line 705 "create_report.m"
        MR_Integer create_report__V_49_49;
#line 705 "create_report.m"
        MR_Word create_report__V_50_50;
#line 705 "create_report.m"
        MR_ArrayPtr create_report__V_51_51;
#line 705 "create_report.m"
        MR_ArrayPtr create_report__V_52_52;
#line 705 "create_report.m"
        MR_Word create_report__V_53_53;
#line 705 "create_report.m"
        MR_Word create_report__V_54_54;
#line 752 "create_report.m"
        MR_Word create_report__GetterSetter_10;
#line 752 "create_report.m"
        MR_Word create_report__DataStructName_11;
#line 752 "create_report.m"
        MR_Word create_report__FieldName_12;
#line 763 "create_report.m"
        MR_String create_report__DeclModule_72;
#line 763 "create_report.m"
        MR_String create_report__DefModule_73;
#line 763 "create_report.m"
        MR_String create_report__Name_74;
#line 763 "create_report.m"
        MR_Integer create_report__Arity_75;
#line 763 "create_report.m"
        MR_Word create_report__NameChars_77;
#line 763 "create_report.m"
        MR_Word create_report__DataStructNameChars_78;
#line 763 "create_report.m"
        MR_Word create_report__FieldNameChars_79;
#line 763 "create_report.m"
        MR_String create_report__DataStructNameStr_80;
#line 763 "create_report.m"
        MR_String create_report__FieldNameStr_81;
#line 764 "create_report.m"
        MR_Word create_report___PorF_71;
#line 764 "create_report.m"
        MR_Integer create_report___Mode_76;

#line 704 "create_report.m"
        {
#line 704 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_5, create_report__PSPtr_6, &create_report__PS_8);
        }
#line 705 "create_report.m"
        create_report__Id_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 0)));
#line 705 "create_report.m"
        create_report__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 1)));
#line 705 "create_report.m"
        create_report__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 2)));
#line 705 "create_report.m"
        create_report__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 3)));
#line 705 "create_report.m"
        create_report__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 4)));
#line 705 "create_report.m"
        create_report__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 5)));
#line 705 "create_report.m"
        create_report__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 6)));
#line 705 "create_report.m"
        create_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 7)));
#line 705 "create_report.m"
        create_report__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 8)));
#line 705 "create_report.m"
        create_report__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 9)));
#line 705 "create_report.m"
        create_report__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 10)));
#line 705 "create_report.m"
        create_report__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 11)));
#line 764 "create_report.m"
        create_report__succeeded = ((MR_tag((MR_Word) create_report__Id_9)) == (MR_mktag((MR_Integer) 0)));
#line 764 "create_report.m"
        if (create_report__succeeded)
#line 764 "create_report.m"
          {
#line 764 "create_report.m"
            create_report___PorF_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 0)));
#line 764 "create_report.m"
            create_report__DeclModule_72 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 1)));
#line 764 "create_report.m"
            create_report__DefModule_73 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 2)));
#line 764 "create_report.m"
            create_report__Name_74 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 3)));
#line 764 "create_report.m"
            create_report__Arity_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 4)));
#line 764 "create_report.m"
            create_report___Mode_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 5)));
#line 766 "create_report.m"
            create_report__succeeded = (strcmp(create_report__DeclModule_72, create_report__DefModule_73) == 0);
#line 763 "create_report.m"
            if (create_report__succeeded)
#line 763 "create_report.m"
              {
#line 767 "create_report.m"
                {
#line 767 "create_report.m"
                  mercury__string__to_char_list_2_p_0(create_report__Name_74, &create_report__NameChars_77);
                }
#line 768 "create_report.m"
                {
#line 768 "create_report.m"
                  create_report__succeeded = create_report__is_getter_or_setter_2_4_p_0(create_report__NameChars_77, &create_report__GetterSetter_10, &create_report__DataStructNameChars_78, &create_report__FieldNameChars_79);
                }
#line 763 "create_report.m"
                if (create_report__succeeded)
#line 763 "create_report.m"
                  {
#line 773 "create_report.m"
                    if ((create_report__GetterSetter_10 == (MR_Integer) 0))
#line 772 "create_report.m"
                      create_report__succeeded = (create_report__Arity_75 == (MR_Integer) 2);
#line 773 "create_report.m"
                    else
#line 775 "create_report.m"
                      create_report__succeeded = (create_report__Arity_75 == (MR_Integer) 3);
#line 763 "create_report.m"
                    if (create_report__succeeded)
#line 763 "create_report.m"
                      {
#line 777 "create_report.m"
                        {
#line 777 "create_report.m"
                          mercury__string__from_char_list_2_p_0(create_report__DataStructNameChars_78, &create_report__DataStructNameStr_80);
                        }
#line 778 "create_report.m"
                        {
#line 778 "create_report.m"
                          mercury__string__from_char_list_2_p_0(create_report__FieldNameChars_79, &create_report__FieldNameStr_81);
                        }
#line 779 "create_report.m"
                        create_report__DataStructName_11 = (MR_Word) create_report__DataStructNameStr_80;
#line 780 "create_report.m"
                        create_report__FieldName_12 = (MR_Word) create_report__FieldNameStr_81;
#line 780 "create_report.m"
                        create_report__succeeded = MR_TRUE;
#line 763 "create_report.m"
                      }
#line 763 "create_report.m"
                  }
#line 763 "create_report.m"
              }
#line 764 "create_report.m"
          }
#line 752 "create_report.m"
        if (create_report__succeeded)
#line 707 "create_report.m"
          {
#line 707 "create_report.m"
            MR_Word create_report__Own_13;
#line 707 "create_report.m"
            MR_Word create_report__Desc_14;
#line 707 "create_report.m"
            MR_Word create_report__ProcDesc_15;
#line 707 "create_report.m"
            MR_Word create_report__RawData_16;
#line 707 "create_report.m"
            MR_Word create_report__FieldMap0_18;
#line 707 "create_report.m"
            MR_Word create_report__FieldMap_31;
#line 713 "create_report.m"
            MR_Word create_report__FieldMap0Prime_17;
#line 711 "create_report.m"
            MR_Box create_report__conv0_FieldMap0Prime_17;
#line 741 "create_report.m"
            MR_Word create_report__FieldData0_19;
#line 716 "create_report.m"
            MR_Box create_report__conv1_FieldData0_19;

#line 707 "create_report.m"
            {
#line 707 "create_report.m"
              profile__deep_lookup_ps_own_3_p_0(create_report__Deep_5, create_report__PSPtr_6, &create_report__Own_13);
            }
#line 708 "create_report.m"
            {
#line 708 "create_report.m"
              profile__deep_lookup_ps_desc_3_p_0(create_report__Deep_5, create_report__PSPtr_6, &create_report__Desc_14);
            }
#line 709 "create_report.m"
            {
#line 709 "create_report.m"
              create_report__ProcDesc_15 = create_report__describe_proc_2_f_0(create_report__Deep_5, create_report__PSPtr_6);
            }
#line 710 "create_report.m"
            {
#line 710 "create_report.m"
              create_report__RawData_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 710 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__RawData_16, 0) = ((MR_Box) (create_report__ProcDesc_15));
#line 710 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__RawData_16, 1) = ((MR_Box) (create_report__Own_13));
#line 710 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__RawData_16, 2) = ((MR_Box) (create_report__Desc_14));
#line 710 "create_report.m"
            }
#line 711 "create_report.m"
            {
#line 711 "create_report.m"
              create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &report__report__type_ctor_info_data_struct_name_0, (MR_Word) &create_report_scalar_common_2[8], create_report__STATE_VARIABLE_GSDSRawMap_0_32, ((MR_Box) (create_report__DataStructName_11)), &create_report__conv0_FieldMap0Prime_17);
            }
#line 711 "create_report.m"
            if (create_report__succeeded)
#line 711 "create_report.m"
              {
#line 711 "create_report.m"
                create_report__FieldMap0Prime_17 = ((MR_Word) create_report__conv0_FieldMap0Prime_17);
#line 711 "create_report.m"
                create_report__succeeded = MR_TRUE;
#line 711 "create_report.m"
              }
#line 713 "create_report.m"
            if (create_report__succeeded)
#line 712 "create_report.m"
              create_report__FieldMap0_18 = create_report__FieldMap0Prime_17;
#line 713 "create_report.m"
            else
#line 714 "create_report.m"
              {
#line 714 "create_report.m"
                {
#line 714 "create_report.m"
                  mercury__map__init_1_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[7], &create_report__FieldMap0_18);
                }
#line 714 "create_report.m"
              }
#line 716 "create_report.m"
            {
#line 716 "create_report.m"
              create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[7], create_report__FieldMap0_18, ((MR_Box) (create_report__FieldName_12)), &create_report__conv1_FieldData0_19);
            }
#line 716 "create_report.m"
            if (create_report__succeeded)
#line 716 "create_report.m"
              {
#line 716 "create_report.m"
                create_report__FieldData0_19 = ((MR_Word) create_report__conv1_FieldData0_19);
#line 716 "create_report.m"
                create_report__succeeded = MR_TRUE;
#line 716 "create_report.m"
              }
#line 741 "create_report.m"
            if (create_report__succeeded)
#line 739 "create_report.m"
              {
#line 739 "create_report.m"
                MR_Word create_report__FieldData_25;

#line 728 "create_report.m"
                if ((create_report__GetterSetter_10 == (MR_Integer) 0))
#line 724 "create_report.m"
                  if (((MR_tag((MR_Word) create_report__FieldData0_19)) == (MR_mktag((MR_Integer) 2))))
#line 725 "create_report.m"
                    {
#line 725 "create_report.m"
                      MR_Word create_report__SetterRawData_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__FieldData0_19, (MR_Integer) 0)));

#line 726 "create_report.m"
                      mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 726 "create_report.m"
                      {
#line 726 "create_report.m"
                        create_report__FieldData_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 726 "create_report.m"
                        MR_hl_field(MR_mktag(0), create_report__FieldData_25, 0) = ((MR_Box) (create_report__RawData_16));
#line 726 "create_report.m"
                        MR_hl_field(MR_mktag(0), create_report__FieldData_25, 1) = ((MR_Box) (create_report__SetterRawData_24));
#line 726 "create_report.m"
                        MR_hl_field(MR_mktag(0), create_report__FieldData_25, 2) = NULL;
#line 726 "create_report.m"
                      }
#line 725 "create_report.m"
                    }
#line 724 "create_report.m"
                  else
#line 722 "create_report.m"
                    {
#line 723 "create_report.m"
                      {
#line 723 "create_report.m"
                        mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.gather_getters_setters\'/4", (MR_String) "redundant getter");
#line 723 "create_report.m"
                        return;
                      }
#line 722 "create_report.m"
                    }
#line 728 "create_report.m"
                else
#line 735 "create_report.m"
                  if (((MR_tag((MR_Word) create_report__FieldData0_19)) == (MR_mktag((MR_Integer) 1))))
#line 736 "create_report.m"
                    {
#line 736 "create_report.m"
                      MR_Word create_report__GetterRawData_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__FieldData0_19, (MR_Integer) 0)));

#line 737 "create_report.m"
                      mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 737 "create_report.m"
                      {
#line 737 "create_report.m"
                        create_report__FieldData_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 737 "create_report.m"
                        MR_hl_field(MR_mktag(0), create_report__FieldData_25, 0) = ((MR_Box) (create_report__GetterRawData_30));
#line 737 "create_report.m"
                        MR_hl_field(MR_mktag(0), create_report__FieldData_25, 1) = ((MR_Box) (create_report__RawData_16));
#line 737 "create_report.m"
                        MR_hl_field(MR_mktag(0), create_report__FieldData_25, 2) = NULL;
#line 737 "create_report.m"
                      }
#line 736 "create_report.m"
                    }
#line 735 "create_report.m"
                  else
#line 733 "create_report.m"
                    {
#line 734 "create_report.m"
                      {
#line 734 "create_report.m"
                        mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.gather_getters_setters\'/4", (MR_String) "redundant setter");
#line 734 "create_report.m"
                        return;
                      }
#line 733 "create_report.m"
                    }
#line 740 "create_report.m"
                {
#line 740 "create_report.m"
                  mercury__map__det_update_4_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[7], ((MR_Box) (create_report__FieldName_12)), ((MR_Box) (create_report__FieldData_25)), create_report__FieldMap0_18, &create_report__FieldMap_31);
                }
#line 739 "create_report.m"
              }
#line 741 "create_report.m"
            else
#line 748 "create_report.m"
              {
#line 748 "create_report.m"
                MR_Word create_report__FieldData_43;

#line 745 "create_report.m"
                if ((create_report__GetterSetter_10 == (MR_Integer) 0))
#line 744 "create_report.m"
                  {
#line 744 "create_report.m"
                    create_report__FieldData_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 744 "create_report.m"
                    MR_hl_field(MR_mktag(1), create_report__FieldData_43, 0) = ((MR_Box) (create_report__RawData_16));
#line 744 "create_report.m"
                  }
#line 745 "create_report.m"
                else
#line 747 "create_report.m"
                  {
#line 747 "create_report.m"
                    create_report__FieldData_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 747 "create_report.m"
                    MR_hl_field(MR_mktag(2), create_report__FieldData_43, 0) = ((MR_Box) (create_report__RawData_16));
#line 747 "create_report.m"
                  }
#line 749 "create_report.m"
                {
#line 749 "create_report.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[7], ((MR_Box) (create_report__FieldName_12)), ((MR_Box) (create_report__FieldData_43)), create_report__FieldMap0_18, &create_report__FieldMap_31);
                }
#line 748 "create_report.m"
              }
#line 751 "create_report.m"
            {
#line 751 "create_report.m"
              mercury__map__set_4_p_0((MR_Word) &report__report__type_ctor_info_data_struct_name_0, (MR_Word) &create_report_scalar_common_2[8], ((MR_Box) (create_report__DataStructName_11)), ((MR_Box) (create_report__FieldMap_31)), create_report__STATE_VARIABLE_GSDSRawMap_0_32, create_report__STATE_VARIABLE_GSDSRawMap_33);
#line 751 "create_report.m"
              return;
            }
#line 707 "create_report.m"
          }
#line 752 "create_report.m"
        else
#line 751 "create_report.m"
          *create_report__STATE_VARIABLE_GSDSRawMap_33 = create_report__STATE_VARIABLE_GSDSRawMap_0_32;
#line 704 "create_report.m"
      }
#line 755 "create_report.m"
    else
#line 751 "create_report.m"
      *create_report__STATE_VARIABLE_GSDSRawMap_33 = create_report__STATE_VARIABLE_GSDSRawMap_0_32;
#line 755 "create_report.m"
  }
#line 699 "create_report.m"
}

#line 668 "create_report.m"
static void MR_CALL 
create_report__getter_setter_raw_data_to_info_4_p_0(
#line 668 "create_report.m"
  MR_Word create_report__Deep_5,
#line 668 "create_report.m"
  MR_Word create_report___FieldName_6,
#line 668 "create_report.m"
  MR_Word create_report__RawData_7,
#line 668 "create_report.m"
  MR_Word * create_report__Data_8)
#line 668 "create_report.m"
{
#line 673 "create_report.m"
  {
#line 673 "create_report.m"
    MR_bool create_report__succeeded;

#line 673 "create_report.m"
    {
#line 673 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_p_0(create_report__Deep_5, create_report__RawData_7, create_report__Data_8);
#line 673 "create_report.m"
      return;
    }
#line 673 "create_report.m"
  }
#line 668 "create_report.m"
}

#line 662 "create_report.m"
static void MR_CALL 
create_report__getter_setter_raw_map_to_info_map_4_p_0(
#line 662 "create_report.m"
  MR_Word create_report__Deep_5,
#line 662 "create_report.m"
  MR_Word create_report___DataStructName_6,
#line 662 "create_report.m"
  MR_Word create_report__RawMap_7,
#line 662 "create_report.m"
  MR_Word * create_report__Map_8)
#line 662 "create_report.m"
{
#line 665 "create_report.m"
  {
#line 665 "create_report.m"
    MR_bool create_report__succeeded;

#line 665 "create_report.m"
    {
#line 665 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0(create_report__Deep_5, create_report__RawMap_7, create_report__Map_8);
#line 665 "create_report.m"
      return;
    }
#line 665 "create_report.m"
  }
#line 662 "create_report.m"
}

#line 651 "create_report.m"
static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_2(
#line 651 "create_report.m"
  MR_Box create_report__closure_arg,
#line 651 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 651 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 651 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 651 "create_report.m"
{
#line 651 "create_report.m"
  {
#line 651 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 651 "create_report.m"
    MR_Word create_report__conv3_Map_8;

#line 651 "create_report.m"
    {
#line 651 "create_report.m"
      create_report__getter_setter_raw_map_to_info_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv3_Map_8);
    }
#line 651 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv3_Map_8));
#line 651 "create_report.m"
  }
#line 651 "create_report.m"
}

#line 649 "create_report.m"
static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_1(
#line 649 "create_report.m"
  MR_Box create_report__closure_arg,
#line 649 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 649 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 649 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 649 "create_report.m"
{
#line 649 "create_report.m"
  {
#line 649 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 649 "create_report.m"
    MR_Word create_report__conv1_STATE_VARIABLE_GSDSRawMap_33;

#line 649 "create_report.m"
    {
#line 649 "create_report.m"
      create_report__gather_getters_setters_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv1_STATE_VARIABLE_GSDSRawMap_33);
    }
#line 649 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_STATE_VARIABLE_GSDSRawMap_33));
#line 649 "create_report.m"
  }
#line 649 "create_report.m"
}

#line 642 "create_report.m"
static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0(
#line 642 "create_report.m"
  MR_Word create_report__Deep_4,
#line 642 "create_report.m"
  MR_String create_report__ModuleName_5,
#line 642 "create_report.m"
  MR_Word * create_report__MaybeModuleGetterSettersReport_6)
#line 642 "create_report.m"
{
#line 656 "create_report.m"
  {
#line 656 "create_report.m"
    MR_bool create_report__succeeded;
#line 656 "create_report.m"
    MR_Word create_report__ModuleData_7;
#line 647 "create_report.m"
    MR_Word create_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
#line 647 "create_report.m"
    MR_Word create_report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
#line 647 "create_report.m"
    MR_String create_report__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
#line 647 "create_report.m"
    MR_String create_report__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
#line 647 "create_report.m"
    MR_String create_report__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
#line 647 "create_report.m"
    MR_Word create_report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
#line 647 "create_report.m"
    MR_ArrayPtr create_report__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
#line 647 "create_report.m"
    MR_Word create_report__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
#line 647 "create_report.m"
    MR_Word create_report__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));
#line 647 "create_report.m"
    MR_Word create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));
#line 647 "create_report.m"
    MR_Box create_report__conv0_ModuleData_7;

#line 647 "create_report.m"
    {
#line 647 "create_report.m"
      create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, create_report__V_13_13, ((MR_Box) (create_report__ModuleName_5)), &create_report__conv0_ModuleData_7);
    }
#line 647 "create_report.m"
    if (create_report__succeeded)
#line 647 "create_report.m"
      {
#line 647 "create_report.m"
        create_report__ModuleData_7 = ((MR_Word) create_report__conv0_ModuleData_7);
#line 647 "create_report.m"
        create_report__succeeded = MR_TRUE;
#line 647 "create_report.m"
      }
#line 656 "create_report.m"
    if (create_report__succeeded)
#line 648 "create_report.m"
      {
#line 648 "create_report.m"
        MR_Word create_report__TypeCtorInfo_56_56;
#line 648 "create_report.m"
        MR_Word create_report__TypeInfo_57_57;
#line 648 "create_report.m"
        MR_Word create_report__PSPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 2)));
#line 648 "create_report.m"
        MR_Word create_report__GetterSetterDataMap_9;
#line 648 "create_report.m"
        MR_Word create_report__GetterSetterInfoMap_10;
#line 648 "create_report.m"
        MR_Word create_report__ModuleGetterSettersReport_11;
#line 648 "create_report.m"
        MR_Word create_report__V_14_14;
#line 648 "create_report.m"
        MR_Word create_report__V_15_15;
#line 648 "create_report.m"
        MR_Word create_report__V_16_16;
#line 648 "create_report.m"
        MR_Word create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 0)));
#line 648 "create_report.m"
        MR_Word create_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 1)));
#line 649 "create_report.m"
        MR_Box create_report__conv2_GetterSetterDataMap_9;

#line 649 "create_report.m"
        {
#line 649 "create_report.m"
          create_report__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 649 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 0) = ((MR_Box) (&create_report_scalar_common_6[8]));
#line 649 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 1) = ((MR_Box) (create_report__create_module_getter_setter_report_3_p_0_1));
#line 649 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 649 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 3) = ((MR_Box) (create_report__Deep_4));
#line 649 "create_report.m"
        }
#line 10431 "create_report.c"
        create_report__TypeCtorInfo_56_56 = (MR_Word) &report__report__type_ctor_info_data_struct_name_0;
#line 10433 "create_report.c"
        create_report__TypeInfo_57_57 = (MR_Word) &create_report_scalar_common_2[8];
#line 649 "create_report.m"
        {
#line 649 "create_report.m"
          create_report__V_15_15 = mercury__map__init_0_f_0(create_report__TypeCtorInfo_56_56, create_report__TypeInfo_57_57);
        }
#line 649 "create_report.m"
        {
#line 649 "create_report.m"
          mercury__list__foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_2[9], create_report__V_14_14, create_report__PSPtrs_8, ((MR_Box) (create_report__V_15_15)), &create_report__conv2_GetterSetterDataMap_9);
        }
#line 649 "create_report.m"
        create_report__GetterSetterDataMap_9 = ((MR_Word) create_report__conv2_GetterSetterDataMap_9);
#line 651 "create_report.m"
        {
#line 651 "create_report.m"
          create_report__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 651 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 0) = ((MR_Box) (&create_report_scalar_common_6[9]));
#line 651 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 1) = ((MR_Box) (create_report__create_module_getter_setter_report_3_p_0_2));
#line 651 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 651 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 3) = ((MR_Box) (create_report__Deep_4));
#line 651 "create_report.m"
        }
#line 651 "create_report.m"
        {
#line 651 "create_report.m"
          mercury__map__map_values_3_p_0(create_report__TypeCtorInfo_56_56, create_report__TypeInfo_57_57, (MR_Word) &create_report_scalar_common_2[11], create_report__V_16_16, create_report__GetterSetterDataMap_9, &create_report__GetterSetterInfoMap_10);
        }
#line 653 "create_report.m"
        {
#line 653 "create_report.m"
          create_report__ModuleGetterSettersReport_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 653 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ModuleGetterSettersReport_11, 0) = ((MR_Box) (create_report__ModuleName_5));
#line 653 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ModuleGetterSettersReport_11, 1) = ((MR_Box) (create_report__GetterSetterInfoMap_10));
#line 653 "create_report.m"
        }
#line 655 "create_report.m"
        {
#line 655 "create_report.m"
          MR_Word base;
#line 655 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 655 "create_report.m"
          *create_report__MaybeModuleGetterSettersReport_6 = base;
#line 655 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ModuleGetterSettersReport_11));
#line 655 "create_report.m"
        }
#line 648 "create_report.m"
      }
#line 656 "create_report.m"
    else
#line 658 "create_report.m"
      {
#line 658 "create_report.m"
        MR_String create_report__Msg_12;
#line 658 "create_report.m"
        MR_String create_report__V_65_65;

#line 10499 "create_report.c"
        {
#line 10501 "create_report.c"
          create_report__V_65_65 = mercury__string__f_43_43_2_f_0(create_report__ModuleName_5, (MR_String) "\'.\n");
        }
#line 10504 "create_report.c"
        {
#line 10506 "create_report.c"
          create_report__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "There is no module named \140", create_report__V_65_65);
        }
#line 659 "create_report.m"
        {
#line 659 "create_report.m"
          MR_Word base;
#line 659 "create_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 659 "create_report.m"
          *create_report__MaybeModuleGetterSettersReport_6 = base;
#line 659 "create_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Msg_12));
#line 659 "create_report.m"
        }
#line 658 "create_report.m"
      }
#line 656 "create_report.m"
  }
#line 642 "create_report.m"
}

#line 605 "create_report.m"
static MR_Word MR_CALL 
create_report__proc_to_active_row_data_2_f_0(
#line 605 "create_report.m"
  MR_Word create_report__Deep_4,
#line 605 "create_report.m"
  MR_Word create_report__PSPtr_5)
#line 605 "create_report.m"
{
#line 608 "create_report.m"
  {
#line 608 "create_report.m"
    MR_bool create_report__succeeded;
#line 608 "create_report.m"
    MR_Word create_report__ProcRowData_6;
#line 608 "create_report.m"
    MR_Word create_report__Own_7;
#line 608 "create_report.m"
    MR_Word create_report__Desc_8;
#line 608 "create_report.m"
    MR_Word create_report__IsActive_9;
#line 608 "create_report.m"
    MR_Word create_report__ProcIsActive_10;
#line 608 "create_report.m"
    MR_Word create_report__ProcDesc_11;
#line 608 "create_report.m"
    MR_Word create_report__ProcActive_12;
#line 608 "create_report.m"
    MR_Word create_report__V_19_19;

#line 609 "create_report.m"
    {
#line 609 "create_report.m"
      profile__deep_lookup_ps_own_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Own_7);
    }
#line 610 "create_report.m"
    {
#line 610 "create_report.m"
      profile__deep_lookup_ps_desc_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Desc_8);
    }
#line 611 "create_report.m"
    {
#line 611 "create_report.m"
      create_report__IsActive_9 = measurements__compute_is_active_1_f_0(create_report__Own_7);
    }
#line 615 "create_report.m"
    if ((create_report__IsActive_9 == (MR_Integer) 0))
#line 614 "create_report.m"
      create_report__ProcIsActive_10 = (MR_Integer) 0;
#line 615 "create_report.m"
    else
#line 617 "create_report.m"
      create_report__ProcIsActive_10 = (MR_Integer) 1;
#line 619 "create_report.m"
    {
#line 619 "create_report.m"
      create_report__ProcDesc_11 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__PSPtr_5);
    }
#line 620 "create_report.m"
    {
#line 620 "create_report.m"
      create_report__ProcActive_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 620 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcActive_12, 0) = ((MR_Box) (create_report__ProcDesc_11));
#line 620 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcActive_12, 1) = ((MR_Box) (create_report__ProcIsActive_10));
#line 620 "create_report.m"
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_19_19, 0) = ((MR_Box) (create_report__Desc_8));
#line 1524 "create_report.m"
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__ProcActive_12)), create_report__Own_7, create_report__V_19_19, &create_report__ProcRowData_6);
    }
#line 608 "create_report.m"
    return create_report__ProcRowData_6;
#line 608 "create_report.m"
  }
#line 605 "create_report.m"
}

#line 596 "create_report.m"
static MR_Box MR_CALL 
create_report__create_module_report_3_p_0_1(
#line 596 "create_report.m"
  MR_Box create_report__closure_arg,
#line 596 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 596 "create_report.m"
{
#line 596 "create_report.m"
  {
#line 596 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 596 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 596 "create_report.m"
    MR_Word create_report__conv2_ProcRowData_6;

#line 596 "create_report.m"
    {
#line 596 "create_report.m"
      create_report__conv2_ProcRowData_6 = create_report__proc_to_active_row_data_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 596 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_ProcRowData_6));
#line 596 "create_report.m"
    return create_report__wrapper_arg_2;
#line 596 "create_report.m"
  }
#line 596 "create_report.m"
}

#line 580 "create_report.m"
static void MR_CALL 
create_report__create_module_report_3_p_0(
#line 580 "create_report.m"
  MR_Word create_report__Deep_4,
#line 580 "create_report.m"
  MR_String create_report__ModuleName_5,
#line 580 "create_report.m"
  MR_Word * create_report__MaybeModuleReport_6)
#line 580 "create_report.m"
{
#line 599 "create_report.m"
  {
#line 599 "create_report.m"
    MR_bool create_report__succeeded;
#line 599 "create_report.m"
    MR_Word create_report__ModuleData_7;
#line 584 "create_report.m"
    MR_Word create_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
#line 584 "create_report.m"
    MR_Word create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
#line 584 "create_report.m"
    MR_String create_report__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
#line 584 "create_report.m"
    MR_String create_report__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
#line 584 "create_report.m"
    MR_String create_report__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
#line 584 "create_report.m"
    MR_Word create_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
#line 584 "create_report.m"
    MR_ArrayPtr create_report__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
#line 584 "create_report.m"
    MR_Word create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
#line 584 "create_report.m"
    MR_Word create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));
#line 584 "create_report.m"
    MR_Word create_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));
#line 584 "create_report.m"
    MR_Box create_report__conv0_ModuleData_7;

#line 584 "create_report.m"
    {
#line 584 "create_report.m"
      create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, create_report__V_17_17, ((MR_Box) (create_report__ModuleName_5)), &create_report__conv0_ModuleData_7);
    }
#line 584 "create_report.m"
    if (create_report__succeeded)
#line 584 "create_report.m"
      {
#line 584 "create_report.m"
        create_report__ModuleData_7 = ((MR_Word) create_report__conv0_ModuleData_7);
#line 584 "create_report.m"
        create_report__succeeded = MR_TRUE;
#line 584 "create_report.m"
      }
#line 599 "create_report.m"
    if (create_report__succeeded)
#line 585 "create_report.m"
      {
#line 585 "create_report.m"
        MR_Word create_report__MaybeProgRep_8;
#line 585 "create_report.m"
        MR_Word create_report__HaveModuleRep_12;
#line 585 "create_report.m"
        MR_Word create_report__PSPtrs_13;
#line 585 "create_report.m"
        MR_Word create_report__ProcRowDatas_14;
#line 585 "create_report.m"
        MR_Word create_report__ModuleReport_15;
#line 585 "create_report.m"
        MR_Word create_report__V_18_18;
#line 587 "create_report.m"
        MR_Word create_report__TypeCtorInfo_55_55;
#line 587 "create_report.m"
        MR_Word create_report__TypeInfo_56_56;
#line 587 "create_report.m"
        MR_Word create_report__ProgRep_9;
#line 587 "create_report.m"
        MR_Word create_report__ModuleMap_10;
#line 589 "create_report.m"
        MR_Word create_report__V_11_11;
#line 589 "create_report.m"
        MR_Box create_report__conv1_V_11_11;
#line 595 "create_report.m"
        MR_Word create_report__V_51_51;
#line 595 "create_report.m"
        MR_Word create_report__V_52_52;

#line 585 "create_report.m"
        {
#line 585 "create_report.m"
          profile__deep_get_maybe_progrep_2_p_0(create_report__Deep_4, &create_report__MaybeProgRep_8);
        }
#line 587 "create_report.m"
        create_report__succeeded = ((MR_tag((MR_Word) create_report__MaybeProgRep_8)) == (MR_mktag((MR_Integer) 0)));
#line 587 "create_report.m"
        if (create_report__succeeded)
#line 587 "create_report.m"
          {
#line 587 "create_report.m"
            create_report__ProgRep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeProgRep_8, (MR_Integer) 0)));
#line 588 "create_report.m"
            create_report__ModuleMap_10 = (MR_Word) create_report__ProgRep_9;
#line 10789 "create_report.c"
            create_report__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 10791 "create_report.c"
            create_report__TypeInfo_56_56 = (MR_Word) &create_report_scalar_common_1[7];
#line 589 "create_report.m"
            {
#line 589 "create_report.m"
              create_report__succeeded = mercury__map__search_3_p_0(create_report__TypeCtorInfo_55_55, create_report__TypeInfo_56_56, create_report__ModuleMap_10, ((MR_Box) (create_report__ModuleName_5)), &create_report__conv1_V_11_11);
            }
#line 589 "create_report.m"
            if (create_report__succeeded)
#line 589 "create_report.m"
              {
#line 589 "create_report.m"
                create_report__V_11_11 = ((MR_Word) create_report__conv1_V_11_11);
#line 589 "create_report.m"
                create_report__succeeded = MR_TRUE;
#line 589 "create_report.m"
              }
#line 587 "create_report.m"
          }
#line 592 "create_report.m"
        if (create_report__succeeded)
#line 591 "create_report.m"
          create_report__HaveModuleRep_12 = (MR_Integer) 1;
#line 592 "create_report.m"
        else
#line 593 "create_report.m"
          create_report__HaveModuleRep_12 = (MR_Integer) 0;
#line 595 "create_report.m"
        create_report__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 0)));
#line 595 "create_report.m"
        create_report__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 1)));
#line 595 "create_report.m"
        create_report__PSPtrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 2)));
#line 596 "create_report.m"
        {
#line 596 "create_report.m"
          create_report__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 596 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_18_18, 0) = ((MR_Box) (&create_report_scalar_common_4[4]));
#line 596 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_18_18, 1) = ((MR_Box) (create_report__create_module_report_3_p_0_1));
#line 596 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 596 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_18_18, 3) = ((MR_Box) (create_report__Deep_4));
#line 596 "create_report.m"
        }
#line 596 "create_report.m"
        {
#line 596 "create_report.m"
          create_report__ProcRowDatas_14 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[8], create_report__V_18_18, create_report__PSPtrs_13);
        }
#line 597 "create_report.m"
        {
#line 597 "create_report.m"
          create_report__ModuleReport_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 597 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ModuleReport_15, 0) = ((MR_Box) (create_report__ModuleName_5));
#line 597 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ModuleReport_15, 1) = ((MR_Box) (create_report__HaveModuleRep_12));
#line 597 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ModuleReport_15, 2) = ((MR_Box) (create_report__ProcRowDatas_14));
#line 597 "create_report.m"
        }
#line 598 "create_report.m"
        {
#line 598 "create_report.m"
          MR_Word base;
#line 598 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 598 "create_report.m"
          *create_report__MaybeModuleReport_6 = base;
#line 598 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ModuleReport_15));
#line 598 "create_report.m"
        }
#line 585 "create_report.m"
      }
#line 599 "create_report.m"
    else
#line 601 "create_report.m"
      {
#line 601 "create_report.m"
        MR_String create_report__Msg_16;
#line 601 "create_report.m"
        MR_String create_report__V_62_62;

#line 10878 "create_report.c"
        {
#line 10880 "create_report.c"
          create_report__V_62_62 = mercury__string__f_43_43_2_f_0(create_report__ModuleName_5, (MR_String) "\'.\n");
        }
#line 10883 "create_report.c"
        {
#line 10885 "create_report.c"
          create_report__Msg_16 = mercury__string__f_43_43_2_f_0((MR_String) "There is no module named \140", create_report__V_62_62);
        }
#line 602 "create_report.m"
        {
#line 602 "create_report.m"
          MR_Word base;
#line 602 "create_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 602 "create_report.m"
          *create_report__MaybeModuleReport_6 = base;
#line 602 "create_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Msg_16));
#line 602 "create_report.m"
        }
#line 601 "create_report.m"
      }
#line 599 "create_report.m"
  }
#line 580 "create_report.m"
}

#line 555 "create_report.m"
static MR_Word MR_CALL 
create_report__module_pair_to_row_data_2_f_0(
#line 555 "create_report.m"
  MR_Word create_report__Deep_4,
#line 555 "create_report.m"
  MR_Word create_report__HeadVar__2_2)
#line 555 "create_report.m"
{
#line 558 "create_report.m"
  {
#line 558 "create_report.m"
    MR_bool create_report__succeeded;
#line 558 "create_report.m"
    MR_Word create_report__ModuleRowData_7;
#line 558 "create_report.m"
    MR_String create_report__ModuleName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
#line 558 "create_report.m"
    MR_Word create_report__ModuleData_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
#line 558 "create_report.m"
    MR_Word create_report__Own_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_6, (MR_Integer) 0)));
#line 558 "create_report.m"
    MR_Word create_report__IsActive_9;
#line 558 "create_report.m"
    MR_Word create_report__ModuleIsActive_10;
#line 558 "create_report.m"
    MR_Word create_report__ModuleActive_11;
#line 559 "create_report.m"
    MR_Word create_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_6, (MR_Integer) 1)));
#line 559 "create_report.m"
    MR_Word create_report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_6, (MR_Integer) 2)));

#line 560 "create_report.m"
    {
#line 560 "create_report.m"
      create_report__IsActive_9 = measurements__compute_is_active_1_f_0(create_report__Own_8);
    }
#line 564 "create_report.m"
    if ((create_report__IsActive_9 == (MR_Integer) 0))
#line 563 "create_report.m"
      create_report__ModuleIsActive_10 = (MR_Integer) 0;
#line 564 "create_report.m"
    else
#line 566 "create_report.m"
      create_report__ModuleIsActive_10 = (MR_Integer) 1;
#line 568 "create_report.m"
    {
#line 568 "create_report.m"
      create_report__ModuleActive_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 568 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ModuleActive_11, 0) = ((MR_Box) (create_report__ModuleName_5));
#line 568 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ModuleActive_11, 1) = ((MR_Box) (create_report__ModuleIsActive_10));
#line 568 "create_report.m"
    }
#line 569 "create_report.m"
    {
#line 569 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__ModuleActive_11)), create_report__Own_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &create_report__ModuleRowData_7);
    }
#line 558 "create_report.m"
    return create_report__ModuleRowData_7;
#line 558 "create_report.m"
  }
#line 555 "create_report.m"
}

#line 550 "create_report.m"
static MR_bool MR_CALL 
create_report__not_mercury_runtime_1_p_0(
#line 550 "create_report.m"
  MR_Word create_report__HeadVar__1_1)
#line 550 "create_report.m"
{
#line 552 "create_report.m"
  {
#line 552 "create_report.m"
    MR_bool create_report__succeeded;
#line 552 "create_report.m"
    MR_String create_report__ModuleName_2 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 0)));
#line 552 "create_report.m"
    MR_Word create_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 1)));

#line 553 "create_report.m"
    create_report__succeeded = (strcmp(create_report__ModuleName_2, (MR_String) "Mercury runtime") == 0);
#line 553 "create_report.m"
    create_report__succeeded = !(create_report__succeeded);
#line 552 "create_report.m"
    return create_report__succeeded;
#line 552 "create_report.m"
  }
#line 550 "create_report.m"
}

#line 546 "create_report.m"
static MR_Box MR_CALL 
create_report__create_program_modules_report_2_p_0_2(
#line 546 "create_report.m"
  MR_Box create_report__closure_arg,
#line 546 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 546 "create_report.m"
{
#line 546 "create_report.m"
  {
#line 546 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 546 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 546 "create_report.m"
    MR_Word create_report__conv0_ModuleRowData_7;

#line 546 "create_report.m"
    {
#line 546 "create_report.m"
      create_report__conv0_ModuleRowData_7 = create_report__module_pair_to_row_data_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 546 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_ModuleRowData_7));
#line 546 "create_report.m"
    return create_report__wrapper_arg_2;
#line 546 "create_report.m"
  }
#line 546 "create_report.m"
}

#line 545 "create_report.m"
static MR_bool MR_CALL 
create_report__create_program_modules_report_2_p_0_1(
#line 545 "create_report.m"
  MR_Box create_report__closure_arg,
#line 545 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 545 "create_report.m"
{
#line 545 "create_report.m"
  {
#line 545 "create_report.m"
    MR_bool create_report__succeeded;
#line 545 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;

#line 545 "create_report.m"
    {
#line 545 "create_report.m"
      return create_report__succeeded = create_report__not_mercury_runtime_1_p_0(((MR_Word) create_report__wrapper_arg_1));
    }
#line 545 "create_report.m"
    return create_report__succeeded;
#line 545 "create_report.m"
  }
#line 545 "create_report.m"
}

#line 540 "create_report.m"
static void MR_CALL 
create_report__create_program_modules_report_2_p_0(
#line 540 "create_report.m"
  MR_Word create_report__Deep_3,
#line 540 "create_report.m"
  MR_Word * create_report__MaybeProgramModulesReport_4)
#line 540 "create_report.m"
{
#line 543 "create_report.m"
  {
#line 543 "create_report.m"
    MR_bool create_report__succeeded;
#line 543 "create_report.m"
    MR_Word create_report__TypeInfo_43_43;
#line 543 "create_report.m"
    MR_Word create_report__ModulePairs0_5;
#line 543 "create_report.m"
    MR_Word create_report__ModulePairs_6;
#line 543 "create_report.m"
    MR_Word create_report__ModuleRowDatas_7;
#line 543 "create_report.m"
    MR_Word create_report__ProgramModulesReport_8;
#line 543 "create_report.m"
    MR_Word create_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 25)));
#line 543 "create_report.m"
    MR_Word create_report__V_11_11;
#line 544 "create_report.m"
    MR_Word create_report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 0)));
#line 544 "create_report.m"
    MR_String create_report__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 1)));
#line 544 "create_report.m"
    MR_String create_report__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 2)));
#line 544 "create_report.m"
    MR_String create_report__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 3)));
#line 544 "create_report.m"
    MR_Word create_report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 4)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 5)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 6)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 7)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 8)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 9)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 10)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 11)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 12)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 13)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 14)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 15)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 16)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 17)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 18)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 19)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 20)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 21)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 22)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 23)));
#line 544 "create_report.m"
    MR_ArrayPtr create_report__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 24)));
#line 544 "create_report.m"
    MR_Word create_report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 26)));
#line 544 "create_report.m"
    MR_Word create_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 27)));
#line 544 "create_report.m"
    MR_Word create_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 28)));

#line 544 "create_report.m"
    {
#line 544 "create_report.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, create_report__V_9_9, &create_report__ModulePairs0_5);
    }
#line 11150 "create_report.c"
    create_report__TypeInfo_43_43 = (MR_Word) &create_report_scalar_common_2[6];
#line 545 "create_report.m"
    {
#line 545 "create_report.m"
      mercury__list__filter_3_p_0(create_report__TypeInfo_43_43, (MR_Word) &create_report_scalar_common_2[18], create_report__ModulePairs0_5, &create_report__ModulePairs_6);
    }
#line 546 "create_report.m"
    {
#line 546 "create_report.m"
      create_report__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 546 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_11_11, 0) = ((MR_Box) (&create_report_scalar_common_4[3]));
#line 546 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_11_11, 1) = ((MR_Box) (create_report__create_program_modules_report_2_p_0_2));
#line 546 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 546 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_11_11, 3) = ((MR_Box) (create_report__Deep_3));
#line 546 "create_report.m"
    }
#line 546 "create_report.m"
    {
#line 546 "create_report.m"
      create_report__ModuleRowDatas_7 = mercury__list__map_2_f_0(create_report__TypeInfo_43_43, (MR_Word) &create_report_scalar_common_1[6], create_report__V_11_11, create_report__ModulePairs_6);
    }
#line 547 "create_report.m"
    create_report__ProgramModulesReport_8 = (MR_Word) create_report__ModuleRowDatas_7;
#line 548 "create_report.m"
    {
#line 548 "create_report.m"
      MR_Word base;
#line 548 "create_report.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 548 "create_report.m"
      *create_report__MaybeProgramModulesReport_4 = base;
#line 548 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProgramModulesReport_8));
#line 548 "create_report.m"
    }
#line 543 "create_report.m"
  }
#line 540 "create_report.m"
}

#line 1728 "create_report.m"
static MR_Box MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_2(
#line 1728 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1728 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1728 "create_report.m"
{
#line 1728 "create_report.m"
  {
#line 1728 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1728 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1728 "create_report.m"
    MR_Word create_report__conv0_ProcDesc_6;

#line 1728 "create_report.m"
    {
#line 1728 "create_report.m"
      create_report__conv0_ProcDesc_6 = create_report__describe_clique_member_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1728 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_ProcDesc_6));
#line 1728 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1728 "create_report.m"
  }
#line 1728 "create_report.m"
}

#line 521 "create_report.m"
static MR_bool MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_1(
#line 521 "create_report.m"
  MR_Box create_report__closure_arg)
#line 521 "create_report.m"
{
#line 521 "create_report.m"
  {
#line 521 "create_report.m"
    MR_bool create_report__succeeded;
#line 521 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;

#line 521 "create_report.m"
    {
#line 521 "create_report.m"
      return create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))));
    }
#line 521 "create_report.m"
    return create_report__succeeded;
#line 521 "create_report.m"
  }
#line 521 "create_report.m"
}

#line 515 "create_report.m"
static void MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0(
#line 515 "create_report.m"
  MR_Word create_report__Deep_6,
#line 515 "create_report.m"
  MR_Word create_report__CSDPtr_7,
#line 515 "create_report.m"
  MR_Word * create_report__Own_8,
#line 515 "create_report.m"
  MR_Word * create_report__Desc_9,
#line 515 "create_report.m"
  MR_Word * create_report__CalleeCliqueRowData_10)
#line 515 "create_report.m"
{
#line 520 "create_report.m"
  {
#line 520 "create_report.m"
    MR_bool create_report__succeeded;
#line 520 "create_report.m"
    MR_Word create_report__CSD_11;
#line 520 "create_report.m"
    MR_Word create_report__CalleePDPtr_12;
#line 520 "create_report.m"
    MR_Word create_report__CalleeCliquePtr_13;
#line 520 "create_report.m"
    MR_Word create_report__CliqueDesc_14;
#line 520 "create_report.m"
    MR_Word create_report__V_15_15;
#line 520 "create_report.m"
    MR_Word create_report__V_17_17;
#line 520 "create_report.m"
    MR_Word create_report__V_60_60;
#line 524 "create_report.m"
    MR_Word create_report__V_18_18;

#line 521 "create_report.m"
    {
#line 521 "create_report.m"
      create_report__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 521 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_15_15, 0) = ((MR_Box) (&create_report_scalar_common_7[2]));
#line 521 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_15_15, 1) = ((MR_Box) (create_report__create_callee_clique_perf_row_data_5_p_0_1));
#line 521 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 521 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_15_15, 3) = ((MR_Box) (create_report__Deep_6));
#line 521 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_15_15, 4) = ((MR_Box) (create_report__CSDPtr_7));
#line 521 "create_report.m"
    }
#line 521 "create_report.m"
    {
#line 521 "create_report.m"
      mercury__require__require_2_p_0(create_report__V_15_15, (MR_String) "create_callee_clique_perf_row_data: invalid call_site_dynamic_ptr");
    }
#line 523 "create_report.m"
    {
#line 523 "create_report.m"
      profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_6, create_report__CSDPtr_7, &create_report__CSD_11);
    }
#line 524 "create_report.m"
    create_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_11, (MR_Integer) 0)));
#line 524 "create_report.m"
    create_report__CalleePDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_11, (MR_Integer) 1)));
#line 524 "create_report.m"
    *create_report__Own_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_11, (MR_Integer) 2)));
#line 526 "create_report.m"
    {
#line 526 "create_report.m"
      profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_6, create_report__CSDPtr_7, create_report__Desc_9);
    }
#line 527 "create_report.m"
    {
#line 527 "create_report.m"
      profile__deep_lookup_clique_index_3_p_0(create_report__Deep_6, create_report__CalleePDPtr_12, &create_report__CalleeCliquePtr_13);
    }
#line 528 "create_report.m"
    {
#line 528 "create_report.m"
      create_report__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 528 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_17_17, 0) = ((MR_Box) (create_report__CalleePDPtr_12));
#line 528 "create_report.m"
    }
#line 1715 "create_report.m"
    {
#line 1715 "create_report.m"
      create_report__succeeded = profile__valid_clique_ptr_2_p_0(create_report__Deep_6, create_report__CalleeCliquePtr_13);
    }
#line 1733 "create_report.m"
    if (create_report__succeeded)
#line 1716 "create_report.m"
      {
#line 1716 "create_report.m"
        MR_Word create_report__MemberPDPtrs_27;
#line 1716 "create_report.m"
        MR_Word create_report__ParentCSDPtr_28;
#line 1716 "create_report.m"
        MR_Word create_report__EntryPDPtr_30;
#line 1718 "create_report.m"
        MR_Word create_report__ParentCSD_29;
#line 1730 "create_report.m"
        MR_Word create_report__OtherPDPtrs_31;

#line 1716 "create_report.m"
        {
#line 1716 "create_report.m"
          profile__deep_lookup_clique_members_3_p_0(create_report__Deep_6, create_report__CalleeCliquePtr_13, &create_report__MemberPDPtrs_27);
        }
#line 1717 "create_report.m"
        {
#line 1717 "create_report.m"
          profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_6, create_report__CalleeCliquePtr_13, &create_report__ParentCSDPtr_28);
        }
#line 1718 "create_report.m"
        {
#line 1718 "create_report.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_6, create_report__ParentCSDPtr_28, &create_report__ParentCSD_29);
        }
#line 1720 "create_report.m"
        create_report__EntryPDPtr_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_17_17, (MR_Integer) 0)));
#line 1725 "create_report.m"
        {
#line 1725 "create_report.m"
          create_report__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, create_report__MemberPDPtrs_27, ((MR_Box) (create_report__EntryPDPtr_30)), &create_report__OtherPDPtrs_31);
        }
#line 1730 "create_report.m"
        if (create_report__succeeded)
#line 1726 "create_report.m"
          {
#line 1726 "create_report.m"
            MR_Word create_report__EntryProcDesc_32;
#line 1726 "create_report.m"
            MR_Word create_report__OtherProcDescs_33;
#line 1726 "create_report.m"
            MR_Word create_report__V_34_34;
#line 1726 "create_report.m"
            MR_Word create_report__PD_51;
#line 1726 "create_report.m"
            MR_Word create_report__V_52_52;
#line 1741 "create_report.m"
            MR_ArrayPtr create_report__V_53_53;
#line 1741 "create_report.m"
            MR_Word create_report__V_54_54;

#line 1740 "create_report.m"
            {
#line 1740 "create_report.m"
              profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_6, create_report__EntryPDPtr_30, &create_report__PD_51);
            }
#line 1741 "create_report.m"
            create_report__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_51, (MR_Integer) 0)));
#line 1741 "create_report.m"
            create_report__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_51, (MR_Integer) 1)));
#line 1741 "create_report.m"
            create_report__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_51, (MR_Integer) 2)));
#line 1741 "create_report.m"
            {
#line 1741 "create_report.m"
              create_report__EntryProcDesc_32 = create_report__describe_proc_2_f_0(create_report__Deep_6, create_report__V_52_52);
            }
#line 1728 "create_report.m"
            {
#line 1728 "create_report.m"
              create_report__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1728 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_34_34, 0) = ((MR_Box) (&create_report_scalar_common_4[2]));
#line 1728 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_34_34, 1) = ((MR_Box) (create_report__create_callee_clique_perf_row_data_5_p_0_2));
#line 1728 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1728 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_34_34, 3) = ((MR_Box) (create_report__Deep_6));
#line 1728 "create_report.m"
            }
#line 1727 "create_report.m"
            {
#line 1727 "create_report.m"
              create_report__OtherProcDescs_33 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &report__report__type_ctor_info_proc_desc_0, create_report__V_34_34, create_report__OtherPDPtrs_31);
            }
#line 1729 "create_report.m"
            {
#line 1729 "create_report.m"
              create_report__CliqueDesc_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_14, 0) = ((MR_Box) (create_report__CalleeCliquePtr_13));
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_14, 1) = ((MR_Box) (create_report__EntryProcDesc_32));
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_14, 2) = ((MR_Box) (create_report__OtherProcDescs_33));
#line 1729 "create_report.m"
            }
#line 1726 "create_report.m"
          }
#line 1730 "create_report.m"
        else
#line 1731 "create_report.m"
          {
#line 1731 "create_report.m"
            {
#line 1731 "create_report.m"
              mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "entry pdptr not a member");
#line 1731 "create_report.m"
              return;
            }
#line 1731 "create_report.m"
          }
#line 1716 "create_report.m"
      }
#line 1733 "create_report.m"
    else
#line 1734 "create_report.m"
      {
#line 1734 "create_report.m"
        {
#line 1734 "create_report.m"
          mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "invalid clique_ptr");
#line 1734 "create_report.m"
          return;
        }
#line 1734 "create_report.m"
      }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_60_60, 0) = ((MR_Box) (*create_report__Desc_9));
#line 1524 "create_report.m"
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_6, ((MR_Box) (create_report__CliqueDesc_14)), *create_report__Own_8, create_report__V_60_60, create_report__CalleeCliqueRowData_10);
#line 1524 "create_report.m"
      return;
    }
#line 520 "create_report.m"
  }
#line 515 "create_report.m"
}

#line 505 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_4(
#line 505 "create_report.m"
  MR_Box create_report__closure_arg,
#line 505 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_4)
#line 505 "create_report.m"
{
#line 505 "create_report.m"
  {
#line 505 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 505 "create_report.m"
    MR_Word create_report__conv11_Own_8;
#line 505 "create_report.m"
    MR_Word create_report__conv10_Desc_9;
#line 505 "create_report.m"
    MR_Word create_report__conv9_CalleeCliqueRowData_10;

#line 505 "create_report.m"
    {
#line 505 "create_report.m"
      create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv11_Own_8, &create_report__conv10_Desc_9, &create_report__conv9_CalleeCliqueRowData_10);
    }
#line 505 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv11_Own_8));
#line 505 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv10_Desc_9));
#line 505 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv9_CalleeCliqueRowData_10));
#line 505 "create_report.m"
  }
#line 505 "create_report.m"
}

#line 505 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_3(
#line 505 "create_report.m"
  MR_Box create_report__closure_arg,
#line 505 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_4)
#line 505 "create_report.m"
{
#line 505 "create_report.m"
  {
#line 505 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 505 "create_report.m"
    MR_Word create_report__conv8_Own_8;
#line 505 "create_report.m"
    MR_Word create_report__conv7_Desc_9;
#line 505 "create_report.m"
    MR_Word create_report__conv6_CalleeCliqueRowData_10;

#line 505 "create_report.m"
    {
#line 505 "create_report.m"
      create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv8_Own_8, &create_report__conv7_Desc_9, &create_report__conv6_CalleeCliqueRowData_10);
    }
#line 505 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv8_Own_8));
#line 505 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv7_Desc_9));
#line 505 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv6_CalleeCliqueRowData_10));
#line 505 "create_report.m"
  }
#line 505 "create_report.m"
}

#line 505 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_2(
#line 505 "create_report.m"
  MR_Box create_report__closure_arg,
#line 505 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_4)
#line 505 "create_report.m"
{
#line 505 "create_report.m"
  {
#line 505 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 505 "create_report.m"
    MR_Word create_report__conv5_Own_8;
#line 505 "create_report.m"
    MR_Word create_report__conv4_Desc_9;
#line 505 "create_report.m"
    MR_Word create_report__conv3_CalleeCliqueRowData_10;

#line 505 "create_report.m"
    {
#line 505 "create_report.m"
      create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv5_Own_8, &create_report__conv4_Desc_9, &create_report__conv3_CalleeCliqueRowData_10);
    }
#line 505 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv5_Own_8));
#line 505 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv4_Desc_9));
#line 505 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv3_CalleeCliqueRowData_10));
#line 505 "create_report.m"
  }
#line 505 "create_report.m"
}

#line 505 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_1(
#line 505 "create_report.m"
  MR_Box create_report__closure_arg,
#line 505 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 505 "create_report.m"
  MR_Box * create_report__wrapper_arg_4)
#line 505 "create_report.m"
{
#line 505 "create_report.m"
  {
#line 505 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 505 "create_report.m"
    MR_Word create_report__conv2_Own_8;
#line 505 "create_report.m"
    MR_Word create_report__conv1_Desc_9;
#line 505 "create_report.m"
    MR_Word create_report__conv0_CalleeCliqueRowData_10;

#line 505 "create_report.m"
    {
#line 505 "create_report.m"
      create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv2_Own_8, &create_report__conv1_Desc_9, &create_report__conv0_CalleeCliqueRowData_10);
    }
#line 505 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_Own_8));
#line 505 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_Desc_9));
#line 505 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv0_CalleeCliqueRowData_10));
#line 505 "create_report.m"
  }
#line 505 "create_report.m"
}

#line 456 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0(
#line 456 "create_report.m"
  MR_Word create_report__Deep_4,
#line 456 "create_report.m"
  MR_Word create_report__Pair_5,
#line 456 "create_report.m"
  MR_Word * create_report__CliqueCallSiteReport_6)
#line 456 "create_report.m"
{
#line 460 "create_report.m"
  {
#line 460 "create_report.m"
    MR_bool create_report__succeeded;
#line 460 "create_report.m"
    MR_Word create_report__CSSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Pair_5, (MR_Integer) 0)));
#line 460 "create_report.m"
    MR_Word create_report__CallSiteArraySlot_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Pair_5, (MR_Integer) 1)));
#line 460 "create_report.m"
    MR_Word create_report__CSS_9;
#line 460 "create_report.m"
    MR_Word create_report__CallSiteDesc_10;
#line 460 "create_report.m"
    MR_Word create_report__Kind_11;
#line 460 "create_report.m"
    MR_Word create_report__ProcDescKind_15;
#line 460 "create_report.m"
    MR_Word create_report__Own_19;
#line 460 "create_report.m"
    MR_Word create_report__Desc_20;
#line 460 "create_report.m"
    MR_Word create_report__CalleeCliqueRowDatas_22;
#line 460 "create_report.m"
    MR_Word create_report__SummaryRowData_29;
#line 464 "create_report.m"
    MR_Word create_report__V_38_38;
#line 464 "create_report.m"
    MR_Integer create_report__V_39_39;
#line 464 "create_report.m"
    MR_Integer create_report__V_40_40;
#line 464 "create_report.m"
    MR_Word create_report__V_41_41;

#line 462 "create_report.m"
    {
#line 462 "create_report.m"
      profile__deep_lookup_call_site_statics_3_p_0(create_report__Deep_4, create_report__CSSPtr_7, &create_report__CSS_9);
    }
#line 463 "create_report.m"
    {
#line 463 "create_report.m"
      create_report__CallSiteDesc_10 = create_report__describe_call_site_2_f_0(create_report__Deep_4, create_report__CSSPtr_7);
    }
#line 464 "create_report.m"
    create_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 0)));
#line 464 "create_report.m"
    create_report__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 1)));
#line 464 "create_report.m"
    create_report__Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 2)));
#line 464 "create_report.m"
    create_report__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 3)));
#line 464 "create_report.m"
    create_report__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 4)));
#line 484 "create_report.m"
    if ((create_report__Kind_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 497 "create_report.m"
      {
#line 497 "create_report.m"
        MR_Word create_report__CSDPtrs_26;
#line 497 "create_report.m"
        MR_Word create_report__Owns_27;
#line 497 "create_report.m"
        MR_Word create_report__Descs_28;
#line 497 "create_report.m"
        MR_Word create_report__V_33_33;

#line 496 "create_report.m"
        create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 501 "create_report.m"
        if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
#line 502 "create_report.m"
          {
#line 502 "create_report.m"
            MR_ArrayPtr create_report__CSDPtrsArray_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 1)));
#line 502 "create_report.m"
            MR_Word create_report___IsZeroed_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));

#line 503 "create_report.m"
            {
#line 503 "create_report.m"
              mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) create_report__CSDPtrsArray_25, &create_report__CSDPtrs_26);
            }
#line 502 "create_report.m"
          }
#line 501 "create_report.m"
        else
#line 499 "create_report.m"
          {
#line 500 "create_report.m"
            {
#line 500 "create_report.m"
              mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
#line 500 "create_report.m"
              return;
            }
#line 499 "create_report.m"
          }
#line 505 "create_report.m"
        {
#line 505 "create_report.m"
          create_report__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 505 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_33_33, 0) = ((MR_Box) (&create_report_scalar_common_9[0]));
#line 505 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_33_33, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_1));
#line 505 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 505 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_33_33, 3) = ((MR_Box) (create_report__Deep_4));
#line 505 "create_report.m"
        }
#line 505 "create_report.m"
        {
#line 505 "create_report.m"
          mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &create_report_scalar_common_1[5], create_report__V_33_33, create_report__CSDPtrs_26, &create_report__Owns_27, &create_report__Descs_28, &create_report__CalleeCliqueRowDatas_22);
        }
#line 507 "create_report.m"
        {
#line 507 "create_report.m"
          create_report__Own_19 = measurements__sum_own_infos_1_f_0(create_report__Owns_27);
        }
#line 508 "create_report.m"
        {
#line 508 "create_report.m"
          create_report__Desc_20 = measurements__sum_inherit_infos_1_f_0(create_report__Descs_28);
        }
#line 497 "create_report.m"
      }
#line 484 "create_report.m"
    else
#line 484 "create_report.m"
      if ((create_report__Kind_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 497 "create_report.m"
        {
#line 497 "create_report.m"
          MR_Word create_report__CSDPtrs_75;
#line 497 "create_report.m"
          MR_Word create_report__Owns_76;
#line 497 "create_report.m"
          MR_Word create_report__Descs_77;
#line 497 "create_report.m"
          MR_Word create_report__V_81_81;

#line 490 "create_report.m"
          create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 501 "create_report.m"
          if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
#line 502 "create_report.m"
            {
#line 502 "create_report.m"
              MR_ArrayPtr create_report__CSDPtrsArray_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 1)));
#line 502 "create_report.m"
              MR_Word create_report___IsZeroed_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));

#line 503 "create_report.m"
              {
#line 503 "create_report.m"
                mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) create_report__CSDPtrsArray_54, &create_report__CSDPtrs_75);
              }
#line 502 "create_report.m"
            }
#line 501 "create_report.m"
          else
#line 499 "create_report.m"
            {
#line 500 "create_report.m"
              {
#line 500 "create_report.m"
                mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
#line 500 "create_report.m"
                return;
              }
#line 499 "create_report.m"
            }
#line 505 "create_report.m"
          {
#line 505 "create_report.m"
            create_report__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 505 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__V_81_81, 0) = ((MR_Box) (&create_report_scalar_common_9[0]));
#line 505 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__V_81_81, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_2));
#line 505 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 505 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__V_81_81, 3) = ((MR_Box) (create_report__Deep_4));
#line 505 "create_report.m"
          }
#line 505 "create_report.m"
          {
#line 505 "create_report.m"
            mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &create_report_scalar_common_1[5], create_report__V_81_81, create_report__CSDPtrs_75, &create_report__Owns_76, &create_report__Descs_77, &create_report__CalleeCliqueRowDatas_22);
          }
#line 507 "create_report.m"
          {
#line 507 "create_report.m"
            create_report__Own_19 = measurements__sum_own_infos_1_f_0(create_report__Owns_76);
          }
#line 508 "create_report.m"
          {
#line 508 "create_report.m"
            create_report__Desc_20 = measurements__sum_inherit_infos_1_f_0(create_report__Descs_77);
          }
#line 497 "create_report.m"
        }
#line 484 "create_report.m"
      else
#line 484 "create_report.m"
        if ((create_report__Kind_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 497 "create_report.m"
          {
#line 497 "create_report.m"
            MR_Word create_report__CSDPtrs_110;
#line 497 "create_report.m"
            MR_Word create_report__Owns_111;
#line 497 "create_report.m"
            MR_Word create_report__Descs_112;
#line 497 "create_report.m"
            MR_Word create_report__V_116_116;

#line 493 "create_report.m"
            create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 501 "create_report.m"
            if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
#line 502 "create_report.m"
              {
#line 502 "create_report.m"
                MR_ArrayPtr create_report__CSDPtrsArray_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 1)));
#line 502 "create_report.m"
                MR_Word create_report___IsZeroed_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));

#line 503 "create_report.m"
                {
#line 503 "create_report.m"
                  mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) create_report__CSDPtrsArray_89, &create_report__CSDPtrs_110);
                }
#line 502 "create_report.m"
              }
#line 501 "create_report.m"
            else
#line 499 "create_report.m"
              {
#line 500 "create_report.m"
                {
#line 500 "create_report.m"
                  mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
#line 500 "create_report.m"
                  return;
                }
#line 499 "create_report.m"
              }
#line 505 "create_report.m"
            {
#line 505 "create_report.m"
              create_report__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 505 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_116_116, 0) = ((MR_Box) (&create_report_scalar_common_9[0]));
#line 505 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_116_116, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_3));
#line 505 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_116_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 505 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_116_116, 3) = ((MR_Box) (create_report__Deep_4));
#line 505 "create_report.m"
            }
#line 505 "create_report.m"
            {
#line 505 "create_report.m"
              mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &create_report_scalar_common_1[5], create_report__V_116_116, create_report__CSDPtrs_110, &create_report__Owns_111, &create_report__Descs_112, &create_report__CalleeCliqueRowDatas_22);
            }
#line 507 "create_report.m"
            {
#line 507 "create_report.m"
              create_report__Own_19 = measurements__sum_own_infos_1_f_0(create_report__Owns_111);
            }
#line 508 "create_report.m"
            {
#line 508 "create_report.m"
              create_report__Desc_20 = measurements__sum_inherit_infos_1_f_0(create_report__Descs_112);
            }
#line 497 "create_report.m"
          }
#line 484 "create_report.m"
        else
#line 484 "create_report.m"
          if ((create_report__Kind_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 497 "create_report.m"
            {
#line 497 "create_report.m"
              MR_Word create_report__CSDPtrs_145;
#line 497 "create_report.m"
              MR_Word create_report__Owns_146;
#line 497 "create_report.m"
              MR_Word create_report__Descs_147;
#line 497 "create_report.m"
              MR_Word create_report__V_151_151;

#line 487 "create_report.m"
              create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 501 "create_report.m"
              if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
#line 502 "create_report.m"
                {
#line 502 "create_report.m"
                  MR_ArrayPtr create_report__CSDPtrsArray_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 1)));
#line 502 "create_report.m"
                  MR_Word create_report___IsZeroed_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));

#line 503 "create_report.m"
                  {
#line 503 "create_report.m"
                    mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) create_report__CSDPtrsArray_124, &create_report__CSDPtrs_145);
                  }
#line 502 "create_report.m"
                }
#line 501 "create_report.m"
              else
#line 499 "create_report.m"
                {
#line 500 "create_report.m"
                  {
#line 500 "create_report.m"
                    mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
#line 500 "create_report.m"
                    return;
                  }
#line 499 "create_report.m"
                }
#line 505 "create_report.m"
              {
#line 505 "create_report.m"
                create_report__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 505 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_151_151, 0) = ((MR_Box) (&create_report_scalar_common_9[0]));
#line 505 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_151_151, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_4));
#line 505 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_151_151, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 505 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_151_151, 3) = ((MR_Box) (create_report__Deep_4));
#line 505 "create_report.m"
              }
#line 505 "create_report.m"
              {
#line 505 "create_report.m"
                mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &create_report_scalar_common_1[5], create_report__V_151_151, create_report__CSDPtrs_145, &create_report__Owns_146, &create_report__Descs_147, &create_report__CalleeCliqueRowDatas_22);
              }
#line 507 "create_report.m"
              {
#line 507 "create_report.m"
                create_report__Own_19 = measurements__sum_own_infos_1_f_0(create_report__Owns_146);
              }
#line 508 "create_report.m"
              {
#line 508 "create_report.m"
                create_report__Desc_20 = measurements__sum_inherit_infos_1_f_0(create_report__Descs_147);
              }
#line 497 "create_report.m"
            }
#line 484 "create_report.m"
          else
#line 466 "create_report.m"
            {
#line 466 "create_report.m"
              MR_Word create_report__CalleePSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Kind_11, (MR_Integer) 0)));
#line 466 "create_report.m"
              MR_String create_report__TypeSubst_13 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__Kind_11, (MR_Integer) 1)));
#line 466 "create_report.m"
              MR_Word create_report__KnownCalleeDesc_14;
#line 466 "create_report.m"
              MR_Word create_report__CSDPtr_16;

#line 467 "create_report.m"
              {
#line 467 "create_report.m"
                create_report__KnownCalleeDesc_14 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__CalleePSPtr_12);
              }
#line 468 "create_report.m"
              {
#line 468 "create_report.m"
                create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "create_report.m"
                MR_hl_field(MR_mktag(1), create_report__ProcDescKind_15, 0) = ((MR_Box) (create_report__KnownCalleeDesc_14));
#line 468 "create_report.m"
                MR_hl_field(MR_mktag(1), create_report__ProcDescKind_15, 1) = ((MR_Box) (create_report__TypeSubst_13));
#line 468 "create_report.m"
              }
#line 471 "create_report.m"
              if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
#line 472 "create_report.m"
                {
#line 473 "create_report.m"
                  {
#line 473 "create_report.m"
                    mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "normal_call is multi");
#line 473 "create_report.m"
                    return;
                  }
#line 472 "create_report.m"
                }
#line 471 "create_report.m"
              else
#line 470 "create_report.m"
                create_report__CSDPtr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));
#line 475 "create_report.m"
              {
#line 475 "create_report.m"
                create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__CSDPtr_16);
              }
#line 479 "create_report.m"
              if (create_report__succeeded)
#line 477 "create_report.m"
                {
#line 477 "create_report.m"
                  MR_Word create_report__CalleeCliqueRowData_21;

#line 476 "create_report.m"
                  {
#line 476 "create_report.m"
                    create_report__create_callee_clique_perf_row_data_5_p_0(create_report__Deep_4, create_report__CSDPtr_16, &create_report__Own_19, &create_report__Desc_20, &create_report__CalleeCliqueRowData_21);
                  }
#line 478 "create_report.m"
                  {
#line 478 "create_report.m"
                    create_report__CalleeCliqueRowDatas_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "create_report.m"
                    MR_hl_field(MR_mktag(1), create_report__CalleeCliqueRowDatas_22, 0) = ((MR_Box) (create_report__CalleeCliqueRowData_21));
#line 478 "create_report.m"
                    MR_hl_field(MR_mktag(1), create_report__CalleeCliqueRowDatas_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "create_report.m"
                  }
#line 477 "create_report.m"
                }
#line 479 "create_report.m"
              else
#line 480 "create_report.m"
                {
#line 480 "create_report.m"
                  {
#line 480 "create_report.m"
                    create_report__Own_19 = measurements__zero_own_prof_info_0_f_0();
                  }
#line 481 "create_report.m"
                  {
#line 481 "create_report.m"
                    create_report__Desc_20 = measurements__zero_inherit_prof_info_0_f_0();
                  }
#line 482 "create_report.m"
                  create_report__CalleeCliqueRowDatas_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 480 "create_report.m"
                }
#line 466 "create_report.m"
            }
#line 510 "create_report.m"
    {
#line 510 "create_report.m"
      create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_10)), create_report__Own_19, create_report__Desc_20, &create_report__SummaryRowData_29);
    }
#line 512 "create_report.m"
    {
#line 512 "create_report.m"
      MR_Word base;
#line 512 "create_report.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "create_report.m"
      *create_report__CliqueCallSiteReport_6 = base;
#line 512 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__SummaryRowData_29));
#line 512 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__ProcDescKind_15));
#line 512 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (create_report__CalleeCliqueRowDatas_22));
#line 512 "create_report.m"
    }
#line 460 "create_report.m"
  }
#line 456 "create_report.m"
}

#line 425 "create_report.m"
static void MR_CALL 
create_report__create_clique_proc_dynamic_report_7_p_0(
#line 425 "create_report.m"
  MR_Word create_report__Deep_8,
#line 425 "create_report.m"
  MR_Word create_report___CliquePtr_9,
#line 425 "create_report.m"
  MR_Word create_report__ProcDesc_10,
#line 425 "create_report.m"
  MR_Word create_report__PDPtr_11,
#line 425 "create_report.m"
  MR_Word * create_report__Own_12,
#line 425 "create_report.m"
  MR_Word * create_report__Desc_13,
#line 425 "create_report.m"
  MR_Word * create_report__CliquePDReport_14)
#line 425 "create_report.m"
{
#line 444 "create_report.m"
  {
#line 444 "create_report.m"
    MR_bool create_report__succeeded;

#line 444 "create_report.m"
    {
#line 444 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(create_report__Deep_8, create_report__ProcDesc_10, create_report__PDPtr_11, create_report__Own_12, create_report__Desc_13, create_report__CliquePDReport_14);
#line 444 "create_report.m"
      return;
    }
#line 444 "create_report.m"
  }
#line 425 "create_report.m"
}

#line 415 "create_report.m"
static void MR_CALL 
create_report__create_clique_proc_report_4_p_0_1(
#line 415 "create_report.m"
  MR_Box create_report__closure_arg,
#line 415 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 415 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 415 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 415 "create_report.m"
  MR_Box * create_report__wrapper_arg_4)
#line 415 "create_report.m"
{
#line 415 "create_report.m"
  {
#line 415 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 415 "create_report.m"
    MR_Word create_report__conv2_Own_12;
#line 415 "create_report.m"
    MR_Word create_report__conv1_Desc_13;
#line 415 "create_report.m"
    MR_Word create_report__conv0_CliquePDReport_14;

#line 415 "create_report.m"
    {
#line 415 "create_report.m"
      create_report__create_clique_proc_dynamic_report_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 5))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv2_Own_12, &create_report__conv1_Desc_13, &create_report__conv0_CliquePDReport_14);
    }
#line 415 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_Own_12));
#line 415 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_Desc_13));
#line 415 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv0_CliquePDReport_14));
#line 415 "create_report.m"
  }
#line 415 "create_report.m"
}

#line 402 "create_report.m"
static void MR_CALL 
create_report__create_clique_proc_report_4_p_0(
#line 402 "create_report.m"
  MR_Word create_report__Deep_5,
#line 402 "create_report.m"
  MR_Word create_report__CliquePtr_6,
#line 402 "create_report.m"
  MR_Word create_report__HeadVar__3_3,
#line 402 "create_report.m"
  MR_Word * create_report__CliqueProcReport_9)
#line 402 "create_report.m"
{
#line 406 "create_report.m"
  {
#line 406 "create_report.m"
    MR_bool create_report__succeeded;
#line 406 "create_report.m"
    MR_Word create_report__PSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 406 "create_report.m"
    MR_Word create_report__PDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));

#line 410 "create_report.m"
    if ((create_report__PDPtrs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 408 "create_report.m"
      {
#line 409 "create_report.m"
        {
#line 409 "create_report.m"
          mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_clique_proc_report\'/4", (MR_String) "PDPtrs = []");
#line 409 "create_report.m"
          return;
        }
#line 408 "create_report.m"
      }
#line 410 "create_report.m"
    else
#line 411 "create_report.m"
      {
#line 411 "create_report.m"
        MR_Word create_report__FirstPDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__PDPtrs_8, (MR_Integer) 0)));
#line 411 "create_report.m"
        MR_Word create_report__LaterPDPtrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__PDPtrs_8, (MR_Integer) 1)));
#line 411 "create_report.m"
        MR_Word create_report__ProcDesc_12;
#line 411 "create_report.m"
        MR_Word create_report__FirstPDOwn_13;
#line 411 "create_report.m"
        MR_Word create_report__FirstPDDesc_14;
#line 411 "create_report.m"
        MR_Word create_report__FirstPDReport_15;
#line 411 "create_report.m"
        MR_Word create_report__LaterPDOwns_16;
#line 411 "create_report.m"
        MR_Word create_report__LaterPDDescs_17;
#line 411 "create_report.m"
        MR_Word create_report__LaterPDReports_18;
#line 411 "create_report.m"
        MR_Word create_report__SummaryOwn_19;
#line 411 "create_report.m"
        MR_Word create_report__SummaryDesc_20;
#line 411 "create_report.m"
        MR_Word create_report__ProcSummaryRowData_21;
#line 411 "create_report.m"
        MR_Word create_report__V_22_22;
#line 411 "create_report.m"
        MR_Word create_report__V_23_23;
#line 411 "create_report.m"
        MR_Word create_report__V_24_24;
#line 411 "create_report.m"
        MR_Word create_report__V_42_42;

#line 412 "create_report.m"
        {
#line 412 "create_report.m"
          create_report__ProcDesc_12 = create_report__describe_proc_2_f_0(create_report__Deep_5, create_report__PSPtr_7);
        }
#line 413 "create_report.m"
        {
#line 413 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(create_report__Deep_5, create_report__ProcDesc_12, create_report__FirstPDPtr_10, &create_report__FirstPDOwn_13, &create_report__FirstPDDesc_14, &create_report__FirstPDReport_15);
        }
#line 415 "create_report.m"
        {
#line 415 "create_report.m"
          create_report__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 415 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_22_22, 0) = ((MR_Box) (&create_report_scalar_common_8[0]));
#line 415 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_22_22, 1) = ((MR_Box) (create_report__create_clique_proc_report_4_p_0_1));
#line 415 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 415 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_22_22, 3) = ((MR_Box) (create_report__Deep_5));
#line 415 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_22_22, 4) = ((MR_Box) (create_report__CliquePtr_6));
#line 415 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_22_22, 5) = ((MR_Box) (create_report__ProcDesc_12));
#line 415 "create_report.m"
        }
#line 415 "create_report.m"
        {
#line 415 "create_report.m"
          mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &report__report__type_ctor_info_clique_proc_dynamic_report_0, create_report__V_22_22, create_report__LaterPDPtrs_11, &create_report__LaterPDOwns_16, &create_report__LaterPDDescs_17, &create_report__LaterPDReports_18);
        }
#line 417 "create_report.m"
        {
#line 417 "create_report.m"
          create_report__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_23_23, 0) = ((MR_Box) (create_report__FirstPDOwn_13));
#line 417 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_23_23, 1) = ((MR_Box) (create_report__LaterPDOwns_16));
#line 417 "create_report.m"
        }
#line 417 "create_report.m"
        {
#line 417 "create_report.m"
          create_report__SummaryOwn_19 = measurements__sum_own_infos_1_f_0(create_report__V_23_23);
        }
#line 418 "create_report.m"
        {
#line 418 "create_report.m"
          create_report__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_24_24, 0) = ((MR_Box) (create_report__FirstPDDesc_14));
#line 418 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_24_24, 1) = ((MR_Box) (create_report__LaterPDDescs_17));
#line 418 "create_report.m"
        }
#line 418 "create_report.m"
        {
#line 418 "create_report.m"
          create_report__SummaryDesc_20 = measurements__sum_inherit_infos_1_f_0(create_report__V_24_24);
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_42_42, 0) = ((MR_Box) (create_report__SummaryDesc_20));
#line 1524 "create_report.m"
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__ProcDesc_12)), create_report__SummaryOwn_19, create_report__V_42_42, &create_report__ProcSummaryRowData_21);
        }
#line 421 "create_report.m"
        {
#line 421 "create_report.m"
          MR_Word base;
#line 421 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 421 "create_report.m"
          *create_report__CliqueProcReport_9 = base;
#line 421 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcSummaryRowData_21));
#line 421 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__FirstPDReport_15));
#line 421 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (create_report__LaterPDReports_18));
#line 421 "create_report.m"
        }
#line 411 "create_report.m"
      }
#line 406 "create_report.m"
  }
#line 402 "create_report.m"
}

#line 396 "create_report.m"
static MR_bool MR_CALL 
create_report__proc_group_contains_2_p_0(
#line 396 "create_report.m"
  MR_Word create_report__EntryPDPtr_3,
#line 396 "create_report.m"
  MR_Word create_report__HeadVar__2_2)
#line 396 "create_report.m"
{
#line 399 "create_report.m"
  {
#line 399 "create_report.m"
    MR_bool create_report__succeeded;
#line 399 "create_report.m"
    MR_Word create_report__PDPtrs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
#line 399 "create_report.m"
    MR_Word create_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));

#line 400 "create_report.m"
    {
#line 400 "create_report.m"
      return create_report__succeeded = mercury__list__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (create_report__EntryPDPtr_3)), create_report__PDPtrs_5);
    }
#line 399 "create_report.m"
    return create_report__succeeded;
#line 399 "create_report.m"
  }
#line 396 "create_report.m"
}

#line 385 "create_report.m"
static MR_bool MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0_1(
#line 385 "create_report.m"
  MR_Box create_report__closure_arg)
#line 385 "create_report.m"
{
#line 385 "create_report.m"
  {
#line 385 "create_report.m"
    MR_bool create_report__succeeded;
#line 385 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;

#line 385 "create_report.m"
    {
#line 385 "create_report.m"
      return create_report__succeeded = profile__valid_proc_dynamic_ptr_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))));
    }
#line 385 "create_report.m"
    return create_report__succeeded;
#line 385 "create_report.m"
  }
#line 385 "create_report.m"
}

#line 380 "create_report.m"
static void MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0(
#line 380 "create_report.m"
  MR_Word create_report__Deep_5,
#line 380 "create_report.m"
  MR_Word create_report__PDPtr_6,
#line 380 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_PStoPDsMap_0_12,
#line 380 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_PStoPDsMap_13)
#line 380 "create_report.m"
{
#line 384 "create_report.m"
  {
#line 384 "create_report.m"
    MR_bool create_report__succeeded;
#line 384 "create_report.m"
    MR_Word create_report__PD_8;
#line 384 "create_report.m"
    MR_Word create_report__PSPtr_9;
#line 384 "create_report.m"
    MR_Word create_report__V_14_14;
#line 388 "create_report.m"
    MR_ArrayPtr create_report__V_20_20;
#line 388 "create_report.m"
    MR_Word create_report__V_21_21;
#line 392 "create_report.m"
    MR_Word create_report__PSPDs0_10;
#line 389 "create_report.m"
    MR_Box create_report__conv0_PSPDs0_10;

#line 385 "create_report.m"
    {
#line 385 "create_report.m"
      create_report__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 385 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 0) = ((MR_Box) (&create_report_scalar_common_7[1]));
#line 385 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 1) = ((MR_Box) (create_report__group_proc_dynamics_by_proc_static_4_p_0_1));
#line 385 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 385 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 3) = ((MR_Box) (create_report__Deep_5));
#line 385 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 4) = ((MR_Box) (create_report__PDPtr_6));
#line 385 "create_report.m"
    }
#line 385 "create_report.m"
    {
#line 385 "create_report.m"
      mercury__require__require_2_p_0(create_report__V_14_14, (MR_String) "group_proc_dynamics_by_proc_static: invalid PDPtr");
    }
#line 387 "create_report.m"
    {
#line 387 "create_report.m"
      profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_5, create_report__PDPtr_6, &create_report__PD_8);
    }
#line 388 "create_report.m"
    create_report__PSPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_8, (MR_Integer) 0)));
#line 388 "create_report.m"
    create_report__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_8, (MR_Integer) 1)));
#line 388 "create_report.m"
    create_report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_8, (MR_Integer) 2)));
#line 389 "create_report.m"
    {
#line 389 "create_report.m"
      create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[0], create_report__STATE_VARIABLE_PStoPDsMap_0_12, ((MR_Box) (create_report__PSPtr_9)), &create_report__conv0_PSPDs0_10);
    }
#line 389 "create_report.m"
    if (create_report__succeeded)
#line 389 "create_report.m"
      {
#line 389 "create_report.m"
        create_report__PSPDs0_10 = ((MR_Word) create_report__conv0_PSPDs0_10);
#line 389 "create_report.m"
        create_report__succeeded = MR_TRUE;
#line 389 "create_report.m"
      }
#line 392 "create_report.m"
    if (create_report__succeeded)
#line 390 "create_report.m"
      {
#line 390 "create_report.m"
        MR_Word create_report__PSPDs_11;

#line 390 "create_report.m"
        {
#line 390 "create_report.m"
          create_report__PSPDs_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__PSPDs_11, 0) = ((MR_Box) (create_report__PDPtr_6));
#line 390 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__PSPDs_11, 1) = ((MR_Box) (create_report__PSPDs0_10));
#line 390 "create_report.m"
        }
#line 391 "create_report.m"
        {
#line 391 "create_report.m"
          mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[0], ((MR_Box) (create_report__PSPtr_9)), ((MR_Box) (create_report__PSPDs_11)), create_report__STATE_VARIABLE_PStoPDsMap_0_12, create_report__STATE_VARIABLE_PStoPDsMap_13);
#line 391 "create_report.m"
          return;
        }
#line 390 "create_report.m"
      }
#line 392 "create_report.m"
    else
#line 393 "create_report.m"
      {
#line 393 "create_report.m"
        MR_Word create_report__V_17_17;

#line 393 "create_report.m"
        {
#line 393 "create_report.m"
          create_report__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_17_17, 0) = ((MR_Box) (create_report__PDPtr_6));
#line 393 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "create_report.m"
        }
#line 393 "create_report.m"
        {
#line 393 "create_report.m"
          mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[0], ((MR_Box) (create_report__PSPtr_9)), ((MR_Box) (create_report__V_17_17)), create_report__STATE_VARIABLE_PStoPDsMap_0_12, create_report__STATE_VARIABLE_PStoPDsMap_13);
#line 393 "create_report.m"
          return;
        }
#line 393 "create_report.m"
      }
#line 384 "create_report.m"
  }
#line 380 "create_report.m"
}

#line 347 "create_report.m"
static MR_Word MR_CALL 
create_report__find_clique_ancestors_2_f_0(
#line 347 "create_report.m"
  MR_Word create_report__Deep_4,
#line 347 "create_report.m"
  MR_Word create_report__CliquePtr_5)
#line 347 "create_report.m"
{
#line 350 "create_report.m"
  {
#line 350 "create_report.m"
    MR_bool create_report__succeeded;
#line 350 "create_report.m"
    MR_Word create_report__Ancestors_6;
#line 350 "create_report.m"
    MR_Word create_report__EntryCSDPtr_7;

#line 351 "create_report.m"
    {
#line 351 "create_report.m"
      profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__EntryCSDPtr_7);
    }
#line 352 "create_report.m"
    {
#line 352 "create_report.m"
      create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__EntryCSDPtr_7);
    }
#line 376 "create_report.m"
    if (create_report__succeeded)
#line 353 "create_report.m"
      {
#line 353 "create_report.m"
        MR_Word create_report__EntryCSD_8;
#line 353 "create_report.m"
        MR_Word create_report__EntryPDPtr_9;
#line 354 "create_report.m"
        MR_Word create_report__V_22_22;
#line 354 "create_report.m"
        MR_Word create_report__V_23_23;
#line 355 "create_report.m"
        MR_Word create_report__V_59_59;
#line 355 "create_report.m"
        MR_Integer create_report__V_61_61;
#line 355 "create_report.m"
        MR_Integer create_report__V_62_62;
#line 355 "create_report.m"
        MR_Word create_report__V_24_24;
#line 355 "create_report.m"
        MR_String create_report__V_25_25;
#line 355 "create_report.m"
        MR_String create_report__V_26_26;
#line 355 "create_report.m"
        MR_String create_report__V_27_27;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_28_28;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_29_29;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_30_30;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_31_31;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_32_32;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_33_33;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_34_34;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_35_35;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_36_36;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_37_37;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_38_38;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_39_39;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_40_40;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_41_41;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_42_42;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_43_43;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_44_44;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_45_45;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_46_46;
#line 355 "create_report.m"
        MR_ArrayPtr create_report__V_47_47;
#line 355 "create_report.m"
        MR_Word create_report__V_48_48;
#line 355 "create_report.m"
        MR_Word create_report__V_49_49;
#line 355 "create_report.m"
        MR_Word create_report__V_50_50;
#line 355 "create_report.m"
        MR_Word create_report__V_51_51;

#line 353 "create_report.m"
        {
#line 353 "create_report.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__EntryCSDPtr_7, &create_report__EntryCSD_8);
        }
#line 354 "create_report.m"
        create_report__EntryPDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 0)));
#line 354 "create_report.m"
        create_report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 1)));
#line 354 "create_report.m"
        create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 2)));
#line 355 "create_report.m"
        create_report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
#line 355 "create_report.m"
        create_report__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
#line 355 "create_report.m"
        create_report__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
#line 355 "create_report.m"
        create_report__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
#line 355 "create_report.m"
        create_report__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
#line 355 "create_report.m"
        create_report__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
#line 355 "create_report.m"
        create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
#line 355 "create_report.m"
        create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
#line 355 "create_report.m"
        create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
#line 355 "create_report.m"
        create_report__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
#line 355 "create_report.m"
        create_report__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
#line 355 "create_report.m"
        create_report__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
#line 355 "create_report.m"
        create_report__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
#line 355 "create_report.m"
        create_report__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
#line 355 "create_report.m"
        create_report__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
#line 355 "create_report.m"
        create_report__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
#line 355 "create_report.m"
        create_report__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
#line 355 "create_report.m"
        create_report__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
#line 355 "create_report.m"
        create_report__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
#line 355 "create_report.m"
        create_report__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
#line 355 "create_report.m"
        create_report__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
#line 355 "create_report.m"
        create_report__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
#line 355 "create_report.m"
        create_report__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
#line 355 "create_report.m"
        create_report__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
#line 355 "create_report.m"
        create_report__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
#line 355 "create_report.m"
        create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
#line 355 "create_report.m"
        create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
#line 355 "create_report.m"
        create_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));
#line 355 "create_report.m"
        create_report__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));
#line 355 "create_report.m"
        create_report__V_61_61 = (MR_Integer) create_report__EntryPDPtr_9;
#line 355 "create_report.m"
        create_report__V_62_62 = (MR_Integer) create_report__V_59_59;
#line 355 "create_report.m"
        create_report__succeeded = (create_report__V_61_61 == create_report__V_62_62);
#line 359 "create_report.m"
        if (create_report__succeeded)
#line 358 "create_report.m"
          create_report__Ancestors_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 359 "create_report.m"
        else
#line 360 "create_report.m"
          {
#line 360 "create_report.m"
            MR_Word create_report__EntryCliquePtr_10;
#line 360 "create_report.m"
            MR_Word create_report__CalleePDPtr_11;
#line 360 "create_report.m"
            MR_Word create_report__CalleePD_12;
#line 360 "create_report.m"
            MR_Word create_report__CalleePSPtr_13;
#line 360 "create_report.m"
            MR_Word create_report__CalleeDesc_14;
#line 360 "create_report.m"
            MR_Word create_report__EntryCSSPtr_15;
#line 360 "create_report.m"
            MR_Word create_report__EntryCallSiteDesc_16;
#line 360 "create_report.m"
            MR_Word create_report__AncestorDesc_17;
#line 360 "create_report.m"
            MR_Word create_report__Own_18;
#line 360 "create_report.m"
            MR_Word create_report__Desc_19;
#line 360 "create_report.m"
            MR_Word create_report__Parent_20;
#line 360 "create_report.m"
            MR_Word create_report__MoreAncestors_21;
#line 360 "create_report.m"
            MR_Word create_report__V_68_68;
#line 361 "create_report.m"
            MR_Word create_report__V_52_52;
#line 361 "create_report.m"
            MR_Word create_report__V_53_53;
#line 363 "create_report.m"
            MR_ArrayPtr create_report__V_54_54;
#line 363 "create_report.m"
            MR_Word create_report__V_55_55;
#line 369 "create_report.m"
            MR_Word create_report__V_56_56;
#line 369 "create_report.m"
            MR_Word create_report__V_57_57;

#line 360 "create_report.m"
            {
#line 360 "create_report.m"
              profile__deep_lookup_clique_index_3_p_0(create_report__Deep_4, create_report__EntryPDPtr_9, &create_report__EntryCliquePtr_10);
            }
#line 361 "create_report.m"
            create_report__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 0)));
#line 361 "create_report.m"
            create_report__CalleePDPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 1)));
#line 361 "create_report.m"
            create_report__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 2)));
#line 362 "create_report.m"
            {
#line 362 "create_report.m"
              profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__CalleePDPtr_11, &create_report__CalleePD_12);
            }
#line 363 "create_report.m"
            create_report__CalleePSPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePD_12, (MR_Integer) 0)));
#line 363 "create_report.m"
            create_report__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__CalleePD_12, (MR_Integer) 1)));
#line 363 "create_report.m"
            create_report__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePD_12, (MR_Integer) 2)));
#line 364 "create_report.m"
            {
#line 364 "create_report.m"
              create_report__CalleeDesc_14 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__CalleePSPtr_13);
            }
#line 365 "create_report.m"
            {
#line 365 "create_report.m"
              profile__deep_lookup_call_site_static_map_3_p_0(create_report__Deep_4, create_report__EntryCSDPtr_7, &create_report__EntryCSSPtr_15);
            }
#line 366 "create_report.m"
            {
#line 366 "create_report.m"
              create_report__EntryCallSiteDesc_16 = create_report__describe_call_site_2_f_0(create_report__Deep_4, create_report__EntryCSSPtr_15);
            }
#line 367 "create_report.m"
            {
#line 367 "create_report.m"
              create_report__AncestorDesc_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 367 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__AncestorDesc_17, 0) = ((MR_Box) (create_report__EntryCliquePtr_10));
#line 367 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__AncestorDesc_17, 1) = ((MR_Box) (create_report__CliquePtr_5));
#line 367 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__AncestorDesc_17, 2) = ((MR_Box) (create_report__CalleeDesc_14));
#line 367 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__AncestorDesc_17, 3) = ((MR_Box) (create_report__EntryCallSiteDesc_16));
#line 367 "create_report.m"
            }
#line 369 "create_report.m"
            create_report__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 0)));
#line 369 "create_report.m"
            create_report__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 1)));
#line 369 "create_report.m"
            create_report__Own_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 2)));
#line 370 "create_report.m"
            {
#line 370 "create_report.m"
              profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_4, create_report__EntryCSDPtr_7, &create_report__Desc_19);
            }
#line 1524 "create_report.m"
            {
#line 1524 "create_report.m"
              create_report__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
              MR_hl_field(MR_mktag(1), create_report__V_68_68, 0) = ((MR_Box) (create_report__Desc_19));
#line 1524 "create_report.m"
            }
#line 1524 "create_report.m"
            {
#line 1524 "create_report.m"
              create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__AncestorDesc_17)), create_report__Own_18, create_report__V_68_68, &create_report__Parent_20);
            }
#line 373 "create_report.m"
            {
#line 373 "create_report.m"
              create_report__MoreAncestors_21 = create_report__find_clique_ancestors_2_f_0(create_report__Deep_4, create_report__EntryCliquePtr_10);
            }
#line 374 "create_report.m"
            {
#line 374 "create_report.m"
              create_report__Ancestors_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "create_report.m"
              MR_hl_field(MR_mktag(1), create_report__Ancestors_6, 0) = ((MR_Box) (create_report__Parent_20));
#line 374 "create_report.m"
              MR_hl_field(MR_mktag(1), create_report__Ancestors_6, 1) = ((MR_Box) (create_report__MoreAncestors_21));
#line 374 "create_report.m"
            }
#line 360 "create_report.m"
          }
#line 353 "create_report.m"
      }
#line 376 "create_report.m"
    else
#line 377 "create_report.m"
      create_report__Ancestors_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 350 "create_report.m"
    return create_report__Ancestors_6;
#line 350 "create_report.m"
  }
#line 347 "create_report.m"
}

#line 299 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_callee_4_p_0(
#line 299 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 299 "create_report.m"
  MR_Word create_report__RowData_6,
#line 299 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_13,
#line 299 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_14)
#line 299 "create_report.m"
{
#line 302 "create_report.m"
  {
#line 302 "create_report.m"
    MR_bool create_report__succeeded;
#line 302 "create_report.m"
    MR_Word create_report__MaybeTotalPerf_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 8)));
#line 303 "create_report.m"
    MR_Word create_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 0)));
#line 303 "create_report.m"
    MR_Integer create_report__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 1)));
#line 303 "create_report.m"
    MR_Integer create_report__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 2)));
#line 303 "create_report.m"
    MR_Integer create_report__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 3)));
#line 303 "create_report.m"
    MR_Integer create_report__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 4)));
#line 303 "create_report.m"
    MR_Integer create_report__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 5)));
#line 303 "create_report.m"
    MR_Integer create_report__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 6)));
#line 303 "create_report.m"
    MR_Word create_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 7)));

#line 307 "create_report.m"
    if ((create_report__MaybeTotalPerf_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 305 "create_report.m"
      {
#line 306 "create_report.m"
        {
#line 306 "create_report.m"
          mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.find_start_of_action_callee\'/4", (MR_String) "no total perf");
#line 306 "create_report.m"
          return;
        }
#line 305 "create_report.m"
      }
#line 307 "create_report.m"
    else
#line 308 "create_report.m"
      {
#line 308 "create_report.m"
        MR_Word create_report__TotalPerf_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__MaybeTotalPerf_8, (MR_Integer) 0)));
#line 308 "create_report.m"
        MR_Word create_report__CallSeqsPercent_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 5)));
#line 309 "create_report.m"
        MR_Integer create_report__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 0)));
#line 309 "create_report.m"
        MR_Word create_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 1)));
#line 309 "create_report.m"
        MR_Word create_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 2)));
#line 309 "create_report.m"
        MR_Word create_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 3)));
#line 309 "create_report.m"
        MR_Integer create_report__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 4)));
#line 309 "create_report.m"
        MR_Float create_report__V_32_32 = MR_unbox_float((MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 6)));
#line 309 "create_report.m"
        MR_Integer create_report__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 7)));
#line 309 "create_report.m"
        MR_Word create_report__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 8)));
#line 309 "create_report.m"
        MR_Float create_report__V_35_35 = MR_unbox_float((MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 9)));
#line 309 "create_report.m"
        MR_Word create_report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 10)));
#line 309 "create_report.m"
        MR_Word create_report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 11)));
#line 309 "create_report.m"
        MR_Word create_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 12)));

#line 310 "create_report.m"
        {
#line 310 "create_report.m"
          create_report__succeeded = measurement_units__percent_at_or_above_threshold_2_p_0(create_report__Percent_5, create_report__CallSeqsPercent_10);
        }
#line 314 "create_report.m"
        if (create_report__succeeded)
#line 311 "create_report.m"
          {
#line 311 "create_report.m"
            MR_Word create_report__CliqueDesc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 0)));
#line 311 "create_report.m"
            MR_Word create_report__CliquePtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueDesc_11, (MR_Integer) 0)));
#line 311 "create_report.m"
            MR_Integer create_report__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 1)));
#line 311 "create_report.m"
            MR_Integer create_report__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 2)));
#line 311 "create_report.m"
            MR_Integer create_report__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 3)));
#line 311 "create_report.m"
            MR_Integer create_report__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 4)));
#line 311 "create_report.m"
            MR_Integer create_report__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 5)));
#line 311 "create_report.m"
            MR_Integer create_report__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 6)));
#line 311 "create_report.m"
            MR_Word create_report__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 7)));
#line 311 "create_report.m"
            MR_Word create_report__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 8)));
#line 312 "create_report.m"
            MR_Word create_report__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueDesc_11, (MR_Integer) 1)));
#line 312 "create_report.m"
            MR_Word create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueDesc_11, (MR_Integer) 2)));

#line 313 "create_report.m"
            {
#line 313 "create_report.m"
              MR_Word base;
#line 313 "create_report.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "create_report.m"
              *create_report__STATE_VARIABLE_ActionCliquePtrs_14 = base;
#line 313 "create_report.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__CliquePtr_12));
#line 313 "create_report.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_0_13));
#line 313 "create_report.m"
            }
#line 311 "create_report.m"
          }
#line 314 "create_report.m"
        else
#line 313 "create_report.m"
          *create_report__STATE_VARIABLE_ActionCliquePtrs_14 = create_report__STATE_VARIABLE_ActionCliquePtrs_0_13;
#line 308 "create_report.m"
      }
#line 302 "create_report.m"
  }
#line 299 "create_report.m"
}

#line 296 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0_1(
#line 296 "create_report.m"
  MR_Box create_report__closure_arg,
#line 296 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 296 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 296 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 296 "create_report.m"
{
#line 296 "create_report.m"
  {
#line 296 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 296 "create_report.m"
    MR_Word create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_14;

#line 296 "create_report.m"
    {
#line 296 "create_report.m"
      create_report__find_start_of_action_callee_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_14);
    }
#line 296 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_14));
#line 296 "create_report.m"
  }
#line 296 "create_report.m"
}

#line 291 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0(
#line 291 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 291 "create_report.m"
  MR_Word create_report__CallSiteReport_6,
#line 291 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_11,
#line 291 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_12)
#line 291 "create_report.m"
{
#line 294 "create_report.m"
  {
#line 294 "create_report.m"
    MR_bool create_report__succeeded;
#line 294 "create_report.m"
    MR_Word create_report__CalleeRowDatas_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteReport_6, (MR_Integer) 2)));
#line 294 "create_report.m"
    MR_Word create_report__V_13_13;
#line 295 "create_report.m"
    MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteReport_6, (MR_Integer) 0)));
#line 295 "create_report.m"
    MR_Word create_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteReport_6, (MR_Integer) 1)));
#line 296 "create_report.m"
    MR_Box create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_12;

#line 296 "create_report.m"
    {
#line 296 "create_report.m"
      create_report__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 296 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_13_13, 0) = ((MR_Box) (&create_report_scalar_common_6[7]));
#line 296 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_13_13, 1) = ((MR_Box) (create_report__find_start_of_action_call_site_4_p_0_1));
#line 296 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 296 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_13_13, 3) = ((MR_Box) (create_report__Percent_5));
#line 296 "create_report.m"
    }
#line 296 "create_report.m"
    {
#line 296 "create_report.m"
      mercury__list__foldl_4_p_0((MR_Word) &create_report_scalar_common_1[5], (MR_Word) &create_report_scalar_common_1[4], create_report__V_13_13, create_report__CalleeRowDatas_10, ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_0_11)), &create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_12);
    }
#line 296 "create_report.m"
    *create_report__STATE_VARIABLE_ActionCliquePtrs_12 = ((MR_Word) create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_12);
#line 294 "create_report.m"
  }
#line 291 "create_report.m"
}

#line 288 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0_1(
#line 288 "create_report.m"
  MR_Box create_report__closure_arg,
#line 288 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 288 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 288 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 288 "create_report.m"
{
#line 288 "create_report.m"
  {
#line 288 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 288 "create_report.m"
    MR_Word create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12;

#line 288 "create_report.m"
    {
#line 288 "create_report.m"
      create_report__find_start_of_action_call_site_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12);
    }
#line 288 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12));
#line 288 "create_report.m"
  }
#line 288 "create_report.m"
}

#line 281 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0(
#line 281 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 281 "create_report.m"
  MR_Word create_report__CliquePDReport_6,
#line 281 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_10,
#line 281 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_11)
#line 281 "create_report.m"
{
#line 286 "create_report.m"
  {
#line 286 "create_report.m"
    MR_bool create_report__succeeded;
#line 286 "create_report.m"
    MR_Word create_report__CallSites_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliquePDReport_6, (MR_Integer) 1)));
#line 286 "create_report.m"
    MR_Word create_report__V_12_12;
#line 287 "create_report.m"
    MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliquePDReport_6, (MR_Integer) 0)));
#line 288 "create_report.m"
    MR_Box create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_11;

#line 288 "create_report.m"
    {
#line 288 "create_report.m"
      create_report__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 288 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 0) = ((MR_Box) (&create_report_scalar_common_6[5]));
#line 288 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 1) = ((MR_Box) (create_report__find_start_of_action_clique_proc_dynamic_4_p_0_1));
#line 288 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 288 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 3) = ((MR_Box) (create_report__Percent_5));
#line 288 "create_report.m"
    }
#line 288 "create_report.m"
    {
#line 288 "create_report.m"
      mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_clique_call_site_report_0, (MR_Word) &create_report_scalar_common_1[4], create_report__V_12_12, create_report__CallSites_9, ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_0_10)), &create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_11);
    }
#line 288 "create_report.m"
    *create_report__STATE_VARIABLE_ActionCliquePtrs_11 = ((MR_Word) create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_11);
#line 286 "create_report.m"
  }
#line 281 "create_report.m"
}

#line 278 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_2(
#line 278 "create_report.m"
  MR_Box create_report__closure_arg,
#line 278 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 278 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 278 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 278 "create_report.m"
{
#line 278 "create_report.m"
  {
#line 278 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 278 "create_report.m"
    MR_Word create_report__conv2_STATE_VARIABLE_ActionCliquePtrs_11;

#line 278 "create_report.m"
    {
#line 278 "create_report.m"
      create_report__find_start_of_action_clique_proc_dynamic_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv2_STATE_VARIABLE_ActionCliquePtrs_11);
    }
#line 278 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv2_STATE_VARIABLE_ActionCliquePtrs_11));
#line 278 "create_report.m"
  }
#line 278 "create_report.m"
}

#line 288 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_1(
#line 288 "create_report.m"
  MR_Box create_report__closure_arg,
#line 288 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 288 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 288 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 288 "create_report.m"
{
#line 288 "create_report.m"
  {
#line 288 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 288 "create_report.m"
    MR_Word create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12;

#line 288 "create_report.m"
    {
#line 288 "create_report.m"
      create_report__find_start_of_action_call_site_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12);
    }
#line 288 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12));
#line 288 "create_report.m"
  }
#line 288 "create_report.m"
}

#line 270 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0(
#line 270 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 270 "create_report.m"
  MR_Word create_report__CliqueProcReport_6,
#line 270 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_11,
#line 270 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_12)
#line 270 "create_report.m"
{
#line 274 "create_report.m"
  {
#line 274 "create_report.m"
    MR_bool create_report__succeeded;
#line 274 "create_report.m"
    MR_Word create_report__FirstPDReport_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueProcReport_6, (MR_Integer) 1)));
#line 274 "create_report.m"
    MR_Word create_report__LaterPDReports_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueProcReport_6, (MR_Integer) 2)));
#line 274 "create_report.m"
    MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_13_13;
#line 274 "create_report.m"
    MR_Word create_report__V_14_14;
#line 274 "create_report.m"
    MR_Word create_report__CallSites_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__FirstPDReport_9, (MR_Integer) 1)));
#line 274 "create_report.m"
    MR_Word create_report__V_28_28;
#line 275 "create_report.m"
    MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueProcReport_6, (MR_Integer) 0)));
#line 287 "create_report.m"
    MR_Word create_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__FirstPDReport_9, (MR_Integer) 0)));
#line 288 "create_report.m"
    MR_Box create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_13_13;
#line 278 "create_report.m"
    MR_Box create_report__conv3_STATE_VARIABLE_ActionCliquePtrs_12;

#line 288 "create_report.m"
    {
#line 288 "create_report.m"
      create_report__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 288 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_28_28, 0) = ((MR_Box) (&create_report_scalar_common_6[5]));
#line 288 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_28_28, 1) = ((MR_Box) (create_report__find_start_of_action_clique_proc_4_p_0_1));
#line 288 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 288 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_28_28, 3) = ((MR_Box) (create_report__Percent_5));
#line 288 "create_report.m"
    }
#line 288 "create_report.m"
    {
#line 288 "create_report.m"
      mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_clique_call_site_report_0, (MR_Word) &create_report_scalar_common_1[4], create_report__V_28_28, create_report__CallSites_27, ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_0_11)), &create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_13_13);
    }
#line 288 "create_report.m"
    create_report__STATE_VARIABLE_ActionCliquePtrs_13_13 = ((MR_Word) create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_13_13);
#line 278 "create_report.m"
    {
#line 278 "create_report.m"
      create_report__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 278 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 0) = ((MR_Box) (&create_report_scalar_common_6[6]));
#line 278 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 1) = ((MR_Box) (create_report__find_start_of_action_clique_proc_4_p_0_2));
#line 278 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 278 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 3) = ((MR_Box) (create_report__Percent_5));
#line 278 "create_report.m"
    }
#line 278 "create_report.m"
    {
#line 278 "create_report.m"
      mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_clique_proc_dynamic_report_0, (MR_Word) &create_report_scalar_common_1[4], create_report__V_14_14, create_report__LaterPDReports_10, ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_13_13)), &create_report__conv3_STATE_VARIABLE_ActionCliquePtrs_12);
    }
#line 278 "create_report.m"
    *create_report__STATE_VARIABLE_ActionCliquePtrs_12 = ((MR_Word) create_report__conv3_STATE_VARIABLE_ActionCliquePtrs_12);
#line 274 "create_report.m"
  }
#line 270 "create_report.m"
}

#line 258 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_4_p_0_1(
#line 258 "create_report.m"
  MR_Box create_report__closure_arg,
#line 258 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 258 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 258 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 258 "create_report.m"
{
#line 258 "create_report.m"
  {
#line 258 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 258 "create_report.m"
    MR_Word create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12;

#line 258 "create_report.m"
    {
#line 258 "create_report.m"
      create_report__find_start_of_action_clique_proc_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12);
    }
#line 258 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12));
#line 258 "create_report.m"
  }
#line 258 "create_report.m"
}

#line 253 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_4_p_0(
#line 253 "create_report.m"
  MR_Word create_report__Deep_5,
#line 253 "create_report.m"
  MR_Integer create_report__Percent_6,
#line 253 "create_report.m"
  MR_Word create_report__CurrentReport_7,
#line 253 "create_report.m"
  MR_Word * create_report__SelectedReport_8)
#line 253 "create_report.m"
{
#line 256 "create_report.m"
  while (MR_TRUE)
#line 256 "create_report.m"
    {
#line 256 "create_report.m"
      /* tailcall optimized into a loop */
#line 256 "create_report.m"
      {
#line 256 "create_report.m"
        MR_bool create_report__succeeded;
#line 256 "create_report.m"
        MR_Word create_report__CliqueProcs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CurrentReport_7, (MR_Integer) 2)));
#line 256 "create_report.m"
        MR_Word create_report__ActionCliquePtrs_12;
#line 256 "create_report.m"
        MR_Word create_report__V_16_16;
#line 257 "create_report.m"
        MR_Word create_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CurrentReport_7, (MR_Integer) 0)));
#line 257 "create_report.m"
        MR_Word create_report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CurrentReport_7, (MR_Integer) 1)));
#line 258 "create_report.m"
        MR_Box create_report__conv1_ActionCliquePtrs_12;
#line 266 "create_report.m"
        MR_Word create_report__ActionCliqueReport_15;
#line 261 "create_report.m"
        MR_Word create_report__ActionCliquePtr_13;
#line 261 "create_report.m"
        MR_Word create_report__MaybeActionCliqueReport_14;
#line 261 "create_report.m"
        MR_Word create_report__V_18_18;

#line 258 "create_report.m"
        {
#line 258 "create_report.m"
          create_report__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 258 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 0) = ((MR_Box) (&create_report_scalar_common_6[4]));
#line 258 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 1) = ((MR_Box) (create_report__find_start_of_action_4_p_0_1));
#line 258 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 258 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 3) = ((MR_Box) (create_report__Percent_6));
#line 258 "create_report.m"
        }
#line 258 "create_report.m"
        {
#line 258 "create_report.m"
          mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_clique_proc_report_0, (MR_Word) &create_report_scalar_common_1[4], create_report__V_16_16, create_report__CliqueProcs_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &create_report__conv1_ActionCliquePtrs_12);
        }
#line 258 "create_report.m"
        create_report__ActionCliquePtrs_12 = ((MR_Word) create_report__conv1_ActionCliquePtrs_12);
#line 261 "create_report.m"
        create_report__succeeded = ((MR_tag((MR_Word) create_report__ActionCliquePtrs_12)) == (MR_mktag((MR_Integer) 1)));
#line 261 "create_report.m"
        if (create_report__succeeded)
#line 261 "create_report.m"
          {
#line 261 "create_report.m"
            create_report__ActionCliquePtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__ActionCliquePtrs_12, (MR_Integer) 0)));
#line 261 "create_report.m"
            create_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__ActionCliquePtrs_12, (MR_Integer) 1)));
#line 261 "create_report.m"
            create_report__succeeded = (create_report__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 261 "create_report.m"
            if (create_report__succeeded)
#line 261 "create_report.m"
              {
#line 262 "create_report.m"
                {
#line 262 "create_report.m"
                  create_report__create_clique_report_3_p_0(create_report__Deep_5, create_report__ActionCliquePtr_13, &create_report__MaybeActionCliqueReport_14);
                }
#line 263 "create_report.m"
                create_report__succeeded = ((MR_tag((MR_Word) create_report__MaybeActionCliqueReport_14)) == (MR_mktag((MR_Integer) 0)));
#line 263 "create_report.m"
                if (create_report__succeeded)
#line 263 "create_report.m"
                  create_report__ActionCliqueReport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeActionCliqueReport_14, (MR_Integer) 0)));
#line 261 "create_report.m"
              }
#line 261 "create_report.m"
          }
#line 266 "create_report.m"
        if (create_report__succeeded)
#line 265 "create_report.m"
          {
#line 265 "create_report.m"
            /* direct tailcall eliminated */
#line 265 "create_report.m"
            {
#line 265 "create_report.m"
              MR_Word create_report__CurrentReport__tmp_copy_7 = create_report__ActionCliqueReport_15;

#line 265 "create_report.m"
              create_report__CurrentReport_7 = create_report__CurrentReport__tmp_copy_7;
#line 265 "create_report.m"
            }
#line 265 "create_report.m"
            continue;
#line 265 "create_report.m"
          }
#line 266 "create_report.m"
        else
#line 267 "create_report.m"
          *create_report__SelectedReport_8 = create_report__CurrentReport_7;
#line 256 "create_report.m"
      }
#line 256 "create_report.m"
      break;
#line 256 "create_report.m"
    }
#line 253 "create_report.m"
}

#line 232 "create_report.m"
static void MR_CALL 
create_report__create_root_report_3_p_0(
#line 232 "create_report.m"
  MR_Word create_report__Deep_4,
#line 232 "create_report.m"
  MR_Word create_report__MaybePercent_5,
#line 232 "create_report.m"
  MR_Word * create_report__MaybeReport_6)
#line 232 "create_report.m"
{
#line 235 "create_report.m"
  {
#line 235 "create_report.m"
    MR_bool create_report__succeeded;
#line 235 "create_report.m"
    MR_Word create_report__RootCliquePtr_7;
#line 235 "create_report.m"
    MR_Word create_report__MaybeRootCliqueReport_8;
#line 235 "create_report.m"
    MR_Word create_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
#line 236 "create_report.m"
    MR_Word create_report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
#line 236 "create_report.m"
    MR_String create_report__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
#line 236 "create_report.m"
    MR_String create_report__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
#line 236 "create_report.m"
    MR_String create_report__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
#line 236 "create_report.m"
    MR_ArrayPtr create_report__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
#line 236 "create_report.m"
    MR_Word create_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
#line 236 "create_report.m"
    MR_Word create_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
#line 236 "create_report.m"
    MR_Word create_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));
#line 236 "create_report.m"
    MR_Word create_report__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));

#line 236 "create_report.m"
    {
#line 236 "create_report.m"
      profile__deep_lookup_clique_index_3_p_0(create_report__Deep_4, create_report__V_13_13, &create_report__RootCliquePtr_7);
    }
#line 237 "create_report.m"
    {
#line 237 "create_report.m"
      create_report__create_clique_report_3_p_0(create_report__Deep_4, create_report__RootCliquePtr_7, &create_report__MaybeRootCliqueReport_8);
    }
#line 241 "create_report.m"
    if (((MR_tag((MR_Word) create_report__MaybeRootCliqueReport_8)) == (MR_mktag((MR_Integer) 1))))
#line 240 "create_report.m"
      *create_report__MaybeReport_6 = create_report__MaybeRootCliqueReport_8;
#line 241 "create_report.m"
    else
#line 242 "create_report.m"
      {
#line 242 "create_report.m"
        MR_Word create_report__RootCliqueReport_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeRootCliqueReport_8, (MR_Integer) 0)));

#line 246 "create_report.m"
        if ((create_report__MaybePercent_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 245 "create_report.m"
          *create_report__MaybeReport_6 = create_report__MaybeRootCliqueReport_8;
#line 246 "create_report.m"
        else
#line 247 "create_report.m"
          {
#line 247 "create_report.m"
            MR_Integer create_report__Percent_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), create_report__MaybePercent_5, (MR_Integer) 0)));
#line 247 "create_report.m"
            MR_Word create_report__Report_12;

#line 248 "create_report.m"
            {
#line 248 "create_report.m"
              create_report__find_start_of_action_4_p_0(create_report__Deep_4, create_report__Percent_11, create_report__RootCliqueReport_10, &create_report__Report_12);
            }
#line 249 "create_report.m"
            {
#line 249 "create_report.m"
              MR_Word base;
#line 249 "create_report.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 249 "create_report.m"
              *create_report__MaybeReport_6 = base;
#line 249 "create_report.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__Report_12));
#line 249 "create_report.m"
            }
#line 247 "create_report.m"
          }
#line 242 "create_report.m"
      }
#line 235 "create_report.m"
  }
#line 232 "create_report.m"
}

#line 77 "create_report.m"
void MR_CALL 
create_report__own_and_inherit_to_perf_row_data_5_p_0(
#line 77 "create_report.m"
  MR_Word create_report__TypeInfo_for_T_12,
#line 77 "create_report.m"
  MR_Word create_report__Deep_6,
#line 77 "create_report.m"
  MR_Box create_report__Subject_7,
#line 77 "create_report.m"
  MR_Word create_report__Own_8,
#line 77 "create_report.m"
  MR_Word create_report__Desc_9,
#line 77 "create_report.m"
  MR_Word * create_report__RowData_10)
#line 77 "create_report.m"
{
#line 1523 "create_report.m"
  {
#line 1523 "create_report.m"
    MR_bool create_report__succeeded;
#line 1523 "create_report.m"
    MR_Word create_report__V_11_11;

#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_11_11, 0) = ((MR_Box) (create_report__Desc_9));
#line 1524 "create_report.m"
    }
#line 1524 "create_report.m"
    {
#line 1524 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_6, create_report__Subject_7, create_report__Own_8, create_report__V_11_11, create_report__RowData_10);
#line 1524 "create_report.m"
      return;
    }
#line 1523 "create_report.m"
  }
#line 77 "create_report.m"
}

#line 71 "create_report.m"
MR_Word MR_CALL 
create_report__describe_proc_2_f_0(
#line 71 "create_report.m"
  MR_Word create_report__Deep_4,
#line 71 "create_report.m"
  MR_Word create_report__PSPtr_5)
#line 71 "create_report.m"
{
#line 1645 "create_report.m"
  {
#line 1645 "create_report.m"
    MR_bool create_report__succeeded;
#line 1645 "create_report.m"
    MR_Word create_report__ProcDesc_6;
#line 1645 "create_report.m"
    MR_String create_report__FileName_8;
#line 1645 "create_report.m"
    MR_Integer create_report__LineNumber_9;
#line 1645 "create_report.m"
    MR_String create_report__ModuleName_10;
#line 1645 "create_report.m"
    MR_String create_report__UnQualRefinedName_11;
#line 1645 "create_report.m"
    MR_String create_report__QualRefinedName_12;

#line 1646 "create_report.m"
    {
#line 1646 "create_report.m"
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_4, create_report__PSPtr_5);
    }
#line 1653 "create_report.m"
    if (create_report__succeeded)
#line 1647 "create_report.m"
      {
#line 1647 "create_report.m"
        MR_Word create_report__PS_7;
#line 1648 "create_report.m"
        MR_Word create_report__V_13_13;
#line 1648 "create_report.m"
        MR_String create_report__V_17_17;
#line 1648 "create_report.m"
        MR_Word create_report__V_19_19;
#line 1648 "create_report.m"
        MR_ArrayPtr create_report__V_20_20;
#line 1648 "create_report.m"
        MR_ArrayPtr create_report__V_21_21;
#line 1648 "create_report.m"
        MR_Word create_report__V_22_22;
#line 1648 "create_report.m"
        MR_Word create_report__V_23_23;

#line 1647 "create_report.m"
        {
#line 1647 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__PS_7);
        }
#line 1648 "create_report.m"
        create_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 0)));
#line 1648 "create_report.m"
        create_report__ModuleName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 1)));
#line 1648 "create_report.m"
        create_report__UnQualRefinedName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 2)));
#line 1648 "create_report.m"
        create_report__QualRefinedName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 3)));
#line 1648 "create_report.m"
        create_report__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 4)));
#line 1648 "create_report.m"
        create_report__FileName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 5)));
#line 1648 "create_report.m"
        create_report__LineNumber_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 6)));
#line 1648 "create_report.m"
        create_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 7)));
#line 1648 "create_report.m"
        create_report__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 8)));
#line 1648 "create_report.m"
        create_report__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 9)));
#line 1648 "create_report.m"
        create_report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 10)));
#line 1648 "create_report.m"
        create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 11)));
#line 1647 "create_report.m"
      }
#line 1653 "create_report.m"
    else
#line 1654 "create_report.m"
      {
#line 1654 "create_report.m"
        create_report__FileName_8 = (MR_String) "";
#line 1655 "create_report.m"
        create_report__LineNumber_9 = (MR_Integer) 0;
#line 1656 "create_report.m"
        create_report__ModuleName_10 = (MR_String) "";
#line 1657 "create_report.m"
        create_report__UnQualRefinedName_11 = (MR_String) "mercury_runtime";
#line 1658 "create_report.m"
        create_report__QualRefinedName_12 = (MR_String) "mercury_runtime";
#line 1654 "create_report.m"
      }
#line 1660 "create_report.m"
    {
#line 1660 "create_report.m"
      create_report__ProcDesc_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1660 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 0) = ((MR_Box) (create_report__PSPtr_5));
#line 1660 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 1) = ((MR_Box) (create_report__FileName_8));
#line 1660 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 2) = ((MR_Box) (create_report__LineNumber_9));
#line 1660 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 3) = ((MR_Box) (create_report__ModuleName_10));
#line 1660 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 4) = ((MR_Box) (create_report__UnQualRefinedName_11));
#line 1660 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 5) = ((MR_Box) (create_report__QualRefinedName_12));
#line 1660 "create_report.m"
    }
#line 1645 "create_report.m"
    return create_report__ProcDesc_6;
#line 1645 "create_report.m"
  }
#line 71 "create_report.m"
}

#line 341 "create_report.m"
static void MR_CALL 
create_report__create_clique_report_3_p_0_3(
#line 341 "create_report.m"
  MR_Box create_report__closure_arg,
#line 341 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 341 "create_report.m"
  MR_Box * create_report__wrapper_arg_2)
#line 341 "create_report.m"
{
#line 341 "create_report.m"
  {
#line 341 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 341 "create_report.m"
    MR_Word create_report__conv2_CliqueProcReport_9;

#line 341 "create_report.m"
    {
#line 341 "create_report.m"
      create_report__create_clique_proc_report_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv2_CliqueProcReport_9);
    }
#line 341 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_CliqueProcReport_9));
#line 341 "create_report.m"
  }
#line 341 "create_report.m"
}

#line 335 "create_report.m"
static MR_bool MR_CALL 
create_report__create_clique_report_3_p_0_2(
#line 335 "create_report.m"
  MR_Box create_report__closure_arg,
#line 335 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 335 "create_report.m"
{
#line 335 "create_report.m"
  {
#line 335 "create_report.m"
    MR_bool create_report__succeeded;
#line 335 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;

#line 335 "create_report.m"
    {
#line 335 "create_report.m"
      return create_report__succeeded = create_report__proc_group_contains_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 335 "create_report.m"
    return create_report__succeeded;
#line 335 "create_report.m"
  }
#line 335 "create_report.m"
}

#line 328 "create_report.m"
static void MR_CALL 
create_report__create_clique_report_3_p_0_1(
#line 328 "create_report.m"
  MR_Box create_report__closure_arg,
#line 328 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 328 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 328 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 328 "create_report.m"
{
#line 328 "create_report.m"
  {
#line 328 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 328 "create_report.m"
    MR_Word create_report__conv0_STATE_VARIABLE_PStoPDsMap_13;

#line 328 "create_report.m"
    {
#line 328 "create_report.m"
      create_report__group_proc_dynamics_by_proc_static_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_PStoPDsMap_13);
    }
#line 328 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_PStoPDsMap_13));
#line 328 "create_report.m"
  }
#line 328 "create_report.m"
}

#line 66 "create_report.m"
void MR_CALL 
create_report__create_clique_report_3_p_0(
#line 66 "create_report.m"
  MR_Word create_report__Deep_4,
#line 66 "create_report.m"
  MR_Word create_report__CliquePtr_5,
#line 66 "create_report.m"
  MR_Word * create_report__MaybeCliqueReport_6)
#line 66 "create_report.m"
{
#line 324 "create_report.m"
  {
#line 324 "create_report.m"
    MR_bool create_report__succeeded;
#line 324 "create_report.m"
    MR_Word create_report__TypeCtorInfo_28_28;
#line 324 "create_report.m"
    MR_Word create_report__TypeInfo_29_29;
#line 324 "create_report.m"
    MR_Word create_report__AncestorRowDatas_7;
#line 324 "create_report.m"
    MR_Word create_report__PDPtrs_8;
#line 324 "create_report.m"
    MR_Word create_report__PStoPDsMap_9;
#line 324 "create_report.m"
    MR_Word create_report__PStoPDsList0_10;
#line 324 "create_report.m"
    MR_Word create_report__EntryCSDPtr_11;
#line 324 "create_report.m"
    MR_Word create_report__PStoPDsList_16;
#line 324 "create_report.m"
    MR_Word create_report__CliqueProcs_17;
#line 324 "create_report.m"
    MR_Word create_report__CliqueReport_18;
#line 324 "create_report.m"
    MR_Word create_report__V_19_19;
#line 324 "create_report.m"
    MR_Word create_report__V_20_20;
#line 324 "create_report.m"
    MR_Word create_report__V_22_22;
#line 328 "create_report.m"
    MR_Box create_report__conv1_PStoPDsMap_9;

#line 325 "create_report.m"
    {
#line 325 "create_report.m"
      create_report__AncestorRowDatas_7 = create_report__find_clique_ancestors_2_f_0(create_report__Deep_4, create_report__CliquePtr_5);
    }
#line 327 "create_report.m"
    {
#line 327 "create_report.m"
      profile__deep_lookup_clique_members_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__PDPtrs_8);
    }
#line 328 "create_report.m"
    {
#line 328 "create_report.m"
      create_report__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 328 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_19_19, 0) = ((MR_Box) (&create_report_scalar_common_6[2]));
#line 328 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_19_19, 1) = ((MR_Box) (create_report__create_clique_report_3_p_0_1));
#line 328 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 328 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_19_19, 3) = ((MR_Box) (create_report__Deep_4));
#line 328 "create_report.m"
    }
#line 14012 "create_report.c"
    create_report__TypeCtorInfo_28_28 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
#line 14014 "create_report.c"
    create_report__TypeInfo_29_29 = (MR_Word) &create_report_scalar_common_1[0];
#line 328 "create_report.m"
    {
#line 328 "create_report.m"
      create_report__V_20_20 = mercury__map__init_0_f_0(create_report__TypeCtorInfo_28_28, create_report__TypeInfo_29_29);
    }
#line 328 "create_report.m"
    {
#line 328 "create_report.m"
      mercury__list__foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &create_report_scalar_common_2[4], create_report__V_19_19, create_report__PDPtrs_8, ((MR_Box) (create_report__V_20_20)), &create_report__conv1_PStoPDsMap_9);
    }
#line 328 "create_report.m"
    create_report__PStoPDsMap_9 = ((MR_Word) create_report__conv1_PStoPDsMap_9);
#line 330 "create_report.m"
    {
#line 330 "create_report.m"
      mercury__map__to_assoc_list_2_p_0(create_report__TypeCtorInfo_28_28, create_report__TypeInfo_29_29, create_report__PStoPDsMap_9, &create_report__PStoPDsList0_10);
    }
#line 331 "create_report.m"
    {
#line 331 "create_report.m"
      profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__EntryCSDPtr_11);
    }
#line 332 "create_report.m"
    {
#line 332 "create_report.m"
      create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__EntryCSDPtr_11);
    }
#line 338 "create_report.m"
    if (create_report__succeeded)
#line 333 "create_report.m"
      {
#line 333 "create_report.m"
        MR_Word create_report__TypeInfo_33_33;
#line 333 "create_report.m"
        MR_Word create_report__EntryCSD_12;
#line 333 "create_report.m"
        MR_Word create_report__EntryPDPtr_13;
#line 333 "create_report.m"
        MR_Word create_report__EntryGroup_14;
#line 333 "create_report.m"
        MR_Word create_report__RestGroup_15;
#line 333 "create_report.m"
        MR_Word create_report__V_21_21;
#line 334 "create_report.m"
        MR_Word create_report__V_23_23;
#line 334 "create_report.m"
        MR_Word create_report__V_24_24;

#line 333 "create_report.m"
        {
#line 333 "create_report.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__EntryCSDPtr_11, &create_report__EntryCSD_12);
        }
#line 334 "create_report.m"
        create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_12, (MR_Integer) 0)));
#line 334 "create_report.m"
        create_report__EntryPDPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_12, (MR_Integer) 1)));
#line 334 "create_report.m"
        create_report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_12, (MR_Integer) 2)));
#line 335 "create_report.m"
        {
#line 335 "create_report.m"
          create_report__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 335 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 0) = ((MR_Box) (&create_report_scalar_common_7[0]));
#line 335 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 1) = ((MR_Box) (create_report__create_clique_report_3_p_0_2));
#line 335 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 335 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 3) = ((MR_Box) (create_report__EntryPDPtr_13));
#line 335 "create_report.m"
        }
#line 14089 "create_report.c"
        create_report__TypeInfo_33_33 = (MR_Word) &create_report_scalar_common_2[5];
#line 335 "create_report.m"
        {
#line 335 "create_report.m"
          mercury__list__filter_4_p_0(create_report__TypeInfo_33_33, create_report__V_21_21, create_report__PStoPDsList0_10, &create_report__EntryGroup_14, &create_report__RestGroup_15);
        }
#line 337 "create_report.m"
        {
#line 337 "create_report.m"
          create_report__PStoPDsList_16 = mercury__list__f_43_43_2_f_0(create_report__TypeInfo_33_33, create_report__EntryGroup_14, create_report__RestGroup_15);
        }
#line 333 "create_report.m"
      }
#line 338 "create_report.m"
    else
#line 339 "create_report.m"
      create_report__PStoPDsList_16 = create_report__PStoPDsList0_10;
#line 341 "create_report.m"
    {
#line 341 "create_report.m"
      create_report__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 341 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_22_22, 0) = ((MR_Box) (&create_report_scalar_common_6[3]));
#line 341 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_22_22, 1) = ((MR_Box) (create_report__create_clique_report_3_p_0_3));
#line 341 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 341 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_22_22, 3) = ((MR_Box) (create_report__Deep_4));
#line 341 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_22_22, 4) = ((MR_Box) (create_report__CliquePtr_5));
#line 341 "create_report.m"
    }
#line 341 "create_report.m"
    {
#line 341 "create_report.m"
      mercury__list__map_3_p_0((MR_Word) &create_report_scalar_common_2[5], (MR_Word) &report__report__type_ctor_info_clique_proc_report_0, create_report__V_22_22, create_report__PStoPDsList_16, &create_report__CliqueProcs_17);
    }
#line 344 "create_report.m"
    {
#line 344 "create_report.m"
      create_report__CliqueReport_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 344 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CliqueReport_18, 0) = ((MR_Box) (create_report__CliquePtr_5));
#line 344 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CliqueReport_18, 1) = ((MR_Box) (create_report__AncestorRowDatas_7));
#line 344 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CliqueReport_18, 2) = ((MR_Box) (create_report__CliqueProcs_17));
#line 344 "create_report.m"
    }
#line 345 "create_report.m"
    {
#line 345 "create_report.m"
      MR_Word base;
#line 345 "create_report.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 345 "create_report.m"
      *create_report__MaybeCliqueReport_6 = base;
#line 345 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__CliqueReport_18));
#line 345 "create_report.m"
    }
#line 324 "create_report.m"
  }
#line 66 "create_report.m"
}

#line 871 "create_report.m"
static void MR_CALL 
create_report__create_top_procs_report_6_p_0_1(
#line 871 "create_report.m"
  MR_Box create_report__closure_arg,
#line 871 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 871 "create_report.m"
  MR_Box * create_report__wrapper_arg_2)
#line 871 "create_report.m"
{
#line 871 "create_report.m"
  {
#line 871 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 871 "create_report.m"
    MR_Word create_report__conv0_RowData_6;

#line 871 "create_report.m"
    {
#line 871 "create_report.m"
      create_report__psi_to_perf_row_data_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Integer) create_report__wrapper_arg_1), &create_report__conv0_RowData_6);
    }
#line 871 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_RowData_6));
#line 871 "create_report.m"
  }
#line 871 "create_report.m"
}

#line 59 "create_report.m"
void MR_CALL 
create_report__create_top_procs_report_6_p_0(
#line 59 "create_report.m"
  MR_Word create_report__Deep_7,
#line 59 "create_report.m"
  MR_Word create_report__Limit_8,
#line 59 "create_report.m"
  MR_Word create_report__CostKind_9,
#line 59 "create_report.m"
  MR_Word create_report__InclDesc0_10,
#line 59 "create_report.m"
  MR_Word create_report__Scope0_11,
#line 59 "create_report.m"
  MR_Word * create_report__MaybeTopProcsReport_12)
#line 59 "create_report.m"
{
#line 847 "create_report.m"
  {
#line 847 "create_report.m"
    MR_bool create_report__succeeded;
#line 847 "create_report.m"
    MR_Word create_report__InclDesc_13;
#line 847 "create_report.m"
    MR_Word create_report__Scope_14;
#line 847 "create_report.m"
    MR_Word create_report__MaybeTopPSIs_15;

#line 854 "create_report.m"
    if ((create_report__CostKind_9 == (MR_Integer) 0))
#line 849 "create_report.m"
      {
#line 852 "create_report.m"
        create_report__InclDesc_13 = (MR_Integer) 0;
#line 853 "create_report.m"
        create_report__Scope_14 = (MR_Integer) 1;
#line 849 "create_report.m"
      }
#line 854 "create_report.m"
    else
#line 860 "create_report.m"
      {
#line 861 "create_report.m"
        create_report__InclDesc_13 = create_report__InclDesc0_10;
#line 862 "create_report.m"
        create_report__Scope_14 = create_report__Scope0_11;
#line 860 "create_report.m"
      }
#line 864 "create_report.m"
    {
#line 864 "create_report.m"
      create_report__MaybeTopPSIs_15 = top_procs__find_top_procs_5_f_0(create_report__CostKind_9, create_report__InclDesc_13, create_report__Scope_14, create_report__Limit_8, create_report__Deep_7);
    }
#line 868 "create_report.m"
    if (((MR_tag((MR_Word) create_report__MaybeTopPSIs_15)) == (MR_mktag((MR_Integer) 1))))
#line 866 "create_report.m"
      {
#line 866 "create_report.m"
        MR_String create_report__ErrorMessage_16 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__MaybeTopPSIs_15, (MR_Integer) 0)));
#line 866 "create_report.m"
        MR_String create_report__V_22_22;

#line 867 "create_report.m"
        {
#line 867 "create_report.m"
          create_report__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "Internal error: ", create_report__ErrorMessage_16);
        }
#line 867 "create_report.m"
        {
#line 867 "create_report.m"
          MR_Word base;
#line 867 "create_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 867 "create_report.m"
          *create_report__MaybeTopProcsReport_12 = base;
#line 867 "create_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__V_22_22));
#line 867 "create_report.m"
        }
#line 866 "create_report.m"
      }
#line 868 "create_report.m"
    else
#line 869 "create_report.m"
      {
#line 869 "create_report.m"
        MR_Word create_report__TopPSIs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeTopPSIs_15, (MR_Integer) 0)));
#line 869 "create_report.m"
        MR_Word create_report__Ordering_18;
#line 869 "create_report.m"
        MR_Word create_report__ProcRowDatas_19;
#line 869 "create_report.m"
        MR_Word create_report__TopProcsReport_20;
#line 869 "create_report.m"
        MR_Word create_report__V_21_21;

#line 870 "create_report.m"
        {
#line 870 "create_report.m"
          create_report__Ordering_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 870 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__Ordering_18, 0) = ((MR_Box) (create_report__Limit_8));
#line 870 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__Ordering_18, 1) = ((MR_Box) ((create_report__CostKind_9 | ((((create_report__InclDesc_13 << (MR_Integer) 3)) | ((create_report__Scope_14 << (MR_Integer) 4)))))));
#line 870 "create_report.m"
        }
#line 871 "create_report.m"
        {
#line 871 "create_report.m"
          create_report__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 871 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 0) = ((MR_Box) (&create_report_scalar_common_4[1]));
#line 871 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 1) = ((MR_Box) (create_report__create_top_procs_report_6_p_0_1));
#line 871 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 871 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 3) = ((MR_Box) (create_report__Deep_7));
#line 871 "create_report.m"
        }
#line 871 "create_report.m"
        {
#line 871 "create_report.m"
          mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &create_report_scalar_common_1[3], create_report__V_21_21, create_report__TopPSIs_17, &create_report__ProcRowDatas_19);
        }
#line 872 "create_report.m"
        {
#line 872 "create_report.m"
          create_report__TopProcsReport_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 872 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TopProcsReport_20, 0) = ((MR_Box) (create_report__Ordering_18));
#line 872 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TopProcsReport_20, 1) = ((MR_Box) (create_report__ProcRowDatas_19));
#line 872 "create_report.m"
        }
#line 873 "create_report.m"
        {
#line 873 "create_report.m"
          MR_Word base;
#line 873 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 873 "create_report.m"
          *create_report__MaybeTopProcsReport_12 = base;
#line 873 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__TopProcsReport_20));
#line 873 "create_report.m"
        }
#line 869 "create_report.m"
      }
#line 847 "create_report.m"
  }
#line 59 "create_report.m"
}

#line 1231 "create_report.m"
static void MR_CALL 
create_report__create_dynamic_procrep_coverage_report_3_p_0_1(
#line 1231 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1231 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1231 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 1231 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 1231 "create_report.m"
{
#line 1231 "create_report.m"
  {
#line 1231 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1231 "create_report.m"
    MR_Word create_report__conv0_HeadVar__4_4;

#line 1231 "create_report.m"
    {
#line 1231 "create_report.m"
      analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_HeadVar__4_4);
    }
#line 1231 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_HeadVar__4_4));
#line 1231 "create_report.m"
  }
#line 1231 "create_report.m"
}

#line 53 "create_report.m"
void MR_CALL 
create_report__create_dynamic_procrep_coverage_report_3_p_0(
#line 53 "create_report.m"
  MR_Word create_report__Deep_4,
#line 53 "create_report.m"
  MR_Word create_report__PDPtr_5,
#line 53 "create_report.m"
  MR_Word * create_report__MaybeReport_6)
#line 53 "create_report.m"
{
#line 1239 "create_report.m"
  {
#line 1239 "create_report.m"
    MR_bool create_report__succeeded;

#line 1224 "create_report.m"
    {
#line 1224 "create_report.m"
      create_report__succeeded = profile__valid_proc_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__PDPtr_5);
    }
#line 1239 "create_report.m"
    if (create_report__succeeded)
#line 1225 "create_report.m"
      {
#line 1225 "create_report.m"
        MR_Word create_report__PD_7;
#line 1225 "create_report.m"
        MR_Word create_report__PSPtr_8;
#line 1225 "create_report.m"
        MR_Word create_report__MaybeCoveragePoints_9;
#line 1225 "create_report.m"
        MR_Word create_report__Slots_10;
#line 1225 "create_report.m"
        MR_Word create_report__CallSitesMap_11;
#line 1225 "create_report.m"
        MR_Word create_report__Own_12;
#line 1225 "create_report.m"
        MR_Word create_report__V_14_14;
#line 1225 "create_report.m"
        MR_Word create_report__V_15_15;
#line 1226 "create_report.m"
        MR_ArrayPtr create_report__V_21_21;
#line 1231 "create_report.m"
        MR_Box create_report__conv1_CallSitesMap_11;

#line 1225 "create_report.m"
        {
#line 1225 "create_report.m"
          profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__PD_7);
        }
#line 1226 "create_report.m"
        create_report__PSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 0)));
#line 1226 "create_report.m"
        create_report__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 1)));
#line 1226 "create_report.m"
        create_report__MaybeCoveragePoints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 2)));
#line 1230 "create_report.m"
        {
#line 1230 "create_report.m"
          analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__Slots_10);
        }
#line 1231 "create_report.m"
        {
#line 1231 "create_report.m"
          create_report__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1231 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 0) = ((MR_Box) (&create_report_scalar_common_6[1]));
#line 1231 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 1) = ((MR_Box) (create_report__create_dynamic_procrep_coverage_report_3_p_0_1));
#line 1231 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1231 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 3) = ((MR_Box) (create_report__Deep_4));
#line 1231 "create_report.m"
        }
#line 1231 "create_report.m"
        {
#line 1231 "create_report.m"
          create_report__V_15_15 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &create_report_scalar_common_1[2]);
        }
#line 1231 "create_report.m"
        {
#line 1231 "create_report.m"
          mercury__list__foldl_4_p_0((MR_Word) &create_report_scalar_common_2[2], (MR_Word) &create_report_scalar_common_2[3], create_report__V_14_14, create_report__Slots_10, ((MR_Box) (create_report__V_15_15)), &create_report__conv1_CallSitesMap_11);
        }
#line 1231 "create_report.m"
        create_report__CallSitesMap_11 = ((MR_Word) create_report__conv1_CallSitesMap_11);
#line 1235 "create_report.m"
        {
#line 1235 "create_report.m"
          profile__deep_lookup_pd_own_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__Own_12);
        }
#line 1237 "create_report.m"
        {
#line 1237 "create_report.m"
          create_report__maybe_create_procrep_coverage_report_6_p_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, create_report__Deep_4, create_report__PSPtr_8, create_report__Own_12, create_report__MaybeCoveragePoints_9, create_report__CallSitesMap_11, create_report__MaybeReport_6);
#line 1237 "create_report.m"
          return;
        }
#line 1225 "create_report.m"
      }
#line 1239 "create_report.m"
    else
#line 1240 "create_report.m"
      {
#line 1240 "create_report.m"
        MR_Integer create_report__PDId_13 = (MR_Integer) create_report__PDPtr_5;
#line 1240 "create_report.m"
        MR_String create_report__V_16_16;
#line 1240 "create_report.m"
        MR_String create_report__V_33_33;

#line 14486 "create_report.c"
        {
#line 14488 "create_report.c"
          create_report__V_33_33 = mercury__string__int_to_string_1_f_0(create_report__PDId_13);
        }
#line 14491 "create_report.c"
        {
#line 14493 "create_report.c"
          create_report__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "Proc dynamic pointer is invalid ", create_report__V_33_33);
        }
#line 1241 "create_report.m"
        {
#line 1241 "create_report.m"
          MR_Word base;
#line 1241 "create_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "create_report.m"
          *create_report__MaybeReport_6 = base;
#line 1241 "create_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__V_16_16));
#line 1241 "create_report.m"
        }
#line 1240 "create_report.m"
      }
#line 1239 "create_report.m"
  }
#line 53 "create_report.m"
}

#line 1209 "create_report.m"
static void MR_CALL 
create_report__create_static_procrep_coverage_report_3_p_0_1(
#line 1209 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1209 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1209 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 1209 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 1209 "create_report.m"
{
#line 1209 "create_report.m"
  {
#line 1209 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1209 "create_report.m"
    MR_Word create_report__conv0_HeadVar__4_4;

#line 1209 "create_report.m"
    {
#line 1209 "create_report.m"
      analysis_utils__build_static_call_site_cost_and_callee_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_HeadVar__4_4);
    }
#line 1209 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_HeadVar__4_4));
#line 1209 "create_report.m"
  }
#line 1209 "create_report.m"
}

#line 45 "create_report.m"
void MR_CALL 
create_report__create_static_procrep_coverage_report_3_p_0(
#line 45 "create_report.m"
  MR_Word create_report__Deep_4,
#line 45 "create_report.m"
  MR_Word create_report__PSPtr_5,
#line 45 "create_report.m"
  MR_Word * create_report__MaybeReport_6)
#line 45 "create_report.m"
{
#line 1217 "create_report.m"
  {
#line 1217 "create_report.m"
    MR_bool create_report__succeeded;

#line 1201 "create_report.m"
    {
#line 1201 "create_report.m"
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_4, create_report__PSPtr_5);
    }
#line 1217 "create_report.m"
    if (create_report__succeeded)
#line 1202 "create_report.m"
      {
#line 1202 "create_report.m"
        MR_Word create_report__StaticCoverage_7;
#line 1202 "create_report.m"
        MR_Word create_report__MaybeCoveragePoints_8;
#line 1202 "create_report.m"
        MR_Word create_report__PS_9;
#line 1202 "create_report.m"
        MR_ArrayPtr create_report__CallSitesArray_10;
#line 1202 "create_report.m"
        MR_Word create_report__CallSitesMap_11;
#line 1202 "create_report.m"
        MR_Word create_report__Own_12;
#line 1202 "create_report.m"
        MR_Word create_report__V_14_14;
#line 1202 "create_report.m"
        MR_Word create_report__V_15_15;
#line 1208 "create_report.m"
        MR_Word create_report__V_21_21;
#line 1208 "create_report.m"
        MR_String create_report__V_22_22;
#line 1208 "create_report.m"
        MR_String create_report__V_23_23;
#line 1208 "create_report.m"
        MR_String create_report__V_24_24;
#line 1208 "create_report.m"
        MR_String create_report__V_25_25;
#line 1208 "create_report.m"
        MR_String create_report__V_26_26;
#line 1208 "create_report.m"
        MR_Integer create_report__V_27_27;
#line 1208 "create_report.m"
        MR_Word create_report__V_28_28;
#line 1208 "create_report.m"
        MR_ArrayPtr create_report__V_29_29;
#line 1208 "create_report.m"
        MR_Word create_report__V_30_30;
#line 1208 "create_report.m"
        MR_Word create_report__V_31_31;
#line 1209 "create_report.m"
        MR_Box create_report__conv1_CallSitesMap_11;

#line 1202 "create_report.m"
        {
#line 1202 "create_report.m"
          profile__deep_lookup_ps_coverage_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__StaticCoverage_7);
        }
#line 1203 "create_report.m"
        {
#line 1203 "create_report.m"
          create_report__MaybeCoveragePoints_8 = measurements__static_coverage_maybe_get_coverage_points_1_f_0(create_report__StaticCoverage_7);
        }
#line 1207 "create_report.m"
        {
#line 1207 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__PS_9);
        }
#line 1208 "create_report.m"
        create_report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 0)));
#line 1208 "create_report.m"
        create_report__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 1)));
#line 1208 "create_report.m"
        create_report__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 2)));
#line 1208 "create_report.m"
        create_report__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 3)));
#line 1208 "create_report.m"
        create_report__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 4)));
#line 1208 "create_report.m"
        create_report__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 5)));
#line 1208 "create_report.m"
        create_report__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 6)));
#line 1208 "create_report.m"
        create_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 7)));
#line 1208 "create_report.m"
        create_report__CallSitesArray_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 8)));
#line 1208 "create_report.m"
        create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 9)));
#line 1208 "create_report.m"
        create_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 10)));
#line 1208 "create_report.m"
        create_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 11)));
#line 1209 "create_report.m"
        {
#line 1209 "create_report.m"
          create_report__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1209 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 0) = ((MR_Box) (&create_report_scalar_common_6[0]));
#line 1209 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 1) = ((MR_Box) (create_report__create_static_procrep_coverage_report_3_p_0_1));
#line 1209 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1209 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 3) = ((MR_Box) (create_report__Deep_4));
#line 1209 "create_report.m"
        }
#line 1209 "create_report.m"
        {
#line 1209 "create_report.m"
          create_report__V_15_15 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &create_report_scalar_common_1[1]);
        }
#line 1209 "create_report.m"
        {
#line 1209 "create_report.m"
          mercury__array__foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_Word) &create_report_scalar_common_2[1], create_report__V_14_14, (MR_ArrayPtr) create_report__CallSitesArray_10, ((MR_Box) (create_report__V_15_15)), &create_report__conv1_CallSitesMap_11);
        }
#line 1209 "create_report.m"
        create_report__CallSitesMap_11 = ((MR_Word) create_report__conv1_CallSitesMap_11);
#line 1213 "create_report.m"
        {
#line 1213 "create_report.m"
          profile__deep_lookup_ps_own_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Own_12);
        }
#line 1215 "create_report.m"
        {
#line 1215 "create_report.m"
          create_report__maybe_create_procrep_coverage_report_6_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, create_report__Deep_4, create_report__PSPtr_5, create_report__Own_12, create_report__MaybeCoveragePoints_8, create_report__CallSitesMap_11, create_report__MaybeReport_6);
#line 1215 "create_report.m"
          return;
        }
#line 1202 "create_report.m"
      }
#line 1217 "create_report.m"
    else
#line 1218 "create_report.m"
      {
#line 1218 "create_report.m"
        MR_Integer create_report__PSId_13 = (MR_Integer) create_report__PSPtr_5;
#line 1218 "create_report.m"
        MR_String create_report__V_16_16;
#line 1218 "create_report.m"
        MR_String create_report__V_40_40;

#line 14703 "create_report.c"
        {
#line 14705 "create_report.c"
          create_report__V_40_40 = mercury__string__int_to_string_1_f_0(create_report__PSId_13);
        }
#line 14708 "create_report.c"
        {
#line 14710 "create_report.c"
          create_report__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "Proc static pointer is invalid ", create_report__V_40_40);
        }
#line 1219 "create_report.m"
        {
#line 1219 "create_report.m"
          MR_Word base;
#line 1219 "create_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1219 "create_report.m"
          *create_report__MaybeReport_6 = base;
#line 1219 "create_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__V_16_16));
#line 1219 "create_report.m"
        }
#line 1218 "create_report.m"
      }
#line 1217 "create_report.m"
  }
#line 45 "create_report.m"
}

#line 892 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_report_3_p_0_1(
#line 892 "create_report.m"
  MR_Box create_report__closure_arg,
#line 892 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 892 "create_report.m"
{
#line 892 "create_report.m"
  {
#line 892 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 892 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 892 "create_report.m"
    MR_Word create_report__conv0_CallSitePerf_6;

#line 892 "create_report.m"
    {
#line 892 "create_report.m"
      create_report__conv0_CallSitePerf_6 = create_report__create_call_site_summary_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 892 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_CallSitePerf_6));
#line 892 "create_report.m"
    return create_report__wrapper_arg_2;
#line 892 "create_report.m"
  }
#line 892 "create_report.m"
}

#line 40 "create_report.m"
void MR_CALL 
create_report__create_proc_report_3_p_0(
#line 40 "create_report.m"
  MR_Word create_report__Deep_4,
#line 40 "create_report.m"
  MR_Word create_report__PSPtr_5,
#line 40 "create_report.m"
  MR_Word * create_report__MaybeProcReport_6)
#line 40 "create_report.m"
{
#line 907 "create_report.m"
  {
#line 907 "create_report.m"
    MR_bool create_report__succeeded;

#line 882 "create_report.m"
    {
#line 882 "create_report.m"
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_4, create_report__PSPtr_5);
    }
#line 907 "create_report.m"
    if (create_report__succeeded)
#line 883 "create_report.m"
      {
#line 883 "create_report.m"
        MR_Word create_report__TypeCtorInfo_42_42;
#line 883 "create_report.m"
        MR_Word create_report__TypeCtorInfo_46_46;
#line 883 "create_report.m"
        MR_Word create_report__ProcDesc_7;
#line 883 "create_report.m"
        MR_Word create_report__Own_8;
#line 883 "create_report.m"
        MR_Word create_report__Desc_9;
#line 883 "create_report.m"
        MR_Word create_report__ProcSummaryRowData_10;
#line 883 "create_report.m"
        MR_Word create_report__PS_11;
#line 883 "create_report.m"
        MR_ArrayPtr create_report__CallSitesArray_12;
#line 883 "create_report.m"
        MR_Word create_report__CallSites_13;
#line 883 "create_report.m"
        MR_Word create_report__ProcCallSiteSummaryRowDatas_14;
#line 883 "create_report.m"
        MR_Word create_report__CallerCSDPtrs0_15;
#line 883 "create_report.m"
        MR_Word create_report__SeenProcs_16;
#line 883 "create_report.m"
        MR_Integer create_report__NumDynamic_17;
#line 883 "create_report.m"
        MR_Word create_report__CallersOwn_18;
#line 883 "create_report.m"
        MR_Word create_report__CallersInherit_19;
#line 883 "create_report.m"
        MR_Integer create_report__NumStatic_20;
#line 883 "create_report.m"
        MR_Word create_report__CallersSummaryRowData_21;
#line 883 "create_report.m"
        MR_Word create_report__ProcReport_22;
#line 883 "create_report.m"
        MR_Word create_report__V_23_23;
#line 883 "create_report.m"
        MR_Word create_report__V_24_24;
#line 883 "create_report.m"
        MR_Word create_report__V_26_26;
#line 883 "create_report.m"
        MR_Word create_report__V_27_27;
#line 883 "create_report.m"
        MR_Word create_report__V_28_28;
#line 883 "create_report.m"
        MR_Word create_report__V_53_53;
#line 883 "create_report.m"
        MR_Word create_report__V_59_59;
#line 890 "create_report.m"
        MR_Word create_report__V_30_30;
#line 890 "create_report.m"
        MR_String create_report__V_31_31;
#line 890 "create_report.m"
        MR_String create_report__V_32_32;
#line 890 "create_report.m"
        MR_String create_report__V_33_33;
#line 890 "create_report.m"
        MR_String create_report__V_34_34;
#line 890 "create_report.m"
        MR_String create_report__V_35_35;
#line 890 "create_report.m"
        MR_Integer create_report__V_36_36;
#line 890 "create_report.m"
        MR_Word create_report__V_37_37;
#line 890 "create_report.m"
        MR_ArrayPtr create_report__V_38_38;
#line 890 "create_report.m"
        MR_Word create_report__V_39_39;
#line 890 "create_report.m"
        MR_Word create_report__V_40_40;

#line 883 "create_report.m"
        {
#line 883 "create_report.m"
          create_report__ProcDesc_7 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__PSPtr_5);
        }
#line 884 "create_report.m"
        {
#line 884 "create_report.m"
          profile__deep_lookup_ps_own_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Own_8);
        }
#line 885 "create_report.m"
        {
#line 885 "create_report.m"
          profile__deep_lookup_ps_desc_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Desc_9);
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_53_53, 0) = ((MR_Box) (create_report__Desc_9));
#line 1524 "create_report.m"
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__ProcDesc_7)), create_report__Own_8, create_report__V_53_53, &create_report__ProcSummaryRowData_10);
        }
#line 889 "create_report.m"
        {
#line 889 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__PS_11);
        }
#line 890 "create_report.m"
        create_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 0)));
#line 890 "create_report.m"
        create_report__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 1)));
#line 890 "create_report.m"
        create_report__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 2)));
#line 890 "create_report.m"
        create_report__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 3)));
#line 890 "create_report.m"
        create_report__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 4)));
#line 890 "create_report.m"
        create_report__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 5)));
#line 890 "create_report.m"
        create_report__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 6)));
#line 890 "create_report.m"
        create_report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 7)));
#line 890 "create_report.m"
        create_report__CallSitesArray_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 8)));
#line 890 "create_report.m"
        create_report__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 9)));
#line 890 "create_report.m"
        create_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 10)));
#line 890 "create_report.m"
        create_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 11)));
#line 14919 "create_report.c"
        create_report__TypeCtorInfo_42_42 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
#line 891 "create_report.m"
        {
#line 891 "create_report.m"
          mercury__array__to_list_2_p_0(create_report__TypeCtorInfo_42_42, (MR_ArrayPtr) create_report__CallSitesArray_12, &create_report__CallSites_13);
        }
#line 892 "create_report.m"
        {
#line 892 "create_report.m"
          create_report__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 892 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_23_23, 0) = ((MR_Box) (&create_report_scalar_common_4[0]));
#line 892 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_23_23, 1) = ((MR_Box) (create_report__create_proc_report_3_p_0_1));
#line 892 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 892 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_23_23, 3) = ((MR_Box) (create_report__Deep_4));
#line 892 "create_report.m"
        }
#line 892 "create_report.m"
        {
#line 892 "create_report.m"
          create_report__ProcCallSiteSummaryRowDatas_14 = mercury__list__map_2_f_0(create_report__TypeCtorInfo_42_42, (MR_Word) &report__report__type_ctor_info_call_site_perf_0, create_report__V_23_23, create_report__CallSites_13);
        }
#line 895 "create_report.m"
        {
#line 895 "create_report.m"
          profile__deep_lookup_proc_callers_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__CallerCSDPtrs0_15);
        }
#line 14950 "create_report.c"
        create_report__TypeCtorInfo_46_46 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
#line 896 "create_report.m"
        {
#line 896 "create_report.m"
          create_report__V_24_24 = mercury__set__init_0_f_0(create_report__TypeCtorInfo_46_46);
        }
#line 896 "create_report.m"
        {
#line 896 "create_report.m"
          create_report__V_26_26 = measurements__zero_own_prof_info_0_f_0();
        }
#line 896 "create_report.m"
        {
#line 896 "create_report.m"
          create_report__V_27_27 = measurements__zero_inherit_prof_info_0_f_0();
        }
#line 896 "create_report.m"
        {
#line 896 "create_report.m"
          create_report__summarize_callers_11_p_0(create_report__Deep_4, create_report__CallerCSDPtrs0_15, create_report__PSPtr_5, create_report__V_24_24, &create_report__SeenProcs_16, (MR_Integer) 0, &create_report__NumDynamic_17, create_report__V_26_26, &create_report__CallersOwn_18, create_report__V_27_27, &create_report__CallersInherit_19);
        }
#line 899 "create_report.m"
        {
#line 899 "create_report.m"
          create_report__NumStatic_20 = mercury__set__count_1_f_0(create_report__TypeCtorInfo_46_46, create_report__SeenProcs_16);
        }
#line 900 "create_report.m"
        {
#line 900 "create_report.m"
          create_report__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 900 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_28_28, 0) = ((MR_Box) (create_report__NumStatic_20));
#line 900 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_28_28, 1) = ((MR_Box) (create_report__NumDynamic_17));
#line 900 "create_report.m"
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1524 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_59_59, 0) = ((MR_Box) (create_report__CallersInherit_19));
#line 1524 "create_report.m"
        }
#line 1524 "create_report.m"
        {
#line 1524 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__V_28_28)), create_report__CallersOwn_18, create_report__V_59_59, &create_report__CallersSummaryRowData_21);
        }
#line 904 "create_report.m"
        {
#line 904 "create_report.m"
          create_report__ProcReport_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 904 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcReport_22, 0) = ((MR_Box) (create_report__CallersSummaryRowData_21));
#line 904 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcReport_22, 1) = ((MR_Box) (create_report__ProcSummaryRowData_10));
#line 904 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcReport_22, 2) = ((MR_Box) (create_report__ProcCallSiteSummaryRowDatas_14));
#line 904 "create_report.m"
        }
#line 906 "create_report.m"
        {
#line 906 "create_report.m"
          MR_Word base;
#line 906 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 906 "create_report.m"
          *create_report__MaybeProcReport_6 = base;
#line 906 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcReport_22));
#line 906 "create_report.m"
        }
#line 883 "create_report.m"
      }
#line 907 "create_report.m"
    else
#line 908 "create_report.m"
      {
#line 908 "create_report.m"
        *create_report__MaybeProcReport_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_5[0]);
#line 908 "create_report.m"
      }
#line 907 "create_report.m"
  }
#line 40 "create_report.m"
}

#line 1416 "create_report.m"
static void MR_CALL 
create_report__create_call_site_dynamic_var_use_report_3_p_0_1(
#line 1416 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1416 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1416 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 1416 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 1416 "create_report.m"
  MR_Box * create_report__wrapper_arg_4)
#line 1416 "create_report.m"
{
#line 1416 "create_report.m"
  {
#line 1416 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1416 "create_report.m"
    MR_Word create_report__conv1_MaybeUseAndName_16;
#line 1416 "create_report.m"
    MR_Integer create_report__conv0_STATE_VARIABLE_ArgNum_27;

#line 1416 "create_report.m"
    {
#line 1416 "create_report.m"
      create_report__call_site_dynamic_var_use_arg_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 5))), MR_unbox_float((MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 7))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv1_MaybeUseAndName_16, ((MR_Integer) create_report__wrapper_arg_3), &create_report__conv0_STATE_VARIABLE_ArgNum_27);
    }
#line 1416 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv1_MaybeUseAndName_16));
#line 1416 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ArgNum_27));
#line 1416 "create_report.m"
  }
#line 1416 "create_report.m"
}

#line 34 "create_report.m"
void MR_CALL 
create_report__create_call_site_dynamic_var_use_report_3_p_0(
#line 34 "create_report.m"
  MR_Word create_report__Deep_4,
#line 34 "create_report.m"
  MR_Word create_report__CSDPtr_5,
#line 34 "create_report.m"
  MR_Word * create_report__MaybeVarUseInfo_6)
#line 34 "create_report.m"
{
#line 1441 "create_report.m"
  {
#line 1441 "create_report.m"
    MR_bool create_report__succeeded;

#line 1387 "create_report.m"
    {
#line 1387 "create_report.m"
      create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__CSDPtr_5);
    }
#line 1441 "create_report.m"
    if (create_report__succeeded)
#line 1388 "create_report.m"
      {
#line 1388 "create_report.m"
        MR_Word create_report__CSD_7;
#line 1388 "create_report.m"
        MR_Word create_report__CalleePDPtr_8;
#line 1388 "create_report.m"
        MR_Word create_report__CallerPDPtr_9;
#line 1388 "create_report.m"
        MR_Word create_report__CalleePD_10;
#line 1388 "create_report.m"
        MR_Word create_report__CalleePSPtr_11;
#line 1388 "create_report.m"
        MR_Word create_report__MaybeProcrep_12;
#line 1389 "create_report.m"
        MR_Word create_report__V_49_49;
#line 1392 "create_report.m"
        MR_ArrayPtr create_report__V_52_52;
#line 1392 "create_report.m"
        MR_Word create_report__V_53_53;

#line 1388 "create_report.m"
        {
#line 1388 "create_report.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__CSD_7);
        }
#line 1389 "create_report.m"
        create_report__CallerPDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 0)));
#line 1389 "create_report.m"
        create_report__CalleePDPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 1)));
#line 1389 "create_report.m"
        create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 2)));
#line 1391 "create_report.m"
        {
#line 1391 "create_report.m"
          profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__CalleePDPtr_8, &create_report__CalleePD_10);
        }
#line 1392 "create_report.m"
        create_report__CalleePSPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePD_10, (MR_Integer) 0)));
#line 1392 "create_report.m"
        create_report__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__CalleePD_10, (MR_Integer) 1)));
#line 1392 "create_report.m"
        create_report__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePD_10, (MR_Integer) 2)));
#line 1393 "create_report.m"
        {
#line 1393 "create_report.m"
          analysis_utils__deep_get_maybe_procrep_3_p_0(create_report__Deep_4, create_report__CalleePSPtr_11, &create_report__MaybeProcrep_12);
        }
#line 1437 "create_report.m"
        if (((MR_tag((MR_Word) create_report__MaybeProcrep_12)) == (MR_mktag((MR_Integer) 1))))
#line 1439 "create_report.m"
          *create_report__MaybeVarUseInfo_6 = (MR_Word) create_report__MaybeProcrep_12;
#line 1437 "create_report.m"
        else
#line 1395 "create_report.m"
          {
#line 1395 "create_report.m"
            MR_Word create_report__Procrep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeProcrep_12, (MR_Integer) 0)));
#line 1395 "create_report.m"
            MR_Word create_report__HeadVars_14;
#line 1395 "create_report.m"
            MR_Word create_report__VarNameTable_15;
#line 1395 "create_report.m"
            MR_Word create_report__ParentCliquePtr_16;
#line 1395 "create_report.m"
            MR_Word create_report__CalleeCliquePtr_17;
#line 1395 "create_report.m"
            MR_Word create_report__MaybeRecursiveCostsReport_18;
#line 1395 "create_report.m"
            MR_Word create_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Procrep_13, (MR_Integer) 1)));
#line 1396 "create_report.m"
            MR_Word create_report__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Procrep_13, (MR_Integer) 0)));
#line 1396 "create_report.m"
            MR_Word create_report__V_55_55;
#line 1396 "create_report.m"
            MR_Word create_report__V_57_57;
#line 1396 "create_report.m"
            MR_Word create_report__V_58_58;

#line 1396 "create_report.m"
            create_report__HeadVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_33_33, (MR_Integer) 0)));
#line 1396 "create_report.m"
            create_report__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_33_33, (MR_Integer) 1)));
#line 1396 "create_report.m"
            create_report__VarNameTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_33_33, (MR_Integer) 2)));
#line 1396 "create_report.m"
            create_report__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_33_33, (MR_Integer) 3)));
#line 1396 "create_report.m"
            create_report__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_33_33, (MR_Integer) 4)));
#line 1398 "create_report.m"
            {
#line 1398 "create_report.m"
              profile__deep_lookup_clique_index_3_p_0(create_report__Deep_4, create_report__CallerPDPtr_9, &create_report__ParentCliquePtr_16);
            }
#line 1399 "create_report.m"
            {
#line 1399 "create_report.m"
              profile__deep_lookup_clique_index_3_p_0(create_report__Deep_4, create_report__CalleePDPtr_8, &create_report__CalleeCliquePtr_17);
            }
#line 1400 "create_report.m"
            {
#line 1400 "create_report.m"
              recursion_patterns__create_clique_recursion_costs_report_3_p_0(create_report__Deep_4, create_report__ParentCliquePtr_16, &create_report__MaybeRecursiveCostsReport_18);
            }
#line 1433 "create_report.m"
            if (((MR_tag((MR_Word) create_report__MaybeRecursiveCostsReport_18)) == (MR_mktag((MR_Integer) 1))))
#line 1435 "create_report.m"
              *create_report__MaybeVarUseInfo_6 = (MR_Word) create_report__MaybeRecursiveCostsReport_18;
#line 1433 "create_report.m"
            else
#line 1403 "create_report.m"
              {
#line 1403 "create_report.m"
                MR_Word create_report__RecursiveCostsReport_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeRecursiveCostsReport_18, (MR_Integer) 0)));
#line 1403 "create_report.m"
                MR_Word create_report__RecursionType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RecursiveCostsReport_19, (MR_Integer) 1)));
#line 1403 "create_report.m"
                MR_Word create_report__MaybeCost_21;
#line 1404 "create_report.m"
                MR_Word create_report__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RecursiveCostsReport_19, (MR_Integer) 0)));
#line 1404 "create_report.m"
                MR_Integer create_report__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RecursiveCostsReport_19, (MR_Integer) 2)));
#line 1405 "create_report.m"
                MR_Integer create_report__V_77_77 = (MR_Integer) create_report__ParentCliquePtr_16;
#line 1405 "create_report.m"
                MR_Integer create_report__V_78_78 = (MR_Integer) create_report__CalleeCliquePtr_17;

#line 1405 "create_report.m"
                create_report__succeeded = (create_report__V_77_77 == create_report__V_78_78);
#line 1408 "create_report.m"
                if (create_report__succeeded)
#line 1406 "create_report.m"
                  {
#line 1406 "create_report.m"
                    create_report__get_recursive_csd_cost_4_p_0(create_report__Deep_4, create_report__CSDPtr_5, create_report__RecursionType_20, &create_report__MaybeCost_21);
                  }
#line 1408 "create_report.m"
                else
#line 1409 "create_report.m"
                  {
#line 1409 "create_report.m"
                    MR_Word create_report__Desc_22;
#line 1409 "create_report.m"
                    MR_Word create_report__Own_23;
#line 1409 "create_report.m"
                    MR_Integer create_report__Cost0_24;
#line 1409 "create_report.m"
                    MR_Integer create_report__V_35_35;
#line 1409 "create_report.m"
                    MR_Integer create_report__V_36_36;
#line 1409 "create_report.m"
                    MR_Float create_report__V_37_37;

#line 1409 "create_report.m"
                    {
#line 1409 "create_report.m"
                      profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__Desc_22);
                    }
#line 1410 "create_report.m"
                    {
#line 1410 "create_report.m"
                      profile__deep_lookup_csd_own_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__Own_23);
                    }
#line 1411 "create_report.m"
                    {
#line 1411 "create_report.m"
                      create_report__V_35_35 = measurements__callseqs_1_f_0(create_report__Own_23);
                    }
#line 1411 "create_report.m"
                    {
#line 1411 "create_report.m"
                      create_report__V_36_36 = measurements__inherit_callseqs_1_f_0(create_report__Desc_22);
                    }
#line 1411 "create_report.m"
                    create_report__Cost0_24 = (create_report__V_35_35 + create_report__V_36_36);
#line 1412 "create_report.m"
                    {
#line 1412 "create_report.m"
                      create_report__V_37_37 = mercury__float__float_1_f_0(create_report__Cost0_24);
                    }
#line 1412 "create_report.m"
                    {
#line 1412 "create_report.m"
                      create_report__MaybeCost_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1412 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__MaybeCost_21, 0) = MR_box_float(create_report__V_37_37);
#line 1412 "create_report.m"
                    }
#line 1409 "create_report.m"
                  }
#line 1429 "create_report.m"
                if (((MR_tag((MR_Word) create_report__MaybeCost_21)) == (MR_mktag((MR_Integer) 1))))
#line 1431 "create_report.m"
                  *create_report__MaybeVarUseInfo_6 = (MR_Word) create_report__MaybeCost_21;
#line 1429 "create_report.m"
                else
#line 1415 "create_report.m"
                  {
#line 1415 "create_report.m"
                    MR_Float create_report__Cost_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), create_report__MaybeCost_21, (MR_Integer) 0)));
#line 1415 "create_report.m"
                    MR_Word create_report__Uses0_26;
#line 1415 "create_report.m"
                    MR_Word create_report__MaybeUses_28;
#line 1415 "create_report.m"
                    MR_Word create_report__V_38_38;
#line 1416 "create_report.m"
                    MR_Integer create_report__V_27_27;
#line 1416 "create_report.m"
                    MR_Box create_report__conv2_V_27_27;

#line 1416 "create_report.m"
                    {
#line 1416 "create_report.m"
                      create_report__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1416 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 0) = ((MR_Box) (&create_report_scalar_common_3[0]));
#line 1416 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 1) = ((MR_Box) (create_report__create_call_site_dynamic_var_use_report_3_p_0_1));
#line 1416 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1416 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 3) = ((MR_Box) (create_report__Deep_4));
#line 1416 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 4) = ((MR_Box) (create_report__CSDPtr_5));
#line 1416 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 5) = ((MR_Box) (create_report__RecursionType_20));
#line 1416 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 6) = MR_box_float(create_report__Cost_25);
#line 1416 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 7) = ((MR_Box) (create_report__VarNameTable_15));
#line 1416 "create_report.m"
                    }
#line 1416 "create_report.m"
                    {
#line 1416 "create_report.m"
                      mercury__list__map_foldl_5_p_1((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &create_report_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, create_report__V_38_38, create_report__HeadVars_14, &create_report__Uses0_26, ((MR_Box) ((MR_Integer) 0)), &create_report__conv2_V_27_27);
                    }
#line 1416 "create_report.m"
                    create_report__V_27_27 = ((MR_Integer) create_report__conv2_V_27_27);
#line 1419 "create_report.m"
                    {
#line 1419 "create_report.m"
                      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(create_report__Uses0_26, &create_report__MaybeUses_28);
                    }
#line 1425 "create_report.m"
                    if (((MR_tag((MR_Word) create_report__MaybeUses_28)) == (MR_mktag((MR_Integer) 1))))
#line 1427 "create_report.m"
                      *create_report__MaybeVarUseInfo_6 = (MR_Word) create_report__MaybeUses_28;
#line 1425 "create_report.m"
                    else
#line 1421 "create_report.m"
                      {
#line 1421 "create_report.m"
                        MR_Word create_report__Uses_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeUses_28, (MR_Integer) 0)));
#line 1421 "create_report.m"
                        MR_Word create_report__VarUseInfo_30;

#line 1422 "create_report.m"
                        {
#line 1422 "create_report.m"
                          create_report__VarUseInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1422 "create_report.m"
                          MR_hl_field(MR_mktag(0), create_report__VarUseInfo_30, 0) = MR_box_float(create_report__Cost_25);
#line 1422 "create_report.m"
                          MR_hl_field(MR_mktag(0), create_report__VarUseInfo_30, 1) = ((MR_Box) (create_report__Uses_29));
#line 1422 "create_report.m"
                        }
#line 1424 "create_report.m"
                        {
#line 1424 "create_report.m"
                          MR_Word base;
#line 1424 "create_report.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1424 "create_report.m"
                          *create_report__MaybeVarUseInfo_6 = base;
#line 1424 "create_report.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__VarUseInfo_30));
#line 1424 "create_report.m"
                        }
#line 1421 "create_report.m"
                      }
#line 1415 "create_report.m"
                  }
#line 1403 "create_report.m"
              }
#line 1395 "create_report.m"
          }
#line 1388 "create_report.m"
      }
#line 1441 "create_report.m"
    else
#line 1442 "create_report.m"
      {
#line 1442 "create_report.m"
        MR_Integer create_report__CSDNum_32 = (MR_Integer) create_report__CSDPtr_5;
#line 1442 "create_report.m"
        MR_String create_report__V_40_40;
#line 1442 "create_report.m"
        MR_String create_report__V_74_74;

#line 15401 "create_report.c"
        {
#line 15403 "create_report.c"
          create_report__V_74_74 = mercury__string__int_to_string_1_f_0(create_report__CSDNum_32);
        }
#line 15406 "create_report.c"
        {
#line 15408 "create_report.c"
          create_report__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid call site dynamic ", create_report__V_74_74);
        }
#line 1443 "create_report.m"
        {
#line 1443 "create_report.m"
          MR_Word base;
#line 1443 "create_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1443 "create_report.m"
          *create_report__MaybeVarUseInfo_6 = base;
#line 1443 "create_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__V_40_40));
#line 1443 "create_report.m"
        }
#line 1442 "create_report.m"
      }
#line 1441 "create_report.m"
  }
#line 34 "create_report.m"
}

#line 28 "create_report.m"
void MR_CALL 
create_report__create_report_3_p_0(
#line 28 "create_report.m"
  MR_Word create_report__Cmd_4,
#line 28 "create_report.m"
  MR_Word create_report__Deep_5,
#line 28 "create_report.m"
  MR_Word * create_report__Report_6)
#line 28 "create_report.m"
{
#line 114 "create_report.m"
  {
#line 114 "create_report.m"
    MR_bool create_report__succeeded;

#line 114 "create_report.m"
    if ((create_report__Cmd_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 125 "create_report.m"
      {
#line 125 "create_report.m"
        MR_String create_report__ProgramName_10;
#line 125 "create_report.m"
        MR_Integer create_report__NumCSD_11;
#line 125 "create_report.m"
        MR_Integer create_report__NumCSS_12;
#line 125 "create_report.m"
        MR_Integer create_report__NumPD_13;
#line 125 "create_report.m"
        MR_Integer create_report__NumPS_14;
#line 125 "create_report.m"
        MR_Integer create_report__QuantaPerSec_15;
#line 125 "create_report.m"
        MR_Integer create_report__InstrumentationQuanta_16;
#line 125 "create_report.m"
        MR_Integer create_report__UserQuanta_17;
#line 125 "create_report.m"
        MR_Integer create_report__NumCallseqs_18;
#line 125 "create_report.m"
        MR_Integer create_report__NumCliques_20;
#line 125 "create_report.m"
        MR_Word create_report__MenuReport_21;
#line 125 "create_report.m"
        MR_Word create_report__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 0)));
#line 125 "create_report.m"
        MR_Word create_report__V_58_58;
#line 125 "create_report.m"
        MR_ArrayPtr create_report__V_118_118 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 10)));
#line 126 "create_report.m"
        MR_String create_report__V_109_109 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 1)));
#line 126 "create_report.m"
        MR_String create_report__V_110_110 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 2)));
#line 126 "create_report.m"
        MR_String create_report__V_111_111 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 3)));
#line 126 "create_report.m"
        MR_Word create_report__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 4)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_113_113 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 5)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_114_114 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 6)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_115_115 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 7)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_116_116 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 8)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_117_117 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 9)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_119_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 11)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_120_120 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 12)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_121_121 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 13)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_122_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 14)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_123_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 15)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_124_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 16)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_125_125 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 17)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_126_126 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 18)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_127_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 19)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_128_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 20)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_129_129 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 21)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_130_130 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 22)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_131_131 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 23)));
#line 126 "create_report.m"
        MR_ArrayPtr create_report__V_132_132 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 24)));
#line 126 "create_report.m"
        MR_Word create_report__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 25)));
#line 126 "create_report.m"
        MR_Word create_report__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 26)));
#line 126 "create_report.m"
        MR_Word create_report__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 27)));
#line 126 "create_report.m"
        MR_Word create_report__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 28)));
#line 126 "create_report.m"
        MR_Word create_report__V_19_19;

#line 126 "create_report.m"
        create_report__ProgramName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__V_56_56, (MR_Integer) 0)));
#line 126 "create_report.m"
        create_report__NumCSD_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__V_56_56, (MR_Integer) 1)));
#line 126 "create_report.m"
        create_report__NumCSS_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__V_56_56, (MR_Integer) 2)));
#line 126 "create_report.m"
        create_report__NumPD_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__V_56_56, (MR_Integer) 3)));
#line 126 "create_report.m"
        create_report__NumPS_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__V_56_56, (MR_Integer) 4)));
#line 126 "create_report.m"
        create_report__QuantaPerSec_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__V_56_56, (MR_Integer) 5)));
#line 126 "create_report.m"
        create_report__InstrumentationQuanta_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__V_56_56, (MR_Integer) 6)));
#line 126 "create_report.m"
        create_report__UserQuanta_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__V_56_56, (MR_Integer) 7)));
#line 126 "create_report.m"
        create_report__NumCallseqs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__V_56_56, (MR_Integer) 8)));
#line 126 "create_report.m"
        create_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_56_56, (MR_Integer) 9)));
#line 129 "create_report.m"
        {
#line 129 "create_report.m"
          create_report__NumCliques_20 = mercury__array__max_1_f_0((MR_Word) &create_report_scalar_common_1[0], (MR_ArrayPtr) create_report__V_118_118);
        }
#line 130 "create_report.m"
        {
#line 130 "create_report.m"
          create_report__MenuReport_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 130 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 0) = ((MR_Box) (create_report__ProgramName_10));
#line 130 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 1) = ((MR_Box) (create_report__QuantaPerSec_15));
#line 130 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 2) = ((MR_Box) (create_report__UserQuanta_17));
#line 130 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 3) = ((MR_Box) (create_report__InstrumentationQuanta_16));
#line 130 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 4) = ((MR_Box) (create_report__NumCallseqs_18));
#line 130 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 5) = ((MR_Box) (create_report__NumCSD_11));
#line 130 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 6) = ((MR_Box) (create_report__NumCSS_12));
#line 130 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 7) = ((MR_Box) (create_report__NumPD_13));
#line 130 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 8) = ((MR_Box) (create_report__NumPS_14));
#line 130 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 9) = ((MR_Box) (create_report__NumCliques_20));
#line 130 "create_report.m"
        }
#line 133 "create_report.m"
        {
#line 133 "create_report.m"
          create_report__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 133 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_58_58, 0) = ((MR_Box) (create_report__MenuReport_21));
#line 133 "create_report.m"
        }
#line 133 "create_report.m"
        {
#line 133 "create_report.m"
          MR_Word base;
#line 133 "create_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 133 "create_report.m"
          *create_report__Report_6 = base;
#line 133 "create_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__V_58_58));
#line 133 "create_report.m"
        }
#line 125 "create_report.m"
      }
#line 114 "create_report.m"
    else
#line 114 "create_report.m"
      if ((create_report__Cmd_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 152 "create_report.m"
        {
#line 152 "create_report.m"
          MR_Word create_report__MaybeProgramModulesReport_27;

#line 153 "create_report.m"
          {
#line 153 "create_report.m"
            create_report__create_program_modules_report_2_p_0(create_report__Deep_5, &create_report__MaybeProgramModulesReport_27);
          }
#line 154 "create_report.m"
          {
#line 154 "create_report.m"
            MR_Word base;
#line 154 "create_report.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "create_report.m"
            *create_report__Report_6 = base;
#line 154 "create_report.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 154 "create_report.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProgramModulesReport_27));
#line 154 "create_report.m"
          }
#line 152 "create_report.m"
        }
#line 114 "create_report.m"
      else
#line 114 "create_report.m"
        if ((create_report__Cmd_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 114 "create_report.m"
          {
#line 114 "create_report.m"
            MR_String create_report__Msg_7;
#line 114 "create_report.m"
            MR_Word create_report__MessageReport_8;
#line 114 "create_report.m"
            MR_String create_report__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 3)));
#line 114 "create_report.m"
            MR_String create_report__V_168_168;
#line 116 "create_report.m"
            MR_Word create_report__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 0)));
#line 116 "create_report.m"
            MR_String create_report__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 1)));
#line 116 "create_report.m"
            MR_String create_report__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 2)));
#line 116 "create_report.m"
            MR_Word create_report__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 4)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_85_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 5)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_86_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 6)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_87_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 7)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_88_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 8)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_89_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 9)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_90_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 10)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_91_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 11)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_92_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 12)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_93_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 13)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 14)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 15)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 16)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 17)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_98_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 18)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_99_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 19)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_100_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 20)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_101_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 21)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_102_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 22)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_103_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 23)));
#line 116 "create_report.m"
            MR_ArrayPtr create_report__V_104_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 24)));
#line 116 "create_report.m"
            MR_Word create_report__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 25)));
#line 116 "create_report.m"
            MR_Word create_report__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 26)));
#line 116 "create_report.m"
            MR_Word create_report__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 27)));
#line 116 "create_report.m"
            MR_Word create_report__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 28)));

#line 15709 "create_report.c"
            {
#line 15711 "create_report.c"
              create_report__V_168_168 = mercury__string__f_43_43_2_f_0(create_report__V_66_66, (MR_String) ".");
            }
#line 15714 "create_report.c"
            {
#line 15716 "create_report.c"
              create_report__Msg_7 = mercury__string__f_43_43_2_f_0((MR_String) "Shutting down deep profile server for ", create_report__V_168_168);
            }
#line 117 "create_report.m"
            create_report__MessageReport_8 = (MR_Word) create_report__Msg_7;
#line 118 "create_report.m"
            {
#line 118 "create_report.m"
              MR_Word base;
#line 118 "create_report.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 118 "create_report.m"
              *create_report__Report_6 = base;
#line 118 "create_report.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__MessageReport_8));
#line 118 "create_report.m"
            }
#line 114 "create_report.m"
          }
#line 114 "create_report.m"
        else
#line 114 "create_report.m"
          if ((create_report__Cmd_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 148 "create_report.m"
            {
#line 148 "create_report.m"
              MR_Word create_report__MaybeRecTypesFreqReport_26;

#line 149 "create_report.m"
              {
#line 149 "create_report.m"
                recursion_patterns__create_recursion_types_frequency_report_2_p_0(create_report__Deep_5, &create_report__MaybeRecTypesFreqReport_26);
              }
#line 150 "create_report.m"
              {
#line 150 "create_report.m"
                MR_Word base;
#line 150 "create_report.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "create_report.m"
                *create_report__Report_6 = base;
#line 150 "create_report.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 150 "create_report.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeRecTypesFreqReport_26));
#line 150 "create_report.m"
              }
#line 148 "create_report.m"
            }
#line 114 "create_report.m"
          else
#line 114 "create_report.m"
            if ((create_report__Cmd_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 222 "create_report.m"
              {
#line 223 "create_report.m"
                {
#line 223 "create_report.m"
                  mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_report\'/3", (MR_String) "restart command");
#line 223 "create_report.m"
                  return;
                }
#line 222 "create_report.m"
              }
#line 114 "create_report.m"
            else
#line 114 "create_report.m"
              if (((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 2))))
#line 135 "create_report.m"
                {
#line 135 "create_report.m"
                  MR_Word create_report__MaybePercent_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__Cmd_4, (MR_Integer) 0)));
#line 135 "create_report.m"
                  MR_Word create_report__MaybeCliqueReport_23;

#line 136 "create_report.m"
                  {
#line 136 "create_report.m"
                    create_report__create_root_report_3_p_0(create_report__Deep_5, create_report__MaybePercent_22, &create_report__MaybeCliqueReport_23);
                  }
#line 137 "create_report.m"
                  {
#line 137 "create_report.m"
                    MR_Word base;
#line 137 "create_report.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 137 "create_report.m"
                    *create_report__Report_6 = base;
#line 137 "create_report.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (create_report__MaybeCliqueReport_23));
#line 137 "create_report.m"
                  }
#line 135 "create_report.m"
                }
#line 114 "create_report.m"
              else
#line 114 "create_report.m"
                if (((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 1))))
#line 120 "create_report.m"
                  {
#line 120 "create_report.m"
                    MR_Integer create_report__Timeout_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), create_report__Cmd_4, (MR_Integer) 0)));
#line 120 "create_report.m"
                    MR_String create_report__Msg_68;
#line 120 "create_report.m"
                    MR_Word create_report__MessageReport_69;
#line 120 "create_report.m"
                    MR_String create_report__V_171_171;
#line 120 "create_report.m"
                    MR_String create_report__V_172_172;

#line 15827 "create_report.c"
                    {
#line 15829 "create_report.c"
                      create_report__V_171_171 = mercury__string__int_to_string_1_f_0(create_report__Timeout_9);
                    }
#line 15832 "create_report.c"
                    {
#line 15834 "create_report.c"
                      create_report__V_172_172 = mercury__string__f_43_43_2_f_0(create_report__V_171_171, (MR_String) " minutes.");
                    }
#line 15837 "create_report.c"
                    {
#line 15839 "create_report.c"
                      create_report__Msg_68 = mercury__string__f_43_43_2_f_0((MR_String) "Timeout set to ", create_report__V_172_172);
                    }
#line 122 "create_report.m"
                    create_report__MessageReport_69 = (MR_Word) create_report__Msg_68;
#line 123 "create_report.m"
                    {
#line 123 "create_report.m"
                      MR_Word base;
#line 123 "create_report.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 123 "create_report.m"
                      *create_report__Report_6 = base;
#line 123 "create_report.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__MessageReport_69));
#line 123 "create_report.m"
                    }
#line 120 "create_report.m"
                  }
#line 114 "create_report.m"
                else
#line 114 "create_report.m"
                  if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 217 "create_report.m"
                    {
#line 217 "create_report.m"
                      MR_Word create_report__MaybeVarUse_52;
#line 217 "create_report.m"
                      MR_Word create_report__CSDPtr_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

#line 218 "create_report.m"
                      {
#line 218 "create_report.m"
                        create_report__create_call_site_dynamic_var_use_report_3_p_0(create_report__Deep_5, create_report__CSDPtr_80, &create_report__MaybeVarUse_52);
                      }
#line 220 "create_report.m"
                      {
#line 220 "create_report.m"
                        MR_Word base;
#line 220 "create_report.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "create_report.m"
                        *create_report__Report_6 = base;
#line 220 "create_report.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 220 "create_report.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeVarUse_52));
#line 220 "create_report.m"
                      }
#line 217 "create_report.m"
                    }
#line 114 "create_report.m"
                  else
#line 114 "create_report.m"
                    if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 139 "create_report.m"
                      {
#line 139 "create_report.m"
                        MR_Word create_report__CliquePtr_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
#line 139 "create_report.m"
                        MR_Word create_report__MaybeCliqueReport_70;

#line 140 "create_report.m"
                        {
#line 140 "create_report.m"
                          create_report__create_clique_report_3_p_0(create_report__Deep_5, create_report__CliquePtr_24, &create_report__MaybeCliqueReport_70);
                        }
#line 141 "create_report.m"
                        {
#line 141 "create_report.m"
                          MR_Word base;
#line 141 "create_report.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 141 "create_report.m"
                          *create_report__Report_6 = base;
#line 141 "create_report.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (create_report__MaybeCliqueReport_70));
#line 141 "create_report.m"
                        }
#line 139 "create_report.m"
                      }
#line 114 "create_report.m"
                    else
#line 114 "create_report.m"
                      if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 143 "create_report.m"
                        {
#line 143 "create_report.m"
                          MR_Word create_report__MaybeCliqueRecursionReport_25;
#line 143 "create_report.m"
                          MR_Word create_report__CliquePtr_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

#line 144 "create_report.m"
                          {
#line 144 "create_report.m"
                            recursion_patterns__create_clique_recursion_costs_report_3_p_0(create_report__Deep_5, create_report__CliquePtr_71, &create_report__MaybeCliqueRecursionReport_25);
                          }
#line 146 "create_report.m"
                          {
#line 146 "create_report.m"
                            MR_Word base;
#line 146 "create_report.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "create_report.m"
                            *create_report__Report_6 = base;
#line 146 "create_report.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 146 "create_report.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeCliqueRecursionReport_25));
#line 146 "create_report.m"
                          }
#line 143 "create_report.m"
                        }
#line 114 "create_report.m"
                      else
#line 114 "create_report.m"
                        if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 208 "create_report.m"
                          {
#line 208 "create_report.m"
                            MR_Word create_report__CSDPtr_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
#line 208 "create_report.m"
                            MR_Word create_report__MaybeCallSiteStaticDump_78;

#line 209 "create_report.m"
                            {
#line 209 "create_report.m"
                              create_report__create_call_site_dynamic_dump_report_3_p_0(create_report__Deep_5, create_report__CSDPtr_50, &create_report__MaybeCallSiteStaticDump_78);
                            }
#line 211 "create_report.m"
                            {
#line 211 "create_report.m"
                              MR_Word base;
#line 211 "create_report.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "create_report.m"
                              *create_report__Report_6 = base;
#line 211 "create_report.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 211 "create_report.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeCallSiteStaticDump_78));
#line 211 "create_report.m"
                            }
#line 208 "create_report.m"
                          }
#line 114 "create_report.m"
                        else
#line 114 "create_report.m"
                          if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 203 "create_report.m"
                            {
#line 203 "create_report.m"
                              MR_Word create_report__CSSPtr_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
#line 203 "create_report.m"
                              MR_Word create_report__MaybeCallSiteStaticDump_49;

#line 204 "create_report.m"
                              {
#line 204 "create_report.m"
                                create_report__create_call_site_static_dump_report_3_p_0(create_report__Deep_5, create_report__CSSPtr_48, &create_report__MaybeCallSiteStaticDump_49);
                              }
#line 206 "create_report.m"
                              {
#line 206 "create_report.m"
                                MR_Word base;
#line 206 "create_report.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "create_report.m"
                                *create_report__Report_6 = base;
#line 206 "create_report.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 206 "create_report.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeCallSiteStaticDump_49));
#line 206 "create_report.m"
                              }
#line 203 "create_report.m"
                            }
#line 114 "create_report.m"
                          else
#line 114 "create_report.m"
                            if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 213 "create_report.m"
                              {
#line 213 "create_report.m"
                                MR_Word create_report__MaybeCliqueDump_51;
#line 213 "create_report.m"
                                MR_Word create_report__CliquePtr_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

#line 214 "create_report.m"
                                {
#line 214 "create_report.m"
                                  create_report__create_clique_dump_report_3_p_0(create_report__Deep_5, create_report__CliquePtr_79, &create_report__MaybeCliqueDump_51);
                                }
#line 215 "create_report.m"
                                {
#line 215 "create_report.m"
                                  MR_Word base;
#line 215 "create_report.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "create_report.m"
                                  *create_report__Report_6 = base;
#line 215 "create_report.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 215 "create_report.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeCliqueDump_51));
#line 215 "create_report.m"
                                }
#line 213 "create_report.m"
                              }
#line 114 "create_report.m"
                            else
#line 114 "create_report.m"
                              if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 199 "create_report.m"
                                {
#line 199 "create_report.m"
                                  MR_Word create_report__MaybeProcDynamicDump_47;
#line 199 "create_report.m"
                                  MR_Word create_report__PDPtr_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

#line 200 "create_report.m"
                                  {
#line 200 "create_report.m"
                                    create_report__create_proc_dynamic_dump_report_3_p_0(create_report__Deep_5, create_report__PDPtr_77, &create_report__MaybeProcDynamicDump_47);
                                  }
#line 201 "create_report.m"
                                  {
#line 201 "create_report.m"
                                    MR_Word base;
#line 201 "create_report.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 201 "create_report.m"
                                    *create_report__Report_6 = base;
#line 201 "create_report.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 201 "create_report.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProcDynamicDump_47));
#line 201 "create_report.m"
                                  }
#line 199 "create_report.m"
                                }
#line 114 "create_report.m"
                              else
#line 114 "create_report.m"
                                if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 195 "create_report.m"
                                  {
#line 195 "create_report.m"
                                    MR_Word create_report__MaybeProcStaticDump_46;
#line 195 "create_report.m"
                                    MR_Word create_report__PSPtr_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

#line 196 "create_report.m"
                                    {
#line 196 "create_report.m"
                                      create_report__create_proc_static_dump_report_3_p_0(create_report__Deep_5, create_report__PSPtr_76, &create_report__MaybeProcStaticDump_46);
                                    }
#line 197 "create_report.m"
                                    {
#line 197 "create_report.m"
                                      MR_Word base;
#line 197 "create_report.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 197 "create_report.m"
                                      *create_report__Report_6 = base;
#line 197 "create_report.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 197 "create_report.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProcStaticDump_46));
#line 197 "create_report.m"
                                    }
#line 195 "create_report.m"
                                  }
#line 114 "create_report.m"
                                else
#line 114 "create_report.m"
                                  if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 182 "create_report.m"
                                    {
#line 182 "create_report.m"
                                      MR_Word create_report__MaybeProcrepCoverageReport_38;
#line 182 "create_report.m"
                                      MR_Word create_report__PDPtr_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

#line 180 "create_report.m"
                                      {
#line 180 "create_report.m"
                                        create_report__create_dynamic_procrep_coverage_report_3_p_0(create_report__Deep_5, create_report__PDPtr_39, &create_report__MaybeProcrepCoverageReport_38);
                                      }
#line 183 "create_report.m"
                                      {
#line 183 "create_report.m"
                                        MR_Word base;
#line 183 "create_report.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "create_report.m"
                                        *create_report__Report_6 = base;
#line 183 "create_report.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 183 "create_report.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProcrepCoverageReport_38));
#line 183 "create_report.m"
                                      }
#line 182 "create_report.m"
                                    }
#line 114 "create_report.m"
                                  else
#line 114 "create_report.m"
                                    if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 156 "create_report.m"
                                      {
#line 156 "create_report.m"
                                        MR_String create_report__ModuleName_28 = ((MR_String) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
#line 156 "create_report.m"
                                        MR_Word create_report__MaybeModuleReport_29;

#line 157 "create_report.m"
                                        {
#line 157 "create_report.m"
                                          create_report__create_module_report_3_p_0(create_report__Deep_5, create_report__ModuleName_28, &create_report__MaybeModuleReport_29);
                                        }
#line 158 "create_report.m"
                                        {
#line 158 "create_report.m"
                                          MR_Word base;
#line 158 "create_report.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 158 "create_report.m"
                                          *create_report__Report_6 = base;
#line 158 "create_report.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 158 "create_report.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeModuleReport_29));
#line 158 "create_report.m"
                                        }
#line 156 "create_report.m"
                                      }
#line 114 "create_report.m"
                                    else
#line 114 "create_report.m"
                                      if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 160 "create_report.m"
                                        {
#line 160 "create_report.m"
                                          MR_Word create_report__MaybeModuleGetterSettersReport_30;
#line 160 "create_report.m"
                                          MR_String create_report__ModuleName_72 = ((MR_String) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

#line 161 "create_report.m"
                                          {
#line 161 "create_report.m"
                                            create_report__create_module_getter_setter_report_3_p_0(create_report__Deep_5, create_report__ModuleName_72, &create_report__MaybeModuleGetterSettersReport_30);
                                          }
#line 163 "create_report.m"
                                          {
#line 163 "create_report.m"
                                            MR_Word base;
#line 163 "create_report.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 163 "create_report.m"
                                            *create_report__Report_6 = base;
#line 163 "create_report.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 163 "create_report.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeModuleGetterSettersReport_30));
#line 163 "create_report.m"
                                          }
#line 160 "create_report.m"
                                        }
#line 114 "create_report.m"
                                      else
#line 114 "create_report.m"
                                        if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 165 "create_report.m"
                                          {
#line 165 "create_report.m"
                                            MR_Word create_report__MaybeModuleRepReport_31;
#line 165 "create_report.m"
                                            MR_String create_report__ModuleName_73 = ((MR_String) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

#line 166 "create_report.m"
                                            {
#line 166 "create_report.m"
                                              create_report__create_module_rep_report_3_p_0(create_report__Deep_5, create_report__ModuleName_73, &create_report__MaybeModuleRepReport_31);
                                            }
#line 167 "create_report.m"
                                            {
#line 167 "create_report.m"
                                              MR_Word base;
#line 167 "create_report.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "create_report.m"
                                              *create_report__Report_6 = base;
#line 167 "create_report.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 167 "create_report.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeModuleRepReport_31));
#line 167 "create_report.m"
                                            }
#line 165 "create_report.m"
                                          }
#line 114 "create_report.m"
                                        else
#line 114 "create_report.m"
                                          if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 185 "create_report.m"
                                            {
#line 185 "create_report.m"
                                              MR_Word create_report__MaybeProcReport_40;
#line 185 "create_report.m"
                                              MR_Word create_report__PSPtr_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

#line 186 "create_report.m"
                                              {
#line 186 "create_report.m"
                                                create_report__create_proc_report_3_p_0(create_report__Deep_5, create_report__PSPtr_74, &create_report__MaybeProcReport_40);
                                              }
#line 187 "create_report.m"
                                              {
#line 187 "create_report.m"
                                                MR_Word base;
#line 187 "create_report.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "create_report.m"
                                                *create_report__Report_6 = base;
#line 187 "create_report.m"
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 187 "create_report.m"
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProcReport_40));
#line 187 "create_report.m"
                                              }
#line 185 "create_report.m"
                                            }
#line 114 "create_report.m"
                                          else
#line 114 "create_report.m"
                                            if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 190 "create_report.m"
                                              {
#line 190 "create_report.m"
                                                MR_Word create_report__CallerGroups_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 2)));
#line 190 "create_report.m"
                                                MR_Integer create_report__BunchNum_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 3)));
#line 190 "create_report.m"
                                                MR_Integer create_report__CallersPerBunch_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 4)));
#line 190 "create_report.m"
                                                MR_Word create_report__Contour_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 5)));
#line 190 "create_report.m"
                                                MR_Word create_report__MaybeProcCallersReport_45;
#line 190 "create_report.m"
                                                MR_Word create_report__PSPtr_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

#line 191 "create_report.m"
                                                {
#line 191 "create_report.m"
                                                  create_report__create_proc_callers_report_7_p_0(create_report__Deep_5, create_report__PSPtr_75, create_report__CallerGroups_41, create_report__BunchNum_42, create_report__CallersPerBunch_43, create_report__Contour_44, &create_report__MaybeProcCallersReport_45);
                                                }
#line 193 "create_report.m"
                                                {
#line 193 "create_report.m"
                                                  MR_Word base;
#line 193 "create_report.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "create_report.m"
                                                  *create_report__Report_6 = base;
#line 193 "create_report.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 193 "create_report.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProcCallersReport_45));
#line 193 "create_report.m"
                                                }
#line 190 "create_report.m"
                                              }
#line 114 "create_report.m"
                                            else
#line 114 "create_report.m"
                                              if (((((MR_tag((MR_Word) create_report__Cmd_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 182 "create_report.m"
                                                {
#line 182 "create_report.m"
                                                  MR_Word create_report__PSPtr_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
#line 182 "create_report.m"
                                                  MR_Word create_report__MaybeProcrepCoverageReport_166;

#line 176 "create_report.m"
                                                  {
#line 176 "create_report.m"
                                                    create_report__create_static_procrep_coverage_report_3_p_0(create_report__Deep_5, create_report__PSPtr_37, &create_report__MaybeProcrepCoverageReport_166);
                                                  }
#line 183 "create_report.m"
                                                  {
#line 183 "create_report.m"
                                                    MR_Word base;
#line 183 "create_report.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "create_report.m"
                                                    *create_report__Report_6 = base;
#line 183 "create_report.m"
                                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 183 "create_report.m"
                                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProcrepCoverageReport_166));
#line 183 "create_report.m"
                                                  }
#line 182 "create_report.m"
                                                }
#line 114 "create_report.m"
                                              else
#line 169 "create_report.m"
                                                {
#line 169 "create_report.m"
                                                  MR_Word create_report__Limit_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
#line 169 "create_report.m"
                                                  MR_Word create_report__CostKind_33 = ((((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 2)))) & (MR_Integer) 7);
#line 169 "create_report.m"
                                                  MR_Word create_report__InclDesc_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 169 "create_report.m"
                                                  MR_Word create_report__Scope_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 169 "create_report.m"
                                                  MR_Word create_report__MaybeTopProcsReport_36;

#line 170 "create_report.m"
                                                  {
#line 170 "create_report.m"
                                                    create_report__create_top_procs_report_6_p_0(create_report__Deep_5, create_report__Limit_32, create_report__CostKind_33, create_report__InclDesc_34, create_report__Scope_35, &create_report__MaybeTopProcsReport_36);
                                                  }
#line 172 "create_report.m"
                                                  {
#line 172 "create_report.m"
                                                    MR_Word base;
#line 172 "create_report.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "create_report.m"
                                                    *create_report__Report_6 = base;
#line 172 "create_report.m"
                                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 172 "create_report.m"
                                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeTopProcsReport_36));
#line 172 "create_report.m"
                                                  }
#line 169 "create_report.m"
                                                }
#line 114 "create_report.m"
  }
#line 28 "create_report.m"
}

void mercury__create_report__init(void)
{
}

void mercury__create_report__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&create_report__create_report__type_ctor_info_call_site_callee_perf_0);
	MR_register_type_ctor_info(&create_report__create_report__type_ctor_info_gs_field_raw_data_0);
	MR_register_type_ctor_info(&create_report__create_report__type_ctor_info_raw_gs_ds_map_0);
	MR_register_type_ctor_info(&create_report__create_report__type_ctor_info_raw_gs_field_info_0);
	MR_register_type_ctor_info(&create_report__create_report__type_ctor_info_raw_gs_field_map_0);
}

void mercury__create_report__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module create_report. */
