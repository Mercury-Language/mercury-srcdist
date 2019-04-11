/*
** Automatically generated from `startup.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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


/* :- module startup. */
/* :- implementation. */

/*
INIT mercury__startup__init
ENDINIT
*/

#include "startup.mih"


#include "array_util.mih"
#include "callgraph.mih"
#include "canonical.mih"
#include "dump.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "read_profile.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.shared_utilities.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_0;

static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_proc_static_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_static_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0;

static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0;

static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0;

static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

static const MR_FA_TypeInfo_Struct1 startup__array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0;

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(
  MR_Word startup__Var_47,
  MR_Word startup__Var_48,
  MR_String startup__BaseName_7,
  MR_Word startup__DumpStages_8,
  MR_Integer startup__ThisStageNum_9);

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(
  MR_Word startup__Var_47,
  MR_Word startup__Var_48,
  MR_String startup__BaseName_7,
  MR_Word startup__DumpStages_8,
  MR_Integer startup__ThisStageNum_9);

static MR_Word MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_f_0(
  MR_Word startup__OverrideComp_4);

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_p_0(
  MR_Word startup__CSD_6,
  MR_ArrayPtr startup__STATE_VARIABLE_PDOwnArray_0_13,
  MR_ArrayPtr * startup__STATE_VARIABLE_PDOwnArray_14);

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(
  MR_ArrayPtr startup__CallSiteDynamics_8,
  MR_ArrayPtr startup__ProcDynamics_9,
  MR_Word startup__CSSPtr_10,
  MR_Word startup__CSDPtr_12,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_25,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_26);

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word startup__InitDeep_6,
  MR_Word startup__PD_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_18,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_19);

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_p_0(
  MR_ArrayPtr startup__CallSiteDynamics_7,
  MR_Word startup__CSSPtr_8,
  MR_Word startup__CSDPtr_10,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_12,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_13);

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_p_0(
  MR_Word startup__InitDeep_6,
  MR_Word startup__PD_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_15,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_16);

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__gather_call_site_csdptrs__1073__1_1_p_0(
  MR_Word startup__LambdaHeadVar__1_18);

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_csd_containers_2__498__1_2_p_0(
  MR_Word startup__CallerPDPtr0_14,
  MR_Word startup__HeadVar__2_22);

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__457__1_2_p_0(
  MR_Integer startup__SlotNum0_13,
  MR_Integer startup__HeadVar__2_27);

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__455__1_2_p_0(
  MR_Word startup__PSPtr0_12,
  MR_Word startup__HeadVar__2_23);

static void MR_CALL 
startup__maybe_report_msg_4_p_0(
  MR_Word startup__HeadVar__1_1,
  MR_String startup__Msg_2);

static void MR_CALL 
startup__maybe_report_stats_3_p_0(
  MR_Word startup__HeadVar__1_1);

static MR_bool MR_CALL 
startup__gather_call_site_csdptrs_5_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1);

static void MR_CALL 
startup__gather_call_site_csdptrs_5_p_0(
  MR_Word startup__Slot_6,
  MR_Word startup__CSDPtrs0_7,
  MR_Word * startup__CSDPtrs1_8,
  MR_Word startup__IsZeroed0_9,
  MR_Word * startup__IsZeroed_10);

static void MR_CALL 
startup__flat_call_sites_3_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5);

static void MR_CALL 
startup__flat_call_sites_3_p_0(
  MR_ArrayPtr startup__ProcDynamics_4,
  MR_Word startup__PDPtr_5,
  MR_Word * startup__CSDPtrs_6);

static MR_Word MR_CALL 
startup__add_to_override_3_f_0(
  MR_Word startup__STATE_VARIABLE_CompTable_0_10,
  MR_Word startup__PSPtr_6,
  MR_Word startup__PDTotal_7);

static MR_Word MR_CALL 
startup__select_override_comp_2_f_0(
  MR_Word startup__OverrideComp_4,
  MR_Word startup__HeadVar__2_5);

static MR_Box MR_CALL 
startup__add_comp_tables_2_f_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2);

static MR_Word MR_CALL 
startup__add_comp_tables_2_f_0(
  MR_Word startup__CompTableA_4,
  MR_Word startup__CompTableB_5);

static MR_Box MR_CALL 
startup__propagate_to_call_site_7_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2);

static void MR_CALL 
startup__propagate_to_call_site_7_p_0(
  MR_Integer startup__CliqueNumber_8,
  MR_Word startup__PDPtr_9,
  MR_Word startup__CSDPtr_10,
  MR_Word startup__STATE_VARIABLE_Deep_0_23,
  MR_Word * startup__STATE_VARIABLE_Deep_24,
  MR_Word startup__STATE_VARIABLE_PDCompTable_0_25,
  MR_Word * startup__STATE_VARIABLE_PDCompTable_26);

static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5);

static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0(
  MR_Integer startup__CliqueNumber_10,
  MR_Word startup__ParentCSDPtr_11,
  MR_Word startup__PDPtr_12,
  MR_Word startup__STATE_VARIABLE_Deep_0_26,
  MR_Word * startup__STATE_VARIABLE_Deep_27,
  MR_Word startup__STATE_VARIABLE_SumTable_0_28,
  MR_Word * startup__STATE_VARIABLE_SumTable_29,
  MR_Word startup__STATE_VARIABLE_OverrideTable_0_30,
  MR_Word * startup__STATE_VARIABLE_OverrideTable_31);

static MR_Box MR_CALL 
startup__propagate_to_clique_4_p_0_2(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2);

static void MR_CALL 
startup__propagate_to_clique_4_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5,
  MR_Box startup__wrapper_arg_6,
  MR_Box * startup__wrapper_arg_7);

static void MR_CALL 
startup__propagate_to_clique_4_p_0(
  MR_Integer startup__CliqueNumber_5,
  MR_Word startup__Members_6,
  MR_Word startup__STATE_VARIABLE_Deep_0_16,
  MR_Word * startup__STATE_VARIABLE_Deep_17);

static void MR_CALL 
startup__accumulate_ps_costs_6_p_0(
  MR_Word startup__Deep_7,
  MR_Word startup__PSPtr_8,
  MR_Word startup__Own0_9,
  MR_Word * startup__Own_10,
  MR_Word startup__Desc0_11,
  MR_Word * startup__Desc_12);

static void MR_CALL 
startup__summarize_proc_static_coverage_4_p_0(
  MR_Integer startup__Index_5,
  MR_Word startup__PS_6,
  MR_ArrayPtr startup__STATE_VARIABLE_CoverageArray_0_11,
  MR_ArrayPtr * startup__STATE_VARIABLE_CoverageArray_12);

static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4);

static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0(
  MR_Word startup__STATE_VARIABLE_Deep_0_6,
  MR_Word * startup__STATE_VARIABLE_Deep_7);

static void MR_CALL 
startup__summarize_module_costs_2_f_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5);

static MR_Word MR_CALL 
startup__summarize_module_costs_2_f_0(
  MR_Word startup__Deep_4,
  MR_Word startup__ModuleData0_5);

static MR_Box MR_CALL 
startup__summarize_modules_2_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1);

static void MR_CALL 
startup__summarize_modules_2_p_0(
  MR_Word startup__Deep0_3,
  MR_Word * startup__Deep_4);

static void MR_CALL 
startup__summarize_call_site_dynamic_10_p_0(
  MR_ArrayPtr startup__CallSiteStaticMap_11,
  MR_ArrayPtr startup__CallSiteStatics_12,
  MR_ArrayPtr startup__CSDDescs_13,
  MR_ArrayPtr startup__CSDCompTableArray_14,
  MR_Integer startup__CSDI_15,
  MR_Word startup__CSD_16,
  MR_ArrayPtr startup__CSSOwnArray0_17,
  MR_ArrayPtr * startup__CSSOwnArray_18,
  MR_ArrayPtr startup__CSSDescArray0_19,
  MR_ArrayPtr * startup__CSSDescArray_20);

static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4,
  MR_Box startup__wrapper_arg_5,
  MR_Box * startup__wrapper_arg_6);

static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0(
  MR_Word startup__STATE_VARIABLE_Deep_0_8,
  MR_Word * startup__STATE_VARIABLE_Deep_9);

static void MR_CALL 
startup__summarize_proc_dynamic_with_coverage_11_p_0(
  MR_ArrayPtr startup__PDOwnArray_12,
  MR_ArrayPtr startup__PDDescArray_13,
  MR_ArrayPtr startup__PDCompTableArray_14,
  MR_Integer startup__PDI_15,
  MR_Word startup__PD_16,
  MR_ArrayPtr startup__STATE_VARIABLE_PSOwnArray_0_24,
  MR_ArrayPtr * startup__STATE_VARIABLE_PSOwnArray_25,
  MR_ArrayPtr startup__STATE_VARIABLE_PSDescArray_0_26,
  MR_ArrayPtr * startup__STATE_VARIABLE_PSDescArray_27,
  MR_ArrayPtr startup__STATE_VARIABLE_CoverageArray_0_28,
  MR_ArrayPtr * startup__STATE_VARIABLE_CoverageArray_29);

static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4,
  MR_Box startup__wrapper_arg_5,
  MR_Box * startup__wrapper_arg_6,
  MR_Box startup__wrapper_arg_7,
  MR_Box * startup__wrapper_arg_8);

static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0(
  MR_Word startup__STATE_VARIABLE_Deep_0_8,
  MR_Word * startup__STATE_VARIABLE_Deep_9);

static void MR_CALL 
startup__summarize_proc_dynamic_9_p_0(
  MR_ArrayPtr startup__PDOwnArray_10,
  MR_ArrayPtr startup__PDDescArray_11,
  MR_ArrayPtr startup__PDCompTableArray_12,
  MR_Integer startup__PDI_13,
  MR_Word startup__PD_14,
  MR_ArrayPtr startup__PSOwnArray0_15,
  MR_ArrayPtr * startup__PSOwnArray_16,
  MR_ArrayPtr startup__PSDescArray0_17,
  MR_ArrayPtr * startup__PSDescArray_18);

static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4,
  MR_Box startup__wrapper_arg_5,
  MR_Box * startup__wrapper_arg_6);

static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0(
  MR_Word startup__Deep0_3,
  MR_Word * startup__Deep_4);

static void MR_CALL 
startup__sum_call_sites_in_proc_dynamic_4_p_0(
  MR_Integer startup__HeadVar__1_5,
  MR_Word startup__CSD_6,
  MR_ArrayPtr startup__STATE_VARIABLE_PDOwnArray_0_13,
  MR_ArrayPtr * startup__STATE_VARIABLE_PDOwnArray_14);

static void MR_CALL 
startup__construct_call_site_calls_3_7_p_0(
  MR_ArrayPtr startup__CallSiteDynamics_8,
  MR_ArrayPtr startup__ProcDynamics_9,
  MR_Word startup__CSSPtr_10,
  MR_Integer startup___Dummy_11,
  MR_Word startup__CSDPtr_12,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_25,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_26);

static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4);

static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0(
  MR_ArrayPtr startup__CallSiteDynamics_8,
  MR_ArrayPtr startup__ProcDynamics_9,
  MR_Integer startup__SlotNum_10,
  MR_ArrayPtr startup__CSSPtrs_11,
  MR_ArrayPtr startup__CSDArraySlots_12,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_19,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_20);

static void MR_CALL 
startup__construct_call_site_calls_5_p_0(
  MR_Word startup__InitDeep_6,
  MR_Integer startup___PDI_7,
  MR_Word startup__PD_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_18,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_19);

static void MR_CALL 
startup__construct_call_site_caller_3_6_p_0(
  MR_ArrayPtr startup__CallSiteDynamics_7,
  MR_Word startup__CSSPtr_8,
  MR_Integer startup___Dummy_9,
  MR_Word startup__CSDPtr_10,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_12,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_13);

static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4);

static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0(
  MR_Integer startup__SlotNum_7,
  MR_ArrayPtr startup__Deep_8,
  MR_ArrayPtr startup__CSSPtrs_9,
  MR_ArrayPtr startup__CSDArraySlots_10,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_17,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_18);

static void MR_CALL 
startup__construct_call_site_caller_5_p_0(
  MR_Word startup__InitDeep_6,
  MR_Integer startup___PDI_7,
  MR_Word startup__PD_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_15,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_16);

static void MR_CALL 
startup__construct_proc_callers_5_p_0(
  MR_Word startup__InitDeep_6,
  MR_Integer startup__CSDI_7,
  MR_Word startup__CSD_8,
  MR_ArrayPtr startup__STATE_VARIABLE_ProcCallers_0_15,
  MR_ArrayPtr * startup__STATE_VARIABLE_ProcCallers_16);

static void MR_CALL 
startup__construct_clique_parents_2_8_p_0(
  MR_Word startup__InitDeep_9,
  MR_ArrayPtr startup__CliqueIndex_10,
  MR_Word startup__ParentCliquePtr_11,
  MR_Word startup__CSDPtr_12,
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueParents_0_21,
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueParents_22,
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueMaybeChildren_0_23,
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueMaybeChildren_24);

static void MR_CALL 
startup__construct_clique_parents_8_p_0_2(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5);

static void MR_CALL 
startup__construct_clique_parents_8_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5);

static void MR_CALL 
startup__construct_clique_parents_8_p_0(
  MR_Word startup__InitDeep_9,
  MR_ArrayPtr startup__CliqueIndex_10,
  MR_Integer startup__PDI_11,
  MR_Word startup__CliquePtr_12,
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueParents_0_16,
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueParents_17,
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueMaybeChildren_0_18,
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueMaybeChildren_19);

static MR_bool MR_CALL 
startup__record_csd_containers_2_4_p_0_1(
  MR_Box startup__closure_arg);

static void MR_CALL 
startup__record_csd_containers_2_4_p_0(
  MR_Word startup__PDPtr_1,
  MR_Word startup__HeadVar__2_2,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0_3,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteDynamics_4);

static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5);

static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0(
  MR_Integer startup__PDI_7,
  MR_Word startup__PD_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0_18,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteDynamics_19,
  MR_ArrayPtr startup__STATE_VARIABLE_ProcStatics_0_20,
  MR_ArrayPtr * startup__STATE_VARIABLE_ProcStatics_21);

static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_2(
  MR_Box startup__closure_arg);

static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_1(
  MR_Box startup__closure_arg);

static void MR_CALL 
startup__record_css_containers_2_5_p_0(
  MR_Integer startup__SlotNum_6,
  MR_Word startup__PSPtr_7,
  MR_ArrayPtr startup__CSSPtrs_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0_18,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStatics_19);

static void MR_CALL 
startup__record_css_containers_module_procs_6_p_0(
  MR_Integer startup__PSI_7,
  MR_Word startup__PS_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0_16,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStatics_17,
  MR_Word startup__STATE_VARIABLE_ModuleProcs_0_18,
  MR_Word * startup__STATE_VARIABLE_ModuleProcs_19);

static void MR_CALL 
startup__ensure_module_has_module_data_3_p_0(
  MR_String startup__Module_4,
  MR_Word startup__STATE_VARIABLE_ModuleDataMap_0_8,
  MR_Word * startup__STATE_VARIABLE_ModuleDataMap_9);

static MR_Word MR_CALL 
startup__initialize_module_data_1_f_0(
  MR_Word startup__PSPtrs_3);

static MR_String MR_CALL 
startup__contour_file_name_1_f_0(
  MR_String startup__DataFileName_3);

static void MR_CALL 
startup__startup_11_p_0_10(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4);

static void MR_CALL 
startup__startup_11_p_0_9(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4);

static void MR_CALL 
startup__startup_11_p_0_8(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3);

static void MR_CALL 
startup__startup_11_p_0_7(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4);

static void MR_CALL 
startup__startup_11_p_0_6(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4);

static void MR_CALL 
startup__startup_11_p_0_5(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4);

static void MR_CALL 
startup__startup_11_p_0_4(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4,
  MR_Box startup__wrapper_arg_5,
  MR_Box * startup__wrapper_arg_6);

static void MR_CALL 
startup__startup_11_p_0_3(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4,
  MR_Box startup__wrapper_arg_5,
  MR_Box * startup__wrapper_arg_6);

static MR_Box MR_CALL 
startup__startup_11_p_0_2(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1);

static void MR_CALL 
startup__startup_11_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4,
  MR_Box startup__wrapper_arg_5,
  MR_Box * startup__wrapper_arg_6);

static void MR_CALL 
startup__startup_11_p_0(
  MR_String startup__Machine_12,
  MR_String startup__ScriptName_13,
  MR_String startup__DataFileName_14,
  MR_Word startup__Canonical_15,
  MR_Word startup__MaybeOutputStream_16,
  MR_Word startup__DumpStages_17,
  MR_Word startup__DumpOptions_18,
  MR_Word startup__InitDeep0_19,
  MR_Word * startup__STATE_VARIABLE_Deep_93);

static MR_String MR_CALL 
startup__make_progrep_filename_1_f_0(
  MR_String startup__DataFileName_3);


static /* final */ const MR_Box startup_scalar_common_1[20][2];

static /* final */ const MR_Box startup_scalar_common_2[18][3];

static /* final */ const MR_Box startup_scalar_common_3[4][9];

static /* final */ const MR_Box startup_scalar_common_4[4][5];

static /* final */ const MR_Box startup_scalar_common_5[2][11];

static /* final */ const MR_Box startup_scalar_common_6[4][8];

static /* final */ const MR_Box startup_scalar_common_7[3][6];

static /* final */ const MR_Box startup_scalar_common_8[3][7];

static /* final */ const MR_Box startup_scalar_common_9[2][10];

static /* final */ const MR_Box startup_scalar_common_10[2][12];

static /* final */ const MR_Box startup_scalar_common_11[1][14];

static /* final */ const MR_Box startup_scalar_common_12[1][13];

static /* final */ const MR_Box startup_scalar_common_13[1][4];




static /* final */ const MR_Box startup_scalar_common_1[20][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&startup_scalar_common_1[5]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&startup_scalar_common_1[8]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&startup_scalar_common_2[1]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_module_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&startup_scalar_common_1[15]))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&startup_scalar_common_1[16]))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&startup_scalar_common_1[8]))
  },
};

static /* final */ const MR_Box startup_scalar_common_2[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&startup_scalar_common_1[1]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&startup_scalar_common_1[8]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_module_data_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&startup_scalar_common_3[0])),
    ((MR_Box) (startup__startup_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&startup_scalar_common_4[0])),
    ((MR_Box) (startup__startup_11_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&startup_scalar_common_3[1])),
    ((MR_Box) (startup__startup_11_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&startup_scalar_common_7[0])),
    ((MR_Box) (startup__startup_11_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&startup_scalar_common_8[0])),
    ((MR_Box) (startup__startup_11_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&startup_scalar_common_8[1])),
    ((MR_Box) (startup__startup_11_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&startup_scalar_common_6[3])),
    ((MR_Box) (startup__record_csd_containers_zeroed_pss_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&startup_scalar_common_6[3])),
    ((MR_Box) (startup__construct_clique_parents_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&startup_scalar_common_8[2])),
    ((MR_Box) (startup__summarize_proc_statics_coverage_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&startup_scalar_common_7[2])),
    ((MR_Box) (startup__propagate_to_clique_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&startup_scalar_common_7[2])),
    ((MR_Box) (startup__propagate_to_call_site_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&startup_scalar_common_7[2])),
    ((MR_Box) (startup__add_comp_tables_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&startup_scalar_common_6[3])),
    ((MR_Box) (startup__flat_call_sites_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&startup_scalar_common_13[0])),
    ((MR_Box) (startup__gather_call_site_csdptrs_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box startup_scalar_common_3[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_4[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&startup__list__pti_list_1__plain_profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_module_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_5[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_6[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&startup__list__pti_list_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__list__pti_list_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_is_zeroed_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_is_zeroed_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_7[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_module_data_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_module_data_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_8[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&startup__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_9[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_10[2][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_11[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_12[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_13[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
};



#include "array.mh"
#include "io.mh"
#include "profile.mh"
#include "read_profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_0
  }
};

static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &startup__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
  }
};

static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_module_data_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 startup__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &startup__array__ti_array_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(
  MR_Word startup__Var_47,
  MR_Word startup__Var_48,
  MR_String startup__BaseName_7,
  MR_Word startup__DumpStages_8,
  MR_Integer startup__ThisStageNum_9)
{
  {
    MR_bool startup__succeeded;
    MR_String startup__ThisStage_12;

    {
      mercury__string__int_to_string_2_p_0(startup__ThisStageNum_9, &startup__ThisStage_12);
    }
    {
      startup__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "all")), startup__DumpStages_8);
    }
    if (!(startup__succeeded))
      {
        {
          startup__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (startup__ThisStage_12)), startup__DumpStages_8);
        }
      }
    if (startup__succeeded)
      {
        MR_String startup__FileName_13;
        MR_Word startup__OpenRes_14;
        MR_Word startup__Var_23;
        MR_Word startup__Var_24;
        MR_Word startup__Var_26;

        {
          startup__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), startup__Var_26, 0) = ((MR_Box) (startup__ThisStage_12));
          MR_hl_field(MR_mktag(1), startup__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          startup__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), startup__Var_24, 0) = ((MR_Box) ((MR_String) ".deepdump."));
          MR_hl_field(MR_mktag(1), startup__Var_24, 1) = ((MR_Box) (startup__Var_26));
        }
        {
          startup__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), startup__Var_23, 0) = ((MR_Box) (startup__BaseName_7));
          MR_hl_field(MR_mktag(1), startup__Var_23, 1) = ((MR_Box) (startup__Var_24));
        }
        {
          mercury__string__append_list_2_p_0(startup__Var_23, &startup__FileName_13);
        }
        {
          mercury__io__open_output_4_p_0(startup__FileName_13, &startup__OpenRes_14);
        }
        if (((MR_tag((MR_Word) startup__OpenRes_14)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word startup__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__OpenRes_14, (MR_Integer) 0)));
            MR_String startup__Msg_19;

            {
              mercury__io__error_message_2_p_0(startup__Error_18, &startup__Msg_19);
            }
            {
              mercury__io__write_string_3_p_0(startup__FileName_13);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ": ");
            }
            {
              mercury__io__write_string_3_p_0(startup__Msg_19);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
            MR_Word startup__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__OpenRes_14, (MR_Integer) 0)));
            MR_Word startup__CurStream_16;
            MR_Word startup__Var_17;

            {
              mercury__io__set_output_stream_4_p_0(startup__FileStream_15, &startup__CurStream_16);
            }
            {
              dump__dump_initial_deep_4_p_0(startup__Var_47, startup__Var_48);
            }
            {
              mercury__io__close_output_3_p_0(startup__FileStream_15);
            }
            {
              mercury__io__set_output_stream_4_p_0(startup__CurStream_16, &startup__Var_17);
            }
          }
      }
    else
      {
      }
  }
}

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(
  MR_Word startup__Var_47,
  MR_Word startup__Var_48,
  MR_String startup__BaseName_7,
  MR_Word startup__DumpStages_8,
  MR_Integer startup__ThisStageNum_9)
{
  {
    MR_bool startup__succeeded;
    MR_String startup__ThisStage_12;

    {
      mercury__string__int_to_string_2_p_0(startup__ThisStageNum_9, &startup__ThisStage_12);
    }
    {
      startup__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "all")), startup__DumpStages_8);
    }
    if (!(startup__succeeded))
      {
        {
          startup__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (startup__ThisStage_12)), startup__DumpStages_8);
        }
      }
    if (startup__succeeded)
      {
        MR_String startup__FileName_13;
        MR_Word startup__OpenRes_14;
        MR_Word startup__Var_23;
        MR_Word startup__Var_24;
        MR_Word startup__Var_26;

        {
          startup__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), startup__Var_26, 0) = ((MR_Box) (startup__ThisStage_12));
          MR_hl_field(MR_mktag(1), startup__Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          startup__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), startup__Var_24, 0) = ((MR_Box) ((MR_String) ".deepdump."));
          MR_hl_field(MR_mktag(1), startup__Var_24, 1) = ((MR_Box) (startup__Var_26));
        }
        {
          startup__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), startup__Var_23, 0) = ((MR_Box) (startup__BaseName_7));
          MR_hl_field(MR_mktag(1), startup__Var_23, 1) = ((MR_Box) (startup__Var_24));
        }
        {
          mercury__string__append_list_2_p_0(startup__Var_23, &startup__FileName_13);
        }
        {
          mercury__io__open_output_4_p_0(startup__FileName_13, &startup__OpenRes_14);
        }
        if (((MR_tag((MR_Word) startup__OpenRes_14)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word startup__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__OpenRes_14, (MR_Integer) 0)));
            MR_String startup__Msg_19;

            {
              mercury__io__error_message_2_p_0(startup__Error_18, &startup__Msg_19);
            }
            {
              mercury__io__write_string_3_p_0(startup__FileName_13);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ": ");
            }
            {
              mercury__io__write_string_3_p_0(startup__Msg_19);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
          }
        else
          {
            MR_Word startup__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__OpenRes_14, (MR_Integer) 0)));
            MR_Word startup__CurStream_16;
            MR_Word startup__Var_17;

            {
              mercury__io__set_output_stream_4_p_0(startup__FileStream_15, &startup__CurStream_16);
            }
            {
              dump__dump_deep_4_p_0(startup__Var_47, startup__Var_48);
            }
            {
              mercury__io__close_output_3_p_0(startup__FileStream_15);
            }
            {
              mercury__io__set_output_stream_4_p_0(startup__CurStream_16, &startup__Var_17);
            }
          }
      }
    else
      {
      }
  }
}

