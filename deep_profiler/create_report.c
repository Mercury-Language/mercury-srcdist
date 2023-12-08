/*
** Automatically generated from `create_report.m'
** by the Mercury compiler,
** version rotd-2023-12-08
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module create_report.
// :- implementation.

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
#include "recursion_patterns.mih"
#include "report.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0;

static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__maybe__pti_maybe_error_2__plain_report__type_ctor_info_var_use_and_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__set_ordlist__pti_set_ordlist_1__plain_exclude__type_ctor_info_exclude_spec_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_call_site_desc_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

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
create_report__IntroducedFrom__pred__create_call_site_summary__591__1_2_p_0(
  MR_Word CalleePSPtr_13,
  MR_Word CalleePSPtrFromCall_21);

static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__439__1_2_p_0(
  MR_Word PSPtr_17,
  MR_Word HeadVar__2_21);

static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
create_report__psi_to_perf_row_data_3_p_0(
  MR_Word Deep_4,
  MR_Integer PSI_5,
  MR_Word * RowData_6);

static MR_Word MR_CALL 
create_report__describe_clique_member_2_f_0(
  MR_Word Deep_4,
  MR_Word PDPtr_5);

static void MR_CALL 
create_report__gather_getters_setters_4_p_0(
  MR_Word Deep_5,
  MR_Word PSPtr_6,
  MR_Word STATE_VARIABLE_GSDSRawMap_0_32,
  MR_Word * STATE_VARIABLE_GSDSRawMap_33);

static MR_bool MR_CALL 
create_report__is_getter_or_setter_2_4_p_0(
  MR_Word NameChars_5,
  MR_Word * GetterSetter_6,
  MR_Word * DataStructNameChars_7,
  MR_Word * FieldNameChars_8);

static void MR_CALL 
create_report__getter_setter_raw_data_to_info_4_p_0(
  MR_Word Deep_5,
  MR_Word _FieldName_6,
  MR_Word RawData_7,
  MR_Word * Data_8);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_p_0(
  MR_Word Deep_5,
  MR_Word RawData_7,
  MR_Word * Data_8);

static void MR_CALL 
create_report__getter_setter_raw_map_to_info_map_4_p_0(
  MR_Word Deep_5,
  MR_Word _DataStructName_6,
  MR_Word RawMap_7,
  MR_Word * Map_8);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0(
  MR_Word Deep_5,
  MR_Word RawMap_7,
  MR_Word * Map_8);

static MR_Word MR_CALL 
create_report__proc_to_active_row_data_2_f_0(
  MR_Word Deep_4,
  MR_Word PSPtr_5);

static MR_Word MR_CALL 
create_report__module_pair_to_row_data_2_f_0(
  MR_Word Deep_4,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
create_report__not_mercury_runtime_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
create_report__call_site_dynamic_var_use_arg_9_p_0(
  MR_Word Deep_10,
  MR_Word CSDPtr_11,
  MR_Word RecursionType_12,
  MR_Float Cost_13,
  MR_Word VarNameTable_14,
  MR_Word HeadVar_15,
  MR_Word * MaybeUseAndName_16,
  MR_Integer STATE_VARIABLE_ArgNum_0_26,
  MR_Integer * STATE_VARIABLE_ArgNum_27);

static MR_Box MR_CALL 
create_report__create_proc_caller_cliques_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
create_report__create_proc_caller_cliques_3_f_0(
  MR_Word Deep_5,
  MR_Word CalleePSPtr_6,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
create_report__create_proc_caller_modules_3_f_0(
  MR_Word Deep_5,
  MR_Word CalleePSPtr_6,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
create_report__create_proc_caller_procedures_3_f_0(
  MR_Word Deep_5,
  MR_Word CalleePSPtr_6,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
create_report__create_proc_caller_call_sites_3_f_0(
  MR_Word Deep_5,
  MR_Word CalleePSPtr_6,
  MR_Word HeadVar__3_3);

static void MR_CALL 
create_report__accumulate_call_site_callees_7_p_0(
  MR_Word Deep_8,
  MR_Word CalleePerf_9,
  MR_Word * RowData_10,
  MR_Word STATE_VARIABLE_Own_0_17,
  MR_Word * STATE_VARIABLE_Own_18,
  MR_Word STATE_VARIABLE_Desc_0_19,
  MR_Word * STATE_VARIABLE_Desc_20);

static void MR_CALL 
create_report__accumulate_csd_prof_info_7_p_0(
  MR_Word Deep_8,
  MR_Word CallerPSPtr_9,
  MR_Word CSDPtr_10,
  MR_Word STATE_VARIABLE_Own_0_17,
  MR_Word * STATE_VARIABLE_Own_18,
  MR_Word STATE_VARIABLE_Desc_0_19,
  MR_Word * STATE_VARIABLE_Desc_20);

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
create_report__create_call_site_summary_2_f_0_7(
  MR_Box closure_arg);

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
create_report__create_call_site_summary_2_f_0(
  MR_Word Deep_4,
  MR_Word CSSPtr_5);

static void MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Word MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0(
  MR_Word Deep_5,
  MR_Word CallerPSPtr_6,
  MR_Word HeadVar__3_3);

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0(
  MR_Word Deep_4,
  MR_Word Pair_5,
  MR_Word * CliqueCallSiteReport_6);

static MR_Box MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0(
  MR_Word Deep_6,
  MR_Word CSDPtr_7,
  MR_Word * Own_8,
  MR_Word * Desc_9,
  MR_Word * CalleeCliqueRowData_10);

static void MR_CALL 
create_report__create_clique_proc_dynamic_report_7_p_0(
  MR_Word Deep_8,
  MR_Word _CliquePtr_9,
  MR_Word ProcDesc_10,
  MR_Word PDPtr_11,
  MR_Word * Own_12,
  MR_Word * Desc_13,
  MR_Word * CliquePDReport_14);

static void MR_CALL 
create_report__create_clique_proc_report_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
create_report__create_clique_proc_report_4_p_0(
  MR_Word Deep_5,
  MR_Word CliquePtr_6,
  MR_Word HeadVar__3_3,
  MR_Word * CliqueProcReport_9);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(
  MR_Word Deep_8,
  MR_Word ProcDesc_10,
  MR_Word PDPtr_11,
  MR_Word * Own_12,
  MR_Word * Desc_13,
  MR_Word * CliquePDReport_14);

static MR_bool MR_CALL 
create_report__proc_group_contains_2_p_0(
  MR_Word EntryPDPtr_3,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0(
  MR_Word Deep_5,
  MR_Word PDPtr_6,
  MR_Word STATE_VARIABLE_PStoPDsMap_0_12,
  MR_Word * STATE_VARIABLE_PStoPDsMap_13);

static void MR_CALL 
create_report__find_start_of_action_callee_4_p_0(
  MR_Integer Percent_5,
  MR_Word RowData_6,
  MR_Word STATE_VARIABLE_ActionCliquePtrs_0_13,
  MR_Word * STATE_VARIABLE_ActionCliquePtrs_14);

static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0(
  MR_Integer Percent_5,
  MR_Word CallSiteReport_6,
  MR_Word STATE_VARIABLE_ActionCliquePtrs_0_11,
  MR_Word * STATE_VARIABLE_ActionCliquePtrs_12);

static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0(
  MR_Integer Percent_5,
  MR_Word CliquePDReport_6,
  MR_Word STATE_VARIABLE_ActionCliquePtrs_0_10,
  MR_Word * STATE_VARIABLE_ActionCliquePtrs_11);

static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0(
  MR_Integer Percent_5,
  MR_Word CliqueProcReport_6,
  MR_Word STATE_VARIABLE_ActionCliquePtrs_0_11,
  MR_Word * STATE_VARIABLE_ActionCliquePtrs_12);

static void MR_CALL 
create_report__create_call_site_dynamic_dump_report_3_p_0(
  MR_Word Deep_4,
  MR_Word CSDPtr_5,
  MR_Word * MaybeCallSiteDynamicDumpInfo_6);

static void MR_CALL 
create_report__create_call_site_static_dump_report_3_p_0(
  MR_Word Deep_4,
  MR_Word CSSPtr_5,
  MR_Word * MaybeCallSiteStaticDumpInfo_6);

static void MR_CALL 
create_report__create_proc_dynamic_dump_report_3_p_0(
  MR_Word Deep_4,
  MR_Word PDPtr_5,
  MR_Word * MaybeProcDynamicDumpInfo_6);

static void MR_CALL 
create_report__create_proc_static_dump_report_3_p_0(
  MR_Word Deep_4,
  MR_Word PSPtr_5,
  MR_Word * MaybeProcStaticDumpInfo_6);

static MR_Box MR_CALL 
create_report__create_clique_dump_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
create_report__create_clique_dump_report_3_p_0(
  MR_Word Deep_4,
  MR_Word CliquePtr_5,
  MR_Word * MaybeCliqueDumpInfo_6);

static void MR_CALL 
create_report__create_module_rep_report_3_p_0(
  MR_Word Deep_4,
  MR_String ModuleName_5,
  MR_Word * MaybeModuleRepReport_6);

static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0(
  MR_Word Deep_4,
  MR_String ModuleName_5,
  MR_Word * MaybeModuleGetterSettersReport_6);

static MR_Box MR_CALL 
create_report__create_module_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
create_report__create_module_report_3_p_0(
  MR_Word Deep_4,
  MR_String ModuleName_5,
  MR_Word * MaybeModuleReport_6);

static MR_Box MR_CALL 
create_report__create_program_modules_report_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
create_report__create_program_modules_report_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
create_report__create_program_modules_report_2_p_0(
  MR_Word Deep_3,
  MR_Word * MaybeProgramModulesReport_4);

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
create_report__create_proc_callers_report_7_p_0(
  MR_Word Deep_8,
  MR_Word PSPtr_9,
  MR_Word CallerGroups_10,
  MR_Integer BunchNum_11,
  MR_Integer CallersPerBunch_12,
  MR_Word Contour_13,
  MR_Word * MaybeProcCallersReport_14);

static void MR_CALL 
create_report__create_root_report_3_p_0(
  MR_Word Deep_4,
  MR_Word MaybePercent_5,
  MR_Word * MaybeReport_6);

static void MR_CALL 
create_report__find_start_of_action_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
create_report__find_start_of_action_4_p_0(
  MR_Word Deep_5,
  MR_Integer Percent_6,
  MR_Word CurrentReport_7,
  MR_Word * SelectedReport_8);

static void MR_CALL 
create_report__create_top_procs_report_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
create_report__create_call_site_dynamic_var_use_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
create_report__create_call_site_dynamic_var_use_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
create_report__create_dynamic_procrep_coverage_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
create_report__create_dynamic_procrep_coverage_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
create_report__create_static_procrep_coverage_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
create_report__create_static_procrep_coverage_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
create_report__create_proc_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
create_report__summarize_callers_11_p_0(
  MR_Word Deep_12,
  MR_Word CallerCSDPtrs0_13,
  MR_Word CalleePSPtr_14,
  MR_Word STATE_VARIABLE_PSSeen_0_27,
  MR_Word * STATE_VARIABLE_PSSeen_28,
  MR_Integer STATE_VARIABLE_NumDynamic_0_29,
  MR_Integer * STATE_VARIABLE_NumDynamic_30,
  MR_Word STATE_VARIABLE_Own_0_31,
  MR_Word * STATE_VARIABLE_Own_32,
  MR_Word STATE_VARIABLE_Desc_0_33,
  MR_Word * STATE_VARIABLE_Desc_34);

static void MR_CALL 
create_report__create_clique_report_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
create_report__create_clique_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
create_report__create_clique_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
create_report__find_clique_ancestors_2_f_0(
  MR_Word Deep_4,
  MR_Word CliquePtr_5);

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(
  MR_Word Deep_6,
  MR_Box Subject_7,
  MR_Word Own_8,
  MR_Word MaybeDesc_9,
  MR_Word * RowData_10);

static MR_Word MR_CALL 
create_report__percent_from_ints_2_f_0(
  MR_Integer Nom_4,
  MR_Integer Denom_5);

static MR_Float MR_CALL 
create_report__int_per_call_2_f_0(
  MR_Integer Num_4,
  MR_Integer Calls_5);

static MR_Word MR_CALL 
create_report__describe_call_site_2_f_0(
  MR_Word Deep_4,
  MR_Word CSSPtr_5);

static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box create_report_scalar_common_1[13][2];

static /* final */ const MR_Box create_report_scalar_common_2[22][3];

static /* final */ const MR_Box create_report_scalar_common_3[11][1];

static /* final */ const MR_Box create_report_scalar_common_4[17][7];

static /* final */ const MR_Box create_report_scalar_common_5[5][5];

static /* final */ const MR_Box create_report_scalar_common_6[6][6];

static /* final */ const MR_Box create_report_scalar_common_7[2][8];

static /* final */ const MR_Box create_report_scalar_common_8[1][12];

static /* final */ const MR_Box create_report_scalar_common_9[1][4];

static /* final */ const MR_Box create_report_scalar_common_10[3][10];




static /* final */ const MR_Box create_report_scalar_common_1[13][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1)),
    ((MR_Box) (&analysis_utils__analysis_utils__type_ctor_info_callee_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_proc_desc_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_clique_desc_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_call_site_desc_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_module_active_0))
  },
  /* row  10 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_module_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&report__report__type_ctor_info_proc_active_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&report__report__type_ctor_info_perf_row_data_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_2[22][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&create_report_scalar_common_1[1]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&create_report_scalar_common_1[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_error_2)),
    ((MR_Box) (&report__report__type_ctor_info_var_use_and_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[6]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[6]))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&create_report_scalar_common_1[6]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report_scalar_common_1[6]))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0))
  },
  /* row  12 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_module_data_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&report__report__type_ctor_info_gs_field_info_2)),
    ((MR_Box) (&create_report__create_report__type_ctor_info_gs_field_raw_data_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_field_name_0)),
    ((MR_Box) (&create_report_scalar_common_2[13]))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_data_struct_name_0)),
    ((MR_Box) (&create_report_scalar_common_2[14]))
  },
  /* row  16 */
  {
    ((MR_Box) (&report__report__type_ctor_info_gs_field_info_2)),
    ((MR_Box) (&create_report_scalar_common_1[3])),
    ((MR_Box) (&create_report_scalar_common_1[12]))
  },
  /* row  17 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&report__report__type_ctor_info_field_name_0)),
    ((MR_Box) (&create_report_scalar_common_2[16]))
  },
  /* row  18 */
  {
    ((MR_Box) (&create_report_scalar_common_7[0])),
    ((MR_Box) (create_report__create_static_procrep_coverage_report_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&create_report_scalar_common_7[0])),
    ((MR_Box) (create_report__create_dynamic_procrep_coverage_report_3_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&create_report_scalar_common_5[1])),
    ((MR_Box) (create_report__create_proc_callers_report_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&create_report_scalar_common_9[0])),
    ((MR_Box) (create_report__create_program_modules_report_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_3[11][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "invalid proc_static index")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "No coverage information available")) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   4 */
  { ((MR_Box) ((MR_String) "get_recursive_csd_cost: unhandled recursion type")) },
  /* row   5 */
  { ((MR_Box) ((MR_String) "get_recursive_csd_cost called for non-recursive clique")) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "Information about module representations is not available.\n")) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "invalid clique_ptr")) },
  /* row   8 */
  { ((MR_Box) ((MR_String) "invalid proc_dynamic index")) },
  /* row   9 */
  { ((MR_Box) ((MR_String) "invalid call_site_static index")) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "invalid call_site_dynamic index")) },
};

static /* final */ const MR_Box create_report_scalar_common_4[17][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&report__report__type_ctor_info_clique_proc_report_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&report__report__type_ctor_info_clique_proc_report_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&create_report__set_ordlist__pti_set_ordlist_1__plain_exclude__type_ctor_info_exclude_spec_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_call_site_desc_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0))
  },
  /* row  10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__plain_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__plain_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0))
  },
  /* row  11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&report__report__type_ctor_info_data_struct_name_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0))
  },
  /* row  12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&report__report__type_ctor_info_clique_call_site_report_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0))
  },
  /* row  13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&report__report__type_ctor_info_clique_proc_dynamic_report_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0))
  },
  /* row  14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0))
  },
  /* row  15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__create_report__type_ctor_info_call_site_callee_perf_0))
  },
  /* row  16 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&report__report__type_ctor_info_field_name_0)),
    ((MR_Box) (&create_report__report__pti_gs_field_info_2__plain_create_report__type_ctor_info_gs_field_raw_data_0__plain_unit__type_ctor_info_unit_0)),
    ((MR_Box) (&create_report__report__pti_gs_field_info_2__plain_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0__plain_report__ti_perf_row_data_1unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_5[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_6[6][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&report__report__type_ctor_info_call_site_perf_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_module_active_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_active_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&report__report__type_ctor_info_proc_desc_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&report__report__type_ctor_info_clique_call_site_report_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_7[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&coverage__coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0)),
    ((MR_Box) (&create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_8[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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

static /* final */ const MR_Box create_report_scalar_common_9[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0))
  },
};

static /* final */ const MR_Box create_report_scalar_common_10[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&report__report__type_ctor_info_proc_desc_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&report__report__type_ctor_info_clique_proc_dynamic_report_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&create_report__create_report__type_ctor_info_call_site_callee_perf_0)),
    ((MR_Box) (&create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_PseudoTypeInfo) (&create_report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_PseudoTypeInfo) (&create_report__list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_PseudoTypeInfo) (&create_report__analysis_utils__ti_cost_and_callees_1profile__type_ctor_info_proc_static_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_coverage__type_ctor_info_coverage_point_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_PseudoTypeInfo) (&coverage__coverage__type_ctor_info_coverage_point_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_profile__type_ctor_info_call_site_array_slot_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0),
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_array_slot_0)
  }
};

static const MR_FA_TypeInfo_Struct1 create_report__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &analysis_utils__analysis_utils__type_ctor_info_cost_and_callees_1,
  { (MR_TypeInfo) (&analysis_utils__analysis_utils__type_ctor_info_callee_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0__plain_analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0),
    (MR_PseudoTypeInfo) (&create_report__analysis_utils__ti_cost_and_callees_1analysis_utils__type_ctor_info_callee_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__maybe__pti_maybe_error_2__plain_report__type_ctor_info_var_use_and_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (&report__report__type_ctor_info_var_use_and_name_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  { (MR_PseudoTypeInfo) (&report__report__type_ctor_info_proc_desc_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__list__pti_list_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__set_ordlist__pti_set_ordlist_1__plain_exclude__type_ctor_info_exclude_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&exclude__exclude__type_ctor_info_exclude_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_dynamic_ptr_0__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0),
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_TypeInfo_Struct1 create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_call_site_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0),
    (MR_PseudoTypeInfo) (&create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_call_site_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  { (MR_PseudoTypeInfo) (&report__report__type_ctor_info_call_site_desc_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_clique_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0),
    (MR_PseudoTypeInfo) (&create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_clique_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  { (MR_PseudoTypeInfo) (&report__report__type_ctor_info_clique_desc_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_builtin__type_ctor_info_string_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_PseudoTypeInfo) (&create_report__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_module_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_module_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  { (MR_PseudoTypeInfo) (&report__report__type_ctor_info_module_active_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 create_report__report__pti_perf_row_data_1__plain_report__type_ctor_info_proc_active_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  { (MR_PseudoTypeInfo) (&report__report__type_ctor_info_proc_active_0) }
};

static const MR_FA_TypeInfo_Struct2 create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_TypeInfo) (&create_report__create_report__type_ctor_info_gs_field_raw_data_0),
    (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_TypeInfo_Struct2 create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&report__report__type_ctor_info_field_name_0),
    (MR_TypeInfo) (&create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__plain_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&report__report__type_ctor_info_data_struct_name_0),
    (MR_PseudoTypeInfo) (&create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&report__report__type_ctor_info_field_name_0),
    (MR_PseudoTypeInfo) (&create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_TypeInfo_Struct1 create_report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  { (MR_TypeInfo) (&report__report__type_ctor_info_proc_desc_0) }
};

static const MR_FA_TypeInfo_Struct1 create_report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_perf_row_data_1,
  { (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0) }
};

static const MR_FA_TypeInfo_Struct2 create_report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_TypeInfo) (&create_report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0),
    (MR_TypeInfo) (&create_report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__plain_report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&report__report__type_ctor_info_field_name_0),
    (MR_PseudoTypeInfo) (&create_report__report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__report__pti_gs_field_info_2__plain_create_report__type_ctor_info_gs_field_raw_data_0__plain_unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_PseudoTypeInfo) (&create_report__create_report__type_ctor_info_gs_field_raw_data_0),
    (MR_PseudoTypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 create_report__report__pti_gs_field_info_2__plain_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0__plain_report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
  &report__report__type_ctor_info_gs_field_info_2,
  {
    (MR_PseudoTypeInfo) (&create_report__report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0),
    (MR_PseudoTypeInfo) (&create_report__report__ti_perf_row_data_1unit__type_ctor_info_unit_0)
  }
};

static const MR_PseudoTypeInfo create_report__create_report__field_types_call_site_callee_perf_0_0[3] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_own_prof_info_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)
};

static const MR_ConstString create_report__create_report__field_names_call_site_callee_perf_0_0[3] = {
  (MR_String) "cscpi_callee",
  (MR_String) "cscpi_own_prof_info",
  (MR_String) "cscpi_inherit_prof_info"
};

static const MR_DuFunctorDesc create_report__create_report__du_functor_desc_call_site_callee_perf_0_0 = {
  (MR_String) "call_site_callee_perf",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  create_report__create_report__field_types_call_site_callee_perf_0_0,
  create_report__create_report__field_names_call_site_callee_perf_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr create_report__create_report__du_stag_ordered_call_site_callee_perf_0_0[1] = { &create_report__create_report__du_functor_desc_call_site_callee_perf_0_0 };

static const MR_DuPtagLayout create_report__create_report__du_ptag_ordered_call_site_callee_perf_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    create_report__create_report__du_stag_ordered_call_site_callee_perf_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr create_report__create_report__du_name_ordered_call_site_callee_perf_0[1] = { &create_report__create_report__du_functor_desc_call_site_callee_perf_0_0 };

static const MR_Integer create_report__create_report__functor_number_map_call_site_callee_perf_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_call_site_callee_perf_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (create_report____Unify____call_site_callee_perf_0_0_10001)),
  ((MR_Box) (create_report____Compare____call_site_callee_perf_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "call_site_callee_perf",
  { create_report__create_report__du_name_ordered_call_site_callee_perf_0 },
  { create_report__create_report__du_ptag_ordered_call_site_callee_perf_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  create_report__create_report__functor_number_map_call_site_callee_perf_0,

};

static const MR_PseudoTypeInfo create_report__create_report__field_types_gs_field_raw_data_0_0[3] = {
  (MR_PseudoTypeInfo) (&report__report__type_ctor_info_proc_desc_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_own_prof_info_0),
  (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)
};

static const MR_ConstString create_report__create_report__field_names_gs_field_raw_data_0_0[3] = {
  (MR_String) "gs_raw_proc",
  (MR_String) "gs_raw_own",
  (MR_String) "gs_raw_desc"
};

static const MR_DuFunctorDesc create_report__create_report__du_functor_desc_gs_field_raw_data_0_0 = {
  (MR_String) "gs_field_raw_data",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  create_report__create_report__field_types_gs_field_raw_data_0_0,
  create_report__create_report__field_names_gs_field_raw_data_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr create_report__create_report__du_stag_ordered_gs_field_raw_data_0_0[1] = { &create_report__create_report__du_functor_desc_gs_field_raw_data_0_0 };

static const MR_DuPtagLayout create_report__create_report__du_ptag_ordered_gs_field_raw_data_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    create_report__create_report__du_stag_ordered_gs_field_raw_data_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr create_report__create_report__du_name_ordered_gs_field_raw_data_0[1] = { &create_report__create_report__du_functor_desc_gs_field_raw_data_0_0 };

static const MR_Integer create_report__create_report__functor_number_map_gs_field_raw_data_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_gs_field_raw_data_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (create_report____Unify____gs_field_raw_data_0_0_10001)),
  ((MR_Box) (create_report____Compare____gs_field_raw_data_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "gs_field_raw_data",
  { create_report__create_report__du_name_ordered_gs_field_raw_data_0 },
  { create_report__create_report__du_ptag_ordered_gs_field_raw_data_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  create_report__create_report__functor_number_map_gs_field_raw_data_0,

};

static const MR_FA_TypeInfo_Struct2 create_report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&report__report__type_ctor_info_data_struct_name_0),
    (MR_TypeInfo) (&create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0)
  }
};

const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_raw_gs_ds_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (create_report____Unify____raw_gs_ds_map_0_0_10001)),
  ((MR_Box) (create_report____Compare____raw_gs_ds_map_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "raw_gs_ds_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&create_report__tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_raw_gs_field_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (create_report____Unify____raw_gs_field_info_0_0_10001)),
  ((MR_Box) (create_report____Compare____raw_gs_field_info_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "raw_gs_field_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&create_report__report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct create_report__create_report__type_ctor_info_raw_gs_field_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (create_report____Unify____raw_gs_field_map_0_0_10001)),
  ((MR_Box) (create_report____Compare____raw_gs_field_map_0_0_10001)),
  (MR_String) "create_report",
  (MR_String) "raw_gs_field_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&create_report__tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2create_report__type_ctor_info_gs_field_raw_data_0unit__type_ctor_info_unit_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_call_site_summary__591__1_2_p_0(
  MR_Word CalleePSPtr_13,
  MR_Word CalleePSPtrFromCall_21)
{
  MR_bool succeeded;
  MR_Integer Var_54 = (MR_Integer) (CalleePSPtr_13);
  MR_Integer Var_55 = (MR_Integer) (CalleePSPtrFromCall_21);

  succeeded = (Var_54 == Var_55);
  return succeeded;
}

static MR_bool MR_CALL 
create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__439__1_2_p_0(
  MR_Word PSPtr_17,
  MR_Word HeadVar__2_21)
{
  MR_bool succeeded;
  MR_Integer Var_33 = (MR_Integer) (PSPtr_17);
  MR_Integer Var_34 = (MR_Integer) (HeadVar__2_21);

  succeeded = (Var_33 == Var_34);
  return succeeded;
}

static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&create_report_scalar_common_2[14]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&create_report_scalar_common_2[14]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&create_report_scalar_common_2[13]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&create_report_scalar_common_2[13]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&create_report_scalar_common_2[15]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&create_report_scalar_common_2[15]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    report____Compare____proc_desc_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      measurements____Compare____own_prof_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        measurements____Compare____inherit_prof_info_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = report____Unify____proc_desc_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = measurements____Unify____own_prof_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = measurements____Unify____inherit_prof_info_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_17 < Var_18);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_17 > Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      measurements____Compare____own_prof_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        measurements____Compare____inherit_prof_info_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer Var_14 = (MR_Integer) (ArgX1_3);
    MR_Integer Var_15 = (MR_Integer) (ArgY1_4);

    succeeded = (Var_14 == Var_15);
    if (succeeded)
    {
      succeeded = measurements____Unify____own_prof_info_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
        succeeded = measurements____Unify____inherit_prof_info_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
create_report__psi_to_perf_row_data_3_p_0(
  MR_Word Deep_4,
  MR_Integer PSI_5,
  MR_Word * RowData_6)
{
  MR_Word PSPtr_7 = (MR_Word) (PSI_5);
  MR_Word ProcDesc_8;
  MR_Word Own_9;
  MR_Word Desc_10;
  MR_Word Var_12;

  ProcDesc_8 = create_report__describe_proc_2_f_0(Deep_4, PSPtr_7);
  profile__deep_lookup_ps_own_3_p_0(Deep_4, PSPtr_7, &Own_9);
  profile__deep_lookup_ps_desc_3_p_0(Deep_4, PSPtr_7, &Desc_10);
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (Desc_10));
  }
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_4, ((MR_Box) (ProcDesc_8)), Own_9, Var_12, RowData_6);
}

static MR_Word MR_CALL 
create_report__describe_clique_member_2_f_0(
  MR_Word Deep_4,
  MR_Word PDPtr_5)
{
  MR_Word ProcDesc_6;
  MR_Word PD_7;
  MR_Word Var_8;

  profile__deep_lookup_proc_dynamics_3_p_0(Deep_4, PDPtr_5, &PD_7);
  Var_8 = ((MR_Word) ((MR_hl_field(0, PD_7, (MR_Integer) 0))));
  ProcDesc_6 = create_report__describe_proc_2_f_0(Deep_4, Var_8);
  return ProcDesc_6;
}

static void MR_CALL 
create_report__gather_getters_setters_4_p_0(
  MR_Word Deep_5,
  MR_Word PSPtr_6,
  MR_Word STATE_VARIABLE_GSDSRawMap_0_32,
  MR_Word * STATE_VARIABLE_GSDSRawMap_33)
{
  MR_bool succeeded;

  succeeded = profile__valid_proc_static_ptr_2_p_0(Deep_5, PSPtr_6);
  if (succeeded)
  {
    MR_Word PS_8;
    MR_Word Id_9;
    MR_Word GetterSetter_10;
    MR_Word DataStructName_11;
    MR_Word FieldName_12;
    MR_String DeclModule_66;
    MR_String DefModule_67;
    MR_String Name_68;
    MR_Integer Arity_69;
    MR_Word NameChars_71;
    MR_Word DataStructNameChars_72;
    MR_Word FieldNameChars_73;
    MR_String DataStructNameStr_74;
    MR_String FieldNameStr_75;

    profile__deep_lookup_proc_statics_3_p_0(Deep_5, PSPtr_6, &PS_8);
    Id_9 = ((MR_Word) ((MR_hl_field(0, PS_8, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Id_9)) == (MR_Integer) 0);
    if (succeeded)
    {
      DeclModule_66 = ((MR_String) ((MR_hl_field(0, Id_9, (MR_Integer) 1))));
      DefModule_67 = ((MR_String) ((MR_hl_field(0, Id_9, (MR_Integer) 2))));
      Name_68 = ((MR_String) ((MR_hl_field(0, Id_9, (MR_Integer) 3))));
      Arity_69 = ((MR_Integer) ((MR_hl_field(0, Id_9, (MR_Integer) 4))));
      succeeded = (strcmp(DeclModule_66, DefModule_67) == 0);
      if (succeeded)
      {
        mercury__string__to_char_list_2_p_0(Name_68, &NameChars_71);
        succeeded = create_report__is_getter_or_setter_2_4_p_0(NameChars_71, &GetterSetter_10, &DataStructNameChars_72, &FieldNameChars_73);
        if (succeeded)
        {
          switch (GetterSetter_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              succeeded = (Arity_69 == (MR_Integer) 2);
              break;
            case (MR_Integer) 1:
              succeeded = (Arity_69 == (MR_Integer) 3);
              break;
          }
          if (succeeded)
          {
            mercury__string__from_char_list_2_p_0(DataStructNameChars_72, &DataStructNameStr_74);
            mercury__string__from_char_list_2_p_0(FieldNameChars_73, &FieldNameStr_75);
            DataStructName_11 = (MR_Word) (DataStructNameStr_74);
            FieldName_12 = (MR_Word) (FieldNameStr_75);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Own_13;
      MR_Word Desc_14;
      MR_Word ProcDesc_15;
      MR_Word RawData_16;
      MR_Word FieldMap0_18;
      MR_Word FieldMap_31;
      MR_Word FieldMap0Prime_17;
      MR_Box conv0_FieldMap0Prime_17;
      MR_Word FieldData0_19;
      MR_Box conv1_FieldData0_19;

      profile__deep_lookup_ps_own_3_p_0(Deep_5, PSPtr_6, &Own_13);
      profile__deep_lookup_ps_desc_3_p_0(Deep_5, PSPtr_6, &Desc_14);
      ProcDesc_15 = create_report__describe_proc_2_f_0(Deep_5, PSPtr_6);
      {
        RawData_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, RawData_16, 0) = ((MR_Box) (ProcDesc_15));
        MR_hl_field(0, RawData_16, 1) = ((MR_Box) (Own_13));
        MR_hl_field(0, RawData_16, 2) = ((MR_Box) (Desc_14));
      }
      succeeded = mercury__map__search_3_p_0((MR_Word) (&report__report__type_ctor_info_data_struct_name_0), (MR_Word) (&create_report_scalar_common_2[14]), STATE_VARIABLE_GSDSRawMap_0_32, ((MR_Box) (DataStructName_11)), &conv0_FieldMap0Prime_17);
      if (succeeded)
      {
        FieldMap0Prime_17 = ((MR_Word) (conv0_FieldMap0Prime_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        FieldMap0_18 = FieldMap0Prime_17;
      else
        mercury__map__init_1_p_0((MR_Word) (&report__report__type_ctor_info_field_name_0), (MR_Word) (&create_report_scalar_common_2[13]), &FieldMap0_18);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&report__report__type_ctor_info_field_name_0), (MR_Word) (&create_report_scalar_common_2[13]), FieldMap0_18, ((MR_Box) (FieldName_12)), &conv1_FieldData0_19);
      if (succeeded)
      {
        FieldData0_19 = ((MR_Word) (conv1_FieldData0_19));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word FieldData_25;

        switch (GetterSetter_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) FieldData0_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.gather_getters_setters\'/4", (MR_String) "redundant getter");
                  return;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word SetterRawData_24 = ((MR_Word) ((MR_hl_field(2, FieldData0_19, (MR_Integer) 0))));

                  {
                    FieldData_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, FieldData_25, 0) = ((MR_Box) (RawData_16));
                    MR_hl_field(0, FieldData_25, 1) = ((MR_Box) (SetterRawData_24));
                    MR_hl_field(0, FieldData_25, 2) = NULL;
                  }
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) FieldData0_19)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.gather_getters_setters\'/4", (MR_String) "redundant setter");
                  return;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word GetterRawData_30 = ((MR_Word) ((MR_hl_field(1, FieldData0_19, (MR_Integer) 0))));

                  {
                    FieldData_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, FieldData_25, 0) = ((MR_Box) (GetterRawData_30));
                    MR_hl_field(0, FieldData_25, 1) = ((MR_Box) (RawData_16));
                    MR_hl_field(0, FieldData_25, 2) = NULL;
                  }
                }
                break;
            }
            break;
        }
        mercury__map__det_update_4_p_0((MR_Word) (&report__report__type_ctor_info_field_name_0), (MR_Word) (&create_report_scalar_common_2[13]), ((MR_Box) (FieldName_12)), ((MR_Box) (FieldData_25)), FieldMap0_18, &FieldMap_31);
      }
      else
      {
        MR_Word FieldData_41;

        switch (GetterSetter_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              FieldData_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, FieldData_41, 0) = ((MR_Box) (RawData_16));
            }
            break;
          case (MR_Integer) 1:
            {
              FieldData_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, FieldData_41, 0) = ((MR_Box) (RawData_16));
            }
            break;
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&report__report__type_ctor_info_field_name_0), (MR_Word) (&create_report_scalar_common_2[13]), ((MR_Box) (FieldName_12)), ((MR_Box) (FieldData_41)), FieldMap0_18, &FieldMap_31);
      }
      mercury__map__set_4_p_0((MR_Word) (&report__report__type_ctor_info_data_struct_name_0), (MR_Word) (&create_report_scalar_common_2[14]), ((MR_Box) (DataStructName_11)), ((MR_Box) (FieldMap_31)), STATE_VARIABLE_GSDSRawMap_0_32, STATE_VARIABLE_GSDSRawMap_33);
    }
    else
      *STATE_VARIABLE_GSDSRawMap_33 = STATE_VARIABLE_GSDSRawMap_0_32;
  }
  else
    *STATE_VARIABLE_GSDSRawMap_33 = STATE_VARIABLE_GSDSRawMap_0_32;
}

