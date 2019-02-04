/*
** Automatically generated from `create_report.m'
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


/* :- module create_report. */
/* :- implementation. */

/*
INIT mercury__create_report__init
ENDINIT
*/

#include "create_report.mih"


#include "analysis_utils.mih"
#include "apply_exclusion.mih"
#include "coverage.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "query.mih"
#include "recursion_patterns.mih"
#include "report.mih"
#include "top_procs.mih"
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
#include "cord.mih"
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




static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0;

static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__maybe__pti_maybe_error_2__plain_report__type_ctor_info_var_use_and_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0;

static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__set_ordlist__pti_set_ordlist_1__plain_exclude__type_ctor_info_exclude_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_call_site_desc_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_module_active_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_active_0;

static const MR_FA_TypeInfo_Struct2 create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

static const MR_FA_TypeInfo_Struct2 create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__plain_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

static const MR_FA_TypeInfo_Struct1 create_report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0;

static const MR_FA_TypeInfo_Struct1 create_report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

static const MR_FA_TypeInfo_Struct2 create_report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__report__pti_gs_field_info_2__plain_create_report__type_ctor_info_gs_field_raw_data_0__plain_unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__report__pti_gs_field_info_2__plain_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0__plain_report__ti_perf_row_data_1unit__type_ctor_info_unit_0;

static const MR_PseudoTypeInfo create_report__create_report__field_types_call_site_callee_perf_0_0[3];

static const MR_ConstString create_report__create_report__field_names_call_site_callee_perf_0_0[3];

static const MR_DuFunctorDesc create_report__create_report__du_functor_desc_call_site_callee_perf_0_0;

static const MR_DuFunctorDescPtr create_report__create_report__du_stag_ordered_call_site_callee_perf_0_0[1];

static const MR_DuPtagLayout create_report__create_report__du_ptag_ordered_call_site_callee_perf_0[1];

static const MR_DuFunctorDescPtr create_report__create_report__du_name_ordered_call_site_callee_perf_0[1];

static const MR_Integer create_report__create_report__functor_number_map_call_site_callee_perf_0[1];

static const MR_PseudoTypeInfo create_report__create_report__field_types_gs_field_raw_data_0_0[3];

static const MR_ConstString create_report__create_report__field_names_gs_field_raw_data_0_0[3];

static const MR_DuFunctorDesc create_report__create_report__du_functor_desc_gs_field_raw_data_0_0;

static const MR_DuFunctorDescPtr create_report__create_report__du_stag_ordered_gs_field_raw_data_0_0[1];

static const MR_DuPtagLayout create_report__create_report__du_ptag_ordered_gs_field_raw_data_0[1];

static const MR_DuFunctorDescPtr create_report__create_report__du_name_ordered_gs_field_raw_data_0[1];

static const MR_Integer create_report__create_report__functor_number_map_gs_field_raw_data_0[1];

static const MR_FA_TypeInfo_Struct2 create_report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0;

static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0_10001(
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2);

static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0_10001(
  MR_Box * create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3);

static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0_10001(
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2);

static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0_10001(
  MR_Box * create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3);

static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0_10001(
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2);

static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0_10001(
  MR_Box * create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3);

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0_10001(
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2);

static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0_10001(
  MR_Box * create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3);

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0_10001(
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2);

static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0_10001(
  MR_Box * create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(
  MR_Word create_report__Deep_6,
  MR_Box create_report__Subject_7,
  MR_Word create_report__Own_8,
  MR_Word create_report__MaybeDesc_9,
  MR_Word * create_report__RowData_10);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__RawData_7,
  MR_Word * create_report__Data_8);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__RawMap_7,
  MR_Word * create_report__Map_8);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word create_report__HeadVar__1_1,
  MR_Word * create_report__HeadVar__2_2);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2);

static MR_bool MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box create_report__closure_arg);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(
  MR_Word create_report__Deep_8,
  MR_Word create_report__ProcDesc_10,
  MR_Word create_report__PDPtr_11,
  MR_Word * create_report__Own_12,
  MR_Word * create_report__Desc_13,
  MR_Word * create_report__CliquePDReport_14);

static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_call_site_summary__591__1_2_p_0(
  MR_Word create_report__CalleePSPtr_13,
  MR_Word create_report__CalleePSPtrFromCall_21);

static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__439__1_2_p_0(
  MR_Word create_report__PSPtr_17,
  MR_Word create_report__HeadVar__2_21);

static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0(
  MR_Word * create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2,
  MR_Word create_report__HeadVar__3_3);

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0(
  MR_Word create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2);

static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0(
  MR_Word * create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2,
  MR_Word create_report__HeadVar__3_3);

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0(
  MR_Word create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2);

static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0(
  MR_Word * create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2,
  MR_Word create_report__HeadVar__3_3);

static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0(
  MR_Word create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2);

static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0(
  MR_Word * create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2,
  MR_Word create_report__HeadVar__3_3);

static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0(
  MR_Word create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2);

static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0(
  MR_Word * create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2,
  MR_Word create_report__HeadVar__3_3);

static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0(
  MR_Word create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2);

static MR_Word MR_CALL 
create_report__percent_from_ints_2_f_0(
  MR_Integer create_report__Nom_4,
  MR_Integer create_report__Denom_5);

static MR_Float MR_CALL 
create_report__int_per_call_2_f_0(
  MR_Integer create_report__Num_4,
  MR_Integer create_report__Calls_5);

static void MR_CALL 
create_report__psi_to_perf_row_data_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Integer create_report__PSI_5,
  MR_Word * create_report__RowData_6);

static MR_Word MR_CALL 
create_report__describe_clique_member_2_f_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__PDPtr_5);

static MR_Word MR_CALL 
create_report__describe_call_site_2_f_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CSSPtr_5);

static void MR_CALL 
create_report__create_call_site_dynamic_dump_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CSDPtr_5,
  MR_Word * create_report__MaybeCallSiteDynamicDumpInfo_6);

static void MR_CALL 
create_report__create_call_site_static_dump_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CSSPtr_5,
  MR_Word * create_report__MaybeCallSiteStaticDumpInfo_6);

static void MR_CALL 
create_report__create_proc_dynamic_dump_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__PDPtr_5,
  MR_Word * create_report__MaybeProcDynamicDumpInfo_6);

static void MR_CALL 
create_report__create_proc_static_dump_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__PSPtr_5,
  MR_Word * create_report__MaybeProcStaticDumpInfo_6);

static MR_Box MR_CALL 
create_report__create_clique_dump_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static void MR_CALL 
create_report__create_clique_dump_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CliquePtr_5,
  MR_Word * create_report__MaybeCliqueDumpInfo_6);

static void MR_CALL 
create_report__create_module_rep_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_String create_report__ModuleName_5,
  MR_Word * create_report__MaybeModuleRepReport_6);

static MR_bool MR_CALL 
create_report__is_getter_or_setter_2_4_p_0(
  MR_Word create_report__NameChars_5,
  MR_Word * create_report__GetterSetter_6,
  MR_Word * create_report__DataStructNameChars_7,
  MR_Word * create_report__FieldNameChars_8);

static void MR_CALL 
create_report__gather_getters_setters_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__PSPtr_6,
  MR_Word create_report__STATE_VARIABLE_GSDSRawMap_0_32,
  MR_Word * create_report__STATE_VARIABLE_GSDSRawMap_33);

static void MR_CALL 
create_report__getter_setter_raw_data_to_info_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report___FieldName_6,
  MR_Word create_report__RawData_7,
  MR_Word * create_report__Data_8);

static void MR_CALL 
create_report__getter_setter_raw_map_to_info_map_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report___DataStructName_6,
  MR_Word create_report__RawMap_7,
  MR_Word * create_report__Map_8);

static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3);

static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3);

static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_String create_report__ModuleName_5,
  MR_Word * create_report__MaybeModuleGetterSettersReport_6);

static MR_Word MR_CALL 
create_report__proc_to_active_row_data_2_f_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__PSPtr_5);

static MR_Box MR_CALL 
create_report__create_module_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static void MR_CALL 
create_report__create_module_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_String create_report__ModuleName_5,
  MR_Word * create_report__MaybeModuleReport_6);

static MR_Word MR_CALL 
create_report__module_pair_to_row_data_2_f_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__HeadVar__2_2);

static MR_bool MR_CALL 
create_report__not_mercury_runtime_1_p_0(
  MR_Word create_report__HeadVar__1_1);

static MR_Box MR_CALL 
create_report__create_program_modules_report_2_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static MR_bool MR_CALL 
create_report__create_program_modules_report_2_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static void MR_CALL 
create_report__create_program_modules_report_2_p_0(
  MR_Word create_report__Deep_3,
  MR_Word * create_report__MaybeProgramModulesReport_4);

static void MR_CALL 
create_report__get_recursive_csd_cost_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CSDPtr_6,
  MR_Word create_report__RecursionType_7,
  MR_Word * create_report__MaybeCost_8);

static void MR_CALL 
create_report__call_site_dynamic_var_use_arg_9_p_0(
  MR_Word create_report__Deep_10,
  MR_Word create_report__CSDPtr_11,
  MR_Word create_report__RecursionType_12,
  MR_Float create_report__Cost_13,
  MR_Word create_report__VarNameTable_14,
  MR_Word create_report__HeadVar_15,
  MR_Word * create_report__MaybeUseAndName_16,
  MR_Integer create_report__STATE_VARIABLE_ArgNum_0_26,
  MR_Integer * create_report__STATE_VARIABLE_ArgNum_27);

static void MR_CALL 
create_report__maybe_create_procrep_coverage_report_6_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box create_report__wrapper_arg_4,
  MR_Box * create_report__wrapper_arg_5);

static void MR_CALL 
create_report__maybe_create_procrep_coverage_report_6_p_0(
  MR_Word create_report__TypeInfo_for_Callee_63,
  MR_Word create_report__Deep_1,
  MR_Word create_report__PSPtr_2,
  MR_Word create_report__Own_3,
  MR_Word create_report__HeadVar__4_4,
  MR_Word create_report__CallSitesMap_5,
  MR_Word * create_report__HeadVar__6_6);

static MR_Box MR_CALL 
create_report__create_proc_caller_cliques_3_f_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static MR_Word MR_CALL 
create_report__create_proc_caller_cliques_3_f_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CalleePSPtr_6,
  MR_Word create_report__HeadVar__3_3);

static MR_Word MR_CALL 
create_report__create_proc_caller_modules_3_f_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CalleePSPtr_6,
  MR_Word create_report__HeadVar__3_3);

static MR_Word MR_CALL 
create_report__create_proc_caller_procedures_3_f_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CalleePSPtr_6,
  MR_Word create_report__HeadVar__3_3);

static MR_Word MR_CALL 
create_report__create_proc_caller_call_sites_3_f_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CalleePSPtr_6,
  MR_Word create_report__HeadVar__3_3);

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_6(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_5(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_4(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_3(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static void MR_CALL 
create_report__create_proc_callers_report_7_p_0(
  MR_Word create_report__Deep_8,
  MR_Word create_report__PSPtr_9,
  MR_Word create_report__CallerGroups_10,
  MR_Integer create_report__BunchNum_11,
  MR_Integer create_report__CallersPerBunch_12,
  MR_Word create_report__Contour_13,
  MR_Word * create_report__MaybeProcCallersReport_14);

static void MR_CALL 
create_report__accumulate_call_site_callees_7_p_0(
  MR_Word create_report__Deep_8,
  MR_Word create_report__CalleePerf_9,
  MR_Word * create_report__RowData_10,
  MR_Word create_report__STATE_VARIABLE_Own_0_17,
  MR_Word * create_report__STATE_VARIABLE_Own_18,
  MR_Word create_report__STATE_VARIABLE_Desc_0_19,
  MR_Word * create_report__STATE_VARIABLE_Desc_20);

static void MR_CALL 
create_report__accumulate_csd_prof_info_7_p_0(
  MR_Word create_report__Deep_8,
  MR_Word create_report__CallerPSPtr_9,
  MR_Word create_report__CSDPtr_10,
  MR_Word create_report__STATE_VARIABLE_Own_0_17,
  MR_Word * create_report__STATE_VARIABLE_Own_18,
  MR_Word create_report__STATE_VARIABLE_Desc_0_19,
  MR_Word * create_report__STATE_VARIABLE_Desc_20);

static void MR_CALL 
create_report__summarize_callers_11_p_0(
  MR_Word create_report__Deep_12,
  MR_Word create_report__CallerCSDPtrs0_13,
  MR_Word create_report__CalleePSPtr_14,
  MR_Word create_report__STATE_VARIABLE_PSSeen_0_27,
  MR_Word * create_report__STATE_VARIABLE_PSSeen_28,
  MR_Integer create_report__STATE_VARIABLE_NumDynamic_0_29,
  MR_Integer * create_report__STATE_VARIABLE_NumDynamic_30,
  MR_Word create_report__STATE_VARIABLE_Own_0_31,
  MR_Word * create_report__STATE_VARIABLE_Own_32,
  MR_Word create_report__STATE_VARIABLE_Desc_0_33,
  MR_Word * create_report__STATE_VARIABLE_Desc_34);

static void MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box create_report__wrapper_arg_4,
  MR_Box * create_report__wrapper_arg_5);

static MR_Word MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CallerPSPtr_6,
  MR_Word create_report__HeadVar__3_3);

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_9(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4,
  MR_Box create_report__wrapper_arg_5,
  MR_Box * create_report__wrapper_arg_6);

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_8(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static MR_bool MR_CALL 
create_report__create_call_site_summary_2_f_0_7(
  MR_Box create_report__closure_arg);

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_6(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4,
  MR_Box create_report__wrapper_arg_5,
  MR_Box * create_report__wrapper_arg_6);

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_5(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_4(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4,
  MR_Box create_report__wrapper_arg_5,
  MR_Box * create_report__wrapper_arg_6);

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_3(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4,
  MR_Box create_report__wrapper_arg_5,
  MR_Box * create_report__wrapper_arg_6);

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static MR_Word MR_CALL 
create_report__create_call_site_summary_2_f_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CSSPtr_5);

static MR_Box MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static MR_bool MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_1(
  MR_Box create_report__closure_arg);

static void MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0(
  MR_Word create_report__Deep_6,
  MR_Word create_report__CSDPtr_7,
  MR_Word * create_report__Own_8,
  MR_Word * create_report__Desc_9,
  MR_Word * create_report__CalleeCliqueRowData_10);

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_4(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4);

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_3(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4);

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4);

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4);

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__Pair_5,
  MR_Word * create_report__CliqueCallSiteReport_6);

static void MR_CALL 
create_report__create_clique_proc_dynamic_report_7_p_0(
  MR_Word create_report__Deep_8,
  MR_Word create_report___CliquePtr_9,
  MR_Word create_report__ProcDesc_10,
  MR_Word create_report__PDPtr_11,
  MR_Word * create_report__Own_12,
  MR_Word * create_report__Desc_13,
  MR_Word * create_report__CliquePDReport_14);

static void MR_CALL 
create_report__create_clique_proc_report_4_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4);

static void MR_CALL 
create_report__create_clique_proc_report_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CliquePtr_6,
  MR_Word create_report__HeadVar__3_3,
  MR_Word * create_report__CliqueProcReport_9);

static MR_bool MR_CALL 
create_report__proc_group_contains_2_p_0(
  MR_Word create_report__EntryPDPtr_3,
  MR_Word create_report__HeadVar__2_2);

static MR_bool MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0_1(
  MR_Box create_report__closure_arg);

static void MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__PDPtr_6,
  MR_Word create_report__STATE_VARIABLE_PStoPDsMap_0_12,
  MR_Word * create_report__STATE_VARIABLE_PStoPDsMap_13);

static MR_Word MR_CALL 
create_report__find_clique_ancestors_2_f_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CliquePtr_5);

static void MR_CALL 
create_report__find_start_of_action_callee_4_p_0(
  MR_Integer create_report__Percent_5,
  MR_Word create_report__RowData_6,
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_13,
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_14);

static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3);

static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0(
  MR_Integer create_report__Percent_5,
  MR_Word create_report__CallSiteReport_6,
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_11,
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_12);

static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3);

static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0(
  MR_Integer create_report__Percent_5,
  MR_Word create_report__CliquePDReport_6,
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_10,
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_11);

static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3);

static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3);

static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0(
  MR_Integer create_report__Percent_5,
  MR_Word create_report__CliqueProcReport_6,
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_11,
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_12);

static void MR_CALL 
create_report__find_start_of_action_4_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3);

static void MR_CALL 
create_report__find_start_of_action_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Integer create_report__Percent_6,
  MR_Word create_report__CurrentReport_7,
  MR_Word * create_report__SelectedReport_8);

static void MR_CALL 
create_report__create_root_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__MaybePercent_5,
  MR_Word * create_report__MaybeReport_6);

static void MR_CALL 
create_report__create_top_procs_report_6_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2);

static void MR_CALL 
create_report__create_call_site_dynamic_var_use_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4);

static void MR_CALL 
create_report__create_dynamic_procrep_coverage_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3);

static void MR_CALL 
create_report__create_static_procrep_coverage_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3);

static MR_Box MR_CALL 
create_report__create_proc_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static void MR_CALL 
create_report__create_clique_report_3_p_0_3(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2);

static MR_bool MR_CALL 
create_report__create_clique_report_3_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1);

static void MR_CALL 
create_report__create_clique_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3);


static /* final */ const MR_Box create_report_scalar_common_1[13][2];

static /* final */ const MR_Box create_report_scalar_common_2[21][3];

static /* final */ const MR_Box create_report_scalar_common_3[11][1];

static /* final */ const MR_Box create_report_scalar_common_4[17][7];

static /* final */ const MR_Box create_report_scalar_common_5[5][5];

static /* final */ const MR_Box create_report_scalar_common_6[6][6];

static /* final */ const MR_Box create_report_scalar_common_7[1][12];

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
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_call_site_desc_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_module_active_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_module_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_proc_active_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_2[21][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&create_report_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&create_report_scalar_common_1[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_var_use_and_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[6]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[6]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&create_report_scalar_common_1[6]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[6]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_module_data_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&report__report__type_ctor_info_gs_field_info_2)),
    ((MR_Box) (&create_report__create_report__type_ctor_info_gs_field_raw_data_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_field_name_0)),
    ((MR_Box) (&create_report_scalar_common_2[13]))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_data_struct_name_0)),
    ((MR_Box) (&create_report_scalar_common_2[14]))
  },
  /* row 16 */
  {
    ((MR_Box) (&report__report__type_ctor_info_gs_field_info_2)),
    ((MR_Box) (&create_report_scalar_common_1[3])),
    ((MR_Box) (&create_report_scalar_common_1[12]))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_field_name_0)),
    ((MR_Box) (&create_report_scalar_common_2[16]))
  },
  /* row 18 */
  {
    ((MR_Box) (&create_report_scalar_common_5[4])),
    ((MR_Box) (create_report__create_proc_callers_report_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&create_report_scalar_common_9[1])),
    ((MR_Box) (create_report__maybe_create_procrep_coverage_report_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&create_report_scalar_common_10[0])),
    ((MR_Box) (create_report__create_program_modules_report_2_p_0_1)),
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
    ((MR_Box) ((MR_String) "No coverage information available"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "get_recursive_csd_cost: unhandled recursion type"))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "get_recursive_csd_cost called for non-recursive clique"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "Information about module representations is not available.\n"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "invalid clique_ptr"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "invalid proc_dynamic index"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "invalid call_site_static index"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "invalid call_site_dynamic index"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box create_report_scalar_common_4[17][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&report__report__type_ctor_info_clique_proc_report_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0))
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
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__create_report__type_ctor_info_call_site_callee_perf_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&create_report__set_ordlist__pti_set_ordlist_1__plain_exclude__type_ctor_info_exclude_spec_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_call_site_desc_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__plain_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__plain_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&report__report__type_ctor_info_data_struct_name_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0))
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

static /* final */ const MR_Box create_report_scalar_common_5[5][5] = {
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

static /* final */ const MR_Box create_report_scalar_common_6[6][6] = {
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

static /* final */ const MR_Box create_report_scalar_common_7[1][12] = {
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



static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &create_report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &create_report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &create_report__analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_array_slot_0
  }
};

static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  {
    (MR_TypeInfo) &analysis_utils__analysis_utils__type_ctor_info_callee_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &create_report__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__maybe__pti_maybe_error_2__plain_report__type_ctor_info_var_use_and_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_var_use_and_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_clique_desc_0
  }
};

static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__set_ordlist__pti_set_ordlist_1__plain_exclude__type_ctor_info_exclude_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &exclude__exclude__type_ctor_info_exclude_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0,
    (MR_PseudoTypeInfo) &create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_call_site_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_call_site_desc_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0,
    (MR_PseudoTypeInfo) &create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_builtin__type_ctor_info_string_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
    (MR_PseudoTypeInfo) &coverage__coverage__type_ctor_info_coverage_point_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_module_data_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_module_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_module_active_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_active_0
  }
};

static const MR_FA_TypeInfo_Struct2 create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_TypeInfo) &create_report__create_report__type_ctor_info_gs_field_raw_data_0,
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

static const MR_FA_TypeInfo_Struct2 create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_TypeInfo) &create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__plain_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_data_struct_name_0,
    (MR_PseudoTypeInfo) &create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_PseudoTypeInfo) &create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
  }
};

static const MR_FA_TypeInfo_Struct1 create_report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_proc_desc_0
  }
};

static const MR_FA_TypeInfo_Struct1 create_report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

static const MR_FA_TypeInfo_Struct2 create_report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_TypeInfo) &create_report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
    (MR_TypeInfo) &create_report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &report__report__type_ctor_info_field_name_0,
    (MR_PseudoTypeInfo) &create_report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__report__pti_gs_field_info_2__plain_create_report__type_ctor_info_gs_field_raw_data_0__plain_unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_PseudoTypeInfo) &create_report__create_report__type_ctor_info_gs_field_raw_data_0,
    (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__report__pti_gs_field_info_2__plain_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0__plain_report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_PseudoTypeInfo) &create_report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
    (MR_PseudoTypeInfo) &create_report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0
  }
};

static const MR_PseudoTypeInfo create_report__create_report__field_types_call_site_callee_perf_0_0[3] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
};

static const MR_ConstString create_report__create_report__field_names_call_site_callee_perf_0_0[3] = {
  (MR_String) "cscpi_callee",
  (MR_String) "cscpi_own_prof_info",
  (MR_String) "cscpi_inherit_prof_info"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr create_report__create_report__du_stag_ordered_call_site_callee_perf_0_0[1] = {
  &create_report__create_report__du_functor_desc_call_site_callee_perf_0_0
};

static const MR_DuPtagLayout create_report__create_report__du_ptag_ordered_call_site_callee_perf_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    create_report__create_report__du_stag_ordered_call_site_callee_perf_0_0
  }
};

static const MR_DuFunctorDescPtr create_report__create_report__du_name_ordered_call_site_callee_perf_0[1] = {
  &create_report__create_report__du_functor_desc_call_site_callee_perf_0_0
};

static const MR_Integer create_report__create_report__functor_number_map_call_site_callee_perf_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_call_site_callee_perf_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo create_report__create_report__field_types_gs_field_raw_data_0_0[3] = {
  (MR_PseudoTypeInfo) &report__report__type_ctor_info_proc_desc_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0,
  (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
};

static const MR_ConstString create_report__create_report__field_names_gs_field_raw_data_0_0[3] = {
  (MR_String) "gs_raw_proc",
  (MR_String) "gs_raw_own",
  (MR_String) "gs_raw_desc"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr create_report__create_report__du_stag_ordered_gs_field_raw_data_0_0[1] = {
  &create_report__create_report__du_functor_desc_gs_field_raw_data_0_0
};

static const MR_DuPtagLayout create_report__create_report__du_ptag_ordered_gs_field_raw_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    create_report__create_report__du_stag_ordered_gs_field_raw_data_0_0
  }
};

static const MR_DuFunctorDescPtr create_report__create_report__du_name_ordered_gs_field_raw_data_0[1] = {
  &create_report__create_report__du_functor_desc_gs_field_raw_data_0_0
};

static const MR_Integer create_report__create_report__functor_number_map_gs_field_raw_data_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_gs_field_raw_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct2 create_report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &report__report__type_ctor_info_data_struct_name_0,
    (MR_TypeInfo) &create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0
  }
};