static MR_Word MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_f_0(
  MR_Word startup__OverrideComp_4)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__OverrideComp_3 = startup__OverrideComp_4;

    return startup__OverrideComp_3;
  }
}

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_p_0(
  MR_Word startup__CSD_6,
  MR_ArrayPtr startup__STATE_VARIABLE_PDOwnArray_0_13,
  MR_ArrayPtr * startup__STATE_VARIABLE_PDOwnArray_14)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__CalleeOwn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_6, (MR_Integer) 2)));
    MR_Word startup__PDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_6, (MR_Integer) 1)));
    MR_Integer startup__PDI_10 = (MR_Integer) startup__PDPtr_9;
    MR_Word startup__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_6, (MR_Integer) 0)));

    startup__succeeded = (startup__PDI_10 > (MR_Integer) 0);
    if (startup__succeeded)
      {
        MR_Word startup__TypeCtorInfo_22_22 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
        MR_Word startup__ProcOwn0_11;
        MR_Word startup__ProcOwn_12;
        MR_Box startup__conv0_ProcOwn0_11;
        MR_ArrayPtr startup__conv1_STATE_VARIABLE_PDOwnArray_14;

        {
          mercury__array__lookup_3_p_0(startup__TypeCtorInfo_22_22, (MR_ArrayPtr) startup__STATE_VARIABLE_PDOwnArray_0_13, startup__PDI_10, &startup__conv0_ProcOwn0_11);
        }
        startup__ProcOwn0_11 = ((MR_Word) startup__conv0_ProcOwn0_11);
        {
          startup__ProcOwn_12 = measurements__add_own_to_own_2_f_0(startup__CalleeOwn_8, startup__ProcOwn0_11);
        }
        {
          mercury__array__set_4_p_0(startup__TypeCtorInfo_22_22, startup__PDI_10, ((MR_Box) (startup__ProcOwn_12)), (MR_ArrayPtr) startup__STATE_VARIABLE_PDOwnArray_0_13, &startup__conv1_STATE_VARIABLE_PDOwnArray_14);
        }
        *startup__STATE_VARIABLE_PDOwnArray_14 = (MR_ArrayPtr) startup__conv1_STATE_VARIABLE_PDOwnArray_14;
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "sum_call_sites_in_proc_dynamic: invalid pdptr");
          return;
        }
      }
  }
}

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(
  MR_ArrayPtr startup__CallSiteDynamics_8,
  MR_ArrayPtr startup__ProcDynamics_9,
  MR_Word startup__CSSPtr_10,
  MR_Word startup__CSDPtr_12,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_25,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_26)
{
  {
    MR_bool startup__succeeded;
    MR_Integer startup__CSDI_14 = (MR_Integer) startup__CSDPtr_12;

    startup__succeeded = (startup__CSDI_14 > (MR_Integer) 0);
    if (startup__succeeded)
      {
        MR_Word startup__TypeInfo_37_37;
        MR_Word startup__CSD_15;
        MR_Word startup__PDPtr_16;
        MR_Integer startup__PDI_17;
        MR_Word startup__PD_18;
        MR_Word startup__PSPtr_19;
        MR_Integer startup__CSSI_20;
        MR_Word startup__CallMap0_21;
        MR_Word startup__CallMap_24;
        MR_Box startup__conv0_CSD_15;
        MR_Word startup__Var_31;
        MR_Word startup__Var_32;
        MR_Box startup__conv1_PD_18;
        MR_ArrayPtr startup__Var_33;
        MR_Word startup__Var_34;
        MR_Box startup__conv2_CallMap0_21;
        MR_Word startup__CallList0_22;
        MR_Box startup__conv3_CallList0_22;
        MR_ArrayPtr startup__conv4_STATE_VARIABLE_CallSiteCalls_26;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) startup__CallSiteDynamics_8, startup__CSDI_14, &startup__conv0_CSD_15);
        }
        startup__CSD_15 = ((MR_Word) startup__conv0_CSD_15);
        startup__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_15, (MR_Integer) 0)));
        startup__PDPtr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_15, (MR_Integer) 1)));
        startup__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_15, (MR_Integer) 2)));
        startup__PDI_17 = (MR_Integer) startup__PDPtr_16;
        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) startup__ProcDynamics_9, startup__PDI_17, &startup__conv1_PD_18);
        }
        startup__PD_18 = ((MR_Word) startup__conv1_PD_18);
        startup__PSPtr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_18, (MR_Integer) 0)));
        startup__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_18, (MR_Integer) 1)));
        startup__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_18, (MR_Integer) 2)));
        startup__CSSI_20 = (MR_Integer) startup__CSSPtr_10;
        startup__TypeInfo_37_37 = (MR_Word) &startup_scalar_common_2[1];
        {
          mercury__array__lookup_3_p_0(startup__TypeInfo_37_37, (MR_ArrayPtr) startup__STATE_VARIABLE_CallSiteCalls_0_25, startup__CSSI_20, &startup__conv2_CallMap0_21);
        }
        startup__CallMap0_21 = ((MR_Word) startup__conv2_CallMap0_21);
        {
          startup__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_1[8], startup__CallMap0_21, ((MR_Box) (startup__PSPtr_19)), &startup__conv3_CallList0_22);
        }
        if (startup__succeeded)
          {
            startup__CallList0_22 = ((MR_Word) startup__conv3_CallList0_22);
            startup__succeeded = MR_TRUE;
          }
        if (startup__succeeded)
          {
            MR_Word startup__CallList_23;

            {
              startup__CallList_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), startup__CallList_23, 0) = ((MR_Box) (startup__CSDPtr_12));
              MR_hl_field(MR_mktag(1), startup__CallList_23, 1) = ((MR_Box) (startup__CallList0_22));
            }
            {
              mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_1[8], ((MR_Box) (startup__PSPtr_19)), ((MR_Box) (startup__CallList_23)), startup__CallMap0_21, &startup__CallMap_24);
            }
          }
        else
          {
            MR_Word startup__CallList_30;

            {
              startup__CallList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), startup__CallList_30, 0) = ((MR_Box) (startup__CSDPtr_12));
              MR_hl_field(MR_mktag(1), startup__CallList_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_1[8], ((MR_Box) (startup__PSPtr_19)), ((MR_Box) (startup__CallList_30)), startup__CallMap0_21, &startup__CallMap_24);
            }
          }
        {
          mercury__array__set_4_p_0(startup__TypeInfo_37_37, startup__CSSI_20, ((MR_Box) (startup__CallMap_24)), (MR_ArrayPtr) startup__STATE_VARIABLE_CallSiteCalls_0_25, &startup__conv4_STATE_VARIABLE_CallSiteCalls_26);
        }
        *startup__STATE_VARIABLE_CallSiteCalls_26 = (MR_ArrayPtr) startup__conv4_STATE_VARIABLE_CallSiteCalls_26;
      }
    else
      *startup__STATE_VARIABLE_CallSiteCalls_26 = startup__STATE_VARIABLE_CallSiteCalls_0_25;
  }
}

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word startup__InitDeep_6,
  MR_Word startup__PD_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_18,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_19)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__PSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 0)));
    MR_ArrayPtr startup__CSDArraySlots_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 1)));
    MR_Integer startup__MaxCS_12;
    MR_Integer startup__PSI_13;
    MR_Word startup__PS_14;
    MR_ArrayPtr startup__CSSPtrs_15;
    MR_ArrayPtr startup__CallSiteDynamics_16;
    MR_ArrayPtr startup__ProcDynamics_17;
    MR_ArrayPtr startup__Var_20;
    MR_Word startup__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 2)));
    MR_Word startup__Var_26;
    MR_Word startup__Var_27;
    MR_ArrayPtr startup__Var_28;
    MR_ArrayPtr startup__Var_29;
    MR_ArrayPtr startup__Var_30;
    MR_Box startup__conv0_PS_14;
    MR_Word startup__Var_31;
    MR_String startup__Var_32;
    MR_String startup__Var_33;
    MR_String startup__Var_34;
    MR_String startup__Var_35;
    MR_String startup__Var_36;
    MR_Integer startup__Var_37;
    MR_Word startup__Var_38;
    MR_ArrayPtr startup__Var_39;
    MR_Word startup__Var_40;
    MR_Word startup__Var_41;
    MR_Word startup__Var_42;
    MR_Word startup__Var_43;
    MR_ArrayPtr startup__Var_45;
    MR_ArrayPtr startup__Var_46;

    {
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) startup__CSDArraySlots_11, &startup__MaxCS_12);
    }
    startup__PSI_13 = (MR_Integer) startup__PSPtr_10;
    startup__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
    startup__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
    startup__Var_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
    startup__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
    startup__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
    startup__Var_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
    {
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) startup__Var_20, startup__PSI_13, &startup__conv0_PS_14);
    }
    startup__PS_14 = ((MR_Word) startup__conv0_PS_14);
    startup__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 0)));
    startup__Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 1)));
    startup__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 2)));
    startup__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 3)));
    startup__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 4)));
    startup__Var_36 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 5)));
    startup__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 6)));
    startup__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 7)));
    startup__CSSPtrs_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 8)));
    startup__Var_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 9)));
    startup__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 10)));
    startup__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 11)));
    startup__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
    startup__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
    startup__CallSiteDynamics_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
    startup__ProcDynamics_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
    startup__Var_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
    startup__Var_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
    {
      startup__construct_call_site_calls_2_7_p_0(startup__CallSiteDynamics_16, startup__ProcDynamics_17, startup__MaxCS_12, startup__CSSPtrs_15, startup__CSDArraySlots_11, startup__STATE_VARIABLE_CallSiteCalls_0_18, startup__STATE_VARIABLE_CallSiteCalls_19);
    }
  }
}

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_p_0(
  MR_ArrayPtr startup__CallSiteDynamics_7,
  MR_Word startup__CSSPtr_8,
  MR_Word startup__CSDPtr_10,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_12,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_13)
{
  {
    MR_bool startup__succeeded;

    {
      startup__succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(startup__CallSiteDynamics_7, startup__CSDPtr_10);
    }
    if (startup__succeeded)
      {
        profile__update_call_site_static_map_4_p_0(startup__CSDPtr_10, startup__CSSPtr_8, startup__STATE_VARIABLE_CallSiteStaticMap_0_12, startup__STATE_VARIABLE_CallSiteStaticMap_13);
      }
    else
      *startup__STATE_VARIABLE_CallSiteStaticMap_13 = startup__STATE_VARIABLE_CallSiteStaticMap_0_12;
  }
}

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_p_0(
  MR_Word startup__InitDeep_6,
  MR_Word startup__PD_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_15,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_16)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__PSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 0)));
    MR_ArrayPtr startup__CSDArraySlots_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 1)));
    MR_Word startup__PS_12;
    MR_ArrayPtr startup__CSSPtrs_13;
    MR_Integer startup__MaxCS_14;
    MR_ArrayPtr startup__Var_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
    MR_ArrayPtr startup__Var_18;
    MR_Word startup__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 2)));
    MR_Word startup__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
    MR_Word startup__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
    MR_ArrayPtr startup__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
    MR_ArrayPtr startup__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
    MR_ArrayPtr startup__Var_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
    MR_Word startup__Var_29;
    MR_String startup__Var_30;
    MR_String startup__Var_31;
    MR_String startup__Var_32;
    MR_String startup__Var_33;
    MR_String startup__Var_34;
    MR_Integer startup__Var_35;
    MR_Word startup__Var_36;
    MR_ArrayPtr startup__Var_37;
    MR_Word startup__Var_38;
    MR_Word startup__Var_39;
    MR_Word startup__Var_40;
    MR_Word startup__Var_41;
    MR_ArrayPtr startup__Var_42;
    MR_ArrayPtr startup__Var_43;
    MR_ArrayPtr startup__Var_44;

    {
      profile__lookup_proc_statics_3_p_0(startup__Var_17, startup__PSPtr_10, &startup__PS_12);
    }
    startup__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 0)));
    startup__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 1)));
    startup__Var_31 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 2)));
    startup__Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 3)));
    startup__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 4)));
    startup__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 5)));
    startup__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 6)));
    startup__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 7)));
    startup__CSSPtrs_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 8)));
    startup__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 9)));
    startup__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 10)));
    startup__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 11)));
    {
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) startup__CSDArraySlots_11, &startup__MaxCS_14);
    }
    startup__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
    startup__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
    startup__Var_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
    startup__Var_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
    startup__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
    startup__Var_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
    {
      startup__construct_call_site_caller_2_6_p_0(startup__MaxCS_14, startup__Var_18, startup__CSSPtrs_13, startup__CSDArraySlots_11, startup__STATE_VARIABLE_CallSiteStaticMap_0_15, startup__STATE_VARIABLE_CallSiteStaticMap_16);
    }
  }
}

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__gather_call_site_csdptrs__1073__1_1_p_0(
  MR_Word startup__LambdaHeadVar__1_18)
{
  {
    MR_bool startup__succeeded;
    MR_Integer startup__CSDI_24 = (MR_Integer) startup__LambdaHeadVar__1_18;

    startup__succeeded = (startup__CSDI_24 > (MR_Integer) 0);
    return startup__succeeded;
  }
}

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_csd_containers_2__498__1_2_p_0(
  MR_Word startup__CallerPDPtr0_14,
  MR_Word startup__HeadVar__2_22)
{
  {
    MR_bool startup__succeeded;
    MR_Integer startup__Var_27 = (MR_Integer) startup__CallerPDPtr0_14;
    MR_Integer startup__Var_28 = (MR_Integer) startup__HeadVar__2_22;

    startup__succeeded = (startup__Var_27 == startup__Var_28);
    return startup__succeeded;
  }
}

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__457__1_2_p_0(
  MR_Integer startup__SlotNum0_13,
  MR_Integer startup__HeadVar__2_27)
{
  {
    MR_bool startup__succeeded = (startup__SlotNum0_13 == startup__HeadVar__2_27);

    return startup__succeeded;
  }
}

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__455__1_2_p_0(
  MR_Word startup__PSPtr0_12,
  MR_Word startup__HeadVar__2_23)
{
  {
    MR_bool startup__succeeded;
    MR_Integer startup__Var_35 = (MR_Integer) startup__PSPtr0_12;
    MR_Integer startup__Var_36 = (MR_Integer) startup__HeadVar__2_23;

    startup__succeeded = (startup__Var_35 == startup__Var_36);
    return startup__succeeded;
  }
}

static void MR_CALL 
startup__maybe_report_msg_4_p_0(
  MR_Word startup__HeadVar__1_1,
  MR_String startup__Msg_2)
{
  {
    MR_bool startup__succeeded;

    if ((startup__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word startup__OutputStream_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__HeadVar__1_1, (MR_Integer) 0)));

        {
          mercury__io__write_string_4_p_0(startup__OutputStream_5, startup__Msg_2);
        }
        {
          mercury__io__flush_output_3_p_0(startup__OutputStream_5);
        }
      }
  }
}

static void MR_CALL 
startup__maybe_report_stats_3_p_0(
  MR_Word startup__HeadVar__1_1)
{
  {
    MR_bool startup__succeeded;

    if ((startup__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
      }
  }
}

static MR_bool MR_CALL 
startup__gather_call_site_csdptrs_5_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1)
{
  {
    MR_bool startup__succeeded;
    MR_Box startup__closure = startup__closure_arg;

    {
      startup__succeeded = startup__IntroducedFrom__pred__gather_call_site_csdptrs__1073__1_1_p_0(((MR_Word) startup__wrapper_arg_1));
    }
    return startup__succeeded;
  }
}

static void MR_CALL 
startup__gather_call_site_csdptrs_5_p_0(
  MR_Word startup__Slot_6,
  MR_Word startup__CSDPtrs0_7,
  MR_Word * startup__CSDPtrs1_8,
  MR_Word startup__IsZeroed0_9,
  MR_Word * startup__IsZeroed_10)
{
  {
    MR_bool startup__succeeded;

    if (((MR_tag((MR_Word) startup__Slot_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word startup__TypeCtorInfo_28_28 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
        MR_Word startup__IsZeroed1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__Slot_6, (MR_Integer) 0)));
        MR_ArrayPtr startup__PtrArray_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__Slot_6, (MR_Integer) 1)));
        MR_Word startup__PtrList0_15;
        MR_Word startup__PtrList1_16;

        {
          mercury__array__to_list_2_p_0(startup__TypeCtorInfo_28_28, (MR_ArrayPtr) startup__PtrArray_14, &startup__PtrList0_15);
        }
        {
          mercury__list__filter_3_p_0(startup__TypeCtorInfo_28_28, (MR_Word) &startup_scalar_common_2[17], startup__PtrList0_15, &startup__PtrList1_16);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *startup__CSDPtrs1_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (startup__PtrList1_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (startup__CSDPtrs0_7));
        }
        switch (startup__IsZeroed1_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *startup__IsZeroed_10 = startup__IsZeroed0_9;
            break;
          case (MR_Integer) 0:
            *startup__IsZeroed_10 = (MR_Integer) 0;
            break;
        }
      }
    else
      {
        MR_Word startup__CSDPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Slot_6, (MR_Integer) 0)));
        MR_Integer startup__CSDI_12 = (MR_Integer) startup__CSDPtr_11;

        startup__succeeded = (startup__CSDI_12 > (MR_Integer) 0);
        if (startup__succeeded)
          {
            MR_Word startup__Var_21;

            {
              startup__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), startup__Var_21, 0) = ((MR_Box) (startup__CSDPtr_11));
              MR_hl_field(MR_mktag(1), startup__Var_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *startup__CSDPtrs1_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (startup__Var_21));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (startup__CSDPtrs0_7));
            }
          }
        else
          *startup__CSDPtrs1_8 = startup__CSDPtrs0_7;
        *startup__IsZeroed_10 = startup__IsZeroed0_9;
      }
  }
}

static void MR_CALL 
startup__flat_call_sites_3_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_Word startup__conv1_CSDPtrs1_8;
    MR_Word startup__conv0_IsZeroed_10;

    {
      startup__gather_call_site_csdptrs_5_p_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_CSDPtrs1_8, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_IsZeroed_10);
    }
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_CSDPtrs1_8));
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_IsZeroed_10));
  }
}

static void MR_CALL 
startup__flat_call_sites_3_p_0(
  MR_ArrayPtr startup__ProcDynamics_4,
  MR_Word startup__PDPtr_5,
  MR_Word * startup__CSDPtrs_6)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__TypeCtorInfo_13_21;
    MR_Word startup__PD_7;
    MR_ArrayPtr startup__CallSiteArray_8;
    MR_Word startup__CallSites_15;
    MR_Word startup__CSDPtrsList0_16;
    MR_Word startup__CSDPtrsList_17;
    MR_Word startup__Var_10;
    MR_Word startup__Var_11;
    MR_Word startup__Var_9;
    MR_Box startup__conv3_CSDPtrsList0_16;
    MR_Box startup__conv2_Var_9;

    {
      profile__lookup_proc_dynamics_3_p_0(startup__ProcDynamics_4, startup__PDPtr_5, &startup__PD_7);
    }
    startup__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_7, (MR_Integer) 0)));
    startup__CallSiteArray_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_7, (MR_Integer) 1)));
    startup__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_7, (MR_Integer) 2)));
    startup__TypeCtorInfo_13_21 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
    {
      mercury__array__to_list_2_p_0(startup__TypeCtorInfo_13_21, (MR_ArrayPtr) startup__CallSiteArray_8, &startup__CallSites_15);
    }
    {
      mercury__list__foldl2_6_p_0(startup__TypeCtorInfo_13_21, (MR_Word) &startup_scalar_common_1[19], (MR_Word) &profile__profile__type_ctor_info_is_zeroed_0, (MR_Word) &startup_scalar_common_2[16], startup__CallSites_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv3_CSDPtrsList0_16, ((MR_Box) ((MR_Integer) 1)), &startup__conv2_Var_9);
    }
    startup__CSDPtrsList0_16 = ((MR_Word) startup__conv3_CSDPtrsList0_16);
    startup__Var_9 = ((MR_Word) startup__conv2_Var_9);
    {
      mercury__list__reverse_2_p_0((MR_Word) &startup_scalar_common_1[8], startup__CSDPtrsList0_16, &startup__CSDPtrsList_17);
    }
    {
      mercury__list__condense_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__CSDPtrsList_17, startup__CSDPtrs_6);
    }
  }
}

static MR_Word MR_CALL 
startup__add_to_override_3_f_0(
  MR_Word startup__STATE_VARIABLE_CompTable_0_10,
  MR_Word startup__PSPtr_6,
  MR_Word startup__PDTotal_7)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__STATE_VARIABLE_CompTable_11;
    MR_Word startup__Comp0_8;
    MR_Box startup__conv0_Comp0_8;

    {
      startup__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__STATE_VARIABLE_CompTable_0_10, ((MR_Box) (startup__PSPtr_6)), &startup__conv0_Comp0_8);
    }
    if (startup__succeeded)
      {
        startup__Comp0_8 = ((MR_Word) startup__conv0_Comp0_8);
        startup__succeeded = MR_TRUE;
      }
    if (startup__succeeded)
      {
        MR_Word startup__Comp_9;

        {
          startup__Comp_9 = measurements__add_inherit_to_inherit_2_f_0(startup__Comp0_8, startup__PDTotal_7);
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, ((MR_Box) (startup__PSPtr_6)), ((MR_Box) (startup__Comp_9)), startup__STATE_VARIABLE_CompTable_0_10, &startup__STATE_VARIABLE_CompTable_11);
        }
      }
    else
      {
        {
          mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, ((MR_Box) (startup__PSPtr_6)), ((MR_Box) (startup__PDTotal_7)), startup__STATE_VARIABLE_CompTable_0_10, &startup__STATE_VARIABLE_CompTable_11);
        }
      }
    return startup__STATE_VARIABLE_CompTable_11;
  }
}

static MR_Word MR_CALL 
startup__select_override_comp_2_f_0(
  MR_Word startup__OverrideComp_4,
  MR_Word startup__HeadVar__2_5)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__OverrideComp_3;

    {
      startup__OverrideComp_3 = startup__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_f_0(startup__OverrideComp_4);
    }
    return startup__OverrideComp_3;
  }
}

static MR_Box MR_CALL 
startup__add_comp_tables_2_f_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2)
{
  {
    MR_Box startup__wrapper_arg_3;
    MR_Box startup__closure = startup__closure_arg;
    MR_Word startup__conv0_HeadVar__3_3;

    {
      startup__conv0_HeadVar__3_3 = measurements__add_inherit_to_inherit_2_f_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2));
    }
    startup__wrapper_arg_3 = ((MR_Box) (startup__conv0_HeadVar__3_3));
    return startup__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
startup__add_comp_tables_2_f_0(
  MR_Word startup__CompTableA_4,
  MR_Word startup__CompTableB_5)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__CompTable_6;

    {
      startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__CompTableA_4);
    }
    if (startup__succeeded)
      startup__CompTable_6 = startup__CompTableB_5;
    else
      {
        {
          startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__CompTableB_5);
        }
        if (startup__succeeded)
          startup__CompTable_6 = startup__CompTableA_4;
        else
          {
            {
              startup__CompTable_6 = mercury__map__union_3_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_2[15], startup__CompTableA_4, startup__CompTableB_5);
            }
          }
      }
    return startup__CompTable_6;
  }
}

static MR_Box MR_CALL 
startup__propagate_to_call_site_7_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2)
{
  {
    MR_Box startup__wrapper_arg_3;
    MR_Box startup__closure = startup__closure_arg;
    MR_Word startup__conv0_HeadVar__3_3;

    {
      startup__conv0_HeadVar__3_3 = measurements__add_inherit_to_inherit_2_f_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2));
    }
    startup__wrapper_arg_3 = ((MR_Box) (startup__conv0_HeadVar__3_3));
    return startup__wrapper_arg_3;
  }
}

static void MR_CALL 
startup__propagate_to_call_site_7_p_0(
  MR_Integer startup__CliqueNumber_8,
  MR_Word startup__PDPtr_9,
  MR_Word startup__CSDPtr_10,
  MR_Word startup__STATE_VARIABLE_Deep_0_23,
  MR_Word * startup__STATE_VARIABLE_Deep_24,
  MR_Word startup__STATE_VARIABLE_PDCompTable_0_25,
  MR_Word * startup__STATE_VARIABLE_PDCompTable_26)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__CSD_13;
    MR_Word startup__CalleeOwn_14;
    MR_Word startup__CalleePDPtr_15;
    MR_Word startup__ChildCliquePtr_16;
    MR_Integer startup__ChildCliqueNumber_17;
    MR_Word startup__Var_29;

    {
      profile__deep_lookup_call_site_dynamics_3_p_0(startup__STATE_VARIABLE_Deep_0_23, startup__CSDPtr_10, &startup__CSD_13);
    }
    startup__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_13, (MR_Integer) 0)));
    startup__CalleePDPtr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_13, (MR_Integer) 1)));
    startup__CalleeOwn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_13, (MR_Integer) 2)));
    {
      profile__deep_lookup_clique_index_3_p_0(startup__STATE_VARIABLE_Deep_0_23, startup__CalleePDPtr_15, &startup__ChildCliquePtr_16);
    }
    startup__ChildCliqueNumber_17 = (MR_Integer) startup__ChildCliquePtr_16;
    startup__succeeded = (startup__ChildCliqueNumber_17 == startup__CliqueNumber_8);
    if (startup__succeeded)
      {
        *startup__STATE_VARIABLE_PDCompTable_26 = startup__STATE_VARIABLE_PDCompTable_0_25;
        *startup__STATE_VARIABLE_Deep_24 = startup__STATE_VARIABLE_Deep_0_23;
      }
    else
      {
        MR_Word startup__ProcDesc0_18;
        MR_Word startup__CalleeDesc_19;
        MR_Word startup__CalleeTotal_20;
        MR_Word startup__ProcDesc_21;
        MR_Word startup__CSDCompTable_22;

        {
          profile__deep_lookup_pd_desc_3_p_0(startup__STATE_VARIABLE_Deep_0_23, startup__PDPtr_9, &startup__ProcDesc0_18);
        }
        {
          profile__deep_lookup_csd_desc_3_p_0(startup__STATE_VARIABLE_Deep_0_23, startup__CSDPtr_10, &startup__CalleeDesc_19);
        }
        {
          startup__CalleeTotal_20 = measurements__add_own_to_inherit_2_f_0(startup__CalleeOwn_14, startup__CalleeDesc_19);
        }
        {
          startup__ProcDesc_21 = measurements__add_inherit_to_inherit_2_f_0(startup__ProcDesc0_18, startup__CalleeTotal_20);
        }
        {
          profile__deep_update_pd_desc_4_p_0(startup__PDPtr_9, startup__ProcDesc_21, startup__STATE_VARIABLE_Deep_0_23, startup__STATE_VARIABLE_Deep_24);
        }
        {
          profile__deep_lookup_csd_comp_table_3_p_0(*startup__STATE_VARIABLE_Deep_24, startup__CSDPtr_10, &startup__CSDCompTable_22);
        }
        {
          startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__STATE_VARIABLE_PDCompTable_0_25);
        }
        if (startup__succeeded)
          *startup__STATE_VARIABLE_PDCompTable_26 = startup__CSDCompTable_22;
        else
          {
            {
              startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__CSDCompTable_22);
            }
            if (startup__succeeded)
              *startup__STATE_VARIABLE_PDCompTable_26 = startup__STATE_VARIABLE_PDCompTable_0_25;
            else
              {
                {
                  *startup__STATE_VARIABLE_PDCompTable_26 = mercury__map__union_3_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_2[14], startup__STATE_VARIABLE_PDCompTable_0_25, startup__CSDCompTable_22);
                }
              }
          }
      }
  }
}

static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_Word startup__conv1_STATE_VARIABLE_Deep_24;
    MR_Word startup__conv0_STATE_VARIABLE_PDCompTable_26;

    {
      startup__propagate_to_call_site_7_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_STATE_VARIABLE_Deep_24, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_STATE_VARIABLE_PDCompTable_26);
    }
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_STATE_VARIABLE_Deep_24));
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_STATE_VARIABLE_PDCompTable_26));
  }
}