static MR_bool MR_CALL 
create_report__is_getter_or_setter_2_4_p_0(
  MR_Word NameChars_5,
  MR_Word * GetterSetter_6,
  MR_Word * DataStructNameChars_7,
  MR_Word * FieldNameChars_8)
{
  MR_bool succeeded = (NameChars_5 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word FieldNameCharsPrime_9;
  MR_Char Var_13;
  MR_Word Var_14;
  MR_Char Var_15;
  MR_Word Var_16;
  MR_Char Var_17;
  MR_Word Var_18;
  MR_Char Var_19;
  MR_Word Var_20;
  MR_Char Var_21;

  if (succeeded)
  {
    Var_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, NameChars_5, (MR_Integer) 0)));
    Var_14 = ((MR_Word) ((MR_hl_field(1, NameChars_5, (MR_Integer) 1))));
    succeeded = (Var_13 == (MR_Char) 95);
    if (succeeded)
    {
      succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_15 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_14, (MR_Integer) 0)));
        Var_16 = ((MR_Word) ((MR_hl_field(1, Var_14, (MR_Integer) 1))));
        succeeded = (Var_15 == (MR_Char) 103);
        if (succeeded)
        {
          succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_17 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_16, (MR_Integer) 0)));
            Var_18 = ((MR_Word) ((MR_hl_field(1, Var_16, (MR_Integer) 1))));
            succeeded = (Var_17 == (MR_Char) 101);
            if (succeeded)
            {
              succeeded = (Var_18 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_19 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_18, (MR_Integer) 0)));
                Var_20 = ((MR_Word) ((MR_hl_field(1, Var_18, (MR_Integer) 1))));
                succeeded = (Var_19 == (MR_Char) 116);
                if (succeeded)
                {
                  succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_21 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_20, (MR_Integer) 0)));
                    FieldNameCharsPrime_9 = ((MR_Word) ((MR_hl_field(1, Var_20, (MR_Integer) 1))));
                    succeeded = (Var_21 == (MR_Char) 95);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (succeeded)
  {
    *GetterSetter_6 = (MR_Integer) 0;
    *DataStructNameChars_7 = (MR_Word) ((MR_Unsigned) 0U);
    *FieldNameChars_8 = FieldNameCharsPrime_9;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word FieldNameCharsPrime_31;
    MR_Char Var_22;
    MR_Word Var_23;
    MR_Char Var_24;
    MR_Word Var_25;
    MR_Char Var_26;
    MR_Word Var_27;
    MR_Char Var_28;
    MR_Word Var_29;
    MR_Char Var_30;

    succeeded = (NameChars_5 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_22 = ((MR_Char) (MR_Word) (MR_hl_field(1, NameChars_5, (MR_Integer) 0)));
      Var_23 = ((MR_Word) ((MR_hl_field(1, NameChars_5, (MR_Integer) 1))));
      succeeded = (Var_22 == (MR_Char) 95);
      if (succeeded)
      {
        succeeded = (Var_23 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_24 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_23, (MR_Integer) 0)));
          Var_25 = ((MR_Word) ((MR_hl_field(1, Var_23, (MR_Integer) 1))));
          succeeded = (Var_24 == (MR_Char) 115);
          if (succeeded)
          {
            succeeded = (Var_25 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_26 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_25, (MR_Integer) 0)));
              Var_27 = ((MR_Word) ((MR_hl_field(1, Var_25, (MR_Integer) 1))));
              succeeded = (Var_26 == (MR_Char) 101);
              if (succeeded)
              {
                succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_28 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_27, (MR_Integer) 0)));
                  Var_29 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
                  succeeded = (Var_28 == (MR_Char) 116);
                  if (succeeded)
                  {
                    succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      Var_30 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_29, (MR_Integer) 0)));
                      FieldNameCharsPrime_31 = ((MR_Word) ((MR_hl_field(1, Var_29, (MR_Integer) 1))));
                      succeeded = (Var_30 == (MR_Char) 95);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      *GetterSetter_6 = (MR_Integer) 1;
      *DataStructNameChars_7 = (MR_Word) ((MR_Unsigned) 0U);
      *FieldNameChars_8 = FieldNameCharsPrime_31;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Char FirstNameChar_10;
      MR_Word LaterNameChars_11;
      MR_Word LaterDataStructNameChars_12;

      succeeded = (NameChars_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        FirstNameChar_10 = ((MR_Char) (MR_Word) (MR_hl_field(1, NameChars_5, (MR_Integer) 0)));
        LaterNameChars_11 = ((MR_Word) ((MR_hl_field(1, NameChars_5, (MR_Integer) 1))));
        succeeded = create_report__is_getter_or_setter_2_4_p_0(LaterNameChars_11, GetterSetter_6, &LaterDataStructNameChars_12, FieldNameChars_8);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *DataStructNameChars_7 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (FirstNameChar_10));
            MR_hl_field(1, base, 1) = ((MR_Box) (LaterDataStructNameChars_12));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
create_report__getter_setter_raw_data_to_info_4_p_0(
  MR_Word Deep_5,
  MR_Word _FieldName_6,
  MR_Word RawData_7,
  MR_Word * Data_8)
{
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_p_0(Deep_5, RawData_7, Data_8);
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_100_97_116_97_95_116_111_95_105_110_102_111_95_95_91_50_93_95_48_4_p_0(
  MR_Word Deep_5,
  MR_Word RawData_7,
  MR_Word * Data_8)
{
  switch (MR_tag((MR_Word) RawData_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RawGetter_9 = ((MR_Word) ((MR_hl_field(0, RawData_7, (MR_Integer) 0))));
        MR_Word RawSetter_10 = ((MR_Word) ((MR_hl_field(0, RawData_7, (MR_Integer) 1))));
        MR_Word GetterProcDesc_12 = ((MR_Word) ((MR_hl_field(0, RawGetter_9, (MR_Integer) 0))));
        MR_Word GetterOwn_13 = ((MR_Word) ((MR_hl_field(0, RawGetter_9, (MR_Integer) 1))));
        MR_Word GetterDesc_14 = ((MR_Word) ((MR_hl_field(0, RawGetter_9, (MR_Integer) 2))));
        MR_Word SetterProcDesc_15 = ((MR_Word) ((MR_hl_field(0, RawSetter_10, (MR_Integer) 0))));
        MR_Word SetterOwn_16 = ((MR_Word) ((MR_hl_field(0, RawSetter_10, (MR_Integer) 1))));
        MR_Word SetterDesc_17 = ((MR_Word) ((MR_hl_field(0, RawSetter_10, (MR_Integer) 2))));
        MR_Word GetterRowData_18;
        MR_Word SetterRowData_19;
        MR_Word SumOwn_20;
        MR_Word SumDesc_21;
        MR_Word SumRowData_22;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;

        {
          Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_38, 0) = ((MR_Box) (GetterDesc_14));
        }
        create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_5, ((MR_Box) (GetterProcDesc_12)), GetterOwn_13, Var_38, &GetterRowData_18);
        {
          Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_39, 0) = ((MR_Box) (SetterDesc_17));
        }
        create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_5, ((MR_Box) (SetterProcDesc_15)), SetterOwn_16, Var_39, &SetterRowData_19);
        SumOwn_20 = measurements__add_own_to_own_2_f_0(GetterOwn_13, SetterOwn_16);
        SumDesc_21 = measurements__add_inherit_to_inherit_2_f_0(GetterDesc_14, SetterDesc_17);
        {
          Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_40, 0) = ((MR_Box) (SumDesc_21));
        }
        create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_5, ((MR_Box) ((MR_Integer) 0)), SumOwn_20, Var_40, &SumRowData_22);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Data_8 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (GetterRowData_18));
          MR_hl_field(0, base, 1) = ((MR_Box) (SetterRowData_19));
          MR_hl_field(0, base, 2) = ((MR_Box) (SumRowData_22));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RawGetter_24 = ((MR_Word) ((MR_hl_field(1, RawData_7, (MR_Integer) 0))));
        MR_Word GetterProcDesc_25 = ((MR_Word) ((MR_hl_field(0, RawGetter_24, (MR_Integer) 0))));
        MR_Word GetterOwn_26 = ((MR_Word) ((MR_hl_field(0, RawGetter_24, (MR_Integer) 1))));
        MR_Word GetterDesc_27 = ((MR_Word) ((MR_hl_field(0, RawGetter_24, (MR_Integer) 2))));
        MR_Word GetterRowData_28;
        MR_Word Var_41;

        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (GetterDesc_27));
        }
        create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_5, ((MR_Box) (GetterProcDesc_25)), GetterOwn_26, Var_41, &GetterRowData_28);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Data_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (GetterRowData_28));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word RawSetter_29 = ((MR_Word) ((MR_hl_field(2, RawData_7, (MR_Integer) 0))));
        MR_Word SetterProcDesc_30 = ((MR_Word) ((MR_hl_field(0, RawSetter_29, (MR_Integer) 0))));
        MR_Word SetterOwn_31 = ((MR_Word) ((MR_hl_field(0, RawSetter_29, (MR_Integer) 1))));
        MR_Word SetterDesc_32 = ((MR_Word) ((MR_hl_field(0, RawSetter_29, (MR_Integer) 2))));
        MR_Word SetterRowData_33;
        MR_Word Var_42;

        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) (SetterDesc_32));
        }
        create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_5, ((MR_Box) (SetterProcDesc_30)), SetterOwn_31, Var_42, &SetterRowData_33);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Data_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (SetterRowData_33));
        }
      }
      break;
  }
}

static void MR_CALL 
create_report__getter_setter_raw_map_to_info_map_4_p_0(
  MR_Word Deep_5,
  MR_Word _DataStructName_6,
  MR_Word RawMap_7,
  MR_Word * Map_8)
{
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0(Deep_5, RawMap_7, Map_8);
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Data_8;

  create_report__getter_setter_raw_data_to_info_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Data_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_Data_8));
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0(
  MR_Word Deep_5,
  MR_Word RawMap_7,
  MR_Word * Map_8)
{
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&create_report_scalar_common_4[16]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_116_101_114_95_115_101_116_116_101_114_95_114_97_119_95_109_97_112_95_116_111_95_105_110_102_111_95_109_97_112_95_95_91_50_93_95_48_4_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (Deep_5));
  }
  mercury__map__map_values_3_p_0((MR_Word) (&report__report__type_ctor_info_field_name_0), (MR_Word) (&create_report_scalar_common_2[13]), (MR_Word) (&create_report_scalar_common_2[16]), Var_9, RawMap_7, Map_8);
}

static MR_Word MR_CALL 
create_report__proc_to_active_row_data_2_f_0(
  MR_Word Deep_4,
  MR_Word PSPtr_5)
{
  MR_Word ProcRowData_6;
  MR_Word Own_7;
  MR_Word Desc_8;
  MR_Word IsActive_9;
  MR_Word ProcIsActive_10;
  MR_Word ProcDesc_11;
  MR_Word ProcActive_12;
  MR_Word Var_14;

  profile__deep_lookup_ps_own_3_p_0(Deep_4, PSPtr_5, &Own_7);
  profile__deep_lookup_ps_desc_3_p_0(Deep_4, PSPtr_5, &Desc_8);
  IsActive_9 = measurements__compute_is_active_1_f_0(Own_7);
  switch (IsActive_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ProcIsActive_10 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      ProcIsActive_10 = (MR_Integer) 1;
      break;
  }
  ProcDesc_11 = create_report__describe_proc_2_f_0(Deep_4, PSPtr_5);
  {
    ProcActive_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcActive_12, 0) = ((MR_Box) (ProcDesc_11));
    MR_hl_field(0, ProcActive_12, 1) = (MR_Box) ((MR_Unsigned) (ProcIsActive_10));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Desc_8));
  }
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_4, ((MR_Box) (ProcActive_12)), Own_7, Var_14, &ProcRowData_6);
  return ProcRowData_6;
}

static MR_Word MR_CALL 
create_report__module_pair_to_row_data_2_f_0(
  MR_Word Deep_4,
  MR_Word HeadVar__2_2)
{
  MR_Word ModuleRowData_7;
  MR_String ModuleName_5 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ModuleData_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word Own_8 = ((MR_Word) ((MR_hl_field(0, ModuleData_6, (MR_Integer) 0))));
  MR_Word IsActive_9;
  MR_Word ModuleIsActive_10;
  MR_Word ModuleActive_11;

  IsActive_9 = measurements__compute_is_active_1_f_0(Own_8);
  switch (IsActive_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ModuleIsActive_10 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      ModuleIsActive_10 = (MR_Integer) 1;
      break;
  }
  {
    ModuleActive_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModuleActive_11, 0) = ((MR_Box) (ModuleName_5));
    MR_hl_field(0, ModuleActive_11, 1) = (MR_Box) ((MR_Unsigned) (ModuleIsActive_10));
  }
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_4, ((MR_Box) (ModuleActive_11)), Own_8, (MR_Word) ((MR_Unsigned) 0U), &ModuleRowData_7);
  return ModuleRowData_7;
}

static MR_bool MR_CALL 
create_report__not_mercury_runtime_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_String ModuleName_2 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  succeeded = (strcmp(ModuleName_2, (MR_String) "Mercury runtime") == 0);
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
create_report__call_site_dynamic_var_use_arg_9_p_0(
  MR_Word Deep_10,
  MR_Word CSDPtr_11,
  MR_Word RecursionType_12,
  MR_Float Cost_13,
  MR_Word VarNameTable_14,
  MR_Word HeadVar_15,
  MR_Word * MaybeUseAndName_16,
  MR_Integer STATE_VARIABLE_ArgNum_0_26,
  MR_Integer * STATE_VARIABLE_ArgNum_27)
{
  MR_Integer Var_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar_15, (MR_Integer) 0))));
  MR_Word Mode_19 = ((MR_Word) ((MR_hl_field(0, HeadVar_15, (MR_Integer) 1))));
  MR_Word UseType_20;
  MR_Word UseOptions_21;
  MR_Word MaybeUse_22;

  var_use_analysis__var_mode_to_var_use_type_2_p_0(Mode_19, &UseType_20);
  {
    UseOptions_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, UseOptions_21, 0) = ((MR_Box) (Deep_10));
    MR_hl_field(0, UseOptions_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, UseOptions_21, 2) = (MR_Box) ((MR_Unsigned) (UseType_20));
  }
  var_use_analysis__get_call_site_dynamic_var_use_info_6_p_1(CSDPtr_11, STATE_VARIABLE_ArgNum_0_26, RecursionType_12, Cost_13, UseOptions_21, &MaybeUse_22);
  if (((MR_tag((MR_Word) MaybeUse_22)) == (MR_Integer) 1))
    *MaybeUseAndName_16 = (MR_Word) (MaybeUse_22);
  else
  {
    MR_Word Use_23 = ((MR_Word) ((MR_hl_field(0, MaybeUse_22, (MR_Integer) 0))));
    MR_String Name_24;
    MR_Word Var_29;

    mdbcomp__program_representation__lookup_var_name_3_p_0(VarNameTable_14, Var_18, &Name_24);
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_29, 0) = ((MR_Box) (Name_24));
      MR_hl_field(0, Var_29, 1) = ((MR_Box) (Use_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeUseAndName_16 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_29));
    }
  }
  *STATE_VARIABLE_ArgNum_27 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_26 + (MR_Unsigned) 1);
}

static MR_Box MR_CALL 
create_report__create_proc_caller_cliques_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ProcDesc_6;

  conv0_ProcDesc_6 = create_report__describe_clique_member_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ProcDesc_6));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
create_report__create_proc_caller_cliques_3_f_0(
  MR_Word Deep_5,
  MR_Word CalleePSPtr_6,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Word PerfRowData_9;
  MR_Word CliquePtr_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word CSDPtrs_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word CliqueDesc_10;
  MR_Word Own_11;
  MR_Word Desc_12;
  MR_Word Var_36;

  succeeded = profile__valid_clique_ptr_2_p_0(Deep_5, CliquePtr_7);
  if (succeeded)
  {
    MR_Word MemberPDPtrs_15;
    MR_Word ParentCSDPtr_16;
    MR_Word ParentCSD_17;
    MR_Word EntryPDPtr_18;
    MR_Word OtherPDPtrs_19;

    profile__deep_lookup_clique_members_3_p_0(Deep_5, CliquePtr_7, &MemberPDPtrs_15);
    profile__deep_lookup_clique_parents_3_p_0(Deep_5, CliquePtr_7, &ParentCSDPtr_16);
    profile__deep_lookup_call_site_dynamics_3_p_0(Deep_5, ParentCSDPtr_16, &ParentCSD_17);
    EntryPDPtr_18 = ((MR_Word) ((MR_hl_field(0, ParentCSD_17, (MR_Integer) 1))));
    succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), MemberPDPtrs_15, ((MR_Box) (EntryPDPtr_18)), &OtherPDPtrs_19);
    if (succeeded)
    {
      MR_Word EntryProcDesc_20;
      MR_Word OtherProcDescs_21;
      MR_Word Var_22;
      MR_Word PD_32;
      MR_Word Var_33;

      profile__deep_lookup_proc_dynamics_3_p_0(Deep_5, EntryPDPtr_18, &PD_32);
      Var_33 = ((MR_Word) ((MR_hl_field(0, PD_32, (MR_Integer) 0))));
      EntryProcDesc_20 = create_report__describe_proc_2_f_0(Deep_5, Var_33);
      {
        Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_22, 0) = ((MR_Box) (&create_report_scalar_common_6[4]));
        MR_hl_field(0, Var_22, 1) = ((MR_Box) (create_report__create_proc_caller_cliques_3_f_0_1));
        MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_22, 3) = ((MR_Box) (Deep_5));
      }
      OtherProcDescs_21 = mercury__list__map_2_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&report__report__type_ctor_info_proc_desc_0), Var_22, OtherPDPtrs_19);
      {
        CliqueDesc_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CliqueDesc_10, 0) = ((MR_Box) (CliquePtr_7));
        MR_hl_field(0, CliqueDesc_10, 1) = ((MR_Box) (EntryProcDesc_20));
        MR_hl_field(0, CliqueDesc_10, 2) = ((MR_Box) (OtherProcDescs_21));
      }
    }
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "entry pdptr not a member");
  }
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "invalid clique_ptr");
  apply_exclusion__compute_parent_csd_prof_info_5_p_0(Deep_5, CalleePSPtr_6, CSDPtrs_8, &Own_11, &Desc_12);
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (Desc_12));
  }
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_5, ((MR_Box) (CliqueDesc_10)), Own_11, Var_36, &PerfRowData_9);
  return PerfRowData_9;
}

static MR_Word MR_CALL 
create_report__create_proc_caller_modules_3_f_0(
  MR_Word Deep_5,
  MR_Word CalleePSPtr_6,
  MR_Word HeadVar__3_3)
{
  MR_Word PerfRowData_9;
  MR_String ModuleName_7 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word CSDPtrs_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word Own_10;
  MR_Word Desc_11;
  MR_Word Var_13;

  apply_exclusion__compute_parent_csd_prof_info_5_p_0(Deep_5, CalleePSPtr_6, CSDPtrs_8, &Own_10, &Desc_11);
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (Desc_11));
  }
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_5, ((MR_Box) (ModuleName_7)), Own_10, Var_13, &PerfRowData_9);
  return PerfRowData_9;
}

static MR_Word MR_CALL 
create_report__create_proc_caller_procedures_3_f_0(
  MR_Word Deep_5,
  MR_Word CalleePSPtr_6,
  MR_Word HeadVar__3_3)
{
  MR_Word PerfRowData_9;
  MR_Word PSSPtr_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word CSDPtrs_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word ProcDesc_10;
  MR_Word Own_11;
  MR_Word Desc_12;
  MR_Word Var_14;

  ProcDesc_10 = create_report__describe_proc_2_f_0(Deep_5, PSSPtr_7);
  apply_exclusion__compute_parent_csd_prof_info_5_p_0(Deep_5, CalleePSPtr_6, CSDPtrs_8, &Own_11, &Desc_12);
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Desc_12));
  }
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_5, ((MR_Box) (ProcDesc_10)), Own_11, Var_14, &PerfRowData_9);
  return PerfRowData_9;
}

static MR_Word MR_CALL 
create_report__create_proc_caller_call_sites_3_f_0(
  MR_Word Deep_5,
  MR_Word CalleePSPtr_6,
  MR_Word HeadVar__3_3)
{
  MR_Word PerfRowData_9;
  MR_Word CSSPtr_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word CSDPtrs_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word CallSiteDesc_10;
  MR_Word Own_11;
  MR_Word Desc_12;
  MR_Word Var_14;

  CallSiteDesc_10 = create_report__describe_call_site_2_f_0(Deep_5, CSSPtr_7);
  apply_exclusion__compute_parent_csd_prof_info_5_p_0(Deep_5, CalleePSPtr_6, CSDPtrs_8, &Own_11, &Desc_12);
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (Desc_12));
  }
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_5, ((MR_Box) (CallSiteDesc_10)), Own_11, Var_14, &PerfRowData_9);
  return PerfRowData_9;
}