const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_raw_gs_ds_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_raw_gs_field_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_raw_gs_field_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0_10001(
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = create_report____Unify____call_site_callee_perf_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0_10001(
  MR_Box * create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3)
{
  {
    MR_Word create_report__conv0_HeadVar__1_1;

    {
      create_report____Compare____call_site_callee_perf_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0_10001(
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = create_report____Unify____gs_field_raw_data_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0_10001(
  MR_Box * create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3)
{
  {
    MR_Word create_report__conv0_HeadVar__1_1;

    {
      create_report____Compare____gs_field_raw_data_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0_10001(
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = create_report____Unify____raw_gs_ds_map_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0_10001(
  MR_Box * create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3)
{
  {
    MR_Word create_report__conv0_HeadVar__1_1;

    {
      create_report____Compare____raw_gs_ds_map_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0_10001(
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = create_report____Unify____raw_gs_field_info_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0_10001(
  MR_Box * create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3)
{
  {
    MR_Word create_report__conv0_HeadVar__1_1;

    {
      create_report____Compare____raw_gs_field_info_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0_10001(
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = create_report____Unify____raw_gs_field_map_0_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0_10001(
  MR_Box * create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3)
{
  {
    MR_Word create_report__conv0_HeadVar__1_1;

    {
      create_report____Compare____raw_gs_field_map_0_0(&create_report__conv0_HeadVar__1_1, ((MR_Word) create_report__wrapper_arg_2), ((MR_Word) create_report__wrapper_arg_3));
    }
    *create_report__wrapper_arg_1 = ((MR_Box) (create_report__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(
  MR_Word create_report__Deep_6,
  MR_Box create_report__Subject_7,
  MR_Word create_report__Own_8,
  MR_Word create_report__MaybeDesc_9,
  MR_Word * create_report__RowData_10)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__ProfileStats_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 0)));
    MR_Integer create_report__TicksPerSec_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 5)));
    MR_Integer create_report__WordSize_13;
    MR_Word create_report__Root_14;
    MR_Integer create_report__RootQuanta_15;
    MR_Integer create_report__RootCallseqs_16;
    MR_Integer create_report__RootAllocs_17;
    MR_Integer create_report__RootWords_18;
    MR_Integer create_report__Calls_19;
    MR_Integer create_report__Exits_20;
    MR_Integer create_report__Fails_21;
    MR_Integer create_report__Redos_22;
    MR_Integer create_report__Excps_23;
    MR_Integer create_report__SelfTicks_24;
    MR_Word create_report__SelfTime_25;
    MR_Word create_report__SelfTimePercent_26;
    MR_Word create_report__SelfTimePerCall_27;
    MR_Integer create_report__SelfCallseqs_28;
    MR_Word create_report__SelfCallseqsPercent_29;
    MR_Float create_report__SelfCallseqsPerCall_30;
    MR_Integer create_report__SelfAllocs_31;
    MR_Word create_report__SelfAllocsPercent_32;
    MR_Float create_report__SelfAllocsPerCall_33;
    MR_Integer create_report__SelfWords_34;
    MR_Word create_report__SelfMemory_35;
    MR_Word create_report__SelfMemoryPercent_36;
    MR_Word create_report__SelfMemoryPerCall_37;
    MR_Word create_report__SelfPerf_38;
    MR_Word create_report__MaybeTotalPerf_39;
    MR_Word create_report__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 9)));
    MR_String create_report__Var_62 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 1)));
    MR_String create_report__Var_63 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 2)));
    MR_String create_report__Var_64 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 3)));
    MR_Word create_report__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 4)));
    MR_ArrayPtr create_report__Var_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 5)));
    MR_ArrayPtr create_report__Var_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 6)));
    MR_ArrayPtr create_report__Var_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 7)));
    MR_ArrayPtr create_report__Var_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 8)));
    MR_ArrayPtr create_report__Var_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 9)));
    MR_ArrayPtr create_report__Var_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 10)));
    MR_ArrayPtr create_report__Var_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 11)));
    MR_ArrayPtr create_report__Var_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 12)));
    MR_ArrayPtr create_report__Var_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 13)));
    MR_ArrayPtr create_report__Var_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 14)));
    MR_ArrayPtr create_report__Var_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 15)));
    MR_ArrayPtr create_report__Var_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 16)));
    MR_ArrayPtr create_report__Var_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 17)));
    MR_ArrayPtr create_report__Var_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 18)));
    MR_ArrayPtr create_report__Var_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 19)));
    MR_ArrayPtr create_report__Var_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 20)));
    MR_ArrayPtr create_report__Var_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 21)));
    MR_ArrayPtr create_report__Var_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 22)));
    MR_ArrayPtr create_report__Var_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 23)));
    MR_ArrayPtr create_report__Var_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 24)));
    MR_Word create_report__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 25)));
    MR_Word create_report__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 26)));
    MR_Word create_report__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 27)));
    MR_Word create_report__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_6, (MR_Integer) 28)));
    MR_String create_report__Var_90 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 0)));
    MR_Integer create_report__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 1)));
    MR_Integer create_report__Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 2)));
    MR_Integer create_report__Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 3)));
    MR_Integer create_report__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 4)));
    MR_Integer create_report__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 6)));
    MR_Integer create_report__Var_96 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 7)));
    MR_Integer create_report__Var_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProfileStats_11, (MR_Integer) 8)));
    MR_Word create_report__Var_108;
    MR_Word create_report__Var_110;

    create_report__WordSize_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Var_98, (MR_Integer) 0)));
    create_report__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_98, (MR_Integer) 1)));
    create_report__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_98, (MR_Integer) 3)));
    {
      create_report__Root_14 = profile__root_total_info_1_f_0(create_report__Deep_6);
    }
    {
      create_report__RootQuanta_15 = measurements__inherit_quanta_1_f_0(create_report__Root_14);
    }
    {
      create_report__RootCallseqs_16 = measurements__inherit_callseqs_1_f_0(create_report__Root_14);
    }
    {
      create_report__RootAllocs_17 = measurements__inherit_allocs_1_f_0(create_report__Root_14);
    }
    {
      create_report__RootWords_18 = measurements__inherit_words_1_f_0(create_report__Root_14);
    }
    {
      create_report__Calls_19 = measurements__calls_1_f_0(create_report__Own_8);
    }
    {
      create_report__Exits_20 = measurements__exits_1_f_0(create_report__Own_8);
    }
    {
      create_report__Fails_21 = measurements__fails_1_f_0(create_report__Own_8);
    }
    {
      create_report__Redos_22 = measurements__redos_1_f_0(create_report__Own_8);
    }
    {
      create_report__Excps_23 = measurements__excps_1_f_0(create_report__Own_8);
    }
    {
      create_report__SelfTicks_24 = measurements__quanta_1_f_0(create_report__Own_8);
    }
    {
      create_report__SelfTime_25 = measurement_units__ticks_to_time_2_f_0(create_report__SelfTicks_24, create_report__TicksPerSec_12);
    }
    {
      create_report__SelfTimePercent_26 = create_report__percent_from_ints_2_f_0(create_report__SelfTicks_24, create_report__RootQuanta_15);
    }
    {
      create_report__SelfTimePerCall_27 = measurement_units__time_percall_2_f_0(create_report__SelfTime_25, create_report__Calls_19);
    }
    {
      create_report__SelfCallseqs_28 = measurements__callseqs_1_f_0(create_report__Own_8);
    }
    {
      create_report__SelfCallseqsPercent_29 = create_report__percent_from_ints_2_f_0(create_report__SelfCallseqs_28, create_report__RootCallseqs_16);
    }
    {
      create_report__SelfCallseqsPerCall_30 = create_report__int_per_call_2_f_0(create_report__SelfCallseqs_28, create_report__Calls_19);
    }
    {
      create_report__SelfAllocs_31 = measurements__allocs_1_f_0(create_report__Own_8);
    }
    {
      create_report__SelfAllocsPercent_32 = create_report__percent_from_ints_2_f_0(create_report__SelfAllocs_31, create_report__RootAllocs_17);
    }
    {
      create_report__SelfAllocsPerCall_33 = create_report__int_per_call_2_f_0(create_report__SelfAllocs_31, create_report__Calls_19);
    }
    {
      create_report__SelfWords_34 = measurements__words_1_f_0(create_report__Own_8);
    }
    {
      create_report__SelfMemory_35 = measurement_units__memory_words_2_f_0(create_report__SelfWords_34, create_report__WordSize_13);
    }
    {
      create_report__SelfMemoryPercent_36 = create_report__percent_from_ints_2_f_0(create_report__SelfWords_34, create_report__RootWords_18);
    }
    {
      create_report__SelfMemoryPerCall_37 = measurement_units__f_slash_2_f_0(create_report__SelfMemory_35, create_report__Calls_19);
    }
    {
      create_report__SelfPerf_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 0) = ((MR_Box) (create_report__SelfTicks_24));
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 1) = ((MR_Box) (create_report__SelfTime_25));
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 2) = ((MR_Box) (create_report__SelfTimePercent_26));
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 3) = ((MR_Box) (create_report__SelfTimePerCall_27));
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 4) = ((MR_Box) (create_report__SelfCallseqs_28));
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 5) = ((MR_Box) (create_report__SelfCallseqsPercent_29));
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 6) = MR_box_float(create_report__SelfCallseqsPerCall_30);
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 7) = ((MR_Box) (create_report__SelfAllocs_31));
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 8) = ((MR_Box) (create_report__SelfAllocsPercent_32));
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 9) = MR_box_float(create_report__SelfAllocsPerCall_33);
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 10) = ((MR_Box) (create_report__SelfMemory_35));
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 11) = ((MR_Box) (create_report__SelfMemoryPercent_36));
      MR_hl_field(MR_mktag(0), create_report__SelfPerf_38, 12) = ((MR_Box) (create_report__SelfMemoryPerCall_37));
    }
    if ((create_report__MaybeDesc_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      create_report__MaybeTotalPerf_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word create_report__Desc_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__MaybeDesc_9, (MR_Integer) 0)));
        MR_Integer create_report__TotalTicks_41;
        MR_Word create_report__TotalTime_42;
        MR_Word create_report__TotalTimePercent_43;
        MR_Word create_report__TotalTimePerCall_44;
        MR_Integer create_report__TotalCallseqs_45;
        MR_Word create_report__TotalCallseqsPercent_46;
        MR_Float create_report__TotalCallseqsPerCall_47;
        MR_Integer create_report__TotalAllocs_48;
        MR_Word create_report__TotalAllocsPercent_49;
        MR_Float create_report__TotalAllocsPerCall_50;
        MR_Integer create_report__TotalWords_51;
        MR_Word create_report__TotalMemory_52;
        MR_Word create_report__TotalMemoryPercent_53;
        MR_Word create_report__TotalMemoryPerCall_54;
        MR_Word create_report__TotalPerf_55;
        MR_Integer create_report__Var_57;
        MR_Integer create_report__Var_58;
        MR_Integer create_report__Var_59;
        MR_Integer create_report__Var_60;
        MR_Integer create_report__Var_61;

        {
          create_report__Var_57 = measurements__inherit_quanta_1_f_0(create_report__Desc_40);
        }
        create_report__TotalTicks_41 = (create_report__SelfTicks_24 + create_report__Var_57);
        {
          create_report__TotalTime_42 = measurement_units__ticks_to_time_2_f_0(create_report__TotalTicks_41, create_report__TicksPerSec_12);
        }
        {
          create_report__TotalTimePercent_43 = create_report__percent_from_ints_2_f_0(create_report__TotalTicks_41, create_report__RootQuanta_15);
        }
        {
          create_report__TotalTimePerCall_44 = measurement_units__time_percall_2_f_0(create_report__TotalTime_42, create_report__Calls_19);
        }
        {
          create_report__Var_58 = measurements__callseqs_1_f_0(create_report__Own_8);
        }
        {
          create_report__Var_59 = measurements__inherit_callseqs_1_f_0(create_report__Desc_40);
        }
        create_report__TotalCallseqs_45 = (create_report__Var_58 + create_report__Var_59);
        {
          create_report__TotalCallseqsPercent_46 = create_report__percent_from_ints_2_f_0(create_report__TotalCallseqs_45, create_report__RootCallseqs_16);
        }
        {
          create_report__TotalCallseqsPerCall_47 = create_report__int_per_call_2_f_0(create_report__TotalCallseqs_45, create_report__Calls_19);
        }
        {
          create_report__Var_60 = measurements__inherit_allocs_1_f_0(create_report__Desc_40);
        }
        create_report__TotalAllocs_48 = (create_report__SelfAllocs_31 + create_report__Var_60);
        {
          create_report__TotalAllocsPercent_49 = create_report__percent_from_ints_2_f_0(create_report__TotalAllocs_48, create_report__RootAllocs_17);
        }
        {
          create_report__TotalAllocsPerCall_50 = create_report__int_per_call_2_f_0(create_report__TotalAllocs_48, create_report__Calls_19);
        }
        {
          create_report__Var_61 = measurements__inherit_words_1_f_0(create_report__Desc_40);
        }
        create_report__TotalWords_51 = (create_report__SelfWords_34 + create_report__Var_61);
        {
          create_report__TotalMemory_52 = measurement_units__memory_words_2_f_0(create_report__TotalWords_51, create_report__WordSize_13);
        }
        {
          create_report__TotalMemoryPercent_53 = create_report__percent_from_ints_2_f_0(create_report__TotalWords_51, create_report__RootWords_18);
        }
        {
          create_report__TotalMemoryPerCall_54 = measurement_units__f_slash_2_f_0(create_report__TotalMemory_52, create_report__Calls_19);
        }
        {
          create_report__TotalPerf_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 0) = ((MR_Box) (create_report__TotalTicks_41));
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 1) = ((MR_Box) (create_report__TotalTime_42));
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 2) = ((MR_Box) (create_report__TotalTimePercent_43));
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 3) = ((MR_Box) (create_report__TotalTimePerCall_44));
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 4) = ((MR_Box) (create_report__TotalCallseqs_45));
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 5) = ((MR_Box) (create_report__TotalCallseqsPercent_46));
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 6) = MR_box_float(create_report__TotalCallseqsPerCall_47);
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 7) = ((MR_Box) (create_report__TotalAllocs_48));
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 8) = ((MR_Box) (create_report__TotalAllocsPercent_49));
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 9) = MR_box_float(create_report__TotalAllocsPerCall_50);
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 10) = ((MR_Box) (create_report__TotalMemory_52));
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 11) = ((MR_Box) (create_report__TotalMemoryPercent_53));
          MR_hl_field(MR_mktag(0), create_report__TotalPerf_55, 12) = ((MR_Box) (create_report__TotalMemoryPerCall_54));
        }
        {
          create_report__MaybeTotalPerf_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), create_report__MaybeTotalPerf_39, 0) = ((MR_Box) (create_report__TotalPerf_55));
        }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      *create_report__RowData_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = create_report__Subject_7;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__Calls_19));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (create_report__Exits_20));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (create_report__Fails_21));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (create_report__Redos_22));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (create_report__Excps_23));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (create_report__WordSize_13));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (create_report__SelfPerf_38));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (create_report__MaybeTotalPerf_39));
    }
  }
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__RawData_7,
  MR_Word * create_report__Data_8)
{
  {
    MR_bool create_report__succeeded;

    switch (MR_tag((MR_Word) create_report__RawData_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word create_report__RawGetter_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawData_7, (MR_Integer) 0)));
          MR_Word create_report__RawSetter_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawData_7, (MR_Integer) 1)));
          MR_Word create_report__GetterProcDesc_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_9, (MR_Integer) 0)));
          MR_Word create_report__GetterOwn_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_9, (MR_Integer) 1)));
          MR_Word create_report__GetterDesc_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_9, (MR_Integer) 2)));
          MR_Word create_report__SetterProcDesc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_10, (MR_Integer) 0)));
          MR_Word create_report__SetterOwn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_10, (MR_Integer) 1)));
          MR_Word create_report__SetterDesc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_10, (MR_Integer) 2)));
          MR_Word create_report__GetterRowData_18;
          MR_Word create_report__SetterRowData_19;
          MR_Word create_report__SumOwn_20;
          MR_Word create_report__SumDesc_21;
          MR_Word create_report__SumRowData_22;
          MR_Word create_report__Var_43;
          MR_Word create_report__Var_49;
          MR_Word create_report__Var_55;

          {
            create_report__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), create_report__Var_43, 0) = ((MR_Box) (create_report__GetterDesc_14));
          }
          {
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__GetterProcDesc_12)), create_report__GetterOwn_13, create_report__Var_43, &create_report__GetterRowData_18);
          }
          {
            create_report__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), create_report__Var_49, 0) = ((MR_Box) (create_report__SetterDesc_17));
          }
          {
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__SetterProcDesc_15)), create_report__SetterOwn_16, create_report__Var_49, &create_report__SetterRowData_19);
          }
          {
            create_report__SumOwn_20 = measurements__add_own_to_own_2_f_0(create_report__GetterOwn_13, create_report__SetterOwn_16);
          }
          {
            create_report__SumDesc_21 = measurements__add_inherit_to_inherit_2_f_0(create_report__GetterDesc_14, create_report__SetterDesc_17);
          }
          mercury__private_builtin__dummy_var = (MR_Integer) 0;
          {
            create_report__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), create_report__Var_55, 0) = ((MR_Box) (create_report__SumDesc_21));
          }
          {
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) ((MR_Integer) 0)), create_report__SumOwn_20, create_report__Var_55, &create_report__SumRowData_22);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *create_report__Data_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__GetterRowData_18));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__SetterRowData_19));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (create_report__SumRowData_22));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word create_report__RawGetter_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__RawData_7, (MR_Integer) 0)));
          MR_Word create_report__GetterProcDesc_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_24, (MR_Integer) 0)));
          MR_Word create_report__GetterOwn_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_24, (MR_Integer) 1)));
          MR_Word create_report__GetterDesc_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawGetter_24, (MR_Integer) 2)));
          MR_Word create_report__GetterRowData_28;
          MR_Word create_report__Var_61;

          {
            create_report__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), create_report__Var_61, 0) = ((MR_Box) (create_report__GetterDesc_27));
          }
          {
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__GetterProcDesc_25)), create_report__GetterOwn_26, create_report__Var_61, &create_report__GetterRowData_28);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *create_report__Data_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__GetterRowData_28));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word create_report__RawSetter_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__RawData_7, (MR_Integer) 0)));
          MR_Word create_report__SetterProcDesc_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_29, (MR_Integer) 0)));
          MR_Word create_report__SetterOwn_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_29, (MR_Integer) 1)));
          MR_Word create_report__SetterDesc_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RawSetter_29, (MR_Integer) 2)));
          MR_Word create_report__SetterRowData_33;
          MR_Word create_report__Var_67;

          {
            create_report__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), create_report__Var_67, 0) = ((MR_Box) (create_report__SetterDesc_32));
          }
          {
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__SetterProcDesc_30)), create_report__SetterOwn_31, create_report__Var_67, &create_report__SetterRowData_33);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *create_report__Data_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (create_report__SetterRowData_33));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_Data_8;

    {
      create_report__getter_setter_raw_data_to_info_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_Data_8);
    }
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_Data_8));
  }
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__RawMap_7,
  MR_Word * create_report__Map_8)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__Var_9;

    {
      create_report__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__Var_9, 0) = ((MR_Box) (&create_report_scalar_common_4[16]));
      MR_hl_field(MR_mktag(0), create_report__Var_9, 1) = ((MR_Box) (create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0_1));
      MR_hl_field(MR_mktag(0), create_report__Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), create_report__Var_9, 3) = ((MR_Box) (create_report__Deep_5));
    }
    {
      mercury__map__map_values_3_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[13], (MR_Word) &create_report_scalar_common_2[16], create_report__Var_9, create_report__RawMap_7, create_report__Map_8);
    }
  }
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word create_report__HeadVar__1_1,
  MR_Word * create_report__HeadVar__2_2)
{
  {
    MR_bool create_report__succeeded;

    if ((create_report__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *create_report__HeadVar__2_2 = (MR_Word) &create_report_scalar_common_3[10];
      }
    else
      {
        MR_Word create_report__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word create_report__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__HeadVar__1_1, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) create_report__Var_17)) == (MR_mktag((MR_Integer) 1))))
          *create_report__HeadVar__2_2 = (MR_Word) create_report__Var_17;
        else
          {
            MR_Box create_report__X_7 = (MR_hl_field(MR_mktag(0), create_report__Var_17, (MR_Integer) 0));
            MR_Word create_report__MaybeXs1_10;

            {
              create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(create_report__Var_16, &create_report__MaybeXs1_10);
            }
            if (((MR_tag((MR_Word) create_report__MaybeXs1_10)) == (MR_mktag((MR_Integer) 1))))
              *create_report__HeadVar__2_2 = create_report__MaybeXs1_10;
            else
              {
                MR_Word create_report__Xs1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeXs1_10, (MR_Integer) 0)));
                MR_Word create_report__Var_14;

                {
                  create_report__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), create_report__Var_14, 0) = create_report__X_7;
                  MR_hl_field(MR_mktag(1), create_report__Var_14, 1) = ((MR_Box) (create_report__Xs1_11));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *create_report__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__Var_14));
                }
              }
          }
      }
  }
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_CliqueCallSiteReport_6;

    {
      create_report__create_child_call_site_report_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv0_CliqueCallSiteReport_6);
    }
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_CliqueCallSiteReport_6));
  }
}

static MR_bool MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box create_report__closure_arg)
{
  {
    MR_bool create_report__succeeded;
    MR_Box create_report__closure = create_report__closure_arg;

    {
      create_report__succeeded = create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__439__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(
  MR_Word create_report__Deep_8,
  MR_Word create_report__ProcDesc_10,
  MR_Word create_report__PDPtr_11,
  MR_Word * create_report__Own_12,
  MR_Word * create_report__Desc_13,
  MR_Word * create_report__CliquePDReport_14)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = profile__valid_proc_dynamic_ptr_2_p_0(create_report__Deep_8, create_report__PDPtr_11);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__PDRowData_15;
        MR_Word create_report__PD_16;
        MR_Word create_report__PSPtr_17;
        MR_Word create_report__CliqueCallSiteReports_18;
        MR_Word create_report__Var_19;
        MR_Word create_report__Var_21;
        MR_Word create_report__Var_38;
        MR_Word create_report__PairedSlots_42;
        MR_Word create_report__Var_43;
        MR_ArrayPtr create_report__Var_24;
        MR_Word create_report__Var_25;
        MR_String create_report__Var_26;
        MR_Integer create_report__Var_27;
        MR_String create_report__Var_28;
        MR_String create_report__Var_29;
        MR_String create_report__Var_30;

        {
          profile__deep_lookup_pd_own_3_p_0(create_report__Deep_8, create_report__PDPtr_11, create_report__Own_12);
        }
        {
          profile__deep_lookup_pd_desc_3_p_0(create_report__Deep_8, create_report__PDPtr_11, create_report__Desc_13);
        }
        {
          create_report__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), create_report__Var_38, 0) = ((MR_Box) (*create_report__Desc_13));
        }
        {
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_8, ((MR_Box) (create_report__ProcDesc_10)), *create_report__Own_12, create_report__Var_38, &create_report__PDRowData_15);
        }
        {
          profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_8, create_report__PDPtr_11, &create_report__PD_16);
        }
        create_report__PSPtr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_16, (MR_Integer) 0)));
        create_report__Var_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_16, (MR_Integer) 1)));
        create_report__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_16, (MR_Integer) 2)));
        create_report__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 0)));
        create_report__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 1)));
        create_report__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 2)));
        create_report__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 3)));
        create_report__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 4)));
        create_report__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ProcDesc_10, (MR_Integer) 5)));
        {
          create_report__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_19, 0) = ((MR_Box) (&create_report_scalar_common_5[3]));
          MR_hl_field(MR_mktag(0), create_report__Var_19, 1) = ((MR_Box) (create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_1));
          MR_hl_field(MR_mktag(0), create_report__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), create_report__Var_19, 3) = ((MR_Box) (create_report__PSPtr_17));
          MR_hl_field(MR_mktag(0), create_report__Var_19, 4) = ((MR_Box) (create_report__Var_21));
        }
        {
          mercury__require__require_2_p_0(create_report__Var_19, (MR_String) "create_clique_proc_dynamic_report: psptr mismatch");
        }
        {
          analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(create_report__Deep_8, create_report__PDPtr_11, &create_report__PairedSlots_42);
        }
        {
          create_report__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_43, 0) = ((MR_Box) (&create_report_scalar_common_6[5]));
          MR_hl_field(MR_mktag(0), create_report__Var_43, 1) = ((MR_Box) (create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_2));
          MR_hl_field(MR_mktag(0), create_report__Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), create_report__Var_43, 3) = ((MR_Box) (create_report__Deep_8));
        }
        {
          mercury__list__map_3_p_0((MR_Word) &create_report_scalar_common_2[3], (MR_Word) &report__report__type_ctor_info_clique_call_site_report_0, create_report__Var_43, create_report__PairedSlots_42, &create_report__CliqueCallSiteReports_18);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *create_report__CliquePDReport_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__PDRowData_15));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__CliqueCallSiteReports_18));
        }
      }
    else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_clique_proc_dynamic_report\'/7", (MR_String) "invalid proc_dynamic index");
          return;
        }
      }
  }
}

static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_call_site_summary__591__1_2_p_0(
  MR_Word create_report__CalleePSPtr_13,
  MR_Word create_report__CalleePSPtrFromCall_21)
{
  {
    MR_bool create_report__succeeded;
    MR_Integer create_report__Var_134 = (MR_Integer) create_report__CalleePSPtr_13;
    MR_Integer create_report__Var_135 = (MR_Integer) create_report__CalleePSPtrFromCall_21;

    create_report__succeeded = (create_report__Var_134 == create_report__Var_135);
    return create_report__succeeded;
  }
}

static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__439__1_2_p_0(
  MR_Word create_report__PSPtr_17,
  MR_Word create_report__HeadVar__2_21)
{
  {
    MR_bool create_report__succeeded;
    MR_Integer create_report__Var_33 = (MR_Integer) create_report__PSPtr_17;
    MR_Integer create_report__Var_34 = (MR_Integer) create_report__HeadVar__2_21;

    create_report__succeeded = (create_report__Var_33 == create_report__Var_34);
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0(
  MR_Word * create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2,
  MR_Word create_report__HeadVar__3_3)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__Cast_HeadVar1_4 = create_report__HeadVar__2_2;
    MR_Word create_report__Cast_HeadVar2_5 = create_report__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &create_report_scalar_common_2[14], create_report__HeadVar__1_1, ((MR_Box) (create_report__Cast_HeadVar1_4)), ((MR_Box) (create_report__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0(
  MR_Word create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__Cast_HeadVar1_3 = create_report__HeadVar__1_1;
    MR_Word create_report__Cast_HeadVar2_4 = create_report__HeadVar__2_2;

    {
      create_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &create_report_scalar_common_2[14], ((MR_Box) (create_report__Cast_HeadVar1_3)), ((MR_Box) (create_report__Cast_HeadVar2_4)));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0(
  MR_Word * create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2,
  MR_Word create_report__HeadVar__3_3)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__Cast_HeadVar1_4 = create_report__HeadVar__2_2;
    MR_Word create_report__Cast_HeadVar2_5 = create_report__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &create_report_scalar_common_2[13], create_report__HeadVar__1_1, ((MR_Box) (create_report__Cast_HeadVar1_4)), ((MR_Box) (create_report__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0(
  MR_Word create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__Cast_HeadVar1_3 = create_report__HeadVar__1_1;
    MR_Word create_report__Cast_HeadVar2_4 = create_report__HeadVar__2_2;

    {
      create_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &create_report_scalar_common_2[13], ((MR_Box) (create_report__Cast_HeadVar1_3)), ((MR_Box) (create_report__Cast_HeadVar2_4)));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0(
  MR_Word * create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2,
  MR_Word create_report__HeadVar__3_3)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__Cast_HeadVar1_4 = create_report__HeadVar__2_2;
    MR_Word create_report__Cast_HeadVar2_5 = create_report__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &create_report_scalar_common_2[15], create_report__HeadVar__1_1, ((MR_Box) (create_report__Cast_HeadVar1_4)), ((MR_Box) (create_report__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0(
  MR_Word create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__Cast_HeadVar1_3 = create_report__HeadVar__1_1;
    MR_Word create_report__Cast_HeadVar2_4 = create_report__HeadVar__2_2;

    {
      create_report__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &create_report_scalar_common_2[15], ((MR_Box) (create_report__Cast_HeadVar1_3)), ((MR_Box) (create_report__Cast_HeadVar2_4)));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0(
  MR_Word * create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2,
  MR_Word create_report__HeadVar__3_3)
{
  {
    MR_bool create_report__succeeded;
    MR_Integer create_report__CastX_12 = (MR_Integer) create_report__HeadVar__2_2;
    MR_Integer create_report__CastY_13 = (MR_Integer) create_report__HeadVar__3_3;

    create_report__succeeded = (create_report__CastX_12 == create_report__CastY_13);
    if (create_report__succeeded)
      *create_report__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word create_report__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word create_report__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word create_report__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word create_report__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word create_report__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word create_report__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word create_report__Var_10;

        {
          report____Compare____proc_desc_0_0(&create_report__Var_10, create_report__Var_4, create_report__Var_7);
        }
        create_report__succeeded = (create_report__Var_10 == (MR_Integer) 0);
        create_report__succeeded = !(create_report__succeeded);
        if (create_report__succeeded)
          *create_report__HeadVar__1_1 = create_report__Var_10;
        else
          {
            MR_Word create_report__Var_11;

            {
              measurements____Compare____own_prof_info_0_0(&create_report__Var_11, create_report__Var_5, create_report__Var_8);
            }
            create_report__succeeded = (create_report__Var_11 == (MR_Integer) 0);
            create_report__succeeded = !(create_report__succeeded);
            if (create_report__succeeded)
              *create_report__HeadVar__1_1 = create_report__Var_11;
            else
              {
                measurements____Compare____inherit_prof_info_0_0(create_report__HeadVar__1_1, create_report__Var_6, create_report__Var_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0(
  MR_Word create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2)
{
  {
    MR_bool create_report__succeeded;
    MR_Integer create_report__CastX_9 = (MR_Integer) create_report__HeadVar__1_1;
    MR_Integer create_report__CastY_10 = (MR_Integer) create_report__HeadVar__2_2;

    create_report__succeeded = (create_report__CastX_9 == create_report__CastY_10);
    if (create_report__succeeded)
      create_report__succeeded = MR_TRUE;
    else
      {
        MR_Word create_report__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word create_report__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word create_report__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word create_report__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word create_report__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word create_report__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 2)));

        {
          create_report__succeeded = report____Unify____proc_desc_0_0(create_report__Var_3, create_report__Var_6);
        }
        if (create_report__succeeded)
          {
            {
              create_report__succeeded = measurements____Unify____own_prof_info_0_0(create_report__Var_4, create_report__Var_7);
            }
            if (create_report__succeeded)
              {
                create_report__succeeded = measurements____Unify____inherit_prof_info_0_0(create_report__Var_5, create_report__Var_8);
              }
          }
      }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0(
  MR_Word * create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2,
  MR_Word create_report__HeadVar__3_3)
{
  {
    MR_bool create_report__succeeded;
    MR_Integer create_report__CastX_12 = (MR_Integer) create_report__HeadVar__2_2;
    MR_Integer create_report__CastY_13 = (MR_Integer) create_report__HeadVar__3_3;

    create_report__succeeded = (create_report__CastX_12 == create_report__CastY_13);
    if (create_report__succeeded)
      *create_report__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word create_report__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word create_report__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word create_report__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word create_report__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word create_report__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word create_report__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word create_report__Var_10;
        MR_Integer create_report__Var_17 = (MR_Integer) create_report__Var_4;
        MR_Integer create_report__Var_18 = (MR_Integer) create_report__Var_7;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&create_report__Var_10, create_report__Var_17, create_report__Var_18);
        }
        create_report__succeeded = (create_report__Var_10 == (MR_Integer) 0);
        create_report__succeeded = !(create_report__succeeded);
        if (create_report__succeeded)
          *create_report__HeadVar__1_1 = create_report__Var_10;
        else
          {
            MR_Word create_report__Var_11;

            {
              measurements____Compare____own_prof_info_0_0(&create_report__Var_11, create_report__Var_5, create_report__Var_8);
            }
            create_report__succeeded = (create_report__Var_11 == (MR_Integer) 0);
            create_report__succeeded = !(create_report__succeeded);
            if (create_report__succeeded)
              *create_report__HeadVar__1_1 = create_report__Var_11;
            else
              {
                measurements____Compare____inherit_prof_info_0_0(create_report__HeadVar__1_1, create_report__Var_6, create_report__Var_9);
              }
          }
      }
  }
}

static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0(
  MR_Word create_report__HeadVar__1_1,
  MR_Word create_report__HeadVar__2_2)
{
  {
    MR_bool create_report__succeeded;
    MR_Integer create_report__CastX_9 = (MR_Integer) create_report__HeadVar__1_1;
    MR_Integer create_report__CastY_10 = (MR_Integer) create_report__HeadVar__2_2;

    create_report__succeeded = (create_report__CastX_9 == create_report__CastY_10);
    if (create_report__succeeded)
      create_report__succeeded = MR_TRUE;
    else
      {
        MR_Word create_report__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word create_report__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word create_report__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word create_report__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word create_report__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word create_report__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer create_report__Var_14 = (MR_Integer) create_report__Var_3;
        MR_Integer create_report__Var_15 = (MR_Integer) create_report__Var_6;

        create_report__succeeded = (create_report__Var_14 == create_report__Var_15);
        if (create_report__succeeded)
          {
            {
              create_report__succeeded = measurements____Unify____own_prof_info_0_0(create_report__Var_4, create_report__Var_7);
            }
            if (create_report__succeeded)
              {
                create_report__succeeded = measurements____Unify____inherit_prof_info_0_0(create_report__Var_5, create_report__Var_8);
              }
          }
      }
    return create_report__succeeded;
  }
}

static MR_Word MR_CALL 
create_report__percent_from_ints_2_f_0(
  MR_Integer create_report__Nom_4,
  MR_Integer create_report__Denom_5)
{
  {
    MR_bool create_report__succeeded = (create_report__Denom_5 == (MR_Integer) 0);
    MR_Word create_report__Percent_6;

    if (create_report__succeeded)
      {
        {
          create_report__Percent_6 = measurement_units__percent_1_f_0((MR_Float) 0.0000000000000000);
        }
      }
    else
      {
        MR_Float create_report__Var_8;
        MR_Float create_report__Var_9;
        MR_Float create_report__Var_10;

        {
          create_report__Var_9 = mercury__float__float_1_f_0(create_report__Nom_4);
        }
        {
          create_report__Var_10 = mercury__float__float_1_f_0(create_report__Denom_5);
        }
        {
          create_report__Var_8 = mercury__float__f_slash_2_f_0(create_report__Var_9, create_report__Var_10);
        }
        {
          create_report__Percent_6 = measurement_units__percent_1_f_0(create_report__Var_8);
        }
      }
    return create_report__Percent_6;
  }
}

static MR_Float MR_CALL 
create_report__int_per_call_2_f_0(
  MR_Integer create_report__Num_4,
  MR_Integer create_report__Calls_5)
{
  {
    MR_bool create_report__succeeded = (create_report__Calls_5 == (MR_Integer) 0);
    MR_Float create_report__HeadVar__3_3;

    if (create_report__succeeded)
      create_report__HeadVar__3_3 = (MR_Float) 0.0000000000000000;
    else
      {
        MR_Float create_report__Var_6;
        MR_Float create_report__Var_7;

        {
          create_report__Var_6 = mercury__float__float_1_f_0(create_report__Num_4);
        }
        {
          create_report__Var_7 = mercury__float__float_1_f_0(create_report__Calls_5);
        }
        {
          create_report__HeadVar__3_3 = mercury__float__f_slash_2_f_0(create_report__Var_6, create_report__Var_7);
        }
      }
    return create_report__HeadVar__3_3;
  }
}

static void MR_CALL 
create_report__psi_to_perf_row_data_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Integer create_report__PSI_5,
  MR_Word * create_report__RowData_6)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__PSPtr_7 = (MR_Word) create_report__PSI_5;
    MR_Word create_report__ProcDesc_8;
    MR_Word create_report__Own_9;
    MR_Word create_report__Desc_10;
    MR_Word create_report__Var_17;

    {
      create_report__ProcDesc_8 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__PSPtr_7);
    }
    {
      profile__deep_lookup_ps_own_3_p_0(create_report__Deep_4, create_report__PSPtr_7, &create_report__Own_9);
    }
    {
      profile__deep_lookup_ps_desc_3_p_0(create_report__Deep_4, create_report__PSPtr_7, &create_report__Desc_10);
    }
    {
      create_report__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), create_report__Var_17, 0) = ((MR_Box) (create_report__Desc_10));
    }
    {
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__ProcDesc_8)), create_report__Own_9, create_report__Var_17, create_report__RowData_6);
    }
  }
}

static MR_Word MR_CALL 
create_report__describe_clique_member_2_f_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__PDPtr_5)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__ProcDesc_6;
    MR_Word create_report__PD_7;
    MR_Word create_report__Var_8;
    MR_ArrayPtr create_report__Var_9;
    MR_Word create_report__Var_10;

    {
      profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__PD_7);
    }
    create_report__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 0)));
    create_report__Var_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 1)));
    create_report__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 2)));
    {
      create_report__ProcDesc_6 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__Var_8);
    }
    return create_report__ProcDesc_6;
  }
}

static MR_Word MR_CALL 
create_report__describe_call_site_2_f_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CSSPtr_5)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__CallSiteDesc_6;
    MR_Word create_report__ContainingPSPtr_8;
    MR_Integer create_report__SlotNumber_9;
    MR_Integer create_report__LineNumber_11;
    MR_Word create_report__RevGoalPath_12;
    MR_String create_report__FileName_14;
    MR_String create_report__ModuleName_15;
    MR_String create_report__UnQualRefinedName_16;
    MR_String create_report__QualRefinedName_17;
    MR_Word create_report__MaybeCalleeDesc_21;

    {
      create_report__succeeded = profile__valid_call_site_static_ptr_2_p_0(create_report__Deep_4, create_report__CSSPtr_5);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__CSS_7;
        MR_Word create_report__Kind_10;
        MR_Word create_report__ContainingPS_13;
        MR_Word create_report__Var_22;
        MR_String create_report__Var_26;
        MR_Integer create_report__Var_27;
        MR_Word create_report__Var_28;
        MR_ArrayPtr create_report__Var_29;
        MR_ArrayPtr create_report__Var_30;
        MR_Word create_report__Var_31;
        MR_Word create_report__Var_32;

        {
          profile__deep_lookup_call_site_statics_3_p_0(create_report__Deep_4, create_report__CSSPtr_5, &create_report__CSS_7);
        }
        create_report__ContainingPSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 0)));
        create_report__SlotNumber_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 1)));
        create_report__Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 2)));
        create_report__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 3)));
        create_report__RevGoalPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 4)));
        {
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__ContainingPSPtr_8, &create_report__ContainingPS_13);
        }
        create_report__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 0)));
        create_report__ModuleName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 1)));
        create_report__UnQualRefinedName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 2)));
        create_report__QualRefinedName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 3)));
        create_report__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 4)));
        create_report__FileName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 5)));
        create_report__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 6)));
        create_report__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 7)));
        create_report__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 8)));
        create_report__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 9)));
        create_report__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 10)));
        create_report__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ContainingPS_13, (MR_Integer) 11)));
        switch (MR_tag((MR_Word) create_report__Kind_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            create_report__MaybeCalleeDesc_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word create_report__CalleePSPtr_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Kind_10, (MR_Integer) 0)));
              MR_Word create_report__CalleeDesc_20;
              MR_String create_report___TypeSubst_19 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__Kind_10, (MR_Integer) 1)));

              {
                create_report__CalleeDesc_20 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__CalleePSPtr_18);
              }
              {
                create_report__MaybeCalleeDesc_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), create_report__MaybeCalleeDesc_21, 0) = ((MR_Box) (create_report__CalleeDesc_20));
              }
            }
            break;
        }
      }
    else
      {
        {
          create_report__ContainingPSPtr_8 = profile__dummy_proc_static_ptr_0_f_0();
        }
        create_report__FileName_14 = (MR_String) "";
        create_report__LineNumber_11 = (MR_Integer) 0;
        create_report__ModuleName_15 = (MR_String) "";
        create_report__UnQualRefinedName_16 = (MR_String) "mercury_runtime";
        create_report__QualRefinedName_17 = (MR_String) "mercury_runtime";
        create_report__SlotNumber_9 = (MR_Integer) -1;
        create_report__RevGoalPath_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        create_report__MaybeCalleeDesc_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    {
      create_report__CallSiteDesc_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 0) = ((MR_Box) (create_report__CSSPtr_5));
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 1) = ((MR_Box) (create_report__ContainingPSPtr_8));
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 2) = ((MR_Box) (create_report__FileName_14));
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 3) = ((MR_Box) (create_report__LineNumber_11));
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 4) = ((MR_Box) (create_report__ModuleName_15));
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 5) = ((MR_Box) (create_report__UnQualRefinedName_16));
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 6) = ((MR_Box) (create_report__QualRefinedName_17));
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 7) = ((MR_Box) (create_report__SlotNumber_9));
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 8) = ((MR_Box) (create_report__RevGoalPath_12));
      MR_hl_field(MR_mktag(0), create_report__CallSiteDesc_6, 9) = ((MR_Box) (create_report__MaybeCalleeDesc_21));
    }
    return create_report__CallSiteDesc_6;
  }
}

static void MR_CALL 
create_report__create_call_site_dynamic_dump_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CSDPtr_5,
  MR_Word * create_report__MaybeCallSiteDynamicDumpInfo_6)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__CSDPtr_5);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__CSD_7;
        MR_Word create_report__CallerPSPtr_8;
        MR_Word create_report__CalleePSDPtr_9;
        MR_Word create_report__Own_10;
        MR_Word create_report__Desc_11;
        MR_Word create_report__CSSPtr_12;
        MR_Word create_report__CallSiteDesc_13;
        MR_Word create_report__PerfRowData_14;
        MR_Word create_report__CallSiteDynamicDumpInfo_15;
        MR_Word create_report__Var_23;

        {
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__CSD_7);
        }
        create_report__CallerPSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 0)));
        create_report__CalleePSDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 1)));
        create_report__Own_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 2)));
        {
          create_report__Desc_11 = measurements__zero_inherit_prof_info_0_f_0();
        }
        {
          profile__deep_lookup_call_site_static_map_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__CSSPtr_12);
        }
        {
          create_report__CallSiteDesc_13 = create_report__describe_call_site_2_f_0(create_report__Deep_4, create_report__CSSPtr_12);
        }
        {
          create_report__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), create_report__Var_23, 0) = ((MR_Box) (create_report__Desc_11));
        }
        {
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_13)), create_report__Own_10, create_report__Var_23, &create_report__PerfRowData_14);
        }
        {
          create_report__CallSiteDynamicDumpInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__CallSiteDynamicDumpInfo_15, 0) = ((MR_Box) (create_report__CSDPtr_5));
          MR_hl_field(MR_mktag(0), create_report__CallSiteDynamicDumpInfo_15, 1) = ((MR_Box) (create_report__CallerPSPtr_8));
          MR_hl_field(MR_mktag(0), create_report__CallSiteDynamicDumpInfo_15, 2) = ((MR_Box) (create_report__CalleePSDPtr_9));
          MR_hl_field(MR_mktag(0), create_report__CallSiteDynamicDumpInfo_15, 3) = ((MR_Box) (create_report__PerfRowData_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *create_report__MaybeCallSiteDynamicDumpInfo_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__CallSiteDynamicDumpInfo_15));
        }
      }
    else
      {
        *create_report__MaybeCallSiteDynamicDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[9]);
      }
  }
}

static void MR_CALL 
create_report__create_call_site_static_dump_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CSSPtr_5,
  MR_Word * create_report__MaybeCallSiteStaticDumpInfo_6)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = profile__valid_call_site_static_ptr_2_p_0(create_report__Deep_4, create_report__CSSPtr_5);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__CSS_7;
        MR_Word create_report__ContainingPSPtr_8;
        MR_Integer create_report__SlotNumber_9;
        MR_Word create_report__CallSiteKind_10;
        MR_Integer create_report__LineNumber_11;
        MR_Word create_report__GoalPath_12;
        MR_Word create_report__CallSiteStaticDumpInfo_13;

        {
          profile__deep_lookup_call_site_statics_3_p_0(create_report__Deep_4, create_report__CSSPtr_5, &create_report__CSS_7);
        }
        create_report__ContainingPSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 0)));
        create_report__SlotNumber_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 1)));
        create_report__CallSiteKind_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 2)));
        create_report__LineNumber_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 3)));
        create_report__GoalPath_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_7, (MR_Integer) 4)));
        {
          create_report__CallSiteStaticDumpInfo_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 0) = ((MR_Box) (create_report__CSSPtr_5));
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 1) = ((MR_Box) (create_report__ContainingPSPtr_8));
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 2) = ((MR_Box) (create_report__SlotNumber_9));
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 3) = ((MR_Box) (create_report__LineNumber_11));
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 4) = ((MR_Box) (create_report__GoalPath_12));
          MR_hl_field(MR_mktag(0), create_report__CallSiteStaticDumpInfo_13, 5) = ((MR_Box) (create_report__CallSiteKind_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *create_report__MaybeCallSiteStaticDumpInfo_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__CallSiteStaticDumpInfo_13));
        }
      }
    else
      {
        *create_report__MaybeCallSiteStaticDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[8]);
      }
  }
}