static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0(
  MR_Integer startup__CliqueNumber_10,
  MR_Word startup__ParentCSDPtr_11,
  MR_Word startup__PDPtr_12,
  MR_Word startup__STATE_VARIABLE_Deep_0_26,
  MR_Word * startup__STATE_VARIABLE_Deep_27,
  MR_Word startup__STATE_VARIABLE_SumTable_0_28,
  MR_Word * startup__STATE_VARIABLE_SumTable_29,
  MR_Word startup__STATE_VARIABLE_OverrideTable_0_30,
  MR_Word * startup__STATE_VARIABLE_OverrideTable_31)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__CSDPtrs_16;
    MR_Word startup__PDCompTable_17;
    MR_Word startup__ProcDesc_18;
    MR_Word startup__ProcOwn_19;
    MR_Word startup__ProcTotal_20;
    MR_Word startup__PD_21;
    MR_Word startup__PSPtr_22;
    MR_Word startup__PS_23;
    MR_ArrayPtr startup__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 6)));
    MR_Word startup__Var_33;
    MR_Word startup__STATE_VARIABLE_Deep_34_34;
    MR_Word startup__Var_35;
    MR_Word startup__STATE_VARIABLE_Deep_36_36;
    MR_Word startup__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 0)));
    MR_String startup__Var_42 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 1)));
    MR_String startup__Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 2)));
    MR_String startup__Var_44 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 3)));
    MR_Word startup__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 4)));
    MR_ArrayPtr startup__Var_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 5)));
    MR_ArrayPtr startup__Var_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 7)));
    MR_ArrayPtr startup__Var_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 8)));
    MR_ArrayPtr startup__Var_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 9)));
    MR_ArrayPtr startup__Var_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 10)));
    MR_ArrayPtr startup__Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 11)));
    MR_ArrayPtr startup__Var_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 12)));
    MR_ArrayPtr startup__Var_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 13)));
    MR_ArrayPtr startup__Var_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 14)));
    MR_ArrayPtr startup__Var_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 15)));
    MR_ArrayPtr startup__Var_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 16)));
    MR_ArrayPtr startup__Var_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 17)));
    MR_ArrayPtr startup__Var_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 18)));
    MR_ArrayPtr startup__Var_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 19)));
    MR_ArrayPtr startup__Var_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 20)));
    MR_ArrayPtr startup__Var_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 21)));
    MR_ArrayPtr startup__Var_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 22)));
    MR_ArrayPtr startup__Var_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 23)));
    MR_ArrayPtr startup__Var_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 24)));
    MR_Word startup__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 25)));
    MR_Word startup__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 26)));
    MR_Word startup__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 27)));
    MR_Word startup__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 28)));
    MR_Box startup__conv3_STATE_VARIABLE_Deep_34_34;
    MR_Box startup__conv2_PDCompTable_17;
    MR_ArrayPtr startup__Var_69;
    MR_Word startup__Var_70;
    MR_Word startup__Var_38;
    MR_Word startup__Var_71;
    MR_String startup__Var_72;
    MR_String startup__Var_73;
    MR_String startup__Var_74;
    MR_String startup__Var_75;
    MR_String startup__Var_76;
    MR_Integer startup__Var_77;
    MR_Word startup__Var_78;
    MR_ArrayPtr startup__Var_79;
    MR_ArrayPtr startup__Var_80;
    MR_Word startup__Var_81;

    {
      startup__flat_call_sites_3_p_0(startup__Var_32, startup__PDPtr_12, &startup__CSDPtrs_16);
    }
    {
      startup__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__Var_33, 0) = ((MR_Box) (&startup_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), startup__Var_33, 1) = ((MR_Box) (startup__propagate_to_proc_dynamic_9_p_0_1));
      MR_hl_field(MR_mktag(0), startup__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), startup__Var_33, 3) = ((MR_Box) (startup__CliqueNumber_10));
      MR_hl_field(MR_mktag(0), startup__Var_33, 4) = ((MR_Box) (startup__PDPtr_12));
    }
    {
      startup__Var_35 = mercury__map__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &profile__profile__type_ctor_info_deep_0, (MR_Word) &startup_scalar_common_2[3], startup__Var_33, startup__CSDPtrs_16, ((MR_Box) (startup__STATE_VARIABLE_Deep_0_26)), &startup__conv3_STATE_VARIABLE_Deep_34_34, ((MR_Box) (startup__Var_35)), &startup__conv2_PDCompTable_17);
    }
    startup__STATE_VARIABLE_Deep_34_34 = ((MR_Word) startup__conv3_STATE_VARIABLE_Deep_34_34);
    startup__PDCompTable_17 = ((MR_Word) startup__conv2_PDCompTable_17);
    {
      profile__deep_update_pd_comp_table_4_p_0(startup__PDPtr_12, startup__PDCompTable_17, startup__STATE_VARIABLE_Deep_34_34, &startup__STATE_VARIABLE_Deep_36_36);
    }
    {
      profile__deep_lookup_pd_desc_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__PDPtr_12, &startup__ProcDesc_18);
    }
    {
      profile__deep_lookup_pd_own_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__PDPtr_12, &startup__ProcOwn_19);
    }
    {
      startup__ProcTotal_20 = measurements__add_own_to_inherit_2_f_0(startup__ProcOwn_19, startup__ProcDesc_18);
    }
    {
      *startup__STATE_VARIABLE_SumTable_29 = startup__add_comp_tables_2_f_0(startup__STATE_VARIABLE_SumTable_0_28, startup__PDCompTable_17);
    }
    {
      profile__deep_lookup_proc_dynamics_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__PDPtr_12, &startup__PD_21);
    }
    startup__PSPtr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_21, (MR_Integer) 0)));
    startup__Var_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_21, (MR_Integer) 1)));
    startup__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_21, (MR_Integer) 2)));
    {
      profile__deep_lookup_proc_statics_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__PSPtr_22, &startup__PS_23);
    }
    startup__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 0)));
    startup__Var_72 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 1)));
    startup__Var_73 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 2)));
    startup__Var_74 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 3)));
    startup__Var_75 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 4)));
    startup__Var_76 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 5)));
    startup__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 6)));
    startup__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 7)));
    startup__Var_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 8)));
    startup__Var_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 9)));
    startup__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 10)));
    startup__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 11)));
    startup__succeeded = (startup__Var_38 == (MR_Integer) 0);
    if (startup__succeeded)
      {
        *startup__STATE_VARIABLE_OverrideTable_31 = startup__add_to_override_3_f_0(startup__STATE_VARIABLE_OverrideTable_0_30, startup__PSPtr_22, startup__ProcTotal_20);
      }
    else
      *startup__STATE_VARIABLE_OverrideTable_31 = startup__STATE_VARIABLE_OverrideTable_0_30;
    {
      startup__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__ParentCSDPtr_11);
    }
    if (startup__succeeded)
      {
        MR_Word startup__ParentDesc0_24;
        MR_Word startup__ParentDesc_25;

        {
          profile__deep_lookup_csd_desc_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__ParentCSDPtr_11, &startup__ParentDesc0_24);
        }
        {
          startup__ParentDesc_25 = measurements__add_inherit_to_inherit_2_f_0(startup__ParentDesc0_24, startup__ProcTotal_20);
        }
        {
          profile__deep_update_csd_desc_4_p_0(startup__ParentCSDPtr_11, startup__ParentDesc_25, startup__STATE_VARIABLE_Deep_36_36, startup__STATE_VARIABLE_Deep_27);
        }
      }
    else
      *startup__STATE_VARIABLE_Deep_27 = startup__STATE_VARIABLE_Deep_36_36;
  }
}

static MR_Box MR_CALL 
startup__propagate_to_clique_4_p_0_2(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2)
{
  {
    MR_Box startup__wrapper_arg_3;
    MR_Box startup__closure = startup__closure_arg;
    MR_Word startup__conv7_OverrideComp_3;

    {
      startup__conv7_OverrideComp_3 = startup__select_override_comp_2_f_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2));
    }
    startup__wrapper_arg_3 = ((MR_Box) (startup__conv7_OverrideComp_3));
    return startup__wrapper_arg_3;
  }
}

static void MR_CALL 
startup__propagate_to_clique_4_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5,
  MR_Box startup__wrapper_arg_6,
  MR_Box * startup__wrapper_arg_7)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_Word startup__conv3_STATE_VARIABLE_Deep_27;
    MR_Word startup__conv2_STATE_VARIABLE_SumTable_29;
    MR_Word startup__conv1_STATE_VARIABLE_OverrideTable_31;

    {
      startup__propagate_to_proc_dynamic_9_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv3_STATE_VARIABLE_Deep_27, ((MR_Word) startup__wrapper_arg_4), &startup__conv2_STATE_VARIABLE_SumTable_29, ((MR_Word) startup__wrapper_arg_6), &startup__conv1_STATE_VARIABLE_OverrideTable_31);
    }
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv3_STATE_VARIABLE_Deep_27));
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv2_STATE_VARIABLE_SumTable_29));
    *startup__wrapper_arg_7 = ((MR_Box) (startup__conv1_STATE_VARIABLE_OverrideTable_31));
  }
}

static void MR_CALL 
startup__propagate_to_clique_4_p_0(
  MR_Integer startup__CliqueNumber_5,
  MR_Word startup__Members_6,
  MR_Word startup__STATE_VARIABLE_Deep_0_16,
  MR_Word * startup__STATE_VARIABLE_Deep_17)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__TypeCtorInfo_63_63;
    MR_Word startup__TypeCtorInfo_64_64;
    MR_Word startup__TypeInfo_67_67;
    MR_Word startup__ParentCSDPtr_8;
    MR_Word startup__SumTable_9;
    MR_Word startup__OverrideMap_10;
    MR_ArrayPtr startup__Var_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 11)));
    MR_Word startup__Var_19;
    MR_Word startup__STATE_VARIABLE_Deep_20_20;
    MR_Word startup__Var_21;
    MR_Word startup__Var_22;
    MR_Word startup__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 0)));
    MR_String startup__Var_26 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 1)));
    MR_String startup__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 2)));
    MR_String startup__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 3)));
    MR_Word startup__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 4)));
    MR_ArrayPtr startup__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 5)));
    MR_ArrayPtr startup__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 6)));
    MR_ArrayPtr startup__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 7)));
    MR_ArrayPtr startup__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 8)));
    MR_ArrayPtr startup__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 9)));
    MR_ArrayPtr startup__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 10)));
    MR_ArrayPtr startup__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 12)));
    MR_ArrayPtr startup__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 13)));
    MR_ArrayPtr startup__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 14)));
    MR_ArrayPtr startup__Var_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 15)));
    MR_ArrayPtr startup__Var_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 16)));
    MR_ArrayPtr startup__Var_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 17)));
    MR_ArrayPtr startup__Var_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 18)));
    MR_ArrayPtr startup__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 19)));
    MR_ArrayPtr startup__Var_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 20)));
    MR_ArrayPtr startup__Var_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 21)));
    MR_ArrayPtr startup__Var_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 22)));
    MR_ArrayPtr startup__Var_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 23)));
    MR_ArrayPtr startup__Var_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 24)));
    MR_Word startup__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 25)));
    MR_Word startup__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 26)));
    MR_Word startup__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 27)));
    MR_Word startup__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 28)));
    MR_Box startup__conv0_ParentCSDPtr_8;
    MR_Box startup__conv6_STATE_VARIABLE_Deep_20_20;
    MR_Box startup__conv5_SumTable_9;
    MR_Box startup__conv4_OverrideMap_10;

    {
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) startup__Var_18, startup__CliqueNumber_5, &startup__conv0_ParentCSDPtr_8);
    }
    startup__ParentCSDPtr_8 = ((MR_Word) startup__conv0_ParentCSDPtr_8);
    {
      startup__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__Var_19, 0) = ((MR_Box) (&startup_scalar_common_10[1]));
      MR_hl_field(MR_mktag(0), startup__Var_19, 1) = ((MR_Box) (startup__propagate_to_clique_4_p_0_1));
      MR_hl_field(MR_mktag(0), startup__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), startup__Var_19, 3) = ((MR_Box) (startup__CliqueNumber_5));
      MR_hl_field(MR_mktag(0), startup__Var_19, 4) = ((MR_Box) (startup__ParentCSDPtr_8));
    }
    startup__TypeCtorInfo_63_63 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
    startup__TypeCtorInfo_64_64 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
    {
      startup__Var_21 = mercury__map__init_0_f_0(startup__TypeCtorInfo_63_63, startup__TypeCtorInfo_64_64);
    }
    {
      startup__Var_22 = mercury__map__init_0_f_0(startup__TypeCtorInfo_63_63, startup__TypeCtorInfo_64_64);
    }
    startup__TypeInfo_67_67 = (MR_Word) &startup_scalar_common_2[3];
    {
      mercury__list__foldl3_8_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &profile__profile__type_ctor_info_deep_0, startup__TypeInfo_67_67, startup__TypeInfo_67_67, startup__Var_19, startup__Members_6, ((MR_Box) (startup__STATE_VARIABLE_Deep_0_16)), &startup__conv6_STATE_VARIABLE_Deep_20_20, ((MR_Box) (startup__Var_21)), &startup__conv5_SumTable_9, ((MR_Box) (startup__Var_22)), &startup__conv4_OverrideMap_10);
    }
    startup__STATE_VARIABLE_Deep_20_20 = ((MR_Word) startup__conv6_STATE_VARIABLE_Deep_20_20);
    startup__SumTable_9 = ((MR_Word) startup__conv5_SumTable_9);
    startup__OverrideMap_10 = ((MR_Word) startup__conv4_OverrideMap_10);
    {
      startup__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(startup__STATE_VARIABLE_Deep_20_20, startup__ParentCSDPtr_8);
    }
    if (startup__succeeded)
      {
        MR_Word startup__ParentCSD_11;
        MR_Word startup__ParentOwn_12;
        MR_Word startup__ParentDesc0_13;
        MR_Word startup__ParentDesc_14;
        MR_Word startup__CSDCompTable_15;
        MR_Word startup__STATE_VARIABLE_Deep_23_23;
        MR_Word startup__Var_53;
        MR_Word startup__Var_54;

        {
          profile__deep_lookup_call_site_dynamics_3_p_0(startup__STATE_VARIABLE_Deep_20_20, startup__ParentCSDPtr_8, &startup__ParentCSD_11);
        }
        startup__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ParentCSD_11, (MR_Integer) 0)));
        startup__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ParentCSD_11, (MR_Integer) 1)));
        startup__ParentOwn_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ParentCSD_11, (MR_Integer) 2)));
        {
          profile__deep_lookup_csd_desc_3_p_0(startup__STATE_VARIABLE_Deep_20_20, startup__ParentCSDPtr_8, &startup__ParentDesc0_13);
        }
        {
          startup__ParentDesc_14 = measurements__subtract_own_from_inherit_2_f_0(startup__ParentOwn_12, startup__ParentDesc0_13);
        }
        {
          profile__deep_update_csd_desc_4_p_0(startup__ParentCSDPtr_8, startup__ParentDesc_14, startup__STATE_VARIABLE_Deep_20_20, &startup__STATE_VARIABLE_Deep_23_23);
        }
        {
          startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__OverrideMap_10);
        }
        if (startup__succeeded)
          startup__CSDCompTable_15 = startup__SumTable_9;
        else
          {
            {
              startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__SumTable_9);
            }
            if (startup__succeeded)
              startup__CSDCompTable_15 = startup__OverrideMap_10;
            else
              {
                {
                  startup__CSDCompTable_15 = mercury__map__union_3_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_2[13], startup__OverrideMap_10, startup__SumTable_9);
                }
              }
          }
        {
          profile__deep_update_csd_comp_table_4_p_0(startup__ParentCSDPtr_8, startup__CSDCompTable_15, startup__STATE_VARIABLE_Deep_23_23, startup__STATE_VARIABLE_Deep_17);
        }
      }
    else
      *startup__STATE_VARIABLE_Deep_17 = startup__STATE_VARIABLE_Deep_20_20;
  }
}

static void MR_CALL 
startup__accumulate_ps_costs_6_p_0(
  MR_Word startup__Deep_7,
  MR_Word startup__PSPtr_8,
  MR_Word startup__Own0_9,
  MR_Word * startup__Own_10,
  MR_Word startup__Desc0_11,
  MR_Word * startup__Desc_12)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__PSOwn_13;
    MR_Word startup__PSDesc_14;

    {
      profile__deep_lookup_ps_own_3_p_0(startup__Deep_7, startup__PSPtr_8, &startup__PSOwn_13);
    }
    {
      profile__deep_lookup_ps_desc_3_p_0(startup__Deep_7, startup__PSPtr_8, &startup__PSDesc_14);
    }
    {
      *startup__Own_10 = measurements__add_own_to_own_2_f_0(startup__Own0_9, startup__PSOwn_13);
    }
    {
      *startup__Desc_12 = measurements__add_inherit_to_inherit_2_f_0(startup__Desc0_11, startup__PSDesc_14);
    }
  }
}

static void MR_CALL 
startup__summarize_proc_static_coverage_4_p_0(
  MR_Integer startup__Index_5,
  MR_Word startup__PS_6,
  MR_ArrayPtr startup__STATE_VARIABLE_CoverageArray_0_11,
  MR_ArrayPtr * startup__STATE_VARIABLE_CoverageArray_12)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__MaybeCoverage_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 10)));
    MR_Word startup__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 0)));
    MR_String startup__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 1)));
    MR_String startup__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 2)));
    MR_String startup__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 3)));
    MR_String startup__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 4)));
    MR_String startup__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 5)));
    MR_Integer startup__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 6)));
    MR_Word startup__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 7)));
    MR_ArrayPtr startup__Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 8)));
    MR_ArrayPtr startup__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 9)));
    MR_Word startup__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 11)));

    if ((startup__MaybeCoverage_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "startup", (MR_String) "predicate \140startup.summarize_proc_static_coverage\'/4", (MR_String) "no coverage data in proc static");
          return;
        }
      }
    else
      {
        MR_ArrayPtr startup__Coverage0_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__MaybeCoverage_8, (MR_Integer) 0)));
        MR_Word startup__Coverage_10;
        MR_ArrayPtr startup__conv0_STATE_VARIABLE_CoverageArray_12;

        {
          measurements__array_to_static_coverage_2_p_0(startup__Coverage0_9, &startup__Coverage_10);
        }
        {
          mercury__array__set_4_p_0((MR_Word) &startup_scalar_common_1[16], startup__Index_5, ((MR_Box) (startup__Coverage_10)), (MR_ArrayPtr) startup__STATE_VARIABLE_CoverageArray_0_11, &startup__conv0_STATE_VARIABLE_CoverageArray_12);
        }
        *startup__STATE_VARIABLE_CoverageArray_12 = (MR_ArrayPtr) startup__conv0_STATE_VARIABLE_CoverageArray_12;
      }
  }
}

static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv0_STATE_VARIABLE_CoverageArray_12;

    {
      startup__summarize_proc_static_coverage_4_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv0_STATE_VARIABLE_CoverageArray_12);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv0_STATE_VARIABLE_CoverageArray_12));
  }
}

static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0(
  MR_Word startup__STATE_VARIABLE_Deep_0_6,
  MR_Word * startup__STATE_VARIABLE_Deep_7)
{
  {
    MR_bool startup__succeeded;
    MR_Integer startup__NPS_4;
    MR_ArrayPtr startup__CoverageArray_5;
    MR_Word startup__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 0)));
    MR_ArrayPtr startup__Var_11;
    MR_Word startup__Var_12;
    MR_Word startup__Var_14;
    MR_ArrayPtr startup__Var_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 8)));
    MR_String startup__Var_15 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 1)));
    MR_String startup__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 2)));
    MR_String startup__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 3)));
    MR_Word startup__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 4)));
    MR_ArrayPtr startup__Var_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 5)));
    MR_ArrayPtr startup__Var_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 6)));
    MR_ArrayPtr startup__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 7)));
    MR_ArrayPtr startup__Var_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 9)));
    MR_ArrayPtr startup__Var_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 10)));
    MR_ArrayPtr startup__Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 11)));
    MR_ArrayPtr startup__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 12)));
    MR_ArrayPtr startup__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 13)));
    MR_ArrayPtr startup__Var_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 14)));
    MR_ArrayPtr startup__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 15)));
    MR_ArrayPtr startup__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 16)));
    MR_ArrayPtr startup__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 17)));
    MR_ArrayPtr startup__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 18)));
    MR_ArrayPtr startup__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 19)));
    MR_ArrayPtr startup__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 20)));
    MR_ArrayPtr startup__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 21)));
    MR_ArrayPtr startup__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 22)));
    MR_ArrayPtr startup__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 23)));
    MR_ArrayPtr startup__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 24)));
    MR_Word startup__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 25)));
    MR_Word startup__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 26)));
    MR_Word startup__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 27)));
    MR_Word startup__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 28)));
    MR_String startup__Var_43 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Var_8, (MR_Integer) 0)));
    MR_Integer startup__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_8, (MR_Integer) 1)));
    MR_Integer startup__Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_8, (MR_Integer) 2)));
    MR_Integer startup__Var_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_8, (MR_Integer) 3)));
    MR_Integer startup__Var_47;
    MR_Integer startup__Var_48;
    MR_Integer startup__Var_49;
    MR_Integer startup__Var_50;
    MR_Word startup__Var_51;
    MR_ArrayPtr startup__conv1_Var_11;
    MR_Box startup__conv2_CoverageArray_5;
    MR_Word startup__Var_80;
    MR_String startup__Var_81;
    MR_String startup__Var_82;
    MR_String startup__Var_83;
    MR_Word startup__Var_84;
    MR_ArrayPtr startup__Var_85;
    MR_ArrayPtr startup__Var_86;
    MR_ArrayPtr startup__Var_87;
    MR_ArrayPtr startup__Var_88;
    MR_ArrayPtr startup__Var_89;
    MR_ArrayPtr startup__Var_90;
    MR_ArrayPtr startup__Var_91;
    MR_ArrayPtr startup__Var_92;
    MR_ArrayPtr startup__Var_93;
    MR_ArrayPtr startup__Var_94;
    MR_ArrayPtr startup__Var_95;
    MR_ArrayPtr startup__Var_96;
    MR_ArrayPtr startup__Var_97;
    MR_ArrayPtr startup__Var_98;
    MR_ArrayPtr startup__Var_99;
    MR_ArrayPtr startup__Var_100;
    MR_ArrayPtr startup__Var_101;
    MR_ArrayPtr startup__Var_102;
    MR_ArrayPtr startup__Var_103;
    MR_ArrayPtr startup__Var_104;
    MR_Word startup__Var_105;
    MR_Word startup__Var_107;
    MR_Word startup__Var_108;
    MR_Word startup__Var_106;

    startup__NPS_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_8, (MR_Integer) 4)));
    startup__Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_8, (MR_Integer) 5)));
    startup__Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_8, (MR_Integer) 6)));
    startup__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_8, (MR_Integer) 7)));
    startup__Var_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_8, (MR_Integer) 8)));
    startup__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Var_8, (MR_Integer) 9)));
    {
      startup__Var_12 = measurements__zero_static_coverage_0_f_0();
    }
    {
      startup__conv1_Var_11 = mercury__array__init_2_f_0((MR_Word) &startup_scalar_common_1[16], startup__NPS_4, ((MR_Box) (startup__Var_12)));
    }
    startup__Var_11 = (MR_ArrayPtr) startup__conv1_Var_11;
    {
      array_util__array_foldl_from_1_4_p_1((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_Word) &startup_scalar_common_1[18], (MR_Word) &startup_scalar_common_2[12], (MR_ArrayPtr) startup__Var_22, ((MR_Box) (startup__Var_11)), &startup__conv2_CoverageArray_5);
    }
    startup__CoverageArray_5 = ((MR_ArrayPtr) startup__conv2_CoverageArray_5);
    {
      startup__Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), startup__Var_14, 0) = ((MR_Box) (startup__CoverageArray_5));
    }
    startup__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 0)));
    startup__Var_81 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 1)));
    startup__Var_82 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 2)));
    startup__Var_83 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 3)));
    startup__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 4)));
    startup__Var_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 5)));
    startup__Var_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 6)));
    startup__Var_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 7)));
    startup__Var_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 8)));
    startup__Var_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 9)));
    startup__Var_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 10)));
    startup__Var_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 11)));
    startup__Var_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 12)));
    startup__Var_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 13)));
    startup__Var_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 14)));
    startup__Var_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 15)));
    startup__Var_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 16)));
    startup__Var_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 17)));
    startup__Var_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 18)));
    startup__Var_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 19)));
    startup__Var_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 20)));
    startup__Var_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 21)));
    startup__Var_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 22)));
    startup__Var_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 23)));
    startup__Var_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 24)));
    startup__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 25)));
    startup__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 26)));
    startup__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 27)));
    startup__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 28)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
      *startup__STATE_VARIABLE_Deep_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__Var_80));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__Var_81));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__Var_82));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__Var_83));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__Var_84));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__Var_85));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__Var_86));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__Var_87));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__Var_88));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__Var_89));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__Var_90));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__Var_91));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__Var_92));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__Var_93));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__Var_94));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__Var_95));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__Var_96));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__Var_97));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__Var_98));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__Var_99));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__Var_100));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__Var_101));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__Var_102));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__Var_103));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__Var_104));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__Var_105));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__Var_14));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__Var_107));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__Var_108));
    }
  }
}

static void MR_CALL 
startup__summarize_module_costs_2_f_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_Word startup__conv1_Own_10;
    MR_Word startup__conv0_Desc_12;

    {
      startup__accumulate_ps_costs_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_Own_10, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_Desc_12);
    }
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_Own_10));
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_Desc_12));
  }
}

static MR_Word MR_CALL 
startup__summarize_module_costs_2_f_0(
  MR_Word startup__Deep_4,
  MR_Word startup__ModuleData0_5)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__ModuleData_6;
    MR_Word startup__Own0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ModuleData0_5, (MR_Integer) 0)));
    MR_Word startup__Desc0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ModuleData0_5, (MR_Integer) 1)));
    MR_Word startup__PSPtrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ModuleData0_5, (MR_Integer) 2)));
    MR_Word startup__Own_10;
    MR_Word startup__Desc_11;
    MR_Word startup__Var_12;
    MR_Box startup__conv3_Own_10;
    MR_Box startup__conv2_Desc_11;

    {
      startup__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__Var_12, 0) = ((MR_Box) (&startup_scalar_common_3[3]));
      MR_hl_field(MR_mktag(0), startup__Var_12, 1) = ((MR_Box) (startup__summarize_module_costs_2_f_0_1));
      MR_hl_field(MR_mktag(0), startup__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), startup__Var_12, 3) = ((MR_Box) (startup__Deep_4));
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__Var_12, startup__PSPtrs_9, ((MR_Box) (startup__Own0_7)), &startup__conv3_Own_10, ((MR_Box) (startup__Desc0_8)), &startup__conv2_Desc_11);
    }
    startup__Own_10 = ((MR_Word) startup__conv3_Own_10);
    startup__Desc_11 = ((MR_Word) startup__conv2_Desc_11);
    {
      startup__ModuleData_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__ModuleData_6, 0) = ((MR_Box) (startup__Own_10));
      MR_hl_field(MR_mktag(0), startup__ModuleData_6, 1) = ((MR_Box) (startup__Desc_11));
      MR_hl_field(MR_mktag(0), startup__ModuleData_6, 2) = ((MR_Box) (startup__PSPtrs_9));
    }
    return startup__ModuleData_6;
  }
}

static MR_Box MR_CALL 
startup__summarize_modules_2_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1)
{
  {
    MR_Box startup__wrapper_arg_2;
    MR_Box startup__closure = startup__closure_arg;
    MR_Word startup__conv0_ModuleData_6;

    {
      startup__conv0_ModuleData_6 = startup__summarize_module_costs_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) startup__wrapper_arg_1));
    }
    startup__wrapper_arg_2 = ((MR_Box) (startup__conv0_ModuleData_6));
    return startup__wrapper_arg_2;
  }
}