static void MR_CALL 
create_report__accumulate_call_site_callees_7_p_0(
  MR_Word Deep_8,
  MR_Word CalleePerf_9,
  MR_Word * RowData_10,
  MR_Word STATE_VARIABLE_Own_0_17,
  MR_Word * STATE_VARIABLE_Own_18,
  MR_Word STATE_VARIABLE_Desc_0_19,
  MR_Word * STATE_VARIABLE_Desc_20)
{
  MR_Word CalleePSPtr_13 = ((MR_Word) ((MR_hl_field(0, CalleePerf_9, (MR_Integer) 0))));
  MR_Word CalleeOwn_14 = ((MR_Word) ((MR_hl_field(0, CalleePerf_9, (MR_Integer) 1))));
  MR_Word CalleeDesc_15 = ((MR_Word) ((MR_hl_field(0, CalleePerf_9, (MR_Integer) 2))));
  MR_Word CalleeProcDesc_16;
  MR_Word Var_22;

  CalleeProcDesc_16 = create_report__describe_proc_2_f_0(Deep_8, CalleePSPtr_13);
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (CalleeDesc_15));
  }
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_8, ((MR_Box) (CalleeProcDesc_16)), CalleeOwn_14, Var_22, RowData_10);
  *STATE_VARIABLE_Own_18 = measurements__add_own_to_own_2_f_0(STATE_VARIABLE_Own_0_17, CalleeOwn_14);
  *STATE_VARIABLE_Desc_20 = measurements__add_inherit_to_inherit_2_f_0(STATE_VARIABLE_Desc_0_19, CalleeDesc_15);
}

static void MR_CALL 
create_report__accumulate_csd_prof_info_7_p_0(
  MR_Word Deep_8,
  MR_Word CallerPSPtr_9,
  MR_Word CSDPtr_10,
  MR_Word STATE_VARIABLE_Own_0_17,
  MR_Word * STATE_VARIABLE_Own_18,
  MR_Word STATE_VARIABLE_Desc_0_19,
  MR_Word * STATE_VARIABLE_Desc_20)
{
  MR_bool succeeded;
  MR_Word CSDOwn_13;
  MR_Word CSDDesc_14;
  MR_Word CompTableArray_15;
  MR_Word STATE_VARIABLE_Desc_22_22;
  MR_Word InnerTotal_16;
  MR_Box conv0_InnerTotal_16;

  profile__deep_lookup_csd_own_3_p_0(Deep_8, CSDPtr_10, &CSDOwn_13);
  profile__deep_lookup_csd_desc_3_p_0(Deep_8, CSDPtr_10, &CSDDesc_14);
  *STATE_VARIABLE_Own_18 = measurements__add_own_to_own_2_f_0(STATE_VARIABLE_Own_0_17, CSDOwn_13);
  STATE_VARIABLE_Desc_22_22 = measurements__add_inherit_to_inherit_2_f_0(STATE_VARIABLE_Desc_0_19, CSDDesc_14);
  profile__deep_lookup_csd_comp_table_3_p_0(Deep_8, CSDPtr_10, &CompTableArray_15);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), CompTableArray_15, ((MR_Box) (CallerPSPtr_9)), &conv0_InnerTotal_16);
  if (succeeded)
  {
    InnerTotal_16 = ((MR_Word) (conv0_InnerTotal_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *STATE_VARIABLE_Desc_20 = measurements__subtract_inherit_from_inherit_2_f_0(InnerTotal_16, STATE_VARIABLE_Desc_22_22);
  else
    *STATE_VARIABLE_Desc_20 = STATE_VARIABLE_Desc_22_22;
}

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv21_RowData_10;
  MR_Word conv20_STATE_VARIABLE_Own_18;
  MR_Word conv19_STATE_VARIABLE_Desc_20;

  create_report__accumulate_call_site_callees_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv21_RowData_10, ((MR_Word) (wrapper_arg_3)), &conv20_STATE_VARIABLE_Own_18, ((MR_Word) (wrapper_arg_5)), &conv19_STATE_VARIABLE_Desc_20);
  *wrapper_arg_2 = ((MR_Box) (conv21_RowData_10));
  *wrapper_arg_4 = ((MR_Box) (conv20_STATE_VARIABLE_Own_18));
  *wrapper_arg_6 = ((MR_Box) (conv19_STATE_VARIABLE_Desc_20));
}

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv18_CalleeProf_9;

  conv18_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv18_CalleeProf_9));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
create_report__create_call_site_summary_2_f_0_7(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = create_report__IntroducedFrom__pred__create_call_site_summary__591__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv15_RowData_10;
  MR_Word conv14_STATE_VARIABLE_Own_18;
  MR_Word conv13_STATE_VARIABLE_Desc_20;

  create_report__accumulate_call_site_callees_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv15_RowData_10, ((MR_Word) (wrapper_arg_3)), &conv14_STATE_VARIABLE_Own_18, ((MR_Word) (wrapper_arg_5)), &conv13_STATE_VARIABLE_Desc_20);
  *wrapper_arg_2 = ((MR_Box) (conv15_RowData_10));
  *wrapper_arg_4 = ((MR_Box) (conv14_STATE_VARIABLE_Own_18));
  *wrapper_arg_6 = ((MR_Box) (conv13_STATE_VARIABLE_Desc_20));
}

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv12_CalleeProf_9;

  conv12_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv12_CalleeProf_9));
  return wrapper_arg_2;
}

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_RowData_10;
  MR_Word conv8_STATE_VARIABLE_Own_18;
  MR_Word conv7_STATE_VARIABLE_Desc_20;

  create_report__accumulate_call_site_callees_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv9_RowData_10, ((MR_Word) (wrapper_arg_3)), &conv8_STATE_VARIABLE_Own_18, ((MR_Word) (wrapper_arg_5)), &conv7_STATE_VARIABLE_Desc_20);
  *wrapper_arg_2 = ((MR_Box) (conv9_RowData_10));
  *wrapper_arg_4 = ((MR_Box) (conv8_STATE_VARIABLE_Own_18));
  *wrapper_arg_6 = ((MR_Box) (conv7_STATE_VARIABLE_Desc_20));
}

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv6_CalleeProf_9;

  conv6_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv6_CalleeProf_9));
  return wrapper_arg_2;
}

static void MR_CALL 
create_report__create_call_site_summary_2_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_RowData_10;
  MR_Word conv2_STATE_VARIABLE_Own_18;
  MR_Word conv1_STATE_VARIABLE_Desc_20;

  create_report__accumulate_call_site_callees_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_RowData_10, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_Own_18, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_Desc_20);
  *wrapper_arg_2 = ((MR_Box) (conv3_RowData_10));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_Own_18));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_Desc_20));
}

static MR_Box MR_CALL 
create_report__create_call_site_summary_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_CalleeProf_9;

  conv0_CalleeProf_9 = create_report__generate_call_site_callee_perf_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_CalleeProf_9));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
create_report__create_call_site_summary_2_f_0(
  MR_Word Deep_4,
  MR_Word CSSPtr_5)
{
  MR_bool succeeded;
  MR_Word CallSitePerf_6;
  MR_Word CallSiteDesc_7;
  MR_Word CSS_8;
  MR_Word KindAndCallee_9;
  MR_Word CallerPSPtr_10;
  MR_Word CallSiteCallMap_11;
  MR_Word CallSiteCalls_12;
  MR_Word KindAndInfo_17;
  MR_Word SummaryRowData_28;
  MR_Word SubRowDatas_29;

  CallSiteDesc_7 = create_report__describe_call_site_2_f_0(Deep_4, CSSPtr_5);
  profile__deep_lookup_call_site_statics_3_p_0(Deep_4, CSSPtr_5, &CSS_8);
  CallerPSPtr_10 = ((MR_Word) ((MR_hl_field(0, CSS_8, (MR_Integer) 0))));
  KindAndCallee_9 = ((MR_Word) ((MR_hl_field(0, CSS_8, (MR_Integer) 2))));
  profile__deep_lookup_call_site_calls_3_p_0(Deep_4, CSSPtr_5, &CallSiteCallMap_11);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&create_report_scalar_common_1[6]), CallSiteCallMap_11, &CallSiteCalls_12);
  switch (MR_tag((MR_Word) KindAndCallee_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(KindAndCallee_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word CallSiteCalleePerfs_119;
            MR_Word SumOwn_120;
            MR_Word SumDesc_121;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_138;
            MR_Box conv23_SumOwn_120;
            MR_Box conv22_SumDesc_121;

            KindAndInfo_17 = (MR_Word) ((MR_Unsigned) 0U);
            {
              Var_122 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_122, 0) = ((MR_Box) (&create_report_scalar_common_4[15]));
              MR_hl_field(0, Var_122, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_8));
              MR_hl_field(0, Var_122, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_122, 3) = ((MR_Box) (Deep_4));
              MR_hl_field(0, Var_122, 4) = ((MR_Box) (CallerPSPtr_10));
            }
            CallSiteCalleePerfs_119 = mercury__list__map_2_f_0((MR_Word) (&create_report_scalar_common_2[6]), (MR_Word) (&create_report__create_report__type_ctor_info_call_site_callee_perf_0), Var_122, CallSiteCalls_12);
            {
              Var_123 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_123, 0) = ((MR_Box) (&create_report_scalar_common_10[2]));
              MR_hl_field(0, Var_123, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_9));
              MR_hl_field(0, Var_123, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_123, 3) = ((MR_Box) (Deep_4));
            }
            Var_124 = measurements__zero_own_prof_info_0_f_0();
            Var_125 = measurements__zero_inherit_prof_info_0_f_0();
            mercury__list__map_foldl2_7_p_0((MR_Word) (&create_report__create_report__type_ctor_info_call_site_callee_perf_0), (MR_Word) (&create_report_scalar_common_1[3]), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), Var_123, CallSiteCalleePerfs_119, &SubRowDatas_29, ((MR_Box) (Var_124)), &conv23_SumOwn_120, ((MR_Box) (Var_125)), &conv22_SumDesc_121);
            SumOwn_120 = ((MR_Word) (conv23_SumOwn_120));
            SumDesc_121 = ((MR_Word) (conv22_SumDesc_121));
            {
              Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_138, 0) = ((MR_Box) (SumDesc_121));
            }
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_4, ((MR_Box) (CallSiteDesc_7)), SumOwn_120, Var_138, &SummaryRowData_28);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CallSiteCalleePerfs_77;
            MR_Word SumOwn_78;
            MR_Word SumDesc_79;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_83;
            MR_Word Var_135;
            MR_Box conv11_SumOwn_78;
            MR_Box conv10_SumDesc_79;

            KindAndInfo_17 = (MR_Word) ((MR_Unsigned) 4U);
            {
              Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_80, 0) = ((MR_Box) (&create_report_scalar_common_4[15]));
              MR_hl_field(0, Var_80, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_3));
              MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_80, 3) = ((MR_Box) (Deep_4));
              MR_hl_field(0, Var_80, 4) = ((MR_Box) (CallerPSPtr_10));
            }
            CallSiteCalleePerfs_77 = mercury__list__map_2_f_0((MR_Word) (&create_report_scalar_common_2[6]), (MR_Word) (&create_report__create_report__type_ctor_info_call_site_callee_perf_0), Var_80, CallSiteCalls_12);
            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_81, 0) = ((MR_Box) (&create_report_scalar_common_10[2]));
              MR_hl_field(0, Var_81, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_4));
              MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_81, 3) = ((MR_Box) (Deep_4));
            }
            Var_82 = measurements__zero_own_prof_info_0_f_0();
            Var_83 = measurements__zero_inherit_prof_info_0_f_0();
            mercury__list__map_foldl2_7_p_0((MR_Word) (&create_report__create_report__type_ctor_info_call_site_callee_perf_0), (MR_Word) (&create_report_scalar_common_1[3]), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), Var_81, CallSiteCalleePerfs_77, &SubRowDatas_29, ((MR_Box) (Var_82)), &conv11_SumOwn_78, ((MR_Box) (Var_83)), &conv10_SumDesc_79);
            SumOwn_78 = ((MR_Word) (conv11_SumOwn_78));
            SumDesc_79 = ((MR_Word) (conv10_SumDesc_79));
            {
              Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_135, 0) = ((MR_Box) (SumDesc_79));
            }
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_4, ((MR_Box) (CallSiteDesc_7)), SumOwn_78, Var_135, &SummaryRowData_28);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CallSiteCalleePerfs_98;
            MR_Word SumOwn_99;
            MR_Word SumDesc_100;
            MR_Word Var_101;
            MR_Word Var_102;
            MR_Word Var_103;
            MR_Word Var_104;
            MR_Word Var_136;
            MR_Box conv17_SumOwn_99;
            MR_Box conv16_SumDesc_100;

            KindAndInfo_17 = (MR_Word) ((MR_Unsigned) 8U);
            {
              Var_101 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_101, 0) = ((MR_Box) (&create_report_scalar_common_4[15]));
              MR_hl_field(0, Var_101, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_5));
              MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_101, 3) = ((MR_Box) (Deep_4));
              MR_hl_field(0, Var_101, 4) = ((MR_Box) (CallerPSPtr_10));
            }
            CallSiteCalleePerfs_98 = mercury__list__map_2_f_0((MR_Word) (&create_report_scalar_common_2[6]), (MR_Word) (&create_report__create_report__type_ctor_info_call_site_callee_perf_0), Var_101, CallSiteCalls_12);
            {
              Var_102 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_102, 0) = ((MR_Box) (&create_report_scalar_common_10[2]));
              MR_hl_field(0, Var_102, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_6));
              MR_hl_field(0, Var_102, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_102, 3) = ((MR_Box) (Deep_4));
            }
            Var_103 = measurements__zero_own_prof_info_0_f_0();
            Var_104 = measurements__zero_inherit_prof_info_0_f_0();
            mercury__list__map_foldl2_7_p_0((MR_Word) (&create_report__create_report__type_ctor_info_call_site_callee_perf_0), (MR_Word) (&create_report_scalar_common_1[3]), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), Var_102, CallSiteCalleePerfs_98, &SubRowDatas_29, ((MR_Box) (Var_103)), &conv17_SumOwn_99, ((MR_Box) (Var_104)), &conv16_SumDesc_100);
            SumOwn_99 = ((MR_Word) (conv17_SumOwn_99));
            SumDesc_100 = ((MR_Word) (conv16_SumDesc_100));
            {
              Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_136, 0) = ((MR_Box) (SumDesc_100));
            }
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_4, ((MR_Box) (CallSiteDesc_7)), SumOwn_99, Var_136, &SummaryRowData_28);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word CallSiteCalleePerfs_30;
            MR_Word SumOwn_31;
            MR_Word SumDesc_32;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_41;
            MR_Word Var_42;
            MR_Word Var_134;
            MR_Box conv5_SumOwn_31;
            MR_Box conv4_SumDesc_32;

            KindAndInfo_17 = (MR_Word) ((MR_Unsigned) 12U);
            {
              Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_39, 0) = ((MR_Box) (&create_report_scalar_common_4[15]));
              MR_hl_field(0, Var_39, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_1));
              MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_39, 3) = ((MR_Box) (Deep_4));
              MR_hl_field(0, Var_39, 4) = ((MR_Box) (CallerPSPtr_10));
            }
            CallSiteCalleePerfs_30 = mercury__list__map_2_f_0((MR_Word) (&create_report_scalar_common_2[6]), (MR_Word) (&create_report__create_report__type_ctor_info_call_site_callee_perf_0), Var_39, CallSiteCalls_12);
            {
              Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_40, 0) = ((MR_Box) (&create_report_scalar_common_10[2]));
              MR_hl_field(0, Var_40, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_2));
              MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_40, 3) = ((MR_Box) (Deep_4));
            }
            Var_41 = measurements__zero_own_prof_info_0_f_0();
            Var_42 = measurements__zero_inherit_prof_info_0_f_0();
            mercury__list__map_foldl2_7_p_0((MR_Word) (&create_report__create_report__type_ctor_info_call_site_callee_perf_0), (MR_Word) (&create_report_scalar_common_1[3]), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), Var_40, CallSiteCalleePerfs_30, &SubRowDatas_29, ((MR_Box) (Var_41)), &conv5_SumOwn_31, ((MR_Box) (Var_42)), &conv4_SumDesc_32);
            SumOwn_31 = ((MR_Word) (conv5_SumOwn_31));
            SumDesc_32 = ((MR_Word) (conv4_SumDesc_32));
            {
              Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_134, 0) = ((MR_Box) (SumDesc_32));
            }
            create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_4, ((MR_Box) (CallSiteDesc_7)), SumOwn_31, Var_134, &SummaryRowData_28);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CalleePSPtr_13 = ((MR_Word) ((MR_hl_field(1, KindAndCallee_9, (MR_Integer) 0))));
        MR_String TypeSubstStr_14 = ((MR_String) ((MR_hl_field(1, KindAndCallee_9, (MR_Integer) 1))));
        MR_Word CalleeDesc_15;
        MR_Word NormalCallId_16;
        MR_Word Own_18;
        MR_Word Desc_19;
        MR_Word Var_137;

        CalleeDesc_15 = create_report__describe_proc_2_f_0(Deep_4, CalleePSPtr_13);
        {
          NormalCallId_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NormalCallId_16, 0) = ((MR_Box) (CalleeDesc_15));
          MR_hl_field(0, NormalCallId_16, 1) = ((MR_Box) (TypeSubstStr_14));
        }
        {
          KindAndInfo_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, KindAndInfo_17, 0) = ((MR_Box) (NormalCallId_16));
        }
        if ((CallSiteCalls_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          Own_18 = measurements__zero_own_prof_info_0_f_0();
          Desc_19 = measurements__zero_inherit_prof_info_0_f_0();
        }
        else
        {
          MR_Word Var_132 = ((MR_Word) ((MR_hl_field(1, CallSiteCalls_12, (MR_Integer) 1))));
          MR_Word Var_133 = ((MR_Word) ((MR_hl_field(1, CallSiteCalls_12, (MR_Integer) 0))));

          if ((Var_132 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word CalleePSPtrFromCall_21 = ((MR_Word) ((MR_hl_field(0, Var_133, (MR_Integer) 0))));
            MR_Word CallSiteCalleePerf_23;
            MR_Word Var_34;

            {
              Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_34, 0) = ((MR_Box) (&create_report_scalar_common_5[3]));
              MR_hl_field(0, Var_34, 1) = ((MR_Box) (create_report__create_call_site_summary_2_f_0_7));
              MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_34, 3) = ((MR_Box) (CalleePSPtr_13));
              MR_hl_field(0, Var_34, 4) = ((MR_Box) (CalleePSPtrFromCall_21));
            }
            mercury__require__require_2_p_0(Var_34, (MR_String) "create_call_site_summary: callee mismatch");
            CallSiteCalleePerf_23 = create_report__generate_call_site_callee_perf_3_f_0(Deep_4, CallerPSPtr_10, Var_133);
            Own_18 = ((MR_Word) ((MR_hl_field(0, CallSiteCalleePerf_23, (MR_Integer) 1))));
            Desc_19 = ((MR_Word) ((MR_hl_field(0, CallSiteCalleePerf_23, (MR_Integer) 2))));
          }
          else
            mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.create_call_site_summary\'/2", (MR_String) ">1 proc called at normal site");
        }
        {
          Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_137, 0) = ((MR_Box) (Desc_19));
        }
        create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_4, ((MR_Box) (CallSiteDesc_7)), Own_18, Var_137, &SummaryRowData_28);
        SubRowDatas_29 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  {
    CallSitePerf_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallSitePerf_6, 0) = ((MR_Box) (KindAndInfo_17));
    MR_hl_field(0, CallSitePerf_6, 1) = ((MR_Box) (SummaryRowData_28));
    MR_hl_field(0, CallSitePerf_6, 2) = ((MR_Box) (SubRowDatas_29));
  }
  return CallSitePerf_6;
}

static void MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Own_18;
  MR_Word conv0_STATE_VARIABLE_Desc_20;

  create_report__accumulate_csd_prof_info_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Own_18, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Desc_20);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Own_18));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Desc_20));
}

static MR_Word MR_CALL 
create_report__generate_call_site_callee_perf_3_f_0(
  MR_Word Deep_5,
  MR_Word CallerPSPtr_6,
  MR_Word HeadVar__3_3)
{
  MR_Word CalleeProf_9;
  MR_Word PSPtr_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word CSDPtrs_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word Own_10;
  MR_Word Desc_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Box conv3_Own_10;
  MR_Box conv2_Desc_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&create_report_scalar_common_10[1]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (create_report__generate_call_site_callee_perf_3_f_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Deep_5));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (CallerPSPtr_6));
  }
  Var_13 = measurements__zero_own_prof_info_0_f_0();
  Var_14 = measurements__zero_inherit_prof_info_0_f_0();
  mercury__list__foldl2_6_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), Var_12, CSDPtrs_8, ((MR_Box) (Var_13)), &conv3_Own_10, ((MR_Box) (Var_14)), &conv2_Desc_11);
  Own_10 = ((MR_Word) (conv3_Own_10));
  Desc_11 = ((MR_Word) (conv2_Desc_11));
  {
    CalleeProf_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CalleeProf_9, 0) = ((MR_Box) (PSPtr_7));
    MR_hl_field(0, CalleeProf_9, 1) = ((MR_Box) (Own_10));
    MR_hl_field(0, CalleeProf_9, 2) = ((MR_Box) (Desc_11));
  }
  return CalleeProf_9;
}

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_Own_8;
  MR_Word conv10_Desc_9;
  MR_Word conv9_CalleeCliqueRowData_10;

  create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv11_Own_8, &conv10_Desc_9, &conv9_CalleeCliqueRowData_10);
  *wrapper_arg_2 = ((MR_Box) (conv11_Own_8));
  *wrapper_arg_3 = ((MR_Box) (conv10_Desc_9));
  *wrapper_arg_4 = ((MR_Box) (conv9_CalleeCliqueRowData_10));
}

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_Own_8;
  MR_Word conv7_Desc_9;
  MR_Word conv6_CalleeCliqueRowData_10;

  create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv8_Own_8, &conv7_Desc_9, &conv6_CalleeCliqueRowData_10);
  *wrapper_arg_2 = ((MR_Box) (conv8_Own_8));
  *wrapper_arg_3 = ((MR_Box) (conv7_Desc_9));
  *wrapper_arg_4 = ((MR_Box) (conv6_CalleeCliqueRowData_10));
}

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Own_8;
  MR_Word conv4_Desc_9;
  MR_Word conv3_CalleeCliqueRowData_10;

  create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv5_Own_8, &conv4_Desc_9, &conv3_CalleeCliqueRowData_10);
  *wrapper_arg_2 = ((MR_Box) (conv5_Own_8));
  *wrapper_arg_3 = ((MR_Box) (conv4_Desc_9));
  *wrapper_arg_4 = ((MR_Box) (conv3_CalleeCliqueRowData_10));
}

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Own_8;
  MR_Word conv1_Desc_9;
  MR_Word conv0_CalleeCliqueRowData_10;

  create_report__create_callee_clique_perf_row_data_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Own_8, &conv1_Desc_9, &conv0_CalleeCliqueRowData_10);
  *wrapper_arg_2 = ((MR_Box) (conv2_Own_8));
  *wrapper_arg_3 = ((MR_Box) (conv1_Desc_9));
  *wrapper_arg_4 = ((MR_Box) (conv0_CalleeCliqueRowData_10));
}

static void MR_CALL 
create_report__create_child_call_site_report_3_p_0(
  MR_Word Deep_4,
  MR_Word Pair_5,
  MR_Word * CliqueCallSiteReport_6)
{
  MR_bool succeeded;
  MR_Word CSSPtr_7 = ((MR_Word) ((MR_hl_field(0, Pair_5, (MR_Integer) 0))));
  MR_Word CallSiteArraySlot_8 = ((MR_Word) ((MR_hl_field(0, Pair_5, (MR_Integer) 1))));
  MR_Word CSS_9;
  MR_Word CallSiteDesc_10;
  MR_Word Kind_11;
  MR_Word ProcDescKind_15;
  MR_Word Own_19;
  MR_Word Desc_20;
  MR_Word CalleeCliqueRowDatas_22;
  MR_Word SummaryRowData_29;
  MR_Word Var_146;

  profile__deep_lookup_call_site_statics_3_p_0(Deep_4, CSSPtr_7, &CSS_9);
  CallSiteDesc_10 = create_report__describe_call_site_2_f_0(Deep_4, CSSPtr_7);
  Kind_11 = ((MR_Word) ((MR_hl_field(0, CSS_9, (MR_Integer) 2))));
  switch (MR_tag((MR_Word) Kind_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Kind_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word CSDPtrs_135;
            MR_Word Owns_136;
            MR_Word Descs_137;
            MR_Word Var_140;

            ProcDescKind_15 = (MR_Word) ((MR_Unsigned) 0U);
            if (((MR_tag((MR_Word) CallSiteArraySlot_8)) == (MR_Integer) 1))
            {
              MR_ArrayPtr CSDPtrsArray_116 = ((MR_ArrayPtr) ((MR_hl_field(1, CallSiteArraySlot_8, (MR_Integer) 1))));

              mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (CSDPtrsArray_116), &CSDPtrs_135);
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
                return;
              }
            {
              Var_140 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_140, 0) = ((MR_Box) (&create_report_scalar_common_7[1]));
              MR_hl_field(0, Var_140, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_4));
              MR_hl_field(0, Var_140, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_140, 3) = ((MR_Box) (Deep_4));
            }
            mercury__list__map3_5_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_Word) (&create_report_scalar_common_1[5]), Var_140, CSDPtrs_135, &Owns_136, &Descs_137, &CalleeCliqueRowDatas_22);
            Own_19 = measurements__sum_own_infos_1_f_0(Owns_136);
            Desc_20 = measurements__sum_inherit_infos_1_f_0(Descs_137);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CSDPtrs_71;
            MR_Word Owns_72;
            MR_Word Descs_73;
            MR_Word Var_76;

            ProcDescKind_15 = (MR_Word) ((MR_Unsigned) 4U);
            if (((MR_tag((MR_Word) CallSiteArraySlot_8)) == (MR_Integer) 1))
            {
              MR_ArrayPtr CSDPtrsArray_52 = ((MR_ArrayPtr) ((MR_hl_field(1, CallSiteArraySlot_8, (MR_Integer) 1))));

              mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (CSDPtrsArray_52), &CSDPtrs_71);
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
                return;
              }
            {
              Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_76, 0) = ((MR_Box) (&create_report_scalar_common_7[1]));
              MR_hl_field(0, Var_76, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_2));
              MR_hl_field(0, Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_76, 3) = ((MR_Box) (Deep_4));
            }
            mercury__list__map3_5_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_Word) (&create_report_scalar_common_1[5]), Var_76, CSDPtrs_71, &Owns_72, &Descs_73, &CalleeCliqueRowDatas_22);
            Own_19 = measurements__sum_own_infos_1_f_0(Owns_72);
            Desc_20 = measurements__sum_inherit_infos_1_f_0(Descs_73);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CSDPtrs_103;
            MR_Word Owns_104;
            MR_Word Descs_105;
            MR_Word Var_108;

            ProcDescKind_15 = (MR_Word) ((MR_Unsigned) 8U);
            if (((MR_tag((MR_Word) CallSiteArraySlot_8)) == (MR_Integer) 1))
            {
              MR_ArrayPtr CSDPtrsArray_84 = ((MR_ArrayPtr) ((MR_hl_field(1, CallSiteArraySlot_8, (MR_Integer) 1))));

              mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (CSDPtrsArray_84), &CSDPtrs_103);
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
                return;
              }
            {
              Var_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_108, 0) = ((MR_Box) (&create_report_scalar_common_7[1]));
              MR_hl_field(0, Var_108, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_3));
              MR_hl_field(0, Var_108, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_108, 3) = ((MR_Box) (Deep_4));
            }
            mercury__list__map3_5_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_Word) (&create_report_scalar_common_1[5]), Var_108, CSDPtrs_103, &Owns_104, &Descs_105, &CalleeCliqueRowDatas_22);
            Own_19 = measurements__sum_own_infos_1_f_0(Owns_104);
            Desc_20 = measurements__sum_inherit_infos_1_f_0(Descs_105);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word CSDPtrs_26;
            MR_Word Owns_27;
            MR_Word Descs_28;
            MR_Word Var_35;

            ProcDescKind_15 = (MR_Word) ((MR_Unsigned) 12U);
            if (((MR_tag((MR_Word) CallSiteArraySlot_8)) == (MR_Integer) 1))
            {
              MR_ArrayPtr CSDPtrsArray_25 = ((MR_ArrayPtr) ((MR_hl_field(1, CallSiteArraySlot_8, (MR_Integer) 1))));

              mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (CSDPtrsArray_25), &CSDPtrs_26);
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "non-normal_call is normal");
                return;
              }
            {
              Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_35, 0) = ((MR_Box) (&create_report_scalar_common_7[1]));
              MR_hl_field(0, Var_35, 1) = ((MR_Box) (create_report__create_child_call_site_report_3_p_0_1));
              MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_35, 3) = ((MR_Box) (Deep_4));
            }
            mercury__list__map3_5_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_Word) (&create_report_scalar_common_1[5]), Var_35, CSDPtrs_26, &Owns_27, &Descs_28, &CalleeCliqueRowDatas_22);
            Own_19 = measurements__sum_own_infos_1_f_0(Owns_27);
            Desc_20 = measurements__sum_inherit_infos_1_f_0(Descs_28);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CalleePSPtr_12 = ((MR_Word) ((MR_hl_field(1, Kind_11, (MR_Integer) 0))));
        MR_String TypeSubst_13 = ((MR_String) ((MR_hl_field(1, Kind_11, (MR_Integer) 1))));
        MR_Word KnownCalleeDesc_14;
        MR_Word CSDPtr_16;

        KnownCalleeDesc_14 = create_report__describe_proc_2_f_0(Deep_4, CalleePSPtr_12);
        {
          ProcDescKind_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ProcDescKind_15, 0) = ((MR_Box) (KnownCalleeDesc_14));
          MR_hl_field(1, ProcDescKind_15, 1) = ((MR_Box) (TypeSubst_13));
        }
        if (((MR_tag((MR_Word) CallSiteArraySlot_8)) == (MR_Integer) 1))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_child_call_site_report\'/3", (MR_String) "normal_call is multi");
            return;
          }
        else
          CSDPtr_16 = ((MR_Word) ((MR_hl_field(0, CallSiteArraySlot_8, (MR_Integer) 0))));
        succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(Deep_4, CSDPtr_16);
        if (succeeded)
        {
          MR_Word CalleeCliqueRowData_21;

          create_report__create_callee_clique_perf_row_data_5_p_0(Deep_4, CSDPtr_16, &Own_19, &Desc_20, &CalleeCliqueRowData_21);
          {
            CalleeCliqueRowDatas_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, CalleeCliqueRowDatas_22, 0) = ((MR_Box) (CalleeCliqueRowData_21));
            MR_hl_field(1, CalleeCliqueRowDatas_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        else
        {
          Own_19 = measurements__zero_own_prof_info_0_f_0();
          Desc_20 = measurements__zero_inherit_prof_info_0_f_0();
          CalleeCliqueRowDatas_22 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      break;
  }
  {
    Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_146, 0) = ((MR_Box) (Desc_20));
  }
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_4, ((MR_Box) (CallSiteDesc_10)), Own_19, Var_146, &SummaryRowData_29);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *CliqueCallSiteReport_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SummaryRowData_29));
    MR_hl_field(0, base, 1) = ((MR_Box) (ProcDescKind_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (CalleeCliqueRowDatas_22));
  }
}