static void MR_CALL 
create_report__create_proc_dynamic_dump_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__PDPtr_5,
  MR_Word * create_report__MaybeProcDynamicDumpInfo_6)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = profile__valid_proc_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__PDPtr_5);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__PD_7;
        MR_Word create_report__PSPtr_8;
        MR_ArrayPtr create_report__CallSiteArray_9;
        MR_Word create_report__MaybeCPCounts_10;
        MR_Word create_report__PS_11;
        MR_String create_report__RawName_12;
        MR_String create_report__ModuleName_13;
        MR_String create_report__UnQualRefinedName_14;
        MR_String create_report__QualRefinedName_15;
        MR_Word create_report__CallSites_16;
        MR_Word create_report__MaybeCPs_20;
        MR_Word create_report__ProcDynamicDumpInfo_21;
        MR_Word create_report__Var_23;
        MR_String create_report__Var_27;
        MR_Integer create_report__Var_28;
        MR_Word create_report__Var_29;
        MR_ArrayPtr create_report__Var_30;
        MR_ArrayPtr create_report__Var_31;
        MR_Word create_report__Var_32;
        MR_Word create_report__Var_33;

        {
          profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__PD_7);
        }
        create_report__PSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 0)));
        create_report__CallSiteArray_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 1)));
        create_report__MaybeCPCounts_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 2)));
        {
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_8, &create_report__PS_11);
        }
        create_report__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 0)));
        create_report__ModuleName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 1)));
        create_report__UnQualRefinedName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 2)));
        create_report__QualRefinedName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 3)));
        create_report__RawName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 4)));
        create_report__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 5)));
        create_report__Var_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 6)));
        create_report__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 7)));
        create_report__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 8)));
        create_report__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 9)));
        create_report__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 10)));
        create_report__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 11)));
        {
          mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) create_report__CallSiteArray_9, &create_report__CallSites_16);
        }
        if ((create_report__MaybeCPCounts_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          create_report__MaybeCPs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_ArrayPtr create_report__CPCounts_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__MaybeCPCounts_10, (MR_Integer) 0)));
            MR_ArrayPtr create_report__CPInfos_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 9)));
            MR_Word create_report__CPs_19;
            MR_Word create_report__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 0)));
            MR_String create_report__Var_68 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 1)));
            MR_String create_report__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 2)));
            MR_String create_report__Var_70 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 3)));
            MR_String create_report__Var_71 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 4)));
            MR_String create_report__Var_72 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 5)));
            MR_Integer create_report__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 6)));
            MR_Word create_report__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 7)));
            MR_ArrayPtr create_report__Var_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 8)));
            MR_Word create_report__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 10)));
            MR_Word create_report__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 11)));

            {
              coverage__coverage_point_arrays_to_list_3_p_0(create_report__CPInfos_18, create_report__CPCounts_17, &create_report__CPs_19);
            }
            {
              create_report__MaybeCPs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), create_report__MaybeCPs_20, 0) = ((MR_Box) (create_report__CPs_19));
            }
          }
        {
          create_report__ProcDynamicDumpInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 0) = ((MR_Box) (create_report__PDPtr_5));
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 1) = ((MR_Box) (create_report__PSPtr_8));
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 2) = ((MR_Box) (create_report__RawName_12));
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 3) = ((MR_Box) (create_report__ModuleName_13));
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 4) = ((MR_Box) (create_report__UnQualRefinedName_14));
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 5) = ((MR_Box) (create_report__QualRefinedName_15));
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 6) = ((MR_Box) (create_report__CallSites_16));
          MR_hl_field(MR_mktag(0), create_report__ProcDynamicDumpInfo_21, 7) = ((MR_Box) (create_report__MaybeCPs_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *create_report__MaybeProcDynamicDumpInfo_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcDynamicDumpInfo_21));
        }
      }
    else
      {
        *create_report__MaybeProcDynamicDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[7]);
      }
  }
}

static void MR_CALL 
create_report__create_proc_static_dump_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__PSPtr_5,
  MR_Word * create_report__MaybeProcStaticDumpInfo_6)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_4, create_report__PSPtr_5);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__PS_7;
        MR_String create_report__UnQualRefinedName_10;
        MR_String create_report__QualRefinedName_11;
        MR_String create_report__RawName_12;
        MR_String create_report__FileName_13;
        MR_Integer create_report__LineNumber_14;
        MR_ArrayPtr create_report__CallSites_16;
        MR_ArrayPtr create_report__CoveragePointInfos_17;
        MR_Integer create_report__MaxCallSiteIdx_20;
        MR_Integer create_report__NumCallSites_21;
        MR_Integer create_report__MaxCoveragePointIdx_22;
        MR_Integer create_report__NumCoveragePoints_23;
        MR_Word create_report__ProcStaticDumpInfo_24;
        MR_Word create_report___ProcId_8;
        MR_String create_report___DeclModule_9;
        MR_Word create_report___InInterface_15;
        MR_Word create_report___MaybeCoveragePoints_18;
        MR_Word create_report___IsZeroed_19;

        {
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__PS_7);
        }
        create_report___ProcId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 0)));
        create_report___DeclModule_9 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 1)));
        create_report__UnQualRefinedName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 2)));
        create_report__QualRefinedName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 3)));
        create_report__RawName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 4)));
        create_report__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 5)));
        create_report__LineNumber_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 6)));
        create_report___InInterface_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 7)));
        create_report__CallSites_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 8)));
        create_report__CoveragePointInfos_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 9)));
        create_report___MaybeCoveragePoints_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 10)));
        create_report___IsZeroed_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 11)));
        {
          mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) create_report__CallSites_16, &create_report__MaxCallSiteIdx_20);
        }
        create_report__NumCallSites_21 = (create_report__MaxCallSiteIdx_20 + (MR_Integer) 1);
        {
          mercury__array__max_2_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0, (MR_ArrayPtr) create_report__CoveragePointInfos_17, &create_report__MaxCoveragePointIdx_22);
        }
        create_report__NumCoveragePoints_23 = (create_report__MaxCoveragePointIdx_22 + (MR_Integer) 1);
        {
          create_report__ProcStaticDumpInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 0) = ((MR_Box) (create_report__PSPtr_5));
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 1) = ((MR_Box) (create_report__RawName_12));
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 2) = ((MR_Box) (create_report__UnQualRefinedName_10));
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 3) = ((MR_Box) (create_report__QualRefinedName_11));
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 4) = ((MR_Box) (create_report__FileName_13));
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 5) = ((MR_Box) (create_report__LineNumber_14));
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 6) = ((MR_Box) (create_report__NumCallSites_21));
          MR_hl_field(MR_mktag(0), create_report__ProcStaticDumpInfo_24, 7) = ((MR_Box) (create_report__NumCoveragePoints_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *create_report__MaybeProcStaticDumpInfo_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcStaticDumpInfo_24));
        }
      }
    else
      {
        *create_report__MaybeProcStaticDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[1]);
      }
  }
}

static MR_Box MR_CALL 
create_report__create_clique_dump_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_ProcDesc_6;

    {
      create_report__conv0_ProcDesc_6 = create_report__describe_clique_member_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_ProcDesc_6));
    return create_report__wrapper_arg_2;
  }
}

static void MR_CALL 
create_report__create_clique_dump_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CliquePtr_5,
  MR_Word * create_report__MaybeCliqueDumpInfo_6)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = profile__valid_clique_ptr_2_p_0(create_report__Deep_4, create_report__CliquePtr_5);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__CliqueDesc_7;
        MR_Word create_report__ParentCSDPtr_8;
        MR_Word create_report__MemberPDPtrs_9;
        MR_Word create_report__CliqueDumpInfo_10;

        {
          create_report__succeeded = profile__valid_clique_ptr_2_p_0(create_report__Deep_4, create_report__CliquePtr_5);
        }
        if (create_report__succeeded)
          {
            MR_Word create_report__MemberPDPtrs_17;
            MR_Word create_report__ParentCSDPtr_18;
            MR_Word create_report__ParentCSD_19;
            MR_Word create_report__EntryPDPtr_20;
            MR_Word create_report__Var_29;
            MR_Word create_report__Var_30;
            MR_Word create_report__OtherPDPtrs_21;

            {
              profile__deep_lookup_clique_members_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__MemberPDPtrs_17);
            }
            {
              profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__ParentCSDPtr_18);
            }
            {
              profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__ParentCSDPtr_18, &create_report__ParentCSD_19);
            }
            create_report__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_19, (MR_Integer) 0)));
            create_report__EntryPDPtr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_19, (MR_Integer) 1)));
            create_report__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_19, (MR_Integer) 2)));
            {
              create_report__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, create_report__MemberPDPtrs_17, ((MR_Box) (create_report__EntryPDPtr_20)), &create_report__OtherPDPtrs_21);
            }
            if (create_report__succeeded)
              {
                MR_Word create_report__EntryProcDesc_22;
                MR_Word create_report__OtherProcDescs_23;
                MR_Word create_report__Var_24;
                MR_Word create_report__PD_39;
                MR_Word create_report__Var_40;
                MR_ArrayPtr create_report__Var_41;
                MR_Word create_report__Var_42;

                {
                  profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__EntryPDPtr_20, &create_report__PD_39);
                }
                create_report__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_39, (MR_Integer) 0)));
                create_report__Var_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_39, (MR_Integer) 1)));
                create_report__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_39, (MR_Integer) 2)));
                {
                  create_report__EntryProcDesc_22 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__Var_40);
                }
                {
                  create_report__Var_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), create_report__Var_24, 0) = ((MR_Box) (&create_report_scalar_common_6[2]));
                  MR_hl_field(MR_mktag(0), create_report__Var_24, 1) = ((MR_Box) (create_report__create_clique_dump_report_3_p_0_1));
                  MR_hl_field(MR_mktag(0), create_report__Var_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), create_report__Var_24, 3) = ((MR_Box) (create_report__Deep_4));
                }
                {
                  create_report__OtherProcDescs_23 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &report__report__type_ctor_info_proc_desc_0, create_report__Var_24, create_report__OtherPDPtrs_21);
                }
                {
                  create_report__CliqueDesc_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), create_report__CliqueDesc_7, 0) = ((MR_Box) (create_report__CliquePtr_5));
                  MR_hl_field(MR_mktag(0), create_report__CliqueDesc_7, 1) = ((MR_Box) (create_report__EntryProcDesc_22));
                  MR_hl_field(MR_mktag(0), create_report__CliqueDesc_7, 2) = ((MR_Box) (create_report__OtherProcDescs_23));
                }
              }
            else
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "entry pdptr not a member");
                  return;
                }
              }
          }
        else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "invalid clique_ptr");
              return;
            }
          }
        {
          profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__ParentCSDPtr_8);
        }
        {
          profile__deep_lookup_clique_members_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__MemberPDPtrs_9);
        }
        {
          create_report__CliqueDumpInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__CliqueDumpInfo_10, 0) = ((MR_Box) (create_report__CliqueDesc_7));
          MR_hl_field(MR_mktag(0), create_report__CliqueDumpInfo_10, 1) = ((MR_Box) (create_report__ParentCSDPtr_8));
          MR_hl_field(MR_mktag(0), create_report__CliqueDumpInfo_10, 2) = ((MR_Box) (create_report__MemberPDPtrs_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *create_report__MaybeCliqueDumpInfo_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__CliqueDumpInfo_10));
        }
      }
    else
      {
        *create_report__MaybeCliqueDumpInfo_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[6]);
      }
  }
}

static void MR_CALL 
create_report__create_module_rep_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_String create_report__ModuleName_5,
  MR_Word * create_report__MaybeModuleRepReport_6)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__MaybeProgRep_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));
    MR_Word create_report__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
    MR_String create_report__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
    MR_String create_report__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
    MR_String create_report__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
    MR_Word create_report__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr create_report__Var_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr create_report__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr create_report__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr create_report__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr create_report__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr create_report__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr create_report__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr create_report__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr create_report__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr create_report__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr create_report__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr create_report__Var_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr create_report__Var_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr create_report__Var_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr create_report__Var_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr create_report__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr create_report__Var_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr create_report__Var_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr create_report__Var_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr create_report__Var_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
    MR_Word create_report__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
    MR_Word create_report__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
    MR_Word create_report__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));

    if ((create_report__MaybeProgRep_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *create_report__MaybeModuleRepReport_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[5]);
      }
    else
      {
        MR_Word create_report__MaybeErrorProgRep_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__MaybeProgRep_7, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) create_report__MaybeErrorProgRep_8)) == (MR_mktag((MR_Integer) 1))))
          *create_report__MaybeModuleRepReport_6 = (MR_Word) create_report__MaybeErrorProgRep_8;
        else
          {
            MR_Word create_report__ProgRep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeErrorProgRep_8, (MR_Integer) 0)));
            MR_Word create_report__ModuleRepMap_10 = (MR_Word) create_report__ProgRep_9;
            MR_Word create_report__ModuleRep_11;
            MR_Box create_report__conv0_ModuleRep_11;

            {
              create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &create_report_scalar_common_1[10], create_report__ModuleRepMap_10, ((MR_Box) (create_report__ModuleName_5)), &create_report__conv0_ModuleRep_11);
            }
            if (create_report__succeeded)
              {
                create_report__ModuleRep_11 = ((MR_Word) create_report__conv0_ModuleRep_11);
                create_report__succeeded = MR_TRUE;
              }
            if (create_report__succeeded)
              {
                MR_Word create_report__CordStrs_12;
                MR_String create_report__Str_13;
                MR_Word create_report__ModuleRepReport_14;
                MR_Word create_report__Var_16;

                {
                  program_representation_utils__print_module_to_strings_2_p_0(create_report__ModuleRep_11, &create_report__CordStrs_12);
                }
                {
                  create_report__Var_16 = mercury__cord__list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, create_report__CordStrs_12);
                }
                {
                  create_report__Str_13 = mercury__string__append_list_1_f_0(create_report__Var_16);
                }
                {
                  create_report__ModuleRepReport_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), create_report__ModuleRepReport_14, 0) = ((MR_Box) (create_report__ModuleName_5));
                  MR_hl_field(MR_mktag(0), create_report__ModuleRepReport_14, 1) = ((MR_Box) (create_report__Str_13));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *create_report__MaybeModuleRepReport_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ModuleRepReport_14));
                }
              }
            else
              {
                MR_String create_report__Msg_15;
                MR_String create_report__Var_55;

                {
                  create_report__Var_55 = mercury__string__f_43_43_2_f_0(create_report__ModuleName_5, (MR_String) ".\n");
                }
                {
                  create_report__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "There is no module named ", create_report__Var_55);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *create_report__MaybeModuleRepReport_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Msg_15));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
create_report__is_getter_or_setter_2_4_p_0(
  MR_Word create_report__NameChars_5,
  MR_Word * create_report__GetterSetter_6,
  MR_Word * create_report__DataStructNameChars_7,
  MR_Word * create_report__FieldNameChars_8)
{
  {
    MR_bool create_report__succeeded = ((MR_tag((MR_Word) create_report__NameChars_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word create_report__FieldNameCharsPrime_9;
    MR_Char create_report__Var_13;
    MR_Word create_report__Var_14;
    MR_Char create_report__Var_15;
    MR_Word create_report__Var_16;
    MR_Char create_report__Var_17;
    MR_Word create_report__Var_18;
    MR_Char create_report__Var_19;
    MR_Word create_report__Var_20;
    MR_Char create_report__Var_21;

    if (create_report__succeeded)
      {
        create_report__Var_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 0)));
        create_report__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 1)));
        create_report__succeeded = (create_report__Var_13 == (MR_Char) 95);
        if (create_report__succeeded)
          {
            create_report__succeeded = ((MR_tag((MR_Word) create_report__Var_14)) == (MR_mktag((MR_Integer) 1)));
            if (create_report__succeeded)
              {
                create_report__Var_15 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_14, (MR_Integer) 0)));
                create_report__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_14, (MR_Integer) 1)));
                create_report__succeeded = (create_report__Var_15 == (MR_Char) 103);
                if (create_report__succeeded)
                  {
                    create_report__succeeded = ((MR_tag((MR_Word) create_report__Var_16)) == (MR_mktag((MR_Integer) 1)));
                    if (create_report__succeeded)
                      {
                        create_report__Var_17 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_16, (MR_Integer) 0)));
                        create_report__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_16, (MR_Integer) 1)));
                        create_report__succeeded = (create_report__Var_17 == (MR_Char) 101);
                        if (create_report__succeeded)
                          {
                            create_report__succeeded = ((MR_tag((MR_Word) create_report__Var_18)) == (MR_mktag((MR_Integer) 1)));
                            if (create_report__succeeded)
                              {
                                create_report__Var_19 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_18, (MR_Integer) 0)));
                                create_report__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_18, (MR_Integer) 1)));
                                create_report__succeeded = (create_report__Var_19 == (MR_Char) 116);
                                if (create_report__succeeded)
                                  {
                                    create_report__succeeded = ((MR_tag((MR_Word) create_report__Var_20)) == (MR_mktag((MR_Integer) 1)));
                                    if (create_report__succeeded)
                                      {
                                        create_report__Var_21 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_20, (MR_Integer) 0)));
                                        create_report__FieldNameCharsPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_20, (MR_Integer) 1)));
                                        create_report__succeeded = (create_report__Var_21 == (MR_Char) 95);
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    if (create_report__succeeded)
      {
        *create_report__GetterSetter_6 = (MR_Integer) 0;
        *create_report__DataStructNameChars_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *create_report__FieldNameChars_8 = create_report__FieldNameCharsPrime_9;
        create_report__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word create_report__FieldNameCharsPrime_31;
        MR_Char create_report__Var_22;
        MR_Word create_report__Var_23;
        MR_Char create_report__Var_24;
        MR_Word create_report__Var_25;
        MR_Char create_report__Var_26;
        MR_Word create_report__Var_27;
        MR_Char create_report__Var_28;
        MR_Word create_report__Var_29;
        MR_Char create_report__Var_30;

        create_report__succeeded = ((MR_tag((MR_Word) create_report__NameChars_5)) == (MR_mktag((MR_Integer) 1)));
        if (create_report__succeeded)
          {
            create_report__Var_22 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 0)));
            create_report__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 1)));
            create_report__succeeded = (create_report__Var_22 == (MR_Char) 95);
            if (create_report__succeeded)
              {
                create_report__succeeded = ((MR_tag((MR_Word) create_report__Var_23)) == (MR_mktag((MR_Integer) 1)));
                if (create_report__succeeded)
                  {
                    create_report__Var_24 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_23, (MR_Integer) 0)));
                    create_report__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_23, (MR_Integer) 1)));
                    create_report__succeeded = (create_report__Var_24 == (MR_Char) 115);
                    if (create_report__succeeded)
                      {
                        create_report__succeeded = ((MR_tag((MR_Word) create_report__Var_25)) == (MR_mktag((MR_Integer) 1)));
                        if (create_report__succeeded)
                          {
                            create_report__Var_26 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_25, (MR_Integer) 0)));
                            create_report__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_25, (MR_Integer) 1)));
                            create_report__succeeded = (create_report__Var_26 == (MR_Char) 101);
                            if (create_report__succeeded)
                              {
                                create_report__succeeded = ((MR_tag((MR_Word) create_report__Var_27)) == (MR_mktag((MR_Integer) 1)));
                                if (create_report__succeeded)
                                  {
                                    create_report__Var_28 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_27, (MR_Integer) 0)));
                                    create_report__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_27, (MR_Integer) 1)));
                                    create_report__succeeded = (create_report__Var_28 == (MR_Char) 116);
                                    if (create_report__succeeded)
                                      {
                                        create_report__succeeded = ((MR_tag((MR_Word) create_report__Var_29)) == (MR_mktag((MR_Integer) 1)));
                                        if (create_report__succeeded)
                                          {
                                            create_report__Var_30 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_29, (MR_Integer) 0)));
                                            create_report__FieldNameCharsPrime_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_29, (MR_Integer) 1)));
                                            create_report__succeeded = (create_report__Var_30 == (MR_Char) 95);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
        if (create_report__succeeded)
          {
            *create_report__GetterSetter_6 = (MR_Integer) 1;
            *create_report__DataStructNameChars_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *create_report__FieldNameChars_8 = create_report__FieldNameCharsPrime_31;
            create_report__succeeded = MR_TRUE;
          }
        else
          {
            MR_Char create_report__FirstNameChar_10;
            MR_Word create_report__LaterNameChars_11;
            MR_Word create_report__LaterDataStructNameChars_12;

            create_report__succeeded = ((MR_tag((MR_Word) create_report__NameChars_5)) == (MR_mktag((MR_Integer) 1)));
            if (create_report__succeeded)
              {
                create_report__FirstNameChar_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 0)));
                create_report__LaterNameChars_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__NameChars_5, (MR_Integer) 1)));
                {
                  create_report__succeeded = create_report__is_getter_or_setter_2_4_p_0(create_report__LaterNameChars_11, create_report__GetterSetter_6, &create_report__LaterDataStructNameChars_12, create_report__FieldNameChars_8);
                }
                if (create_report__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *create_report__DataStructNameChars_7 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (create_report__FirstNameChar_10));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (create_report__LaterDataStructNameChars_12));
                    }
                    create_report__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report__gather_getters_setters_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__PSPtr_6,
  MR_Word create_report__STATE_VARIABLE_GSDSRawMap_0_32,
  MR_Word * create_report__STATE_VARIABLE_GSDSRawMap_33)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_5, create_report__PSPtr_6);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__PS_8;
        MR_Word create_report__Id_9;
        MR_String create_report__Var_42;
        MR_String create_report__Var_43;
        MR_String create_report__Var_44;
        MR_String create_report__Var_45;
        MR_String create_report__Var_46;
        MR_Integer create_report__Var_47;
        MR_Word create_report__Var_48;
        MR_ArrayPtr create_report__Var_49;
        MR_ArrayPtr create_report__Var_50;
        MR_Word create_report__Var_51;
        MR_Word create_report__Var_52;
        MR_Word create_report__GetterSetter_10;
        MR_Word create_report__DataStructName_11;
        MR_Word create_report__FieldName_12;
        MR_String create_report__DeclModule_70;
        MR_String create_report__DefModule_71;
        MR_String create_report__Name_72;
        MR_Integer create_report__Arity_73;
        MR_Word create_report__NameChars_75;
        MR_Word create_report__DataStructNameChars_76;
        MR_Word create_report__FieldNameChars_77;
        MR_String create_report__DataStructNameStr_78;
        MR_String create_report__FieldNameStr_79;
        MR_Word create_report___PorF_69;
        MR_Integer create_report___Mode_74;

        {
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_5, create_report__PSPtr_6, &create_report__PS_8);
        }
        create_report__Id_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 0)));
        create_report__Var_42 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 1)));
        create_report__Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 2)));
        create_report__Var_44 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 3)));
        create_report__Var_45 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 4)));
        create_report__Var_46 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 5)));
        create_report__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 6)));
        create_report__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 7)));
        create_report__Var_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 8)));
        create_report__Var_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 9)));
        create_report__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 10)));
        create_report__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_8, (MR_Integer) 11)));
        create_report__succeeded = ((MR_tag((MR_Word) create_report__Id_9)) == (MR_mktag((MR_Integer) 0)));
        if (create_report__succeeded)
          {
            create_report___PorF_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 0)));
            create_report__DeclModule_70 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 1)));
            create_report__DefModule_71 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 2)));
            create_report__Name_72 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 3)));
            create_report__Arity_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 4)));
            create_report___Mode_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Id_9, (MR_Integer) 5)));
            create_report__succeeded = (strcmp(create_report__DeclModule_70, create_report__DefModule_71) == 0);
            if (create_report__succeeded)
              {
                {
                  mercury__string__to_char_list_2_p_0(create_report__Name_72, &create_report__NameChars_75);
                }
                {
                  create_report__succeeded = create_report__is_getter_or_setter_2_4_p_0(create_report__NameChars_75, &create_report__GetterSetter_10, &create_report__DataStructNameChars_76, &create_report__FieldNameChars_77);
                }
                if (create_report__succeeded)
                  {
                    switch (create_report__GetterSetter_10) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        create_report__succeeded = (create_report__Arity_73 == (MR_Integer) 2);
                        break;
                      case (MR_Integer) 1:
                        create_report__succeeded = (create_report__Arity_73 == (MR_Integer) 3);
                        break;
                    }
                    if (create_report__succeeded)
                      {
                        {
                          mercury__string__from_char_list_2_p_0(create_report__DataStructNameChars_76, &create_report__DataStructNameStr_78);
                        }
                        {
                          mercury__string__from_char_list_2_p_0(create_report__FieldNameChars_77, &create_report__FieldNameStr_79);
                        }
                        create_report__DataStructName_11 = (MR_Word) create_report__DataStructNameStr_78;
                        create_report__FieldName_12 = (MR_Word) create_report__FieldNameStr_79;
                        create_report__succeeded = MR_TRUE;
                      }
                  }
              }
          }
        if (create_report__succeeded)
          {
            MR_Word create_report__Own_13;
            MR_Word create_report__Desc_14;
            MR_Word create_report__ProcDesc_15;
            MR_Word create_report__RawData_16;
            MR_Word create_report__FieldMap0_18;
            MR_Word create_report__FieldMap_31;
            MR_Word create_report__FieldMap0Prime_17;
            MR_Box create_report__conv0_FieldMap0Prime_17;
            MR_Word create_report__FieldData0_19;
            MR_Box create_report__conv1_FieldData0_19;

            {
              profile__deep_lookup_ps_own_3_p_0(create_report__Deep_5, create_report__PSPtr_6, &create_report__Own_13);
            }
            {
              profile__deep_lookup_ps_desc_3_p_0(create_report__Deep_5, create_report__PSPtr_6, &create_report__Desc_14);
            }
            {
              create_report__ProcDesc_15 = create_report__describe_proc_2_f_0(create_report__Deep_5, create_report__PSPtr_6);
            }
            {
              create_report__RawData_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), create_report__RawData_16, 0) = ((MR_Box) (create_report__ProcDesc_15));
              MR_hl_field(MR_mktag(0), create_report__RawData_16, 1) = ((MR_Box) (create_report__Own_13));
              MR_hl_field(MR_mktag(0), create_report__RawData_16, 2) = ((MR_Box) (create_report__Desc_14));
            }
            {
              create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &report__report__type_ctor_info_data_struct_name_0, (MR_Word) &create_report_scalar_common_2[14], create_report__STATE_VARIABLE_GSDSRawMap_0_32, ((MR_Box) (create_report__DataStructName_11)), &create_report__conv0_FieldMap0Prime_17);
            }
            if (create_report__succeeded)
              {
                create_report__FieldMap0Prime_17 = ((MR_Word) create_report__conv0_FieldMap0Prime_17);
                create_report__succeeded = MR_TRUE;
              }
            if (create_report__succeeded)
              create_report__FieldMap0_18 = create_report__FieldMap0Prime_17;
            else
              {
                {
                  mercury__map__init_1_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[13], &create_report__FieldMap0_18);
                }
              }
            {
              create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[13], create_report__FieldMap0_18, ((MR_Box) (create_report__FieldName_12)), &create_report__conv1_FieldData0_19);
            }
            if (create_report__succeeded)
              {
                create_report__FieldData0_19 = ((MR_Word) create_report__conv1_FieldData0_19);
                create_report__succeeded = MR_TRUE;
              }
            if (create_report__succeeded)
              {
                MR_Word create_report__FieldData_25;

                switch (create_report__GetterSetter_10) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_tag((MR_Word) create_report__FieldData0_19)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.gather_getters_setters\'/4", (MR_String) "redundant getter");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word create_report__SetterRawData_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__FieldData0_19, (MR_Integer) 0)));

                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
                          {
                            create_report__FieldData_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), create_report__FieldData_25, 0) = ((MR_Box) (create_report__RawData_16));
                            MR_hl_field(MR_mktag(0), create_report__FieldData_25, 1) = ((MR_Box) (create_report__SetterRawData_24));
                            MR_hl_field(MR_mktag(0), create_report__FieldData_25, 2) = NULL;
                          }
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    switch (MR_tag((MR_Word) create_report__FieldData0_19)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 2:
                        {
                          {
                            mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.gather_getters_setters\'/4", (MR_String) "redundant setter");
                            return;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word create_report__GetterRawData_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__FieldData0_19, (MR_Integer) 0)));

                          mercury__private_builtin__dummy_var = (MR_Integer) 0;
                          {
                            create_report__FieldData_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), create_report__FieldData_25, 0) = ((MR_Box) (create_report__GetterRawData_30));
                            MR_hl_field(MR_mktag(0), create_report__FieldData_25, 1) = ((MR_Box) (create_report__RawData_16));
                            MR_hl_field(MR_mktag(0), create_report__FieldData_25, 2) = NULL;
                          }
                        }
                        break;
                    }
                    break;
                }
                {
                  mercury__map__det_update_4_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[13], ((MR_Box) (create_report__FieldName_12)), ((MR_Box) (create_report__FieldData_25)), create_report__FieldMap0_18, &create_report__FieldMap_31);
                }
              }
            else
              {
                MR_Word create_report__FieldData_41;

                switch (create_report__GetterSetter_10) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      create_report__FieldData_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), create_report__FieldData_41, 0) = ((MR_Box) (create_report__RawData_16));
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      create_report__FieldData_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), create_report__FieldData_41, 0) = ((MR_Box) (create_report__RawData_16));
                    }
                    break;
                }
                {
                  mercury__map__det_insert_4_p_0((MR_Word) &report__report__type_ctor_info_field_name_0, (MR_Word) &create_report_scalar_common_2[13], ((MR_Box) (create_report__FieldName_12)), ((MR_Box) (create_report__FieldData_41)), create_report__FieldMap0_18, &create_report__FieldMap_31);
                }
              }
            {
              mercury__map__set_4_p_0((MR_Word) &report__report__type_ctor_info_data_struct_name_0, (MR_Word) &create_report_scalar_common_2[14], ((MR_Box) (create_report__DataStructName_11)), ((MR_Box) (create_report__FieldMap_31)), create_report__STATE_VARIABLE_GSDSRawMap_0_32, create_report__STATE_VARIABLE_GSDSRawMap_33);
            }
          }
        else
          *create_report__STATE_VARIABLE_GSDSRawMap_33 = create_report__STATE_VARIABLE_GSDSRawMap_0_32;
      }
    else
      *create_report__STATE_VARIABLE_GSDSRawMap_33 = create_report__STATE_VARIABLE_GSDSRawMap_0_32;
  }
}

static void MR_CALL 
create_report__getter_setter_raw_data_to_info_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report___FieldName_6,
  MR_Word create_report__RawData_7,
  MR_Word * create_report__Data_8)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_p_0(create_report__Deep_5, create_report__RawData_7, create_report__Data_8);
    }
  }
}

static void MR_CALL 
create_report__getter_setter_raw_map_to_info_map_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report___DataStructName_6,
  MR_Word create_report__RawMap_7,
  MR_Word * create_report__Map_8)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0(create_report__Deep_5, create_report__RawMap_7, create_report__Map_8);
    }
  }
}

static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv3_Map_8;

    {
      create_report__getter_setter_raw_map_to_info_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv3_Map_8);
    }
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv3_Map_8));
  }
}

static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv1_STATE_VARIABLE_GSDSRawMap_33;

    {
      create_report__gather_getters_setters_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv1_STATE_VARIABLE_GSDSRawMap_33);
    }
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_STATE_VARIABLE_GSDSRawMap_33));
  }
}

static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_String create_report__ModuleName_5,
  MR_Word * create_report__MaybeModuleGetterSettersReport_6)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__ModuleData_7;
    MR_Word create_report__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
    MR_Word create_report__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
    MR_String create_report__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
    MR_String create_report__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
    MR_String create_report__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
    MR_Word create_report__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr create_report__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr create_report__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr create_report__Var_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr create_report__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr create_report__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr create_report__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr create_report__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr create_report__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr create_report__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr create_report__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr create_report__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr create_report__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr create_report__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr create_report__Var_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr create_report__Var_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr create_report__Var_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr create_report__Var_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr create_report__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr create_report__Var_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr create_report__Var_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
    MR_Word create_report__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
    MR_Word create_report__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));
    MR_Word create_report__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));
    MR_Box create_report__conv0_ModuleData_7;

    {
      create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, create_report__Var_13, ((MR_Box) (create_report__ModuleName_5)), &create_report__conv0_ModuleData_7);
    }
    if (create_report__succeeded)
      {
        create_report__ModuleData_7 = ((MR_Word) create_report__conv0_ModuleData_7);
        create_report__succeeded = MR_TRUE;
      }
    if (create_report__succeeded)
      {
        MR_Word create_report__TypeCtorInfo_56_56;
        MR_Word create_report__TypeInfo_57_57;
        MR_Word create_report__PSPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 2)));
        MR_Word create_report__GetterSetterDataMap_9;
        MR_Word create_report__GetterSetterInfoMap_10;
        MR_Word create_report__ModuleGetterSettersReport_11;
        MR_Word create_report__Var_14;
        MR_Word create_report__Var_15;
        MR_Word create_report__Var_16;
        MR_Word create_report__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 0)));
        MR_Word create_report__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 1)));
        MR_Box create_report__conv2_GetterSetterDataMap_9;

        {
          create_report__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_14, 0) = ((MR_Box) (&create_report_scalar_common_4[14]));
          MR_hl_field(MR_mktag(0), create_report__Var_14, 1) = ((MR_Box) (create_report__create_module_getter_setter_report_3_p_0_1));
          MR_hl_field(MR_mktag(0), create_report__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), create_report__Var_14, 3) = ((MR_Box) (create_report__Deep_4));
        }
        create_report__TypeCtorInfo_56_56 = (MR_Word) &report__report__type_ctor_info_data_struct_name_0;
        create_report__TypeInfo_57_57 = (MR_Word) &create_report_scalar_common_2[14];
        {
          create_report__Var_15 = mercury__map__init_0_f_0(create_report__TypeCtorInfo_56_56, create_report__TypeInfo_57_57);
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_2[15], create_report__Var_14, create_report__PSPtrs_8, ((MR_Box) (create_report__Var_15)), &create_report__conv2_GetterSetterDataMap_9);
        }
        create_report__GetterSetterDataMap_9 = ((MR_Word) create_report__conv2_GetterSetterDataMap_9);
        {
          create_report__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_16, 0) = ((MR_Box) (&create_report_scalar_common_4[15]));
          MR_hl_field(MR_mktag(0), create_report__Var_16, 1) = ((MR_Box) (create_report__create_module_getter_setter_report_3_p_0_2));
          MR_hl_field(MR_mktag(0), create_report__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), create_report__Var_16, 3) = ((MR_Box) (create_report__Deep_4));
        }
        {
          mercury__map__map_values_3_p_0(create_report__TypeCtorInfo_56_56, create_report__TypeInfo_57_57, (MR_Word) &create_report_scalar_common_2[17], create_report__Var_16, create_report__GetterSetterDataMap_9, &create_report__GetterSetterInfoMap_10);
        }
        {
          create_report__ModuleGetterSettersReport_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__ModuleGetterSettersReport_11, 0) = ((MR_Box) (create_report__ModuleName_5));
          MR_hl_field(MR_mktag(0), create_report__ModuleGetterSettersReport_11, 1) = ((MR_Box) (create_report__GetterSetterInfoMap_10));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *create_report__MaybeModuleGetterSettersReport_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ModuleGetterSettersReport_11));
        }
      }
    else
      {
        MR_String create_report__Msg_12;
        MR_String create_report__Var_65;

        {
          create_report__Var_65 = mercury__string__f_43_43_2_f_0(create_report__ModuleName_5, (MR_String) "\'.\n");
        }
        {
          create_report__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "There is no module named \140", create_report__Var_65);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *create_report__MaybeModuleGetterSettersReport_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Msg_12));
        }
      }
  }
}