static void MR_CALL 
startup__summarize_modules_2_p_0(
  MR_Word startup__Deep0_3,
  MR_Word * startup__Deep_4)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__TypeCtorInfo_65_65 = (MR_Word) &profile__profile__type_ctor_info_module_data_0;
    MR_Word startup__ModuleData0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 25)));
    MR_Word startup__ModuleData_6;
    MR_Word startup__Var_7;
    MR_Word startup__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 0)));
    MR_String startup__Var_9 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 1)));
    MR_String startup__Var_10 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 2)));
    MR_String startup__Var_11 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 3)));
    MR_Word startup__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 4)));
    MR_ArrayPtr startup__Var_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 5)));
    MR_ArrayPtr startup__Var_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 6)));
    MR_ArrayPtr startup__Var_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 7)));
    MR_ArrayPtr startup__Var_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 8)));
    MR_ArrayPtr startup__Var_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 9)));
    MR_ArrayPtr startup__Var_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 10)));
    MR_ArrayPtr startup__Var_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 11)));
    MR_ArrayPtr startup__Var_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 12)));
    MR_ArrayPtr startup__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 13)));
    MR_ArrayPtr startup__Var_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 14)));
    MR_ArrayPtr startup__Var_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 15)));
    MR_ArrayPtr startup__Var_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 16)));
    MR_ArrayPtr startup__Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 17)));
    MR_ArrayPtr startup__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 18)));
    MR_ArrayPtr startup__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 19)));
    MR_ArrayPtr startup__Var_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 20)));
    MR_ArrayPtr startup__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 21)));
    MR_ArrayPtr startup__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 22)));
    MR_ArrayPtr startup__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 23)));
    MR_ArrayPtr startup__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 24)));
    MR_Word startup__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 26)));
    MR_Word startup__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 27)));
    MR_Word startup__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 28)));
    MR_Word startup__Var_36;
    MR_String startup__Var_37;
    MR_String startup__Var_38;
    MR_String startup__Var_39;
    MR_Word startup__Var_40;
    MR_ArrayPtr startup__Var_41;
    MR_ArrayPtr startup__Var_42;
    MR_ArrayPtr startup__Var_43;
    MR_ArrayPtr startup__Var_44;
    MR_ArrayPtr startup__Var_45;
    MR_ArrayPtr startup__Var_46;
    MR_ArrayPtr startup__Var_47;
    MR_ArrayPtr startup__Var_48;
    MR_ArrayPtr startup__Var_49;
    MR_ArrayPtr startup__Var_50;
    MR_ArrayPtr startup__Var_51;
    MR_ArrayPtr startup__Var_52;
    MR_ArrayPtr startup__Var_53;
    MR_ArrayPtr startup__Var_54;
    MR_ArrayPtr startup__Var_55;
    MR_ArrayPtr startup__Var_56;
    MR_ArrayPtr startup__Var_57;
    MR_ArrayPtr startup__Var_58;
    MR_ArrayPtr startup__Var_59;
    MR_ArrayPtr startup__Var_60;
    MR_Word startup__Var_62;
    MR_Word startup__Var_63;
    MR_Word startup__Var_64;
    MR_Word startup__Var_61;

    {
      startup__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__Var_7, 0) = ((MR_Box) (&startup_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), startup__Var_7, 1) = ((MR_Box) (startup__summarize_modules_2_p_0_1));
      MR_hl_field(MR_mktag(0), startup__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), startup__Var_7, 3) = ((MR_Box) (startup__Deep0_3));
    }
    {
      startup__ModuleData_6 = mercury__map__map_values_only_2_f_0(startup__TypeCtorInfo_65_65, startup__TypeCtorInfo_65_65, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, startup__Var_7, startup__ModuleData0_5);
    }
    startup__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 0)));
    startup__Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 1)));
    startup__Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 2)));
    startup__Var_39 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 3)));
    startup__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 4)));
    startup__Var_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 5)));
    startup__Var_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 6)));
    startup__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 7)));
    startup__Var_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 8)));
    startup__Var_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 9)));
    startup__Var_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 10)));
    startup__Var_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 11)));
    startup__Var_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 12)));
    startup__Var_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 13)));
    startup__Var_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 14)));
    startup__Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 15)));
    startup__Var_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 16)));
    startup__Var_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 17)));
    startup__Var_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 18)));
    startup__Var_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 19)));
    startup__Var_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 20)));
    startup__Var_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 21)));
    startup__Var_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 22)));
    startup__Var_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 23)));
    startup__Var_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 24)));
    startup__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 25)));
    startup__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 26)));
    startup__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 27)));
    startup__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 28)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
      *startup__Deep_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__Var_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__Var_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__Var_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__Var_39));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__Var_40));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__Var_41));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__Var_42));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__Var_43));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__Var_44));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__Var_45));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__Var_46));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__Var_47));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__Var_48));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__Var_49));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__Var_50));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__Var_51));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__Var_52));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__Var_53));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__Var_54));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__Var_55));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__Var_56));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__Var_57));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__Var_58));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__Var_59));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__Var_60));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__ModuleData_6));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__Var_62));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__Var_63));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__Var_64));
    }
  }
}

static void MR_CALL 
startup__summarize_call_site_dynamic_10_p_0(
  MR_ArrayPtr startup__CallSiteStaticMap_11,
  MR_ArrayPtr startup__CallSiteStatics_12,
  MR_ArrayPtr startup__CSDDescs_13,
  MR_ArrayPtr startup__CSDCompTableArray_14,
  MR_Integer startup__CSDI_15,
  MR_Word startup__CSD_16,
  MR_ArrayPtr startup__CSSOwnArray0_17,
  MR_ArrayPtr * startup__CSSOwnArray_18,
  MR_ArrayPtr startup__CSSDescArray0_19,
  MR_ArrayPtr * startup__CSSDescArray_20)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__CSDPtr_21 = (MR_Word) startup__CSDI_15;
    MR_Word startup__CSSPtr_22;
    MR_Integer startup__CSSI_23;

    {
      profile__lookup_call_site_static_map_3_p_0(startup__CallSiteStaticMap_11, startup__CSDPtr_21, &startup__CSSPtr_22);
    }
    startup__CSSI_23 = (MR_Integer) startup__CSSPtr_22;
    startup__succeeded = (startup__CSSI_23 > (MR_Integer) 0);
    if (startup__succeeded)
      {
        MR_Word startup__CSDOwn_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 2)));
        MR_Word startup__CSDDesc0_25;
        MR_Word startup__CSDCompTable_26;
        MR_Word startup__CSS_27;
        MR_Word startup__CSDDesc_29;
        MR_Word startup__CSSOwn0_30;
        MR_Word startup__CSSDesc0_31;
        MR_Word startup__CSSOwn_32;
        MR_Word startup__CSSDesc_33;
        MR_ArrayPtr startup__Var_36;
        MR_ArrayPtr startup__Var_37;
        MR_Word startup__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 0)));
        MR_Word startup__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 1)));
        MR_Word startup__InnerTotal_28;
        MR_Word startup__Var_35;
        MR_Integer startup__Var_41;
        MR_Word startup__Var_42;
        MR_Integer startup__Var_43;
        MR_Word startup__Var_44;
        MR_Box startup__conv0_InnerTotal_28;
        MR_Box startup__conv1_Var_36;
        MR_Box startup__conv2_Var_37;

        {
          profile__lookup_csd_desc_3_p_0(startup__CSDDescs_13, startup__CSDPtr_21, &startup__CSDDesc0_25);
        }
        {
          profile__lookup_csd_comp_table_3_p_0(startup__CSDCompTableArray_14, startup__CSDPtr_21, &startup__CSDCompTable_26);
        }
        {
          profile__lookup_call_site_statics_3_p_0(startup__CallSiteStatics_12, startup__CSSPtr_22, &startup__CSS_27);
        }
        startup__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 0)));
        startup__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 1)));
        startup__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 2)));
        startup__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 3)));
        startup__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 4)));
        {
          startup__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__CSDCompTable_26, ((MR_Box) (startup__Var_35)), &startup__conv0_InnerTotal_28);
        }
        if (startup__succeeded)
          {
            startup__InnerTotal_28 = ((MR_Word) startup__conv0_InnerTotal_28);
            startup__succeeded = MR_TRUE;
          }
        if (startup__succeeded)
          {
            startup__CSDDesc_29 = measurements__subtract_inherit_from_inherit_2_f_0(startup__InnerTotal_28, startup__CSDDesc0_25);
          }
        else
          startup__CSDDesc_29 = startup__CSDDesc0_25;
        {
          profile__lookup_css_own_3_p_0(startup__CSSOwnArray0_17, startup__CSSPtr_22, &startup__CSSOwn0_30);
        }
        {
          profile__lookup_css_desc_3_p_0(startup__CSSDescArray0_19, startup__CSSPtr_22, &startup__CSSDesc0_31);
        }
        {
          startup__CSSOwn_32 = measurements__add_own_to_own_2_f_0(startup__CSDOwn_24, startup__CSSOwn0_30);
        }
        {
          startup__CSSDesc_33 = measurements__add_inherit_to_inherit_2_f_0(startup__CSDDesc_29, startup__CSSDesc0_31);
        }
        {
          startup__conv1_Var_36 = array_util__u_1_f_0((MR_Word) &startup_scalar_common_1[14], ((MR_Box) (startup__CSSOwnArray0_17)));
        }
        startup__Var_36 = ((MR_ArrayPtr) startup__conv1_Var_36);
        {
          profile__update_css_own_4_p_0(startup__CSSPtr_22, startup__CSSOwn_32, startup__Var_36, startup__CSSOwnArray_18);
        }
        {
          startup__conv2_Var_37 = array_util__u_1_f_0((MR_Word) &startup_scalar_common_1[17], ((MR_Box) (startup__CSSDescArray0_19)));
        }
        startup__Var_37 = ((MR_ArrayPtr) startup__conv2_Var_37);
        {
          profile__update_css_desc_4_p_0(startup__CSSPtr_22, startup__CSSDesc_33, startup__Var_37, startup__CSSDescArray_20);
        }
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "summarize_call_site_dynamic: invalid css ptr");
          return;
        }
      }
  }
}

static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4,
  MR_Box startup__wrapper_arg_5,
  MR_Box * startup__wrapper_arg_6)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv1_CSSOwnArray_18;
    MR_ArrayPtr startup__conv0_CSSDescArray_20;

    {
      startup__summarize_call_site_dynamic_10_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 6))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv1_CSSOwnArray_18, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv0_CSSDescArray_20);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv1_CSSOwnArray_18));
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv0_CSSDescArray_20));
  }
}

static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0(
  MR_Word startup__STATE_VARIABLE_Deep_0_8,
  MR_Word * startup__STATE_VARIABLE_Deep_9)
{
  {
    MR_bool startup__succeeded;
    MR_ArrayPtr startup__CSSOwnArray0_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 21)));
    MR_ArrayPtr startup__CSSDescArray0_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 22)));
    MR_ArrayPtr startup__CSSOwnArray_6;
    MR_ArrayPtr startup__CSSDescArray_7;
    MR_Word startup__Var_10;
    MR_ArrayPtr startup__Var_12;
    MR_ArrayPtr startup__Var_13;
    MR_ArrayPtr startup__Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 5)));
    MR_ArrayPtr startup__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 7)));
    MR_ArrayPtr startup__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 14)));
    MR_ArrayPtr startup__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 18)));
    MR_ArrayPtr startup__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 24)));
    MR_Word startup__Var_216;
    MR_String startup__Var_217;
    MR_String startup__Var_218;
    MR_String startup__Var_219;
    MR_Word startup__Var_220;
    MR_ArrayPtr startup__Var_221;
    MR_ArrayPtr startup__Var_222;
    MR_ArrayPtr startup__Var_223;
    MR_ArrayPtr startup__Var_224;
    MR_ArrayPtr startup__Var_225;
    MR_ArrayPtr startup__Var_226;
    MR_ArrayPtr startup__Var_227;
    MR_ArrayPtr startup__Var_228;
    MR_ArrayPtr startup__Var_229;
    MR_ArrayPtr startup__Var_230;
    MR_ArrayPtr startup__Var_231;
    MR_ArrayPtr startup__Var_232;
    MR_ArrayPtr startup__Var_233;
    MR_ArrayPtr startup__Var_234;
    MR_ArrayPtr startup__Var_235;
    MR_ArrayPtr startup__Var_236;
    MR_ArrayPtr startup__Var_239;
    MR_ArrayPtr startup__Var_240;
    MR_Word startup__Var_241;
    MR_Word startup__Var_242;
    MR_Word startup__Var_243;
    MR_Word startup__Var_244;
    MR_Word startup__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 0)));
    MR_String startup__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 1)));
    MR_String startup__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 2)));
    MR_String startup__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 3)));
    MR_Word startup__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 4)));
    MR_ArrayPtr startup__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 6)));
    MR_ArrayPtr startup__Var_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 8)));
    MR_ArrayPtr startup__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 9)));
    MR_ArrayPtr startup__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 10)));
    MR_ArrayPtr startup__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 11)));
    MR_ArrayPtr startup__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 12)));
    MR_ArrayPtr startup__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 13)));
    MR_ArrayPtr startup__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 15)));
    MR_ArrayPtr startup__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 16)));
    MR_ArrayPtr startup__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 17)));
    MR_ArrayPtr startup__Var_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 19)));
    MR_ArrayPtr startup__Var_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 20)));
    MR_ArrayPtr startup__Var_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 23)));
    MR_Word startup__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 25)));
    MR_Word startup__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 26)));
    MR_Word startup__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 27)));
    MR_Word startup__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 28)));
    MR_ArrayPtr startup__conv2_Var_12;
    MR_ArrayPtr startup__conv3_Var_13;
    MR_Box startup__conv5_CSSOwnArray_6;
    MR_Box startup__conv4_CSSDescArray_7;
    MR_ArrayPtr startup__Var_237;
    MR_ArrayPtr startup__Var_238;

    {
      startup__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__Var_10, 0) = ((MR_Box) (&startup_scalar_common_12[0]));
      MR_hl_field(MR_mktag(0), startup__Var_10, 1) = ((MR_Box) (startup__summarize_call_site_dynamics_2_p_0_1));
      MR_hl_field(MR_mktag(0), startup__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), startup__Var_10, 3) = ((MR_Box) (startup__Var_34));
      MR_hl_field(MR_mktag(0), startup__Var_10, 4) = ((MR_Box) (startup__Var_27));
      MR_hl_field(MR_mktag(0), startup__Var_10, 5) = ((MR_Box) (startup__Var_38));
      MR_hl_field(MR_mktag(0), startup__Var_10, 6) = ((MR_Box) (startup__Var_43));
    }
    {
      startup__conv2_Var_12 = mercury__array__copy_1_f_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) startup__CSSOwnArray0_4);
    }
    startup__Var_12 = (MR_ArrayPtr) startup__conv2_Var_12;
    {
      startup__conv3_Var_13 = mercury__array__copy_1_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) startup__CSSDescArray0_5);
    }
    startup__Var_13 = (MR_ArrayPtr) startup__conv3_Var_13;
    {
      array_util__array_foldl2_from_1_6_p_1((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_Word) &startup_scalar_common_1[14], (MR_Word) &startup_scalar_common_1[17], startup__Var_10, (MR_ArrayPtr) startup__Var_25, ((MR_Box) (startup__Var_12)), &startup__conv5_CSSOwnArray_6, ((MR_Box) (startup__Var_13)), &startup__conv4_CSSDescArray_7);
    }
    startup__CSSOwnArray_6 = ((MR_ArrayPtr) startup__conv5_CSSOwnArray_6);
    startup__CSSDescArray_7 = ((MR_ArrayPtr) startup__conv4_CSSDescArray_7);
    startup__Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 0)));
    startup__Var_217 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 1)));
    startup__Var_218 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 2)));
    startup__Var_219 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 3)));
    startup__Var_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 4)));
    startup__Var_221 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 5)));
    startup__Var_222 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 6)));
    startup__Var_223 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 7)));
    startup__Var_224 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 8)));
    startup__Var_225 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 9)));
    startup__Var_226 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 10)));
    startup__Var_227 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 11)));
    startup__Var_228 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 12)));
    startup__Var_229 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 13)));
    startup__Var_230 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 14)));
    startup__Var_231 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 15)));
    startup__Var_232 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 16)));
    startup__Var_233 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 17)));
    startup__Var_234 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 18)));
    startup__Var_235 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 19)));
    startup__Var_236 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 20)));
    startup__Var_237 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 21)));
    startup__Var_238 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 22)));
    startup__Var_239 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 23)));
    startup__Var_240 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 24)));
    startup__Var_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 25)));
    startup__Var_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 26)));
    startup__Var_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 27)));
    startup__Var_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 28)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
      *startup__STATE_VARIABLE_Deep_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__Var_216));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__Var_217));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__Var_218));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__Var_219));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__Var_220));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__Var_221));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__Var_222));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__Var_223));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__Var_224));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__Var_225));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__Var_226));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__Var_227));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__Var_228));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__Var_229));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__Var_230));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__Var_231));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__Var_232));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__Var_233));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__Var_234));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__Var_235));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__Var_236));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__CSSOwnArray_6));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__CSSDescArray_7));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__Var_239));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__Var_240));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__Var_241));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__Var_242));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__Var_243));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__Var_244));
    }
  }
}

static void MR_CALL 
startup__summarize_proc_dynamic_with_coverage_11_p_0(
  MR_ArrayPtr startup__PDOwnArray_12,
  MR_ArrayPtr startup__PDDescArray_13,
  MR_ArrayPtr startup__PDCompTableArray_14,
  MR_Integer startup__PDI_15,
  MR_Word startup__PD_16,
  MR_ArrayPtr startup__STATE_VARIABLE_PSOwnArray_0_24,
  MR_ArrayPtr * startup__STATE_VARIABLE_PSOwnArray_25,
  MR_ArrayPtr startup__STATE_VARIABLE_PSDescArray_0_26,
  MR_ArrayPtr * startup__STATE_VARIABLE_PSDescArray_27,
  MR_ArrayPtr startup__STATE_VARIABLE_CoverageArray_0_28,
  MR_ArrayPtr * startup__STATE_VARIABLE_CoverageArray_29)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__PSPtr_20;
    MR_Word startup__MaybeDynamicCoverage_21;
    MR_ArrayPtr startup__Var_38;

    {
      startup__summarize_proc_dynamic_9_p_0(startup__PDOwnArray_12, startup__PDDescArray_13, startup__PDCompTableArray_14, startup__PDI_15, startup__PD_16, startup__STATE_VARIABLE_PSOwnArray_0_24, startup__STATE_VARIABLE_PSOwnArray_25, startup__STATE_VARIABLE_PSDescArray_0_26, startup__STATE_VARIABLE_PSDescArray_27);
    }
    startup__PSPtr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_16, (MR_Integer) 0)));
    startup__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_16, (MR_Integer) 1)));
    startup__MaybeDynamicCoverage_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_16, (MR_Integer) 2)));
    if ((startup__MaybeDynamicCoverage_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "startup", (MR_String) "predicate \140startup.summarize_proc_dynamic_with_coverage\'/11", (MR_String) "no coverage point array in proc dynamic");
          return;
        }
      }
    else
      {
        MR_ArrayPtr startup__DynamicCoverage_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__MaybeDynamicCoverage_21, (MR_Integer) 0)));
        MR_Word startup__STATE_VARIABLE_StaticCoverage_35_35;
        MR_Word startup__STATE_VARIABLE_StaticCoverage_36_36;

        {
          profile__lookup_ps_coverage_3_p_0(startup__STATE_VARIABLE_CoverageArray_0_28, startup__PSPtr_20, &startup__STATE_VARIABLE_StaticCoverage_35_35);
        }
        {
          measurements__add_coverage_arrays_3_p_0(startup__DynamicCoverage_22, startup__STATE_VARIABLE_StaticCoverage_35_35, &startup__STATE_VARIABLE_StaticCoverage_36_36);
        }
        {
          profile__update_ps_coverage_4_p_0(startup__PSPtr_20, startup__STATE_VARIABLE_StaticCoverage_36_36, startup__STATE_VARIABLE_CoverageArray_0_28, startup__STATE_VARIABLE_CoverageArray_29);
        }
      }
  }
}

static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4,
  MR_Box startup__wrapper_arg_5,
  MR_Box * startup__wrapper_arg_6,
  MR_Box startup__wrapper_arg_7,
  MR_Box * startup__wrapper_arg_8)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv2_STATE_VARIABLE_PSOwnArray_25;
    MR_ArrayPtr startup__conv1_STATE_VARIABLE_PSDescArray_27;
    MR_ArrayPtr startup__conv0_STATE_VARIABLE_CoverageArray_29;

    {
      startup__summarize_proc_dynamic_with_coverage_11_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv2_STATE_VARIABLE_PSOwnArray_25, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv1_STATE_VARIABLE_PSDescArray_27, ((MR_ArrayPtr) startup__wrapper_arg_7), &startup__conv0_STATE_VARIABLE_CoverageArray_29);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv2_STATE_VARIABLE_PSOwnArray_25));
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv1_STATE_VARIABLE_PSDescArray_27));
    *startup__wrapper_arg_8 = ((MR_Box) (startup__conv0_STATE_VARIABLE_CoverageArray_29));
  }
}

static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0(
  MR_Word startup__STATE_VARIABLE_Deep_0_8,
  MR_Word * startup__STATE_VARIABLE_Deep_9)
{
  {
    MR_bool startup__succeeded;
    MR_Integer startup__NPS_4;
    MR_ArrayPtr startup__PSOwnArray_5;
    MR_ArrayPtr startup__PSDescArray_6;
    MR_ArrayPtr startup__CoverageArray_7;
    MR_Integer startup__Var_10;
    MR_Word startup__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 0)));
    MR_Word startup__Var_13;
    MR_ArrayPtr startup__Var_15;
    MR_ArrayPtr startup__Var_16;
    MR_ArrayPtr startup__Var_17;
    MR_Word startup__Var_21;
    MR_Word startup__Var_22;
    MR_Word startup__Var_23;
    MR_Word startup__Var_27;
    MR_ArrayPtr startup__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 6)));
    MR_ArrayPtr startup__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 16)));
    MR_ArrayPtr startup__Var_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 17)));
    MR_ArrayPtr startup__Var_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 23)));
    MR_Word startup__Var_177;
    MR_String startup__Var_178;
    MR_String startup__Var_179;
    MR_String startup__Var_180;
    MR_Word startup__Var_181;
    MR_ArrayPtr startup__Var_182;
    MR_ArrayPtr startup__Var_183;
    MR_ArrayPtr startup__Var_184;
    MR_ArrayPtr startup__Var_185;
    MR_ArrayPtr startup__Var_186;
    MR_ArrayPtr startup__Var_187;
    MR_ArrayPtr startup__Var_188;
    MR_ArrayPtr startup__Var_189;
    MR_ArrayPtr startup__Var_190;
    MR_ArrayPtr startup__Var_191;
    MR_ArrayPtr startup__Var_192;
    MR_ArrayPtr startup__Var_193;
    MR_ArrayPtr startup__Var_194;
    MR_ArrayPtr startup__Var_195;
    MR_ArrayPtr startup__Var_198;
    MR_ArrayPtr startup__Var_199;
    MR_ArrayPtr startup__Var_200;
    MR_ArrayPtr startup__Var_201;
    MR_Word startup__Var_202;
    MR_Word startup__Var_204;
    MR_Word startup__Var_205;
    MR_Word startup__Var_206;
    MR_String startup__Var_207;
    MR_String startup__Var_208;
    MR_String startup__Var_209;
    MR_Word startup__Var_210;
    MR_ArrayPtr startup__Var_211;
    MR_ArrayPtr startup__Var_212;
    MR_ArrayPtr startup__Var_213;
    MR_ArrayPtr startup__Var_214;
    MR_ArrayPtr startup__Var_215;
    MR_ArrayPtr startup__Var_216;
    MR_ArrayPtr startup__Var_217;
    MR_ArrayPtr startup__Var_218;
    MR_ArrayPtr startup__Var_219;
    MR_ArrayPtr startup__Var_220;
    MR_ArrayPtr startup__Var_221;
    MR_ArrayPtr startup__Var_222;
    MR_ArrayPtr startup__Var_223;
    MR_ArrayPtr startup__Var_224;
    MR_ArrayPtr startup__Var_225;
    MR_ArrayPtr startup__Var_227;
    MR_ArrayPtr startup__Var_228;
    MR_ArrayPtr startup__Var_229;
    MR_ArrayPtr startup__Var_230;
    MR_Word startup__Var_231;
    MR_Word startup__Var_233;
    MR_Word startup__Var_234;
    MR_String startup__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 1)));
    MR_String startup__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 2)));
    MR_String startup__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 3)));
    MR_Word startup__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 4)));
    MR_ArrayPtr startup__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 5)));
    MR_ArrayPtr startup__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 7)));
    MR_ArrayPtr startup__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 8)));
    MR_ArrayPtr startup__Var_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 9)));
    MR_ArrayPtr startup__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 10)));
    MR_ArrayPtr startup__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 11)));
    MR_ArrayPtr startup__Var_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 12)));
    MR_ArrayPtr startup__Var_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 13)));
    MR_ArrayPtr startup__Var_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 14)));
    MR_ArrayPtr startup__Var_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 15)));
    MR_ArrayPtr startup__Var_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 18)));
    MR_ArrayPtr startup__Var_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 19)));
    MR_ArrayPtr startup__Var_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 20)));
    MR_ArrayPtr startup__Var_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 21)));
    MR_ArrayPtr startup__Var_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 22)));
    MR_ArrayPtr startup__Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 24)));
    MR_Word startup__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 25)));
    MR_Word startup__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 26)));
    MR_Word startup__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 27)));
    MR_Word startup__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 28)));
    MR_String startup__Var_56 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Var_11, (MR_Integer) 0)));
    MR_Integer startup__Var_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_11, (MR_Integer) 1)));
    MR_Integer startup__Var_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_11, (MR_Integer) 2)));
    MR_Integer startup__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_11, (MR_Integer) 3)));
    MR_Integer startup__Var_60;
    MR_Integer startup__Var_61;
    MR_Integer startup__Var_62;
    MR_Integer startup__Var_63;
    MR_Word startup__Var_64;
    MR_ArrayPtr startup__conv3_Var_15;
    MR_ArrayPtr startup__conv4_Var_16;
    MR_ArrayPtr startup__conv5_Var_17;
    MR_Box startup__conv8_PSOwnArray_5;
    MR_Box startup__conv7_PSDescArray_6;
    MR_Box startup__conv6_CoverageArray_7;
    MR_ArrayPtr startup__Var_196;
    MR_ArrayPtr startup__Var_197;
    MR_Word startup__Var_203;

    startup__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_11, (MR_Integer) 4)));
    startup__Var_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_11, (MR_Integer) 5)));
    startup__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_11, (MR_Integer) 6)));
    startup__Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_11, (MR_Integer) 7)));
    startup__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_11, (MR_Integer) 8)));
    startup__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Var_11, (MR_Integer) 9)));
    startup__NPS_4 = (startup__Var_10 + (MR_Integer) 1);
    {
      startup__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__Var_13, 0) = ((MR_Box) (&startup_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), startup__Var_13, 1) = ((MR_Box) (startup__summarize_proc_dynamics_with_coverage_data_2_p_0_1));
      MR_hl_field(MR_mktag(0), startup__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), startup__Var_13, 3) = ((MR_Box) (startup__Var_43));
      MR_hl_field(MR_mktag(0), startup__Var_13, 4) = ((MR_Box) (startup__Var_44));
      MR_hl_field(MR_mktag(0), startup__Var_13, 5) = ((MR_Box) (startup__Var_50));
    }
    {
      startup__Var_21 = measurements__zero_own_prof_info_0_f_0();
    }
    {
      startup__conv3_Var_15 = mercury__array__init_2_f_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, startup__NPS_4, ((MR_Box) (startup__Var_21)));
    }
    startup__Var_15 = (MR_ArrayPtr) startup__conv3_Var_15;
    {
      startup__Var_22 = measurements__zero_inherit_prof_info_0_f_0();
    }
    {
      startup__conv4_Var_16 = mercury__array__init_2_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__NPS_4, ((MR_Box) (startup__Var_22)));
    }
    startup__Var_16 = (MR_ArrayPtr) startup__conv4_Var_16;
    {
      startup__Var_23 = measurements__zero_static_coverage_0_f_0();
    }
    {
      startup__conv5_Var_17 = mercury__array__init_2_f_0((MR_Word) &startup_scalar_common_1[16], startup__NPS_4, ((MR_Box) (startup__Var_23)));
    }
    startup__Var_17 = (MR_ArrayPtr) startup__conv5_Var_17;
    {
      array_util__array_foldl3_from_1_8_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &startup_scalar_common_1[14], (MR_Word) &startup_scalar_common_1[17], (MR_Word) &startup_scalar_common_1[18], startup__Var_13, (MR_ArrayPtr) startup__Var_33, ((MR_Box) (startup__Var_15)), &startup__conv8_PSOwnArray_5, ((MR_Box) (startup__Var_16)), &startup__conv7_PSDescArray_6, ((MR_Box) (startup__Var_17)), &startup__conv6_CoverageArray_7);
    }
    startup__PSOwnArray_5 = ((MR_ArrayPtr) startup__conv8_PSOwnArray_5);
    startup__PSDescArray_6 = ((MR_ArrayPtr) startup__conv7_PSDescArray_6);
    startup__CoverageArray_7 = ((MR_ArrayPtr) startup__conv6_CoverageArray_7);
    startup__Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 0)));
    startup__Var_178 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 1)));
    startup__Var_179 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 2)));
    startup__Var_180 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 3)));
    startup__Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 4)));
    startup__Var_182 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 5)));
    startup__Var_183 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 6)));
    startup__Var_184 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 7)));
    startup__Var_185 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 8)));
    startup__Var_186 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 9)));
    startup__Var_187 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 10)));
    startup__Var_188 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 11)));
    startup__Var_189 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 12)));
    startup__Var_190 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 13)));
    startup__Var_191 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 14)));
    startup__Var_192 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 15)));
    startup__Var_193 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 16)));
    startup__Var_194 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 17)));
    startup__Var_195 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 18)));
    startup__Var_196 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 19)));
    startup__Var_197 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 20)));
    startup__Var_198 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 21)));
    startup__Var_199 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 22)));
    startup__Var_200 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 23)));
    startup__Var_201 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 24)));
    startup__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 25)));
    startup__Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 26)));
    startup__Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 27)));
    startup__Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 28)));
    startup__Var_206 = startup__Var_177;
    startup__Var_207 = startup__Var_178;
    startup__Var_208 = startup__Var_179;
    startup__Var_209 = startup__Var_180;
    startup__Var_210 = startup__Var_181;
    startup__Var_211 = startup__Var_182;
    startup__Var_212 = startup__Var_183;
    startup__Var_213 = startup__Var_184;
    startup__Var_214 = startup__Var_185;
    startup__Var_215 = startup__Var_186;
    startup__Var_216 = startup__Var_187;
    startup__Var_217 = startup__Var_188;
    startup__Var_218 = startup__Var_189;
    startup__Var_219 = startup__Var_190;
    startup__Var_220 = startup__Var_191;
    startup__Var_221 = startup__Var_192;
    startup__Var_222 = startup__Var_193;
    startup__Var_223 = startup__Var_194;
    startup__Var_224 = startup__Var_195;
    startup__Var_225 = startup__PSOwnArray_5;
    startup__Var_227 = startup__Var_198;
    startup__Var_228 = startup__Var_199;
    startup__Var_229 = startup__Var_200;
    startup__Var_230 = startup__Var_201;
    startup__Var_231 = startup__Var_202;
    startup__Var_233 = startup__Var_204;
    startup__Var_234 = startup__Var_205;
    {
      startup__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), startup__Var_27, 0) = ((MR_Box) (startup__CoverageArray_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
      *startup__STATE_VARIABLE_Deep_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__Var_206));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__Var_207));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__Var_208));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__Var_209));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__Var_210));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__Var_211));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__Var_212));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__Var_213));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__Var_214));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__Var_215));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__Var_216));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__Var_217));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__Var_218));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__Var_219));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__Var_220));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__Var_221));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__Var_222));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__Var_223));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__Var_224));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__Var_225));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__PSDescArray_6));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__Var_227));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__Var_228));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__Var_229));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__Var_230));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__Var_231));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__Var_27));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__Var_233));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__Var_234));
    }
  }
}