static MR_Box MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ProcDesc_6;

  conv0_ProcDesc_6 = create_report__describe_clique_member_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ProcDesc_6));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
create_report__create_callee_clique_perf_row_data_5_p_0(
  MR_Word Deep_6,
  MR_Word CSDPtr_7,
  MR_Word * Own_8,
  MR_Word * Desc_9,
  MR_Word * CalleeCliqueRowData_10)
{
  MR_bool succeeded;
  MR_Word CSD_11;
  MR_Word CalleePDPtr_12;
  MR_Word CalleeCliquePtr_13;
  MR_Word CliqueDesc_14;
  MR_Word Var_15;
  MR_Word Var_17;
  MR_Word Var_44;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&create_report_scalar_common_5[4]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (create_report__create_callee_clique_perf_row_data_5_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Deep_6));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (CSDPtr_7));
  }
  mercury__require__require_2_p_0(Var_15, (MR_String) "create_callee_clique_perf_row_data: invalid call_site_dynamic_ptr");
  profile__deep_lookup_call_site_dynamics_3_p_0(Deep_6, CSDPtr_7, &CSD_11);
  CalleePDPtr_12 = ((MR_Word) ((MR_hl_field(0, CSD_11, (MR_Integer) 1))));
  *Own_8 = ((MR_Word) ((MR_hl_field(0, CSD_11, (MR_Integer) 2))));
  profile__deep_lookup_csd_desc_3_p_0(Deep_6, CSDPtr_7, Desc_9);
  profile__deep_lookup_clique_index_3_p_0(Deep_6, CalleePDPtr_12, &CalleeCliquePtr_13);
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (CalleePDPtr_12));
  }
  succeeded = profile__valid_clique_ptr_2_p_0(Deep_6, CalleeCliquePtr_13);
  if (succeeded)
  {
    MR_Word MemberPDPtrs_23;
    MR_Word ParentCSDPtr_24;
    MR_Word EntryPDPtr_26;
    MR_Word ParentCSD_25;
    MR_Word OtherPDPtrs_27;

    profile__deep_lookup_clique_members_3_p_0(Deep_6, CalleeCliquePtr_13, &MemberPDPtrs_23);
    profile__deep_lookup_clique_parents_3_p_0(Deep_6, CalleeCliquePtr_13, &ParentCSDPtr_24);
    profile__deep_lookup_call_site_dynamics_3_p_0(Deep_6, ParentCSDPtr_24, &ParentCSD_25);
    EntryPDPtr_26 = ((MR_Word) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
    succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), MemberPDPtrs_23, ((MR_Box) (EntryPDPtr_26)), &OtherPDPtrs_27);
    if (succeeded)
    {
      MR_Word EntryProcDesc_28;
      MR_Word OtherProcDescs_29;
      MR_Word Var_30;
      MR_Word PD_40;
      MR_Word Var_41;

      profile__deep_lookup_proc_dynamics_3_p_0(Deep_6, EntryPDPtr_26, &PD_40);
      Var_41 = ((MR_Word) ((MR_hl_field(0, PD_40, (MR_Integer) 0))));
      EntryProcDesc_28 = create_report__describe_proc_2_f_0(Deep_6, Var_41);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_30, 0) = ((MR_Box) (&create_report_scalar_common_6[4]));
        MR_hl_field(0, Var_30, 1) = ((MR_Box) (create_report__create_callee_clique_perf_row_data_5_p_0_2));
        MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_30, 3) = ((MR_Box) (Deep_6));
      }
      OtherProcDescs_29 = mercury__list__map_2_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&report__report__type_ctor_info_proc_desc_0), Var_30, OtherPDPtrs_27);
      {
        CliqueDesc_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CliqueDesc_14, 0) = ((MR_Box) (CalleeCliquePtr_13));
        MR_hl_field(0, CliqueDesc_14, 1) = ((MR_Box) (EntryProcDesc_28));
        MR_hl_field(0, CliqueDesc_14, 2) = ((MR_Box) (OtherProcDescs_29));
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "entry pdptr not a member");
        return;
      }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "invalid clique_ptr");
      return;
    }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (*Desc_9));
  }
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_6, ((MR_Box) (CliqueDesc_14)), *Own_8, Var_44, CalleeCliqueRowData_10);
}

static void MR_CALL 
create_report__create_clique_proc_dynamic_report_7_p_0(
  MR_Word Deep_8,
  MR_Word _CliquePtr_9,
  MR_Word ProcDesc_10,
  MR_Word PDPtr_11,
  MR_Word * Own_12,
  MR_Word * Desc_13,
  MR_Word * CliquePDReport_14)
{
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(Deep_8, ProcDesc_10, PDPtr_11, Own_12, Desc_13, CliquePDReport_14);
}

static void MR_CALL 
create_report__create_clique_proc_report_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Own_12;
  MR_Word conv1_Desc_13;
  MR_Word conv0_CliquePDReport_14;

  create_report__create_clique_proc_dynamic_report_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_Own_12, &conv1_Desc_13, &conv0_CliquePDReport_14);
  *wrapper_arg_2 = ((MR_Box) (conv2_Own_12));
  *wrapper_arg_3 = ((MR_Box) (conv1_Desc_13));
  *wrapper_arg_4 = ((MR_Box) (conv0_CliquePDReport_14));
}

static void MR_CALL 
create_report__create_clique_proc_report_4_p_0(
  MR_Word Deep_5,
  MR_Word CliquePtr_6,
  MR_Word HeadVar__3_3,
  MR_Word * CliqueProcReport_9)
{
  MR_Word PSPtr_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word PDPtrs_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));

  if ((PDPtrs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_clique_proc_report\'/4", (MR_String) "PDPtrs = []");
      return;
    }
  else
  {
    MR_Word FirstPDPtr_10 = ((MR_Word) ((MR_hl_field(1, PDPtrs_8, (MR_Integer) 0))));
    MR_Word LaterPDPtrs_11 = ((MR_Word) ((MR_hl_field(1, PDPtrs_8, (MR_Integer) 1))));
    MR_Word ProcDesc_12;
    MR_Word FirstPDOwn_13;
    MR_Word FirstPDDesc_14;
    MR_Word FirstPDReport_15;
    MR_Word LaterPDOwns_16;
    MR_Word LaterPDDescs_17;
    MR_Word LaterPDReports_18;
    MR_Word SummaryOwn_19;
    MR_Word SummaryDesc_20;
    MR_Word ProcSummaryRowData_21;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_36;

    ProcDesc_12 = create_report__describe_proc_2_f_0(Deep_5, PSPtr_7);
    create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(Deep_5, ProcDesc_12, FirstPDPtr_10, &FirstPDOwn_13, &FirstPDDesc_14, &FirstPDReport_15);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&create_report_scalar_common_10[0]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (create_report__create_clique_proc_report_4_p_0_1));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (Deep_5));
      MR_hl_field(0, Var_24, 4) = ((MR_Box) (CliquePtr_6));
      MR_hl_field(0, Var_24, 5) = ((MR_Box) (ProcDesc_12));
    }
    mercury__list__map3_5_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_Word) (&report__report__type_ctor_info_clique_proc_dynamic_report_0), Var_24, LaterPDPtrs_11, &LaterPDOwns_16, &LaterPDDescs_17, &LaterPDReports_18);
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (FirstPDOwn_13));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (LaterPDOwns_16));
    }
    SummaryOwn_19 = measurements__sum_own_infos_1_f_0(Var_25);
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (FirstPDDesc_14));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (LaterPDDescs_17));
    }
    SummaryDesc_20 = measurements__sum_inherit_infos_1_f_0(Var_26);
    {
      Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_36, 0) = ((MR_Box) (SummaryDesc_20));
    }
    create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_5, ((MR_Box) (ProcDesc_12)), SummaryOwn_19, Var_36, &ProcSummaryRowData_21);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *CliqueProcReport_9 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ProcSummaryRowData_21));
      MR_hl_field(0, base, 1) = ((MR_Box) (FirstPDReport_15));
      MR_hl_field(0, base, 2) = ((MR_Box) (LaterPDReports_18));
    }
  }
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_CliqueCallSiteReport_6;

  create_report__create_child_call_site_report_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_CliqueCallSiteReport_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_CliqueCallSiteReport_6));
}

static MR_bool MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = create_report__IntroducedFrom__pred__create_clique_proc_dynamic_report__439__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0(
  MR_Word Deep_8,
  MR_Word ProcDesc_10,
  MR_Word PDPtr_11,
  MR_Word * Own_12,
  MR_Word * Desc_13,
  MR_Word * CliquePDReport_14)
{
  MR_bool succeeded;

  succeeded = profile__valid_proc_dynamic_ptr_2_p_0(Deep_8, PDPtr_11);
  if (succeeded)
  {
    MR_Word PDRowData_15;
    MR_Word PD_16;
    MR_Word PSPtr_17;
    MR_Word CliqueCallSiteReports_18;
    MR_Word Var_19;
    MR_Word Var_21;
    MR_Word Var_32;
    MR_Word PairedSlots_33;
    MR_Word Var_34;

    profile__deep_lookup_pd_own_3_p_0(Deep_8, PDPtr_11, Own_12);
    profile__deep_lookup_pd_desc_3_p_0(Deep_8, PDPtr_11, Desc_13);
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (*Desc_13));
    }
    create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_8, ((MR_Box) (ProcDesc_10)), *Own_12, Var_32, &PDRowData_15);
    profile__deep_lookup_proc_dynamics_3_p_0(Deep_8, PDPtr_11, &PD_16);
    PSPtr_17 = ((MR_Word) ((MR_hl_field(0, PD_16, (MR_Integer) 0))));
    Var_21 = ((MR_Word) ((MR_hl_field(0, ProcDesc_10, (MR_Integer) 0))));
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&create_report_scalar_common_5[3]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (PSPtr_17));
      MR_hl_field(0, Var_19, 4) = ((MR_Box) (Var_21));
    }
    mercury__require__require_2_p_0(Var_19, (MR_String) "create_clique_proc_dynamic_report: psptr mismatch");
    analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(Deep_8, PDPtr_11, &PairedSlots_33);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (&create_report_scalar_common_6[5]));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_114_101_97_116_101_95_99_108_105_113_117_101_95_112_114_111_99_95_100_121_110_97_109_105_99_95_114_101_112_111_114_116_95_95_91_50_93_95_48_7_p_0_2));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_34, 3) = ((MR_Box) (Deep_8));
    }
    mercury__list__map_3_p_0((MR_Word) (&create_report_scalar_common_2[3]), (MR_Word) (&report__report__type_ctor_info_clique_call_site_report_0), Var_34, PairedSlots_33, &CliqueCallSiteReports_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *CliquePDReport_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (PDRowData_15));
      MR_hl_field(0, base, 1) = ((MR_Box) (CliqueCallSiteReports_18));
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_clique_proc_dynamic_report\'/7", (MR_String) "invalid proc_dynamic index");
      return;
    }
}

static MR_bool MR_CALL 
create_report__proc_group_contains_2_p_0(
  MR_Word EntryPDPtr_3,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word PDPtrs_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

  succeeded = mercury__list__member_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), ((MR_Box) (EntryPDPtr_3)), PDPtrs_5);
  return succeeded;
}

static MR_bool MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = profile__valid_proc_dynamic_ptr_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
create_report__group_proc_dynamics_by_proc_static_4_p_0(
  MR_Word Deep_5,
  MR_Word PDPtr_6,
  MR_Word STATE_VARIABLE_PStoPDsMap_0_12,
  MR_Word * STATE_VARIABLE_PStoPDsMap_13)
{
  MR_bool succeeded;
  MR_Word PD_8;
  MR_Word PSPtr_9;
  MR_Word Var_14;
  MR_Word PSPDs0_10;
  MR_Box conv0_PSPDs0_10;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&create_report_scalar_common_5[2]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (create_report__group_proc_dynamics_by_proc_static_4_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Deep_5));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (PDPtr_6));
  }
  mercury__require__require_2_p_0(Var_14, (MR_String) "group_proc_dynamics_by_proc_static: invalid PDPtr");
  profile__deep_lookup_proc_dynamics_3_p_0(Deep_5, PDPtr_6, &PD_8);
  PSPtr_9 = ((MR_Word) ((MR_hl_field(0, PD_8, (MR_Integer) 0))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&create_report_scalar_common_1[0]), STATE_VARIABLE_PStoPDsMap_0_12, ((MR_Box) (PSPtr_9)), &conv0_PSPDs0_10);
  if (succeeded)
  {
    PSPDs0_10 = ((MR_Word) (conv0_PSPDs0_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word PSPDs_11;

    {
      PSPDs_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PSPDs_11, 0) = ((MR_Box) (PDPtr_6));
      MR_hl_field(1, PSPDs_11, 1) = ((MR_Box) (PSPDs0_10));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&create_report_scalar_common_1[0]), ((MR_Box) (PSPtr_9)), ((MR_Box) (PSPDs_11)), STATE_VARIABLE_PStoPDsMap_0_12, STATE_VARIABLE_PStoPDsMap_13);
  }
  else
  {
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (PDPtr_6));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&create_report_scalar_common_1[0]), ((MR_Box) (PSPtr_9)), ((MR_Box) (Var_17)), STATE_VARIABLE_PStoPDsMap_0_12, STATE_VARIABLE_PStoPDsMap_13);
  }
}

static void MR_CALL 
create_report__find_start_of_action_callee_4_p_0(
  MR_Integer Percent_5,
  MR_Word RowData_6,
  MR_Word STATE_VARIABLE_ActionCliquePtrs_0_13,
  MR_Word * STATE_VARIABLE_ActionCliquePtrs_14)
{
  MR_bool succeeded;
  MR_Word MaybeTotalPerf_8 = ((MR_Word) ((MR_hl_field(0, RowData_6, (MR_Integer) 8))));

  if ((MaybeTotalPerf_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.find_start_of_action_callee\'/4", (MR_String) "no total perf");
      return;
    }
  else
  {
    MR_Word TotalPerf_9 = ((MR_Word) ((MR_hl_field(1, MaybeTotalPerf_8, (MR_Integer) 0))));
    MR_Word CallSeqsPercent_10 = ((MR_Word) ((MR_hl_field(0, TotalPerf_9, (MR_Integer) 5))));

    succeeded = measurement_units__percent_at_or_above_threshold_2_p_0(Percent_5, CallSeqsPercent_10);
    if (succeeded)
    {
      MR_Word CliqueDesc_11 = ((MR_Word) ((MR_hl_field(0, RowData_6, (MR_Integer) 0))));
      MR_Word CliquePtr_12 = ((MR_Word) ((MR_hl_field(0, CliqueDesc_11, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_ActionCliquePtrs_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CliquePtr_12));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ActionCliquePtrs_0_13));
      }
    }
    else
      *STATE_VARIABLE_ActionCliquePtrs_14 = STATE_VARIABLE_ActionCliquePtrs_0_13;
  }
}

static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ActionCliquePtrs_14;

  create_report__find_start_of_action_callee_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ActionCliquePtrs_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ActionCliquePtrs_14));
}

static void MR_CALL 
create_report__find_start_of_action_call_site_4_p_0(
  MR_Integer Percent_5,
  MR_Word CallSiteReport_6,
  MR_Word STATE_VARIABLE_ActionCliquePtrs_0_11,
  MR_Word * STATE_VARIABLE_ActionCliquePtrs_12)
{
  MR_Word CalleeRowDatas_10 = ((MR_Word) ((MR_hl_field(0, CallSiteReport_6, (MR_Integer) 2))));
  MR_Word Var_13;
  MR_Box conv1_STATE_VARIABLE_ActionCliquePtrs_12;

  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&create_report_scalar_common_4[14]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (create_report__find_start_of_action_call_site_4_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Percent_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&create_report_scalar_common_1[5]), (MR_Word) (&create_report_scalar_common_1[4]), Var_13, CalleeRowDatas_10, ((MR_Box) (STATE_VARIABLE_ActionCliquePtrs_0_11)), &conv1_STATE_VARIABLE_ActionCliquePtrs_12);
  *STATE_VARIABLE_ActionCliquePtrs_12 = ((MR_Word) (conv1_STATE_VARIABLE_ActionCliquePtrs_12));
}

static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ActionCliquePtrs_12;

  create_report__find_start_of_action_call_site_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ActionCliquePtrs_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ActionCliquePtrs_12));
}

static void MR_CALL 
create_report__find_start_of_action_clique_proc_dynamic_4_p_0(
  MR_Integer Percent_5,
  MR_Word CliquePDReport_6,
  MR_Word STATE_VARIABLE_ActionCliquePtrs_0_10,
  MR_Word * STATE_VARIABLE_ActionCliquePtrs_11)
{
  MR_Word CallSites_9 = ((MR_Word) ((MR_hl_field(0, CliquePDReport_6, (MR_Integer) 1))));
  MR_Word Var_12;
  MR_Box conv1_STATE_VARIABLE_ActionCliquePtrs_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&create_report_scalar_common_4[12]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (create_report__find_start_of_action_clique_proc_dynamic_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Percent_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&report__report__type_ctor_info_clique_call_site_report_0), (MR_Word) (&create_report_scalar_common_1[4]), Var_12, CallSites_9, ((MR_Box) (STATE_VARIABLE_ActionCliquePtrs_0_10)), &conv1_STATE_VARIABLE_ActionCliquePtrs_11);
  *STATE_VARIABLE_ActionCliquePtrs_11 = ((MR_Word) (conv1_STATE_VARIABLE_ActionCliquePtrs_11));
}

static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ActionCliquePtrs_11;

  create_report__find_start_of_action_clique_proc_dynamic_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ActionCliquePtrs_11);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ActionCliquePtrs_11));
}

static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ActionCliquePtrs_12;

  create_report__find_start_of_action_call_site_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ActionCliquePtrs_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ActionCliquePtrs_12));
}

static void MR_CALL 
create_report__find_start_of_action_clique_proc_4_p_0(
  MR_Integer Percent_5,
  MR_Word CliqueProcReport_6,
  MR_Word STATE_VARIABLE_ActionCliquePtrs_0_11,
  MR_Word * STATE_VARIABLE_ActionCliquePtrs_12)
{
  MR_Word FirstPDReport_9 = ((MR_Word) ((MR_hl_field(0, CliqueProcReport_6, (MR_Integer) 1))));
  MR_Word LaterPDReports_10 = ((MR_Word) ((MR_hl_field(0, CliqueProcReport_6, (MR_Integer) 2))));
  MR_Word STATE_VARIABLE_ActionCliquePtrs_13_13;
  MR_Word Var_14;
  MR_Word CallSites_21 = ((MR_Word) ((MR_hl_field(0, FirstPDReport_9, (MR_Integer) 1))));
  MR_Word Var_22;
  MR_Box conv1_STATE_VARIABLE_ActionCliquePtrs_13_13;
  MR_Box conv3_STATE_VARIABLE_ActionCliquePtrs_12;

  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&create_report_scalar_common_4[12]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (create_report__find_start_of_action_clique_proc_4_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (Percent_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&report__report__type_ctor_info_clique_call_site_report_0), (MR_Word) (&create_report_scalar_common_1[4]), Var_22, CallSites_21, ((MR_Box) (STATE_VARIABLE_ActionCliquePtrs_0_11)), &conv1_STATE_VARIABLE_ActionCliquePtrs_13_13);
  STATE_VARIABLE_ActionCliquePtrs_13_13 = ((MR_Word) (conv1_STATE_VARIABLE_ActionCliquePtrs_13_13));
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&create_report_scalar_common_4[13]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (create_report__find_start_of_action_clique_proc_4_p_0_2));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Percent_5));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&report__report__type_ctor_info_clique_proc_dynamic_report_0), (MR_Word) (&create_report_scalar_common_1[4]), Var_14, LaterPDReports_10, ((MR_Box) (STATE_VARIABLE_ActionCliquePtrs_13_13)), &conv3_STATE_VARIABLE_ActionCliquePtrs_12);
  *STATE_VARIABLE_ActionCliquePtrs_12 = ((MR_Word) (conv3_STATE_VARIABLE_ActionCliquePtrs_12));
}

void MR_CALL 
create_report__own_and_inherit_to_perf_row_data_5_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Deep_6,
  MR_Box Subject_7,
  MR_Word Own_8,
  MR_Word Desc_9,
  MR_Word * RowData_10)
{
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Desc_9));
  }
  create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_6, Subject_7, Own_8, Var_11, RowData_10);
}

void MR_CALL 
create_report__create_report_3_p_0(
  MR_Word Cmd_4,
  MR_Word Deep_5,
  MR_Word * Report_6)
{
  switch (MR_tag((MR_Word) Cmd_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Cmd_4)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Msg_7;
            MR_Word MessageReport_8;
            MR_String Var_56 = ((MR_String) ((MR_hl_field(0, Deep_5, (MR_Integer) 3))));
            MR_String Var_182;

            Var_182 = mercury__string__f_43_43_2_f_0(Var_56, (MR_String) ".");
            Msg_7 = mercury__string__f_43_43_2_f_0((MR_String) "Shutting down deep profile server for ", Var_182);
            MessageReport_8 = (MR_Word) (Msg_7);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Report_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (MessageReport_8));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140create_report.create_report\'/3", (MR_String) "restart command");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ProgramName_10;
            MR_Integer NumCSD_11;
            MR_Integer NumCSS_12;
            MR_Integer NumPD_13;
            MR_Integer NumPS_14;
            MR_Integer QuantaPerSec_15;
            MR_Integer InstrumentationQuanta_16;
            MR_Integer UserQuanta_17;
            MR_Integer NumCallseqs_18;
            MR_Integer NumCliques_20;
            MR_Word MenuReport_21;
            MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, Deep_5, (MR_Integer) 0))));
            MR_Word Var_66;
            MR_ArrayPtr Var_120 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_5, (MR_Integer) 10))));

            ProgramName_10 = ((MR_String) ((MR_hl_field(0, Var_64, (MR_Integer) 0))));
            NumCSD_11 = ((MR_Integer) ((MR_hl_field(0, Var_64, (MR_Integer) 1))));
            NumCSS_12 = ((MR_Integer) ((MR_hl_field(0, Var_64, (MR_Integer) 2))));
            NumPD_13 = ((MR_Integer) ((MR_hl_field(0, Var_64, (MR_Integer) 3))));
            NumPS_14 = ((MR_Integer) ((MR_hl_field(0, Var_64, (MR_Integer) 4))));
            QuantaPerSec_15 = ((MR_Integer) ((MR_hl_field(0, Var_64, (MR_Integer) 5))));
            InstrumentationQuanta_16 = ((MR_Integer) ((MR_hl_field(0, Var_64, (MR_Integer) 6))));
            UserQuanta_17 = ((MR_Integer) ((MR_hl_field(0, Var_64, (MR_Integer) 7))));
            NumCallseqs_18 = ((MR_Integer) ((MR_hl_field(0, Var_64, (MR_Integer) 8))));
            NumCliques_20 = mercury__array__max_1_f_0((MR_Word) (&create_report_scalar_common_1[0]), (MR_ArrayPtr) (Var_120));
            {
              MenuReport_21 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, MenuReport_21, 0) = ((MR_Box) (ProgramName_10));
              MR_hl_field(0, MenuReport_21, 1) = ((MR_Box) (QuantaPerSec_15));
              MR_hl_field(0, MenuReport_21, 2) = ((MR_Box) (UserQuanta_17));
              MR_hl_field(0, MenuReport_21, 3) = ((MR_Box) (InstrumentationQuanta_16));
              MR_hl_field(0, MenuReport_21, 4) = ((MR_Box) (NumCallseqs_18));
              MR_hl_field(0, MenuReport_21, 5) = ((MR_Box) (NumCSD_11));
              MR_hl_field(0, MenuReport_21, 6) = ((MR_Box) (NumCSS_12));
              MR_hl_field(0, MenuReport_21, 7) = ((MR_Box) (NumPD_13));
              MR_hl_field(0, MenuReport_21, 8) = ((MR_Box) (NumPS_14));
              MR_hl_field(0, MenuReport_21, 9) = ((MR_Box) (NumCliques_20));
            }
            {
              Var_66 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_66, 0) = ((MR_Box) (MenuReport_21));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Var_66));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word MaybeRecTypesFreqReport_37;

            recursion_patterns__create_recursion_types_frequency_report_2_p_0(Deep_5, &MaybeRecTypesFreqReport_37);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeRecTypesFreqReport_37));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word MaybeProgramModulesReport_38;

            create_report__create_program_modules_report_2_p_0(Deep_5, &MaybeProgramModulesReport_38);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeProgramModulesReport_38));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer Timeout_9 = ((MR_Integer) ((MR_hl_field(1, Cmd_4, (MR_Integer) 0))));
        MR_String Msg_67;
        MR_Word MessageReport_68;
        MR_String Var_172;
        MR_String Var_179;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&create_report_scalar_common_3[0]), Timeout_9, &Var_172);
        Var_179 = mercury__string__f_43_43_2_f_0(Var_172, (MR_String) " minutes.");
        Msg_67 = mercury__string__f_43_43_2_f_0((MR_String) "Timeout set to ", Var_179);
        MessageReport_68 = (MR_Word) (Msg_67);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Report_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (MessageReport_68));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word MaybePercent_22 = ((MR_Word) ((MR_hl_field(2, Cmd_4, (MR_Integer) 0))));
        MR_Word MaybeCliqueReport_23;

        create_report__create_root_report_3_p_0(Deep_5, MaybePercent_22, &MaybeCliqueReport_23);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Report_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (MaybeCliqueReport_23));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Cmd_4, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word CliquePtr_24 = ((MR_Word) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));
            MR_Word MaybeCliqueReport_69;

            create_report__create_clique_report_3_p_0(Deep_5, CliquePtr_24, &MaybeCliqueReport_69);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(2, base, 0) = ((MR_Box) (MaybeCliqueReport_69));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word MaybeCliqueRecursionReport_25;
            MR_Word CliquePtr_70 = ((MR_Word) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));

            recursion_patterns__create_clique_recursion_costs_report_3_p_0(Deep_5, CliquePtr_70, &MaybeCliqueRecursionReport_25);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeCliqueRecursionReport_25));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PSPtr_26 = ((MR_Word) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));
            MR_Word MaybeProcReport_27;

            create_report__create_proc_report_3_p_0(Deep_5, PSPtr_26, &MaybeProcReport_27);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeProcReport_27));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word CallerGroups_28 = ((MR_Unsigned) ((MR_hl_field(3, Cmd_4, (MR_Integer) 2))) & (MR_Integer) 3);
            MR_Integer BunchNum_29 = ((MR_Integer) ((MR_hl_field(3, Cmd_4, (MR_Integer) 3))));
            MR_Integer CallersPerBunch_30 = ((MR_Integer) ((MR_hl_field(3, Cmd_4, (MR_Integer) 4))));
            MR_Word Contour_31 = ((MR_Unsigned) ((MR_hl_field(3, Cmd_4, (MR_Integer) 5))) & (MR_Integer) 1);
            MR_Word MaybeProcCallersReport_32;
            MR_Word PSPtr_71 = ((MR_Word) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));

            create_report__create_proc_callers_report_7_p_0(Deep_5, PSPtr_71, CallerGroups_28, BunchNum_29, CallersPerBunch_30, Contour_31, &MaybeProcCallersReport_32);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeProcCallersReport_32));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word PSPtr_72 = ((MR_Word) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));
            MR_Word MaybeProcrepCoverageReport_170;

            create_report__create_static_procrep_coverage_report_3_p_0(Deep_5, PSPtr_72, &MaybeProcrepCoverageReport_170);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeProcrepCoverageReport_170));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MaybeProcrepCoverageReport_33;
            MR_Word PDPtr_34 = ((MR_Word) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));

            create_report__create_dynamic_procrep_coverage_report_3_p_0(Deep_5, PDPtr_34, &MaybeProcrepCoverageReport_33);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeProcrepCoverageReport_33));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word CSDPtr_35 = ((MR_Word) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));
            MR_Word MaybeVarUse_36;

            create_report__create_call_site_dynamic_var_use_report_3_p_0(Deep_5, CSDPtr_35, &MaybeVarUse_36);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 15U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeVarUse_36));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_String ModuleName_39 = ((MR_String) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));
            MR_Word MaybeModuleReport_40;

            create_report__create_module_report_3_p_0(Deep_5, ModuleName_39, &MaybeModuleReport_40);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeModuleReport_40));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word MaybeModuleGetterSettersReport_41;
            MR_String ModuleName_75 = ((MR_String) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));

            create_report__create_module_getter_setter_report_3_p_0(Deep_5, ModuleName_75, &MaybeModuleGetterSettersReport_41);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeModuleGetterSettersReport_41));
            }
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word MaybeModuleRepReport_42;
            MR_String ModuleName_76 = ((MR_String) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));

            create_report__create_module_rep_report_3_p_0(Deep_5, ModuleName_76, &MaybeModuleRepReport_42);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeModuleRepReport_42));
            }
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Limit_43 = ((MR_Word) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));
            MR_Word CostKind_44 = ((((MR_Unsigned) ((MR_hl_field(3, Cmd_4, (MR_Integer) 2))) >> 2)) & (MR_Integer) 7);
            MR_Word InclDesc_45 = ((((MR_Unsigned) ((MR_hl_field(3, Cmd_4, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
            MR_Word Scope_46 = ((MR_Unsigned) ((MR_hl_field(3, Cmd_4, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word MaybeTopProcsReport_47;

            create_report__create_top_procs_report_6_p_0(Deep_5, Limit_43, CostKind_44, InclDesc_45, Scope_46, &MaybeTopProcsReport_47);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeTopProcsReport_47));
            }
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word MaybeCliqueDump_48;
            MR_Word CliquePtr_77 = ((MR_Word) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));

            create_report__create_clique_dump_report_3_p_0(Deep_5, CliquePtr_77, &MaybeCliqueDump_48);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeCliqueDump_48));
            }
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeProcStaticDump_49;
            MR_Word PSPtr_78 = ((MR_Word) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));

            create_report__create_proc_static_dump_report_3_p_0(Deep_5, PSPtr_78, &MaybeProcStaticDump_49);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 10U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeProcStaticDump_49));
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word MaybeProcDynamicDump_50;
            MR_Word PDPtr_79 = ((MR_Word) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));

            create_report__create_proc_dynamic_dump_report_3_p_0(Deep_5, PDPtr_79, &MaybeProcDynamicDump_50);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 11U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeProcDynamicDump_50));
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word CSSPtr_51 = ((MR_Word) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));
            MR_Word MaybeCallSiteStaticDump_52;

            create_report__create_call_site_static_dump_report_3_p_0(Deep_5, CSSPtr_51, &MaybeCallSiteStaticDump_52);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 12U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeCallSiteStaticDump_52));
            }
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word CSDPtr_80 = ((MR_Word) ((MR_hl_field(3, Cmd_4, (MR_Integer) 1))));
            MR_Word MaybeCallSiteStaticDump_81;

            create_report__create_call_site_dynamic_dump_report_3_p_0(Deep_5, CSDPtr_80, &MaybeCallSiteStaticDump_81);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Report_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(3, base, 1) = ((MR_Box) (MaybeCallSiteStaticDump_81));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