static MR_Word MR_CALL 
create_report__proc_to_active_row_data_2_f_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__PSPtr_5)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__ProcRowData_6;
    MR_Word create_report__Own_7;
    MR_Word create_report__Desc_8;
    MR_Word create_report__IsActive_9;
    MR_Word create_report__ProcIsActive_10;
    MR_Word create_report__ProcDesc_11;
    MR_Word create_report__ProcActive_12;
    MR_Word create_report__Var_19;

    {
      profile__deep_lookup_ps_own_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Own_7);
    }
    {
      profile__deep_lookup_ps_desc_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Desc_8);
    }
    {
      create_report__IsActive_9 = measurements__compute_is_active_1_f_0(create_report__Own_7);
    }
    switch (create_report__IsActive_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        create_report__ProcIsActive_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        create_report__ProcIsActive_10 = (MR_Integer) 1;
        break;
    }
    {
      create_report__ProcDesc_11 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__PSPtr_5);
    }
    {
      create_report__ProcActive_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__ProcActive_12, 0) = ((MR_Box) (create_report__ProcDesc_11));
      MR_hl_field(MR_mktag(0), create_report__ProcActive_12, 1) = ((MR_Box) (create_report__ProcIsActive_10));
    }
    {
      create_report__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), create_report__Var_19, 0) = ((MR_Box) (create_report__Desc_8));
    }
    {
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__ProcActive_12)), create_report__Own_7, create_report__Var_19, &create_report__ProcRowData_6);
    }
    return create_report__ProcRowData_6;
  }
}

static MR_Box MR_CALL 
create_report__create_module_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv2_ProcRowData_6;

    {
      create_report__conv2_ProcRowData_6 = create_report__proc_to_active_row_data_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_ProcRowData_6));
    return create_report__wrapper_arg_2;
  }
}

static void MR_CALL 
create_report__create_module_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_String create_report__ModuleName_5,
  MR_Word * create_report__MaybeModuleReport_6)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__ModuleData_7;
    MR_Word create_report__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
    MR_Word create_report__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
    MR_String create_report__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
    MR_String create_report__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
    MR_String create_report__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
    MR_Word create_report__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
    MR_ArrayPtr create_report__Var_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr create_report__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr create_report__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr create_report__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr create_report__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr create_report__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr create_report__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr create_report__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr create_report__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr create_report__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr create_report__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr create_report__Var_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr create_report__Var_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr create_report__Var_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr create_report__Var_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr create_report__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr create_report__Var_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr create_report__Var_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr create_report__Var_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr create_report__Var_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
    MR_Word create_report__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
    MR_Word create_report__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));
    MR_Word create_report__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));
    MR_Box create_report__conv0_ModuleData_7;

    {
      create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, create_report__Var_17, ((MR_Box) (create_report__ModuleName_5)), &create_report__conv0_ModuleData_7);
    }
    if (create_report__succeeded)
      {
        create_report__ModuleData_7 = ((MR_Word) create_report__conv0_ModuleData_7);
        create_report__succeeded = MR_TRUE;
      }
    if (create_report__succeeded)
      {
        MR_Word create_report__MaybeProgRep_8;
        MR_Word create_report__HaveModuleRep_12;
        MR_Word create_report__PSPtrs_13;
        MR_Word create_report__ProcRowDatas_14;
        MR_Word create_report__ModuleReport_15;
        MR_Word create_report__Var_18;
        MR_Word create_report__TypeCtorInfo_55_55;
        MR_Word create_report__TypeInfo_56_56;
        MR_Word create_report__ProgRep_9;
        MR_Word create_report__ModuleMap_10;
        MR_Word create_report__Var_11;
        MR_Box create_report__conv1_Var_11;
        MR_Word create_report__Var_51;
        MR_Word create_report__Var_52;

        {
          profile__deep_get_maybe_progrep_2_p_0(create_report__Deep_4, &create_report__MaybeProgRep_8);
        }
        create_report__succeeded = ((MR_tag((MR_Word) create_report__MaybeProgRep_8)) == (MR_mktag((MR_Integer) 0)));
        if (create_report__succeeded)
          {
            create_report__ProgRep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeProgRep_8, (MR_Integer) 0)));
            create_report__ModuleMap_10 = (MR_Word) create_report__ProgRep_9;
            create_report__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            create_report__TypeInfo_56_56 = (MR_Word) &create_report_scalar_common_1[10];
            {
              create_report__succeeded = mercury__map__search_3_p_0(create_report__TypeCtorInfo_55_55, create_report__TypeInfo_56_56, create_report__ModuleMap_10, ((MR_Box) (create_report__ModuleName_5)), &create_report__conv1_Var_11);
            }
            if (create_report__succeeded)
              {
                create_report__Var_11 = ((MR_Word) create_report__conv1_Var_11);
                create_report__succeeded = MR_TRUE;
              }
          }
        if (create_report__succeeded)
          create_report__HaveModuleRep_12 = (MR_Integer) 1;
        else
          create_report__HaveModuleRep_12 = (MR_Integer) 0;
        create_report__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 0)));
        create_report__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 1)));
        create_report__PSPtrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_7, (MR_Integer) 2)));
        {
          create_report__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_18, 0) = ((MR_Box) (&create_report_scalar_common_6[4]));
          MR_hl_field(MR_mktag(0), create_report__Var_18, 1) = ((MR_Box) (create_report__create_module_report_3_p_0_1));
          MR_hl_field(MR_mktag(0), create_report__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), create_report__Var_18, 3) = ((MR_Box) (create_report__Deep_4));
        }
        {
          create_report__ProcRowDatas_14 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[11], create_report__Var_18, create_report__PSPtrs_13);
        }
        {
          create_report__ModuleReport_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__ModuleReport_15, 0) = ((MR_Box) (create_report__ModuleName_5));
          MR_hl_field(MR_mktag(0), create_report__ModuleReport_15, 1) = ((MR_Box) (create_report__HaveModuleRep_12));
          MR_hl_field(MR_mktag(0), create_report__ModuleReport_15, 2) = ((MR_Box) (create_report__ProcRowDatas_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *create_report__MaybeModuleReport_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ModuleReport_15));
        }
      }
    else
      {
        MR_String create_report__Msg_16;
        MR_String create_report__Var_62;

        {
          create_report__Var_62 = mercury__string__f_43_43_2_f_0(create_report__ModuleName_5, (MR_String) "\'.\n");
        }
        {
          create_report__Msg_16 = mercury__string__f_43_43_2_f_0((MR_String) "There is no module named \140", create_report__Var_62);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *create_report__MaybeModuleReport_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Msg_16));
        }
      }
  }
}

static MR_Word MR_CALL 
create_report__module_pair_to_row_data_2_f_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__HeadVar__2_2)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__ModuleRowData_7;
    MR_String create_report__ModuleName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word create_report__ModuleData_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word create_report__Own_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_6, (MR_Integer) 0)));
    MR_Word create_report__IsActive_9;
    MR_Word create_report__ModuleIsActive_10;
    MR_Word create_report__ModuleActive_11;
    MR_Word create_report__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_6, (MR_Integer) 1)));
    MR_Word create_report__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ModuleData_6, (MR_Integer) 2)));

    {
      create_report__IsActive_9 = measurements__compute_is_active_1_f_0(create_report__Own_8);
    }
    switch (create_report__IsActive_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        create_report__ModuleIsActive_10 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        create_report__ModuleIsActive_10 = (MR_Integer) 1;
        break;
    }
    {
      create_report__ModuleActive_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__ModuleActive_11, 0) = ((MR_Box) (create_report__ModuleName_5));
      MR_hl_field(MR_mktag(0), create_report__ModuleActive_11, 1) = ((MR_Box) (create_report__ModuleIsActive_10));
    }
    {
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__ModuleActive_11)), create_report__Own_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &create_report__ModuleRowData_7);
    }
    return create_report__ModuleRowData_7;
  }
}

static MR_bool MR_CALL 
create_report__not_mercury_runtime_1_p_0(
  MR_Word create_report__HeadVar__1_1)
{
  {
    MR_bool create_report__succeeded;
    MR_String create_report__ModuleName_2 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word create_report__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__1_1, (MR_Integer) 1)));

    create_report__succeeded = (strcmp(create_report__ModuleName_2, (MR_String) "Mercury runtime") == 0);
    create_report__succeeded = !(create_report__succeeded);
    return create_report__succeeded;
  }
}

static MR_Box MR_CALL 
create_report__create_program_modules_report_2_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_ModuleRowData_7;

    {
      create_report__conv0_ModuleRowData_7 = create_report__module_pair_to_row_data_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_ModuleRowData_7));
    return create_report__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
create_report__create_program_modules_report_2_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_bool create_report__succeeded;
    MR_Box create_report__closure = create_report__closure_arg;

    {
      create_report__succeeded = create_report__not_mercury_runtime_1_p_0(((MR_Word) create_report__wrapper_arg_1));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report__create_program_modules_report_2_p_0(
  MR_Word create_report__Deep_3,
  MR_Word * create_report__MaybeProgramModulesReport_4)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__TypeInfo_43_43;
    MR_Word create_report__ModulePairs0_5;
    MR_Word create_report__ModulePairs_6;
    MR_Word create_report__ModuleRowDatas_7;
    MR_Word create_report__ProgramModulesReport_8;
    MR_Word create_report__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 25)));
    MR_Word create_report__Var_11;
    MR_Word create_report__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 0)));
    MR_String create_report__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 1)));
    MR_String create_report__Var_14 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 2)));
    MR_String create_report__Var_15 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 3)));
    MR_Word create_report__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 4)));
    MR_ArrayPtr create_report__Var_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 5)));
    MR_ArrayPtr create_report__Var_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 6)));
    MR_ArrayPtr create_report__Var_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 7)));
    MR_ArrayPtr create_report__Var_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 8)));
    MR_ArrayPtr create_report__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 9)));
    MR_ArrayPtr create_report__Var_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 10)));
    MR_ArrayPtr create_report__Var_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 11)));
    MR_ArrayPtr create_report__Var_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 12)));
    MR_ArrayPtr create_report__Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 13)));
    MR_ArrayPtr create_report__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 14)));
    MR_ArrayPtr create_report__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 15)));
    MR_ArrayPtr create_report__Var_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 16)));
    MR_ArrayPtr create_report__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 17)));
    MR_ArrayPtr create_report__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 18)));
    MR_ArrayPtr create_report__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 19)));
    MR_ArrayPtr create_report__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 20)));
    MR_ArrayPtr create_report__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 21)));
    MR_ArrayPtr create_report__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 22)));
    MR_ArrayPtr create_report__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 23)));
    MR_ArrayPtr create_report__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 24)));
    MR_Word create_report__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 26)));
    MR_Word create_report__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 27)));
    MR_Word create_report__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_3, (MR_Integer) 28)));

    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, create_report__Var_9, &create_report__ModulePairs0_5);
    }
    create_report__TypeInfo_43_43 = (MR_Word) &create_report_scalar_common_2[12];
    {
      mercury__list__filter_3_p_0(create_report__TypeInfo_43_43, (MR_Word) &create_report_scalar_common_2[20], create_report__ModulePairs0_5, &create_report__ModulePairs_6);
    }
    {
      create_report__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__Var_11, 0) = ((MR_Box) (&create_report_scalar_common_6[3]));
      MR_hl_field(MR_mktag(0), create_report__Var_11, 1) = ((MR_Box) (create_report__create_program_modules_report_2_p_0_2));
      MR_hl_field(MR_mktag(0), create_report__Var_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), create_report__Var_11, 3) = ((MR_Box) (create_report__Deep_3));
    }
    {
      create_report__ModuleRowDatas_7 = mercury__list__map_2_f_0(create_report__TypeInfo_43_43, (MR_Word) &create_report_scalar_common_1[9], create_report__Var_11, create_report__ModulePairs_6);
    }
    create_report__ProgramModulesReport_8 = (MR_Word) create_report__ModuleRowDatas_7;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *create_report__MaybeProgramModulesReport_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProgramModulesReport_8));
    }
  }
}

static void MR_CALL 
create_report__get_recursive_csd_cost_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CSDPtr_6,
  MR_Word create_report__RecursionType_7,
  MR_Word * create_report__MaybeCost_8)
{
  {
    MR_bool create_report__succeeded;

    switch (MR_tag((MR_Word) create_report__RecursionType_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *create_report__MaybeCost_8 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[4]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Float create_report__AvgMaxDepth_11 = MR_unbox_float((MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 2)));
          MR_Word create_report__CostFn_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 4)));
          MR_Word create_report__Own_14;
          MR_Float create_report__Calls_15;
          MR_Integer create_report__Var_24;
          MR_Float create_report__Var_25;
          MR_Float create_report__Var_26;
          MR_Integer create_report__Var_27;
          MR_Integer create_report__Var_28;
          MR_Word create_report__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 0)));
          MR_Word create_report__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 1)));
          MR_Float create_report__Var_12 = MR_unbox_float((MR_hl_field(MR_mktag(1), create_report__RecursionType_7, (MR_Integer) 3)));
          MR_Box MR_CALL (* create_report__func_0)(MR_Box, MR_Box);
          MR_Box create_report__conv1_Var_26;

          {
            profile__deep_lookup_csd_own_3_p_0(create_report__Deep_5, create_report__CSDPtr_6, &create_report__Own_14);
          }
          {
            create_report__Var_24 = measurements__calls_1_f_0(create_report__Own_14);
          }
          {
            create_report__Calls_15 = mercury__float__float_1_f_0(create_report__Var_24);
          }
          {
            create_report__Var_28 = mercury__float__round_to_int_1_f_0(create_report__AvgMaxDepth_11);
          }
          create_report__Var_27 = (create_report__Var_28 - (MR_Integer) 1);
          create_report__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), create_report__CostFn_13, (MR_Integer) 1)));
          {
            create_report__conv1_Var_26 = create_report__func_0(((MR_Box) create_report__CostFn_13), ((MR_Box) (create_report__Var_27)));
          }
          create_report__Var_26 = MR_unbox_float(create_report__conv1_Var_26);
          create_report__Var_25 = (create_report__Var_26 * create_report__Calls_15);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *create_report__MaybeCost_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = MR_box_float(create_report__Var_25);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *create_report__MaybeCost_8 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[3]);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__RecursionType_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *create_report__MaybeCost_8 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[3]);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word create_report__Errors_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__RecursionType_7, (MR_Integer) 1)));
              MR_String create_report__Var_21;

              {
                create_report__Var_21 = mercury__string__join_list_2_f_0((MR_String) "\n", create_report__Errors_20);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *create_report__MaybeCost_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Var_21));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
create_report__call_site_dynamic_var_use_arg_9_p_0(
  MR_Word create_report__Deep_10,
  MR_Word create_report__CSDPtr_11,
  MR_Word create_report__RecursionType_12,
  MR_Float create_report__Cost_13,
  MR_Word create_report__VarNameTable_14,
  MR_Word create_report__HeadVar_15,
  MR_Word * create_report__MaybeUseAndName_16,
  MR_Integer create_report__STATE_VARIABLE_ArgNum_0_26,
  MR_Integer * create_report__STATE_VARIABLE_ArgNum_27)
{
  {
    MR_bool create_report__succeeded;
    MR_Integer create_report__Var_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__HeadVar_15, (MR_Integer) 0)));
    MR_Word create_report__Mode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar_15, (MR_Integer) 1)));
    MR_Word create_report__UseType_20;
    MR_Word create_report__UseOptions_21;
    MR_Word create_report__MaybeUse_22;

    {
      var_use_analysis__var_mode_to_var_use_type_2_p_0(create_report__Mode_19, &create_report__UseType_20);
    }
    {
      create_report__UseOptions_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__UseOptions_21, 0) = ((MR_Box) (create_report__Deep_10));
      MR_hl_field(MR_mktag(0), create_report__UseOptions_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), create_report__UseOptions_21, 2) = ((MR_Box) (create_report__UseType_20));
    }
    {
      var_use_analysis__get_call_site_dynamic_var_use_info_6_p_1(create_report__CSDPtr_11, create_report__STATE_VARIABLE_ArgNum_0_26, create_report__RecursionType_12, create_report__Cost_13, create_report__UseOptions_21, &create_report__MaybeUse_22);
    }
    if (((MR_tag((MR_Word) create_report__MaybeUse_22)) == (MR_mktag((MR_Integer) 1))))
      *create_report__MaybeUseAndName_16 = (MR_Word) create_report__MaybeUse_22;
    else
      {
        MR_Word create_report__Use_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeUse_22, (MR_Integer) 0)));
        MR_String create_report__Name_24;
        MR_Word create_report__Var_29;

        {
          mdbcomp__program_representation__lookup_var_name_3_p_0(create_report__VarNameTable_14, create_report__Var_18, &create_report__Name_24);
        }
        {
          create_report__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_29, 0) = ((MR_Box) (create_report__Name_24));
          MR_hl_field(MR_mktag(0), create_report__Var_29, 1) = ((MR_Box) (create_report__Use_23));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *create_report__MaybeUseAndName_16 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__Var_29));
        }
      }
    *create_report__STATE_VARIABLE_ArgNum_27 = (create_report__STATE_VARIABLE_ArgNum_0_26 + (MR_Integer) 1);
  }
}

static void MR_CALL 
create_report__maybe_create_procrep_coverage_report_6_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box create_report__wrapper_arg_4,
  MR_Box * create_report__wrapper_arg_5)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv1_HeadVar__3_3;
    MR_Word create_report__conv0_HeadVar__5_5;

    {
      coverage__add_coverage_point_to_map_5_p_0(((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv1_HeadVar__3_3, ((MR_Word) create_report__wrapper_arg_4), &create_report__conv0_HeadVar__5_5);
    }
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_HeadVar__3_3));
    *create_report__wrapper_arg_5 = ((MR_Box) (create_report__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
create_report__maybe_create_procrep_coverage_report_6_p_0(
  MR_Word create_report__TypeInfo_for_Callee_63,
  MR_Word create_report__Deep_1,
  MR_Word create_report__PSPtr_2,
  MR_Word create_report__Own_3,
  MR_Word create_report__HeadVar__4_4,
  MR_Word create_report__CallSitesMap_5,
  MR_Word * create_report__HeadVar__6_6)
{
  {
    MR_bool create_report__succeeded;

    if ((create_report__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *create_report__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[2]);
      }
    else
      {
        MR_ArrayPtr create_report__CoveragePointsArray_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word create_report__PS_18;
        MR_Word create_report__CoveragePoints_19;
        MR_Word create_report__MaybeProcRep0_20;
        MR_ArrayPtr create_report__Var_31;
        MR_Word create_report__Var_39;
        MR_String create_report__Var_40;
        MR_String create_report__Var_41;
        MR_String create_report__Var_42;
        MR_String create_report__Var_43;
        MR_String create_report__Var_44;
        MR_Integer create_report__Var_45;
        MR_Word create_report__Var_46;
        MR_ArrayPtr create_report__Var_47;
        MR_Word create_report__Var_48;
        MR_Word create_report__Var_49;

        {
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_1, create_report__PSPtr_2, &create_report__PS_18);
        }
        create_report__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 0)));
        create_report__Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 1)));
        create_report__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 2)));
        create_report__Var_42 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 3)));
        create_report__Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 4)));
        create_report__Var_44 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 5)));
        create_report__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 6)));
        create_report__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 7)));
        create_report__Var_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 8)));
        create_report__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 9)));
        create_report__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 10)));
        create_report__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_18, (MR_Integer) 11)));
        {
          coverage__coverage_point_arrays_to_list_3_p_0(create_report__Var_31, create_report__CoveragePointsArray_15, &create_report__CoveragePoints_19);
        }
        {
          analysis_utils__deep_get_maybe_procrep_3_p_0(create_report__Deep_1, create_report__PSPtr_2, &create_report__MaybeProcRep0_20);
        }
        if (((MR_tag((MR_Word) create_report__MaybeProcRep0_20)) == (MR_mktag((MR_Integer) 1))))
          *create_report__HeadVar__6_6 = (MR_Word) create_report__MaybeProcRep0_20;
        else
          {
            MR_Word create_report__TypeCtorInfo_69_69 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
            MR_Word create_report__TypeCtorInfo_70_70 = (MR_Word) &coverage__coverage__type_ctor_info_coverage_point_0;
            MR_Word create_report__TypeInfo_71_71;
            MR_Word create_report__ProcRep0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeProcRep0_20, (MR_Integer) 0)));
            MR_Word create_report__SolnsCoveragePointMap_23;
            MR_Word create_report__BranchCoveragePointMap_24;
            MR_Word create_report__Goal0_25;
            MR_Word create_report__LastGoalId_26;
            MR_Word create_report__ContainingGoalMap_27;
            MR_Word create_report__Goal_28;
            MR_Word create_report__ProcRep_29;
            MR_Word create_report__CoverageArray_30;
            MR_Word create_report__Var_33;
            MR_Word create_report__Var_34;
            MR_Word create_report__Var_35;
            MR_Word create_report__Var_36;
            MR_Word create_report__Var_37;
            MR_Word create_report__Var_38;
            MR_Word create_report__Var_55;
            MR_Box create_report__conv3_SolnsCoveragePointMap_23;
            MR_Box create_report__conv2_BranchCoveragePointMap_24;
            MR_Word create_report__Var_50;
            MR_Word create_report__Var_51;
            MR_Word create_report__Var_52;
            MR_Word create_report__Var_53;
            MR_Word create_report__Var_54;
            MR_Word create_report__Var_56;
            MR_Word create_report__Var_58;
            MR_Word create_report__Var_59;
            MR_Word create_report__Var_60;
            MR_Word create_report__Var_57;

            {
              create_report__Var_33 = mercury__map__init_0_f_0(create_report__TypeCtorInfo_69_69, create_report__TypeCtorInfo_70_70);
            }
            {
              create_report__Var_34 = mercury__map__init_0_f_0(create_report__TypeCtorInfo_69_69, create_report__TypeCtorInfo_70_70);
            }
            create_report__TypeInfo_71_71 = (MR_Word) &create_report_scalar_common_2[11];
            {
              mercury__list__foldl2_6_p_0(create_report__TypeCtorInfo_70_70, create_report__TypeInfo_71_71, create_report__TypeInfo_71_71, (MR_Word) &create_report_scalar_common_2[19], create_report__CoveragePoints_19, ((MR_Box) (create_report__Var_33)), &create_report__conv3_SolnsCoveragePointMap_23, ((MR_Box) (create_report__Var_34)), &create_report__conv2_BranchCoveragePointMap_24);
            }
            create_report__SolnsCoveragePointMap_23 = ((MR_Word) create_report__conv3_SolnsCoveragePointMap_23);
            create_report__BranchCoveragePointMap_24 = ((MR_Word) create_report__conv2_BranchCoveragePointMap_24);
            create_report__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcRep0_22, (MR_Integer) 0)));
            create_report__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcRep0_22, (MR_Integer) 1)));
            create_report__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_35, (MR_Integer) 0)));
            create_report__Goal0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_35, (MR_Integer) 1)));
            create_report__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_35, (MR_Integer) 2)));
            create_report__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_35, (MR_Integer) 3)));
            create_report__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_35, (MR_Integer) 4)));
            {
              program_representation_utils__label_goals_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, &create_report__LastGoalId_26, &create_report__ContainingGoalMap_27, create_report__Goal0_25, &create_report__Goal_28);
            }
            create_report__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcRep0_22, (MR_Integer) 0)));
            create_report__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ProcRep0_22, (MR_Integer) 1)));
            create_report__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_36, (MR_Integer) 0)));
            create_report__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_36, (MR_Integer) 1)));
            create_report__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_36, (MR_Integer) 2)));
            create_report__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_36, (MR_Integer) 3)));
            create_report__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_36, (MR_Integer) 4)));
            {
              create_report__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), create_report__Var_37, 0) = ((MR_Box) (create_report__Var_56));
              MR_hl_field(MR_mktag(0), create_report__Var_37, 1) = ((MR_Box) (create_report__Goal_28));
              MR_hl_field(MR_mktag(0), create_report__Var_37, 2) = ((MR_Box) (create_report__Var_58));
              MR_hl_field(MR_mktag(0), create_report__Var_37, 3) = ((MR_Box) (create_report__Var_59));
              MR_hl_field(MR_mktag(0), create_report__Var_37, 4) = ((MR_Box) (create_report__Var_60));
            }
            {
              create_report__ProcRep_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), create_report__ProcRep_29, 0) = ((MR_Box) (create_report__Var_55));
              MR_hl_field(MR_mktag(0), create_report__ProcRep_29, 1) = ((MR_Box) (create_report__Var_37));
            }
            {
              coverage__procrep_annotate_with_coverage_8_p_0(create_report__TypeInfo_for_Callee_63, create_report__ProcRep_29, create_report__Own_3, create_report__CallSitesMap_5, create_report__SolnsCoveragePointMap_23, create_report__BranchCoveragePointMap_24, create_report__ContainingGoalMap_27, create_report__LastGoalId_26, &create_report__CoverageArray_30);
            }
            {
              create_report__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), create_report__Var_38, 0) = ((MR_Box) (create_report__PSPtr_2));
              MR_hl_field(MR_mktag(0), create_report__Var_38, 1) = ((MR_Box) (create_report__ProcRep_29));
              MR_hl_field(MR_mktag(0), create_report__Var_38, 2) = ((MR_Box) (create_report__CoverageArray_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *create_report__HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__Var_38));
            }
          }
      }
  }
}

static MR_Box MR_CALL 
create_report__create_proc_caller_cliques_3_f_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_ProcDesc_6;

    {
      create_report__conv0_ProcDesc_6 = create_report__describe_clique_member_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_ProcDesc_6));
    return create_report__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
create_report__create_proc_caller_cliques_3_f_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CalleePSPtr_6,
  MR_Word create_report__HeadVar__3_3)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__PerfRowData_9;
    MR_Word create_report__CliquePtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word create_report__CliqueDesc_10;
    MR_Word create_report__Own_11;
    MR_Word create_report__Desc_12;
    MR_Word create_report__Var_50;

    {
      create_report__succeeded = profile__valid_clique_ptr_2_p_0(create_report__Deep_5, create_report__CliquePtr_7);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__MemberPDPtrs_19;
        MR_Word create_report__ParentCSDPtr_20;
        MR_Word create_report__ParentCSD_21;
        MR_Word create_report__EntryPDPtr_22;
        MR_Word create_report__Var_31;
        MR_Word create_report__Var_32;
        MR_Word create_report__OtherPDPtrs_23;

        {
          profile__deep_lookup_clique_members_3_p_0(create_report__Deep_5, create_report__CliquePtr_7, &create_report__MemberPDPtrs_19);
        }
        {
          profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_5, create_report__CliquePtr_7, &create_report__ParentCSDPtr_20);
        }
        {
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_5, create_report__ParentCSDPtr_20, &create_report__ParentCSD_21);
        }
        create_report__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_21, (MR_Integer) 0)));
        create_report__EntryPDPtr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_21, (MR_Integer) 1)));
        create_report__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ParentCSD_21, (MR_Integer) 2)));
        {
          create_report__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, create_report__MemberPDPtrs_19, ((MR_Box) (create_report__EntryPDPtr_22)), &create_report__OtherPDPtrs_23);
        }
        if (create_report__succeeded)
          {
            MR_Word create_report__EntryProcDesc_24;
            MR_Word create_report__OtherProcDescs_25;
            MR_Word create_report__Var_26;
            MR_Word create_report__PD_41;
            MR_Word create_report__Var_42;
            MR_ArrayPtr create_report__Var_43;
            MR_Word create_report__Var_44;

            {
              profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_5, create_report__EntryPDPtr_22, &create_report__PD_41);
            }
            create_report__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_41, (MR_Integer) 0)));
            create_report__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_41, (MR_Integer) 1)));
            create_report__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_41, (MR_Integer) 2)));
            {
              create_report__EntryProcDesc_24 = create_report__describe_proc_2_f_0(create_report__Deep_5, create_report__Var_42);
            }
            {
              create_report__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), create_report__Var_26, 0) = ((MR_Box) (&create_report_scalar_common_6[2]));
              MR_hl_field(MR_mktag(0), create_report__Var_26, 1) = ((MR_Box) (create_report__create_proc_caller_cliques_3_f_0_1));
              MR_hl_field(MR_mktag(0), create_report__Var_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), create_report__Var_26, 3) = ((MR_Box) (create_report__Deep_5));
            }
            {
              create_report__OtherProcDescs_25 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &report__report__type_ctor_info_proc_desc_0, create_report__Var_26, create_report__OtherPDPtrs_23);
            }
            {
              create_report__CliqueDesc_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_10, 0) = ((MR_Box) (create_report__CliquePtr_7));
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_10, 1) = ((MR_Box) (create_report__EntryProcDesc_24));
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_10, 2) = ((MR_Box) (create_report__OtherProcDescs_25));
            }
          }
        else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "entry pdptr not a member");
            }
          }
      }
    else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "invalid clique_ptr");
        }
      }
    {
      apply_exclusion__compute_parent_csd_prof_info_5_p_0(create_report__Deep_5, create_report__CalleePSPtr_6, create_report__CSDPtrs_8, &create_report__Own_11, &create_report__Desc_12);
    }
    {
      create_report__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), create_report__Var_50, 0) = ((MR_Box) (create_report__Desc_12));
    }
    {
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__CliqueDesc_10)), create_report__Own_11, create_report__Var_50, &create_report__PerfRowData_9);
    }
    return create_report__PerfRowData_9;
  }
}

static MR_Word MR_CALL 
create_report__create_proc_caller_modules_3_f_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CalleePSPtr_6,
  MR_Word create_report__HeadVar__3_3)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__PerfRowData_9;
    MR_String create_report__ModuleName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word create_report__Own_10;
    MR_Word create_report__Desc_11;
    MR_Word create_report__Var_18;

    {
      apply_exclusion__compute_parent_csd_prof_info_5_p_0(create_report__Deep_5, create_report__CalleePSPtr_6, create_report__CSDPtrs_8, &create_report__Own_10, &create_report__Desc_11);
    }
    {
      create_report__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), create_report__Var_18, 0) = ((MR_Box) (create_report__Desc_11));
    }
    {
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__ModuleName_7)), create_report__Own_10, create_report__Var_18, &create_report__PerfRowData_9);
    }
    return create_report__PerfRowData_9;
  }
}

static MR_Word MR_CALL 
create_report__create_proc_caller_procedures_3_f_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CalleePSPtr_6,
  MR_Word create_report__HeadVar__3_3)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__PerfRowData_9;
    MR_Word create_report__PSSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word create_report__ProcDesc_10;
    MR_Word create_report__Own_11;
    MR_Word create_report__Desc_12;
    MR_Word create_report__Var_19;

    {
      create_report__ProcDesc_10 = create_report__describe_proc_2_f_0(create_report__Deep_5, create_report__PSSPtr_7);
    }
    {
      apply_exclusion__compute_parent_csd_prof_info_5_p_0(create_report__Deep_5, create_report__CalleePSPtr_6, create_report__CSDPtrs_8, &create_report__Own_11, &create_report__Desc_12);
    }
    {
      create_report__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), create_report__Var_19, 0) = ((MR_Box) (create_report__Desc_12));
    }
    {
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__ProcDesc_10)), create_report__Own_11, create_report__Var_19, &create_report__PerfRowData_9);
    }
    return create_report__PerfRowData_9;
  }
}

static MR_Word MR_CALL 
create_report__create_proc_caller_call_sites_3_f_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CalleePSPtr_6,
  MR_Word create_report__HeadVar__3_3)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__PerfRowData_9;
    MR_Word create_report__CSSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word create_report__CallSiteDesc_10;
    MR_Word create_report__Own_11;
    MR_Word create_report__Desc_12;
    MR_Word create_report__Var_19;

    {
      create_report__CallSiteDesc_10 = create_report__describe_call_site_2_f_0(create_report__Deep_5, create_report__CSSPtr_7);
    }
    {
      apply_exclusion__compute_parent_csd_prof_info_5_p_0(create_report__Deep_5, create_report__CalleePSPtr_6, create_report__CSDPtrs_8, &create_report__Own_11, &create_report__Desc_12);
    }
    {
      create_report__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), create_report__Var_19, 0) = ((MR_Box) (create_report__Desc_12));
    }
    {
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__CallSiteDesc_10)), create_report__Own_11, create_report__Var_19, &create_report__PerfRowData_9);
    }
    return create_report__PerfRowData_9;
  }
}

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_6(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv5_PerfRowData_9;

    {
      create_report__conv5_PerfRowData_9 = create_report__create_proc_caller_procedures_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv5_PerfRowData_9));
    return create_report__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_5(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv4_PerfRowData_9;

    {
      create_report__conv4_PerfRowData_9 = create_report__create_proc_caller_modules_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv4_PerfRowData_9));
    return create_report__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_4(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv3_PerfRowData_9;

    {
      create_report__conv3_PerfRowData_9 = create_report__create_proc_caller_cliques_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv3_PerfRowData_9));
    return create_report__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_3(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv2_PerfRowData_9;

    {
      create_report__conv2_PerfRowData_9 = create_report__create_proc_caller_call_sites_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_PerfRowData_9));
    return create_report__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv1_HeadVar__2_2;

    {
      create_report__conv1_HeadVar__2_2 = apply_exclusion__pair_self_1_f_0(((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv1_HeadVar__2_2));
    return create_report__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_HeadVar__4_4;

    {
      create_report__conv0_HeadVar__4_4 = apply_exclusion__pair_contour_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_HeadVar__4_4));
    return create_report__wrapper_arg_2;
  }
}