static void MR_CALL 
startup__summarize_proc_dynamic_9_p_0(
  MR_ArrayPtr startup__PDOwnArray_10,
  MR_ArrayPtr startup__PDDescArray_11,
  MR_ArrayPtr startup__PDCompTableArray_12,
  MR_Integer startup__PDI_13,
  MR_Word startup__PD_14,
  MR_ArrayPtr startup__PSOwnArray0_15,
  MR_ArrayPtr * startup__PSOwnArray_16,
  MR_ArrayPtr startup__PSDescArray0_17,
  MR_ArrayPtr * startup__PSDescArray_18)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__PSPtr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_14, (MR_Integer) 0)));
    MR_Word startup__PDPtr_20 = (MR_Word) startup__PDI_13;
    MR_Word startup__PDOwn_21;
    MR_Word startup__PDDesc0_22;
    MR_Word startup__PDCompTable_23;
    MR_Word startup__PDDesc_25;
    MR_Word startup__PSOwn0_26;
    MR_Word startup__PSDesc0_27;
    MR_Word startup__PSOwn_28;
    MR_Word startup__PSDesc_29;
    MR_ArrayPtr startup__Var_30;
    MR_ArrayPtr startup__Var_31;
    MR_ArrayPtr startup__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_14, (MR_Integer) 1)));
    MR_Word startup__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_14, (MR_Integer) 2)));
    MR_Word startup__InnerTotal_24;
    MR_Box startup__conv0_InnerTotal_24;
    MR_Box startup__conv1_Var_30;
    MR_Box startup__conv2_Var_31;

    {
      profile__lookup_pd_own_3_p_0(startup__PDOwnArray_10, startup__PDPtr_20, &startup__PDOwn_21);
    }
    {
      profile__lookup_pd_desc_3_p_0(startup__PDDescArray_11, startup__PDPtr_20, &startup__PDDesc0_22);
    }
    {
      profile__lookup_pd_comp_table_3_p_0(startup__PDCompTableArray_12, startup__PDPtr_20, &startup__PDCompTable_23);
    }
    {
      startup__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__PDCompTable_23, ((MR_Box) (startup__PSPtr_19)), &startup__conv0_InnerTotal_24);
    }
    if (startup__succeeded)
      {
        startup__InnerTotal_24 = ((MR_Word) startup__conv0_InnerTotal_24);
        startup__succeeded = MR_TRUE;
      }
    if (startup__succeeded)
      {
        startup__PDDesc_25 = measurements__subtract_inherit_from_inherit_2_f_0(startup__InnerTotal_24, startup__PDDesc0_22);
      }
    else
      startup__PDDesc_25 = startup__PDDesc0_22;
    {
      profile__lookup_ps_own_3_p_0(startup__PSOwnArray0_15, startup__PSPtr_19, &startup__PSOwn0_26);
    }
    {
      profile__lookup_ps_desc_3_p_0(startup__PSDescArray0_17, startup__PSPtr_19, &startup__PSDesc0_27);
    }
    {
      startup__PSOwn_28 = measurements__add_own_to_own_2_f_0(startup__PDOwn_21, startup__PSOwn0_26);
    }
    {
      startup__PSDesc_29 = measurements__add_inherit_to_inherit_2_f_0(startup__PDDesc_25, startup__PSDesc0_27);
    }
    {
      startup__conv1_Var_30 = array_util__u_1_f_0((MR_Word) &startup_scalar_common_1[14], ((MR_Box) (startup__PSOwnArray0_15)));
    }
    startup__Var_30 = ((MR_ArrayPtr) startup__conv1_Var_30);
    {
      profile__update_ps_own_4_p_0(startup__PSPtr_19, startup__PSOwn_28, startup__Var_30, startup__PSOwnArray_16);
    }
    {
      startup__conv2_Var_31 = array_util__u_1_f_0((MR_Word) &startup_scalar_common_1[17], ((MR_Box) (startup__PSDescArray0_17)));
    }
    startup__Var_31 = ((MR_ArrayPtr) startup__conv2_Var_31);
    {
      profile__update_ps_desc_4_p_0(startup__PSPtr_19, startup__PSDesc_29, startup__Var_31, startup__PSDescArray_18);
    }
  }
}

static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4,
  MR_Box startup__wrapper_arg_5,
  MR_Box * startup__wrapper_arg_6)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv1_PSOwnArray_16;
    MR_ArrayPtr startup__conv0_PSDescArray_18;

    {
      startup__summarize_proc_dynamic_9_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv1_PSOwnArray_16, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv0_PSDescArray_18);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv1_PSOwnArray_16));
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv0_PSDescArray_18));
  }
}

static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0(
  MR_Word startup__Deep0_3,
  MR_Word * startup__Deep_4)
{
  {
    MR_bool startup__succeeded;
    MR_ArrayPtr startup__PSOwnArray0_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 19)));
    MR_ArrayPtr startup__PSDescArray0_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 20)));
    MR_ArrayPtr startup__PSOwnArray_7;
    MR_ArrayPtr startup__PSDescArray_8;
    MR_Word startup__Var_9;
    MR_ArrayPtr startup__Var_11;
    MR_ArrayPtr startup__Var_12;
    MR_ArrayPtr startup__Var_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 6)));
    MR_ArrayPtr startup__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 16)));
    MR_ArrayPtr startup__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 17)));
    MR_ArrayPtr startup__Var_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 23)));
    MR_Word startup__Var_185;
    MR_String startup__Var_186;
    MR_String startup__Var_187;
    MR_String startup__Var_188;
    MR_Word startup__Var_189;
    MR_ArrayPtr startup__Var_190;
    MR_ArrayPtr startup__Var_191;
    MR_ArrayPtr startup__Var_192;
    MR_ArrayPtr startup__Var_193;
    MR_ArrayPtr startup__Var_194;
    MR_ArrayPtr startup__Var_195;
    MR_ArrayPtr startup__Var_196;
    MR_ArrayPtr startup__Var_197;
    MR_ArrayPtr startup__Var_198;
    MR_ArrayPtr startup__Var_199;
    MR_ArrayPtr startup__Var_200;
    MR_ArrayPtr startup__Var_201;
    MR_ArrayPtr startup__Var_202;
    MR_ArrayPtr startup__Var_203;
    MR_ArrayPtr startup__Var_206;
    MR_ArrayPtr startup__Var_207;
    MR_ArrayPtr startup__Var_208;
    MR_ArrayPtr startup__Var_209;
    MR_Word startup__Var_210;
    MR_Word startup__Var_211;
    MR_Word startup__Var_212;
    MR_Word startup__Var_213;
    MR_Word startup__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 0)));
    MR_String startup__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 1)));
    MR_String startup__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 2)));
    MR_String startup__Var_20 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 3)));
    MR_Word startup__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 4)));
    MR_ArrayPtr startup__Var_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 5)));
    MR_ArrayPtr startup__Var_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 7)));
    MR_ArrayPtr startup__Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 8)));
    MR_ArrayPtr startup__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 9)));
    MR_ArrayPtr startup__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 10)));
    MR_ArrayPtr startup__Var_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 11)));
    MR_ArrayPtr startup__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 12)));
    MR_ArrayPtr startup__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 13)));
    MR_ArrayPtr startup__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 14)));
    MR_ArrayPtr startup__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 15)));
    MR_ArrayPtr startup__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 18)));
    MR_ArrayPtr startup__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 21)));
    MR_ArrayPtr startup__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 22)));
    MR_ArrayPtr startup__Var_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 24)));
    MR_Word startup__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 25)));
    MR_Word startup__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 26)));
    MR_Word startup__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 27)));
    MR_Word startup__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 28)));
    MR_ArrayPtr startup__conv2_Var_11;
    MR_ArrayPtr startup__conv3_Var_12;
    MR_Box startup__conv5_PSOwnArray_7;
    MR_Box startup__conv4_PSDescArray_8;
    MR_ArrayPtr startup__Var_204;
    MR_ArrayPtr startup__Var_205;

    {
      startup__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__Var_9, 0) = ((MR_Box) (&startup_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), startup__Var_9, 1) = ((MR_Box) (startup__summarize_proc_dynamics_2_p_0_1));
      MR_hl_field(MR_mktag(0), startup__Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), startup__Var_9, 3) = ((MR_Box) (startup__Var_33));
      MR_hl_field(MR_mktag(0), startup__Var_9, 4) = ((MR_Box) (startup__Var_34));
      MR_hl_field(MR_mktag(0), startup__Var_9, 5) = ((MR_Box) (startup__Var_39));
    }
    {
      startup__conv2_Var_11 = mercury__array__copy_1_f_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) startup__PSOwnArray0_5);
    }
    startup__Var_11 = (MR_ArrayPtr) startup__conv2_Var_11;
    {
      startup__conv3_Var_12 = mercury__array__copy_1_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) startup__PSDescArray0_6);
    }
    startup__Var_12 = (MR_ArrayPtr) startup__conv3_Var_12;
    {
      array_util__array_foldl2_from_1_6_p_1((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &startup_scalar_common_1[14], (MR_Word) &startup_scalar_common_1[17], startup__Var_9, (MR_ArrayPtr) startup__Var_23, ((MR_Box) (startup__Var_11)), &startup__conv5_PSOwnArray_7, ((MR_Box) (startup__Var_12)), &startup__conv4_PSDescArray_8);
    }
    startup__PSOwnArray_7 = ((MR_ArrayPtr) startup__conv5_PSOwnArray_7);
    startup__PSDescArray_8 = ((MR_ArrayPtr) startup__conv4_PSDescArray_8);
    startup__Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 0)));
    startup__Var_186 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 1)));
    startup__Var_187 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 2)));
    startup__Var_188 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 3)));
    startup__Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 4)));
    startup__Var_190 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 5)));
    startup__Var_191 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 6)));
    startup__Var_192 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 7)));
    startup__Var_193 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 8)));
    startup__Var_194 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 9)));
    startup__Var_195 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 10)));
    startup__Var_196 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 11)));
    startup__Var_197 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 12)));
    startup__Var_198 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 13)));
    startup__Var_199 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 14)));
    startup__Var_200 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 15)));
    startup__Var_201 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 16)));
    startup__Var_202 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 17)));
    startup__Var_203 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 18)));
    startup__Var_204 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 19)));
    startup__Var_205 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 20)));
    startup__Var_206 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 21)));
    startup__Var_207 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 22)));
    startup__Var_208 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 23)));
    startup__Var_209 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 24)));
    startup__Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 25)));
    startup__Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 26)));
    startup__Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 27)));
    startup__Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 28)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
      *startup__Deep_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__Var_185));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__Var_186));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__Var_187));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__Var_188));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__Var_189));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__Var_190));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__Var_191));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__Var_192));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__Var_193));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__Var_194));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__Var_195));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__Var_196));
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__Var_197));
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__Var_198));
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__Var_199));
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__Var_200));
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__Var_201));
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__Var_202));
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__Var_203));
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__PSOwnArray_7));
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__PSDescArray_8));
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__Var_206));
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__Var_207));
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__Var_208));
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__Var_209));
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__Var_210));
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__Var_211));
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__Var_212));
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__Var_213));
    }
  }
}

static void MR_CALL 
startup__sum_call_sites_in_proc_dynamic_4_p_0(
  MR_Integer startup__HeadVar__1_5,
  MR_Word startup__CSD_6,
  MR_ArrayPtr startup__STATE_VARIABLE_PDOwnArray_0_13,
  MR_ArrayPtr * startup__STATE_VARIABLE_PDOwnArray_14)
{
  {
    MR_bool startup__succeeded;

    {
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_p_0(startup__CSD_6, startup__STATE_VARIABLE_PDOwnArray_0_13, startup__STATE_VARIABLE_PDOwnArray_14);
    }
  }
}

static void MR_CALL 
startup__construct_call_site_calls_3_7_p_0(
  MR_ArrayPtr startup__CallSiteDynamics_8,
  MR_ArrayPtr startup__ProcDynamics_9,
  MR_Word startup__CSSPtr_10,
  MR_Integer startup___Dummy_11,
  MR_Word startup__CSDPtr_12,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_25,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_26)
{
  {
    MR_bool startup__succeeded;

    {
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(startup__CallSiteDynamics_8, startup__ProcDynamics_9, startup__CSSPtr_10, startup__CSDPtr_12, startup__STATE_VARIABLE_CallSiteCalls_0_25, startup__STATE_VARIABLE_CallSiteCalls_26);
    }
  }
}

static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv2_STATE_VARIABLE_CallSiteCalls_26;

    {
      startup__construct_call_site_calls_3_7_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv2_STATE_VARIABLE_CallSiteCalls_26);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv2_STATE_VARIABLE_CallSiteCalls_26));
  }
}

static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0(
  MR_ArrayPtr startup__CallSiteDynamics_8,
  MR_ArrayPtr startup__ProcDynamics_9,
  MR_Integer startup__SlotNum_10,
  MR_ArrayPtr startup__CSSPtrs_11,
  MR_ArrayPtr startup__CSDArraySlots_12,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_19,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_20)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool startup__succeeded = (startup__SlotNum_10 >= (MR_Integer) 0);

        if (startup__succeeded)
          {
            MR_Word startup__CSDArraySlot_14;
            MR_Word startup__CSSPtr_15;
            MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_25_25;
            MR_Integer startup__Var_26;
            MR_Box startup__conv0_CSDArraySlot_14;
            MR_Box startup__conv1_CSSPtr_15;

            {
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) startup__CSDArraySlots_12, startup__SlotNum_10, &startup__conv0_CSDArraySlot_14);
            }
            startup__CSDArraySlot_14 = ((MR_Word) startup__conv0_CSDArraySlot_14);
            {
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) startup__CSSPtrs_11, startup__SlotNum_10, &startup__conv1_CSSPtr_15);
            }
            startup__CSSPtr_15 = ((MR_Word) startup__conv1_CSSPtr_15);
            if (((MR_tag((MR_Word) startup__CSDArraySlot_14)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_ArrayPtr startup__CSDPtrs_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__CSDArraySlot_14, (MR_Integer) 1)));
                MR_Word startup__Var_22;
                MR_Word startup__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__CSDArraySlot_14, (MR_Integer) 0)));
                MR_Box startup__conv3_STATE_VARIABLE_CallSiteCalls_25_25;

                {
                  startup__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), startup__Var_22, 0) = ((MR_Box) (&startup_scalar_common_9[0]));
                  MR_hl_field(MR_mktag(0), startup__Var_22, 1) = ((MR_Box) (startup__construct_call_site_calls_2_7_p_0_1));
                  MR_hl_field(MR_mktag(0), startup__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(0), startup__Var_22, 3) = ((MR_Box) (startup__CallSiteDynamics_8));
                  MR_hl_field(MR_mktag(0), startup__Var_22, 4) = ((MR_Box) (startup__ProcDynamics_9));
                  MR_hl_field(MR_mktag(0), startup__Var_22, 5) = ((MR_Box) (startup__CSSPtr_15));
                }
                {
                  array_util__array_foldl_from_0_4_p_1((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &startup_scalar_common_1[11], startup__Var_22, (MR_ArrayPtr) startup__CSDPtrs_18, ((MR_Box) (startup__STATE_VARIABLE_CallSiteCalls_0_19)), &startup__conv3_STATE_VARIABLE_CallSiteCalls_25_25);
                }
                startup__STATE_VARIABLE_CallSiteCalls_25_25 = ((MR_ArrayPtr) startup__conv3_STATE_VARIABLE_CallSiteCalls_25_25);
              }
            else
              {
                MR_Word startup__CSDPtr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSDArraySlot_14, (MR_Integer) 0)));

                {
                  startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(startup__CallSiteDynamics_8, startup__ProcDynamics_9, startup__CSSPtr_15, startup__CSDPtr_16, startup__STATE_VARIABLE_CallSiteCalls_0_19, &startup__STATE_VARIABLE_CallSiteCalls_25_25);
                }
              }
            startup__Var_26 = (startup__SlotNum_10 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer startup__next_value_of_SlotNum_10 = startup__Var_26;
              MR_ArrayPtr startup__next_value_of_STATE_VARIABLE_CallSiteCalls_0_19 = startup__STATE_VARIABLE_CallSiteCalls_25_25;

              startup__STATE_VARIABLE_CallSiteCalls_0_19 = startup__next_value_of_STATE_VARIABLE_CallSiteCalls_0_19;
              startup__SlotNum_10 = startup__next_value_of_SlotNum_10;
            }
            continue;
          }
        else
          *startup__STATE_VARIABLE_CallSiteCalls_20 = startup__STATE_VARIABLE_CallSiteCalls_0_19;
      }
      break;
    }
}

static void MR_CALL 
startup__construct_call_site_calls_5_p_0(
  MR_Word startup__InitDeep_6,
  MR_Integer startup___PDI_7,
  MR_Word startup__PD_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_18,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_19)
{
  {
    MR_bool startup__succeeded;

    {
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_p_0(startup__InitDeep_6, startup__PD_8, startup__STATE_VARIABLE_CallSiteCalls_0_18, startup__STATE_VARIABLE_CallSiteCalls_19);
    }
  }
}

static void MR_CALL 
startup__construct_call_site_caller_3_6_p_0(
  MR_ArrayPtr startup__CallSiteDynamics_7,
  MR_Word startup__CSSPtr_8,
  MR_Integer startup___Dummy_9,
  MR_Word startup__CSDPtr_10,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_12,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_13)
{
  {
    MR_bool startup__succeeded;

    {
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_p_0(startup__CallSiteDynamics_7, startup__CSSPtr_8, startup__CSDPtr_10, startup__STATE_VARIABLE_CallSiteStaticMap_0_12, startup__STATE_VARIABLE_CallSiteStaticMap_13);
    }
  }
}

static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv2_STATE_VARIABLE_CallSiteStaticMap_13;

    {
      startup__construct_call_site_caller_3_6_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv2_STATE_VARIABLE_CallSiteStaticMap_13);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv2_STATE_VARIABLE_CallSiteStaticMap_13));
  }
}

static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0(
  MR_Integer startup__SlotNum_7,
  MR_ArrayPtr startup__Deep_8,
  MR_ArrayPtr startup__CSSPtrs_9,
  MR_ArrayPtr startup__CSDArraySlots_10,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_17,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_18)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool startup__succeeded = (startup__SlotNum_7 >= (MR_Integer) 0);

        if (startup__succeeded)
          {
            MR_Word startup__CSDArraySlot_12;
            MR_Word startup__CSSPtr_13;
            MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_23_23;
            MR_Integer startup__Var_24;
            MR_Box startup__conv0_CSDArraySlot_12;
            MR_Box startup__conv1_CSSPtr_13;

            {
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) startup__CSDArraySlots_10, startup__SlotNum_7, &startup__conv0_CSDArraySlot_12);
            }
            startup__CSDArraySlot_12 = ((MR_Word) startup__conv0_CSDArraySlot_12);
            {
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) startup__CSSPtrs_9, startup__SlotNum_7, &startup__conv1_CSSPtr_13);
            }
            startup__CSSPtr_13 = ((MR_Word) startup__conv1_CSSPtr_13);
            if (((MR_tag((MR_Word) startup__CSDArraySlot_12)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_ArrayPtr startup__CSDPtrs_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__CSDArraySlot_12, (MR_Integer) 1)));
                MR_Word startup__Var_20;
                MR_Word startup__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__CSDArraySlot_12, (MR_Integer) 0)));
                MR_Box startup__conv3_STATE_VARIABLE_CallSiteStaticMap_23_23;

                {
                  startup__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), startup__Var_20, 0) = ((MR_Box) (&startup_scalar_common_3[2]));
                  MR_hl_field(MR_mktag(0), startup__Var_20, 1) = ((MR_Box) (startup__construct_call_site_caller_2_6_p_0_1));
                  MR_hl_field(MR_mktag(0), startup__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), startup__Var_20, 3) = ((MR_Box) (startup__Deep_8));
                  MR_hl_field(MR_mktag(0), startup__Var_20, 4) = ((MR_Box) (startup__CSSPtr_13));
                }
                {
                  array_util__array_foldl_from_0_4_p_1((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &startup_scalar_common_1[10], startup__Var_20, (MR_ArrayPtr) startup__CSDPtrs_16, ((MR_Box) (startup__STATE_VARIABLE_CallSiteStaticMap_0_17)), &startup__conv3_STATE_VARIABLE_CallSiteStaticMap_23_23);
                }
                startup__STATE_VARIABLE_CallSiteStaticMap_23_23 = ((MR_ArrayPtr) startup__conv3_STATE_VARIABLE_CallSiteStaticMap_23_23);
              }
            else
              {
                MR_Word startup__CSDPtr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSDArraySlot_12, (MR_Integer) 0)));

                {
                  startup__succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(startup__Deep_8, startup__CSDPtr_14);
                }
                if (startup__succeeded)
                  {
                    profile__update_call_site_static_map_4_p_0(startup__CSDPtr_14, startup__CSSPtr_13, startup__STATE_VARIABLE_CallSiteStaticMap_0_17, &startup__STATE_VARIABLE_CallSiteStaticMap_23_23);
                  }
                else
                  startup__STATE_VARIABLE_CallSiteStaticMap_23_23 = startup__STATE_VARIABLE_CallSiteStaticMap_0_17;
              }
            startup__Var_24 = (startup__SlotNum_7 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer startup__next_value_of_SlotNum_7 = startup__Var_24;
              MR_ArrayPtr startup__next_value_of_STATE_VARIABLE_CallSiteStaticMap_0_17 = startup__STATE_VARIABLE_CallSiteStaticMap_23_23;

              startup__STATE_VARIABLE_CallSiteStaticMap_0_17 = startup__next_value_of_STATE_VARIABLE_CallSiteStaticMap_0_17;
              startup__SlotNum_7 = startup__next_value_of_SlotNum_7;
            }
            continue;
          }
        else
          *startup__STATE_VARIABLE_CallSiteStaticMap_18 = startup__STATE_VARIABLE_CallSiteStaticMap_0_17;
      }
      break;
    }
}

static void MR_CALL 
startup__construct_call_site_caller_5_p_0(
  MR_Word startup__InitDeep_6,
  MR_Integer startup___PDI_7,
  MR_Word startup__PD_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_15,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_16)
{
  {
    MR_bool startup__succeeded;

    {
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_p_0(startup__InitDeep_6, startup__PD_8, startup__STATE_VARIABLE_CallSiteStaticMap_0_15, startup__STATE_VARIABLE_CallSiteStaticMap_16);
    }
  }
}