create_report__create_call_site_dynamic_dump_report_3_p_0(
  MR_Word Deep_4,
  MR_Word CSDPtr_5,
  MR_Word * MaybeCallSiteDynamicDumpInfo_6)
{
  MR_bool succeeded;

  succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(Deep_4, CSDPtr_5);
  if (succeeded)
  {
    MR_Word CSD_7;
    MR_Word CallerPSPtr_8;
    MR_Word CalleePSDPtr_9;
    MR_Word Own_10;
    MR_Word Desc_11;
    MR_Word CSSPtr_12;
    MR_Word CallSiteDesc_13;
    MR_Word PerfRowData_14;
    MR_Word CallSiteDynamicDumpInfo_15;
    MR_Word Var_18;

    profile__deep_lookup_call_site_dynamics_3_p_0(Deep_4, CSDPtr_5, &CSD_7);
    CallerPSPtr_8 = ((MR_Word) ((MR_hl_field(0, CSD_7, (MR_Integer) 0))));
    CalleePSDPtr_9 = ((MR_Word) ((MR_hl_field(0, CSD_7, (MR_Integer) 1))));
    Own_10 = ((MR_Word) ((MR_hl_field(0, CSD_7, (MR_Integer) 2))));
    Desc_11 = measurements__zero_inherit_prof_info_0_f_0();
    profile__deep_lookup_call_site_static_map_3_p_0(Deep_4, CSDPtr_5, &CSSPtr_12);
    CallSiteDesc_13 = create_report__describe_call_site_2_f_0(Deep_4, CSSPtr_12);
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (Desc_11));
    }
    create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_4, ((MR_Box) (CallSiteDesc_13)), Own_10, Var_18, &PerfRowData_14);
    {
      CallSiteDynamicDumpInfo_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CallSiteDynamicDumpInfo_15, 0) = ((MR_Box) (CSDPtr_5));
      MR_hl_field(0, CallSiteDynamicDumpInfo_15, 1) = ((MR_Box) (CallerPSPtr_8));
      MR_hl_field(0, CallSiteDynamicDumpInfo_15, 2) = ((MR_Box) (CalleePSDPtr_9));
      MR_hl_field(0, CallSiteDynamicDumpInfo_15, 3) = ((MR_Box) (PerfRowData_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCallSiteDynamicDumpInfo_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (CallSiteDynamicDumpInfo_15));
    }
  }
  else
    *MaybeCallSiteDynamicDumpInfo_6 = (MR_Word) (MR_mkword(1, &create_report_scalar_common_3[10]));
}

static void MR_CALL 
create_report__create_call_site_static_dump_report_3_p_0(
  MR_Word Deep_4,
  MR_Word CSSPtr_5,
  MR_Word * MaybeCallSiteStaticDumpInfo_6)
{
  MR_bool succeeded;

  succeeded = profile__valid_call_site_static_ptr_2_p_0(Deep_4, CSSPtr_5);
  if (succeeded)
  {
    MR_Word CSS_7;
    MR_Word ContainingPSPtr_8;
    MR_Integer SlotNumber_9;
    MR_Word CallSiteKind_10;
    MR_Integer LineNumber_11;
    MR_Word GoalPath_12;
    MR_Word CallSiteStaticDumpInfo_13;

    profile__deep_lookup_call_site_statics_3_p_0(Deep_4, CSSPtr_5, &CSS_7);
    ContainingPSPtr_8 = ((MR_Word) ((MR_hl_field(0, CSS_7, (MR_Integer) 0))));
    SlotNumber_9 = ((MR_Integer) ((MR_hl_field(0, CSS_7, (MR_Integer) 1))));
    CallSiteKind_10 = ((MR_Word) ((MR_hl_field(0, CSS_7, (MR_Integer) 2))));
    LineNumber_11 = ((MR_Integer) ((MR_hl_field(0, CSS_7, (MR_Integer) 3))));
    GoalPath_12 = ((MR_Word) ((MR_hl_field(0, CSS_7, (MR_Integer) 4))));
    {
      CallSiteStaticDumpInfo_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CallSiteStaticDumpInfo_13, 0) = ((MR_Box) (CSSPtr_5));
      MR_hl_field(0, CallSiteStaticDumpInfo_13, 1) = ((MR_Box) (ContainingPSPtr_8));
      MR_hl_field(0, CallSiteStaticDumpInfo_13, 2) = ((MR_Box) (SlotNumber_9));
      MR_hl_field(0, CallSiteStaticDumpInfo_13, 3) = ((MR_Box) (LineNumber_11));
      MR_hl_field(0, CallSiteStaticDumpInfo_13, 4) = ((MR_Box) (GoalPath_12));
      MR_hl_field(0, CallSiteStaticDumpInfo_13, 5) = ((MR_Box) (CallSiteKind_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCallSiteStaticDumpInfo_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (CallSiteStaticDumpInfo_13));
    }
  }
  else
    *MaybeCallSiteStaticDumpInfo_6 = (MR_Word) (MR_mkword(1, &create_report_scalar_common_3[9]));
}

static void MR_CALL 
create_report__create_proc_dynamic_dump_report_3_p_0(
  MR_Word Deep_4,
  MR_Word PDPtr_5,
  MR_Word * MaybeProcDynamicDumpInfo_6)
{
  MR_bool succeeded;

  succeeded = profile__valid_proc_dynamic_ptr_2_p_0(Deep_4, PDPtr_5);
  if (succeeded)
  {
    MR_Word PD_7;
    MR_Word PSPtr_8;
    MR_ArrayPtr CallSiteArray_9;
    MR_Word MaybeCPCounts_10;
    MR_Word PS_11;
    MR_String RawName_12;
    MR_String ModuleName_13;
    MR_String UnQualRefinedName_14;
    MR_String QualRefinedName_15;
    MR_Word CallSites_16;
    MR_Word MaybeCPs_20;
    MR_Word ProcDynamicDumpInfo_21;

    profile__deep_lookup_proc_dynamics_3_p_0(Deep_4, PDPtr_5, &PD_7);
    PSPtr_8 = ((MR_Word) ((MR_hl_field(0, PD_7, (MR_Integer) 0))));
    CallSiteArray_9 = ((MR_ArrayPtr) ((MR_hl_field(0, PD_7, (MR_Integer) 1))));
    MaybeCPCounts_10 = ((MR_Word) ((MR_hl_field(0, PD_7, (MR_Integer) 2))));
    profile__deep_lookup_proc_statics_3_p_0(Deep_4, PSPtr_8, &PS_11);
    ModuleName_13 = ((MR_String) ((MR_hl_field(0, PS_11, (MR_Integer) 1))));
    UnQualRefinedName_14 = ((MR_String) ((MR_hl_field(0, PS_11, (MR_Integer) 2))));
    QualRefinedName_15 = ((MR_String) ((MR_hl_field(0, PS_11, (MR_Integer) 3))));
    RawName_12 = ((MR_String) ((MR_hl_field(0, PS_11, (MR_Integer) 4))));
    mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (CallSiteArray_9), &CallSites_16);
    if ((MaybeCPCounts_10 == (MR_Word) ((MR_Unsigned) 0U)))
      MaybeCPs_20 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_ArrayPtr CPCounts_17 = ((MR_ArrayPtr) ((MR_hl_field(1, MaybeCPCounts_10, (MR_Integer) 0))));
      MR_ArrayPtr CPInfos_18 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_11, (MR_Integer) 9))));
      MR_Word CPs_19;

      coverage__coverage_point_arrays_to_list_3_p_0(CPInfos_18, CPCounts_17, &CPs_19);
      {
        MaybeCPs_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeCPs_20, 0) = ((MR_Box) (CPs_19));
      }
    }
    {
      ProcDynamicDumpInfo_21 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcDynamicDumpInfo_21, 0) = ((MR_Box) (PDPtr_5));
      MR_hl_field(0, ProcDynamicDumpInfo_21, 1) = ((MR_Box) (PSPtr_8));
      MR_hl_field(0, ProcDynamicDumpInfo_21, 2) = ((MR_Box) (RawName_12));
      MR_hl_field(0, ProcDynamicDumpInfo_21, 3) = ((MR_Box) (ModuleName_13));
      MR_hl_field(0, ProcDynamicDumpInfo_21, 4) = ((MR_Box) (UnQualRefinedName_14));
      MR_hl_field(0, ProcDynamicDumpInfo_21, 5) = ((MR_Box) (QualRefinedName_15));
      MR_hl_field(0, ProcDynamicDumpInfo_21, 6) = ((MR_Box) (CallSites_16));
      MR_hl_field(0, ProcDynamicDumpInfo_21, 7) = ((MR_Box) (MaybeCPs_20));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeProcDynamicDumpInfo_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ProcDynamicDumpInfo_21));
    }
  }
  else
    *MaybeProcDynamicDumpInfo_6 = (MR_Word) (MR_mkword(1, &create_report_scalar_common_3[8]));
}

static void MR_CALL 
create_report__create_proc_static_dump_report_3_p_0(
  MR_Word Deep_4,
  MR_Word PSPtr_5,
  MR_Word * MaybeProcStaticDumpInfo_6)
{
  MR_bool succeeded;

  succeeded = profile__valid_proc_static_ptr_2_p_0(Deep_4, PSPtr_5);
  if (succeeded)
  {
    MR_Word PS_7;
    MR_String UnQualRefinedName_10;
    MR_String QualRefinedName_11;
    MR_String RawName_12;
    MR_String FileName_13;
    MR_Integer LineNumber_14;
    MR_ArrayPtr CallSites_16;
    MR_ArrayPtr CoveragePointInfos_17;
    MR_Integer MaxCallSiteIdx_20;
    MR_Integer NumCallSites_21;
    MR_Integer MaxCoveragePointIdx_22;
    MR_Integer NumCoveragePoints_23;
    MR_Word ProcStaticDumpInfo_24;

    profile__deep_lookup_proc_statics_3_p_0(Deep_4, PSPtr_5, &PS_7);
    UnQualRefinedName_10 = ((MR_String) ((MR_hl_field(0, PS_7, (MR_Integer) 2))));
    QualRefinedName_11 = ((MR_String) ((MR_hl_field(0, PS_7, (MR_Integer) 3))));
    RawName_12 = ((MR_String) ((MR_hl_field(0, PS_7, (MR_Integer) 4))));
    FileName_13 = ((MR_String) ((MR_hl_field(0, PS_7, (MR_Integer) 5))));
    LineNumber_14 = ((MR_Integer) ((MR_hl_field(0, PS_7, (MR_Integer) 6))));
    CallSites_16 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_7, (MR_Integer) 8))));
    CoveragePointInfos_17 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_7, (MR_Integer) 9))));
    mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_ArrayPtr) (CallSites_16), &MaxCallSiteIdx_20);
    NumCallSites_21 = (MR_Integer) ((MR_Unsigned) MaxCallSiteIdx_20 + (MR_Unsigned) 1);
    mercury__array__max_2_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_coverage_point_info_0), (MR_ArrayPtr) (CoveragePointInfos_17), &MaxCoveragePointIdx_22);
    NumCoveragePoints_23 = (MR_Integer) ((MR_Unsigned) MaxCoveragePointIdx_22 + (MR_Unsigned) 1);
    {
      ProcStaticDumpInfo_24 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcStaticDumpInfo_24, 0) = ((MR_Box) (PSPtr_5));
      MR_hl_field(0, ProcStaticDumpInfo_24, 1) = ((MR_Box) (RawName_12));
      MR_hl_field(0, ProcStaticDumpInfo_24, 2) = ((MR_Box) (UnQualRefinedName_10));
      MR_hl_field(0, ProcStaticDumpInfo_24, 3) = ((MR_Box) (QualRefinedName_11));
      MR_hl_field(0, ProcStaticDumpInfo_24, 4) = ((MR_Box) (FileName_13));
      MR_hl_field(0, ProcStaticDumpInfo_24, 5) = ((MR_Box) (LineNumber_14));
      MR_hl_field(0, ProcStaticDumpInfo_24, 6) = ((MR_Box) (NumCallSites_21));
      MR_hl_field(0, ProcStaticDumpInfo_24, 7) = ((MR_Box) (NumCoveragePoints_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeProcStaticDumpInfo_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ProcStaticDumpInfo_24));
    }
  }
  else
    *MaybeProcStaticDumpInfo_6 = (MR_Word) (MR_mkword(1, &create_report_scalar_common_3[1]));
}

static MR_Box MR_CALL 
create_report__create_clique_dump_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ProcDesc_6;

  conv0_ProcDesc_6 = create_report__describe_clique_member_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ProcDesc_6));
  return wrapper_arg_2;
}

static void MR_CALL 
create_report__create_clique_dump_report_3_p_0(
  MR_Word Deep_4,
  MR_Word CliquePtr_5,
  MR_Word * MaybeCliqueDumpInfo_6)
{
  MR_bool succeeded;

  succeeded = profile__valid_clique_ptr_2_p_0(Deep_4, CliquePtr_5);
  if (succeeded)
  {
    MR_Word CliqueDesc_7;
    MR_Word ParentCSDPtr_8;
    MR_Word MemberPDPtrs_9;
    MR_Word CliqueDumpInfo_10;

    succeeded = profile__valid_clique_ptr_2_p_0(Deep_4, CliquePtr_5);
    if (succeeded)
    {
      MR_Word MemberPDPtrs_13;
      MR_Word ParentCSDPtr_14;
      MR_Word ParentCSD_15;
      MR_Word EntryPDPtr_16;
      MR_Word OtherPDPtrs_17;

      profile__deep_lookup_clique_members_3_p_0(Deep_4, CliquePtr_5, &MemberPDPtrs_13);
      profile__deep_lookup_clique_parents_3_p_0(Deep_4, CliquePtr_5, &ParentCSDPtr_14);
      profile__deep_lookup_call_site_dynamics_3_p_0(Deep_4, ParentCSDPtr_14, &ParentCSD_15);
      EntryPDPtr_16 = ((MR_Word) ((MR_hl_field(0, ParentCSD_15, (MR_Integer) 1))));
      succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), MemberPDPtrs_13, ((MR_Box) (EntryPDPtr_16)), &OtherPDPtrs_17);
      if (succeeded)
      {
        MR_Word EntryProcDesc_18;
        MR_Word OtherProcDescs_19;
        MR_Word Var_20;
        MR_Word PD_30;
        MR_Word Var_31;

        profile__deep_lookup_proc_dynamics_3_p_0(Deep_4, EntryPDPtr_16, &PD_30);
        Var_31 = ((MR_Word) ((MR_hl_field(0, PD_30, (MR_Integer) 0))));
        EntryProcDesc_18 = create_report__describe_proc_2_f_0(Deep_4, Var_31);
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_20, 0) = ((MR_Box) (&create_report_scalar_common_6[4]));
          MR_hl_field(0, Var_20, 1) = ((MR_Box) (create_report__create_clique_dump_report_3_p_0_1));
          MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_20, 3) = ((MR_Box) (Deep_4));
        }
        OtherProcDescs_19 = mercury__list__map_2_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&report__report__type_ctor_info_proc_desc_0), Var_20, OtherPDPtrs_17);
        {
          CliqueDesc_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, CliqueDesc_7, 0) = ((MR_Box) (CliquePtr_5));
          MR_hl_field(0, CliqueDesc_7, 1) = ((MR_Box) (EntryProcDesc_18));
          MR_hl_field(0, CliqueDesc_7, 2) = ((MR_Box) (OtherProcDescs_19));
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "entry pdptr not a member");
          return;
        }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "function \140create_report.describe_clique\'/3", (MR_String) "invalid clique_ptr");
        return;
      }
    profile__deep_lookup_clique_parents_3_p_0(Deep_4, CliquePtr_5, &ParentCSDPtr_8);
    profile__deep_lookup_clique_members_3_p_0(Deep_4, CliquePtr_5, &MemberPDPtrs_9);
    {
      CliqueDumpInfo_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, CliqueDumpInfo_10, 0) = ((MR_Box) (CliqueDesc_7));
      MR_hl_field(0, CliqueDumpInfo_10, 1) = ((MR_Box) (ParentCSDPtr_8));
      MR_hl_field(0, CliqueDumpInfo_10, 2) = ((MR_Box) (MemberPDPtrs_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeCliqueDumpInfo_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (CliqueDumpInfo_10));
    }
  }
  else
    *MaybeCliqueDumpInfo_6 = (MR_Word) (MR_mkword(1, &create_report_scalar_common_3[7]));
}

static void MR_CALL 
create_report__create_module_rep_report_3_p_0(
  MR_Word Deep_4,
  MR_String ModuleName_5,
  MR_Word * MaybeModuleRepReport_6)
{
  MR_bool succeeded;
  MR_Word MaybeProgRep_7 = ((MR_Word) ((MR_hl_field(0, Deep_4, (MR_Integer) 28))));

  if ((MaybeProgRep_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeModuleRepReport_6 = (MR_Word) (MR_mkword(1, &create_report_scalar_common_3[6]));
  else
  {
    MR_Word MaybeErrorProgRep_8 = ((MR_Word) ((MR_hl_field(1, MaybeProgRep_7, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) MaybeErrorProgRep_8)) == (MR_Integer) 1))
      *MaybeModuleRepReport_6 = (MR_Word) (MaybeErrorProgRep_8);
    else
    {
      MR_Word ProgRep_9 = ((MR_Word) ((MR_hl_field(0, MaybeErrorProgRep_8, (MR_Integer) 0))));
      MR_Word ModuleRepMap_10 = (MR_Word) (ProgRep_9);
      MR_Word ModuleRep_11;
      MR_Box conv0_ModuleRep_11;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&create_report_scalar_common_1[10]), ModuleRepMap_10, ((MR_Box) (ModuleName_5)), &conv0_ModuleRep_11);
      if (succeeded)
      {
        ModuleRep_11 = ((MR_Word) (conv0_ModuleRep_11));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word CordStrs_12;
        MR_String Str_13;
        MR_Word ModuleRepReport_14;
        MR_Word Var_16;

        program_representation_utils__print_module_to_strings_2_p_0(ModuleRep_11, &CordStrs_12);
        Var_16 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), CordStrs_12);
        Str_13 = mercury__string__append_list_1_f_0(Var_16);
        {
          ModuleRepReport_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ModuleRepReport_14, 0) = ((MR_Box) (ModuleName_5));
          MR_hl_field(0, ModuleRepReport_14, 1) = ((MR_Box) (Str_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeModuleRepReport_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (ModuleRepReport_14));
        }
      }
      else
      {
        MR_String Msg_15;
        MR_String Var_56;

        Var_56 = mercury__string__f_43_43_2_f_0(ModuleName_5, (MR_String) ".\n");
        Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "There is no module named ", Var_56);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeModuleRepReport_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Msg_15));
        }
      }
    }
  }
}

static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_Map_8;

  create_report__getter_setter_raw_map_to_info_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_Map_8);
  *wrapper_arg_3 = ((MR_Box) (conv3_Map_8));
}

static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_GSDSRawMap_33;

  create_report__gather_getters_setters_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_GSDSRawMap_33);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_GSDSRawMap_33));
}

static void MR_CALL 
create_report__create_module_getter_setter_report_3_p_0(
  MR_Word Deep_4,
  MR_String ModuleName_5,
  MR_Word * MaybeModuleGetterSettersReport_6)
{
  MR_bool succeeded;
  MR_Word ModuleData_7;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Deep_4, (MR_Integer) 25))));
  MR_Box conv0_ModuleData_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&profile__profile__type_ctor_info_module_data_0), Var_13, ((MR_Box) (ModuleName_5)), &conv0_ModuleData_7);
  if (succeeded)
  {
    ModuleData_7 = ((MR_Word) (conv0_ModuleData_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word PSPtrs_8 = ((MR_Word) ((MR_hl_field(0, ModuleData_7, (MR_Integer) 2))));
    MR_Word GetterSetterDataMap_9;
    MR_Word GetterSetterInfoMap_10;
    MR_Word ModuleGetterSettersReport_11;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Box conv2_GetterSetterDataMap_9;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (&create_report_scalar_common_4[10]));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (create_report__create_module_getter_setter_report_3_p_0_1));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_14, 3) = ((MR_Box) (Deep_4));
    }
    Var_15 = mercury__map__init_0_f_0((MR_Word) (&report__report__type_ctor_info_data_struct_name_0), (MR_Word) (&create_report_scalar_common_2[14]));
    mercury__list__foldl_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&create_report_scalar_common_2[15]), Var_14, PSPtrs_8, ((MR_Box) (Var_15)), &conv2_GetterSetterDataMap_9);
    GetterSetterDataMap_9 = ((MR_Word) (conv2_GetterSetterDataMap_9));
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_16, 0) = ((MR_Box) (&create_report_scalar_common_4[11]));
      MR_hl_field(0, Var_16, 1) = ((MR_Box) (create_report__create_module_getter_setter_report_3_p_0_2));
      MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_16, 3) = ((MR_Box) (Deep_4));
    }
    mercury__map__map_values_3_p_0((MR_Word) (&report__report__type_ctor_info_data_struct_name_0), (MR_Word) (&create_report_scalar_common_2[14]), (MR_Word) (&create_report_scalar_common_2[17]), Var_16, GetterSetterDataMap_9, &GetterSetterInfoMap_10);
    {
      ModuleGetterSettersReport_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModuleGetterSettersReport_11, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(0, ModuleGetterSettersReport_11, 1) = ((MR_Box) (GetterSetterInfoMap_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeModuleGetterSettersReport_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ModuleGetterSettersReport_11));
    }
  }
  else
  {
    MR_String Msg_12;
    MR_String Var_66;

    Var_66 = mercury__string__f_43_43_2_f_0(ModuleName_5, (MR_String) "\'.\n");
    Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "There is no module named \140", Var_66);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeModuleGetterSettersReport_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Msg_12));
    }
  }
}

static MR_Box MR_CALL 
create_report__create_module_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_ProcRowData_6;

  conv2_ProcRowData_6 = create_report__proc_to_active_row_data_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_ProcRowData_6));
  return wrapper_arg_2;
}