static void MR_CALL 
create_report__create_proc_callers_report_7_p_0(
  MR_Word create_report__Deep_8,
  MR_Word create_report__PSPtr_9,
  MR_Word create_report__CallerGroups_10,
  MR_Integer create_report__BunchNum_11,
  MR_Integer create_report__CallersPerBunch_12,
  MR_Word create_report__Contour_13,
  MR_Word * create_report__MaybeProcCallersReport_14)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_8, create_report__PSPtr_9);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__ProcDesc_15;
        MR_Word create_report__CallerCSDPtrs0_16;
        MR_Word create_report__MaybeCallerCSDPtrPairs_18;
        MR_Word create_report__MaybeWarnMessage_19;

        {
          create_report__ProcDesc_15 = create_report__describe_proc_2_f_0(create_report__Deep_8, create_report__PSPtr_9);
        }
        {
          profile__deep_lookup_proc_callers_3_p_0(create_report__Deep_8, create_report__PSPtr_9, &create_report__CallerCSDPtrs0_16);
        }
        switch (create_report__Contour_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word create_report__ExcludeFile_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 27)));
              MR_String create_report__ExcludeFileName_21 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__ExcludeFile_20, (MR_Integer) 0)));
              MR_Word create_report__ExcludeContents_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__ExcludeFile_20, (MR_Integer) 1)));
              MR_Word create_report__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 0)));
              MR_String create_report__Var_62 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 1)));
              MR_String create_report__Var_63 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 2)));
              MR_String create_report__Var_64 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 3)));
              MR_Word create_report__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 4)));
              MR_ArrayPtr create_report__Var_66 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 5)));
              MR_ArrayPtr create_report__Var_67 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 6)));
              MR_ArrayPtr create_report__Var_68 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 7)));
              MR_ArrayPtr create_report__Var_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 8)));
              MR_ArrayPtr create_report__Var_70 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 9)));
              MR_ArrayPtr create_report__Var_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 10)));
              MR_ArrayPtr create_report__Var_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 11)));
              MR_ArrayPtr create_report__Var_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 12)));
              MR_ArrayPtr create_report__Var_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 13)));
              MR_ArrayPtr create_report__Var_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 14)));
              MR_ArrayPtr create_report__Var_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 15)));
              MR_ArrayPtr create_report__Var_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 16)));
              MR_ArrayPtr create_report__Var_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 17)));
              MR_ArrayPtr create_report__Var_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 18)));
              MR_ArrayPtr create_report__Var_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 19)));
              MR_ArrayPtr create_report__Var_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 20)));
              MR_ArrayPtr create_report__Var_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 21)));
              MR_ArrayPtr create_report__Var_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 22)));
              MR_ArrayPtr create_report__Var_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 23)));
              MR_ArrayPtr create_report__Var_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 24)));
              MR_Word create_report__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 25)));
              MR_Word create_report__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 26)));
              MR_Word create_report__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_8, (MR_Integer) 28)));

              switch (MR_tag((MR_Word) create_report__ExcludeContents_22)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String create_report__ErrorMessage0_23;
                    MR_String create_report__Var_120;

                    {
                      create_report__Var_120 = mercury__string__f_43_43_2_f_0(create_report__ExcludeFileName_21, (MR_String) "\'.");
                    }
                    {
                      create_report__ErrorMessage0_23 = mercury__string__f_43_43_2_f_0((MR_String) "Could not read contour exclusion file \140", create_report__Var_120);
                    }
                    {
                      create_report__MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), create_report__MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (create_report__ErrorMessage0_23));
                    }
                    create_report__MaybeWarnMessage_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String create_report__ErrorMsg_24 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__ExcludeContents_22, (MR_Integer) 0)));
                    MR_String create_report__ErrorMessage0_57;
                    MR_String create_report__Var_114;
                    MR_String create_report__Var_116;
                    MR_String create_report__Var_117;

                    {
                      create_report__Var_114 = mercury__string__f_43_43_2_f_0(create_report__ErrorMsg_24, (MR_String) ".");
                    }
                    {
                      create_report__Var_116 = mercury__string__f_43_43_2_f_0((MR_String) "\' has an error: ", create_report__Var_114);
                    }
                    {
                      create_report__Var_117 = mercury__string__f_43_43_2_f_0(create_report__ExcludeFileName_21, create_report__Var_116);
                    }
                    {
                      create_report__ErrorMessage0_57 = mercury__string__f_43_43_2_f_0((MR_String) "The contour exclusion file \140", create_report__Var_117);
                    }
                    {
                      create_report__MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), create_report__MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (create_report__ErrorMessage0_57));
                    }
                    create_report__MaybeWarnMessage_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word create_report__ExcludeModules_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__ExcludeContents_22, (MR_Integer) 0)));
                    MR_Word create_report__MaybeWarnMsg_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__ExcludeContents_22, (MR_Integer) 1)));
                    MR_Word create_report__Var_40;
                    MR_Word create_report__CallerCSDPtrPairs0_58;

                    {
                      create_report__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), create_report__Var_40, 0) = ((MR_Box) (&create_report_scalar_common_4[9]));
                      MR_hl_field(MR_mktag(0), create_report__Var_40, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_1));
                      MR_hl_field(MR_mktag(0), create_report__Var_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                      MR_hl_field(MR_mktag(0), create_report__Var_40, 3) = ((MR_Box) (create_report__Deep_8));
                      MR_hl_field(MR_mktag(0), create_report__Var_40, 4) = ((MR_Box) (create_report__ExcludeModules_25));
                    }
                    {
                      create_report__CallerCSDPtrPairs0_58 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &create_report_scalar_common_2[7], create_report__Var_40, create_report__CallerCSDPtrs0_16);
                    }
                    {
                      create_report__MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), create_report__MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (create_report__CallerCSDPtrPairs0_58));
                    }
                    if ((create_report__MaybeWarnMsg_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      create_report__MaybeWarnMessage_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    else
                      create_report__MaybeWarnMessage_19 = create_report__MaybeWarnMsg_26;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word create_report__CallerCSDPtrPairs0_17;

              {
                create_report__CallerCSDPtrPairs0_17 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &create_report_scalar_common_2[7], (MR_Word) &create_report_scalar_common_2[18], create_report__CallerCSDPtrs0_16);
              }
              {
                create_report__MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (create_report__CallerCSDPtrPairs0_17));
              }
              create_report__MaybeWarnMessage_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
        }
        if (((MR_tag((MR_Word) create_report__MaybeCallerCSDPtrPairs_18)) == (MR_mktag((MR_Integer) 1))))
          *create_report__MaybeProcCallersReport_14 = (MR_Word) create_report__MaybeCallerCSDPtrPairs_18;
        else
          {
            MR_Word create_report__CallerCSDPtrPairs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeCallerCSDPtrPairs_18, (MR_Integer) 0)));
            MR_Word create_report__Callers_32;
            MR_Word create_report__ProcCallersReport_39;

            switch (create_report__CallerGroups_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word create_report__CallSiteCallerGroups_30;
                  MR_Word create_report__ProcCallerCallSites_31;
                  MR_Word create_report__Var_55;

                  {
                    create_report__CallSiteCallerGroups_30 = apply_exclusion__group_csds_by_call_site_2_f_0(create_report__Deep_8, create_report__CallerCSDPtrPairs_29);
                  }
                  {
                    create_report__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), create_report__Var_55, 0) = ((MR_Box) (&create_report_scalar_common_4[10]));
                    MR_hl_field(MR_mktag(0), create_report__Var_55, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_3));
                    MR_hl_field(MR_mktag(0), create_report__Var_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), create_report__Var_55, 3) = ((MR_Box) (create_report__Deep_8));
                    MR_hl_field(MR_mktag(0), create_report__Var_55, 4) = ((MR_Box) (create_report__PSPtr_9));
                  }
                  {
                    create_report__ProcCallerCallSites_31 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[8], (MR_Word) &create_report_scalar_common_1[7], create_report__Var_55, create_report__CallSiteCallerGroups_30);
                  }
                  {
                    create_report__Callers_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), create_report__Callers_32, 0) = ((MR_Box) (create_report__ProcCallerCallSites_31));
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word create_report__CliqueCallerGroups_37;
                  MR_Word create_report__ProcCallerCliques_38;
                  MR_Word create_report__Var_52;

                  {
                    create_report__CliqueCallerGroups_37 = apply_exclusion__group_csds_by_clique_2_f_0(create_report__Deep_8, create_report__CallerCSDPtrPairs_29);
                  }
                  {
                    create_report__Var_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), create_report__Var_52, 0) = ((MR_Box) (&create_report_scalar_common_4[11]));
                    MR_hl_field(MR_mktag(0), create_report__Var_52, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_4));
                    MR_hl_field(MR_mktag(0), create_report__Var_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), create_report__Var_52, 3) = ((MR_Box) (create_report__Deep_8));
                    MR_hl_field(MR_mktag(0), create_report__Var_52, 4) = ((MR_Box) (create_report__PSPtr_9));
                  }
                  {
                    create_report__ProcCallerCliques_38 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[10], (MR_Word) &create_report_scalar_common_1[5], create_report__Var_52, create_report__CliqueCallerGroups_37);
                  }
                  {
                    create_report__Callers_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), create_report__Callers_32, 0) = ((MR_Box) (create_report__ProcCallerCliques_38));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word create_report__ModuleCallerGroups_35;
                  MR_Word create_report__ProcCallerModules_36;
                  MR_Word create_report__Var_53;

                  {
                    create_report__ModuleCallerGroups_35 = apply_exclusion__group_csds_by_module_2_f_0(create_report__Deep_8, create_report__CallerCSDPtrPairs_29);
                  }
                  {
                    create_report__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), create_report__Var_53, 0) = ((MR_Box) (&create_report_scalar_common_4[12]));
                    MR_hl_field(MR_mktag(0), create_report__Var_53, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_5));
                    MR_hl_field(MR_mktag(0), create_report__Var_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), create_report__Var_53, 3) = ((MR_Box) (create_report__Deep_8));
                    MR_hl_field(MR_mktag(0), create_report__Var_53, 4) = ((MR_Box) (create_report__PSPtr_9));
                  }
                  {
                    create_report__ProcCallerModules_36 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[9], (MR_Word) &create_report_scalar_common_1[8], create_report__Var_53, create_report__ModuleCallerGroups_35);
                  }
                  {
                    create_report__Callers_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), create_report__Callers_32, 0) = ((MR_Box) (create_report__ProcCallerModules_36));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word create_report__ProcCallerGroups_33;
                  MR_Word create_report__ProcCallerProcs_34;
                  MR_Word create_report__Var_54;

                  {
                    create_report__ProcCallerGroups_33 = apply_exclusion__group_csds_by_procedure_2_f_0(create_report__Deep_8, create_report__CallerCSDPtrPairs_29);
                  }
                  {
                    create_report__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), create_report__Var_54, 0) = ((MR_Box) (&create_report_scalar_common_4[13]));
                    MR_hl_field(MR_mktag(0), create_report__Var_54, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_6));
                    MR_hl_field(MR_mktag(0), create_report__Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), create_report__Var_54, 3) = ((MR_Box) (create_report__Deep_8));
                    MR_hl_field(MR_mktag(0), create_report__Var_54, 4) = ((MR_Box) (create_report__PSPtr_9));
                  }
                  {
                    create_report__ProcCallerProcs_34 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[6], (MR_Word) &create_report_scalar_common_1[3], create_report__Var_54, create_report__ProcCallerGroups_33);
                  }
                  {
                    create_report__Callers_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), create_report__Callers_32, 0) = ((MR_Box) (create_report__ProcCallerProcs_34));
                  }
                }
                break;
            }
            {
              create_report__ProcCallersReport_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 0) = ((MR_Box) (create_report__ProcDesc_15));
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 1) = ((MR_Box) (create_report__Callers_32));
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 2) = ((MR_Box) (create_report__BunchNum_11));
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 3) = ((MR_Box) (create_report__CallersPerBunch_12));
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 4) = ((MR_Box) (create_report__Contour_13));
              MR_hl_field(MR_mktag(0), create_report__ProcCallersReport_39, 5) = ((MR_Box) (create_report__MaybeWarnMessage_19));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *create_report__MaybeProcCallersReport_14 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcCallersReport_39));
            }
          }
      }
    else
      {
        *create_report__MaybeProcCallersReport_14 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[1]);
      }
  }
}

static void MR_CALL 
create_report__accumulate_call_site_callees_7_p_0(
  MR_Word create_report__Deep_8,
  MR_Word create_report__CalleePerf_9,
  MR_Word * create_report__RowData_10,
  MR_Word create_report__STATE_VARIABLE_Own_0_17,
  MR_Word * create_report__STATE_VARIABLE_Own_18,
  MR_Word create_report__STATE_VARIABLE_Desc_0_19,
  MR_Word * create_report__STATE_VARIABLE_Desc_20)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__CalleePSPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePerf_9, (MR_Integer) 0)));
    MR_Word create_report__CalleeOwn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePerf_9, (MR_Integer) 1)));
    MR_Word create_report__CalleeDesc_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePerf_9, (MR_Integer) 2)));
    MR_Word create_report__CalleeProcDesc_16;
    MR_Word create_report__Var_29;

    {
      create_report__CalleeProcDesc_16 = create_report__describe_proc_2_f_0(create_report__Deep_8, create_report__CalleePSPtr_13);
    }
    {
      create_report__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), create_report__Var_29, 0) = ((MR_Box) (create_report__CalleeDesc_15));
    }
    {
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_8, ((MR_Box) (create_report__CalleeProcDesc_16)), create_report__CalleeOwn_14, create_report__Var_29, create_report__RowData_10);
    }
    {
      *create_report__STATE_VARIABLE_Own_18 = measurements__add_own_to_own_2_f_0(create_report__STATE_VARIABLE_Own_0_17, create_report__CalleeOwn_14);
    }
    {
      *create_report__STATE_VARIABLE_Desc_20 = measurements__add_inherit_to_inherit_2_f_0(create_report__STATE_VARIABLE_Desc_0_19, create_report__CalleeDesc_15);
    }
  }
}

static void MR_CALL 
create_report__accumulate_csd_prof_info_7_p_0(
  MR_Word create_report__Deep_8,
  MR_Word create_report__CallerPSPtr_9,
  MR_Word create_report__CSDPtr_10,
  MR_Word create_report__STATE_VARIABLE_Own_0_17,
  MR_Word * create_report__STATE_VARIABLE_Own_18,
  MR_Word create_report__STATE_VARIABLE_Desc_0_19,
  MR_Word * create_report__STATE_VARIABLE_Desc_20)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__CSDOwn_13;
    MR_Word create_report__CSDDesc_14;
    MR_Word create_report__CompTableArray_15;
    MR_Word create_report__STATE_VARIABLE_Desc_22_22;
    MR_Word create_report__InnerTotal_16;
    MR_Box create_report__conv0_InnerTotal_16;

    {
      profile__deep_lookup_csd_own_3_p_0(create_report__Deep_8, create_report__CSDPtr_10, &create_report__CSDOwn_13);
    }
    {
      profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_8, create_report__CSDPtr_10, &create_report__CSDDesc_14);
    }
    {
      *create_report__STATE_VARIABLE_Own_18 = measurements__add_own_to_own_2_f_0(create_report__STATE_VARIABLE_Own_0_17, create_report__CSDOwn_13);
    }
    {
      create_report__STATE_VARIABLE_Desc_22_22 = measurements__add_inherit_to_inherit_2_f_0(create_report__STATE_VARIABLE_Desc_0_19, create_report__CSDDesc_14);
    }
    {
      profile__deep_lookup_csd_comp_table_3_p_0(create_report__Deep_8, create_report__CSDPtr_10, &create_report__CompTableArray_15);
    }
    {
      create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__CompTableArray_15, ((MR_Box) (create_report__CallerPSPtr_9)), &create_report__conv0_InnerTotal_16);
    }
    if (create_report__succeeded)
      {
        create_report__InnerTotal_16 = ((MR_Word) create_report__conv0_InnerTotal_16);
        create_report__succeeded = MR_TRUE;
      }
    if (create_report__succeeded)
      {
        *create_report__STATE_VARIABLE_Desc_20 = measurements__subtract_inherit_from_inherit_2_f_0(create_report__InnerTotal_16, create_report__STATE_VARIABLE_Desc_22_22);
      }
    else
      *create_report__STATE_VARIABLE_Desc_20 = create_report__STATE_VARIABLE_Desc_22_22;
  }
}

static void MR_CALL 
create_report__summarize_callers_11_p_0(
  MR_Word create_report__Deep_12,
  MR_Word create_report__CallerCSDPtrs0_13,
  MR_Word create_report__CalleePSPtr_14,
  MR_Word create_report__STATE_VARIABLE_PSSeen_0_27,
  MR_Word * create_report__STATE_VARIABLE_PSSeen_28,
  MR_Integer create_report__STATE_VARIABLE_NumDynamic_0_29,
  MR_Integer * create_report__STATE_VARIABLE_NumDynamic_30,
  MR_Word create_report__STATE_VARIABLE_Own_0_31,
  MR_Word * create_report__STATE_VARIABLE_Own_32,
  MR_Word create_report__STATE_VARIABLE_Desc_0_33,
  MR_Word * create_report__STATE_VARIABLE_Desc_34)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool create_report__succeeded;

        if ((create_report__CallerCSDPtrs0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *create_report__STATE_VARIABLE_PSSeen_28 = create_report__STATE_VARIABLE_PSSeen_0_27;
            *create_report__STATE_VARIABLE_NumDynamic_30 = create_report__STATE_VARIABLE_NumDynamic_0_29;
            *create_report__STATE_VARIABLE_Own_32 = create_report__STATE_VARIABLE_Own_0_31;
            *create_report__STATE_VARIABLE_Desc_34 = create_report__STATE_VARIABLE_Desc_0_33;
          }
        else
          {
            MR_Word create_report__CSDPtr_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallerCSDPtrs0_13, (MR_Integer) 0)));
            MR_Word create_report__CallerCSDPtrs_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallerCSDPtrs0_13, (MR_Integer) 1)));
            MR_Word create_report__CSD_21;
            MR_Word create_report__CallerPDPtr_22;
            MR_Word create_report__CallerPD_23;
            MR_Word create_report__CallerPSPtr_24;
            MR_Integer create_report__STATE_VARIABLE_NumDynamic_35_35;
            MR_Word create_report__STATE_VARIABLE_PSSeen_37_37;
            MR_Word create_report__STATE_VARIABLE_Own_38_38;
            MR_Word create_report__STATE_VARIABLE_Desc_39_39;
            MR_Word create_report__Var_44;
            MR_Word create_report__Var_45;
            MR_ArrayPtr create_report__Var_46;
            MR_Word create_report__Var_47;
            MR_Integer create_report__Var_52;
            MR_Integer create_report__Var_53;

            {
              profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_12, create_report__CSDPtr_19, &create_report__CSD_21);
            }
            create_report__CallerPDPtr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 0)));
            create_report__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 1)));
            create_report__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 2)));
            {
              profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_12, create_report__CallerPDPtr_22, &create_report__CallerPD_23);
            }
            create_report__CallerPSPtr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallerPD_23, (MR_Integer) 0)));
            create_report__Var_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__CallerPD_23, (MR_Integer) 1)));
            create_report__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallerPD_23, (MR_Integer) 2)));
            create_report__Var_52 = (MR_Integer) create_report__CallerPSPtr_24;
            create_report__Var_53 = (MR_Integer) create_report__CalleePSPtr_14;
            create_report__succeeded = (create_report__Var_52 == create_report__Var_53);
            if (create_report__succeeded)
              {
                create_report__STATE_VARIABLE_Desc_39_39 = create_report__STATE_VARIABLE_Desc_0_33;
                create_report__STATE_VARIABLE_Own_38_38 = create_report__STATE_VARIABLE_Own_0_31;
                create_report__STATE_VARIABLE_NumDynamic_35_35 = create_report__STATE_VARIABLE_NumDynamic_0_29;
                create_report__STATE_VARIABLE_PSSeen_37_37 = create_report__STATE_VARIABLE_PSSeen_0_27;
              }
            else
              {
                MR_Word create_report__CSDOwn_25;
                MR_Word create_report__CSDInherit_26;
                MR_Word create_report__Var_48;
                MR_Word create_report__Var_49;

                create_report__STATE_VARIABLE_NumDynamic_35_35 = (create_report__STATE_VARIABLE_NumDynamic_0_29 + (MR_Integer) 1);
                {
                  mercury__set__insert_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, ((MR_Box) (create_report__CallerPSPtr_24)), create_report__STATE_VARIABLE_PSSeen_0_27, &create_report__STATE_VARIABLE_PSSeen_37_37);
                }
                create_report__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 0)));
                create_report__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 1)));
                create_report__CSDOwn_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_21, (MR_Integer) 2)));
                {
                  create_report__STATE_VARIABLE_Own_38_38 = measurements__add_own_to_own_2_f_0(create_report__STATE_VARIABLE_Own_0_31, create_report__CSDOwn_25);
                }
                {
                  profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_12, create_report__CSDPtr_19, &create_report__CSDInherit_26);
                }
                {
                  create_report__STATE_VARIABLE_Desc_39_39 = measurements__add_inherit_to_inherit_2_f_0(create_report__STATE_VARIABLE_Desc_0_33, create_report__CSDInherit_26);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word create_report__next_value_of_CallerCSDPtrs0_13 = create_report__CallerCSDPtrs_20;
              MR_Word create_report__next_value_of_STATE_VARIABLE_PSSeen_0_27 = create_report__STATE_VARIABLE_PSSeen_37_37;
              MR_Integer create_report__next_value_of_STATE_VARIABLE_NumDynamic_0_29 = create_report__STATE_VARIABLE_NumDynamic_35_35;
              MR_Word create_report__next_value_of_STATE_VARIABLE_Own_0_31 = create_report__STATE_VARIABLE_Own_38_38;
              MR_Word create_report__next_value_of_STATE_VARIABLE_Desc_0_33 = create_report__STATE_VARIABLE_Desc_39_39;

              create_report__STATE_VARIABLE_Desc_0_33 = create_report__next_value_of_STATE_VARIABLE_Desc_0_33;
              create_report__STATE_VARIABLE_Own_0_31 = create_report__next_value_of_STATE_VARIABLE_Own_0_31;
              create_report__STATE_VARIABLE_NumDynamic_0_29 = create_report__next_value_of_STATE_VARIABLE_NumDynamic_0_29;
              create_report__STATE_VARIABLE_PSSeen_0_27 = create_report__next_value_of_STATE_VARIABLE_PSSeen_0_27;
              create_report__CallerCSDPtrs0_13 = create_report__next_value_of_CallerCSDPtrs0_13;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box create_report__wrapper_arg_4,
  MR_Box * create_report__wrapper_arg_5)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv1_STATE_VARIABLE_Own_18;
    MR_Word create_report__conv0_STATE_VARIABLE_Desc_20;

    {
      create_report__accumulate_csd_prof_info_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv1_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_4), &create_report__conv0_STATE_VARIABLE_Desc_20);
    }
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_STATE_VARIABLE_Own_18));
    *create_report__wrapper_arg_5 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_Desc_20));
  }
}

static MR_Word MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CallerPSPtr_6,
  MR_Word create_report__HeadVar__3_3)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__CalleeProf_9;
    MR_Word create_report__PSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word create_report__CSDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));
    MR_Word create_report__Own_10;
    MR_Word create_report__Desc_11;
    MR_Word create_report__Var_12;
    MR_Word create_report__Var_13;
    MR_Word create_report__Var_14;
    MR_Box create_report__conv3_Own_10;
    MR_Box create_report__conv2_Desc_11;

    {
      create_report__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__Var_12, 0) = ((MR_Box) (&create_report_scalar_common_8[2]));
      MR_hl_field(MR_mktag(0), create_report__Var_12, 1) = ((MR_Box) (create_report__generate_call_site_callee_perf_3_f_0_1));
      MR_hl_field(MR_mktag(0), create_report__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), create_report__Var_12, 3) = ((MR_Box) (create_report__Deep_5));
      MR_hl_field(MR_mktag(0), create_report__Var_12, 4) = ((MR_Box) (create_report__CallerPSPtr_6));
    }
    {
      create_report__Var_13 = measurements__zero_own_prof_info_0_f_0();
    }
    {
      create_report__Var_14 = measurements__zero_inherit_prof_info_0_f_0();
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__Var_12, create_report__CSDPtrs_8, ((MR_Box) (create_report__Var_13)), &create_report__conv3_Own_10, ((MR_Box) (create_report__Var_14)), &create_report__conv2_Desc_11);
    }
    create_report__Own_10 = ((MR_Word) create_report__conv3_Own_10);
    create_report__Desc_11 = ((MR_Word) create_report__conv2_Desc_11);
    {
      create_report__CalleeProf_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__CalleeProf_9, 0) = ((MR_Box) (create_report__PSPtr_7));
      MR_hl_field(MR_mktag(0), create_report__CalleeProf_9, 1) = ((MR_Box) (create_report__Own_10));
      MR_hl_field(MR_mktag(0), create_report__CalleeProf_9, 2) = ((MR_Box) (create_report__Desc_11));
    }
    return create_report__CalleeProf_9;
  }
}

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_9(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4,
  MR_Box create_report__wrapper_arg_5,
  MR_Box * create_report__wrapper_arg_6)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv21_RowData_10;
    MR_Word create_report__conv20_STATE_VARIABLE_Own_18;
    MR_Word create_report__conv19_STATE_VARIABLE_Desc_20;

    {
      create_report__accumulate_call_site_callees_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv21_RowData_10, ((MR_Word) create_report__wrapper_arg_3), &create_report__conv20_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_5), &create_report__conv19_STATE_VARIABLE_Desc_20);
    }
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv21_RowData_10));
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv20_STATE_VARIABLE_Own_18));
    *create_report__wrapper_arg_6 = ((MR_Box) (create_report__conv19_STATE_VARIABLE_Desc_20));
  }
}

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_8(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv18_CalleeProf_9;

    {
      create_report__conv18_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv18_CalleeProf_9));
    return create_report__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
create_report__create_call_site_summary_2_f_0_7(
  MR_Box create_report__closure_arg)
{
  {
    MR_bool create_report__succeeded;
    MR_Box create_report__closure = create_report__closure_arg;

    {
      create_report__succeeded = create_report__IntroducedFrom__pred__create_call_site_summary__591__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_6(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4,
  MR_Box create_report__wrapper_arg_5,
  MR_Box * create_report__wrapper_arg_6)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv15_RowData_10;
    MR_Word create_report__conv14_STATE_VARIABLE_Own_18;
    MR_Word create_report__conv13_STATE_VARIABLE_Desc_20;

    {
      create_report__accumulate_call_site_callees_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv15_RowData_10, ((MR_Word) create_report__wrapper_arg_3), &create_report__conv14_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_5), &create_report__conv13_STATE_VARIABLE_Desc_20);
    }
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv15_RowData_10));
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv14_STATE_VARIABLE_Own_18));
    *create_report__wrapper_arg_6 = ((MR_Box) (create_report__conv13_STATE_VARIABLE_Desc_20));
  }
}

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_5(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv12_CalleeProf_9;

    {
      create_report__conv12_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv12_CalleeProf_9));
    return create_report__wrapper_arg_2;
  }
}

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_4(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4,
  MR_Box create_report__wrapper_arg_5,
  MR_Box * create_report__wrapper_arg_6)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv9_RowData_10;
    MR_Word create_report__conv8_STATE_VARIABLE_Own_18;
    MR_Word create_report__conv7_STATE_VARIABLE_Desc_20;

    {
      create_report__accumulate_call_site_callees_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv9_RowData_10, ((MR_Word) create_report__wrapper_arg_3), &create_report__conv8_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_5), &create_report__conv7_STATE_VARIABLE_Desc_20);
    }
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv9_RowData_10));
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv8_STATE_VARIABLE_Own_18));
    *create_report__wrapper_arg_6 = ((MR_Box) (create_report__conv7_STATE_VARIABLE_Desc_20));
  }
}

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_3(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv6_CalleeProf_9;

    {
      create_report__conv6_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv6_CalleeProf_9));
    return create_report__wrapper_arg_2;
  }
}

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4,
  MR_Box create_report__wrapper_arg_5,
  MR_Box * create_report__wrapper_arg_6)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv3_RowData_10;
    MR_Word create_report__conv2_STATE_VARIABLE_Own_18;
    MR_Word create_report__conv1_STATE_VARIABLE_Desc_20;

    {
      create_report__accumulate_call_site_callees_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv3_RowData_10, ((MR_Word) create_report__wrapper_arg_3), &create_report__conv2_STATE_VARIABLE_Own_18, ((MR_Word) create_report__wrapper_arg_5), &create_report__conv1_STATE_VARIABLE_Desc_20);
    }
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv3_RowData_10));
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv2_STATE_VARIABLE_Own_18));
    *create_report__wrapper_arg_6 = ((MR_Box) (create_report__conv1_STATE_VARIABLE_Desc_20));
  }
}

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_CalleeProf_9;

    {
      create_report__conv0_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_CalleeProf_9));
    return create_report__wrapper_arg_2;
  }
}