static void MR_CALL 
startup__construct_proc_callers_5_p_0(
  MR_Word startup__InitDeep_6,
  MR_Integer startup__CSDI_7,
  MR_Word startup__CSD_8,
  MR_ArrayPtr startup__STATE_VARIABLE_ProcCallers_0_15,
  MR_ArrayPtr * startup__STATE_VARIABLE_ProcCallers_16)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__PDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_8, (MR_Integer) 1)));
    MR_Word startup__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_8, (MR_Integer) 0)));
    MR_Word startup__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_8, (MR_Integer) 2)));
    MR_ArrayPtr startup__Var_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
    MR_Word startup__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
    MR_Word startup__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
    MR_ArrayPtr startup__Var_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
    MR_ArrayPtr startup__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
    MR_ArrayPtr startup__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));

    {
      startup__succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(startup__Var_17, startup__PDPtr_10);
    }
    if (startup__succeeded)
      {
        MR_Word startup__PD_11;
        MR_Word startup__PSPtr_12;
        MR_Word startup__Callers0_13;
        MR_Word startup__Callers_14;
        MR_ArrayPtr startup__Var_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
        MR_Word startup__Var_19;
        MR_Word startup__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
        MR_Word startup__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
        MR_ArrayPtr startup__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
        MR_ArrayPtr startup__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
        MR_ArrayPtr startup__Var_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
        MR_ArrayPtr startup__Var_33;
        MR_Word startup__Var_34;

        {
          profile__lookup_proc_dynamics_3_p_0(startup__Var_18, startup__PDPtr_10, &startup__PD_11);
        }
        startup__PSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_11, (MR_Integer) 0)));
        startup__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_11, (MR_Integer) 1)));
        startup__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_11, (MR_Integer) 2)));
        {
          profile__lookup_proc_callers_3_p_0(startup__STATE_VARIABLE_ProcCallers_0_15, startup__PSPtr_12, &startup__Callers0_13);
        }
        startup__Var_19 = (MR_Word) startup__CSDI_7;
        {
          startup__Callers_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), startup__Callers_14, 0) = ((MR_Box) (startup__Var_19));
          MR_hl_field(MR_mktag(1), startup__Callers_14, 1) = ((MR_Box) (startup__Callers0_13));
        }
        {
          profile__update_proc_callers_4_p_0(startup__PSPtr_12, startup__Callers_14, startup__STATE_VARIABLE_ProcCallers_0_15, startup__STATE_VARIABLE_ProcCallers_16);
        }
      }
    else
      *startup__STATE_VARIABLE_ProcCallers_16 = startup__STATE_VARIABLE_ProcCallers_0_15;
  }
}

static void MR_CALL 
startup__construct_clique_parents_2_8_p_0(
  MR_Word startup__InitDeep_9,
  MR_ArrayPtr startup__CliqueIndex_10,
  MR_Word startup__ParentCliquePtr_11,
  MR_Word startup__CSDPtr_12,
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueParents_0_21,
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueParents_22,
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueMaybeChildren_0_23,
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueMaybeChildren_24)
{
  {
    MR_bool startup__succeeded;
    MR_Integer startup__CSDI_15 = (MR_Integer) startup__CSDPtr_12;

    startup__succeeded = (startup__CSDI_15 > (MR_Integer) 0);
    if (startup__succeeded)
      {
        MR_Word startup__CSD_16;
        MR_Word startup__ChildPDPtr_17;
        MR_Integer startup__ChildPDI_18;
        MR_ArrayPtr startup__Var_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 2)));
        MR_Word startup__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 0)));
        MR_Word startup__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 1)));
        MR_ArrayPtr startup__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 3)));
        MR_ArrayPtr startup__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 4)));
        MR_ArrayPtr startup__Var_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 5)));
        MR_Box startup__conv0_CSD_16;
        MR_Word startup__Var_36;
        MR_Word startup__Var_37;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) startup__Var_26, startup__CSDI_15, &startup__conv0_CSD_16);
        }
        startup__CSD_16 = ((MR_Word) startup__conv0_CSD_16);
        startup__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 0)));
        startup__ChildPDPtr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 1)));
        startup__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 2)));
        startup__ChildPDI_18 = (MR_Integer) startup__ChildPDPtr_17;
        startup__succeeded = (startup__ChildPDI_18 > (MR_Integer) 0);
        if (startup__succeeded)
          {
            MR_Word startup__ChildCliquePtr_19;
            MR_Box startup__conv1_ChildCliquePtr_19;
            MR_Integer startup__Var_43;
            MR_Integer startup__Var_44;

            {
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_ArrayPtr) startup__CliqueIndex_10, startup__ChildPDI_18, &startup__conv1_ChildCliquePtr_19);
            }
            startup__ChildCliquePtr_19 = ((MR_Word) startup__conv1_ChildCliquePtr_19);
            startup__Var_43 = (MR_Integer) startup__ChildCliquePtr_19;
            startup__Var_44 = (MR_Integer) startup__ParentCliquePtr_11;
            startup__succeeded = (startup__Var_43 == startup__Var_44);
            startup__succeeded = !(startup__succeeded);
            if (startup__succeeded)
              {
                MR_Integer startup__ChildCliqueNum_20 = (MR_Integer) startup__ChildCliquePtr_19;
                MR_Word startup__Var_29;
                MR_ArrayPtr startup__conv2_STATE_VARIABLE_CliqueParents_22;
                MR_ArrayPtr startup__conv3_STATE_VARIABLE_CliqueMaybeChildren_24;

                {
                  mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__ChildCliqueNum_20, ((MR_Box) (startup__CSDPtr_12)), (MR_ArrayPtr) startup__STATE_VARIABLE_CliqueParents_0_21, &startup__conv2_STATE_VARIABLE_CliqueParents_22);
                }
                *startup__STATE_VARIABLE_CliqueParents_22 = (MR_ArrayPtr) startup__conv2_STATE_VARIABLE_CliqueParents_22;
                {
                  startup__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), startup__Var_29, 0) = ((MR_Box) (startup__ChildCliquePtr_19));
                }
                {
                  mercury__array__set_4_p_0((MR_Word) &startup_scalar_common_1[5], startup__CSDI_15, ((MR_Box) (startup__Var_29)), (MR_ArrayPtr) startup__STATE_VARIABLE_CliqueMaybeChildren_0_23, &startup__conv3_STATE_VARIABLE_CliqueMaybeChildren_24);
                }
                *startup__STATE_VARIABLE_CliqueMaybeChildren_24 = (MR_ArrayPtr) startup__conv3_STATE_VARIABLE_CliqueMaybeChildren_24;
              }
            else
              {
                *startup__STATE_VARIABLE_CliqueMaybeChildren_24 = startup__STATE_VARIABLE_CliqueMaybeChildren_0_23;
                *startup__STATE_VARIABLE_CliqueParents_22 = startup__STATE_VARIABLE_CliqueParents_0_21;
              }
          }
        else
          {
            *startup__STATE_VARIABLE_CliqueMaybeChildren_24 = startup__STATE_VARIABLE_CliqueMaybeChildren_0_23;
            *startup__STATE_VARIABLE_CliqueParents_22 = startup__STATE_VARIABLE_CliqueParents_0_21;
          }
      }
    else
      {
        *startup__STATE_VARIABLE_CliqueMaybeChildren_24 = startup__STATE_VARIABLE_CliqueMaybeChildren_0_23;
        *startup__STATE_VARIABLE_CliqueParents_22 = startup__STATE_VARIABLE_CliqueParents_0_21;
      }
  }
}

static void MR_CALL 
startup__construct_clique_parents_8_p_0_2(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv5_STATE_VARIABLE_CliqueParents_22;
    MR_ArrayPtr startup__conv4_STATE_VARIABLE_CliqueMaybeChildren_24;

    {
      startup__construct_clique_parents_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_Word) startup__wrapper_arg_1), ((MR_ArrayPtr) startup__wrapper_arg_2), &startup__conv5_STATE_VARIABLE_CliqueParents_22, ((MR_ArrayPtr) startup__wrapper_arg_4), &startup__conv4_STATE_VARIABLE_CliqueMaybeChildren_24);
    }
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv5_STATE_VARIABLE_CliqueParents_22));
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv4_STATE_VARIABLE_CliqueMaybeChildren_24));
  }
}

static void MR_CALL 
startup__construct_clique_parents_8_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_Word startup__conv1_CSDPtrs1_8;
    MR_Word startup__conv0_IsZeroed_10;

    {
      startup__gather_call_site_csdptrs_5_p_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_CSDPtrs1_8, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_IsZeroed_10);
    }
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_CSDPtrs1_8));
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_IsZeroed_10));
  }
}

static void MR_CALL 
startup__construct_clique_parents_8_p_0(
  MR_Word startup__InitDeep_9,
  MR_ArrayPtr startup__CliqueIndex_10,
  MR_Integer startup__PDI_11,
  MR_Word startup__CliquePtr_12,
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueParents_0_16,
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueParents_17,
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueMaybeChildren_0_18,
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueMaybeChildren_19)
{
  {
    MR_bool startup__succeeded = (startup__PDI_11 > (MR_Integer) 0);

    if (startup__succeeded)
      {
        MR_Word startup__TypeCtorInfo_37_37;
        MR_Word startup__TypeCtorInfo_13_56;
        MR_Word startup__CSDPtrs_15;
        MR_ArrayPtr startup__Var_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 3)));
        MR_Word startup__Var_22 = (MR_Word) startup__PDI_11;
        MR_Word startup__Var_23;
        MR_Word startup__PD_42;
        MR_ArrayPtr startup__CallSiteArray_43;
        MR_Word startup__CallSites_50;
        MR_Word startup__CSDPtrsList0_51;
        MR_Word startup__CSDPtrsList_52;
        MR_Word startup__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 0)));
        MR_Word startup__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 1)));
        MR_ArrayPtr startup__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 2)));
        MR_ArrayPtr startup__Var_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 4)));
        MR_ArrayPtr startup__Var_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 5)));
        MR_Word startup__Var_45;
        MR_Word startup__Var_46;
        MR_Word startup__Var_44;
        MR_Box startup__conv3_CSDPtrsList0_51;
        MR_Box startup__conv2_Var_44;
        MR_ArrayPtr startup__conv7_STATE_VARIABLE_CliqueParents_17;
        MR_ArrayPtr startup__conv6_STATE_VARIABLE_CliqueMaybeChildren_19;

        {
          profile__lookup_proc_dynamics_3_p_0(startup__Var_21, startup__Var_22, &startup__PD_42);
        }
        startup__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_42, (MR_Integer) 0)));
        startup__CallSiteArray_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_42, (MR_Integer) 1)));
        startup__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_42, (MR_Integer) 2)));
        startup__TypeCtorInfo_13_56 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
        {
          mercury__array__to_list_2_p_0(startup__TypeCtorInfo_13_56, (MR_ArrayPtr) startup__CallSiteArray_43, &startup__CallSites_50);
        }
        {
          mercury__list__foldl2_6_p_0(startup__TypeCtorInfo_13_56, (MR_Word) &startup_scalar_common_1[19], (MR_Word) &profile__profile__type_ctor_info_is_zeroed_0, (MR_Word) &startup_scalar_common_2[11], startup__CallSites_50, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv3_CSDPtrsList0_51, ((MR_Box) ((MR_Integer) 1)), &startup__conv2_Var_44);
        }
        startup__CSDPtrsList0_51 = ((MR_Word) startup__conv3_CSDPtrsList0_51);
        startup__Var_44 = ((MR_Word) startup__conv2_Var_44);
        {
          mercury__list__reverse_2_p_0((MR_Word) &startup_scalar_common_1[8], startup__CSDPtrsList0_51, &startup__CSDPtrsList_52);
        }
        {
          mercury__list__condense_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__CSDPtrsList_52, &startup__CSDPtrs_15);
        }
        {
          startup__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), startup__Var_23, 0) = ((MR_Box) (&startup_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), startup__Var_23, 1) = ((MR_Box) (startup__construct_clique_parents_8_p_0_2));
          MR_hl_field(MR_mktag(0), startup__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), startup__Var_23, 3) = ((MR_Box) (startup__InitDeep_9));
          MR_hl_field(MR_mktag(0), startup__Var_23, 4) = ((MR_Box) (startup__CliqueIndex_10));
          MR_hl_field(MR_mktag(0), startup__Var_23, 5) = ((MR_Box) (startup__CliquePtr_12));
        }
        startup__TypeCtorInfo_37_37 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
        {
          array_util__array_list_foldl2_6_p_0(startup__TypeCtorInfo_37_37, startup__TypeCtorInfo_37_37, (MR_Word) &startup_scalar_common_1[5], startup__Var_23, startup__CSDPtrs_15, (MR_ArrayPtr) startup__STATE_VARIABLE_CliqueParents_0_16, &startup__conv7_STATE_VARIABLE_CliqueParents_17, (MR_ArrayPtr) startup__STATE_VARIABLE_CliqueMaybeChildren_0_18, &startup__conv6_STATE_VARIABLE_CliqueMaybeChildren_19);
        }
        *startup__STATE_VARIABLE_CliqueParents_17 = (MR_ArrayPtr) startup__conv7_STATE_VARIABLE_CliqueParents_17;
        *startup__STATE_VARIABLE_CliqueMaybeChildren_19 = (MR_ArrayPtr) startup__conv6_STATE_VARIABLE_CliqueMaybeChildren_19;
      }
    else
      {
        {
          mercury__require__error_1_p_0((MR_String) "construct_clique_parents: invalid pdi");
          return;
        }
      }
  }
}

static MR_bool MR_CALL 
startup__record_csd_containers_2_4_p_0_1(
  MR_Box startup__closure_arg)
{
  {
    MR_bool startup__succeeded;
    MR_Box startup__closure = startup__closure_arg;

    {
      startup__succeeded = startup__IntroducedFrom__pred__record_csd_containers_2__498__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))));
    }
    return startup__succeeded;
  }
}

static void MR_CALL 
startup__record_csd_containers_2_4_p_0(
  MR_Word startup__PDPtr_1,
  MR_Word startup__HeadVar__2_2,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0_3,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteDynamics_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool startup__succeeded;

        if ((startup__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *startup__STATE_VARIABLE_CallSiteDynamics_4 = startup__STATE_VARIABLE_CallSiteDynamics_0_3;
        else
          {
            MR_Word startup__CSDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word startup__CSDPtrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word startup__CSD0_13;
            MR_Word startup__CallerPDPtr0_14;
            MR_Word startup__CalleePDPtr_15;
            MR_Word startup__Own_16;
            MR_Word startup__CSD_17;
            MR_Word startup__Var_20;
            MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_24_24;

            {
              profile__lookup_call_site_dynamics_3_p_0(startup__STATE_VARIABLE_CallSiteDynamics_0_3, startup__CSDPtr_10, &startup__CSD0_13);
            }
            startup__CallerPDPtr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD0_13, (MR_Integer) 0)));
            startup__CalleePDPtr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD0_13, (MR_Integer) 1)));
            startup__Own_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD0_13, (MR_Integer) 2)));
            {
              startup__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), startup__Var_20, 0) = ((MR_Box) (&startup_scalar_common_4[3]));
              MR_hl_field(MR_mktag(0), startup__Var_20, 1) = ((MR_Box) (startup__record_csd_containers_2_4_p_0_1));
              MR_hl_field(MR_mktag(0), startup__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), startup__Var_20, 3) = ((MR_Box) (startup__CallerPDPtr0_14));
              MR_hl_field(MR_mktag(0), startup__Var_20, 4) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
            }
            {
              mercury__require__require_2_p_0(startup__Var_20, (MR_String) "record_csd_containers_2: real proc_dynamic_ptr");
            }
            {
              startup__CSD_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), startup__CSD_17, 0) = ((MR_Box) (startup__PDPtr_1));
              MR_hl_field(MR_mktag(0), startup__CSD_17, 1) = ((MR_Box) (startup__CalleePDPtr_15));
              MR_hl_field(MR_mktag(0), startup__CSD_17, 2) = ((MR_Box) (startup__Own_16));
            }
            {
              profile__update_call_site_dynamics_4_p_0(startup__CSDPtr_10, startup__CSD_17, startup__STATE_VARIABLE_CallSiteDynamics_0_3, &startup__STATE_VARIABLE_CallSiteDynamics_24_24);
            }
            /* direct tailcall eliminated */
            {
              MR_Word startup__next_value_of_HeadVar__2_2 = startup__CSDPtrs_11;
              MR_ArrayPtr startup__next_value_of_STATE_VARIABLE_CallSiteDynamics_0_3 = startup__STATE_VARIABLE_CallSiteDynamics_24_24;

              startup__STATE_VARIABLE_CallSiteDynamics_0_3 = startup__next_value_of_STATE_VARIABLE_CallSiteDynamics_0_3;
              startup__HeadVar__2_2 = startup__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3,
  MR_Box startup__wrapper_arg_4,
  MR_Box * startup__wrapper_arg_5)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_Word startup__conv1_CSDPtrs1_8;
    MR_Word startup__conv0_IsZeroed_10;

    {
      startup__gather_call_site_csdptrs_5_p_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_CSDPtrs1_8, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_IsZeroed_10);
    }
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_CSDPtrs1_8));
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_IsZeroed_10));
  }
}

static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0(
  MR_Integer startup__PDI_7,
  MR_Word startup__PD_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0_18,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteDynamics_19,
  MR_ArrayPtr startup__STATE_VARIABLE_ProcStatics_0_20,
  MR_ArrayPtr * startup__STATE_VARIABLE_ProcStatics_21)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__TypeCtorInfo_13_50 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
    MR_ArrayPtr startup__CSDArray_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 1)));
    MR_Word startup__PDPtr_12 = (MR_Word) startup__PDI_7;
    MR_Word startup__CSDPtrs_13;
    MR_Word startup__IsZeroed_14;
    MR_Word startup__CallSites_44;
    MR_Word startup__CSDPtrsList0_45;
    MR_Word startup__CSDPtrsList_46;
    MR_Word startup__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 0)));
    MR_Word startup__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 2)));
    MR_Box startup__conv3_CSDPtrsList0_45;
    MR_Box startup__conv2_IsZeroed_14;

    {
      mercury__array__to_list_2_p_0(startup__TypeCtorInfo_13_50, (MR_ArrayPtr) startup__CSDArray_11, &startup__CallSites_44);
    }
    {
      mercury__list__foldl2_6_p_0(startup__TypeCtorInfo_13_50, (MR_Word) &startup_scalar_common_1[19], (MR_Word) &profile__profile__type_ctor_info_is_zeroed_0, (MR_Word) &startup_scalar_common_2[10], startup__CallSites_44, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv3_CSDPtrsList0_45, ((MR_Box) ((MR_Integer) 1)), &startup__conv2_IsZeroed_14);
    }
    startup__CSDPtrsList0_45 = ((MR_Word) startup__conv3_CSDPtrsList0_45);
    startup__IsZeroed_14 = ((MR_Word) startup__conv2_IsZeroed_14);
    {
      mercury__list__reverse_2_p_0((MR_Word) &startup_scalar_common_1[8], startup__CSDPtrsList0_45, &startup__CSDPtrsList_46);
    }
    {
      mercury__list__condense_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__CSDPtrsList_46, &startup__CSDPtrs_13);
    }
    {
      startup__record_csd_containers_2_4_p_0(startup__PDPtr_12, startup__CSDPtrs_13, startup__STATE_VARIABLE_CallSiteDynamics_0_18, startup__STATE_VARIABLE_CallSiteDynamics_19);
    }
    switch (startup__IsZeroed_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *startup__STATE_VARIABLE_ProcStatics_21 = startup__STATE_VARIABLE_ProcStatics_0_20;
        break;
      case (MR_Integer) 0:
        {
          MR_Word startup__PSPtr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 0)));
          MR_Word startup__PS0_16;
          MR_Word startup__PS_17;
          MR_ArrayPtr startup__Var_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 1)));
          MR_Word startup__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 2)));
          MR_Word startup__Var_29;
          MR_String startup__Var_30;
          MR_String startup__Var_31;
          MR_String startup__Var_32;
          MR_String startup__Var_33;
          MR_String startup__Var_34;
          MR_Integer startup__Var_35;
          MR_Word startup__Var_36;
          MR_ArrayPtr startup__Var_37;
          MR_ArrayPtr startup__Var_38;
          MR_Word startup__Var_39;
          MR_Word startup__Var_40;

          {
            profile__lookup_proc_statics_3_p_0(startup__STATE_VARIABLE_ProcStatics_0_20, startup__PSPtr_15, &startup__PS0_16);
          }
          startup__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 0)));
          startup__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 1)));
          startup__Var_31 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 2)));
          startup__Var_32 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 3)));
          startup__Var_33 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 4)));
          startup__Var_34 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 5)));
          startup__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 6)));
          startup__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 7)));
          startup__Var_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 8)));
          startup__Var_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 9)));
          startup__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 10)));
          startup__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 11)));
          {
            startup__PS_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), startup__PS_17, 0) = ((MR_Box) (startup__Var_29));
            MR_hl_field(MR_mktag(0), startup__PS_17, 1) = ((MR_Box) (startup__Var_30));
            MR_hl_field(MR_mktag(0), startup__PS_17, 2) = ((MR_Box) (startup__Var_31));
            MR_hl_field(MR_mktag(0), startup__PS_17, 3) = ((MR_Box) (startup__Var_32));
            MR_hl_field(MR_mktag(0), startup__PS_17, 4) = ((MR_Box) (startup__Var_33));
            MR_hl_field(MR_mktag(0), startup__PS_17, 5) = ((MR_Box) (startup__Var_34));
            MR_hl_field(MR_mktag(0), startup__PS_17, 6) = ((MR_Box) (startup__Var_35));
            MR_hl_field(MR_mktag(0), startup__PS_17, 7) = ((MR_Box) (startup__Var_36));
            MR_hl_field(MR_mktag(0), startup__PS_17, 8) = ((MR_Box) (startup__Var_37));
            MR_hl_field(MR_mktag(0), startup__PS_17, 9) = ((MR_Box) (startup__Var_38));
            MR_hl_field(MR_mktag(0), startup__PS_17, 10) = ((MR_Box) (startup__Var_39));
            MR_hl_field(MR_mktag(0), startup__PS_17, 11) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            profile__update_proc_statics_4_p_0(startup__PSPtr_15, startup__PS_17, startup__STATE_VARIABLE_ProcStatics_0_20, startup__STATE_VARIABLE_ProcStatics_21);
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_2(
  MR_Box startup__closure_arg)
{
  {
    MR_bool startup__succeeded;
    MR_Box startup__closure = startup__closure_arg;

    {
      startup__succeeded = startup__IntroducedFrom__pred__record_css_containers_2__457__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))));
    }
    return startup__succeeded;
  }
}

static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_1(
  MR_Box startup__closure_arg)
{
  {
    MR_bool startup__succeeded;
    MR_Box startup__closure = startup__closure_arg;

    {
      startup__succeeded = startup__IntroducedFrom__pred__record_css_containers_2__455__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))));
    }
    return startup__succeeded;
  }
}

static void MR_CALL 
startup__record_css_containers_2_5_p_0(
  MR_Integer startup__SlotNum_6,
  MR_Word startup__PSPtr_7,
  MR_ArrayPtr startup__CSSPtrs_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0_18,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStatics_19)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool startup__succeeded = (startup__SlotNum_6 >= (MR_Integer) 0);

        if (startup__succeeded)
          {
            MR_Word startup__CSSPtr_10;
            MR_Word startup__CSS0_11;
            MR_Word startup__PSPtr0_12;
            MR_Integer startup__SlotNum0_13;
            MR_Word startup__Kind_14;
            MR_Integer startup__LineNumber_15;
            MR_Word startup__GoalPath_16;
            MR_Word startup__CSS_17;
            MR_Word startup__Var_21;
            MR_Word startup__Var_25;
            MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_28_28;
            MR_Integer startup__Var_29;
            MR_Box startup__conv0_CSSPtr_10;

            {
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) startup__CSSPtrs_8, startup__SlotNum_6, &startup__conv0_CSSPtr_10);
            }
            startup__CSSPtr_10 = ((MR_Word) startup__conv0_CSSPtr_10);
            {
              profile__lookup_call_site_statics_3_p_0(startup__STATE_VARIABLE_CallSiteStatics_0_18, startup__CSSPtr_10, &startup__CSS0_11);
            }
            startup__PSPtr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 0)));
            startup__SlotNum0_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 1)));
            startup__Kind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 2)));
            startup__LineNumber_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 3)));
            startup__GoalPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 4)));
            {
              startup__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), startup__Var_21, 0) = ((MR_Box) (&startup_scalar_common_4[1]));
              MR_hl_field(MR_mktag(0), startup__Var_21, 1) = ((MR_Box) (startup__record_css_containers_2_5_p_0_1));
              MR_hl_field(MR_mktag(0), startup__Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), startup__Var_21, 3) = ((MR_Box) (startup__PSPtr0_12));
              MR_hl_field(MR_mktag(0), startup__Var_21, 4) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
            }
            {
              mercury__require__require_2_p_0(startup__Var_21, (MR_String) "record_css_containers_2: real proc_static_ptr");
            }
            {
              startup__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), startup__Var_25, 0) = ((MR_Box) (&startup_scalar_common_4[2]));
              MR_hl_field(MR_mktag(0), startup__Var_25, 1) = ((MR_Box) (startup__record_css_containers_2_5_p_0_2));
              MR_hl_field(MR_mktag(0), startup__Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), startup__Var_25, 3) = ((MR_Box) (startup__SlotNum0_13));
              MR_hl_field(MR_mktag(0), startup__Var_25, 4) = ((MR_Box) ((MR_Integer) -1));
            }
            {
              mercury__require__require_2_p_0(startup__Var_25, (MR_String) "record_css_containers_2: real slot_num");
            }
            {
              startup__CSS_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), startup__CSS_17, 0) = ((MR_Box) (startup__PSPtr_7));
              MR_hl_field(MR_mktag(0), startup__CSS_17, 1) = ((MR_Box) (startup__SlotNum_6));
              MR_hl_field(MR_mktag(0), startup__CSS_17, 2) = ((MR_Box) (startup__Kind_14));
              MR_hl_field(MR_mktag(0), startup__CSS_17, 3) = ((MR_Box) (startup__LineNumber_15));
              MR_hl_field(MR_mktag(0), startup__CSS_17, 4) = ((MR_Box) (startup__GoalPath_16));
            }
            {
              profile__update_call_site_statics_4_p_0(startup__CSSPtr_10, startup__CSS_17, startup__STATE_VARIABLE_CallSiteStatics_0_18, &startup__STATE_VARIABLE_CallSiteStatics_28_28);
            }
            startup__Var_29 = (startup__SlotNum_6 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer startup__next_value_of_SlotNum_6 = startup__Var_29;
              MR_ArrayPtr startup__next_value_of_STATE_VARIABLE_CallSiteStatics_0_18 = startup__STATE_VARIABLE_CallSiteStatics_28_28;

              startup__STATE_VARIABLE_CallSiteStatics_0_18 = startup__next_value_of_STATE_VARIABLE_CallSiteStatics_0_18;
              startup__SlotNum_6 = startup__next_value_of_SlotNum_6;
            }
            continue;
          }
        else
          *startup__STATE_VARIABLE_CallSiteStatics_19 = startup__STATE_VARIABLE_CallSiteStatics_0_18;
      }
      break;
    }
}