static void MR_CALL 
create_report__create_module_report_3_p_0(
  MR_Word Deep_4,
  MR_String ModuleName_5,
  MR_Word * MaybeModuleReport_6)
{
  MR_bool succeeded;
  MR_Word ModuleData_7;
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, Deep_4, (MR_Integer) 25))));
  MR_Box conv0_ModuleData_7;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&profile__profile__type_ctor_info_module_data_0), Var_17, ((MR_Box) (ModuleName_5)), &conv0_ModuleData_7);
  if (succeeded)
  {
    ModuleData_7 = ((MR_Word) (conv0_ModuleData_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word MaybeProgRep_8;
    MR_Word HaveModuleRep_12;
    MR_Word PSPtrs_13;
    MR_Word ProcRowDatas_14;
    MR_Word ModuleReport_15;
    MR_Word Var_18;
    MR_Word TypeCtorInfo_56_56;
    MR_Word TypeInfo_57_57;
    MR_Word ProgRep_9;
    MR_Word ModuleMap_10;
    MR_Box conv1_Var_11;

    profile__deep_get_maybe_progrep_2_p_0(Deep_4, &MaybeProgRep_8);
    succeeded = ((MR_tag((MR_Word) MaybeProgRep_8)) == (MR_Integer) 0);
    if (succeeded)
    {
      ProgRep_9 = ((MR_Word) ((MR_hl_field(0, MaybeProgRep_8, (MR_Integer) 0))));
      ModuleMap_10 = (MR_Word) (ProgRep_9);
      TypeCtorInfo_56_56 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      TypeInfo_57_57 = (MR_Word) (&create_report_scalar_common_1[10]);
      succeeded = mercury__map__search_3_p_0(TypeCtorInfo_56_56, TypeInfo_57_57, ModuleMap_10, ((MR_Box) (ModuleName_5)), &conv1_Var_11);
      if (succeeded)
        succeeded = MR_TRUE;
    }
    if (succeeded)
      HaveModuleRep_12 = (MR_Integer) 1;
    else
      HaveModuleRep_12 = (MR_Integer) 0;
    PSPtrs_13 = ((MR_Word) ((MR_hl_field(0, ModuleData_7, (MR_Integer) 2))));
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_18, 0) = ((MR_Box) (&create_report_scalar_common_6[3]));
      MR_hl_field(0, Var_18, 1) = ((MR_Box) (create_report__create_module_report_3_p_0_1));
      MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_18, 3) = ((MR_Box) (Deep_4));
    }
    ProcRowDatas_14 = mercury__list__map_2_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&create_report_scalar_common_1[11]), Var_18, PSPtrs_13);
    {
      ModuleReport_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModuleReport_15, 0) = ((MR_Box) (ModuleName_5));
      MR_hl_field(0, ModuleReport_15, 1) = (MR_Box) ((MR_Unsigned) (HaveModuleRep_12));
      MR_hl_field(0, ModuleReport_15, 2) = ((MR_Box) (ProcRowDatas_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeModuleReport_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ModuleReport_15));
    }
  }
  else
  {
    MR_String Msg_16;
    MR_String Var_63;

    Var_63 = mercury__string__f_43_43_2_f_0(ModuleName_5, (MR_String) "\'.\n");
    Msg_16 = mercury__string__f_43_43_2_f_0((MR_String) "There is no module named \140", Var_63);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeModuleReport_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Msg_16));
    }
  }
}

static MR_Box MR_CALL 
create_report__create_program_modules_report_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ModuleRowData_7;

  conv0_ModuleRowData_7 = create_report__module_pair_to_row_data_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ModuleRowData_7));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
create_report__create_program_modules_report_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = create_report__not_mercury_runtime_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
create_report__create_program_modules_report_2_p_0(
  MR_Word Deep_3,
  MR_Word * MaybeProgramModulesReport_4)
{
  MR_bool succeeded;
  MR_Word ModulePairs0_5;
  MR_Word ModulePairs_6;
  MR_Word ModuleRowDatas_7;
  MR_Word ProgramModulesReport_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, Deep_3, (MR_Integer) 25))));
  MR_Word Var_11;

  mercury__map__to_assoc_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&profile__profile__type_ctor_info_module_data_0), Var_9, &ModulePairs0_5);
  mercury__list__filter_3_p_0((MR_Word) (&create_report_scalar_common_2[12]), (MR_Word) (&create_report_scalar_common_2[21]), ModulePairs0_5, &ModulePairs_6);
  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (&create_report_scalar_common_6[2]));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (create_report__create_program_modules_report_2_p_0_2));
    MR_hl_field(0, Var_11, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_11, 3) = ((MR_Box) (Deep_3));
  }
  ModuleRowDatas_7 = mercury__list__map_2_f_0((MR_Word) (&create_report_scalar_common_2[12]), (MR_Word) (&create_report_scalar_common_1[9]), Var_11, ModulePairs_6);
  ProgramModulesReport_8 = (MR_Word) (ModuleRowDatas_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *MaybeProgramModulesReport_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ProgramModulesReport_8));
  }
}

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_PerfRowData_9;

  conv5_PerfRowData_9 = create_report__create_proc_caller_procedures_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_PerfRowData_9));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_PerfRowData_9;

  conv4_PerfRowData_9 = create_report__create_proc_caller_modules_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_PerfRowData_9));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv3_PerfRowData_9;

  conv3_PerfRowData_9 = create_report__create_proc_caller_cliques_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_PerfRowData_9));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_PerfRowData_9;

  conv2_PerfRowData_9 = create_report__create_proc_caller_call_sites_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_PerfRowData_9));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = apply_exclusion__pair_self_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
create_report__create_proc_callers_report_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  conv0_HeadVar__4_4 = apply_exclusion__pair_contour_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
  return wrapper_arg_2;
}

static void MR_CALL 
create_report__create_proc_callers_report_7_p_0(
  MR_Word Deep_8,
  MR_Word PSPtr_9,
  MR_Word CallerGroups_10,
  MR_Integer BunchNum_11,
  MR_Integer CallersPerBunch_12,
  MR_Word Contour_13,
  MR_Word * MaybeProcCallersReport_14)
{
  MR_bool succeeded;

  succeeded = profile__valid_proc_static_ptr_2_p_0(Deep_8, PSPtr_9);
  if (succeeded)
  {
    MR_Word ProcDesc_15;
    MR_Word CallerCSDPtrs0_16;
    MR_Word MaybeCallerCSDPtrPairs_18;
    MR_Word MaybeWarnMessage_19;

    ProcDesc_15 = create_report__describe_proc_2_f_0(Deep_8, PSPtr_9);
    profile__deep_lookup_proc_callers_3_p_0(Deep_8, PSPtr_9, &CallerCSDPtrs0_16);
    switch (Contour_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ExcludeFile_20 = ((MR_Word) ((MR_hl_field(0, Deep_8, (MR_Integer) 27))));
          MR_String ExcludeFileName_21 = ((MR_String) ((MR_hl_field(0, ExcludeFile_20, (MR_Integer) 0))));
          MR_Word ExcludeContents_22 = ((MR_Word) ((MR_hl_field(0, ExcludeFile_20, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) ExcludeContents_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ErrorMessage0_23;
                MR_String Var_119;

                Var_119 = mercury__string__f_43_43_2_f_0(ExcludeFileName_21, (MR_String) "\'.");
                ErrorMessage0_23 = mercury__string__f_43_43_2_f_0((MR_String) "Could not read contour exclusion file \140", Var_119);
                {
                  MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (ErrorMessage0_23));
                }
                MaybeWarnMessage_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ErrorMsg_24 = ((MR_String) ((MR_hl_field(1, ExcludeContents_22, (MR_Integer) 0))));
                MR_String ErrorMessage0_57;
                MR_String Var_113;
                MR_String Var_115;
                MR_String Var_116;

                Var_113 = mercury__string__f_43_43_2_f_0(ErrorMsg_24, (MR_String) ".");
                Var_115 = mercury__string__f_43_43_2_f_0((MR_String) "\' has an error: ", Var_113);
                Var_116 = mercury__string__f_43_43_2_f_0(ExcludeFileName_21, Var_115);
                ErrorMessage0_57 = mercury__string__f_43_43_2_f_0((MR_String) "The contour exclusion file \140", Var_116);
                {
                  MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (ErrorMessage0_57));
                }
                MaybeWarnMessage_19 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ExcludeModules_25 = ((MR_Word) ((MR_hl_field(2, ExcludeContents_22, (MR_Integer) 0))));
                MR_Word MaybeWarnMsg_26 = ((MR_Word) ((MR_hl_field(2, ExcludeContents_22, (MR_Integer) 1))));
                MR_Word Var_51;
                MR_Word CallerCSDPtrPairs0_58;

                {
                  Var_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_51, 0) = ((MR_Box) (&create_report_scalar_common_4[5]));
                  MR_hl_field(0, Var_51, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_1));
                  MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_51, 3) = ((MR_Box) (Deep_8));
                  MR_hl_field(0, Var_51, 4) = ((MR_Box) (ExcludeModules_25));
                }
                CallerCSDPtrPairs0_58 = mercury__list__map_2_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&create_report_scalar_common_2[7]), Var_51, CallerCSDPtrs0_16);
                {
                  MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (CallerCSDPtrPairs0_58));
                }
                if ((MaybeWarnMsg_26 == (MR_Word) ((MR_Unsigned) 0U)))
                  MaybeWarnMessage_19 = (MR_Word) ((MR_Unsigned) 0U);
                else
                  MaybeWarnMessage_19 = MaybeWarnMsg_26;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CallerCSDPtrPairs0_17;

          CallerCSDPtrPairs0_17 = mercury__list__map_2_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&create_report_scalar_common_2[7]), (MR_Word) (&create_report_scalar_common_2[20]), CallerCSDPtrs0_16);
          {
            MaybeCallerCSDPtrPairs_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, MaybeCallerCSDPtrPairs_18, 0) = ((MR_Box) (CallerCSDPtrPairs0_17));
          }
          MaybeWarnMessage_19 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
    }
    if (((MR_tag((MR_Word) MaybeCallerCSDPtrPairs_18)) == (MR_Integer) 1))
      *MaybeProcCallersReport_14 = (MR_Word) (MaybeCallerCSDPtrPairs_18);
    else
    {
      MR_Word CallerCSDPtrPairs_29 = ((MR_Word) ((MR_hl_field(0, MaybeCallerCSDPtrPairs_18, (MR_Integer) 0))));
      MR_Word Callers_32;
      MR_Word ProcCallersReport_39;

      switch (CallerGroups_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word CallSiteCallerGroups_30;
            MR_Word ProcCallerCallSites_31;
            MR_Word Var_52;

            CallSiteCallerGroups_30 = apply_exclusion__group_csds_by_call_site_2_f_0(Deep_8, CallerCSDPtrPairs_29);
            {
              Var_52 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_52, 0) = ((MR_Box) (&create_report_scalar_common_4[6]));
              MR_hl_field(0, Var_52, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_3));
              MR_hl_field(0, Var_52, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_52, 3) = ((MR_Box) (Deep_8));
              MR_hl_field(0, Var_52, 4) = ((MR_Box) (PSPtr_9));
            }
            ProcCallerCallSites_31 = mercury__list__map_2_f_0((MR_Word) (&create_report_scalar_common_2[8]), (MR_Word) (&create_report_scalar_common_1[7]), Var_52, CallSiteCallerGroups_30);
            {
              Callers_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Callers_32, 0) = ((MR_Box) (ProcCallerCallSites_31));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word CliqueCallerGroups_37;
            MR_Word ProcCallerCliques_38;
            MR_Word Var_55;

            CliqueCallerGroups_37 = apply_exclusion__group_csds_by_clique_2_f_0(Deep_8, CallerCSDPtrPairs_29);
            {
              Var_55 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_55, 0) = ((MR_Box) (&create_report_scalar_common_4[7]));
              MR_hl_field(0, Var_55, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_4));
              MR_hl_field(0, Var_55, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_55, 3) = ((MR_Box) (Deep_8));
              MR_hl_field(0, Var_55, 4) = ((MR_Box) (PSPtr_9));
            }
            ProcCallerCliques_38 = mercury__list__map_2_f_0((MR_Word) (&create_report_scalar_common_2[10]), (MR_Word) (&create_report_scalar_common_1[5]), Var_55, CliqueCallerGroups_37);
            {
              Callers_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Callers_32, 0) = ((MR_Box) (ProcCallerCliques_38));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ModuleCallerGroups_35;
            MR_Word ProcCallerModules_36;
            MR_Word Var_54;

            ModuleCallerGroups_35 = apply_exclusion__group_csds_by_module_2_f_0(Deep_8, CallerCSDPtrPairs_29);
            {
              Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_54, 0) = ((MR_Box) (&create_report_scalar_common_4[8]));
              MR_hl_field(0, Var_54, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_5));
              MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_54, 3) = ((MR_Box) (Deep_8));
              MR_hl_field(0, Var_54, 4) = ((MR_Box) (PSPtr_9));
            }
            ProcCallerModules_36 = mercury__list__map_2_f_0((MR_Word) (&create_report_scalar_common_2[9]), (MR_Word) (&create_report_scalar_common_1[8]), Var_54, ModuleCallerGroups_35);
            {
              Callers_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Callers_32, 0) = ((MR_Box) (ProcCallerModules_36));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ProcCallerGroups_33;
            MR_Word ProcCallerProcs_34;
            MR_Word Var_53;

            ProcCallerGroups_33 = apply_exclusion__group_csds_by_procedure_2_f_0(Deep_8, CallerCSDPtrPairs_29);
            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_53, 0) = ((MR_Box) (&create_report_scalar_common_4[9]));
              MR_hl_field(0, Var_53, 1) = ((MR_Box) (create_report__create_proc_callers_report_7_p_0_6));
              MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Var_53, 3) = ((MR_Box) (Deep_8));
              MR_hl_field(0, Var_53, 4) = ((MR_Box) (PSPtr_9));
            }
            ProcCallerProcs_34 = mercury__list__map_2_f_0((MR_Word) (&create_report_scalar_common_2[6]), (MR_Word) (&create_report_scalar_common_1[3]), Var_53, ProcCallerGroups_33);
            {
              Callers_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Callers_32, 0) = ((MR_Box) (ProcCallerProcs_34));
            }
          }
          break;
      }
      {
        ProcCallersReport_39 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProcCallersReport_39, 0) = ((MR_Box) (ProcDesc_15));
        MR_hl_field(0, ProcCallersReport_39, 1) = ((MR_Box) (Callers_32));
        MR_hl_field(0, ProcCallersReport_39, 2) = ((MR_Box) (BunchNum_11));
        MR_hl_field(0, ProcCallersReport_39, 3) = ((MR_Box) (CallersPerBunch_12));
        MR_hl_field(0, ProcCallersReport_39, 4) = (MR_Box) ((MR_Unsigned) (Contour_13));
        MR_hl_field(0, ProcCallersReport_39, 5) = ((MR_Box) (MaybeWarnMessage_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeProcCallersReport_14 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (ProcCallersReport_39));
      }
    }
  }
  else
    *MaybeProcCallersReport_14 = (MR_Word) (MR_mkword(1, &create_report_scalar_common_3[1]));
}

static void MR_CALL 
create_report__create_root_report_3_p_0(
  MR_Word Deep_4,
  MR_Word MaybePercent_5,
  MR_Word * MaybeReport_6)
{
  MR_Word RootCliquePtr_7;
  MR_Word MaybeRootCliqueReport_8;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, Deep_4, (MR_Integer) 4))));

  profile__deep_lookup_clique_index_3_p_0(Deep_4, Var_13, &RootCliquePtr_7);
  create_report__create_clique_report_3_p_0(Deep_4, RootCliquePtr_7, &MaybeRootCliqueReport_8);
  if (((MR_tag((MR_Word) MaybeRootCliqueReport_8)) == (MR_Integer) 1))
    *MaybeReport_6 = MaybeRootCliqueReport_8;
  else
  {
    MR_Word RootCliqueReport_10 = ((MR_Word) ((MR_hl_field(0, MaybeRootCliqueReport_8, (MR_Integer) 0))));

    if ((MaybePercent_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeReport_6 = MaybeRootCliqueReport_8;
    else
    {
      MR_Integer Percent_11 = ((MR_Integer) ((MR_hl_field(1, MaybePercent_5, (MR_Integer) 0))));
      MR_Word Report_12;

      create_report__find_start_of_action_4_p_0(Deep_4, Percent_11, RootCliqueReport_10, &Report_12);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeReport_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Report_12));
      }
    }
  }
}

static void MR_CALL 
create_report__find_start_of_action_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ActionCliquePtrs_12;

  create_report__find_start_of_action_clique_proc_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ActionCliquePtrs_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ActionCliquePtrs_12));
}

static void MR_CALL 
create_report__find_start_of_action_4_p_0(
  MR_Word Deep_5,
  MR_Integer Percent_6,
  MR_Word CurrentReport_7,
  MR_Word * SelectedReport_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word CliqueProcs_11 = ((MR_Word) ((MR_hl_field(0, CurrentReport_7, (MR_Integer) 2))));
    MR_Word ActionCliquePtrs_12;
    MR_Word Var_16;
    MR_Box conv1_ActionCliquePtrs_12;
    MR_Word ActionCliqueReport_15;
    MR_Word ActionCliquePtr_13;
    MR_Word MaybeActionCliqueReport_14;
    MR_Word Var_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_16, 0) = ((MR_Box) (&create_report_scalar_common_4[4]));
      MR_hl_field(0, Var_16, 1) = ((MR_Box) (create_report__find_start_of_action_4_p_0_1));
      MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_16, 3) = ((MR_Box) (Percent_6));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&report__report__type_ctor_info_clique_proc_report_0), (MR_Word) (&create_report_scalar_common_1[4]), Var_16, CliqueProcs_11, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_ActionCliquePtrs_12);
    ActionCliquePtrs_12 = ((MR_Word) (conv1_ActionCliquePtrs_12));
    succeeded = (ActionCliquePtrs_12 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ActionCliquePtr_13 = ((MR_Word) ((MR_hl_field(1, ActionCliquePtrs_12, (MR_Integer) 0))));
      Var_18 = ((MR_Word) ((MR_hl_field(1, ActionCliquePtrs_12, (MR_Integer) 1))));
      succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        create_report__create_clique_report_3_p_0(Deep_5, ActionCliquePtr_13, &MaybeActionCliqueReport_14);
        succeeded = ((MR_tag((MR_Word) MaybeActionCliqueReport_14)) == (MR_Integer) 0);
        if (succeeded)
          ActionCliqueReport_15 = ((MR_Word) ((MR_hl_field(0, MaybeActionCliqueReport_14, (MR_Integer) 0))));
      }
    }
    if (succeeded)
    {
      MR_Word next_value_of_CurrentReport_7 = ActionCliqueReport_15;

      // direct tailcall eliminated
      ;
      CurrentReport_7 = next_value_of_CurrentReport_7;
      continue;
    }
    else
      *SelectedReport_8 = CurrentReport_7;
    break;
  }
}

static void MR_CALL 
create_report__create_top_procs_report_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_RowData_6;

  create_report__psi_to_perf_row_data_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv0_RowData_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_RowData_6));
}

void MR_CALL 
create_report__create_top_procs_report_6_p_0(
  MR_Word Deep_7,
  MR_Word Limit_8,
  MR_Word CostKind_9,
  MR_Word InclDesc0_10,
  MR_Word Scope0_11,
  MR_Word * MaybeTopProcsReport_12)
{
  MR_Word InclDesc_13;
  MR_Word Scope_14;
  MR_Word MaybeTopPSIs_15;

  switch (CostKind_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 4:
    case (MR_Integer) 3:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
    case (MR_Integer) 5:
      {
        InclDesc_13 = InclDesc0_10;
        Scope_14 = Scope0_11;
      }
      break;
    case (MR_Integer) 0:
      {
        InclDesc_13 = (MR_Integer) 0;
        Scope_14 = (MR_Integer) 1;
      }
      break;
  }
  MaybeTopPSIs_15 = top_procs__find_top_procs_5_f_0(CostKind_9, InclDesc_13, Scope_14, Limit_8, Deep_7);
  if (((MR_tag((MR_Word) MaybeTopPSIs_15)) == (MR_Integer) 1))
  {
    MR_String ErrorMessage_16 = ((MR_String) ((MR_hl_field(1, MaybeTopPSIs_15, (MR_Integer) 0))));
    MR_String Var_21;

    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "Internal error: ", ErrorMessage_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeTopProcsReport_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_21));
    }
  }
  else
  {
    MR_Word TopPSIs_17 = ((MR_Word) ((MR_hl_field(0, MaybeTopPSIs_15, (MR_Integer) 0))));
    MR_Word Ordering_18;
    MR_Word ProcRowDatas_19;
    MR_Word TopProcsReport_20;
    MR_Word Var_23;

    {
      Ordering_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Ordering_18, 0) = ((MR_Box) (Limit_8));
      MR_hl_field(0, Ordering_18, 1) = (MR_Box) (((((MR_Unsigned) (CostKind_9) << 2)) | (((((MR_Unsigned) (InclDesc_13) << 1)) | (MR_Unsigned) (Scope_14)))));
    }
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (&create_report_scalar_common_6[1]));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (create_report__create_top_procs_report_6_p_0_1));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_23, 3) = ((MR_Box) (Deep_7));
    }
    mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&create_report_scalar_common_1[3]), Var_23, TopPSIs_17, &ProcRowDatas_19);
    {
      TopProcsReport_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TopProcsReport_20, 0) = ((MR_Box) (Ordering_18));
      MR_hl_field(0, TopProcsReport_20, 1) = ((MR_Box) (ProcRowDatas_19));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeTopProcsReport_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (TopProcsReport_20));
    }
  }
}

static void MR_CALL 
create_report__create_call_site_dynamic_var_use_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_MaybeUseAndName_16;
  MR_Integer conv5_STATE_VARIABLE_ArgNum_27;

  create_report__call_site_dynamic_var_use_arg_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 6))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv6_MaybeUseAndName_16, ((MR_Integer) (wrapper_arg_3)), &conv5_STATE_VARIABLE_ArgNum_27);
  *wrapper_arg_2 = ((MR_Box) (conv6_MaybeUseAndName_16));
  *wrapper_arg_4 = ((MR_Box) (conv5_STATE_VARIABLE_ArgNum_27));
}

static void MR_CALL 
create_report__create_call_site_dynamic_var_use_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_MaybeUseAndName_16;
  MR_Integer conv2_STATE_VARIABLE_ArgNum_27;

  create_report__call_site_dynamic_var_use_arg_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), MR_unbox_float((MR_hl_field(0, closure, (MR_Integer) 6))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) (wrapper_arg_1)), &conv3_MaybeUseAndName_16, ((MR_Integer) (wrapper_arg_3)), &conv2_STATE_VARIABLE_ArgNum_27);
  *wrapper_arg_2 = ((MR_Box) (conv3_MaybeUseAndName_16));
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_ArgNum_27));
}

void MR_CALL 
create_report__create_call_site_dynamic_var_use_report_3_p_0(
  MR_Word Deep_4,
  MR_Word CSDPtr_5,
  MR_Word * MaybeVarUseInfo_6)
{
  MR_bool succeeded;

  succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(Deep_4, CSDPtr_5);
  if (succeeded)
  {
    MR_Word CSD_7;
    MR_Word CalleePDPtr_8;
    MR_Word CallerPDPtr_9;
    MR_Word CalleePD_10;
    MR_Word CalleePSPtr_11;
    MR_Word MaybeProcrep_12;

    profile__deep_lookup_call_site_dynamics_3_p_0(Deep_4, CSDPtr_5, &CSD_7);
    CallerPDPtr_9 = ((MR_Word) ((MR_hl_field(0, CSD_7, (MR_Integer) 0))));
    CalleePDPtr_8 = ((MR_Word) ((MR_hl_field(0, CSD_7, (MR_Integer) 1))));
    profile__deep_lookup_proc_dynamics_3_p_0(Deep_4, CalleePDPtr_8, &CalleePD_10);
    CalleePSPtr_11 = ((MR_Word) ((MR_hl_field(0, CalleePD_10, (MR_Integer) 0))));
    analysis_utils__deep_get_maybe_procrep_3_p_0(Deep_4, CalleePSPtr_11, &MaybeProcrep_12);
    if (((MR_tag((MR_Word) MaybeProcrep_12)) == (MR_Integer) 1))
      *MaybeVarUseInfo_6 = (MR_Word) (MaybeProcrep_12);
    else
    {
      MR_Word Procrep_13 = ((MR_Word) ((MR_hl_field(0, MaybeProcrep_12, (MR_Integer) 0))));
      MR_Word HeadVars_14;
      MR_Word VarNameTable_15;
      MR_Word ParentCliquePtr_16;
      MR_Word CalleeCliquePtr_17;
      MR_Word MaybeRecursiveCostsReport_18;
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Procrep_13, (MR_Integer) 1))));

      HeadVars_14 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 0))));
      VarNameTable_15 = ((MR_Word) ((MR_hl_field(0, Var_33, (MR_Integer) 2))));
      profile__deep_lookup_clique_index_3_p_0(Deep_4, CallerPDPtr_9, &ParentCliquePtr_16);
      profile__deep_lookup_clique_index_3_p_0(Deep_4, CalleePDPtr_8, &CalleeCliquePtr_17);
      recursion_patterns__create_clique_recursion_costs_report_3_p_0(Deep_4, ParentCliquePtr_16, &MaybeRecursiveCostsReport_18);
      if (((MR_tag((MR_Word) MaybeRecursiveCostsReport_18)) == (MR_Integer) 1))
        *MaybeVarUseInfo_6 = (MR_Word) (MaybeRecursiveCostsReport_18);
      else
      {
        MR_Word RecursiveCostsReport_19 = ((MR_Word) ((MR_hl_field(0, MaybeRecursiveCostsReport_18, (MR_Integer) 0))));
        MR_Word RecursionType_20 = ((MR_Word) ((MR_hl_field(0, RecursiveCostsReport_19, (MR_Integer) 1))));
        MR_Integer Var_83 = (MR_Integer) (ParentCliquePtr_16);
        MR_Integer Var_84 = (MR_Integer) (CalleeCliquePtr_17);

        succeeded = (Var_83 == Var_84);
        if (succeeded)
          switch (MR_tag((MR_Word) RecursionType_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *MaybeVarUseInfo_6 = (MR_Word) ((MR_Word) (MR_mkword(1, &create_report_scalar_common_3[5])));
              break;
            case (MR_Integer) 1:
              {
                MR_Float Cost_25;
                MR_Word Uses0_26;
                MR_Word MaybeUses_28;
                MR_Word Var_38;
                MR_Float AvgMaxDepth_87 = MR_unbox_float((MR_hl_field(1, RecursionType_20, (MR_Integer) 2)));
                MR_Word CostFn_89 = ((MR_Word) ((MR_hl_field(1, RecursionType_20, (MR_Integer) 4))));
                MR_Word Own_90;
                MR_Float Calls_91;
                MR_Integer Var_98;
                MR_Float Var_100;
                MR_Integer Var_101;
                MR_Integer Var_102;
                MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
                MR_Box conv1_Var_100;
                MR_Box conv4_Var_27;

                profile__deep_lookup_csd_own_3_p_0(Deep_4, CSDPtr_5, &Own_90);
                Var_98 = measurements__calls_1_f_0(Own_90);
                Calls_91 = mercury__float__float_1_f_0(Var_98);
                Var_102 = mercury__float__round_to_int_1_f_0(AvgMaxDepth_87);
                Var_101 = (MR_Integer) ((MR_Unsigned) Var_102 - (MR_Unsigned) 1);
                func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, CostFn_89, (MR_Integer) 1))));
                conv1_Var_100 = func_0(((MR_Box) (CostFn_89)), ((MR_Box) (Var_101)));
                Var_100 = MR_unbox_float(conv1_Var_100);
                Cost_25 = (Var_100 * Calls_91);
                {
                  Var_38 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_38, 0) = ((MR_Box) (&create_report_scalar_common_8[0]));
                  MR_hl_field(0, Var_38, 1) = ((MR_Box) (create_report__create_call_site_dynamic_var_use_report_3_p_0_1));
                  MR_hl_field(0, Var_38, 2) = ((MR_Box) ((MR_Integer) 5));
                  MR_hl_field(0, Var_38, 3) = ((MR_Box) (Deep_4));
                  MR_hl_field(0, Var_38, 4) = ((MR_Box) (CSDPtr_5));
                  MR_hl_field(0, Var_38, 5) = ((MR_Box) (RecursionType_20));
                  MR_hl_field(0, Var_38, 6) = MR_box_float(Cost_25);
                  MR_hl_field(0, Var_38, 7) = ((MR_Box) (VarNameTable_15));
                }
                mercury__list__map_foldl_5_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0), (MR_Word) (&create_report_scalar_common_2[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_38, HeadVars_14, &Uses0_26, ((MR_Box) ((MR_Integer) 0)), &conv4_Var_27);
                create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(Uses0_26, &MaybeUses_28);
                if (((MR_tag((MR_Word) MaybeUses_28)) == (MR_Integer) 1))
                  *MaybeVarUseInfo_6 = (MR_Word) (MaybeUses_28);
                else
                {
                  MR_Word Uses_29 = ((MR_Word) ((MR_hl_field(0, MaybeUses_28, (MR_Integer) 0))));
                  MR_Word VarUseInfo_30;

                  {
                    VarUseInfo_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, VarUseInfo_30, 0) = MR_box_float(Cost_25);
                    MR_hl_field(0, VarUseInfo_30, 1) = ((MR_Box) (Uses_29));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    *MaybeVarUseInfo_6 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (VarUseInfo_30));
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              *MaybeVarUseInfo_6 = (MR_Word) ((MR_Word) (MR_mkword(1, &create_report_scalar_common_3[4])));
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, RecursionType_20, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  *MaybeVarUseInfo_6 = (MR_Word) ((MR_Word) (MR_mkword(1, &create_report_scalar_common_3[4])));
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Errors_96 = ((MR_Word) ((MR_hl_field(3, RecursionType_20, (MR_Integer) 1))));
                    MR_String Var_105;
                    MR_Word MaybeCost_126;

                    Var_105 = mercury__string__join_list_2_f_0((MR_String) "\n", Errors_96);
                    {
                      MaybeCost_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, MaybeCost_126, 0) = ((MR_Box) (Var_105));
                    }
                    *MaybeVarUseInfo_6 = (MR_Word) (MaybeCost_126);
                  }
                  break;
              }
              break;
          }
        else
        {
          MR_Word Desc_22;
          MR_Word Own_23;
          MR_Integer Cost0_24;
          MR_Integer Var_35;
          MR_Integer Var_36;
          MR_Float Cost_114;
          MR_Word Uses0_115;
          MR_Word MaybeUses_117;
          MR_Word Var_120;
          MR_Box conv7_Var_108;

          profile__deep_lookup_csd_desc_3_p_0(Deep_4, CSDPtr_5, &Desc_22);
          profile__deep_lookup_csd_own_3_p_0(Deep_4, CSDPtr_5, &Own_23);
          Var_35 = measurements__callseqs_1_f_0(Own_23);
          Var_36 = measurements__inherit_callseqs_1_f_0(Desc_22);
          Cost0_24 = (MR_Integer) ((MR_Unsigned) Var_35 + (MR_Unsigned) Var_36);
          Cost_114 = mercury__float__float_1_f_0(Cost0_24);
          {
            Var_120 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_120, 0) = ((MR_Box) (&create_report_scalar_common_8[0]));
            MR_hl_field(0, Var_120, 1) = ((MR_Box) (create_report__create_call_site_dynamic_var_use_report_3_p_0_2));
            MR_hl_field(0, Var_120, 2) = ((MR_Box) ((MR_Integer) 5));
            MR_hl_field(0, Var_120, 3) = ((MR_Box) (Deep_4));
            MR_hl_field(0, Var_120, 4) = ((MR_Box) (CSDPtr_5));
            MR_hl_field(0, Var_120, 5) = ((MR_Box) (RecursionType_20));
            MR_hl_field(0, Var_120, 6) = MR_box_float(Cost_114);
            MR_hl_field(0, Var_120, 7) = ((MR_Box) (VarNameTable_15));
          }
          mercury__list__map_foldl_5_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_head_var_rep_0), (MR_Word) (&create_report_scalar_common_2[5]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_120, HeadVars_14, &Uses0_115, ((MR_Box) ((MR_Integer) 0)), &conv7_Var_108);
          create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(Uses0_115, &MaybeUses_117);
          if (((MR_tag((MR_Word) MaybeUses_117)) == (MR_Integer) 1))
            *MaybeVarUseInfo_6 = (MR_Word) (MaybeUses_117);
          else
          {
            MR_Word Uses_109 = ((MR_Word) ((MR_hl_field(0, MaybeUses_117, (MR_Integer) 0))));
            MR_Word VarUseInfo_110;

            {
              VarUseInfo_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, VarUseInfo_110, 0) = MR_box_float(Cost_114);
              MR_hl_field(0, VarUseInfo_110, 1) = ((MR_Box) (Uses_109));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeVarUseInfo_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (VarUseInfo_110));
            }
          }
        }
      }
    }
  }
  else
  {
    MR_Integer CSDNum_32 = (MR_Integer) (CSDPtr_5);
    MR_String Var_40;
    MR_String Var_74;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&create_report_scalar_common_3[0]), CSDNum_32, &Var_74);
    Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "Invalid call site dynamic ", Var_74);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeVarUseInfo_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_40));
    }
  }
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) (&create_report_scalar_common_3[3]);
  else
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1))
      *HeadVar__2_2 = (MR_Word) (Var_17);
    else
    {
      MR_Box X_7 = (MR_hl_field(0, Var_17, (MR_Integer) 0));
      MR_Word MaybeXs1_10;

      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_115_116_95_109_97_121_98_101_95_101_114_114_111_114_95_116_111_95_109_97_121_98_101_95_101_114_114_111_114_95_108_105_115_116_95_95_91_49_93_95_48_2_p_0(Var_16, &MaybeXs1_10);
      if (((MR_tag((MR_Word) MaybeXs1_10)) == (MR_Integer) 1))
        *HeadVar__2_2 = MaybeXs1_10;
      else
      {
        MR_Word Xs1_11 = ((MR_Word) ((MR_hl_field(0, MaybeXs1_10, (MR_Integer) 0))));
        MR_Word Var_14;

        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = X_7;
          MR_hl_field(1, Var_14, 1) = ((MR_Box) (Xs1_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__2_2 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
        }
      }
    }
  }
}