static MR_Word MR_CALL 
create_report__create_call_site_summary_2_f_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CSSPtr_5)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__CallSitePerf_6;
    MR_Word create_report__CallSiteDesc_7;
    MR_Word create_report__CSS_8;
    MR_Word create_report__KindAndCallee_9;
    MR_Word create_report__CallerPSPtr_10;
    MR_Word create_report__CallSiteCallMap_11;
    MR_Word create_report__CallSiteCalls_12;
    MR_Word create_report__KindAndInfo_17;
    MR_Word create_report__SummaryRowData_28;
    MR_Word create_report__SubRowDatas_29;
    MR_Integer create_report__Var_44;
    MR_Integer create_report__Var_45;
    MR_Word create_report__Var_46;

    {
      create_report__CallSiteDesc_7 = create_report__describe_call_site_2_f_0(create_report__Deep_4, create_report__CSSPtr_5);
    }
    {
      profile__deep_lookup_call_site_statics_3_p_0(create_report__Deep_4, create_report__CSSPtr_5, &create_report__CSS_8);
    }
    create_report__CallerPSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 0)));
    create_report__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 1)));
    create_report__KindAndCallee_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 2)));
    create_report__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 3)));
    create_report__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_8, (MR_Integer) 4)));
    {
      profile__deep_lookup_call_site_calls_3_p_0(create_report__Deep_4, create_report__CSSPtr_5, &create_report__CallSiteCallMap_11);
    }
    {
      mercury__map__to_assoc_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[6], create_report__CallSiteCallMap_11, &create_report__CallSiteCalls_12);
    }
    switch (MR_tag((MR_Word) create_report__KindAndCallee_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(create_report__KindAndCallee_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word create_report__TypeCtorInfo_56_127;
              MR_Word create_report__CallSiteCalleePerfs_119;
              MR_Word create_report__SumOwn_120;
              MR_Word create_report__SumDesc_121;
              MR_Word create_report__Var_122;
              MR_Word create_report__Var_123;
              MR_Word create_report__Var_124;
              MR_Word create_report__Var_125;
              MR_Box create_report__conv23_SumOwn_120;
              MR_Box create_report__conv22_SumDesc_121;

              create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              create_report__TypeCtorInfo_56_127 = (MR_Word) &create_report__create_report__type_ctor_info_call_site_callee_perf_0;
              {
                create_report__Var_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__Var_122, 0) = ((MR_Box) (&create_report_scalar_common_4[8]));
                MR_hl_field(MR_mktag(0), create_report__Var_122, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_8));
                MR_hl_field(MR_mktag(0), create_report__Var_122, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), create_report__Var_122, 3) = ((MR_Box) (create_report__Deep_4));
                MR_hl_field(MR_mktag(0), create_report__Var_122, 4) = ((MR_Box) (create_report__CallerPSPtr_10));
              }
              {
                create_report__CallSiteCalleePerfs_119 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[6], create_report__TypeCtorInfo_56_127, create_report__Var_122, create_report__CallSiteCalls_12);
              }
              {
                create_report__Var_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__Var_123, 0) = ((MR_Box) (&create_report_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), create_report__Var_123, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_9));
                MR_hl_field(MR_mktag(0), create_report__Var_123, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), create_report__Var_123, 3) = ((MR_Box) (create_report__Deep_4));
              }
              {
                create_report__Var_124 = measurements__zero_own_prof_info_0_f_0();
              }
              {
                create_report__Var_125 = measurements__zero_inherit_prof_info_0_f_0();
              }
              {
                mercury__list__map_foldl2_7_p_0(create_report__TypeCtorInfo_56_127, (MR_Word) &create_report_scalar_common_1[3], (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__Var_123, create_report__CallSiteCalleePerfs_119, &create_report__SubRowDatas_29, ((MR_Box) (create_report__Var_124)), &create_report__conv23_SumOwn_120, ((MR_Box) (create_report__Var_125)), &create_report__conv22_SumDesc_121);
              }
              create_report__SumOwn_120 = ((MR_Word) create_report__conv23_SumOwn_120);
              create_report__SumDesc_121 = ((MR_Word) create_report__conv22_SumDesc_121);
              {
                create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__SumOwn_120, create_report__SumDesc_121, &create_report__SummaryRowData_28);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word create_report__TypeCtorInfo_56_85;
              MR_Word create_report__CallSiteCalleePerfs_77;
              MR_Word create_report__SumOwn_78;
              MR_Word create_report__SumDesc_79;
              MR_Word create_report__Var_80;
              MR_Word create_report__Var_81;
              MR_Word create_report__Var_82;
              MR_Word create_report__Var_83;
              MR_Box create_report__conv11_SumOwn_78;
              MR_Box create_report__conv10_SumDesc_79;

              create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              create_report__TypeCtorInfo_56_85 = (MR_Word) &create_report__create_report__type_ctor_info_call_site_callee_perf_0;
              {
                create_report__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__Var_80, 0) = ((MR_Box) (&create_report_scalar_common_4[8]));
                MR_hl_field(MR_mktag(0), create_report__Var_80, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_3));
                MR_hl_field(MR_mktag(0), create_report__Var_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), create_report__Var_80, 3) = ((MR_Box) (create_report__Deep_4));
                MR_hl_field(MR_mktag(0), create_report__Var_80, 4) = ((MR_Box) (create_report__CallerPSPtr_10));
              }
              {
                create_report__CallSiteCalleePerfs_77 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[6], create_report__TypeCtorInfo_56_85, create_report__Var_80, create_report__CallSiteCalls_12);
              }
              {
                create_report__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__Var_81, 0) = ((MR_Box) (&create_report_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), create_report__Var_81, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_4));
                MR_hl_field(MR_mktag(0), create_report__Var_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), create_report__Var_81, 3) = ((MR_Box) (create_report__Deep_4));
              }
              {
                create_report__Var_82 = measurements__zero_own_prof_info_0_f_0();
              }
              {
                create_report__Var_83 = measurements__zero_inherit_prof_info_0_f_0();
              }
              {
                mercury__list__map_foldl2_7_p_0(create_report__TypeCtorInfo_56_85, (MR_Word) &create_report_scalar_common_1[3], (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__Var_81, create_report__CallSiteCalleePerfs_77, &create_report__SubRowDatas_29, ((MR_Box) (create_report__Var_82)), &create_report__conv11_SumOwn_78, ((MR_Box) (create_report__Var_83)), &create_report__conv10_SumDesc_79);
              }
              create_report__SumOwn_78 = ((MR_Word) create_report__conv11_SumOwn_78);
              create_report__SumDesc_79 = ((MR_Word) create_report__conv10_SumDesc_79);
              {
                create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__SumOwn_78, create_report__SumDesc_79, &create_report__SummaryRowData_28);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word create_report__TypeCtorInfo_56_106;
              MR_Word create_report__CallSiteCalleePerfs_98;
              MR_Word create_report__SumOwn_99;
              MR_Word create_report__SumDesc_100;
              MR_Word create_report__Var_101;
              MR_Word create_report__Var_102;
              MR_Word create_report__Var_103;
              MR_Word create_report__Var_104;
              MR_Box create_report__conv17_SumOwn_99;
              MR_Box create_report__conv16_SumDesc_100;

              create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
              create_report__TypeCtorInfo_56_106 = (MR_Word) &create_report__create_report__type_ctor_info_call_site_callee_perf_0;
              {
                create_report__Var_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__Var_101, 0) = ((MR_Box) (&create_report_scalar_common_4[8]));
                MR_hl_field(MR_mktag(0), create_report__Var_101, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_5));
                MR_hl_field(MR_mktag(0), create_report__Var_101, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), create_report__Var_101, 3) = ((MR_Box) (create_report__Deep_4));
                MR_hl_field(MR_mktag(0), create_report__Var_101, 4) = ((MR_Box) (create_report__CallerPSPtr_10));
              }
              {
                create_report__CallSiteCalleePerfs_98 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[6], create_report__TypeCtorInfo_56_106, create_report__Var_101, create_report__CallSiteCalls_12);
              }
              {
                create_report__Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__Var_102, 0) = ((MR_Box) (&create_report_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), create_report__Var_102, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_6));
                MR_hl_field(MR_mktag(0), create_report__Var_102, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), create_report__Var_102, 3) = ((MR_Box) (create_report__Deep_4));
              }
              {
                create_report__Var_103 = measurements__zero_own_prof_info_0_f_0();
              }
              {
                create_report__Var_104 = measurements__zero_inherit_prof_info_0_f_0();
              }
              {
                mercury__list__map_foldl2_7_p_0(create_report__TypeCtorInfo_56_106, (MR_Word) &create_report_scalar_common_1[3], (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__Var_102, create_report__CallSiteCalleePerfs_98, &create_report__SubRowDatas_29, ((MR_Box) (create_report__Var_103)), &create_report__conv17_SumOwn_99, ((MR_Box) (create_report__Var_104)), &create_report__conv16_SumDesc_100);
              }
              create_report__SumOwn_99 = ((MR_Word) create_report__conv17_SumOwn_99);
              create_report__SumDesc_100 = ((MR_Word) create_report__conv16_SumDesc_100);
              {
                create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__SumOwn_99, create_report__SumDesc_100, &create_report__SummaryRowData_28);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word create_report__TypeCtorInfo_56_56;
              MR_Word create_report__CallSiteCalleePerfs_30;
              MR_Word create_report__SumOwn_31;
              MR_Word create_report__SumDesc_32;
              MR_Word create_report__Var_33;
              MR_Word create_report__Var_34;
              MR_Word create_report__Var_35;
              MR_Word create_report__Var_36;
              MR_Box create_report__conv5_SumOwn_31;
              MR_Box create_report__conv4_SumDesc_32;

              create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
              create_report__TypeCtorInfo_56_56 = (MR_Word) &create_report__create_report__type_ctor_info_call_site_callee_perf_0;
              {
                create_report__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__Var_33, 0) = ((MR_Box) (&create_report_scalar_common_4[8]));
                MR_hl_field(MR_mktag(0), create_report__Var_33, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_1));
                MR_hl_field(MR_mktag(0), create_report__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), create_report__Var_33, 3) = ((MR_Box) (create_report__Deep_4));
                MR_hl_field(MR_mktag(0), create_report__Var_33, 4) = ((MR_Box) (create_report__CallerPSPtr_10));
              }
              {
                create_report__CallSiteCalleePerfs_30 = mercury__list__map_2_f_0((MR_Word) &create_report_scalar_common_2[6], create_report__TypeCtorInfo_56_56, create_report__Var_33, create_report__CallSiteCalls_12);
              }
              {
                create_report__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__Var_34, 0) = ((MR_Box) (&create_report_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), create_report__Var_34, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_2));
                MR_hl_field(MR_mktag(0), create_report__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), create_report__Var_34, 3) = ((MR_Box) (create_report__Deep_4));
              }
              {
                create_report__Var_35 = measurements__zero_own_prof_info_0_f_0();
              }
              {
                create_report__Var_36 = measurements__zero_inherit_prof_info_0_f_0();
              }
              {
                mercury__list__map_foldl2_7_p_0(create_report__TypeCtorInfo_56_56, (MR_Word) &create_report_scalar_common_1[3], (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, create_report__Var_34, create_report__CallSiteCalleePerfs_30, &create_report__SubRowDatas_29, ((MR_Box) (create_report__Var_35)), &create_report__conv5_SumOwn_31, ((MR_Box) (create_report__Var_36)), &create_report__conv4_SumDesc_32);
              }
              create_report__SumOwn_31 = ((MR_Word) create_report__conv5_SumOwn_31);
              create_report__SumDesc_32 = ((MR_Word) create_report__conv4_SumDesc_32);
              {
                create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__SumOwn_31, create_report__SumDesc_32, &create_report__SummaryRowData_28);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word create_report__CalleePSPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__KindAndCallee_9, (MR_Integer) 0)));
          MR_String create_report__TypeSubstStr_14 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__KindAndCallee_9, (MR_Integer) 1)));
          MR_Word create_report__CalleeDesc_15;
          MR_Word create_report__NormalCallId_16;
          MR_Word create_report__Own_18;
          MR_Word create_report__Desc_19;

          {
            create_report__CalleeDesc_15 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__CalleePSPtr_13);
          }
          {
            create_report__NormalCallId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), create_report__NormalCallId_16, 0) = ((MR_Box) (create_report__CalleeDesc_15));
            MR_hl_field(MR_mktag(0), create_report__NormalCallId_16, 1) = ((MR_Box) (create_report__TypeSubstStr_14));
          }
          {
            create_report__KindAndInfo_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), create_report__KindAndInfo_17, 0) = ((MR_Box) (create_report__NormalCallId_16));
          }
          if ((create_report__CallSiteCalls_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                create_report__Own_18 = measurements__zero_own_prof_info_0_f_0();
              }
              {
                create_report__Desc_19 = measurements__zero_inherit_prof_info_0_f_0();
              }
            }
          else
            {
              MR_Word create_report__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteCalls_12, (MR_Integer) 1)));
              MR_Word create_report__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteCalls_12, (MR_Integer) 0)));

              if ((create_report__Var_132 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word create_report__CalleePSPtrFromCall_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_133, (MR_Integer) 0)));
                  MR_Word create_report__CallSiteCalleePerf_23;
                  MR_Word create_report__Var_41;
                  MR_Word create_report__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_133, (MR_Integer) 1)));
                  MR_Word create_report__Var_24;

                  {
                    create_report__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), create_report__Var_41, 0) = ((MR_Box) (&create_report_scalar_common_5[3]));
                    MR_hl_field(MR_mktag(0), create_report__Var_41, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_7));
                    MR_hl_field(MR_mktag(0), create_report__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), create_report__Var_41, 3) = ((MR_Box) (create_report__CalleePSPtr_13));
                    MR_hl_field(MR_mktag(0), create_report__Var_41, 4) = ((MR_Box) (create_report__CalleePSPtrFromCall_21));
                  }
                  {
                    mercury__require__require_2_p_0(create_report__Var_41, (MR_String) "create_call_site_summary: callee mismatch");
                  }
                  {
                    create_report__CallSiteCalleePerf_23 = create_report__generate_call_site_callee_perf_3_f_0(create_report__Deep_4, create_report__CallerPSPtr_10, create_report__Var_133);
                  }
                  create_report__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteCalleePerf_23, (MR_Integer) 0)));
                  create_report__Own_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteCalleePerf_23, (MR_Integer) 1)));
                  create_report__Desc_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteCalleePerf_23, (MR_Integer) 2)));
                }
              else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.create_call_site_summary\'/2", (MR_String) ">1 proc called at normal site");
                  }
                }
            }
          {
            create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_7)), create_report__Own_18, create_report__Desc_19, &create_report__SummaryRowData_28);
          }
          create_report__SubRowDatas_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
    }
    {
      create_report__CallSitePerf_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__CallSitePerf_6, 0) = ((MR_Box) (create_report__KindAndInfo_17));
      MR_hl_field(MR_mktag(0), create_report__CallSitePerf_6, 1) = ((MR_Box) (create_report__SummaryRowData_28));
      MR_hl_field(MR_mktag(0), create_report__CallSitePerf_6, 2) = ((MR_Box) (create_report__SubRowDatas_29));
    }
    return create_report__CallSitePerf_6;
  }
}

static MR_Box MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_ProcDesc_6;

    {
      create_report__conv0_ProcDesc_6 = create_report__describe_clique_member_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_ProcDesc_6));
    return create_report__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_1(
  MR_Box create_report__closure_arg)
{
  {
    MR_bool create_report__succeeded;
    MR_Box create_report__closure = create_report__closure_arg;

    {
      create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0(
  MR_Word create_report__Deep_6,
  MR_Word create_report__CSDPtr_7,
  MR_Word * create_report__Own_8,
  MR_Word * create_report__Desc_9,
  MR_Word * create_report__CalleeCliqueRowData_10)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__CSD_11;
    MR_Word create_report__CalleePDPtr_12;
    MR_Word create_report__CalleeCliquePtr_13;
    MR_Word create_report__CliqueDesc_14;
    MR_Word create_report__Var_15;
    MR_Word create_report__Var_17;
    MR_Word create_report__Var_58;
    MR_Word create_report__Var_18;

    {
      create_report__Var_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__Var_15, 0) = ((MR_Box) (&create_report_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), create_report__Var_15, 1) = ((MR_Box) (create_report__create_callee_clique_perf_row_data_5_p_0_1));
      MR_hl_field(MR_mktag(0), create_report__Var_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), create_report__Var_15, 3) = ((MR_Box) (create_report__Deep_6));
      MR_hl_field(MR_mktag(0), create_report__Var_15, 4) = ((MR_Box) (create_report__CSDPtr_7));
    }
    {
      mercury__require__require_2_p_0(create_report__Var_15, (MR_String) "create_callee_clique_perf_row_data: invalid call_site_dynamic_ptr");
    }
    {
      profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_6, create_report__CSDPtr_7, &create_report__CSD_11);
    }
    create_report__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_11, (MR_Integer) 0)));
    create_report__CalleePDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_11, (MR_Integer) 1)));
    *create_report__Own_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_11, (MR_Integer) 2)));
    {
      profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_6, create_report__CSDPtr_7, create_report__Desc_9);
    }
    {
      profile__deep_lookup_clique_index_3_p_0(create_report__Deep_6, create_report__CalleePDPtr_12, &create_report__CalleeCliquePtr_13);
    }
    {
      create_report__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), create_report__Var_17, 0) = ((MR_Box) (create_report__CalleePDPtr_12));
    }
    {
      create_report__succeeded = profile__valid_clique_ptr_2_p_0(create_report__Deep_6, create_report__CalleeCliquePtr_13);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__MemberPDPtrs_27;
        MR_Word create_report__ParentCSDPtr_28;
        MR_Word create_report__EntryPDPtr_30;
        MR_Word create_report__ParentCSD_29;
        MR_Word create_report__OtherPDPtrs_31;

        {
          profile__deep_lookup_clique_members_3_p_0(create_report__Deep_6, create_report__CalleeCliquePtr_13, &create_report__MemberPDPtrs_27);
        }
        {
          profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_6, create_report__CalleeCliquePtr_13, &create_report__ParentCSDPtr_28);
        }
        {
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_6, create_report__ParentCSDPtr_28, &create_report__ParentCSD_29);
        }
        create_report__EntryPDPtr_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Var_17, (MR_Integer) 0)));
        {
          create_report__succeeded = mercury__list__delete_first_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, create_report__MemberPDPtrs_27, ((MR_Box) (create_report__EntryPDPtr_30)), &create_report__OtherPDPtrs_31);
        }
        if (create_report__succeeded)
          {
            MR_Word create_report__EntryProcDesc_32;
            MR_Word create_report__OtherProcDescs_33;
            MR_Word create_report__Var_34;
            MR_Word create_report__PD_49;
            MR_Word create_report__Var_50;
            MR_ArrayPtr create_report__Var_51;
            MR_Word create_report__Var_52;

            {
              profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_6, create_report__EntryPDPtr_30, &create_report__PD_49);
            }
            create_report__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_49, (MR_Integer) 0)));
            create_report__Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_49, (MR_Integer) 1)));
            create_report__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_49, (MR_Integer) 2)));
            {
              create_report__EntryProcDesc_32 = create_report__describe_proc_2_f_0(create_report__Deep_6, create_report__Var_50);
            }
            {
              create_report__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), create_report__Var_34, 0) = ((MR_Box) (&create_report_scalar_common_6[2]));
              MR_hl_field(MR_mktag(0), create_report__Var_34, 1) = ((MR_Box) (create_report__create_callee_clique_perf_row_data_5_p_0_2));
              MR_hl_field(MR_mktag(0), create_report__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), create_report__Var_34, 3) = ((MR_Box) (create_report__Deep_6));
            }
            {
              create_report__OtherProcDescs_33 = mercury__list__map_2_f_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &report__report__type_ctor_info_proc_desc_0, create_report__Var_34, create_report__OtherPDPtrs_31);
            }
            {
              create_report__CliqueDesc_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_14, 0) = ((MR_Box) (create_report__CalleeCliquePtr_13));
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_14, 1) = ((MR_Box) (create_report__EntryProcDesc_32));
              MR_hl_field(MR_mktag(0), create_report__CliqueDesc_14, 2) = ((MR_Box) (create_report__OtherProcDescs_33));
            }
          }
        else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "entry pdptr not a member");
              return;
            }
          }
      }
    else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "invalid clique_ptr");
          return;
        }
      }
    {
      create_report__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), create_report__Var_58, 0) = ((MR_Box) (*create_report__Desc_9));
    }
    {
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_6, ((MR_Box) (create_report__CliqueDesc_14)), *create_report__Own_8, create_report__Var_58, create_report__CalleeCliqueRowData_10);
    }
  }
}

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_4(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv11_Own_8;
    MR_Word create_report__conv10_Desc_9;
    MR_Word create_report__conv9_CalleeCliqueRowData_10;

    {
      create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv11_Own_8, &create_report__conv10_Desc_9, &create_report__conv9_CalleeCliqueRowData_10);
    }
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv11_Own_8));
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv10_Desc_9));
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv9_CalleeCliqueRowData_10));
  }
}

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_3(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv8_Own_8;
    MR_Word create_report__conv7_Desc_9;
    MR_Word create_report__conv6_CalleeCliqueRowData_10;

    {
      create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv8_Own_8, &create_report__conv7_Desc_9, &create_report__conv6_CalleeCliqueRowData_10);
    }
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv8_Own_8));
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv7_Desc_9));
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv6_CalleeCliqueRowData_10));
  }
}

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv5_Own_8;
    MR_Word create_report__conv4_Desc_9;
    MR_Word create_report__conv3_CalleeCliqueRowData_10;

    {
      create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv5_Own_8, &create_report__conv4_Desc_9, &create_report__conv3_CalleeCliqueRowData_10);
    }
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv5_Own_8));
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv4_Desc_9));
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv3_CalleeCliqueRowData_10));
  }
}

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv2_Own_8;
    MR_Word create_report__conv1_Desc_9;
    MR_Word create_report__conv0_CalleeCliqueRowData_10;

    {
      create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv2_Own_8, &create_report__conv1_Desc_9, &create_report__conv0_CalleeCliqueRowData_10);
    }
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_Own_8));
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_Desc_9));
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv0_CalleeCliqueRowData_10));
  }
}

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__Pair_5,
  MR_Word * create_report__CliqueCallSiteReport_6)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__CSSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Pair_5, (MR_Integer) 0)));
    MR_Word create_report__CallSiteArraySlot_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Pair_5, (MR_Integer) 1)));
    MR_Word create_report__CSS_9;
    MR_Word create_report__CallSiteDesc_10;
    MR_Word create_report__Kind_11;
    MR_Word create_report__ProcDescKind_15;
    MR_Word create_report__Own_19;
    MR_Word create_report__Desc_20;
    MR_Word create_report__CalleeCliqueRowDatas_22;
    MR_Word create_report__SummaryRowData_29;
    MR_Word create_report__Var_36;
    MR_Integer create_report__Var_37;
    MR_Integer create_report__Var_38;
    MR_Word create_report__Var_39;

    {
      profile__deep_lookup_call_site_statics_3_p_0(create_report__Deep_4, create_report__CSSPtr_7, &create_report__CSS_9);
    }
    {
      create_report__CallSiteDesc_10 = create_report__describe_call_site_2_f_0(create_report__Deep_4, create_report__CSSPtr_7);
    }
    create_report__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 0)));
    create_report__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 1)));
    create_report__Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 2)));
    create_report__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 3)));
    create_report__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSS_9, (MR_Integer) 4)));
    switch (MR_tag((MR_Word) create_report__Kind_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(create_report__Kind_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word create_report__CSDPtrs_135;
              MR_Word create_report__Owns_136;
              MR_Word create_report__Descs_137;
              MR_Word create_report__Var_140;

              create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_ArrayPtr create_report__CSDPtrsArray_116 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 1)));
                  MR_Word create_report___IsZeroed_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));

                  {
                    mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) create_report__CSDPtrsArray_116, &create_report__CSDPtrs_135);
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
                    return;
                  }
                }
              {
                create_report__Var_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__Var_140, 0) = ((MR_Box) (&create_report_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), create_report__Var_140, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_4));
                MR_hl_field(MR_mktag(0), create_report__Var_140, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), create_report__Var_140, 3) = ((MR_Box) (create_report__Deep_4));
              }
              {
                mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &create_report_scalar_common_1[5], create_report__Var_140, create_report__CSDPtrs_135, &create_report__Owns_136, &create_report__Descs_137, &create_report__CalleeCliqueRowDatas_22);
              }
              {
                create_report__Own_19 = measurements__sum_own_infos_1_f_0(create_report__Owns_136);
              }
              {
                create_report__Desc_20 = measurements__sum_inherit_infos_1_f_0(create_report__Descs_137);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word create_report__CSDPtrs_71;
              MR_Word create_report__Owns_72;
              MR_Word create_report__Descs_73;
              MR_Word create_report__Var_76;

              create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_ArrayPtr create_report__CSDPtrsArray_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 1)));
                  MR_Word create_report___IsZeroed_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));

                  {
                    mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) create_report__CSDPtrsArray_52, &create_report__CSDPtrs_71);
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
                    return;
                  }
                }
              {
                create_report__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__Var_76, 0) = ((MR_Box) (&create_report_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), create_report__Var_76, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_2));
                MR_hl_field(MR_mktag(0), create_report__Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), create_report__Var_76, 3) = ((MR_Box) (create_report__Deep_4));
              }
              {
                mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &create_report_scalar_common_1[5], create_report__Var_76, create_report__CSDPtrs_71, &create_report__Owns_72, &create_report__Descs_73, &create_report__CalleeCliqueRowDatas_22);
              }
              {
                create_report__Own_19 = measurements__sum_own_infos_1_f_0(create_report__Owns_72);
              }
              {
                create_report__Desc_20 = measurements__sum_inherit_infos_1_f_0(create_report__Descs_73);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word create_report__CSDPtrs_103;
              MR_Word create_report__Owns_104;
              MR_Word create_report__Descs_105;
              MR_Word create_report__Var_108;

              create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
              if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_ArrayPtr create_report__CSDPtrsArray_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 1)));
                  MR_Word create_report___IsZeroed_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));

                  {
                    mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) create_report__CSDPtrsArray_84, &create_report__CSDPtrs_103);
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
                    return;
                  }
                }
              {
                create_report__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__Var_108, 0) = ((MR_Box) (&create_report_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), create_report__Var_108, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_3));
                MR_hl_field(MR_mktag(0), create_report__Var_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), create_report__Var_108, 3) = ((MR_Box) (create_report__Deep_4));
              }
              {
                mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &create_report_scalar_common_1[5], create_report__Var_108, create_report__CSDPtrs_103, &create_report__Owns_104, &create_report__Descs_105, &create_report__CalleeCliqueRowDatas_22);
              }
              {
                create_report__Own_19 = measurements__sum_own_infos_1_f_0(create_report__Owns_104);
              }
              {
                create_report__Desc_20 = measurements__sum_inherit_infos_1_f_0(create_report__Descs_105);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word create_report__CSDPtrs_26;
              MR_Word create_report__Owns_27;
              MR_Word create_report__Descs_28;
              MR_Word create_report__Var_32;

              create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
              if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_ArrayPtr create_report__CSDPtrsArray_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 1)));
                  MR_Word create_report___IsZeroed_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));

                  {
                    mercury__array__to_list_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) create_report__CSDPtrsArray_25, &create_report__CSDPtrs_26);
                  }
                }
              else
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
                    return;
                  }
                }
              {
                create_report__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__Var_32, 0) = ((MR_Box) (&create_report_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), create_report__Var_32, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_1));
                MR_hl_field(MR_mktag(0), create_report__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), create_report__Var_32, 3) = ((MR_Box) (create_report__Deep_4));
              }
              {
                mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &create_report_scalar_common_1[5], create_report__Var_32, create_report__CSDPtrs_26, &create_report__Owns_27, &create_report__Descs_28, &create_report__CalleeCliqueRowDatas_22);
              }
              {
                create_report__Own_19 = measurements__sum_own_infos_1_f_0(create_report__Owns_27);
              }
              {
                create_report__Desc_20 = measurements__sum_inherit_infos_1_f_0(create_report__Descs_28);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word create_report__CalleePSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__Kind_11, (MR_Integer) 0)));
          MR_String create_report__TypeSubst_13 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__Kind_11, (MR_Integer) 1)));
          MR_Word create_report__KnownCalleeDesc_14;
          MR_Word create_report__CSDPtr_16;

          {
            create_report__KnownCalleeDesc_14 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__CalleePSPtr_12);
          }
          {
            create_report__ProcDescKind_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), create_report__ProcDescKind_15, 0) = ((MR_Box) (create_report__KnownCalleeDesc_14));
            MR_hl_field(MR_mktag(1), create_report__ProcDescKind_15, 1) = ((MR_Box) (create_report__TypeSubst_13));
          }
          if (((MR_tag((MR_Word) create_report__CallSiteArraySlot_8)) == (MR_mktag((MR_Integer) 1))))
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "normal_call is multi");
                return;
              }
            }
          else
            create_report__CSDPtr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteArraySlot_8, (MR_Integer) 0)));
          {
            create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__CSDPtr_16);
          }
          if (create_report__succeeded)
            {
              MR_Word create_report__CalleeCliqueRowData_21;

              {
                create_report__create_callee_clique_perf_row_data_5_p_0(create_report__Deep_4, create_report__CSDPtr_16, &create_report__Own_19, &create_report__Desc_20, &create_report__CalleeCliqueRowData_21);
              }
              {
                create_report__CalleeCliqueRowDatas_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), create_report__CalleeCliqueRowDatas_22, 0) = ((MR_Box) (create_report__CalleeCliqueRowData_21));
                MR_hl_field(MR_mktag(1), create_report__CalleeCliqueRowDatas_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          else
            {
              {
                create_report__Own_19 = measurements__zero_own_prof_info_0_f_0();
              }
              {
                create_report__Desc_20 = measurements__zero_inherit_prof_info_0_f_0();
              }
              create_report__CalleeCliqueRowDatas_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
        }
        break;
    }
    {
      create_report__own_and_inherit_to_perf_row_data_5_p_0((MR_Word) &report__report__type_ctor_info_call_site_desc_0, create_report__Deep_4, ((MR_Box) (create_report__CallSiteDesc_10)), create_report__Own_19, create_report__Desc_20, &create_report__SummaryRowData_29);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *create_report__CliqueCallSiteReport_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__SummaryRowData_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__ProcDescKind_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (create_report__CalleeCliqueRowDatas_22));
    }
  }
}

static void MR_CALL 
create_report__create_clique_proc_dynamic_report_7_p_0(
  MR_Word create_report__Deep_8,
  MR_Word create_report___CliquePtr_9,
  MR_Word create_report__ProcDesc_10,
  MR_Word create_report__PDPtr_11,
  MR_Word * create_report__Own_12,
  MR_Word * create_report__Desc_13,
  MR_Word * create_report__CliquePDReport_14)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(create_report__Deep_8, create_report__ProcDesc_10, create_report__PDPtr_11, create_report__Own_12, create_report__Desc_13, create_report__CliquePDReport_14);
    }
  }
}

static void MR_CALL 
create_report__create_clique_proc_report_4_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv2_Own_12;
    MR_Word create_report__conv1_Desc_13;
    MR_Word create_report__conv0_CliquePDReport_14;

    {
      create_report__create_clique_proc_dynamic_report_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 5))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv2_Own_12, &create_report__conv1_Desc_13, &create_report__conv0_CliquePDReport_14);
    }
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_Own_12));
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv1_Desc_13));
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv0_CliquePDReport_14));
  }
}

static void MR_CALL 
create_report__create_clique_proc_report_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__CliquePtr_6,
  MR_Word create_report__HeadVar__3_3,
  MR_Word * create_report__CliqueProcReport_9)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__PSPtr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word create_report__PDPtrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__3_3, (MR_Integer) 1)));

    if ((create_report__PDPtrs_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_clique_proc_report\'/4", (MR_String) "PDPtrs = []");
          return;
        }
      }
    else
      {
        MR_Word create_report__FirstPDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__PDPtrs_8, (MR_Integer) 0)));
        MR_Word create_report__LaterPDPtrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__PDPtrs_8, (MR_Integer) 1)));
        MR_Word create_report__ProcDesc_12;
        MR_Word create_report__FirstPDOwn_13;
        MR_Word create_report__FirstPDDesc_14;
        MR_Word create_report__FirstPDReport_15;
        MR_Word create_report__LaterPDOwns_16;
        MR_Word create_report__LaterPDDescs_17;
        MR_Word create_report__LaterPDReports_18;
        MR_Word create_report__SummaryOwn_19;
        MR_Word create_report__SummaryDesc_20;
        MR_Word create_report__ProcSummaryRowData_21;
        MR_Word create_report__Var_22;
        MR_Word create_report__Var_23;
        MR_Word create_report__Var_24;
        MR_Word create_report__Var_41;

        {
          create_report__ProcDesc_12 = create_report__describe_proc_2_f_0(create_report__Deep_5, create_report__PSPtr_7);
        }
        {
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(create_report__Deep_5, create_report__ProcDesc_12, create_report__FirstPDPtr_10, &create_report__FirstPDOwn_13, &create_report__FirstPDDesc_14, &create_report__FirstPDReport_15);
        }
        {
          create_report__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_22, 0) = ((MR_Box) (&create_report_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), create_report__Var_22, 1) = ((MR_Box) (create_report__create_clique_proc_report_4_p_0_1));
          MR_hl_field(MR_mktag(0), create_report__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), create_report__Var_22, 3) = ((MR_Box) (create_report__Deep_5));
          MR_hl_field(MR_mktag(0), create_report__Var_22, 4) = ((MR_Box) (create_report__CliquePtr_6));
          MR_hl_field(MR_mktag(0), create_report__Var_22, 5) = ((MR_Box) (create_report__ProcDesc_12));
        }
        {
          mercury__list__map3_5_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &report__report__type_ctor_info_clique_proc_dynamic_report_0, create_report__Var_22, create_report__LaterPDPtrs_11, &create_report__LaterPDOwns_16, &create_report__LaterPDDescs_17, &create_report__LaterPDReports_18);
        }
        {
          create_report__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), create_report__Var_23, 0) = ((MR_Box) (create_report__FirstPDOwn_13));
          MR_hl_field(MR_mktag(1), create_report__Var_23, 1) = ((MR_Box) (create_report__LaterPDOwns_16));
        }
        {
          create_report__SummaryOwn_19 = measurements__sum_own_infos_1_f_0(create_report__Var_23);
        }
        {
          create_report__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), create_report__Var_24, 0) = ((MR_Box) (create_report__FirstPDDesc_14));
          MR_hl_field(MR_mktag(1), create_report__Var_24, 1) = ((MR_Box) (create_report__LaterPDDescs_17));
        }
        {
          create_report__SummaryDesc_20 = measurements__sum_inherit_infos_1_f_0(create_report__Var_24);
        }
        {
          create_report__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), create_report__Var_41, 0) = ((MR_Box) (create_report__SummaryDesc_20));
        }
        {
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_5, ((MR_Box) (create_report__ProcDesc_12)), create_report__SummaryOwn_19, create_report__Var_41, &create_report__ProcSummaryRowData_21);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          *create_report__CliqueProcReport_9 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcSummaryRowData_21));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (create_report__FirstPDReport_15));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (create_report__LaterPDReports_18));
        }
      }
  }
}

static MR_bool MR_CALL 
create_report__proc_group_contains_2_p_0(
  MR_Word create_report__EntryPDPtr_3,
  MR_Word create_report__HeadVar__2_2)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__PDPtrs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word create_report__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__HeadVar__2_2, (MR_Integer) 0)));

    {
      create_report__succeeded = mercury__list__member_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, ((MR_Box) (create_report__EntryPDPtr_3)), create_report__PDPtrs_5);
    }
    return create_report__succeeded;
  }
}

static MR_bool MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0_1(
  MR_Box create_report__closure_arg)
{
  {
    MR_bool create_report__succeeded;
    MR_Box create_report__closure = create_report__closure_arg;

    {
      create_report__succeeded = profile__valid_proc_dynamic_ptr_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Word create_report__PDPtr_6,
  MR_Word create_report__STATE_VARIABLE_PStoPDsMap_0_12,
  MR_Word * create_report__STATE_VARIABLE_PStoPDsMap_13)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__PD_8;
    MR_Word create_report__PSPtr_9;
    MR_Word create_report__Var_14;
    MR_ArrayPtr create_report__Var_20;
    MR_Word create_report__Var_21;
    MR_Word create_report__PSPDs0_10;
    MR_Box create_report__conv0_PSPDs0_10;

    {
      create_report__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__Var_14, 0) = ((MR_Box) (&create_report_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), create_report__Var_14, 1) = ((MR_Box) (create_report__group_proc_dynamics_by_proc_static_4_p_0_1));
      MR_hl_field(MR_mktag(0), create_report__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), create_report__Var_14, 3) = ((MR_Box) (create_report__Deep_5));
      MR_hl_field(MR_mktag(0), create_report__Var_14, 4) = ((MR_Box) (create_report__PDPtr_6));
    }
    {
      mercury__require__require_2_p_0(create_report__Var_14, (MR_String) "group_proc_dynamics_by_proc_static: invalid PDPtr");
    }
    {
      profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_5, create_report__PDPtr_6, &create_report__PD_8);
    }
    create_report__PSPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_8, (MR_Integer) 0)));
    create_report__Var_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_8, (MR_Integer) 1)));
    create_report__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_8, (MR_Integer) 2)));
    {
      create_report__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[0], create_report__STATE_VARIABLE_PStoPDsMap_0_12, ((MR_Box) (create_report__PSPtr_9)), &create_report__conv0_PSPDs0_10);
    }
    if (create_report__succeeded)
      {
        create_report__PSPDs0_10 = ((MR_Word) create_report__conv0_PSPDs0_10);
        create_report__succeeded = MR_TRUE;
      }
    if (create_report__succeeded)
      {
        MR_Word create_report__PSPDs_11;

        {
          create_report__PSPDs_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), create_report__PSPDs_11, 0) = ((MR_Box) (create_report__PDPtr_6));
          MR_hl_field(MR_mktag(1), create_report__PSPDs_11, 1) = ((MR_Box) (create_report__PSPDs0_10));
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[0], ((MR_Box) (create_report__PSPtr_9)), ((MR_Box) (create_report__PSPDs_11)), create_report__STATE_VARIABLE_PStoPDsMap_0_12, create_report__STATE_VARIABLE_PStoPDsMap_13);
        }
      }
    else
      {
        MR_Word create_report__Var_17;

        {
          create_report__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), create_report__Var_17, 0) = ((MR_Box) (create_report__PDPtr_6));
          MR_hl_field(MR_mktag(1), create_report__Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &create_report_scalar_common_1[0], ((MR_Box) (create_report__PSPtr_9)), ((MR_Box) (create_report__Var_17)), create_report__STATE_VARIABLE_PStoPDsMap_0_12, create_report__STATE_VARIABLE_PStoPDsMap_13);
        }
      }
  }
}

