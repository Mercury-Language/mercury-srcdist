/*
** Automatically generated from `create_report.m'
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 95 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

#line 98 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__maybe__pti_maybe_error_2__plain_report__type_ctor_info_var_use_and_name_0__plain_builtin__type_ctor_info_string_0;

#line 101 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0;

#line 104 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0;

#line 107 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0;

#line 110 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

#line 113 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

#line 116 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0;

#line 119 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 122 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 125 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

#line 128 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0;

#line 131 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0;

#line 134 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0;

#line 137 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_module_active_0;

#line 140 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_active_0;

#line 143 "create_report.c"
static const MR_FA_TypeInfo_Struct2 create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

#line 146 "create_report.c"
static const MR_FA_TypeInfo_Struct2 create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

#line 149 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__plain_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

#line 152 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

#line 155 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0;

#line 158 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 161 "create_report.c"
static const MR_FA_TypeInfo_Struct2 create_report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 164 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 167 "create_report.c"
static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 170 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 173 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__set_ordlist__pti_set_ordlist_1__plain_exclude__type_ctor_info_exclude_spec_0;

#line 176 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 179 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 182 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_call_site_desc_0;

#line 185 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 188 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 191 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_builtin__type_ctor_info_string_0;

#line 194 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0;

#line 197 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__report__pti_gs_field_info_2__plain_create_report__type_ctor_info_gs_field_raw_data_0__plain_unit__type_ctor_info_unit_0;

#line 200 "create_report.c"
static const MR_FA_PseudoTypeInfo_Struct2 create_report__report__pti_gs_field_info_2__plain_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0__plain_report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

#line 203 "create_report.c"
static const MR_PseudoTypeInfo create_report__create_report__field_types_call_site_callee_perf_0_0[3];

#line 206 "create_report.c"
static const MR_ConstString create_report__create_report__field_names_call_site_callee_perf_0_0[3];

#line 209 "create_report.c"
static const MR_DuFunctorDesc create_report__create_report__du_functor_desc_call_site_callee_perf_0_0;

#line 212 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_stag_ordered_call_site_callee_perf_0_0[1];

#line 215 "create_report.c"
static const MR_DuPtagLayout create_report__create_report__du_ptag_ordered_call_site_callee_perf_0[1];

#line 218 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_name_ordered_call_site_callee_perf_0[1];

#line 221 "create_report.c"
static const MR_Integer create_report__create_report__functor_number_map_call_site_callee_perf_0[1];

#line 224 "create_report.c"
static const MR_PseudoTypeInfo create_report__create_report__field_types_gs_field_raw_data_0_0[3];

#line 227 "create_report.c"
static const MR_ConstString create_report__create_report__field_names_gs_field_raw_data_0_0[3];

#line 230 "create_report.c"
static const MR_DuFunctorDesc create_report__create_report__du_functor_desc_gs_field_raw_data_0_0;

#line 233 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_stag_ordered_gs_field_raw_data_0_0[1];

#line 236 "create_report.c"
static const MR_DuPtagLayout create_report__create_report__du_ptag_ordered_gs_field_raw_data_0[1];

#line 239 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_name_ordered_gs_field_raw_data_0[1];

#line 242 "create_report.c"
static const MR_Integer create_report__create_report__functor_number_map_gs_field_raw_data_0[1];

#line 245 "create_report.c"
static const MR_FA_TypeInfo_Struct2 create_report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

#line 248 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0_10001(
#line 251 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 253 "create_report.c"
  MR_Box create_report__wrapper_arg_2);

#line 256 "create_report.c"
static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0_10001(
#line 259 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 261 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 263 "create_report.c"
  MR_Box create_report__wrapper_arg_3);

#line 266 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0_10001(
#line 269 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 271 "create_report.c"
  MR_Box create_report__wrapper_arg_2);

#line 274 "create_report.c"
static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0_10001(
#line 277 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 279 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 281 "create_report.c"
  MR_Box create_report__wrapper_arg_3);

#line 284 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0_10001(
#line 287 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 289 "create_report.c"
  MR_Box create_report__wrapper_arg_2);

#line 292 "create_report.c"
static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0_10001(
#line 295 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 297 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 299 "create_report.c"
  MR_Box create_report__wrapper_arg_3);

#line 302 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0_10001(
#line 305 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 307 "create_report.c"
  MR_Box create_report__wrapper_arg_2);

#line 310 "create_report.c"
static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0_10001(
#line 313 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 315 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 317 "create_report.c"
  MR_Box create_report__wrapper_arg_3);

#line 320 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0_10001(
#line 323 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 325 "create_report.c"
  MR_Box create_report__wrapper_arg_2);

#line 328 "create_report.c"
static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0_10001(
#line 331 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 333 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 335 "create_report.c"
  MR_Box create_report__wrapper_arg_3);

#line 1528 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(
#line 1528 "create_report.m"
  MR_Word create_report__Deep_6,
#line 1528 "create_report.m"
  MR_Box create_report__Subject_7,
#line 1528 "create_report.m"
  MR_Word create_report__Own_8,
#line 1528 "create_report.m"
  MR_Word create_report__MaybeDesc_9,
#line 1528 "create_report.m"
  MR_Word * create_report__RowData_10);

#line 1470 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
#line 1470 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 1470 "create_report.m"
  MR_Word * create_report__HeadVar__2_2);

#line 667 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_p_0(
#line 667 "create_report.m"
  MR_Word create_report__Deep_5,
#line 667 "create_report.m"
  MR_Word create_report__RawData_7,
#line 667 "create_report.m"
  MR_Word * create_report__Data_8);

#line 665 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0_1(
#line 665 "create_report.m"
  MR_Box create_report__closure_arg,
#line 665 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 665 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 665 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 661 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0(
#line 661 "create_report.m"
  MR_Word create_report__Deep_5,
#line 661 "create_report.m"
  MR_Word create_report__RawMap_7,
#line 661 "create_report.m"
  MR_Word * create_report__Map_8);

#line 452 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_2(
#line 452 "create_report.m"
  MR_Box create_report__closure_arg,
#line 452 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 452 "create_report.m"
  MR_Box * create_report__wrapper_arg_2);

#line 438 "create_report.m"
static MR_bool MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_1(
#line 438 "create_report.m"
  MR_Box create_report__closure_arg);

#line 424 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(
#line 424 "create_report.m"
  MR_Word create_report__Deep_8,
#line 424 "create_report.m"
  MR_Word create_report__ProcDesc_10,
#line 424 "create_report.m"
  MR_Word create_report__PDPtr_11,
#line 424 "create_report.m"
  MR_Word * create_report__Own_12,
#line 424 "create_report.m"
  MR_Word * create_report__Desc_13,
#line 424 "create_report.m"
  MR_Word * create_report__CliquePDReport_14);

#line 936 "create_report.m"
static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_call_site_summary__936__1_2_p_0(
#line 936 "create_report.m"
  MR_Word create_report__CalleePSPtr_13,
#line 936 "create_report.m"
  MR_Word create_report__CalleePSPtrFromCall_21);

#line 438 "create_report.m"
static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__438__1_2_p_0(
#line 438 "create_report.m"
  MR_Word create_report__PSPtr_17,
#line 438 "create_report.m"
  MR_Word create_report__HeadVar__2_21);

#line 635 "create_report.m"
static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0(
#line 635 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 635 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 635 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 635 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0(
#line 635 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 635 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 634 "create_report.m"
static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0(
#line 634 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 634 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 634 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 634 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0(
#line 634 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 634 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 636 "create_report.m"
static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0(
#line 636 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 636 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 636 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 636 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0(
#line 636 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 636 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 627 "create_report.m"
static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0(
#line 627 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 627 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 627 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 627 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0(
#line 627 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 627 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 973 "create_report.m"
static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0(
#line 973 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 973 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 973 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 973 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0(
#line 973 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 973 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 1738 "create_report.m"
static MR_Word MR_CALL 
create_report__describe_clique_member_2_f_0(
#line 1738 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1738 "create_report.m"
  MR_Word create_report__PDPtr_5);

#line 1666 "create_report.m"
static MR_Word MR_CALL 
create_report__describe_call_site_2_f_0(
#line 1666 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1666 "create_report.m"
  MR_Word create_report__CSSPtr_5);

#line 1635 "create_report.m"
static MR_Word MR_CALL 
create_report__percent_from_ints_2_f_0(
#line 1635 "create_report.m"
  MR_Integer create_report__Nom_4,
#line 1635 "create_report.m"
  MR_Integer create_report__Denom_5);

#line 1624 "create_report.m"
static MR_Float MR_CALL 
create_report__int_per_call_2_f_0(
#line 1624 "create_report.m"
  MR_Integer create_report__Num_4,
#line 1624 "create_report.m"
  MR_Integer create_report__Calls_5);

#line 1514 "create_report.m"
static void MR_CALL 
create_report__psi_to_perf_row_data_3_p_0(
#line 1514 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1514 "create_report.m"
  MR_Integer create_report__PSI_5,
#line 1514 "create_report.m"
  MR_Word * create_report__RowData_6);

#line 1485 "create_report.m"
static void MR_CALL 
create_report__get_recursive_csd_cost_4_p_0(
#line 1485 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1485 "create_report.m"
  MR_Word create_report__CSDPtr_6,
#line 1485 "create_report.m"
  MR_Word create_report__RecursionType_7,
#line 1485 "create_report.m"
  MR_Word * create_report__MaybeCost_8);

#line 1448 "create_report.m"
static void MR_CALL 
create_report__call_site_dynamic_var_use_arg_9_p_0(
#line 1448 "create_report.m"
  MR_Word create_report__Deep_10,
#line 1448 "create_report.m"
  MR_Word create_report__CSDPtr_11,
#line 1448 "create_report.m"
  MR_Word create_report__RecursionType_12,
#line 1448 "create_report.m"
  MR_Float create_report__Cost_13,
#line 1448 "create_report.m"
  MR_Word create_report__VarNameTable_14,
#line 1448 "create_report.m"
  MR_Word create_report__HeadVar_15,
#line 1448 "create_report.m"
  MR_Word * create_report__MaybeUseAndName_16,
#line 1448 "create_report.m"
  MR_Integer create_report__STATE_VARIABLE_ArgNum_0_26,
#line 1448 "create_report.m"
  MR_Integer * create_report__STATE_VARIABLE_ArgNum_27);

#line 1729 "create_report.m"
static MR_Box MR_CALL 
create_report__create_clique_dump_report_3_p_0_1(
#line 1729 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1729 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1372 "create_report.m"
static void MR_CALL 
create_report__create_clique_dump_report_3_p_0(
#line 1372 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1372 "create_report.m"
  MR_Word create_report__CliquePtr_5,
#line 1372 "create_report.m"
  MR_Word * create_report__MaybeCliqueDumpInfo_6);

#line 1351 "create_report.m"
static void MR_CALL 
create_report__create_call_site_dynamic_dump_report_3_p_0(
#line 1351 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1351 "create_report.m"
  MR_Word create_report__CSDPtr_5,
#line 1351 "create_report.m"
  MR_Word * create_report__MaybeCallSiteDynamicDumpInfo_6);

#line 1335 "create_report.m"
static void MR_CALL 
create_report__create_call_site_static_dump_report_3_p_0(
#line 1335 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1335 "create_report.m"
  MR_Word create_report__CSSPtr_5,
#line 1335 "create_report.m"
  MR_Word * create_report__MaybeCallSiteStaticDumpInfo_6);

#line 1305 "create_report.m"
static void MR_CALL 
create_report__create_proc_dynamic_dump_report_3_p_0(
#line 1305 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1305 "create_report.m"
  MR_Word create_report__PDPtr_5,
#line 1305 "create_report.m"
  MR_Word * create_report__MaybeProcDynamicDumpInfo_6);

#line 1282 "create_report.m"
static void MR_CALL 
create_report__create_proc_static_dump_report_3_p_0(
#line 1282 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1282 "create_report.m"
  MR_Word create_report__PSPtr_5,
#line 1282 "create_report.m"
  MR_Word * create_report__MaybeProcStaticDumpInfo_6);

#line 1265 "create_report.m"
static void MR_CALL 
create_report__maybe_create_procrep_coverage_report_6_p_0_1(
#line 1265 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1265 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1265 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 1265 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 1265 "create_report.m"
  MR_Box create_report__wrapper_arg_4,
#line 1265 "create_report.m"
  MR_Box * create_report__wrapper_arg_5);

#line 1246 "create_report.m"
static void MR_CALL 
create_report__maybe_create_procrep_coverage_report_6_p_0(
#line 1246 "create_report.m"
  MR_Word create_report__TypeInfo_for_Callee_63,
#line 1246 "create_report.m"
  MR_Word create_report__Deep_1,
#line 1246 "create_report.m"
  MR_Word create_report__PSPtr_2,
#line 1246 "create_report.m"
  MR_Word create_report__Own_3,
#line 1246 "create_report.m"
  MR_Word create_report__HeadVar__4_4,
#line 1246 "create_report.m"
  MR_Word create_report__CallSitesMap_5,
#line 1246 "create_report.m"
  MR_Word * create_report__HeadVar__6_6);

#line 1729 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_caller_cliques_3_f_0_1(
#line 1729 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1729 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1185 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_cliques_3_f_0(
#line 1185 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1185 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1185 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 1175 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_modules_3_f_0(
#line 1175 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1175 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1175 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 1164 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_procedures_3_f_0(
#line 1164 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1164 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1164 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 1153 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_call_sites_3_f_0(
#line 1153 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1153 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1153 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 1125 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_6(
#line 1125 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1125 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1133 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_5(
#line 1133 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1133 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1141 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_4(
#line 1141 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1141 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1117 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_3(
#line 1117 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1117 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1069 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_2(
#line 1069 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1069 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1096 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_1(
#line 1096 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1096 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1057 "create_report.m"
static void MR_CALL 
create_report__create_proc_callers_report_7_p_0(
#line 1057 "create_report.m"
  MR_Word create_report__Deep_8,
#line 1057 "create_report.m"
  MR_Word create_report__PSPtr_9,
#line 1057 "create_report.m"
  MR_Word create_report__CallerGroups_10,
#line 1057 "create_report.m"
  MR_Integer create_report__BunchNum_11,
#line 1057 "create_report.m"
  MR_Integer create_report__CallersPerBunch_12,
#line 1057 "create_report.m"
  MR_Word create_report__Contour_13,
#line 1057 "create_report.m"
  MR_Word * create_report__MaybeProcCallersReport_14);

#line 1039 "create_report.m"
static void MR_CALL 
create_report__accumulate_call_site_callees_7_p_0(
#line 1039 "create_report.m"
  MR_Word create_report__Deep_8,
#line 1039 "create_report.m"
  MR_Word create_report__CalleePerf_9,
#line 1039 "create_report.m"
  MR_Word * create_report__RowData_10,
#line 1039 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Own_0_17,
#line 1039 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Own_18,
#line 1039 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Desc_0_19,
#line 1039 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Desc_20);

#line 1022 "create_report.m"
static void MR_CALL 
create_report__accumulate_csd_prof_info_7_p_0(
#line 1022 "create_report.m"
  MR_Word create_report__Deep_8,
#line 1022 "create_report.m"
  MR_Word create_report__CallerPSPtr_9,
#line 1022 "create_report.m"
  MR_Word create_report__CSDPtr_10,
#line 1022 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Own_0_17,
#line 1022 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Own_18,
#line 1022 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Desc_0_19,
#line 1022 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Desc_20);

#line 990 "create_report.m"
static void MR_CALL 
create_report__summarize_callers_11_p_0(
#line 990 "create_report.m"
  MR_Word create_report__Deep_12,
#line 990 "create_report.m"
  MR_Word create_report__CallerCSDPtrs0_13,
#line 990 "create_report.m"
  MR_Word create_report__CalleePSPtr_14,
#line 990 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_PSSeen_0_27,
#line 990 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_PSSeen_28,
#line 990 "create_report.m"
  MR_Integer create_report__STATE_VARIABLE_NumDynamic_0_29,
#line 990 "create_report.m"
  MR_Integer * create_report__STATE_VARIABLE_NumDynamic_30,
#line 990 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Own_0_31,
#line 990 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Own_32,
#line 990 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Desc_0_33,
#line 990 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Desc_34);

#line 986 "create_report.m"
static void MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0_1(
#line 986 "create_report.m"
  MR_Box create_report__closure_arg,
#line 986 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 986 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 986 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 986 "create_report.m"
  MR_Box create_report__wrapper_arg_4,
#line 986 "create_report.m"
  MR_Box * create_report__wrapper_arg_5);

#line 980 "create_report.m"
static MR_Word MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0(
#line 980 "create_report.m"
  MR_Word create_report__Deep_5,
#line 980 "create_report.m"
  MR_Word create_report__CallerPSPtr_6,
#line 980 "create_report.m"
  MR_Word create_report__HeadVar__3_3);

#line 965 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_9(
#line 965 "create_report.m"
  MR_Box create_report__closure_arg,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_6);

#line 963 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_8(
#line 963 "create_report.m"
  MR_Box create_report__closure_arg,
#line 963 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 936 "create_report.m"
static MR_bool MR_CALL 
create_report__create_call_site_summary_2_f_0_7(
#line 936 "create_report.m"
  MR_Box create_report__closure_arg);

#line 965 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_6(
#line 965 "create_report.m"
  MR_Box create_report__closure_arg,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_6);

#line 963 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_5(
#line 963 "create_report.m"
  MR_Box create_report__closure_arg,
#line 963 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 965 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_4(
#line 965 "create_report.m"
  MR_Box create_report__closure_arg,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_6);

#line 963 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_3(
#line 963 "create_report.m"
  MR_Box create_report__closure_arg,
#line 963 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 965 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_2(
#line 965 "create_report.m"
  MR_Box create_report__closure_arg,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_6);

#line 963 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_1(
#line 963 "create_report.m"
  MR_Box create_report__closure_arg,
#line 963 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 912 "create_report.m"
static MR_Word MR_CALL 
create_report__create_call_site_summary_2_f_0(
#line 912 "create_report.m"
  MR_Word create_report__Deep_4,
#line 912 "create_report.m"
  MR_Word create_report__CSSPtr_5);

#line 812 "create_report.m"
static void MR_CALL 
create_report__create_module_rep_report_3_p_0(
#line 812 "create_report.m"
  MR_Word create_report__Deep_4,
#line 812 "create_report.m"
  MR_String create_report__ModuleName_5,
#line 812 "create_report.m"
  MR_Word * create_report__MaybeModuleRepReport_6);

#line 783 "create_report.m"
static MR_bool MR_CALL 
create_report__is_getter_or_setter_2_4_p_0(
#line 783 "create_report.m"
  MR_Word create_report__NameChars_5,
#line 783 "create_report.m"
  MR_Word * create_report__GetterSetter_6,
#line 783 "create_report.m"
  MR_Word * create_report__DataStructNameChars_7,
#line 783 "create_report.m"
  MR_Word * create_report__FieldNameChars_8);

#line 698 "create_report.m"
static void MR_CALL 
create_report__gather_getters_setters_4_p_0(
#line 698 "create_report.m"
  MR_Word create_report__Deep_5,
#line 698 "create_report.m"
  MR_Word create_report__PSPtr_6,
#line 698 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_GSDSRawMap_0_32,
#line 698 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_GSDSRawMap_33);

#line 667 "create_report.m"
static void MR_CALL 
create_report__getter_setter_raw_data_to_info_4_p_0(
#line 667 "create_report.m"
  MR_Word create_report__Deep_5,
#line 667 "create_report.m"
  MR_Word create_report___FieldName_6,
#line 667 "create_report.m"
  MR_Word create_report__RawData_7,
#line 667 "create_report.m"
  MR_Word * create_report__Data_8);

#line 661 "create_report.m"
static void MR_CALL 
create_report__getter_setter_raw_map_to_info_map_4_p_0(
#line 661 "create_report.m"
  MR_Word create_report__Deep_5,
#line 661 "create_report.m"
  MR_Word create_report___DataStructName_6,
#line 661 "create_report.m"
  MR_Word create_report__RawMap_7,
#line 661 "create_report.m"
  MR_Word * create_report__Map_8);

#line 650 "create_report.m"
static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_2(
#line 650 "create_report.m"
  MR_Box create_report__closure_arg,
#line 650 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 650 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 650 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 648 "create_report.m"
static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_1(
#line 648 "create_report.m"
  MR_Box create_report__closure_arg,
#line 648 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 648 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 648 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 641 "create_report.m"
static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0(
#line 641 "create_report.m"
  MR_Word create_report__Deep_4,
#line 641 "create_report.m"
  MR_String create_report__ModuleName_5,
#line 641 "create_report.m"
  MR_Word * create_report__MaybeModuleGetterSettersReport_6);

#line 604 "create_report.m"
static MR_Word MR_CALL 
create_report__proc_to_active_row_data_2_f_0(
#line 604 "create_report.m"
  MR_Word create_report__Deep_4,
#line 604 "create_report.m"
  MR_Word create_report__PSPtr_5);

#line 595 "create_report.m"
static MR_Box MR_CALL 
create_report__create_module_report_3_p_0_1(
#line 595 "create_report.m"
  MR_Box create_report__closure_arg,
#line 595 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 579 "create_report.m"
static void MR_CALL 
create_report__create_module_report_3_p_0(
#line 579 "create_report.m"
  MR_Word create_report__Deep_4,
#line 579 "create_report.m"
  MR_String create_report__ModuleName_5,
#line 579 "create_report.m"
  MR_Word * create_report__MaybeModuleReport_6);

#line 554 "create_report.m"
static MR_Word MR_CALL 
create_report__module_pair_to_row_data_2_f_0(
#line 554 "create_report.m"
  MR_Word create_report__Deep_4,
#line 554 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 549 "create_report.m"
static MR_bool MR_CALL 
create_report__not_mercury_runtime_1_p_0(
#line 549 "create_report.m"
  MR_Word create_report__HeadVar__1_1);

#line 545 "create_report.m"
static MR_Box MR_CALL 
create_report__create_program_modules_report_2_p_0_2(
#line 545 "create_report.m"
  MR_Box create_report__closure_arg,
#line 545 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 544 "create_report.m"
static MR_bool MR_CALL 
create_report__create_program_modules_report_2_p_0_1(
#line 544 "create_report.m"
  MR_Box create_report__closure_arg,
#line 544 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 539 "create_report.m"
static void MR_CALL 
create_report__create_program_modules_report_2_p_0(
#line 539 "create_report.m"
  MR_Word create_report__Deep_3,
#line 539 "create_report.m"
  MR_Word * create_report__MaybeProgramModulesReport_4);

#line 1729 "create_report.m"
static MR_Box MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_2(
#line 1729 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1729 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 520 "create_report.m"
static MR_bool MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_1(
#line 520 "create_report.m"
  MR_Box create_report__closure_arg);

#line 514 "create_report.m"
static void MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0(
#line 514 "create_report.m"
  MR_Word create_report__Deep_6,
#line 514 "create_report.m"
  MR_Word create_report__CSDPtr_7,
#line 514 "create_report.m"
  MR_Word * create_report__Own_8,
#line 514 "create_report.m"
  MR_Word * create_report__Desc_9,
#line 514 "create_report.m"
  MR_Word * create_report__CalleeCliqueRowData_10);

#line 504 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_4(
#line 504 "create_report.m"
  MR_Box create_report__closure_arg,
#line 504 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_4);

#line 504 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_3(
#line 504 "create_report.m"
  MR_Box create_report__closure_arg,
#line 504 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_4);

#line 504 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_2(
#line 504 "create_report.m"
  MR_Box create_report__closure_arg,
#line 504 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_4);

#line 504 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_1(
#line 504 "create_report.m"
  MR_Box create_report__closure_arg,
#line 504 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_4);

#line 455 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0(
#line 455 "create_report.m"
  MR_Word create_report__Deep_4,
#line 455 "create_report.m"
  MR_Word create_report__Pair_5,
#line 455 "create_report.m"
  MR_Word * create_report__CliqueCallSiteReport_6);

#line 424 "create_report.m"
static void MR_CALL 
create_report__create_clique_proc_dynamic_report_7_p_0(
#line 424 "create_report.m"
  MR_Word create_report__Deep_8,
#line 424 "create_report.m"
  MR_Word create_report___CliquePtr_9,
#line 424 "create_report.m"
  MR_Word create_report__ProcDesc_10,
#line 424 "create_report.m"
  MR_Word create_report__PDPtr_11,
#line 424 "create_report.m"
  MR_Word * create_report__Own_12,
#line 424 "create_report.m"
  MR_Word * create_report__Desc_13,
#line 424 "create_report.m"
  MR_Word * create_report__CliquePDReport_14);

#line 414 "create_report.m"
static void MR_CALL 
create_report__create_clique_proc_report_4_p_0_1(
#line 414 "create_report.m"
  MR_Box create_report__closure_arg,
#line 414 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 414 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 414 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 414 "create_report.m"
  MR_Box * create_report__wrapper_arg_4);

#line 401 "create_report.m"
static void MR_CALL 
create_report__create_clique_proc_report_4_p_0(
#line 401 "create_report.m"
  MR_Word create_report__Deep_5,
#line 401 "create_report.m"
  MR_Word create_report__CliquePtr_6,
#line 401 "create_report.m"
  MR_Word create_report__HeadVar__3_3,
#line 401 "create_report.m"
  MR_Word * create_report__CliqueProcReport_9);

#line 395 "create_report.m"
static MR_bool MR_CALL 
create_report__proc_group_contains_2_p_0(
#line 395 "create_report.m"
  MR_Word create_report__EntryPDPtr_3,
#line 395 "create_report.m"
  MR_Word create_report__HeadVar__2_2);

#line 384 "create_report.m"
static MR_bool MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0_1(
#line 384 "create_report.m"
  MR_Box create_report__closure_arg);

#line 379 "create_report.m"
static void MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0(
#line 379 "create_report.m"
  MR_Word create_report__Deep_5,
#line 379 "create_report.m"
  MR_Word create_report__PDPtr_6,
#line 379 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_PStoPDsMap_0_12,
#line 379 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_PStoPDsMap_13);

#line 346 "create_report.m"
static MR_Word MR_CALL 
create_report__find_clique_ancestors_2_f_0(
#line 346 "create_report.m"
  MR_Word create_report__Deep_4,
#line 346 "create_report.m"
  MR_Word create_report__CliquePtr_5);

#line 298 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_callee_4_p_0(
#line 298 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 298 "create_report.m"
  MR_Word create_report__RowData_6,
#line 298 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_13,
#line 298 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_14);

#line 295 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0_1(
#line 295 "create_report.m"
  MR_Box create_report__closure_arg,
#line 295 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 295 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 295 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 290 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0(
#line 290 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 290 "create_report.m"
  MR_Word create_report__CallSiteReport_6,
#line 290 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_11,
#line 290 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_12);

#line 287 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0_1(
#line 287 "create_report.m"
  MR_Box create_report__closure_arg,
#line 287 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 287 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 287 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 280 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0(
#line 280 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 280 "create_report.m"
  MR_Word create_report__CliquePDReport_6,
#line 280 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_10,
#line 280 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_11);

#line 277 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_2(
#line 277 "create_report.m"
  MR_Box create_report__closure_arg,
#line 277 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 277 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 277 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 287 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_1(
#line 287 "create_report.m"
  MR_Box create_report__closure_arg,
#line 287 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 287 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 287 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 269 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0(
#line 269 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 269 "create_report.m"
  MR_Word create_report__CliqueProcReport_6,
#line 269 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_11,
#line 269 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_12);

#line 257 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_4_p_0_1(
#line 257 "create_report.m"
  MR_Box create_report__closure_arg,
#line 257 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 257 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 257 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 252 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_4_p_0(
#line 252 "create_report.m"
  MR_Word create_report__Deep_5,
#line 252 "create_report.m"
  MR_Integer create_report__Percent_6,
#line 252 "create_report.m"
  MR_Word create_report__CurrentReport_7,
#line 252 "create_report.m"
  MR_Word * create_report__SelectedReport_8);

#line 231 "create_report.m"
static void MR_CALL 
create_report__create_root_report_3_p_0(
#line 231 "create_report.m"
  MR_Word create_report__Deep_4,
#line 231 "create_report.m"
  MR_Word create_report__MaybePercent_5,
#line 231 "create_report.m"
  MR_Word * create_report__MaybeReport_6);

#line 340 "create_report.m"
static void MR_CALL 
create_report__create_clique_report_3_p_0_3(
#line 340 "create_report.m"
  MR_Box create_report__closure_arg,
#line 340 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 340 "create_report.m"
  MR_Box * create_report__wrapper_arg_2);

#line 334 "create_report.m"
static MR_bool MR_CALL 
create_report__create_clique_report_3_p_0_2(
#line 334 "create_report.m"
  MR_Box create_report__closure_arg,
#line 334 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 327 "create_report.m"
static void MR_CALL 
create_report__create_clique_report_3_p_0_1(
#line 327 "create_report.m"
  MR_Box create_report__closure_arg,
#line 327 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 327 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 327 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 872 "create_report.m"
static void MR_CALL 
create_report__create_top_procs_report_6_p_0_1(
#line 872 "create_report.m"
  MR_Box create_report__closure_arg,
#line 872 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 872 "create_report.m"
  MR_Box * create_report__wrapper_arg_2);

#line 1232 "create_report.m"
static void MR_CALL 
create_report__create_dynamic_procrep_coverage_report_3_p_0_1(
#line 1232 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1232 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1232 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 1232 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 1210 "create_report.m"
static void MR_CALL 
create_report__create_static_procrep_coverage_report_3_p_0_1(
#line 1210 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1210 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1210 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 1210 "create_report.m"
  MR_Box * create_report__wrapper_arg_3);

#line 893 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_report_3_p_0_1(
#line 893 "create_report.m"
  MR_Box create_report__closure_arg,
#line 893 "create_report.m"
  MR_Box create_report__wrapper_arg_1);

#line 1417 "create_report.m"
static void MR_CALL 
create_report__create_call_site_dynamic_var_use_report_3_p_0_1(
#line 1417 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1417 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1417 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 1417 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 1417 "create_report.m"
  MR_Box * create_report__wrapper_arg_4);


static /* final */ const MR_Box create_report_scalar_common_1[13][2];

static /* final */ const MR_Box create_report_scalar_common_2[21][3];

static /* final */ const MR_Box create_report_scalar_common_3[11][1];

static /* final */ const MR_Box create_report_scalar_common_4[1][12];

static /* final */ const MR_Box create_report_scalar_common_5[6][6];

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

static /* final */ const MR_Box create_report_scalar_common_3[11][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "invalid proc_static index"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "Information about module representations is not available.\n"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "No coverage information available"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "invalid proc_dynamic index"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "invalid call_site_static index"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "invalid call_site_dynamic index"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "invalid clique_ptr"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "get_recursive_csd_cost: unhandled recursion type"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "get_recursive_csd_cost called for non-recursive clique"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box create_report_scalar_common_4[1][12] = {
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

static /* final */ const MR_Box create_report_scalar_common_5[6][6] = {
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



#include "array.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
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
  {     create_report__create_report__du_name_ordered_call_site_callee_perf_0 },
  {     create_report__create_report__du_ptag_ordered_call_site_callee_perf_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  create_report__create_report__functor_number_map_call_site_callee_perf_0
};

#line 2590 "create_report.c"
static const MR_PseudoTypeInfo create_report__create_report__field_types_gs_field_raw_data_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
};

#line 2597 "create_report.c"
static const MR_ConstString create_report__create_report__field_names_gs_field_raw_data_0_0[3] = {
  (MR_String) "gs_raw_proc",
  (MR_String) "gs_raw_own",
  (MR_String) "gs_raw_desc"
};

#line 2604 "create_report.c"
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

#line 2619 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_stag_ordered_gs_field_raw_data_0_0[1] = {
  &create_report__create_report__du_functor_desc_gs_field_raw_data_0_0
};

#line 2624 "create_report.c"
static const MR_DuPtagLayout create_report__create_report__du_ptag_ordered_gs_field_raw_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    create_report__create_report__du_stag_ordered_gs_field_raw_data_0_0
  }
};

#line 2633 "create_report.c"
static const MR_DuFunctorDescPtr create_report__create_report__du_name_ordered_gs_field_raw_data_0[1] = {
  &create_report__create_report__du_functor_desc_gs_field_raw_data_0_0
};

#line 2638 "create_report.c"
static const MR_Integer create_report__create_report__functor_number_map_gs_field_raw_data_0[1] = {
  (MR_Integer) 0
};

#line 2643 "create_report.c"
const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_gs_field_raw_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (create_report____Unify____gs_field_raw_data_0_0_10001)),
  ((MR_Box) (create_report____Compare____gs_field_raw_data_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "gs_field_raw_data",
  {     create_report__create_report__du_name_ordered_gs_field_raw_data_0 },
  {     create_report__create_report__du_ptag_ordered_gs_field_raw_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  create_report__create_report__functor_number_map_gs_field_raw_data_0
};

#line 2660 "create_report.c"
static const MR_FA_TypeInfo_Struct2 create_report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_data_struct_name_0,
    (MR_TypeInfo) &create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
  }
};

#line 2669 "create_report.c"
const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_raw_gs_ds_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (create_report____Unify____raw_gs_ds_map_0_0_10001)),
  ((MR_Box) (create_report____Compare____raw_gs_ds_map_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "raw_gs_ds_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &create_report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2686 "create_report.c"
const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_raw_gs_field_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (create_report____Unify____raw_gs_field_info_0_0_10001)),
  ((MR_Box) (create_report____Compare____raw_gs_field_info_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "raw_gs_field_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2703 "create_report.c"
const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_raw_gs_field_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (create_report____Unify____raw_gs_field_map_0_0_10001)),
  ((MR_Box) (create_report____Compare____raw_gs_field_map_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "raw_gs_field_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2720 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0_10001(
#line 2723 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 2725 "create_report.c"
  MR_Box create_report__wrapper_arg_2)
#line 2727 "create_report.c"
{
#line 2729 "create_report.c"
  {
#line 2731 "create_report.c"
    MR_bool create_report__succeeded;

#line 2734 "create_report.c"
    {
#line 2736 "create_report.c"
      create_report__succeeded = create_report____Unify____call_site_callee_perf_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
#line 2739 "create_report.c"
    return create_report__succeeded;
#line 2741 "create_report.c"
  }
#line 2743 "create_report.c"
}

#line 2746 "create_report.c"
static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0_10001(
#line 2749 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 2751 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 2753 "create_report.c"
  MR_Box create_report__wrapper_arg_3)
#line 2755 "create_report.c"
{
#line 2757 "create_report.c"
  {
#line 2759 "create_report.c"
    MR_Word create_report__conv0_HeadVar__1_1;

#line 2762 "create_report.c"
    {
#line 2764 "create_report.c"
      create_report____Compare____call_site_callee_perf_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
#line 2767 "create_report.c"
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
#line 2769 "create_report.c"
  }
#line 2771 "create_report.c"
}

#line 2774 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0_10001(
#line 2777 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 2779 "create_report.c"
  MR_Box create_report__wrapper_arg_2)
#line 2781 "create_report.c"
{
#line 2783 "create_report.c"
  {
#line 2785 "create_report.c"
    MR_bool create_report__succeeded;

#line 2788 "create_report.c"
    {
#line 2790 "create_report.c"
      create_report__succeeded = create_report____Unify____gs_field_raw_data_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
#line 2793 "create_report.c"
    return create_report__succeeded;
#line 2795 "create_report.c"
  }
#line 2797 "create_report.c"
}

#line 2800 "create_report.c"
static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0_10001(
#line 2803 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 2805 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 2807 "create_report.c"
  MR_Box create_report__wrapper_arg_3)
#line 2809 "create_report.c"
{
#line 2811 "create_report.c"
  {
#line 2813 "create_report.c"
    MR_Word create_report__conv0_HeadVar__1_1;

#line 2816 "create_report.c"
    {
#line 2818 "create_report.c"
      create_report____Compare____gs_field_raw_data_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
#line 2821 "create_report.c"
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
#line 2823 "create_report.c"
  }
#line 2825 "create_report.c"
}

#line 2828 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0_10001(
#line 2831 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 2833 "create_report.c"
  MR_Box create_report__wrapper_arg_2)
#line 2835 "create_report.c"
{
#line 2837 "create_report.c"
  {
#line 2839 "create_report.c"
    MR_bool create_report__succeeded;

#line 2842 "create_report.c"
    {
#line 2844 "create_report.c"
      create_report__succeeded = create_report____Unify____raw_gs_ds_map_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
#line 2847 "create_report.c"
    return create_report__succeeded;
#line 2849 "create_report.c"
  }
#line 2851 "create_report.c"
}

#line 2854 "create_report.c"
static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0_10001(
#line 2857 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 2859 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 2861 "create_report.c"
  MR_Box create_report__wrapper_arg_3)
#line 2863 "create_report.c"
{
#line 2865 "create_report.c"
  {
#line 2867 "create_report.c"
    MR_Word create_report__conv0_HeadVar__1_1;

#line 2870 "create_report.c"
    {
#line 2872 "create_report.c"
      create_report____Compare____raw_gs_ds_map_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
#line 2875 "create_report.c"
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
#line 2877 "create_report.c"
  }
#line 2879 "create_report.c"
}

#line 2882 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0_10001(
#line 2885 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 2887 "create_report.c"
  MR_Box create_report__wrapper_arg_2)
#line 2889 "create_report.c"
{
#line 2891 "create_report.c"
  {
#line 2893 "create_report.c"
    MR_bool create_report__succeeded;

#line 2896 "create_report.c"
    {
#line 2898 "create_report.c"
      create_report__succeeded = create_report____Unify____raw_gs_field_info_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
#line 2901 "create_report.c"
    return create_report__succeeded;
#line 2903 "create_report.c"
  }
#line 2905 "create_report.c"
}

#line 2908 "create_report.c"
static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0_10001(
#line 2911 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 2913 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 2915 "create_report.c"
  MR_Box create_report__wrapper_arg_3)
#line 2917 "create_report.c"
{
#line 2919 "create_report.c"
  {
#line 2921 "create_report.c"
    MR_Word create_report__conv0_HeadVar__1_1;

#line 2924 "create_report.c"
    {
#line 2926 "create_report.c"
      create_report____Compare____raw_gs_field_info_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
#line 2929 "create_report.c"
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
#line 2931 "create_report.c"
  }
#line 2933 "create_report.c"
}

#line 2936 "create_report.c"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0_10001(
#line 2939 "create_report.c"
  MR_Box create_report__wrapper_arg_1,
#line 2941 "create_report.c"
  MR_Box create_report__wrapper_arg_2)
#line 2943 "create_report.c"
{
#line 2945 "create_report.c"
  {
#line 2947 "create_report.c"
    MR_bool create_report__succeeded;

#line 2950 "create_report.c"
    {
#line 2952 "create_report.c"
      create_report__succeeded = create_report____Unify____raw_gs_field_map_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
#line 2955 "create_report.c"
    return create_report__succeeded;
#line 2957 "create_report.c"
  }
#line 2959 "create_report.c"
}

#line 2962 "create_report.c"
static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0_10001(
#line 2965 "create_report.c"
  MR_Box * create_report__wrapper_arg_1,
#line 2967 "create_report.c"
  MR_Box create_report__wrapper_arg_2,
#line 2969 "create_report.c"
  MR_Box create_report__wrapper_arg_3)
#line 2971 "create_report.c"
{
#line 2973 "create_report.c"
  {
#line 2975 "create_report.c"
    MR_Word create_report__conv0_HeadVar__1_1;

#line 2978 "create_report.c"
    {
#line 2980 "create_report.c"
      create_report____Compare____raw_gs_field_map_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
#line 2983 "create_report.c"
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
#line 2985 "create_report.c"
  }
#line 2987 "create_report.c"
}

#line 1528 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(
#line 1528 "create_report.m"
  MR_Word create_report__Deep_6,
#line 1528 "create_report.m"
  MR_Box create_report__Subject_7,
#line 1528 "create_report.m"
  MR_Word create_report__Own_8,
#line 1528 "create_report.m"
  MR_Word create_report__MaybeDesc_9,
#line 1528 "create_report.m"
  MR_Word * create_report__RowData_10)
#line 1528 "create_report.m"
{
#line 1533 "create_report.m"
  {
#line 1533 "create_report.m"
    MR_bool create_report__succeeded;
#line 1533 "create_report.m"
    MR_Word create_report__ProfileStats_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 0)));
#line 1533 "create_report.m"
    MR_Integer create_report__TicksPerSec_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 5)));
#line 1533 "create_report.m"
    MR_Integer create_report__WordSize_13;
#line 1533 "create_report.m"
    MR_Word create_report__Root_14;
#line 1533 "create_report.m"
    MR_Integer create_report__RootQuanta_15;
#line 1533 "create_report.m"
    MR_Integer create_report__RootCallseqs_16;
#line 1533 "create_report.m"
    MR_Integer create_report__RootAllocs_17;
#line 1533 "create_report.m"
    MR_Integer create_report__RootWords_18;
#line 1533 "create_report.m"
    MR_Integer create_report__Calls_19;
#line 1533 "create_report.m"
    MR_Integer create_report__Exits_20;
#line 1533 "create_report.m"
    MR_Integer create_report__Fails_21;
#line 1533 "create_report.m"
    MR_Integer create_report__Redos_22;
#line 1533 "create_report.m"
    MR_Integer create_report__Excps_23;
#line 1533 "create_report.m"
    MR_Integer create_report__SelfTicks_24;
#line 1533 "create_report.m"
    MR_Word create_report__SelfTime_25;
#line 1533 "create_report.m"
    MR_Word create_report__SelfTimePercent_26;
#line 1533 "create_report.m"
    MR_Word create_report__SelfTimePerCall_27;
#line 1533 "create_report.m"
    MR_Integer create_report__SelfCallseqs_28;
#line 1533 "create_report.m"
    MR_Word create_report__SelfCallseqsPercent_29;
#line 1533 "create_report.m"
    MR_Float create_report__SelfCallseqsPerCall_30;
#line 1533 "create_report.m"
    MR_Integer create_report__SelfAllocs_31;
#line 1533 "create_report.m"
    MR_Word create_report__SelfAllocsPercent_32;
#line 1533 "create_report.m"
    MR_Float create_report__SelfAllocsPerCall_33;
#line 1533 "create_report.m"
    MR_Integer create_report__SelfWords_34;
#line 1533 "create_report.m"
    MR_Word create_report__SelfMemory_35;
#line 1533 "create_report.m"
    MR_Word create_report__SelfMemoryPercent_36;
#line 1533 "create_report.m"
    MR_Word create_report__SelfMemoryPerCall_37;
#line 1533 "create_report.m"
    MR_Word create_report__SelfPerf_38;
#line 1533 "create_report.m"
    MR_Word create_report__MaybeTotalPerf_39;
#line 1533 "create_report.m"
    MR_Word create_report__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 9)));
#line 1535 "create_report.m"
    MR_String create_report__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 1)));
#line 1535 "create_report.m"
    MR_String create_report__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 2)));
#line 1535 "create_report.m"
    MR_String create_report__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 3)));
#line 1535 "create_report.m"
    MR_Word create_report__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 4)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 5)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 6)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 7)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 8)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 9)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_71_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 10)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_72_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 11)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_73_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 12)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_74_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 13)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 14)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_76_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 15)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_77_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 16)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_78_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 17)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_79_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 18)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_80_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 19)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_81_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 20)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_82_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 21)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_83_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 22)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_84_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 23)));
#line 1535 "create_report.m"
    MR_ArrayPtr create_report__V_85_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 24)));
#line 1535 "create_report.m"
    MR_Word create_report__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 25)));
#line 1535 "create_report.m"
    MR_Word create_report__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 26)));
#line 1535 "create_report.m"
    MR_Word create_report__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 27)));
#line 1535 "create_report.m"
    MR_Word create_report__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 28)));
#line 1536 "create_report.m"
    MR_String create_report__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 0)));
#line 1536 "create_report.m"
    MR_Integer create_report__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 1)));
#line 1536 "create_report.m"
    MR_Integer create_report__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 2)));
#line 1536 "create_report.m"
    MR_Integer create_report__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 3)));
#line 1536 "create_report.m"
    MR_Integer create_report__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 4)));
#line 1536 "create_report.m"
    MR_Integer create_report__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 6)));
#line 1536 "create_report.m"
    MR_Integer create_report__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 7)));
#line 1536 "create_report.m"
    MR_Integer create_report__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 8)));
#line 1537 "create_report.m"
    MR_Word create_report__V_108_108;
#line 1537 "create_report.m"
    MR_Word create_report__V_110_110;

#line 1537 "create_report.m"
    create_report__WordSize_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__V_98_98, (MR_Integer) 0)));
#line 1537 "create_report.m"
    create_report__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_98_98, (MR_Integer) 1)));
#line 1537 "create_report.m"
    create_report__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_98_98, (MR_Integer) 3)));
#line 1539 "create_report.m"
    {
#line 1539 "create_report.m"
      create_report__Root_14 = profile__root_total_info_1_f_0(create_report__Deep_6);
    }
#line 1540 "create_report.m"
    {
#line 1540 "create_report.m"
      create_report__RootQuanta_15 = measurements__inherit_quanta_1_f_0(create_report__Root_14);
    }
#line 1541 "create_report.m"
    {
#line 1541 "create_report.m"
      create_report__RootCallseqs_16 = measurements__inherit_callseqs_1_f_0(create_report__Root_14);
    }
#line 1542 "create_report.m"
    {
#line 1542 "create_report.m"
      create_report__RootAllocs_17 = measurements__inherit_allocs_1_f_0(create_report__Root_14);
    }
#line 1543 "create_report.m"
    {
#line 1543 "create_report.m"
      create_report__RootWords_18 = measurements__inherit_words_1_f_0(create_report__Root_14);
    }
#line 1546 "create_report.m"
    {
#line 1546 "create_report.m"
      create_report__Calls_19 = measurements__calls_1_f_0(create_report__Own_8);
    }
#line 1547 "create_report.m"
    {
#line 1547 "create_report.m"
      create_report__Exits_20 = measurements__exits_1_f_0(create_report__Own_8);
    }
#line 1548 "create_report.m"
    {
#line 1548 "create_report.m"
      create_report__Fails_21 = measurements__fails_1_f_0(create_report__Own_8);
    }
#line 1549 "create_report.m"
    {
#line 1549 "create_report.m"
      create_report__Redos_22 = measurements__redos_1_f_0(create_report__Own_8);
    }
#line 1550 "create_report.m"
    {
#line 1550 "create_report.m"
      create_report__Excps_23 = measurements__excps_1_f_0(create_report__Own_8);
    }
#line 1553 "create_report.m"
    {
#line 1553 "create_report.m"
      create_report__SelfTicks_24 = measurements__quanta_1_f_0(create_report__Own_8);
    }
#line 1554 "create_report.m"
    {
#line 1554 "create_report.m"
      create_report__SelfTime_25 = measurement_units__ticks_to_time_2_f_0(create_report__SelfTicks_24, create_report__TicksPerSec_12);
    }
#line 1555 "create_report.m"
    {
#line 1555 "create_report.m"
      create_report__SelfTimePercent_26 = create_report__percent_from_ints_2_f_0(create_report__SelfTicks_24, create_report__RootQuanta_15);
    }
#line 1556 "create_report.m"
    {
#line 1556 "create_report.m"
      create_report__SelfTimePerCall_27 = measurement_units__time_percall_2_f_0(create_report__SelfTime_25, create_report__Calls_19);
    }
#line 1559 "create_report.m"
    {
#line 1559 "create_report.m"
      create_report__SelfCallseqs_28 = measurements__callseqs_1_f_0(create_report__Own_8);
    }
#line 1560 "create_report.m"
    {
#line 1560 "create_report.m"
      create_report__SelfCallseqsPercent_29 = create_report__percent_from_ints_2_f_0(create_report__SelfCallseqs_28, create_report__RootCallseqs_16);
    }
#line 1561 "create_report.m"
    {
#line 1561 "create_report.m"
      create_report__SelfCallseqsPerCall_30 = create_report__int_per_call_2_f_0(create_report__SelfCallseqs_28, create_report__Calls_19);
    }
#line 1564 "create_report.m"
    {
#line 1564 "create_report.m"
      create_report__SelfAllocs_31 = measurements__allocs_1_f_0(create_report__Own_8);
    }
#line 1565 "create_report.m"
    {
#line 1565 "create_report.m"
      create_report__SelfAllocsPercent_32 = create_report__percent_from_ints_2_f_0(create_report__SelfAllocs_31, create_report__RootAllocs_17);
    }
#line 1566 "create_report.m"
    {
#line 1566 "create_report.m"
      create_report__SelfAllocsPerCall_33 = create_report__int_per_call_2_f_0(create_report__SelfAllocs_31, create_report__Calls_19);
    }
#line 1569 "create_report.m"
    {
#line 1569 "create_report.m"
      create_report__SelfWords_34 = measurements__words_1_f_0(create_report__Own_8);
    }
#line 1570 "create_report.m"
    {
#line 1570 "create_report.m"
      create_report__SelfMemory_35 = measurement_units__memory_words_2_f_0(create_report__SelfWords_34, create_report__WordSize_13);
    }
#line 1571 "create_report.m"
    {
#line 1571 "create_report.m"
      create_report__SelfMemoryPercent_36 = create_report__percent_from_ints_2_f_0(create_report__SelfWords_34, create_report__RootWords_18);
    }
#line 1572 "create_report.m"
    {
#line 1572 "create_report.m"
      create_report__SelfMemoryPerCall_37 = measurement_units__f_slash_2_f_0(create_report__SelfMemory_35, create_report__Calls_19);
    }
#line 1574 "create_report.m"
    {
#line 1574 "create_report.m"
      create_report__SelfPerf_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 1574 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 0) = ((MR_Box) (create_report__SelfTicks_24));
#line 1574 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 1) = ((MR_Box) (create_report__SelfTime_25));
#line 1574 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 2) = ((MR_Box) (create_report__SelfTimePercent_26));
#line 1574 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 3) = ((MR_Box) (create_report__SelfTimePerCall_27));
#line 1574 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 4) = ((MR_Box) (create_report__SelfCallseqs_28));
#line 1574 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 5) = ((MR_Box) (create_report__SelfCallseqsPercent_29));
#line 1574 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 6) = MR_box_float(create_report__SelfCallseqsPerCall_30);
#line 1574 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 7) = ((MR_Box) (create_report__SelfAllocs_31));
#line 1574 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 8) = ((MR_Box) (create_report__SelfAllocsPercent_32));
#line 1574 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 9) = MR_box_float(create_report__SelfAllocsPerCall_33);
#line 1574 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 10) = ((MR_Box) (create_report__SelfMemory_35));
#line 1574 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 11) = ((MR_Box) (create_report__SelfMemoryPercent_36));
#line 1574 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 12) = ((MR_Box) (create_report__SelfMemoryPerCall_37));
#line 1574 "create_report.m"
    }
#line 1583 "create_report.m"
    if ((create_report__MaybeDesc_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1582 "create_report.m"
      create_report__MaybeTotalPerf_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1583 "create_report.m"
    else
#line 1584 "create_report.m"
      {
#line 1584 "create_report.m"
        MR_Word create_report__Desc_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__MaybeDesc_9, (MR_Integer) 0)));
#line 1584 "create_report.m"
        MR_Integer create_report__TotalTicks_41;
#line 1584 "create_report.m"
        MR_Word create_report__TotalTime_42;
#line 1584 "create_report.m"
        MR_Word create_report__TotalTimePercent_43;
#line 1584 "create_report.m"
        MR_Word create_report__TotalTimePerCall_44;
#line 1584 "create_report.m"
        MR_Integer create_report__TotalCallseqs_45;
#line 1584 "create_report.m"
        MR_Word create_report__TotalCallseqsPercent_46;
#line 1584 "create_report.m"
        MR_Float create_report__TotalCallseqsPerCall_47;
#line 1584 "create_report.m"
        MR_Integer create_report__TotalAllocs_48;
#line 1584 "create_report.m"
        MR_Word create_report__TotalAllocsPercent_49;
#line 1584 "create_report.m"
        MR_Float create_report__TotalAllocsPerCall_50;
#line 1584 "create_report.m"
        MR_Integer create_report__TotalWords_51;
#line 1584 "create_report.m"
        MR_Word create_report__TotalMemory_52;
#line 1584 "create_report.m"
        MR_Word create_report__TotalMemoryPercent_53;
#line 1584 "create_report.m"
        MR_Word create_report__TotalMemoryPerCall_54;
#line 1584 "create_report.m"
        MR_Word create_report__TotalPerf_55;
#line 1584 "create_report.m"
        MR_Integer create_report__V_57_57;
#line 1584 "create_report.m"
        MR_Integer create_report__V_58_58;
#line 1584 "create_report.m"
        MR_Integer create_report__V_59_59;
#line 1584 "create_report.m"
        MR_Integer create_report__V_60_60;
#line 1584 "create_report.m"
        MR_Integer create_report__V_61_61;

#line 1587 "create_report.m"
        {
#line 1587 "create_report.m"
          create_report__V_57_57 = measurements__inherit_quanta_1_f_0(create_report__Desc_40);
        }
#line 1587 "create_report.m"
        create_report__TotalTicks_41 = (create_report__SelfTicks_24 + create_report__V_57_57);
#line 1588 "create_report.m"
        {
#line 1588 "create_report.m"
          create_report__TotalTime_42 = measurement_units__ticks_to_time_2_f_0(create_report__TotalTicks_41, create_report__TicksPerSec_12);
        }
#line 1589 "create_report.m"
        {
#line 1589 "create_report.m"
          create_report__TotalTimePercent_43 = create_report__percent_from_ints_2_f_0(create_report__TotalTicks_41, create_report__RootQuanta_15);
        }
#line 1590 "create_report.m"
        {
#line 1590 "create_report.m"
          create_report__TotalTimePerCall_44 = measurement_units__time_percall_2_f_0(create_report__TotalTime_42, create_report__Calls_19);
        }
#line 1593 "create_report.m"
        {
#line 1593 "create_report.m"
          create_report__V_58_58 = measurements__callseqs_1_f_0(create_report__Own_8);
        }
#line 1593 "create_report.m"
        {
#line 1593 "create_report.m"
          create_report__V_59_59 = measurements__inherit_callseqs_1_f_0(create_report__Desc_40);
        }
#line 1593 "create_report.m"
        create_report__TotalCallseqs_45 = (create_report__V_58_58 + create_report__V_59_59);
#line 1594 "create_report.m"
        {
#line 1594 "create_report.m"
          create_report__TotalCallseqsPercent_46 = create_report__percent_from_ints_2_f_0(create_report__TotalCallseqs_45, create_report__RootCallseqs_16);
        }
#line 1595 "create_report.m"
        {
#line 1595 "create_report.m"
          create_report__TotalCallseqsPerCall_47 = create_report__int_per_call_2_f_0(create_report__TotalCallseqs_45, create_report__Calls_19);
        }
#line 1598 "create_report.m"
        {
#line 1598 "create_report.m"
          create_report__V_60_60 = measurements__inherit_allocs_1_f_0(create_report__Desc_40);
        }
#line 1598 "create_report.m"
        create_report__TotalAllocs_48 = (create_report__SelfAllocs_31 + create_report__V_60_60);
#line 1599 "create_report.m"
        {
#line 1599 "create_report.m"
          create_report__TotalAllocsPercent_49 = create_report__percent_from_ints_2_f_0(create_report__TotalAllocs_48, create_report__RootAllocs_17);
        }
#line 1600 "create_report.m"
        {
#line 1600 "create_report.m"
          create_report__TotalAllocsPerCall_50 = create_report__int_per_call_2_f_0(create_report__TotalAllocs_48, create_report__Calls_19);
        }
#line 1603 "create_report.m"
        {
#line 1603 "create_report.m"
          create_report__V_61_61 = measurements__inherit_words_1_f_0(create_report__Desc_40);
        }
#line 1603 "create_report.m"
        create_report__TotalWords_51 = (create_report__SelfWords_34 + create_report__V_61_61);
#line 1604 "create_report.m"
        {
#line 1604 "create_report.m"
          create_report__TotalMemory_52 = measurement_units__memory_words_2_f_0(create_report__TotalWords_51, create_report__WordSize_13);
        }
#line 1605 "create_report.m"
        {
#line 1605 "create_report.m"
          create_report__TotalMemoryPercent_53 = create_report__percent_from_ints_2_f_0(create_report__TotalWords_51, create_report__RootWords_18);
        }
#line 1606 "create_report.m"
        {
#line 1606 "create_report.m"
          create_report__TotalMemoryPerCall_54 = measurement_units__f_slash_2_f_0(create_report__TotalMemory_52, create_report__Calls_19);
        }
#line 1608 "create_report.m"
        {
#line 1608 "create_report.m"
          create_report__TotalPerf_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
#line 1608 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 0) = ((MR_Box) (create_report__TotalTicks_41));
#line 1608 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 1) = ((MR_Box) (create_report__TotalTime_42));
#line 1608 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 2) = ((MR_Box) (create_report__TotalTimePercent_43));
#line 1608 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 3) = ((MR_Box) (create_report__TotalTimePerCall_44));
#line 1608 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 4) = ((MR_Box) (create_report__TotalCallseqs_45));
#line 1608 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 5) = ((MR_Box) (create_report__TotalCallseqsPercent_46));
#line 1608 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 6) = MR_box_float(create_report__TotalCallseqsPerCall_47);
#line 1608 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 7) = ((MR_Box) (create_report__TotalAllocs_48));
#line 1608 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 8) = ((MR_Box) (create_report__TotalAllocsPercent_49));
#line 1608 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 9) = MR_box_float(create_report__TotalAllocsPerCall_50);
#line 1608 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 10) = ((MR_Box) (create_report__TotalMemory_52));
#line 1608 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 11) = ((MR_Box) (create_report__TotalMemoryPercent_53));
#line 1608 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 12) = ((MR_Box) (create_report__TotalMemoryPerCall_54));
#line 1608 "create_report.m"
        }
#line 1613 "create_report.m"
        {
#line 1613 "create_report.m"
          create_report__MaybeTotalPerf_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1613 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__MaybeTotalPerf_39, 0) = ((MR_Box) (create_report__TotalPerf_55));
#line 1613 "create_report.m"
        }
#line 1584 "create_report.m"
      }
#line 1616 "create_report.m"
    {
#line 1616 "create_report.m"
      MR_Word base;
#line 1616 "create_report.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1616 "create_report.m"
      *create_report__RowData_10 = base;
#line 1616 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 0) = create_report__Subject_7;
#line 1616 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__Calls_19));
#line 1616 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (create_report__Exits_20));
#line 1616 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (create_report__Fails_21));
#line 1616 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (create_report__Redos_22));
#line 1616 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (create_report__Excps_23));
#line 1616 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (create_report__WordSize_13));
#line 1616 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (create_report__SelfPerf_38));
#line 1616 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (create_report__MaybeTotalPerf_39));
#line 1616 "create_report.m"
    }
#line 1533 "create_report.m"
  }
#line 1528 "create_report.m"
}

#line 1470 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
#line 1470 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 1470 "create_report.m"
  MR_Word * create_report__HeadVar__2_2)
#line 1470 "create_report.m"
{
#line 1473 "create_report.m"
  {
#line 1473 "create_report.m"
    MR_bool create_report__succeeded;

#line 1473 "create_report.m"
    if ((create_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1473 "create_report.m"
      {
#line 1473 "create_report.m"
        *create_report__HeadVar__2_2 = (MR_Word) &create_report_scalar_common_3[10];
#line 1473 "create_report.m"
      }
#line 1473 "create_report.m"
    else
#line 1473 "create_report.m"
      {
#line 1473 "create_report.m"
        MR_Word create_report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__HeadVar__1_1, (MR_Integer) 1)));
#line 1473 "create_report.m"
        MR_Word create_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__HeadVar__1_1, (MR_Integer) 0)));

#line 1473 "create_report.m"
        if (((MR_tag((MR_Word) create_report__V_17_17)) == (MR_mktag((MR_Integer) 1))))
#line 1474 "create_report.m"
          *create_report__HeadVar__2_2 = (MR_Word) create_report__V_17_17;
#line 1473 "create_report.m"
        else
#line 1475 "create_report.m"
          {
#line 1475 "create_report.m"
            MR_Box create_report__X_7 = (MR_hl_field(MR_mktag(0), create_report__V_17_17, (MR_Integer) 0));
#line 1475 "create_report.m"
            MR_Word create_report__MaybeXs1_10;

#line 1476 "create_report.m"
            {
#line 1476 "create_report.m"
              create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(create_report__V_16_16, &create_report__MaybeXs1_10);
            }
#line 1480 "create_report.m"
            if (((MR_tag((MR_Word) create_report__MaybeXs1_10)) == (MR_mktag((MR_Integer) 1))))
#line 1482 "create_report.m"
              *create_report__HeadVar__2_2 = create_report__MaybeXs1_10;
#line 1480 "create_report.m"
            else
#line 1478 "create_report.m"
              {
#line 1478 "create_report.m"
                MR_Word create_report__Xs1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeXs1_10, (MR_Integer) 0)));
#line 1478 "create_report.m"
                MR_Word create_report__V_14_14;

#line 1479 "create_report.m"
                {
#line 1479 "create_report.m"
                  create_report__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "create_report.m"
                  MR_hl_field(MR_mktag(1), create_report__V_14_14, 0) = create_report__X_7;
#line 1479 "create_report.m"
                  MR_hl_field(MR_mktag(1), create_report__V_14_14, 1) = ((MR_Box) (create_report__Xs1_11));
#line 1479 "create_report.m"
                }
#line 1479 "create_report.m"
                {
#line 1479 "create_report.m"
                  MR_Word base;
#line 1479 "create_report.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1479 "create_report.m"
                  *create_report__HeadVar__2_2 = base;
#line 1479 "create_report.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__V_14_14));
#line 1479 "create_report.m"
                }
#line 1478 "create_report.m"
              }
#line 1475 "create_report.m"
          }
#line 1473 "create_report.m"
      }
#line 1473 "create_report.m"
  }
#line 1470 "create_report.m"
}

#line 667 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_p_0(
#line 667 "create_report.m"
  MR_Word create_report__Deep_5,
#line 667 "create_report.m"
  MR_Word create_report__RawData_7,
#line 667 "create_report.m"
  MR_Word * create_report__Data_8)
#line 667 "create_report.m"
{
#line 672 "create_report.m"
  {
#line 672 "create_report.m"
    MR_bool create_report__succeeded;

#line 672 "create_report.m"
#line 672 "create_report.m"
    switch (MR_tag((MR_Word) create_report__RawData_7)) {
#line 672 "create_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 672 "create_report.m"
      case (MR_Integer) 0:
#line 672 "create_report.m"
        {
#line 672 "create_report.m"
          MR_Word create_report__RawGetter_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawData_7, (MR_Integer) 0)));
#line 672 "create_report.m"
          MR_Word create_report__RawSetter_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawData_7, (MR_Integer) 1)));
#line 672 "create_report.m"
          MR_Word create_report__GetterProcDesc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_9, (MR_Integer) 0)));
#line 672 "create_report.m"
          MR_Word create_report__GetterOwn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_9, (MR_Integer) 1)));
#line 672 "create_report.m"
          MR_Word create_report__GetterDesc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_9, (MR_Integer) 2)));
#line 672 "create_report.m"
          MR_Word create_report__SetterProcDesc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_10, (MR_Integer) 0)));
#line 672 "create_report.m"
          MR_Word create_report__SetterOwn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_10, (MR_Integer) 1)));
#line 672 "create_report.m"
          MR_Word create_report__SetterDesc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_10, (MR_Integer) 2)));
#line 672 "create_report.m"
          MR_Word create_report__GetterRowData_18;
#line 672 "create_report.m"
          MR_Word create_report__SetterRowData_19;
#line 672 "create_report.m"
          MR_Word create_report__SumOwn_20;
#line 672 "create_report.m"
          MR_Word create_report__SumDesc_21;
#line 672 "create_report.m"
          MR_Word create_report__SumRowData_22;
#line 672 "create_report.m"
          MR_Word create_report__V_43_43;
#line 672 "create_report.m"
          MR_Word create_report__V_49_49;
#line 672 "create_report.m"
          MR_Word create_report__V_55_55;

#line 1525 "create_report.m"
          {
#line 1525 "create_report.m"
            create_report__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
            MR_hl_field(MR_mktag(1), create_report__V_43_43, 0) = ((MR_Box) (create_report__GetterDesc_14));
#line 1525 "create_report.m"
          }
#line 1525 "create_report.m"
          {
#line 1525 "create_report.m"
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__GetterProcDesc_12)), create_report__GetterOwn_13, create_report__V_43_43, &create_report__GetterRowData_18);
          }
#line 1525 "create_report.m"
          {
#line 1525 "create_report.m"
            create_report__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
            MR_hl_field(MR_mktag(1), create_report__V_49_49, 0) = ((MR_Box) (create_report__SetterDesc_17));
#line 1525 "create_report.m"
          }
#line 1525 "create_report.m"
          {
#line 1525 "create_report.m"
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__SetterProcDesc_15)), create_report__SetterOwn_16, create_report__V_49_49, &create_report__SetterRowData_19);
          }
#line 679 "create_report.m"
          {
#line 679 "create_report.m"
            create_report__SumOwn_20 = measurements__add_own_to_own_2_f_0(create_report__GetterOwn_13, create_report__SetterOwn_16);
          }
#line 680 "create_report.m"
          {
#line 680 "create_report.m"
            create_report__SumDesc_21 = measurements__add_inherit_to_inherit_2_f_0(create_report__GetterDesc_14, create_report__SetterDesc_17);
          }
#line 681 "create_report.m"
          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1525 "create_report.m"
          {
#line 1525 "create_report.m"
            create_report__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
            MR_hl_field(MR_mktag(1), create_report__V_55_55, 0) = ((MR_Box) (create_report__SumDesc_21));
#line 1525 "create_report.m"
          }
#line 1525 "create_report.m"
          {
#line 1525 "create_report.m"
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) ((MR_Integer) 0)), create_report__SumOwn_20, create_report__V_55_55, &create_report__SumRowData_22);
          }
#line 683 "create_report.m"
          {
#line 683 "create_report.m"
            MR_Word base;
#line 683 "create_report.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 683 "create_report.m"
            *create_report__Data_8 = base;
#line 683 "create_report.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__GetterRowData_18));
#line 683 "create_report.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__SetterRowData_19));
#line 683 "create_report.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (create_report__SumRowData_22));
#line 683 "create_report.m"
          }
#line 672 "create_report.m"
        }
#line 672 "create_report.m"
        break;
#line 672 "create_report.m"
      case (MR_Integer) 1:
#line 685 "create_report.m"
        {
#line 685 "create_report.m"
          MR_Word create_report__RawGetter_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__RawData_7, (MR_Integer) 0)));
#line 685 "create_report.m"
          MR_Word create_report__GetterProcDesc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_24, (MR_Integer) 0)));
#line 685 "create_report.m"
          MR_Word create_report__GetterOwn_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_24, (MR_Integer) 1)));
#line 685 "create_report.m"
          MR_Word create_report__GetterDesc_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_24, (MR_Integer) 2)));
#line 685 "create_report.m"
          MR_Word create_report__GetterRowData_28;
#line 685 "create_report.m"
          MR_Word create_report__V_61_61;

#line 1525 "create_report.m"
          {
#line 1525 "create_report.m"
            create_report__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
            MR_hl_field(MR_mktag(1), create_report__V_61_61, 0) = ((MR_Box) (create_report__GetterDesc_27));
#line 1525 "create_report.m"
          }
#line 1525 "create_report.m"
          {
#line 1525 "create_report.m"
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__GetterProcDesc_25)), create_report__GetterOwn_26, create_report__V_61_61, &create_report__GetterRowData_28);
          }
#line 689 "create_report.m"
          {
#line 689 "create_report.m"
            MR_Word base;
#line 689 "create_report.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 689 "create_report.m"
            *create_report__Data_8 = base;
#line 689 "create_report.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__GetterRowData_28));
#line 689 "create_report.m"
          }
#line 685 "create_report.m"
        }
#line 672 "create_report.m"
        break;
#line 672 "create_report.m"
      case (MR_Integer) 2:
#line 691 "create_report.m"
        {
#line 691 "create_report.m"
          MR_Word create_report__RawSetter_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__RawData_7, (MR_Integer) 0)));
#line 691 "create_report.m"
          MR_Word create_report__SetterProcDesc_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_29, (MR_Integer) 0)));
#line 691 "create_report.m"
          MR_Word create_report__SetterOwn_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_29, (MR_Integer) 1)));
#line 691 "create_report.m"
          MR_Word create_report__SetterDesc_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_29, (MR_Integer) 2)));
#line 691 "create_report.m"
          MR_Word create_report__SetterRowData_33;
#line 691 "create_report.m"
          MR_Word create_report__V_67_67;

#line 1525 "create_report.m"
          {
#line 1525 "create_report.m"
            create_report__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
            MR_hl_field(MR_mktag(1), create_report__V_67_67, 0) = ((MR_Box) (create_report__SetterDesc_32));
#line 1525 "create_report.m"
          }
#line 1525 "create_report.m"
          {
#line 1525 "create_report.m"
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__SetterProcDesc_30)), create_report__SetterOwn_31, create_report__V_67_67, &create_report__SetterRowData_33);
          }
#line 695 "create_report.m"
          {
#line 695 "create_report.m"
            MR_Word base;
#line 695 "create_report.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 695 "create_report.m"
            *create_report__Data_8 = base;
#line 695 "create_report.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (create_report__SetterRowData_33));
#line 695 "create_report.m"
          }
#line 691 "create_report.m"
        }
#line 672 "create_report.m"
        break;
#line 672 "create_report.m"
    }
#line 672 "create_report.m"
  }
#line 667 "create_report.m"
}

#line 665 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0_1(
#line 665 "create_report.m"
  MR_Box create_report__closure_arg,
#line 665 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 665 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 665 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 665 "create_report.m"
{
#line 665 "create_report.m"
  {
#line 665 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 665 "create_report.m"
    MR_Word create_report__conv0_Data_8;

#line 665 "create_report.m"
    {
#line 665 "create_report.m"
      create_report__getter_setter_raw_data_to_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_Data_8);
    }
#line 665 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_Data_8));
#line 665 "create_report.m"
  }
#line 665 "create_report.m"
}

#line 661 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0(
#line 661 "create_report.m"
  MR_Word create_report__Deep_5,
#line 661 "create_report.m"
  MR_Word create_report__RawMap_7,
#line 661 "create_report.m"
  MR_Word * create_report__Map_8)
#line 661 "create_report.m"
{
#line 664 "create_report.m"
  {
#line 664 "create_report.m"
    MR_bool create_report__succeeded;
#line 664 "create_report.m"
    MR_Word create_report__V_9_9;

#line 665 "create_report.m"
    {
#line 665 "create_report.m"
      create_report__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 665 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_9_9, 0) = ((MR_Box) (&create_report_scalar_common_6[16]));
#line 665 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_9_9, 1) = ((MR_Box) (create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0_1));
#line 665 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 665 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_9_9, 3) = ((MR_Box) (create_report__Deep_5));
#line 665 "create_report.m"
    }
#line 665 "create_report.m"
    {
#line 665 "create_report.m"
      mercury__map__map_values_3_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[7], (MR_Word) &create_report_scalar_common_2[10], create_report__V_9_9, create_report__RawMap_7, create_report__Map_8);
#line 665 "create_report.m"
      return;
    }
#line 664 "create_report.m"
  }
#line 661 "create_report.m"
}

#line 452 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_2(
#line 452 "create_report.m"
  MR_Box create_report__closure_arg,
#line 452 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 452 "create_report.m"
  MR_Box * create_report__wrapper_arg_2)
#line 452 "create_report.m"
{
#line 452 "create_report.m"
  {
#line 452 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 452 "create_report.m"
    MR_Word create_report__conv0_CliqueCallSiteReport_6;

#line 452 "create_report.m"
    {
#line 452 "create_report.m"
      create_report__create_child_call_site_report_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv0_CliqueCallSiteReport_6);
    }
#line 452 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_CliqueCallSiteReport_6));
#line 452 "create_report.m"
  }
#line 452 "create_report.m"
}

#line 438 "create_report.m"
static MR_bool MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_1(
#line 438 "create_report.m"
  MR_Box create_report__closure_arg)
#line 438 "create_report.m"
{
#line 438 "create_report.m"
  {
#line 438 "create_report.m"
    MR_bool create_report__succeeded;
#line 438 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;

#line 438 "create_report.m"
    {
#line 438 "create_report.m"
      return create_report__succeeded = create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__438__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))));
    }
#line 438 "create_report.m"
    return create_report__succeeded;
#line 438 "create_report.m"
  }
#line 438 "create_report.m"
}

#line 424 "create_report.m"
static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(
#line 424 "create_report.m"
  MR_Word create_report__Deep_8,
#line 424 "create_report.m"
  MR_Word create_report__ProcDesc_10,
#line 424 "create_report.m"
  MR_Word create_report__PDPtr_11,
#line 424 "create_report.m"
  MR_Word * create_report__Own_12,
#line 424 "create_report.m"
  MR_Word * create_report__Desc_13,
#line 424 "create_report.m"
  MR_Word * create_report__CliquePDReport_14)
#line 424 "create_report.m"
{
#line 443 "create_report.m"
  {
#line 443 "create_report.m"
    MR_bool create_report__succeeded;

#line 431 "create_report.m"
    {
#line 431 "create_report.m"
      create_report__succeeded = profile__valid_proc_dynamic_ptr_2_p_0(create_report__Deep_8, create_report__PDPtr_11);
    }
#line 443 "create_report.m"
    if (create_report__succeeded)
#line 432 "create_report.m"
      {
#line 432 "create_report.m"
        MR_Word create_report__PDRowData_15;
#line 432 "create_report.m"
        MR_Word create_report__PD_16;
#line 432 "create_report.m"
        MR_Word create_report__PSPtr_17;
#line 432 "create_report.m"
        MR_Word create_report__CliqueCallSiteReports_18;
#line 432 "create_report.m"
        MR_Word create_report__V_19_19;
#line 432 "create_report.m"
        MR_Word create_report__V_21_21;
#line 432 "create_report.m"
        MR_Word create_report__V_39_39;
#line 432 "create_report.m"
        MR_Word create_report__PairedSlots_43;
#line 432 "create_report.m"
        MR_Word create_report__V_44_44;
#line 437 "create_report.m"
        MR_ArrayPtr create_report__V_25_25;
#line 437 "create_report.m"
        MR_Word create_report__V_26_26;
#line 438 "create_report.m"
        MR_String create_report__V_27_27;
#line 438 "create_report.m"
        MR_Integer create_report__V_28_28;
#line 438 "create_report.m"
        MR_String create_report__V_29_29;
#line 438 "create_report.m"
        MR_String create_report__V_30_30;
#line 438 "create_report.m"
        MR_String create_report__V_31_31;

#line 432 "create_report.m"
        {
#line 432 "create_report.m"
          profile__deep_lookup_pd_own_3_p_0(create_report__Deep_8, create_report__PDPtr_11, create_report__Own_12);
        }
#line 433 "create_report.m"
        {
#line 433 "create_report.m"
          profile__deep_lookup_pd_desc_3_p_0(create_report__Deep_8, create_report__PDPtr_11, create_report__Desc_13);
        }
#line 1525 "create_report.m"
        {
#line 1525 "create_report.m"
          create_report__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_39_39, 0) = ((MR_Box) (*create_report__Desc_13));
#line 1525 "create_report.m"
        }
#line 1525 "create_report.m"
        {
#line 1525 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_8, ((MR_Box) (create_report__ProcDesc_10)), *create_report__Own_12, create_report__V_39_39, &create_report__PDRowData_15);
        }
#line 436 "create_report.m"
        {
#line 436 "create_report.m"
          profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_8, create_report__PDPtr_11, &create_report__PD_16);
        }
#line 437 "create_report.m"
        create_report__PSPtr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_16, (MR_Integer) 0)));
#line 437 "create_report.m"
        create_report__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_16, (MR_Integer) 1)));
#line 437 "create_report.m"
        create_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_16, (MR_Integer) 2)));
#line 438 "create_report.m"
        create_report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 0)));
#line 438 "create_report.m"
        create_report__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 1)));
#line 438 "create_report.m"
        create_report__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 2)));
#line 438 "create_report.m"
        create_report__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 3)));
#line 438 "create_report.m"
        create_report__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 4)));
#line 438 "create_report.m"
        create_report__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 5)));
#line 438 "create_report.m"
        {
#line 438 "create_report.m"
          create_report__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 438 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_19_19, 0) = ((MR_Box) (&create_report_scalar_common_7[3]));
#line 438 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_19_19, 1) = ((MR_Box) (create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_1));
#line 438 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 438 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_19_19, 3) = ((MR_Box) (create_report__PSPtr_17));
#line 438 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_19_19, 4) = ((MR_Box) (create_report__V_21_21));
#line 438 "create_report.m"
        }
#line 438 "create_report.m"
        {
#line 438 "create_report.m"
          mercury__require__require_2_p_0(create_report__V_19_19, (MR_String) "create_clique_proc_dynamic_report: psptr mismatch");
        }
#line 451 "create_report.m"
        {
#line 451 "create_report.m"
          analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(create_report__Deep_8, create_report__PDPtr_11, &create_report__PairedSlots_43);
        }
#line 452 "create_report.m"
        {
#line 452 "create_report.m"
          create_report__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 452 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_44_44, 0) = ((MR_Box) (&create_report_scalar_common_5[5]));
#line 452 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_44_44, 1) = ((MR_Box) (create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_2));
#line 452 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 452 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_44_44, 3) = ((MR_Box) (create_report__Deep_8));
#line 452 "create_report.m"
        }
#line 452 "create_report.m"
        {
#line 452 "create_report.m"
          mercury__list__map_3_p_0((MR_Word) &create_report_scalar_common_2[2], (MR_Word) &report__report__type_ctor_info_clique_call_site_report_0, create_report__V_44_44, create_report__PairedSlots_43, &create_report__CliqueCallSiteReports_18);
        }
#line 441 "create_report.m"
        {
#line 441 "create_report.m"
          MR_Word base;
#line 441 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "create_report.m"
          *create_report__CliquePDReport_14 = base;
#line 441 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__PDRowData_15));
#line 441 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__CliqueCallSiteReports_18));
#line 441 "create_report.m"
        }
#line 432 "create_report.m"
      }
#line 443 "create_report.m"
    else
#line 444 "create_report.m"
      {
#line 444 "create_report.m"
        {
#line 444 "create_report.m"
          mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_clique_proc_dynamic_report\'/7", (MR_String) "invalid proc_dynamic index");
#line 444 "create_report.m"
          return;
        }
#line 444 "create_report.m"
      }
#line 443 "create_report.m"
  }
#line 424 "create_report.m"
}

#line 936 "create_report.m"
static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_call_site_summary__936__1_2_p_0(
#line 936 "create_report.m"
  MR_Word create_report__CalleePSPtr_13,
#line 936 "create_report.m"
  MR_Word create_report__CalleePSPtrFromCall_21)
#line 936 "create_report.m"
{
#line 936 "create_report.m"
  {
#line 936 "create_report.m"
    MR_bool create_report__succeeded;
#line 936 "create_report.m"
    MR_Integer create_report__V_135_135 = (MR_Integer) create_report__CalleePSPtr_13;
#line 936 "create_report.m"
    MR_Integer create_report__V_136_136 = (MR_Integer) create_report__CalleePSPtrFromCall_21;

#line 936 "create_report.m"
    create_report__succeeded = (create_report__V_135_135 == create_report__V_136_136);
#line 936 "create_report.m"
    return create_report__succeeded;
#line 936 "create_report.m"
  }
#line 936 "create_report.m"
}

#line 438 "create_report.m"
static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__438__1_2_p_0(
#line 438 "create_report.m"
  MR_Word create_report__PSPtr_17,
#line 438 "create_report.m"
  MR_Word create_report__HeadVar__2_21)
#line 438 "create_report.m"
{
#line 438 "create_report.m"
  {
#line 438 "create_report.m"
    MR_bool create_report__succeeded;
#line 438 "create_report.m"
    MR_Integer create_report__V_34_34 = (MR_Integer) create_report__PSPtr_17;
#line 438 "create_report.m"
    MR_Integer create_report__V_35_35 = (MR_Integer) create_report__HeadVar__2_21;

#line 438 "create_report.m"
    create_report__succeeded = (create_report__V_34_34 == create_report__V_35_35);
#line 438 "create_report.m"
    return create_report__succeeded;
#line 438 "create_report.m"
  }
#line 438 "create_report.m"
}

#line 635 "create_report.m"
static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &create_report_scalar_common_2[8], create_report__HeadVar__1_1, ((MR_Box) (create_report__Cast_HeadVar1_4)), ((MR_Box) (create_report__Cast_HeadVar2_5)));
#line 635 "create_report.m"
      return;
    }
#line 635 "create_report.m"
  }
#line 635 "create_report.m"
}

#line 635 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0(
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
      return create_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &create_report_scalar_common_2[8], ((MR_Box) (create_report__Cast_HeadVar1_3)), ((MR_Box) (create_report__Cast_HeadVar2_4)));
    }
#line 635 "create_report.m"
    return create_report__succeeded;
#line 635 "create_report.m"
  }
#line 635 "create_report.m"
}

#line 634 "create_report.m"
static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0(
#line 634 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 634 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 634 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 634 "create_report.m"
{
#line 634 "create_report.m"
  {
#line 634 "create_report.m"
    MR_bool create_report__succeeded;
#line 634 "create_report.m"
    MR_Word create_report__Cast_HeadVar1_4 = create_report__HeadVar__2_2;
#line 634 "create_report.m"
    MR_Word create_report__Cast_HeadVar2_5 = create_report__HeadVar__3_3;

#line 634 "create_report.m"
    {
#line 634 "create_report.m"
      mercury__builtin__compare_3_p_0((MR_Word) &create_report_scalar_common_2[7], create_report__HeadVar__1_1, ((MR_Box) (create_report__Cast_HeadVar1_4)), ((MR_Box) (create_report__Cast_HeadVar2_5)));
#line 634 "create_report.m"
      return;
    }
#line 634 "create_report.m"
  }
#line 634 "create_report.m"
}

#line 634 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0(
#line 634 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 634 "create_report.m"
  MR_Word create_report__HeadVar__2_2)
#line 634 "create_report.m"
{
#line 634 "create_report.m"
  {
#line 634 "create_report.m"
    MR_bool create_report__succeeded;
#line 634 "create_report.m"
    MR_Word create_report__Cast_HeadVar1_3 = create_report__HeadVar__1_1;
#line 634 "create_report.m"
    MR_Word create_report__Cast_HeadVar2_4 = create_report__HeadVar__2_2;

#line 634 "create_report.m"
    {
#line 634 "create_report.m"
      return create_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &create_report_scalar_common_2[7], ((MR_Box) (create_report__Cast_HeadVar1_3)), ((MR_Box) (create_report__Cast_HeadVar2_4)));
    }
#line 634 "create_report.m"
    return create_report__succeeded;
#line 634 "create_report.m"
  }
#line 634 "create_report.m"
}

#line 636 "create_report.m"
static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &create_report_scalar_common_2[9], create_report__HeadVar__1_1, ((MR_Box) (create_report__Cast_HeadVar1_4)), ((MR_Box) (create_report__Cast_HeadVar2_5)));
#line 636 "create_report.m"
      return;
    }
#line 636 "create_report.m"
  }
#line 636 "create_report.m"
}

#line 636 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0(
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
      return create_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &create_report_scalar_common_2[9], ((MR_Box) (create_report__Cast_HeadVar1_3)), ((MR_Box) (create_report__Cast_HeadVar2_4)));
    }
#line 636 "create_report.m"
    return create_report__succeeded;
#line 636 "create_report.m"
  }
#line 636 "create_report.m"
}

#line 627 "create_report.m"
static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0(
#line 627 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 627 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 627 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 627 "create_report.m"
{
#line 627 "create_report.m"
  {
#line 627 "create_report.m"
    MR_bool create_report__succeeded;
#line 627 "create_report.m"
    MR_Integer create_report__CastX_12 = (MR_Integer) create_report__HeadVar__2_2;
#line 627 "create_report.m"
    MR_Integer create_report__CastY_13 = (MR_Integer) create_report__HeadVar__3_3;

#line 627 "create_report.m"
    create_report__succeeded = (create_report__CastX_12 == create_report__CastY_13);
#line 627 "create_report.m"
    if (create_report__succeeded)
#line 4421 "create_report.c"
      *create_report__HeadVar__1_1 = (MR_Integer) 0;
#line 627 "create_report.m"
    else
#line 627 "create_report.m"
      {
#line 627 "create_report.m"
        MR_Word create_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
#line 627 "create_report.m"
        MR_Word create_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
#line 627 "create_report.m"
        MR_Word create_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 2)));
#line 627 "create_report.m"
        MR_Word create_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 627 "create_report.m"
        MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 627 "create_report.m"
        MR_Word create_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 2)));
#line 627 "create_report.m"
        MR_Word create_report__V_10_10;

#line 627 "create_report.m"
        {
#line 627 "create_report.m"
          report____Compare____proc_desc_0_0(&create_report__V_10_10, create_report__V_4_4, create_report__V_7_7);
        }
#line 4447 "create_report.c"
        create_report__succeeded = (create_report__V_10_10 == (MR_Integer) 0);
#line 627 "create_report.m"
        create_report__succeeded = !(create_report__succeeded);
#line 627 "create_report.m"
        if (create_report__succeeded)
#line 627 "create_report.m"
          *create_report__HeadVar__1_1 = create_report__V_10_10;
#line 627 "create_report.m"
        else
#line 627 "create_report.m"
          {
#line 627 "create_report.m"
            MR_Word create_report__V_11_11;

#line 627 "create_report.m"
            {
#line 627 "create_report.m"
              measurements____Compare____own_prof_info_0_0(&create_report__V_11_11, create_report__V_5_5, create_report__V_8_8);
            }
#line 4467 "create_report.c"
            create_report__succeeded = (create_report__V_11_11 == (MR_Integer) 0);
#line 627 "create_report.m"
            create_report__succeeded = !(create_report__succeeded);
#line 627 "create_report.m"
            if (create_report__succeeded)
#line 627 "create_report.m"
              *create_report__HeadVar__1_1 = create_report__V_11_11;
#line 627 "create_report.m"
            else
#line 627 "create_report.m"
              {
#line 627 "create_report.m"
                measurements____Compare____inherit_prof_info_0_0(create_report__HeadVar__1_1, create_report__V_6_6, create_report__V_9_9);
#line 627 "create_report.m"
                return;
              }
#line 627 "create_report.m"
          }
#line 627 "create_report.m"
      }
#line 627 "create_report.m"
  }
#line 627 "create_report.m"
}

#line 627 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0(
#line 627 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 627 "create_report.m"
  MR_Word create_report__HeadVar__2_2)
#line 627 "create_report.m"
{
#line 627 "create_report.m"
  {
#line 627 "create_report.m"
    MR_bool create_report__succeeded;
#line 627 "create_report.m"
    MR_Integer create_report__CastX_9 = (MR_Integer) create_report__HeadVar__1_1;
#line 627 "create_report.m"
    MR_Integer create_report__CastY_10 = (MR_Integer) create_report__HeadVar__2_2;

#line 627 "create_report.m"
    create_report__succeeded = (create_report__CastX_9 == create_report__CastY_10);
#line 627 "create_report.m"
    if (create_report__succeeded)
#line 627 "create_report.m"
      create_report__succeeded = MR_TRUE;
#line 627 "create_report.m"
    else
#line 627 "create_report.m"
      {
#line 627 "create_report.m"
        MR_Word create_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 0)));
#line 627 "create_report.m"
        MR_Word create_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 1)));
#line 627 "create_report.m"
        MR_Word create_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 2)));
#line 627 "create_report.m"
        MR_Word create_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
#line 627 "create_report.m"
        MR_Word create_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
#line 627 "create_report.m"
        MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 2)));

#line 4534 "create_report.c"
        {
#line 4536 "create_report.c"
          create_report__succeeded = report____Unify____proc_desc_0_0(create_report__V_3_3, create_report__V_6_6);
        }
#line 627 "create_report.m"
        if (create_report__succeeded)
#line 627 "create_report.m"
          {
#line 4543 "create_report.c"
            {
#line 4545 "create_report.c"
              create_report__succeeded = measurements____Unify____own_prof_info_0_0(create_report__V_4_4, create_report__V_7_7);
            }
#line 627 "create_report.m"
            if (create_report__succeeded)
#line 4550 "create_report.c"
              {
#line 4552 "create_report.c"
                return create_report__succeeded = measurements____Unify____inherit_prof_info_0_0(create_report__V_5_5, create_report__V_8_8);
              }
#line 627 "create_report.m"
          }
#line 627 "create_report.m"
      }
#line 627 "create_report.m"
    return create_report__succeeded;
#line 627 "create_report.m"
  }
#line 627 "create_report.m"
}

#line 973 "create_report.m"
static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0(
#line 973 "create_report.m"
  MR_Word * create_report__HeadVar__1_1,
#line 973 "create_report.m"
  MR_Word create_report__HeadVar__2_2,
#line 973 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 973 "create_report.m"
{
#line 973 "create_report.m"
  {
#line 973 "create_report.m"
    MR_bool create_report__succeeded;
#line 973 "create_report.m"
    MR_Integer create_report__CastX_12 = (MR_Integer) create_report__HeadVar__2_2;
#line 973 "create_report.m"
    MR_Integer create_report__CastY_13 = (MR_Integer) create_report__HeadVar__3_3;

#line 973 "create_report.m"
    create_report__succeeded = (create_report__CastX_12 == create_report__CastY_13);
#line 973 "create_report.m"
    if (create_report__succeeded)
#line 4590 "create_report.c"
      *create_report__HeadVar__1_1 = (MR_Integer) 0;
#line 973 "create_report.m"
    else
#line 973 "create_report.m"
      {
#line 973 "create_report.m"
        MR_Word create_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
#line 973 "create_report.m"
        MR_Word create_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
#line 973 "create_report.m"
        MR_Word create_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 2)));
#line 973 "create_report.m"
        MR_Word create_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 973 "create_report.m"
        MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 973 "create_report.m"
        MR_Word create_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 2)));
#line 973 "create_report.m"
        MR_Word create_report__V_10_10;
#line 973 "create_report.m"
        MR_Integer create_report__V_17_17 = (MR_Integer) create_report__V_4_4;
#line 973 "create_report.m"
        MR_Integer create_report__V_18_18 = (MR_Integer) create_report__V_7_7;

#line 973 "create_report.m"
        {
#line 973 "create_report.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&create_report__V_10_10, create_report__V_17_17, create_report__V_18_18);
        }
#line 4620 "create_report.c"
        create_report__succeeded = (create_report__V_10_10 == (MR_Integer) 0);
#line 973 "create_report.m"
        create_report__succeeded = !(create_report__succeeded);
#line 973 "create_report.m"
        if (create_report__succeeded)
#line 973 "create_report.m"
          *create_report__HeadVar__1_1 = create_report__V_10_10;
#line 973 "create_report.m"
        else
#line 973 "create_report.m"
          {
#line 973 "create_report.m"
            MR_Word create_report__V_11_11;

#line 973 "create_report.m"
            {
#line 973 "create_report.m"
              measurements____Compare____own_prof_info_0_0(&create_report__V_11_11, create_report__V_5_5, create_report__V_8_8);
            }
#line 4640 "create_report.c"
            create_report__succeeded = (create_report__V_11_11 == (MR_Integer) 0);
#line 973 "create_report.m"
            create_report__succeeded = !(create_report__succeeded);
#line 973 "create_report.m"
            if (create_report__succeeded)
#line 973 "create_report.m"
              *create_report__HeadVar__1_1 = create_report__V_11_11;
#line 973 "create_report.m"
            else
#line 973 "create_report.m"
              {
#line 973 "create_report.m"
                measurements____Compare____inherit_prof_info_0_0(create_report__HeadVar__1_1, create_report__V_6_6, create_report__V_9_9);
#line 973 "create_report.m"
                return;
              }
#line 973 "create_report.m"
          }
#line 973 "create_report.m"
      }
#line 973 "create_report.m"
  }
#line 973 "create_report.m"
}

#line 973 "create_report.m"
static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0(
#line 973 "create_report.m"
  MR_Word create_report__HeadVar__1_1,
#line 973 "create_report.m"
  MR_Word create_report__HeadVar__2_2)
#line 973 "create_report.m"
{
#line 973 "create_report.m"
  {
#line 973 "create_report.m"
    MR_bool create_report__succeeded;
#line 973 "create_report.m"
    MR_Integer create_report__CastX_9 = (MR_Integer) create_report__HeadVar__1_1;
#line 973 "create_report.m"
    MR_Integer create_report__CastY_10 = (MR_Integer) create_report__HeadVar__2_2;

#line 973 "create_report.m"
    create_report__succeeded = (create_report__CastX_9 == create_report__CastY_10);
#line 973 "create_report.m"
    if (create_report__succeeded)
#line 973 "create_report.m"
      create_report__succeeded = MR_TRUE;
#line 973 "create_report.m"
    else
#line 973 "create_report.m"
      {
#line 973 "create_report.m"
        MR_Word create_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 0)));
#line 973 "create_report.m"
        MR_Word create_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 1)));
#line 973 "create_report.m"
        MR_Word create_report__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 2)));
#line 973 "create_report.m"
        MR_Word create_report__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
#line 973 "create_report.m"
        MR_Word create_report__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
#line 973 "create_report.m"
        MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 2)));
#line 973 "create_report.m"
        MR_Integer create_report__V_14_14 = (MR_Integer) create_report__V_3_3;
#line 973 "create_report.m"
        MR_Integer create_report__V_15_15 = (MR_Integer) create_report__V_6_6;

#line 4711 "create_report.c"
        create_report__succeeded = (create_report__V_14_14 == create_report__V_15_15);
#line 973 "create_report.m"
        if (create_report__succeeded)
#line 973 "create_report.m"
          {
#line 4717 "create_report.c"
            {
#line 4719 "create_report.c"
              create_report__succeeded = measurements____Unify____own_prof_info_0_0(create_report__V_4_4, create_report__V_7_7);
            }
#line 973 "create_report.m"
            if (create_report__succeeded)
#line 4724 "create_report.c"
              {
#line 4726 "create_report.c"
                return create_report__succeeded = measurements____Unify____inherit_prof_info_0_0(create_report__V_5_5, create_report__V_8_8);
              }
#line 973 "create_report.m"
          }
#line 973 "create_report.m"
      }
#line 973 "create_report.m"
    return create_report__succeeded;
#line 973 "create_report.m"
  }
#line 973 "create_report.m"
}

#line 1738 "create_report.m"
static MR_Word MR_CALL 
create_report__describe_clique_member_2_f_0(
#line 1738 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1738 "create_report.m"
  MR_Word create_report__PDPtr_5)
#line 1738 "create_report.m"
{
#line 1740 "create_report.m"
  {
#line 1740 "create_report.m"
    MR_bool create_report__succeeded;
#line 1740 "create_report.m"
    MR_Word create_report__ProcDesc_6;
#line 1740 "create_report.m"
    MR_Word create_report__PD_7;
#line 1740 "create_report.m"
    MR_Word create_report__V_8_8;
#line 1742 "create_report.m"
    MR_ArrayPtr create_report__V_9_9;
#line 1742 "create_report.m"
    MR_Word create_report__V_10_10;

#line 1741 "create_report.m"
    {
#line 1741 "create_report.m"
      profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__PD_7);
    }
#line 1742 "create_report.m"
    create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 0)));
#line 1742 "create_report.m"
    create_report__V_9_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 1)));
#line 1742 "create_report.m"
    create_report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 2)));
#line 1742 "create_report.m"
    {
#line 1742 "create_report.m"
      return create_report__ProcDesc_6 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__V_8_8);
    }
#line 1740 "create_report.m"
    return create_report__ProcDesc_6;
#line 1740 "create_report.m"
  }
#line 1738 "create_report.m"
}

#line 1666 "create_report.m"
static MR_Word MR_CALL 
create_report__describe_call_site_2_f_0(
#line 1666 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1666 "create_report.m"
  MR_Word create_report__CSSPtr_5)
#line 1666 "create_report.m"
{
#line 1668 "create_report.m"
  {
#line 1668 "create_report.m"
    MR_bool create_report__succeeded;
#line 1668 "create_report.m"
    MR_Word create_report__CallSiteDesc_6;
#line 1668 "create_report.m"
    MR_Word create_report__ContainingPSPtr_8;
#line 1668 "create_report.m"
    MR_Integer create_report__SlotNumber_9;
#line 1668 "create_report.m"
    MR_Integer create_report__LineNumber_11;
#line 1668 "create_report.m"
    MR_Word create_report__RevGoalPath_12;
#line 1668 "create_report.m"
    MR_String create_report__FileName_14;
#line 1668 "create_report.m"
    MR_String create_report__ModuleName_15;
#line 1668 "create_report.m"
    MR_String create_report__UnQualRefinedName_16;
#line 1668 "create_report.m"
    MR_String create_report__QualRefinedName_17;
#line 1668 "create_report.m"
    MR_Word create_report__MaybeCalleeDesc_21;

#line 1669 "create_report.m"
    {
#line 1669 "create_report.m"
      create_report__succeeded = profile__valid_call_site_static_ptr_2_p_0(create_report__Deep_4, create_report__CSSPtr_5);
    }
#line 1690 "create_report.m"
    if (create_report__succeeded)
#line 1670 "create_report.m"
      {
#line 1670 "create_report.m"
        MR_Word create_report__CSS_7;
#line 1670 "create_report.m"
        MR_Word create_report__Kind_10;
#line 1670 "create_report.m"
        MR_Word create_report__ContainingPS_13;
#line 1674 "create_report.m"
        MR_Word create_report__V_22_22;
#line 1674 "create_report.m"
        MR_String create_report__V_26_26;
#line 1674 "create_report.m"
        MR_Integer create_report__V_27_27;
#line 1674 "create_report.m"
        MR_Word create_report__V_28_28;
#line 1674 "create_report.m"
        MR_ArrayPtr create_report__V_29_29;
#line 1674 "create_report.m"
        MR_ArrayPtr create_report__V_30_30;
#line 1674 "create_report.m"
        MR_Word create_report__V_31_31;
#line 1674 "create_report.m"
        MR_Word create_report__V_32_32;

#line 1670 "create_report.m"
        {
#line 1670 "create_report.m"
          profile__deep_lookup_call_site_statics_3_p_0(create_report__Deep_4, create_report__CSSPtr_5, &create_report__CSS_7);
        }
#line 1671 "create_report.m"
        create_report__ContainingPSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 0)));
#line 1671 "create_report.m"
        create_report__SlotNumber_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 1)));
#line 1671 "create_report.m"
        create_report__Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 2)));
#line 1671 "create_report.m"
        create_report__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 3)));
#line 1671 "create_report.m"
        create_report__RevGoalPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 4)));
#line 1673 "create_report.m"
        {
#line 1673 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__ContainingPSPtr_8, &create_report__ContainingPS_13);
        }
#line 1674 "create_report.m"
        create_report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 0)));
#line 1674 "create_report.m"
        create_report__ModuleName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 1)));
#line 1674 "create_report.m"
        create_report__UnQualRefinedName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 2)));
#line 1674 "create_report.m"
        create_report__QualRefinedName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 3)));
#line 1674 "create_report.m"
        create_report__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 4)));
#line 1674 "create_report.m"
        create_report__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 5)));
#line 1674 "create_report.m"
        create_report__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 6)));
#line 1674 "create_report.m"
        create_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 7)));
#line 1674 "create_report.m"
        create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 8)));
#line 1674 "create_report.m"
        create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 9)));
#line 1674 "create_report.m"
        create_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 10)));
#line 1674 "create_report.m"
        create_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 11)));
#line 1682 "create_report.m"
#line 1682 "create_report.m"
        switch (MR_tag((MR_Word) create_report__Kind_10)) {
#line 1682 "create_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1682 "create_report.m"
          case (MR_Integer) 0:
#line 1688 "create_report.m"
            create_report__MaybeCalleeDesc_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1682 "create_report.m"
            break;
#line 1682 "create_report.m"
          case (MR_Integer) 1:
#line 1679 "create_report.m"
            {
#line 1679 "create_report.m"
              MR_Word create_report__CalleePSPtr_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Kind_10, (MR_Integer) 0)));
#line 1679 "create_report.m"
              MR_Word create_report__CalleeDesc_20;
#line 1679 "create_report.m"
              MR_String create_report___TypeSubst_19 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__Kind_10, (MR_Integer) 1)));

#line 1680 "create_report.m"
              {
#line 1680 "create_report.m"
                create_report__CalleeDesc_20 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__CalleePSPtr_18);
              }
#line 1681 "create_report.m"
              {
#line 1681 "create_report.m"
                create_report__MaybeCalleeDesc_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1681 "create_report.m"
                MR_hl_field(MR_mktag(1), create_report__MaybeCalleeDesc_21, 0) = ((MR_Box) (create_report__CalleeDesc_20));
#line 1681 "create_report.m"
              }
#line 1679 "create_report.m"
            }
#line 1682 "create_report.m"
            break;
#line 1682 "create_report.m"
        }
#line 1670 "create_report.m"
      }
#line 1690 "create_report.m"
    else
#line 1691 "create_report.m"
      {
#line 1691 "create_report.m"
        {
#line 1691 "create_report.m"
          create_report__ContainingPSPtr_8 = profile__dummy_proc_static_ptr_0_f_0();
        }
#line 1692 "create_report.m"
        create_report__FileName_14 = (MR_String) "";
#line 1693 "create_report.m"
        create_report__LineNumber_11 = (MR_Integer) 0;
#line 1694 "create_report.m"
        create_report__ModuleName_15 = (MR_String) "";
#line 1695 "create_report.m"
        create_report__UnQualRefinedName_16 = (MR_String) "mercury_runtime";
#line 1696 "create_report.m"
        create_report__QualRefinedName_17 = (MR_String) "mercury_runtime";
#line 1697 "create_report.m"
        create_report__SlotNumber_9 = (MR_Integer) -1;
#line 1698 "create_report.m"
        create_report__RevGoalPath_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1699 "create_report.m"
        create_report__MaybeCalleeDesc_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1691 "create_report.m"
      }
#line 1701 "create_report.m"
    {
#line 1701 "create_report.m"
      create_report__CallSiteDesc_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1701 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 0) = ((MR_Box) (create_report__CSSPtr_5));
#line 1701 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 1) = ((MR_Box) (create_report__ContainingPSPtr_8));
#line 1701 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 2) = ((MR_Box) (create_report__FileName_14));
#line 1701 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 3) = ((MR_Box) (create_report__LineNumber_11));
#line 1701 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 4) = ((MR_Box) (create_report__ModuleName_15));
#line 1701 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 5) = ((MR_Box) (create_report__UnQualRefinedName_16));
#line 1701 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 6) = ((MR_Box) (create_report__QualRefinedName_17));
#line 1701 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 7) = ((MR_Box) (create_report__SlotNumber_9));
#line 1701 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 8) = ((MR_Box) (create_report__RevGoalPath_12));
#line 1701 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 9) = ((MR_Box) (create_report__MaybeCalleeDesc_21));
#line 1701 "create_report.m"
    }
#line 1668 "create_report.m"
    return create_report__CallSiteDesc_6;
#line 1668 "create_report.m"
  }
#line 1666 "create_report.m"
}

#line 1635 "create_report.m"
static MR_Word MR_CALL 
create_report__percent_from_ints_2_f_0(
#line 1635 "create_report.m"
  MR_Integer create_report__Nom_4,
#line 1635 "create_report.m"
  MR_Integer create_report__Denom_5)
#line 1635 "create_report.m"
{
#line 1640 "create_report.m"
  {
#line 1640 "create_report.m"
    MR_bool create_report__succeeded = (create_report__Denom_5 == (MR_Integer) 0);
#line 1640 "create_report.m"
    MR_Word create_report__Percent_6;

#line 1640 "create_report.m"
    if (create_report__succeeded)
#line 1639 "create_report.m"
      {
#line 1639 "create_report.m"
        {
#line 1639 "create_report.m"
          return create_report__Percent_6 = measurement_units__percent_1_f_0((MR_Float) 0.0000000000000000);
        }
#line 1639 "create_report.m"
      }
#line 1640 "create_report.m"
    else
#line 1641 "create_report.m"
      {
#line 1641 "create_report.m"
        MR_Float create_report__V_8_8;
#line 1641 "create_report.m"
        MR_Float create_report__V_9_9;
#line 1641 "create_report.m"
        MR_Float create_report__V_10_10;

#line 1641 "create_report.m"
        {
#line 1641 "create_report.m"
          create_report__V_9_9 = mercury__float__float_1_f_0(create_report__Nom_4);
        }
#line 1641 "create_report.m"
        {
#line 1641 "create_report.m"
          create_report__V_10_10 = mercury__float__float_1_f_0(create_report__Denom_5);
        }
#line 1641 "create_report.m"
        {
#line 1641 "create_report.m"
          create_report__V_8_8 = mercury__float__f_slash_2_f_0(create_report__V_9_9, create_report__V_10_10);
        }
#line 1641 "create_report.m"
        {
#line 1641 "create_report.m"
          return create_report__Percent_6 = measurement_units__percent_1_f_0(create_report__V_8_8);
        }
#line 1641 "create_report.m"
      }
#line 1640 "create_report.m"
    return create_report__Percent_6;
#line 1640 "create_report.m"
  }
#line 1635 "create_report.m"
}

#line 1624 "create_report.m"
static MR_Float MR_CALL 
create_report__int_per_call_2_f_0(
#line 1624 "create_report.m"
  MR_Integer create_report__Num_4,
#line 1624 "create_report.m"
  MR_Integer create_report__Calls_5)
#line 1624 "create_report.m"
{
#line 1626 "create_report.m"
  {
#line 1626 "create_report.m"
    MR_bool create_report__succeeded = (create_report__Calls_5 == (MR_Integer) 0);
#line 1626 "create_report.m"
    MR_Float create_report__HeadVar__3_3;

#line 1626 "create_report.m"
    if (create_report__succeeded)
#line 1628 "create_report.m"
      create_report__HeadVar__3_3 = (MR_Float) 0.0000000000000000;
#line 1626 "create_report.m"
    else
#line 1630 "create_report.m"
      {
#line 1630 "create_report.m"
        MR_Float create_report__V_6_6;
#line 1630 "create_report.m"
        MR_Float create_report__V_7_7;

#line 1630 "create_report.m"
        {
#line 1630 "create_report.m"
          create_report__V_6_6 = mercury__float__float_1_f_0(create_report__Num_4);
        }
#line 1630 "create_report.m"
        {
#line 1630 "create_report.m"
          create_report__V_7_7 = mercury__float__float_1_f_0(create_report__Calls_5);
        }
#line 1630 "create_report.m"
        {
#line 1630 "create_report.m"
          return create_report__HeadVar__3_3 = mercury__float__f_slash_2_f_0(create_report__V_6_6, create_report__V_7_7);
        }
#line 1630 "create_report.m"
      }
#line 1626 "create_report.m"
    return create_report__HeadVar__3_3;
#line 1626 "create_report.m"
  }
#line 1624 "create_report.m"
}

#line 1514 "create_report.m"
static void MR_CALL 
create_report__psi_to_perf_row_data_3_p_0(
#line 1514 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1514 "create_report.m"
  MR_Integer create_report__PSI_5,
#line 1514 "create_report.m"
  MR_Word * create_report__RowData_6)
#line 1514 "create_report.m"
{
#line 1517 "create_report.m"
  {
#line 1517 "create_report.m"
    MR_bool create_report__succeeded;
#line 1517 "create_report.m"
    MR_Word create_report__PSPtr_7 = (MR_Word) create_report__PSI_5;
#line 1517 "create_report.m"
    MR_Word create_report__ProcDesc_8;
#line 1517 "create_report.m"
    MR_Word create_report__Own_9;
#line 1517 "create_report.m"
    MR_Word create_report__Desc_10;
#line 1517 "create_report.m"
    MR_Word create_report__V_17_17;

#line 1519 "create_report.m"
    {
#line 1519 "create_report.m"
      create_report__ProcDesc_8 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__PSPtr_7);
    }
#line 1520 "create_report.m"
    {
#line 1520 "create_report.m"
      profile__deep_lookup_ps_own_3_p_0(create_report__Deep_4, create_report__PSPtr_7, &create_report__Own_9);
    }
#line 1521 "create_report.m"
    {
#line 1521 "create_report.m"
      profile__deep_lookup_ps_desc_3_p_0(create_report__Deep_4, create_report__PSPtr_7, &create_report__Desc_10);
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_17_17, 0) = ((MR_Box) (create_report__Desc_10));
#line 1525 "create_report.m"
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__ProcDesc_8)), create_report__Own_9, create_report__V_17_17, create_report__RowData_6);
#line 1525 "create_report.m"
      return;
    }
#line 1517 "create_report.m"
  }
#line 1514 "create_report.m"
}

#line 1485 "create_report.m"
static void MR_CALL 
create_report__get_recursive_csd_cost_4_p_0(
#line 1485 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1485 "create_report.m"
  MR_Word create_report__CSDPtr_6,
#line 1485 "create_report.m"
  MR_Word create_report__RecursionType_7,
#line 1485 "create_report.m"
  MR_Word * create_report__MaybeCost_8)
#line 1485 "create_report.m"
{
#line 1490 "create_report.m"
  {
#line 1490 "create_report.m"
    MR_bool create_report__succeeded;

#line 1490 "create_report.m"
#line 1490 "create_report.m"
    switch (MR_tag((MR_Word) create_report__RecursionType_7)) {
#line 1490 "create_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1490 "create_report.m"
      case (MR_Integer) 0:
#line 1490 "create_report.m"
        {
#line 1492 "create_report.m"
          *create_report__MaybeCost_8 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[9]);
#line 1490 "create_report.m"
        }
#line 1490 "create_report.m"
        break;
#line 1490 "create_report.m"
      case (MR_Integer) 1:
#line 1494 "create_report.m"
        {
#line 1494 "create_report.m"
          MR_Float create_report__AvgMaxDepth_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 2)));
#line 1494 "create_report.m"
          MR_Word create_report__CostFn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 4)));
#line 1494 "create_report.m"
          MR_Word create_report__Own_14;
#line 1494 "create_report.m"
          MR_Float create_report__Calls_15;
#line 1494 "create_report.m"
          MR_Integer create_report__V_24_24;
#line 1494 "create_report.m"
          MR_Float create_report__V_25_25;
#line 1494 "create_report.m"
          MR_Float create_report__V_26_26;
#line 1494 "create_report.m"
          MR_Integer create_report__V_27_27;
#line 1494 "create_report.m"
          MR_Integer create_report__V_28_28;
#line 1494 "create_report.m"
          MR_Word create_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 0)));
#line 1494 "create_report.m"
          MR_Word create_report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 1)));
#line 1494 "create_report.m"
          MR_Float create_report__V_12_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 3)));
#line 1497 "create_report.m"
          MR_Box MR_CALL (* create_report__func_0)(MR_Box, MR_Box);
#line 1497 "create_report.m"
          MR_Box create_report__conv1_V_26_26;

#line 1495 "create_report.m"
          {
#line 1495 "create_report.m"
            profile__deep_lookup_csd_own_3_p_0(create_report__Deep_5, create_report__CSDPtr_6, &create_report__Own_14);
          }
#line 1496 "create_report.m"
          {
#line 1496 "create_report.m"
            create_report__V_24_24 = measurements__calls_1_f_0(create_report__Own_14);
          }
#line 1496 "create_report.m"
          {
#line 1496 "create_report.m"
            create_report__Calls_15 = mercury__float__float_1_f_0(create_report__V_24_24);
          }
#line 1497 "create_report.m"
          {
#line 1497 "create_report.m"
            create_report__V_28_28 = mercury__float__round_to_int_1_f_0(create_report__AvgMaxDepth_11);
          }
#line 1497 "create_report.m"
          create_report__V_27_27 = (create_report__V_28_28 - (MR_Integer) 1);
#line 1497 "create_report.m"
          create_report__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), create_report__CostFn_13, (MR_Integer) 1)));
#line 1497 "create_report.m"
          {
#line 1497 "create_report.m"
            create_report__conv1_V_26_26 = create_report__func_0(((MR_Box) create_report__CostFn_13), ((MR_Box) (create_report__V_27_27)));
          }
#line 1497 "create_report.m"
          create_report__V_26_26 = MR_unbox_float(create_report__conv1_V_26_26);
#line 1497 "create_report.m"
          create_report__V_25_25 = (create_report__V_26_26 * create_report__Calls_15);
#line 1497 "create_report.m"
          {
#line 1497 "create_report.m"
            MR_Word base;
#line 1497 "create_report.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1497 "create_report.m"
            *create_report__MaybeCost_8 = base;
#line 1497 "create_report.m"
            MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(create_report__V_25_25);
#line 1497 "create_report.m"
          }
#line 1494 "create_report.m"
        }
#line 1490 "create_report.m"
        break;
#line 1490 "create_report.m"
      case (MR_Integer) 2:
#line 1502 "create_report.m"
        {
#line 1503 "create_report.m"
          *create_report__MaybeCost_8 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[8]);
#line 1502 "create_report.m"
        }
#line 1490 "create_report.m"
        break;
#line 1490 "create_report.m"
      case (MR_Integer) 3:
#line 1490 "create_report.m"
#line 1490 "create_report.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__RecursionType_7, (MR_Integer) 0)))) {
#line 1490 "create_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1490 "create_report.m"
          case (MR_Integer) 0:
#line 1490 "create_report.m"
          case (MR_Integer) 1:
#line 1502 "create_report.m"
            {
#line 1503 "create_report.m"
              *create_report__MaybeCost_8 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[8]);
#line 1502 "create_report.m"
            }
#line 1490 "create_report.m"
            break;
#line 1490 "create_report.m"
          case (MR_Integer) 2:
#line 1505 "create_report.m"
            {
#line 1505 "create_report.m"
              MR_Word create_report__Errors_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__RecursionType_7, (MR_Integer) 1)));
#line 1505 "create_report.m"
              MR_String create_report__V_21_21;

#line 1506 "create_report.m"
              {
#line 1506 "create_report.m"
                create_report__V_21_21 = mercury__string__join_list_2_f_0((MR_String) "\n", create_report__Errors_20);
              }
#line 1506 "create_report.m"
              {
#line 1506 "create_report.m"
                MR_Word base;
#line 1506 "create_report.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1506 "create_report.m"
                *create_report__MaybeCost_8 = base;
#line 1506 "create_report.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__V_21_21));
#line 1506 "create_report.m"
              }
#line 1505 "create_report.m"
            }
#line 1490 "create_report.m"
            break;
#line 1490 "create_report.m"
        }
#line 1490 "create_report.m"
        break;
#line 1490 "create_report.m"
    }
#line 1490 "create_report.m"
  }
#line 1485 "create_report.m"
}

#line 1448 "create_report.m"
static void MR_CALL 
create_report__call_site_dynamic_var_use_arg_9_p_0(
#line 1448 "create_report.m"
  MR_Word create_report__Deep_10,
#line 1448 "create_report.m"
  MR_Word create_report__CSDPtr_11,
#line 1448 "create_report.m"
  MR_Word create_report__RecursionType_12,
#line 1448 "create_report.m"
  MR_Float create_report__Cost_13,
#line 1448 "create_report.m"
  MR_Word create_report__VarNameTable_14,
#line 1448 "create_report.m"
  MR_Word create_report__HeadVar_15,
#line 1448 "create_report.m"
  MR_Word * create_report__MaybeUseAndName_16,
#line 1448 "create_report.m"
  MR_Integer create_report__STATE_VARIABLE_ArgNum_0_26,
#line 1448 "create_report.m"
  MR_Integer * create_report__STATE_VARIABLE_ArgNum_27)
#line 1448 "create_report.m"
{
#line 1453 "create_report.m"
  {
#line 1453 "create_report.m"
    MR_bool create_report__succeeded;
#line 1453 "create_report.m"
    MR_Integer create_report__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__HeadVar_15, (MR_Integer) 0)));
#line 1453 "create_report.m"
    MR_Word create_report__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar_15, (MR_Integer) 1)));
#line 1453 "create_report.m"
    MR_Word create_report__UseType_20;
#line 1453 "create_report.m"
    MR_Word create_report__UseOptions_21;
#line 1453 "create_report.m"
    MR_Word create_report__MaybeUse_22;

#line 1455 "create_report.m"
    {
#line 1455 "create_report.m"
      var_use_analysis__var_mode_to_var_use_type_2_p_0(create_report__Mode_19, &create_report__UseType_20);
    }
#line 1457 "create_report.m"
    {
#line 1457 "create_report.m"
      create_report__UseOptions_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1457 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__UseOptions_21, 0) = ((MR_Box) (create_report__Deep_10));
#line 1457 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__UseOptions_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1457 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__UseOptions_21, 2) = ((MR_Box) (create_report__UseType_20));
#line 1457 "create_report.m"
    }
#line 1458 "create_report.m"
    {
#line 1458 "create_report.m"
      var_use_analysis__get_call_site_dynamic_var_use_info_6_p_1(create_report__CSDPtr_11, create_report__STATE_VARIABLE_ArgNum_0_26, create_report__RecursionType_12, create_report__Cost_13, create_report__UseOptions_21, &create_report__MaybeUse_22);
    }
#line 1464 "create_report.m"
    if (((MR_tag((MR_Word) create_report__MaybeUse_22)) == (MR_mktag((MR_Integer) 1))))
#line 1466 "create_report.m"
      *create_report__MaybeUseAndName_16 = (MR_Word) create_report__MaybeUse_22;
#line 1464 "create_report.m"
    else
#line 1461 "create_report.m"
      {
#line 1461 "create_report.m"
        MR_Word create_report__Use_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeUse_22, (MR_Integer) 0)));
#line 1461 "create_report.m"
        MR_String create_report__Name_24;
#line 1461 "create_report.m"
        MR_Word create_report__V_29_29;

#line 1462 "create_report.m"
        {
#line 1462 "create_report.m"
          mdbcomp__program_representation__lookup_var_name_3_p_0(create_report__VarNameTable_14, create_report__Var_18, &create_report__Name_24);
        }
#line 1463 "create_report.m"
        {
#line 1463 "create_report.m"
          create_report__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1463 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_29_29, 0) = ((MR_Box) (create_report__Name_24));
#line 1463 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_29_29, 1) = ((MR_Box) (create_report__Use_23));
#line 1463 "create_report.m"
        }
#line 1463 "create_report.m"
        {
#line 1463 "create_report.m"
          MR_Word base;
#line 1463 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1463 "create_report.m"
          *create_report__MaybeUseAndName_16 = base;
#line 1463 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__V_29_29));
#line 1463 "create_report.m"
        }
#line 1461 "create_report.m"
      }
#line 1468 "create_report.m"
    *create_report__STATE_VARIABLE_ArgNum_27 = (create_report__STATE_VARIABLE_ArgNum_0_26 + (MR_Integer) 1);
#line 1453 "create_report.m"
  }
#line 1448 "create_report.m"
}

#line 1729 "create_report.m"
static MR_Box MR_CALL 
create_report__create_clique_dump_report_3_p_0_1(
#line 1729 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1729 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1729 "create_report.m"
{
#line 1729 "create_report.m"
  {
#line 1729 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1729 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1729 "create_report.m"
    MR_Word create_report__conv0_ProcDesc_6;

#line 1729 "create_report.m"
    {
#line 1729 "create_report.m"
      create_report__conv0_ProcDesc_6 = create_report__describe_clique_member_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1729 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_ProcDesc_6));
#line 1729 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1729 "create_report.m"
  }
#line 1729 "create_report.m"
}

#line 1372 "create_report.m"
static void MR_CALL 
create_report__create_clique_dump_report_3_p_0(
#line 1372 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1372 "create_report.m"
  MR_Word create_report__CliquePtr_5,
#line 1372 "create_report.m"
  MR_Word * create_report__MaybeCliqueDumpInfo_6)
#line 1372 "create_report.m"
{
#line 1383 "create_report.m"
  {
#line 1383 "create_report.m"
    MR_bool create_report__succeeded;

#line 1376 "create_report.m"
    {
#line 1376 "create_report.m"
      create_report__succeeded = profile__valid_clique_ptr_2_p_0(create_report__Deep_4, create_report__CliquePtr_5);
    }
#line 1383 "create_report.m"
    if (create_report__succeeded)
#line 1377 "create_report.m"
      {
#line 1377 "create_report.m"
        MR_Word create_report__CliqueDesc_7;
#line 1377 "create_report.m"
        MR_Word create_report__ParentCSDPtr_8;
#line 1377 "create_report.m"
        MR_Word create_report__MemberPDPtrs_9;
#line 1377 "create_report.m"
        MR_Word create_report__CliqueDumpInfo_10;

#line 1716 "create_report.m"
        {
#line 1716 "create_report.m"
          create_report__succeeded = profile__valid_clique_ptr_2_p_0(create_report__Deep_4, create_report__CliquePtr_5);
        }
#line 1734 "create_report.m"
        if (create_report__succeeded)
#line 1717 "create_report.m"
          {
#line 1717 "create_report.m"
            MR_Word create_report__MemberPDPtrs_17;
#line 1717 "create_report.m"
            MR_Word create_report__ParentCSDPtr_18;
#line 1717 "create_report.m"
            MR_Word create_report__ParentCSD_19;
#line 1717 "create_report.m"
            MR_Word create_report__EntryPDPtr_20;
#line 1724 "create_report.m"
            MR_Word create_report__V_31_31;
#line 1724 "create_report.m"
            MR_Word create_report__V_32_32;
#line 1731 "create_report.m"
            MR_Word create_report__OtherPDPtrs_21;

#line 1717 "create_report.m"
            {
#line 1717 "create_report.m"
              profile__deep_lookup_clique_members_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__MemberPDPtrs_17);
            }
#line 1718 "create_report.m"
            {
#line 1718 "create_report.m"
              profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__ParentCSDPtr_18);
            }
#line 1719 "create_report.m"
            {
#line 1719 "create_report.m"
              profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__ParentCSDPtr_18, &create_report__ParentCSD_19);
            }
#line 1724 "create_report.m"
            create_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_19, (MR_Integer) 0)));
#line 1724 "create_report.m"
            create_report__EntryPDPtr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_19, (MR_Integer) 1)));
#line 1724 "create_report.m"
            create_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_19, (MR_Integer) 2)));
#line 1726 "create_report.m"
            {
#line 1726 "create_report.m"
              create_report__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, create_report__MemberPDPtrs_17, ((MR_Box) (create_report__EntryPDPtr_20)), &create_report__OtherPDPtrs_21);
            }
#line 1731 "create_report.m"
            if (create_report__succeeded)
#line 1727 "create_report.m"
              {
#line 1727 "create_report.m"
                MR_Word create_report__EntryProcDesc_22;
#line 1727 "create_report.m"
                MR_Word create_report__OtherProcDescs_23;
#line 1727 "create_report.m"
                MR_Word create_report__V_24_24;
#line 1727 "create_report.m"
                MR_Word create_report__PD_41;
#line 1727 "create_report.m"
                MR_Word create_report__V_42_42;
#line 1742 "create_report.m"
                MR_ArrayPtr create_report__V_43_43;
#line 1742 "create_report.m"
                MR_Word create_report__V_44_44;

#line 1741 "create_report.m"
                {
#line 1741 "create_report.m"
                  profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__EntryPDPtr_20, &create_report__PD_41);
                }
#line 1742 "create_report.m"
                create_report__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_41, (MR_Integer) 0)));
#line 1742 "create_report.m"
                create_report__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_41, (MR_Integer) 1)));
#line 1742 "create_report.m"
                create_report__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_41, (MR_Integer) 2)));
#line 1742 "create_report.m"
                {
#line 1742 "create_report.m"
                  create_report__EntryProcDesc_22 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__V_42_42);
                }
#line 1729 "create_report.m"
                {
#line 1729 "create_report.m"
                  create_report__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1729 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__V_24_24, 0) = ((MR_Box) (&create_report_scalar_common_5[2]));
#line 1729 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__V_24_24, 1) = ((MR_Box) (create_report__create_clique_dump_report_3_p_0_1));
#line 1729 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1729 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__V_24_24, 3) = ((MR_Box) (create_report__Deep_4));
#line 1729 "create_report.m"
                }
#line 1729 "create_report.m"
                {
#line 1729 "create_report.m"
                  create_report__OtherProcDescs_23 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &report__report__type_ctor_info_proc_desc_0, create_report__V_24_24, create_report__OtherPDPtrs_21);
                }
#line 1730 "create_report.m"
                {
#line 1730 "create_report.m"
                  create_report__CliqueDesc_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1730 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__CliqueDesc_7, 0) = ((MR_Box) (create_report__CliquePtr_5));
#line 1730 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__CliqueDesc_7, 1) = ((MR_Box) (create_report__EntryProcDesc_22));
#line 1730 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__CliqueDesc_7, 2) = ((MR_Box) (create_report__OtherProcDescs_23));
#line 1730 "create_report.m"
                }
#line 1727 "create_report.m"
              }
#line 1731 "create_report.m"
            else
#line 1732 "create_report.m"
              {
#line 1732 "create_report.m"
                {
#line 1732 "create_report.m"
                  mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "entry pdptr not a member");
#line 1732 "create_report.m"
                  return;
                }
#line 1732 "create_report.m"
              }
#line 1717 "create_report.m"
          }
#line 1734 "create_report.m"
        else
#line 1735 "create_report.m"
          {
#line 1735 "create_report.m"
            {
#line 1735 "create_report.m"
              mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "invalid clique_ptr");
#line 1735 "create_report.m"
              return;
            }
#line 1735 "create_report.m"
          }
#line 1378 "create_report.m"
        {
#line 1378 "create_report.m"
          profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__ParentCSDPtr_8);
        }
#line 1379 "create_report.m"
        {
#line 1379 "create_report.m"
          profile__deep_lookup_clique_members_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__MemberPDPtrs_9);
        }
#line 1380 "create_report.m"
        {
#line 1380 "create_report.m"
          create_report__CliqueDumpInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1380 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CliqueDumpInfo_10, 0) = ((MR_Box) (create_report__CliqueDesc_7));
#line 1380 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CliqueDumpInfo_10, 1) = ((MR_Box) (create_report__ParentCSDPtr_8));
#line 1380 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CliqueDumpInfo_10, 2) = ((MR_Box) (create_report__MemberPDPtrs_9));
#line 1380 "create_report.m"
        }
#line 1382 "create_report.m"
        {
#line 1382 "create_report.m"
          MR_Word base;
#line 1382 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1382 "create_report.m"
          *create_report__MaybeCliqueDumpInfo_6 = base;
#line 1382 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__CliqueDumpInfo_10));
#line 1382 "create_report.m"
        }
#line 1377 "create_report.m"
      }
#line 1383 "create_report.m"
    else
#line 1384 "create_report.m"
      {
#line 1384 "create_report.m"
        *create_report__MaybeCliqueDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[7]);
#line 1384 "create_report.m"
      }
#line 1383 "create_report.m"
  }
#line 1372 "create_report.m"
}

#line 1351 "create_report.m"
static void MR_CALL 
create_report__create_call_site_dynamic_dump_report_3_p_0(
#line 1351 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1351 "create_report.m"
  MR_Word create_report__CSDPtr_5,
#line 1351 "create_report.m"
  MR_Word * create_report__MaybeCallSiteDynamicDumpInfo_6)
#line 1351 "create_report.m"
{
#line 1368 "create_report.m"
  {
#line 1368 "create_report.m"
    MR_bool create_report__succeeded;

#line 1357 "create_report.m"
    {
#line 1357 "create_report.m"
      create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__CSDPtr_5);
    }
#line 1368 "create_report.m"
    if (create_report__succeeded)
#line 1358 "create_report.m"
      {
#line 1358 "create_report.m"
        MR_Word create_report__CSD_7;
#line 1358 "create_report.m"
        MR_Word create_report__CallerPSPtr_8;
#line 1358 "create_report.m"
        MR_Word create_report__CalleePSDPtr_9;
#line 1358 "create_report.m"
        MR_Word create_report__Own_10;
#line 1358 "create_report.m"
        MR_Word create_report__Desc_11;
#line 1358 "create_report.m"
        MR_Word create_report__CSSPtr_12;
#line 1358 "create_report.m"
        MR_Word create_report__CallSiteDesc_13;
#line 1358 "create_report.m"
        MR_Word create_report__PerfRowData_14;
#line 1358 "create_report.m"
        MR_Word create_report__CallSiteDynamicDumpInfo_15;
#line 1358 "create_report.m"
        MR_Word create_report__V_23_23;

#line 1358 "create_report.m"
        {
#line 1358 "create_report.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__CSD_7);
        }
#line 1359 "create_report.m"
        create_report__CallerPSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 0)));
#line 1359 "create_report.m"
        create_report__CalleePSDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 1)));
#line 1359 "create_report.m"
        create_report__Own_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 2)));
#line 1360 "create_report.m"
        {
#line 1360 "create_report.m"
          create_report__Desc_11 = measurements__zero_inherit_prof_info_0_f_0();
        }
#line 1361 "create_report.m"
        {
#line 1361 "create_report.m"
          profile__deep_lookup_call_site_static_map_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__CSSPtr_12);
        }
#line 1362 "create_report.m"
        {
#line 1362 "create_report.m"
          create_report__CallSiteDesc_13 = create_report__describe_call_site_2_f_0(create_report__Deep_4, create_report__CSSPtr_12);
        }
#line 1525 "create_report.m"
        {
#line 1525 "create_report.m"
          create_report__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_23_23, 0) = ((MR_Box) (create_report__Desc_11));
#line 1525 "create_report.m"
        }
#line 1525 "create_report.m"
        {
#line 1525 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_13)), create_report__Own_10, create_report__V_23_23, &create_report__PerfRowData_14);
        }
#line 1365 "create_report.m"
        {
#line 1365 "create_report.m"
          create_report__CallSiteDynamicDumpInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteDynamicDumpInfo_15, 0) = ((MR_Box) (create_report__CSDPtr_5));
#line 1365 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteDynamicDumpInfo_15, 1) = ((MR_Box) (create_report__CallerPSPtr_8));
#line 1365 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteDynamicDumpInfo_15, 2) = ((MR_Box) (create_report__CalleePSDPtr_9));
#line 1365 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteDynamicDumpInfo_15, 3) = ((MR_Box) (create_report__PerfRowData_14));
#line 1365 "create_report.m"
        }
#line 1367 "create_report.m"
        {
#line 1367 "create_report.m"
          MR_Word base;
#line 1367 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "create_report.m"
          *create_report__MaybeCallSiteDynamicDumpInfo_6 = base;
#line 1367 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__CallSiteDynamicDumpInfo_15));
#line 1367 "create_report.m"
        }
#line 1358 "create_report.m"
      }
#line 1368 "create_report.m"
    else
#line 1369 "create_report.m"
      {
#line 1369 "create_report.m"
        *create_report__MaybeCallSiteDynamicDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[6]);
#line 1369 "create_report.m"
      }
#line 1368 "create_report.m"
  }
#line 1351 "create_report.m"
}

#line 1335 "create_report.m"
static void MR_CALL 
create_report__create_call_site_static_dump_report_3_p_0(
#line 1335 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1335 "create_report.m"
  MR_Word create_report__CSSPtr_5,
#line 1335 "create_report.m"
  MR_Word * create_report__MaybeCallSiteStaticDumpInfo_6)
#line 1335 "create_report.m"
{
#line 1347 "create_report.m"
  {
#line 1347 "create_report.m"
    MR_bool create_report__succeeded;

#line 1340 "create_report.m"
    {
#line 1340 "create_report.m"
      create_report__succeeded = profile__valid_call_site_static_ptr_2_p_0(create_report__Deep_4, create_report__CSSPtr_5);
    }
#line 1347 "create_report.m"
    if (create_report__succeeded)
#line 1341 "create_report.m"
      {
#line 1341 "create_report.m"
        MR_Word create_report__CSS_7;
#line 1341 "create_report.m"
        MR_Word create_report__ContainingPSPtr_8;
#line 1341 "create_report.m"
        MR_Integer create_report__SlotNumber_9;
#line 1341 "create_report.m"
        MR_Word create_report__CallSiteKind_10;
#line 1341 "create_report.m"
        MR_Integer create_report__LineNumber_11;
#line 1341 "create_report.m"
        MR_Word create_report__GoalPath_12;
#line 1341 "create_report.m"
        MR_Word create_report__CallSiteStaticDumpInfo_13;

#line 1341 "create_report.m"
        {
#line 1341 "create_report.m"
          profile__deep_lookup_call_site_statics_3_p_0(create_report__Deep_4, create_report__CSSPtr_5, &create_report__CSS_7);
        }
#line 1342 "create_report.m"
        create_report__ContainingPSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 0)));
#line 1342 "create_report.m"
        create_report__SlotNumber_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 1)));
#line 1342 "create_report.m"
        create_report__CallSiteKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 2)));
#line 1342 "create_report.m"
        create_report__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 3)));
#line 1342 "create_report.m"
        create_report__GoalPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 4)));
#line 1344 "create_report.m"
        {
#line 1344 "create_report.m"
          create_report__CallSiteStaticDumpInfo_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1344 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 0) = ((MR_Box) (create_report__CSSPtr_5));
#line 1344 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 1) = ((MR_Box) (create_report__ContainingPSPtr_8));
#line 1344 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 2) = ((MR_Box) (create_report__SlotNumber_9));
#line 1344 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 3) = ((MR_Box) (create_report__LineNumber_11));
#line 1344 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 4) = ((MR_Box) (create_report__GoalPath_12));
#line 1344 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 5) = ((MR_Box) (create_report__CallSiteKind_10));
#line 1344 "create_report.m"
        }
#line 1346 "create_report.m"
        {
#line 1346 "create_report.m"
          MR_Word base;
#line 1346 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1346 "create_report.m"
          *create_report__MaybeCallSiteStaticDumpInfo_6 = base;
#line 1346 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__CallSiteStaticDumpInfo_13));
#line 1346 "create_report.m"
        }
#line 1341 "create_report.m"
      }
#line 1347 "create_report.m"
    else
#line 1348 "create_report.m"
      {
#line 1348 "create_report.m"
        *create_report__MaybeCallSiteStaticDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[5]);
#line 1348 "create_report.m"
      }
#line 1347 "create_report.m"
  }
#line 1335 "create_report.m"
}

#line 1305 "create_report.m"
static void MR_CALL 
create_report__create_proc_dynamic_dump_report_3_p_0(
#line 1305 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1305 "create_report.m"
  MR_Word create_report__PDPtr_5,
#line 1305 "create_report.m"
  MR_Word * create_report__MaybeProcDynamicDumpInfo_6)
#line 1305 "create_report.m"
{
#line 1331 "create_report.m"
  {
#line 1331 "create_report.m"
    MR_bool create_report__succeeded;

#line 1309 "create_report.m"
    {
#line 1309 "create_report.m"
      create_report__succeeded = profile__valid_proc_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__PDPtr_5);
    }
#line 1331 "create_report.m"
    if (create_report__succeeded)
#line 1310 "create_report.m"
      {
#line 1310 "create_report.m"
        MR_Word create_report__PD_7;
#line 1310 "create_report.m"
        MR_Word create_report__PSPtr_8;
#line 1310 "create_report.m"
        MR_ArrayPtr create_report__CallSiteArray_9;
#line 1310 "create_report.m"
        MR_Word create_report__MaybeCPCounts_10;
#line 1310 "create_report.m"
        MR_Word create_report__PS_11;
#line 1310 "create_report.m"
        MR_String create_report__RawName_12;
#line 1310 "create_report.m"
        MR_String create_report__ModuleName_13;
#line 1310 "create_report.m"
        MR_String create_report__UnQualRefinedName_14;
#line 1310 "create_report.m"
        MR_String create_report__QualRefinedName_15;
#line 1310 "create_report.m"
        MR_Word create_report__CallSites_16;
#line 1310 "create_report.m"
        MR_Word create_report__MaybeCPs_20;
#line 1310 "create_report.m"
        MR_Word create_report__ProcDynamicDumpInfo_21;
#line 1313 "create_report.m"
        MR_Word create_report__V_23_23;
#line 1313 "create_report.m"
        MR_String create_report__V_27_27;
#line 1313 "create_report.m"
        MR_Integer create_report__V_28_28;
#line 1313 "create_report.m"
        MR_Word create_report__V_29_29;
#line 1313 "create_report.m"
        MR_ArrayPtr create_report__V_30_30;
#line 1313 "create_report.m"
        MR_ArrayPtr create_report__V_31_31;
#line 1313 "create_report.m"
        MR_Word create_report__V_32_32;
#line 1313 "create_report.m"
        MR_Word create_report__V_33_33;

#line 1310 "create_report.m"
        {
#line 1310 "create_report.m"
          profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__PD_7);
        }
#line 1311 "create_report.m"
        create_report__PSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 0)));
#line 1311 "create_report.m"
        create_report__CallSiteArray_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 1)));
#line 1311 "create_report.m"
        create_report__MaybeCPCounts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 2)));
#line 1312 "create_report.m"
        {
#line 1312 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_8, &create_report__PS_11);
        }
#line 1313 "create_report.m"
        create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 0)));
#line 1313 "create_report.m"
        create_report__ModuleName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 1)));
#line 1313 "create_report.m"
        create_report__UnQualRefinedName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 2)));
#line 1313 "create_report.m"
        create_report__QualRefinedName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 3)));
#line 1313 "create_report.m"
        create_report__RawName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 4)));
#line 1313 "create_report.m"
        create_report__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 5)));
#line 1313 "create_report.m"
        create_report__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 6)));
#line 1313 "create_report.m"
        create_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 7)));
#line 1313 "create_report.m"
        create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 8)));
#line 1313 "create_report.m"
        create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 9)));
#line 1313 "create_report.m"
        create_report__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 10)));
#line 1313 "create_report.m"
        create_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 11)));
#line 1317 "create_report.m"
        {
#line 1317 "create_report.m"
          mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) create_report__CallSiteArray_9, &create_report__CallSites_16);
        }
#line 1323 "create_report.m"
        if ((create_report__MaybeCPCounts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1325 "create_report.m"
          create_report__MaybeCPs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1323 "create_report.m"
        else
#line 1319 "create_report.m"
          {
#line 1319 "create_report.m"
            MR_ArrayPtr create_report__CPCounts_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__MaybeCPCounts_10, (MR_Integer) 0)));
#line 1319 "create_report.m"
            MR_ArrayPtr create_report__CPInfos_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 9)));
#line 1319 "create_report.m"
            MR_Word create_report__CPs_19;
#line 1320 "create_report.m"
            MR_Word create_report__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 0)));
#line 1320 "create_report.m"
            MR_String create_report__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 1)));
#line 1320 "create_report.m"
            MR_String create_report__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 2)));
#line 1320 "create_report.m"
            MR_String create_report__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 3)));
#line 1320 "create_report.m"
            MR_String create_report__V_71_71 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 4)));
#line 1320 "create_report.m"
            MR_String create_report__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 5)));
#line 1320 "create_report.m"
            MR_Integer create_report__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 6)));
#line 1320 "create_report.m"
            MR_Word create_report__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 7)));
#line 1320 "create_report.m"
            MR_ArrayPtr create_report__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 8)));
#line 1320 "create_report.m"
            MR_Word create_report__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 10)));
#line 1320 "create_report.m"
            MR_Word create_report__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 11)));

#line 1321 "create_report.m"
            {
#line 1321 "create_report.m"
              coverage__coverage_point_arrays_to_list_3_p_0(create_report__CPInfos_18, create_report__CPCounts_17, &create_report__CPs_19);
            }
#line 1322 "create_report.m"
            {
#line 1322 "create_report.m"
              create_report__MaybeCPs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1322 "create_report.m"
              MR_hl_field(MR_mktag(1), create_report__MaybeCPs_20, 0) = ((MR_Box) (create_report__CPs_19));
#line 1322 "create_report.m"
            }
#line 1319 "create_report.m"
          }
#line 1327 "create_report.m"
        {
#line 1327 "create_report.m"
          create_report__ProcDynamicDumpInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 0) = ((MR_Box) (create_report__PDPtr_5));
#line 1327 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 1) = ((MR_Box) (create_report__PSPtr_8));
#line 1327 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 2) = ((MR_Box) (create_report__RawName_12));
#line 1327 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 3) = ((MR_Box) (create_report__ModuleName_13));
#line 1327 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 4) = ((MR_Box) (create_report__UnQualRefinedName_14));
#line 1327 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 5) = ((MR_Box) (create_report__QualRefinedName_15));
#line 1327 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 6) = ((MR_Box) (create_report__CallSites_16));
#line 1327 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 7) = ((MR_Box) (create_report__MaybeCPs_20));
#line 1327 "create_report.m"
        }
#line 1330 "create_report.m"
        {
#line 1330 "create_report.m"
          MR_Word base;
#line 1330 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1330 "create_report.m"
          *create_report__MaybeProcDynamicDumpInfo_6 = base;
#line 1330 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcDynamicDumpInfo_21));
#line 1330 "create_report.m"
        }
#line 1310 "create_report.m"
      }
#line 1331 "create_report.m"
    else
#line 1332 "create_report.m"
      {
#line 1332 "create_report.m"
        *create_report__MaybeProcDynamicDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[4]);
#line 1332 "create_report.m"
      }
#line 1331 "create_report.m"
  }
#line 1305 "create_report.m"
}

#line 1282 "create_report.m"
static void MR_CALL 
create_report__create_proc_static_dump_report_3_p_0(
#line 1282 "create_report.m"
  MR_Word create_report__Deep_4,
#line 1282 "create_report.m"
  MR_Word create_report__PSPtr_5,
#line 1282 "create_report.m"
  MR_Word * create_report__MaybeProcStaticDumpInfo_6)
#line 1282 "create_report.m"
{
#line 1301 "create_report.m"
  {
#line 1301 "create_report.m"
    MR_bool create_report__succeeded;

#line 1286 "create_report.m"
    {
#line 1286 "create_report.m"
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_4, create_report__PSPtr_5);
    }
#line 1301 "create_report.m"
    if (create_report__succeeded)
#line 1287 "create_report.m"
      {
#line 1287 "create_report.m"
        MR_Word create_report__PS_7;
#line 1287 "create_report.m"
        MR_String create_report__UnQualRefinedName_10;
#line 1287 "create_report.m"
        MR_String create_report__QualRefinedName_11;
#line 1287 "create_report.m"
        MR_String create_report__RawName_12;
#line 1287 "create_report.m"
        MR_String create_report__FileName_13;
#line 1287 "create_report.m"
        MR_Integer create_report__LineNumber_14;
#line 1287 "create_report.m"
        MR_ArrayPtr create_report__CallSites_16;
#line 1287 "create_report.m"
        MR_ArrayPtr create_report__CoveragePointInfos_17;
#line 1287 "create_report.m"
        MR_Integer create_report__MaxCallSiteIdx_20;
#line 1287 "create_report.m"
        MR_Integer create_report__NumCallSites_21;
#line 1287 "create_report.m"
        MR_Integer create_report__MaxCoveragePointIdx_22;
#line 1287 "create_report.m"
        MR_Integer create_report__NumCoveragePoints_23;
#line 1287 "create_report.m"
        MR_Word create_report__ProcStaticDumpInfo_24;
#line 1289 "create_report.m"
        MR_Word create_report___ProcId_8;
#line 1289 "create_report.m"
        MR_String create_report___DeclModule_9;
#line 1289 "create_report.m"
        MR_Word create_report___InInterface_15;
#line 1289 "create_report.m"
        MR_Word create_report___MaybeCoveragePoints_18;
#line 1289 "create_report.m"
        MR_Word create_report___IsZeroed_19;

#line 1287 "create_report.m"
        {
#line 1287 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__PS_7);
        }
#line 1289 "create_report.m"
        create_report___ProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 0)));
#line 1289 "create_report.m"
        create_report___DeclModule_9 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 1)));
#line 1289 "create_report.m"
        create_report__UnQualRefinedName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 2)));
#line 1289 "create_report.m"
        create_report__QualRefinedName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 3)));
#line 1289 "create_report.m"
        create_report__RawName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 4)));
#line 1289 "create_report.m"
        create_report__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 5)));
#line 1289 "create_report.m"
        create_report__LineNumber_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 6)));
#line 1289 "create_report.m"
        create_report___InInterface_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 7)));
#line 1289 "create_report.m"
        create_report__CallSites_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 8)));
#line 1289 "create_report.m"
        create_report__CoveragePointInfos_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 9)));
#line 1289 "create_report.m"
        create_report___MaybeCoveragePoints_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 10)));
#line 1289 "create_report.m"
        create_report___IsZeroed_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 11)));
#line 1293 "create_report.m"
        {
#line 1293 "create_report.m"
          mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) create_report__CallSites_16, &create_report__MaxCallSiteIdx_20);
        }
#line 1294 "create_report.m"
        create_report__NumCallSites_21 = (create_report__MaxCallSiteIdx_20 + (MR_Integer) 1);
#line 1295 "create_report.m"
        {
#line 1295 "create_report.m"
          mercury__array__max_2_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_ArrayPtr) create_report__CoveragePointInfos_17, &create_report__MaxCoveragePointIdx_22);
        }
#line 1296 "create_report.m"
        create_report__NumCoveragePoints_23 = (create_report__MaxCoveragePointIdx_22 + (MR_Integer) 1);
#line 1297 "create_report.m"
        {
#line 1297 "create_report.m"
          create_report__ProcStaticDumpInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1297 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 0) = ((MR_Box) (create_report__PSPtr_5));
#line 1297 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 1) = ((MR_Box) (create_report__RawName_12));
#line 1297 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 2) = ((MR_Box) (create_report__UnQualRefinedName_10));
#line 1297 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 3) = ((MR_Box) (create_report__QualRefinedName_11));
#line 1297 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 4) = ((MR_Box) (create_report__FileName_13));
#line 1297 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 5) = ((MR_Box) (create_report__LineNumber_14));
#line 1297 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 6) = ((MR_Box) (create_report__NumCallSites_21));
#line 1297 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 7) = ((MR_Box) (create_report__NumCoveragePoints_23));
#line 1297 "create_report.m"
        }
#line 1300 "create_report.m"
        {
#line 1300 "create_report.m"
          MR_Word base;
#line 1300 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1300 "create_report.m"
          *create_report__MaybeProcStaticDumpInfo_6 = base;
#line 1300 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcStaticDumpInfo_24));
#line 1300 "create_report.m"
        }
#line 1287 "create_report.m"
      }
#line 1301 "create_report.m"
    else
#line 1302 "create_report.m"
      {
#line 1302 "create_report.m"
        *create_report__MaybeProcStaticDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[1]);
#line 1302 "create_report.m"
      }
#line 1301 "create_report.m"
  }
#line 1282 "create_report.m"
}

#line 1265 "create_report.m"
static void MR_CALL 
create_report__maybe_create_procrep_coverage_report_6_p_0_1(
#line 1265 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1265 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1265 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 1265 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 1265 "create_report.m"
  MR_Box create_report__wrapper_arg_4,
#line 1265 "create_report.m"
  MR_Box * create_report__wrapper_arg_5)
#line 1265 "create_report.m"
{
#line 1265 "create_report.m"
  {
#line 1265 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1265 "create_report.m"
    MR_Word create_report__conv1_HeadVar__3_3;
#line 1265 "create_report.m"
    MR_Word create_report__conv0_HeadVar__5_5;

#line 1265 "create_report.m"
    {
#line 1265 "create_report.m"
      coverage__add_coverage_point_to_map_5_p_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv1_HeadVar__3_3, ((MR_Word) create_report__wrapper_arg_4), &create_report__conv0_HeadVar__5_5);
    }
#line 1265 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_HeadVar__3_3));
#line 1265 "create_report.m"
    *create_report__wrapper_arg_5 = ((MR_Box) (create_report__conv0_HeadVar__5_5));
#line 1265 "create_report.m"
  }
#line 1265 "create_report.m"
}

#line 1246 "create_report.m"
static void MR_CALL 
create_report__maybe_create_procrep_coverage_report_6_p_0(
#line 1246 "create_report.m"
  MR_Word create_report__TypeInfo_for_Callee_63,
#line 1246 "create_report.m"
  MR_Word create_report__Deep_1,
#line 1246 "create_report.m"
  MR_Word create_report__PSPtr_2,
#line 1246 "create_report.m"
  MR_Word create_report__Own_3,
#line 1246 "create_report.m"
  MR_Word create_report__HeadVar__4_4,
#line 1246 "create_report.m"
  MR_Word create_report__CallSitesMap_5,
#line 1246 "create_report.m"
  MR_Word * create_report__HeadVar__6_6)
#line 1246 "create_report.m"
{
#line 1251 "create_report.m"
  {
#line 1251 "create_report.m"
    MR_bool create_report__succeeded;

#line 1251 "create_report.m"
    if ((create_report__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1251 "create_report.m"
      {
#line 1251 "create_report.m"
        *create_report__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[3]);
#line 1251 "create_report.m"
      }
#line 1251 "create_report.m"
    else
#line 1254 "create_report.m"
      {
#line 1254 "create_report.m"
        MR_ArrayPtr create_report__CoveragePointsArray_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__HeadVar__4_4, (MR_Integer) 0)));
#line 1254 "create_report.m"
        MR_Word create_report__PS_18;
#line 1254 "create_report.m"
        MR_Word create_report__CoveragePoints_19;
#line 1254 "create_report.m"
        MR_Word create_report__MaybeProcRep0_20;
#line 1254 "create_report.m"
        MR_ArrayPtr create_report__V_31_31;
#line 1256 "create_report.m"
        MR_Word create_report__V_39_39;
#line 1256 "create_report.m"
        MR_String create_report__V_40_40;
#line 1256 "create_report.m"
        MR_String create_report__V_41_41;
#line 1256 "create_report.m"
        MR_String create_report__V_42_42;
#line 1256 "create_report.m"
        MR_String create_report__V_43_43;
#line 1256 "create_report.m"
        MR_String create_report__V_44_44;
#line 1256 "create_report.m"
        MR_Integer create_report__V_45_45;
#line 1256 "create_report.m"
        MR_Word create_report__V_46_46;
#line 1256 "create_report.m"
        MR_ArrayPtr create_report__V_47_47;
#line 1256 "create_report.m"
        MR_Word create_report__V_48_48;
#line 1256 "create_report.m"
        MR_Word create_report__V_49_49;

#line 1255 "create_report.m"
        {
#line 1255 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_1, create_report__PSPtr_2, &create_report__PS_18);
        }
#line 1256 "create_report.m"
        create_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 0)));
#line 1256 "create_report.m"
        create_report__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 1)));
#line 1256 "create_report.m"
        create_report__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 2)));
#line 1256 "create_report.m"
        create_report__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 3)));
#line 1256 "create_report.m"
        create_report__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 4)));
#line 1256 "create_report.m"
        create_report__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 5)));
#line 1256 "create_report.m"
        create_report__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 6)));
#line 1256 "create_report.m"
        create_report__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 7)));
#line 1256 "create_report.m"
        create_report__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 8)));
#line 1256 "create_report.m"
        create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 9)));
#line 1256 "create_report.m"
        create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 10)));
#line 1256 "create_report.m"
        create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 11)));
#line 1256 "create_report.m"
        {
#line 1256 "create_report.m"
          coverage__coverage_point_arrays_to_list_3_p_0(create_report__V_31_31, create_report__CoveragePointsArray_15, &create_report__CoveragePoints_19);
        }
#line 1258 "create_report.m"
        {
#line 1258 "create_report.m"
          analysis_utils__deep_get_maybe_procrep_3_p_0(create_report__Deep_1, create_report__PSPtr_2, &create_report__MaybeProcRep0_20);
        }
#line 1262 "create_report.m"
        if (((MR_tag((MR_Word) create_report__MaybeProcRep0_20)) == (MR_mktag((MR_Integer) 1))))
#line 1261 "create_report.m"
          *create_report__HeadVar__6_6 = (MR_Word) create_report__MaybeProcRep0_20;
#line 1262 "create_report.m"
        else
#line 1263 "create_report.m"
          {
#line 1263 "create_report.m"
            MR_Word create_report__TypeCtorInfo_69_69 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
#line 1263 "create_report.m"
            MR_Word create_report__TypeCtorInfo_70_70 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0;
#line 1263 "create_report.m"
            MR_Word create_report__TypeInfo_71_71;
#line 1263 "create_report.m"
            MR_Word create_report__ProcRep0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeProcRep0_20, (MR_Integer) 0)));
#line 1263 "create_report.m"
            MR_Word create_report__SolnsCoveragePointMap_23;
#line 1263 "create_report.m"
            MR_Word create_report__BranchCoveragePointMap_24;
#line 1263 "create_report.m"
            MR_Word create_report__Goal0_25;
#line 1263 "create_report.m"
            MR_Word create_report__LastGoalId_26;
#line 1263 "create_report.m"
            MR_Word create_report__ContainingGoalMap_27;
#line 1263 "create_report.m"
            MR_Word create_report__Goal_28;
#line 1263 "create_report.m"
            MR_Word create_report__ProcRep_29;
#line 1263 "create_report.m"
            MR_Word create_report__CoverageArray_30;
#line 1263 "create_report.m"
            MR_Word create_report__V_33_33;
#line 1263 "create_report.m"
            MR_Word create_report__V_34_34;
#line 1263 "create_report.m"
            MR_Word create_report__V_35_35;
#line 1263 "create_report.m"
            MR_Word create_report__V_36_36;
#line 1263 "create_report.m"
            MR_Word create_report__V_37_37;
#line 1263 "create_report.m"
            MR_Word create_report__V_38_38;
#line 1263 "create_report.m"
            MR_Word create_report__V_55_55;
#line 1265 "create_report.m"
            MR_Box create_report__conv3_SolnsCoveragePointMap_23;
#line 1265 "create_report.m"
            MR_Box create_report__conv2_BranchCoveragePointMap_24;
#line 1268 "create_report.m"
            MR_Word create_report__V_50_50;
#line 1268 "create_report.m"
            MR_Word create_report__V_51_51;
#line 1268 "create_report.m"
            MR_Word create_report__V_52_52;
#line 1268 "create_report.m"
            MR_Word create_report__V_53_53;
#line 1268 "create_report.m"
            MR_Word create_report__V_54_54;
#line 1270 "create_report.m"
            MR_Word create_report__V_56_56;
#line 1270 "create_report.m"
            MR_Word create_report__V_58_58;
#line 1270 "create_report.m"
            MR_Word create_report__V_59_59;
#line 1270 "create_report.m"
            MR_Word create_report__V_60_60;
#line 1270 "create_report.m"
            MR_Word create_report__V_57_57;

#line 1266 "create_report.m"
            {
#line 1266 "create_report.m"
              create_report__V_33_33 = mercury__map__init_0_f_0(create_report__TypeCtorInfo_69_69, create_report__TypeCtorInfo_70_70);
            }
#line 1267 "create_report.m"
            {
#line 1267 "create_report.m"
              create_report__V_34_34 = mercury__map__init_0_f_0(create_report__TypeCtorInfo_69_69, create_report__TypeCtorInfo_70_70);
            }
#line 6559 "create_report.c"
            create_report__TypeInfo_71_71 = (MR_Word) &create_report_scalar_common_2[17];
#line 1265 "create_report.m"
            {
#line 1265 "create_report.m"
              mercury__list__foldl2_6_p_0(create_report__TypeCtorInfo_70_70, create_report__TypeInfo_71_71, create_report__TypeInfo_71_71, (MR_Word) &create_report_scalar_common_2[20], create_report__CoveragePoints_19, ((MR_Box) (create_report__V_33_33)), &create_report__conv3_SolnsCoveragePointMap_23, ((MR_Box) (create_report__V_34_34)), &create_report__conv2_BranchCoveragePointMap_24);
            }
#line 1265 "create_report.m"
            create_report__SolnsCoveragePointMap_23 = ((MR_Word) create_report__conv3_SolnsCoveragePointMap_23);
#line 1265 "create_report.m"
            create_report__BranchCoveragePointMap_24 = ((MR_Word) create_report__conv2_BranchCoveragePointMap_24);
#line 1268 "create_report.m"
            create_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcRep0_22, (MR_Integer) 0)));
#line 1268 "create_report.m"
            create_report__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcRep0_22, (MR_Integer) 1)));
#line 1268 "create_report.m"
            create_report__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_35_35, (MR_Integer) 0)));
#line 1268 "create_report.m"
            create_report__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_35_35, (MR_Integer) 1)));
#line 1268 "create_report.m"
            create_report__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_35_35, (MR_Integer) 2)));
#line 1268 "create_report.m"
            create_report__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_35_35, (MR_Integer) 3)));
#line 1268 "create_report.m"
            create_report__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_35_35, (MR_Integer) 4)));
#line 1269 "create_report.m"
            {
#line 1269 "create_report.m"
              program_representation_utils__label_goals_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, &create_report__LastGoalId_26, &create_report__ContainingGoalMap_27, create_report__Goal0_25, &create_report__Goal_28);
            }
#line 1270 "create_report.m"
            create_report__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcRep0_22, (MR_Integer) 0)));
#line 1270 "create_report.m"
            create_report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcRep0_22, (MR_Integer) 1)));
#line 1270 "create_report.m"
            create_report__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_36_36, (MR_Integer) 0)));
#line 1270 "create_report.m"
            create_report__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_36_36, (MR_Integer) 1)));
#line 1270 "create_report.m"
            create_report__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_36_36, (MR_Integer) 2)));
#line 1270 "create_report.m"
            create_report__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_36_36, (MR_Integer) 3)));
#line 1270 "create_report.m"
            create_report__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_36_36, (MR_Integer) 4)));
#line 1270 "create_report.m"
            {
#line 1270 "create_report.m"
              create_report__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1270 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_37_37, 0) = ((MR_Box) (create_report__V_56_56));
#line 1270 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_37_37, 1) = ((MR_Box) (create_report__Goal_28));
#line 1270 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_37_37, 2) = ((MR_Box) (create_report__V_58_58));
#line 1270 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_37_37, 3) = ((MR_Box) (create_report__V_59_59));
#line 1270 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_37_37, 4) = ((MR_Box) (create_report__V_60_60));
#line 1270 "create_report.m"
            }
#line 1270 "create_report.m"
            {
#line 1270 "create_report.m"
              create_report__ProcRep_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1270 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcRep_29, 0) = ((MR_Box) (create_report__V_55_55));
#line 1270 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcRep_29, 1) = ((MR_Box) (create_report__V_37_37));
#line 1270 "create_report.m"
            }
#line 1271 "create_report.m"
            {
#line 1271 "create_report.m"
              coverage__procrep_annotate_with_coverage_8_p_0(create_report__TypeInfo_for_Callee_63, create_report__ProcRep_29, create_report__Own_3, create_report__CallSitesMap_5, create_report__SolnsCoveragePointMap_23, create_report__BranchCoveragePointMap_24, create_report__ContainingGoalMap_27, create_report__LastGoalId_26, &create_report__CoverageArray_30);
            }
#line 1274 "create_report.m"
            {
#line 1274 "create_report.m"
              create_report__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_38_38, 0) = ((MR_Box) (create_report__PSPtr_2));
#line 1274 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_38_38, 1) = ((MR_Box) (create_report__ProcRep_29));
#line 1274 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_38_38, 2) = ((MR_Box) (create_report__CoverageArray_30));
#line 1274 "create_report.m"
            }
#line 1274 "create_report.m"
            {
#line 1274 "create_report.m"
              MR_Word base;
#line 1274 "create_report.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "create_report.m"
              *create_report__HeadVar__6_6 = base;
#line 1274 "create_report.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__V_38_38));
#line 1274 "create_report.m"
            }
#line 1263 "create_report.m"
          }
#line 1254 "create_report.m"
      }
#line 1251 "create_report.m"
  }
#line 1246 "create_report.m"
}

#line 1729 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_caller_cliques_3_f_0_1(
#line 1729 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1729 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1729 "create_report.m"
{
#line 1729 "create_report.m"
  {
#line 1729 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1729 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1729 "create_report.m"
    MR_Word create_report__conv0_ProcDesc_6;

#line 1729 "create_report.m"
    {
#line 1729 "create_report.m"
      create_report__conv0_ProcDesc_6 = create_report__describe_clique_member_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1729 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_ProcDesc_6));
#line 1729 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1729 "create_report.m"
  }
#line 1729 "create_report.m"
}

#line 1185 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_cliques_3_f_0(
#line 1185 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1185 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1185 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 1185 "create_report.m"
{
#line 1190 "create_report.m"
  {
#line 1190 "create_report.m"
    MR_bool create_report__succeeded;
#line 1190 "create_report.m"
    MR_Word create_report__PerfRowData_9;
#line 1190 "create_report.m"
    MR_Word create_report__CliquePtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1190 "create_report.m"
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1190 "create_report.m"
    MR_Word create_report__CliqueDesc_10;
#line 1190 "create_report.m"
    MR_Word create_report__Own_11;
#line 1190 "create_report.m"
    MR_Word create_report__Desc_12;
#line 1190 "create_report.m"
    MR_Word create_report__V_52_52;

#line 1716 "create_report.m"
    {
#line 1716 "create_report.m"
      create_report__succeeded = profile__valid_clique_ptr_2_p_0(create_report__Deep_5, create_report__CliquePtr_7);
    }
#line 1734 "create_report.m"
    if (create_report__succeeded)
#line 1717 "create_report.m"
      {
#line 1717 "create_report.m"
        MR_Word create_report__MemberPDPtrs_19;
#line 1717 "create_report.m"
        MR_Word create_report__ParentCSDPtr_20;
#line 1717 "create_report.m"
        MR_Word create_report__ParentCSD_21;
#line 1717 "create_report.m"
        MR_Word create_report__EntryPDPtr_22;
#line 1724 "create_report.m"
        MR_Word create_report__V_33_33;
#line 1724 "create_report.m"
        MR_Word create_report__V_34_34;
#line 1731 "create_report.m"
        MR_Word create_report__OtherPDPtrs_23;

#line 1717 "create_report.m"
        {
#line 1717 "create_report.m"
          profile__deep_lookup_clique_members_3_p_0(create_report__Deep_5, create_report__CliquePtr_7, &create_report__MemberPDPtrs_19);
        }
#line 1718 "create_report.m"
        {
#line 1718 "create_report.m"
          profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_5, create_report__CliquePtr_7, &create_report__ParentCSDPtr_20);
        }
#line 1719 "create_report.m"
        {
#line 1719 "create_report.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_5, create_report__ParentCSDPtr_20, &create_report__ParentCSD_21);
        }
#line 1724 "create_report.m"
        create_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_21, (MR_Integer) 0)));
#line 1724 "create_report.m"
        create_report__EntryPDPtr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_21, (MR_Integer) 1)));
#line 1724 "create_report.m"
        create_report__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_21, (MR_Integer) 2)));
#line 1726 "create_report.m"
        {
#line 1726 "create_report.m"
          create_report__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, create_report__MemberPDPtrs_19, ((MR_Box) (create_report__EntryPDPtr_22)), &create_report__OtherPDPtrs_23);
        }
#line 1731 "create_report.m"
        if (create_report__succeeded)
#line 1727 "create_report.m"
          {
#line 1727 "create_report.m"
            MR_Word create_report__EntryProcDesc_24;
#line 1727 "create_report.m"
            MR_Word create_report__OtherProcDescs_25;
#line 1727 "create_report.m"
            MR_Word create_report__V_26_26;
#line 1727 "create_report.m"
            MR_Word create_report__PD_43;
#line 1727 "create_report.m"
            MR_Word create_report__V_44_44;
#line 1742 "create_report.m"
            MR_ArrayPtr create_report__V_45_45;
#line 1742 "create_report.m"
            MR_Word create_report__V_46_46;

#line 1741 "create_report.m"
            {
#line 1741 "create_report.m"
              profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_5, create_report__EntryPDPtr_22, &create_report__PD_43);
            }
#line 1742 "create_report.m"
            create_report__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_43, (MR_Integer) 0)));
#line 1742 "create_report.m"
            create_report__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_43, (MR_Integer) 1)));
#line 1742 "create_report.m"
            create_report__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_43, (MR_Integer) 2)));
#line 1742 "create_report.m"
            {
#line 1742 "create_report.m"
              create_report__EntryProcDesc_24 = create_report__describe_proc_2_f_0(create_report__Deep_5, create_report__V_44_44);
            }
#line 1729 "create_report.m"
            {
#line 1729 "create_report.m"
              create_report__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_26_26, 0) = ((MR_Box) (&create_report_scalar_common_5[2]));
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_26_26, 1) = ((MR_Box) (create_report__create_proc_caller_cliques_3_f_0_1));
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_26_26, 3) = ((MR_Box) (create_report__Deep_5));
#line 1729 "create_report.m"
            }
#line 1729 "create_report.m"
            {
#line 1729 "create_report.m"
              create_report__OtherProcDescs_25 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &report__report__type_ctor_info_proc_desc_0, create_report__V_26_26, create_report__OtherPDPtrs_23);
            }
#line 1730 "create_report.m"
            {
#line 1730 "create_report.m"
              create_report__CliqueDesc_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1730 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_10, 0) = ((MR_Box) (create_report__CliquePtr_7));
#line 1730 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_10, 1) = ((MR_Box) (create_report__EntryProcDesc_24));
#line 1730 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_10, 2) = ((MR_Box) (create_report__OtherProcDescs_25));
#line 1730 "create_report.m"
            }
#line 1727 "create_report.m"
          }
#line 1731 "create_report.m"
        else
#line 1732 "create_report.m"
          {
#line 1732 "create_report.m"
            {
#line 1732 "create_report.m"
              mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "entry pdptr not a member");
            }
#line 1732 "create_report.m"
          }
#line 1717 "create_report.m"
      }
#line 1734 "create_report.m"
    else
#line 1735 "create_report.m"
      {
#line 1735 "create_report.m"
        {
#line 1735 "create_report.m"
          mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "invalid clique_ptr");
        }
#line 1735 "create_report.m"
      }
#line 1192 "create_report.m"
    {
#line 1192 "create_report.m"
      apply_exclusion__compute_parent_csd_prof_info_5_p_0(create_report__Deep_5, create_report__CalleePSPtr_6, create_report__CSDPtrs_8, &create_report__Own_11, &create_report__Desc_12);
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_52_52, 0) = ((MR_Box) (create_report__Desc_12));
#line 1525 "create_report.m"
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__CliqueDesc_10)), create_report__Own_11, create_report__V_52_52, &create_report__PerfRowData_9);
    }
#line 1190 "create_report.m"
    return create_report__PerfRowData_9;
#line 1190 "create_report.m"
  }
#line 1185 "create_report.m"
}

#line 1175 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_modules_3_f_0(
#line 1175 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1175 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1175 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 1175 "create_report.m"
{
#line 1180 "create_report.m"
  {
#line 1180 "create_report.m"
    MR_bool create_report__succeeded;
#line 1180 "create_report.m"
    MR_Word create_report__PerfRowData_9;
#line 1180 "create_report.m"
    MR_String create_report__ModuleName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1180 "create_report.m"
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1180 "create_report.m"
    MR_Word create_report__Own_10;
#line 1180 "create_report.m"
    MR_Word create_report__Desc_11;
#line 1180 "create_report.m"
    MR_Word create_report__V_18_18;

#line 1181 "create_report.m"
    {
#line 1181 "create_report.m"
      apply_exclusion__compute_parent_csd_prof_info_5_p_0(create_report__Deep_5, create_report__CalleePSPtr_6, create_report__CSDPtrs_8, &create_report__Own_10, &create_report__Desc_11);
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_18_18, 0) = ((MR_Box) (create_report__Desc_11));
#line 1525 "create_report.m"
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__ModuleName_7)), create_report__Own_10, create_report__V_18_18, &create_report__PerfRowData_9);
    }
#line 1180 "create_report.m"
    return create_report__PerfRowData_9;
#line 1180 "create_report.m"
  }
#line 1175 "create_report.m"
}

#line 1164 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_procedures_3_f_0(
#line 1164 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1164 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1164 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 1164 "create_report.m"
{
#line 1169 "create_report.m"
  {
#line 1169 "create_report.m"
    MR_bool create_report__succeeded;
#line 1169 "create_report.m"
    MR_Word create_report__PerfRowData_9;
#line 1169 "create_report.m"
    MR_Word create_report__PSSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1169 "create_report.m"
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1169 "create_report.m"
    MR_Word create_report__ProcDesc_10;
#line 1169 "create_report.m"
    MR_Word create_report__Own_11;
#line 1169 "create_report.m"
    MR_Word create_report__Desc_12;
#line 1169 "create_report.m"
    MR_Word create_report__V_19_19;

#line 1170 "create_report.m"
    {
#line 1170 "create_report.m"
      create_report__ProcDesc_10 = create_report__describe_proc_2_f_0(create_report__Deep_5, create_report__PSSPtr_7);
    }
#line 1171 "create_report.m"
    {
#line 1171 "create_report.m"
      apply_exclusion__compute_parent_csd_prof_info_5_p_0(create_report__Deep_5, create_report__CalleePSPtr_6, create_report__CSDPtrs_8, &create_report__Own_11, &create_report__Desc_12);
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_19_19, 0) = ((MR_Box) (create_report__Desc_12));
#line 1525 "create_report.m"
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__ProcDesc_10)), create_report__Own_11, create_report__V_19_19, &create_report__PerfRowData_9);
    }
#line 1169 "create_report.m"
    return create_report__PerfRowData_9;
#line 1169 "create_report.m"
  }
#line 1164 "create_report.m"
}

#line 1153 "create_report.m"
static MR_Word MR_CALL 
create_report__create_proc_caller_call_sites_3_f_0(
#line 1153 "create_report.m"
  MR_Word create_report__Deep_5,
#line 1153 "create_report.m"
  MR_Word create_report__CalleePSPtr_6,
#line 1153 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 1153 "create_report.m"
{
#line 1158 "create_report.m"
  {
#line 1158 "create_report.m"
    MR_bool create_report__succeeded;
#line 1158 "create_report.m"
    MR_Word create_report__PerfRowData_9;
#line 1158 "create_report.m"
    MR_Word create_report__CSSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 1158 "create_report.m"
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 1158 "create_report.m"
    MR_Word create_report__CallSiteDesc_10;
#line 1158 "create_report.m"
    MR_Word create_report__Own_11;
#line 1158 "create_report.m"
    MR_Word create_report__Desc_12;
#line 1158 "create_report.m"
    MR_Word create_report__V_19_19;

#line 1159 "create_report.m"
    {
#line 1159 "create_report.m"
      create_report__CallSiteDesc_10 = create_report__describe_call_site_2_f_0(create_report__Deep_5, create_report__CSSPtr_7);
    }
#line 1160 "create_report.m"
    {
#line 1160 "create_report.m"
      apply_exclusion__compute_parent_csd_prof_info_5_p_0(create_report__Deep_5, create_report__CalleePSPtr_6, create_report__CSDPtrs_8, &create_report__Own_11, &create_report__Desc_12);
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_19_19, 0) = ((MR_Box) (create_report__Desc_12));
#line 1525 "create_report.m"
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__CallSiteDesc_10)), create_report__Own_11, create_report__V_19_19, &create_report__PerfRowData_9);
    }
#line 1158 "create_report.m"
    return create_report__PerfRowData_9;
#line 1158 "create_report.m"
  }
#line 1153 "create_report.m"
}

#line 1125 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_6(
#line 1125 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1125 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1125 "create_report.m"
{
#line 1125 "create_report.m"
  {
#line 1125 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1125 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1125 "create_report.m"
    MR_Word create_report__conv5_PerfRowData_9;

#line 1125 "create_report.m"
    {
#line 1125 "create_report.m"
      create_report__conv5_PerfRowData_9 = create_report__create_proc_caller_procedures_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1125 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv5_PerfRowData_9));
#line 1125 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1125 "create_report.m"
  }
#line 1125 "create_report.m"
}

#line 1133 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_5(
#line 1133 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1133 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1133 "create_report.m"
{
#line 1133 "create_report.m"
  {
#line 1133 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1133 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1133 "create_report.m"
    MR_Word create_report__conv4_PerfRowData_9;

#line 1133 "create_report.m"
    {
#line 1133 "create_report.m"
      create_report__conv4_PerfRowData_9 = create_report__create_proc_caller_modules_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1133 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv4_PerfRowData_9));
#line 1133 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1133 "create_report.m"
  }
#line 1133 "create_report.m"
}

#line 1141 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_4(
#line 1141 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1141 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1141 "create_report.m"
{
#line 1141 "create_report.m"
  {
#line 1141 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1141 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1141 "create_report.m"
    MR_Word create_report__conv3_PerfRowData_9;

#line 1141 "create_report.m"
    {
#line 1141 "create_report.m"
      create_report__conv3_PerfRowData_9 = create_report__create_proc_caller_cliques_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1141 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv3_PerfRowData_9));
#line 1141 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1141 "create_report.m"
  }
#line 1141 "create_report.m"
}

#line 1117 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_3(
#line 1117 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1117 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1117 "create_report.m"
{
#line 1117 "create_report.m"
  {
#line 1117 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1117 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1117 "create_report.m"
    MR_Word create_report__conv2_PerfRowData_9;

#line 1117 "create_report.m"
    {
#line 1117 "create_report.m"
      create_report__conv2_PerfRowData_9 = create_report__create_proc_caller_call_sites_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1117 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_PerfRowData_9));
#line 1117 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1117 "create_report.m"
  }
#line 1117 "create_report.m"
}

#line 1069 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_2(
#line 1069 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1069 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1069 "create_report.m"
{
#line 1069 "create_report.m"
  {
#line 1069 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1069 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1069 "create_report.m"
    MR_Word create_report__conv1_HeadVar__2_2;

#line 1069 "create_report.m"
    {
#line 1069 "create_report.m"
      create_report__conv1_HeadVar__2_2 = apply_exclusion__pair_self_1_f_0(((MR_Word) create_report__wrapper_arg_1));
    }
#line 1069 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv1_HeadVar__2_2));
#line 1069 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1069 "create_report.m"
  }
#line 1069 "create_report.m"
}

#line 1096 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_1(
#line 1096 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1096 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1096 "create_report.m"
{
#line 1096 "create_report.m"
  {
#line 1096 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1096 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1096 "create_report.m"
    MR_Word create_report__conv0_HeadVar__4_4;

#line 1096 "create_report.m"
    {
#line 1096 "create_report.m"
      create_report__conv0_HeadVar__4_4 = apply_exclusion__pair_contour_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1096 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_HeadVar__4_4));
#line 1096 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1096 "create_report.m"
  }
#line 1096 "create_report.m"
}

#line 1057 "create_report.m"
static void MR_CALL 
create_report__create_proc_callers_report_7_p_0(
#line 1057 "create_report.m"
  MR_Word create_report__Deep_8,
#line 1057 "create_report.m"
  MR_Word create_report__PSPtr_9,
#line 1057 "create_report.m"
  MR_Word create_report__CallerGroups_10,
#line 1057 "create_report.m"
  MR_Integer create_report__BunchNum_11,
#line 1057 "create_report.m"
  MR_Integer create_report__CallersPerBunch_12,
#line 1057 "create_report.m"
  MR_Word create_report__Contour_13,
#line 1057 "create_report.m"
  MR_Word * create_report__MaybeProcCallersReport_14)
#line 1057 "create_report.m"
{
#line 1149 "create_report.m"
  {
#line 1149 "create_report.m"
    MR_bool create_report__succeeded;

#line 1063 "create_report.m"
    {
#line 1063 "create_report.m"
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_8, create_report__PSPtr_9);
    }
#line 1149 "create_report.m"
    if (create_report__succeeded)
#line 1064 "create_report.m"
      {
#line 1064 "create_report.m"
        MR_Word create_report__ProcDesc_15;
#line 1064 "create_report.m"
        MR_Word create_report__CallerCSDPtrs0_16;
#line 1064 "create_report.m"
        MR_Word create_report__MaybeCallerCSDPtrPairs_18;
#line 1064 "create_report.m"
        MR_Word create_report__MaybeWarnMessage_19;

#line 1064 "create_report.m"
        {
#line 1064 "create_report.m"
          create_report__ProcDesc_15 = create_report__describe_proc_2_f_0(create_report__Deep_8, create_report__PSPtr_9);
        }
#line 1066 "create_report.m"
        {
#line 1066 "create_report.m"
          profile__deep_lookup_proc_callers_3_p_0(create_report__Deep_8, create_report__PSPtr_9, &create_report__CallerCSDPtrs0_16);
        }
#line 1072 "create_report.m"
#line 1072 "create_report.m"
        switch (create_report__Contour_13) {
#line 1072 "create_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1072 "create_report.m"
          case (MR_Integer) 0:
#line 1073 "create_report.m"
            {
#line 1073 "create_report.m"
              MR_Word create_report__ExcludeFile_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 27)));
#line 1073 "create_report.m"
              MR_String create_report__ExcludeFileName_21 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ExcludeFile_20, (MR_Integer) 0)));
#line 1073 "create_report.m"
              MR_Word create_report__ExcludeContents_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ExcludeFile_20, (MR_Integer) 1)));
#line 1074 "create_report.m"
              MR_Word create_report__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 0)));
#line 1074 "create_report.m"
              MR_String create_report__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 1)));
#line 1074 "create_report.m"
              MR_String create_report__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 2)));
#line 1074 "create_report.m"
              MR_String create_report__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 3)));
#line 1074 "create_report.m"
              MR_Word create_report__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 4)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_66_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 5)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_67_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 6)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_68_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 7)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 8)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_70_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 9)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_71_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 10)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_72_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 11)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_73_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 12)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_74_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 13)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 14)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_76_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 15)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_77_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 16)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_78_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 17)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_79_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 18)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_80_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 19)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_81_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 20)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_82_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 21)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_83_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 22)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_84_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 23)));
#line 1074 "create_report.m"
              MR_ArrayPtr create_report__V_85_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 24)));
#line 1074 "create_report.m"
              MR_Word create_report__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 25)));
#line 1074 "create_report.m"
              MR_Word create_report__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 26)));
#line 1074 "create_report.m"
              MR_Word create_report__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 28)));

#line 1085 "create_report.m"
#line 1085 "create_report.m"
              switch (MR_tag((MR_Word) create_report__ExcludeContents_22)) {
#line 1085 "create_report.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1085 "create_report.m"
                case (MR_Integer) 0:
#line 1077 "create_report.m"
                  {
#line 1077 "create_report.m"
                    MR_String create_report__ErrorMessage0_23;
#line 1077 "create_report.m"
                    MR_String create_report__V_134_134;
#line 1077 "create_report.m"
                    MR_String create_report__V_141_141;

#line 1082 "create_report.m"
                    {
#line 1082 "create_report.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &create_report_scalar_common_3[0], create_report__ExcludeFileName_21, &create_report__V_134_134);
                    }
#line 1081 "create_report.m"
                    {
#line 1081 "create_report.m"
                      create_report__V_141_141 = mercury__string__f_43_43_2_f_0(create_report__V_134_134, (MR_String) "\'.");
                    }
#line 1081 "create_report.m"
                    {
#line 1081 "create_report.m"
                      create_report__ErrorMessage0_23 = mercury__string__f_43_43_2_f_0((MR_String) "Could not read contour exclusion file \140", create_report__V_141_141);
                    }
#line 1083 "create_report.m"
                    {
#line 1083 "create_report.m"
                      create_report__MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1083 "create_report.m"
                      MR_hl_field(MR_mktag(1), create_report__MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (create_report__ErrorMessage0_23));
#line 1083 "create_report.m"
                    }
#line 1084 "create_report.m"
                    create_report__MaybeWarnMessage_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1077 "create_report.m"
                  }
#line 1085 "create_report.m"
                  break;
#line 1085 "create_report.m"
                case (MR_Integer) 1:
#line 1086 "create_report.m"
                  {
#line 1086 "create_report.m"
                    MR_String create_report__ErrorMsg_24 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__ExcludeContents_22, (MR_Integer) 0)));
#line 1086 "create_report.m"
                    MR_String create_report__ErrorMessage0_57;
#line 1086 "create_report.m"
                    MR_String create_report__V_114_114;
#line 1086 "create_report.m"
                    MR_Word create_report__V_120_120 = (MR_Word) &create_report_scalar_common_3[0];
#line 1086 "create_report.m"
                    MR_String create_report__V_121_121;
#line 1086 "create_report.m"
                    MR_String create_report__V_123_123;
#line 1086 "create_report.m"
                    MR_String create_report__V_124_124;
#line 1086 "create_report.m"
                    MR_String create_report__V_131_131;

#line 1089 "create_report.m"
                    {
#line 1089 "create_report.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(create_report__V_120_120, create_report__ErrorMsg_24, &create_report__V_114_114);
                    }
#line 1087 "create_report.m"
                    {
#line 1087 "create_report.m"
                      create_report__V_121_121 = mercury__string__f_43_43_2_f_0(create_report__V_114_114, (MR_String) ".");
                    }
#line 1087 "create_report.m"
                    {
#line 1087 "create_report.m"
                      create_report__V_123_123 = mercury__string__f_43_43_2_f_0((MR_String) "\' has an error: ", create_report__V_121_121);
                    }
#line 1089 "create_report.m"
                    {
#line 1089 "create_report.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(create_report__V_120_120, create_report__ExcludeFileName_21, &create_report__V_124_124);
                    }
#line 1087 "create_report.m"
                    {
#line 1087 "create_report.m"
                      create_report__V_131_131 = mercury__string__f_43_43_2_f_0(create_report__V_124_124, create_report__V_123_123);
                    }
#line 1087 "create_report.m"
                    {
#line 1087 "create_report.m"
                      create_report__ErrorMessage0_57 = mercury__string__f_43_43_2_f_0((MR_String) "The contour exclusion file \140", create_report__V_131_131);
                    }
#line 1090 "create_report.m"
                    {
#line 1090 "create_report.m"
                      create_report__MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "create_report.m"
                      MR_hl_field(MR_mktag(1), create_report__MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (create_report__ErrorMessage0_57));
#line 1090 "create_report.m"
                    }
#line 1091 "create_report.m"
                    create_report__MaybeWarnMessage_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1086 "create_report.m"
                  }
#line 1085 "create_report.m"
                  break;
#line 1085 "create_report.m"
                case (MR_Integer) 2:
#line 1094 "create_report.m"
                  {
#line 1094 "create_report.m"
                    MR_Word create_report__ExcludeModules_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__ExcludeContents_22, (MR_Integer) 0)));
#line 1094 "create_report.m"
                    MR_Word create_report__MaybeWarnMsg_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__ExcludeContents_22, (MR_Integer) 1)));
#line 1094 "create_report.m"
                    MR_Word create_report__V_40_40;
#line 1094 "create_report.m"
                    MR_Word create_report__CallerCSDPtrPairs0_58;

#line 1096 "create_report.m"
                    {
#line 1096 "create_report.m"
                      create_report__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_40_40, 0) = ((MR_Box) (&create_report_scalar_common_6[11]));
#line 1096 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_40_40, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_1));
#line 1096 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1096 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_40_40, 3) = ((MR_Box) (create_report__Deep_8));
#line 1096 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_40_40, 4) = ((MR_Box) (create_report__ExcludeModules_25));
#line 1096 "create_report.m"
                    }
#line 1095 "create_report.m"
                    {
#line 1095 "create_report.m"
                      create_report__CallerCSDPtrPairs0_58 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &create_report_scalar_common_2[13], create_report__V_40_40, create_report__CallerCSDPtrs0_16);
                    }
#line 1097 "create_report.m"
                    {
#line 1097 "create_report.m"
                      create_report__MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1097 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (create_report__CallerCSDPtrPairs0_58));
#line 1097 "create_report.m"
                    }
#line 1101 "create_report.m"
                    if ((create_report__MaybeWarnMsg_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1100 "create_report.m"
                      create_report__MaybeWarnMessage_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1101 "create_report.m"
                    else
#line 1103 "create_report.m"
                      create_report__MaybeWarnMessage_19 = create_report__MaybeWarnMsg_26;
#line 1094 "create_report.m"
                  }
#line 1085 "create_report.m"
                  break;
#line 1085 "create_report.m"
              }
#line 1073 "create_report.m"
            }
#line 1072 "create_report.m"
            break;
#line 1072 "create_report.m"
          case (MR_Integer) 1:
#line 1068 "create_report.m"
            {
#line 1068 "create_report.m"
              MR_Word create_report__CallerCSDPtrPairs0_17;

#line 1069 "create_report.m"
              {
#line 1069 "create_report.m"
                create_report__CallerCSDPtrPairs0_17 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &create_report_scalar_common_2[13], (MR_Word) &create_report_scalar_common_2[19], create_report__CallerCSDPtrs0_16);
              }
#line 1070 "create_report.m"
              {
#line 1070 "create_report.m"
                create_report__MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1070 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (create_report__CallerCSDPtrPairs0_17));
#line 1070 "create_report.m"
              }
#line 1071 "create_report.m"
              create_report__MaybeWarnMessage_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1068 "create_report.m"
            }
#line 1072 "create_report.m"
            break;
#line 1072 "create_report.m"
        }
#line 1110 "create_report.m"
        if (((MR_tag((MR_Word) create_report__MaybeCallerCSDPtrPairs_18)) == (MR_mktag((MR_Integer) 1))))
#line 1109 "create_report.m"
          *create_report__MaybeProcCallersReport_14 = (MR_Word) create_report__MaybeCallerCSDPtrPairs_18;
#line 1110 "create_report.m"
        else
#line 1111 "create_report.m"
          {
#line 1111 "create_report.m"
            MR_Word create_report__CallerCSDPtrPairs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeCallerCSDPtrPairs_18, (MR_Integer) 0)));
#line 1111 "create_report.m"
            MR_Word create_report__Callers_32;
#line 1111 "create_report.m"
            MR_Word create_report__ProcCallersReport_39;

#line 1120 "create_report.m"
#line 1120 "create_report.m"
            switch (create_report__CallerGroups_10) {
#line 1120 "create_report.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1120 "create_report.m"
              case (MR_Integer) 0:
#line 1113 "create_report.m"
                {
#line 1113 "create_report.m"
                  MR_Word create_report__CallSiteCallerGroups_30;
#line 1113 "create_report.m"
                  MR_Word create_report__ProcCallerCallSites_31;
#line 1113 "create_report.m"
                  MR_Word create_report__V_55_55;

#line 1114 "create_report.m"
                  {
#line 1114 "create_report.m"
                    create_report__CallSiteCallerGroups_30 = apply_exclusion__group_csds_by_call_site_2_f_0(create_report__Deep_8, create_report__CallerCSDPtrPairs_29);
                  }
#line 1117 "create_report.m"
                  {
#line 1117 "create_report.m"
                    create_report__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_55_55, 0) = ((MR_Box) (&create_report_scalar_common_6[12]));
#line 1117 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_55_55, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_3));
#line 1117 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1117 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_55_55, 3) = ((MR_Box) (create_report__Deep_8));
#line 1117 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_55_55, 4) = ((MR_Box) (create_report__PSPtr_9));
#line 1117 "create_report.m"
                  }
#line 1116 "create_report.m"
                  {
#line 1116 "create_report.m"
                    create_report__ProcCallerCallSites_31 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[14], (MR_Word) &create_report_scalar_common_1[11], create_report__V_55_55, create_report__CallSiteCallerGroups_30);
                  }
#line 1119 "create_report.m"
                  {
#line 1119 "create_report.m"
                    create_report__Callers_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1119 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__Callers_32, 0) = ((MR_Box) (create_report__ProcCallerCallSites_31));
#line 1119 "create_report.m"
                  }
#line 1113 "create_report.m"
                }
#line 1120 "create_report.m"
                break;
#line 1120 "create_report.m"
              case (MR_Integer) 3:
#line 1137 "create_report.m"
                {
#line 1137 "create_report.m"
                  MR_Word create_report__CliqueCallerGroups_37;
#line 1137 "create_report.m"
                  MR_Word create_report__ProcCallerCliques_38;
#line 1137 "create_report.m"
                  MR_Word create_report__V_52_52;

#line 1138 "create_report.m"
                  {
#line 1138 "create_report.m"
                    create_report__CliqueCallerGroups_37 = apply_exclusion__group_csds_by_clique_2_f_0(create_report__Deep_8, create_report__CallerCSDPtrPairs_29);
                  }
#line 1141 "create_report.m"
                  {
#line 1141 "create_report.m"
                    create_report__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1141 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_52_52, 0) = ((MR_Box) (&create_report_scalar_common_6[13]));
#line 1141 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_52_52, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_4));
#line 1141 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1141 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_52_52, 3) = ((MR_Box) (create_report__Deep_8));
#line 1141 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_52_52, 4) = ((MR_Box) (create_report__PSPtr_9));
#line 1141 "create_report.m"
                  }
#line 1140 "create_report.m"
                  {
#line 1140 "create_report.m"
                    create_report__ProcCallerCliques_38 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[16], (MR_Word) &create_report_scalar_common_1[5], create_report__V_52_52, create_report__CliqueCallerGroups_37);
                  }
#line 1143 "create_report.m"
                  {
#line 1143 "create_report.m"
                    create_report__Callers_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "create_report.m"
                    MR_hl_field(MR_mktag(3), create_report__Callers_32, 0) = ((MR_Box) (create_report__ProcCallerCliques_38));
#line 1143 "create_report.m"
                  }
#line 1137 "create_report.m"
                }
#line 1120 "create_report.m"
                break;
#line 1120 "create_report.m"
              case (MR_Integer) 2:
#line 1129 "create_report.m"
                {
#line 1129 "create_report.m"
                  MR_Word create_report__ModuleCallerGroups_35;
#line 1129 "create_report.m"
                  MR_Word create_report__ProcCallerModules_36;
#line 1129 "create_report.m"
                  MR_Word create_report__V_53_53;

#line 1130 "create_report.m"
                  {
#line 1130 "create_report.m"
                    create_report__ModuleCallerGroups_35 = apply_exclusion__group_csds_by_module_2_f_0(create_report__Deep_8, create_report__CallerCSDPtrPairs_29);
                  }
#line 1133 "create_report.m"
                  {
#line 1133 "create_report.m"
                    create_report__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1133 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_53_53, 0) = ((MR_Box) (&create_report_scalar_common_6[14]));
#line 1133 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_53_53, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_5));
#line 1133 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1133 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_53_53, 3) = ((MR_Box) (create_report__Deep_8));
#line 1133 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_53_53, 4) = ((MR_Box) (create_report__PSPtr_9));
#line 1133 "create_report.m"
                  }
#line 1132 "create_report.m"
                  {
#line 1132 "create_report.m"
                    create_report__ProcCallerModules_36 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[15], (MR_Word) &create_report_scalar_common_1[12], create_report__V_53_53, create_report__ModuleCallerGroups_35);
                  }
#line 1135 "create_report.m"
                  {
#line 1135 "create_report.m"
                    create_report__Callers_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "create_report.m"
                    MR_hl_field(MR_mktag(2), create_report__Callers_32, 0) = ((MR_Box) (create_report__ProcCallerModules_36));
#line 1135 "create_report.m"
                  }
#line 1129 "create_report.m"
                }
#line 1120 "create_report.m"
                break;
#line 1120 "create_report.m"
              case (MR_Integer) 1:
#line 1121 "create_report.m"
                {
#line 1121 "create_report.m"
                  MR_Word create_report__ProcCallerGroups_33;
#line 1121 "create_report.m"
                  MR_Word create_report__ProcCallerProcs_34;
#line 1121 "create_report.m"
                  MR_Word create_report__V_54_54;

#line 1122 "create_report.m"
                  {
#line 1122 "create_report.m"
                    create_report__ProcCallerGroups_33 = apply_exclusion__group_csds_by_procedure_2_f_0(create_report__Deep_8, create_report__CallerCSDPtrPairs_29);
                  }
#line 1125 "create_report.m"
                  {
#line 1125 "create_report.m"
                    create_report__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1125 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_54_54, 0) = ((MR_Box) (&create_report_scalar_common_6[15]));
#line 1125 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_54_54, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_6));
#line 1125 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_54_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1125 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_54_54, 3) = ((MR_Box) (create_report__Deep_8));
#line 1125 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_54_54, 4) = ((MR_Box) (create_report__PSPtr_9));
#line 1125 "create_report.m"
                  }
#line 1124 "create_report.m"
                  {
#line 1124 "create_report.m"
                    create_report__ProcCallerProcs_34 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[12], (MR_Word) &create_report_scalar_common_1[3], create_report__V_54_54, create_report__ProcCallerGroups_33);
                  }
#line 1127 "create_report.m"
                  {
#line 1127 "create_report.m"
                    create_report__Callers_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "create_report.m"
                    MR_hl_field(MR_mktag(1), create_report__Callers_32, 0) = ((MR_Box) (create_report__ProcCallerProcs_34));
#line 1127 "create_report.m"
                  }
#line 1121 "create_report.m"
                }
#line 1120 "create_report.m"
                break;
#line 1120 "create_report.m"
            }
#line 1145 "create_report.m"
            {
#line 1145 "create_report.m"
              create_report__ProcCallersReport_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1145 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 0) = ((MR_Box) (create_report__ProcDesc_15));
#line 1145 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 1) = ((MR_Box) (create_report__Callers_32));
#line 1145 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 2) = ((MR_Box) (create_report__BunchNum_11));
#line 1145 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 3) = ((MR_Box) (create_report__CallersPerBunch_12));
#line 1145 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 4) = ((MR_Box) (create_report__Contour_13));
#line 1145 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 5) = ((MR_Box) (create_report__MaybeWarnMessage_19));
#line 1145 "create_report.m"
            }
#line 1147 "create_report.m"
            {
#line 1147 "create_report.m"
              MR_Word base;
#line 1147 "create_report.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "create_report.m"
              *create_report__MaybeProcCallersReport_14 = base;
#line 1147 "create_report.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcCallersReport_39));
#line 1147 "create_report.m"
            }
#line 1111 "create_report.m"
          }
#line 1064 "create_report.m"
      }
#line 1149 "create_report.m"
    else
#line 1150 "create_report.m"
      {
#line 1150 "create_report.m"
        *create_report__MaybeProcCallersReport_14 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[1]);
#line 1150 "create_report.m"
      }
#line 1149 "create_report.m"
  }
#line 1057 "create_report.m"
}

#line 1039 "create_report.m"
static void MR_CALL 
create_report__accumulate_call_site_callees_7_p_0(
#line 1039 "create_report.m"
  MR_Word create_report__Deep_8,
#line 1039 "create_report.m"
  MR_Word create_report__CalleePerf_9,
#line 1039 "create_report.m"
  MR_Word * create_report__RowData_10,
#line 1039 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Own_0_17,
#line 1039 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Own_18,
#line 1039 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Desc_0_19,
#line 1039 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Desc_20)
#line 1039 "create_report.m"
{
#line 1044 "create_report.m"
  {
#line 1044 "create_report.m"
    MR_bool create_report__succeeded;
#line 1044 "create_report.m"
    MR_Word create_report__CalleePSPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePerf_9, (MR_Integer) 0)));
#line 1044 "create_report.m"
    MR_Word create_report__CalleeOwn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePerf_9, (MR_Integer) 1)));
#line 1044 "create_report.m"
    MR_Word create_report__CalleeDesc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePerf_9, (MR_Integer) 2)));
#line 1044 "create_report.m"
    MR_Word create_report__CalleeProcDesc_16;
#line 1044 "create_report.m"
    MR_Word create_report__V_29_29;

#line 1046 "create_report.m"
    {
#line 1046 "create_report.m"
      create_report__CalleeProcDesc_16 = create_report__describe_proc_2_f_0(create_report__Deep_8, create_report__CalleePSPtr_13);
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_29_29, 0) = ((MR_Box) (create_report__CalleeDesc_15));
#line 1525 "create_report.m"
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_8, ((MR_Box) (create_report__CalleeProcDesc_16)), create_report__CalleeOwn_14, create_report__V_29_29, create_report__RowData_10);
    }
#line 1049 "create_report.m"
    {
#line 1049 "create_report.m"
      *create_report__STATE_VARIABLE_Own_18 = measurements__add_own_to_own_2_f_0(create_report__STATE_VARIABLE_Own_0_17, create_report__CalleeOwn_14);
    }
#line 1050 "create_report.m"
    {
#line 1050 "create_report.m"
      *create_report__STATE_VARIABLE_Desc_20 = measurements__add_inherit_to_inherit_2_f_0(create_report__STATE_VARIABLE_Desc_0_19, create_report__CalleeDesc_15);
    }
#line 1044 "create_report.m"
  }
#line 1039 "create_report.m"
}

#line 1022 "create_report.m"
static void MR_CALL 
create_report__accumulate_csd_prof_info_7_p_0(
#line 1022 "create_report.m"
  MR_Word create_report__Deep_8,
#line 1022 "create_report.m"
  MR_Word create_report__CallerPSPtr_9,
#line 1022 "create_report.m"
  MR_Word create_report__CSDPtr_10,
#line 1022 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Own_0_17,
#line 1022 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Own_18,
#line 1022 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Desc_0_19,
#line 1022 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Desc_20)
#line 1022 "create_report.m"
{
#line 1027 "create_report.m"
  {
#line 1027 "create_report.m"
    MR_bool create_report__succeeded;
#line 1027 "create_report.m"
    MR_Word create_report__CSDOwn_13;
#line 1027 "create_report.m"
    MR_Word create_report__CSDDesc_14;
#line 1027 "create_report.m"
    MR_Word create_report__CompTableArray_15;
#line 1027 "create_report.m"
    MR_Word create_report__STATE_VARIABLE_Desc_22_22;
#line 1035 "create_report.m"
    MR_Word create_report__InnerTotal_16;
#line 1033 "create_report.m"
    MR_Box create_report__conv0_InnerTotal_16;

#line 1028 "create_report.m"
    {
#line 1028 "create_report.m"
      profile__deep_lookup_csd_own_3_p_0(create_report__Deep_8, create_report__CSDPtr_10, &create_report__CSDOwn_13);
    }
#line 1029 "create_report.m"
    {
#line 1029 "create_report.m"
      profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_8, create_report__CSDPtr_10, &create_report__CSDDesc_14);
    }
#line 1030 "create_report.m"
    {
#line 1030 "create_report.m"
      *create_report__STATE_VARIABLE_Own_18 = measurements__add_own_to_own_2_f_0(create_report__STATE_VARIABLE_Own_0_17, create_report__CSDOwn_13);
    }
#line 1031 "create_report.m"
    {
#line 1031 "create_report.m"
      create_report__STATE_VARIABLE_Desc_22_22 = measurements__add_inherit_to_inherit_2_f_0(create_report__STATE_VARIABLE_Desc_0_19, create_report__CSDDesc_14);
    }
#line 1032 "create_report.m"
    {
#line 1032 "create_report.m"
      profile__deep_lookup_csd_comp_table_3_p_0(create_report__Deep_8, create_report__CSDPtr_10, &create_report__CompTableArray_15);
    }
#line 1033 "create_report.m"
    {
#line 1033 "create_report.m"
      create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__CompTableArray_15, ((MR_Box) (create_report__CallerPSPtr_9)), &create_report__conv0_InnerTotal_16);
    }
#line 1033 "create_report.m"
    if (create_report__succeeded)
#line 1033 "create_report.m"
      {
#line 1033 "create_report.m"
        create_report__InnerTotal_16 = ((MR_Word) create_report__conv0_InnerTotal_16);
#line 1033 "create_report.m"
        create_report__succeeded = MR_TRUE;
#line 1033 "create_report.m"
      }
#line 1035 "create_report.m"
    if (create_report__succeeded)
#line 1034 "create_report.m"
      {
#line 1034 "create_report.m"
        *create_report__STATE_VARIABLE_Desc_20 = measurements__subtract_inherit_from_inherit_2_f_0(create_report__InnerTotal_16, create_report__STATE_VARIABLE_Desc_22_22);
      }
#line 1035 "create_report.m"
    else
#line 1035 "create_report.m"
      *create_report__STATE_VARIABLE_Desc_20 = create_report__STATE_VARIABLE_Desc_22_22;
#line 1027 "create_report.m"
  }
#line 1022 "create_report.m"
}

#line 990 "create_report.m"
static void MR_CALL 
create_report__summarize_callers_11_p_0(
#line 990 "create_report.m"
  MR_Word create_report__Deep_12,
#line 990 "create_report.m"
  MR_Word create_report__CallerCSDPtrs0_13,
#line 990 "create_report.m"
  MR_Word create_report__CalleePSPtr_14,
#line 990 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_PSSeen_0_27,
#line 990 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_PSSeen_28,
#line 990 "create_report.m"
  MR_Integer create_report__STATE_VARIABLE_NumDynamic_0_29,
#line 990 "create_report.m"
  MR_Integer * create_report__STATE_VARIABLE_NumDynamic_30,
#line 990 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Own_0_31,
#line 990 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Own_32,
#line 990 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_Desc_0_33,
#line 990 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_Desc_34)
#line 990 "create_report.m"
{
#line 998 "create_report.m"
  while (MR_TRUE)
#line 998 "create_report.m"
    {
#line 998 "create_report.m"
      /* tailcall optimized into a loop */
#line 998 "create_report.m"
      {
#line 998 "create_report.m"
        MR_bool create_report__succeeded;

#line 998 "create_report.m"
        if ((create_report__CallerCSDPtrs0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 998 "create_report.m"
          {
#line 998 "create_report.m"
            *create_report__STATE_VARIABLE_PSSeen_28 = create_report__STATE_VARIABLE_PSSeen_0_27;
#line 998 "create_report.m"
            *create_report__STATE_VARIABLE_NumDynamic_30 = create_report__STATE_VARIABLE_NumDynamic_0_29;
#line 998 "create_report.m"
            *create_report__STATE_VARIABLE_Own_32 = create_report__STATE_VARIABLE_Own_0_31;
#line 998 "create_report.m"
            *create_report__STATE_VARIABLE_Desc_34 = create_report__STATE_VARIABLE_Desc_0_33;
#line 998 "create_report.m"
          }
#line 998 "create_report.m"
        else
#line 1000 "create_report.m"
          {
#line 1000 "create_report.m"
            MR_Word create_report__CSDPtr_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallerCSDPtrs0_13, (MR_Integer) 0)));
#line 1000 "create_report.m"
            MR_Word create_report__CallerCSDPtrs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallerCSDPtrs0_13, (MR_Integer) 1)));
#line 1000 "create_report.m"
            MR_Word create_report__CSD_21;
#line 1000 "create_report.m"
            MR_Word create_report__CallerPDPtr_22;
#line 1000 "create_report.m"
            MR_Word create_report__CallerPD_23;
#line 1000 "create_report.m"
            MR_Word create_report__CallerPSPtr_24;
#line 1000 "create_report.m"
            MR_Integer create_report__STATE_VARIABLE_NumDynamic_35_35;
#line 1000 "create_report.m"
            MR_Word create_report__STATE_VARIABLE_PSSeen_37_37;
#line 1000 "create_report.m"
            MR_Word create_report__STATE_VARIABLE_Own_38_38;
#line 1000 "create_report.m"
            MR_Word create_report__STATE_VARIABLE_Desc_39_39;
#line 1003 "create_report.m"
            MR_Word create_report__V_44_44;
#line 1003 "create_report.m"
            MR_Word create_report__V_45_45;
#line 1005 "create_report.m"
            MR_ArrayPtr create_report__V_46_46;
#line 1005 "create_report.m"
            MR_Word create_report__V_47_47;
#line 1006 "create_report.m"
            MR_Integer create_report__V_52_52;
#line 1006 "create_report.m"
            MR_Integer create_report__V_53_53;

#line 1002 "create_report.m"
            {
#line 1002 "create_report.m"
              profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_12, create_report__CSDPtr_19, &create_report__CSD_21);
            }
#line 1003 "create_report.m"
            create_report__CallerPDPtr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 0)));
#line 1003 "create_report.m"
            create_report__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 1)));
#line 1003 "create_report.m"
            create_report__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 2)));
#line 1004 "create_report.m"
            {
#line 1004 "create_report.m"
              profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_12, create_report__CallerPDPtr_22, &create_report__CallerPD_23);
            }
#line 1005 "create_report.m"
            create_report__CallerPSPtr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallerPD_23, (MR_Integer) 0)));
#line 1005 "create_report.m"
            create_report__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__CallerPD_23, (MR_Integer) 1)));
#line 1005 "create_report.m"
            create_report__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallerPD_23, (MR_Integer) 2)));
#line 1006 "create_report.m"
            create_report__V_52_52 = (MR_Integer) create_report__CallerPSPtr_24;
#line 1006 "create_report.m"
            create_report__V_53_53 = (MR_Integer) create_report__CalleePSPtr_14;
#line 1006 "create_report.m"
            create_report__succeeded = (create_report__V_52_52 == create_report__V_53_53);
#line 1009 "create_report.m"
            if (create_report__succeeded)
#line 1008 "create_report.m"
              {
#line 1008 "create_report.m"
                create_report__STATE_VARIABLE_Desc_39_39 = create_report__STATE_VARIABLE_Desc_0_33;
#line 1008 "create_report.m"
                create_report__STATE_VARIABLE_Own_38_38 = create_report__STATE_VARIABLE_Own_0_31;
#line 1008 "create_report.m"
                create_report__STATE_VARIABLE_NumDynamic_35_35 = create_report__STATE_VARIABLE_NumDynamic_0_29;
#line 1008 "create_report.m"
                create_report__STATE_VARIABLE_PSSeen_37_37 = create_report__STATE_VARIABLE_PSSeen_0_27;
#line 1008 "create_report.m"
              }
#line 1009 "create_report.m"
            else
#line 1010 "create_report.m"
              {
#line 1010 "create_report.m"
                MR_Word create_report__CSDOwn_25;
#line 1010 "create_report.m"
                MR_Word create_report__CSDInherit_26;
#line 1012 "create_report.m"
                MR_Word create_report__V_48_48;
#line 1012 "create_report.m"
                MR_Word create_report__V_49_49;

#line 1010 "create_report.m"
                create_report__STATE_VARIABLE_NumDynamic_35_35 = (create_report__STATE_VARIABLE_NumDynamic_0_29 + (MR_Integer) 1);
#line 1011 "create_report.m"
                {
#line 1011 "create_report.m"
                  mercury__set__insert_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, ((MR_Box) (create_report__CallerPSPtr_24)), create_report__STATE_VARIABLE_PSSeen_0_27, &create_report__STATE_VARIABLE_PSSeen_37_37);
                }
#line 1012 "create_report.m"
                create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 0)));
#line 1012 "create_report.m"
                create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 1)));
#line 1012 "create_report.m"
                create_report__CSDOwn_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 2)));
#line 1013 "create_report.m"
                {
#line 1013 "create_report.m"
                  create_report__STATE_VARIABLE_Own_38_38 = measurements__add_own_to_own_2_f_0(create_report__STATE_VARIABLE_Own_0_31, create_report__CSDOwn_25);
                }
#line 1014 "create_report.m"
                {
#line 1014 "create_report.m"
                  profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_12, create_report__CSDPtr_19, &create_report__CSDInherit_26);
                }
#line 1015 "create_report.m"
                {
#line 1015 "create_report.m"
                  create_report__STATE_VARIABLE_Desc_39_39 = measurements__add_inherit_to_inherit_2_f_0(create_report__STATE_VARIABLE_Desc_0_33, create_report__CSDInherit_26);
                }
#line 1010 "create_report.m"
              }
#line 1018 "create_report.m"
            /* direct tailcall eliminated */
#line 1018 "create_report.m"
            {
#line 1018 "create_report.m"
              MR_Word create_report__CallerCSDPtrs0__tmp_copy_13 = create_report__CallerCSDPtrs_20;
#line 1018 "create_report.m"
              MR_Word create_report__STATE_VARIABLE_PSSeen_0__tmp_copy_27 = create_report__STATE_VARIABLE_PSSeen_37_37;
#line 1018 "create_report.m"
              MR_Integer create_report__STATE_VARIABLE_NumDynamic_0__tmp_copy_29 = create_report__STATE_VARIABLE_NumDynamic_35_35;
#line 1018 "create_report.m"
              MR_Word create_report__STATE_VARIABLE_Own_0__tmp_copy_31 = create_report__STATE_VARIABLE_Own_38_38;
#line 1018 "create_report.m"
              MR_Word create_report__STATE_VARIABLE_Desc_0__tmp_copy_33 = create_report__STATE_VARIABLE_Desc_39_39;

#line 1018 "create_report.m"
              create_report__STATE_VARIABLE_Desc_0_33 = create_report__STATE_VARIABLE_Desc_0__tmp_copy_33;
#line 1018 "create_report.m"
              create_report__STATE_VARIABLE_Own_0_31 = create_report__STATE_VARIABLE_Own_0__tmp_copy_31;
#line 1018 "create_report.m"
              create_report__STATE_VARIABLE_NumDynamic_0_29 = create_report__STATE_VARIABLE_NumDynamic_0__tmp_copy_29;
#line 1018 "create_report.m"
              create_report__STATE_VARIABLE_PSSeen_0_27 = create_report__STATE_VARIABLE_PSSeen_0__tmp_copy_27;
#line 1018 "create_report.m"
              create_report__CallerCSDPtrs0_13 = create_report__CallerCSDPtrs0__tmp_copy_13;
#line 1018 "create_report.m"
            }
#line 1018 "create_report.m"
            continue;
#line 1000 "create_report.m"
          }
#line 998 "create_report.m"
      }
#line 998 "create_report.m"
      break;
#line 998 "create_report.m"
    }
#line 990 "create_report.m"
}

#line 986 "create_report.m"
static void MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0_1(
#line 986 "create_report.m"
  MR_Box create_report__closure_arg,
#line 986 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 986 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 986 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 986 "create_report.m"
  MR_Box create_report__wrapper_arg_4,
#line 986 "create_report.m"
  MR_Box * create_report__wrapper_arg_5)
#line 986 "create_report.m"
{
#line 986 "create_report.m"
  {
#line 986 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 986 "create_report.m"
    MR_Word create_report__conv1_STATE_VARIABLE_Own_18;
#line 986 "create_report.m"
    MR_Word create_report__conv0_STATE_VARIABLE_Desc_20;

#line 986 "create_report.m"
    {
#line 986 "create_report.m"
      create_report__accumulate_csd_prof_info_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv1_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_4), &create_report__conv0_STATE_VARIABLE_Desc_20);
    }
#line 986 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_STATE_VARIABLE_Own_18));
#line 986 "create_report.m"
    *create_report__wrapper_arg_5 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_Desc_20));
#line 986 "create_report.m"
  }
#line 986 "create_report.m"
}

#line 980 "create_report.m"
static MR_Word MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0(
#line 980 "create_report.m"
  MR_Word create_report__Deep_5,
#line 980 "create_report.m"
  MR_Word create_report__CallerPSPtr_6,
#line 980 "create_report.m"
  MR_Word create_report__HeadVar__3_3)
#line 980 "create_report.m"
{
#line 985 "create_report.m"
  {
#line 985 "create_report.m"
    MR_bool create_report__succeeded;
#line 985 "create_report.m"
    MR_Word create_report__CalleeProf_9;
#line 985 "create_report.m"
    MR_Word create_report__PSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 985 "create_report.m"
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
#line 985 "create_report.m"
    MR_Word create_report__Own_10;
#line 985 "create_report.m"
    MR_Word create_report__Desc_11;
#line 985 "create_report.m"
    MR_Word create_report__V_12_12;
#line 985 "create_report.m"
    MR_Word create_report__V_13_13;
#line 985 "create_report.m"
    MR_Word create_report__V_14_14;
#line 986 "create_report.m"
    MR_Box create_report__conv3_Own_10;
#line 986 "create_report.m"
    MR_Box create_report__conv2_Desc_11;

#line 986 "create_report.m"
    {
#line 986 "create_report.m"
      create_report__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 986 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 0) = ((MR_Box) (&create_report_scalar_common_8[2]));
#line 986 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 1) = ((MR_Box) (create_report__generate_call_site_callee_perf_3_f_0_1));
#line 986 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 986 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 3) = ((MR_Box) (create_report__Deep_5));
#line 986 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 4) = ((MR_Box) (create_report__CallerPSPtr_6));
#line 986 "create_report.m"
    }
#line 987 "create_report.m"
    {
#line 987 "create_report.m"
      create_report__V_13_13 = measurements__zero_own_prof_info_0_f_0();
    }
#line 987 "create_report.m"
    {
#line 987 "create_report.m"
      create_report__V_14_14 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 986 "create_report.m"
    {
#line 986 "create_report.m"
      mercury__list__foldl2_6_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__V_12_12, create_report__CSDPtrs_8, ((MR_Box) (create_report__V_13_13)), &create_report__conv3_Own_10, ((MR_Box) (create_report__V_14_14)), &create_report__conv2_Desc_11);
    }
#line 986 "create_report.m"
    create_report__Own_10 = ((MR_Word) create_report__conv3_Own_10);
#line 986 "create_report.m"
    create_report__Desc_11 = ((MR_Word) create_report__conv2_Desc_11);
#line 988 "create_report.m"
    {
#line 988 "create_report.m"
      create_report__CalleeProf_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 988 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CalleeProf_9, 0) = ((MR_Box) (create_report__PSPtr_7));
#line 988 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CalleeProf_9, 1) = ((MR_Box) (create_report__Own_10));
#line 988 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CalleeProf_9, 2) = ((MR_Box) (create_report__Desc_11));
#line 988 "create_report.m"
    }
#line 985 "create_report.m"
    return create_report__CalleeProf_9;
#line 985 "create_report.m"
  }
#line 980 "create_report.m"
}

#line 965 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_9(
#line 965 "create_report.m"
  MR_Box create_report__closure_arg,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_6)
#line 965 "create_report.m"
{
#line 965 "create_report.m"
  {
#line 965 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 965 "create_report.m"
    MR_Word create_report__conv21_RowData_10;
#line 965 "create_report.m"
    MR_Word create_report__conv20_STATE_VARIABLE_Own_18;
#line 965 "create_report.m"
    MR_Word create_report__conv19_STATE_VARIABLE_Desc_20;

#line 965 "create_report.m"
    {
#line 965 "create_report.m"
      create_report__accumulate_call_site_callees_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv21_RowData_10, ((MR_Word) create_report__wrapper_arg_3), &create_report__conv20_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_5), &create_report__conv19_STATE_VARIABLE_Desc_20);
    }
#line 965 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv21_RowData_10));
#line 965 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv20_STATE_VARIABLE_Own_18));
#line 965 "create_report.m"
    *create_report__wrapper_arg_6 = ((MR_Box) (create_report__conv19_STATE_VARIABLE_Desc_20));
#line 965 "create_report.m"
  }
#line 965 "create_report.m"
}

#line 963 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_8(
#line 963 "create_report.m"
  MR_Box create_report__closure_arg,
#line 963 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 963 "create_report.m"
{
#line 963 "create_report.m"
  {
#line 963 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 963 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 963 "create_report.m"
    MR_Word create_report__conv18_CalleeProf_9;

#line 963 "create_report.m"
    {
#line 963 "create_report.m"
      create_report__conv18_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 963 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv18_CalleeProf_9));
#line 963 "create_report.m"
    return create_report__wrapper_arg_2;
#line 963 "create_report.m"
  }
#line 963 "create_report.m"
}

#line 936 "create_report.m"
static MR_bool MR_CALL 
create_report__create_call_site_summary_2_f_0_7(
#line 936 "create_report.m"
  MR_Box create_report__closure_arg)
#line 936 "create_report.m"
{
#line 936 "create_report.m"
  {
#line 936 "create_report.m"
    MR_bool create_report__succeeded;
#line 936 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;

#line 936 "create_report.m"
    {
#line 936 "create_report.m"
      return create_report__succeeded = create_report__IntroducedFrom__pred__create_call_site_summary__936__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))));
    }
#line 936 "create_report.m"
    return create_report__succeeded;
#line 936 "create_report.m"
  }
#line 936 "create_report.m"
}

#line 965 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_6(
#line 965 "create_report.m"
  MR_Box create_report__closure_arg,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_6)
#line 965 "create_report.m"
{
#line 965 "create_report.m"
  {
#line 965 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 965 "create_report.m"
    MR_Word create_report__conv15_RowData_10;
#line 965 "create_report.m"
    MR_Word create_report__conv14_STATE_VARIABLE_Own_18;
#line 965 "create_report.m"
    MR_Word create_report__conv13_STATE_VARIABLE_Desc_20;

#line 965 "create_report.m"
    {
#line 965 "create_report.m"
      create_report__accumulate_call_site_callees_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv15_RowData_10, ((MR_Word) create_report__wrapper_arg_3), &create_report__conv14_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_5), &create_report__conv13_STATE_VARIABLE_Desc_20);
    }
#line 965 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv15_RowData_10));
#line 965 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv14_STATE_VARIABLE_Own_18));
#line 965 "create_report.m"
    *create_report__wrapper_arg_6 = ((MR_Box) (create_report__conv13_STATE_VARIABLE_Desc_20));
#line 965 "create_report.m"
  }
#line 965 "create_report.m"
}

#line 963 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_5(
#line 963 "create_report.m"
  MR_Box create_report__closure_arg,
#line 963 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 963 "create_report.m"
{
#line 963 "create_report.m"
  {
#line 963 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 963 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 963 "create_report.m"
    MR_Word create_report__conv12_CalleeProf_9;

#line 963 "create_report.m"
    {
#line 963 "create_report.m"
      create_report__conv12_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 963 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv12_CalleeProf_9));
#line 963 "create_report.m"
    return create_report__wrapper_arg_2;
#line 963 "create_report.m"
  }
#line 963 "create_report.m"
}

#line 965 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_4(
#line 965 "create_report.m"
  MR_Box create_report__closure_arg,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_6)
#line 965 "create_report.m"
{
#line 965 "create_report.m"
  {
#line 965 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 965 "create_report.m"
    MR_Word create_report__conv9_RowData_10;
#line 965 "create_report.m"
    MR_Word create_report__conv8_STATE_VARIABLE_Own_18;
#line 965 "create_report.m"
    MR_Word create_report__conv7_STATE_VARIABLE_Desc_20;

#line 965 "create_report.m"
    {
#line 965 "create_report.m"
      create_report__accumulate_call_site_callees_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv9_RowData_10, ((MR_Word) create_report__wrapper_arg_3), &create_report__conv8_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_5), &create_report__conv7_STATE_VARIABLE_Desc_20);
    }
#line 965 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv9_RowData_10));
#line 965 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv8_STATE_VARIABLE_Own_18));
#line 965 "create_report.m"
    *create_report__wrapper_arg_6 = ((MR_Box) (create_report__conv7_STATE_VARIABLE_Desc_20));
#line 965 "create_report.m"
  }
#line 965 "create_report.m"
}

#line 963 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_3(
#line 963 "create_report.m"
  MR_Box create_report__closure_arg,
#line 963 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 963 "create_report.m"
{
#line 963 "create_report.m"
  {
#line 963 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 963 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 963 "create_report.m"
    MR_Word create_report__conv6_CalleeProf_9;

#line 963 "create_report.m"
    {
#line 963 "create_report.m"
      create_report__conv6_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 963 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv6_CalleeProf_9));
#line 963 "create_report.m"
    return create_report__wrapper_arg_2;
#line 963 "create_report.m"
  }
#line 963 "create_report.m"
}

#line 965 "create_report.m"
static void MR_CALL 
create_report__create_call_site_summary_2_f_0_2(
#line 965 "create_report.m"
  MR_Box create_report__closure_arg,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_4,
#line 965 "create_report.m"
  MR_Box create_report__wrapper_arg_5,
#line 965 "create_report.m"
  MR_Box * create_report__wrapper_arg_6)
#line 965 "create_report.m"
{
#line 965 "create_report.m"
  {
#line 965 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 965 "create_report.m"
    MR_Word create_report__conv3_RowData_10;
#line 965 "create_report.m"
    MR_Word create_report__conv2_STATE_VARIABLE_Own_18;
#line 965 "create_report.m"
    MR_Word create_report__conv1_STATE_VARIABLE_Desc_20;

#line 965 "create_report.m"
    {
#line 965 "create_report.m"
      create_report__accumulate_call_site_callees_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv3_RowData_10, ((MR_Word) create_report__wrapper_arg_3), &create_report__conv2_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_5), &create_report__conv1_STATE_VARIABLE_Desc_20);
    }
#line 965 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv3_RowData_10));
#line 965 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv2_STATE_VARIABLE_Own_18));
#line 965 "create_report.m"
    *create_report__wrapper_arg_6 = ((MR_Box) (create_report__conv1_STATE_VARIABLE_Desc_20));
#line 965 "create_report.m"
  }
#line 965 "create_report.m"
}

#line 963 "create_report.m"
static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_1(
#line 963 "create_report.m"
  MR_Box create_report__closure_arg,
#line 963 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 963 "create_report.m"
{
#line 963 "create_report.m"
  {
#line 963 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 963 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 963 "create_report.m"
    MR_Word create_report__conv0_CalleeProf_9;

#line 963 "create_report.m"
    {
#line 963 "create_report.m"
      create_report__conv0_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 963 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_CalleeProf_9));
#line 963 "create_report.m"
    return create_report__wrapper_arg_2;
#line 963 "create_report.m"
  }
#line 963 "create_report.m"
}

#line 912 "create_report.m"
static MR_Word MR_CALL 
create_report__create_call_site_summary_2_f_0(
#line 912 "create_report.m"
  MR_Word create_report__Deep_4,
#line 912 "create_report.m"
  MR_Word create_report__CSSPtr_5)
#line 912 "create_report.m"
{
#line 914 "create_report.m"
  {
#line 914 "create_report.m"
    MR_bool create_report__succeeded;
#line 914 "create_report.m"
    MR_Word create_report__CallSitePerf_6;
#line 914 "create_report.m"
    MR_Word create_report__CallSiteDesc_7;
#line 914 "create_report.m"
    MR_Word create_report__CSS_8;
#line 914 "create_report.m"
    MR_Word create_report__KindAndCallee_9;
#line 914 "create_report.m"
    MR_Word create_report__CallerPSPtr_10;
#line 914 "create_report.m"
    MR_Word create_report__CallSiteCallMap_11;
#line 914 "create_report.m"
    MR_Word create_report__CallSiteCalls_12;
#line 914 "create_report.m"
    MR_Word create_report__KindAndInfo_17;
#line 914 "create_report.m"
    MR_Word create_report__SummaryRowData_28;
#line 914 "create_report.m"
    MR_Word create_report__SubRowDatas_29;
#line 918 "create_report.m"
    MR_Integer create_report__V_45_45;
#line 918 "create_report.m"
    MR_Integer create_report__V_46_46;
#line 918 "create_report.m"
    MR_Word create_report__V_47_47;

#line 915 "create_report.m"
    {
#line 915 "create_report.m"
      create_report__CallSiteDesc_7 = create_report__describe_call_site_2_f_0(create_report__Deep_4, create_report__CSSPtr_5);
    }
#line 917 "create_report.m"
    {
#line 917 "create_report.m"
      profile__deep_lookup_call_site_statics_3_p_0(create_report__Deep_4, create_report__CSSPtr_5, &create_report__CSS_8);
    }
#line 918 "create_report.m"
    create_report__CallerPSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 0)));
#line 918 "create_report.m"
    create_report__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 1)));
#line 918 "create_report.m"
    create_report__KindAndCallee_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 2)));
#line 918 "create_report.m"
    create_report__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 3)));
#line 918 "create_report.m"
    create_report__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 4)));
#line 921 "create_report.m"
    {
#line 921 "create_report.m"
      profile__deep_lookup_call_site_calls_3_p_0(create_report__Deep_4, create_report__CSSPtr_5, &create_report__CallSiteCallMap_11);
    }
#line 922 "create_report.m"
    {
#line 922 "create_report.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[10], create_report__CallSiteCallMap_11, &create_report__CallSiteCalls_12);
    }
#line 948 "create_report.m"
#line 948 "create_report.m"
    switch (MR_tag((MR_Word) create_report__KindAndCallee_9)) {
#line 948 "create_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 948 "create_report.m"
      case (MR_Integer) 0:
#line 948 "create_report.m"
#line 948 "create_report.m"
        switch (MR_unmkbody(create_report__KindAndCallee_9)) {
#line 948 "create_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 948 "create_report.m"
          case (MR_Integer) 0:
#line 961 "create_report.m"
            {
#line 961 "create_report.m"
              MR_Word create_report__TypeCtorInfo_57_128;
#line 961 "create_report.m"
              MR_Word create_report__CallSiteCalleePerfs_120;
#line 961 "create_report.m"
              MR_Word create_report__SumOwn_121;
#line 961 "create_report.m"
              MR_Word create_report__SumDesc_122;
#line 961 "create_report.m"
              MR_Word create_report__V_123_123;
#line 961 "create_report.m"
              MR_Word create_report__V_124_124;
#line 961 "create_report.m"
              MR_Word create_report__V_125_125;
#line 961 "create_report.m"
              MR_Word create_report__V_126_126;
#line 965 "create_report.m"
              MR_Box create_report__conv23_SumOwn_121;
#line 965 "create_report.m"
              MR_Box create_report__conv22_SumDesc_122;

#line 951 "create_report.m"
              create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8798 "create_report.c"
              create_report__TypeCtorInfo_57_128 = (MR_Word) &create_report__create_report__type_ctor_info_call_site_callee_perf_0;
#line 963 "create_report.m"
              {
#line 963 "create_report.m"
                create_report__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_123_123, 0) = ((MR_Box) (&create_report_scalar_common_6[10]));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_123_123, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_8));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_123_123, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_123_123, 3) = ((MR_Box) (create_report__Deep_4));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_123_123, 4) = ((MR_Box) (create_report__CallerPSPtr_10));
#line 963 "create_report.m"
              }
#line 963 "create_report.m"
              {
#line 963 "create_report.m"
                create_report__CallSiteCalleePerfs_120 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[12], create_report__TypeCtorInfo_57_128, create_report__V_123_123, create_report__CallSiteCalls_12);
              }
#line 965 "create_report.m"
              {
#line 965 "create_report.m"
                create_report__V_124_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_124_124, 0) = ((MR_Box) (&create_report_scalar_common_8[1]));
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_124_124, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_9));
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_124_124, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_124_124, 3) = ((MR_Box) (create_report__Deep_4));
#line 965 "create_report.m"
              }
#line 967 "create_report.m"
              {
#line 967 "create_report.m"
                create_report__V_125_125 = measurements__zero_own_prof_info_0_f_0();
              }
#line 967 "create_report.m"
              {
#line 967 "create_report.m"
                create_report__V_126_126 = measurements__zero_inherit_prof_info_0_f_0();
              }
#line 965 "create_report.m"
              {
#line 965 "create_report.m"
                mercury__list__map_foldl2_7_p_0(create_report__TypeCtorInfo_57_128, (MR_Word) &create_report_scalar_common_1[3], (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__V_124_124, create_report__CallSiteCalleePerfs_120, &create_report__SubRowDatas_29, ((MR_Box) (create_report__V_125_125)), &create_report__conv23_SumOwn_121, ((MR_Box) (create_report__V_126_126)), &create_report__conv22_SumDesc_122);
              }
#line 965 "create_report.m"
              create_report__SumOwn_121 = ((MR_Word) create_report__conv23_SumOwn_121);
#line 965 "create_report.m"
              create_report__SumDesc_122 = ((MR_Word) create_report__conv22_SumDesc_122);
#line 968 "create_report.m"
              {
#line 968 "create_report.m"
                create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__SumOwn_121, create_report__SumDesc_122, &create_report__SummaryRowData_28);
              }
#line 961 "create_report.m"
            }
#line 948 "create_report.m"
            break;
#line 948 "create_report.m"
          case (MR_Integer) 1:
#line 961 "create_report.m"
            {
#line 961 "create_report.m"
              MR_Word create_report__TypeCtorInfo_57_86;
#line 961 "create_report.m"
              MR_Word create_report__CallSiteCalleePerfs_78;
#line 961 "create_report.m"
              MR_Word create_report__SumOwn_79;
#line 961 "create_report.m"
              MR_Word create_report__SumDesc_80;
#line 961 "create_report.m"
              MR_Word create_report__V_81_81;
#line 961 "create_report.m"
              MR_Word create_report__V_82_82;
#line 961 "create_report.m"
              MR_Word create_report__V_83_83;
#line 961 "create_report.m"
              MR_Word create_report__V_84_84;
#line 965 "create_report.m"
              MR_Box create_report__conv11_SumOwn_79;
#line 965 "create_report.m"
              MR_Box create_report__conv10_SumDesc_80;

#line 954 "create_report.m"
              create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 8890 "create_report.c"
              create_report__TypeCtorInfo_57_86 = (MR_Word) &create_report__create_report__type_ctor_info_call_site_callee_perf_0;
#line 963 "create_report.m"
              {
#line 963 "create_report.m"
                create_report__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_81_81, 0) = ((MR_Box) (&create_report_scalar_common_6[10]));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_81_81, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_3));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_81_81, 3) = ((MR_Box) (create_report__Deep_4));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_81_81, 4) = ((MR_Box) (create_report__CallerPSPtr_10));
#line 963 "create_report.m"
              }
#line 963 "create_report.m"
              {
#line 963 "create_report.m"
                create_report__CallSiteCalleePerfs_78 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[12], create_report__TypeCtorInfo_57_86, create_report__V_81_81, create_report__CallSiteCalls_12);
              }
#line 965 "create_report.m"
              {
#line 965 "create_report.m"
                create_report__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_82_82, 0) = ((MR_Box) (&create_report_scalar_common_8[1]));
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_82_82, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_4));
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_82_82, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_82_82, 3) = ((MR_Box) (create_report__Deep_4));
#line 965 "create_report.m"
              }
#line 967 "create_report.m"
              {
#line 967 "create_report.m"
                create_report__V_83_83 = measurements__zero_own_prof_info_0_f_0();
              }
#line 967 "create_report.m"
              {
#line 967 "create_report.m"
                create_report__V_84_84 = measurements__zero_inherit_prof_info_0_f_0();
              }
#line 965 "create_report.m"
              {
#line 965 "create_report.m"
                mercury__list__map_foldl2_7_p_0(create_report__TypeCtorInfo_57_86, (MR_Word) &create_report_scalar_common_1[3], (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__V_82_82, create_report__CallSiteCalleePerfs_78, &create_report__SubRowDatas_29, ((MR_Box) (create_report__V_83_83)), &create_report__conv11_SumOwn_79, ((MR_Box) (create_report__V_84_84)), &create_report__conv10_SumDesc_80);
              }
#line 965 "create_report.m"
              create_report__SumOwn_79 = ((MR_Word) create_report__conv11_SumOwn_79);
#line 965 "create_report.m"
              create_report__SumDesc_80 = ((MR_Word) create_report__conv10_SumDesc_80);
#line 968 "create_report.m"
              {
#line 968 "create_report.m"
                create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__SumOwn_79, create_report__SumDesc_80, &create_report__SummaryRowData_28);
              }
#line 961 "create_report.m"
            }
#line 948 "create_report.m"
            break;
#line 948 "create_report.m"
          case (MR_Integer) 2:
#line 961 "create_report.m"
            {
#line 961 "create_report.m"
              MR_Word create_report__TypeCtorInfo_57_107;
#line 961 "create_report.m"
              MR_Word create_report__CallSiteCalleePerfs_99;
#line 961 "create_report.m"
              MR_Word create_report__SumOwn_100;
#line 961 "create_report.m"
              MR_Word create_report__SumDesc_101;
#line 961 "create_report.m"
              MR_Word create_report__V_102_102;
#line 961 "create_report.m"
              MR_Word create_report__V_103_103;
#line 961 "create_report.m"
              MR_Word create_report__V_104_104;
#line 961 "create_report.m"
              MR_Word create_report__V_105_105;
#line 965 "create_report.m"
              MR_Box create_report__conv17_SumOwn_100;
#line 965 "create_report.m"
              MR_Box create_report__conv16_SumDesc_101;

#line 957 "create_report.m"
              create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 8982 "create_report.c"
              create_report__TypeCtorInfo_57_107 = (MR_Word) &create_report__create_report__type_ctor_info_call_site_callee_perf_0;
#line 963 "create_report.m"
              {
#line 963 "create_report.m"
                create_report__V_102_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_102_102, 0) = ((MR_Box) (&create_report_scalar_common_6[10]));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_102_102, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_5));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_102_102, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_102_102, 3) = ((MR_Box) (create_report__Deep_4));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_102_102, 4) = ((MR_Box) (create_report__CallerPSPtr_10));
#line 963 "create_report.m"
              }
#line 963 "create_report.m"
              {
#line 963 "create_report.m"
                create_report__CallSiteCalleePerfs_99 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[12], create_report__TypeCtorInfo_57_107, create_report__V_102_102, create_report__CallSiteCalls_12);
              }
#line 965 "create_report.m"
              {
#line 965 "create_report.m"
                create_report__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_103_103, 0) = ((MR_Box) (&create_report_scalar_common_8[1]));
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_103_103, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_6));
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_103_103, 3) = ((MR_Box) (create_report__Deep_4));
#line 965 "create_report.m"
              }
#line 967 "create_report.m"
              {
#line 967 "create_report.m"
                create_report__V_104_104 = measurements__zero_own_prof_info_0_f_0();
              }
#line 967 "create_report.m"
              {
#line 967 "create_report.m"
                create_report__V_105_105 = measurements__zero_inherit_prof_info_0_f_0();
              }
#line 965 "create_report.m"
              {
#line 965 "create_report.m"
                mercury__list__map_foldl2_7_p_0(create_report__TypeCtorInfo_57_107, (MR_Word) &create_report_scalar_common_1[3], (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__V_103_103, create_report__CallSiteCalleePerfs_99, &create_report__SubRowDatas_29, ((MR_Box) (create_report__V_104_104)), &create_report__conv17_SumOwn_100, ((MR_Box) (create_report__V_105_105)), &create_report__conv16_SumDesc_101);
              }
#line 965 "create_report.m"
              create_report__SumOwn_100 = ((MR_Word) create_report__conv17_SumOwn_100);
#line 965 "create_report.m"
              create_report__SumDesc_101 = ((MR_Word) create_report__conv16_SumDesc_101);
#line 968 "create_report.m"
              {
#line 968 "create_report.m"
                create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__SumOwn_100, create_report__SumDesc_101, &create_report__SummaryRowData_28);
              }
#line 961 "create_report.m"
            }
#line 948 "create_report.m"
            break;
#line 948 "create_report.m"
          case (MR_Integer) 3:
#line 961 "create_report.m"
            {
#line 961 "create_report.m"
              MR_Word create_report__TypeCtorInfo_57_57;
#line 961 "create_report.m"
              MR_Word create_report__CallSiteCalleePerfs_30;
#line 961 "create_report.m"
              MR_Word create_report__SumOwn_31;
#line 961 "create_report.m"
              MR_Word create_report__SumDesc_32;
#line 961 "create_report.m"
              MR_Word create_report__V_33_33;
#line 961 "create_report.m"
              MR_Word create_report__V_34_34;
#line 961 "create_report.m"
              MR_Word create_report__V_35_35;
#line 961 "create_report.m"
              MR_Word create_report__V_36_36;
#line 965 "create_report.m"
              MR_Box create_report__conv5_SumOwn_31;
#line 965 "create_report.m"
              MR_Box create_report__conv4_SumDesc_32;

#line 960 "create_report.m"
              create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 9074 "create_report.c"
              create_report__TypeCtorInfo_57_57 = (MR_Word) &create_report__create_report__type_ctor_info_call_site_callee_perf_0;
#line 963 "create_report.m"
              {
#line 963 "create_report.m"
                create_report__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_33_33, 0) = ((MR_Box) (&create_report_scalar_common_6[10]));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_33_33, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_1));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_33_33, 3) = ((MR_Box) (create_report__Deep_4));
#line 963 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_33_33, 4) = ((MR_Box) (create_report__CallerPSPtr_10));
#line 963 "create_report.m"
              }
#line 963 "create_report.m"
              {
#line 963 "create_report.m"
                create_report__CallSiteCalleePerfs_30 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[12], create_report__TypeCtorInfo_57_57, create_report__V_33_33, create_report__CallSiteCalls_12);
              }
#line 965 "create_report.m"
              {
#line 965 "create_report.m"
                create_report__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_34_34, 0) = ((MR_Box) (&create_report_scalar_common_8[1]));
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_34_34, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_2));
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 965 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_34_34, 3) = ((MR_Box) (create_report__Deep_4));
#line 965 "create_report.m"
              }
#line 967 "create_report.m"
              {
#line 967 "create_report.m"
                create_report__V_35_35 = measurements__zero_own_prof_info_0_f_0();
              }
#line 967 "create_report.m"
              {
#line 967 "create_report.m"
                create_report__V_36_36 = measurements__zero_inherit_prof_info_0_f_0();
              }
#line 965 "create_report.m"
              {
#line 965 "create_report.m"
                mercury__list__map_foldl2_7_p_0(create_report__TypeCtorInfo_57_57, (MR_Word) &create_report_scalar_common_1[3], (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__V_34_34, create_report__CallSiteCalleePerfs_30, &create_report__SubRowDatas_29, ((MR_Box) (create_report__V_35_35)), &create_report__conv5_SumOwn_31, ((MR_Box) (create_report__V_36_36)), &create_report__conv4_SumDesc_32);
              }
#line 965 "create_report.m"
              create_report__SumOwn_31 = ((MR_Word) create_report__conv5_SumOwn_31);
#line 965 "create_report.m"
              create_report__SumDesc_32 = ((MR_Word) create_report__conv4_SumDesc_32);
#line 968 "create_report.m"
              {
#line 968 "create_report.m"
                create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__SumOwn_31, create_report__SumDesc_32, &create_report__SummaryRowData_28);
              }
#line 961 "create_report.m"
            }
#line 948 "create_report.m"
            break;
#line 948 "create_report.m"
        }
#line 948 "create_report.m"
        break;
#line 948 "create_report.m"
      case (MR_Integer) 1:
#line 925 "create_report.m"
        {
#line 925 "create_report.m"
          MR_Word create_report__CalleePSPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__KindAndCallee_9, (MR_Integer) 0)));
#line 925 "create_report.m"
          MR_String create_report__TypeSubstStr_14 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__KindAndCallee_9, (MR_Integer) 1)));
#line 925 "create_report.m"
          MR_Word create_report__CalleeDesc_15;
#line 925 "create_report.m"
          MR_Word create_report__NormalCallId_16;
#line 925 "create_report.m"
          MR_Word create_report__Own_18;
#line 925 "create_report.m"
          MR_Word create_report__Desc_19;

#line 926 "create_report.m"
          {
#line 926 "create_report.m"
            create_report__CalleeDesc_15 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__CalleePSPtr_13);
          }
#line 927 "create_report.m"
          {
#line 927 "create_report.m"
            create_report__NormalCallId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 927 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__NormalCallId_16, 0) = ((MR_Box) (create_report__CalleeDesc_15));
#line 927 "create_report.m"
            MR_hl_field(MR_mktag(0), create_report__NormalCallId_16, 1) = ((MR_Box) (create_report__TypeSubstStr_14));
#line 927 "create_report.m"
          }
#line 928 "create_report.m"
          {
#line 928 "create_report.m"
            create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 928 "create_report.m"
            MR_hl_field(MR_mktag(1), create_report__KindAndInfo_17, 0) = ((MR_Box) (create_report__NormalCallId_16));
#line 928 "create_report.m"
          }
#line 933 "create_report.m"
          if ((create_report__CallSiteCalls_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "create_report.m"
            {
#line 931 "create_report.m"
              {
#line 931 "create_report.m"
                create_report__Own_18 = measurements__zero_own_prof_info_0_f_0();
              }
#line 932 "create_report.m"
              {
#line 932 "create_report.m"
                create_report__Desc_19 = measurements__zero_inherit_prof_info_0_f_0();
              }
#line 930 "create_report.m"
            }
#line 933 "create_report.m"
          else
#line 933 "create_report.m"
            {
#line 933 "create_report.m"
              MR_Word create_report__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteCalls_12, (MR_Integer) 1)));
#line 933 "create_report.m"
              MR_Word create_report__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteCalls_12, (MR_Integer) 0)));

#line 933 "create_report.m"
              if ((create_report__V_133_133 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 934 "create_report.m"
                {
#line 934 "create_report.m"
                  MR_Word create_report__CalleePSPtrFromCall_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_134_134, (MR_Integer) 0)));
#line 934 "create_report.m"
                  MR_Word create_report__CallSiteCalleePerf_23;
#line 934 "create_report.m"
                  MR_Word create_report__V_42_42;
#line 935 "create_report.m"
                  MR_Word create_report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_134_134, (MR_Integer) 1)));
#line 940 "create_report.m"
                  MR_Word create_report__V_24_24;

#line 936 "create_report.m"
                  {
#line 936 "create_report.m"
                    create_report__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 936 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_42_42, 0) = ((MR_Box) (&create_report_scalar_common_7[3]));
#line 936 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_42_42, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_7));
#line 936 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 936 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_42_42, 3) = ((MR_Box) (create_report__CalleePSPtr_13));
#line 936 "create_report.m"
                    MR_hl_field(MR_mktag(0), create_report__V_42_42, 4) = ((MR_Box) (create_report__CalleePSPtrFromCall_21));
#line 936 "create_report.m"
                  }
#line 936 "create_report.m"
                  {
#line 936 "create_report.m"
                    mercury__require__require_2_p_0(create_report__V_42_42, (MR_String) "create_call_site_summary: callee mismatch");
                  }
#line 938 "create_report.m"
                  {
#line 938 "create_report.m"
                    create_report__CallSiteCalleePerf_23 = create_report__generate_call_site_callee_perf_3_f_0(create_report__Deep_4, create_report__CallerPSPtr_10, create_report__V_134_134);
                  }
#line 940 "create_report.m"
                  create_report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteCalleePerf_23, (MR_Integer) 0)));
#line 940 "create_report.m"
                  create_report__Own_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteCalleePerf_23, (MR_Integer) 1)));
#line 940 "create_report.m"
                  create_report__Desc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteCalleePerf_23, (MR_Integer) 2)));
#line 934 "create_report.m"
                }
#line 933 "create_report.m"
              else
#line 942 "create_report.m"
                {
#line 943 "create_report.m"
                  {
#line 943 "create_report.m"
                    mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.create_call_site_summary\'/2", (MR_String) ">1 proc called at normal site");
                  }
#line 942 "create_report.m"
                }
#line 933 "create_report.m"
            }
#line 945 "create_report.m"
          {
#line 945 "create_report.m"
            create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__Own_18, create_report__Desc_19, &create_report__SummaryRowData_28);
          }
#line 947 "create_report.m"
          create_report__SubRowDatas_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 925 "create_report.m"
        }
#line 948 "create_report.m"
        break;
#line 948 "create_report.m"
    }
#line 971 "create_report.m"
    {
#line 971 "create_report.m"
      create_report__CallSitePerf_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 971 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSitePerf_6, 0) = ((MR_Box) (create_report__KindAndInfo_17));
#line 971 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSitePerf_6, 1) = ((MR_Box) (create_report__SummaryRowData_28));
#line 971 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CallSitePerf_6, 2) = ((MR_Box) (create_report__SubRowDatas_29));
#line 971 "create_report.m"
    }
#line 914 "create_report.m"
    return create_report__CallSitePerf_6;
#line 914 "create_report.m"
  }
#line 912 "create_report.m"
}

#line 812 "create_report.m"
static void MR_CALL 
create_report__create_module_rep_report_3_p_0(
#line 812 "create_report.m"
  MR_Word create_report__Deep_4,
#line 812 "create_report.m"
  MR_String create_report__ModuleName_5,
#line 812 "create_report.m"
  MR_Word * create_report__MaybeModuleRepReport_6)
#line 812 "create_report.m"
{
#line 815 "create_report.m"
  {
#line 815 "create_report.m"
    MR_bool create_report__succeeded;
#line 815 "create_report.m"
    MR_Word create_report__MaybeProgRep_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));
#line 816 "create_report.m"
    MR_Word create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
#line 816 "create_report.m"
    MR_String create_report__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
#line 816 "create_report.m"
    MR_String create_report__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
#line 816 "create_report.m"
    MR_String create_report__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
#line 816 "create_report.m"
    MR_Word create_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
#line 816 "create_report.m"
    MR_ArrayPtr create_report__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
#line 816 "create_report.m"
    MR_Word create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
#line 816 "create_report.m"
    MR_Word create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
#line 816 "create_report.m"
    MR_Word create_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));

#line 836 "create_report.m"
    if ((create_report__MaybeProgRep_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 837 "create_report.m"
      {
#line 839 "create_report.m"
        *create_report__MaybeModuleRepReport_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[2]);
#line 837 "create_report.m"
      }
#line 836 "create_report.m"
    else
#line 818 "create_report.m"
      {
#line 818 "create_report.m"
        MR_Word create_report__MaybeErrorProgRep_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__MaybeProgRep_7, (MR_Integer) 0)));

#line 832 "create_report.m"
        if (((MR_tag((MR_Word) create_report__MaybeErrorProgRep_8)) == (MR_mktag((MR_Integer) 1))))
#line 834 "create_report.m"
          *create_report__MaybeModuleRepReport_6 = (MR_Word) create_report__MaybeErrorProgRep_8;
#line 832 "create_report.m"
        else
#line 820 "create_report.m"
          {
#line 820 "create_report.m"
            MR_Word create_report__ProgRep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeErrorProgRep_8, (MR_Integer) 0)));
#line 820 "create_report.m"
            MR_Word create_report__ModuleRepMap_10 = (MR_Word) create_report__ProgRep_9;
#line 827 "create_report.m"
            MR_Word create_report__ModuleRep_11;
#line 822 "create_report.m"
            MR_Box create_report__conv0_ModuleRep_11;

#line 822 "create_report.m"
            {
#line 822 "create_report.m"
              create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &create_report_scalar_common_1[7], create_report__ModuleRepMap_10, ((MR_Box) (create_report__ModuleName_5)), &create_report__conv0_ModuleRep_11);
            }
#line 822 "create_report.m"
            if (create_report__succeeded)
#line 822 "create_report.m"
              {
#line 822 "create_report.m"
                create_report__ModuleRep_11 = ((MR_Word) create_report__conv0_ModuleRep_11);
#line 822 "create_report.m"
                create_report__succeeded = MR_TRUE;
#line 822 "create_report.m"
              }
#line 827 "create_report.m"
            if (create_report__succeeded)
#line 823 "create_report.m"
              {
#line 823 "create_report.m"
                MR_Word create_report__CordStrs_12;
#line 823 "create_report.m"
                MR_String create_report__Str_13;
#line 823 "create_report.m"
                MR_Word create_report__ModuleRepReport_14;
#line 823 "create_report.m"
                MR_Word create_report__V_16_16;

#line 823 "create_report.m"
                {
#line 823 "create_report.m"
                  program_representation_utils__print_module_to_strings_2_p_0(create_report__ModuleRep_11, &create_report__CordStrs_12);
                }
#line 824 "create_report.m"
                {
#line 824 "create_report.m"
                  create_report__V_16_16 = mercury__cord__list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, create_report__CordStrs_12);
                }
#line 824 "create_report.m"
                {
#line 824 "create_report.m"
                  create_report__Str_13 = mercury__string__append_list_1_f_0(create_report__V_16_16);
                }
#line 825 "create_report.m"
                {
#line 825 "create_report.m"
                  create_report__ModuleRepReport_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 825 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__ModuleRepReport_14, 0) = ((MR_Box) (create_report__ModuleName_5));
#line 825 "create_report.m"
                  MR_hl_field(MR_mktag(0), create_report__ModuleRepReport_14, 1) = ((MR_Box) (create_report__Str_13));
#line 825 "create_report.m"
                }
#line 826 "create_report.m"
                {
#line 826 "create_report.m"
                  MR_Word base;
#line 826 "create_report.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 826 "create_report.m"
                  *create_report__MaybeModuleRepReport_6 = base;
#line 826 "create_report.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ModuleRepReport_14));
#line 826 "create_report.m"
                }
#line 823 "create_report.m"
              }
#line 827 "create_report.m"
            else
#line 829 "create_report.m"
              {
#line 829 "create_report.m"
                MR_String create_report__Msg_15;
#line 829 "create_report.m"
                MR_String create_report__V_55_55;
#line 829 "create_report.m"
                MR_String create_report__V_62_62;

#line 829 "create_report.m"
                {
#line 829 "create_report.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &create_report_scalar_common_3[0], create_report__ModuleName_5, &create_report__V_55_55);
                }
#line 828 "create_report.m"
                {
#line 828 "create_report.m"
                  create_report__V_62_62 = mercury__string__f_43_43_2_f_0(create_report__V_55_55, (MR_String) ".\n");
                }
#line 828 "create_report.m"
                {
#line 828 "create_report.m"
                  create_report__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "There is no module named ", create_report__V_62_62);
                }
#line 830 "create_report.m"
                {
#line 830 "create_report.m"
                  MR_Word base;
#line 830 "create_report.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 830 "create_report.m"
                  *create_report__MaybeModuleRepReport_6 = base;
#line 830 "create_report.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Msg_15));
#line 830 "create_report.m"
                }
#line 829 "create_report.m"
              }
#line 820 "create_report.m"
          }
#line 818 "create_report.m"
      }
#line 815 "create_report.m"
  }
#line 812 "create_report.m"
}

#line 783 "create_report.m"
static MR_bool MR_CALL 
create_report__is_getter_or_setter_2_4_p_0(
#line 783 "create_report.m"
  MR_Word create_report__NameChars_5,
#line 783 "create_report.m"
  MR_Word * create_report__GetterSetter_6,
#line 783 "create_report.m"
  MR_Word * create_report__DataStructNameChars_7,
#line 783 "create_report.m"
  MR_Word * create_report__FieldNameChars_8)
#line 783 "create_report.m"
{
#line 792 "create_report.m"
  {
#line 792 "create_report.m"
    MR_bool create_report__succeeded = ((MR_tag((MR_Word) create_report__NameChars_5)) == (MR_mktag((MR_Integer) 1)));
#line 792 "create_report.m"
    MR_Word create_report__FieldNameCharsPrime_9;
#line 788 "create_report.m"
    MR_Char create_report__V_13_13;
#line 788 "create_report.m"
    MR_Word create_report__V_14_14;
#line 788 "create_report.m"
    MR_Char create_report__V_15_15;
#line 788 "create_report.m"
    MR_Word create_report__V_16_16;
#line 788 "create_report.m"
    MR_Char create_report__V_17_17;
#line 788 "create_report.m"
    MR_Word create_report__V_18_18;
#line 788 "create_report.m"
    MR_Char create_report__V_19_19;
#line 788 "create_report.m"
    MR_Word create_report__V_20_20;
#line 788 "create_report.m"
    MR_Char create_report__V_21_21;

#line 788 "create_report.m"
    if (create_report__succeeded)
#line 788 "create_report.m"
      {
#line 788 "create_report.m"
        create_report__V_13_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 0)));
#line 788 "create_report.m"
        create_report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 1)));
#line 788 "create_report.m"
        create_report__succeeded = (create_report__V_13_13 == (MR_Char) 95);
#line 788 "create_report.m"
        if (create_report__succeeded)
#line 788 "create_report.m"
          {
#line 788 "create_report.m"
            create_report__succeeded = ((MR_tag((MR_Word) create_report__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 788 "create_report.m"
            if (create_report__succeeded)
#line 788 "create_report.m"
              {
#line 788 "create_report.m"
                create_report__V_15_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_14_14, (MR_Integer) 0)));
#line 788 "create_report.m"
                create_report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_14_14, (MR_Integer) 1)));
#line 788 "create_report.m"
                create_report__succeeded = (create_report__V_15_15 == (MR_Char) 103);
#line 788 "create_report.m"
                if (create_report__succeeded)
#line 788 "create_report.m"
                  {
#line 788 "create_report.m"
                    create_report__succeeded = ((MR_tag((MR_Word) create_report__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 788 "create_report.m"
                    if (create_report__succeeded)
#line 788 "create_report.m"
                      {
#line 788 "create_report.m"
                        create_report__V_17_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_16_16, (MR_Integer) 0)));
#line 788 "create_report.m"
                        create_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_16_16, (MR_Integer) 1)));
#line 788 "create_report.m"
                        create_report__succeeded = (create_report__V_17_17 == (MR_Char) 101);
#line 788 "create_report.m"
                        if (create_report__succeeded)
#line 788 "create_report.m"
                          {
#line 788 "create_report.m"
                            create_report__succeeded = ((MR_tag((MR_Word) create_report__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 788 "create_report.m"
                            if (create_report__succeeded)
#line 788 "create_report.m"
                              {
#line 788 "create_report.m"
                                create_report__V_19_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_18_18, (MR_Integer) 0)));
#line 788 "create_report.m"
                                create_report__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_18_18, (MR_Integer) 1)));
#line 788 "create_report.m"
                                create_report__succeeded = (create_report__V_19_19 == (MR_Char) 116);
#line 788 "create_report.m"
                                if (create_report__succeeded)
#line 788 "create_report.m"
                                  {
#line 788 "create_report.m"
                                    create_report__succeeded = ((MR_tag((MR_Word) create_report__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 788 "create_report.m"
                                    if (create_report__succeeded)
#line 788 "create_report.m"
                                      {
#line 788 "create_report.m"
                                        create_report__V_21_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_20_20, (MR_Integer) 0)));
#line 788 "create_report.m"
                                        create_report__FieldNameCharsPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_20_20, (MR_Integer) 1)));
#line 788 "create_report.m"
                                        create_report__succeeded = (create_report__V_21_21 == (MR_Char) 95);
#line 788 "create_report.m"
                                      }
#line 788 "create_report.m"
                                  }
#line 788 "create_report.m"
                              }
#line 788 "create_report.m"
                          }
#line 788 "create_report.m"
                      }
#line 788 "create_report.m"
                  }
#line 788 "create_report.m"
              }
#line 788 "create_report.m"
          }
#line 788 "create_report.m"
      }
#line 792 "create_report.m"
    if (create_report__succeeded)
#line 789 "create_report.m"
      {
#line 789 "create_report.m"
        *create_report__GetterSetter_6 = (MR_Integer) 0;
#line 790 "create_report.m"
        *create_report__DataStructNameChars_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 791 "create_report.m"
        *create_report__FieldNameChars_8 = create_report__FieldNameCharsPrime_9;
#line 789 "create_report.m"
        create_report__succeeded = MR_TRUE;
#line 789 "create_report.m"
      }
#line 792 "create_report.m"
    else
#line 796 "create_report.m"
      {
#line 796 "create_report.m"
        MR_Word create_report__FieldNameCharsPrime_31;
#line 792 "create_report.m"
        MR_Char create_report__V_22_22;
#line 792 "create_report.m"
        MR_Word create_report__V_23_23;
#line 792 "create_report.m"
        MR_Char create_report__V_24_24;
#line 792 "create_report.m"
        MR_Word create_report__V_25_25;
#line 792 "create_report.m"
        MR_Char create_report__V_26_26;
#line 792 "create_report.m"
        MR_Word create_report__V_27_27;
#line 792 "create_report.m"
        MR_Char create_report__V_28_28;
#line 792 "create_report.m"
        MR_Word create_report__V_29_29;
#line 792 "create_report.m"
        MR_Char create_report__V_30_30;

#line 792 "create_report.m"
        create_report__succeeded = ((MR_tag((MR_Word) create_report__NameChars_5)) == (MR_mktag((MR_Integer) 1)));
#line 792 "create_report.m"
        if (create_report__succeeded)
#line 792 "create_report.m"
          {
#line 792 "create_report.m"
            create_report__V_22_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 0)));
#line 792 "create_report.m"
            create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 1)));
#line 792 "create_report.m"
            create_report__succeeded = (create_report__V_22_22 == (MR_Char) 95);
#line 792 "create_report.m"
            if (create_report__succeeded)
#line 792 "create_report.m"
              {
#line 792 "create_report.m"
                create_report__succeeded = ((MR_tag((MR_Word) create_report__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 792 "create_report.m"
                if (create_report__succeeded)
#line 792 "create_report.m"
                  {
#line 792 "create_report.m"
                    create_report__V_24_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_23_23, (MR_Integer) 0)));
#line 792 "create_report.m"
                    create_report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_23_23, (MR_Integer) 1)));
#line 792 "create_report.m"
                    create_report__succeeded = (create_report__V_24_24 == (MR_Char) 115);
#line 792 "create_report.m"
                    if (create_report__succeeded)
#line 792 "create_report.m"
                      {
#line 792 "create_report.m"
                        create_report__succeeded = ((MR_tag((MR_Word) create_report__V_25_25)) == (MR_mktag((MR_Integer) 1)));
#line 792 "create_report.m"
                        if (create_report__succeeded)
#line 792 "create_report.m"
                          {
#line 792 "create_report.m"
                            create_report__V_26_26 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_25_25, (MR_Integer) 0)));
#line 792 "create_report.m"
                            create_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_25_25, (MR_Integer) 1)));
#line 792 "create_report.m"
                            create_report__succeeded = (create_report__V_26_26 == (MR_Char) 101);
#line 792 "create_report.m"
                            if (create_report__succeeded)
#line 792 "create_report.m"
                              {
#line 792 "create_report.m"
                                create_report__succeeded = ((MR_tag((MR_Word) create_report__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 792 "create_report.m"
                                if (create_report__succeeded)
#line 792 "create_report.m"
                                  {
#line 792 "create_report.m"
                                    create_report__V_28_28 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_27_27, (MR_Integer) 0)));
#line 792 "create_report.m"
                                    create_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_27_27, (MR_Integer) 1)));
#line 792 "create_report.m"
                                    create_report__succeeded = (create_report__V_28_28 == (MR_Char) 116);
#line 792 "create_report.m"
                                    if (create_report__succeeded)
#line 792 "create_report.m"
                                      {
#line 792 "create_report.m"
                                        create_report__succeeded = ((MR_tag((MR_Word) create_report__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 792 "create_report.m"
                                        if (create_report__succeeded)
#line 792 "create_report.m"
                                          {
#line 792 "create_report.m"
                                            create_report__V_30_30 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_29_29, (MR_Integer) 0)));
#line 792 "create_report.m"
                                            create_report__FieldNameCharsPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_29_29, (MR_Integer) 1)));
#line 792 "create_report.m"
                                            create_report__succeeded = (create_report__V_30_30 == (MR_Char) 95);
#line 792 "create_report.m"
                                          }
#line 792 "create_report.m"
                                      }
#line 792 "create_report.m"
                                  }
#line 792 "create_report.m"
                              }
#line 792 "create_report.m"
                          }
#line 792 "create_report.m"
                      }
#line 792 "create_report.m"
                  }
#line 792 "create_report.m"
              }
#line 792 "create_report.m"
          }
#line 796 "create_report.m"
        if (create_report__succeeded)
#line 793 "create_report.m"
          {
#line 793 "create_report.m"
            *create_report__GetterSetter_6 = (MR_Integer) 1;
#line 794 "create_report.m"
            *create_report__DataStructNameChars_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 795 "create_report.m"
            *create_report__FieldNameChars_8 = create_report__FieldNameCharsPrime_31;
#line 793 "create_report.m"
            create_report__succeeded = MR_TRUE;
#line 793 "create_report.m"
          }
#line 796 "create_report.m"
        else
#line 797 "create_report.m"
          {
#line 797 "create_report.m"
            MR_Char create_report__FirstNameChar_10;
#line 797 "create_report.m"
            MR_Word create_report__LaterNameChars_11;
#line 797 "create_report.m"
            MR_Word create_report__LaterDataStructNameChars_12;

#line 797 "create_report.m"
            create_report__succeeded = ((MR_tag((MR_Word) create_report__NameChars_5)) == (MR_mktag((MR_Integer) 1)));
#line 797 "create_report.m"
            if (create_report__succeeded)
#line 797 "create_report.m"
              {
#line 797 "create_report.m"
                create_report__FirstNameChar_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 0)));
#line 797 "create_report.m"
                create_report__LaterNameChars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 1)));
#line 798 "create_report.m"
                {
#line 798 "create_report.m"
                  create_report__succeeded = create_report__is_getter_or_setter_2_4_p_0(create_report__LaterNameChars_11, create_report__GetterSetter_6, &create_report__LaterDataStructNameChars_12, create_report__FieldNameChars_8);
                }
#line 797 "create_report.m"
                if (create_report__succeeded)
#line 797 "create_report.m"
                  {
#line 800 "create_report.m"
                    {
#line 800 "create_report.m"
                      MR_Word base;
#line 800 "create_report.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "create_report.m"
                      *create_report__DataStructNameChars_7 = base;
#line 800 "create_report.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (create_report__FirstNameChar_10));
#line 800 "create_report.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (create_report__LaterDataStructNameChars_12));
#line 800 "create_report.m"
                    }
#line 800 "create_report.m"
                    create_report__succeeded = MR_TRUE;
#line 797 "create_report.m"
                  }
#line 797 "create_report.m"
              }
#line 797 "create_report.m"
          }
#line 796 "create_report.m"
      }
#line 792 "create_report.m"
    return create_report__succeeded;
#line 792 "create_report.m"
  }
#line 783 "create_report.m"
}

#line 698 "create_report.m"
static void MR_CALL 
create_report__gather_getters_setters_4_p_0(
#line 698 "create_report.m"
  MR_Word create_report__Deep_5,
#line 698 "create_report.m"
  MR_Word create_report__PSPtr_6,
#line 698 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_GSDSRawMap_0_32,
#line 698 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_GSDSRawMap_33)
#line 698 "create_report.m"
{
#line 756 "create_report.m"
  {
#line 756 "create_report.m"
    MR_bool create_report__succeeded;

#line 702 "create_report.m"
    {
#line 702 "create_report.m"
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_5, create_report__PSPtr_6);
    }
#line 756 "create_report.m"
    if (create_report__succeeded)
#line 703 "create_report.m"
      {
#line 703 "create_report.m"
        MR_Word create_report__PS_8;
#line 703 "create_report.m"
        MR_Word create_report__Id_9;
#line 704 "create_report.m"
        MR_String create_report__V_44_44;
#line 704 "create_report.m"
        MR_String create_report__V_45_45;
#line 704 "create_report.m"
        MR_String create_report__V_46_46;
#line 704 "create_report.m"
        MR_String create_report__V_47_47;
#line 704 "create_report.m"
        MR_String create_report__V_48_48;
#line 704 "create_report.m"
        MR_Integer create_report__V_49_49;
#line 704 "create_report.m"
        MR_Word create_report__V_50_50;
#line 704 "create_report.m"
        MR_ArrayPtr create_report__V_51_51;
#line 704 "create_report.m"
        MR_ArrayPtr create_report__V_52_52;
#line 704 "create_report.m"
        MR_Word create_report__V_53_53;
#line 704 "create_report.m"
        MR_Word create_report__V_54_54;
#line 753 "create_report.m"
        MR_Word create_report__GetterSetter_10;
#line 753 "create_report.m"
        MR_Word create_report__DataStructName_11;
#line 753 "create_report.m"
        MR_Word create_report__FieldName_12;
#line 764 "create_report.m"
        MR_String create_report__DeclModule_72;
#line 764 "create_report.m"
        MR_String create_report__DefModule_73;
#line 764 "create_report.m"
        MR_String create_report__Name_74;
#line 764 "create_report.m"
        MR_Integer create_report__Arity_75;
#line 764 "create_report.m"
        MR_Word create_report__NameChars_77;
#line 764 "create_report.m"
        MR_Word create_report__DataStructNameChars_78;
#line 764 "create_report.m"
        MR_Word create_report__FieldNameChars_79;
#line 764 "create_report.m"
        MR_String create_report__DataStructNameStr_80;
#line 764 "create_report.m"
        MR_String create_report__FieldNameStr_81;
#line 765 "create_report.m"
        MR_Word create_report___PorF_71;
#line 765 "create_report.m"
        MR_Integer create_report___Mode_76;

#line 703 "create_report.m"
        {
#line 703 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_5, create_report__PSPtr_6, &create_report__PS_8);
        }
#line 704 "create_report.m"
        create_report__Id_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 0)));
#line 704 "create_report.m"
        create_report__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 1)));
#line 704 "create_report.m"
        create_report__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 2)));
#line 704 "create_report.m"
        create_report__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 3)));
#line 704 "create_report.m"
        create_report__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 4)));
#line 704 "create_report.m"
        create_report__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 5)));
#line 704 "create_report.m"
        create_report__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 6)));
#line 704 "create_report.m"
        create_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 7)));
#line 704 "create_report.m"
        create_report__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 8)));
#line 704 "create_report.m"
        create_report__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 9)));
#line 704 "create_report.m"
        create_report__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 10)));
#line 704 "create_report.m"
        create_report__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 11)));
#line 765 "create_report.m"
        create_report__succeeded = ((MR_tag((MR_Word) create_report__Id_9)) == (MR_mktag((MR_Integer) 0)));
#line 765 "create_report.m"
        if (create_report__succeeded)
#line 765 "create_report.m"
          {
#line 765 "create_report.m"
            create_report___PorF_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 0)));
#line 765 "create_report.m"
            create_report__DeclModule_72 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 1)));
#line 765 "create_report.m"
            create_report__DefModule_73 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 2)));
#line 765 "create_report.m"
            create_report__Name_74 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 3)));
#line 765 "create_report.m"
            create_report__Arity_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 4)));
#line 765 "create_report.m"
            create_report___Mode_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 5)));
#line 767 "create_report.m"
            create_report__succeeded = (strcmp(create_report__DeclModule_72, create_report__DefModule_73) == 0);
#line 764 "create_report.m"
            if (create_report__succeeded)
#line 764 "create_report.m"
              {
#line 768 "create_report.m"
                {
#line 768 "create_report.m"
                  mercury__string__to_char_list_2_p_0(create_report__Name_74, &create_report__NameChars_77);
                }
#line 769 "create_report.m"
                {
#line 769 "create_report.m"
                  create_report__succeeded = create_report__is_getter_or_setter_2_4_p_0(create_report__NameChars_77, &create_report__GetterSetter_10, &create_report__DataStructNameChars_78, &create_report__FieldNameChars_79);
                }
#line 764 "create_report.m"
                if (create_report__succeeded)
#line 764 "create_report.m"
                  {
#line 774 "create_report.m"
#line 774 "create_report.m"
                    switch (create_report__GetterSetter_10) {
#line 774 "create_report.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 774 "create_report.m"
                      case (MR_Integer) 0:
#line 773 "create_report.m"
                        create_report__succeeded = (create_report__Arity_75 == (MR_Integer) 2);
#line 774 "create_report.m"
                        break;
#line 774 "create_report.m"
                      case (MR_Integer) 1:
#line 776 "create_report.m"
                        create_report__succeeded = (create_report__Arity_75 == (MR_Integer) 3);
#line 774 "create_report.m"
                        break;
#line 774 "create_report.m"
                    }
#line 764 "create_report.m"
                    if (create_report__succeeded)
#line 764 "create_report.m"
                      {
#line 778 "create_report.m"
                        {
#line 778 "create_report.m"
                          mercury__string__from_char_list_2_p_0(create_report__DataStructNameChars_78, &create_report__DataStructNameStr_80);
                        }
#line 779 "create_report.m"
                        {
#line 779 "create_report.m"
                          mercury__string__from_char_list_2_p_0(create_report__FieldNameChars_79, &create_report__FieldNameStr_81);
                        }
#line 780 "create_report.m"
                        create_report__DataStructName_11 = (MR_Word) create_report__DataStructNameStr_80;
#line 781 "create_report.m"
                        create_report__FieldName_12 = (MR_Word) create_report__FieldNameStr_81;
#line 781 "create_report.m"
                        create_report__succeeded = MR_TRUE;
#line 764 "create_report.m"
                      }
#line 764 "create_report.m"
                  }
#line 764 "create_report.m"
              }
#line 765 "create_report.m"
          }
#line 753 "create_report.m"
        if (create_report__succeeded)
#line 708 "create_report.m"
          {
#line 708 "create_report.m"
            MR_Word create_report__Own_13;
#line 708 "create_report.m"
            MR_Word create_report__Desc_14;
#line 708 "create_report.m"
            MR_Word create_report__ProcDesc_15;
#line 708 "create_report.m"
            MR_Word create_report__RawData_16;
#line 708 "create_report.m"
            MR_Word create_report__FieldMap0_18;
#line 708 "create_report.m"
            MR_Word create_report__FieldMap_31;
#line 714 "create_report.m"
            MR_Word create_report__FieldMap0Prime_17;
#line 712 "create_report.m"
            MR_Box create_report__conv0_FieldMap0Prime_17;
#line 742 "create_report.m"
            MR_Word create_report__FieldData0_19;
#line 717 "create_report.m"
            MR_Box create_report__conv1_FieldData0_19;

#line 708 "create_report.m"
            {
#line 708 "create_report.m"
              profile__deep_lookup_ps_own_3_p_0(create_report__Deep_5, create_report__PSPtr_6, &create_report__Own_13);
            }
#line 709 "create_report.m"
            {
#line 709 "create_report.m"
              profile__deep_lookup_ps_desc_3_p_0(create_report__Deep_5, create_report__PSPtr_6, &create_report__Desc_14);
            }
#line 710 "create_report.m"
            {
#line 710 "create_report.m"
              create_report__ProcDesc_15 = create_report__describe_proc_2_f_0(create_report__Deep_5, create_report__PSPtr_6);
            }
#line 711 "create_report.m"
            {
#line 711 "create_report.m"
              create_report__RawData_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 711 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__RawData_16, 0) = ((MR_Box) (create_report__ProcDesc_15));
#line 711 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__RawData_16, 1) = ((MR_Box) (create_report__Own_13));
#line 711 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__RawData_16, 2) = ((MR_Box) (create_report__Desc_14));
#line 711 "create_report.m"
            }
#line 712 "create_report.m"
            {
#line 712 "create_report.m"
              create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &report__report__type_ctor_info_data_struct_name_0, (MR_Word) &create_report_scalar_common_2[8], create_report__STATE_VARIABLE_GSDSRawMap_0_32, ((MR_Box) (create_report__DataStructName_11)), &create_report__conv0_FieldMap0Prime_17);
            }
#line 712 "create_report.m"
            if (create_report__succeeded)
#line 712 "create_report.m"
              {
#line 712 "create_report.m"
                create_report__FieldMap0Prime_17 = ((MR_Word) create_report__conv0_FieldMap0Prime_17);
#line 712 "create_report.m"
                create_report__succeeded = MR_TRUE;
#line 712 "create_report.m"
              }
#line 714 "create_report.m"
            if (create_report__succeeded)
#line 713 "create_report.m"
              create_report__FieldMap0_18 = create_report__FieldMap0Prime_17;
#line 714 "create_report.m"
            else
#line 715 "create_report.m"
              {
#line 715 "create_report.m"
                {
#line 715 "create_report.m"
                  mercury__map__init_1_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[7], &create_report__FieldMap0_18);
                }
#line 715 "create_report.m"
              }
#line 717 "create_report.m"
            {
#line 717 "create_report.m"
              create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[7], create_report__FieldMap0_18, ((MR_Box) (create_report__FieldName_12)), &create_report__conv1_FieldData0_19);
            }
#line 717 "create_report.m"
            if (create_report__succeeded)
#line 717 "create_report.m"
              {
#line 717 "create_report.m"
                create_report__FieldData0_19 = ((MR_Word) create_report__conv1_FieldData0_19);
#line 717 "create_report.m"
                create_report__succeeded = MR_TRUE;
#line 717 "create_report.m"
              }
#line 742 "create_report.m"
            if (create_report__succeeded)
#line 740 "create_report.m"
              {
#line 740 "create_report.m"
                MR_Word create_report__FieldData_25;

#line 729 "create_report.m"
#line 729 "create_report.m"
                switch (create_report__GetterSetter_10) {
#line 729 "create_report.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 729 "create_report.m"
                  case (MR_Integer) 0:
#line 725 "create_report.m"
#line 725 "create_report.m"
                    switch (MR_tag((MR_Word) create_report__FieldData0_19)) {
#line 725 "create_report.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 725 "create_report.m"
                      case (MR_Integer) 0:
#line 725 "create_report.m"
                      case (MR_Integer) 1:
#line 723 "create_report.m"
                        {
#line 724 "create_report.m"
                          {
#line 724 "create_report.m"
                            mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.gather_getters_setters\'/4", (MR_String) "redundant getter");
#line 724 "create_report.m"
                            return;
                          }
#line 723 "create_report.m"
                        }
#line 725 "create_report.m"
                        break;
#line 725 "create_report.m"
                      case (MR_Integer) 2:
#line 726 "create_report.m"
                        {
#line 726 "create_report.m"
                          MR_Word create_report__SetterRawData_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__FieldData0_19, (MR_Integer) 0)));

#line 727 "create_report.m"
                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 727 "create_report.m"
                          {
#line 727 "create_report.m"
                            create_report__FieldData_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 727 "create_report.m"
                            MR_hl_field(MR_mktag(0), create_report__FieldData_25, 0) = ((MR_Box) (create_report__RawData_16));
#line 727 "create_report.m"
                            MR_hl_field(MR_mktag(0), create_report__FieldData_25, 1) = ((MR_Box) (create_report__SetterRawData_24));
#line 727 "create_report.m"
                            MR_hl_field(MR_mktag(0), create_report__FieldData_25, 2) = NULL;
#line 727 "create_report.m"
                          }
#line 726 "create_report.m"
                        }
#line 725 "create_report.m"
                        break;
#line 725 "create_report.m"
                    }
#line 729 "create_report.m"
                    break;
#line 729 "create_report.m"
                  case (MR_Integer) 1:
#line 736 "create_report.m"
#line 736 "create_report.m"
                    switch (MR_tag((MR_Word) create_report__FieldData0_19)) {
#line 736 "create_report.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 736 "create_report.m"
                      case (MR_Integer) 0:
#line 736 "create_report.m"
                      case (MR_Integer) 2:
#line 734 "create_report.m"
                        {
#line 735 "create_report.m"
                          {
#line 735 "create_report.m"
                            mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.gather_getters_setters\'/4", (MR_String) "redundant setter");
#line 735 "create_report.m"
                            return;
                          }
#line 734 "create_report.m"
                        }
#line 736 "create_report.m"
                        break;
#line 736 "create_report.m"
                      case (MR_Integer) 1:
#line 737 "create_report.m"
                        {
#line 737 "create_report.m"
                          MR_Word create_report__GetterRawData_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__FieldData0_19, (MR_Integer) 0)));

#line 738 "create_report.m"
                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 738 "create_report.m"
                          {
#line 738 "create_report.m"
                            create_report__FieldData_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 738 "create_report.m"
                            MR_hl_field(MR_mktag(0), create_report__FieldData_25, 0) = ((MR_Box) (create_report__GetterRawData_30));
#line 738 "create_report.m"
                            MR_hl_field(MR_mktag(0), create_report__FieldData_25, 1) = ((MR_Box) (create_report__RawData_16));
#line 738 "create_report.m"
                            MR_hl_field(MR_mktag(0), create_report__FieldData_25, 2) = NULL;
#line 738 "create_report.m"
                          }
#line 737 "create_report.m"
                        }
#line 736 "create_report.m"
                        break;
#line 736 "create_report.m"
                    }
#line 729 "create_report.m"
                    break;
#line 729 "create_report.m"
                }
#line 741 "create_report.m"
                {
#line 741 "create_report.m"
                  mercury__map__det_update_4_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[7], ((MR_Box) (create_report__FieldName_12)), ((MR_Box) (create_report__FieldData_25)), create_report__FieldMap0_18, &create_report__FieldMap_31);
                }
#line 740 "create_report.m"
              }
#line 742 "create_report.m"
            else
#line 749 "create_report.m"
              {
#line 749 "create_report.m"
                MR_Word create_report__FieldData_43;

#line 746 "create_report.m"
#line 746 "create_report.m"
                switch (create_report__GetterSetter_10) {
#line 746 "create_report.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 746 "create_report.m"
                  case (MR_Integer) 0:
#line 745 "create_report.m"
                    {
#line 745 "create_report.m"
                      create_report__FieldData_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 745 "create_report.m"
                      MR_hl_field(MR_mktag(1), create_report__FieldData_43, 0) = ((MR_Box) (create_report__RawData_16));
#line 745 "create_report.m"
                    }
#line 746 "create_report.m"
                    break;
#line 746 "create_report.m"
                  case (MR_Integer) 1:
#line 748 "create_report.m"
                    {
#line 748 "create_report.m"
                      create_report__FieldData_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 748 "create_report.m"
                      MR_hl_field(MR_mktag(2), create_report__FieldData_43, 0) = ((MR_Box) (create_report__RawData_16));
#line 748 "create_report.m"
                    }
#line 746 "create_report.m"
                    break;
#line 746 "create_report.m"
                }
#line 750 "create_report.m"
                {
#line 750 "create_report.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[7], ((MR_Box) (create_report__FieldName_12)), ((MR_Box) (create_report__FieldData_43)), create_report__FieldMap0_18, &create_report__FieldMap_31);
                }
#line 749 "create_report.m"
              }
#line 752 "create_report.m"
            {
#line 752 "create_report.m"
              mercury__map__set_4_p_0((MR_Word) &report__report__type_ctor_info_data_struct_name_0, (MR_Word) &create_report_scalar_common_2[8], ((MR_Box) (create_report__DataStructName_11)), ((MR_Box) (create_report__FieldMap_31)), create_report__STATE_VARIABLE_GSDSRawMap_0_32, create_report__STATE_VARIABLE_GSDSRawMap_33);
#line 752 "create_report.m"
              return;
            }
#line 708 "create_report.m"
          }
#line 753 "create_report.m"
        else
#line 753 "create_report.m"
          *create_report__STATE_VARIABLE_GSDSRawMap_33 = create_report__STATE_VARIABLE_GSDSRawMap_0_32;
#line 703 "create_report.m"
      }
#line 756 "create_report.m"
    else
#line 756 "create_report.m"
      *create_report__STATE_VARIABLE_GSDSRawMap_33 = create_report__STATE_VARIABLE_GSDSRawMap_0_32;
#line 756 "create_report.m"
  }
#line 698 "create_report.m"
}

#line 667 "create_report.m"
static void MR_CALL 
create_report__getter_setter_raw_data_to_info_4_p_0(
#line 667 "create_report.m"
  MR_Word create_report__Deep_5,
#line 667 "create_report.m"
  MR_Word create_report___FieldName_6,
#line 667 "create_report.m"
  MR_Word create_report__RawData_7,
#line 667 "create_report.m"
  MR_Word * create_report__Data_8)
#line 667 "create_report.m"
{
#line 672 "create_report.m"
  {
#line 672 "create_report.m"
    MR_bool create_report__succeeded;

#line 672 "create_report.m"
    {
#line 672 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_p_0(create_report__Deep_5, create_report__RawData_7, create_report__Data_8);
#line 672 "create_report.m"
      return;
    }
#line 672 "create_report.m"
  }
#line 667 "create_report.m"
}

#line 661 "create_report.m"
static void MR_CALL 
create_report__getter_setter_raw_map_to_info_map_4_p_0(
#line 661 "create_report.m"
  MR_Word create_report__Deep_5,
#line 661 "create_report.m"
  MR_Word create_report___DataStructName_6,
#line 661 "create_report.m"
  MR_Word create_report__RawMap_7,
#line 661 "create_report.m"
  MR_Word * create_report__Map_8)
#line 661 "create_report.m"
{
#line 664 "create_report.m"
  {
#line 664 "create_report.m"
    MR_bool create_report__succeeded;

#line 664 "create_report.m"
    {
#line 664 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0(create_report__Deep_5, create_report__RawMap_7, create_report__Map_8);
#line 664 "create_report.m"
      return;
    }
#line 664 "create_report.m"
  }
#line 661 "create_report.m"
}

#line 650 "create_report.m"
static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_2(
#line 650 "create_report.m"
  MR_Box create_report__closure_arg,
#line 650 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 650 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 650 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 650 "create_report.m"
{
#line 650 "create_report.m"
  {
#line 650 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 650 "create_report.m"
    MR_Word create_report__conv3_Map_8;

#line 650 "create_report.m"
    {
#line 650 "create_report.m"
      create_report__getter_setter_raw_map_to_info_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv3_Map_8);
    }
#line 650 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv3_Map_8));
#line 650 "create_report.m"
  }
#line 650 "create_report.m"
}

#line 648 "create_report.m"
static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_1(
#line 648 "create_report.m"
  MR_Box create_report__closure_arg,
#line 648 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 648 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 648 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 648 "create_report.m"
{
#line 648 "create_report.m"
  {
#line 648 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 648 "create_report.m"
    MR_Word create_report__conv1_STATE_VARIABLE_GSDSRawMap_33;

#line 648 "create_report.m"
    {
#line 648 "create_report.m"
      create_report__gather_getters_setters_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv1_STATE_VARIABLE_GSDSRawMap_33);
    }
#line 648 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_STATE_VARIABLE_GSDSRawMap_33));
#line 648 "create_report.m"
  }
#line 648 "create_report.m"
}

#line 641 "create_report.m"
static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0(
#line 641 "create_report.m"
  MR_Word create_report__Deep_4,
#line 641 "create_report.m"
  MR_String create_report__ModuleName_5,
#line 641 "create_report.m"
  MR_Word * create_report__MaybeModuleGetterSettersReport_6)
#line 641 "create_report.m"
{
#line 655 "create_report.m"
  {
#line 655 "create_report.m"
    MR_bool create_report__succeeded;
#line 655 "create_report.m"
    MR_Word create_report__ModuleData_7;
#line 646 "create_report.m"
    MR_Word create_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
#line 646 "create_report.m"
    MR_Word create_report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
#line 646 "create_report.m"
    MR_String create_report__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
#line 646 "create_report.m"
    MR_String create_report__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
#line 646 "create_report.m"
    MR_String create_report__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
#line 646 "create_report.m"
    MR_Word create_report__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
#line 646 "create_report.m"
    MR_ArrayPtr create_report__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
#line 646 "create_report.m"
    MR_Word create_report__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
#line 646 "create_report.m"
    MR_Word create_report__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));
#line 646 "create_report.m"
    MR_Word create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));
#line 646 "create_report.m"
    MR_Box create_report__conv0_ModuleData_7;

#line 646 "create_report.m"
    {
#line 646 "create_report.m"
      create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, create_report__V_13_13, ((MR_Box) (create_report__ModuleName_5)), &create_report__conv0_ModuleData_7);
    }
#line 646 "create_report.m"
    if (create_report__succeeded)
#line 646 "create_report.m"
      {
#line 646 "create_report.m"
        create_report__ModuleData_7 = ((MR_Word) create_report__conv0_ModuleData_7);
#line 646 "create_report.m"
        create_report__succeeded = MR_TRUE;
#line 646 "create_report.m"
      }
#line 655 "create_report.m"
    if (create_report__succeeded)
#line 647 "create_report.m"
      {
#line 647 "create_report.m"
        MR_Word create_report__TypeCtorInfo_56_56;
#line 647 "create_report.m"
        MR_Word create_report__TypeInfo_57_57;
#line 647 "create_report.m"
        MR_Word create_report__PSPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 2)));
#line 647 "create_report.m"
        MR_Word create_report__GetterSetterDataMap_9;
#line 647 "create_report.m"
        MR_Word create_report__GetterSetterInfoMap_10;
#line 647 "create_report.m"
        MR_Word create_report__ModuleGetterSettersReport_11;
#line 647 "create_report.m"
        MR_Word create_report__V_14_14;
#line 647 "create_report.m"
        MR_Word create_report__V_15_15;
#line 647 "create_report.m"
        MR_Word create_report__V_16_16;
#line 647 "create_report.m"
        MR_Word create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 0)));
#line 647 "create_report.m"
        MR_Word create_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 1)));
#line 648 "create_report.m"
        MR_Box create_report__conv2_GetterSetterDataMap_9;

#line 648 "create_report.m"
        {
#line 648 "create_report.m"
          create_report__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 648 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 0) = ((MR_Box) (&create_report_scalar_common_6[8]));
#line 648 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 1) = ((MR_Box) (create_report__create_module_getter_setter_report_3_p_0_1));
#line 648 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 648 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 3) = ((MR_Box) (create_report__Deep_4));
#line 648 "create_report.m"
        }
#line 10611 "create_report.c"
        create_report__TypeCtorInfo_56_56 = (MR_Word) &report__report__type_ctor_info_data_struct_name_0;
#line 10613 "create_report.c"
        create_report__TypeInfo_57_57 = (MR_Word) &create_report_scalar_common_2[8];
#line 649 "create_report.m"
        {
#line 649 "create_report.m"
          create_report__V_15_15 = mercury__map__init_0_f_0(create_report__TypeCtorInfo_56_56, create_report__TypeInfo_57_57);
        }
#line 648 "create_report.m"
        {
#line 648 "create_report.m"
          mercury__list__foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_2[9], create_report__V_14_14, create_report__PSPtrs_8, ((MR_Box) (create_report__V_15_15)), &create_report__conv2_GetterSetterDataMap_9);
        }
#line 648 "create_report.m"
        create_report__GetterSetterDataMap_9 = ((MR_Word) create_report__conv2_GetterSetterDataMap_9);
#line 650 "create_report.m"
        {
#line 650 "create_report.m"
          create_report__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 650 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 0) = ((MR_Box) (&create_report_scalar_common_6[9]));
#line 650 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 1) = ((MR_Box) (create_report__create_module_getter_setter_report_3_p_0_2));
#line 650 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 650 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 3) = ((MR_Box) (create_report__Deep_4));
#line 650 "create_report.m"
        }
#line 650 "create_report.m"
        {
#line 650 "create_report.m"
          mercury__map__map_values_3_p_0(create_report__TypeCtorInfo_56_56, create_report__TypeInfo_57_57, (MR_Word) &create_report_scalar_common_2[11], create_report__V_16_16, create_report__GetterSetterDataMap_9, &create_report__GetterSetterInfoMap_10);
        }
#line 652 "create_report.m"
        {
#line 652 "create_report.m"
          create_report__ModuleGetterSettersReport_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 652 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ModuleGetterSettersReport_11, 0) = ((MR_Box) (create_report__ModuleName_5));
#line 652 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ModuleGetterSettersReport_11, 1) = ((MR_Box) (create_report__GetterSetterInfoMap_10));
#line 652 "create_report.m"
        }
#line 654 "create_report.m"
        {
#line 654 "create_report.m"
          MR_Word base;
#line 654 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 654 "create_report.m"
          *create_report__MaybeModuleGetterSettersReport_6 = base;
#line 654 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ModuleGetterSettersReport_11));
#line 654 "create_report.m"
        }
#line 647 "create_report.m"
      }
#line 655 "create_report.m"
    else
#line 657 "create_report.m"
      {
#line 657 "create_report.m"
        MR_String create_report__Msg_12;
#line 657 "create_report.m"
        MR_String create_report__V_65_65;
#line 657 "create_report.m"
        MR_String create_report__V_72_72;

#line 657 "create_report.m"
        {
#line 657 "create_report.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &create_report_scalar_common_3[0], create_report__ModuleName_5, &create_report__V_65_65);
        }
#line 656 "create_report.m"
        {
#line 656 "create_report.m"
          create_report__V_72_72 = mercury__string__f_43_43_2_f_0(create_report__V_65_65, (MR_String) "\'.\n");
        }
#line 656 "create_report.m"
        {
#line 656 "create_report.m"
          create_report__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "There is no module named \140", create_report__V_72_72);
        }
#line 658 "create_report.m"
        {
#line 658 "create_report.m"
          MR_Word base;
#line 658 "create_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 658 "create_report.m"
          *create_report__MaybeModuleGetterSettersReport_6 = base;
#line 658 "create_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Msg_12));
#line 658 "create_report.m"
        }
#line 657 "create_report.m"
      }
#line 655 "create_report.m"
  }
#line 641 "create_report.m"
}

#line 604 "create_report.m"
static MR_Word MR_CALL 
create_report__proc_to_active_row_data_2_f_0(
#line 604 "create_report.m"
  MR_Word create_report__Deep_4,
#line 604 "create_report.m"
  MR_Word create_report__PSPtr_5)
#line 604 "create_report.m"
{
#line 607 "create_report.m"
  {
#line 607 "create_report.m"
    MR_bool create_report__succeeded;
#line 607 "create_report.m"
    MR_Word create_report__ProcRowData_6;
#line 607 "create_report.m"
    MR_Word create_report__Own_7;
#line 607 "create_report.m"
    MR_Word create_report__Desc_8;
#line 607 "create_report.m"
    MR_Word create_report__IsActive_9;
#line 607 "create_report.m"
    MR_Word create_report__ProcIsActive_10;
#line 607 "create_report.m"
    MR_Word create_report__ProcDesc_11;
#line 607 "create_report.m"
    MR_Word create_report__ProcActive_12;
#line 607 "create_report.m"
    MR_Word create_report__V_19_19;

#line 608 "create_report.m"
    {
#line 608 "create_report.m"
      profile__deep_lookup_ps_own_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Own_7);
    }
#line 609 "create_report.m"
    {
#line 609 "create_report.m"
      profile__deep_lookup_ps_desc_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Desc_8);
    }
#line 610 "create_report.m"
    {
#line 610 "create_report.m"
      create_report__IsActive_9 = measurements__compute_is_active_1_f_0(create_report__Own_7);
    }
#line 614 "create_report.m"
#line 614 "create_report.m"
    switch (create_report__IsActive_9) {
#line 614 "create_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 614 "create_report.m"
      case (MR_Integer) 0:
#line 613 "create_report.m"
        create_report__ProcIsActive_10 = (MR_Integer) 0;
#line 614 "create_report.m"
        break;
#line 614 "create_report.m"
      case (MR_Integer) 1:
#line 616 "create_report.m"
        create_report__ProcIsActive_10 = (MR_Integer) 1;
#line 614 "create_report.m"
        break;
#line 614 "create_report.m"
    }
#line 618 "create_report.m"
    {
#line 618 "create_report.m"
      create_report__ProcDesc_11 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__PSPtr_5);
    }
#line 619 "create_report.m"
    {
#line 619 "create_report.m"
      create_report__ProcActive_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 619 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcActive_12, 0) = ((MR_Box) (create_report__ProcDesc_11));
#line 619 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcActive_12, 1) = ((MR_Box) (create_report__ProcIsActive_10));
#line 619 "create_report.m"
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_19_19, 0) = ((MR_Box) (create_report__Desc_8));
#line 1525 "create_report.m"
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__ProcActive_12)), create_report__Own_7, create_report__V_19_19, &create_report__ProcRowData_6);
    }
#line 607 "create_report.m"
    return create_report__ProcRowData_6;
#line 607 "create_report.m"
  }
#line 604 "create_report.m"
}

#line 595 "create_report.m"
static MR_Box MR_CALL 
create_report__create_module_report_3_p_0_1(
#line 595 "create_report.m"
  MR_Box create_report__closure_arg,
#line 595 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 595 "create_report.m"
{
#line 595 "create_report.m"
  {
#line 595 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 595 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 595 "create_report.m"
    MR_Word create_report__conv2_ProcRowData_6;

#line 595 "create_report.m"
    {
#line 595 "create_report.m"
      create_report__conv2_ProcRowData_6 = create_report__proc_to_active_row_data_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 595 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_ProcRowData_6));
#line 595 "create_report.m"
    return create_report__wrapper_arg_2;
#line 595 "create_report.m"
  }
#line 595 "create_report.m"
}

#line 579 "create_report.m"
static void MR_CALL 
create_report__create_module_report_3_p_0(
#line 579 "create_report.m"
  MR_Word create_report__Deep_4,
#line 579 "create_report.m"
  MR_String create_report__ModuleName_5,
#line 579 "create_report.m"
  MR_Word * create_report__MaybeModuleReport_6)
#line 579 "create_report.m"
{
#line 598 "create_report.m"
  {
#line 598 "create_report.m"
    MR_bool create_report__succeeded;
#line 598 "create_report.m"
    MR_Word create_report__ModuleData_7;
#line 583 "create_report.m"
    MR_Word create_report__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
#line 583 "create_report.m"
    MR_Word create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
#line 583 "create_report.m"
    MR_String create_report__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
#line 583 "create_report.m"
    MR_String create_report__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
#line 583 "create_report.m"
    MR_String create_report__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
#line 583 "create_report.m"
    MR_Word create_report__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
#line 583 "create_report.m"
    MR_ArrayPtr create_report__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
#line 583 "create_report.m"
    MR_Word create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
#line 583 "create_report.m"
    MR_Word create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));
#line 583 "create_report.m"
    MR_Word create_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));
#line 583 "create_report.m"
    MR_Box create_report__conv0_ModuleData_7;

#line 583 "create_report.m"
    {
#line 583 "create_report.m"
      create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, create_report__V_17_17, ((MR_Box) (create_report__ModuleName_5)), &create_report__conv0_ModuleData_7);
    }
#line 583 "create_report.m"
    if (create_report__succeeded)
#line 583 "create_report.m"
      {
#line 583 "create_report.m"
        create_report__ModuleData_7 = ((MR_Word) create_report__conv0_ModuleData_7);
#line 583 "create_report.m"
        create_report__succeeded = MR_TRUE;
#line 583 "create_report.m"
      }
#line 598 "create_report.m"
    if (create_report__succeeded)
#line 584 "create_report.m"
      {
#line 584 "create_report.m"
        MR_Word create_report__MaybeProgRep_8;
#line 584 "create_report.m"
        MR_Word create_report__HaveModuleRep_12;
#line 584 "create_report.m"
        MR_Word create_report__PSPtrs_13;
#line 584 "create_report.m"
        MR_Word create_report__ProcRowDatas_14;
#line 584 "create_report.m"
        MR_Word create_report__ModuleReport_15;
#line 584 "create_report.m"
        MR_Word create_report__V_18_18;
#line 586 "create_report.m"
        MR_Word create_report__TypeCtorInfo_55_55;
#line 586 "create_report.m"
        MR_Word create_report__TypeInfo_56_56;
#line 586 "create_report.m"
        MR_Word create_report__ProgRep_9;
#line 586 "create_report.m"
        MR_Word create_report__ModuleMap_10;
#line 588 "create_report.m"
        MR_Word create_report__V_11_11;
#line 588 "create_report.m"
        MR_Box create_report__conv1_V_11_11;
#line 594 "create_report.m"
        MR_Word create_report__V_51_51;
#line 594 "create_report.m"
        MR_Word create_report__V_52_52;

#line 584 "create_report.m"
        {
#line 584 "create_report.m"
          profile__deep_get_maybe_progrep_2_p_0(create_report__Deep_4, &create_report__MaybeProgRep_8);
        }
#line 586 "create_report.m"
        create_report__succeeded = ((MR_tag((MR_Word) create_report__MaybeProgRep_8)) == (MR_mktag((MR_Integer) 0)));
#line 586 "create_report.m"
        if (create_report__succeeded)
#line 586 "create_report.m"
          {
#line 586 "create_report.m"
            create_report__ProgRep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeProgRep_8, (MR_Integer) 0)));
#line 587 "create_report.m"
            create_report__ModuleMap_10 = (MR_Word) create_report__ProgRep_9;
#line 10987 "create_report.c"
            create_report__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 10989 "create_report.c"
            create_report__TypeInfo_56_56 = (MR_Word) &create_report_scalar_common_1[7];
#line 588 "create_report.m"
            {
#line 588 "create_report.m"
              create_report__succeeded = mercury__map__search_3_p_0(create_report__TypeCtorInfo_55_55, create_report__TypeInfo_56_56, create_report__ModuleMap_10, ((MR_Box) (create_report__ModuleName_5)), &create_report__conv1_V_11_11);
            }
#line 588 "create_report.m"
            if (create_report__succeeded)
#line 588 "create_report.m"
              {
#line 588 "create_report.m"
                create_report__V_11_11 = ((MR_Word) create_report__conv1_V_11_11);
#line 588 "create_report.m"
                create_report__succeeded = MR_TRUE;
#line 588 "create_report.m"
              }
#line 586 "create_report.m"
          }
#line 591 "create_report.m"
        if (create_report__succeeded)
#line 590 "create_report.m"
          create_report__HaveModuleRep_12 = (MR_Integer) 1;
#line 591 "create_report.m"
        else
#line 592 "create_report.m"
          create_report__HaveModuleRep_12 = (MR_Integer) 0;
#line 594 "create_report.m"
        create_report__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 0)));
#line 594 "create_report.m"
        create_report__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 1)));
#line 594 "create_report.m"
        create_report__PSPtrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 2)));
#line 595 "create_report.m"
        {
#line 595 "create_report.m"
          create_report__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 595 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_18_18, 0) = ((MR_Box) (&create_report_scalar_common_5[4]));
#line 595 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_18_18, 1) = ((MR_Box) (create_report__create_module_report_3_p_0_1));
#line 595 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 595 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_18_18, 3) = ((MR_Box) (create_report__Deep_4));
#line 595 "create_report.m"
        }
#line 595 "create_report.m"
        {
#line 595 "create_report.m"
          create_report__ProcRowDatas_14 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[8], create_report__V_18_18, create_report__PSPtrs_13);
        }
#line 596 "create_report.m"
        {
#line 596 "create_report.m"
          create_report__ModuleReport_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 596 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ModuleReport_15, 0) = ((MR_Box) (create_report__ModuleName_5));
#line 596 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ModuleReport_15, 1) = ((MR_Box) (create_report__HaveModuleRep_12));
#line 596 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ModuleReport_15, 2) = ((MR_Box) (create_report__ProcRowDatas_14));
#line 596 "create_report.m"
        }
#line 597 "create_report.m"
        {
#line 597 "create_report.m"
          MR_Word base;
#line 597 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 597 "create_report.m"
          *create_report__MaybeModuleReport_6 = base;
#line 597 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ModuleReport_15));
#line 597 "create_report.m"
        }
#line 584 "create_report.m"
      }
#line 598 "create_report.m"
    else
#line 600 "create_report.m"
      {
#line 600 "create_report.m"
        MR_String create_report__Msg_16;
#line 600 "create_report.m"
        MR_String create_report__V_62_62;
#line 600 "create_report.m"
        MR_String create_report__V_69_69;

#line 600 "create_report.m"
        {
#line 600 "create_report.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &create_report_scalar_common_3[0], create_report__ModuleName_5, &create_report__V_62_62);
        }
#line 599 "create_report.m"
        {
#line 599 "create_report.m"
          create_report__V_69_69 = mercury__string__f_43_43_2_f_0(create_report__V_62_62, (MR_String) "\'.\n");
        }
#line 599 "create_report.m"
        {
#line 599 "create_report.m"
          create_report__Msg_16 = mercury__string__f_43_43_2_f_0((MR_String) "There is no module named \140", create_report__V_69_69);
        }
#line 601 "create_report.m"
        {
#line 601 "create_report.m"
          MR_Word base;
#line 601 "create_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 601 "create_report.m"
          *create_report__MaybeModuleReport_6 = base;
#line 601 "create_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Msg_16));
#line 601 "create_report.m"
        }
#line 600 "create_report.m"
      }
#line 598 "create_report.m"
  }
#line 579 "create_report.m"
}

#line 554 "create_report.m"
static MR_Word MR_CALL 
create_report__module_pair_to_row_data_2_f_0(
#line 554 "create_report.m"
  MR_Word create_report__Deep_4,
#line 554 "create_report.m"
  MR_Word create_report__HeadVar__2_2)
#line 554 "create_report.m"
{
#line 557 "create_report.m"
  {
#line 557 "create_report.m"
    MR_bool create_report__succeeded;
#line 557 "create_report.m"
    MR_Word create_report__ModuleRowData_7;
#line 557 "create_report.m"
    MR_String create_report__ModuleName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
#line 557 "create_report.m"
    MR_Word create_report__ModuleData_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
#line 557 "create_report.m"
    MR_Word create_report__Own_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_6, (MR_Integer) 0)));
#line 557 "create_report.m"
    MR_Word create_report__IsActive_9;
#line 557 "create_report.m"
    MR_Word create_report__ModuleIsActive_10;
#line 557 "create_report.m"
    MR_Word create_report__ModuleActive_11;
#line 558 "create_report.m"
    MR_Word create_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_6, (MR_Integer) 1)));
#line 558 "create_report.m"
    MR_Word create_report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_6, (MR_Integer) 2)));

#line 559 "create_report.m"
    {
#line 559 "create_report.m"
      create_report__IsActive_9 = measurements__compute_is_active_1_f_0(create_report__Own_8);
    }
#line 563 "create_report.m"
#line 563 "create_report.m"
    switch (create_report__IsActive_9) {
#line 563 "create_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 563 "create_report.m"
      case (MR_Integer) 0:
#line 562 "create_report.m"
        create_report__ModuleIsActive_10 = (MR_Integer) 0;
#line 563 "create_report.m"
        break;
#line 563 "create_report.m"
      case (MR_Integer) 1:
#line 565 "create_report.m"
        create_report__ModuleIsActive_10 = (MR_Integer) 1;
#line 563 "create_report.m"
        break;
#line 563 "create_report.m"
    }
#line 567 "create_report.m"
    {
#line 567 "create_report.m"
      create_report__ModuleActive_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 567 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ModuleActive_11, 0) = ((MR_Box) (create_report__ModuleName_5));
#line 567 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ModuleActive_11, 1) = ((MR_Box) (create_report__ModuleIsActive_10));
#line 567 "create_report.m"
    }
#line 568 "create_report.m"
    {
#line 568 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__ModuleActive_11)), create_report__Own_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &create_report__ModuleRowData_7);
    }
#line 557 "create_report.m"
    return create_report__ModuleRowData_7;
#line 557 "create_report.m"
  }
#line 554 "create_report.m"
}

#line 549 "create_report.m"
static MR_bool MR_CALL 
create_report__not_mercury_runtime_1_p_0(
#line 549 "create_report.m"
  MR_Word create_report__HeadVar__1_1)
#line 549 "create_report.m"
{
#line 551 "create_report.m"
  {
#line 551 "create_report.m"
    MR_bool create_report__succeeded;
#line 551 "create_report.m"
    MR_String create_report__ModuleName_2 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 0)));
#line 551 "create_report.m"
    MR_Word create_report__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 1)));

#line 552 "create_report.m"
    create_report__succeeded = (strcmp(create_report__ModuleName_2, (MR_String) "Mercury runtime") == 0);
#line 552 "create_report.m"
    create_report__succeeded = !(create_report__succeeded);
#line 551 "create_report.m"
    return create_report__succeeded;
#line 551 "create_report.m"
  }
#line 549 "create_report.m"
}

#line 545 "create_report.m"
static MR_Box MR_CALL 
create_report__create_program_modules_report_2_p_0_2(
#line 545 "create_report.m"
  MR_Box create_report__closure_arg,
#line 545 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 545 "create_report.m"
{
#line 545 "create_report.m"
  {
#line 545 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 545 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 545 "create_report.m"
    MR_Word create_report__conv0_ModuleRowData_7;

#line 545 "create_report.m"
    {
#line 545 "create_report.m"
      create_report__conv0_ModuleRowData_7 = create_report__module_pair_to_row_data_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 545 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_ModuleRowData_7));
#line 545 "create_report.m"
    return create_report__wrapper_arg_2;
#line 545 "create_report.m"
  }
#line 545 "create_report.m"
}

#line 544 "create_report.m"
static MR_bool MR_CALL 
create_report__create_program_modules_report_2_p_0_1(
#line 544 "create_report.m"
  MR_Box create_report__closure_arg,
#line 544 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 544 "create_report.m"
{
#line 544 "create_report.m"
  {
#line 544 "create_report.m"
    MR_bool create_report__succeeded;
#line 544 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;

#line 544 "create_report.m"
    {
#line 544 "create_report.m"
      return create_report__succeeded = create_report__not_mercury_runtime_1_p_0(((MR_Word) create_report__wrapper_arg_1));
    }
#line 544 "create_report.m"
    return create_report__succeeded;
#line 544 "create_report.m"
  }
#line 544 "create_report.m"
}

#line 539 "create_report.m"
static void MR_CALL 
create_report__create_program_modules_report_2_p_0(
#line 539 "create_report.m"
  MR_Word create_report__Deep_3,
#line 539 "create_report.m"
  MR_Word * create_report__MaybeProgramModulesReport_4)
#line 539 "create_report.m"
{
#line 542 "create_report.m"
  {
#line 542 "create_report.m"
    MR_bool create_report__succeeded;
#line 542 "create_report.m"
    MR_Word create_report__TypeInfo_43_43;
#line 542 "create_report.m"
    MR_Word create_report__ModulePairs0_5;
#line 542 "create_report.m"
    MR_Word create_report__ModulePairs_6;
#line 542 "create_report.m"
    MR_Word create_report__ModuleRowDatas_7;
#line 542 "create_report.m"
    MR_Word create_report__ProgramModulesReport_8;
#line 542 "create_report.m"
    MR_Word create_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 25)));
#line 542 "create_report.m"
    MR_Word create_report__V_11_11;
#line 543 "create_report.m"
    MR_Word create_report__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 0)));
#line 543 "create_report.m"
    MR_String create_report__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 1)));
#line 543 "create_report.m"
    MR_String create_report__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 2)));
#line 543 "create_report.m"
    MR_String create_report__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 3)));
#line 543 "create_report.m"
    MR_Word create_report__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 4)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 5)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 6)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 7)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 8)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 9)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 10)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 11)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 12)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 13)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 14)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 15)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 16)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 17)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 18)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 19)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 20)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 21)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 22)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 23)));
#line 543 "create_report.m"
    MR_ArrayPtr create_report__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 24)));
#line 543 "create_report.m"
    MR_Word create_report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 26)));
#line 543 "create_report.m"
    MR_Word create_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 27)));
#line 543 "create_report.m"
    MR_Word create_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 28)));

#line 543 "create_report.m"
    {
#line 543 "create_report.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, create_report__V_9_9, &create_report__ModulePairs0_5);
    }
#line 11366 "create_report.c"
    create_report__TypeInfo_43_43 = (MR_Word) &create_report_scalar_common_2[6];
#line 544 "create_report.m"
    {
#line 544 "create_report.m"
      mercury__list__filter_3_p_0(create_report__TypeInfo_43_43, (MR_Word) &create_report_scalar_common_2[18], create_report__ModulePairs0_5, &create_report__ModulePairs_6);
    }
#line 545 "create_report.m"
    {
#line 545 "create_report.m"
      create_report__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 545 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_11_11, 0) = ((MR_Box) (&create_report_scalar_common_5[3]));
#line 545 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_11_11, 1) = ((MR_Box) (create_report__create_program_modules_report_2_p_0_2));
#line 545 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 545 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_11_11, 3) = ((MR_Box) (create_report__Deep_3));
#line 545 "create_report.m"
    }
#line 545 "create_report.m"
    {
#line 545 "create_report.m"
      create_report__ModuleRowDatas_7 = mercury__list__map_2_f_0(create_report__TypeInfo_43_43, (MR_Word) &create_report_scalar_common_1[6], create_report__V_11_11, create_report__ModulePairs_6);
    }
#line 546 "create_report.m"
    create_report__ProgramModulesReport_8 = (MR_Word) create_report__ModuleRowDatas_7;
#line 547 "create_report.m"
    {
#line 547 "create_report.m"
      MR_Word base;
#line 547 "create_report.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 547 "create_report.m"
      *create_report__MaybeProgramModulesReport_4 = base;
#line 547 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProgramModulesReport_8));
#line 547 "create_report.m"
    }
#line 542 "create_report.m"
  }
#line 539 "create_report.m"
}

#line 1729 "create_report.m"
static MR_Box MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_2(
#line 1729 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1729 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 1729 "create_report.m"
{
#line 1729 "create_report.m"
  {
#line 1729 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 1729 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1729 "create_report.m"
    MR_Word create_report__conv0_ProcDesc_6;

#line 1729 "create_report.m"
    {
#line 1729 "create_report.m"
      create_report__conv0_ProcDesc_6 = create_report__describe_clique_member_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 1729 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_ProcDesc_6));
#line 1729 "create_report.m"
    return create_report__wrapper_arg_2;
#line 1729 "create_report.m"
  }
#line 1729 "create_report.m"
}

#line 520 "create_report.m"
static MR_bool MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_1(
#line 520 "create_report.m"
  MR_Box create_report__closure_arg)
#line 520 "create_report.m"
{
#line 520 "create_report.m"
  {
#line 520 "create_report.m"
    MR_bool create_report__succeeded;
#line 520 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;

#line 520 "create_report.m"
    {
#line 520 "create_report.m"
      return create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))));
    }
#line 520 "create_report.m"
    return create_report__succeeded;
#line 520 "create_report.m"
  }
#line 520 "create_report.m"
}

#line 514 "create_report.m"
static void MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0(
#line 514 "create_report.m"
  MR_Word create_report__Deep_6,
#line 514 "create_report.m"
  MR_Word create_report__CSDPtr_7,
#line 514 "create_report.m"
  MR_Word * create_report__Own_8,
#line 514 "create_report.m"
  MR_Word * create_report__Desc_9,
#line 514 "create_report.m"
  MR_Word * create_report__CalleeCliqueRowData_10)
#line 514 "create_report.m"
{
#line 519 "create_report.m"
  {
#line 519 "create_report.m"
    MR_bool create_report__succeeded;
#line 519 "create_report.m"
    MR_Word create_report__CSD_11;
#line 519 "create_report.m"
    MR_Word create_report__CalleePDPtr_12;
#line 519 "create_report.m"
    MR_Word create_report__CalleeCliquePtr_13;
#line 519 "create_report.m"
    MR_Word create_report__CliqueDesc_14;
#line 519 "create_report.m"
    MR_Word create_report__V_15_15;
#line 519 "create_report.m"
    MR_Word create_report__V_17_17;
#line 519 "create_report.m"
    MR_Word create_report__V_60_60;
#line 523 "create_report.m"
    MR_Word create_report__V_18_18;

#line 520 "create_report.m"
    {
#line 520 "create_report.m"
      create_report__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 520 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_15_15, 0) = ((MR_Box) (&create_report_scalar_common_7[2]));
#line 520 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_15_15, 1) = ((MR_Box) (create_report__create_callee_clique_perf_row_data_5_p_0_1));
#line 520 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 520 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_15_15, 3) = ((MR_Box) (create_report__Deep_6));
#line 520 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_15_15, 4) = ((MR_Box) (create_report__CSDPtr_7));
#line 520 "create_report.m"
    }
#line 520 "create_report.m"
    {
#line 520 "create_report.m"
      mercury__require__require_2_p_0(create_report__V_15_15, (MR_String) "create_callee_clique_perf_row_data: invalid call_site_dynamic_ptr");
    }
#line 522 "create_report.m"
    {
#line 522 "create_report.m"
      profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_6, create_report__CSDPtr_7, &create_report__CSD_11);
    }
#line 523 "create_report.m"
    create_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_11, (MR_Integer) 0)));
#line 523 "create_report.m"
    create_report__CalleePDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_11, (MR_Integer) 1)));
#line 523 "create_report.m"
    *create_report__Own_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_11, (MR_Integer) 2)));
#line 525 "create_report.m"
    {
#line 525 "create_report.m"
      profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_6, create_report__CSDPtr_7, create_report__Desc_9);
    }
#line 526 "create_report.m"
    {
#line 526 "create_report.m"
      profile__deep_lookup_clique_index_3_p_0(create_report__Deep_6, create_report__CalleePDPtr_12, &create_report__CalleeCliquePtr_13);
    }
#line 527 "create_report.m"
    {
#line 527 "create_report.m"
      create_report__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 527 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_17_17, 0) = ((MR_Box) (create_report__CalleePDPtr_12));
#line 527 "create_report.m"
    }
#line 1716 "create_report.m"
    {
#line 1716 "create_report.m"
      create_report__succeeded = profile__valid_clique_ptr_2_p_0(create_report__Deep_6, create_report__CalleeCliquePtr_13);
    }
#line 1734 "create_report.m"
    if (create_report__succeeded)
#line 1717 "create_report.m"
      {
#line 1717 "create_report.m"
        MR_Word create_report__MemberPDPtrs_27;
#line 1717 "create_report.m"
        MR_Word create_report__ParentCSDPtr_28;
#line 1717 "create_report.m"
        MR_Word create_report__EntryPDPtr_30;
#line 1719 "create_report.m"
        MR_Word create_report__ParentCSD_29;
#line 1731 "create_report.m"
        MR_Word create_report__OtherPDPtrs_31;

#line 1717 "create_report.m"
        {
#line 1717 "create_report.m"
          profile__deep_lookup_clique_members_3_p_0(create_report__Deep_6, create_report__CalleeCliquePtr_13, &create_report__MemberPDPtrs_27);
        }
#line 1718 "create_report.m"
        {
#line 1718 "create_report.m"
          profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_6, create_report__CalleeCliquePtr_13, &create_report__ParentCSDPtr_28);
        }
#line 1719 "create_report.m"
        {
#line 1719 "create_report.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_6, create_report__ParentCSDPtr_28, &create_report__ParentCSD_29);
        }
#line 1721 "create_report.m"
        create_report__EntryPDPtr_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__V_17_17, (MR_Integer) 0)));
#line 1726 "create_report.m"
        {
#line 1726 "create_report.m"
          create_report__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, create_report__MemberPDPtrs_27, ((MR_Box) (create_report__EntryPDPtr_30)), &create_report__OtherPDPtrs_31);
        }
#line 1731 "create_report.m"
        if (create_report__succeeded)
#line 1727 "create_report.m"
          {
#line 1727 "create_report.m"
            MR_Word create_report__EntryProcDesc_32;
#line 1727 "create_report.m"
            MR_Word create_report__OtherProcDescs_33;
#line 1727 "create_report.m"
            MR_Word create_report__V_34_34;
#line 1727 "create_report.m"
            MR_Word create_report__PD_51;
#line 1727 "create_report.m"
            MR_Word create_report__V_52_52;
#line 1742 "create_report.m"
            MR_ArrayPtr create_report__V_53_53;
#line 1742 "create_report.m"
            MR_Word create_report__V_54_54;

#line 1741 "create_report.m"
            {
#line 1741 "create_report.m"
              profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_6, create_report__EntryPDPtr_30, &create_report__PD_51);
            }
#line 1742 "create_report.m"
            create_report__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_51, (MR_Integer) 0)));
#line 1742 "create_report.m"
            create_report__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_51, (MR_Integer) 1)));
#line 1742 "create_report.m"
            create_report__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_51, (MR_Integer) 2)));
#line 1742 "create_report.m"
            {
#line 1742 "create_report.m"
              create_report__EntryProcDesc_32 = create_report__describe_proc_2_f_0(create_report__Deep_6, create_report__V_52_52);
            }
#line 1729 "create_report.m"
            {
#line 1729 "create_report.m"
              create_report__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_34_34, 0) = ((MR_Box) (&create_report_scalar_common_5[2]));
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_34_34, 1) = ((MR_Box) (create_report__create_callee_clique_perf_row_data_5_p_0_2));
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1729 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__V_34_34, 3) = ((MR_Box) (create_report__Deep_6));
#line 1729 "create_report.m"
            }
#line 1729 "create_report.m"
            {
#line 1729 "create_report.m"
              create_report__OtherProcDescs_33 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &report__report__type_ctor_info_proc_desc_0, create_report__V_34_34, create_report__OtherPDPtrs_31);
            }
#line 1730 "create_report.m"
            {
#line 1730 "create_report.m"
              create_report__CliqueDesc_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1730 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_14, 0) = ((MR_Box) (create_report__CalleeCliquePtr_13));
#line 1730 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_14, 1) = ((MR_Box) (create_report__EntryProcDesc_32));
#line 1730 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_14, 2) = ((MR_Box) (create_report__OtherProcDescs_33));
#line 1730 "create_report.m"
            }
#line 1727 "create_report.m"
          }
#line 1731 "create_report.m"
        else
#line 1732 "create_report.m"
          {
#line 1732 "create_report.m"
            {
#line 1732 "create_report.m"
              mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "entry pdptr not a member");
#line 1732 "create_report.m"
              return;
            }
#line 1732 "create_report.m"
          }
#line 1717 "create_report.m"
      }
#line 1734 "create_report.m"
    else
#line 1735 "create_report.m"
      {
#line 1735 "create_report.m"
        {
#line 1735 "create_report.m"
          mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "invalid clique_ptr");
#line 1735 "create_report.m"
          return;
        }
#line 1735 "create_report.m"
      }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_60_60, 0) = ((MR_Box) (*create_report__Desc_9));
#line 1525 "create_report.m"
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_6, ((MR_Box) (create_report__CliqueDesc_14)), *create_report__Own_8, create_report__V_60_60, create_report__CalleeCliqueRowData_10);
#line 1525 "create_report.m"
      return;
    }
#line 519 "create_report.m"
  }
#line 514 "create_report.m"
}

#line 504 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_4(
#line 504 "create_report.m"
  MR_Box create_report__closure_arg,
#line 504 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_4)
#line 504 "create_report.m"
{
#line 504 "create_report.m"
  {
#line 504 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 504 "create_report.m"
    MR_Word create_report__conv11_Own_8;
#line 504 "create_report.m"
    MR_Word create_report__conv10_Desc_9;
#line 504 "create_report.m"
    MR_Word create_report__conv9_CalleeCliqueRowData_10;

#line 504 "create_report.m"
    {
#line 504 "create_report.m"
      create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv11_Own_8, &create_report__conv10_Desc_9, &create_report__conv9_CalleeCliqueRowData_10);
    }
#line 504 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv11_Own_8));
#line 504 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv10_Desc_9));
#line 504 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv9_CalleeCliqueRowData_10));
#line 504 "create_report.m"
  }
#line 504 "create_report.m"
}

#line 504 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_3(
#line 504 "create_report.m"
  MR_Box create_report__closure_arg,
#line 504 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_4)
#line 504 "create_report.m"
{
#line 504 "create_report.m"
  {
#line 504 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 504 "create_report.m"
    MR_Word create_report__conv8_Own_8;
#line 504 "create_report.m"
    MR_Word create_report__conv7_Desc_9;
#line 504 "create_report.m"
    MR_Word create_report__conv6_CalleeCliqueRowData_10;

#line 504 "create_report.m"
    {
#line 504 "create_report.m"
      create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv8_Own_8, &create_report__conv7_Desc_9, &create_report__conv6_CalleeCliqueRowData_10);
    }
#line 504 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv8_Own_8));
#line 504 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv7_Desc_9));
#line 504 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv6_CalleeCliqueRowData_10));
#line 504 "create_report.m"
  }
#line 504 "create_report.m"
}

#line 504 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_2(
#line 504 "create_report.m"
  MR_Box create_report__closure_arg,
#line 504 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_4)
#line 504 "create_report.m"
{
#line 504 "create_report.m"
  {
#line 504 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 504 "create_report.m"
    MR_Word create_report__conv5_Own_8;
#line 504 "create_report.m"
    MR_Word create_report__conv4_Desc_9;
#line 504 "create_report.m"
    MR_Word create_report__conv3_CalleeCliqueRowData_10;

#line 504 "create_report.m"
    {
#line 504 "create_report.m"
      create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv5_Own_8, &create_report__conv4_Desc_9, &create_report__conv3_CalleeCliqueRowData_10);
    }
#line 504 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv5_Own_8));
#line 504 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv4_Desc_9));
#line 504 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv3_CalleeCliqueRowData_10));
#line 504 "create_report.m"
  }
#line 504 "create_report.m"
}

#line 504 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_1(
#line 504 "create_report.m"
  MR_Box create_report__closure_arg,
#line 504 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 504 "create_report.m"
  MR_Box * create_report__wrapper_arg_4)
#line 504 "create_report.m"
{
#line 504 "create_report.m"
  {
#line 504 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 504 "create_report.m"
    MR_Word create_report__conv2_Own_8;
#line 504 "create_report.m"
    MR_Word create_report__conv1_Desc_9;
#line 504 "create_report.m"
    MR_Word create_report__conv0_CalleeCliqueRowData_10;

#line 504 "create_report.m"
    {
#line 504 "create_report.m"
      create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv2_Own_8, &create_report__conv1_Desc_9, &create_report__conv0_CalleeCliqueRowData_10);
    }
#line 504 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_Own_8));
#line 504 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_Desc_9));
#line 504 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv0_CalleeCliqueRowData_10));
#line 504 "create_report.m"
  }
#line 504 "create_report.m"
}

#line 455 "create_report.m"
static void MR_CALL 
create_report__create_child_call_site_report_3_p_0(
#line 455 "create_report.m"
  MR_Word create_report__Deep_4,
#line 455 "create_report.m"
  MR_Word create_report__Pair_5,
#line 455 "create_report.m"
  MR_Word * create_report__CliqueCallSiteReport_6)
#line 455 "create_report.m"
{
#line 459 "create_report.m"
  {
#line 459 "create_report.m"
    MR_bool create_report__succeeded;
#line 459 "create_report.m"
    MR_Word create_report__CSSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Pair_5, (MR_Integer) 0)));
#line 459 "create_report.m"
    MR_Word create_report__CallSiteArraySlot_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Pair_5, (MR_Integer) 1)));
#line 459 "create_report.m"
    MR_Word create_report__CSS_9;
#line 459 "create_report.m"
    MR_Word create_report__CallSiteDesc_10;
#line 459 "create_report.m"
    MR_Word create_report__Kind_11;
#line 459 "create_report.m"
    MR_Word create_report__ProcDescKind_15;
#line 459 "create_report.m"
    MR_Word create_report__Own_19;
#line 459 "create_report.m"
    MR_Word create_report__Desc_20;
#line 459 "create_report.m"
    MR_Word create_report__CalleeCliqueRowDatas_22;
#line 459 "create_report.m"
    MR_Word create_report__SummaryRowData_29;
#line 463 "create_report.m"
    MR_Word create_report__V_38_38;
#line 463 "create_report.m"
    MR_Integer create_report__V_39_39;
#line 463 "create_report.m"
    MR_Integer create_report__V_40_40;
#line 463 "create_report.m"
    MR_Word create_report__V_41_41;

#line 461 "create_report.m"
    {
#line 461 "create_report.m"
      profile__deep_lookup_call_site_statics_3_p_0(create_report__Deep_4, create_report__CSSPtr_7, &create_report__CSS_9);
    }
#line 462 "create_report.m"
    {
#line 462 "create_report.m"
      create_report__CallSiteDesc_10 = create_report__describe_call_site_2_f_0(create_report__Deep_4, create_report__CSSPtr_7);
    }
#line 463 "create_report.m"
    create_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 0)));
#line 463 "create_report.m"
    create_report__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 1)));
#line 463 "create_report.m"
    create_report__Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 2)));
#line 463 "create_report.m"
    create_report__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 3)));
#line 463 "create_report.m"
    create_report__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 4)));
#line 483 "create_report.m"
#line 483 "create_report.m"
    switch (MR_tag((MR_Word) create_report__Kind_11)) {
#line 483 "create_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 483 "create_report.m"
      case (MR_Integer) 0:
#line 483 "create_report.m"
#line 483 "create_report.m"
        switch (MR_unmkbody(create_report__Kind_11)) {
#line 483 "create_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 483 "create_report.m"
          case (MR_Integer) 0:
#line 496 "create_report.m"
            {
#line 496 "create_report.m"
              MR_Word create_report__CSDPtrs_145;
#line 496 "create_report.m"
              MR_Word create_report__Owns_146;
#line 496 "create_report.m"
              MR_Word create_report__Descs_147;
#line 496 "create_report.m"
              MR_Word create_report__V_151_151;

#line 486 "create_report.m"
              create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 500 "create_report.m"
              if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
#line 501 "create_report.m"
                {
#line 501 "create_report.m"
                  MR_ArrayPtr create_report__CSDPtrsArray_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 1)));
#line 501 "create_report.m"
                  MR_Word create_report___IsZeroed_122 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));

#line 502 "create_report.m"
                  {
#line 502 "create_report.m"
                    mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) create_report__CSDPtrsArray_124, &create_report__CSDPtrs_145);
                  }
#line 501 "create_report.m"
                }
#line 500 "create_report.m"
              else
#line 498 "create_report.m"
                {
#line 499 "create_report.m"
                  {
#line 499 "create_report.m"
                    mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
#line 499 "create_report.m"
                    return;
                  }
#line 498 "create_report.m"
                }
#line 504 "create_report.m"
              {
#line 504 "create_report.m"
                create_report__V_151_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_151_151, 0) = ((MR_Box) (&create_report_scalar_common_9[0]));
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_151_151, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_4));
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_151_151, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_151_151, 3) = ((MR_Box) (create_report__Deep_4));
#line 504 "create_report.m"
              }
#line 504 "create_report.m"
              {
#line 504 "create_report.m"
                mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &create_report_scalar_common_1[5], create_report__V_151_151, create_report__CSDPtrs_145, &create_report__Owns_146, &create_report__Descs_147, &create_report__CalleeCliqueRowDatas_22);
              }
#line 506 "create_report.m"
              {
#line 506 "create_report.m"
                create_report__Own_19 = measurements__sum_own_infos_1_f_0(create_report__Owns_146);
              }
#line 507 "create_report.m"
              {
#line 507 "create_report.m"
                create_report__Desc_20 = measurements__sum_inherit_infos_1_f_0(create_report__Descs_147);
              }
#line 496 "create_report.m"
            }
#line 483 "create_report.m"
            break;
#line 483 "create_report.m"
          case (MR_Integer) 1:
#line 496 "create_report.m"
            {
#line 496 "create_report.m"
              MR_Word create_report__CSDPtrs_75;
#line 496 "create_report.m"
              MR_Word create_report__Owns_76;
#line 496 "create_report.m"
              MR_Word create_report__Descs_77;
#line 496 "create_report.m"
              MR_Word create_report__V_81_81;

#line 489 "create_report.m"
              create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 500 "create_report.m"
              if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
#line 501 "create_report.m"
                {
#line 501 "create_report.m"
                  MR_ArrayPtr create_report__CSDPtrsArray_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 1)));
#line 501 "create_report.m"
                  MR_Word create_report___IsZeroed_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));

#line 502 "create_report.m"
                  {
#line 502 "create_report.m"
                    mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) create_report__CSDPtrsArray_54, &create_report__CSDPtrs_75);
                  }
#line 501 "create_report.m"
                }
#line 500 "create_report.m"
              else
#line 498 "create_report.m"
                {
#line 499 "create_report.m"
                  {
#line 499 "create_report.m"
                    mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
#line 499 "create_report.m"
                    return;
                  }
#line 498 "create_report.m"
                }
#line 504 "create_report.m"
              {
#line 504 "create_report.m"
                create_report__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_81_81, 0) = ((MR_Box) (&create_report_scalar_common_9[0]));
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_81_81, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_2));
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_81_81, 3) = ((MR_Box) (create_report__Deep_4));
#line 504 "create_report.m"
              }
#line 504 "create_report.m"
              {
#line 504 "create_report.m"
                mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &create_report_scalar_common_1[5], create_report__V_81_81, create_report__CSDPtrs_75, &create_report__Owns_76, &create_report__Descs_77, &create_report__CalleeCliqueRowDatas_22);
              }
#line 506 "create_report.m"
              {
#line 506 "create_report.m"
                create_report__Own_19 = measurements__sum_own_infos_1_f_0(create_report__Owns_76);
              }
#line 507 "create_report.m"
              {
#line 507 "create_report.m"
                create_report__Desc_20 = measurements__sum_inherit_infos_1_f_0(create_report__Descs_77);
              }
#line 496 "create_report.m"
            }
#line 483 "create_report.m"
            break;
#line 483 "create_report.m"
          case (MR_Integer) 2:
#line 496 "create_report.m"
            {
#line 496 "create_report.m"
              MR_Word create_report__CSDPtrs_110;
#line 496 "create_report.m"
              MR_Word create_report__Owns_111;
#line 496 "create_report.m"
              MR_Word create_report__Descs_112;
#line 496 "create_report.m"
              MR_Word create_report__V_116_116;

#line 492 "create_report.m"
              create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 500 "create_report.m"
              if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
#line 501 "create_report.m"
                {
#line 501 "create_report.m"
                  MR_ArrayPtr create_report__CSDPtrsArray_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 1)));
#line 501 "create_report.m"
                  MR_Word create_report___IsZeroed_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));

#line 502 "create_report.m"
                  {
#line 502 "create_report.m"
                    mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) create_report__CSDPtrsArray_89, &create_report__CSDPtrs_110);
                  }
#line 501 "create_report.m"
                }
#line 500 "create_report.m"
              else
#line 498 "create_report.m"
                {
#line 499 "create_report.m"
                  {
#line 499 "create_report.m"
                    mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
#line 499 "create_report.m"
                    return;
                  }
#line 498 "create_report.m"
                }
#line 504 "create_report.m"
              {
#line 504 "create_report.m"
                create_report__V_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_116_116, 0) = ((MR_Box) (&create_report_scalar_common_9[0]));
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_116_116, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_3));
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_116_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_116_116, 3) = ((MR_Box) (create_report__Deep_4));
#line 504 "create_report.m"
              }
#line 504 "create_report.m"
              {
#line 504 "create_report.m"
                mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &create_report_scalar_common_1[5], create_report__V_116_116, create_report__CSDPtrs_110, &create_report__Owns_111, &create_report__Descs_112, &create_report__CalleeCliqueRowDatas_22);
              }
#line 506 "create_report.m"
              {
#line 506 "create_report.m"
                create_report__Own_19 = measurements__sum_own_infos_1_f_0(create_report__Owns_111);
              }
#line 507 "create_report.m"
              {
#line 507 "create_report.m"
                create_report__Desc_20 = measurements__sum_inherit_infos_1_f_0(create_report__Descs_112);
              }
#line 496 "create_report.m"
            }
#line 483 "create_report.m"
            break;
#line 483 "create_report.m"
          case (MR_Integer) 3:
#line 496 "create_report.m"
            {
#line 496 "create_report.m"
              MR_Word create_report__CSDPtrs_26;
#line 496 "create_report.m"
              MR_Word create_report__Owns_27;
#line 496 "create_report.m"
              MR_Word create_report__Descs_28;
#line 496 "create_report.m"
              MR_Word create_report__V_33_33;

#line 495 "create_report.m"
              create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 500 "create_report.m"
              if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
#line 501 "create_report.m"
                {
#line 501 "create_report.m"
                  MR_ArrayPtr create_report__CSDPtrsArray_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 1)));
#line 501 "create_report.m"
                  MR_Word create_report___IsZeroed_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));

#line 502 "create_report.m"
                  {
#line 502 "create_report.m"
                    mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) create_report__CSDPtrsArray_25, &create_report__CSDPtrs_26);
                  }
#line 501 "create_report.m"
                }
#line 500 "create_report.m"
              else
#line 498 "create_report.m"
                {
#line 499 "create_report.m"
                  {
#line 499 "create_report.m"
                    mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
#line 499 "create_report.m"
                    return;
                  }
#line 498 "create_report.m"
                }
#line 504 "create_report.m"
              {
#line 504 "create_report.m"
                create_report__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_33_33, 0) = ((MR_Box) (&create_report_scalar_common_9[0]));
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_33_33, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_1));
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 504 "create_report.m"
                MR_hl_field(MR_mktag(0), create_report__V_33_33, 3) = ((MR_Box) (create_report__Deep_4));
#line 504 "create_report.m"
              }
#line 504 "create_report.m"
              {
#line 504 "create_report.m"
                mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &create_report_scalar_common_1[5], create_report__V_33_33, create_report__CSDPtrs_26, &create_report__Owns_27, &create_report__Descs_28, &create_report__CalleeCliqueRowDatas_22);
              }
#line 506 "create_report.m"
              {
#line 506 "create_report.m"
                create_report__Own_19 = measurements__sum_own_infos_1_f_0(create_report__Owns_27);
              }
#line 507 "create_report.m"
              {
#line 507 "create_report.m"
                create_report__Desc_20 = measurements__sum_inherit_infos_1_f_0(create_report__Descs_28);
              }
#line 496 "create_report.m"
            }
#line 483 "create_report.m"
            break;
#line 483 "create_report.m"
        }
#line 483 "create_report.m"
        break;
#line 483 "create_report.m"
      case (MR_Integer) 1:
#line 465 "create_report.m"
        {
#line 465 "create_report.m"
          MR_Word create_report__CalleePSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Kind_11, (MR_Integer) 0)));
#line 465 "create_report.m"
          MR_String create_report__TypeSubst_13 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__Kind_11, (MR_Integer) 1)));
#line 465 "create_report.m"
          MR_Word create_report__KnownCalleeDesc_14;
#line 465 "create_report.m"
          MR_Word create_report__CSDPtr_16;

#line 466 "create_report.m"
          {
#line 466 "create_report.m"
            create_report__KnownCalleeDesc_14 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__CalleePSPtr_12);
          }
#line 467 "create_report.m"
          {
#line 467 "create_report.m"
            create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "create_report.m"
            MR_hl_field(MR_mktag(1), create_report__ProcDescKind_15, 0) = ((MR_Box) (create_report__KnownCalleeDesc_14));
#line 467 "create_report.m"
            MR_hl_field(MR_mktag(1), create_report__ProcDescKind_15, 1) = ((MR_Box) (create_report__TypeSubst_13));
#line 467 "create_report.m"
          }
#line 470 "create_report.m"
          if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
#line 471 "create_report.m"
            {
#line 472 "create_report.m"
              {
#line 472 "create_report.m"
                mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "normal_call is multi");
#line 472 "create_report.m"
                return;
              }
#line 471 "create_report.m"
            }
#line 470 "create_report.m"
          else
#line 469 "create_report.m"
            create_report__CSDPtr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));
#line 474 "create_report.m"
          {
#line 474 "create_report.m"
            create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__CSDPtr_16);
          }
#line 478 "create_report.m"
          if (create_report__succeeded)
#line 476 "create_report.m"
            {
#line 476 "create_report.m"
              MR_Word create_report__CalleeCliqueRowData_21;

#line 475 "create_report.m"
              {
#line 475 "create_report.m"
                create_report__create_callee_clique_perf_row_data_5_p_0(create_report__Deep_4, create_report__CSDPtr_16, &create_report__Own_19, &create_report__Desc_20, &create_report__CalleeCliqueRowData_21);
              }
#line 477 "create_report.m"
              {
#line 477 "create_report.m"
                create_report__CalleeCliqueRowDatas_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "create_report.m"
                MR_hl_field(MR_mktag(1), create_report__CalleeCliqueRowDatas_22, 0) = ((MR_Box) (create_report__CalleeCliqueRowData_21));
#line 477 "create_report.m"
                MR_hl_field(MR_mktag(1), create_report__CalleeCliqueRowDatas_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 477 "create_report.m"
              }
#line 476 "create_report.m"
            }
#line 478 "create_report.m"
          else
#line 479 "create_report.m"
            {
#line 479 "create_report.m"
              {
#line 479 "create_report.m"
                create_report__Own_19 = measurements__zero_own_prof_info_0_f_0();
              }
#line 480 "create_report.m"
              {
#line 480 "create_report.m"
                create_report__Desc_20 = measurements__zero_inherit_prof_info_0_f_0();
              }
#line 481 "create_report.m"
              create_report__CalleeCliqueRowDatas_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 479 "create_report.m"
            }
#line 465 "create_report.m"
        }
#line 483 "create_report.m"
        break;
#line 483 "create_report.m"
    }
#line 509 "create_report.m"
    {
#line 509 "create_report.m"
      create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_10)), create_report__Own_19, create_report__Desc_20, &create_report__SummaryRowData_29);
    }
#line 511 "create_report.m"
    {
#line 511 "create_report.m"
      MR_Word base;
#line 511 "create_report.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 511 "create_report.m"
      *create_report__CliqueCallSiteReport_6 = base;
#line 511 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__SummaryRowData_29));
#line 511 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__ProcDescKind_15));
#line 511 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (create_report__CalleeCliqueRowDatas_22));
#line 511 "create_report.m"
    }
#line 459 "create_report.m"
  }
#line 455 "create_report.m"
}

#line 424 "create_report.m"
static void MR_CALL 
create_report__create_clique_proc_dynamic_report_7_p_0(
#line 424 "create_report.m"
  MR_Word create_report__Deep_8,
#line 424 "create_report.m"
  MR_Word create_report___CliquePtr_9,
#line 424 "create_report.m"
  MR_Word create_report__ProcDesc_10,
#line 424 "create_report.m"
  MR_Word create_report__PDPtr_11,
#line 424 "create_report.m"
  MR_Word * create_report__Own_12,
#line 424 "create_report.m"
  MR_Word * create_report__Desc_13,
#line 424 "create_report.m"
  MR_Word * create_report__CliquePDReport_14)
#line 424 "create_report.m"
{
#line 443 "create_report.m"
  {
#line 443 "create_report.m"
    MR_bool create_report__succeeded;

#line 443 "create_report.m"
    {
#line 443 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(create_report__Deep_8, create_report__ProcDesc_10, create_report__PDPtr_11, create_report__Own_12, create_report__Desc_13, create_report__CliquePDReport_14);
#line 443 "create_report.m"
      return;
    }
#line 443 "create_report.m"
  }
#line 424 "create_report.m"
}

#line 414 "create_report.m"
static void MR_CALL 
create_report__create_clique_proc_report_4_p_0_1(
#line 414 "create_report.m"
  MR_Box create_report__closure_arg,
#line 414 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 414 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 414 "create_report.m"
  MR_Box * create_report__wrapper_arg_3,
#line 414 "create_report.m"
  MR_Box * create_report__wrapper_arg_4)
#line 414 "create_report.m"
{
#line 414 "create_report.m"
  {
#line 414 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 414 "create_report.m"
    MR_Word create_report__conv2_Own_12;
#line 414 "create_report.m"
    MR_Word create_report__conv1_Desc_13;
#line 414 "create_report.m"
    MR_Word create_report__conv0_CliquePDReport_14;

#line 414 "create_report.m"
    {
#line 414 "create_report.m"
      create_report__create_clique_proc_dynamic_report_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 5))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv2_Own_12, &create_report__conv1_Desc_13, &create_report__conv0_CliquePDReport_14);
    }
#line 414 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_Own_12));
#line 414 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_Desc_13));
#line 414 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv0_CliquePDReport_14));
#line 414 "create_report.m"
  }
#line 414 "create_report.m"
}

#line 401 "create_report.m"
static void MR_CALL 
create_report__create_clique_proc_report_4_p_0(
#line 401 "create_report.m"
  MR_Word create_report__Deep_5,
#line 401 "create_report.m"
  MR_Word create_report__CliquePtr_6,
#line 401 "create_report.m"
  MR_Word create_report__HeadVar__3_3,
#line 401 "create_report.m"
  MR_Word * create_report__CliqueProcReport_9)
#line 401 "create_report.m"
{
#line 405 "create_report.m"
  {
#line 405 "create_report.m"
    MR_bool create_report__succeeded;
#line 405 "create_report.m"
    MR_Word create_report__PSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
#line 405 "create_report.m"
    MR_Word create_report__PDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));

#line 409 "create_report.m"
    if ((create_report__PDPtrs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "create_report.m"
      {
#line 408 "create_report.m"
        {
#line 408 "create_report.m"
          mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_clique_proc_report\'/4", (MR_String) "PDPtrs = []");
#line 408 "create_report.m"
          return;
        }
#line 407 "create_report.m"
      }
#line 409 "create_report.m"
    else
#line 410 "create_report.m"
      {
#line 410 "create_report.m"
        MR_Word create_report__FirstPDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__PDPtrs_8, (MR_Integer) 0)));
#line 410 "create_report.m"
        MR_Word create_report__LaterPDPtrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__PDPtrs_8, (MR_Integer) 1)));
#line 410 "create_report.m"
        MR_Word create_report__ProcDesc_12;
#line 410 "create_report.m"
        MR_Word create_report__FirstPDOwn_13;
#line 410 "create_report.m"
        MR_Word create_report__FirstPDDesc_14;
#line 410 "create_report.m"
        MR_Word create_report__FirstPDReport_15;
#line 410 "create_report.m"
        MR_Word create_report__LaterPDOwns_16;
#line 410 "create_report.m"
        MR_Word create_report__LaterPDDescs_17;
#line 410 "create_report.m"
        MR_Word create_report__LaterPDReports_18;
#line 410 "create_report.m"
        MR_Word create_report__SummaryOwn_19;
#line 410 "create_report.m"
        MR_Word create_report__SummaryDesc_20;
#line 410 "create_report.m"
        MR_Word create_report__ProcSummaryRowData_21;
#line 410 "create_report.m"
        MR_Word create_report__V_22_22;
#line 410 "create_report.m"
        MR_Word create_report__V_23_23;
#line 410 "create_report.m"
        MR_Word create_report__V_24_24;
#line 410 "create_report.m"
        MR_Word create_report__V_42_42;

#line 411 "create_report.m"
        {
#line 411 "create_report.m"
          create_report__ProcDesc_12 = create_report__describe_proc_2_f_0(create_report__Deep_5, create_report__PSPtr_7);
        }
#line 412 "create_report.m"
        {
#line 412 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(create_report__Deep_5, create_report__ProcDesc_12, create_report__FirstPDPtr_10, &create_report__FirstPDOwn_13, &create_report__FirstPDDesc_14, &create_report__FirstPDReport_15);
        }
#line 414 "create_report.m"
        {
#line 414 "create_report.m"
          create_report__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 414 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_22_22, 0) = ((MR_Box) (&create_report_scalar_common_8[0]));
#line 414 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_22_22, 1) = ((MR_Box) (create_report__create_clique_proc_report_4_p_0_1));
#line 414 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 414 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_22_22, 3) = ((MR_Box) (create_report__Deep_5));
#line 414 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_22_22, 4) = ((MR_Box) (create_report__CliquePtr_6));
#line 414 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_22_22, 5) = ((MR_Box) (create_report__ProcDesc_12));
#line 414 "create_report.m"
        }
#line 414 "create_report.m"
        {
#line 414 "create_report.m"
          mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &report__report__type_ctor_info_clique_proc_dynamic_report_0, create_report__V_22_22, create_report__LaterPDPtrs_11, &create_report__LaterPDOwns_16, &create_report__LaterPDDescs_17, &create_report__LaterPDReports_18);
        }
#line 416 "create_report.m"
        {
#line 416 "create_report.m"
          create_report__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_23_23, 0) = ((MR_Box) (create_report__FirstPDOwn_13));
#line 416 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_23_23, 1) = ((MR_Box) (create_report__LaterPDOwns_16));
#line 416 "create_report.m"
        }
#line 416 "create_report.m"
        {
#line 416 "create_report.m"
          create_report__SummaryOwn_19 = measurements__sum_own_infos_1_f_0(create_report__V_23_23);
        }
#line 417 "create_report.m"
        {
#line 417 "create_report.m"
          create_report__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_24_24, 0) = ((MR_Box) (create_report__FirstPDDesc_14));
#line 417 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_24_24, 1) = ((MR_Box) (create_report__LaterPDDescs_17));
#line 417 "create_report.m"
        }
#line 417 "create_report.m"
        {
#line 417 "create_report.m"
          create_report__SummaryDesc_20 = measurements__sum_inherit_infos_1_f_0(create_report__V_24_24);
        }
#line 1525 "create_report.m"
        {
#line 1525 "create_report.m"
          create_report__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_42_42, 0) = ((MR_Box) (create_report__SummaryDesc_20));
#line 1525 "create_report.m"
        }
#line 1525 "create_report.m"
        {
#line 1525 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__ProcDesc_12)), create_report__SummaryOwn_19, create_report__V_42_42, &create_report__ProcSummaryRowData_21);
        }
#line 420 "create_report.m"
        {
#line 420 "create_report.m"
          MR_Word base;
#line 420 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 420 "create_report.m"
          *create_report__CliqueProcReport_9 = base;
#line 420 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcSummaryRowData_21));
#line 420 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__FirstPDReport_15));
#line 420 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (create_report__LaterPDReports_18));
#line 420 "create_report.m"
        }
#line 410 "create_report.m"
      }
#line 405 "create_report.m"
  }
#line 401 "create_report.m"
}

#line 395 "create_report.m"
static MR_bool MR_CALL 
create_report__proc_group_contains_2_p_0(
#line 395 "create_report.m"
  MR_Word create_report__EntryPDPtr_3,
#line 395 "create_report.m"
  MR_Word create_report__HeadVar__2_2)
#line 395 "create_report.m"
{
#line 398 "create_report.m"
  {
#line 398 "create_report.m"
    MR_bool create_report__succeeded;
#line 398 "create_report.m"
    MR_Word create_report__PDPtrs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "create_report.m"
    MR_Word create_report__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));

#line 399 "create_report.m"
    {
#line 399 "create_report.m"
      return create_report__succeeded = mercury__list__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (create_report__EntryPDPtr_3)), create_report__PDPtrs_5);
    }
#line 398 "create_report.m"
    return create_report__succeeded;
#line 398 "create_report.m"
  }
#line 395 "create_report.m"
}

#line 384 "create_report.m"
static MR_bool MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0_1(
#line 384 "create_report.m"
  MR_Box create_report__closure_arg)
#line 384 "create_report.m"
{
#line 384 "create_report.m"
  {
#line 384 "create_report.m"
    MR_bool create_report__succeeded;
#line 384 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;

#line 384 "create_report.m"
    {
#line 384 "create_report.m"
      return create_report__succeeded = profile__valid_proc_dynamic_ptr_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))));
    }
#line 384 "create_report.m"
    return create_report__succeeded;
#line 384 "create_report.m"
  }
#line 384 "create_report.m"
}

#line 379 "create_report.m"
static void MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0(
#line 379 "create_report.m"
  MR_Word create_report__Deep_5,
#line 379 "create_report.m"
  MR_Word create_report__PDPtr_6,
#line 379 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_PStoPDsMap_0_12,
#line 379 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_PStoPDsMap_13)
#line 379 "create_report.m"
{
#line 383 "create_report.m"
  {
#line 383 "create_report.m"
    MR_bool create_report__succeeded;
#line 383 "create_report.m"
    MR_Word create_report__PD_8;
#line 383 "create_report.m"
    MR_Word create_report__PSPtr_9;
#line 383 "create_report.m"
    MR_Word create_report__V_14_14;
#line 387 "create_report.m"
    MR_ArrayPtr create_report__V_20_20;
#line 387 "create_report.m"
    MR_Word create_report__V_21_21;
#line 391 "create_report.m"
    MR_Word create_report__PSPDs0_10;
#line 388 "create_report.m"
    MR_Box create_report__conv0_PSPDs0_10;

#line 384 "create_report.m"
    {
#line 384 "create_report.m"
      create_report__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 384 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 0) = ((MR_Box) (&create_report_scalar_common_7[1]));
#line 384 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 1) = ((MR_Box) (create_report__group_proc_dynamics_by_proc_static_4_p_0_1));
#line 384 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 384 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 3) = ((MR_Box) (create_report__Deep_5));
#line 384 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 4) = ((MR_Box) (create_report__PDPtr_6));
#line 384 "create_report.m"
    }
#line 384 "create_report.m"
    {
#line 384 "create_report.m"
      mercury__require__require_2_p_0(create_report__V_14_14, (MR_String) "group_proc_dynamics_by_proc_static: invalid PDPtr");
    }
#line 386 "create_report.m"
    {
#line 386 "create_report.m"
      profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_5, create_report__PDPtr_6, &create_report__PD_8);
    }
#line 387 "create_report.m"
    create_report__PSPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_8, (MR_Integer) 0)));
#line 387 "create_report.m"
    create_report__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_8, (MR_Integer) 1)));
#line 387 "create_report.m"
    create_report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_8, (MR_Integer) 2)));
#line 388 "create_report.m"
    {
#line 388 "create_report.m"
      create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[0], create_report__STATE_VARIABLE_PStoPDsMap_0_12, ((MR_Box) (create_report__PSPtr_9)), &create_report__conv0_PSPDs0_10);
    }
#line 388 "create_report.m"
    if (create_report__succeeded)
#line 388 "create_report.m"
      {
#line 388 "create_report.m"
        create_report__PSPDs0_10 = ((MR_Word) create_report__conv0_PSPDs0_10);
#line 388 "create_report.m"
        create_report__succeeded = MR_TRUE;
#line 388 "create_report.m"
      }
#line 391 "create_report.m"
    if (create_report__succeeded)
#line 389 "create_report.m"
      {
#line 389 "create_report.m"
        MR_Word create_report__PSPDs_11;

#line 389 "create_report.m"
        {
#line 389 "create_report.m"
          create_report__PSPDs_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__PSPDs_11, 0) = ((MR_Box) (create_report__PDPtr_6));
#line 389 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__PSPDs_11, 1) = ((MR_Box) (create_report__PSPDs0_10));
#line 389 "create_report.m"
        }
#line 390 "create_report.m"
        {
#line 390 "create_report.m"
          mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[0], ((MR_Box) (create_report__PSPtr_9)), ((MR_Box) (create_report__PSPDs_11)), create_report__STATE_VARIABLE_PStoPDsMap_0_12, create_report__STATE_VARIABLE_PStoPDsMap_13);
#line 390 "create_report.m"
          return;
        }
#line 389 "create_report.m"
      }
#line 391 "create_report.m"
    else
#line 392 "create_report.m"
      {
#line 392 "create_report.m"
        MR_Word create_report__V_17_17;

#line 392 "create_report.m"
        {
#line 392 "create_report.m"
          create_report__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_17_17, 0) = ((MR_Box) (create_report__PDPtr_6));
#line 392 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 392 "create_report.m"
        }
#line 392 "create_report.m"
        {
#line 392 "create_report.m"
          mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[0], ((MR_Box) (create_report__PSPtr_9)), ((MR_Box) (create_report__V_17_17)), create_report__STATE_VARIABLE_PStoPDsMap_0_12, create_report__STATE_VARIABLE_PStoPDsMap_13);
#line 392 "create_report.m"
          return;
        }
#line 392 "create_report.m"
      }
#line 383 "create_report.m"
  }
#line 379 "create_report.m"
}

#line 346 "create_report.m"
static MR_Word MR_CALL 
create_report__find_clique_ancestors_2_f_0(
#line 346 "create_report.m"
  MR_Word create_report__Deep_4,
#line 346 "create_report.m"
  MR_Word create_report__CliquePtr_5)
#line 346 "create_report.m"
{
#line 349 "create_report.m"
  {
#line 349 "create_report.m"
    MR_bool create_report__succeeded;
#line 349 "create_report.m"
    MR_Word create_report__Ancestors_6;
#line 349 "create_report.m"
    MR_Word create_report__EntryCSDPtr_7;

#line 350 "create_report.m"
    {
#line 350 "create_report.m"
      profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__EntryCSDPtr_7);
    }
#line 351 "create_report.m"
    {
#line 351 "create_report.m"
      create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__EntryCSDPtr_7);
    }
#line 375 "create_report.m"
    if (create_report__succeeded)
#line 352 "create_report.m"
      {
#line 352 "create_report.m"
        MR_Word create_report__EntryCSD_8;
#line 352 "create_report.m"
        MR_Word create_report__EntryPDPtr_9;
#line 353 "create_report.m"
        MR_Word create_report__V_22_22;
#line 353 "create_report.m"
        MR_Word create_report__V_23_23;
#line 354 "create_report.m"
        MR_Word create_report__V_59_59;
#line 354 "create_report.m"
        MR_Integer create_report__V_61_61;
#line 354 "create_report.m"
        MR_Integer create_report__V_62_62;
#line 354 "create_report.m"
        MR_Word create_report__V_24_24;
#line 354 "create_report.m"
        MR_String create_report__V_25_25;
#line 354 "create_report.m"
        MR_String create_report__V_26_26;
#line 354 "create_report.m"
        MR_String create_report__V_27_27;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_28_28;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_29_29;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_30_30;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_31_31;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_32_32;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_33_33;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_34_34;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_35_35;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_36_36;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_37_37;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_38_38;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_39_39;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_40_40;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_41_41;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_42_42;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_43_43;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_44_44;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_45_45;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_46_46;
#line 354 "create_report.m"
        MR_ArrayPtr create_report__V_47_47;
#line 354 "create_report.m"
        MR_Word create_report__V_48_48;
#line 354 "create_report.m"
        MR_Word create_report__V_49_49;
#line 354 "create_report.m"
        MR_Word create_report__V_50_50;
#line 354 "create_report.m"
        MR_Word create_report__V_51_51;

#line 352 "create_report.m"
        {
#line 352 "create_report.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__EntryCSDPtr_7, &create_report__EntryCSD_8);
        }
#line 353 "create_report.m"
        create_report__EntryPDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 0)));
#line 353 "create_report.m"
        create_report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 1)));
#line 353 "create_report.m"
        create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 2)));
#line 354 "create_report.m"
        create_report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
#line 354 "create_report.m"
        create_report__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
#line 354 "create_report.m"
        create_report__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
#line 354 "create_report.m"
        create_report__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
#line 354 "create_report.m"
        create_report__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
#line 354 "create_report.m"
        create_report__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
#line 354 "create_report.m"
        create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
#line 354 "create_report.m"
        create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
#line 354 "create_report.m"
        create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
#line 354 "create_report.m"
        create_report__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
#line 354 "create_report.m"
        create_report__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
#line 354 "create_report.m"
        create_report__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
#line 354 "create_report.m"
        create_report__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
#line 354 "create_report.m"
        create_report__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
#line 354 "create_report.m"
        create_report__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
#line 354 "create_report.m"
        create_report__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
#line 354 "create_report.m"
        create_report__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
#line 354 "create_report.m"
        create_report__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
#line 354 "create_report.m"
        create_report__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
#line 354 "create_report.m"
        create_report__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
#line 354 "create_report.m"
        create_report__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
#line 354 "create_report.m"
        create_report__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
#line 354 "create_report.m"
        create_report__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
#line 354 "create_report.m"
        create_report__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
#line 354 "create_report.m"
        create_report__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
#line 354 "create_report.m"
        create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
#line 354 "create_report.m"
        create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
#line 354 "create_report.m"
        create_report__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));
#line 354 "create_report.m"
        create_report__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));
#line 354 "create_report.m"
        create_report__V_61_61 = (MR_Integer) create_report__EntryPDPtr_9;
#line 354 "create_report.m"
        create_report__V_62_62 = (MR_Integer) create_report__V_59_59;
#line 354 "create_report.m"
        create_report__succeeded = (create_report__V_61_61 == create_report__V_62_62);
#line 358 "create_report.m"
        if (create_report__succeeded)
#line 357 "create_report.m"
          create_report__Ancestors_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 358 "create_report.m"
        else
#line 359 "create_report.m"
          {
#line 359 "create_report.m"
            MR_Word create_report__EntryCliquePtr_10;
#line 359 "create_report.m"
            MR_Word create_report__CalleePDPtr_11;
#line 359 "create_report.m"
            MR_Word create_report__CalleePD_12;
#line 359 "create_report.m"
            MR_Word create_report__CalleePSPtr_13;
#line 359 "create_report.m"
            MR_Word create_report__CalleeDesc_14;
#line 359 "create_report.m"
            MR_Word create_report__EntryCSSPtr_15;
#line 359 "create_report.m"
            MR_Word create_report__EntryCallSiteDesc_16;
#line 359 "create_report.m"
            MR_Word create_report__AncestorDesc_17;
#line 359 "create_report.m"
            MR_Word create_report__Own_18;
#line 359 "create_report.m"
            MR_Word create_report__Desc_19;
#line 359 "create_report.m"
            MR_Word create_report__Parent_20;
#line 359 "create_report.m"
            MR_Word create_report__MoreAncestors_21;
#line 359 "create_report.m"
            MR_Word create_report__V_68_68;
#line 360 "create_report.m"
            MR_Word create_report__V_52_52;
#line 360 "create_report.m"
            MR_Word create_report__V_53_53;
#line 362 "create_report.m"
            MR_ArrayPtr create_report__V_54_54;
#line 362 "create_report.m"
            MR_Word create_report__V_55_55;
#line 368 "create_report.m"
            MR_Word create_report__V_56_56;
#line 368 "create_report.m"
            MR_Word create_report__V_57_57;

#line 359 "create_report.m"
            {
#line 359 "create_report.m"
              profile__deep_lookup_clique_index_3_p_0(create_report__Deep_4, create_report__EntryPDPtr_9, &create_report__EntryCliquePtr_10);
            }
#line 360 "create_report.m"
            create_report__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 0)));
#line 360 "create_report.m"
            create_report__CalleePDPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 1)));
#line 360 "create_report.m"
            create_report__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 2)));
#line 361 "create_report.m"
            {
#line 361 "create_report.m"
              profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__CalleePDPtr_11, &create_report__CalleePD_12);
            }
#line 362 "create_report.m"
            create_report__CalleePSPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePD_12, (MR_Integer) 0)));
#line 362 "create_report.m"
            create_report__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__CalleePD_12, (MR_Integer) 1)));
#line 362 "create_report.m"
            create_report__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePD_12, (MR_Integer) 2)));
#line 363 "create_report.m"
            {
#line 363 "create_report.m"
              create_report__CalleeDesc_14 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__CalleePSPtr_13);
            }
#line 364 "create_report.m"
            {
#line 364 "create_report.m"
              profile__deep_lookup_call_site_static_map_3_p_0(create_report__Deep_4, create_report__EntryCSDPtr_7, &create_report__EntryCSSPtr_15);
            }
#line 365 "create_report.m"
            {
#line 365 "create_report.m"
              create_report__EntryCallSiteDesc_16 = create_report__describe_call_site_2_f_0(create_report__Deep_4, create_report__EntryCSSPtr_15);
            }
#line 366 "create_report.m"
            {
#line 366 "create_report.m"
              create_report__AncestorDesc_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 366 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__AncestorDesc_17, 0) = ((MR_Box) (create_report__EntryCliquePtr_10));
#line 366 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__AncestorDesc_17, 1) = ((MR_Box) (create_report__CliquePtr_5));
#line 366 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__AncestorDesc_17, 2) = ((MR_Box) (create_report__CalleeDesc_14));
#line 366 "create_report.m"
              MR_hl_field(MR_mktag(0), create_report__AncestorDesc_17, 3) = ((MR_Box) (create_report__EntryCallSiteDesc_16));
#line 366 "create_report.m"
            }
#line 368 "create_report.m"
            create_report__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 0)));
#line 368 "create_report.m"
            create_report__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 1)));
#line 368 "create_report.m"
            create_report__Own_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 2)));
#line 369 "create_report.m"
            {
#line 369 "create_report.m"
              profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_4, create_report__EntryCSDPtr_7, &create_report__Desc_19);
            }
#line 1525 "create_report.m"
            {
#line 1525 "create_report.m"
              create_report__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
              MR_hl_field(MR_mktag(1), create_report__V_68_68, 0) = ((MR_Box) (create_report__Desc_19));
#line 1525 "create_report.m"
            }
#line 1525 "create_report.m"
            {
#line 1525 "create_report.m"
              create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__AncestorDesc_17)), create_report__Own_18, create_report__V_68_68, &create_report__Parent_20);
            }
#line 372 "create_report.m"
            {
#line 372 "create_report.m"
              create_report__MoreAncestors_21 = create_report__find_clique_ancestors_2_f_0(create_report__Deep_4, create_report__EntryCliquePtr_10);
            }
#line 373 "create_report.m"
            {
#line 373 "create_report.m"
              create_report__Ancestors_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "create_report.m"
              MR_hl_field(MR_mktag(1), create_report__Ancestors_6, 0) = ((MR_Box) (create_report__Parent_20));
#line 373 "create_report.m"
              MR_hl_field(MR_mktag(1), create_report__Ancestors_6, 1) = ((MR_Box) (create_report__MoreAncestors_21));
#line 373 "create_report.m"
            }
#line 359 "create_report.m"
          }
#line 352 "create_report.m"
      }
#line 375 "create_report.m"
    else
#line 376 "create_report.m"
      create_report__Ancestors_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 349 "create_report.m"
    return create_report__Ancestors_6;
#line 349 "create_report.m"
  }
#line 346 "create_report.m"
}

#line 298 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_callee_4_p_0(
#line 298 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 298 "create_report.m"
  MR_Word create_report__RowData_6,
#line 298 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_13,
#line 298 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_14)
#line 298 "create_report.m"
{
#line 301 "create_report.m"
  {
#line 301 "create_report.m"
    MR_bool create_report__succeeded;
#line 301 "create_report.m"
    MR_Word create_report__MaybeTotalPerf_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 8)));
#line 302 "create_report.m"
    MR_Word create_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 0)));
#line 302 "create_report.m"
    MR_Integer create_report__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 1)));
#line 302 "create_report.m"
    MR_Integer create_report__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 2)));
#line 302 "create_report.m"
    MR_Integer create_report__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 3)));
#line 302 "create_report.m"
    MR_Integer create_report__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 4)));
#line 302 "create_report.m"
    MR_Integer create_report__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 5)));
#line 302 "create_report.m"
    MR_Integer create_report__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 6)));
#line 302 "create_report.m"
    MR_Word create_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 7)));

#line 306 "create_report.m"
    if ((create_report__MaybeTotalPerf_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 304 "create_report.m"
      {
#line 305 "create_report.m"
        {
#line 305 "create_report.m"
          mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.find_start_of_action_callee\'/4", (MR_String) "no total perf");
#line 305 "create_report.m"
          return;
        }
#line 304 "create_report.m"
      }
#line 306 "create_report.m"
    else
#line 307 "create_report.m"
      {
#line 307 "create_report.m"
        MR_Word create_report__TotalPerf_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__MaybeTotalPerf_8, (MR_Integer) 0)));
#line 307 "create_report.m"
        MR_Word create_report__CallSeqsPercent_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 5)));
#line 308 "create_report.m"
        MR_Integer create_report__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 0)));
#line 308 "create_report.m"
        MR_Word create_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 1)));
#line 308 "create_report.m"
        MR_Word create_report__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 2)));
#line 308 "create_report.m"
        MR_Word create_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 3)));
#line 308 "create_report.m"
        MR_Integer create_report__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 4)));
#line 308 "create_report.m"
        MR_Float create_report__V_32_32 = MR_unbox_float((MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 6)));
#line 308 "create_report.m"
        MR_Integer create_report__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 7)));
#line 308 "create_report.m"
        MR_Word create_report__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 8)));
#line 308 "create_report.m"
        MR_Float create_report__V_35_35 = MR_unbox_float((MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 9)));
#line 308 "create_report.m"
        MR_Word create_report__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 10)));
#line 308 "create_report.m"
        MR_Word create_report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 11)));
#line 308 "create_report.m"
        MR_Word create_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 12)));

#line 309 "create_report.m"
        {
#line 309 "create_report.m"
          create_report__succeeded = measurement_units__percent_at_or_above_threshold_2_p_0(create_report__Percent_5, create_report__CallSeqsPercent_10);
        }
#line 313 "create_report.m"
        if (create_report__succeeded)
#line 310 "create_report.m"
          {
#line 310 "create_report.m"
            MR_Word create_report__CliqueDesc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 0)));
#line 310 "create_report.m"
            MR_Word create_report__CliquePtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueDesc_11, (MR_Integer) 0)));
#line 310 "create_report.m"
            MR_Integer create_report__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 1)));
#line 310 "create_report.m"
            MR_Integer create_report__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 2)));
#line 310 "create_report.m"
            MR_Integer create_report__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 3)));
#line 310 "create_report.m"
            MR_Integer create_report__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 4)));
#line 310 "create_report.m"
            MR_Integer create_report__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 5)));
#line 310 "create_report.m"
            MR_Integer create_report__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 6)));
#line 310 "create_report.m"
            MR_Word create_report__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 7)));
#line 310 "create_report.m"
            MR_Word create_report__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 8)));
#line 311 "create_report.m"
            MR_Word create_report__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueDesc_11, (MR_Integer) 1)));
#line 311 "create_report.m"
            MR_Word create_report__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueDesc_11, (MR_Integer) 2)));

#line 312 "create_report.m"
            {
#line 312 "create_report.m"
              MR_Word base;
#line 312 "create_report.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "create_report.m"
              *create_report__STATE_VARIABLE_ActionCliquePtrs_14 = base;
#line 312 "create_report.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__CliquePtr_12));
#line 312 "create_report.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_0_13));
#line 312 "create_report.m"
            }
#line 310 "create_report.m"
          }
#line 313 "create_report.m"
        else
#line 313 "create_report.m"
          *create_report__STATE_VARIABLE_ActionCliquePtrs_14 = create_report__STATE_VARIABLE_ActionCliquePtrs_0_13;
#line 307 "create_report.m"
      }
#line 301 "create_report.m"
  }
#line 298 "create_report.m"
}

#line 295 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0_1(
#line 295 "create_report.m"
  MR_Box create_report__closure_arg,
#line 295 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 295 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 295 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 295 "create_report.m"
{
#line 295 "create_report.m"
  {
#line 295 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 295 "create_report.m"
    MR_Word create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_14;

#line 295 "create_report.m"
    {
#line 295 "create_report.m"
      create_report__find_start_of_action_callee_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_14);
    }
#line 295 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_14));
#line 295 "create_report.m"
  }
#line 295 "create_report.m"
}

#line 290 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0(
#line 290 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 290 "create_report.m"
  MR_Word create_report__CallSiteReport_6,
#line 290 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_11,
#line 290 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_12)
#line 290 "create_report.m"
{
#line 293 "create_report.m"
  {
#line 293 "create_report.m"
    MR_bool create_report__succeeded;
#line 293 "create_report.m"
    MR_Word create_report__CalleeRowDatas_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteReport_6, (MR_Integer) 2)));
#line 293 "create_report.m"
    MR_Word create_report__V_13_13;
#line 294 "create_report.m"
    MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteReport_6, (MR_Integer) 0)));
#line 294 "create_report.m"
    MR_Word create_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteReport_6, (MR_Integer) 1)));
#line 295 "create_report.m"
    MR_Box create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_12;

#line 295 "create_report.m"
    {
#line 295 "create_report.m"
      create_report__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 295 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_13_13, 0) = ((MR_Box) (&create_report_scalar_common_6[7]));
#line 295 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_13_13, 1) = ((MR_Box) (create_report__find_start_of_action_call_site_4_p_0_1));
#line 295 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 295 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_13_13, 3) = ((MR_Box) (create_report__Percent_5));
#line 295 "create_report.m"
    }
#line 295 "create_report.m"
    {
#line 295 "create_report.m"
      mercury__list__foldl_4_p_0((MR_Word) &create_report_scalar_common_1[5], (MR_Word) &create_report_scalar_common_1[4], create_report__V_13_13, create_report__CalleeRowDatas_10, ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_0_11)), &create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_12);
    }
#line 295 "create_report.m"
    *create_report__STATE_VARIABLE_ActionCliquePtrs_12 = ((MR_Word) create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_12);
#line 293 "create_report.m"
  }
#line 290 "create_report.m"
}

#line 287 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0_1(
#line 287 "create_report.m"
  MR_Box create_report__closure_arg,
#line 287 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 287 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 287 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 287 "create_report.m"
{
#line 287 "create_report.m"
  {
#line 287 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 287 "create_report.m"
    MR_Word create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12;

#line 287 "create_report.m"
    {
#line 287 "create_report.m"
      create_report__find_start_of_action_call_site_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12);
    }
#line 287 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12));
#line 287 "create_report.m"
  }
#line 287 "create_report.m"
}

#line 280 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0(
#line 280 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 280 "create_report.m"
  MR_Word create_report__CliquePDReport_6,
#line 280 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_10,
#line 280 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_11)
#line 280 "create_report.m"
{
#line 285 "create_report.m"
  {
#line 285 "create_report.m"
    MR_bool create_report__succeeded;
#line 285 "create_report.m"
    MR_Word create_report__CallSites_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliquePDReport_6, (MR_Integer) 1)));
#line 285 "create_report.m"
    MR_Word create_report__V_12_12;
#line 286 "create_report.m"
    MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliquePDReport_6, (MR_Integer) 0)));
#line 287 "create_report.m"
    MR_Box create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_11;

#line 287 "create_report.m"
    {
#line 287 "create_report.m"
      create_report__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 287 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 0) = ((MR_Box) (&create_report_scalar_common_6[5]));
#line 287 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 1) = ((MR_Box) (create_report__find_start_of_action_clique_proc_dynamic_4_p_0_1));
#line 287 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 287 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_12_12, 3) = ((MR_Box) (create_report__Percent_5));
#line 287 "create_report.m"
    }
#line 287 "create_report.m"
    {
#line 287 "create_report.m"
      mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_clique_call_site_report_0, (MR_Word) &create_report_scalar_common_1[4], create_report__V_12_12, create_report__CallSites_9, ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_0_10)), &create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_11);
    }
#line 287 "create_report.m"
    *create_report__STATE_VARIABLE_ActionCliquePtrs_11 = ((MR_Word) create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_11);
#line 285 "create_report.m"
  }
#line 280 "create_report.m"
}

#line 277 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_2(
#line 277 "create_report.m"
  MR_Box create_report__closure_arg,
#line 277 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 277 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 277 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 277 "create_report.m"
{
#line 277 "create_report.m"
  {
#line 277 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 277 "create_report.m"
    MR_Word create_report__conv2_STATE_VARIABLE_ActionCliquePtrs_11;

#line 277 "create_report.m"
    {
#line 277 "create_report.m"
      create_report__find_start_of_action_clique_proc_dynamic_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv2_STATE_VARIABLE_ActionCliquePtrs_11);
    }
#line 277 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv2_STATE_VARIABLE_ActionCliquePtrs_11));
#line 277 "create_report.m"
  }
#line 277 "create_report.m"
}

#line 287 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_1(
#line 287 "create_report.m"
  MR_Box create_report__closure_arg,
#line 287 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 287 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 287 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 287 "create_report.m"
{
#line 287 "create_report.m"
  {
#line 287 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 287 "create_report.m"
    MR_Word create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12;

#line 287 "create_report.m"
    {
#line 287 "create_report.m"
      create_report__find_start_of_action_call_site_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12);
    }
#line 287 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12));
#line 287 "create_report.m"
  }
#line 287 "create_report.m"
}

#line 269 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0(
#line 269 "create_report.m"
  MR_Integer create_report__Percent_5,
#line 269 "create_report.m"
  MR_Word create_report__CliqueProcReport_6,
#line 269 "create_report.m"
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_11,
#line 269 "create_report.m"
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_12)
#line 269 "create_report.m"
{
#line 273 "create_report.m"
  {
#line 273 "create_report.m"
    MR_bool create_report__succeeded;
#line 273 "create_report.m"
    MR_Word create_report__FirstPDReport_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueProcReport_6, (MR_Integer) 1)));
#line 273 "create_report.m"
    MR_Word create_report__LaterPDReports_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueProcReport_6, (MR_Integer) 2)));
#line 273 "create_report.m"
    MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_13_13;
#line 273 "create_report.m"
    MR_Word create_report__V_14_14;
#line 273 "create_report.m"
    MR_Word create_report__CallSites_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__FirstPDReport_9, (MR_Integer) 1)));
#line 273 "create_report.m"
    MR_Word create_report__V_28_28;
#line 274 "create_report.m"
    MR_Word create_report__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueProcReport_6, (MR_Integer) 0)));
#line 286 "create_report.m"
    MR_Word create_report__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__FirstPDReport_9, (MR_Integer) 0)));
#line 287 "create_report.m"
    MR_Box create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_13_13;
#line 277 "create_report.m"
    MR_Box create_report__conv3_STATE_VARIABLE_ActionCliquePtrs_12;

#line 287 "create_report.m"
    {
#line 287 "create_report.m"
      create_report__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 287 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_28_28, 0) = ((MR_Box) (&create_report_scalar_common_6[5]));
#line 287 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_28_28, 1) = ((MR_Box) (create_report__find_start_of_action_clique_proc_4_p_0_1));
#line 287 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 287 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_28_28, 3) = ((MR_Box) (create_report__Percent_5));
#line 287 "create_report.m"
    }
#line 287 "create_report.m"
    {
#line 287 "create_report.m"
      mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_clique_call_site_report_0, (MR_Word) &create_report_scalar_common_1[4], create_report__V_28_28, create_report__CallSites_27, ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_0_11)), &create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_13_13);
    }
#line 287 "create_report.m"
    create_report__STATE_VARIABLE_ActionCliquePtrs_13_13 = ((MR_Word) create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_13_13);
#line 277 "create_report.m"
    {
#line 277 "create_report.m"
      create_report__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 277 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 0) = ((MR_Box) (&create_report_scalar_common_6[6]));
#line 277 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 1) = ((MR_Box) (create_report__find_start_of_action_clique_proc_4_p_0_2));
#line 277 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 277 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_14_14, 3) = ((MR_Box) (create_report__Percent_5));
#line 277 "create_report.m"
    }
#line 277 "create_report.m"
    {
#line 277 "create_report.m"
      mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_clique_proc_dynamic_report_0, (MR_Word) &create_report_scalar_common_1[4], create_report__V_14_14, create_report__LaterPDReports_10, ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_13_13)), &create_report__conv3_STATE_VARIABLE_ActionCliquePtrs_12);
    }
#line 277 "create_report.m"
    *create_report__STATE_VARIABLE_ActionCliquePtrs_12 = ((MR_Word) create_report__conv3_STATE_VARIABLE_ActionCliquePtrs_12);
#line 273 "create_report.m"
  }
#line 269 "create_report.m"
}

#line 257 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_4_p_0_1(
#line 257 "create_report.m"
  MR_Box create_report__closure_arg,
#line 257 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 257 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 257 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 257 "create_report.m"
{
#line 257 "create_report.m"
  {
#line 257 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 257 "create_report.m"
    MR_Word create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12;

#line 257 "create_report.m"
    {
#line 257 "create_report.m"
      create_report__find_start_of_action_clique_proc_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12);
    }
#line 257 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12));
#line 257 "create_report.m"
  }
#line 257 "create_report.m"
}

#line 252 "create_report.m"
static void MR_CALL 
create_report__find_start_of_action_4_p_0(
#line 252 "create_report.m"
  MR_Word create_report__Deep_5,
#line 252 "create_report.m"
  MR_Integer create_report__Percent_6,
#line 252 "create_report.m"
  MR_Word create_report__CurrentReport_7,
#line 252 "create_report.m"
  MR_Word * create_report__SelectedReport_8)
#line 252 "create_report.m"
{
#line 255 "create_report.m"
  while (MR_TRUE)
#line 255 "create_report.m"
    {
#line 255 "create_report.m"
      /* tailcall optimized into a loop */
#line 255 "create_report.m"
      {
#line 255 "create_report.m"
        MR_bool create_report__succeeded;
#line 255 "create_report.m"
        MR_Word create_report__CliqueProcs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CurrentReport_7, (MR_Integer) 2)));
#line 255 "create_report.m"
        MR_Word create_report__ActionCliquePtrs_12;
#line 255 "create_report.m"
        MR_Word create_report__V_16_16;
#line 256 "create_report.m"
        MR_Word create_report__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CurrentReport_7, (MR_Integer) 0)));
#line 256 "create_report.m"
        MR_Word create_report__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CurrentReport_7, (MR_Integer) 1)));
#line 257 "create_report.m"
        MR_Box create_report__conv1_ActionCliquePtrs_12;
#line 265 "create_report.m"
        MR_Word create_report__ActionCliqueReport_15;
#line 260 "create_report.m"
        MR_Word create_report__ActionCliquePtr_13;
#line 260 "create_report.m"
        MR_Word create_report__MaybeActionCliqueReport_14;
#line 260 "create_report.m"
        MR_Word create_report__V_18_18;

#line 257 "create_report.m"
        {
#line 257 "create_report.m"
          create_report__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 257 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 0) = ((MR_Box) (&create_report_scalar_common_6[4]));
#line 257 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 1) = ((MR_Box) (create_report__find_start_of_action_4_p_0_1));
#line 257 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 257 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_16_16, 3) = ((MR_Box) (create_report__Percent_6));
#line 257 "create_report.m"
        }
#line 257 "create_report.m"
        {
#line 257 "create_report.m"
          mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_clique_proc_report_0, (MR_Word) &create_report_scalar_common_1[4], create_report__V_16_16, create_report__CliqueProcs_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &create_report__conv1_ActionCliquePtrs_12);
        }
#line 257 "create_report.m"
        create_report__ActionCliquePtrs_12 = ((MR_Word) create_report__conv1_ActionCliquePtrs_12);
#line 260 "create_report.m"
        create_report__succeeded = ((MR_tag((MR_Word) create_report__ActionCliquePtrs_12)) == (MR_mktag((MR_Integer) 1)));
#line 260 "create_report.m"
        if (create_report__succeeded)
#line 260 "create_report.m"
          {
#line 260 "create_report.m"
            create_report__ActionCliquePtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__ActionCliquePtrs_12, (MR_Integer) 0)));
#line 260 "create_report.m"
            create_report__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__ActionCliquePtrs_12, (MR_Integer) 1)));
#line 260 "create_report.m"
            create_report__succeeded = (create_report__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 260 "create_report.m"
            if (create_report__succeeded)
#line 260 "create_report.m"
              {
#line 261 "create_report.m"
                {
#line 261 "create_report.m"
                  create_report__create_clique_report_3_p_0(create_report__Deep_5, create_report__ActionCliquePtr_13, &create_report__MaybeActionCliqueReport_14);
                }
#line 262 "create_report.m"
                create_report__succeeded = ((MR_tag((MR_Word) create_report__MaybeActionCliqueReport_14)) == (MR_mktag((MR_Integer) 0)));
#line 262 "create_report.m"
                if (create_report__succeeded)
#line 262 "create_report.m"
                  create_report__ActionCliqueReport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeActionCliqueReport_14, (MR_Integer) 0)));
#line 260 "create_report.m"
              }
#line 260 "create_report.m"
          }
#line 265 "create_report.m"
        if (create_report__succeeded)
#line 264 "create_report.m"
          {
#line 264 "create_report.m"
            /* direct tailcall eliminated */
#line 264 "create_report.m"
            {
#line 264 "create_report.m"
              MR_Word create_report__CurrentReport__tmp_copy_7 = create_report__ActionCliqueReport_15;

#line 264 "create_report.m"
              create_report__CurrentReport_7 = create_report__CurrentReport__tmp_copy_7;
#line 264 "create_report.m"
            }
#line 264 "create_report.m"
            continue;
#line 264 "create_report.m"
          }
#line 265 "create_report.m"
        else
#line 266 "create_report.m"
          *create_report__SelectedReport_8 = create_report__CurrentReport_7;
#line 255 "create_report.m"
      }
#line 255 "create_report.m"
      break;
#line 255 "create_report.m"
    }
#line 252 "create_report.m"
}

#line 231 "create_report.m"
static void MR_CALL 
create_report__create_root_report_3_p_0(
#line 231 "create_report.m"
  MR_Word create_report__Deep_4,
#line 231 "create_report.m"
  MR_Word create_report__MaybePercent_5,
#line 231 "create_report.m"
  MR_Word * create_report__MaybeReport_6)
#line 231 "create_report.m"
{
#line 234 "create_report.m"
  {
#line 234 "create_report.m"
    MR_bool create_report__succeeded;
#line 234 "create_report.m"
    MR_Word create_report__RootCliquePtr_7;
#line 234 "create_report.m"
    MR_Word create_report__MaybeRootCliqueReport_8;
#line 234 "create_report.m"
    MR_Word create_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
#line 235 "create_report.m"
    MR_Word create_report__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
#line 235 "create_report.m"
    MR_String create_report__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
#line 235 "create_report.m"
    MR_String create_report__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
#line 235 "create_report.m"
    MR_String create_report__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
#line 235 "create_report.m"
    MR_ArrayPtr create_report__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
#line 235 "create_report.m"
    MR_Word create_report__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
#line 235 "create_report.m"
    MR_Word create_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
#line 235 "create_report.m"
    MR_Word create_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));
#line 235 "create_report.m"
    MR_Word create_report__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));

#line 235 "create_report.m"
    {
#line 235 "create_report.m"
      profile__deep_lookup_clique_index_3_p_0(create_report__Deep_4, create_report__V_13_13, &create_report__RootCliquePtr_7);
    }
#line 236 "create_report.m"
    {
#line 236 "create_report.m"
      create_report__create_clique_report_3_p_0(create_report__Deep_4, create_report__RootCliquePtr_7, &create_report__MaybeRootCliqueReport_8);
    }
#line 240 "create_report.m"
    if (((MR_tag((MR_Word) create_report__MaybeRootCliqueReport_8)) == (MR_mktag((MR_Integer) 1))))
#line 239 "create_report.m"
      *create_report__MaybeReport_6 = create_report__MaybeRootCliqueReport_8;
#line 240 "create_report.m"
    else
#line 241 "create_report.m"
      {
#line 241 "create_report.m"
        MR_Word create_report__RootCliqueReport_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeRootCliqueReport_8, (MR_Integer) 0)));

#line 245 "create_report.m"
        if ((create_report__MaybePercent_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 244 "create_report.m"
          *create_report__MaybeReport_6 = create_report__MaybeRootCliqueReport_8;
#line 245 "create_report.m"
        else
#line 246 "create_report.m"
          {
#line 246 "create_report.m"
            MR_Integer create_report__Percent_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), create_report__MaybePercent_5, (MR_Integer) 0)));
#line 246 "create_report.m"
            MR_Word create_report__Report_12;

#line 247 "create_report.m"
            {
#line 247 "create_report.m"
              create_report__find_start_of_action_4_p_0(create_report__Deep_4, create_report__Percent_11, create_report__RootCliqueReport_10, &create_report__Report_12);
            }
#line 248 "create_report.m"
            {
#line 248 "create_report.m"
              MR_Word base;
#line 248 "create_report.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 248 "create_report.m"
              *create_report__MaybeReport_6 = base;
#line 248 "create_report.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__Report_12));
#line 248 "create_report.m"
            }
#line 246 "create_report.m"
          }
#line 241 "create_report.m"
      }
#line 234 "create_report.m"
  }
#line 231 "create_report.m"
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
#line 1524 "create_report.m"
  {
#line 1524 "create_report.m"
    MR_bool create_report__succeeded;
#line 1524 "create_report.m"
    MR_Word create_report__V_11_11;

#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
      MR_hl_field(MR_mktag(1), create_report__V_11_11, 0) = ((MR_Box) (create_report__Desc_9));
#line 1525 "create_report.m"
    }
#line 1525 "create_report.m"
    {
#line 1525 "create_report.m"
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_6, create_report__Subject_7, create_report__Own_8, create_report__V_11_11, create_report__RowData_10);
#line 1525 "create_report.m"
      return;
    }
#line 1524 "create_report.m"
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
#line 1646 "create_report.m"
  {
#line 1646 "create_report.m"
    MR_bool create_report__succeeded;
#line 1646 "create_report.m"
    MR_Word create_report__ProcDesc_6;
#line 1646 "create_report.m"
    MR_String create_report__FileName_8;
#line 1646 "create_report.m"
    MR_Integer create_report__LineNumber_9;
#line 1646 "create_report.m"
    MR_String create_report__ModuleName_10;
#line 1646 "create_report.m"
    MR_String create_report__UnQualRefinedName_11;
#line 1646 "create_report.m"
    MR_String create_report__QualRefinedName_12;

#line 1647 "create_report.m"
    {
#line 1647 "create_report.m"
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_4, create_report__PSPtr_5);
    }
#line 1654 "create_report.m"
    if (create_report__succeeded)
#line 1648 "create_report.m"
      {
#line 1648 "create_report.m"
        MR_Word create_report__PS_7;
#line 1649 "create_report.m"
        MR_Word create_report__V_13_13;
#line 1649 "create_report.m"
        MR_String create_report__V_17_17;
#line 1649 "create_report.m"
        MR_Word create_report__V_19_19;
#line 1649 "create_report.m"
        MR_ArrayPtr create_report__V_20_20;
#line 1649 "create_report.m"
        MR_ArrayPtr create_report__V_21_21;
#line 1649 "create_report.m"
        MR_Word create_report__V_22_22;
#line 1649 "create_report.m"
        MR_Word create_report__V_23_23;

#line 1648 "create_report.m"
        {
#line 1648 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__PS_7);
        }
#line 1649 "create_report.m"
        create_report__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 0)));
#line 1649 "create_report.m"
        create_report__ModuleName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 1)));
#line 1649 "create_report.m"
        create_report__UnQualRefinedName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 2)));
#line 1649 "create_report.m"
        create_report__QualRefinedName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 3)));
#line 1649 "create_report.m"
        create_report__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 4)));
#line 1649 "create_report.m"
        create_report__FileName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 5)));
#line 1649 "create_report.m"
        create_report__LineNumber_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 6)));
#line 1649 "create_report.m"
        create_report__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 7)));
#line 1649 "create_report.m"
        create_report__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 8)));
#line 1649 "create_report.m"
        create_report__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 9)));
#line 1649 "create_report.m"
        create_report__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 10)));
#line 1649 "create_report.m"
        create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 11)));
#line 1648 "create_report.m"
      }
#line 1654 "create_report.m"
    else
#line 1655 "create_report.m"
      {
#line 1655 "create_report.m"
        create_report__FileName_8 = (MR_String) "";
#line 1656 "create_report.m"
        create_report__LineNumber_9 = (MR_Integer) 0;
#line 1657 "create_report.m"
        create_report__ModuleName_10 = (MR_String) "";
#line 1658 "create_report.m"
        create_report__UnQualRefinedName_11 = (MR_String) "mercury_runtime";
#line 1659 "create_report.m"
        create_report__QualRefinedName_12 = (MR_String) "mercury_runtime";
#line 1655 "create_report.m"
      }
#line 1661 "create_report.m"
    {
#line 1661 "create_report.m"
      create_report__ProcDesc_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1661 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 0) = ((MR_Box) (create_report__PSPtr_5));
#line 1661 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 1) = ((MR_Box) (create_report__FileName_8));
#line 1661 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 2) = ((MR_Box) (create_report__LineNumber_9));
#line 1661 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 3) = ((MR_Box) (create_report__ModuleName_10));
#line 1661 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 4) = ((MR_Box) (create_report__UnQualRefinedName_11));
#line 1661 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 5) = ((MR_Box) (create_report__QualRefinedName_12));
#line 1661 "create_report.m"
    }
#line 1646 "create_report.m"
    return create_report__ProcDesc_6;
#line 1646 "create_report.m"
  }
#line 71 "create_report.m"
}

#line 340 "create_report.m"
static void MR_CALL 
create_report__create_clique_report_3_p_0_3(
#line 340 "create_report.m"
  MR_Box create_report__closure_arg,
#line 340 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 340 "create_report.m"
  MR_Box * create_report__wrapper_arg_2)
#line 340 "create_report.m"
{
#line 340 "create_report.m"
  {
#line 340 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 340 "create_report.m"
    MR_Word create_report__conv2_CliqueProcReport_9;

#line 340 "create_report.m"
    {
#line 340 "create_report.m"
      create_report__create_clique_proc_report_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv2_CliqueProcReport_9);
    }
#line 340 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_CliqueProcReport_9));
#line 340 "create_report.m"
  }
#line 340 "create_report.m"
}

#line 334 "create_report.m"
static MR_bool MR_CALL 
create_report__create_clique_report_3_p_0_2(
#line 334 "create_report.m"
  MR_Box create_report__closure_arg,
#line 334 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 334 "create_report.m"
{
#line 334 "create_report.m"
  {
#line 334 "create_report.m"
    MR_bool create_report__succeeded;
#line 334 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;

#line 334 "create_report.m"
    {
#line 334 "create_report.m"
      return create_report__succeeded = create_report__proc_group_contains_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 334 "create_report.m"
    return create_report__succeeded;
#line 334 "create_report.m"
  }
#line 334 "create_report.m"
}

#line 327 "create_report.m"
static void MR_CALL 
create_report__create_clique_report_3_p_0_1(
#line 327 "create_report.m"
  MR_Box create_report__closure_arg,
#line 327 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 327 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 327 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 327 "create_report.m"
{
#line 327 "create_report.m"
  {
#line 327 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 327 "create_report.m"
    MR_Word create_report__conv0_STATE_VARIABLE_PStoPDsMap_13;

#line 327 "create_report.m"
    {
#line 327 "create_report.m"
      create_report__group_proc_dynamics_by_proc_static_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_PStoPDsMap_13);
    }
#line 327 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_PStoPDsMap_13));
#line 327 "create_report.m"
  }
#line 327 "create_report.m"
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
#line 323 "create_report.m"
  {
#line 323 "create_report.m"
    MR_bool create_report__succeeded;
#line 323 "create_report.m"
    MR_Word create_report__TypeCtorInfo_28_28;
#line 323 "create_report.m"
    MR_Word create_report__TypeInfo_29_29;
#line 323 "create_report.m"
    MR_Word create_report__AncestorRowDatas_7;
#line 323 "create_report.m"
    MR_Word create_report__PDPtrs_8;
#line 323 "create_report.m"
    MR_Word create_report__PStoPDsMap_9;
#line 323 "create_report.m"
    MR_Word create_report__PStoPDsList0_10;
#line 323 "create_report.m"
    MR_Word create_report__EntryCSDPtr_11;
#line 323 "create_report.m"
    MR_Word create_report__PStoPDsList_16;
#line 323 "create_report.m"
    MR_Word create_report__CliqueProcs_17;
#line 323 "create_report.m"
    MR_Word create_report__CliqueReport_18;
#line 323 "create_report.m"
    MR_Word create_report__V_19_19;
#line 323 "create_report.m"
    MR_Word create_report__V_20_20;
#line 323 "create_report.m"
    MR_Word create_report__V_22_22;
#line 327 "create_report.m"
    MR_Box create_report__conv1_PStoPDsMap_9;

#line 324 "create_report.m"
    {
#line 324 "create_report.m"
      create_report__AncestorRowDatas_7 = create_report__find_clique_ancestors_2_f_0(create_report__Deep_4, create_report__CliquePtr_5);
    }
#line 326 "create_report.m"
    {
#line 326 "create_report.m"
      profile__deep_lookup_clique_members_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__PDPtrs_8);
    }
#line 327 "create_report.m"
    {
#line 327 "create_report.m"
      create_report__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 327 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_19_19, 0) = ((MR_Box) (&create_report_scalar_common_6[2]));
#line 327 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_19_19, 1) = ((MR_Box) (create_report__create_clique_report_3_p_0_1));
#line 327 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 327 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_19_19, 3) = ((MR_Box) (create_report__Deep_4));
#line 327 "create_report.m"
    }
#line 14250 "create_report.c"
    create_report__TypeCtorInfo_28_28 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
#line 14252 "create_report.c"
    create_report__TypeInfo_29_29 = (MR_Word) &create_report_scalar_common_1[0];
#line 328 "create_report.m"
    {
#line 328 "create_report.m"
      create_report__V_20_20 = mercury__map__init_0_f_0(create_report__TypeCtorInfo_28_28, create_report__TypeInfo_29_29);
    }
#line 327 "create_report.m"
    {
#line 327 "create_report.m"
      mercury__list__foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &create_report_scalar_common_2[4], create_report__V_19_19, create_report__PDPtrs_8, ((MR_Box) (create_report__V_20_20)), &create_report__conv1_PStoPDsMap_9);
    }
#line 327 "create_report.m"
    create_report__PStoPDsMap_9 = ((MR_Word) create_report__conv1_PStoPDsMap_9);
#line 329 "create_report.m"
    {
#line 329 "create_report.m"
      mercury__map__to_assoc_list_2_p_0(create_report__TypeCtorInfo_28_28, create_report__TypeInfo_29_29, create_report__PStoPDsMap_9, &create_report__PStoPDsList0_10);
    }
#line 330 "create_report.m"
    {
#line 330 "create_report.m"
      profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__EntryCSDPtr_11);
    }
#line 331 "create_report.m"
    {
#line 331 "create_report.m"
      create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__EntryCSDPtr_11);
    }
#line 337 "create_report.m"
    if (create_report__succeeded)
#line 332 "create_report.m"
      {
#line 332 "create_report.m"
        MR_Word create_report__TypeInfo_33_33;
#line 332 "create_report.m"
        MR_Word create_report__EntryCSD_12;
#line 332 "create_report.m"
        MR_Word create_report__EntryPDPtr_13;
#line 332 "create_report.m"
        MR_Word create_report__EntryGroup_14;
#line 332 "create_report.m"
        MR_Word create_report__RestGroup_15;
#line 332 "create_report.m"
        MR_Word create_report__V_21_21;
#line 333 "create_report.m"
        MR_Word create_report__V_23_23;
#line 333 "create_report.m"
        MR_Word create_report__V_24_24;

#line 332 "create_report.m"
        {
#line 332 "create_report.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__EntryCSDPtr_11, &create_report__EntryCSD_12);
        }
#line 333 "create_report.m"
        create_report__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_12, (MR_Integer) 0)));
#line 333 "create_report.m"
        create_report__EntryPDPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_12, (MR_Integer) 1)));
#line 333 "create_report.m"
        create_report__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_12, (MR_Integer) 2)));
#line 334 "create_report.m"
        {
#line 334 "create_report.m"
          create_report__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 334 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 0) = ((MR_Box) (&create_report_scalar_common_7[0]));
#line 334 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 1) = ((MR_Box) (create_report__create_clique_report_3_p_0_2));
#line 334 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 334 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 3) = ((MR_Box) (create_report__EntryPDPtr_13));
#line 334 "create_report.m"
        }
#line 14327 "create_report.c"
        create_report__TypeInfo_33_33 = (MR_Word) &create_report_scalar_common_2[5];
#line 334 "create_report.m"
        {
#line 334 "create_report.m"
          mercury__list__filter_4_p_0(create_report__TypeInfo_33_33, create_report__V_21_21, create_report__PStoPDsList0_10, &create_report__EntryGroup_14, &create_report__RestGroup_15);
        }
#line 336 "create_report.m"
        {
#line 336 "create_report.m"
          create_report__PStoPDsList_16 = mercury__list__f_43_43_2_f_0(create_report__TypeInfo_33_33, create_report__EntryGroup_14, create_report__RestGroup_15);
        }
#line 332 "create_report.m"
      }
#line 337 "create_report.m"
    else
#line 338 "create_report.m"
      create_report__PStoPDsList_16 = create_report__PStoPDsList0_10;
#line 340 "create_report.m"
    {
#line 340 "create_report.m"
      create_report__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 340 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_22_22, 0) = ((MR_Box) (&create_report_scalar_common_6[3]));
#line 340 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_22_22, 1) = ((MR_Box) (create_report__create_clique_report_3_p_0_3));
#line 340 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 340 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_22_22, 3) = ((MR_Box) (create_report__Deep_4));
#line 340 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__V_22_22, 4) = ((MR_Box) (create_report__CliquePtr_5));
#line 340 "create_report.m"
    }
#line 340 "create_report.m"
    {
#line 340 "create_report.m"
      mercury__list__map_3_p_0((MR_Word) &create_report_scalar_common_2[5], (MR_Word) &report__report__type_ctor_info_clique_proc_report_0, create_report__V_22_22, create_report__PStoPDsList_16, &create_report__CliqueProcs_17);
    }
#line 343 "create_report.m"
    {
#line 343 "create_report.m"
      create_report__CliqueReport_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 343 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CliqueReport_18, 0) = ((MR_Box) (create_report__CliquePtr_5));
#line 343 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CliqueReport_18, 1) = ((MR_Box) (create_report__AncestorRowDatas_7));
#line 343 "create_report.m"
      MR_hl_field(MR_mktag(0), create_report__CliqueReport_18, 2) = ((MR_Box) (create_report__CliqueProcs_17));
#line 343 "create_report.m"
    }
#line 344 "create_report.m"
    {
#line 344 "create_report.m"
      MR_Word base;
#line 344 "create_report.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 344 "create_report.m"
      *create_report__MaybeCliqueReport_6 = base;
#line 344 "create_report.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__CliqueReport_18));
#line 344 "create_report.m"
    }
#line 323 "create_report.m"
  }
#line 66 "create_report.m"
}

#line 872 "create_report.m"
static void MR_CALL 
create_report__create_top_procs_report_6_p_0_1(
#line 872 "create_report.m"
  MR_Box create_report__closure_arg,
#line 872 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 872 "create_report.m"
  MR_Box * create_report__wrapper_arg_2)
#line 872 "create_report.m"
{
#line 872 "create_report.m"
  {
#line 872 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 872 "create_report.m"
    MR_Word create_report__conv0_RowData_6;

#line 872 "create_report.m"
    {
#line 872 "create_report.m"
      create_report__psi_to_perf_row_data_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Integer) create_report__wrapper_arg_1), &create_report__conv0_RowData_6);
    }
#line 872 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_RowData_6));
#line 872 "create_report.m"
  }
#line 872 "create_report.m"
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
#line 848 "create_report.m"
  {
#line 848 "create_report.m"
    MR_bool create_report__succeeded;
#line 848 "create_report.m"
    MR_Word create_report__InclDesc_13;
#line 848 "create_report.m"
    MR_Word create_report__Scope_14;
#line 848 "create_report.m"
    MR_Word create_report__MaybeTopPSIs_15;

#line 855 "create_report.m"
#line 855 "create_report.m"
    switch (create_report__CostKind_9) {
#line 855 "create_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 855 "create_report.m"
      case (MR_Integer) 4:
#line 855 "create_report.m"
      case (MR_Integer) 3:
#line 855 "create_report.m"
      case (MR_Integer) 1:
#line 855 "create_report.m"
      case (MR_Integer) 2:
#line 855 "create_report.m"
      case (MR_Integer) 5:
#line 861 "create_report.m"
        {
#line 862 "create_report.m"
          create_report__InclDesc_13 = create_report__InclDesc0_10;
#line 863 "create_report.m"
          create_report__Scope_14 = create_report__Scope0_11;
#line 861 "create_report.m"
        }
#line 855 "create_report.m"
        break;
#line 855 "create_report.m"
      case (MR_Integer) 0:
#line 850 "create_report.m"
        {
#line 853 "create_report.m"
          create_report__InclDesc_13 = (MR_Integer) 0;
#line 854 "create_report.m"
          create_report__Scope_14 = (MR_Integer) 1;
#line 850 "create_report.m"
        }
#line 855 "create_report.m"
        break;
#line 855 "create_report.m"
    }
#line 865 "create_report.m"
    {
#line 865 "create_report.m"
      create_report__MaybeTopPSIs_15 = top_procs__find_top_procs_5_f_0(create_report__CostKind_9, create_report__InclDesc_13, create_report__Scope_14, create_report__Limit_8, create_report__Deep_7);
    }
#line 869 "create_report.m"
    if (((MR_tag((MR_Word) create_report__MaybeTopPSIs_15)) == (MR_mktag((MR_Integer) 1))))
#line 867 "create_report.m"
      {
#line 867 "create_report.m"
        MR_String create_report__ErrorMessage_16 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__MaybeTopPSIs_15, (MR_Integer) 0)));
#line 867 "create_report.m"
        MR_String create_report__V_22_22;

#line 868 "create_report.m"
        {
#line 868 "create_report.m"
          create_report__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "Internal error: ", create_report__ErrorMessage_16);
        }
#line 868 "create_report.m"
        {
#line 868 "create_report.m"
          MR_Word base;
#line 868 "create_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 868 "create_report.m"
          *create_report__MaybeTopProcsReport_12 = base;
#line 868 "create_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__V_22_22));
#line 868 "create_report.m"
        }
#line 867 "create_report.m"
      }
#line 869 "create_report.m"
    else
#line 870 "create_report.m"
      {
#line 870 "create_report.m"
        MR_Word create_report__TopPSIs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeTopPSIs_15, (MR_Integer) 0)));
#line 870 "create_report.m"
        MR_Word create_report__Ordering_18;
#line 870 "create_report.m"
        MR_Word create_report__ProcRowDatas_19;
#line 870 "create_report.m"
        MR_Word create_report__TopProcsReport_20;
#line 870 "create_report.m"
        MR_Word create_report__V_21_21;

#line 871 "create_report.m"
        {
#line 871 "create_report.m"
          create_report__Ordering_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 871 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__Ordering_18, 0) = ((MR_Box) (create_report__Limit_8));
#line 871 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__Ordering_18, 1) = ((MR_Box) ((create_report__CostKind_9 | ((((create_report__InclDesc_13 << (MR_Integer) 3)) | ((create_report__Scope_14 << (MR_Integer) 4)))))));
#line 871 "create_report.m"
        }
#line 872 "create_report.m"
        {
#line 872 "create_report.m"
          create_report__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 872 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 0) = ((MR_Box) (&create_report_scalar_common_5[1]));
#line 872 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 1) = ((MR_Box) (create_report__create_top_procs_report_6_p_0_1));
#line 872 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 872 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_21_21, 3) = ((MR_Box) (create_report__Deep_7));
#line 872 "create_report.m"
        }
#line 872 "create_report.m"
        {
#line 872 "create_report.m"
          mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &create_report_scalar_common_1[3], create_report__V_21_21, create_report__TopPSIs_17, &create_report__ProcRowDatas_19);
        }
#line 873 "create_report.m"
        {
#line 873 "create_report.m"
          create_report__TopProcsReport_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 873 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TopProcsReport_20, 0) = ((MR_Box) (create_report__Ordering_18));
#line 873 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__TopProcsReport_20, 1) = ((MR_Box) (create_report__ProcRowDatas_19));
#line 873 "create_report.m"
        }
#line 874 "create_report.m"
        {
#line 874 "create_report.m"
          MR_Word base;
#line 874 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 874 "create_report.m"
          *create_report__MaybeTopProcsReport_12 = base;
#line 874 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__TopProcsReport_20));
#line 874 "create_report.m"
        }
#line 870 "create_report.m"
      }
#line 848 "create_report.m"
  }
#line 59 "create_report.m"
}

#line 1232 "create_report.m"
static void MR_CALL 
create_report__create_dynamic_procrep_coverage_report_3_p_0_1(
#line 1232 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1232 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1232 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 1232 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 1232 "create_report.m"
{
#line 1232 "create_report.m"
  {
#line 1232 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1232 "create_report.m"
    MR_Word create_report__conv0_HeadVar__4_4;

#line 1232 "create_report.m"
    {
#line 1232 "create_report.m"
      analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_HeadVar__4_4);
    }
#line 1232 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_HeadVar__4_4));
#line 1232 "create_report.m"
  }
#line 1232 "create_report.m"
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
#line 1240 "create_report.m"
  {
#line 1240 "create_report.m"
    MR_bool create_report__succeeded;

#line 1225 "create_report.m"
    {
#line 1225 "create_report.m"
      create_report__succeeded = profile__valid_proc_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__PDPtr_5);
    }
#line 1240 "create_report.m"
    if (create_report__succeeded)
#line 1226 "create_report.m"
      {
#line 1226 "create_report.m"
        MR_Word create_report__PD_7;
#line 1226 "create_report.m"
        MR_Word create_report__PSPtr_8;
#line 1226 "create_report.m"
        MR_Word create_report__MaybeCoveragePoints_9;
#line 1226 "create_report.m"
        MR_Word create_report__Slots_10;
#line 1226 "create_report.m"
        MR_Word create_report__CallSitesMap_11;
#line 1226 "create_report.m"
        MR_Word create_report__Own_12;
#line 1226 "create_report.m"
        MR_Word create_report__V_14_14;
#line 1226 "create_report.m"
        MR_Word create_report__V_15_15;
#line 1227 "create_report.m"
        MR_ArrayPtr create_report__V_21_21;
#line 1232 "create_report.m"
        MR_Box create_report__conv1_CallSitesMap_11;

#line 1226 "create_report.m"
        {
#line 1226 "create_report.m"
          profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__PD_7);
        }
#line 1227 "create_report.m"
        create_report__PSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 0)));
#line 1227 "create_report.m"
        create_report__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 1)));
#line 1227 "create_report.m"
        create_report__MaybeCoveragePoints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 2)));
#line 1231 "create_report.m"
        {
#line 1231 "create_report.m"
          analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__Slots_10);
        }
#line 1232 "create_report.m"
        {
#line 1232 "create_report.m"
          create_report__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 0) = ((MR_Box) (&create_report_scalar_common_6[1]));
#line 1232 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 1) = ((MR_Box) (create_report__create_dynamic_procrep_coverage_report_3_p_0_1));
#line 1232 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1232 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 3) = ((MR_Box) (create_report__Deep_4));
#line 1232 "create_report.m"
        }
#line 1233 "create_report.m"
        {
#line 1233 "create_report.m"
          create_report__V_15_15 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &create_report_scalar_common_1[2]);
        }
#line 1232 "create_report.m"
        {
#line 1232 "create_report.m"
          mercury__list__foldl_4_p_0((MR_Word) &create_report_scalar_common_2[2], (MR_Word) &create_report_scalar_common_2[3], create_report__V_14_14, create_report__Slots_10, ((MR_Box) (create_report__V_15_15)), &create_report__conv1_CallSitesMap_11);
        }
#line 1232 "create_report.m"
        create_report__CallSitesMap_11 = ((MR_Word) create_report__conv1_CallSitesMap_11);
#line 1236 "create_report.m"
        {
#line 1236 "create_report.m"
          profile__deep_lookup_pd_own_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__Own_12);
        }
#line 1238 "create_report.m"
        {
#line 1238 "create_report.m"
          create_report__maybe_create_procrep_coverage_report_6_p_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, create_report__Deep_4, create_report__PSPtr_8, create_report__Own_12, create_report__MaybeCoveragePoints_9, create_report__CallSitesMap_11, create_report__MaybeReport_6);
#line 1238 "create_report.m"
          return;
        }
#line 1226 "create_report.m"
      }
#line 1240 "create_report.m"
    else
#line 1241 "create_report.m"
      {
#line 1241 "create_report.m"
        MR_Integer create_report__PDId_13 = (MR_Integer) create_report__PDPtr_5;
#line 1241 "create_report.m"
        MR_String create_report__V_16_16;
#line 1241 "create_report.m"
        MR_String create_report__V_33_33;

#line 1243 "create_report.m"
        {
#line 1243 "create_report.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &create_report_scalar_common_3[0], create_report__PDId_13, &create_report__V_33_33);
        }
#line 1243 "create_report.m"
        {
#line 1243 "create_report.m"
          create_report__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "Proc dynamic pointer is invalid ", create_report__V_33_33);
        }
#line 1242 "create_report.m"
        {
#line 1242 "create_report.m"
          MR_Word base;
#line 1242 "create_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "create_report.m"
          *create_report__MaybeReport_6 = base;
#line 1242 "create_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__V_16_16));
#line 1242 "create_report.m"
        }
#line 1241 "create_report.m"
      }
#line 1240 "create_report.m"
  }
#line 53 "create_report.m"
}

#line 1210 "create_report.m"
static void MR_CALL 
create_report__create_static_procrep_coverage_report_3_p_0_1(
#line 1210 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1210 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1210 "create_report.m"
  MR_Box create_report__wrapper_arg_2,
#line 1210 "create_report.m"
  MR_Box * create_report__wrapper_arg_3)
#line 1210 "create_report.m"
{
#line 1210 "create_report.m"
  {
#line 1210 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1210 "create_report.m"
    MR_Word create_report__conv0_HeadVar__4_4;

#line 1210 "create_report.m"
    {
#line 1210 "create_report.m"
      analysis_utils__build_static_call_site_cost_and_callee_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_HeadVar__4_4);
    }
#line 1210 "create_report.m"
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_HeadVar__4_4));
#line 1210 "create_report.m"
  }
#line 1210 "create_report.m"
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
#line 1218 "create_report.m"
  {
#line 1218 "create_report.m"
    MR_bool create_report__succeeded;

#line 1202 "create_report.m"
    {
#line 1202 "create_report.m"
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_4, create_report__PSPtr_5);
    }
#line 1218 "create_report.m"
    if (create_report__succeeded)
#line 1203 "create_report.m"
      {
#line 1203 "create_report.m"
        MR_Word create_report__StaticCoverage_7;
#line 1203 "create_report.m"
        MR_Word create_report__MaybeCoveragePoints_8;
#line 1203 "create_report.m"
        MR_Word create_report__PS_9;
#line 1203 "create_report.m"
        MR_ArrayPtr create_report__CallSitesArray_10;
#line 1203 "create_report.m"
        MR_Word create_report__CallSitesMap_11;
#line 1203 "create_report.m"
        MR_Word create_report__Own_12;
#line 1203 "create_report.m"
        MR_Word create_report__V_14_14;
#line 1203 "create_report.m"
        MR_Word create_report__V_15_15;
#line 1209 "create_report.m"
        MR_Word create_report__V_21_21;
#line 1209 "create_report.m"
        MR_String create_report__V_22_22;
#line 1209 "create_report.m"
        MR_String create_report__V_23_23;
#line 1209 "create_report.m"
        MR_String create_report__V_24_24;
#line 1209 "create_report.m"
        MR_String create_report__V_25_25;
#line 1209 "create_report.m"
        MR_String create_report__V_26_26;
#line 1209 "create_report.m"
        MR_Integer create_report__V_27_27;
#line 1209 "create_report.m"
        MR_Word create_report__V_28_28;
#line 1209 "create_report.m"
        MR_ArrayPtr create_report__V_29_29;
#line 1209 "create_report.m"
        MR_Word create_report__V_30_30;
#line 1209 "create_report.m"
        MR_Word create_report__V_31_31;
#line 1210 "create_report.m"
        MR_Box create_report__conv1_CallSitesMap_11;

#line 1203 "create_report.m"
        {
#line 1203 "create_report.m"
          profile__deep_lookup_ps_coverage_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__StaticCoverage_7);
        }
#line 1204 "create_report.m"
        {
#line 1204 "create_report.m"
          create_report__MaybeCoveragePoints_8 = measurements__static_coverage_maybe_get_coverage_points_1_f_0(create_report__StaticCoverage_7);
        }
#line 1208 "create_report.m"
        {
#line 1208 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__PS_9);
        }
#line 1209 "create_report.m"
        create_report__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 0)));
#line 1209 "create_report.m"
        create_report__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 1)));
#line 1209 "create_report.m"
        create_report__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 2)));
#line 1209 "create_report.m"
        create_report__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 3)));
#line 1209 "create_report.m"
        create_report__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 4)));
#line 1209 "create_report.m"
        create_report__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 5)));
#line 1209 "create_report.m"
        create_report__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 6)));
#line 1209 "create_report.m"
        create_report__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 7)));
#line 1209 "create_report.m"
        create_report__CallSitesArray_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 8)));
#line 1209 "create_report.m"
        create_report__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 9)));
#line 1209 "create_report.m"
        create_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 10)));
#line 1209 "create_report.m"
        create_report__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 11)));
#line 1210 "create_report.m"
        {
#line 1210 "create_report.m"
          create_report__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1210 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 0) = ((MR_Box) (&create_report_scalar_common_6[0]));
#line 1210 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 1) = ((MR_Box) (create_report__create_static_procrep_coverage_report_3_p_0_1));
#line 1210 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1210 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_14_14, 3) = ((MR_Box) (create_report__Deep_4));
#line 1210 "create_report.m"
        }
#line 1211 "create_report.m"
        {
#line 1211 "create_report.m"
          create_report__V_15_15 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &create_report_scalar_common_1[1]);
        }
#line 1210 "create_report.m"
        {
#line 1210 "create_report.m"
          mercury__array__foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_Word) &create_report_scalar_common_2[1], create_report__V_14_14, (MR_ArrayPtr) create_report__CallSitesArray_10, ((MR_Box) (create_report__V_15_15)), &create_report__conv1_CallSitesMap_11);
        }
#line 1210 "create_report.m"
        create_report__CallSitesMap_11 = ((MR_Word) create_report__conv1_CallSitesMap_11);
#line 1214 "create_report.m"
        {
#line 1214 "create_report.m"
          profile__deep_lookup_ps_own_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Own_12);
        }
#line 1216 "create_report.m"
        {
#line 1216 "create_report.m"
          create_report__maybe_create_procrep_coverage_report_6_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, create_report__Deep_4, create_report__PSPtr_5, create_report__Own_12, create_report__MaybeCoveragePoints_8, create_report__CallSitesMap_11, create_report__MaybeReport_6);
#line 1216 "create_report.m"
          return;
        }
#line 1203 "create_report.m"
      }
#line 1218 "create_report.m"
    else
#line 1219 "create_report.m"
      {
#line 1219 "create_report.m"
        MR_Integer create_report__PSId_13 = (MR_Integer) create_report__PSPtr_5;
#line 1219 "create_report.m"
        MR_String create_report__V_16_16;
#line 1219 "create_report.m"
        MR_String create_report__V_40_40;

#line 1221 "create_report.m"
        {
#line 1221 "create_report.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &create_report_scalar_common_3[0], create_report__PSId_13, &create_report__V_40_40);
        }
#line 1221 "create_report.m"
        {
#line 1221 "create_report.m"
          create_report__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "Proc static pointer is invalid ", create_report__V_40_40);
        }
#line 1220 "create_report.m"
        {
#line 1220 "create_report.m"
          MR_Word base;
#line 1220 "create_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "create_report.m"
          *create_report__MaybeReport_6 = base;
#line 1220 "create_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__V_16_16));
#line 1220 "create_report.m"
        }
#line 1219 "create_report.m"
      }
#line 1218 "create_report.m"
  }
#line 45 "create_report.m"
}

#line 893 "create_report.m"
static MR_Box MR_CALL 
create_report__create_proc_report_3_p_0_1(
#line 893 "create_report.m"
  MR_Box create_report__closure_arg,
#line 893 "create_report.m"
  MR_Box create_report__wrapper_arg_1)
#line 893 "create_report.m"
{
#line 893 "create_report.m"
  {
#line 893 "create_report.m"
    MR_Box create_report__wrapper_arg_2;
#line 893 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 893 "create_report.m"
    MR_Word create_report__conv0_CallSitePerf_6;

#line 893 "create_report.m"
    {
#line 893 "create_report.m"
      create_report__conv0_CallSitePerf_6 = create_report__create_call_site_summary_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
#line 893 "create_report.m"
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_CallSitePerf_6));
#line 893 "create_report.m"
    return create_report__wrapper_arg_2;
#line 893 "create_report.m"
  }
#line 893 "create_report.m"
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
#line 908 "create_report.m"
  {
#line 908 "create_report.m"
    MR_bool create_report__succeeded;

#line 883 "create_report.m"
    {
#line 883 "create_report.m"
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_4, create_report__PSPtr_5);
    }
#line 908 "create_report.m"
    if (create_report__succeeded)
#line 884 "create_report.m"
      {
#line 884 "create_report.m"
        MR_Word create_report__TypeCtorInfo_42_42;
#line 884 "create_report.m"
        MR_Word create_report__TypeCtorInfo_46_46;
#line 884 "create_report.m"
        MR_Word create_report__ProcDesc_7;
#line 884 "create_report.m"
        MR_Word create_report__Own_8;
#line 884 "create_report.m"
        MR_Word create_report__Desc_9;
#line 884 "create_report.m"
        MR_Word create_report__ProcSummaryRowData_10;
#line 884 "create_report.m"
        MR_Word create_report__PS_11;
#line 884 "create_report.m"
        MR_ArrayPtr create_report__CallSitesArray_12;
#line 884 "create_report.m"
        MR_Word create_report__CallSites_13;
#line 884 "create_report.m"
        MR_Word create_report__ProcCallSiteSummaryRowDatas_14;
#line 884 "create_report.m"
        MR_Word create_report__CallerCSDPtrs0_15;
#line 884 "create_report.m"
        MR_Word create_report__SeenProcs_16;
#line 884 "create_report.m"
        MR_Integer create_report__NumDynamic_17;
#line 884 "create_report.m"
        MR_Word create_report__CallersOwn_18;
#line 884 "create_report.m"
        MR_Word create_report__CallersInherit_19;
#line 884 "create_report.m"
        MR_Integer create_report__NumStatic_20;
#line 884 "create_report.m"
        MR_Word create_report__CallersSummaryRowData_21;
#line 884 "create_report.m"
        MR_Word create_report__ProcReport_22;
#line 884 "create_report.m"
        MR_Word create_report__V_23_23;
#line 884 "create_report.m"
        MR_Word create_report__V_24_24;
#line 884 "create_report.m"
        MR_Word create_report__V_26_26;
#line 884 "create_report.m"
        MR_Word create_report__V_27_27;
#line 884 "create_report.m"
        MR_Word create_report__V_28_28;
#line 884 "create_report.m"
        MR_Word create_report__V_53_53;
#line 884 "create_report.m"
        MR_Word create_report__V_59_59;
#line 891 "create_report.m"
        MR_Word create_report__V_30_30;
#line 891 "create_report.m"
        MR_String create_report__V_31_31;
#line 891 "create_report.m"
        MR_String create_report__V_32_32;
#line 891 "create_report.m"
        MR_String create_report__V_33_33;
#line 891 "create_report.m"
        MR_String create_report__V_34_34;
#line 891 "create_report.m"
        MR_String create_report__V_35_35;
#line 891 "create_report.m"
        MR_Integer create_report__V_36_36;
#line 891 "create_report.m"
        MR_Word create_report__V_37_37;
#line 891 "create_report.m"
        MR_ArrayPtr create_report__V_38_38;
#line 891 "create_report.m"
        MR_Word create_report__V_39_39;
#line 891 "create_report.m"
        MR_Word create_report__V_40_40;

#line 884 "create_report.m"
        {
#line 884 "create_report.m"
          create_report__ProcDesc_7 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__PSPtr_5);
        }
#line 885 "create_report.m"
        {
#line 885 "create_report.m"
          profile__deep_lookup_ps_own_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Own_8);
        }
#line 886 "create_report.m"
        {
#line 886 "create_report.m"
          profile__deep_lookup_ps_desc_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Desc_9);
        }
#line 1525 "create_report.m"
        {
#line 1525 "create_report.m"
          create_report__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_53_53, 0) = ((MR_Box) (create_report__Desc_9));
#line 1525 "create_report.m"
        }
#line 1525 "create_report.m"
        {
#line 1525 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__ProcDesc_7)), create_report__Own_8, create_report__V_53_53, &create_report__ProcSummaryRowData_10);
        }
#line 890 "create_report.m"
        {
#line 890 "create_report.m"
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__PS_11);
        }
#line 891 "create_report.m"
        create_report__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 0)));
#line 891 "create_report.m"
        create_report__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 1)));
#line 891 "create_report.m"
        create_report__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 2)));
#line 891 "create_report.m"
        create_report__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 3)));
#line 891 "create_report.m"
        create_report__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 4)));
#line 891 "create_report.m"
        create_report__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 5)));
#line 891 "create_report.m"
        create_report__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 6)));
#line 891 "create_report.m"
        create_report__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 7)));
#line 891 "create_report.m"
        create_report__CallSitesArray_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 8)));
#line 891 "create_report.m"
        create_report__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 9)));
#line 891 "create_report.m"
        create_report__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 10)));
#line 891 "create_report.m"
        create_report__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 11)));
#line 15176 "create_report.c"
        create_report__TypeCtorInfo_42_42 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
#line 892 "create_report.m"
        {
#line 892 "create_report.m"
          mercury__array__to_list_2_p_0(create_report__TypeCtorInfo_42_42, (MR_ArrayPtr) create_report__CallSitesArray_12, &create_report__CallSites_13);
        }
#line 893 "create_report.m"
        {
#line 893 "create_report.m"
          create_report__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 893 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_23_23, 0) = ((MR_Box) (&create_report_scalar_common_5[0]));
#line 893 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_23_23, 1) = ((MR_Box) (create_report__create_proc_report_3_p_0_1));
#line 893 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 893 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_23_23, 3) = ((MR_Box) (create_report__Deep_4));
#line 893 "create_report.m"
        }
#line 893 "create_report.m"
        {
#line 893 "create_report.m"
          create_report__ProcCallSiteSummaryRowDatas_14 = mercury__list__map_2_f_0(create_report__TypeCtorInfo_42_42, (MR_Word) &report__report__type_ctor_info_call_site_perf_0, create_report__V_23_23, create_report__CallSites_13);
        }
#line 896 "create_report.m"
        {
#line 896 "create_report.m"
          profile__deep_lookup_proc_callers_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__CallerCSDPtrs0_15);
        }
#line 15207 "create_report.c"
        create_report__TypeCtorInfo_46_46 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
#line 897 "create_report.m"
        {
#line 897 "create_report.m"
          create_report__V_24_24 = mercury__set__init_0_f_0(create_report__TypeCtorInfo_46_46);
        }
#line 898 "create_report.m"
        {
#line 898 "create_report.m"
          create_report__V_26_26 = measurements__zero_own_prof_info_0_f_0();
        }
#line 899 "create_report.m"
        {
#line 899 "create_report.m"
          create_report__V_27_27 = measurements__zero_inherit_prof_info_0_f_0();
        }
#line 897 "create_report.m"
        {
#line 897 "create_report.m"
          create_report__summarize_callers_11_p_0(create_report__Deep_4, create_report__CallerCSDPtrs0_15, create_report__PSPtr_5, create_report__V_24_24, &create_report__SeenProcs_16, (MR_Integer) 0, &create_report__NumDynamic_17, create_report__V_26_26, &create_report__CallersOwn_18, create_report__V_27_27, &create_report__CallersInherit_19);
        }
#line 900 "create_report.m"
        {
#line 900 "create_report.m"
          create_report__NumStatic_20 = mercury__set__count_1_f_0(create_report__TypeCtorInfo_46_46, create_report__SeenProcs_16);
        }
#line 902 "create_report.m"
        {
#line 902 "create_report.m"
          create_report__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 902 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_28_28, 0) = ((MR_Box) (create_report__NumStatic_20));
#line 902 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__V_28_28, 1) = ((MR_Box) (create_report__NumDynamic_17));
#line 902 "create_report.m"
        }
#line 1525 "create_report.m"
        {
#line 1525 "create_report.m"
          create_report__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1525 "create_report.m"
          MR_hl_field(MR_mktag(1), create_report__V_59_59, 0) = ((MR_Box) (create_report__CallersInherit_19));
#line 1525 "create_report.m"
        }
#line 1525 "create_report.m"
        {
#line 1525 "create_report.m"
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__V_28_28)), create_report__CallersOwn_18, create_report__V_59_59, &create_report__CallersSummaryRowData_21);
        }
#line 905 "create_report.m"
        {
#line 905 "create_report.m"
          create_report__ProcReport_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 905 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcReport_22, 0) = ((MR_Box) (create_report__CallersSummaryRowData_21));
#line 905 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcReport_22, 1) = ((MR_Box) (create_report__ProcSummaryRowData_10));
#line 905 "create_report.m"
          MR_hl_field(MR_mktag(0), create_report__ProcReport_22, 2) = ((MR_Box) (create_report__ProcCallSiteSummaryRowDatas_14));
#line 905 "create_report.m"
        }
#line 907 "create_report.m"
        {
#line 907 "create_report.m"
          MR_Word base;
#line 907 "create_report.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 907 "create_report.m"
          *create_report__MaybeProcReport_6 = base;
#line 907 "create_report.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcReport_22));
#line 907 "create_report.m"
        }
#line 884 "create_report.m"
      }
#line 908 "create_report.m"
    else
#line 909 "create_report.m"
      {
#line 909 "create_report.m"
        *create_report__MaybeProcReport_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[1]);
#line 909 "create_report.m"
      }
#line 908 "create_report.m"
  }
#line 40 "create_report.m"
}

#line 1417 "create_report.m"
static void MR_CALL 
create_report__create_call_site_dynamic_var_use_report_3_p_0_1(
#line 1417 "create_report.m"
  MR_Box create_report__closure_arg,
#line 1417 "create_report.m"
  MR_Box create_report__wrapper_arg_1,
#line 1417 "create_report.m"
  MR_Box * create_report__wrapper_arg_2,
#line 1417 "create_report.m"
  MR_Box create_report__wrapper_arg_3,
#line 1417 "create_report.m"
  MR_Box * create_report__wrapper_arg_4)
#line 1417 "create_report.m"
{
#line 1417 "create_report.m"
  {
#line 1417 "create_report.m"
    MR_Box create_report__closure = create_report__closure_arg;
#line 1417 "create_report.m"
    MR_Word create_report__conv1_MaybeUseAndName_16;
#line 1417 "create_report.m"
    MR_Integer create_report__conv0_STATE_VARIABLE_ArgNum_27;

#line 1417 "create_report.m"
    {
#line 1417 "create_report.m"
      create_report__call_site_dynamic_var_use_arg_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 5))), MR_unbox_float((MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 7))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv1_MaybeUseAndName_16, ((MR_Integer) create_report__wrapper_arg_3), &create_report__conv0_STATE_VARIABLE_ArgNum_27);
    }
#line 1417 "create_report.m"
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv1_MaybeUseAndName_16));
#line 1417 "create_report.m"
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ArgNum_27));
#line 1417 "create_report.m"
  }
#line 1417 "create_report.m"
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
#line 1442 "create_report.m"
  {
#line 1442 "create_report.m"
    MR_bool create_report__succeeded;

#line 1388 "create_report.m"
    {
#line 1388 "create_report.m"
      create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__CSDPtr_5);
    }
#line 1442 "create_report.m"
    if (create_report__succeeded)
#line 1389 "create_report.m"
      {
#line 1389 "create_report.m"
        MR_Word create_report__CSD_7;
#line 1389 "create_report.m"
        MR_Word create_report__CalleePDPtr_8;
#line 1389 "create_report.m"
        MR_Word create_report__CallerPDPtr_9;
#line 1389 "create_report.m"
        MR_Word create_report__CalleePD_10;
#line 1389 "create_report.m"
        MR_Word create_report__CalleePSPtr_11;
#line 1389 "create_report.m"
        MR_Word create_report__MaybeProcrep_12;
#line 1390 "create_report.m"
        MR_Word create_report__V_49_49;
#line 1393 "create_report.m"
        MR_ArrayPtr create_report__V_52_52;
#line 1393 "create_report.m"
        MR_Word create_report__V_53_53;

#line 1389 "create_report.m"
        {
#line 1389 "create_report.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__CSD_7);
        }
#line 1390 "create_report.m"
        create_report__CallerPDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 0)));
#line 1390 "create_report.m"
        create_report__CalleePDPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 1)));
#line 1390 "create_report.m"
        create_report__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 2)));
#line 1392 "create_report.m"
        {
#line 1392 "create_report.m"
          profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__CalleePDPtr_8, &create_report__CalleePD_10);
        }
#line 1393 "create_report.m"
        create_report__CalleePSPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePD_10, (MR_Integer) 0)));
#line 1393 "create_report.m"
        create_report__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__CalleePD_10, (MR_Integer) 1)));
#line 1393 "create_report.m"
        create_report__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePD_10, (MR_Integer) 2)));
#line 1394 "create_report.m"
        {
#line 1394 "create_report.m"
          analysis_utils__deep_get_maybe_procrep_3_p_0(create_report__Deep_4, create_report__CalleePSPtr_11, &create_report__MaybeProcrep_12);
        }
#line 1438 "create_report.m"
        if (((MR_tag((MR_Word) create_report__MaybeProcrep_12)) == (MR_mktag((MR_Integer) 1))))
#line 1440 "create_report.m"
          *create_report__MaybeVarUseInfo_6 = (MR_Word) create_report__MaybeProcrep_12;
#line 1438 "create_report.m"
        else
#line 1396 "create_report.m"
          {
#line 1396 "create_report.m"
            MR_Word create_report__Procrep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeProcrep_12, (MR_Integer) 0)));
#line 1396 "create_report.m"
            MR_Word create_report__HeadVars_14;
#line 1396 "create_report.m"
            MR_Word create_report__VarNameTable_15;
#line 1396 "create_report.m"
            MR_Word create_report__ParentCliquePtr_16;
#line 1396 "create_report.m"
            MR_Word create_report__CalleeCliquePtr_17;
#line 1396 "create_report.m"
            MR_Word create_report__MaybeRecursiveCostsReport_18;
#line 1396 "create_report.m"
            MR_Word create_report__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Procrep_13, (MR_Integer) 1)));
#line 1397 "create_report.m"
            MR_Word create_report__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Procrep_13, (MR_Integer) 0)));
#line 1397 "create_report.m"
            MR_Word create_report__V_55_55;
#line 1397 "create_report.m"
            MR_Word create_report__V_57_57;
#line 1397 "create_report.m"
            MR_Word create_report__V_58_58;

#line 1397 "create_report.m"
            create_report__HeadVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_33_33, (MR_Integer) 0)));
#line 1397 "create_report.m"
            create_report__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_33_33, (MR_Integer) 1)));
#line 1397 "create_report.m"
            create_report__VarNameTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_33_33, (MR_Integer) 2)));
#line 1397 "create_report.m"
            create_report__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_33_33, (MR_Integer) 3)));
#line 1397 "create_report.m"
            create_report__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__V_33_33, (MR_Integer) 4)));
#line 1399 "create_report.m"
            {
#line 1399 "create_report.m"
              profile__deep_lookup_clique_index_3_p_0(create_report__Deep_4, create_report__CallerPDPtr_9, &create_report__ParentCliquePtr_16);
            }
#line 1400 "create_report.m"
            {
#line 1400 "create_report.m"
              profile__deep_lookup_clique_index_3_p_0(create_report__Deep_4, create_report__CalleePDPtr_8, &create_report__CalleeCliquePtr_17);
            }
#line 1401 "create_report.m"
            {
#line 1401 "create_report.m"
              recursion_patterns__create_clique_recursion_costs_report_3_p_0(create_report__Deep_4, create_report__ParentCliquePtr_16, &create_report__MaybeRecursiveCostsReport_18);
            }
#line 1434 "create_report.m"
            if (((MR_tag((MR_Word) create_report__MaybeRecursiveCostsReport_18)) == (MR_mktag((MR_Integer) 1))))
#line 1436 "create_report.m"
              *create_report__MaybeVarUseInfo_6 = (MR_Word) create_report__MaybeRecursiveCostsReport_18;
#line 1434 "create_report.m"
            else
#line 1404 "create_report.m"
              {
#line 1404 "create_report.m"
                MR_Word create_report__RecursiveCostsReport_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeRecursiveCostsReport_18, (MR_Integer) 0)));
#line 1404 "create_report.m"
                MR_Word create_report__RecursionType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RecursiveCostsReport_19, (MR_Integer) 1)));
#line 1404 "create_report.m"
                MR_Word create_report__MaybeCost_21;
#line 1405 "create_report.m"
                MR_Word create_report__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RecursiveCostsReport_19, (MR_Integer) 0)));
#line 1405 "create_report.m"
                MR_Integer create_report__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RecursiveCostsReport_19, (MR_Integer) 2)));
#line 1406 "create_report.m"
                MR_Integer create_report__V_83_83 = (MR_Integer) create_report__ParentCliquePtr_16;
#line 1406 "create_report.m"
                MR_Integer create_report__V_84_84 = (MR_Integer) create_report__CalleeCliquePtr_17;

#line 1406 "create_report.m"
                create_report__succeeded = (create_report__V_83_83 == create_report__V_84_84);
#line 1409 "create_report.m"
                if (create_report__succeeded)
#line 1407 "create_report.m"
                  {
#line 1407 "create_report.m"
                    create_report__get_recursive_csd_cost_4_p_0(create_report__Deep_4, create_report__CSDPtr_5, create_report__RecursionType_20, &create_report__MaybeCost_21);
                  }
#line 1409 "create_report.m"
                else
#line 1410 "create_report.m"
                  {
#line 1410 "create_report.m"
                    MR_Word create_report__Desc_22;
#line 1410 "create_report.m"
                    MR_Word create_report__Own_23;
#line 1410 "create_report.m"
                    MR_Integer create_report__Cost0_24;
#line 1410 "create_report.m"
                    MR_Integer create_report__V_35_35;
#line 1410 "create_report.m"
                    MR_Integer create_report__V_36_36;
#line 1410 "create_report.m"
                    MR_Float create_report__V_37_37;

#line 1410 "create_report.m"
                    {
#line 1410 "create_report.m"
                      profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__Desc_22);
                    }
#line 1411 "create_report.m"
                    {
#line 1411 "create_report.m"
                      profile__deep_lookup_csd_own_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__Own_23);
                    }
#line 1412 "create_report.m"
                    {
#line 1412 "create_report.m"
                      create_report__V_35_35 = measurements__callseqs_1_f_0(create_report__Own_23);
                    }
#line 1412 "create_report.m"
                    {
#line 1412 "create_report.m"
                      create_report__V_36_36 = measurements__inherit_callseqs_1_f_0(create_report__Desc_22);
                    }
#line 1412 "create_report.m"
                    create_report__Cost0_24 = (create_report__V_35_35 + create_report__V_36_36);
#line 1413 "create_report.m"
                    {
#line 1413 "create_report.m"
                      create_report__V_37_37 = mercury__float__float_1_f_0(create_report__Cost0_24);
                    }
#line 1413 "create_report.m"
                    {
#line 1413 "create_report.m"
                      create_report__MaybeCost_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1413 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__MaybeCost_21, 0) = MR_box_float(create_report__V_37_37);
#line 1413 "create_report.m"
                    }
#line 1410 "create_report.m"
                  }
#line 1430 "create_report.m"
                if (((MR_tag((MR_Word) create_report__MaybeCost_21)) == (MR_mktag((MR_Integer) 1))))
#line 1432 "create_report.m"
                  *create_report__MaybeVarUseInfo_6 = (MR_Word) create_report__MaybeCost_21;
#line 1430 "create_report.m"
                else
#line 1416 "create_report.m"
                  {
#line 1416 "create_report.m"
                    MR_Float create_report__Cost_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), create_report__MaybeCost_21, (MR_Integer) 0)));
#line 1416 "create_report.m"
                    MR_Word create_report__Uses0_26;
#line 1416 "create_report.m"
                    MR_Word create_report__MaybeUses_28;
#line 1416 "create_report.m"
                    MR_Word create_report__V_38_38;
#line 1417 "create_report.m"
                    MR_Integer create_report__V_27_27;
#line 1417 "create_report.m"
                    MR_Box create_report__conv2_V_27_27;

#line 1417 "create_report.m"
                    {
#line 1417 "create_report.m"
                      create_report__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1417 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 0) = ((MR_Box) (&create_report_scalar_common_4[0]));
#line 1417 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 1) = ((MR_Box) (create_report__create_call_site_dynamic_var_use_report_3_p_0_1));
#line 1417 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1417 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 3) = ((MR_Box) (create_report__Deep_4));
#line 1417 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 4) = ((MR_Box) (create_report__CSDPtr_5));
#line 1417 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 5) = ((MR_Box) (create_report__RecursionType_20));
#line 1417 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 6) = MR_box_float(create_report__Cost_25);
#line 1417 "create_report.m"
                      MR_hl_field(MR_mktag(0), create_report__V_38_38, 7) = ((MR_Box) (create_report__VarNameTable_15));
#line 1417 "create_report.m"
                    }
#line 1417 "create_report.m"
                    {
#line 1417 "create_report.m"
                      mercury__list__map_foldl_5_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &create_report_scalar_common_2[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, create_report__V_38_38, create_report__HeadVars_14, &create_report__Uses0_26, ((MR_Box) ((MR_Integer) 0)), &create_report__conv2_V_27_27);
                    }
#line 1417 "create_report.m"
                    create_report__V_27_27 = ((MR_Integer) create_report__conv2_V_27_27);
#line 1420 "create_report.m"
                    {
#line 1420 "create_report.m"
                      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(create_report__Uses0_26, &create_report__MaybeUses_28);
                    }
#line 1426 "create_report.m"
                    if (((MR_tag((MR_Word) create_report__MaybeUses_28)) == (MR_mktag((MR_Integer) 1))))
#line 1428 "create_report.m"
                      *create_report__MaybeVarUseInfo_6 = (MR_Word) create_report__MaybeUses_28;
#line 1426 "create_report.m"
                    else
#line 1422 "create_report.m"
                      {
#line 1422 "create_report.m"
                        MR_Word create_report__Uses_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeUses_28, (MR_Integer) 0)));
#line 1422 "create_report.m"
                        MR_Word create_report__VarUseInfo_30;

#line 1423 "create_report.m"
                        {
#line 1423 "create_report.m"
                          create_report__VarUseInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1423 "create_report.m"
                          MR_hl_field(MR_mktag(0), create_report__VarUseInfo_30, 0) = MR_box_float(create_report__Cost_25);
#line 1423 "create_report.m"
                          MR_hl_field(MR_mktag(0), create_report__VarUseInfo_30, 1) = ((MR_Box) (create_report__Uses_29));
#line 1423 "create_report.m"
                        }
#line 1425 "create_report.m"
                        {
#line 1425 "create_report.m"
                          MR_Word base;
#line 1425 "create_report.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1425 "create_report.m"
                          *create_report__MaybeVarUseInfo_6 = base;
#line 1425 "create_report.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__VarUseInfo_30));
#line 1425 "create_report.m"
                        }
#line 1422 "create_report.m"
                      }
#line 1416 "create_report.m"
                  }
#line 1404 "create_report.m"
              }
#line 1396 "create_report.m"
          }
#line 1389 "create_report.m"
      }
#line 1442 "create_report.m"
    else
#line 1443 "create_report.m"
      {
#line 1443 "create_report.m"
        MR_Integer create_report__CSDNum_32 = (MR_Integer) create_report__CSDPtr_5;
#line 1443 "create_report.m"
        MR_String create_report__V_40_40;
#line 1443 "create_report.m"
        MR_String create_report__V_74_74;

#line 1445 "create_report.m"
        {
#line 1445 "create_report.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &create_report_scalar_common_3[0], create_report__CSDNum_32, &create_report__V_74_74);
        }
#line 1445 "create_report.m"
        {
#line 1445 "create_report.m"
          create_report__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid call site dynamic ", create_report__V_74_74);
        }
#line 1444 "create_report.m"
        {
#line 1444 "create_report.m"
          MR_Word base;
#line 1444 "create_report.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "create_report.m"
          *create_report__MaybeVarUseInfo_6 = base;
#line 1444 "create_report.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__V_40_40));
#line 1444 "create_report.m"
        }
#line 1443 "create_report.m"
      }
#line 1442 "create_report.m"
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
#line 114 "create_report.m"
    switch (MR_tag((MR_Word) create_report__Cmd_4)) {
#line 114 "create_report.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 114 "create_report.m"
      case (MR_Integer) 0:
#line 114 "create_report.m"
#line 114 "create_report.m"
        switch (MR_unmkbody(create_report__Cmd_4)) {
#line 114 "create_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 114 "create_report.m"
          case (MR_Integer) 0:
#line 114 "create_report.m"
            {
#line 114 "create_report.m"
              MR_String create_report__Msg_7;
#line 114 "create_report.m"
              MR_Word create_report__MessageReport_8;
#line 114 "create_report.m"
              MR_String create_report__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 3)));
#line 114 "create_report.m"
              MR_String create_report__V_178_178;
#line 114 "create_report.m"
              MR_String create_report__V_185_185;
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

#line 116 "create_report.m"
              {
#line 116 "create_report.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &create_report_scalar_common_3[0], create_report__V_66_66, &create_report__V_178_178);
              }
#line 115 "create_report.m"
              {
#line 115 "create_report.m"
                create_report__V_185_185 = mercury__string__f_43_43_2_f_0(create_report__V_178_178, (MR_String) ".");
              }
#line 115 "create_report.m"
              {
#line 115 "create_report.m"
                create_report__Msg_7 = mercury__string__f_43_43_2_f_0((MR_String) "Shutting down deep profile server for ", create_report__V_185_185);
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 1:
#line 221 "create_report.m"
            {
#line 222 "create_report.m"
              {
#line 222 "create_report.m"
                mercury__require__unexpected_3_p_0((MR_String) "create_report", (MR_String) "predicate \140create_report.create_report\'/3", (MR_String) "restart command");
#line 222 "create_report.m"
                return;
              }
#line 221 "create_report.m"
            }
#line 114 "create_report.m"
            break;
#line 114 "create_report.m"
          case (MR_Integer) 2:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 3:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 4:
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
            break;
#line 114 "create_report.m"
        }
#line 114 "create_report.m"
        break;
#line 114 "create_report.m"
      case (MR_Integer) 1:
#line 120 "create_report.m"
        {
#line 120 "create_report.m"
          MR_Integer create_report__Timeout_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), create_report__Cmd_4, (MR_Integer) 0)));
#line 120 "create_report.m"
          MR_String create_report__Msg_68;
#line 120 "create_report.m"
          MR_Word create_report__MessageReport_69;
#line 120 "create_report.m"
          MR_String create_report__V_168_168;
#line 120 "create_report.m"
          MR_String create_report__V_175_175;

#line 121 "create_report.m"
          {
#line 121 "create_report.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &create_report_scalar_common_3[0], create_report__Timeout_9, &create_report__V_168_168);
          }
#line 121 "create_report.m"
          {
#line 121 "create_report.m"
            create_report__V_175_175 = mercury__string__f_43_43_2_f_0(create_report__V_168_168, (MR_String) " minutes.");
          }
#line 121 "create_report.m"
          {
#line 121 "create_report.m"
            create_report__Msg_68 = mercury__string__f_43_43_2_f_0((MR_String) "Timeout set to ", create_report__V_175_175);
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
        break;
#line 114 "create_report.m"
      case (MR_Integer) 2:
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
        break;
#line 114 "create_report.m"
      case (MR_Integer) 3:
#line 114 "create_report.m"
#line 114 "create_report.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) {
#line 114 "create_report.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 114 "create_report.m"
          case (MR_Integer) 0:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 1:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 2:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 3:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 4:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 5:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 6:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 7:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 8:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 9:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 10:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 11:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 12:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 13:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 14:
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
            break;
#line 114 "create_report.m"
          case (MR_Integer) 15:
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
#line 219 "create_report.m"
              {
#line 219 "create_report.m"
                MR_Word base;
#line 219 "create_report.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "create_report.m"
                *create_report__Report_6 = base;
#line 219 "create_report.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 219 "create_report.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeVarUse_52));
#line 219 "create_report.m"
              }
#line 217 "create_report.m"
            }
#line 114 "create_report.m"
            break;
#line 114 "create_report.m"
        }
#line 114 "create_report.m"
        break;
#line 114 "create_report.m"
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