static void MR_CALL 
create_report__create_dynamic_procrep_coverage_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;
  MR_Word conv2_HeadVar__5_5;

  coverage__add_coverage_point_to_map_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv2_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv2_HeadVar__5_5));
}

static void MR_CALL 
create_report__create_dynamic_procrep_coverage_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  analysis_utils__build_dynamic_call_site_cost_and_callee_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
create_report__create_dynamic_procrep_coverage_report_3_p_0(
  MR_Word Deep_4,
  MR_Word PDPtr_5,
  MR_Word * MaybeReport_6)
{
  MR_bool succeeded;

  succeeded = profile__valid_proc_dynamic_ptr_2_p_0(Deep_4, PDPtr_5);
  if (succeeded)
  {
    MR_Word PD_7;
    MR_Word PSPtr_8;
    MR_Word MaybeCoveragePoints_9;
    MR_Word Slots_10;
    MR_Word CallSitesMap_11;
    MR_Word Own_12;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Box conv1_CallSitesMap_11;

    profile__deep_lookup_proc_dynamics_3_p_0(Deep_4, PDPtr_5, &PD_7);
    PSPtr_8 = ((MR_Word) ((MR_hl_field(0, PD_7, (MR_Integer) 0))));
    MaybeCoveragePoints_9 = ((MR_Word) ((MR_hl_field(0, PD_7, (MR_Integer) 2))));
    analysis_utils__proc_dynamic_paired_call_site_slots_3_p_0(Deep_4, PDPtr_5, &Slots_10);
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (&create_report_scalar_common_4[3]));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (create_report__create_dynamic_procrep_coverage_report_3_p_0_1));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_14, 3) = ((MR_Box) (Deep_4));
    }
    Var_15 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&create_report_scalar_common_1[2]));
    mercury__list__foldl_4_p_0((MR_Word) (&create_report_scalar_common_2[3]), (MR_Word) (&create_report_scalar_common_2[4]), Var_14, Slots_10, ((MR_Box) (Var_15)), &conv1_CallSitesMap_11);
    CallSitesMap_11 = ((MR_Word) (conv1_CallSitesMap_11));
    profile__deep_lookup_pd_own_3_p_0(Deep_4, PDPtr_5, &Own_12);
    if ((MaybeCoveragePoints_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeReport_6 = (MR_Word) (MR_mkword(1, &create_report_scalar_common_3[2]));
    else
    {
      MR_ArrayPtr CoveragePointsArray_41 = ((MR_ArrayPtr) ((MR_hl_field(1, MaybeCoveragePoints_9, (MR_Integer) 0))));
      MR_Word PS_42;
      MR_Word CoveragePoints_43;
      MR_Word MaybeProcRep0_44;
      MR_ArrayPtr Var_54;

      profile__deep_lookup_proc_statics_3_p_0(Deep_4, PSPtr_8, &PS_42);
      Var_54 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_42, (MR_Integer) 9))));
      coverage__coverage_point_arrays_to_list_3_p_0(Var_54, CoveragePointsArray_41, &CoveragePoints_43);
      analysis_utils__deep_get_maybe_procrep_3_p_0(Deep_4, PSPtr_8, &MaybeProcRep0_44);
      if (((MR_tag((MR_Word) MaybeProcRep0_44)) == (MR_Integer) 1))
        *MaybeReport_6 = (MR_Word) (MaybeProcRep0_44);
      else
      {
        MR_Word ProcRep0_45 = ((MR_Word) ((MR_hl_field(0, MaybeProcRep0_44, (MR_Integer) 0))));
        MR_Word SolnsCoveragePointMap_46;
        MR_Word BranchCoveragePointMap_47;
        MR_Word Goal0_48;
        MR_Word LastGoalId_49;
        MR_Word ContainingGoalMap_50;
        MR_Word Goal_51;
        MR_Word ProcRep_52;
        MR_Word CoverageArray_53;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_78;
        MR_Box conv5_SolnsCoveragePointMap_46;
        MR_Box conv4_BranchCoveragePointMap_47;
        MR_Word Var_79;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;

        Var_56 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0));
        Var_57 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0));
        mercury__list__foldl2_6_p_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), (MR_Word) (&create_report_scalar_common_2[11]), (MR_Word) (&create_report_scalar_common_2[11]), (MR_Word) (&create_report_scalar_common_2[19]), CoveragePoints_43, ((MR_Box) (Var_56)), &conv5_SolnsCoveragePointMap_46, ((MR_Box) (Var_57)), &conv4_BranchCoveragePointMap_47);
        SolnsCoveragePointMap_46 = ((MR_Word) (conv5_SolnsCoveragePointMap_46));
        BranchCoveragePointMap_47 = ((MR_Word) (conv4_BranchCoveragePointMap_47));
        Var_58 = ((MR_Word) ((MR_hl_field(0, ProcRep0_45, (MR_Integer) 1))));
        Goal0_48 = ((MR_Word) ((MR_hl_field(0, Var_58, (MR_Integer) 1))));
        program_representation_utils__label_goals_4_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), &LastGoalId_49, &ContainingGoalMap_50, Goal0_48, &Goal_51);
        Var_78 = ((MR_Word) ((MR_hl_field(0, ProcRep0_45, (MR_Integer) 0))));
        Var_59 = ((MR_Word) ((MR_hl_field(0, ProcRep0_45, (MR_Integer) 1))));
        Var_79 = ((MR_Word) ((MR_hl_field(0, Var_59, (MR_Integer) 0))));
        Var_81 = ((MR_Word) ((MR_hl_field(0, Var_59, (MR_Integer) 2))));
        Var_82 = ((MR_Word) ((MR_hl_field(0, Var_59, (MR_Integer) 3))));
        Var_83 = ((MR_Unsigned) ((MR_hl_field(0, Var_59, (MR_Integer) 4))) & (MR_Integer) 7);
        {
          Var_60 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_60, 0) = ((MR_Box) (Var_79));
          MR_hl_field(0, Var_60, 1) = ((MR_Box) (Goal_51));
          MR_hl_field(0, Var_60, 2) = ((MR_Box) (Var_81));
          MR_hl_field(0, Var_60, 3) = ((MR_Box) (Var_82));
          MR_hl_field(0, Var_60, 4) = (MR_Box) ((MR_Unsigned) (Var_83));
        }
        {
          ProcRep_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProcRep_52, 0) = ((MR_Box) (Var_78));
          MR_hl_field(0, ProcRep_52, 1) = ((MR_Box) (Var_60));
        }
        coverage__procrep_annotate_with_coverage_8_p_0((MR_Word) (&analysis_utils__analysis_utils__type_ctor_info_callee_0), ProcRep_52, Own_12, CallSitesMap_11, SolnsCoveragePointMap_46, BranchCoveragePointMap_47, ContainingGoalMap_50, LastGoalId_49, &CoverageArray_53);
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_61, 0) = ((MR_Box) (PSPtr_8));
          MR_hl_field(0, Var_61, 1) = ((MR_Box) (ProcRep_52));
          MR_hl_field(0, Var_61, 2) = ((MR_Box) (CoverageArray_53));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeReport_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_61));
        }
      }
    }
  }
  else
  {
    MR_Integer PDId_13 = (MR_Integer) (PDPtr_5);
    MR_String Var_16;
    MR_String Var_33;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&create_report_scalar_common_3[0]), PDId_13, &Var_33);
    Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "Proc dynamic pointer is invalid ", Var_33);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeReport_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
    }
  }
}

static void MR_CALL 
create_report__create_static_procrep_coverage_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__3_3;
  MR_Word conv2_HeadVar__5_5;

  coverage__add_coverage_point_to_map_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv2_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv2_HeadVar__5_5));
}

static void MR_CALL 
create_report__create_static_procrep_coverage_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  analysis_utils__build_static_call_site_cost_and_callee_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_4);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
create_report__create_static_procrep_coverage_report_3_p_0(
  MR_Word Deep_4,
  MR_Word PSPtr_5,
  MR_Word * MaybeReport_6)
{
  MR_bool succeeded;

  succeeded = profile__valid_proc_static_ptr_2_p_0(Deep_4, PSPtr_5);
  if (succeeded)
  {
    MR_Word StaticCoverage_7;
    MR_Word MaybeCoveragePoints_8;
    MR_Word PS_9;
    MR_ArrayPtr CallSitesArray_10;
    MR_Word CallSitesMap_11;
    MR_Word Own_12;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Box conv1_CallSitesMap_11;

    profile__deep_lookup_ps_coverage_3_p_0(Deep_4, PSPtr_5, &StaticCoverage_7);
    MaybeCoveragePoints_8 = measurements__static_coverage_maybe_get_coverage_points_1_f_0(StaticCoverage_7);
    profile__deep_lookup_proc_statics_3_p_0(Deep_4, PSPtr_5, &PS_9);
    CallSitesArray_10 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_9, (MR_Integer) 8))));
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = ((MR_Box) (&create_report_scalar_common_4[2]));
      MR_hl_field(0, Var_14, 1) = ((MR_Box) (create_report__create_static_procrep_coverage_report_3_p_0_1));
      MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_14, 3) = ((MR_Box) (Deep_4));
    }
    Var_15 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&create_report_scalar_common_1[1]));
    mercury__array__foldl_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&create_report_scalar_common_2[2]), Var_14, (MR_ArrayPtr) (CallSitesArray_10), ((MR_Box) (Var_15)), &conv1_CallSitesMap_11);
    CallSitesMap_11 = ((MR_Word) (conv1_CallSitesMap_11));
    profile__deep_lookup_ps_own_3_p_0(Deep_4, PSPtr_5, &Own_12);
    if ((MaybeCoveragePoints_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeReport_6 = (MR_Word) (MR_mkword(1, &create_report_scalar_common_3[2]));
    else
    {
      MR_ArrayPtr CoveragePointsArray_48 = ((MR_ArrayPtr) ((MR_hl_field(1, MaybeCoveragePoints_8, (MR_Integer) 0))));
      MR_Word PS_49;
      MR_Word CoveragePoints_50;
      MR_Word MaybeProcRep0_51;
      MR_ArrayPtr Var_61;

      profile__deep_lookup_proc_statics_3_p_0(Deep_4, PSPtr_5, &PS_49);
      Var_61 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_49, (MR_Integer) 9))));
      coverage__coverage_point_arrays_to_list_3_p_0(Var_61, CoveragePointsArray_48, &CoveragePoints_50);
      analysis_utils__deep_get_maybe_procrep_3_p_0(Deep_4, PSPtr_5, &MaybeProcRep0_51);
      if (((MR_tag((MR_Word) MaybeProcRep0_51)) == (MR_Integer) 1))
        *MaybeReport_6 = (MR_Word) (MaybeProcRep0_51);
      else
      {
        MR_Word ProcRep0_52 = ((MR_Word) ((MR_hl_field(0, MaybeProcRep0_51, (MR_Integer) 0))));
        MR_Word SolnsCoveragePointMap_53;
        MR_Word BranchCoveragePointMap_54;
        MR_Word Goal0_55;
        MR_Word LastGoalId_56;
        MR_Word ContainingGoalMap_57;
        MR_Word Goal_58;
        MR_Word ProcRep_59;
        MR_Word CoverageArray_60;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_85;
        MR_Box conv5_SolnsCoveragePointMap_53;
        MR_Box conv4_BranchCoveragePointMap_54;
        MR_Word Var_86;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;

        Var_63 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0));
        Var_64 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0), (MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0));
        mercury__list__foldl2_6_p_0((MR_Word) (&coverage__coverage__type_ctor_info_coverage_point_0), (MR_Word) (&create_report_scalar_common_2[11]), (MR_Word) (&create_report_scalar_common_2[11]), (MR_Word) (&create_report_scalar_common_2[18]), CoveragePoints_50, ((MR_Box) (Var_63)), &conv5_SolnsCoveragePointMap_53, ((MR_Box) (Var_64)), &conv4_BranchCoveragePointMap_54);
        SolnsCoveragePointMap_53 = ((MR_Word) (conv5_SolnsCoveragePointMap_53));
        BranchCoveragePointMap_54 = ((MR_Word) (conv4_BranchCoveragePointMap_54));
        Var_65 = ((MR_Word) ((MR_hl_field(0, ProcRep0_52, (MR_Integer) 1))));
        Goal0_55 = ((MR_Word) ((MR_hl_field(0, Var_65, (MR_Integer) 1))));
        program_representation_utils__label_goals_4_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), &LastGoalId_56, &ContainingGoalMap_57, Goal0_55, &Goal_58);
        Var_85 = ((MR_Word) ((MR_hl_field(0, ProcRep0_52, (MR_Integer) 0))));
        Var_66 = ((MR_Word) ((MR_hl_field(0, ProcRep0_52, (MR_Integer) 1))));
        Var_86 = ((MR_Word) ((MR_hl_field(0, Var_66, (MR_Integer) 0))));
        Var_88 = ((MR_Word) ((MR_hl_field(0, Var_66, (MR_Integer) 2))));
        Var_89 = ((MR_Word) ((MR_hl_field(0, Var_66, (MR_Integer) 3))));
        Var_90 = ((MR_Unsigned) ((MR_hl_field(0, Var_66, (MR_Integer) 4))) & (MR_Integer) 7);
        {
          Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_67, 0) = ((MR_Box) (Var_86));
          MR_hl_field(0, Var_67, 1) = ((MR_Box) (Goal_58));
          MR_hl_field(0, Var_67, 2) = ((MR_Box) (Var_88));
          MR_hl_field(0, Var_67, 3) = ((MR_Box) (Var_89));
          MR_hl_field(0, Var_67, 4) = (MR_Box) ((MR_Unsigned) (Var_90));
        }
        {
          ProcRep_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ProcRep_59, 0) = ((MR_Box) (Var_85));
          MR_hl_field(0, ProcRep_59, 1) = ((MR_Box) (Var_67));
        }
        coverage__procrep_annotate_with_coverage_8_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), ProcRep_59, Own_12, CallSitesMap_11, SolnsCoveragePointMap_53, BranchCoveragePointMap_54, ContainingGoalMap_57, LastGoalId_56, &CoverageArray_60);
        {
          Var_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_68, 0) = ((MR_Box) (PSPtr_5));
          MR_hl_field(0, Var_68, 1) = ((MR_Box) (ProcRep_59));
          MR_hl_field(0, Var_68, 2) = ((MR_Box) (CoverageArray_60));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeReport_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
        }
      }
    }
  }
  else
  {
    MR_Integer PSId_13 = (MR_Integer) (PSPtr_5);
    MR_String Var_16;
    MR_String Var_40;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&create_report_scalar_common_3[0]), PSId_13, &Var_40);
    Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "Proc static pointer is invalid ", Var_40);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeReport_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
    }
  }
}

static MR_Box MR_CALL 
create_report__create_proc_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_CallSitePerf_6;

  conv0_CallSitePerf_6 = create_report__create_call_site_summary_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_CallSitePerf_6));
  return wrapper_arg_2;
}

void MR_CALL 
create_report__create_proc_report_3_p_0(
  MR_Word Deep_4,
  MR_Word PSPtr_5,
  MR_Word * MaybeProcReport_6)
{
  MR_bool succeeded;

  succeeded = profile__valid_proc_static_ptr_2_p_0(Deep_4, PSPtr_5);
  if (succeeded)
  {
    MR_Word ProcDesc_7;
    MR_Word Own_8;
    MR_Word Desc_9;
    MR_Word ProcSummaryRowData_10;
    MR_Word PS_11;
    MR_ArrayPtr CallSitesArray_12;
    MR_Word CallSites_13;
    MR_Word ProcCallSiteSummaryRowDatas_14;
    MR_Word CallerCSDPtrs0_15;
    MR_Word SeenProcs_16;
    MR_Integer NumDynamic_17;
    MR_Word CallersOwn_18;
    MR_Word CallersInherit_19;
    MR_Integer NumStatic_20;
    MR_Word CallersSummaryRowData_21;
    MR_Word ProcReport_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_48;
    MR_Word Var_49;

    ProcDesc_7 = create_report__describe_proc_2_f_0(Deep_4, PSPtr_5);
    profile__deep_lookup_ps_own_3_p_0(Deep_4, PSPtr_5, &Own_8);
    profile__deep_lookup_ps_desc_3_p_0(Deep_4, PSPtr_5, &Desc_9);
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (Desc_9));
    }
    create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_4, ((MR_Box) (ProcDesc_7)), Own_8, Var_48, &ProcSummaryRowData_10);
    profile__deep_lookup_proc_statics_3_p_0(Deep_4, PSPtr_5, &PS_11);
    CallSitesArray_12 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_11, (MR_Integer) 8))));
    mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_ArrayPtr) (CallSitesArray_12), &CallSites_13);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (&create_report_scalar_common_6[0]));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (create_report__create_proc_report_3_p_0_1));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_23, 3) = ((MR_Box) (Deep_4));
    }
    ProcCallSiteSummaryRowDatas_14 = mercury__list__map_2_f_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_Word) (&report__report__type_ctor_info_call_site_perf_0), Var_23, CallSites_13);
    profile__deep_lookup_proc_callers_3_p_0(Deep_4, PSPtr_5, &CallerCSDPtrs0_15);
    Var_24 = mercury__set__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0));
    Var_26 = measurements__zero_own_prof_info_0_f_0();
    Var_27 = measurements__zero_inherit_prof_info_0_f_0();
    create_report__summarize_callers_11_p_0(Deep_4, CallerCSDPtrs0_15, PSPtr_5, Var_24, &SeenProcs_16, (MR_Integer) 0, &NumDynamic_17, Var_26, &CallersOwn_18, Var_27, &CallersInherit_19);
    NumStatic_20 = mercury__set__count_1_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), SeenProcs_16);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (NumStatic_20));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (NumDynamic_17));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (CallersInherit_19));
    }
    create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_4, ((MR_Box) (Var_28)), CallersOwn_18, Var_49, &CallersSummaryRowData_21);
    {
      ProcReport_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ProcReport_22, 0) = ((MR_Box) (CallersSummaryRowData_21));
      MR_hl_field(0, ProcReport_22, 1) = ((MR_Box) (ProcSummaryRowData_10));
      MR_hl_field(0, ProcReport_22, 2) = ((MR_Box) (ProcCallSiteSummaryRowDatas_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeProcReport_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ProcReport_22));
    }
  }
  else
    *MaybeProcReport_6 = (MR_Word) (MR_mkword(1, &create_report_scalar_common_3[1]));
}

static void MR_CALL 
create_report__summarize_callers_11_p_0(
  MR_Word Deep_12,
  MR_Word CallerCSDPtrs0_13,
  MR_Word CalleePSPtr_14,
  MR_Word STATE_VARIABLE_PSSeen_0_27,
  MR_Word * STATE_VARIABLE_PSSeen_28,
  MR_Integer STATE_VARIABLE_NumDynamic_0_29,
  MR_Integer * STATE_VARIABLE_NumDynamic_30,
  MR_Word STATE_VARIABLE_Own_0_31,
  MR_Word * STATE_VARIABLE_Own_32,
  MR_Word STATE_VARIABLE_Desc_0_33,
  MR_Word * STATE_VARIABLE_Desc_34)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((CallerCSDPtrs0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_PSSeen_28 = STATE_VARIABLE_PSSeen_0_27;
      *STATE_VARIABLE_NumDynamic_30 = STATE_VARIABLE_NumDynamic_0_29;
      *STATE_VARIABLE_Own_32 = STATE_VARIABLE_Own_0_31;
      *STATE_VARIABLE_Desc_34 = STATE_VARIABLE_Desc_0_33;
    }
    else
    {
      MR_Word CSDPtr_19 = ((MR_Word) ((MR_hl_field(1, CallerCSDPtrs0_13, (MR_Integer) 0))));
      MR_Word CallerCSDPtrs_20 = ((MR_Word) ((MR_hl_field(1, CallerCSDPtrs0_13, (MR_Integer) 1))));
      MR_Word CSD_21;
      MR_Word CallerPDPtr_22;
      MR_Word CallerPD_23;
      MR_Word CallerPSPtr_24;
      MR_Integer STATE_VARIABLE_NumDynamic_35_35;
      MR_Word STATE_VARIABLE_PSSeen_37_37;
      MR_Word STATE_VARIABLE_Own_38_38;
      MR_Word STATE_VARIABLE_Desc_39_39;
      MR_Integer Var_48;
      MR_Integer Var_49;
      MR_Word next_value_of_CallerCSDPtrs0_13;
      MR_Word next_value_of_STATE_VARIABLE_PSSeen_0_27;
      MR_Integer next_value_of_STATE_VARIABLE_NumDynamic_0_29;
      MR_Word next_value_of_STATE_VARIABLE_Own_0_31;
      MR_Word next_value_of_STATE_VARIABLE_Desc_0_33;

      profile__deep_lookup_call_site_dynamics_3_p_0(Deep_12, CSDPtr_19, &CSD_21);
      CallerPDPtr_22 = ((MR_Word) ((MR_hl_field(0, CSD_21, (MR_Integer) 0))));
      profile__deep_lookup_proc_dynamics_3_p_0(Deep_12, CallerPDPtr_22, &CallerPD_23);
      CallerPSPtr_24 = ((MR_Word) ((MR_hl_field(0, CallerPD_23, (MR_Integer) 0))));
      Var_48 = (MR_Integer) (CallerPSPtr_24);
      Var_49 = (MR_Integer) (CalleePSPtr_14);
      succeeded = (Var_48 == Var_49);
      if (succeeded)
      {
        STATE_VARIABLE_Desc_39_39 = STATE_VARIABLE_Desc_0_33;
        STATE_VARIABLE_Own_38_38 = STATE_VARIABLE_Own_0_31;
        STATE_VARIABLE_NumDynamic_35_35 = STATE_VARIABLE_NumDynamic_0_29;
        STATE_VARIABLE_PSSeen_37_37 = STATE_VARIABLE_PSSeen_0_27;
      }
      else
      {
        MR_Word CSDOwn_25;
        MR_Word CSDInherit_26;

        STATE_VARIABLE_NumDynamic_35_35 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumDynamic_0_29 + (MR_Unsigned) 1);
        mercury__set__insert_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), ((MR_Box) (CallerPSPtr_24)), STATE_VARIABLE_PSSeen_0_27, &STATE_VARIABLE_PSSeen_37_37);
        CSDOwn_25 = ((MR_Word) ((MR_hl_field(0, CSD_21, (MR_Integer) 2))));
        STATE_VARIABLE_Own_38_38 = measurements__add_own_to_own_2_f_0(STATE_VARIABLE_Own_0_31, CSDOwn_25);
        profile__deep_lookup_csd_desc_3_p_0(Deep_12, CSDPtr_19, &CSDInherit_26);
        STATE_VARIABLE_Desc_39_39 = measurements__add_inherit_to_inherit_2_f_0(STATE_VARIABLE_Desc_0_33, CSDInherit_26);
      }
      // direct tailcall eliminated
      ;
      next_value_of_CallerCSDPtrs0_13 = CallerCSDPtrs_20;
      next_value_of_STATE_VARIABLE_PSSeen_0_27 = STATE_VARIABLE_PSSeen_37_37;
      next_value_of_STATE_VARIABLE_NumDynamic_0_29 = STATE_VARIABLE_NumDynamic_35_35;
      next_value_of_STATE_VARIABLE_Own_0_31 = STATE_VARIABLE_Own_38_38;
      next_value_of_STATE_VARIABLE_Desc_0_33 = STATE_VARIABLE_Desc_39_39;
      CallerCSDPtrs0_13 = next_value_of_CallerCSDPtrs0_13;
      STATE_VARIABLE_PSSeen_0_27 = next_value_of_STATE_VARIABLE_PSSeen_0_27;
      STATE_VARIABLE_NumDynamic_0_29 = next_value_of_STATE_VARIABLE_NumDynamic_0_29;
      STATE_VARIABLE_Own_0_31 = next_value_of_STATE_VARIABLE_Own_0_31;
      STATE_VARIABLE_Desc_0_33 = next_value_of_STATE_VARIABLE_Desc_0_33;
      continue;
    }
    break;
  }
}