static MR_Word MR_CALL 
create_report__find_clique_ancestors_2_f_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CliquePtr_5)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__Ancestors_6;
    MR_Word create_report__EntryCSDPtr_7;

    {
      profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__EntryCSDPtr_7);
    }
    {
      create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__EntryCSDPtr_7);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__EntryCSD_8;
        MR_Word create_report__EntryPDPtr_9;
        MR_Word create_report__Var_22;
        MR_Word create_report__Var_23;
        MR_Word create_report__Var_59;
        MR_Integer create_report__Var_61;
        MR_Integer create_report__Var_62;
        MR_Word create_report__Var_24;
        MR_String create_report__Var_25;
        MR_String create_report__Var_26;
        MR_String create_report__Var_27;
        MR_ArrayPtr create_report__Var_28;
        MR_ArrayPtr create_report__Var_29;
        MR_ArrayPtr create_report__Var_30;
        MR_ArrayPtr create_report__Var_31;
        MR_ArrayPtr create_report__Var_32;
        MR_ArrayPtr create_report__Var_33;
        MR_ArrayPtr create_report__Var_34;
        MR_ArrayPtr create_report__Var_35;
        MR_ArrayPtr create_report__Var_36;
        MR_ArrayPtr create_report__Var_37;
        MR_ArrayPtr create_report__Var_38;
        MR_ArrayPtr create_report__Var_39;
        MR_ArrayPtr create_report__Var_40;
        MR_ArrayPtr create_report__Var_41;
        MR_ArrayPtr create_report__Var_42;
        MR_ArrayPtr create_report__Var_43;
        MR_ArrayPtr create_report__Var_44;
        MR_ArrayPtr create_report__Var_45;
        MR_ArrayPtr create_report__Var_46;
        MR_ArrayPtr create_report__Var_47;
        MR_Word create_report__Var_48;
        MR_Word create_report__Var_49;
        MR_Word create_report__Var_50;
        MR_Word create_report__Var_51;

        {
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__EntryCSDPtr_7, &create_report__EntryCSD_8);
        }
        create_report__EntryPDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 0)));
        create_report__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 1)));
        create_report__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 2)));
        create_report__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
        create_report__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
        create_report__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
        create_report__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
        create_report__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
        create_report__Var_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
        create_report__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
        create_report__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
        create_report__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
        create_report__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
        create_report__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
        create_report__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
        create_report__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
        create_report__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
        create_report__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
        create_report__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
        create_report__Var_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
        create_report__Var_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
        create_report__Var_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
        create_report__Var_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
        create_report__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
        create_report__Var_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
        create_report__Var_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
        create_report__Var_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
        create_report__Var_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
        create_report__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
        create_report__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
        create_report__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));
        create_report__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));
        create_report__Var_61 = (MR_Integer) create_report__EntryPDPtr_9;
        create_report__Var_62 = (MR_Integer) create_report__Var_59;
        create_report__succeeded = (create_report__Var_61 == create_report__Var_62);
        if (create_report__succeeded)
          create_report__Ancestors_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word create_report__EntryCliquePtr_10;
            MR_Word create_report__CalleePDPtr_11;
            MR_Word create_report__CalleePD_12;
            MR_Word create_report__CalleePSPtr_13;
            MR_Word create_report__CalleeDesc_14;
            MR_Word create_report__EntryCSSPtr_15;
            MR_Word create_report__EntryCallSiteDesc_16;
            MR_Word create_report__AncestorDesc_17;
            MR_Word create_report__Own_18;
            MR_Word create_report__Desc_19;
            MR_Word create_report__Parent_20;
            MR_Word create_report__MoreAncestors_21;
            MR_Word create_report__Var_68;
            MR_Word create_report__Var_52;
            MR_Word create_report__Var_53;
            MR_ArrayPtr create_report__Var_54;
            MR_Word create_report__Var_55;
            MR_Word create_report__Var_56;
            MR_Word create_report__Var_57;

            {
              profile__deep_lookup_clique_index_3_p_0(create_report__Deep_4, create_report__EntryPDPtr_9, &create_report__EntryCliquePtr_10);
            }
            create_report__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 0)));
            create_report__CalleePDPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 1)));
            create_report__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 2)));
            {
              profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__CalleePDPtr_11, &create_report__CalleePD_12);
            }
            create_report__CalleePSPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePD_12, (MR_Integer) 0)));
            create_report__Var_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__CalleePD_12, (MR_Integer) 1)));
            create_report__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePD_12, (MR_Integer) 2)));
            {
              create_report__CalleeDesc_14 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__CalleePSPtr_13);
            }
            {
              profile__deep_lookup_call_site_static_map_3_p_0(create_report__Deep_4, create_report__EntryCSDPtr_7, &create_report__EntryCSSPtr_15);
            }
            {
              create_report__EntryCallSiteDesc_16 = create_report__describe_call_site_2_f_0(create_report__Deep_4, create_report__EntryCSSPtr_15);
            }
            {
              create_report__AncestorDesc_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), create_report__AncestorDesc_17, 0) = ((MR_Box) (create_report__EntryCliquePtr_10));
              MR_hl_field(MR_mktag(0), create_report__AncestorDesc_17, 1) = ((MR_Box) (create_report__CliquePtr_5));
              MR_hl_field(MR_mktag(0), create_report__AncestorDesc_17, 2) = ((MR_Box) (create_report__CalleeDesc_14));
              MR_hl_field(MR_mktag(0), create_report__AncestorDesc_17, 3) = ((MR_Box) (create_report__EntryCallSiteDesc_16));
            }
            create_report__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 0)));
            create_report__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 1)));
            create_report__Own_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_8, (MR_Integer) 2)));
            {
              profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_4, create_report__EntryCSDPtr_7, &create_report__Desc_19);
            }
            {
              create_report__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), create_report__Var_68, 0) = ((MR_Box) (create_report__Desc_19));
            }
            {
              create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__AncestorDesc_17)), create_report__Own_18, create_report__Var_68, &create_report__Parent_20);
            }
            {
              create_report__MoreAncestors_21 = create_report__find_clique_ancestors_2_f_0(create_report__Deep_4, create_report__EntryCliquePtr_10);
            }
            {
              create_report__Ancestors_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), create_report__Ancestors_6, 0) = ((MR_Box) (create_report__Parent_20));
              MR_hl_field(MR_mktag(1), create_report__Ancestors_6, 1) = ((MR_Box) (create_report__MoreAncestors_21));
            }
          }
      }
    else
      create_report__Ancestors_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return create_report__Ancestors_6;
  }
}

static void MR_CALL 
create_report__find_start_of_action_callee_4_p_0(
  MR_Integer create_report__Percent_5,
  MR_Word create_report__RowData_6,
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_13,
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_14)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__MaybeTotalPerf_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 8)));
    MR_Word create_report__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 0)));
    MR_Integer create_report__Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 1)));
    MR_Integer create_report__Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 2)));
    MR_Integer create_report__Var_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 3)));
    MR_Integer create_report__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 4)));
    MR_Integer create_report__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 5)));
    MR_Integer create_report__Var_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 6)));
    MR_Word create_report__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 7)));

    if ((create_report__MaybeTotalPerf_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.find_start_of_action_callee\'/4", (MR_String) "no total perf");
          return;
        }
      }
    else
      {
        MR_Word create_report__TotalPerf_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__MaybeTotalPerf_8, (MR_Integer) 0)));
        MR_Word create_report__CallSeqsPercent_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 5)));
        MR_Integer create_report__Var_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 0)));
        MR_Word create_report__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 1)));
        MR_Word create_report__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 2)));
        MR_Word create_report__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 3)));
        MR_Integer create_report__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 4)));
        MR_Float create_report__Var_31 = MR_unbox_float((MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 6)));
        MR_Integer create_report__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 7)));
        MR_Word create_report__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 8)));
        MR_Float create_report__Var_34 = MR_unbox_float((MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 9)));
        MR_Word create_report__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 10)));
        MR_Word create_report__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 11)));
        MR_Word create_report__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__TotalPerf_9, (MR_Integer) 12)));

        {
          create_report__succeeded = measurement_units__percent_at_or_above_threshold_2_p_0(create_report__Percent_5, create_report__CallSeqsPercent_10);
        }
        if (create_report__succeeded)
          {
            MR_Word create_report__CliqueDesc_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 0)));
            MR_Word create_report__CliquePtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueDesc_11, (MR_Integer) 0)));
            MR_Integer create_report__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 1)));
            MR_Integer create_report__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 2)));
            MR_Integer create_report__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 3)));
            MR_Integer create_report__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 4)));
            MR_Integer create_report__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 5)));
            MR_Integer create_report__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 6)));
            MR_Word create_report__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 7)));
            MR_Word create_report__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RowData_6, (MR_Integer) 8)));
            MR_Word create_report__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueDesc_11, (MR_Integer) 1)));
            MR_Word create_report__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueDesc_11, (MR_Integer) 2)));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *create_report__STATE_VARIABLE_ActionCliquePtrs_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__CliquePtr_12));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_0_13));
            }
          }
        else
          *create_report__STATE_VARIABLE_ActionCliquePtrs_14 = create_report__STATE_VARIABLE_ActionCliquePtrs_0_13;
      }
  }
}

static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_14;

    {
      create_report__find_start_of_action_callee_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_14);
    }
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_14));
  }
}

static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0(
  MR_Integer create_report__Percent_5,
  MR_Word create_report__CallSiteReport_6,
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_11,
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_12)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__CalleeRowDatas_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteReport_6, (MR_Integer) 2)));
    MR_Word create_report__Var_13;
    MR_Word create_report__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteReport_6, (MR_Integer) 0)));
    MR_Word create_report__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CallSiteReport_6, (MR_Integer) 1)));
    MR_Box create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_12;

    {
      create_report__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__Var_13, 0) = ((MR_Box) (&create_report_scalar_common_4[7]));
      MR_hl_field(MR_mktag(0), create_report__Var_13, 1) = ((MR_Box) (create_report__find_start_of_action_call_site_4_p_0_1));
      MR_hl_field(MR_mktag(0), create_report__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), create_report__Var_13, 3) = ((MR_Box) (create_report__Percent_5));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &create_report_scalar_common_1[5], (MR_Word) &create_report_scalar_common_1[4], create_report__Var_13, create_report__CalleeRowDatas_10, ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_0_11)), &create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_12);
    }
    *create_report__STATE_VARIABLE_ActionCliquePtrs_12 = ((MR_Word) create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_12);
  }
}

static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12;

    {
      create_report__find_start_of_action_call_site_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12);
    }
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12));
  }
}

static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0(
  MR_Integer create_report__Percent_5,
  MR_Word create_report__CliquePDReport_6,
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_10,
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_11)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__CallSites_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliquePDReport_6, (MR_Integer) 1)));
    MR_Word create_report__Var_12;
    MR_Word create_report__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliquePDReport_6, (MR_Integer) 0)));
    MR_Box create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_11;

    {
      create_report__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__Var_12, 0) = ((MR_Box) (&create_report_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), create_report__Var_12, 1) = ((MR_Box) (create_report__find_start_of_action_clique_proc_dynamic_4_p_0_1));
      MR_hl_field(MR_mktag(0), create_report__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), create_report__Var_12, 3) = ((MR_Box) (create_report__Percent_5));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_clique_call_site_report_0, (MR_Word) &create_report_scalar_common_1[4], create_report__Var_12, create_report__CallSites_9, ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_0_10)), &create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_11);
    }
    *create_report__STATE_VARIABLE_ActionCliquePtrs_11 = ((MR_Word) create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_11);
  }
}

static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv2_STATE_VARIABLE_ActionCliquePtrs_11;

    {
      create_report__find_start_of_action_clique_proc_dynamic_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv2_STATE_VARIABLE_ActionCliquePtrs_11);
    }
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv2_STATE_VARIABLE_ActionCliquePtrs_11));
  }
}

static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12;

    {
      create_report__find_start_of_action_call_site_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12);
    }
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12));
  }
}

static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0(
  MR_Integer create_report__Percent_5,
  MR_Word create_report__CliqueProcReport_6,
  MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_0_11,
  MR_Word * create_report__STATE_VARIABLE_ActionCliquePtrs_12)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__FirstPDReport_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueProcReport_6, (MR_Integer) 1)));
    MR_Word create_report__LaterPDReports_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueProcReport_6, (MR_Integer) 2)));
    MR_Word create_report__STATE_VARIABLE_ActionCliquePtrs_13_13;
    MR_Word create_report__Var_14;
    MR_Word create_report__CallSites_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__FirstPDReport_9, (MR_Integer) 1)));
    MR_Word create_report__Var_28;
    MR_Word create_report__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CliqueProcReport_6, (MR_Integer) 0)));
    MR_Word create_report__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__FirstPDReport_9, (MR_Integer) 0)));
    MR_Box create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_13_13;
    MR_Box create_report__conv3_STATE_VARIABLE_ActionCliquePtrs_12;

    {
      create_report__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__Var_28, 0) = ((MR_Box) (&create_report_scalar_common_4[5]));
      MR_hl_field(MR_mktag(0), create_report__Var_28, 1) = ((MR_Box) (create_report__find_start_of_action_clique_proc_4_p_0_1));
      MR_hl_field(MR_mktag(0), create_report__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), create_report__Var_28, 3) = ((MR_Box) (create_report__Percent_5));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_clique_call_site_report_0, (MR_Word) &create_report_scalar_common_1[4], create_report__Var_28, create_report__CallSites_27, ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_0_11)), &create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_13_13);
    }
    create_report__STATE_VARIABLE_ActionCliquePtrs_13_13 = ((MR_Word) create_report__conv1_STATE_VARIABLE_ActionCliquePtrs_13_13);
    {
      create_report__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__Var_14, 0) = ((MR_Box) (&create_report_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), create_report__Var_14, 1) = ((MR_Box) (create_report__find_start_of_action_clique_proc_4_p_0_2));
      MR_hl_field(MR_mktag(0), create_report__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), create_report__Var_14, 3) = ((MR_Box) (create_report__Percent_5));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_clique_proc_dynamic_report_0, (MR_Word) &create_report_scalar_common_1[4], create_report__Var_14, create_report__LaterPDReports_10, ((MR_Box) (create_report__STATE_VARIABLE_ActionCliquePtrs_13_13)), &create_report__conv3_STATE_VARIABLE_ActionCliquePtrs_12);
    }
    *create_report__STATE_VARIABLE_ActionCliquePtrs_12 = ((MR_Word) create_report__conv3_STATE_VARIABLE_ActionCliquePtrs_12);
  }
}

static void MR_CALL 
create_report__find_start_of_action_4_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12;

    {
      create_report__find_start_of_action_clique_proc_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12);
    }
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ActionCliquePtrs_12));
  }
}

static void MR_CALL 
create_report__find_start_of_action_4_p_0(
  MR_Word create_report__Deep_5,
  MR_Integer create_report__Percent_6,
  MR_Word create_report__CurrentReport_7,
  MR_Word * create_report__SelectedReport_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool create_report__succeeded;
        MR_Word create_report__CliqueProcs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CurrentReport_7, (MR_Integer) 2)));
        MR_Word create_report__ActionCliquePtrs_12;
        MR_Word create_report__Var_16;
        MR_Word create_report__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CurrentReport_7, (MR_Integer) 0)));
        MR_Word create_report__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CurrentReport_7, (MR_Integer) 1)));
        MR_Box create_report__conv1_ActionCliquePtrs_12;
        MR_Word create_report__ActionCliqueReport_15;
        MR_Word create_report__ActionCliquePtr_13;
        MR_Word create_report__MaybeActionCliqueReport_14;
        MR_Word create_report__Var_18;

        {
          create_report__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_16, 0) = ((MR_Box) (&create_report_scalar_common_4[4]));
          MR_hl_field(MR_mktag(0), create_report__Var_16, 1) = ((MR_Box) (create_report__find_start_of_action_4_p_0_1));
          MR_hl_field(MR_mktag(0), create_report__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), create_report__Var_16, 3) = ((MR_Box) (create_report__Percent_6));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &report__report__type_ctor_info_clique_proc_report_0, (MR_Word) &create_report_scalar_common_1[4], create_report__Var_16, create_report__CliqueProcs_11, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &create_report__conv1_ActionCliquePtrs_12);
        }
        create_report__ActionCliquePtrs_12 = ((MR_Word) create_report__conv1_ActionCliquePtrs_12);
        create_report__succeeded = ((MR_tag((MR_Word) create_report__ActionCliquePtrs_12)) == (MR_mktag((MR_Integer) 1)));
        if (create_report__succeeded)
          {
            create_report__ActionCliquePtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__ActionCliquePtrs_12, (MR_Integer) 0)));
            create_report__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), create_report__ActionCliquePtrs_12, (MR_Integer) 1)));
            create_report__succeeded = (create_report__Var_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (create_report__succeeded)
              {
                {
                  create_report__create_clique_report_3_p_0(create_report__Deep_5, create_report__ActionCliquePtr_13, &create_report__MaybeActionCliqueReport_14);
                }
                create_report__succeeded = ((MR_tag((MR_Word) create_report__MaybeActionCliqueReport_14)) == (MR_mktag((MR_Integer) 0)));
                if (create_report__succeeded)
                  create_report__ActionCliqueReport_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeActionCliqueReport_14, (MR_Integer) 0)));
              }
          }
        if (create_report__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word create_report__next_value_of_CurrentReport_7 = create_report__ActionCliqueReport_15;

              create_report__CurrentReport_7 = create_report__next_value_of_CurrentReport_7;
            }
            continue;
          }
        else
          *create_report__SelectedReport_8 = create_report__CurrentReport_7;
      }
      break;
    }
}

static void MR_CALL 
create_report__create_root_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__MaybePercent_5,
  MR_Word * create_report__MaybeReport_6)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__RootCliquePtr_7;
    MR_Word create_report__MaybeRootCliqueReport_8;
    MR_Word create_report__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 4)));
    MR_Word create_report__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 0)));
    MR_String create_report__Var_15 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 1)));
    MR_String create_report__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 2)));
    MR_String create_report__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 3)));
    MR_ArrayPtr create_report__Var_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 5)));
    MR_ArrayPtr create_report__Var_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 6)));
    MR_ArrayPtr create_report__Var_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 7)));
    MR_ArrayPtr create_report__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 8)));
    MR_ArrayPtr create_report__Var_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 9)));
    MR_ArrayPtr create_report__Var_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 10)));
    MR_ArrayPtr create_report__Var_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 11)));
    MR_ArrayPtr create_report__Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 12)));
    MR_ArrayPtr create_report__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 13)));
    MR_ArrayPtr create_report__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 14)));
    MR_ArrayPtr create_report__Var_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 15)));
    MR_ArrayPtr create_report__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 16)));
    MR_ArrayPtr create_report__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 17)));
    MR_ArrayPtr create_report__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 18)));
    MR_ArrayPtr create_report__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 19)));
    MR_ArrayPtr create_report__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 20)));
    MR_ArrayPtr create_report__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 21)));
    MR_ArrayPtr create_report__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 22)));
    MR_ArrayPtr create_report__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 23)));
    MR_ArrayPtr create_report__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 24)));
    MR_Word create_report__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 25)));
    MR_Word create_report__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 26)));
    MR_Word create_report__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 27)));
    MR_Word create_report__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_4, (MR_Integer) 28)));

    {
      profile__deep_lookup_clique_index_3_p_0(create_report__Deep_4, create_report__Var_13, &create_report__RootCliquePtr_7);
    }
    {
      create_report__create_clique_report_3_p_0(create_report__Deep_4, create_report__RootCliquePtr_7, &create_report__MaybeRootCliqueReport_8);
    }
    if (((MR_tag((MR_Word) create_report__MaybeRootCliqueReport_8)) == (MR_mktag((MR_Integer) 1))))
      *create_report__MaybeReport_6 = create_report__MaybeRootCliqueReport_8;
    else
      {
        MR_Word create_report__RootCliqueReport_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeRootCliqueReport_8, (MR_Integer) 0)));

        if ((create_report__MaybePercent_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *create_report__MaybeReport_6 = create_report__MaybeRootCliqueReport_8;
        else
          {
            MR_Integer create_report__Percent_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), create_report__MaybePercent_5, (MR_Integer) 0)));
            MR_Word create_report__Report_12;

            {
              create_report__find_start_of_action_4_p_0(create_report__Deep_4, create_report__Percent_11, create_report__RootCliqueReport_10, &create_report__Report_12);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *create_report__MaybeReport_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__Report_12));
            }
          }
      }
  }
}

void MR_CALL 
create_report__own_and_inherit_to_perf_row_data_5_p_0(
  MR_Word create_report__TypeInfo_for_T_12,
  MR_Word create_report__Deep_6,
  MR_Box create_report__Subject_7,
  MR_Word create_report__Own_8,
  MR_Word create_report__Desc_9,
  MR_Word * create_report__RowData_10)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__Var_11;

    {
      create_report__Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), create_report__Var_11, 0) = ((MR_Box) (create_report__Desc_9));
    }
    {
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_6, create_report__Subject_7, create_report__Own_8, create_report__Var_11, create_report__RowData_10);
    }
  }
}

MR_Word MR_CALL 
create_report__describe_proc_2_f_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__PSPtr_5)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__ProcDesc_6;
    MR_String create_report__FileName_8;
    MR_Integer create_report__LineNumber_9;
    MR_String create_report__ModuleName_10;
    MR_String create_report__UnQualRefinedName_11;
    MR_String create_report__QualRefinedName_12;

    {
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_4, create_report__PSPtr_5);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__PS_7;
        MR_Word create_report__Var_13;
        MR_String create_report__Var_17;
        MR_Word create_report__Var_19;
        MR_ArrayPtr create_report__Var_20;
        MR_ArrayPtr create_report__Var_21;
        MR_Word create_report__Var_22;
        MR_Word create_report__Var_23;

        {
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__PS_7);
        }
        create_report__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 0)));
        create_report__ModuleName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 1)));
        create_report__UnQualRefinedName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 2)));
        create_report__QualRefinedName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 3)));
        create_report__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 4)));
        create_report__FileName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 5)));
        create_report__LineNumber_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 6)));
        create_report__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 7)));
        create_report__Var_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 8)));
        create_report__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 9)));
        create_report__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 10)));
        create_report__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_7, (MR_Integer) 11)));
      }
    else
      {
        create_report__FileName_8 = (MR_String) "";
        create_report__LineNumber_9 = (MR_Integer) 0;
        create_report__ModuleName_10 = (MR_String) "";
        create_report__UnQualRefinedName_11 = (MR_String) "mercury_runtime";
        create_report__QualRefinedName_12 = (MR_String) "mercury_runtime";
      }
    {
      create_report__ProcDesc_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 0) = ((MR_Box) (create_report__PSPtr_5));
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 1) = ((MR_Box) (create_report__FileName_8));
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 2) = ((MR_Box) (create_report__LineNumber_9));
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 3) = ((MR_Box) (create_report__ModuleName_10));
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 4) = ((MR_Box) (create_report__UnQualRefinedName_11));
      MR_hl_field(MR_mktag(0), create_report__ProcDesc_6, 5) = ((MR_Box) (create_report__QualRefinedName_12));
    }
    return create_report__ProcDesc_6;
  }
}

static void MR_CALL 
create_report__create_top_procs_report_6_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_RowData_6;

    {
      create_report__psi_to_perf_row_data_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Integer) create_report__wrapper_arg_1), &create_report__conv0_RowData_6);
    }
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_RowData_6));
  }
}

void MR_CALL 
create_report__create_top_procs_report_6_p_0(
  MR_Word create_report__Deep_7,
  MR_Word create_report__Limit_8,
  MR_Word create_report__CostKind_9,
  MR_Word create_report__InclDesc0_10,
  MR_Word create_report__Scope0_11,
  MR_Word * create_report__MaybeTopProcsReport_12)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__InclDesc_13;
    MR_Word create_report__Scope_14;
    MR_Word create_report__MaybeTopPSIs_15;

    switch (create_report__CostKind_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 4:
      case (MR_Integer) 3:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 5:
        {
          create_report__InclDesc_13 = create_report__InclDesc0_10;
          create_report__Scope_14 = create_report__Scope0_11;
        }
        break;
      case (MR_Integer) 0:
        {
          create_report__InclDesc_13 = (MR_Integer) 0;
          create_report__Scope_14 = (MR_Integer) 1;
        }
        break;
    }
    {
      create_report__MaybeTopPSIs_15 = top_procs__find_top_procs_5_f_0(create_report__CostKind_9, create_report__InclDesc_13, create_report__Scope_14, create_report__Limit_8, create_report__Deep_7);
    }
    if (((MR_tag((MR_Word) create_report__MaybeTopPSIs_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String create_report__ErrorMessage_16 = ((MR_String) (MR_hl_field(MR_mktag(1), create_report__MaybeTopPSIs_15, (MR_Integer) 0)));
        MR_String create_report__Var_22;

        {
          create_report__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "Internal error: ", create_report__ErrorMessage_16);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *create_report__MaybeTopProcsReport_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Var_22));
        }
      }
    else
      {
        MR_Word create_report__TopPSIs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeTopPSIs_15, (MR_Integer) 0)));
        MR_Word create_report__Ordering_18;
        MR_Word create_report__ProcRowDatas_19;
        MR_Word create_report__TopProcsReport_20;
        MR_Word create_report__Var_21;

        {
          create_report__Ordering_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Ordering_18, 0) = ((MR_Box) (create_report__Limit_8));
          MR_hl_field(MR_mktag(0), create_report__Ordering_18, 1) = ((MR_Box) ((create_report__CostKind_9 | ((((create_report__InclDesc_13 << (MR_Integer) 3)) | ((create_report__Scope_14 << (MR_Integer) 4)))))));
        }
        {
          create_report__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_21, 0) = ((MR_Box) (&create_report_scalar_common_6[1]));
          MR_hl_field(MR_mktag(0), create_report__Var_21, 1) = ((MR_Box) (create_report__create_top_procs_report_6_p_0_1));
          MR_hl_field(MR_mktag(0), create_report__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), create_report__Var_21, 3) = ((MR_Box) (create_report__Deep_7));
        }
        {
          mercury__list__map_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &create_report_scalar_common_1[3], create_report__Var_21, create_report__TopPSIs_17, &create_report__ProcRowDatas_19);
        }
        {
          create_report__TopProcsReport_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__TopProcsReport_20, 0) = ((MR_Box) (create_report__Ordering_18));
          MR_hl_field(MR_mktag(0), create_report__TopProcsReport_20, 1) = ((MR_Box) (create_report__ProcRowDatas_19));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *create_report__MaybeTopProcsReport_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__TopProcsReport_20));
        }
      }
  }
}

static void MR_CALL 
create_report__create_call_site_dynamic_var_use_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2,
  MR_Box create_report__wrapper_arg_3,
  MR_Box * create_report__wrapper_arg_4)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv1_MaybeUseAndName_16;
    MR_Integer create_report__conv0_STATE_VARIABLE_ArgNum_27;

    {
      create_report__call_site_dynamic_var_use_arg_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 5))), MR_unbox_float((MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 7))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv1_MaybeUseAndName_16, ((MR_Integer) create_report__wrapper_arg_3), &create_report__conv0_STATE_VARIABLE_ArgNum_27);
    }
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv1_MaybeUseAndName_16));
    *create_report__wrapper_arg_4 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_ArgNum_27));
  }
}

void MR_CALL 
create_report__create_call_site_dynamic_var_use_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CSDPtr_5,
  MR_Word * create_report__MaybeVarUseInfo_6)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__CSDPtr_5);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__CSD_7;
        MR_Word create_report__CalleePDPtr_8;
        MR_Word create_report__CallerPDPtr_9;
        MR_Word create_report__CalleePD_10;
        MR_Word create_report__CalleePSPtr_11;
        MR_Word create_report__MaybeProcrep_12;
        MR_Word create_report__Var_49;
        MR_ArrayPtr create_report__Var_52;
        MR_Word create_report__Var_53;

        {
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__CSD_7);
        }
        create_report__CallerPDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 0)));
        create_report__CalleePDPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 1)));
        create_report__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CSD_7, (MR_Integer) 2)));
        {
          profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__CalleePDPtr_8, &create_report__CalleePD_10);
        }
        create_report__CalleePSPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePD_10, (MR_Integer) 0)));
        create_report__Var_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__CalleePD_10, (MR_Integer) 1)));
        create_report__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__CalleePD_10, (MR_Integer) 2)));
        {
          analysis_utils__deep_get_maybe_procrep_3_p_0(create_report__Deep_4, create_report__CalleePSPtr_11, &create_report__MaybeProcrep_12);
        }
        if (((MR_tag((MR_Word) create_report__MaybeProcrep_12)) == (MR_mktag((MR_Integer) 1))))
          *create_report__MaybeVarUseInfo_6 = (MR_Word) create_report__MaybeProcrep_12;
        else
          {
            MR_Word create_report__Procrep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeProcrep_12, (MR_Integer) 0)));
            MR_Word create_report__HeadVars_14;
            MR_Word create_report__VarNameTable_15;
            MR_Word create_report__ParentCliquePtr_16;
            MR_Word create_report__CalleeCliquePtr_17;
            MR_Word create_report__MaybeRecursiveCostsReport_18;
            MR_Word create_report__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Procrep_13, (MR_Integer) 1)));
            MR_Word create_report__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Procrep_13, (MR_Integer) 0)));
            MR_Word create_report__Var_55;
            MR_Word create_report__Var_57;
            MR_Word create_report__Var_58;

            create_report__HeadVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_33, (MR_Integer) 0)));
            create_report__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_33, (MR_Integer) 1)));
            create_report__VarNameTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_33, (MR_Integer) 2)));
            create_report__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_33, (MR_Integer) 3)));
            create_report__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_33, (MR_Integer) 4)));
            {
              profile__deep_lookup_clique_index_3_p_0(create_report__Deep_4, create_report__CallerPDPtr_9, &create_report__ParentCliquePtr_16);
            }
            {
              profile__deep_lookup_clique_index_3_p_0(create_report__Deep_4, create_report__CalleePDPtr_8, &create_report__CalleeCliquePtr_17);
            }
            {
              recursion_patterns__create_clique_recursion_costs_report_3_p_0(create_report__Deep_4, create_report__ParentCliquePtr_16, &create_report__MaybeRecursiveCostsReport_18);
            }
            if (((MR_tag((MR_Word) create_report__MaybeRecursiveCostsReport_18)) == (MR_mktag((MR_Integer) 1))))
              *create_report__MaybeVarUseInfo_6 = (MR_Word) create_report__MaybeRecursiveCostsReport_18;
            else
              {
                MR_Word create_report__RecursiveCostsReport_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeRecursiveCostsReport_18, (MR_Integer) 0)));
                MR_Word create_report__RecursionType_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RecursiveCostsReport_19, (MR_Integer) 1)));
                MR_Word create_report__MaybeCost_21;
                MR_Word create_report__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__RecursiveCostsReport_19, (MR_Integer) 0)));
                MR_Integer create_report__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__RecursiveCostsReport_19, (MR_Integer) 2)));
                MR_Integer create_report__Var_83 = (MR_Integer) create_report__ParentCliquePtr_16;
                MR_Integer create_report__Var_84 = (MR_Integer) create_report__CalleeCliquePtr_17;

                create_report__succeeded = (create_report__Var_83 == create_report__Var_84);
                if (create_report__succeeded)
                  {
                    create_report__get_recursive_csd_cost_4_p_0(create_report__Deep_4, create_report__CSDPtr_5, create_report__RecursionType_20, &create_report__MaybeCost_21);
                  }
                else
                  {
                    MR_Word create_report__Desc_22;
                    MR_Word create_report__Own_23;
                    MR_Integer create_report__Cost0_24;
                    MR_Integer create_report__Var_35;
                    MR_Integer create_report__Var_36;
                    MR_Float create_report__Var_37;

                    {
                      profile__deep_lookup_csd_desc_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__Desc_22);
                    }
                    {
                      profile__deep_lookup_csd_own_3_p_0(create_report__Deep_4, create_report__CSDPtr_5, &create_report__Own_23);
                    }
                    {
                      create_report__Var_35 = measurements__callseqs_1_f_0(create_report__Own_23);
                    }
                    {
                      create_report__Var_36 = measurements__inherit_callseqs_1_f_0(create_report__Desc_22);
                    }
                    create_report__Cost0_24 = (create_report__Var_35 + create_report__Var_36);
                    {
                      create_report__Var_37 = mercury__float__float_1_f_0(create_report__Cost0_24);
                    }
                    {
                      create_report__MaybeCost_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), create_report__MaybeCost_21, 0) = MR_box_float(create_report__Var_37);
                    }
                  }
                if (((MR_tag((MR_Word) create_report__MaybeCost_21)) == (MR_mktag((MR_Integer) 1))))
                  *create_report__MaybeVarUseInfo_6 = (MR_Word) create_report__MaybeCost_21;
                else
                  {
                    MR_Float create_report__Cost_25 = MR_unbox_float((MR_hl_field(MR_mktag(0), create_report__MaybeCost_21, (MR_Integer) 0)));
                    MR_Word create_report__Uses0_26;
                    MR_Word create_report__MaybeUses_28;
                    MR_Word create_report__Var_38;
                    MR_Integer create_report__Var_27;
                    MR_Box create_report__conv2_Var_27;

                    {
                      create_report__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), create_report__Var_38, 0) = ((MR_Box) (&create_report_scalar_common_7[0]));
                      MR_hl_field(MR_mktag(0), create_report__Var_38, 1) = ((MR_Box) (create_report__create_call_site_dynamic_var_use_report_3_p_0_1));
                      MR_hl_field(MR_mktag(0), create_report__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                      MR_hl_field(MR_mktag(0), create_report__Var_38, 3) = ((MR_Box) (create_report__Deep_4));
                      MR_hl_field(MR_mktag(0), create_report__Var_38, 4) = ((MR_Box) (create_report__CSDPtr_5));
                      MR_hl_field(MR_mktag(0), create_report__Var_38, 5) = ((MR_Box) (create_report__RecursionType_20));
                      MR_hl_field(MR_mktag(0), create_report__Var_38, 6) = MR_box_float(create_report__Cost_25);
                      MR_hl_field(MR_mktag(0), create_report__Var_38, 7) = ((MR_Box) (create_report__VarNameTable_15));
                    }
                    {
                      mercury__list__map_foldl_5_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0, (MR_Word) &create_report_scalar_common_2[5], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, create_report__Var_38, create_report__HeadVars_14, &create_report__Uses0_26, ((MR_Box) ((MR_Integer) 0)), &create_report__conv2_Var_27);
                    }
                    create_report__Var_27 = ((MR_Integer) create_report__conv2_Var_27);
                    {
                      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(create_report__Uses0_26, &create_report__MaybeUses_28);
                    }
                    if (((MR_tag((MR_Word) create_report__MaybeUses_28)) == (MR_mktag((MR_Integer) 1))))
                      *create_report__MaybeVarUseInfo_6 = (MR_Word) create_report__MaybeUses_28;
                    else
                      {
                        MR_Word create_report__Uses_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__MaybeUses_28, (MR_Integer) 0)));
                        MR_Word create_report__VarUseInfo_30;

                        {
                          create_report__VarUseInfo_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                          MR_hl_field(MR_mktag(0), create_report__VarUseInfo_30, 0) = MR_box_float(create_report__Cost_25);
                          MR_hl_field(MR_mktag(0), create_report__VarUseInfo_30, 1) = ((MR_Box) (create_report__Uses_29));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *create_report__MaybeVarUseInfo_6 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__VarUseInfo_30));
                        }
                      }
                  }
              }
          }
      }
    else
      {
        MR_Integer create_report__CSDNum_32 = (MR_Integer) create_report__CSDPtr_5;
        MR_String create_report__Var_40;
        MR_String create_report__Var_74;

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &create_report_scalar_common_3[0], create_report__CSDNum_32, &create_report__Var_74);
        }
        {
          create_report__Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid call site dynamic ", create_report__Var_74);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *create_report__MaybeVarUseInfo_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Var_40));
        }
      }
  }
}