static void MR_CALL 
startup__record_css_containers_module_procs_6_p_0(
  MR_Integer startup__PSI_7,
  MR_Word startup__PS_8,
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0_16,
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStatics_17,
  MR_Word startup__STATE_VARIABLE_ModuleProcs_0_18,
  MR_Word * startup__STATE_VARIABLE_ModuleProcs_19)
{
  {
    MR_bool startup__succeeded;
    MR_ArrayPtr startup__CSSPtrs_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 8)));
    MR_Word startup__PSPtr_12 = (MR_Word) startup__PSI_7;
    MR_Integer startup__MaxCS_13;
    MR_String startup__DeclModule_14;
    MR_Word startup__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 0)));
    MR_String startup__Var_27 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 1)));
    MR_String startup__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 2)));
    MR_String startup__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 3)));
    MR_String startup__Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 4)));
    MR_String startup__Var_31 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 5)));
    MR_Integer startup__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 6)));
    MR_Word startup__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 7)));
    MR_ArrayPtr startup__Var_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 9)));
    MR_Word startup__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 10)));
    MR_Word startup__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 11)));
    MR_Word startup__Var_37;
    MR_String startup__Var_38;
    MR_String startup__Var_39;
    MR_String startup__Var_40;
    MR_String startup__Var_41;
    MR_Integer startup__Var_42;
    MR_Word startup__Var_43;
    MR_ArrayPtr startup__Var_44;
    MR_ArrayPtr startup__Var_45;
    MR_Word startup__Var_46;
    MR_Word startup__Var_47;
    MR_Word startup__PSPtrs0_15;
    MR_Box startup__conv0_PSPtrs0_15;

    {
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) startup__CSSPtrs_11, &startup__MaxCS_13);
    }
    {
      startup__record_css_containers_2_5_p_0(startup__MaxCS_13, startup__PSPtr_12, startup__CSSPtrs_11, startup__STATE_VARIABLE_CallSiteStatics_0_16, startup__STATE_VARIABLE_CallSiteStatics_17);
    }
    startup__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 0)));
    startup__DeclModule_14 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 1)));
    startup__Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 2)));
    startup__Var_39 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 3)));
    startup__Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 4)));
    startup__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 5)));
    startup__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 6)));
    startup__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 7)));
    startup__Var_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 8)));
    startup__Var_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 9)));
    startup__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 10)));
    startup__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 11)));
    {
      startup__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &startup_scalar_common_1[1], startup__STATE_VARIABLE_ModuleProcs_0_18, ((MR_Box) (startup__DeclModule_14)), &startup__conv0_PSPtrs0_15);
    }
    if (startup__succeeded)
      {
        startup__PSPtrs0_15 = ((MR_Word) startup__conv0_PSPtrs0_15);
        startup__succeeded = MR_TRUE;
      }
    if (startup__succeeded)
      {
        MR_Word startup__Var_21;

        {
          startup__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), startup__Var_21, 0) = ((MR_Box) (startup__PSPtr_12));
          MR_hl_field(MR_mktag(1), startup__Var_21, 1) = ((MR_Box) (startup__PSPtrs0_15));
        }
        {
          mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &startup_scalar_common_1[1], ((MR_Box) (startup__DeclModule_14)), ((MR_Box) (startup__Var_21)), startup__STATE_VARIABLE_ModuleProcs_0_18, startup__STATE_VARIABLE_ModuleProcs_19);
        }
      }
    else
      {
        MR_Word startup__Var_23;

        {
          startup__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), startup__Var_23, 0) = ((MR_Box) (startup__PSPtr_12));
          MR_hl_field(MR_mktag(1), startup__Var_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &startup_scalar_common_1[1], ((MR_Box) (startup__DeclModule_14)), ((MR_Box) (startup__Var_23)), startup__STATE_VARIABLE_ModuleProcs_0_18, startup__STATE_VARIABLE_ModuleProcs_19);
        }
      }
  }
}

static void MR_CALL 
startup__ensure_module_has_module_data_3_p_0(
  MR_String startup__Module_4,
  MR_Word startup__STATE_VARIABLE_ModuleDataMap_0_8,
  MR_Word * startup__STATE_VARIABLE_ModuleDataMap_9)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__Var_6;
    MR_Box startup__conv0_Var_6;

    {
      startup__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, startup__STATE_VARIABLE_ModuleDataMap_0_8, ((MR_Box) (startup__Module_4)), &startup__conv0_Var_6);
    }
    if (startup__succeeded)
      {
        startup__Var_6 = ((MR_Word) startup__conv0_Var_6);
        startup__succeeded = MR_TRUE;
      }
    if (startup__succeeded)
      *startup__STATE_VARIABLE_ModuleDataMap_9 = startup__STATE_VARIABLE_ModuleDataMap_0_8;
    else
      {
        MR_Word startup__Data_7;
        MR_Word startup__Var_10;
        MR_Word startup__Var_11;

        {
          startup__Var_10 = measurements__zero_own_prof_info_0_f_0();
        }
        {
          startup__Var_11 = measurements__zero_inherit_prof_info_0_f_0();
        }
        {
          startup__Data_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), startup__Data_7, 0) = ((MR_Box) (startup__Var_10));
          MR_hl_field(MR_mktag(0), startup__Data_7, 1) = ((MR_Box) (startup__Var_11));
          MR_hl_field(MR_mktag(0), startup__Data_7, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, ((MR_Box) (startup__Module_4)), ((MR_Box) (startup__Data_7)), startup__STATE_VARIABLE_ModuleDataMap_0_8, startup__STATE_VARIABLE_ModuleDataMap_9);
        }
      }
  }
}

static MR_Word MR_CALL 
startup__initialize_module_data_1_f_0(
  MR_Word startup__PSPtrs_3)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__HeadVar__2_2;
    MR_Word startup__Var_4;
    MR_Word startup__Var_5;

    {
      startup__Var_4 = measurements__zero_own_prof_info_0_f_0();
    }
    {
      startup__Var_5 = measurements__zero_inherit_prof_info_0_f_0();
    }
    {
      startup__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__HeadVar__2_2, 0) = ((MR_Box) (startup__Var_4));
      MR_hl_field(MR_mktag(0), startup__HeadVar__2_2, 1) = ((MR_Box) (startup__Var_5));
      MR_hl_field(MR_mktag(0), startup__HeadVar__2_2, 2) = ((MR_Box) (startup__PSPtrs_3));
    }
    return startup__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
startup__contour_file_name_1_f_0(
  MR_String startup__DataFileName_3)
{
  {
    MR_bool startup__succeeded;
    MR_String startup__ContourFileName_4;
    MR_String startup__BaseFileName_5;

    {
      startup__succeeded = mercury__string__remove_suffix_3_p_0(startup__DataFileName_3, (MR_String) ".data", &startup__BaseFileName_5);
    }
    if (startup__succeeded)
      {
        {
          startup__ContourFileName_4 = mercury__string__f_43_43_2_f_0(startup__BaseFileName_5, (MR_String) ".contour");
        }
      }
    else
      {
        MR_String startup__Var_8;

        {
          startup__Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t remove suffix from deep file name: ", startup__DataFileName_3);
        }
        {
          mercury__require__error_1_p_0(startup__Var_8);
        }
      }
    return startup__ContourFileName_4;
  }
}

static void MR_CALL 
startup__startup_11_p_0_10(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_Word startup__conv40_STATE_VARIABLE_Deep_17;

    {
      startup__propagate_to_clique_4_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_Word) startup__wrapper_arg_3), &startup__conv40_STATE_VARIABLE_Deep_17);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv40_STATE_VARIABLE_Deep_17));
  }
}

static void MR_CALL 
startup__startup_11_p_0_9(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv31_STATE_VARIABLE_PDOwnArray_14;

    {
      startup__sum_call_sites_in_proc_dynamic_4_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv31_STATE_VARIABLE_PDOwnArray_14);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv31_STATE_VARIABLE_PDOwnArray_14));
  }
}

static void MR_CALL 
startup__startup_11_p_0_8(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box * startup__wrapper_arg_3)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_Word startup__conv27_STATE_VARIABLE_ModuleDataMap_9;

    {
      startup__ensure_module_has_module_data_3_p_0(((MR_String) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv27_STATE_VARIABLE_ModuleDataMap_9);
    }
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv27_STATE_VARIABLE_ModuleDataMap_9));
  }
}

static void MR_CALL 
startup__startup_11_p_0_7(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv25_STATE_VARIABLE_CallSiteCalls_19;

    {
      startup__construct_call_site_calls_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv25_STATE_VARIABLE_CallSiteCalls_19);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv25_STATE_VARIABLE_CallSiteCalls_19));
  }
}

static void MR_CALL 
startup__startup_11_p_0_6(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv22_STATE_VARIABLE_CallSiteStaticMap_16;

    {
      startup__construct_call_site_caller_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv22_STATE_VARIABLE_CallSiteStaticMap_16);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv22_STATE_VARIABLE_CallSiteStaticMap_16));
  }
}

static void MR_CALL 
startup__startup_11_p_0_5(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv19_STATE_VARIABLE_ProcCallers_16;

    {
      startup__construct_proc_callers_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv19_STATE_VARIABLE_ProcCallers_16);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv19_STATE_VARIABLE_ProcCallers_16));
  }
}

static void MR_CALL 
startup__startup_11_p_0_4(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4,
  MR_Box startup__wrapper_arg_5,
  MR_Box * startup__wrapper_arg_6)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv15_STATE_VARIABLE_CliqueParents_17;
    MR_ArrayPtr startup__conv14_STATE_VARIABLE_CliqueMaybeChildren_19;

    {
      startup__construct_clique_parents_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv15_STATE_VARIABLE_CliqueParents_17, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv14_STATE_VARIABLE_CliqueMaybeChildren_19);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv15_STATE_VARIABLE_CliqueParents_17));
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv14_STATE_VARIABLE_CliqueMaybeChildren_19));
  }
}

static void MR_CALL 
startup__startup_11_p_0_3(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4,
  MR_Box startup__wrapper_arg_5,
  MR_Box * startup__wrapper_arg_6)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv7_STATE_VARIABLE_CallSiteDynamics_19;
    MR_ArrayPtr startup__conv6_STATE_VARIABLE_ProcStatics_21;

    {
      startup__record_csd_containers_zeroed_pss_6_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv7_STATE_VARIABLE_CallSiteDynamics_19, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv6_STATE_VARIABLE_ProcStatics_21);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv7_STATE_VARIABLE_CallSiteDynamics_19));
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv6_STATE_VARIABLE_ProcStatics_21));
  }
}

static MR_Box MR_CALL 
startup__startup_11_p_0_2(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1)
{
  {
    MR_Box startup__wrapper_arg_2;
    MR_Box startup__closure = startup__closure_arg;
    MR_Word startup__conv5_HeadVar__2_2;

    {
      startup__conv5_HeadVar__2_2 = startup__initialize_module_data_1_f_0(((MR_Word) startup__wrapper_arg_1));
    }
    startup__wrapper_arg_2 = ((MR_Box) (startup__conv5_HeadVar__2_2));
    return startup__wrapper_arg_2;
  }
}

static void MR_CALL 
startup__startup_11_p_0_1(
  MR_Box startup__closure_arg,
  MR_Box startup__wrapper_arg_1,
  MR_Box startup__wrapper_arg_2,
  MR_Box startup__wrapper_arg_3,
  MR_Box * startup__wrapper_arg_4,
  MR_Box startup__wrapper_arg_5,
  MR_Box * startup__wrapper_arg_6)
{
  {
    MR_Box startup__closure = startup__closure_arg;
    MR_ArrayPtr startup__conv1_STATE_VARIABLE_CallSiteStatics_17;
    MR_Word startup__conv0_STATE_VARIABLE_ModuleProcs_19;

    {
      startup__record_css_containers_module_procs_6_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv1_STATE_VARIABLE_CallSiteStatics_17, ((MR_Word) startup__wrapper_arg_5), &startup__conv0_STATE_VARIABLE_ModuleProcs_19);
    }
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv1_STATE_VARIABLE_CallSiteStatics_17));
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv0_STATE_VARIABLE_ModuleProcs_19));
  }
}