static void MR_CALL 
create_report__create_clique_report_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_CliqueProcReport_9;

  create_report__create_clique_proc_report_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_CliqueProcReport_9);
  *wrapper_arg_2 = ((MR_Box) (conv2_CliqueProcReport_9));
}

static MR_bool MR_CALL 
create_report__create_clique_report_3_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = create_report__proc_group_contains_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
create_report__create_clique_report_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_PStoPDsMap_13;

  create_report__group_proc_dynamics_by_proc_static_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_PStoPDsMap_13);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_PStoPDsMap_13));
}

void MR_CALL 
create_report__create_clique_report_3_p_0(
  MR_Word Deep_4,
  MR_Word CliquePtr_5,
  MR_Word * MaybeCliqueReport_6)
{
  MR_bool succeeded;
  MR_Word AncestorRowDatas_7;
  MR_Word PDPtrs_8;
  MR_Word PStoPDsMap_9;
  MR_Word PStoPDsList0_10;
  MR_Word EntryCSDPtr_11;
  MR_Word PStoPDsList_16;
  MR_Word CliqueProcs_17;
  MR_Word CliqueReport_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Box conv1_PStoPDsMap_9;

  AncestorRowDatas_7 = create_report__find_clique_ancestors_2_f_0(Deep_4, CliquePtr_5);
  profile__deep_lookup_clique_members_3_p_0(Deep_4, CliquePtr_5, &PDPtrs_8);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&create_report_scalar_common_4[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (create_report__create_clique_report_3_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Deep_4));
  }
  Var_20 = mercury__map__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&create_report_scalar_common_1[0]));
  mercury__list__foldl_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&create_report_scalar_common_2[0]), Var_19, PDPtrs_8, ((MR_Box) (Var_20)), &conv1_PStoPDsMap_9);
  PStoPDsMap_9 = ((MR_Word) (conv1_PStoPDsMap_9));
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&create_report_scalar_common_1[0]), PStoPDsMap_9, &PStoPDsList0_10);
  profile__deep_lookup_clique_parents_3_p_0(Deep_4, CliquePtr_5, &EntryCSDPtr_11);
  succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(Deep_4, EntryCSDPtr_11);
  if (succeeded)
  {
    MR_Word EntryCSD_12;
    MR_Word EntryPDPtr_13;
    MR_Word EntryGroup_14;
    MR_Word RestGroup_15;
    MR_Word Var_21;

    profile__deep_lookup_call_site_dynamics_3_p_0(Deep_4, EntryCSDPtr_11, &EntryCSD_12);
    EntryPDPtr_13 = ((MR_Word) ((MR_hl_field(0, EntryCSD_12, (MR_Integer) 1))));
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (&create_report_scalar_common_5[0]));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (create_report__create_clique_report_3_p_0_2));
      MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_21, 3) = ((MR_Box) (EntryPDPtr_13));
    }
    mercury__list__filter_4_p_0((MR_Word) (&create_report_scalar_common_2[1]), Var_21, PStoPDsList0_10, &EntryGroup_14, &RestGroup_15);
    PStoPDsList_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&create_report_scalar_common_2[1]), EntryGroup_14, RestGroup_15);
  }
  else
    PStoPDsList_16 = PStoPDsList0_10;
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&create_report_scalar_common_4[1]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (create_report__create_clique_report_3_p_0_3));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (Deep_4));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (CliquePtr_5));
  }
  mercury__list__map_3_p_0((MR_Word) (&create_report_scalar_common_2[1]), (MR_Word) (&report__report__type_ctor_info_clique_proc_report_0), Var_22, PStoPDsList_16, &CliqueProcs_17);
  {
    CliqueReport_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CliqueReport_18, 0) = ((MR_Box) (CliquePtr_5));
    MR_hl_field(0, CliqueReport_18, 1) = ((MR_Box) (AncestorRowDatas_7));
    MR_hl_field(0, CliqueReport_18, 2) = ((MR_Box) (CliqueProcs_17));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    *MaybeCliqueReport_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (CliqueReport_18));
  }
}

static MR_Word MR_CALL 
create_report__find_clique_ancestors_2_f_0(
  MR_Word Deep_4,
  MR_Word CliquePtr_5)
{
  MR_bool succeeded;
  MR_Word Ancestors_6;
  MR_Word EntryCSDPtr_7;

  profile__deep_lookup_clique_parents_3_p_0(Deep_4, CliquePtr_5, &EntryCSDPtr_7);
  succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(Deep_4, EntryCSDPtr_7);
  if (succeeded)
  {
    MR_Word EntryCSD_8;
    MR_Word EntryPDPtr_9;
    MR_Word Var_60;
    MR_Integer Var_62;
    MR_Integer Var_63;

    profile__deep_lookup_call_site_dynamics_3_p_0(Deep_4, EntryCSDPtr_7, &EntryCSD_8);
    EntryPDPtr_9 = ((MR_Word) ((MR_hl_field(0, EntryCSD_8, (MR_Integer) 0))));
    Var_60 = ((MR_Word) ((MR_hl_field(0, Deep_4, (MR_Integer) 4))));
    Var_62 = (MR_Integer) (EntryPDPtr_9);
    Var_63 = (MR_Integer) (Var_60);
    succeeded = (Var_62 == Var_63);
    if (succeeded)
      Ancestors_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word EntryCliquePtr_10;
      MR_Word CalleePDPtr_11;
      MR_Word CalleePD_12;
      MR_Word CalleePSPtr_13;
      MR_Word CalleeDesc_14;
      MR_Word EntryCSSPtr_15;
      MR_Word EntryCallSiteDesc_16;
      MR_Word AncestorDesc_17;
      MR_Word Own_18;
      MR_Word Desc_19;
      MR_Word Parent_20;
      MR_Word MoreAncestors_21;
      MR_Word Var_64;

      profile__deep_lookup_clique_index_3_p_0(Deep_4, EntryPDPtr_9, &EntryCliquePtr_10);
      CalleePDPtr_11 = ((MR_Word) ((MR_hl_field(0, EntryCSD_8, (MR_Integer) 1))));
      profile__deep_lookup_proc_dynamics_3_p_0(Deep_4, CalleePDPtr_11, &CalleePD_12);
      CalleePSPtr_13 = ((MR_Word) ((MR_hl_field(0, CalleePD_12, (MR_Integer) 0))));
      CalleeDesc_14 = create_report__describe_proc_2_f_0(Deep_4, CalleePSPtr_13);
      profile__deep_lookup_call_site_static_map_3_p_0(Deep_4, EntryCSDPtr_7, &EntryCSSPtr_15);
      EntryCallSiteDesc_16 = create_report__describe_call_site_2_f_0(Deep_4, EntryCSSPtr_15);
      {
        AncestorDesc_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AncestorDesc_17, 0) = ((MR_Box) (EntryCliquePtr_10));
        MR_hl_field(0, AncestorDesc_17, 1) = ((MR_Box) (CliquePtr_5));
        MR_hl_field(0, AncestorDesc_17, 2) = ((MR_Box) (CalleeDesc_14));
        MR_hl_field(0, AncestorDesc_17, 3) = ((MR_Box) (EntryCallSiteDesc_16));
      }
      Own_18 = ((MR_Word) ((MR_hl_field(0, EntryCSD_8, (MR_Integer) 2))));
      profile__deep_lookup_csd_desc_3_p_0(Deep_4, EntryCSDPtr_7, &Desc_19);
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Desc_19));
      }
      create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(Deep_4, ((MR_Box) (AncestorDesc_17)), Own_18, Var_64, &Parent_20);
      MoreAncestors_21 = create_report__find_clique_ancestors_2_f_0(Deep_4, EntryCliquePtr_10);
      {
        Ancestors_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Ancestors_6, 0) = ((MR_Box) (Parent_20));
        MR_hl_field(1, Ancestors_6, 1) = ((MR_Box) (MoreAncestors_21));
      }
    }
  }
  else
    Ancestors_6 = (MR_Word) ((MR_Unsigned) 0U);
  return Ancestors_6;
}

static void MR_CALL 
create_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_119_110_95_97_110_100_95_109_97_121_98_101_95_105_110_104_101_114_105_116_95_116_111_95_112_101_114_102_95_114_111_119_95_100_97_116_97_95_95_91_49_93_95_48_5_p_0(
  MR_Word Deep_6,
  MR_Box Subject_7,
  MR_Word Own_8,
  MR_Word MaybeDesc_9,
  MR_Word * RowData_10)
{
  MR_Word ProfileStats_11 = ((MR_Word) ((MR_hl_field(0, Deep_6, (MR_Integer) 0))));
  MR_Integer TicksPerSec_12 = ((MR_Integer) ((MR_hl_field(0, ProfileStats_11, (MR_Integer) 5))));
  MR_Integer WordSize_13;
  MR_Word Root_14;
  MR_Integer RootQuanta_15;
  MR_Integer RootCallseqs_16;
  MR_Integer RootAllocs_17;
  MR_Integer RootWords_18;
  MR_Integer Calls_19;
  MR_Integer Exits_20;
  MR_Integer Fails_21;
  MR_Integer Redos_22;
  MR_Integer Excps_23;
  MR_Integer SelfTicks_24;
  MR_Word SelfTime_25;
  MR_Word SelfTimePercent_26;
  MR_Word SelfTimePerCall_27;
  MR_Integer SelfCallseqs_28;
  MR_Word SelfCallseqsPercent_29;
  MR_Float SelfCallseqsPerCall_30;
  MR_Integer SelfAllocs_31;
  MR_Word SelfAllocsPercent_32;
  MR_Float SelfAllocsPerCall_33;
  MR_Integer SelfWords_34;
  MR_Word SelfMemory_35;
  MR_Word SelfMemoryPercent_36;
  MR_Word SelfMemoryPerCall_37;
  MR_Word SelfPerf_38;
  MR_Word MaybeTotalPerf_39;
  MR_Word Var_99 = ((MR_Word) ((MR_hl_field(0, ProfileStats_11, (MR_Integer) 9))));

  WordSize_13 = ((MR_Integer) ((MR_hl_field(0, Var_99, (MR_Integer) 0))));
  Root_14 = profile__root_total_info_1_f_0(Deep_6);
  RootQuanta_15 = measurements__inherit_quanta_1_f_0(Root_14);
  RootCallseqs_16 = measurements__inherit_callseqs_1_f_0(Root_14);
  RootAllocs_17 = measurements__inherit_allocs_1_f_0(Root_14);
  RootWords_18 = measurements__inherit_words_1_f_0(Root_14);
  Calls_19 = measurements__calls_1_f_0(Own_8);
  Exits_20 = measurements__exits_1_f_0(Own_8);
  Fails_21 = measurements__fails_1_f_0(Own_8);
  Redos_22 = measurements__redos_1_f_0(Own_8);
  Excps_23 = measurements__excps_1_f_0(Own_8);
  SelfTicks_24 = measurements__quanta_1_f_0(Own_8);
  SelfTime_25 = measurement_units__ticks_to_time_2_f_0(SelfTicks_24, TicksPerSec_12);
  SelfTimePercent_26 = create_report__percent_from_ints_2_f_0(SelfTicks_24, RootQuanta_15);
  SelfTimePerCall_27 = measurement_units__time_percall_2_f_0(SelfTime_25, Calls_19);
  SelfCallseqs_28 = measurements__callseqs_1_f_0(Own_8);
  SelfCallseqsPercent_29 = create_report__percent_from_ints_2_f_0(SelfCallseqs_28, RootCallseqs_16);
  SelfCallseqsPerCall_30 = create_report__int_per_call_2_f_0(SelfCallseqs_28, Calls_19);
  SelfAllocs_31 = measurements__allocs_1_f_0(Own_8);
  SelfAllocsPercent_32 = create_report__percent_from_ints_2_f_0(SelfAllocs_31, RootAllocs_17);
  SelfAllocsPerCall_33 = create_report__int_per_call_2_f_0(SelfAllocs_31, Calls_19);
  SelfWords_34 = measurements__words_1_f_0(Own_8);
  SelfMemory_35 = measurement_units__memory_words_2_f_0(SelfWords_34, WordSize_13);
  SelfMemoryPercent_36 = create_report__percent_from_ints_2_f_0(SelfWords_34, RootWords_18);
  SelfMemoryPerCall_37 = measurement_units__f_slash_2_f_0(SelfMemory_35, Calls_19);
  {
    SelfPerf_38 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SelfPerf_38, 0) = ((MR_Box) (SelfTicks_24));
    MR_hl_field(0, SelfPerf_38, 1) = ((MR_Box) (SelfTime_25));
    MR_hl_field(0, SelfPerf_38, 2) = ((MR_Box) (SelfTimePercent_26));
    MR_hl_field(0, SelfPerf_38, 3) = ((MR_Box) (SelfTimePerCall_27));
    MR_hl_field(0, SelfPerf_38, 4) = ((MR_Box) (SelfCallseqs_28));
    MR_hl_field(0, SelfPerf_38, 5) = ((MR_Box) (SelfCallseqsPercent_29));
    MR_hl_field(0, SelfPerf_38, 6) = MR_box_float(SelfCallseqsPerCall_30);
    MR_hl_field(0, SelfPerf_38, 7) = ((MR_Box) (SelfAllocs_31));
    MR_hl_field(0, SelfPerf_38, 8) = ((MR_Box) (SelfAllocsPercent_32));
    MR_hl_field(0, SelfPerf_38, 9) = MR_box_float(SelfAllocsPerCall_33);
    MR_hl_field(0, SelfPerf_38, 10) = ((MR_Box) (SelfMemory_35));
    MR_hl_field(0, SelfPerf_38, 11) = ((MR_Box) (SelfMemoryPercent_36));
    MR_hl_field(0, SelfPerf_38, 12) = ((MR_Box) (SelfMemoryPerCall_37));
  }
  if ((MaybeDesc_9 == (MR_Word) ((MR_Unsigned) 0U)))
    MaybeTotalPerf_39 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Desc_40 = ((MR_Word) ((MR_hl_field(1, MaybeDesc_9, (MR_Integer) 0))));
    MR_Integer TotalTicks_41;
    MR_Word TotalTime_42;
    MR_Word TotalTimePercent_43;
    MR_Word TotalTimePerCall_44;
    MR_Integer TotalCallseqs_45;
    MR_Word TotalCallseqsPercent_46;
    MR_Float TotalCallseqsPerCall_47;
    MR_Integer TotalAllocs_48;
    MR_Word TotalAllocsPercent_49;
    MR_Float TotalAllocsPerCall_50;
    MR_Integer TotalWords_51;
    MR_Word TotalMemory_52;
    MR_Word TotalMemoryPercent_53;
    MR_Word TotalMemoryPerCall_54;
    MR_Word TotalPerf_55;
    MR_Integer Var_57;
    MR_Integer Var_58;
    MR_Integer Var_59;
    MR_Integer Var_60;
    MR_Integer Var_61;

    Var_57 = measurements__inherit_quanta_1_f_0(Desc_40);
    TotalTicks_41 = (MR_Integer) ((MR_Unsigned) SelfTicks_24 + (MR_Unsigned) Var_57);
    TotalTime_42 = measurement_units__ticks_to_time_2_f_0(TotalTicks_41, TicksPerSec_12);
    TotalTimePercent_43 = create_report__percent_from_ints_2_f_0(TotalTicks_41, RootQuanta_15);
    TotalTimePerCall_44 = measurement_units__time_percall_2_f_0(TotalTime_42, Calls_19);
    Var_58 = measurements__callseqs_1_f_0(Own_8);
    Var_59 = measurements__inherit_callseqs_1_f_0(Desc_40);
    TotalCallseqs_45 = (MR_Integer) ((MR_Unsigned) Var_58 + (MR_Unsigned) Var_59);
    TotalCallseqsPercent_46 = create_report__percent_from_ints_2_f_0(TotalCallseqs_45, RootCallseqs_16);
    TotalCallseqsPerCall_47 = create_report__int_per_call_2_f_0(TotalCallseqs_45, Calls_19);
    Var_60 = measurements__inherit_allocs_1_f_0(Desc_40);
    TotalAllocs_48 = (MR_Integer) ((MR_Unsigned) SelfAllocs_31 + (MR_Unsigned) Var_60);
    TotalAllocsPercent_49 = create_report__percent_from_ints_2_f_0(TotalAllocs_48, RootAllocs_17);
    TotalAllocsPerCall_50 = create_report__int_per_call_2_f_0(TotalAllocs_48, Calls_19);
    Var_61 = measurements__inherit_words_1_f_0(Desc_40);
    TotalWords_51 = (MR_Integer) ((MR_Unsigned) SelfWords_34 + (MR_Unsigned) Var_61);
    TotalMemory_52 = measurement_units__memory_words_2_f_0(TotalWords_51, WordSize_13);
    TotalMemoryPercent_53 = create_report__percent_from_ints_2_f_0(TotalWords_51, RootWords_18);
    TotalMemoryPerCall_54 = measurement_units__f_slash_2_f_0(TotalMemory_52, Calls_19);
    {
      TotalPerf_55 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TotalPerf_55, 0) = ((MR_Box) (TotalTicks_41));
      MR_hl_field(0, TotalPerf_55, 1) = ((MR_Box) (TotalTime_42));
      MR_hl_field(0, TotalPerf_55, 2) = ((MR_Box) (TotalTimePercent_43));
      MR_hl_field(0, TotalPerf_55, 3) = ((MR_Box) (TotalTimePerCall_44));
      MR_hl_field(0, TotalPerf_55, 4) = ((MR_Box) (TotalCallseqs_45));
      MR_hl_field(0, TotalPerf_55, 5) = ((MR_Box) (TotalCallseqsPercent_46));
      MR_hl_field(0, TotalPerf_55, 6) = MR_box_float(TotalCallseqsPerCall_47);
      MR_hl_field(0, TotalPerf_55, 7) = ((MR_Box) (TotalAllocs_48));
      MR_hl_field(0, TotalPerf_55, 8) = ((MR_Box) (TotalAllocsPercent_49));
      MR_hl_field(0, TotalPerf_55, 9) = MR_box_float(TotalAllocsPerCall_50);
      MR_hl_field(0, TotalPerf_55, 10) = ((MR_Box) (TotalMemory_52));
      MR_hl_field(0, TotalPerf_55, 11) = ((MR_Box) (TotalMemoryPercent_53));
      MR_hl_field(0, TotalPerf_55, 12) = ((MR_Box) (TotalMemoryPerCall_54));
    }
    {
      MaybeTotalPerf_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeTotalPerf_39, 0) = ((MR_Box) (TotalPerf_55));
    }
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    *RowData_10 = base;
    MR_hl_field(0, base, 0) = Subject_7;
    MR_hl_field(0, base, 1) = ((MR_Box) (Calls_19));
    MR_hl_field(0, base, 2) = ((MR_Box) (Exits_20));
    MR_hl_field(0, base, 3) = ((MR_Box) (Fails_21));
    MR_hl_field(0, base, 4) = ((MR_Box) (Redos_22));
    MR_hl_field(0, base, 5) = ((MR_Box) (Excps_23));
    MR_hl_field(0, base, 6) = ((MR_Box) (WordSize_13));
    MR_hl_field(0, base, 7) = ((MR_Box) (SelfPerf_38));
    MR_hl_field(0, base, 8) = ((MR_Box) (MaybeTotalPerf_39));
  }
}

static MR_Word MR_CALL 
create_report__percent_from_ints_2_f_0(
  MR_Integer Nom_4,
  MR_Integer Denom_5)
{
  MR_bool succeeded = (Denom_5 == (MR_Integer) 0);
  MR_Word Percent_6;

  if (succeeded)
    Percent_6 = measurement_units__percent_1_f_0((MR_Float) 0.0000000000000000);
  else
  {
    MR_Float Var_8;
    MR_Float Var_9;
    MR_Float Var_10;

    Var_9 = mercury__float__float_1_f_0(Nom_4);
    Var_10 = mercury__float__float_1_f_0(Denom_5);
    Var_8 = mercury__float__f_slash_2_f_0(Var_9, Var_10);
    Percent_6 = measurement_units__percent_1_f_0(Var_8);
  }
  return Percent_6;
}

static MR_Float MR_CALL 
create_report__int_per_call_2_f_0(
  MR_Integer Num_4,
  MR_Integer Calls_5)
{
  MR_bool succeeded = (Calls_5 == (MR_Integer) 0);
  MR_Float HeadVar__3_3;

  if (succeeded)
    HeadVar__3_3 = (MR_Float) 0.0000000000000000;
  else
  {
    MR_Float Var_6;
    MR_Float Var_7;

    Var_6 = mercury__float__float_1_f_0(Num_4);
    Var_7 = mercury__float__float_1_f_0(Calls_5);
    HeadVar__3_3 = mercury__float__f_slash_2_f_0(Var_6, Var_7);
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
create_report__describe_call_site_2_f_0(
  MR_Word Deep_4,
  MR_Word CSSPtr_5)
{
  MR_bool succeeded;
  MR_Word CallSiteDesc_6;
  MR_Word ContainingPSPtr_8;
  MR_Integer SlotNumber_9;
  MR_Integer LineNumber_11;
  MR_Word RevGoalPath_12;
  MR_String FileName_14;
  MR_String ModuleName_15;
  MR_String UnQualRefinedName_16;
  MR_String QualRefinedName_17;
  MR_Word MaybeCalleeDesc_21;

  succeeded = profile__valid_call_site_static_ptr_2_p_0(Deep_4, CSSPtr_5);
  if (succeeded)
  {
    MR_Word CSS_7;
    MR_Word Kind_10;
    MR_Word ContainingPS_13;

    profile__deep_lookup_call_site_statics_3_p_0(Deep_4, CSSPtr_5, &CSS_7);
    ContainingPSPtr_8 = ((MR_Word) ((MR_hl_field(0, CSS_7, (MR_Integer) 0))));
    SlotNumber_9 = ((MR_Integer) ((MR_hl_field(0, CSS_7, (MR_Integer) 1))));
    Kind_10 = ((MR_Word) ((MR_hl_field(0, CSS_7, (MR_Integer) 2))));
    LineNumber_11 = ((MR_Integer) ((MR_hl_field(0, CSS_7, (MR_Integer) 3))));
    RevGoalPath_12 = ((MR_Word) ((MR_hl_field(0, CSS_7, (MR_Integer) 4))));
    profile__deep_lookup_proc_statics_3_p_0(Deep_4, ContainingPSPtr_8, &ContainingPS_13);
    ModuleName_15 = ((MR_String) ((MR_hl_field(0, ContainingPS_13, (MR_Integer) 1))));
    UnQualRefinedName_16 = ((MR_String) ((MR_hl_field(0, ContainingPS_13, (MR_Integer) 2))));
    QualRefinedName_17 = ((MR_String) ((MR_hl_field(0, ContainingPS_13, (MR_Integer) 3))));
    FileName_14 = ((MR_String) ((MR_hl_field(0, ContainingPS_13, (MR_Integer) 5))));
    switch (MR_tag((MR_Word) Kind_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeCalleeDesc_21 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word CalleePSPtr_18 = ((MR_Word) ((MR_hl_field(1, Kind_10, (MR_Integer) 0))));
          MR_Word CalleeDesc_20;

          CalleeDesc_20 = create_report__describe_proc_2_f_0(Deep_4, CalleePSPtr_18);
          {
            MaybeCalleeDesc_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeCalleeDesc_21, 0) = ((MR_Box) (CalleeDesc_20));
          }
        }
        break;
    }
  }
  else
  {
    ContainingPSPtr_8 = profile__dummy_proc_static_ptr_0_f_0();
    FileName_14 = (MR_String) "";
    LineNumber_11 = (MR_Integer) 0;
    ModuleName_15 = (MR_String) "";
    UnQualRefinedName_16 = (MR_String) "mercury_runtime";
    QualRefinedName_17 = (MR_String) "mercury_runtime";
    SlotNumber_9 = (MR_Integer) -1;
    RevGoalPath_12 = (MR_Word) ((MR_Unsigned) 0U);
    MaybeCalleeDesc_21 = (MR_Word) ((MR_Unsigned) 0U);
  }
  {
    CallSiteDesc_6 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallSiteDesc_6, 0) = ((MR_Box) (CSSPtr_5));
    MR_hl_field(0, CallSiteDesc_6, 1) = ((MR_Box) (ContainingPSPtr_8));
    MR_hl_field(0, CallSiteDesc_6, 2) = ((MR_Box) (FileName_14));
    MR_hl_field(0, CallSiteDesc_6, 3) = ((MR_Box) (LineNumber_11));
    MR_hl_field(0, CallSiteDesc_6, 4) = ((MR_Box) (ModuleName_15));
    MR_hl_field(0, CallSiteDesc_6, 5) = ((MR_Box) (UnQualRefinedName_16));
    MR_hl_field(0, CallSiteDesc_6, 6) = ((MR_Box) (QualRefinedName_17));
    MR_hl_field(0, CallSiteDesc_6, 7) = ((MR_Box) (SlotNumber_9));
    MR_hl_field(0, CallSiteDesc_6, 8) = ((MR_Box) (RevGoalPath_12));
    MR_hl_field(0, CallSiteDesc_6, 9) = ((MR_Box) (MaybeCalleeDesc_21));
  }
  return CallSiteDesc_6;
}

MR_Word MR_CALL 
create_report__describe_proc_2_f_0(
  MR_Word Deep_4,
  MR_Word PSPtr_5)
{
  MR_bool succeeded;
  MR_Word ProcDesc_6;
  MR_String FileName_8;
  MR_Integer LineNumber_9;
  MR_String ModuleName_10;
  MR_String UnQualRefinedName_11;
  MR_String QualRefinedName_12;

  succeeded = profile__valid_proc_static_ptr_2_p_0(Deep_4, PSPtr_5);
  if (succeeded)
  {
    MR_Word PS_7;

    profile__deep_lookup_proc_statics_3_p_0(Deep_4, PSPtr_5, &PS_7);
    ModuleName_10 = ((MR_String) ((MR_hl_field(0, PS_7, (MR_Integer) 1))));
    UnQualRefinedName_11 = ((MR_String) ((MR_hl_field(0, PS_7, (MR_Integer) 2))));
    QualRefinedName_12 = ((MR_String) ((MR_hl_field(0, PS_7, (MR_Integer) 3))));
    FileName_8 = ((MR_String) ((MR_hl_field(0, PS_7, (MR_Integer) 5))));
    LineNumber_9 = ((MR_Integer) ((MR_hl_field(0, PS_7, (MR_Integer) 6))));
  }
  else
  {
    FileName_8 = (MR_String) "";
    LineNumber_9 = (MR_Integer) 0;
    ModuleName_10 = (MR_String) "";
    UnQualRefinedName_11 = (MR_String) "mercury_runtime";
    QualRefinedName_12 = (MR_String) "mercury_runtime";
  }
  {
    ProcDesc_6 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcDesc_6, 0) = ((MR_Box) (PSPtr_5));
    MR_hl_field(0, ProcDesc_6, 1) = ((MR_Box) (FileName_8));
    MR_hl_field(0, ProcDesc_6, 2) = ((MR_Box) (LineNumber_9));
    MR_hl_field(0, ProcDesc_6, 3) = ((MR_Box) (ModuleName_10));
    MR_hl_field(0, ProcDesc_6, 4) = ((MR_Box) (UnQualRefinedName_11));
    MR_hl_field(0, ProcDesc_6, 5) = ((MR_Box) (QualRefinedName_12));
  }
  return ProcDesc_6;
}

static MR_bool MR_CALL 
create_report____Unify____call_site_callee_perf_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = create_report____Unify____call_site_callee_perf_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
create_report____Compare____call_site_callee_perf_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  create_report____Compare____call_site_callee_perf_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
create_report____Unify____gs_field_raw_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = create_report____Unify____gs_field_raw_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
create_report____Compare____gs_field_raw_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  create_report____Compare____gs_field_raw_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
create_report____Unify____raw_gs_ds_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = create_report____Unify____raw_gs_ds_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
create_report____Compare____raw_gs_ds_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  create_report____Compare____raw_gs_ds_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = create_report____Unify____raw_gs_field_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
create_report____Compare____raw_gs_field_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  create_report____Compare____raw_gs_field_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
create_report____Unify____raw_gs_field_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = create_report____Unify____raw_gs_field_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
create_report____Compare____raw_gs_field_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  create_report____Compare____raw_gs_field_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module create_report.