static void MR_CALL 
create_report__create_dynamic_procrep_coverage_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_HeadVar__4_4;

    {
      analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_HeadVar__4_4);
    }
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_HeadVar__4_4));
  }
}

void MR_CALL 
create_report__create_dynamic_procrep_coverage_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__PDPtr_5,
  MR_Word * create_report__MaybeReport_6)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = profile__valid_proc_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__PDPtr_5);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__PD_7;
        MR_Word create_report__PSPtr_8;
        MR_Word create_report__MaybeCoveragePoints_9;
        MR_Word create_report__Slots_10;
        MR_Word create_report__CallSitesMap_11;
        MR_Word create_report__Own_12;
        MR_Word create_report__Var_14;
        MR_Word create_report__Var_15;
        MR_ArrayPtr create_report__Var_21;
        MR_Box create_report__conv1_CallSitesMap_11;

        {
          profile__deep_lookup_proc_dynamics_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__PD_7);
        }
        create_report__PSPtr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 0)));
        create_report__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 1)));
        create_report__MaybeCoveragePoints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PD_7, (MR_Integer) 2)));
        {
          analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__Slots_10);
        }
        {
          create_report__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_14, 0) = ((MR_Box) (&create_report_scalar_common_4[3]));
          MR_hl_field(MR_mktag(0), create_report__Var_14, 1) = ((MR_Box) (create_report__create_dynamic_procrep_coverage_report_3_p_0_1));
          MR_hl_field(MR_mktag(0), create_report__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), create_report__Var_14, 3) = ((MR_Box) (create_report__Deep_4));
        }
        {
          create_report__Var_15 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &create_report_scalar_common_1[2]);
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &create_report_scalar_common_2[3], (MR_Word) &create_report_scalar_common_2[4], create_report__Var_14, create_report__Slots_10, ((MR_Box) (create_report__Var_15)), &create_report__conv1_CallSitesMap_11);
        }
        create_report__CallSitesMap_11 = ((MR_Word) create_report__conv1_CallSitesMap_11);
        {
          profile__deep_lookup_pd_own_3_p_0(create_report__Deep_4, create_report__PDPtr_5, &create_report__Own_12);
        }
        {
          create_report__maybe_create_procrep_coverage_report_6_p_0((MR_Word) &analysis_utils__analysis_utils__type_ctor_info_callee_0, create_report__Deep_4, create_report__PSPtr_8, create_report__Own_12, create_report__MaybeCoveragePoints_9, create_report__CallSitesMap_11, create_report__MaybeReport_6);
        }
      }
    else
      {
        MR_Integer create_report__PDId_13 = (MR_Integer) create_report__PDPtr_5;
        MR_String create_report__Var_16;
        MR_String create_report__Var_33;

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &create_report_scalar_common_3[0], create_report__PDId_13, &create_report__Var_33);
        }
        {
          create_report__Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "Proc dynamic pointer is invalid ", create_report__Var_33);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *create_report__MaybeReport_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Var_16));
        }
      }
  }
}

static void MR_CALL 
create_report__create_static_procrep_coverage_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_HeadVar__4_4;

    {
      analysis_utils__build_static_call_site_cost_and_callee_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_HeadVar__4_4);
    }
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_HeadVar__4_4));
  }
}

void MR_CALL 
create_report__create_static_procrep_coverage_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__PSPtr_5,
  MR_Word * create_report__MaybeReport_6)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_4, create_report__PSPtr_5);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__StaticCoverage_7;
        MR_Word create_report__MaybeCoveragePoints_8;
        MR_Word create_report__PS_9;
        MR_ArrayPtr create_report__CallSitesArray_10;
        MR_Word create_report__CallSitesMap_11;
        MR_Word create_report__Own_12;
        MR_Word create_report__Var_14;
        MR_Word create_report__Var_15;
        MR_Word create_report__Var_21;
        MR_String create_report__Var_22;
        MR_String create_report__Var_23;
        MR_String create_report__Var_24;
        MR_String create_report__Var_25;
        MR_String create_report__Var_26;
        MR_Integer create_report__Var_27;
        MR_Word create_report__Var_28;
        MR_ArrayPtr create_report__Var_29;
        MR_Word create_report__Var_30;
        MR_Word create_report__Var_31;
        MR_Box create_report__conv1_CallSitesMap_11;

        {
          profile__deep_lookup_ps_coverage_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__StaticCoverage_7);
        }
        {
          create_report__MaybeCoveragePoints_8 = measurements__static_coverage_maybe_get_coverage_points_1_f_0(create_report__StaticCoverage_7);
        }
        {
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__PS_9);
        }
        create_report__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 0)));
        create_report__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 1)));
        create_report__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 2)));
        create_report__Var_24 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 3)));
        create_report__Var_25 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 4)));
        create_report__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 5)));
        create_report__Var_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 6)));
        create_report__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 7)));
        create_report__CallSitesArray_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 8)));
        create_report__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 9)));
        create_report__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 10)));
        create_report__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_9, (MR_Integer) 11)));
        {
          create_report__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_14, 0) = ((MR_Box) (&create_report_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), create_report__Var_14, 1) = ((MR_Box) (create_report__create_static_procrep_coverage_report_3_p_0_1));
          MR_hl_field(MR_mktag(0), create_report__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), create_report__Var_14, 3) = ((MR_Box) (create_report__Deep_4));
        }
        {
          create_report__Var_15 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &create_report_scalar_common_1[1]);
        }
        {
          mercury__array__foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_Word) &create_report_scalar_common_2[2], create_report__Var_14, (MR_ArrayPtr) create_report__CallSitesArray_10, ((MR_Box) (create_report__Var_15)), &create_report__conv1_CallSitesMap_11);
        }
        create_report__CallSitesMap_11 = ((MR_Word) create_report__conv1_CallSitesMap_11);
        {
          profile__deep_lookup_ps_own_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Own_12);
        }
        {
          create_report__maybe_create_procrep_coverage_report_6_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, create_report__Deep_4, create_report__PSPtr_5, create_report__Own_12, create_report__MaybeCoveragePoints_8, create_report__CallSitesMap_11, create_report__MaybeReport_6);
        }
      }
    else
      {
        MR_Integer create_report__PSId_13 = (MR_Integer) create_report__PSPtr_5;
        MR_String create_report__Var_16;
        MR_String create_report__Var_40;

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &create_report_scalar_common_3[0], create_report__PSId_13, &create_report__Var_40);
        }
        {
          create_report__Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "Proc static pointer is invalid ", create_report__Var_40);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *create_report__MaybeReport_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Var_16));
        }
      }
  }
}

static MR_Box MR_CALL 
create_report__create_proc_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_Box create_report__wrapper_arg_2;
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_CallSitePerf_6;

    {
      create_report__conv0_CallSitePerf_6 = create_report__create_call_site_summary_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
    create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv0_CallSitePerf_6));
    return create_report__wrapper_arg_2;
  }
}

void MR_CALL 
create_report__create_proc_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__PSPtr_5,
  MR_Word * create_report__MaybeProcReport_6)
{
  {
    MR_bool create_report__succeeded;

    {
      create_report__succeeded = profile__valid_proc_static_ptr_2_p_0(create_report__Deep_4, create_report__PSPtr_5);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__TypeCtorInfo_42_42;
        MR_Word create_report__TypeCtorInfo_46_46;
        MR_Word create_report__ProcDesc_7;
        MR_Word create_report__Own_8;
        MR_Word create_report__Desc_9;
        MR_Word create_report__ProcSummaryRowData_10;
        MR_Word create_report__PS_11;
        MR_ArrayPtr create_report__CallSitesArray_12;
        MR_Word create_report__CallSites_13;
        MR_Word create_report__ProcCallSiteSummaryRowDatas_14;
        MR_Word create_report__CallerCSDPtrs0_15;
        MR_Word create_report__SeenProcs_16;
        MR_Integer create_report__NumDynamic_17;
        MR_Word create_report__CallersOwn_18;
        MR_Word create_report__CallersInherit_19;
        MR_Integer create_report__NumStatic_20;
        MR_Word create_report__CallersSummaryRowData_21;
        MR_Word create_report__ProcReport_22;
        MR_Word create_report__Var_23;
        MR_Word create_report__Var_24;
        MR_Word create_report__Var_26;
        MR_Word create_report__Var_27;
        MR_Word create_report__Var_28;
        MR_Word create_report__Var_53;
        MR_Word create_report__Var_59;
        MR_Word create_report__Var_30;
        MR_String create_report__Var_31;
        MR_String create_report__Var_32;
        MR_String create_report__Var_33;
        MR_String create_report__Var_34;
        MR_String create_report__Var_35;
        MR_Integer create_report__Var_36;
        MR_Word create_report__Var_37;
        MR_ArrayPtr create_report__Var_38;
        MR_Word create_report__Var_39;
        MR_Word create_report__Var_40;

        {
          create_report__ProcDesc_7 = create_report__describe_proc_2_f_0(create_report__Deep_4, create_report__PSPtr_5);
        }
        {
          profile__deep_lookup_ps_own_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Own_8);
        }
        {
          profile__deep_lookup_ps_desc_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__Desc_9);
        }
        {
          create_report__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), create_report__Var_53, 0) = ((MR_Box) (create_report__Desc_9));
        }
        {
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__ProcDesc_7)), create_report__Own_8, create_report__Var_53, &create_report__ProcSummaryRowData_10);
        }
        {
          profile__deep_lookup_proc_statics_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__PS_11);
        }
        create_report__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 0)));
        create_report__Var_31 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 1)));
        create_report__Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 2)));
        create_report__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 3)));
        create_report__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 4)));
        create_report__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 5)));
        create_report__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 6)));
        create_report__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 7)));
        create_report__CallSitesArray_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 8)));
        create_report__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 9)));
        create_report__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 10)));
        create_report__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__PS_11, (MR_Integer) 11)));
        create_report__TypeCtorInfo_42_42 = (MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0;
        {
          mercury__array__to_list_2_p_0(create_report__TypeCtorInfo_42_42, (MR_ArrayPtr) create_report__CallSitesArray_12, &create_report__CallSites_13);
        }
        {
          create_report__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_23, 0) = ((MR_Box) (&create_report_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), create_report__Var_23, 1) = ((MR_Box) (create_report__create_proc_report_3_p_0_1));
          MR_hl_field(MR_mktag(0), create_report__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), create_report__Var_23, 3) = ((MR_Box) (create_report__Deep_4));
        }
        {
          create_report__ProcCallSiteSummaryRowDatas_14 = mercury__list__map_2_f_0(create_report__TypeCtorInfo_42_42, (MR_Word) &report__report__type_ctor_info_call_site_perf_0, create_report__Var_23, create_report__CallSites_13);
        }
        {
          profile__deep_lookup_proc_callers_3_p_0(create_report__Deep_4, create_report__PSPtr_5, &create_report__CallerCSDPtrs0_15);
        }
        create_report__TypeCtorInfo_46_46 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
        {
          create_report__Var_24 = mercury__set__init_0_f_0(create_report__TypeCtorInfo_46_46);
        }
        {
          create_report__Var_26 = measurements__zero_own_prof_info_0_f_0();
        }
        {
          create_report__Var_27 = measurements__zero_inherit_prof_info_0_f_0();
        }
        {
          create_report__summarize_callers_11_p_0(create_report__Deep_4, create_report__CallerCSDPtrs0_15, create_report__PSPtr_5, create_report__Var_24, &create_report__SeenProcs_16, (MR_Integer) 0, &create_report__NumDynamic_17, create_report__Var_26, &create_report__CallersOwn_18, create_report__Var_27, &create_report__CallersInherit_19);
        }
        {
          create_report__NumStatic_20 = mercury__set__count_1_f_0(create_report__TypeCtorInfo_46_46, create_report__SeenProcs_16);
        }
        {
          create_report__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_28, 0) = ((MR_Box) (create_report__NumStatic_20));
          MR_hl_field(MR_mktag(0), create_report__Var_28, 1) = ((MR_Box) (create_report__NumDynamic_17));
        }
        {
          create_report__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), create_report__Var_59, 0) = ((MR_Box) (create_report__CallersInherit_19));
        }
        {
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(create_report__Deep_4, ((MR_Box) (create_report__Var_28)), create_report__CallersOwn_18, create_report__Var_59, &create_report__CallersSummaryRowData_21);
        }
        {
          create_report__ProcReport_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__ProcReport_22, 0) = ((MR_Box) (create_report__CallersSummaryRowData_21));
          MR_hl_field(MR_mktag(0), create_report__ProcReport_22, 1) = ((MR_Box) (create_report__ProcSummaryRowData_10));
          MR_hl_field(MR_mktag(0), create_report__ProcReport_22, 2) = ((MR_Box) (create_report__ProcCallSiteSummaryRowDatas_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *create_report__MaybeProcReport_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__ProcReport_22));
        }
      }
    else
      {
        *create_report__MaybeProcReport_6 = (MR_Word) MR_mkword(MR_mktag(1), &create_report_scalar_common_3[1]);
      }
  }
}

static void MR_CALL 
create_report__create_clique_report_3_p_0_3(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box * create_report__wrapper_arg_2)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv2_CliqueProcReport_9;

    {
      create_report__create_clique_proc_report_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 4))), ((MR_Word) create_report__wrapper_arg_1), &create_report__conv2_CliqueProcReport_9);
    }
    *create_report__wrapper_arg_2 = ((MR_Box) (create_report__conv2_CliqueProcReport_9));
  }
}

static MR_bool MR_CALL 
create_report__create_clique_report_3_p_0_2(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1)
{
  {
    MR_bool create_report__succeeded;
    MR_Box create_report__closure = create_report__closure_arg;

    {
      create_report__succeeded = create_report__proc_group_contains_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1));
    }
    return create_report__succeeded;
  }
}

static void MR_CALL 
create_report__create_clique_report_3_p_0_1(
  MR_Box create_report__closure_arg,
  MR_Box create_report__wrapper_arg_1,
  MR_Box create_report__wrapper_arg_2,
  MR_Box * create_report__wrapper_arg_3)
{
  {
    MR_Box create_report__closure = create_report__closure_arg;
    MR_Word create_report__conv0_STATE_VARIABLE_PStoPDsMap_13;

    {
      create_report__group_proc_dynamics_by_proc_static_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), create_report__closure, (MR_Integer) 3))), ((MR_Word) create_report__wrapper_arg_1), ((MR_Word) create_report__wrapper_arg_2), &create_report__conv0_STATE_VARIABLE_PStoPDsMap_13);
    }
    *create_report__wrapper_arg_3 = ((MR_Box) (create_report__conv0_STATE_VARIABLE_PStoPDsMap_13));
  }
}

void MR_CALL 
create_report__create_clique_report_3_p_0(
  MR_Word create_report__Deep_4,
  MR_Word create_report__CliquePtr_5,
  MR_Word * create_report__MaybeCliqueReport_6)
{
  {
    MR_bool create_report__succeeded;
    MR_Word create_report__TypeCtorInfo_28_28;
    MR_Word create_report__TypeInfo_29_29;
    MR_Word create_report__AncestorRowDatas_7;
    MR_Word create_report__PDPtrs_8;
    MR_Word create_report__PStoPDsMap_9;
    MR_Word create_report__PStoPDsList0_10;
    MR_Word create_report__EntryCSDPtr_11;
    MR_Word create_report__PStoPDsList_16;
    MR_Word create_report__CliqueProcs_17;
    MR_Word create_report__CliqueReport_18;
    MR_Word create_report__Var_19;
    MR_Word create_report__Var_20;
    MR_Word create_report__Var_22;
    MR_Box create_report__conv1_PStoPDsMap_9;

    {
      create_report__AncestorRowDatas_7 = create_report__find_clique_ancestors_2_f_0(create_report__Deep_4, create_report__CliquePtr_5);
    }
    {
      profile__deep_lookup_clique_members_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__PDPtrs_8);
    }
    {
      create_report__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__Var_19, 0) = ((MR_Box) (&create_report_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), create_report__Var_19, 1) = ((MR_Box) (create_report__create_clique_report_3_p_0_1));
      MR_hl_field(MR_mktag(0), create_report__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), create_report__Var_19, 3) = ((MR_Box) (create_report__Deep_4));
    }
    create_report__TypeCtorInfo_28_28 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
    create_report__TypeInfo_29_29 = (MR_Word) &create_report_scalar_common_1[0];
    {
      create_report__Var_20 = mercury__map__init_0_f_0(create_report__TypeCtorInfo_28_28, create_report__TypeInfo_29_29);
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &create_report_scalar_common_2[0], create_report__Var_19, create_report__PDPtrs_8, ((MR_Box) (create_report__Var_20)), &create_report__conv1_PStoPDsMap_9);
    }
    create_report__PStoPDsMap_9 = ((MR_Word) create_report__conv1_PStoPDsMap_9);
    {
      mercury__map__to_assoc_list_2_p_0(create_report__TypeCtorInfo_28_28, create_report__TypeInfo_29_29, create_report__PStoPDsMap_9, &create_report__PStoPDsList0_10);
    }
    {
      profile__deep_lookup_clique_parents_3_p_0(create_report__Deep_4, create_report__CliquePtr_5, &create_report__EntryCSDPtr_11);
    }
    {
      create_report__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(create_report__Deep_4, create_report__EntryCSDPtr_11);
    }
    if (create_report__succeeded)
      {
        MR_Word create_report__TypeInfo_33_33;
        MR_Word create_report__EntryCSD_12;
        MR_Word create_report__EntryPDPtr_13;
        MR_Word create_report__EntryGroup_14;
        MR_Word create_report__RestGroup_15;
        MR_Word create_report__Var_21;
        MR_Word create_report__Var_23;
        MR_Word create_report__Var_24;

        {
          profile__deep_lookup_call_site_dynamics_3_p_0(create_report__Deep_4, create_report__EntryCSDPtr_11, &create_report__EntryCSD_12);
        }
        create_report__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_12, (MR_Integer) 0)));
        create_report__EntryPDPtr_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_12, (MR_Integer) 1)));
        create_report__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__EntryCSD_12, (MR_Integer) 2)));
        {
          create_report__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), create_report__Var_21, 0) = ((MR_Box) (&create_report_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), create_report__Var_21, 1) = ((MR_Box) (create_report__create_clique_report_3_p_0_2));
          MR_hl_field(MR_mktag(0), create_report__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), create_report__Var_21, 3) = ((MR_Box) (create_report__EntryPDPtr_13));
        }
        create_report__TypeInfo_33_33 = (MR_Word) &create_report_scalar_common_2[1];
        {
          mercury__list__filter_4_p_0(create_report__TypeInfo_33_33, create_report__Var_21, create_report__PStoPDsList0_10, &create_report__EntryGroup_14, &create_report__RestGroup_15);
        }
        {
          create_report__PStoPDsList_16 = mercury__list__f_43_43_2_f_0(create_report__TypeInfo_33_33, create_report__EntryGroup_14, create_report__RestGroup_15);
        }
      }
    else
      create_report__PStoPDsList_16 = create_report__PStoPDsList0_10;
    {
      create_report__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__Var_22, 0) = ((MR_Box) (&create_report_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), create_report__Var_22, 1) = ((MR_Box) (create_report__create_clique_report_3_p_0_3));
      MR_hl_field(MR_mktag(0), create_report__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), create_report__Var_22, 3) = ((MR_Box) (create_report__Deep_4));
      MR_hl_field(MR_mktag(0), create_report__Var_22, 4) = ((MR_Box) (create_report__CliquePtr_5));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &create_report_scalar_common_2[1], (MR_Word) &report__report__type_ctor_info_clique_proc_report_0, create_report__Var_22, create_report__PStoPDsList_16, &create_report__CliqueProcs_17);
    }
    {
      create_report__CliqueReport_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), create_report__CliqueReport_18, 0) = ((MR_Box) (create_report__CliquePtr_5));
      MR_hl_field(MR_mktag(0), create_report__CliqueReport_18, 1) = ((MR_Box) (create_report__AncestorRowDatas_7));
      MR_hl_field(MR_mktag(0), create_report__CliqueReport_18, 2) = ((MR_Box) (create_report__CliqueProcs_17));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *create_report__MaybeCliqueReport_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__CliqueReport_18));
    }
  }
}

void MR_CALL 
create_report__create_report_3_p_0(
  MR_Word create_report__Cmd_4,
  MR_Word create_report__Deep_5,
  MR_Word * create_report__Report_6)
{
  {
    MR_bool create_report__succeeded;

    switch (MR_tag((MR_Word) create_report__Cmd_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(create_report__Cmd_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String create_report__Msg_7;
              MR_Word create_report__MessageReport_8;
              MR_String create_report__Var_65 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 3)));
              MR_String create_report__Var_179;
              MR_Word create_report__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 0)));
              MR_String create_report__Var_83 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 1)));
              MR_String create_report__Var_84 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 2)));
              MR_Word create_report__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 4)));
              MR_ArrayPtr create_report__Var_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 5)));
              MR_ArrayPtr create_report__Var_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 6)));
              MR_ArrayPtr create_report__Var_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 7)));
              MR_ArrayPtr create_report__Var_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 8)));
              MR_ArrayPtr create_report__Var_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 9)));
              MR_ArrayPtr create_report__Var_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 10)));
              MR_ArrayPtr create_report__Var_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 11)));
              MR_ArrayPtr create_report__Var_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 12)));
              MR_ArrayPtr create_report__Var_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 13)));
              MR_ArrayPtr create_report__Var_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 14)));
              MR_ArrayPtr create_report__Var_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 15)));
              MR_ArrayPtr create_report__Var_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 16)));
              MR_ArrayPtr create_report__Var_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 17)));
              MR_ArrayPtr create_report__Var_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 18)));
              MR_ArrayPtr create_report__Var_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 19)));
              MR_ArrayPtr create_report__Var_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 20)));
              MR_ArrayPtr create_report__Var_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 21)));
              MR_ArrayPtr create_report__Var_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 22)));
              MR_ArrayPtr create_report__Var_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 23)));
              MR_ArrayPtr create_report__Var_105 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 24)));
              MR_Word create_report__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 25)));
              MR_Word create_report__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 26)));
              MR_Word create_report__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 27)));
              MR_Word create_report__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 28)));

              {
                create_report__Var_179 = mercury__string__f_43_43_2_f_0(create_report__Var_65, (MR_String) ".");
              }
              {
                create_report__Msg_7 = mercury__string__f_43_43_2_f_0((MR_String) "Shutting down deep profile server for ", create_report__Var_179);
              }
              create_report__MessageReport_8 = (MR_Word) create_report__Msg_7;
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__MessageReport_8));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_report\'/3", (MR_String) "restart command");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String create_report__ProgramName_10;
              MR_Integer create_report__NumCSD_11;
              MR_Integer create_report__NumCSS_12;
              MR_Integer create_report__NumPD_13;
              MR_Integer create_report__NumPS_14;
              MR_Integer create_report__QuantaPerSec_15;
              MR_Integer create_report__InstrumentationQuanta_16;
              MR_Integer create_report__UserQuanta_17;
              MR_Integer create_report__NumCallseqs_18;
              MR_Integer create_report__NumCliques_20;
              MR_Word create_report__MenuReport_21;
              MR_Word create_report__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 0)));
              MR_Word create_report__Var_55;
              MR_ArrayPtr create_report__Var_119 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 10)));
              MR_String create_report__Var_110 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 1)));
              MR_String create_report__Var_111 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 2)));
              MR_String create_report__Var_112 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 3)));
              MR_Word create_report__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 4)));
              MR_ArrayPtr create_report__Var_114 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 5)));
              MR_ArrayPtr create_report__Var_115 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 6)));
              MR_ArrayPtr create_report__Var_116 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 7)));
              MR_ArrayPtr create_report__Var_117 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 8)));
              MR_ArrayPtr create_report__Var_118 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 9)));
              MR_ArrayPtr create_report__Var_120 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 11)));
              MR_ArrayPtr create_report__Var_121 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 12)));
              MR_ArrayPtr create_report__Var_122 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 13)));
              MR_ArrayPtr create_report__Var_123 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 14)));
              MR_ArrayPtr create_report__Var_124 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 15)));
              MR_ArrayPtr create_report__Var_125 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 16)));
              MR_ArrayPtr create_report__Var_126 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 17)));
              MR_ArrayPtr create_report__Var_127 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 18)));
              MR_ArrayPtr create_report__Var_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 19)));
              MR_ArrayPtr create_report__Var_129 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 20)));
              MR_ArrayPtr create_report__Var_130 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 21)));
              MR_ArrayPtr create_report__Var_131 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 22)));
              MR_ArrayPtr create_report__Var_132 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 23)));
              MR_ArrayPtr create_report__Var_133 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 24)));
              MR_Word create_report__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 25)));
              MR_Word create_report__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 26)));
              MR_Word create_report__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 27)));
              MR_Word create_report__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Deep_5, (MR_Integer) 28)));
              MR_Word create_report__Var_19;

              create_report__ProgramName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), create_report__Var_53, (MR_Integer) 0)));
              create_report__NumCSD_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Var_53, (MR_Integer) 1)));
              create_report__NumCSS_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Var_53, (MR_Integer) 2)));
              create_report__NumPD_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Var_53, (MR_Integer) 3)));
              create_report__NumPS_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Var_53, (MR_Integer) 4)));
              create_report__QuantaPerSec_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Var_53, (MR_Integer) 5)));
              create_report__InstrumentationQuanta_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Var_53, (MR_Integer) 6)));
              create_report__UserQuanta_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Var_53, (MR_Integer) 7)));
              create_report__NumCallseqs_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), create_report__Var_53, (MR_Integer) 8)));
              create_report__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), create_report__Var_53, (MR_Integer) 9)));
              {
                create_report__NumCliques_20 = mercury__array__max_1_f_0((MR_Word) &create_report_scalar_common_1[0], (MR_ArrayPtr) create_report__Var_119);
              }
              {
                create_report__MenuReport_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 0) = ((MR_Box) (create_report__ProgramName_10));
                MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 1) = ((MR_Box) (create_report__QuantaPerSec_15));
                MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 2) = ((MR_Box) (create_report__UserQuanta_17));
                MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 3) = ((MR_Box) (create_report__InstrumentationQuanta_16));
                MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 4) = ((MR_Box) (create_report__NumCallseqs_18));
                MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 5) = ((MR_Box) (create_report__NumCSD_11));
                MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 6) = ((MR_Box) (create_report__NumCSS_12));
                MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 7) = ((MR_Box) (create_report__NumPD_13));
                MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 8) = ((MR_Box) (create_report__NumPS_14));
                MR_hl_field(MR_mktag(0), create_report__MenuReport_21, 9) = ((MR_Box) (create_report__NumCliques_20));
              }
              {
                create_report__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), create_report__Var_55, 0) = ((MR_Box) (create_report__MenuReport_21));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (create_report__Var_55));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word create_report__MaybeRecTypesFreqReport_37;

              {
                recursion_patterns__create_recursion_types_frequency_report_2_p_0(create_report__Deep_5, &create_report__MaybeRecTypesFreqReport_37);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeRecTypesFreqReport_37));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word create_report__MaybeProgramModulesReport_38;

              {
                create_report__create_program_modules_report_2_p_0(create_report__Deep_5, &create_report__MaybeProgramModulesReport_38);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProgramModulesReport_38));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer create_report__Timeout_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), create_report__Cmd_4, (MR_Integer) 0)));
          MR_String create_report__Msg_67;
          MR_Word create_report__MessageReport_68;
          MR_String create_report__Var_169;
          MR_String create_report__Var_176;

          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &create_report_scalar_common_3[0], create_report__Timeout_9, &create_report__Var_169);
          }
          {
            create_report__Var_176 = mercury__string__f_43_43_2_f_0(create_report__Var_169, (MR_String) " minutes.");
          }
          {
            create_report__Msg_67 = mercury__string__f_43_43_2_f_0((MR_String) "Timeout set to ", create_report__Var_176);
          }
          create_report__MessageReport_68 = (MR_Word) create_report__Msg_67;
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *create_report__Report_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (create_report__MessageReport_68));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word create_report__MaybePercent_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), create_report__Cmd_4, (MR_Integer) 0)));
          MR_Word create_report__MaybeCliqueReport_23;

          {
            create_report__create_root_report_3_p_0(create_report__Deep_5, create_report__MaybePercent_22, &create_report__MaybeCliqueReport_23);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *create_report__Report_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (create_report__MaybeCliqueReport_23));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word create_report__CliquePtr_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
              MR_Word create_report__MaybeCliqueReport_69;

              {
                create_report__create_clique_report_3_p_0(create_report__Deep_5, create_report__CliquePtr_24, &create_report__MaybeCliqueReport_69);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (create_report__MaybeCliqueReport_69));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word create_report__MaybeCliqueRecursionReport_25;
              MR_Word create_report__CliquePtr_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

              {
                recursion_patterns__create_clique_recursion_costs_report_3_p_0(create_report__Deep_5, create_report__CliquePtr_70, &create_report__MaybeCliqueRecursionReport_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeCliqueRecursionReport_25));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word create_report__PSPtr_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
              MR_Word create_report__MaybeProcReport_27;

              {
                create_report__create_proc_report_3_p_0(create_report__Deep_5, create_report__PSPtr_26, &create_report__MaybeProcReport_27);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProcReport_27));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word create_report__CallerGroups_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 2)));
              MR_Integer create_report__BunchNum_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 3)));
              MR_Integer create_report__CallersPerBunch_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 4)));
              MR_Word create_report__Contour_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 5)));
              MR_Word create_report__MaybeProcCallersReport_32;
              MR_Word create_report__PSPtr_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

              {
                create_report__create_proc_callers_report_7_p_0(create_report__Deep_5, create_report__PSPtr_71, create_report__CallerGroups_28, create_report__BunchNum_29, create_report__CallersPerBunch_30, create_report__Contour_31, &create_report__MaybeProcCallersReport_32);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProcCallersReport_32));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word create_report__PSPtr_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
              MR_Word create_report__MaybeProcrepCoverageReport_167;

              {
                create_report__create_static_procrep_coverage_report_3_p_0(create_report__Deep_5, create_report__PSPtr_72, &create_report__MaybeProcrepCoverageReport_167);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProcrepCoverageReport_167));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word create_report__MaybeProcrepCoverageReport_33;
              MR_Word create_report__PDPtr_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

              {
                create_report__create_dynamic_procrep_coverage_report_3_p_0(create_report__Deep_5, create_report__PDPtr_34, &create_report__MaybeProcrepCoverageReport_33);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProcrepCoverageReport_33));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word create_report__CSDPtr_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
              MR_Word create_report__MaybeVarUse_36;

              {
                create_report__create_call_site_dynamic_var_use_report_3_p_0(create_report__Deep_5, create_report__CSDPtr_35, &create_report__MaybeVarUse_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeVarUse_36));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String create_report__ModuleName_39 = ((MR_String) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
              MR_Word create_report__MaybeModuleReport_40;

              {
                create_report__create_module_report_3_p_0(create_report__Deep_5, create_report__ModuleName_39, &create_report__MaybeModuleReport_40);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeModuleReport_40));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word create_report__MaybeModuleGetterSettersReport_41;
              MR_String create_report__ModuleName_75 = ((MR_String) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

              {
                create_report__create_module_getter_setter_report_3_p_0(create_report__Deep_5, create_report__ModuleName_75, &create_report__MaybeModuleGetterSettersReport_41);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeModuleGetterSettersReport_41));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word create_report__MaybeModuleRepReport_42;
              MR_String create_report__ModuleName_76 = ((MR_String) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

              {
                create_report__create_module_rep_report_3_p_0(create_report__Deep_5, create_report__ModuleName_76, &create_report__MaybeModuleRepReport_42);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeModuleRepReport_42));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word create_report__Limit_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
              MR_Word create_report__CostKind_44 = ((((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 2)))) & (MR_Integer) 7);
              MR_Word create_report__InclDesc_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word create_report__Scope_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 2)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word create_report__MaybeTopProcsReport_47;

              {
                create_report__create_top_procs_report_6_p_0(create_report__Deep_5, create_report__Limit_43, create_report__CostKind_44, create_report__InclDesc_45, create_report__Scope_46, &create_report__MaybeTopProcsReport_47);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeTopProcsReport_47));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word create_report__MaybeCliqueDump_48;
              MR_Word create_report__CliquePtr_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

              {
                create_report__create_clique_dump_report_3_p_0(create_report__Deep_5, create_report__CliquePtr_77, &create_report__MaybeCliqueDump_48);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeCliqueDump_48));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word create_report__MaybeProcStaticDump_49;
              MR_Word create_report__PSPtr_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

              {
                create_report__create_proc_static_dump_report_3_p_0(create_report__Deep_5, create_report__PSPtr_78, &create_report__MaybeProcStaticDump_49);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProcStaticDump_49));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word create_report__MaybeProcDynamicDump_50;
              MR_Word create_report__PDPtr_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));

              {
                create_report__create_proc_dynamic_dump_report_3_p_0(create_report__Deep_5, create_report__PDPtr_79, &create_report__MaybeProcDynamicDump_50);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeProcDynamicDump_50));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word create_report__CSSPtr_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
              MR_Word create_report__MaybeCallSiteStaticDump_52;

              {
                create_report__create_call_site_static_dump_report_3_p_0(create_report__Deep_5, create_report__CSSPtr_51, &create_report__MaybeCallSiteStaticDump_52);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeCallSiteStaticDump_52));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word create_report__CSDPtr_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), create_report__Cmd_4, (MR_Integer) 1)));
              MR_Word create_report__MaybeCallSiteStaticDump_81;

              {
                create_report__create_call_site_dynamic_dump_report_3_p_0(create_report__Deep_5, create_report__CSDPtr_80, &create_report__MaybeCallSiteStaticDump_81);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *create_report__Report_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (create_report__MaybeCallSiteStaticDump_81));
              }
            }
            break;
        }
        break;
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__create_report__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module create_report. */