static void MR_CALL 
startup__startup_11_p_0(
  MR_String startup__Machine_12,
  MR_String startup__ScriptName_13,
  MR_String startup__DataFileName_14,
  MR_Word startup__Canonical_15,
  MR_Word startup__MaybeOutputStream_16,
  MR_Word startup__DumpStages_17,
  MR_Word startup__DumpOptions_18,
  MR_Word startup__InitDeep0_19,
  MR_Word * startup__STATE_VARIABLE_Deep_93)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__TypeInfo_296_296;
    MR_Word startup__TypeCtorInfo_297_297;
    MR_Word startup__TypeInfo_298_298;
    MR_Word startup__TypeCtorInfo_299_299;
    MR_Word startup__TypeInfo_310_310;
    MR_Word startup__TypeInfo_311_311;
    MR_Word startup__TypeCtorInfo_312_312;
    MR_Word startup__TypeCtorInfo_317_317;
    MR_Word startup__TypeInfo_319_319;
    MR_Word startup__TypeInfo_331_331;
    MR_Word startup__TypeCtorInfo_343_343;
    MR_Word startup__TypeCtorInfo_356_356;
    MR_Word startup__TypeCtorInfo_357_357;
    MR_Word startup__TypeInfo_363_363;
    MR_Word startup__TypeCtorInfo_369_369;
    MR_Word startup__InitStats_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 0)));
    MR_Word startup__Root_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 1)));
    MR_ArrayPtr startup__CallSiteDynamics0_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 2)));
    MR_ArrayPtr startup__ProcDynamics_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 3)));
    MR_ArrayPtr startup__CallSiteStatics0_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 4)));
    MR_ArrayPtr startup__ProcStatics0_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 5)));
    MR_ArrayPtr startup__CallSiteStatics_28;
    MR_Word startup__ModuleProcs_29;
    MR_Word startup__ModuleDataMap0_30;
    MR_ArrayPtr startup__CallSiteDynamics_31;
    MR_ArrayPtr startup__ProcStatics_32;
    MR_Word startup__InitDeep1_33;
    MR_Word startup__InitDeep_34;
    MR_Integer startup__PDMax_35;
    MR_Integer startup__NPDs_36;
    MR_Integer startup__CSDMax_37;
    MR_Integer startup__NCSDs_38;
    MR_Integer startup__PSMax_39;
    MR_Integer startup__NPSs_40;
    MR_Integer startup__CSSMax_41;
    MR_Integer startup__NCSSs_42;
    MR_Word startup__CliqueList_43;
    MR_ArrayPtr startup__Cliques_44;
    MR_ArrayPtr startup__CliqueIndex_45;
    MR_Integer startup__CliqueMax_46;
    MR_Integer startup__NCliques_47;
    MR_ArrayPtr startup__CliqueParents0_48;
    MR_ArrayPtr startup__CliqueMaybeChildren0_49;
    MR_ArrayPtr startup__CliqueParents_50;
    MR_ArrayPtr startup__CliqueMaybeChildren_51;
    MR_ArrayPtr startup__ProcCallers0_52;
    MR_ArrayPtr startup__ProcCallers_53;
    MR_ArrayPtr startup__CallSiteStaticMap0_54;
    MR_ArrayPtr startup__CallSiteStaticMap_55;
    MR_ArrayPtr startup__CallSiteCalls0_56;
    MR_ArrayPtr startup__CallSiteCalls_57;
    MR_String startup__ProgRepFileName_58;
    MR_Word startup__ProgRepResult_59;
    MR_Word startup__MaybeProcRepFile_61;
    MR_Word startup__ModuleDataMap_65;
    MR_String startup__ContourFileName_71;
    MR_String startup__TryMsg_72;
    MR_Word startup__ExcludeFile_73;
    MR_Word startup__ExcludeContents_75;
    MR_ArrayPtr startup__CSDDesc0_80;
    MR_ArrayPtr startup__PDOwn0_81;
    MR_ArrayPtr startup__PDOwn_82;
    MR_ArrayPtr startup__PDDesc0_83;
    MR_ArrayPtr startup__PSOwn0_84;
    MR_ArrayPtr startup__PSDesc0_85;
    MR_ArrayPtr startup__CSSOwn0_86;
    MR_ArrayPtr startup__CSSDesc0_87;
    MR_ArrayPtr startup__PDCompTable0_88;
    MR_ArrayPtr startup__CSDCompTable0_89;
    MR_Word startup__CoverageDataType_90;
    MR_Word startup__Var_99;
    MR_ArrayPtr startup__Var_103;
    MR_Word startup__Var_104;
    MR_ArrayPtr startup__Var_112;
    MR_ArrayPtr startup__Var_113;
    MR_ArrayPtr startup__Var_128;
    MR_ArrayPtr startup__Var_130;
    MR_ArrayPtr startup__Var_132;
    MR_ArrayPtr startup__Var_134;
    MR_Word startup__Var_152;
    MR_Word startup__Var_159;
    MR_Word startup__Var_167;
    MR_Word startup__Var_173;
    MR_Word startup__Var_174;
    MR_Word startup__Var_212;
    MR_Word startup__Var_213;
    MR_Word startup__Var_215;
    MR_Word startup__Var_216;
    MR_Word startup__Var_217;
    MR_Word startup__Var_218;
    MR_Word startup__Var_219;
    MR_Word startup__Var_220;
    MR_Word startup__Var_221;
    MR_Word startup__Var_222;
    MR_Word startup__Var_225;
    MR_Word startup__STATE_VARIABLE_Deep_243_243;
    MR_Word startup__STATE_VARIABLE_Deep_246_246;
    MR_String startup__Var_375;
    MR_Box startup__conv2_Var_103;
    MR_Box startup__conv4_CallSiteStatics_28;
    MR_Box startup__conv3_ModuleProcs_29;
    MR_Box startup__conv8_Var_112;
    MR_Box startup__conv9_Var_113;
    MR_Box startup__conv11_CallSiteDynamics_31;
    MR_Box startup__conv10_ProcStatics_32;
    MR_Word startup__Var_256;
    MR_Word startup__Var_257;
    MR_ArrayPtr startup__Var_258;
    MR_ArrayPtr startup__Var_259;
    MR_ArrayPtr startup__Var_260;
    MR_Word startup__Var_261;
    MR_Word startup__Var_262;
    MR_ArrayPtr startup__Var_263;
    MR_ArrayPtr startup__Var_264;
    MR_ArrayPtr startup__Var_265;
    MR_Word startup__Var_266;
    MR_Word startup__Var_267;
    MR_ArrayPtr startup__Var_268;
    MR_ArrayPtr startup__Var_269;
    MR_ArrayPtr startup__Var_270;
    MR_Word startup__Var_271;
    MR_Word startup__Var_272;
    MR_ArrayPtr startup__Var_273;
    MR_ArrayPtr startup__Var_274;
    MR_ArrayPtr startup__Var_275;
    MR_ArrayPtr startup__conv12_CliqueParents0_48;
    MR_ArrayPtr startup__conv13_CliqueMaybeChildren0_49;
    MR_Box startup__conv17_CliqueParents_50;
    MR_Box startup__conv16_CliqueMaybeChildren_51;
    MR_ArrayPtr startup__conv18_ProcCallers0_52;
    MR_Box startup__conv20_ProcCallers_53;
    MR_ArrayPtr startup__conv21_CallSiteStaticMap0_54;
    MR_Box startup__conv23_CallSiteStaticMap_55;
    MR_ArrayPtr startup__conv24_CallSiteCalls0_56;
    MR_Box startup__conv26_CallSiteCalls_57;
    MR_String startup__Var_74;
    MR_ArrayPtr startup__conv29_CSDDesc0_80;
    MR_ArrayPtr startup__conv30_PDOwn0_81;
    MR_Box startup__conv32_PDOwn_82;
    MR_ArrayPtr startup__conv33_PDDesc0_83;
    MR_ArrayPtr startup__conv34_PSOwn0_84;
    MR_ArrayPtr startup__conv35_PSDesc0_85;
    MR_ArrayPtr startup__conv36_CSSOwn0_86;
    MR_ArrayPtr startup__conv37_CSSDesc0_87;
    MR_ArrayPtr startup__conv38_PDCompTable0_88;
    MR_ArrayPtr startup__conv39_CSDCompTable0_89;
    MR_String startup__Var_276;
    MR_Integer startup__Var_277;
    MR_Integer startup__Var_278;
    MR_Integer startup__Var_279;
    MR_Integer startup__Var_280;
    MR_Integer startup__Var_281;
    MR_Integer startup__Var_282;
    MR_Integer startup__Var_283;
    MR_Integer startup__Var_284;
    MR_Integer startup__Var_285;
    MR_Word startup__Var_286;

    {
      startup__Var_99 = dump__default_dump_options_0_f_0();
    }
    {
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(startup__InitDeep0_19, startup__Var_99, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 0);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Mapping static call sites to containing procedures...\n");
    }
    startup__TypeInfo_296_296 = (MR_Word) &startup_scalar_common_1[0];
    {
      startup__conv2_Var_103 = array_util__u_1_f_0(startup__TypeInfo_296_296, ((MR_Box) (startup__CallSiteStatics0_26)));
    }
    startup__Var_103 = ((MR_ArrayPtr) startup__conv2_Var_103);
    startup__TypeCtorInfo_297_297 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    startup__TypeInfo_298_298 = (MR_Word) &startup_scalar_common_1[1];
    {
      startup__Var_104 = mercury__map__init_0_f_0(startup__TypeCtorInfo_297_297, startup__TypeInfo_298_298);
    }
    startup__TypeCtorInfo_299_299 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
    {
      array_util__array_foldl2_from_1_6_p_1(startup__TypeCtorInfo_299_299, startup__TypeInfo_296_296, (MR_Word) &startup_scalar_common_2[0], (MR_Word) &startup_scalar_common_2[4], (MR_ArrayPtr) startup__ProcStatics0_27, ((MR_Box) (startup__Var_103)), &startup__conv4_CallSiteStatics_28, ((MR_Box) (startup__Var_104)), &startup__conv3_ModuleProcs_29);
    }
    startup__CallSiteStatics_28 = ((MR_ArrayPtr) startup__conv4_CallSiteStatics_28);
    startup__ModuleProcs_29 = ((MR_Word) startup__conv3_ModuleProcs_29);
    {
      startup__ModuleDataMap0_30 = mercury__map__map_values_only_2_f_0(startup__TypeInfo_298_298, (MR_Word) &profile__profile__type_ctor_info_module_data_0, startup__TypeCtorInfo_297_297, (MR_Word) &startup_scalar_common_2[5], startup__ModuleProcs_29);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
    {
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Mapping dynamic call sites to containing procedures...\n");
    }
    startup__TypeInfo_310_310 = (MR_Word) &startup_scalar_common_1[2];
    {
      startup__conv8_Var_112 = array_util__u_1_f_0(startup__TypeInfo_310_310, ((MR_Box) (startup__CallSiteDynamics0_24)));
    }
    startup__Var_112 = ((MR_ArrayPtr) startup__conv8_Var_112);
    startup__TypeInfo_311_311 = (MR_Word) &startup_scalar_common_1[3];
    {
      startup__conv9_Var_113 = array_util__u_1_f_0(startup__TypeInfo_311_311, ((MR_Box) (startup__ProcStatics0_27)));
    }
    startup__Var_113 = ((MR_ArrayPtr) startup__conv9_Var_113);
    startup__TypeCtorInfo_312_312 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
    {
      array_util__array_foldl2_from_1_6_p_1(startup__TypeCtorInfo_312_312, startup__TypeInfo_310_310, startup__TypeInfo_311_311, (MR_Word) &startup_scalar_common_2[6], (MR_ArrayPtr) startup__ProcDynamics_25, ((MR_Box) (startup__Var_112)), &startup__conv11_CallSiteDynamics_31, ((MR_Box) (startup__Var_113)), &startup__conv10_ProcStatics_32);
    }
    startup__CallSiteDynamics_31 = ((MR_ArrayPtr) startup__conv11_CallSiteDynamics_31);
    startup__ProcStatics_32 = ((MR_ArrayPtr) startup__conv10_ProcStatics_32);
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
    {
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
    {
      startup__InitDeep1_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 0) = ((MR_Box) (startup__InitStats_22));
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 1) = ((MR_Box) (startup__Root_23));
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 2) = ((MR_Box) (startup__CallSiteDynamics_31));
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 3) = ((MR_Box) (startup__ProcDynamics_25));
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 4) = ((MR_Box) (startup__CallSiteStatics_28));
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 5) = ((MR_Box) (startup__ProcStatics_32));
    }
    {
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(startup__InitDeep1_33, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 10);
    }
    switch (startup__Canonical_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        startup__InitDeep_34 = startup__InitDeep1_33;
        break;
      case (MR_Integer) 1:
        {
          {
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Canonicalizing cliques...\n");
          }
          {
            canonical__canonicalize_cliques_2_p_0(startup__InitDeep1_33, &startup__InitDeep_34);
          }
          {
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
          }
          {
            startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
          }
        }
        break;
    }
    {
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(startup__InitDeep_34, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 20);
    }
    startup__Var_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 0)));
    startup__Var_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 1)));
    startup__Var_258 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 2)));
    startup__Var_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 3)));
    startup__Var_259 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 4)));
    startup__Var_260 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 5)));
    {
      mercury__array__max_2_p_0(startup__TypeCtorInfo_312_312, (MR_ArrayPtr) startup__Var_128, &startup__PDMax_35);
    }
    startup__NPDs_36 = (startup__PDMax_35 + (MR_Integer) 1);
    startup__Var_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 0)));
    startup__Var_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 1)));
    startup__Var_130 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 2)));
    startup__Var_263 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 3)));
    startup__Var_264 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 4)));
    startup__Var_265 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 5)));
    startup__TypeCtorInfo_317_317 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
    {
      mercury__array__max_2_p_0(startup__TypeCtorInfo_317_317, (MR_ArrayPtr) startup__Var_130, &startup__CSDMax_37);
    }
    startup__NCSDs_38 = (startup__CSDMax_37 + (MR_Integer) 1);
    startup__Var_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 0)));
    startup__Var_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 1)));
    startup__Var_268 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 2)));
    startup__Var_269 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 3)));
    startup__Var_270 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 4)));
    startup__Var_132 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 5)));
    {
      mercury__array__max_2_p_0(startup__TypeCtorInfo_299_299, (MR_ArrayPtr) startup__Var_132, &startup__PSMax_39);
    }
    startup__NPSs_40 = (startup__PSMax_39 + (MR_Integer) 1);
    startup__Var_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 0)));
    startup__Var_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 1)));
    startup__Var_273 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 2)));
    startup__Var_274 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 3)));
    startup__Var_134 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 4)));
    startup__Var_275 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 5)));
    {
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_ArrayPtr) startup__Var_134, &startup__CSSMax_41);
    }
    startup__NCSSs_42 = (startup__CSSMax_41 + (MR_Integer) 1);
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Finding cliques...\n");
    }
    {
      callgraph__find_cliques_2_p_0(startup__InitDeep_34, &startup__CliqueList_43);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
    {
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Constructing clique indexes...\n");
    }
    {
      callgraph__make_clique_indexes_4_p_0(startup__NPDs_36, startup__CliqueList_43, &startup__Cliques_44, &startup__CliqueIndex_45);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
    {
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Constructing clique parent map...\n");
    }
    startup__TypeInfo_319_319 = (MR_Word) &startup_scalar_common_1[4];
    {
      mercury__array__max_2_p_0(startup__TypeInfo_319_319, (MR_ArrayPtr) startup__Cliques_44, &startup__CliqueMax_46);
    }
    startup__NCliques_47 = (startup__CliqueMax_46 + (MR_Integer) 1);
    {
      mercury__array__init_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__NCliques_47, ((MR_Box) (((MR_Box) ((MR_Integer) -1)))), &startup__conv12_CliqueParents0_48);
    }
    startup__CliqueParents0_48 = (MR_ArrayPtr) startup__conv12_CliqueParents0_48;
    {
      mercury__array__init_3_p_0((MR_Word) &startup_scalar_common_1[5], startup__NCSDs_38, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv13_CliqueMaybeChildren0_49);
    }
    startup__CliqueMaybeChildren0_49 = (MR_ArrayPtr) startup__conv13_CliqueMaybeChildren0_49;
    {
      startup__Var_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__Var_152, 0) = ((MR_Box) (&startup_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), startup__Var_152, 1) = ((MR_Box) (startup__startup_11_p_0_4));
      MR_hl_field(MR_mktag(0), startup__Var_152, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), startup__Var_152, 3) = ((MR_Box) (startup__InitDeep_34));
      MR_hl_field(MR_mktag(0), startup__Var_152, 4) = ((MR_Box) (startup__CliqueIndex_45));
    }
    {
      array_util__array_foldl2_from_1_6_p_1((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_Word) &startup_scalar_common_1[6], (MR_Word) &startup_scalar_common_1[7], startup__Var_152, (MR_ArrayPtr) startup__CliqueIndex_45, ((MR_Box) (startup__CliqueParents0_48)), &startup__conv17_CliqueParents_50, ((MR_Box) (startup__CliqueMaybeChildren0_49)), &startup__conv16_CliqueMaybeChildren_51);
    }
    startup__CliqueParents_50 = ((MR_ArrayPtr) startup__conv17_CliqueParents_50);
    startup__CliqueMaybeChildren_51 = ((MR_ArrayPtr) startup__conv16_CliqueMaybeChildren_51);
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
    {
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Finding procedure callers...\n");
    }
    startup__TypeInfo_331_331 = (MR_Word) &startup_scalar_common_1[8];
    {
      mercury__array__init_3_p_0(startup__TypeInfo_331_331, startup__NPSs_40, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv18_ProcCallers0_52);
    }
    startup__ProcCallers0_52 = (MR_ArrayPtr) startup__conv18_ProcCallers0_52;
    {
      startup__Var_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__Var_159, 0) = ((MR_Box) (&startup_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), startup__Var_159, 1) = ((MR_Box) (startup__startup_11_p_0_5));
      MR_hl_field(MR_mktag(0), startup__Var_159, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), startup__Var_159, 3) = ((MR_Box) (startup__InitDeep_34));
    }
    {
      array_util__array_foldl_from_1_4_p_1(startup__TypeCtorInfo_317_317, (MR_Word) &startup_scalar_common_1[9], startup__Var_159, (MR_ArrayPtr) startup__CallSiteDynamics_31, ((MR_Box) (startup__ProcCallers0_52)), &startup__conv20_ProcCallers_53);
    }
    startup__ProcCallers_53 = ((MR_ArrayPtr) startup__conv20_ProcCallers_53);
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
    {
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Constructing call site static map...\n");
    }
    {
      mercury__array__init_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, startup__NCSDs_38, ((MR_Box) (((MR_Box) ((MR_Integer) -1)))), &startup__conv21_CallSiteStaticMap0_54);
    }
    startup__CallSiteStaticMap0_54 = (MR_ArrayPtr) startup__conv21_CallSiteStaticMap0_54;
    {
      startup__Var_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__Var_167, 0) = ((MR_Box) (&startup_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), startup__Var_167, 1) = ((MR_Box) (startup__startup_11_p_0_6));
      MR_hl_field(MR_mktag(0), startup__Var_167, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), startup__Var_167, 3) = ((MR_Box) (startup__InitDeep_34));
    }
    {
      array_util__array_foldl_from_1_4_p_1(startup__TypeCtorInfo_312_312, (MR_Word) &startup_scalar_common_1[10], startup__Var_167, (MR_ArrayPtr) startup__ProcDynamics_25, ((MR_Box) (startup__CallSiteStaticMap0_54)), &startup__conv23_CallSiteStaticMap_55);
    }
    startup__CallSiteStaticMap_55 = ((MR_ArrayPtr) startup__conv23_CallSiteStaticMap_55);
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
    {
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Finding call site calls...\n");
    }
    startup__TypeCtorInfo_343_343 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
    {
      startup__Var_173 = mercury__map__init_0_f_0(startup__TypeCtorInfo_343_343, startup__TypeInfo_331_331);
    }
    {
      mercury__array__init_3_p_0((MR_Word) &startup_scalar_common_2[1], startup__NCSSs_42, ((MR_Box) (startup__Var_173)), &startup__conv24_CallSiteCalls0_56);
    }
    startup__CallSiteCalls0_56 = (MR_ArrayPtr) startup__conv24_CallSiteCalls0_56;
    {
      startup__Var_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), startup__Var_174, 0) = ((MR_Box) (&startup_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), startup__Var_174, 1) = ((MR_Box) (startup__startup_11_p_0_7));
      MR_hl_field(MR_mktag(0), startup__Var_174, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), startup__Var_174, 3) = ((MR_Box) (startup__InitDeep_34));
    }
    {
      array_util__array_foldl_from_1_4_p_1(startup__TypeCtorInfo_312_312, (MR_Word) &startup_scalar_common_1[11], startup__Var_174, (MR_ArrayPtr) startup__ProcDynamics_25, ((MR_Box) (startup__CallSiteCalls0_56)), &startup__conv26_CallSiteCalls_57);
    }
    startup__CallSiteCalls_57 = ((MR_ArrayPtr) startup__conv26_CallSiteCalls_57);
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
    {
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
    {
      startup__ProgRepFileName_58 = startup__make_progrep_filename_1_f_0(startup__DataFileName_14);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Reading program representation...\n");
    }
    {
      mdbcomp__program_representation__read_prog_rep_file_4_p_0(startup__ProgRepFileName_58, &startup__ProgRepResult_59);
    }
    if (((MR_tag((MR_Word) startup__ProgRepResult_59)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word startup__Error_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__ProgRepResult_59, (MR_Integer) 0)));
        MR_Word startup__OpenProgRepResult_67;

        {
          mercury__io__open_input_4_p_0(startup__ProgRepFileName_58, &startup__OpenProgRepResult_67);
        }
        if (((MR_tag((MR_Word) startup__OpenProgRepResult_67)) == (MR_mktag((MR_Integer) 1))))
          {
            startup__MaybeProcRepFile_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            startup__ModuleDataMap_65 = startup__ModuleDataMap0_30;
          }
        else
          {
            MR_Word startup__ProgRepStream_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__OpenProgRepResult_67, (MR_Integer) 0)));
            MR_String startup__ErrorMessage_69;
            MR_String startup__Var_183;
            MR_String startup__Var_186;
            MR_Word startup__Var_188;

            {
              mercury__io__close_input_3_p_0(startup__ProgRepStream_68);
            }
            {
              startup__ErrorMessage_69 = mercury__io__error_message_1_f_0(startup__Error_66);
            }
            {
              startup__Var_186 = mercury__string__f_43_43_2_f_0(startup__ErrorMessage_69, (MR_String) "\n");
            }
            {
              startup__Var_183 = mercury__string__f_43_43_2_f_0((MR_String) "% Error: ", startup__Var_186);
            }
            {
              startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, startup__Var_183);
            }
            {
              startup__Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), startup__Var_188, 0) = ((MR_Box) (startup__ErrorMessage_69));
            }
            {
              startup__MaybeProcRepFile_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), startup__MaybeProcRepFile_61, 0) = ((MR_Box) (startup__Var_188));
            }
            startup__ModuleDataMap_65 = startup__ModuleDataMap0_30;
          }
      }
    else
      {
        MR_Word startup__ProgRep_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ProgRepResult_59, (MR_Integer) 0)));
        MR_Word startup__ModuleMap_62;
        MR_Word startup__ProgRepModules_63;
        MR_Word startup__Var_191;
        MR_Box startup__conv28_ModuleDataMap_65;

        {
          startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
        }
        {
          startup__Var_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), startup__Var_191, 0) = ((MR_Box) (startup__ProgRep_60));
        }
        {
          startup__MaybeProcRepFile_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), startup__MaybeProcRepFile_61, 0) = ((MR_Box) (startup__Var_191));
        }
        startup__ModuleMap_62 = (MR_Word) startup__ProgRep_60;
        {
          mercury__map__keys_2_p_0(startup__TypeCtorInfo_297_297, (MR_Word) &startup_scalar_common_1[12], startup__ModuleMap_62, &startup__ProgRepModules_63);
        }
        if ((startup__MaybeOutputStream_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word startup__OutputStream_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__MaybeOutputStream_16, (MR_Integer) 0)));

            {
              mercury__io__write_4_p_0((MR_Word) &startup_scalar_common_1[13], startup__OutputStream_64, ((MR_Box) (startup__ProgRepModules_63)));
            }
            {
              mercury__io__nl_3_p_0(startup__OutputStream_64);
            }
          }
        {
          mercury__list__foldl_4_p_0(startup__TypeCtorInfo_297_297, (MR_Word) &startup_scalar_common_2[2], (MR_Word) &startup_scalar_common_2[7], startup__ProgRepModules_63, ((MR_Box) (startup__ModuleDataMap0_30)), &startup__conv28_ModuleDataMap_65);
        }
        startup__ModuleDataMap_65 = ((MR_Word) startup__conv28_ModuleDataMap_65);
      }
    {
      startup__ContourFileName_71 = startup__contour_file_name_1_f_0(startup__DataFileName_14);
    }
    {
      startup__Var_375 = mercury__string__f_43_43_2_f_0(startup__ContourFileName_71, (MR_String) "\'...\n");
    }
    {
      startup__TryMsg_72 = mercury__string__f_43_43_2_f_0((MR_String) "% Trying to read contour exclusion file \140", startup__Var_375);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, startup__TryMsg_72);
    }
    {
      exclude__read_exclude_file_5_p_0(startup__ContourFileName_71, startup__ModuleDataMap_65, &startup__ExcludeFile_73);
    }
    startup__Var_74 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__ExcludeFile_73, (MR_Integer) 0)));
    startup__ExcludeContents_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ExcludeFile_73, (MR_Integer) 1)));
    switch (MR_tag((MR_Word) startup__ExcludeContents_75)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Couldn\'t open file.\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String startup__ExcludeError_76 = ((MR_String) (MR_hl_field(MR_mktag(1), startup__ExcludeContents_75, (MR_Integer) 0)));
          MR_String startup__ExcludeErrorMsg_77;
          MR_String startup__Var_378;

          {
            startup__Var_378 = mercury__string__f_43_43_2_f_0(startup__ExcludeError_76, (MR_String) ".\n");
          }
          {
            startup__ExcludeErrorMsg_77 = mercury__string__f_43_43_2_f_0((MR_String) "% File had unrecoverable errors:\n% ", startup__Var_378);
          }
          {
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, startup__ExcludeErrorMsg_77);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
          }
        }
        break;
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Propagating measurements up call graph...\n");
    }
    {
      startup__Var_212 = measurements__zero_inherit_prof_info_0_f_0();
    }
    startup__TypeCtorInfo_356_356 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
    {
      mercury__array__init_3_p_0(startup__TypeCtorInfo_356_356, startup__NCSDs_38, ((MR_Box) (startup__Var_212)), &startup__conv29_CSDDesc0_80);
    }
    startup__CSDDesc0_80 = (MR_ArrayPtr) startup__conv29_CSDDesc0_80;
    {
      startup__Var_213 = measurements__zero_own_prof_info_0_f_0();
    }
    startup__TypeCtorInfo_357_357 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
    {
      mercury__array__init_3_p_0(startup__TypeCtorInfo_357_357, startup__NPDs_36, ((MR_Box) (startup__Var_213)), &startup__conv30_PDOwn0_81);
    }
    startup__PDOwn0_81 = (MR_ArrayPtr) startup__conv30_PDOwn0_81;
    {
      array_util__array_foldl_from_1_4_p_1(startup__TypeCtorInfo_317_317, (MR_Word) &startup_scalar_common_1[14], (MR_Word) &startup_scalar_common_2[8], (MR_ArrayPtr) startup__CallSiteDynamics_31, ((MR_Box) (startup__PDOwn0_81)), &startup__conv32_PDOwn_82);
    }
    startup__PDOwn_82 = ((MR_ArrayPtr) startup__conv32_PDOwn_82);
    {
      startup__Var_215 = measurements__zero_inherit_prof_info_0_f_0();
    }
    {
      mercury__array__init_3_p_0(startup__TypeCtorInfo_356_356, startup__NPDs_36, ((MR_Box) (startup__Var_215)), &startup__conv33_PDDesc0_83);
    }
    startup__PDDesc0_83 = (MR_ArrayPtr) startup__conv33_PDDesc0_83;
    {
      startup__Var_216 = measurements__zero_own_prof_info_0_f_0();
    }
    {
      mercury__array__init_3_p_0(startup__TypeCtorInfo_357_357, startup__NPSs_40, ((MR_Box) (startup__Var_216)), &startup__conv34_PSOwn0_84);
    }
    startup__PSOwn0_84 = (MR_ArrayPtr) startup__conv34_PSOwn0_84;
    {
      startup__Var_217 = measurements__zero_inherit_prof_info_0_f_0();
    }
    {
      mercury__array__init_3_p_0(startup__TypeCtorInfo_356_356, startup__NPSs_40, ((MR_Box) (startup__Var_217)), &startup__conv35_PSDesc0_85);
    }
    startup__PSDesc0_85 = (MR_ArrayPtr) startup__conv35_PSDesc0_85;
    {
      startup__Var_218 = measurements__zero_own_prof_info_0_f_0();
    }
    {
      mercury__array__init_3_p_0(startup__TypeCtorInfo_357_357, startup__NCSSs_42, ((MR_Box) (startup__Var_218)), &startup__conv36_CSSOwn0_86);
    }
    startup__CSSOwn0_86 = (MR_ArrayPtr) startup__conv36_CSSOwn0_86;
    {
      startup__Var_219 = measurements__zero_inherit_prof_info_0_f_0();
    }
    {
      mercury__array__init_3_p_0(startup__TypeCtorInfo_356_356, startup__NCSSs_42, ((MR_Box) (startup__Var_219)), &startup__conv37_CSSDesc0_87);
    }
    startup__CSSDesc0_87 = (MR_ArrayPtr) startup__conv37_CSSDesc0_87;
    {
      startup__Var_220 = mercury__map__init_0_f_0(startup__TypeCtorInfo_343_343, startup__TypeCtorInfo_356_356);
    }
    startup__TypeInfo_363_363 = (MR_Word) &startup_scalar_common_2[3];
    {
      mercury__array__init_3_p_0(startup__TypeInfo_363_363, startup__NPDs_36, ((MR_Box) (startup__Var_220)), &startup__conv38_PDCompTable0_88);
    }
    startup__PDCompTable0_88 = (MR_ArrayPtr) startup__conv38_PDCompTable0_88;
    {
      startup__Var_221 = mercury__map__init_0_f_0(startup__TypeCtorInfo_343_343, startup__TypeCtorInfo_356_356);
    }
    {
      mercury__array__init_3_p_0(startup__TypeInfo_363_363, startup__NCSDs_38, ((MR_Box) (startup__Var_221)), &startup__conv39_CSDCompTable0_89);
    }
    startup__CSDCompTable0_89 = (MR_ArrayPtr) startup__conv39_CSDCompTable0_89;
    startup__Var_276 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 0)));
    startup__Var_277 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 1)));
    startup__Var_278 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 2)));
    startup__Var_279 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 3)));
    startup__Var_280 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 4)));
    startup__Var_281 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 5)));
    startup__Var_282 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 6)));
    startup__Var_283 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 7)));
    startup__Var_284 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 8)));
    startup__Var_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 9)));
    startup__Var_285 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__Var_222, (MR_Integer) 0)));
    startup__Var_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Var_222, (MR_Integer) 1)));
    startup__CoverageDataType_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Var_222, (MR_Integer) 3)));
    startup__Var_225 = (MR_Word) &startup_scalar_common_2[9];
    startup__TypeCtorInfo_369_369 = (MR_Word) &profile__profile__type_ctor_info_deep_0;
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
    {
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
    switch (startup__CoverageDataType_90) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word startup__MaybeStaticCoverage0_91;
          MR_ArrayPtr startup__StaticCoverage0_92;
          MR_Word startup__Var_223;
          MR_Word startup__STATE_VARIABLE_Deep_224_224;
          MR_Word startup__STATE_VARIABLE_Deep_226_226;
          MR_ArrayPtr startup__conv41_StaticCoverage0_92;
          MR_Box startup__conv42_STATE_VARIABLE_Deep_226_226;

          {
            startup__Var_223 = measurements__zero_static_coverage_0_f_0();
          }
          {
            mercury__array__init_3_p_0((MR_Word) &startup_scalar_common_1[16], startup__NPSs_40, ((MR_Box) (startup__Var_223)), &startup__conv41_StaticCoverage0_92);
          }
          startup__StaticCoverage0_92 = (MR_ArrayPtr) startup__conv41_StaticCoverage0_92;
          {
            startup__MaybeStaticCoverage0_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), startup__MaybeStaticCoverage0_91, 0) = ((MR_Box) (startup__StaticCoverage0_92));
          }
          {
            startup__STATE_VARIABLE_Deep_224_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 0) = ((MR_Box) (startup__InitStats_22));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 1) = ((MR_Box) (startup__Machine_12));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 2) = ((MR_Box) (startup__ScriptName_13));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 3) = ((MR_Box) (startup__DataFileName_14));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 4) = ((MR_Box) (startup__Root_23));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 5) = ((MR_Box) (startup__CallSiteDynamics_31));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 6) = ((MR_Box) (startup__ProcDynamics_25));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 7) = ((MR_Box) (startup__CallSiteStatics_28));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 8) = ((MR_Box) (startup__ProcStatics_32));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 9) = ((MR_Box) (startup__CliqueIndex_45));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 10) = ((MR_Box) (startup__Cliques_44));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 11) = ((MR_Box) (startup__CliqueParents_50));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 12) = ((MR_Box) (startup__CliqueMaybeChildren_51));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 13) = ((MR_Box) (startup__ProcCallers_53));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 14) = ((MR_Box) (startup__CallSiteStaticMap_55));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 15) = ((MR_Box) (startup__CallSiteCalls_57));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 16) = ((MR_Box) (startup__PDOwn_82));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 17) = ((MR_Box) (startup__PDDesc0_83));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 18) = ((MR_Box) (startup__CSDDesc0_80));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 19) = ((MR_Box) (startup__PSOwn0_84));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 20) = ((MR_Box) (startup__PSDesc0_85));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 21) = ((MR_Box) (startup__CSSOwn0_86));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 22) = ((MR_Box) (startup__CSSDesc0_87));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 23) = ((MR_Box) (startup__PDCompTable0_88));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 24) = ((MR_Box) (startup__CSDCompTable0_89));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 25) = ((MR_Box) (startup__ModuleDataMap_65));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 26) = ((MR_Box) (startup__MaybeStaticCoverage0_91));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 27) = ((MR_Box) (startup__ExcludeFile_73));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 28) = ((MR_Box) (startup__MaybeProcRepFile_61));
          }
          {
            array_util__array_foldl_from_1_4_p_1(startup__TypeInfo_319_319, startup__TypeCtorInfo_369_369, startup__Var_225, (MR_ArrayPtr) startup__Cliques_44, ((MR_Box) (startup__STATE_VARIABLE_Deep_224_224)), &startup__conv42_STATE_VARIABLE_Deep_226_226);
          }
          startup__STATE_VARIABLE_Deep_226_226 = ((MR_Word) startup__conv42_STATE_VARIABLE_Deep_226_226);
          {
            startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(startup__STATE_VARIABLE_Deep_226_226, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 30);
          }
          {
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Summarizing information...\n");
          }
          switch (startup__CoverageDataType_90) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              {
                {
                  startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing proc dynamics with coverage...\n");
                }
                {
                  startup__summarize_proc_dynamics_with_coverage_data_2_p_0(startup__STATE_VARIABLE_Deep_226_226, &startup__STATE_VARIABLE_Deep_243_243);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word startup__STATE_VARIABLE_Deep_240_240;

                {
                  startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing static coverage...\n");
                }
                {
                  startup__summarize_proc_statics_coverage_2_p_0(startup__STATE_VARIABLE_Deep_226_226, &startup__STATE_VARIABLE_Deep_240_240);
                }
                {
                  startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing proc dynamics...\n");
                }
                {
                  startup__summarize_proc_dynamics_2_p_0(startup__STATE_VARIABLE_Deep_240_240, &startup__STATE_VARIABLE_Deep_243_243);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word startup__STATE_VARIABLE_Deep_224_381;
          MR_Word startup__STATE_VARIABLE_Deep_240_386;
          MR_Box startup__conv43_STATE_VARIABLE_Deep_240_386;

          {
            startup__STATE_VARIABLE_Deep_224_381 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 0) = ((MR_Box) (startup__InitStats_22));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 1) = ((MR_Box) (startup__Machine_12));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 2) = ((MR_Box) (startup__ScriptName_13));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 3) = ((MR_Box) (startup__DataFileName_14));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 4) = ((MR_Box) (startup__Root_23));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 5) = ((MR_Box) (startup__CallSiteDynamics_31));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 6) = ((MR_Box) (startup__ProcDynamics_25));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 7) = ((MR_Box) (startup__CallSiteStatics_28));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 8) = ((MR_Box) (startup__ProcStatics_32));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 9) = ((MR_Box) (startup__CliqueIndex_45));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 10) = ((MR_Box) (startup__Cliques_44));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 11) = ((MR_Box) (startup__CliqueParents_50));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 12) = ((MR_Box) (startup__CliqueMaybeChildren_51));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 13) = ((MR_Box) (startup__ProcCallers_53));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 14) = ((MR_Box) (startup__CallSiteStaticMap_55));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 15) = ((MR_Box) (startup__CallSiteCalls_57));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 16) = ((MR_Box) (startup__PDOwn_82));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 17) = ((MR_Box) (startup__PDDesc0_83));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 18) = ((MR_Box) (startup__CSDDesc0_80));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 19) = ((MR_Box) (startup__PSOwn0_84));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 20) = ((MR_Box) (startup__PSDesc0_85));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 21) = ((MR_Box) (startup__CSSOwn0_86));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 22) = ((MR_Box) (startup__CSSDesc0_87));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 23) = ((MR_Box) (startup__PDCompTable0_88));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 24) = ((MR_Box) (startup__CSDCompTable0_89));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 25) = ((MR_Box) (startup__ModuleDataMap_65));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 26) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 27) = ((MR_Box) (startup__ExcludeFile_73));
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 28) = ((MR_Box) (startup__MaybeProcRepFile_61));
          }
          {
            array_util__array_foldl_from_1_4_p_1(startup__TypeInfo_319_319, startup__TypeCtorInfo_369_369, startup__Var_225, (MR_ArrayPtr) startup__Cliques_44, ((MR_Box) (startup__STATE_VARIABLE_Deep_224_381)), &startup__conv43_STATE_VARIABLE_Deep_240_386);
          }
          startup__STATE_VARIABLE_Deep_240_386 = ((MR_Word) startup__conv43_STATE_VARIABLE_Deep_240_386);
          {
            startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(startup__STATE_VARIABLE_Deep_240_386, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 30);
          }
          {
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Summarizing information...\n");
          }
          {
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing proc dynamics...\n");
          }
          {
            startup__summarize_proc_dynamics_2_p_0(startup__STATE_VARIABLE_Deep_240_386, &startup__STATE_VARIABLE_Deep_243_243);
          }
        }
        break;
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing call site dynamics...\n");
    }
    {
      startup__summarize_call_site_dynamics_2_p_0(startup__STATE_VARIABLE_Deep_243_243, &startup__STATE_VARIABLE_Deep_246_246);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing modules...\n");
    }
    {
      startup__summarize_modules_2_p_0(startup__STATE_VARIABLE_Deep_246_246, startup__STATE_VARIABLE_Deep_93);
    }
    {
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
    {
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
    {
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(*startup__STATE_VARIABLE_Deep_93, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 40);
    }
  }
}

static MR_String MR_CALL 
startup__make_progrep_filename_1_f_0(
  MR_String startup__DataFileName_3)
{
  {
    MR_bool startup__succeeded;
    MR_String startup__ProgrepFileName_4;
    MR_String startup__BaseFileName_5;

    {
      startup__succeeded = mercury__string__remove_suffix_3_p_0(startup__DataFileName_3, (MR_String) ".data", &startup__BaseFileName_5);
    }
    if (startup__succeeded)
      {
        {
          startup__ProgrepFileName_4 = mercury__string__f_43_43_2_f_0(startup__BaseFileName_5, (MR_String) ".procrep");
        }
      }
    else
      {
        MR_String startup__Var_8;

        {
          startup__Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t remove suffix from deep file name: ", startup__DataFileName_3);
        }
        {
          mercury__require__error_1_p_0(startup__Var_8);
        }
      }
    return startup__ProgrepFileName_4;
  }
}

void MR_CALL 
startup__read_and_startup_10_p_0(
  MR_String startup__Machine_11,
  MR_String startup__ScriptName_12,
  MR_String startup__DataFileName_13,
  MR_Word startup__Canonical_14,
  MR_Word startup__MaybeOutputStream_15,
  MR_Word startup__DumpStages_16,
  MR_Word startup__DumpOptions_17,
  MR_Word * startup__Result_18)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__DataFileResult_20;

    {
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
    if ((startup__MaybeOutputStream_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        read_profile__read_call_graph_4_p_0(startup__DataFileName_13, &startup__DataFileResult_20);
      }
    else
      {
        MR_Word startup__OutputStream_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__MaybeOutputStream_15, (MR_Integer) 0)));

        {
          mercury__io__write_string_4_p_0(startup__OutputStream_53, (MR_String) "% Reading graph data...\n");
        }
        {
          mercury__io__flush_output_3_p_0(startup__OutputStream_53);
        }
        {
          read_profile__read_call_graph_4_p_0(startup__DataFileName_13, &startup__DataFileResult_20);
        }
        {
          mercury__io__write_string_4_p_0(startup__OutputStream_53, (MR_String) "% Done.\n");
        }
        {
          mercury__io__flush_output_3_p_0(startup__OutputStream_53);
        }
      }
    if (((MR_tag((MR_Word) startup__DataFileResult_20)) == (MR_mktag((MR_Integer) 1))))
      *startup__Result_18 = (MR_Word) startup__DataFileResult_20;
    else
      {
        MR_Word startup__InitDeep_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__DataFileResult_20, (MR_Integer) 0)));
        MR_Word startup__Deep_22;

        {
          startup__startup_11_p_0(startup__Machine_11, startup__ScriptName_12, startup__DataFileName_13, startup__Canonical_14, startup__MaybeOutputStream_15, startup__DumpStages_16, startup__DumpOptions_17, startup__InitDeep_21, &startup__Deep_22);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *startup__Result_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__Deep_22));
        }
      }
  }
}

void MR_CALL 
startup__read_and_startup_default_deep_options_9_p_0(
  MR_String startup__Machine_10,
  MR_String startup__ScriptName_11,
  MR_String startup__DataFileName_12,
  MR_Word startup__Canonical_13,
  MR_Word startup__MaybeOutputStream_14,
  MR_Word startup__DumpStages_15,
  MR_Word * startup__Res_16)
{
  {
    MR_bool startup__succeeded;
    MR_Word startup__Var_20;

    {
      startup__Var_20 = dump__default_dump_options_0_f_0();
    }
    {
      startup__read_and_startup_10_p_0(startup__Machine_10, startup__ScriptName_11, startup__DataFileName_12, startup__Canonical_13, startup__MaybeOutputStream_14, startup__DumpStages_15, startup__Var_20, startup__Res_16);
    }
  }
}

void mercury__startup__init(void)
{
}

void mercury__startup__init_type_tables(void)
{
}

void mercury__startup__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__startup__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module startup. */
