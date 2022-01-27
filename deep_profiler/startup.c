/*
** Automatically generated from `startup.m'
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


/* :- module startup. */
/* :- implementation. */

/*
INIT mercury__startup__init
ENDINIT
*/

#include "startup.mih"


#include "array.mih"
#include "array_util.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "callgraph.mih"
#include "canonical.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dump.mih"
#include "enum.mih"
#include "exclude.mih"
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
#include "random.mih"
#include "read_profile.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 90 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_0;

#line 93 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0;

#line 96 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_proc_static_ptr_0;

#line 99 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_static_ptr_0;

#line 102 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0;

#line 105 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0;

#line 108 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0;

#line 111 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 114 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0;

#line 117 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0;

#line 120 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 123 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 126 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0;

#line 129 "startup.c"
static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 132 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 135 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0;

#line 138 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0;

#line 141 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

#line 144 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 147 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0;

#line 150 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0;

#line 153 "startup.c"
static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

#line 156 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

#line 159 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__array__ti_array_1builtin__type_ctor_info_int_0;

#line 162 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

#line 165 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

#line 168 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0;

#line 397 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(
#line 397 "startup.m"
  MR_Word startup__V_61_61,
#line 397 "startup.m"
  MR_Word startup__V_62_62,
#line 397 "startup.m"
  MR_String startup__BaseName_7,
#line 397 "startup.m"
  MR_Word startup__DumpStages_8,
#line 397 "startup.m"
  MR_Integer startup__ThisStageNum_9);

#line 397 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(
#line 397 "startup.m"
  MR_Word startup__V_61_61,
#line 397 "startup.m"
  MR_Word startup__V_62_62,
#line 397 "startup.m"
  MR_String startup__BaseName_7,
#line 397 "startup.m"
  MR_Word startup__DumpStages_8,
#line 397 "startup.m"
  MR_Integer startup__ThisStageNum_9);

#line 1019 "startup.m"
static MR_Word MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_f_0(
#line 1019 "startup.m"
  MR_Word startup__OverrideComp_4);

#line 707 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_p_0(
#line 707 "startup.m"
  MR_Word startup__CSD_6,
#line 707 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PDOwnArray_0_13,
#line 707 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PDOwnArray_14);

#line 675 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(
#line 675 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_8,
#line 675 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_9,
#line 675 "startup.m"
  MR_Word startup__CSSPtr_10,
#line 675 "startup.m"
  MR_Word startup__CSDPtr_12,
#line 675 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_25,
#line 675 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_26);

#line 629 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_p_0(
#line 629 "startup.m"
  MR_Word startup__InitDeep_6,
#line 629 "startup.m"
  MR_Word startup__PD_8,
#line 629 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_18,
#line 629 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_19);

#line 614 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_p_0(
#line 614 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_7,
#line 614 "startup.m"
  MR_Word startup__CSSPtr_8,
#line 614 "startup.m"
  MR_Word startup__CSDPtr_10,
#line 614 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_12,
#line 614 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_13);

#line 574 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_p_0(
#line 574 "startup.m"
  MR_Word startup__InitDeep_6,
#line 574 "startup.m"
  MR_Word startup__PD_8,
#line 574 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_15,
#line 574 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_16);

#line 1073 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__gather_call_site_csdptrs__1073__1_1_p_0(
#line 1073 "startup.m"
  MR_Word startup__HeadVar__1_18);

#line 498 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_csd_containers_2__498__1_2_p_0(
#line 498 "startup.m"
  MR_Word startup__CallerPDPtr0_14,
#line 498 "startup.m"
  MR_Word startup__HeadVar__2_22);

#line 457 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__457__1_2_p_0(
#line 457 "startup.m"
  MR_Integer startup__SlotNum0_13,
#line 457 "startup.m"
  MR_Integer startup__HeadVar__2_27);

#line 455 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__455__1_2_p_0(
#line 455 "startup.m"
  MR_Word startup__PSPtr0_12,
#line 455 "startup.m"
  MR_Word startup__HeadVar__2_23);

#line 1102 "startup.m"
static void MR_CALL 
startup__maybe_report_msg_4_p_0(
#line 1102 "startup.m"
  MR_Word startup__HeadVar__1_1,
#line 1102 "startup.m"
  MR_String startup__Msg_2);

#line 1089 "startup.m"
static void MR_CALL 
startup__maybe_report_stats_3_p_0(
#line 1089 "startup.m"
  MR_Word startup__HeadVar__1_1);

#line 1073 "startup.m"
static MR_bool MR_CALL 
startup__gather_call_site_csdptrs_5_p_0_1(
#line 1073 "startup.m"
  MR_Box startup__closure_arg,
#line 1073 "startup.m"
  MR_Box startup__wrapper_arg_1);

#line 1055 "startup.m"
static void MR_CALL 
startup__gather_call_site_csdptrs_5_p_0(
#line 1055 "startup.m"
  MR_Word startup__Slot_6,
#line 1055 "startup.m"
  MR_Word startup__CSDPtrs0_7,
#line 1055 "startup.m"
  MR_Word * startup__CSDPtrs1_8,
#line 1055 "startup.m"
  MR_Word startup__IsZeroed0_9,
#line 1055 "startup.m"
  MR_Word * startup__IsZeroed_10);

#line 1050 "startup.m"
static void MR_CALL 
startup__flat_call_sites_3_p_0_1(
#line 1050 "startup.m"
  MR_Box startup__closure_arg,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 1050 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 1050 "startup.m"
  MR_Box * startup__wrapper_arg_5);

#line 1037 "startup.m"
static void MR_CALL 
startup__flat_call_sites_3_p_0(
#line 1037 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_4,
#line 1037 "startup.m"
  MR_Word startup__PDPtr_5,
#line 1037 "startup.m"
  MR_Word * startup__CSDPtrs_6);

#line 1024 "startup.m"
static MR_Word MR_CALL 
startup__add_to_override_3_f_0(
#line 1024 "startup.m"
  MR_Word startup__STATE_VARIABLE_CompTable_0_10,
#line 1024 "startup.m"
  MR_Word startup__PSPtr_6,
#line 1024 "startup.m"
  MR_Word startup__PDTotal_7);

#line 1019 "startup.m"
static MR_Word MR_CALL 
startup__select_override_comp_2_f_0(
#line 1019 "startup.m"
  MR_Word startup__OverrideComp_4,
#line 1019 "startup.m"
  MR_Word startup__HeadVar__2_5);

#line 1004 "startup.m"
static MR_Box MR_CALL 
startup__add_comp_tables_2_f_0_1(
#line 1004 "startup.m"
  MR_Box startup__closure_arg,
#line 1004 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1004 "startup.m"
  MR_Box startup__wrapper_arg_2);

#line 995 "startup.m"
static MR_Word MR_CALL 
startup__add_comp_tables_2_f_0(
#line 995 "startup.m"
  MR_Word startup__CompTableA_4,
#line 995 "startup.m"
  MR_Word startup__CompTableB_5);

#line 1004 "startup.m"
static MR_Box MR_CALL 
startup__propagate_to_call_site_7_p_0_1(
#line 1004 "startup.m"
  MR_Box startup__closure_arg,
#line 1004 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1004 "startup.m"
  MR_Box startup__wrapper_arg_2);

#line 970 "startup.m"
static void MR_CALL 
startup__propagate_to_call_site_7_p_0(
#line 970 "startup.m"
  MR_Integer startup__CliqueNumber_8,
#line 970 "startup.m"
  MR_Word startup__PDPtr_9,
#line 970 "startup.m"
  MR_Word startup__CSDPtr_10,
#line 970 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_23,
#line 970 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_24,
#line 970 "startup.m"
  MR_Word startup__STATE_VARIABLE_PDCompTable_0_25,
#line 970 "startup.m"
  MR_Word * startup__STATE_VARIABLE_PDCompTable_26);

#line 944 "startup.m"
static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0_1(
#line 944 "startup.m"
  MR_Box startup__closure_arg,
#line 944 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 944 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 944 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 944 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 944 "startup.m"
  MR_Box * startup__wrapper_arg_5);

#line 936 "startup.m"
static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0(
#line 936 "startup.m"
  MR_Integer startup__CliqueNumber_10,
#line 936 "startup.m"
  MR_Word startup__ParentCSDPtr_11,
#line 936 "startup.m"
  MR_Word startup__PDPtr_12,
#line 936 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_26,
#line 936 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_27,
#line 936 "startup.m"
  MR_Word startup__STATE_VARIABLE_SumTable_0_28,
#line 936 "startup.m"
  MR_Word * startup__STATE_VARIABLE_SumTable_29,
#line 936 "startup.m"
  MR_Word startup__STATE_VARIABLE_OverrideTable_0_30,
#line 936 "startup.m"
  MR_Word * startup__STATE_VARIABLE_OverrideTable_31);

#line 1016 "startup.m"
static MR_Box MR_CALL 
startup__propagate_to_clique_4_p_0_2(
#line 1016 "startup.m"
  MR_Box startup__closure_arg,
#line 1016 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1016 "startup.m"
  MR_Box startup__wrapper_arg_2);

#line 922 "startup.m"
static void MR_CALL 
startup__propagate_to_clique_4_p_0_1(
#line 922 "startup.m"
  MR_Box startup__closure_arg,
#line 922 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 922 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 922 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 922 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 922 "startup.m"
  MR_Box * startup__wrapper_arg_5,
#line 922 "startup.m"
  MR_Box startup__wrapper_arg_6,
#line 922 "startup.m"
  MR_Box * startup__wrapper_arg_7);

#line 917 "startup.m"
static void MR_CALL 
startup__propagate_to_clique_4_p_0(
#line 917 "startup.m"
  MR_Integer startup__CliqueNumber_5,
#line 917 "startup.m"
  MR_Word startup__Members_6,
#line 917 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_16,
#line 917 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_17);

#line 905 "startup.m"
static void MR_CALL 
startup__accumulate_ps_costs_6_p_0(
#line 905 "startup.m"
  MR_Word startup__Deep_7,
#line 905 "startup.m"
  MR_Word startup__PSPtr_8,
#line 905 "startup.m"
  MR_Word startup__Own0_9,
#line 905 "startup.m"
  MR_Word * startup__Own_10,
#line 905 "startup.m"
  MR_Word startup__Desc0_11,
#line 905 "startup.m"
  MR_Word * startup__Desc_12);

#line 888 "startup.m"
static void MR_CALL 
startup__summarize_proc_static_coverage_4_p_0(
#line 888 "startup.m"
  MR_Integer startup__Index_5,
#line 888 "startup.m"
  MR_Word startup__PS_6,
#line 888 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CoverageArray_0_11,
#line 888 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CoverageArray_12);

#line 883 "startup.m"
static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0_1(
#line 883 "startup.m"
  MR_Box startup__closure_arg,
#line 883 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 883 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 883 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 883 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 878 "startup.m"
static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0(
#line 878 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_6,
#line 878 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_7);

#line 873 "startup.m"
static void MR_CALL 
startup__summarize_module_costs_2_f_0_1(
#line 873 "startup.m"
  MR_Box startup__closure_arg,
#line 873 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 873 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 873 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 873 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 873 "startup.m"
  MR_Box * startup__wrapper_arg_5);

#line 869 "startup.m"
static MR_Word MR_CALL 
startup__summarize_module_costs_2_f_0(
#line 869 "startup.m"
  MR_Word startup__Deep_4,
#line 869 "startup.m"
  MR_Word startup__ModuleData0_5);

#line 866 "startup.m"
static MR_Box MR_CALL 
startup__summarize_modules_2_p_0_1(
#line 866 "startup.m"
  MR_Box startup__closure_arg,
#line 866 "startup.m"
  MR_Box startup__wrapper_arg_1);

#line 861 "startup.m"
static void MR_CALL 
startup__summarize_modules_2_p_0(
#line 861 "startup.m"
  MR_Word startup__Deep0_3,
#line 861 "startup.m"
  MR_Word * startup__Deep_4);

#line 826 "startup.m"
static void MR_CALL 
startup__summarize_call_site_dynamic_10_p_0(
#line 826 "startup.m"
  MR_ArrayPtr startup__CallSiteStaticMap_11,
#line 826 "startup.m"
  MR_ArrayPtr startup__CallSiteStatics_12,
#line 826 "startup.m"
  MR_ArrayPtr startup__CSDDescs_13,
#line 826 "startup.m"
  MR_ArrayPtr startup__CSDCompTableArray_14,
#line 826 "startup.m"
  MR_Integer startup__CSDI_15,
#line 826 "startup.m"
  MR_Word startup__CSD_16,
#line 826 "startup.m"
  MR_ArrayPtr startup__CSSOwnArray0_17,
#line 826 "startup.m"
  MR_ArrayPtr * startup__CSSOwnArray_18,
#line 826 "startup.m"
  MR_ArrayPtr startup__CSSDescArray0_19,
#line 826 "startup.m"
  MR_ArrayPtr * startup__CSSDescArray_20);

#line 817 "startup.m"
static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0_1(
#line 817 "startup.m"
  MR_Box startup__closure_arg,
#line 817 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 817 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 817 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 817 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 817 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 817 "startup.m"
  MR_Box * startup__wrapper_arg_6);

#line 811 "startup.m"
static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0(
#line 811 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_8,
#line 811 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_9);

#line 782 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamic_with_coverage_11_p_0(
#line 782 "startup.m"
  MR_ArrayPtr startup__PDOwnArray_12,
#line 782 "startup.m"
  MR_ArrayPtr startup__PDDescArray_13,
#line 782 "startup.m"
  MR_ArrayPtr startup__PDCompTableArray_14,
#line 782 "startup.m"
  MR_Integer startup__PDI_15,
#line 782 "startup.m"
  MR_Word startup__PD_16,
#line 782 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PSOwnArray_0_24,
#line 782 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PSOwnArray_25,
#line 782 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PSDescArray_0_26,
#line 782 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PSDescArray_27,
#line 782 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CoverageArray_0_28,
#line 782 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CoverageArray_29);

#line 772 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0_1(
#line 772 "startup.m"
  MR_Box startup__closure_arg,
#line 772 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 772 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 772 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 772 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 772 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 772 "startup.m"
  MR_Box * startup__wrapper_arg_6,
#line 772 "startup.m"
  MR_Box startup__wrapper_arg_7,
#line 772 "startup.m"
  MR_Box * startup__wrapper_arg_8);

#line 765 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0(
#line 765 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_8,
#line 765 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_9);

#line 739 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamic_9_p_0(
#line 739 "startup.m"
  MR_ArrayPtr startup__PDOwnArray_10,
#line 739 "startup.m"
  MR_ArrayPtr startup__PDDescArray_11,
#line 739 "startup.m"
  MR_ArrayPtr startup__PDCompTableArray_12,
#line 739 "startup.m"
  MR_Integer startup__PDI_13,
#line 739 "startup.m"
  MR_Word startup__PD_14,
#line 739 "startup.m"
  MR_ArrayPtr startup__PSOwnArray0_15,
#line 739 "startup.m"
  MR_ArrayPtr * startup__PSOwnArray_16,
#line 739 "startup.m"
  MR_ArrayPtr startup__PSDescArray0_17,
#line 739 "startup.m"
  MR_ArrayPtr * startup__PSDescArray_18);

#line 730 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0_1(
#line 730 "startup.m"
  MR_Box startup__closure_arg,
#line 730 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 730 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 730 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 730 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 730 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 730 "startup.m"
  MR_Box * startup__wrapper_arg_6);

#line 724 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0(
#line 724 "startup.m"
  MR_Word startup__Deep0_3,
#line 724 "startup.m"
  MR_Word * startup__Deep_4);

#line 707 "startup.m"
static void MR_CALL 
startup__sum_call_sites_in_proc_dynamic_4_p_0(
#line 707 "startup.m"
  MR_Integer startup__HeadVar__1_5,
#line 707 "startup.m"
  MR_Word startup__CSD_6,
#line 707 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PDOwnArray_0_13,
#line 707 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PDOwnArray_14);

#line 675 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_3_7_p_0(
#line 675 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_8,
#line 675 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_9,
#line 675 "startup.m"
  MR_Word startup__CSSPtr_10,
#line 675 "startup.m"
  MR_Integer startup___Dummy_11,
#line 675 "startup.m"
  MR_Word startup__CSDPtr_12,
#line 675 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_25,
#line 675 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_26);

#line 665 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0_1(
#line 665 "startup.m"
  MR_Box startup__closure_arg,
#line 665 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 665 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 665 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 665 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 646 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0(
#line 646 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_8,
#line 646 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_9,
#line 646 "startup.m"
  MR_Integer startup__SlotNum_10,
#line 646 "startup.m"
  MR_ArrayPtr startup__CSSPtrs_11,
#line 646 "startup.m"
  MR_ArrayPtr startup__CSDArraySlots_12,
#line 646 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_19,
#line 646 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_20);

#line 629 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_5_p_0(
#line 629 "startup.m"
  MR_Word startup__InitDeep_6,
#line 629 "startup.m"
  MR_Integer startup___PDI_7,
#line 629 "startup.m"
  MR_Word startup__PD_8,
#line 629 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_18,
#line 629 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_19);

#line 614 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_3_6_p_0(
#line 614 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_7,
#line 614 "startup.m"
  MR_Word startup__CSSPtr_8,
#line 614 "startup.m"
  MR_Integer startup___Dummy_9,
#line 614 "startup.m"
  MR_Word startup__CSDPtr_10,
#line 614 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_12,
#line 614 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_13);

#line 605 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0_1(
#line 605 "startup.m"
  MR_Box startup__closure_arg,
#line 605 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 605 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 605 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 605 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 588 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0(
#line 588 "startup.m"
  MR_Integer startup__SlotNum_7,
#line 588 "startup.m"
  MR_ArrayPtr startup__Deep_8,
#line 588 "startup.m"
  MR_ArrayPtr startup__CSSPtrs_9,
#line 588 "startup.m"
  MR_ArrayPtr startup__CSDArraySlots_10,
#line 588 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_17,
#line 588 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_18);

#line 574 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_5_p_0(
#line 574 "startup.m"
  MR_Word startup__InitDeep_6,
#line 574 "startup.m"
  MR_Integer startup___PDI_7,
#line 574 "startup.m"
  MR_Word startup__PD_8,
#line 574 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_15,
#line 574 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_16);

#line 557 "startup.m"
static void MR_CALL 
startup__construct_proc_callers_5_p_0(
#line 557 "startup.m"
  MR_Word startup__InitDeep_6,
#line 557 "startup.m"
  MR_Integer startup__CSDI_7,
#line 557 "startup.m"
  MR_Word startup__CSD_8,
#line 557 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_ProcCallers_0_15,
#line 557 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_ProcCallers_16);

#line 525 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_2_8_p_0(
#line 525 "startup.m"
  MR_Word startup__InitDeep_9,
#line 525 "startup.m"
  MR_ArrayPtr startup__CliqueIndex_10,
#line 525 "startup.m"
  MR_Word startup__ParentCliquePtr_11,
#line 525 "startup.m"
  MR_Word startup__CSDPtr_12,
#line 525 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueParents_0_21,
#line 525 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueParents_22,
#line 525 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueMaybeChildren_0_23,
#line 525 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueMaybeChildren_24);

#line 519 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_8_p_0_2(
#line 519 "startup.m"
  MR_Box startup__closure_arg,
#line 519 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 519 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 519 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 519 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 519 "startup.m"
  MR_Box * startup__wrapper_arg_5);

#line 1050 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_8_p_0_1(
#line 1050 "startup.m"
  MR_Box startup__closure_arg,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 1050 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 1050 "startup.m"
  MR_Box * startup__wrapper_arg_5);

#line 506 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_8_p_0(
#line 506 "startup.m"
  MR_Word startup__InitDeep_9,
#line 506 "startup.m"
  MR_ArrayPtr startup__CliqueIndex_10,
#line 506 "startup.m"
  MR_Integer startup__PDI_11,
#line 506 "startup.m"
  MR_Word startup__CliquePtr_12,
#line 506 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueParents_0_16,
#line 506 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueParents_17,
#line 506 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueMaybeChildren_0_18,
#line 506 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueMaybeChildren_19);

#line 498 "startup.m"
static MR_bool MR_CALL 
startup__record_csd_containers_2_4_p_0_1(
#line 498 "startup.m"
  MR_Box startup__closure_arg);

#line 489 "startup.m"
static void MR_CALL 
startup__record_csd_containers_2_4_p_0(
#line 489 "startup.m"
  MR_Word startup__PDPtr_1,
#line 489 "startup.m"
  MR_Word startup__HeadVar__2_2,
#line 489 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0_3,
#line 489 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteDynamics_4);

#line 1050 "startup.m"
static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0_1(
#line 1050 "startup.m"
  MR_Box startup__closure_arg,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 1050 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 1050 "startup.m"
  MR_Box * startup__wrapper_arg_5);

#line 469 "startup.m"
static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0(
#line 469 "startup.m"
  MR_Integer startup__PDI_7,
#line 469 "startup.m"
  MR_Word startup__PD_8,
#line 469 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0_18,
#line 469 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteDynamics_19,
#line 469 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_ProcStatics_0_20,
#line 469 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_ProcStatics_21);

#line 457 "startup.m"
static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_2(
#line 457 "startup.m"
  MR_Box startup__closure_arg);

#line 455 "startup.m"
static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_1(
#line 455 "startup.m"
  MR_Box startup__closure_arg);

#line 444 "startup.m"
static void MR_CALL 
startup__record_css_containers_2_5_p_0(
#line 444 "startup.m"
  MR_Integer startup__SlotNum_6,
#line 444 "startup.m"
  MR_Word startup__PSPtr_7,
#line 444 "startup.m"
  MR_ArrayPtr startup__CSSPtrs_8,
#line 444 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0_18,
#line 444 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStatics_19);

#line 426 "startup.m"
static void MR_CALL 
startup__record_css_containers_module_procs_6_p_0(
#line 426 "startup.m"
  MR_Integer startup__PSI_7,
#line 426 "startup.m"
  MR_Word startup__PS_8,
#line 426 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0_16,
#line 426 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStatics_17,
#line 426 "startup.m"
  MR_Word startup__STATE_VARIABLE_ModuleProcs_0_18,
#line 426 "startup.m"
  MR_Word * startup__STATE_VARIABLE_ModuleProcs_19);

#line 386 "startup.m"
static void MR_CALL 
startup__ensure_module_has_module_data_3_p_0(
#line 386 "startup.m"
  MR_String startup__Module_4,
#line 386 "startup.m"
  MR_Word startup__STATE_VARIABLE_ModuleDataMap_0_8,
#line 386 "startup.m"
  MR_Word * startup__STATE_VARIABLE_ModuleDataMap_9);

#line 381 "startup.m"
static MR_Word MR_CALL 
startup__initialize_module_data_1_f_0(
#line 381 "startup.m"
  MR_Word startup__PSPtrs_3);

#line 367 "startup.m"
static MR_String MR_CALL 
startup__contour_file_name_1_f_0(
#line 367 "startup.m"
  MR_String startup__DataFileName_3);

#line 323 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_10(
#line 323 "startup.m"
  MR_Box startup__closure_arg,
#line 323 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 323 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 323 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 323 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 293 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_9(
#line 293 "startup.m"
  MR_Box startup__closure_arg,
#line 293 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 293 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 293 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 293 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 242 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_8(
#line 242 "startup.m"
  MR_Box startup__closure_arg,
#line 242 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 242 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 242 "startup.m"
  MR_Box * startup__wrapper_arg_3);

#line 217 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_7(
#line 217 "startup.m"
  MR_Box startup__closure_arg,
#line 217 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 217 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 217 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 217 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 208 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_6(
#line 208 "startup.m"
  MR_Box startup__closure_arg,
#line 208 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 208 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 208 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 208 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 199 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_5(
#line 199 "startup.m"
  MR_Box startup__closure_arg,
#line 199 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 199 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 199 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 199 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 187 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_4(
#line 187 "startup.m"
  MR_Box startup__closure_arg,
#line 187 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 187 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 187 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 187 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 187 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 187 "startup.m"
  MR_Box * startup__wrapper_arg_6);

#line 126 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_3(
#line 126 "startup.m"
  MR_Box startup__closure_arg,
#line 126 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 126 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 126 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 126 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 126 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 126 "startup.m"
  MR_Box * startup__wrapper_arg_6);

#line 119 "startup.m"
static MR_Box MR_CALL 
startup__startup_11_p_0_2(
#line 119 "startup.m"
  MR_Box startup__closure_arg,
#line 119 "startup.m"
  MR_Box startup__wrapper_arg_1);

#line 117 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_1(
#line 117 "startup.m"
  MR_Box startup__closure_arg,
#line 117 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 117 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 117 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 117 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 117 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 117 "startup.m"
  MR_Box * startup__wrapper_arg_6);

#line 104 "startup.m"
static void MR_CALL 
startup__startup_11_p_0(
#line 104 "startup.m"
  MR_String startup__Machine_12,
#line 104 "startup.m"
  MR_String startup__ScriptName_13,
#line 104 "startup.m"
  MR_String startup__DataFileName_14,
#line 104 "startup.m"
  MR_Word startup__Canonical_15,
#line 104 "startup.m"
  MR_Word startup__MaybeOutputStream_16,
#line 104 "startup.m"
  MR_Word startup__DumpStages_17,
#line 104 "startup.m"
  MR_Word startup__DumpOptions_18,
#line 104 "startup.m"
  MR_Word startup__InitDeep0_19,
#line 104 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_93);

#line 95 "startup.m"
static MR_String MR_CALL 
startup__make_progrep_filename_1_f_0(
#line 95 "startup.m"
  MR_String startup__DataFileName_3);


static /* final */ const MR_Box startup_scalar_common_1[20][2];

static /* final */ const MR_Box startup_scalar_common_2[18][3];

static /* final */ const MR_Box startup_scalar_common_3[4][9];

static /* final */ const MR_Box startup_scalar_common_4[4][5];

static /* final */ const MR_Box startup_scalar_common_5[2][11];

static /* final */ const MR_Box startup_scalar_common_6[4][8];

static /* final */ const MR_Box startup_scalar_common_7[3][6];

static /* final */ const MR_Box startup_scalar_common_8[1][1];

static /* final */ const MR_Box startup_scalar_common_9[3][7];

static /* final */ const MR_Box startup_scalar_common_10[2][10];

static /* final */ const MR_Box startup_scalar_common_11[2][12];

static /* final */ const MR_Box startup_scalar_common_12[1][14];

static /* final */ const MR_Box startup_scalar_common_13[1][13];

static /* final */ const MR_Box startup_scalar_common_14[1][4];




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
    ((MR_Box) (&startup_scalar_common_9[0])),
    ((MR_Box) (startup__startup_11_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&startup_scalar_common_9[1])),
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
    ((MR_Box) (&startup_scalar_common_9[2])),
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
    ((MR_Box) (&startup_scalar_common_14[0])),
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

static /* final */ const MR_Box startup_scalar_common_8[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box startup_scalar_common_9[3][7] = {
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

static /* final */ const MR_Box startup_scalar_common_10[2][10] = {
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

static /* final */ const MR_Box startup_scalar_common_11[2][12] = {
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

static /* final */ const MR_Box startup_scalar_common_12[1][14] = {
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

static /* final */ const MR_Box startup_scalar_common_13[1][13] = {
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

static /* final */ const MR_Box startup_scalar_common_14[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "profile.mh"
#include "array.mh"
#include "read_profile.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 1861 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_0
  }
};

#line 1869 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 1877 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &startup__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 1886 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 1894 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_0
  }
};

#line 1902 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_0
  }
};

#line 1910 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 1918 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1926 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 1934 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0
  }
};

#line 1942 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1950 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1958 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
  }
};

#line 1966 "startup.c"
static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1975 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1983 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_module_data_0
  }
};

#line 1992 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0
  }
};

#line 2000 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 2008 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2016 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_0
  }
};

#line 2024 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 2032 "startup.c"
static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 2041 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 2049 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2057 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &startup__array__ti_array_1builtin__type_ctor_info_int_0
  }
};

#line 2065 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0
  }
};

#line 2073 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 397 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(
#line 397 "startup.m"
  MR_Word startup__V_61_61,
#line 397 "startup.m"
  MR_Word startup__V_62_62,
#line 397 "startup.m"
  MR_String startup__BaseName_7,
#line 397 "startup.m"
  MR_Word startup__DumpStages_8,
#line 397 "startup.m"
  MR_Integer startup__ThisStageNum_9)
#line 397 "startup.m"
{
#line 400 "startup.m"
  {
#line 400 "startup.m"
    MR_bool startup__succeeded;
#line 400 "startup.m"
    MR_String startup__ThisStage_12;

#line 401 "startup.m"
    {
#line 401 "startup.m"
      mercury__string__int_to_string_2_p_0(startup__ThisStageNum_9, &startup__ThisStage_12);
    }
#line 403 "startup.m"
    {
#line 403 "startup.m"
      startup__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "all")), startup__DumpStages_8);
    }
#line 404 "startup.m"
    if (!(startup__succeeded))
#line 404 "startup.m"
      {
#line 404 "startup.m"
        {
#line 404 "startup.m"
          startup__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (startup__ThisStage_12)), startup__DumpStages_8);
        }
#line 404 "startup.m"
      }
#line 420 "startup.m"
    if (startup__succeeded)
#line 407 "startup.m"
      {
#line 407 "startup.m"
        MR_String startup__FileName_13;
#line 407 "startup.m"
        MR_Word startup__OpenRes_14;
#line 407 "startup.m"
        MR_Word startup__V_23_23;
#line 407 "startup.m"
        MR_Word startup__V_24_24;
#line 407 "startup.m"
        MR_Word startup__V_26_26;

#line 407 "startup.m"
        {
#line 407 "startup.m"
          startup__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_26_26, 0) = ((MR_Box) (startup__ThisStage_12));
#line 407 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "startup.m"
        }
#line 407 "startup.m"
        {
#line 407 "startup.m"
          startup__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_24_24, 0) = ((MR_Box) ((MR_String) ".deepdump."));
#line 407 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_24_24, 1) = ((MR_Box) (startup__V_26_26));
#line 407 "startup.m"
        }
#line 407 "startup.m"
        {
#line 407 "startup.m"
          startup__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_23_23, 0) = ((MR_Box) (startup__BaseName_7));
#line 407 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_23_23, 1) = ((MR_Box) (startup__V_24_24));
#line 407 "startup.m"
        }
#line 407 "startup.m"
        {
#line 407 "startup.m"
          mercury__string__append_list_2_p_0(startup__V_23_23, &startup__FileName_13);
        }
#line 408 "startup.m"
        {
#line 408 "startup.m"
          mercury__io__open_output_4_p_0(startup__FileName_13, &startup__OpenRes_14);
        }
#line 415 "startup.m"
        if (((MR_tag((MR_Word) startup__OpenRes_14)) == (MR_mktag((MR_Integer) 1))))
#line 416 "startup.m"
          {
#line 416 "startup.m"
            MR_Word startup__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__OpenRes_14, (MR_Integer) 0)));
#line 416 "startup.m"
            MR_String startup__Msg_19;
#line 416 "startup.m"
            MR_String startup__V_43_43;
#line 416 "startup.m"
            MR_Word startup__V_49_49;
#line 416 "startup.m"
            MR_String startup__V_53_53;

#line 417 "startup.m"
            {
#line 417 "startup.m"
              mercury__io__error_message_2_p_0(startup__Error_18, &startup__Msg_19);
            }
#line 2200 "startup.c"
            startup__V_49_49 = (MR_Word) &startup_scalar_common_8[0];
#line 418 "startup.m"
            {
#line 418 "startup.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(startup__V_49_49, startup__FileName_13, &startup__V_43_43);
            }
#line 418 "startup.m"
            {
#line 418 "startup.m"
              mercury__io__write_string_3_p_0(startup__V_43_43);
            }
#line 418 "startup.m"
            {
#line 418 "startup.m"
              mercury__io__write_string_3_p_0((MR_String) ": ");
            }
#line 418 "startup.m"
            {
#line 418 "startup.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(startup__V_49_49, startup__Msg_19, &startup__V_53_53);
            }
#line 418 "startup.m"
            {
#line 418 "startup.m"
              mercury__io__write_string_3_p_0(startup__V_53_53);
            }
#line 418 "startup.m"
            {
#line 418 "startup.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
#line 418 "startup.m"
              return;
            }
#line 416 "startup.m"
          }
#line 415 "startup.m"
        else
#line 410 "startup.m"
          {
#line 410 "startup.m"
            MR_Word startup__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__OpenRes_14, (MR_Integer) 0)));
#line 410 "startup.m"
            MR_Word startup__CurStream_16;
#line 414 "startup.m"
            MR_Word startup__V_17_17;

#line 411 "startup.m"
            {
#line 411 "startup.m"
              mercury__io__set_output_stream_4_p_0(startup__FileStream_15, &startup__CurStream_16);
            }
#line 412 "startup.m"
            {
#line 412 "startup.m"
              dump__dump_initial_deep_4_p_0(startup__V_61_61, startup__V_62_62);
            }
#line 413 "startup.m"
            {
#line 413 "startup.m"
              mercury__io__close_output_3_p_0(startup__FileStream_15);
            }
#line 414 "startup.m"
            {
#line 414 "startup.m"
              mercury__io__set_output_stream_4_p_0(startup__CurStream_16, &startup__V_17_17);
            }
#line 410 "startup.m"
          }
#line 407 "startup.m"
      }
#line 420 "startup.m"
    else
#line 420 "startup.m"
      {
#line 420 "startup.m"
      }
#line 400 "startup.m"
  }
#line 397 "startup.m"
}

#line 397 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(
#line 397 "startup.m"
  MR_Word startup__V_61_61,
#line 397 "startup.m"
  MR_Word startup__V_62_62,
#line 397 "startup.m"
  MR_String startup__BaseName_7,
#line 397 "startup.m"
  MR_Word startup__DumpStages_8,
#line 397 "startup.m"
  MR_Integer startup__ThisStageNum_9)
#line 397 "startup.m"
{
#line 400 "startup.m"
  {
#line 400 "startup.m"
    MR_bool startup__succeeded;
#line 400 "startup.m"
    MR_String startup__ThisStage_12;

#line 401 "startup.m"
    {
#line 401 "startup.m"
      mercury__string__int_to_string_2_p_0(startup__ThisStageNum_9, &startup__ThisStage_12);
    }
#line 403 "startup.m"
    {
#line 403 "startup.m"
      startup__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "all")), startup__DumpStages_8);
    }
#line 404 "startup.m"
    if (!(startup__succeeded))
#line 404 "startup.m"
      {
#line 404 "startup.m"
        {
#line 404 "startup.m"
          startup__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (startup__ThisStage_12)), startup__DumpStages_8);
        }
#line 404 "startup.m"
      }
#line 420 "startup.m"
    if (startup__succeeded)
#line 407 "startup.m"
      {
#line 407 "startup.m"
        MR_String startup__FileName_13;
#line 407 "startup.m"
        MR_Word startup__OpenRes_14;
#line 407 "startup.m"
        MR_Word startup__V_23_23;
#line 407 "startup.m"
        MR_Word startup__V_24_24;
#line 407 "startup.m"
        MR_Word startup__V_26_26;

#line 407 "startup.m"
        {
#line 407 "startup.m"
          startup__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_26_26, 0) = ((MR_Box) (startup__ThisStage_12));
#line 407 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "startup.m"
        }
#line 407 "startup.m"
        {
#line 407 "startup.m"
          startup__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_24_24, 0) = ((MR_Box) ((MR_String) ".deepdump."));
#line 407 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_24_24, 1) = ((MR_Box) (startup__V_26_26));
#line 407 "startup.m"
        }
#line 407 "startup.m"
        {
#line 407 "startup.m"
          startup__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_23_23, 0) = ((MR_Box) (startup__BaseName_7));
#line 407 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_23_23, 1) = ((MR_Box) (startup__V_24_24));
#line 407 "startup.m"
        }
#line 407 "startup.m"
        {
#line 407 "startup.m"
          mercury__string__append_list_2_p_0(startup__V_23_23, &startup__FileName_13);
        }
#line 408 "startup.m"
        {
#line 408 "startup.m"
          mercury__io__open_output_4_p_0(startup__FileName_13, &startup__OpenRes_14);
        }
#line 415 "startup.m"
        if (((MR_tag((MR_Word) startup__OpenRes_14)) == (MR_mktag((MR_Integer) 1))))
#line 416 "startup.m"
          {
#line 416 "startup.m"
            MR_Word startup__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__OpenRes_14, (MR_Integer) 0)));
#line 416 "startup.m"
            MR_String startup__Msg_19;
#line 416 "startup.m"
            MR_String startup__V_43_43;
#line 416 "startup.m"
            MR_Word startup__V_49_49;
#line 416 "startup.m"
            MR_String startup__V_53_53;

#line 417 "startup.m"
            {
#line 417 "startup.m"
              mercury__io__error_message_2_p_0(startup__Error_18, &startup__Msg_19);
            }
#line 2400 "startup.c"
            startup__V_49_49 = (MR_Word) &startup_scalar_common_8[0];
#line 418 "startup.m"
            {
#line 418 "startup.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(startup__V_49_49, startup__FileName_13, &startup__V_43_43);
            }
#line 418 "startup.m"
            {
#line 418 "startup.m"
              mercury__io__write_string_3_p_0(startup__V_43_43);
            }
#line 418 "startup.m"
            {
#line 418 "startup.m"
              mercury__io__write_string_3_p_0((MR_String) ": ");
            }
#line 418 "startup.m"
            {
#line 418 "startup.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(startup__V_49_49, startup__Msg_19, &startup__V_53_53);
            }
#line 418 "startup.m"
            {
#line 418 "startup.m"
              mercury__io__write_string_3_p_0(startup__V_53_53);
            }
#line 418 "startup.m"
            {
#line 418 "startup.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
#line 418 "startup.m"
              return;
            }
#line 416 "startup.m"
          }
#line 415 "startup.m"
        else
#line 410 "startup.m"
          {
#line 410 "startup.m"
            MR_Word startup__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__OpenRes_14, (MR_Integer) 0)));
#line 410 "startup.m"
            MR_Word startup__CurStream_16;
#line 414 "startup.m"
            MR_Word startup__V_17_17;

#line 411 "startup.m"
            {
#line 411 "startup.m"
              mercury__io__set_output_stream_4_p_0(startup__FileStream_15, &startup__CurStream_16);
            }
#line 412 "startup.m"
            {
#line 412 "startup.m"
              dump__dump_deep_4_p_0(startup__V_61_61, startup__V_62_62);
            }
#line 413 "startup.m"
            {
#line 413 "startup.m"
              mercury__io__close_output_3_p_0(startup__FileStream_15);
            }
#line 414 "startup.m"
            {
#line 414 "startup.m"
              mercury__io__set_output_stream_4_p_0(startup__CurStream_16, &startup__V_17_17);
            }
#line 410 "startup.m"
          }
#line 407 "startup.m"
      }
#line 420 "startup.m"
    else
#line 420 "startup.m"
      {
#line 420 "startup.m"
      }
#line 400 "startup.m"
  }
#line 397 "startup.m"
}

#line 1019 "startup.m"
static MR_Word MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_f_0(
#line 1019 "startup.m"
  MR_Word startup__OverrideComp_4)
#line 1019 "startup.m"
{
#line 1022 "startup.m"
  {
#line 1022 "startup.m"
    MR_bool startup__succeeded;
#line 1022 "startup.m"
    MR_Word startup__OverrideComp_3 = startup__OverrideComp_4;

#line 1022 "startup.m"
    return startup__OverrideComp_3;
#line 1022 "startup.m"
  }
#line 1019 "startup.m"
}

#line 707 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_p_0(
#line 707 "startup.m"
  MR_Word startup__CSD_6,
#line 707 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PDOwnArray_0_13,
#line 707 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PDOwnArray_14)
#line 707 "startup.m"
{
#line 710 "startup.m"
  {
#line 710 "startup.m"
    MR_bool startup__succeeded;
#line 710 "startup.m"
    MR_Word startup__CalleeOwn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_6, (MR_Integer) 2)));
#line 710 "startup.m"
    MR_Word startup__PDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_6, (MR_Integer) 1)));
#line 710 "startup.m"
    MR_Integer startup__PDI_10 = (MR_Integer) startup__PDPtr_9;
#line 711 "startup.m"
    MR_Word startup__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_6, (MR_Integer) 0)));

#line 714 "startup.m"
    startup__succeeded = (startup__PDI_10 > (MR_Integer) 0);
#line 718 "startup.m"
    if (startup__succeeded)
#line 715 "startup.m"
      {
#line 715 "startup.m"
        MR_Word startup__TypeCtorInfo_22_22 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 715 "startup.m"
        MR_Word startup__ProcOwn0_11;
#line 715 "startup.m"
        MR_Word startup__ProcOwn_12;
#line 715 "startup.m"
        MR_Box startup__conv0_ProcOwn0_11;
#line 717 "startup.m"
        MR_ArrayPtr startup__conv1_STATE_VARIABLE_PDOwnArray_14;

#line 715 "startup.m"
        {
#line 715 "startup.m"
          mercury__array__lookup_3_p_0(startup__TypeCtorInfo_22_22, (MR_ArrayPtr) startup__STATE_VARIABLE_PDOwnArray_0_13, startup__PDI_10, &startup__conv0_ProcOwn0_11);
        }
#line 715 "startup.m"
        startup__ProcOwn0_11 = ((MR_Word) startup__conv0_ProcOwn0_11);
#line 716 "startup.m"
        {
#line 716 "startup.m"
          startup__ProcOwn_12 = measurements__add_own_to_own_2_f_0(startup__CalleeOwn_8, startup__ProcOwn0_11);
        }
#line 717 "startup.m"
        {
#line 717 "startup.m"
          mercury__array__set_4_p_0(startup__TypeCtorInfo_22_22, startup__PDI_10, ((MR_Box) (startup__ProcOwn_12)), (MR_ArrayPtr) startup__STATE_VARIABLE_PDOwnArray_0_13, &startup__conv1_STATE_VARIABLE_PDOwnArray_14);
        }
#line 717 "startup.m"
        *startup__STATE_VARIABLE_PDOwnArray_14 = (MR_ArrayPtr) startup__conv1_STATE_VARIABLE_PDOwnArray_14;
#line 715 "startup.m"
      }
#line 718 "startup.m"
    else
#line 719 "startup.m"
      {
#line 719 "startup.m"
        {
#line 719 "startup.m"
          mercury__require__error_1_p_0((MR_String) "sum_call_sites_in_proc_dynamic: invalid pdptr");
#line 719 "startup.m"
          return;
        }
#line 719 "startup.m"
      }
#line 710 "startup.m"
  }
#line 707 "startup.m"
}

#line 675 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(
#line 675 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_8,
#line 675 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_9,
#line 675 "startup.m"
  MR_Word startup__CSSPtr_10,
#line 675 "startup.m"
  MR_Word startup__CSDPtr_12,
#line 675 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_25,
#line 675 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_26)
#line 675 "startup.m"
{
#line 682 "startup.m"
  {
#line 682 "startup.m"
    MR_bool startup__succeeded;
#line 682 "startup.m"
    MR_Integer startup__CSDI_14 = (MR_Integer) startup__CSDPtr_12;

#line 684 "startup.m"
    startup__succeeded = (startup__CSDI_14 > (MR_Integer) 0);
#line 701 "startup.m"
    if (startup__succeeded)
#line 685 "startup.m"
      {
#line 685 "startup.m"
        MR_Word startup__TypeInfo_37_37;
#line 685 "startup.m"
        MR_Word startup__CSD_15;
#line 685 "startup.m"
        MR_Word startup__PDPtr_16;
#line 685 "startup.m"
        MR_Integer startup__PDI_17;
#line 685 "startup.m"
        MR_Word startup__PD_18;
#line 685 "startup.m"
        MR_Word startup__PSPtr_19;
#line 685 "startup.m"
        MR_Integer startup__CSSI_20;
#line 685 "startup.m"
        MR_Word startup__CallMap0_21;
#line 685 "startup.m"
        MR_Word startup__CallMap_24;
#line 685 "startup.m"
        MR_Box startup__conv0_CSD_15;
#line 686 "startup.m"
        MR_Word startup__V_31_31;
#line 686 "startup.m"
        MR_Word startup__V_32_32;
#line 688 "startup.m"
        MR_Box startup__conv1_PD_18;
#line 689 "startup.m"
        MR_ArrayPtr startup__V_33_33;
#line 689 "startup.m"
        MR_Word startup__V_34_34;
#line 692 "startup.m"
        MR_Box startup__conv2_CallMap0_21;
#line 696 "startup.m"
        MR_Word startup__CallList0_22;
#line 693 "startup.m"
        MR_Box startup__conv3_CallList0_22;
#line 700 "startup.m"
        MR_ArrayPtr startup__conv4_STATE_VARIABLE_CallSiteCalls_26;

#line 685 "startup.m"
        {
#line 685 "startup.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) startup__CallSiteDynamics_8, startup__CSDI_14, &startup__conv0_CSD_15);
        }
#line 685 "startup.m"
        startup__CSD_15 = ((MR_Word) startup__conv0_CSD_15);
#line 686 "startup.m"
        startup__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_15, (MR_Integer) 0)));
#line 686 "startup.m"
        startup__PDPtr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_15, (MR_Integer) 1)));
#line 686 "startup.m"
        startup__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_15, (MR_Integer) 2)));
#line 687 "startup.m"
        startup__PDI_17 = (MR_Integer) startup__PDPtr_16;
#line 688 "startup.m"
        {
#line 688 "startup.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) startup__ProcDynamics_9, startup__PDI_17, &startup__conv1_PD_18);
        }
#line 688 "startup.m"
        startup__PD_18 = ((MR_Word) startup__conv1_PD_18);
#line 689 "startup.m"
        startup__PSPtr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_18, (MR_Integer) 0)));
#line 689 "startup.m"
        startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_18, (MR_Integer) 1)));
#line 689 "startup.m"
        startup__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_18, (MR_Integer) 2)));
#line 691 "startup.m"
        startup__CSSI_20 = (MR_Integer) startup__CSSPtr_10;
#line 2682 "startup.c"
        startup__TypeInfo_37_37 = (MR_Word) &startup_scalar_common_2[1];
#line 692 "startup.m"
        {
#line 692 "startup.m"
          mercury__array__lookup_3_p_0(startup__TypeInfo_37_37, (MR_ArrayPtr) startup__STATE_VARIABLE_CallSiteCalls_0_25, startup__CSSI_20, &startup__conv2_CallMap0_21);
        }
#line 692 "startup.m"
        startup__CallMap0_21 = ((MR_Word) startup__conv2_CallMap0_21);
#line 693 "startup.m"
        {
#line 693 "startup.m"
          startup__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_1[8], startup__CallMap0_21, ((MR_Box) (startup__PSPtr_19)), &startup__conv3_CallList0_22);
        }
#line 693 "startup.m"
        if (startup__succeeded)
#line 693 "startup.m"
          {
#line 693 "startup.m"
            startup__CallList0_22 = ((MR_Word) startup__conv3_CallList0_22);
#line 693 "startup.m"
            startup__succeeded = MR_TRUE;
#line 693 "startup.m"
          }
#line 696 "startup.m"
        if (startup__succeeded)
#line 694 "startup.m"
          {
#line 694 "startup.m"
            MR_Word startup__CallList_23;

#line 694 "startup.m"
            {
#line 694 "startup.m"
              startup__CallList_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "startup.m"
              MR_hl_field(MR_mktag(1), startup__CallList_23, 0) = ((MR_Box) (startup__CSDPtr_12));
#line 694 "startup.m"
              MR_hl_field(MR_mktag(1), startup__CallList_23, 1) = ((MR_Box) (startup__CallList0_22));
#line 694 "startup.m"
            }
#line 695 "startup.m"
            {
#line 695 "startup.m"
              mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_1[8], ((MR_Box) (startup__PSPtr_19)), ((MR_Box) (startup__CallList_23)), startup__CallMap0_21, &startup__CallMap_24);
            }
#line 694 "startup.m"
          }
#line 696 "startup.m"
        else
#line 697 "startup.m"
          {
#line 697 "startup.m"
            MR_Word startup__CallList_30;

#line 697 "startup.m"
            {
#line 697 "startup.m"
              startup__CallList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "startup.m"
              MR_hl_field(MR_mktag(1), startup__CallList_30, 0) = ((MR_Box) (startup__CSDPtr_12));
#line 697 "startup.m"
              MR_hl_field(MR_mktag(1), startup__CallList_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "startup.m"
            }
#line 698 "startup.m"
            {
#line 698 "startup.m"
              mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_1[8], ((MR_Box) (startup__PSPtr_19)), ((MR_Box) (startup__CallList_30)), startup__CallMap0_21, &startup__CallMap_24);
            }
#line 697 "startup.m"
          }
#line 700 "startup.m"
        {
#line 700 "startup.m"
          mercury__array__set_4_p_0(startup__TypeInfo_37_37, startup__CSSI_20, ((MR_Box) (startup__CallMap_24)), (MR_ArrayPtr) startup__STATE_VARIABLE_CallSiteCalls_0_25, &startup__conv4_STATE_VARIABLE_CallSiteCalls_26);
        }
#line 700 "startup.m"
        *startup__STATE_VARIABLE_CallSiteCalls_26 = (MR_ArrayPtr) startup__conv4_STATE_VARIABLE_CallSiteCalls_26;
#line 685 "startup.m"
      }
#line 701 "startup.m"
    else
#line 701 "startup.m"
      *startup__STATE_VARIABLE_CallSiteCalls_26 = startup__STATE_VARIABLE_CallSiteCalls_0_25;
#line 682 "startup.m"
  }
#line 675 "startup.m"
}

#line 629 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_p_0(
#line 629 "startup.m"
  MR_Word startup__InitDeep_6,
#line 629 "startup.m"
  MR_Word startup__PD_8,
#line 629 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_18,
#line 629 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_19)
#line 629 "startup.m"
{
#line 634 "startup.m"
  {
#line 634 "startup.m"
    MR_bool startup__succeeded;
#line 634 "startup.m"
    MR_Word startup__PSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 0)));
#line 634 "startup.m"
    MR_ArrayPtr startup__CSDArraySlots_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 1)));
#line 634 "startup.m"
    MR_Integer startup__MaxCS_12;
#line 634 "startup.m"
    MR_Integer startup__PSI_13;
#line 634 "startup.m"
    MR_Word startup__PS_14;
#line 634 "startup.m"
    MR_ArrayPtr startup__CSSPtrs_15;
#line 634 "startup.m"
    MR_ArrayPtr startup__CallSiteDynamics_16;
#line 634 "startup.m"
    MR_ArrayPtr startup__ProcDynamics_17;
#line 634 "startup.m"
    MR_ArrayPtr startup__V_20_20;
#line 635 "startup.m"
    MR_Word startup__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 2)));
#line 639 "startup.m"
    MR_Word startup__V_26_26;
#line 639 "startup.m"
    MR_Word startup__V_27_27;
#line 639 "startup.m"
    MR_ArrayPtr startup__V_28_28;
#line 639 "startup.m"
    MR_ArrayPtr startup__V_29_29;
#line 639 "startup.m"
    MR_ArrayPtr startup__V_30_30;
#line 639 "startup.m"
    MR_Box startup__conv0_PS_14;
#line 640 "startup.m"
    MR_Word startup__V_31_31;
#line 640 "startup.m"
    MR_String startup__V_32_32;
#line 640 "startup.m"
    MR_String startup__V_33_33;
#line 640 "startup.m"
    MR_String startup__V_34_34;
#line 640 "startup.m"
    MR_String startup__V_35_35;
#line 640 "startup.m"
    MR_String startup__V_36_36;
#line 640 "startup.m"
    MR_Integer startup__V_37_37;
#line 640 "startup.m"
    MR_Word startup__V_38_38;
#line 640 "startup.m"
    MR_ArrayPtr startup__V_39_39;
#line 640 "startup.m"
    MR_Word startup__V_40_40;
#line 640 "startup.m"
    MR_Word startup__V_41_41;
#line 641 "startup.m"
    MR_Word startup__V_42_42;
#line 641 "startup.m"
    MR_Word startup__V_43_43;
#line 641 "startup.m"
    MR_ArrayPtr startup__V_45_45;
#line 641 "startup.m"
    MR_ArrayPtr startup__V_46_46;

#line 637 "startup.m"
    {
#line 637 "startup.m"
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) startup__CSDArraySlots_11, &startup__MaxCS_12);
    }
#line 638 "startup.m"
    startup__PSI_13 = (MR_Integer) startup__PSPtr_10;
#line 639 "startup.m"
    startup__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
#line 639 "startup.m"
    startup__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
#line 639 "startup.m"
    startup__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
#line 639 "startup.m"
    startup__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
#line 639 "startup.m"
    startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
#line 639 "startup.m"
    startup__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
#line 639 "startup.m"
    {
#line 639 "startup.m"
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) startup__V_20_20, startup__PSI_13, &startup__conv0_PS_14);
    }
#line 639 "startup.m"
    startup__PS_14 = ((MR_Word) startup__conv0_PS_14);
#line 640 "startup.m"
    startup__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 0)));
#line 640 "startup.m"
    startup__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 1)));
#line 640 "startup.m"
    startup__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 2)));
#line 640 "startup.m"
    startup__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 3)));
#line 640 "startup.m"
    startup__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 4)));
#line 640 "startup.m"
    startup__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 5)));
#line 640 "startup.m"
    startup__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 6)));
#line 640 "startup.m"
    startup__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 7)));
#line 640 "startup.m"
    startup__CSSPtrs_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 8)));
#line 640 "startup.m"
    startup__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 9)));
#line 640 "startup.m"
    startup__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 10)));
#line 640 "startup.m"
    startup__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 11)));
#line 641 "startup.m"
    startup__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
#line 641 "startup.m"
    startup__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
#line 641 "startup.m"
    startup__CallSiteDynamics_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
#line 641 "startup.m"
    startup__ProcDynamics_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
#line 641 "startup.m"
    startup__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
#line 641 "startup.m"
    startup__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
#line 643 "startup.m"
    {
#line 643 "startup.m"
      startup__construct_call_site_calls_2_7_p_0(startup__CallSiteDynamics_16, startup__ProcDynamics_17, startup__MaxCS_12, startup__CSSPtrs_15, startup__CSDArraySlots_11, startup__STATE_VARIABLE_CallSiteCalls_0_18, startup__STATE_VARIABLE_CallSiteCalls_19);
#line 643 "startup.m"
      return;
    }
#line 634 "startup.m"
  }
#line 629 "startup.m"
}

#line 614 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_p_0(
#line 614 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_7,
#line 614 "startup.m"
  MR_Word startup__CSSPtr_8,
#line 614 "startup.m"
  MR_Word startup__CSDPtr_10,
#line 614 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_12,
#line 614 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_13)
#line 614 "startup.m"
{
#line 623 "startup.m"
  {
#line 623 "startup.m"
    MR_bool startup__succeeded;

#line 621 "startup.m"
    {
#line 621 "startup.m"
      startup__succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(startup__CallSiteDynamics_7, startup__CSDPtr_10);
    }
#line 623 "startup.m"
    if (startup__succeeded)
#line 622 "startup.m"
      {
#line 622 "startup.m"
        profile__update_call_site_static_map_4_p_0(startup__CSDPtr_10, startup__CSSPtr_8, startup__STATE_VARIABLE_CallSiteStaticMap_0_12, startup__STATE_VARIABLE_CallSiteStaticMap_13);
#line 622 "startup.m"
        return;
      }
#line 623 "startup.m"
    else
#line 623 "startup.m"
      *startup__STATE_VARIABLE_CallSiteStaticMap_13 = startup__STATE_VARIABLE_CallSiteStaticMap_0_12;
#line 623 "startup.m"
  }
#line 614 "startup.m"
}

#line 574 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_p_0(
#line 574 "startup.m"
  MR_Word startup__InitDeep_6,
#line 574 "startup.m"
  MR_Word startup__PD_8,
#line 574 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_15,
#line 574 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_16)
#line 574 "startup.m"
{
#line 578 "startup.m"
  {
#line 578 "startup.m"
    MR_bool startup__succeeded;
#line 578 "startup.m"
    MR_Word startup__PSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 0)));
#line 578 "startup.m"
    MR_ArrayPtr startup__CSDArraySlots_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 1)));
#line 578 "startup.m"
    MR_Word startup__PS_12;
#line 578 "startup.m"
    MR_ArrayPtr startup__CSSPtrs_13;
#line 578 "startup.m"
    MR_Integer startup__MaxCS_14;
#line 578 "startup.m"
    MR_ArrayPtr startup__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
#line 578 "startup.m"
    MR_ArrayPtr startup__V_18_18;
#line 579 "startup.m"
    MR_Word startup__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 2)));
#line 581 "startup.m"
    MR_Word startup__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
#line 581 "startup.m"
    MR_Word startup__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
#line 581 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
#line 581 "startup.m"
    MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
#line 581 "startup.m"
    MR_ArrayPtr startup__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
#line 582 "startup.m"
    MR_Word startup__V_29_29;
#line 582 "startup.m"
    MR_String startup__V_30_30;
#line 582 "startup.m"
    MR_String startup__V_31_31;
#line 582 "startup.m"
    MR_String startup__V_32_32;
#line 582 "startup.m"
    MR_String startup__V_33_33;
#line 582 "startup.m"
    MR_String startup__V_34_34;
#line 582 "startup.m"
    MR_Integer startup__V_35_35;
#line 582 "startup.m"
    MR_Word startup__V_36_36;
#line 582 "startup.m"
    MR_ArrayPtr startup__V_37_37;
#line 582 "startup.m"
    MR_Word startup__V_38_38;
#line 582 "startup.m"
    MR_Word startup__V_39_39;
#line 584 "startup.m"
    MR_Word startup__V_40_40;
#line 584 "startup.m"
    MR_Word startup__V_41_41;
#line 584 "startup.m"
    MR_ArrayPtr startup__V_42_42;
#line 584 "startup.m"
    MR_ArrayPtr startup__V_43_43;
#line 584 "startup.m"
    MR_ArrayPtr startup__V_44_44;

#line 581 "startup.m"
    {
#line 581 "startup.m"
      profile__lookup_proc_statics_3_p_0(startup__V_17_17, startup__PSPtr_10, &startup__PS_12);
    }
#line 582 "startup.m"
    startup__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 0)));
#line 582 "startup.m"
    startup__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 1)));
#line 582 "startup.m"
    startup__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 2)));
#line 582 "startup.m"
    startup__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 3)));
#line 582 "startup.m"
    startup__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 4)));
#line 582 "startup.m"
    startup__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 5)));
#line 582 "startup.m"
    startup__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 6)));
#line 582 "startup.m"
    startup__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 7)));
#line 582 "startup.m"
    startup__CSSPtrs_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 8)));
#line 582 "startup.m"
    startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 9)));
#line 582 "startup.m"
    startup__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 10)));
#line 582 "startup.m"
    startup__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 11)));
#line 583 "startup.m"
    {
#line 583 "startup.m"
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) startup__CSDArraySlots_11, &startup__MaxCS_14);
    }
#line 584 "startup.m"
    startup__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
#line 584 "startup.m"
    startup__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
#line 584 "startup.m"
    startup__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
#line 584 "startup.m"
    startup__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
#line 584 "startup.m"
    startup__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
#line 584 "startup.m"
    startup__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
#line 584 "startup.m"
    {
#line 584 "startup.m"
      startup__construct_call_site_caller_2_6_p_0(startup__MaxCS_14, startup__V_18_18, startup__CSSPtrs_13, startup__CSDArraySlots_11, startup__STATE_VARIABLE_CallSiteStaticMap_0_15, startup__STATE_VARIABLE_CallSiteStaticMap_16);
#line 584 "startup.m"
      return;
    }
#line 578 "startup.m"
  }
#line 574 "startup.m"
}

#line 1073 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__gather_call_site_csdptrs__1073__1_1_p_0(
#line 1073 "startup.m"
  MR_Word startup__HeadVar__1_18)
#line 1073 "startup.m"
{
#line 1073 "startup.m"
  {
#line 1073 "startup.m"
    MR_bool startup__succeeded;
#line 1073 "startup.m"
    MR_Integer startup__CSDI_24 = (MR_Integer) startup__HeadVar__1_18;

#line 1075 "startup.m"
    startup__succeeded = (startup__CSDI_24 > (MR_Integer) 0);
#line 1073 "startup.m"
    return startup__succeeded;
#line 1073 "startup.m"
  }
#line 1073 "startup.m"
}

#line 498 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_csd_containers_2__498__1_2_p_0(
#line 498 "startup.m"
  MR_Word startup__CallerPDPtr0_14,
#line 498 "startup.m"
  MR_Word startup__HeadVar__2_22)
#line 498 "startup.m"
{
#line 498 "startup.m"
  {
#line 498 "startup.m"
    MR_bool startup__succeeded;
#line 498 "startup.m"
    MR_Integer startup__V_27_27 = (MR_Integer) startup__CallerPDPtr0_14;
#line 498 "startup.m"
    MR_Integer startup__V_28_28 = (MR_Integer) startup__HeadVar__2_22;

#line 498 "startup.m"
    startup__succeeded = (startup__V_27_27 == startup__V_28_28);
#line 498 "startup.m"
    return startup__succeeded;
#line 498 "startup.m"
  }
#line 498 "startup.m"
}

#line 457 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__457__1_2_p_0(
#line 457 "startup.m"
  MR_Integer startup__SlotNum0_13,
#line 457 "startup.m"
  MR_Integer startup__HeadVar__2_27)
#line 457 "startup.m"
{
#line 457 "startup.m"
  {
#line 457 "startup.m"
    MR_bool startup__succeeded = (startup__SlotNum0_13 == startup__HeadVar__2_27);

#line 457 "startup.m"
    return startup__succeeded;
#line 457 "startup.m"
  }
#line 457 "startup.m"
}

#line 455 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__455__1_2_p_0(
#line 455 "startup.m"
  MR_Word startup__PSPtr0_12,
#line 455 "startup.m"
  MR_Word startup__HeadVar__2_23)
#line 455 "startup.m"
{
#line 455 "startup.m"
  {
#line 455 "startup.m"
    MR_bool startup__succeeded;
#line 455 "startup.m"
    MR_Integer startup__V_35_35 = (MR_Integer) startup__PSPtr0_12;
#line 455 "startup.m"
    MR_Integer startup__V_36_36 = (MR_Integer) startup__HeadVar__2_23;

#line 455 "startup.m"
    startup__succeeded = (startup__V_35_35 == startup__V_36_36);
#line 455 "startup.m"
    return startup__succeeded;
#line 455 "startup.m"
  }
#line 455 "startup.m"
}

#line 1102 "startup.m"
static void MR_CALL 
startup__maybe_report_msg_4_p_0(
#line 1102 "startup.m"
  MR_Word startup__HeadVar__1_1,
#line 1102 "startup.m"
  MR_String startup__Msg_2)
#line 1102 "startup.m"
{
#line 1105 "startup.m"
  {
#line 1105 "startup.m"
    MR_bool startup__succeeded;

#line 1105 "startup.m"
    if ((startup__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1108 "startup.m"
      {
#line 1108 "startup.m"
      }
#line 1105 "startup.m"
    else
#line 1105 "startup.m"
      {
#line 1105 "startup.m"
        MR_Word startup__OutputStream_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__HeadVar__1_1, (MR_Integer) 0)));

#line 1106 "startup.m"
        {
#line 1106 "startup.m"
          mercury__io__write_string_4_p_0(startup__OutputStream_5, startup__Msg_2);
        }
#line 1107 "startup.m"
        {
#line 1107 "startup.m"
          mercury__io__flush_output_3_p_0(startup__OutputStream_5);
#line 1107 "startup.m"
          return;
        }
#line 1105 "startup.m"
      }
#line 1105 "startup.m"
  }
#line 1102 "startup.m"
}

#line 1089 "startup.m"
static void MR_CALL 
startup__maybe_report_stats_3_p_0(
#line 1089 "startup.m"
  MR_Word startup__HeadVar__1_1)
#line 1089 "startup.m"
{
#line 1098 "startup.m"
  {
#line 1098 "startup.m"
    MR_bool startup__succeeded;

#line 1098 "startup.m"
    if ((startup__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1100 "startup.m"
      {
#line 1100 "startup.m"
      }
#line 1098 "startup.m"
    else
#line 1098 "startup.m"
      {
#line 1098 "startup.m"
      }
#line 1098 "startup.m"
  }
#line 1089 "startup.m"
}

#line 1073 "startup.m"
static MR_bool MR_CALL 
startup__gather_call_site_csdptrs_5_p_0_1(
#line 1073 "startup.m"
  MR_Box startup__closure_arg,
#line 1073 "startup.m"
  MR_Box startup__wrapper_arg_1)
#line 1073 "startup.m"
{
#line 1073 "startup.m"
  {
#line 1073 "startup.m"
    MR_bool startup__succeeded;
#line 1073 "startup.m"
    MR_Box startup__closure = startup__closure_arg;

#line 1073 "startup.m"
    {
#line 1073 "startup.m"
      return startup__succeeded = startup__IntroducedFrom__pred__gather_call_site_csdptrs__1073__1_1_p_0(((MR_Word) startup__wrapper_arg_1));
    }
#line 1073 "startup.m"
    return startup__succeeded;
#line 1073 "startup.m"
  }
#line 1073 "startup.m"
}

#line 1055 "startup.m"
static void MR_CALL 
startup__gather_call_site_csdptrs_5_p_0(
#line 1055 "startup.m"
  MR_Word startup__Slot_6,
#line 1055 "startup.m"
  MR_Word startup__CSDPtrs0_7,
#line 1055 "startup.m"
  MR_Word * startup__CSDPtrs1_8,
#line 1055 "startup.m"
  MR_Word startup__IsZeroed0_9,
#line 1055 "startup.m"
  MR_Word * startup__IsZeroed_10)
#line 1055 "startup.m"
{
#line 1062 "startup.m"
  {
#line 1062 "startup.m"
    MR_bool startup__succeeded;

#line 1062 "startup.m"
    if (((MR_tag((MR_Word) startup__Slot_6)) == (MR_mktag((MR_Integer) 1))))
#line 1071 "startup.m"
      {
#line 1071 "startup.m"
        MR_Word startup__TypeCtorInfo_28_28 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 1071 "startup.m"
        MR_Word startup__IsZeroed1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__Slot_6, (MR_Integer) 0)));
#line 1071 "startup.m"
        MR_ArrayPtr startup__PtrArray_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__Slot_6, (MR_Integer) 1)));
#line 1071 "startup.m"
        MR_Word startup__PtrList0_15;
#line 1071 "startup.m"
        MR_Word startup__PtrList1_16;

#line 1072 "startup.m"
        {
#line 1072 "startup.m"
          mercury__array__to_list_2_p_0(startup__TypeCtorInfo_28_28, (MR_ArrayPtr) startup__PtrArray_14, &startup__PtrList0_15);
        }
#line 1073 "startup.m"
        {
#line 1073 "startup.m"
          mercury__list__filter_3_p_0(startup__TypeCtorInfo_28_28, (MR_Word) &startup_scalar_common_2[17], startup__PtrList0_15, &startup__PtrList1_16);
        }
#line 1077 "startup.m"
        {
#line 1077 "startup.m"
          MR_Word base;
#line 1077 "startup.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "startup.m"
          *startup__CSDPtrs1_8 = base;
#line 1077 "startup.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (startup__PtrList1_16));
#line 1077 "startup.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (startup__CSDPtrs0_7));
#line 1077 "startup.m"
        }
#line 1081 "startup.m"
#line 1081 "startup.m"
        switch (startup__IsZeroed1_13) {
#line 1081 "startup.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1081 "startup.m"
          case (MR_Integer) 1:
#line 1083 "startup.m"
            *startup__IsZeroed_10 = startup__IsZeroed0_9;
#line 1081 "startup.m"
            break;
#line 1081 "startup.m"
          case (MR_Integer) 0:
#line 1080 "startup.m"
            *startup__IsZeroed_10 = (MR_Integer) 0;
#line 1081 "startup.m"
            break;
#line 1081 "startup.m"
        }
#line 1071 "startup.m"
      }
#line 1062 "startup.m"
    else
#line 1062 "startup.m"
      {
#line 1062 "startup.m"
        MR_Word startup__CSDPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Slot_6, (MR_Integer) 0)));
#line 1062 "startup.m"
        MR_Integer startup__CSDI_12 = (MR_Integer) startup__CSDPtr_11;

#line 1064 "startup.m"
        startup__succeeded = (startup__CSDI_12 > (MR_Integer) 0);
#line 1066 "startup.m"
        if (startup__succeeded)
#line 1065 "startup.m"
          {
#line 1065 "startup.m"
            MR_Word startup__V_21_21;

#line 1065 "startup.m"
            {
#line 1065 "startup.m"
              startup__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "startup.m"
              MR_hl_field(MR_mktag(1), startup__V_21_21, 0) = ((MR_Box) (startup__CSDPtr_11));
#line 1065 "startup.m"
              MR_hl_field(MR_mktag(1), startup__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1065 "startup.m"
            }
#line 1065 "startup.m"
            {
#line 1065 "startup.m"
              MR_Word base;
#line 1065 "startup.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "startup.m"
              *startup__CSDPtrs1_8 = base;
#line 1065 "startup.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (startup__V_21_21));
#line 1065 "startup.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (startup__CSDPtrs0_7));
#line 1065 "startup.m"
            }
#line 1065 "startup.m"
          }
#line 1066 "startup.m"
        else
#line 1067 "startup.m"
          *startup__CSDPtrs1_8 = startup__CSDPtrs0_7;
#line 1069 "startup.m"
        *startup__IsZeroed_10 = startup__IsZeroed0_9;
#line 1062 "startup.m"
      }
#line 1062 "startup.m"
  }
#line 1055 "startup.m"
}

#line 1050 "startup.m"
static void MR_CALL 
startup__flat_call_sites_3_p_0_1(
#line 1050 "startup.m"
  MR_Box startup__closure_arg,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 1050 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 1050 "startup.m"
  MR_Box * startup__wrapper_arg_5)
#line 1050 "startup.m"
{
#line 1050 "startup.m"
  {
#line 1050 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 1050 "startup.m"
    MR_Word startup__conv1_CSDPtrs1_8;
#line 1050 "startup.m"
    MR_Word startup__conv0_IsZeroed_10;

#line 1050 "startup.m"
    {
#line 1050 "startup.m"
      startup__gather_call_site_csdptrs_5_p_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_CSDPtrs1_8, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_IsZeroed_10);
    }
#line 1050 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_CSDPtrs1_8));
#line 1050 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_IsZeroed_10));
#line 1050 "startup.m"
  }
#line 1050 "startup.m"
}

#line 1037 "startup.m"
static void MR_CALL 
startup__flat_call_sites_3_p_0(
#line 1037 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_4,
#line 1037 "startup.m"
  MR_Word startup__PDPtr_5,
#line 1037 "startup.m"
  MR_Word * startup__CSDPtrs_6)
#line 1037 "startup.m"
{
#line 1040 "startup.m"
  {
#line 1040 "startup.m"
    MR_bool startup__succeeded;
#line 1040 "startup.m"
    MR_Word startup__TypeCtorInfo_13_21;
#line 1040 "startup.m"
    MR_Word startup__PD_7;
#line 1040 "startup.m"
    MR_ArrayPtr startup__CallSiteArray_8;
#line 1040 "startup.m"
    MR_Word startup__CallSites_15;
#line 1040 "startup.m"
    MR_Word startup__CSDPtrsList0_16;
#line 1040 "startup.m"
    MR_Word startup__CSDPtrsList_17;
#line 1042 "startup.m"
    MR_Word startup__V_10_10;
#line 1042 "startup.m"
    MR_Word startup__V_11_11;
#line 1050 "startup.m"
    MR_Word startup__V_9_9;
#line 1050 "startup.m"
    MR_Box startup__conv3_CSDPtrsList0_16;
#line 1050 "startup.m"
    MR_Box startup__conv2_V_9_9;

#line 1041 "startup.m"
    {
#line 1041 "startup.m"
      profile__lookup_proc_dynamics_3_p_0(startup__ProcDynamics_4, startup__PDPtr_5, &startup__PD_7);
    }
#line 1042 "startup.m"
    startup__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_7, (MR_Integer) 0)));
#line 1042 "startup.m"
    startup__CallSiteArray_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_7, (MR_Integer) 1)));
#line 1042 "startup.m"
    startup__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_7, (MR_Integer) 2)));
#line 3530 "startup.c"
    startup__TypeCtorInfo_13_21 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
#line 1049 "startup.m"
    {
#line 1049 "startup.m"
      mercury__array__to_list_2_p_0(startup__TypeCtorInfo_13_21, (MR_ArrayPtr) startup__CallSiteArray_8, &startup__CallSites_15);
    }
#line 1050 "startup.m"
    {
#line 1050 "startup.m"
      mercury__list__foldl2_6_p_0(startup__TypeCtorInfo_13_21, (MR_Word) &startup_scalar_common_1[19], (MR_Word) &profile__profile__type_ctor_info_is_zeroed_0, (MR_Word) &startup_scalar_common_2[16], startup__CallSites_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv3_CSDPtrsList0_16, ((MR_Box) ((MR_Integer) 1)), &startup__conv2_V_9_9);
    }
#line 1050 "startup.m"
    startup__CSDPtrsList0_16 = ((MR_Word) startup__conv3_CSDPtrsList0_16);
#line 1050 "startup.m"
    startup__V_9_9 = ((MR_Word) startup__conv2_V_9_9);
#line 1052 "startup.m"
    {
#line 1052 "startup.m"
      mercury__list__reverse_2_p_0((MR_Word) &startup_scalar_common_1[8], startup__CSDPtrsList0_16, &startup__CSDPtrsList_17);
    }
#line 1053 "startup.m"
    {
#line 1053 "startup.m"
      mercury__list__condense_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__CSDPtrsList_17, startup__CSDPtrs_6);
#line 1053 "startup.m"
      return;
    }
#line 1040 "startup.m"
  }
#line 1037 "startup.m"
}

#line 1024 "startup.m"
static MR_Word MR_CALL 
startup__add_to_override_3_f_0(
#line 1024 "startup.m"
  MR_Word startup__STATE_VARIABLE_CompTable_0_10,
#line 1024 "startup.m"
  MR_Word startup__PSPtr_6,
#line 1024 "startup.m"
  MR_Word startup__PDTotal_7)
#line 1024 "startup.m"
{
#line 1031 "startup.m"
  {
#line 1031 "startup.m"
    MR_bool startup__succeeded;
#line 1031 "startup.m"
    MR_Word startup__STATE_VARIABLE_CompTable_11;
#line 1031 "startup.m"
    MR_Word startup__Comp0_8;
#line 1028 "startup.m"
    MR_Box startup__conv0_Comp0_8;

#line 1028 "startup.m"
    {
#line 1028 "startup.m"
      startup__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__STATE_VARIABLE_CompTable_0_10, ((MR_Box) (startup__PSPtr_6)), &startup__conv0_Comp0_8);
    }
#line 1028 "startup.m"
    if (startup__succeeded)
#line 1028 "startup.m"
      {
#line 1028 "startup.m"
        startup__Comp0_8 = ((MR_Word) startup__conv0_Comp0_8);
#line 1028 "startup.m"
        startup__succeeded = MR_TRUE;
#line 1028 "startup.m"
      }
#line 1031 "startup.m"
    if (startup__succeeded)
#line 1029 "startup.m"
      {
#line 1029 "startup.m"
        MR_Word startup__Comp_9;

#line 1029 "startup.m"
        {
#line 1029 "startup.m"
          startup__Comp_9 = measurements__add_inherit_to_inherit_2_f_0(startup__Comp0_8, startup__PDTotal_7);
        }
#line 1030 "startup.m"
        {
#line 1030 "startup.m"
          mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, ((MR_Box) (startup__PSPtr_6)), ((MR_Box) (startup__Comp_9)), startup__STATE_VARIABLE_CompTable_0_10, &startup__STATE_VARIABLE_CompTable_11);
        }
#line 1029 "startup.m"
      }
#line 1031 "startup.m"
    else
#line 1032 "startup.m"
      {
#line 1032 "startup.m"
        {
#line 1032 "startup.m"
          mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, ((MR_Box) (startup__PSPtr_6)), ((MR_Box) (startup__PDTotal_7)), startup__STATE_VARIABLE_CompTable_0_10, &startup__STATE_VARIABLE_CompTable_11);
        }
#line 1032 "startup.m"
      }
#line 1031 "startup.m"
    return startup__STATE_VARIABLE_CompTable_11;
#line 1031 "startup.m"
  }
#line 1024 "startup.m"
}

#line 1019 "startup.m"
static MR_Word MR_CALL 
startup__select_override_comp_2_f_0(
#line 1019 "startup.m"
  MR_Word startup__OverrideComp_4,
#line 1019 "startup.m"
  MR_Word startup__HeadVar__2_5)
#line 1019 "startup.m"
{
#line 1022 "startup.m"
  {
#line 1022 "startup.m"
    MR_bool startup__succeeded;
#line 1022 "startup.m"
    MR_Word startup__OverrideComp_3;

#line 1022 "startup.m"
    {
#line 1022 "startup.m"
      return startup__OverrideComp_3 = startup__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_f_0(startup__OverrideComp_4);
    }
#line 1022 "startup.m"
    return startup__OverrideComp_3;
#line 1022 "startup.m"
  }
#line 1019 "startup.m"
}

#line 1004 "startup.m"
static MR_Box MR_CALL 
startup__add_comp_tables_2_f_0_1(
#line 1004 "startup.m"
  MR_Box startup__closure_arg,
#line 1004 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1004 "startup.m"
  MR_Box startup__wrapper_arg_2)
#line 1004 "startup.m"
{
#line 1004 "startup.m"
  {
#line 1004 "startup.m"
    MR_Box startup__wrapper_arg_3;
#line 1004 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 1004 "startup.m"
    MR_Word startup__conv0_HeadVar__3_3;

#line 1004 "startup.m"
    {
#line 1004 "startup.m"
      startup__conv0_HeadVar__3_3 = measurements__add_inherit_to_inherit_2_f_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2));
    }
#line 1004 "startup.m"
    startup__wrapper_arg_3 = ((MR_Box) (startup__conv0_HeadVar__3_3));
#line 1004 "startup.m"
    return startup__wrapper_arg_3;
#line 1004 "startup.m"
  }
#line 1004 "startup.m"
}

#line 995 "startup.m"
static MR_Word MR_CALL 
startup__add_comp_tables_2_f_0(
#line 995 "startup.m"
  MR_Word startup__CompTableA_4,
#line 995 "startup.m"
  MR_Word startup__CompTableB_5)
#line 995 "startup.m"
{
#line 1001 "startup.m"
  {
#line 1001 "startup.m"
    MR_bool startup__succeeded;
#line 1001 "startup.m"
    MR_Word startup__CompTable_6;

#line 999 "startup.m"
    {
#line 999 "startup.m"
      startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__CompTableA_4);
    }
#line 1001 "startup.m"
    if (startup__succeeded)
#line 1000 "startup.m"
      startup__CompTable_6 = startup__CompTableB_5;
#line 1001 "startup.m"
    else
#line 1003 "startup.m"
      {
#line 1001 "startup.m"
        {
#line 1001 "startup.m"
          startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__CompTableB_5);
        }
#line 1003 "startup.m"
        if (startup__succeeded)
#line 1002 "startup.m"
          startup__CompTable_6 = startup__CompTableA_4;
#line 1003 "startup.m"
        else
#line 1004 "startup.m"
          {
#line 1004 "startup.m"
            {
#line 1004 "startup.m"
              startup__CompTable_6 = mercury__map__union_3_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_2[15], startup__CompTableA_4, startup__CompTableB_5);
            }
#line 1004 "startup.m"
          }
#line 1003 "startup.m"
      }
#line 1001 "startup.m"
    return startup__CompTable_6;
#line 1001 "startup.m"
  }
#line 995 "startup.m"
}

#line 1004 "startup.m"
static MR_Box MR_CALL 
startup__propagate_to_call_site_7_p_0_1(
#line 1004 "startup.m"
  MR_Box startup__closure_arg,
#line 1004 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1004 "startup.m"
  MR_Box startup__wrapper_arg_2)
#line 1004 "startup.m"
{
#line 1004 "startup.m"
  {
#line 1004 "startup.m"
    MR_Box startup__wrapper_arg_3;
#line 1004 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 1004 "startup.m"
    MR_Word startup__conv0_HeadVar__3_3;

#line 1004 "startup.m"
    {
#line 1004 "startup.m"
      startup__conv0_HeadVar__3_3 = measurements__add_inherit_to_inherit_2_f_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2));
    }
#line 1004 "startup.m"
    startup__wrapper_arg_3 = ((MR_Box) (startup__conv0_HeadVar__3_3));
#line 1004 "startup.m"
    return startup__wrapper_arg_3;
#line 1004 "startup.m"
  }
#line 1004 "startup.m"
}

#line 970 "startup.m"
static void MR_CALL 
startup__propagate_to_call_site_7_p_0(
#line 970 "startup.m"
  MR_Integer startup__CliqueNumber_8,
#line 970 "startup.m"
  MR_Word startup__PDPtr_9,
#line 970 "startup.m"
  MR_Word startup__CSDPtr_10,
#line 970 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_23,
#line 970 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_24,
#line 970 "startup.m"
  MR_Word startup__STATE_VARIABLE_PDCompTable_0_25,
#line 970 "startup.m"
  MR_Word * startup__STATE_VARIABLE_PDCompTable_26)
#line 970 "startup.m"
{
#line 974 "startup.m"
  {
#line 974 "startup.m"
    MR_bool startup__succeeded;
#line 974 "startup.m"
    MR_Word startup__CSD_13;
#line 974 "startup.m"
    MR_Word startup__CalleeOwn_14;
#line 974 "startup.m"
    MR_Word startup__CalleePDPtr_15;
#line 974 "startup.m"
    MR_Word startup__ChildCliquePtr_16;
#line 974 "startup.m"
    MR_Integer startup__ChildCliqueNumber_17;
#line 976 "startup.m"
    MR_Word startup__V_29_29;

#line 975 "startup.m"
    {
#line 975 "startup.m"
      profile__deep_lookup_call_site_dynamics_3_p_0(startup__STATE_VARIABLE_Deep_0_23, startup__CSDPtr_10, &startup__CSD_13);
    }
#line 976 "startup.m"
    startup__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_13, (MR_Integer) 0)));
#line 976 "startup.m"
    startup__CalleePDPtr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_13, (MR_Integer) 1)));
#line 976 "startup.m"
    startup__CalleeOwn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_13, (MR_Integer) 2)));
#line 978 "startup.m"
    {
#line 978 "startup.m"
      profile__deep_lookup_clique_index_3_p_0(startup__STATE_VARIABLE_Deep_0_23, startup__CalleePDPtr_15, &startup__ChildCliquePtr_16);
    }
#line 979 "startup.m"
    startup__ChildCliqueNumber_17 = (MR_Integer) startup__ChildCliquePtr_16;
#line 980 "startup.m"
    startup__succeeded = (startup__ChildCliqueNumber_17 == startup__CliqueNumber_8);
#line 983 "startup.m"
    if (startup__succeeded)
#line 982 "startup.m"
      {
#line 982 "startup.m"
        *startup__STATE_VARIABLE_PDCompTable_26 = startup__STATE_VARIABLE_PDCompTable_0_25;
#line 982 "startup.m"
        *startup__STATE_VARIABLE_Deep_24 = startup__STATE_VARIABLE_Deep_0_23;
#line 982 "startup.m"
      }
#line 983 "startup.m"
    else
#line 984 "startup.m"
      {
#line 984 "startup.m"
        MR_Word startup__ProcDesc0_18;
#line 984 "startup.m"
        MR_Word startup__CalleeDesc_19;
#line 984 "startup.m"
        MR_Word startup__CalleeTotal_20;
#line 984 "startup.m"
        MR_Word startup__ProcDesc_21;
#line 984 "startup.m"
        MR_Word startup__CSDCompTable_22;

#line 984 "startup.m"
        {
#line 984 "startup.m"
          profile__deep_lookup_pd_desc_3_p_0(startup__STATE_VARIABLE_Deep_0_23, startup__PDPtr_9, &startup__ProcDesc0_18);
        }
#line 985 "startup.m"
        {
#line 985 "startup.m"
          profile__deep_lookup_csd_desc_3_p_0(startup__STATE_VARIABLE_Deep_0_23, startup__CSDPtr_10, &startup__CalleeDesc_19);
        }
#line 986 "startup.m"
        {
#line 986 "startup.m"
          startup__CalleeTotal_20 = measurements__add_own_to_inherit_2_f_0(startup__CalleeOwn_14, startup__CalleeDesc_19);
        }
#line 987 "startup.m"
        {
#line 987 "startup.m"
          startup__ProcDesc_21 = measurements__add_inherit_to_inherit_2_f_0(startup__ProcDesc0_18, startup__CalleeTotal_20);
        }
#line 988 "startup.m"
        {
#line 988 "startup.m"
          profile__deep_update_pd_desc_4_p_0(startup__PDPtr_9, startup__ProcDesc_21, startup__STATE_VARIABLE_Deep_0_23, startup__STATE_VARIABLE_Deep_24);
        }
#line 989 "startup.m"
        {
#line 989 "startup.m"
          profile__deep_lookup_csd_comp_table_3_p_0(*startup__STATE_VARIABLE_Deep_24, startup__CSDPtr_10, &startup__CSDCompTable_22);
        }
#line 999 "startup.m"
        {
#line 999 "startup.m"
          startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__STATE_VARIABLE_PDCompTable_0_25);
        }
#line 1001 "startup.m"
        if (startup__succeeded)
#line 1000 "startup.m"
          *startup__STATE_VARIABLE_PDCompTable_26 = startup__CSDCompTable_22;
#line 1001 "startup.m"
        else
#line 1003 "startup.m"
          {
#line 1001 "startup.m"
            {
#line 1001 "startup.m"
              startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__CSDCompTable_22);
            }
#line 1003 "startup.m"
            if (startup__succeeded)
#line 1002 "startup.m"
              *startup__STATE_VARIABLE_PDCompTable_26 = startup__STATE_VARIABLE_PDCompTable_0_25;
#line 1003 "startup.m"
            else
#line 1004 "startup.m"
              {
#line 1004 "startup.m"
                {
#line 1004 "startup.m"
                  *startup__STATE_VARIABLE_PDCompTable_26 = mercury__map__union_3_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_2[14], startup__STATE_VARIABLE_PDCompTable_0_25, startup__CSDCompTable_22);
                }
#line 1004 "startup.m"
              }
#line 1003 "startup.m"
          }
#line 984 "startup.m"
      }
#line 974 "startup.m"
  }
#line 970 "startup.m"
}

#line 944 "startup.m"
static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0_1(
#line 944 "startup.m"
  MR_Box startup__closure_arg,
#line 944 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 944 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 944 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 944 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 944 "startup.m"
  MR_Box * startup__wrapper_arg_5)
#line 944 "startup.m"
{
#line 944 "startup.m"
  {
#line 944 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 944 "startup.m"
    MR_Word startup__conv1_STATE_VARIABLE_Deep_24;
#line 944 "startup.m"
    MR_Word startup__conv0_STATE_VARIABLE_PDCompTable_26;

#line 944 "startup.m"
    {
#line 944 "startup.m"
      startup__propagate_to_call_site_7_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_STATE_VARIABLE_Deep_24, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_STATE_VARIABLE_PDCompTable_26);
    }
#line 944 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_STATE_VARIABLE_Deep_24));
#line 944 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_STATE_VARIABLE_PDCompTable_26));
#line 944 "startup.m"
  }
#line 944 "startup.m"
}

#line 936 "startup.m"
static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0(
#line 936 "startup.m"
  MR_Integer startup__CliqueNumber_10,
#line 936 "startup.m"
  MR_Word startup__ParentCSDPtr_11,
#line 936 "startup.m"
  MR_Word startup__PDPtr_12,
#line 936 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_26,
#line 936 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_27,
#line 936 "startup.m"
  MR_Word startup__STATE_VARIABLE_SumTable_0_28,
#line 936 "startup.m"
  MR_Word * startup__STATE_VARIABLE_SumTable_29,
#line 936 "startup.m"
  MR_Word startup__STATE_VARIABLE_OverrideTable_0_30,
#line 936 "startup.m"
  MR_Word * startup__STATE_VARIABLE_OverrideTable_31)
#line 936 "startup.m"
{
#line 942 "startup.m"
  {
#line 942 "startup.m"
    MR_bool startup__succeeded;
#line 942 "startup.m"
    MR_Word startup__CSDPtrs_16;
#line 942 "startup.m"
    MR_Word startup__PDCompTable_17;
#line 942 "startup.m"
    MR_Word startup__ProcDesc_18;
#line 942 "startup.m"
    MR_Word startup__ProcOwn_19;
#line 942 "startup.m"
    MR_Word startup__ProcTotal_20;
#line 942 "startup.m"
    MR_Word startup__PD_21;
#line 942 "startup.m"
    MR_Word startup__PSPtr_22;
#line 942 "startup.m"
    MR_Word startup__PS_23;
#line 942 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 6)));
#line 942 "startup.m"
    MR_Word startup__V_33_33;
#line 942 "startup.m"
    MR_Word startup__STATE_VARIABLE_Deep_34_34;
#line 942 "startup.m"
    MR_Word startup__V_35_35;
#line 942 "startup.m"
    MR_Word startup__STATE_VARIABLE_Deep_36_36;
#line 943 "startup.m"
    MR_Word startup__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 0)));
#line 943 "startup.m"
    MR_String startup__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 1)));
#line 943 "startup.m"
    MR_String startup__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 2)));
#line 943 "startup.m"
    MR_String startup__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 3)));
#line 943 "startup.m"
    MR_Word startup__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 4)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 5)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 7)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 8)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 9)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 10)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 11)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 12)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 13)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 14)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 15)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 16)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 17)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 18)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 19)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 20)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 21)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 22)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 23)));
#line 943 "startup.m"
    MR_ArrayPtr startup__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 24)));
#line 943 "startup.m"
    MR_Word startup__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 25)));
#line 943 "startup.m"
    MR_Word startup__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 26)));
#line 943 "startup.m"
    MR_Word startup__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 27)));
#line 943 "startup.m"
    MR_Word startup__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 28)));
#line 944 "startup.m"
    MR_Box startup__conv3_STATE_VARIABLE_Deep_34_34;
#line 944 "startup.m"
    MR_Box startup__conv2_PDCompTable_17;
#line 954 "startup.m"
    MR_ArrayPtr startup__V_69_69;
#line 954 "startup.m"
    MR_Word startup__V_70_70;
#line 956 "startup.m"
    MR_Word startup__V_38_38;
#line 956 "startup.m"
    MR_Word startup__V_71_71;
#line 956 "startup.m"
    MR_String startup__V_72_72;
#line 956 "startup.m"
    MR_String startup__V_73_73;
#line 956 "startup.m"
    MR_String startup__V_74_74;
#line 956 "startup.m"
    MR_String startup__V_75_75;
#line 956 "startup.m"
    MR_String startup__V_76_76;
#line 956 "startup.m"
    MR_Integer startup__V_77_77;
#line 956 "startup.m"
    MR_Word startup__V_78_78;
#line 956 "startup.m"
    MR_ArrayPtr startup__V_79_79;
#line 956 "startup.m"
    MR_ArrayPtr startup__V_80_80;
#line 956 "startup.m"
    MR_Word startup__V_81_81;

#line 943 "startup.m"
    {
#line 943 "startup.m"
      startup__flat_call_sites_3_p_0(startup__V_32_32, startup__PDPtr_12, &startup__CSDPtrs_16);
    }
#line 944 "startup.m"
    {
#line 944 "startup.m"
      startup__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 944 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_33_33, 0) = ((MR_Box) (&startup_scalar_common_10[1]));
#line 944 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_33_33, 1) = ((MR_Box) (startup__propagate_to_proc_dynamic_9_p_0_1));
#line 944 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 944 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_33_33, 3) = ((MR_Box) (startup__CliqueNumber_10));
#line 944 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_33_33, 4) = ((MR_Box) (startup__PDPtr_12));
#line 944 "startup.m"
    }
#line 945 "startup.m"
    {
#line 945 "startup.m"
      startup__V_35_35 = mercury__map__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0);
    }
#line 944 "startup.m"
    {
#line 944 "startup.m"
      mercury__list__foldl2_6_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &profile__profile__type_ctor_info_deep_0, (MR_Word) &startup_scalar_common_2[3], startup__V_33_33, startup__CSDPtrs_16, ((MR_Box) (startup__STATE_VARIABLE_Deep_0_26)), &startup__conv3_STATE_VARIABLE_Deep_34_34, ((MR_Box) (startup__V_35_35)), &startup__conv2_PDCompTable_17);
    }
#line 944 "startup.m"
    startup__STATE_VARIABLE_Deep_34_34 = ((MR_Word) startup__conv3_STATE_VARIABLE_Deep_34_34);
#line 944 "startup.m"
    startup__PDCompTable_17 = ((MR_Word) startup__conv2_PDCompTable_17);
#line 946 "startup.m"
    {
#line 946 "startup.m"
      profile__deep_update_pd_comp_table_4_p_0(startup__PDPtr_12, startup__PDCompTable_17, startup__STATE_VARIABLE_Deep_34_34, &startup__STATE_VARIABLE_Deep_36_36);
    }
#line 948 "startup.m"
    {
#line 948 "startup.m"
      profile__deep_lookup_pd_desc_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__PDPtr_12, &startup__ProcDesc_18);
    }
#line 949 "startup.m"
    {
#line 949 "startup.m"
      profile__deep_lookup_pd_own_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__PDPtr_12, &startup__ProcOwn_19);
    }
#line 950 "startup.m"
    {
#line 950 "startup.m"
      startup__ProcTotal_20 = measurements__add_own_to_inherit_2_f_0(startup__ProcOwn_19, startup__ProcDesc_18);
    }
#line 952 "startup.m"
    {
#line 952 "startup.m"
      *startup__STATE_VARIABLE_SumTable_29 = startup__add_comp_tables_2_f_0(startup__STATE_VARIABLE_SumTable_0_28, startup__PDCompTable_17);
    }
#line 953 "startup.m"
    {
#line 953 "startup.m"
      profile__deep_lookup_proc_dynamics_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__PDPtr_12, &startup__PD_21);
    }
#line 954 "startup.m"
    startup__PSPtr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_21, (MR_Integer) 0)));
#line 954 "startup.m"
    startup__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_21, (MR_Integer) 1)));
#line 954 "startup.m"
    startup__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_21, (MR_Integer) 2)));
#line 955 "startup.m"
    {
#line 955 "startup.m"
      profile__deep_lookup_proc_statics_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__PSPtr_22, &startup__PS_23);
    }
#line 956 "startup.m"
    startup__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 0)));
#line 956 "startup.m"
    startup__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 1)));
#line 956 "startup.m"
    startup__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 2)));
#line 956 "startup.m"
    startup__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 3)));
#line 956 "startup.m"
    startup__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 4)));
#line 956 "startup.m"
    startup__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 5)));
#line 956 "startup.m"
    startup__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 6)));
#line 956 "startup.m"
    startup__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 7)));
#line 956 "startup.m"
    startup__V_79_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 8)));
#line 956 "startup.m"
    startup__V_80_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 9)));
#line 956 "startup.m"
    startup__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 10)));
#line 956 "startup.m"
    startup__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 11)));
#line 956 "startup.m"
    startup__succeeded = (startup__V_38_38 == (MR_Integer) 0);
#line 958 "startup.m"
    if (startup__succeeded)
#line 957 "startup.m"
      {
#line 957 "startup.m"
        *startup__STATE_VARIABLE_OverrideTable_31 = startup__add_to_override_3_f_0(startup__STATE_VARIABLE_OverrideTable_0_30, startup__PSPtr_22, startup__ProcTotal_20);
      }
#line 958 "startup.m"
    else
#line 958 "startup.m"
      *startup__STATE_VARIABLE_OverrideTable_31 = startup__STATE_VARIABLE_OverrideTable_0_30;
#line 962 "startup.m"
    {
#line 962 "startup.m"
      startup__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__ParentCSDPtr_11);
    }
#line 966 "startup.m"
    if (startup__succeeded)
#line 963 "startup.m"
      {
#line 963 "startup.m"
        MR_Word startup__ParentDesc0_24;
#line 963 "startup.m"
        MR_Word startup__ParentDesc_25;

#line 963 "startup.m"
        {
#line 963 "startup.m"
          profile__deep_lookup_csd_desc_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__ParentCSDPtr_11, &startup__ParentDesc0_24);
        }
#line 964 "startup.m"
        {
#line 964 "startup.m"
          startup__ParentDesc_25 = measurements__add_inherit_to_inherit_2_f_0(startup__ParentDesc0_24, startup__ProcTotal_20);
        }
#line 965 "startup.m"
        {
#line 965 "startup.m"
          profile__deep_update_csd_desc_4_p_0(startup__ParentCSDPtr_11, startup__ParentDesc_25, startup__STATE_VARIABLE_Deep_36_36, startup__STATE_VARIABLE_Deep_27);
#line 965 "startup.m"
          return;
        }
#line 963 "startup.m"
      }
#line 966 "startup.m"
    else
#line 966 "startup.m"
      *startup__STATE_VARIABLE_Deep_27 = startup__STATE_VARIABLE_Deep_36_36;
#line 942 "startup.m"
  }
#line 936 "startup.m"
}

#line 1016 "startup.m"
static MR_Box MR_CALL 
startup__propagate_to_clique_4_p_0_2(
#line 1016 "startup.m"
  MR_Box startup__closure_arg,
#line 1016 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1016 "startup.m"
  MR_Box startup__wrapper_arg_2)
#line 1016 "startup.m"
{
#line 1016 "startup.m"
  {
#line 1016 "startup.m"
    MR_Box startup__wrapper_arg_3;
#line 1016 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 1016 "startup.m"
    MR_Word startup__conv7_OverrideComp_3;

#line 1016 "startup.m"
    {
#line 1016 "startup.m"
      startup__conv7_OverrideComp_3 = startup__select_override_comp_2_f_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2));
    }
#line 1016 "startup.m"
    startup__wrapper_arg_3 = ((MR_Box) (startup__conv7_OverrideComp_3));
#line 1016 "startup.m"
    return startup__wrapper_arg_3;
#line 1016 "startup.m"
  }
#line 1016 "startup.m"
}

#line 922 "startup.m"
static void MR_CALL 
startup__propagate_to_clique_4_p_0_1(
#line 922 "startup.m"
  MR_Box startup__closure_arg,
#line 922 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 922 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 922 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 922 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 922 "startup.m"
  MR_Box * startup__wrapper_arg_5,
#line 922 "startup.m"
  MR_Box startup__wrapper_arg_6,
#line 922 "startup.m"
  MR_Box * startup__wrapper_arg_7)
#line 922 "startup.m"
{
#line 922 "startup.m"
  {
#line 922 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 922 "startup.m"
    MR_Word startup__conv3_STATE_VARIABLE_Deep_27;
#line 922 "startup.m"
    MR_Word startup__conv2_STATE_VARIABLE_SumTable_29;
#line 922 "startup.m"
    MR_Word startup__conv1_STATE_VARIABLE_OverrideTable_31;

#line 922 "startup.m"
    {
#line 922 "startup.m"
      startup__propagate_to_proc_dynamic_9_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv3_STATE_VARIABLE_Deep_27, ((MR_Word) startup__wrapper_arg_4), &startup__conv2_STATE_VARIABLE_SumTable_29, ((MR_Word) startup__wrapper_arg_6), &startup__conv1_STATE_VARIABLE_OverrideTable_31);
    }
#line 922 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv3_STATE_VARIABLE_Deep_27));
#line 922 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv2_STATE_VARIABLE_SumTable_29));
#line 922 "startup.m"
    *startup__wrapper_arg_7 = ((MR_Box) (startup__conv1_STATE_VARIABLE_OverrideTable_31));
#line 922 "startup.m"
  }
#line 922 "startup.m"
}

#line 917 "startup.m"
static void MR_CALL 
startup__propagate_to_clique_4_p_0(
#line 917 "startup.m"
  MR_Integer startup__CliqueNumber_5,
#line 917 "startup.m"
  MR_Word startup__Members_6,
#line 917 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_16,
#line 917 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_17)
#line 917 "startup.m"
{
#line 920 "startup.m"
  {
#line 920 "startup.m"
    MR_bool startup__succeeded;
#line 920 "startup.m"
    MR_Word startup__TypeCtorInfo_63_63;
#line 920 "startup.m"
    MR_Word startup__TypeCtorInfo_64_64;
#line 920 "startup.m"
    MR_Word startup__TypeInfo_67_67;
#line 920 "startup.m"
    MR_Word startup__ParentCSDPtr_8;
#line 920 "startup.m"
    MR_Word startup__SumTable_9;
#line 920 "startup.m"
    MR_Word startup__OverrideMap_10;
#line 920 "startup.m"
    MR_ArrayPtr startup__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 11)));
#line 920 "startup.m"
    MR_Word startup__V_19_19;
#line 920 "startup.m"
    MR_Word startup__STATE_VARIABLE_Deep_20_20;
#line 920 "startup.m"
    MR_Word startup__V_21_21;
#line 920 "startup.m"
    MR_Word startup__V_22_22;
#line 921 "startup.m"
    MR_Word startup__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 0)));
#line 921 "startup.m"
    MR_String startup__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 1)));
#line 921 "startup.m"
    MR_String startup__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 2)));
#line 921 "startup.m"
    MR_String startup__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 3)));
#line 921 "startup.m"
    MR_Word startup__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 4)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 5)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 6)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 7)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 8)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 9)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 10)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 12)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 13)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 14)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 15)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 16)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 17)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 18)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 19)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 20)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 21)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 22)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 23)));
#line 921 "startup.m"
    MR_ArrayPtr startup__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 24)));
#line 921 "startup.m"
    MR_Word startup__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 25)));
#line 921 "startup.m"
    MR_Word startup__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 26)));
#line 921 "startup.m"
    MR_Word startup__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 27)));
#line 921 "startup.m"
    MR_Word startup__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 28)));
#line 921 "startup.m"
    MR_Box startup__conv0_ParentCSDPtr_8;
#line 922 "startup.m"
    MR_Box startup__conv6_STATE_VARIABLE_Deep_20_20;
#line 922 "startup.m"
    MR_Box startup__conv5_SumTable_9;
#line 922 "startup.m"
    MR_Box startup__conv4_OverrideMap_10;

#line 921 "startup.m"
    {
#line 921 "startup.m"
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) startup__V_18_18, startup__CliqueNumber_5, &startup__conv0_ParentCSDPtr_8);
    }
#line 921 "startup.m"
    startup__ParentCSDPtr_8 = ((MR_Word) startup__conv0_ParentCSDPtr_8);
#line 922 "startup.m"
    {
#line 922 "startup.m"
      startup__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 922 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_19_19, 0) = ((MR_Box) (&startup_scalar_common_11[1]));
#line 922 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_19_19, 1) = ((MR_Box) (startup__propagate_to_clique_4_p_0_1));
#line 922 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 922 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_19_19, 3) = ((MR_Box) (startup__CliqueNumber_5));
#line 922 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_19_19, 4) = ((MR_Box) (startup__ParentCSDPtr_8));
#line 922 "startup.m"
    }
#line 4490 "startup.c"
    startup__TypeCtorInfo_63_63 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
#line 4492 "startup.c"
    startup__TypeCtorInfo_64_64 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 923 "startup.m"
    {
#line 923 "startup.m"
      startup__V_21_21 = mercury__map__init_0_f_0(startup__TypeCtorInfo_63_63, startup__TypeCtorInfo_64_64);
    }
#line 923 "startup.m"
    {
#line 923 "startup.m"
      startup__V_22_22 = mercury__map__init_0_f_0(startup__TypeCtorInfo_63_63, startup__TypeCtorInfo_64_64);
    }
#line 4504 "startup.c"
    startup__TypeInfo_67_67 = (MR_Word) &startup_scalar_common_2[3];
#line 922 "startup.m"
    {
#line 922 "startup.m"
      mercury__list__foldl3_8_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &profile__profile__type_ctor_info_deep_0, startup__TypeInfo_67_67, startup__TypeInfo_67_67, startup__V_19_19, startup__Members_6, ((MR_Box) (startup__STATE_VARIABLE_Deep_0_16)), &startup__conv6_STATE_VARIABLE_Deep_20_20, ((MR_Box) (startup__V_21_21)), &startup__conv5_SumTable_9, ((MR_Box) (startup__V_22_22)), &startup__conv4_OverrideMap_10);
    }
#line 922 "startup.m"
    startup__STATE_VARIABLE_Deep_20_20 = ((MR_Word) startup__conv6_STATE_VARIABLE_Deep_20_20);
#line 922 "startup.m"
    startup__SumTable_9 = ((MR_Word) startup__conv5_SumTable_9);
#line 922 "startup.m"
    startup__OverrideMap_10 = ((MR_Word) startup__conv4_OverrideMap_10);
#line 924 "startup.m"
    {
#line 924 "startup.m"
      startup__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(startup__STATE_VARIABLE_Deep_20_20, startup__ParentCSDPtr_8);
    }
#line 932 "startup.m"
    if (startup__succeeded)
#line 925 "startup.m"
      {
#line 925 "startup.m"
        MR_Word startup__ParentCSD_11;
#line 925 "startup.m"
        MR_Word startup__ParentOwn_12;
#line 925 "startup.m"
        MR_Word startup__ParentDesc0_13;
#line 925 "startup.m"
        MR_Word startup__ParentDesc_14;
#line 925 "startup.m"
        MR_Word startup__CSDCompTable_15;
#line 925 "startup.m"
        MR_Word startup__STATE_VARIABLE_Deep_23_23;
#line 926 "startup.m"
        MR_Word startup__V_53_53;
#line 926 "startup.m"
        MR_Word startup__V_54_54;

#line 925 "startup.m"
        {
#line 925 "startup.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(startup__STATE_VARIABLE_Deep_20_20, startup__ParentCSDPtr_8, &startup__ParentCSD_11);
        }
#line 926 "startup.m"
        startup__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ParentCSD_11, (MR_Integer) 0)));
#line 926 "startup.m"
        startup__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ParentCSD_11, (MR_Integer) 1)));
#line 926 "startup.m"
        startup__ParentOwn_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ParentCSD_11, (MR_Integer) 2)));
#line 927 "startup.m"
        {
#line 927 "startup.m"
          profile__deep_lookup_csd_desc_3_p_0(startup__STATE_VARIABLE_Deep_20_20, startup__ParentCSDPtr_8, &startup__ParentDesc0_13);
        }
#line 928 "startup.m"
        {
#line 928 "startup.m"
          startup__ParentDesc_14 = measurements__subtract_own_from_inherit_2_f_0(startup__ParentOwn_12, startup__ParentDesc0_13);
        }
#line 929 "startup.m"
        {
#line 929 "startup.m"
          profile__deep_update_csd_desc_4_p_0(startup__ParentCSDPtr_8, startup__ParentDesc_14, startup__STATE_VARIABLE_Deep_20_20, &startup__STATE_VARIABLE_Deep_23_23);
        }
#line 1011 "startup.m"
        {
#line 1011 "startup.m"
          startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__OverrideMap_10);
        }
#line 1013 "startup.m"
        if (startup__succeeded)
#line 1012 "startup.m"
          startup__CSDCompTable_15 = startup__SumTable_9;
#line 1013 "startup.m"
        else
#line 1015 "startup.m"
          {
#line 1013 "startup.m"
            {
#line 1013 "startup.m"
              startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__SumTable_9);
            }
#line 1015 "startup.m"
            if (startup__succeeded)
#line 1014 "startup.m"
              startup__CSDCompTable_15 = startup__OverrideMap_10;
#line 1015 "startup.m"
            else
#line 1016 "startup.m"
              {
#line 1016 "startup.m"
                {
#line 1016 "startup.m"
                  startup__CSDCompTable_15 = mercury__map__union_3_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_2[13], startup__OverrideMap_10, startup__SumTable_9);
                }
#line 1016 "startup.m"
              }
#line 1015 "startup.m"
          }
#line 931 "startup.m"
        {
#line 931 "startup.m"
          profile__deep_update_csd_comp_table_4_p_0(startup__ParentCSDPtr_8, startup__CSDCompTable_15, startup__STATE_VARIABLE_Deep_23_23, startup__STATE_VARIABLE_Deep_17);
#line 931 "startup.m"
          return;
        }
#line 925 "startup.m"
      }
#line 932 "startup.m"
    else
#line 932 "startup.m"
      *startup__STATE_VARIABLE_Deep_17 = startup__STATE_VARIABLE_Deep_20_20;
#line 920 "startup.m"
  }
#line 917 "startup.m"
}

#line 905 "startup.m"
static void MR_CALL 
startup__accumulate_ps_costs_6_p_0(
#line 905 "startup.m"
  MR_Word startup__Deep_7,
#line 905 "startup.m"
  MR_Word startup__PSPtr_8,
#line 905 "startup.m"
  MR_Word startup__Own0_9,
#line 905 "startup.m"
  MR_Word * startup__Own_10,
#line 905 "startup.m"
  MR_Word startup__Desc0_11,
#line 905 "startup.m"
  MR_Word * startup__Desc_12)
#line 905 "startup.m"
{
#line 909 "startup.m"
  {
#line 909 "startup.m"
    MR_bool startup__succeeded;
#line 909 "startup.m"
    MR_Word startup__PSOwn_13;
#line 909 "startup.m"
    MR_Word startup__PSDesc_14;

#line 910 "startup.m"
    {
#line 910 "startup.m"
      profile__deep_lookup_ps_own_3_p_0(startup__Deep_7, startup__PSPtr_8, &startup__PSOwn_13);
    }
#line 911 "startup.m"
    {
#line 911 "startup.m"
      profile__deep_lookup_ps_desc_3_p_0(startup__Deep_7, startup__PSPtr_8, &startup__PSDesc_14);
    }
#line 912 "startup.m"
    {
#line 912 "startup.m"
      *startup__Own_10 = measurements__add_own_to_own_2_f_0(startup__Own0_9, startup__PSOwn_13);
    }
#line 913 "startup.m"
    {
#line 913 "startup.m"
      *startup__Desc_12 = measurements__add_inherit_to_inherit_2_f_0(startup__Desc0_11, startup__PSDesc_14);
    }
#line 909 "startup.m"
  }
#line 905 "startup.m"
}

#line 888 "startup.m"
static void MR_CALL 
startup__summarize_proc_static_coverage_4_p_0(
#line 888 "startup.m"
  MR_Integer startup__Index_5,
#line 888 "startup.m"
  MR_Word startup__PS_6,
#line 888 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CoverageArray_0_11,
#line 888 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CoverageArray_12)
#line 888 "startup.m"
{
#line 892 "startup.m"
  {
#line 892 "startup.m"
    MR_bool startup__succeeded;
#line 892 "startup.m"
    MR_Word startup__MaybeCoverage_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 10)));
#line 893 "startup.m"
    MR_Word startup__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 0)));
#line 893 "startup.m"
    MR_String startup__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 1)));
#line 893 "startup.m"
    MR_String startup__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 2)));
#line 893 "startup.m"
    MR_String startup__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 3)));
#line 893 "startup.m"
    MR_String startup__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 4)));
#line 893 "startup.m"
    MR_String startup__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 5)));
#line 893 "startup.m"
    MR_Integer startup__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 6)));
#line 893 "startup.m"
    MR_Word startup__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 7)));
#line 893 "startup.m"
    MR_ArrayPtr startup__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 8)));
#line 893 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 9)));
#line 893 "startup.m"
    MR_Word startup__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 11)));

#line 898 "startup.m"
    if ((startup__MaybeCoverage_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 899 "startup.m"
      {
#line 900 "startup.m"
        {
#line 900 "startup.m"
          mercury__require__unexpected_3_p_0((MR_String) "startup", (MR_String) "predicate \140startup.summarize_proc_static_coverage\'/4", (MR_String) "no coverage data in proc static");
#line 900 "startup.m"
          return;
        }
#line 899 "startup.m"
      }
#line 898 "startup.m"
    else
#line 895 "startup.m"
      {
#line 895 "startup.m"
        MR_ArrayPtr startup__Coverage0_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__MaybeCoverage_8, (MR_Integer) 0)));
#line 895 "startup.m"
        MR_Word startup__Coverage_10;
#line 897 "startup.m"
        MR_ArrayPtr startup__conv0_STATE_VARIABLE_CoverageArray_12;

#line 896 "startup.m"
        {
#line 896 "startup.m"
          measurements__array_to_static_coverage_2_p_0(startup__Coverage0_9, &startup__Coverage_10);
        }
#line 897 "startup.m"
        {
#line 897 "startup.m"
          mercury__array__set_4_p_0((MR_Word) &startup_scalar_common_1[16], startup__Index_5, ((MR_Box) (startup__Coverage_10)), (MR_ArrayPtr) startup__STATE_VARIABLE_CoverageArray_0_11, &startup__conv0_STATE_VARIABLE_CoverageArray_12);
        }
#line 897 "startup.m"
        *startup__STATE_VARIABLE_CoverageArray_12 = (MR_ArrayPtr) startup__conv0_STATE_VARIABLE_CoverageArray_12;
#line 895 "startup.m"
      }
#line 892 "startup.m"
  }
#line 888 "startup.m"
}

#line 883 "startup.m"
static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0_1(
#line 883 "startup.m"
  MR_Box startup__closure_arg,
#line 883 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 883 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 883 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 883 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 883 "startup.m"
{
#line 883 "startup.m"
  {
#line 883 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 883 "startup.m"
    MR_ArrayPtr startup__conv0_STATE_VARIABLE_CoverageArray_12;

#line 883 "startup.m"
    {
#line 883 "startup.m"
      startup__summarize_proc_static_coverage_4_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv0_STATE_VARIABLE_CoverageArray_12);
    }
#line 883 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv0_STATE_VARIABLE_CoverageArray_12));
#line 883 "startup.m"
  }
#line 883 "startup.m"
}

#line 878 "startup.m"
static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0(
#line 878 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_6,
#line 878 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_7)
#line 878 "startup.m"
{
#line 880 "startup.m"
  {
#line 880 "startup.m"
    MR_bool startup__succeeded;
#line 880 "startup.m"
    MR_Integer startup__NPS_4;
#line 880 "startup.m"
    MR_ArrayPtr startup__CoverageArray_5;
#line 880 "startup.m"
    MR_Word startup__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 0)));
#line 880 "startup.m"
    MR_ArrayPtr startup__V_11_11;
#line 880 "startup.m"
    MR_Word startup__V_12_12;
#line 880 "startup.m"
    MR_Word startup__V_14_14;
#line 880 "startup.m"
    MR_ArrayPtr startup__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 8)));
#line 881 "startup.m"
    MR_String startup__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 1)));
#line 881 "startup.m"
    MR_String startup__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 2)));
#line 881 "startup.m"
    MR_String startup__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 3)));
#line 881 "startup.m"
    MR_Word startup__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 4)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 5)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 6)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 7)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 9)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 10)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 11)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 12)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 13)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 14)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 15)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 16)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 17)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 18)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 19)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 20)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 21)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 22)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 23)));
#line 881 "startup.m"
    MR_ArrayPtr startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 24)));
#line 881 "startup.m"
    MR_Word startup__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 25)));
#line 881 "startup.m"
    MR_Word startup__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 26)));
#line 881 "startup.m"
    MR_Word startup__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 27)));
#line 881 "startup.m"
    MR_Word startup__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 28)));
#line 881 "startup.m"
    MR_String startup__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 0)));
#line 881 "startup.m"
    MR_Integer startup__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 1)));
#line 881 "startup.m"
    MR_Integer startup__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 2)));
#line 881 "startup.m"
    MR_Integer startup__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 3)));
#line 881 "startup.m"
    MR_Integer startup__V_47_47;
#line 881 "startup.m"
    MR_Integer startup__V_48_48;
#line 881 "startup.m"
    MR_Integer startup__V_49_49;
#line 881 "startup.m"
    MR_Integer startup__V_50_50;
#line 881 "startup.m"
    MR_Word startup__V_51_51;
#line 885 "startup.m"
    MR_ArrayPtr startup__conv1_V_11_11;
#line 882 "startup.m"
    MR_Box startup__conv2_CoverageArray_5;
#line 886 "startup.m"
    MR_Word startup__V_80_80;
#line 886 "startup.m"
    MR_String startup__V_81_81;
#line 886 "startup.m"
    MR_String startup__V_82_82;
#line 886 "startup.m"
    MR_String startup__V_83_83;
#line 886 "startup.m"
    MR_Word startup__V_84_84;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_85_85;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_86_86;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_87_87;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_88_88;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_89_89;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_90_90;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_91_91;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_92_92;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_93_93;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_94_94;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_95_95;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_96_96;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_97_97;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_98_98;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_99_99;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_100_100;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_101_101;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_102_102;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_103_103;
#line 886 "startup.m"
    MR_ArrayPtr startup__V_104_104;
#line 886 "startup.m"
    MR_Word startup__V_105_105;
#line 886 "startup.m"
    MR_Word startup__V_107_107;
#line 886 "startup.m"
    MR_Word startup__V_108_108;
#line 886 "startup.m"
    MR_Word startup__V_106_106;

#line 881 "startup.m"
    startup__NPS_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 4)));
#line 881 "startup.m"
    startup__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 5)));
#line 881 "startup.m"
    startup__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 6)));
#line 881 "startup.m"
    startup__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 7)));
#line 881 "startup.m"
    startup__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 8)));
#line 881 "startup.m"
    startup__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 9)));
#line 885 "startup.m"
    {
#line 885 "startup.m"
      startup__V_12_12 = measurements__zero_static_coverage_0_f_0();
    }
#line 885 "startup.m"
    {
#line 885 "startup.m"
      startup__conv1_V_11_11 = mercury__array__init_2_f_0((MR_Word) &startup_scalar_common_1[16], startup__NPS_4, ((MR_Box) (startup__V_12_12)));
    }
#line 885 "startup.m"
    startup__V_11_11 = (MR_ArrayPtr) startup__conv1_V_11_11;
#line 882 "startup.m"
    {
#line 882 "startup.m"
      array_util__array_foldl_from_1_4_p_1((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_Word) &startup_scalar_common_1[18], (MR_Word) &startup_scalar_common_2[12], (MR_ArrayPtr) startup__V_22_22, ((MR_Box) (startup__V_11_11)), &startup__conv2_CoverageArray_5);
    }
#line 882 "startup.m"
    startup__CoverageArray_5 = ((MR_ArrayPtr) startup__conv2_CoverageArray_5);
#line 886 "startup.m"
    {
#line 886 "startup.m"
      startup__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(1), startup__V_14_14, 0) = ((MR_Box) (startup__CoverageArray_5));
#line 886 "startup.m"
    }
#line 886 "startup.m"
    startup__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 0)));
#line 886 "startup.m"
    startup__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 1)));
#line 886 "startup.m"
    startup__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 2)));
#line 886 "startup.m"
    startup__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 3)));
#line 886 "startup.m"
    startup__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 4)));
#line 886 "startup.m"
    startup__V_85_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 5)));
#line 886 "startup.m"
    startup__V_86_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 6)));
#line 886 "startup.m"
    startup__V_87_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 7)));
#line 886 "startup.m"
    startup__V_88_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 8)));
#line 886 "startup.m"
    startup__V_89_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 9)));
#line 886 "startup.m"
    startup__V_90_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 10)));
#line 886 "startup.m"
    startup__V_91_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 11)));
#line 886 "startup.m"
    startup__V_92_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 12)));
#line 886 "startup.m"
    startup__V_93_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 13)));
#line 886 "startup.m"
    startup__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 14)));
#line 886 "startup.m"
    startup__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 15)));
#line 886 "startup.m"
    startup__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 16)));
#line 886 "startup.m"
    startup__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 17)));
#line 886 "startup.m"
    startup__V_98_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 18)));
#line 886 "startup.m"
    startup__V_99_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 19)));
#line 886 "startup.m"
    startup__V_100_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 20)));
#line 886 "startup.m"
    startup__V_101_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 21)));
#line 886 "startup.m"
    startup__V_102_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 22)));
#line 886 "startup.m"
    startup__V_103_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 23)));
#line 886 "startup.m"
    startup__V_104_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 24)));
#line 886 "startup.m"
    startup__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 25)));
#line 886 "startup.m"
    startup__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 26)));
#line 886 "startup.m"
    startup__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 27)));
#line 886 "startup.m"
    startup__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 28)));
#line 886 "startup.m"
    {
#line 886 "startup.m"
      MR_Word base;
#line 886 "startup.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 886 "startup.m"
      *startup__STATE_VARIABLE_Deep_7 = base;
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__V_80_80));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__V_81_81));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__V_82_82));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__V_83_83));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__V_84_84));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__V_85_85));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__V_86_86));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__V_87_87));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__V_88_88));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__V_89_89));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__V_90_90));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__V_91_91));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__V_92_92));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__V_93_93));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__V_94_94));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__V_95_95));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__V_96_96));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__V_97_97));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__V_98_98));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__V_99_99));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__V_100_100));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__V_101_101));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__V_102_102));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__V_103_103));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__V_104_104));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__V_105_105));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__V_14_14));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__V_107_107));
#line 886 "startup.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__V_108_108));
#line 886 "startup.m"
    }
#line 880 "startup.m"
  }
#line 878 "startup.m"
}

#line 873 "startup.m"
static void MR_CALL 
startup__summarize_module_costs_2_f_0_1(
#line 873 "startup.m"
  MR_Box startup__closure_arg,
#line 873 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 873 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 873 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 873 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 873 "startup.m"
  MR_Box * startup__wrapper_arg_5)
#line 873 "startup.m"
{
#line 873 "startup.m"
  {
#line 873 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 873 "startup.m"
    MR_Word startup__conv1_Own_10;
#line 873 "startup.m"
    MR_Word startup__conv0_Desc_12;

#line 873 "startup.m"
    {
#line 873 "startup.m"
      startup__accumulate_ps_costs_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_Own_10, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_Desc_12);
    }
#line 873 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_Own_10));
#line 873 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_Desc_12));
#line 873 "startup.m"
  }
#line 873 "startup.m"
}

#line 869 "startup.m"
static MR_Word MR_CALL 
startup__summarize_module_costs_2_f_0(
#line 869 "startup.m"
  MR_Word startup__Deep_4,
#line 869 "startup.m"
  MR_Word startup__ModuleData0_5)
#line 869 "startup.m"
{
#line 871 "startup.m"
  {
#line 871 "startup.m"
    MR_bool startup__succeeded;
#line 871 "startup.m"
    MR_Word startup__ModuleData_6;
#line 871 "startup.m"
    MR_Word startup__Own0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ModuleData0_5, (MR_Integer) 0)));
#line 871 "startup.m"
    MR_Word startup__Desc0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ModuleData0_5, (MR_Integer) 1)));
#line 871 "startup.m"
    MR_Word startup__PSPtrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ModuleData0_5, (MR_Integer) 2)));
#line 871 "startup.m"
    MR_Word startup__Own_10;
#line 871 "startup.m"
    MR_Word startup__Desc_11;
#line 871 "startup.m"
    MR_Word startup__V_12_12;
#line 873 "startup.m"
    MR_Box startup__conv3_Own_10;
#line 873 "startup.m"
    MR_Box startup__conv2_Desc_11;

#line 873 "startup.m"
    {
#line 873 "startup.m"
      startup__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 873 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_12_12, 0) = ((MR_Box) (&startup_scalar_common_3[3]));
#line 873 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_12_12, 1) = ((MR_Box) (startup__summarize_module_costs_2_f_0_1));
#line 873 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 873 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_12_12, 3) = ((MR_Box) (startup__Deep_4));
#line 873 "startup.m"
    }
#line 873 "startup.m"
    {
#line 873 "startup.m"
      mercury__list__foldl2_6_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__V_12_12, startup__PSPtrs_9, ((MR_Box) (startup__Own0_7)), &startup__conv3_Own_10, ((MR_Box) (startup__Desc0_8)), &startup__conv2_Desc_11);
    }
#line 873 "startup.m"
    startup__Own_10 = ((MR_Word) startup__conv3_Own_10);
#line 873 "startup.m"
    startup__Desc_11 = ((MR_Word) startup__conv2_Desc_11);
#line 874 "startup.m"
    {
#line 874 "startup.m"
      startup__ModuleData_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 874 "startup.m"
      MR_hl_field(MR_mktag(0), startup__ModuleData_6, 0) = ((MR_Box) (startup__Own_10));
#line 874 "startup.m"
      MR_hl_field(MR_mktag(0), startup__ModuleData_6, 1) = ((MR_Box) (startup__Desc_11));
#line 874 "startup.m"
      MR_hl_field(MR_mktag(0), startup__ModuleData_6, 2) = ((MR_Box) (startup__PSPtrs_9));
#line 874 "startup.m"
    }
#line 871 "startup.m"
    return startup__ModuleData_6;
#line 871 "startup.m"
  }
#line 869 "startup.m"
}

#line 866 "startup.m"
static MR_Box MR_CALL 
startup__summarize_modules_2_p_0_1(
#line 866 "startup.m"
  MR_Box startup__closure_arg,
#line 866 "startup.m"
  MR_Box startup__wrapper_arg_1)
#line 866 "startup.m"
{
#line 866 "startup.m"
  {
#line 866 "startup.m"
    MR_Box startup__wrapper_arg_2;
#line 866 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 866 "startup.m"
    MR_Word startup__conv0_ModuleData_6;

#line 866 "startup.m"
    {
#line 866 "startup.m"
      startup__conv0_ModuleData_6 = startup__summarize_module_costs_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) startup__wrapper_arg_1));
    }
#line 866 "startup.m"
    startup__wrapper_arg_2 = ((MR_Box) (startup__conv0_ModuleData_6));
#line 866 "startup.m"
    return startup__wrapper_arg_2;
#line 866 "startup.m"
  }
#line 866 "startup.m"
}

#line 861 "startup.m"
static void MR_CALL 
startup__summarize_modules_2_p_0(
#line 861 "startup.m"
  MR_Word startup__Deep0_3,
#line 861 "startup.m"
  MR_Word * startup__Deep_4)
#line 861 "startup.m"
{
#line 863 "startup.m"
  {
#line 863 "startup.m"
    MR_bool startup__succeeded;
#line 863 "startup.m"
    MR_Word startup__TypeCtorInfo_65_65 = (MR_Word) &profile__profile__type_ctor_info_module_data_0;
#line 863 "startup.m"
    MR_Word startup__ModuleData0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 25)));
#line 863 "startup.m"
    MR_Word startup__ModuleData_6;
#line 863 "startup.m"
    MR_Word startup__V_7_7;
#line 864 "startup.m"
    MR_Word startup__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 0)));
#line 864 "startup.m"
    MR_String startup__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 1)));
#line 864 "startup.m"
    MR_String startup__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 2)));
#line 864 "startup.m"
    MR_String startup__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 3)));
#line 864 "startup.m"
    MR_Word startup__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 4)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 5)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 6)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 7)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 8)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 9)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 10)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 11)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 12)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 13)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 14)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 15)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 16)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 17)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 18)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 19)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 20)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 21)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 22)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 23)));
#line 864 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 24)));
#line 864 "startup.m"
    MR_Word startup__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 26)));
#line 864 "startup.m"
    MR_Word startup__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 27)));
#line 864 "startup.m"
    MR_Word startup__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 28)));
#line 867 "startup.m"
    MR_Word startup__V_36_36;
#line 867 "startup.m"
    MR_String startup__V_37_37;
#line 867 "startup.m"
    MR_String startup__V_38_38;
#line 867 "startup.m"
    MR_String startup__V_39_39;
#line 867 "startup.m"
    MR_Word startup__V_40_40;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_41_41;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_42_42;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_43_43;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_44_44;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_45_45;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_46_46;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_47_47;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_48_48;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_49_49;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_50_50;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_51_51;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_52_52;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_53_53;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_54_54;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_55_55;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_56_56;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_57_57;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_58_58;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_59_59;
#line 867 "startup.m"
    MR_ArrayPtr startup__V_60_60;
#line 867 "startup.m"
    MR_Word startup__V_62_62;
#line 867 "startup.m"
    MR_Word startup__V_63_63;
#line 867 "startup.m"
    MR_Word startup__V_64_64;
#line 867 "startup.m"
    MR_Word startup__V_61_61;

#line 866 "startup.m"
    {
#line 866 "startup.m"
      startup__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 866 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_7_7, 0) = ((MR_Box) (&startup_scalar_common_7[1]));
#line 866 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_7_7, 1) = ((MR_Box) (startup__summarize_modules_2_p_0_1));
#line 866 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 866 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_7_7, 3) = ((MR_Box) (startup__Deep0_3));
#line 866 "startup.m"
    }
#line 866 "startup.m"
    {
#line 866 "startup.m"
      startup__ModuleData_6 = mercury__map__map_values_only_2_f_0(startup__TypeCtorInfo_65_65, startup__TypeCtorInfo_65_65, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, startup__V_7_7, startup__ModuleData0_5);
    }
#line 867 "startup.m"
    startup__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 0)));
#line 867 "startup.m"
    startup__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 1)));
#line 867 "startup.m"
    startup__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 2)));
#line 867 "startup.m"
    startup__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 3)));
#line 867 "startup.m"
    startup__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 4)));
#line 867 "startup.m"
    startup__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 5)));
#line 867 "startup.m"
    startup__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 6)));
#line 867 "startup.m"
    startup__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 7)));
#line 867 "startup.m"
    startup__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 8)));
#line 867 "startup.m"
    startup__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 9)));
#line 867 "startup.m"
    startup__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 10)));
#line 867 "startup.m"
    startup__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 11)));
#line 867 "startup.m"
    startup__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 12)));
#line 867 "startup.m"
    startup__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 13)));
#line 867 "startup.m"
    startup__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 14)));
#line 867 "startup.m"
    startup__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 15)));
#line 867 "startup.m"
    startup__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 16)));
#line 867 "startup.m"
    startup__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 17)));
#line 867 "startup.m"
    startup__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 18)));
#line 867 "startup.m"
    startup__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 19)));
#line 867 "startup.m"
    startup__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 20)));
#line 867 "startup.m"
    startup__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 21)));
#line 867 "startup.m"
    startup__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 22)));
#line 867 "startup.m"
    startup__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 23)));
#line 867 "startup.m"
    startup__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 24)));
#line 867 "startup.m"
    startup__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 25)));
#line 867 "startup.m"
    startup__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 26)));
#line 867 "startup.m"
    startup__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 27)));
#line 867 "startup.m"
    startup__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 28)));
#line 867 "startup.m"
    {
#line 867 "startup.m"
      MR_Word base;
#line 867 "startup.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 867 "startup.m"
      *startup__Deep_4 = base;
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__V_36_36));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__V_37_37));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__V_38_38));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__V_39_39));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__V_40_40));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__V_41_41));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__V_42_42));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__V_43_43));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__V_44_44));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__V_45_45));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__V_46_46));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__V_47_47));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__V_48_48));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__V_49_49));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__V_50_50));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__V_51_51));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__V_52_52));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__V_53_53));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__V_54_54));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__V_55_55));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__V_56_56));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__V_57_57));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__V_58_58));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__V_59_59));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__V_60_60));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__ModuleData_6));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__V_62_62));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__V_63_63));
#line 867 "startup.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__V_64_64));
#line 867 "startup.m"
    }
#line 863 "startup.m"
  }
#line 861 "startup.m"
}

#line 826 "startup.m"
static void MR_CALL 
startup__summarize_call_site_dynamic_10_p_0(
#line 826 "startup.m"
  MR_ArrayPtr startup__CallSiteStaticMap_11,
#line 826 "startup.m"
  MR_ArrayPtr startup__CallSiteStatics_12,
#line 826 "startup.m"
  MR_ArrayPtr startup__CSDDescs_13,
#line 826 "startup.m"
  MR_ArrayPtr startup__CSDCompTableArray_14,
#line 826 "startup.m"
  MR_Integer startup__CSDI_15,
#line 826 "startup.m"
  MR_Word startup__CSD_16,
#line 826 "startup.m"
  MR_ArrayPtr startup__CSSOwnArray0_17,
#line 826 "startup.m"
  MR_ArrayPtr * startup__CSSOwnArray_18,
#line 826 "startup.m"
  MR_ArrayPtr startup__CSSDescArray0_19,
#line 826 "startup.m"
  MR_ArrayPtr * startup__CSSDescArray_20)
#line 826 "startup.m"
{
#line 835 "startup.m"
  {
#line 835 "startup.m"
    MR_bool startup__succeeded;
#line 835 "startup.m"
    MR_Word startup__CSDPtr_21 = (MR_Word) startup__CSDI_15;
#line 835 "startup.m"
    MR_Word startup__CSSPtr_22;
#line 835 "startup.m"
    MR_Integer startup__CSSI_23;

#line 837 "startup.m"
    {
#line 837 "startup.m"
      profile__lookup_call_site_static_map_3_p_0(startup__CallSiteStaticMap_11, startup__CSDPtr_21, &startup__CSSPtr_22);
    }
#line 838 "startup.m"
    startup__CSSI_23 = (MR_Integer) startup__CSSPtr_22;
#line 839 "startup.m"
    startup__succeeded = (startup__CSSI_23 > (MR_Integer) 0);
#line 855 "startup.m"
    if (startup__succeeded)
#line 840 "startup.m"
      {
#line 840 "startup.m"
        MR_Word startup__CSDOwn_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 2)));
#line 840 "startup.m"
        MR_Word startup__CSDDesc0_25;
#line 840 "startup.m"
        MR_Word startup__CSDCompTable_26;
#line 840 "startup.m"
        MR_Word startup__CSS_27;
#line 840 "startup.m"
        MR_Word startup__CSDDesc_29;
#line 840 "startup.m"
        MR_Word startup__CSSOwn0_30;
#line 840 "startup.m"
        MR_Word startup__CSSDesc0_31;
#line 840 "startup.m"
        MR_Word startup__CSSOwn_32;
#line 840 "startup.m"
        MR_Word startup__CSSDesc_33;
#line 840 "startup.m"
        MR_ArrayPtr startup__V_36_36;
#line 840 "startup.m"
        MR_ArrayPtr startup__V_37_37;
#line 840 "startup.m"
        MR_Word startup__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 0)));
#line 840 "startup.m"
        MR_Word startup__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 1)));
#line 846 "startup.m"
        MR_Word startup__InnerTotal_28;
#line 844 "startup.m"
        MR_Word startup__V_35_35;
#line 844 "startup.m"
        MR_Integer startup__V_41_41;
#line 844 "startup.m"
        MR_Word startup__V_42_42;
#line 844 "startup.m"
        MR_Integer startup__V_43_43;
#line 844 "startup.m"
        MR_Word startup__V_44_44;
#line 844 "startup.m"
        MR_Box startup__conv0_InnerTotal_28;
#line 853 "startup.m"
        MR_Box startup__conv1_V_36_36;
#line 854 "startup.m"
        MR_Box startup__conv2_V_37_37;

#line 841 "startup.m"
        {
#line 841 "startup.m"
          profile__lookup_csd_desc_3_p_0(startup__CSDDescs_13, startup__CSDPtr_21, &startup__CSDDesc0_25);
        }
#line 842 "startup.m"
        {
#line 842 "startup.m"
          profile__lookup_csd_comp_table_3_p_0(startup__CSDCompTableArray_14, startup__CSDPtr_21, &startup__CSDCompTable_26);
        }
#line 843 "startup.m"
        {
#line 843 "startup.m"
          profile__lookup_call_site_statics_3_p_0(startup__CallSiteStatics_12, startup__CSSPtr_22, &startup__CSS_27);
        }
#line 844 "startup.m"
        startup__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 0)));
#line 844 "startup.m"
        startup__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 1)));
#line 844 "startup.m"
        startup__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 2)));
#line 844 "startup.m"
        startup__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 3)));
#line 844 "startup.m"
        startup__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 4)));
#line 844 "startup.m"
        {
#line 844 "startup.m"
          startup__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__CSDCompTable_26, ((MR_Box) (startup__V_35_35)), &startup__conv0_InnerTotal_28);
        }
#line 844 "startup.m"
        if (startup__succeeded)
#line 844 "startup.m"
          {
#line 844 "startup.m"
            startup__InnerTotal_28 = ((MR_Word) startup__conv0_InnerTotal_28);
#line 844 "startup.m"
            startup__succeeded = MR_TRUE;
#line 844 "startup.m"
          }
#line 846 "startup.m"
        if (startup__succeeded)
#line 845 "startup.m"
          {
#line 845 "startup.m"
            startup__CSDDesc_29 = measurements__subtract_inherit_from_inherit_2_f_0(startup__InnerTotal_28, startup__CSDDesc0_25);
          }
#line 846 "startup.m"
        else
#line 847 "startup.m"
          startup__CSDDesc_29 = startup__CSDDesc0_25;
#line 849 "startup.m"
        {
#line 849 "startup.m"
          profile__lookup_css_own_3_p_0(startup__CSSOwnArray0_17, startup__CSSPtr_22, &startup__CSSOwn0_30);
        }
#line 850 "startup.m"
        {
#line 850 "startup.m"
          profile__lookup_css_desc_3_p_0(startup__CSSDescArray0_19, startup__CSSPtr_22, &startup__CSSDesc0_31);
        }
#line 851 "startup.m"
        {
#line 851 "startup.m"
          startup__CSSOwn_32 = measurements__add_own_to_own_2_f_0(startup__CSDOwn_24, startup__CSSOwn0_30);
        }
#line 852 "startup.m"
        {
#line 852 "startup.m"
          startup__CSSDesc_33 = measurements__add_inherit_to_inherit_2_f_0(startup__CSDDesc_29, startup__CSSDesc0_31);
        }
#line 853 "startup.m"
        {
#line 853 "startup.m"
          startup__conv1_V_36_36 = array_util__u_1_f_0((MR_Word) &startup_scalar_common_1[14], ((MR_Box) (startup__CSSOwnArray0_17)));
        }
#line 853 "startup.m"
        startup__V_36_36 = ((MR_ArrayPtr) startup__conv1_V_36_36);
#line 853 "startup.m"
        {
#line 853 "startup.m"
          profile__update_css_own_4_p_0(startup__CSSPtr_22, startup__CSSOwn_32, startup__V_36_36, startup__CSSOwnArray_18);
        }
#line 854 "startup.m"
        {
#line 854 "startup.m"
          startup__conv2_V_37_37 = array_util__u_1_f_0((MR_Word) &startup_scalar_common_1[17], ((MR_Box) (startup__CSSDescArray0_19)));
        }
#line 854 "startup.m"
        startup__V_37_37 = ((MR_ArrayPtr) startup__conv2_V_37_37);
#line 854 "startup.m"
        {
#line 854 "startup.m"
          profile__update_css_desc_4_p_0(startup__CSSPtr_22, startup__CSSDesc_33, startup__V_37_37, startup__CSSDescArray_20);
#line 854 "startup.m"
          return;
        }
#line 840 "startup.m"
      }
#line 855 "startup.m"
    else
#line 856 "startup.m"
      {
#line 856 "startup.m"
        {
#line 856 "startup.m"
          mercury__require__error_1_p_0((MR_String) "summarize_call_site_dynamic: invalid css ptr");
#line 856 "startup.m"
          return;
        }
#line 856 "startup.m"
      }
#line 835 "startup.m"
  }
#line 826 "startup.m"
}

#line 817 "startup.m"
static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0_1(
#line 817 "startup.m"
  MR_Box startup__closure_arg,
#line 817 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 817 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 817 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 817 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 817 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 817 "startup.m"
  MR_Box * startup__wrapper_arg_6)
#line 817 "startup.m"
{
#line 817 "startup.m"
  {
#line 817 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 817 "startup.m"
    MR_ArrayPtr startup__conv1_CSSOwnArray_18;
#line 817 "startup.m"
    MR_ArrayPtr startup__conv0_CSSDescArray_20;

#line 817 "startup.m"
    {
#line 817 "startup.m"
      startup__summarize_call_site_dynamic_10_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 6))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv1_CSSOwnArray_18, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv0_CSSDescArray_20);
    }
#line 817 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv1_CSSOwnArray_18));
#line 817 "startup.m"
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv0_CSSDescArray_20));
#line 817 "startup.m"
  }
#line 817 "startup.m"
}

#line 811 "startup.m"
static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0(
#line 811 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_8,
#line 811 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_9)
#line 811 "startup.m"
{
#line 813 "startup.m"
  {
#line 813 "startup.m"
    MR_bool startup__succeeded;
#line 813 "startup.m"
    MR_ArrayPtr startup__CSSOwnArray0_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 21)));
#line 813 "startup.m"
    MR_ArrayPtr startup__CSSDescArray0_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 22)));
#line 813 "startup.m"
    MR_ArrayPtr startup__CSSOwnArray_6;
#line 813 "startup.m"
    MR_ArrayPtr startup__CSSDescArray_7;
#line 813 "startup.m"
    MR_Word startup__V_10_10;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_12_12;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_13_13;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 5)));
#line 813 "startup.m"
    MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 7)));
#line 813 "startup.m"
    MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 14)));
#line 813 "startup.m"
    MR_ArrayPtr startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 18)));
#line 813 "startup.m"
    MR_ArrayPtr startup__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 24)));
#line 813 "startup.m"
    MR_Word startup__V_216_216;
#line 813 "startup.m"
    MR_String startup__V_217_217;
#line 813 "startup.m"
    MR_String startup__V_218_218;
#line 813 "startup.m"
    MR_String startup__V_219_219;
#line 813 "startup.m"
    MR_Word startup__V_220_220;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_221_221;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_222_222;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_223_223;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_224_224;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_225_225;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_226_226;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_227_227;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_228_228;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_229_229;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_230_230;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_231_231;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_232_232;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_233_233;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_234_234;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_235_235;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_236_236;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_239_239;
#line 813 "startup.m"
    MR_ArrayPtr startup__V_240_240;
#line 813 "startup.m"
    MR_Word startup__V_241_241;
#line 813 "startup.m"
    MR_Word startup__V_242_242;
#line 813 "startup.m"
    MR_Word startup__V_243_243;
#line 813 "startup.m"
    MR_Word startup__V_244_244;
#line 814 "startup.m"
    MR_Word startup__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 0)));
#line 814 "startup.m"
    MR_String startup__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 1)));
#line 814 "startup.m"
    MR_String startup__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 2)));
#line 814 "startup.m"
    MR_String startup__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 3)));
#line 814 "startup.m"
    MR_Word startup__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 4)));
#line 814 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 6)));
#line 814 "startup.m"
    MR_ArrayPtr startup__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 8)));
#line 814 "startup.m"
    MR_ArrayPtr startup__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 9)));
#line 814 "startup.m"
    MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 10)));
#line 814 "startup.m"
    MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 11)));
#line 814 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 12)));
#line 814 "startup.m"
    MR_ArrayPtr startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 13)));
#line 814 "startup.m"
    MR_ArrayPtr startup__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 15)));
#line 814 "startup.m"
    MR_ArrayPtr startup__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 16)));
#line 814 "startup.m"
    MR_ArrayPtr startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 17)));
#line 814 "startup.m"
    MR_ArrayPtr startup__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 19)));
#line 814 "startup.m"
    MR_ArrayPtr startup__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 20)));
#line 814 "startup.m"
    MR_ArrayPtr startup__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 23)));
#line 814 "startup.m"
    MR_Word startup__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 25)));
#line 814 "startup.m"
    MR_Word startup__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 26)));
#line 814 "startup.m"
    MR_Word startup__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 27)));
#line 814 "startup.m"
    MR_Word startup__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 28)));
#line 821 "startup.m"
    MR_ArrayPtr startup__conv2_V_12_12;
#line 822 "startup.m"
    MR_ArrayPtr startup__conv3_V_13_13;
#line 816 "startup.m"
    MR_Box startup__conv5_CSSOwnArray_6;
#line 816 "startup.m"
    MR_Box startup__conv4_CSSDescArray_7;
#line 823 "startup.m"
    MR_ArrayPtr startup__V_237_237;
#line 823 "startup.m"
    MR_ArrayPtr startup__V_238_238;

#line 817 "startup.m"
    {
#line 817 "startup.m"
      startup__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 817 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 0) = ((MR_Box) (&startup_scalar_common_13[0]));
#line 817 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 1) = ((MR_Box) (startup__summarize_call_site_dynamics_2_p_0_1));
#line 817 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 817 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 3) = ((MR_Box) (startup__V_34_34));
#line 817 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 4) = ((MR_Box) (startup__V_27_27));
#line 817 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 5) = ((MR_Box) (startup__V_38_38));
#line 817 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 6) = ((MR_Box) (startup__V_43_43));
#line 817 "startup.m"
    }
#line 821 "startup.m"
    {
#line 821 "startup.m"
      startup__conv2_V_12_12 = mercury__array__copy_1_f_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) startup__CSSOwnArray0_4);
    }
#line 821 "startup.m"
    startup__V_12_12 = (MR_ArrayPtr) startup__conv2_V_12_12;
#line 822 "startup.m"
    {
#line 822 "startup.m"
      startup__conv3_V_13_13 = mercury__array__copy_1_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) startup__CSSDescArray0_5);
    }
#line 822 "startup.m"
    startup__V_13_13 = (MR_ArrayPtr) startup__conv3_V_13_13;
#line 816 "startup.m"
    {
#line 816 "startup.m"
      array_util__array_foldl2_from_1_6_p_1((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_Word) &startup_scalar_common_1[14], (MR_Word) &startup_scalar_common_1[17], startup__V_10_10, (MR_ArrayPtr) startup__V_25_25, ((MR_Box) (startup__V_12_12)), &startup__conv5_CSSOwnArray_6, ((MR_Box) (startup__V_13_13)), &startup__conv4_CSSDescArray_7);
    }
#line 816 "startup.m"
    startup__CSSOwnArray_6 = ((MR_ArrayPtr) startup__conv5_CSSOwnArray_6);
#line 816 "startup.m"
    startup__CSSDescArray_7 = ((MR_ArrayPtr) startup__conv4_CSSDescArray_7);
#line 823 "startup.m"
    startup__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 0)));
#line 823 "startup.m"
    startup__V_217_217 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 1)));
#line 823 "startup.m"
    startup__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 2)));
#line 823 "startup.m"
    startup__V_219_219 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 3)));
#line 823 "startup.m"
    startup__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 4)));
#line 823 "startup.m"
    startup__V_221_221 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 5)));
#line 823 "startup.m"
    startup__V_222_222 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 6)));
#line 823 "startup.m"
    startup__V_223_223 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 7)));
#line 823 "startup.m"
    startup__V_224_224 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 8)));
#line 823 "startup.m"
    startup__V_225_225 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 9)));
#line 823 "startup.m"
    startup__V_226_226 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 10)));
#line 823 "startup.m"
    startup__V_227_227 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 11)));
#line 823 "startup.m"
    startup__V_228_228 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 12)));
#line 823 "startup.m"
    startup__V_229_229 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 13)));
#line 823 "startup.m"
    startup__V_230_230 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 14)));
#line 823 "startup.m"
    startup__V_231_231 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 15)));
#line 823 "startup.m"
    startup__V_232_232 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 16)));
#line 823 "startup.m"
    startup__V_233_233 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 17)));
#line 823 "startup.m"
    startup__V_234_234 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 18)));
#line 823 "startup.m"
    startup__V_235_235 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 19)));
#line 823 "startup.m"
    startup__V_236_236 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 20)));
#line 823 "startup.m"
    startup__V_237_237 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 21)));
#line 823 "startup.m"
    startup__V_238_238 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 22)));
#line 823 "startup.m"
    startup__V_239_239 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 23)));
#line 823 "startup.m"
    startup__V_240_240 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 24)));
#line 823 "startup.m"
    startup__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 25)));
#line 823 "startup.m"
    startup__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 26)));
#line 823 "startup.m"
    startup__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 27)));
#line 823 "startup.m"
    startup__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 28)));
#line 824 "startup.m"
    {
#line 824 "startup.m"
      MR_Word base;
#line 824 "startup.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 824 "startup.m"
      *startup__STATE_VARIABLE_Deep_9 = base;
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__V_216_216));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__V_217_217));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__V_218_218));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__V_219_219));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__V_220_220));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__V_221_221));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__V_222_222));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__V_223_223));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__V_224_224));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__V_225_225));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__V_226_226));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__V_227_227));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__V_228_228));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__V_229_229));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__V_230_230));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__V_231_231));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__V_232_232));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__V_233_233));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__V_234_234));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__V_235_235));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__V_236_236));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__CSSOwnArray_6));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__CSSDescArray_7));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__V_239_239));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__V_240_240));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__V_241_241));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__V_242_242));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__V_243_243));
#line 824 "startup.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__V_244_244));
#line 824 "startup.m"
    }
#line 813 "startup.m"
  }
#line 811 "startup.m"
}

#line 782 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamic_with_coverage_11_p_0(
#line 782 "startup.m"
  MR_ArrayPtr startup__PDOwnArray_12,
#line 782 "startup.m"
  MR_ArrayPtr startup__PDDescArray_13,
#line 782 "startup.m"
  MR_ArrayPtr startup__PDCompTableArray_14,
#line 782 "startup.m"
  MR_Integer startup__PDI_15,
#line 782 "startup.m"
  MR_Word startup__PD_16,
#line 782 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PSOwnArray_0_24,
#line 782 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PSOwnArray_25,
#line 782 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PSDescArray_0_26,
#line 782 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PSDescArray_27,
#line 782 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CoverageArray_0_28,
#line 782 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CoverageArray_29)
#line 782 "startup.m"
{
#line 792 "startup.m"
  {
#line 792 "startup.m"
    MR_bool startup__succeeded;
#line 792 "startup.m"
    MR_Word startup__PSPtr_20;
#line 792 "startup.m"
    MR_Word startup__MaybeDynamicCoverage_21;
#line 795 "startup.m"
    MR_ArrayPtr startup__V_38_38;

#line 793 "startup.m"
    {
#line 793 "startup.m"
      startup__summarize_proc_dynamic_9_p_0(startup__PDOwnArray_12, startup__PDDescArray_13, startup__PDCompTableArray_14, startup__PDI_15, startup__PD_16, startup__STATE_VARIABLE_PSOwnArray_0_24, startup__STATE_VARIABLE_PSOwnArray_25, startup__STATE_VARIABLE_PSDescArray_0_26, startup__STATE_VARIABLE_PSDescArray_27);
    }
#line 795 "startup.m"
    startup__PSPtr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_16, (MR_Integer) 0)));
#line 795 "startup.m"
    startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_16, (MR_Integer) 1)));
#line 795 "startup.m"
    startup__MaybeDynamicCoverage_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_16, (MR_Integer) 2)));
#line 804 "startup.m"
    if ((startup__MaybeDynamicCoverage_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 805 "startup.m"
      {
#line 806 "startup.m"
        {
#line 806 "startup.m"
          mercury__require__unexpected_3_p_0((MR_String) "startup", (MR_String) "predicate \140startup.summarize_proc_dynamic_with_coverage\'/11", (MR_String) "no coverage point array in proc dynamic");
#line 806 "startup.m"
          return;
        }
#line 805 "startup.m"
      }
#line 804 "startup.m"
    else
#line 798 "startup.m"
      {
#line 798 "startup.m"
        MR_ArrayPtr startup__DynamicCoverage_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__MaybeDynamicCoverage_21, (MR_Integer) 0)));
#line 798 "startup.m"
        MR_Word startup__STATE_VARIABLE_StaticCoverage_35_35;
#line 798 "startup.m"
        MR_Word startup__STATE_VARIABLE_StaticCoverage_36_36;

#line 800 "startup.m"
        {
#line 800 "startup.m"
          profile__lookup_ps_coverage_3_p_0(startup__STATE_VARIABLE_CoverageArray_0_28, startup__PSPtr_20, &startup__STATE_VARIABLE_StaticCoverage_35_35);
        }
#line 801 "startup.m"
        {
#line 801 "startup.m"
          measurements__add_coverage_arrays_3_p_0(startup__DynamicCoverage_22, startup__STATE_VARIABLE_StaticCoverage_35_35, &startup__STATE_VARIABLE_StaticCoverage_36_36);
        }
#line 802 "startup.m"
        {
#line 802 "startup.m"
          profile__update_ps_coverage_4_p_0(startup__PSPtr_20, startup__STATE_VARIABLE_StaticCoverage_36_36, startup__STATE_VARIABLE_CoverageArray_0_28, startup__STATE_VARIABLE_CoverageArray_29);
#line 802 "startup.m"
          return;
        }
#line 798 "startup.m"
      }
#line 792 "startup.m"
  }
#line 782 "startup.m"
}

#line 772 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0_1(
#line 772 "startup.m"
  MR_Box startup__closure_arg,
#line 772 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 772 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 772 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 772 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 772 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 772 "startup.m"
  MR_Box * startup__wrapper_arg_6,
#line 772 "startup.m"
  MR_Box startup__wrapper_arg_7,
#line 772 "startup.m"
  MR_Box * startup__wrapper_arg_8)
#line 772 "startup.m"
{
#line 772 "startup.m"
  {
#line 772 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 772 "startup.m"
    MR_ArrayPtr startup__conv2_STATE_VARIABLE_PSOwnArray_25;
#line 772 "startup.m"
    MR_ArrayPtr startup__conv1_STATE_VARIABLE_PSDescArray_27;
#line 772 "startup.m"
    MR_ArrayPtr startup__conv0_STATE_VARIABLE_CoverageArray_29;

#line 772 "startup.m"
    {
#line 772 "startup.m"
      startup__summarize_proc_dynamic_with_coverage_11_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv2_STATE_VARIABLE_PSOwnArray_25, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv1_STATE_VARIABLE_PSDescArray_27, ((MR_ArrayPtr) startup__wrapper_arg_7), &startup__conv0_STATE_VARIABLE_CoverageArray_29);
    }
#line 772 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv2_STATE_VARIABLE_PSOwnArray_25));
#line 772 "startup.m"
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv1_STATE_VARIABLE_PSDescArray_27));
#line 772 "startup.m"
    *startup__wrapper_arg_8 = ((MR_Box) (startup__conv0_STATE_VARIABLE_CoverageArray_29));
#line 772 "startup.m"
  }
#line 772 "startup.m"
}

#line 765 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0(
#line 765 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_8,
#line 765 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_9)
#line 765 "startup.m"
{
#line 767 "startup.m"
  {
#line 767 "startup.m"
    MR_bool startup__succeeded;
#line 767 "startup.m"
    MR_Integer startup__NPS_4;
#line 767 "startup.m"
    MR_ArrayPtr startup__PSOwnArray_5;
#line 767 "startup.m"
    MR_ArrayPtr startup__PSDescArray_6;
#line 767 "startup.m"
    MR_ArrayPtr startup__CoverageArray_7;
#line 767 "startup.m"
    MR_Integer startup__V_10_10;
#line 767 "startup.m"
    MR_Word startup__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 0)));
#line 767 "startup.m"
    MR_Word startup__V_13_13;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_15_15;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_16_16;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_17_17;
#line 767 "startup.m"
    MR_Word startup__V_21_21;
#line 767 "startup.m"
    MR_Word startup__V_22_22;
#line 767 "startup.m"
    MR_Word startup__V_23_23;
#line 767 "startup.m"
    MR_Word startup__V_27_27;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 6)));
#line 767 "startup.m"
    MR_ArrayPtr startup__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 16)));
#line 767 "startup.m"
    MR_ArrayPtr startup__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 17)));
#line 767 "startup.m"
    MR_ArrayPtr startup__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 23)));
#line 767 "startup.m"
    MR_Word startup__V_177_177;
#line 767 "startup.m"
    MR_String startup__V_178_178;
#line 767 "startup.m"
    MR_String startup__V_179_179;
#line 767 "startup.m"
    MR_String startup__V_180_180;
#line 767 "startup.m"
    MR_Word startup__V_181_181;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_182_182;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_183_183;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_184_184;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_185_185;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_186_186;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_187_187;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_188_188;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_189_189;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_190_190;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_191_191;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_192_192;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_193_193;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_194_194;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_195_195;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_198_198;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_199_199;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_200_200;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_201_201;
#line 767 "startup.m"
    MR_Word startup__V_202_202;
#line 767 "startup.m"
    MR_Word startup__V_204_204;
#line 767 "startup.m"
    MR_Word startup__V_205_205;
#line 767 "startup.m"
    MR_Word startup__V_206_206;
#line 767 "startup.m"
    MR_String startup__V_207_207;
#line 767 "startup.m"
    MR_String startup__V_208_208;
#line 767 "startup.m"
    MR_String startup__V_209_209;
#line 767 "startup.m"
    MR_Word startup__V_210_210;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_211_211;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_212_212;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_213_213;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_214_214;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_215_215;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_216_216;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_217_217;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_218_218;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_219_219;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_220_220;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_221_221;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_222_222;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_223_223;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_224_224;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_225_225;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_227_227;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_228_228;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_229_229;
#line 767 "startup.m"
    MR_ArrayPtr startup__V_230_230;
#line 767 "startup.m"
    MR_Word startup__V_231_231;
#line 767 "startup.m"
    MR_Word startup__V_233_233;
#line 767 "startup.m"
    MR_Word startup__V_234_234;
#line 770 "startup.m"
    MR_String startup__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 1)));
#line 770 "startup.m"
    MR_String startup__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 2)));
#line 770 "startup.m"
    MR_String startup__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 3)));
#line 770 "startup.m"
    MR_Word startup__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 4)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 5)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 7)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 8)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 9)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 10)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 11)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 12)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 13)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 14)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 15)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 18)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 19)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 20)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 21)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 22)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 24)));
#line 770 "startup.m"
    MR_Word startup__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 25)));
#line 770 "startup.m"
    MR_Word startup__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 26)));
#line 770 "startup.m"
    MR_Word startup__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 27)));
#line 770 "startup.m"
    MR_Word startup__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 28)));
#line 770 "startup.m"
    MR_String startup__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 0)));
#line 770 "startup.m"
    MR_Integer startup__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 1)));
#line 770 "startup.m"
    MR_Integer startup__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 2)));
#line 770 "startup.m"
    MR_Integer startup__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 3)));
#line 770 "startup.m"
    MR_Integer startup__V_60_60;
#line 770 "startup.m"
    MR_Integer startup__V_61_61;
#line 770 "startup.m"
    MR_Integer startup__V_62_62;
#line 770 "startup.m"
    MR_Integer startup__V_63_63;
#line 770 "startup.m"
    MR_Word startup__V_64_64;
#line 775 "startup.m"
    MR_ArrayPtr startup__conv3_V_15_15;
#line 776 "startup.m"
    MR_ArrayPtr startup__conv4_V_16_16;
#line 777 "startup.m"
    MR_ArrayPtr startup__conv5_V_17_17;
#line 771 "startup.m"
    MR_Box startup__conv8_PSOwnArray_5;
#line 771 "startup.m"
    MR_Box startup__conv7_PSDescArray_6;
#line 771 "startup.m"
    MR_Box startup__conv6_CoverageArray_7;
#line 778 "startup.m"
    MR_ArrayPtr startup__V_196_196;
#line 778 "startup.m"
    MR_ArrayPtr startup__V_197_197;
#line 778 "startup.m"
    MR_Word startup__V_203_203;

#line 770 "startup.m"
    startup__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 4)));
#line 770 "startup.m"
    startup__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 5)));
#line 770 "startup.m"
    startup__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 6)));
#line 770 "startup.m"
    startup__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 7)));
#line 770 "startup.m"
    startup__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 8)));
#line 770 "startup.m"
    startup__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 9)));
#line 770 "startup.m"
    startup__NPS_4 = (startup__V_10_10 + (MR_Integer) 1);
#line 772 "startup.m"
    {
#line 772 "startup.m"
      startup__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 772 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_13_13, 0) = ((MR_Box) (&startup_scalar_common_12[0]));
#line 772 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_13_13, 1) = ((MR_Box) (startup__summarize_proc_dynamics_with_coverage_data_2_p_0_1));
#line 772 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 772 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_13_13, 3) = ((MR_Box) (startup__V_43_43));
#line 772 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_13_13, 4) = ((MR_Box) (startup__V_44_44));
#line 772 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_13_13, 5) = ((MR_Box) (startup__V_50_50));
#line 772 "startup.m"
    }
#line 775 "startup.m"
    {
#line 775 "startup.m"
      startup__V_21_21 = measurements__zero_own_prof_info_0_f_0();
    }
#line 775 "startup.m"
    {
#line 775 "startup.m"
      startup__conv3_V_15_15 = mercury__array__init_2_f_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, startup__NPS_4, ((MR_Box) (startup__V_21_21)));
    }
#line 775 "startup.m"
    startup__V_15_15 = (MR_ArrayPtr) startup__conv3_V_15_15;
#line 776 "startup.m"
    {
#line 776 "startup.m"
      startup__V_22_22 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 776 "startup.m"
    {
#line 776 "startup.m"
      startup__conv4_V_16_16 = mercury__array__init_2_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__NPS_4, ((MR_Box) (startup__V_22_22)));
    }
#line 776 "startup.m"
    startup__V_16_16 = (MR_ArrayPtr) startup__conv4_V_16_16;
#line 777 "startup.m"
    {
#line 777 "startup.m"
      startup__V_23_23 = measurements__zero_static_coverage_0_f_0();
    }
#line 777 "startup.m"
    {
#line 777 "startup.m"
      startup__conv5_V_17_17 = mercury__array__init_2_f_0((MR_Word) &startup_scalar_common_1[16], startup__NPS_4, ((MR_Box) (startup__V_23_23)));
    }
#line 777 "startup.m"
    startup__V_17_17 = (MR_ArrayPtr) startup__conv5_V_17_17;
#line 771 "startup.m"
    {
#line 771 "startup.m"
      array_util__array_foldl3_from_1_8_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &startup_scalar_common_1[14], (MR_Word) &startup_scalar_common_1[17], (MR_Word) &startup_scalar_common_1[18], startup__V_13_13, (MR_ArrayPtr) startup__V_33_33, ((MR_Box) (startup__V_15_15)), &startup__conv8_PSOwnArray_5, ((MR_Box) (startup__V_16_16)), &startup__conv7_PSDescArray_6, ((MR_Box) (startup__V_17_17)), &startup__conv6_CoverageArray_7);
    }
#line 771 "startup.m"
    startup__PSOwnArray_5 = ((MR_ArrayPtr) startup__conv8_PSOwnArray_5);
#line 771 "startup.m"
    startup__PSDescArray_6 = ((MR_ArrayPtr) startup__conv7_PSDescArray_6);
#line 771 "startup.m"
    startup__CoverageArray_7 = ((MR_ArrayPtr) startup__conv6_CoverageArray_7);
#line 778 "startup.m"
    startup__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 0)));
#line 778 "startup.m"
    startup__V_178_178 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 1)));
#line 778 "startup.m"
    startup__V_179_179 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 2)));
#line 778 "startup.m"
    startup__V_180_180 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 3)));
#line 778 "startup.m"
    startup__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 4)));
#line 778 "startup.m"
    startup__V_182_182 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 5)));
#line 778 "startup.m"
    startup__V_183_183 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 6)));
#line 778 "startup.m"
    startup__V_184_184 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 7)));
#line 778 "startup.m"
    startup__V_185_185 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 8)));
#line 778 "startup.m"
    startup__V_186_186 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 9)));
#line 778 "startup.m"
    startup__V_187_187 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 10)));
#line 778 "startup.m"
    startup__V_188_188 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 11)));
#line 778 "startup.m"
    startup__V_189_189 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 12)));
#line 778 "startup.m"
    startup__V_190_190 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 13)));
#line 778 "startup.m"
    startup__V_191_191 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 14)));
#line 778 "startup.m"
    startup__V_192_192 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 15)));
#line 778 "startup.m"
    startup__V_193_193 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 16)));
#line 778 "startup.m"
    startup__V_194_194 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 17)));
#line 778 "startup.m"
    startup__V_195_195 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 18)));
#line 778 "startup.m"
    startup__V_196_196 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 19)));
#line 778 "startup.m"
    startup__V_197_197 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 20)));
#line 778 "startup.m"
    startup__V_198_198 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 21)));
#line 778 "startup.m"
    startup__V_199_199 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 22)));
#line 778 "startup.m"
    startup__V_200_200 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 23)));
#line 778 "startup.m"
    startup__V_201_201 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 24)));
#line 778 "startup.m"
    startup__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 25)));
#line 778 "startup.m"
    startup__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 26)));
#line 778 "startup.m"
    startup__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 27)));
#line 778 "startup.m"
    startup__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 28)));
#line 779 "startup.m"
    startup__V_206_206 = startup__V_177_177;
#line 779 "startup.m"
    startup__V_207_207 = startup__V_178_178;
#line 779 "startup.m"
    startup__V_208_208 = startup__V_179_179;
#line 779 "startup.m"
    startup__V_209_209 = startup__V_180_180;
#line 779 "startup.m"
    startup__V_210_210 = startup__V_181_181;
#line 779 "startup.m"
    startup__V_211_211 = startup__V_182_182;
#line 779 "startup.m"
    startup__V_212_212 = startup__V_183_183;
#line 779 "startup.m"
    startup__V_213_213 = startup__V_184_184;
#line 779 "startup.m"
    startup__V_214_214 = startup__V_185_185;
#line 779 "startup.m"
    startup__V_215_215 = startup__V_186_186;
#line 779 "startup.m"
    startup__V_216_216 = startup__V_187_187;
#line 779 "startup.m"
    startup__V_217_217 = startup__V_188_188;
#line 779 "startup.m"
    startup__V_218_218 = startup__V_189_189;
#line 779 "startup.m"
    startup__V_219_219 = startup__V_190_190;
#line 779 "startup.m"
    startup__V_220_220 = startup__V_191_191;
#line 779 "startup.m"
    startup__V_221_221 = startup__V_192_192;
#line 779 "startup.m"
    startup__V_222_222 = startup__V_193_193;
#line 779 "startup.m"
    startup__V_223_223 = startup__V_194_194;
#line 779 "startup.m"
    startup__V_224_224 = startup__V_195_195;
#line 779 "startup.m"
    startup__V_225_225 = startup__PSOwnArray_5;
#line 779 "startup.m"
    startup__V_227_227 = startup__V_198_198;
#line 779 "startup.m"
    startup__V_228_228 = startup__V_199_199;
#line 779 "startup.m"
    startup__V_229_229 = startup__V_200_200;
#line 779 "startup.m"
    startup__V_230_230 = startup__V_201_201;
#line 779 "startup.m"
    startup__V_231_231 = startup__V_202_202;
#line 779 "startup.m"
    startup__V_233_233 = startup__V_204_204;
#line 779 "startup.m"
    startup__V_234_234 = startup__V_205_205;
#line 780 "startup.m"
    {
#line 780 "startup.m"
      startup__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(1), startup__V_27_27, 0) = ((MR_Box) (startup__CoverageArray_7));
#line 780 "startup.m"
    }
#line 780 "startup.m"
    {
#line 780 "startup.m"
      MR_Word base;
#line 780 "startup.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 780 "startup.m"
      *startup__STATE_VARIABLE_Deep_9 = base;
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__V_206_206));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__V_207_207));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__V_208_208));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__V_209_209));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__V_210_210));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__V_211_211));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__V_212_212));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__V_213_213));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__V_214_214));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__V_215_215));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__V_216_216));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__V_217_217));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__V_218_218));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__V_219_219));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__V_220_220));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__V_221_221));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__V_222_222));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__V_223_223));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__V_224_224));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__V_225_225));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__PSDescArray_6));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__V_227_227));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__V_228_228));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__V_229_229));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__V_230_230));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__V_231_231));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__V_27_27));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__V_233_233));
#line 780 "startup.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__V_234_234));
#line 780 "startup.m"
    }
#line 767 "startup.m"
  }
#line 765 "startup.m"
}

#line 739 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamic_9_p_0(
#line 739 "startup.m"
  MR_ArrayPtr startup__PDOwnArray_10,
#line 739 "startup.m"
  MR_ArrayPtr startup__PDDescArray_11,
#line 739 "startup.m"
  MR_ArrayPtr startup__PDCompTableArray_12,
#line 739 "startup.m"
  MR_Integer startup__PDI_13,
#line 739 "startup.m"
  MR_Word startup__PD_14,
#line 739 "startup.m"
  MR_ArrayPtr startup__PSOwnArray0_15,
#line 739 "startup.m"
  MR_ArrayPtr * startup__PSOwnArray_16,
#line 739 "startup.m"
  MR_ArrayPtr startup__PSDescArray0_17,
#line 739 "startup.m"
  MR_ArrayPtr * startup__PSDescArray_18)
#line 739 "startup.m"
{
#line 747 "startup.m"
  {
#line 747 "startup.m"
    MR_bool startup__succeeded;
#line 747 "startup.m"
    MR_Word startup__PSPtr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_14, (MR_Integer) 0)));
#line 747 "startup.m"
    MR_Word startup__PDPtr_20 = (MR_Word) startup__PDI_13;
#line 747 "startup.m"
    MR_Word startup__PDOwn_21;
#line 747 "startup.m"
    MR_Word startup__PDDesc0_22;
#line 747 "startup.m"
    MR_Word startup__PDCompTable_23;
#line 747 "startup.m"
    MR_Word startup__PDDesc_25;
#line 747 "startup.m"
    MR_Word startup__PSOwn0_26;
#line 747 "startup.m"
    MR_Word startup__PSDesc0_27;
#line 747 "startup.m"
    MR_Word startup__PSOwn_28;
#line 747 "startup.m"
    MR_Word startup__PSDesc_29;
#line 747 "startup.m"
    MR_ArrayPtr startup__V_30_30;
#line 747 "startup.m"
    MR_ArrayPtr startup__V_31_31;
#line 748 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_14, (MR_Integer) 1)));
#line 748 "startup.m"
    MR_Word startup__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_14, (MR_Integer) 2)));
#line 755 "startup.m"
    MR_Word startup__InnerTotal_24;
#line 753 "startup.m"
    MR_Box startup__conv0_InnerTotal_24;
#line 762 "startup.m"
    MR_Box startup__conv1_V_30_30;
#line 763 "startup.m"
    MR_Box startup__conv2_V_31_31;

#line 750 "startup.m"
    {
#line 750 "startup.m"
      profile__lookup_pd_own_3_p_0(startup__PDOwnArray_10, startup__PDPtr_20, &startup__PDOwn_21);
    }
#line 751 "startup.m"
    {
#line 751 "startup.m"
      profile__lookup_pd_desc_3_p_0(startup__PDDescArray_11, startup__PDPtr_20, &startup__PDDesc0_22);
    }
#line 752 "startup.m"
    {
#line 752 "startup.m"
      profile__lookup_pd_comp_table_3_p_0(startup__PDCompTableArray_12, startup__PDPtr_20, &startup__PDCompTable_23);
    }
#line 753 "startup.m"
    {
#line 753 "startup.m"
      startup__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__PDCompTable_23, ((MR_Box) (startup__PSPtr_19)), &startup__conv0_InnerTotal_24);
    }
#line 753 "startup.m"
    if (startup__succeeded)
#line 753 "startup.m"
      {
#line 753 "startup.m"
        startup__InnerTotal_24 = ((MR_Word) startup__conv0_InnerTotal_24);
#line 753 "startup.m"
        startup__succeeded = MR_TRUE;
#line 753 "startup.m"
      }
#line 755 "startup.m"
    if (startup__succeeded)
#line 754 "startup.m"
      {
#line 754 "startup.m"
        startup__PDDesc_25 = measurements__subtract_inherit_from_inherit_2_f_0(startup__InnerTotal_24, startup__PDDesc0_22);
      }
#line 755 "startup.m"
    else
#line 756 "startup.m"
      startup__PDDesc_25 = startup__PDDesc0_22;
#line 758 "startup.m"
    {
#line 758 "startup.m"
      profile__lookup_ps_own_3_p_0(startup__PSOwnArray0_15, startup__PSPtr_19, &startup__PSOwn0_26);
    }
#line 759 "startup.m"
    {
#line 759 "startup.m"
      profile__lookup_ps_desc_3_p_0(startup__PSDescArray0_17, startup__PSPtr_19, &startup__PSDesc0_27);
    }
#line 760 "startup.m"
    {
#line 760 "startup.m"
      startup__PSOwn_28 = measurements__add_own_to_own_2_f_0(startup__PDOwn_21, startup__PSOwn0_26);
    }
#line 761 "startup.m"
    {
#line 761 "startup.m"
      startup__PSDesc_29 = measurements__add_inherit_to_inherit_2_f_0(startup__PDDesc_25, startup__PSDesc0_27);
    }
#line 762 "startup.m"
    {
#line 762 "startup.m"
      startup__conv1_V_30_30 = array_util__u_1_f_0((MR_Word) &startup_scalar_common_1[14], ((MR_Box) (startup__PSOwnArray0_15)));
    }
#line 762 "startup.m"
    startup__V_30_30 = ((MR_ArrayPtr) startup__conv1_V_30_30);
#line 762 "startup.m"
    {
#line 762 "startup.m"
      profile__update_ps_own_4_p_0(startup__PSPtr_19, startup__PSOwn_28, startup__V_30_30, startup__PSOwnArray_16);
    }
#line 763 "startup.m"
    {
#line 763 "startup.m"
      startup__conv2_V_31_31 = array_util__u_1_f_0((MR_Word) &startup_scalar_common_1[17], ((MR_Box) (startup__PSDescArray0_17)));
    }
#line 763 "startup.m"
    startup__V_31_31 = ((MR_ArrayPtr) startup__conv2_V_31_31);
#line 763 "startup.m"
    {
#line 763 "startup.m"
      profile__update_ps_desc_4_p_0(startup__PSPtr_19, startup__PSDesc_29, startup__V_31_31, startup__PSDescArray_18);
#line 763 "startup.m"
      return;
    }
#line 747 "startup.m"
  }
#line 739 "startup.m"
}

#line 730 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0_1(
#line 730 "startup.m"
  MR_Box startup__closure_arg,
#line 730 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 730 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 730 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 730 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 730 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 730 "startup.m"
  MR_Box * startup__wrapper_arg_6)
#line 730 "startup.m"
{
#line 730 "startup.m"
  {
#line 730 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 730 "startup.m"
    MR_ArrayPtr startup__conv1_PSOwnArray_16;
#line 730 "startup.m"
    MR_ArrayPtr startup__conv0_PSDescArray_18;

#line 730 "startup.m"
    {
#line 730 "startup.m"
      startup__summarize_proc_dynamic_9_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv1_PSOwnArray_16, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv0_PSDescArray_18);
    }
#line 730 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv1_PSOwnArray_16));
#line 730 "startup.m"
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv0_PSDescArray_18));
#line 730 "startup.m"
  }
#line 730 "startup.m"
}

#line 724 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0(
#line 724 "startup.m"
  MR_Word startup__Deep0_3,
#line 724 "startup.m"
  MR_Word * startup__Deep_4)
#line 724 "startup.m"
{
#line 726 "startup.m"
  {
#line 726 "startup.m"
    MR_bool startup__succeeded;
#line 726 "startup.m"
    MR_ArrayPtr startup__PSOwnArray0_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 19)));
#line 726 "startup.m"
    MR_ArrayPtr startup__PSDescArray0_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 20)));
#line 726 "startup.m"
    MR_ArrayPtr startup__PSOwnArray_7;
#line 726 "startup.m"
    MR_ArrayPtr startup__PSDescArray_8;
#line 726 "startup.m"
    MR_Word startup__V_9_9;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_11_11;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_12_12;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 6)));
#line 726 "startup.m"
    MR_ArrayPtr startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 16)));
#line 726 "startup.m"
    MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 17)));
#line 726 "startup.m"
    MR_ArrayPtr startup__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 23)));
#line 726 "startup.m"
    MR_Word startup__V_185_185;
#line 726 "startup.m"
    MR_String startup__V_186_186;
#line 726 "startup.m"
    MR_String startup__V_187_187;
#line 726 "startup.m"
    MR_String startup__V_188_188;
#line 726 "startup.m"
    MR_Word startup__V_189_189;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_190_190;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_191_191;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_192_192;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_193_193;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_194_194;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_195_195;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_196_196;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_197_197;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_198_198;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_199_199;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_200_200;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_201_201;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_202_202;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_203_203;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_206_206;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_207_207;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_208_208;
#line 726 "startup.m"
    MR_ArrayPtr startup__V_209_209;
#line 726 "startup.m"
    MR_Word startup__V_210_210;
#line 726 "startup.m"
    MR_Word startup__V_211_211;
#line 726 "startup.m"
    MR_Word startup__V_212_212;
#line 726 "startup.m"
    MR_Word startup__V_213_213;
#line 727 "startup.m"
    MR_Word startup__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 0)));
#line 727 "startup.m"
    MR_String startup__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 1)));
#line 727 "startup.m"
    MR_String startup__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 2)));
#line 727 "startup.m"
    MR_String startup__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 3)));
#line 727 "startup.m"
    MR_Word startup__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 4)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 5)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 7)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 8)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 9)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 10)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 11)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 12)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 13)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 14)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 15)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 18)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 21)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 22)));
#line 727 "startup.m"
    MR_ArrayPtr startup__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 24)));
#line 727 "startup.m"
    MR_Word startup__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 25)));
#line 727 "startup.m"
    MR_Word startup__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 26)));
#line 727 "startup.m"
    MR_Word startup__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 27)));
#line 727 "startup.m"
    MR_Word startup__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 28)));
#line 733 "startup.m"
    MR_ArrayPtr startup__conv2_V_11_11;
#line 734 "startup.m"
    MR_ArrayPtr startup__conv3_V_12_12;
#line 729 "startup.m"
    MR_Box startup__conv5_PSOwnArray_7;
#line 729 "startup.m"
    MR_Box startup__conv4_PSDescArray_8;
#line 735 "startup.m"
    MR_ArrayPtr startup__V_204_204;
#line 735 "startup.m"
    MR_ArrayPtr startup__V_205_205;

#line 730 "startup.m"
    {
#line 730 "startup.m"
      startup__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 730 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_9_9, 0) = ((MR_Box) (&startup_scalar_common_11[0]));
#line 730 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_9_9, 1) = ((MR_Box) (startup__summarize_proc_dynamics_2_p_0_1));
#line 730 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 730 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_9_9, 3) = ((MR_Box) (startup__V_33_33));
#line 730 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_9_9, 4) = ((MR_Box) (startup__V_34_34));
#line 730 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_9_9, 5) = ((MR_Box) (startup__V_39_39));
#line 730 "startup.m"
    }
#line 733 "startup.m"
    {
#line 733 "startup.m"
      startup__conv2_V_11_11 = mercury__array__copy_1_f_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) startup__PSOwnArray0_5);
    }
#line 733 "startup.m"
    startup__V_11_11 = (MR_ArrayPtr) startup__conv2_V_11_11;
#line 734 "startup.m"
    {
#line 734 "startup.m"
      startup__conv3_V_12_12 = mercury__array__copy_1_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) startup__PSDescArray0_6);
    }
#line 734 "startup.m"
    startup__V_12_12 = (MR_ArrayPtr) startup__conv3_V_12_12;
#line 729 "startup.m"
    {
#line 729 "startup.m"
      array_util__array_foldl2_from_1_6_p_1((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &startup_scalar_common_1[14], (MR_Word) &startup_scalar_common_1[17], startup__V_9_9, (MR_ArrayPtr) startup__V_23_23, ((MR_Box) (startup__V_11_11)), &startup__conv5_PSOwnArray_7, ((MR_Box) (startup__V_12_12)), &startup__conv4_PSDescArray_8);
    }
#line 729 "startup.m"
    startup__PSOwnArray_7 = ((MR_ArrayPtr) startup__conv5_PSOwnArray_7);
#line 729 "startup.m"
    startup__PSDescArray_8 = ((MR_ArrayPtr) startup__conv4_PSDescArray_8);
#line 735 "startup.m"
    startup__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 0)));
#line 735 "startup.m"
    startup__V_186_186 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 1)));
#line 735 "startup.m"
    startup__V_187_187 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 2)));
#line 735 "startup.m"
    startup__V_188_188 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 3)));
#line 735 "startup.m"
    startup__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 4)));
#line 735 "startup.m"
    startup__V_190_190 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 5)));
#line 735 "startup.m"
    startup__V_191_191 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 6)));
#line 735 "startup.m"
    startup__V_192_192 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 7)));
#line 735 "startup.m"
    startup__V_193_193 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 8)));
#line 735 "startup.m"
    startup__V_194_194 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 9)));
#line 735 "startup.m"
    startup__V_195_195 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 10)));
#line 735 "startup.m"
    startup__V_196_196 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 11)));
#line 735 "startup.m"
    startup__V_197_197 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 12)));
#line 735 "startup.m"
    startup__V_198_198 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 13)));
#line 735 "startup.m"
    startup__V_199_199 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 14)));
#line 735 "startup.m"
    startup__V_200_200 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 15)));
#line 735 "startup.m"
    startup__V_201_201 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 16)));
#line 735 "startup.m"
    startup__V_202_202 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 17)));
#line 735 "startup.m"
    startup__V_203_203 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 18)));
#line 735 "startup.m"
    startup__V_204_204 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 19)));
#line 735 "startup.m"
    startup__V_205_205 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 20)));
#line 735 "startup.m"
    startup__V_206_206 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 21)));
#line 735 "startup.m"
    startup__V_207_207 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 22)));
#line 735 "startup.m"
    startup__V_208_208 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 23)));
#line 735 "startup.m"
    startup__V_209_209 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 24)));
#line 735 "startup.m"
    startup__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 25)));
#line 735 "startup.m"
    startup__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 26)));
#line 735 "startup.m"
    startup__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 27)));
#line 735 "startup.m"
    startup__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 28)));
#line 735 "startup.m"
    {
#line 735 "startup.m"
      MR_Word base;
#line 735 "startup.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 735 "startup.m"
      *startup__Deep_4 = base;
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__V_185_185));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__V_186_186));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__V_187_187));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__V_188_188));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__V_189_189));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__V_190_190));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__V_191_191));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__V_192_192));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__V_193_193));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__V_194_194));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__V_195_195));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__V_196_196));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__V_197_197));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__V_198_198));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__V_199_199));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__V_200_200));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__V_201_201));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__V_202_202));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__V_203_203));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__PSOwnArray_7));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__PSDescArray_8));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__V_206_206));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__V_207_207));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__V_208_208));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__V_209_209));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__V_210_210));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__V_211_211));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__V_212_212));
#line 735 "startup.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__V_213_213));
#line 735 "startup.m"
    }
#line 726 "startup.m"
  }
#line 724 "startup.m"
}

#line 707 "startup.m"
static void MR_CALL 
startup__sum_call_sites_in_proc_dynamic_4_p_0(
#line 707 "startup.m"
  MR_Integer startup__HeadVar__1_5,
#line 707 "startup.m"
  MR_Word startup__CSD_6,
#line 707 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PDOwnArray_0_13,
#line 707 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PDOwnArray_14)
#line 707 "startup.m"
{
#line 710 "startup.m"
  {
#line 710 "startup.m"
    MR_bool startup__succeeded;

#line 710 "startup.m"
    {
#line 710 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_p_0(startup__CSD_6, startup__STATE_VARIABLE_PDOwnArray_0_13, startup__STATE_VARIABLE_PDOwnArray_14);
#line 710 "startup.m"
      return;
    }
#line 710 "startup.m"
  }
#line 707 "startup.m"
}

#line 675 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_3_7_p_0(
#line 675 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_8,
#line 675 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_9,
#line 675 "startup.m"
  MR_Word startup__CSSPtr_10,
#line 675 "startup.m"
  MR_Integer startup___Dummy_11,
#line 675 "startup.m"
  MR_Word startup__CSDPtr_12,
#line 675 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_25,
#line 675 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_26)
#line 675 "startup.m"
{
#line 682 "startup.m"
  {
#line 682 "startup.m"
    MR_bool startup__succeeded;

#line 682 "startup.m"
    {
#line 682 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(startup__CallSiteDynamics_8, startup__ProcDynamics_9, startup__CSSPtr_10, startup__CSDPtr_12, startup__STATE_VARIABLE_CallSiteCalls_0_25, startup__STATE_VARIABLE_CallSiteCalls_26);
#line 682 "startup.m"
      return;
    }
#line 682 "startup.m"
  }
#line 675 "startup.m"
}

#line 665 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0_1(
#line 665 "startup.m"
  MR_Box startup__closure_arg,
#line 665 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 665 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 665 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 665 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 665 "startup.m"
{
#line 665 "startup.m"
  {
#line 665 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 665 "startup.m"
    MR_ArrayPtr startup__conv2_STATE_VARIABLE_CallSiteCalls_26;

#line 665 "startup.m"
    {
#line 665 "startup.m"
      startup__construct_call_site_calls_3_7_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv2_STATE_VARIABLE_CallSiteCalls_26);
    }
#line 665 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv2_STATE_VARIABLE_CallSiteCalls_26));
#line 665 "startup.m"
  }
#line 665 "startup.m"
}

#line 646 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0(
#line 646 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_8,
#line 646 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_9,
#line 646 "startup.m"
  MR_Integer startup__SlotNum_10,
#line 646 "startup.m"
  MR_ArrayPtr startup__CSSPtrs_11,
#line 646 "startup.m"
  MR_ArrayPtr startup__CSDArraySlots_12,
#line 646 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_19,
#line 646 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_20)
#line 646 "startup.m"
{
#line 671 "startup.m"
  while (MR_TRUE)
#line 671 "startup.m"
    {
#line 671 "startup.m"
      /* tailcall optimized into a loop */
#line 671 "startup.m"
      {
#line 671 "startup.m"
        MR_bool startup__succeeded = (startup__SlotNum_10 >= (MR_Integer) 0);

#line 671 "startup.m"
        if (startup__succeeded)
#line 656 "startup.m"
          {
#line 656 "startup.m"
            MR_Word startup__CSDArraySlot_14;
#line 656 "startup.m"
            MR_Word startup__CSSPtr_15;
#line 656 "startup.m"
            MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_25_25;
#line 656 "startup.m"
            MR_Integer startup__V_26_26;
#line 656 "startup.m"
            MR_Box startup__conv0_CSDArraySlot_14;
#line 657 "startup.m"
            MR_Box startup__conv1_CSSPtr_15;

#line 656 "startup.m"
            {
#line 656 "startup.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) startup__CSDArraySlots_12, startup__SlotNum_10, &startup__conv0_CSDArraySlot_14);
            }
#line 656 "startup.m"
            startup__CSDArraySlot_14 = ((MR_Word) startup__conv0_CSDArraySlot_14);
#line 657 "startup.m"
            {
#line 657 "startup.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) startup__CSSPtrs_11, startup__SlotNum_10, &startup__conv1_CSSPtr_15);
            }
#line 657 "startup.m"
            startup__CSSPtr_15 = ((MR_Word) startup__conv1_CSSPtr_15);
#line 662 "startup.m"
            if (((MR_tag((MR_Word) startup__CSDArraySlot_14)) == (MR_mktag((MR_Integer) 1))))
#line 663 "startup.m"
              {
#line 663 "startup.m"
                MR_ArrayPtr startup__CSDPtrs_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__CSDArraySlot_14, (MR_Integer) 1)));
#line 663 "startup.m"
                MR_Word startup__V_22_22;
#line 663 "startup.m"
                MR_Word startup__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__CSDArraySlot_14, (MR_Integer) 0)));
#line 664 "startup.m"
                MR_Box startup__conv3_STATE_VARIABLE_CallSiteCalls_25_25;

#line 665 "startup.m"
                {
#line 665 "startup.m"
                  startup__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 665 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_22_22, 0) = ((MR_Box) (&startup_scalar_common_10[0]));
#line 665 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_22_22, 1) = ((MR_Box) (startup__construct_call_site_calls_2_7_p_0_1));
#line 665 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 665 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_22_22, 3) = ((MR_Box) (startup__CallSiteDynamics_8));
#line 665 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_22_22, 4) = ((MR_Box) (startup__ProcDynamics_9));
#line 665 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_22_22, 5) = ((MR_Box) (startup__CSSPtr_15));
#line 665 "startup.m"
                }
#line 664 "startup.m"
                {
#line 664 "startup.m"
                  array_util__array_foldl_from_0_4_p_1((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &startup_scalar_common_1[11], startup__V_22_22, (MR_ArrayPtr) startup__CSDPtrs_18, ((MR_Box) (startup__STATE_VARIABLE_CallSiteCalls_0_19)), &startup__conv3_STATE_VARIABLE_CallSiteCalls_25_25);
                }
#line 664 "startup.m"
                startup__STATE_VARIABLE_CallSiteCalls_25_25 = ((MR_ArrayPtr) startup__conv3_STATE_VARIABLE_CallSiteCalls_25_25);
#line 663 "startup.m"
              }
#line 662 "startup.m"
            else
#line 659 "startup.m"
              {
#line 659 "startup.m"
                MR_Word startup__CSDPtr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSDArraySlot_14, (MR_Integer) 0)));

#line 660 "startup.m"
                {
#line 660 "startup.m"
                  startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(startup__CallSiteDynamics_8, startup__ProcDynamics_9, startup__CSSPtr_15, startup__CSDPtr_16, startup__STATE_VARIABLE_CallSiteCalls_0_19, &startup__STATE_VARIABLE_CallSiteCalls_25_25);
                }
#line 659 "startup.m"
              }
#line 670 "startup.m"
            startup__V_26_26 = (startup__SlotNum_10 - (MR_Integer) 1);
#line 669 "startup.m"
            /* direct tailcall eliminated */
#line 669 "startup.m"
            {
#line 669 "startup.m"
              MR_Integer startup__SlotNum__tmp_copy_10 = startup__V_26_26;
#line 669 "startup.m"
              MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0__tmp_copy_19 = startup__STATE_VARIABLE_CallSiteCalls_25_25;

#line 669 "startup.m"
              startup__STATE_VARIABLE_CallSiteCalls_0_19 = startup__STATE_VARIABLE_CallSiteCalls_0__tmp_copy_19;
#line 669 "startup.m"
              startup__SlotNum_10 = startup__SlotNum__tmp_copy_10;
#line 669 "startup.m"
            }
#line 669 "startup.m"
            continue;
#line 656 "startup.m"
          }
#line 671 "startup.m"
        else
#line 671 "startup.m"
          *startup__STATE_VARIABLE_CallSiteCalls_20 = startup__STATE_VARIABLE_CallSiteCalls_0_19;
#line 671 "startup.m"
      }
#line 671 "startup.m"
      break;
#line 671 "startup.m"
    }
#line 646 "startup.m"
}

#line 629 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_5_p_0(
#line 629 "startup.m"
  MR_Word startup__InitDeep_6,
#line 629 "startup.m"
  MR_Integer startup___PDI_7,
#line 629 "startup.m"
  MR_Word startup__PD_8,
#line 629 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_18,
#line 629 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_19)
#line 629 "startup.m"
{
#line 634 "startup.m"
  {
#line 634 "startup.m"
    MR_bool startup__succeeded;

#line 634 "startup.m"
    {
#line 634 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_p_0(startup__InitDeep_6, startup__PD_8, startup__STATE_VARIABLE_CallSiteCalls_0_18, startup__STATE_VARIABLE_CallSiteCalls_19);
#line 634 "startup.m"
      return;
    }
#line 634 "startup.m"
  }
#line 629 "startup.m"
}

#line 614 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_3_6_p_0(
#line 614 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_7,
#line 614 "startup.m"
  MR_Word startup__CSSPtr_8,
#line 614 "startup.m"
  MR_Integer startup___Dummy_9,
#line 614 "startup.m"
  MR_Word startup__CSDPtr_10,
#line 614 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_12,
#line 614 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_13)
#line 614 "startup.m"
{
#line 623 "startup.m"
  {
#line 623 "startup.m"
    MR_bool startup__succeeded;

#line 623 "startup.m"
    {
#line 623 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_p_0(startup__CallSiteDynamics_7, startup__CSSPtr_8, startup__CSDPtr_10, startup__STATE_VARIABLE_CallSiteStaticMap_0_12, startup__STATE_VARIABLE_CallSiteStaticMap_13);
#line 623 "startup.m"
      return;
    }
#line 623 "startup.m"
  }
#line 614 "startup.m"
}

#line 605 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0_1(
#line 605 "startup.m"
  MR_Box startup__closure_arg,
#line 605 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 605 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 605 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 605 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 605 "startup.m"
{
#line 605 "startup.m"
  {
#line 605 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 605 "startup.m"
    MR_ArrayPtr startup__conv2_STATE_VARIABLE_CallSiteStaticMap_13;

#line 605 "startup.m"
    {
#line 605 "startup.m"
      startup__construct_call_site_caller_3_6_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv2_STATE_VARIABLE_CallSiteStaticMap_13);
    }
#line 605 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv2_STATE_VARIABLE_CallSiteStaticMap_13));
#line 605 "startup.m"
  }
#line 605 "startup.m"
}

#line 588 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0(
#line 588 "startup.m"
  MR_Integer startup__SlotNum_7,
#line 588 "startup.m"
  MR_ArrayPtr startup__Deep_8,
#line 588 "startup.m"
  MR_ArrayPtr startup__CSSPtrs_9,
#line 588 "startup.m"
  MR_ArrayPtr startup__CSDArraySlots_10,
#line 588 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_17,
#line 588 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_18)
#line 588 "startup.m"
{
#line 610 "startup.m"
  while (MR_TRUE)
#line 610 "startup.m"
    {
#line 610 "startup.m"
      /* tailcall optimized into a loop */
#line 610 "startup.m"
      {
#line 610 "startup.m"
        MR_bool startup__succeeded = (startup__SlotNum_7 >= (MR_Integer) 0);

#line 610 "startup.m"
        if (startup__succeeded)
#line 597 "startup.m"
          {
#line 597 "startup.m"
            MR_Word startup__CSDArraySlot_12;
#line 597 "startup.m"
            MR_Word startup__CSSPtr_13;
#line 597 "startup.m"
            MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_23_23;
#line 597 "startup.m"
            MR_Integer startup__V_24_24;
#line 597 "startup.m"
            MR_Box startup__conv0_CSDArraySlot_12;
#line 598 "startup.m"
            MR_Box startup__conv1_CSSPtr_13;

#line 597 "startup.m"
            {
#line 597 "startup.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) startup__CSDArraySlots_10, startup__SlotNum_7, &startup__conv0_CSDArraySlot_12);
            }
#line 597 "startup.m"
            startup__CSDArraySlot_12 = ((MR_Word) startup__conv0_CSDArraySlot_12);
#line 598 "startup.m"
            {
#line 598 "startup.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) startup__CSSPtrs_9, startup__SlotNum_7, &startup__conv1_CSSPtr_13);
            }
#line 598 "startup.m"
            startup__CSSPtr_13 = ((MR_Word) startup__conv1_CSSPtr_13);
#line 603 "startup.m"
            if (((MR_tag((MR_Word) startup__CSDArraySlot_12)) == (MR_mktag((MR_Integer) 1))))
#line 604 "startup.m"
              {
#line 604 "startup.m"
                MR_ArrayPtr startup__CSDPtrs_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__CSDArraySlot_12, (MR_Integer) 1)));
#line 604 "startup.m"
                MR_Word startup__V_20_20;
#line 604 "startup.m"
                MR_Word startup__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__CSDArraySlot_12, (MR_Integer) 0)));
#line 605 "startup.m"
                MR_Box startup__conv3_STATE_VARIABLE_CallSiteStaticMap_23_23;

#line 605 "startup.m"
                {
#line 605 "startup.m"
                  startup__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 605 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_20_20, 0) = ((MR_Box) (&startup_scalar_common_3[2]));
#line 605 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_20_20, 1) = ((MR_Box) (startup__construct_call_site_caller_2_6_p_0_1));
#line 605 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 605 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_20_20, 3) = ((MR_Box) (startup__Deep_8));
#line 605 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_20_20, 4) = ((MR_Box) (startup__CSSPtr_13));
#line 605 "startup.m"
                }
#line 605 "startup.m"
                {
#line 605 "startup.m"
                  array_util__array_foldl_from_0_4_p_1((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &startup_scalar_common_1[10], startup__V_20_20, (MR_ArrayPtr) startup__CSDPtrs_16, ((MR_Box) (startup__STATE_VARIABLE_CallSiteStaticMap_0_17)), &startup__conv3_STATE_VARIABLE_CallSiteStaticMap_23_23);
                }
#line 605 "startup.m"
                startup__STATE_VARIABLE_CallSiteStaticMap_23_23 = ((MR_ArrayPtr) startup__conv3_STATE_VARIABLE_CallSiteStaticMap_23_23);
#line 604 "startup.m"
              }
#line 603 "startup.m"
            else
#line 600 "startup.m"
              {
#line 600 "startup.m"
                MR_Word startup__CSDPtr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSDArraySlot_12, (MR_Integer) 0)));

#line 621 "startup.m"
                {
#line 621 "startup.m"
                  startup__succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(startup__Deep_8, startup__CSDPtr_14);
                }
#line 623 "startup.m"
                if (startup__succeeded)
#line 622 "startup.m"
                  {
#line 622 "startup.m"
                    profile__update_call_site_static_map_4_p_0(startup__CSDPtr_14, startup__CSSPtr_13, startup__STATE_VARIABLE_CallSiteStaticMap_0_17, &startup__STATE_VARIABLE_CallSiteStaticMap_23_23);
                  }
#line 623 "startup.m"
                else
#line 623 "startup.m"
                  startup__STATE_VARIABLE_CallSiteStaticMap_23_23 = startup__STATE_VARIABLE_CallSiteStaticMap_0_17;
#line 600 "startup.m"
              }
#line 608 "startup.m"
            startup__V_24_24 = (startup__SlotNum_7 - (MR_Integer) 1);
#line 608 "startup.m"
            /* direct tailcall eliminated */
#line 608 "startup.m"
            {
#line 608 "startup.m"
              MR_Integer startup__SlotNum__tmp_copy_7 = startup__V_24_24;
#line 608 "startup.m"
              MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0__tmp_copy_17 = startup__STATE_VARIABLE_CallSiteStaticMap_23_23;

#line 608 "startup.m"
              startup__STATE_VARIABLE_CallSiteStaticMap_0_17 = startup__STATE_VARIABLE_CallSiteStaticMap_0__tmp_copy_17;
#line 608 "startup.m"
              startup__SlotNum_7 = startup__SlotNum__tmp_copy_7;
#line 608 "startup.m"
            }
#line 608 "startup.m"
            continue;
#line 597 "startup.m"
          }
#line 610 "startup.m"
        else
#line 610 "startup.m"
          *startup__STATE_VARIABLE_CallSiteStaticMap_18 = startup__STATE_VARIABLE_CallSiteStaticMap_0_17;
#line 610 "startup.m"
      }
#line 610 "startup.m"
      break;
#line 610 "startup.m"
    }
#line 588 "startup.m"
}

#line 574 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_5_p_0(
#line 574 "startup.m"
  MR_Word startup__InitDeep_6,
#line 574 "startup.m"
  MR_Integer startup___PDI_7,
#line 574 "startup.m"
  MR_Word startup__PD_8,
#line 574 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_15,
#line 574 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_16)
#line 574 "startup.m"
{
#line 578 "startup.m"
  {
#line 578 "startup.m"
    MR_bool startup__succeeded;

#line 578 "startup.m"
    {
#line 578 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_p_0(startup__InitDeep_6, startup__PD_8, startup__STATE_VARIABLE_CallSiteStaticMap_0_15, startup__STATE_VARIABLE_CallSiteStaticMap_16);
#line 578 "startup.m"
      return;
    }
#line 578 "startup.m"
  }
#line 574 "startup.m"
}

#line 557 "startup.m"
static void MR_CALL 
startup__construct_proc_callers_5_p_0(
#line 557 "startup.m"
  MR_Word startup__InitDeep_6,
#line 557 "startup.m"
  MR_Integer startup__CSDI_7,
#line 557 "startup.m"
  MR_Word startup__CSD_8,
#line 557 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_ProcCallers_0_15,
#line 557 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_ProcCallers_16)
#line 557 "startup.m"
{
#line 562 "startup.m"
  {
#line 562 "startup.m"
    MR_bool startup__succeeded;
#line 562 "startup.m"
    MR_Word startup__PDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_8, (MR_Integer) 1)));
#line 563 "startup.m"
    MR_Word startup__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_8, (MR_Integer) 0)));
#line 563 "startup.m"
    MR_Word startup__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_8, (MR_Integer) 2)));
#line 564 "startup.m"
    MR_ArrayPtr startup__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
#line 564 "startup.m"
    MR_Word startup__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
#line 564 "startup.m"
    MR_Word startup__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
#line 564 "startup.m"
    MR_ArrayPtr startup__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
#line 564 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
#line 564 "startup.m"
    MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));

#line 564 "startup.m"
    {
#line 564 "startup.m"
      startup__succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(startup__V_17_17, startup__PDPtr_10);
    }
#line 570 "startup.m"
    if (startup__succeeded)
#line 565 "startup.m"
      {
#line 565 "startup.m"
        MR_Word startup__PD_11;
#line 565 "startup.m"
        MR_Word startup__PSPtr_12;
#line 565 "startup.m"
        MR_Word startup__Callers0_13;
#line 565 "startup.m"
        MR_Word startup__Callers_14;
#line 565 "startup.m"
        MR_ArrayPtr startup__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
#line 565 "startup.m"
        MR_Word startup__V_19_19;
#line 565 "startup.m"
        MR_Word startup__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
#line 565 "startup.m"
        MR_Word startup__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
#line 565 "startup.m"
        MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
#line 565 "startup.m"
        MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
#line 565 "startup.m"
        MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
#line 566 "startup.m"
        MR_ArrayPtr startup__V_33_33;
#line 566 "startup.m"
        MR_Word startup__V_34_34;

#line 565 "startup.m"
        {
#line 565 "startup.m"
          profile__lookup_proc_dynamics_3_p_0(startup__V_18_18, startup__PDPtr_10, &startup__PD_11);
        }
#line 566 "startup.m"
        startup__PSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_11, (MR_Integer) 0)));
#line 566 "startup.m"
        startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_11, (MR_Integer) 1)));
#line 566 "startup.m"
        startup__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_11, (MR_Integer) 2)));
#line 567 "startup.m"
        {
#line 567 "startup.m"
          profile__lookup_proc_callers_3_p_0(startup__STATE_VARIABLE_ProcCallers_0_15, startup__PSPtr_12, &startup__Callers0_13);
        }
#line 568 "startup.m"
        startup__V_19_19 = (MR_Word) startup__CSDI_7;
#line 568 "startup.m"
        {
#line 568 "startup.m"
          startup__Callers_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "startup.m"
          MR_hl_field(MR_mktag(1), startup__Callers_14, 0) = ((MR_Box) (startup__V_19_19));
#line 568 "startup.m"
          MR_hl_field(MR_mktag(1), startup__Callers_14, 1) = ((MR_Box) (startup__Callers0_13));
#line 568 "startup.m"
        }
#line 569 "startup.m"
        {
#line 569 "startup.m"
          profile__update_proc_callers_4_p_0(startup__PSPtr_12, startup__Callers_14, startup__STATE_VARIABLE_ProcCallers_0_15, startup__STATE_VARIABLE_ProcCallers_16);
#line 569 "startup.m"
          return;
        }
#line 565 "startup.m"
      }
#line 570 "startup.m"
    else
#line 570 "startup.m"
      *startup__STATE_VARIABLE_ProcCallers_16 = startup__STATE_VARIABLE_ProcCallers_0_15;
#line 562 "startup.m"
  }
#line 557 "startup.m"
}

#line 525 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_2_8_p_0(
#line 525 "startup.m"
  MR_Word startup__InitDeep_9,
#line 525 "startup.m"
  MR_ArrayPtr startup__CliqueIndex_10,
#line 525 "startup.m"
  MR_Word startup__ParentCliquePtr_11,
#line 525 "startup.m"
  MR_Word startup__CSDPtr_12,
#line 525 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueParents_0_21,
#line 525 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueParents_22,
#line 525 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueMaybeChildren_0_23,
#line 525 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueMaybeChildren_24)
#line 525 "startup.m"
{
#line 533 "startup.m"
  {
#line 533 "startup.m"
    MR_bool startup__succeeded;
#line 533 "startup.m"
    MR_Integer startup__CSDI_15 = (MR_Integer) startup__CSDPtr_12;

#line 535 "startup.m"
    startup__succeeded = (startup__CSDI_15 > (MR_Integer) 0);
#line 551 "startup.m"
    if (startup__succeeded)
#line 536 "startup.m"
      {
#line 536 "startup.m"
        MR_Word startup__CSD_16;
#line 536 "startup.m"
        MR_Word startup__ChildPDPtr_17;
#line 536 "startup.m"
        MR_Integer startup__ChildPDI_18;
#line 536 "startup.m"
        MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 2)));
#line 536 "startup.m"
        MR_Word startup__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 0)));
#line 536 "startup.m"
        MR_Word startup__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 1)));
#line 536 "startup.m"
        MR_ArrayPtr startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 3)));
#line 536 "startup.m"
        MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 4)));
#line 536 "startup.m"
        MR_ArrayPtr startup__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 5)));
#line 536 "startup.m"
        MR_Box startup__conv0_CSD_16;
#line 537 "startup.m"
        MR_Word startup__V_36_36;
#line 537 "startup.m"
        MR_Word startup__V_37_37;

#line 536 "startup.m"
        {
#line 536 "startup.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) startup__V_26_26, startup__CSDI_15, &startup__conv0_CSD_16);
        }
#line 536 "startup.m"
        startup__CSD_16 = ((MR_Word) startup__conv0_CSD_16);
#line 537 "startup.m"
        startup__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 0)));
#line 537 "startup.m"
        startup__ChildPDPtr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 1)));
#line 537 "startup.m"
        startup__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 2)));
#line 538 "startup.m"
        startup__ChildPDI_18 = (MR_Integer) startup__ChildPDPtr_17;
#line 539 "startup.m"
        startup__succeeded = (startup__ChildPDI_18 > (MR_Integer) 0);
#line 548 "startup.m"
        if (startup__succeeded)
#line 540 "startup.m"
          {
#line 540 "startup.m"
            MR_Word startup__ChildCliquePtr_19;
#line 540 "startup.m"
            MR_Box startup__conv1_ChildCliquePtr_19;
#line 541 "startup.m"
            MR_Integer startup__V_43_43;
#line 541 "startup.m"
            MR_Integer startup__V_44_44;

#line 540 "startup.m"
            {
#line 540 "startup.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_ArrayPtr) startup__CliqueIndex_10, startup__ChildPDI_18, &startup__conv1_ChildCliquePtr_19);
            }
#line 540 "startup.m"
            startup__ChildCliquePtr_19 = ((MR_Word) startup__conv1_ChildCliquePtr_19);
#line 541 "startup.m"
            startup__V_43_43 = (MR_Integer) startup__ChildCliquePtr_19;
#line 541 "startup.m"
            startup__V_44_44 = (MR_Integer) startup__ParentCliquePtr_11;
#line 541 "startup.m"
            startup__succeeded = (startup__V_43_43 == startup__V_44_44);
#line 541 "startup.m"
            startup__succeeded = !(startup__succeeded);
#line 545 "startup.m"
            if (startup__succeeded)
#line 542 "startup.m"
              {
#line 542 "startup.m"
                MR_Integer startup__ChildCliqueNum_20 = (MR_Integer) startup__ChildCliquePtr_19;
#line 542 "startup.m"
                MR_Word startup__V_29_29;
#line 543 "startup.m"
                MR_ArrayPtr startup__conv2_STATE_VARIABLE_CliqueParents_22;
#line 544 "startup.m"
                MR_ArrayPtr startup__conv3_STATE_VARIABLE_CliqueMaybeChildren_24;

#line 543 "startup.m"
                {
#line 543 "startup.m"
                  mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__ChildCliqueNum_20, ((MR_Box) (startup__CSDPtr_12)), (MR_ArrayPtr) startup__STATE_VARIABLE_CliqueParents_0_21, &startup__conv2_STATE_VARIABLE_CliqueParents_22);
                }
#line 543 "startup.m"
                *startup__STATE_VARIABLE_CliqueParents_22 = (MR_ArrayPtr) startup__conv2_STATE_VARIABLE_CliqueParents_22;
#line 544 "startup.m"
                {
#line 544 "startup.m"
                  startup__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 544 "startup.m"
                  MR_hl_field(MR_mktag(1), startup__V_29_29, 0) = ((MR_Box) (startup__ChildCliquePtr_19));
#line 544 "startup.m"
                }
#line 544 "startup.m"
                {
#line 544 "startup.m"
                  mercury__array__set_4_p_0((MR_Word) &startup_scalar_common_1[5], startup__CSDI_15, ((MR_Box) (startup__V_29_29)), (MR_ArrayPtr) startup__STATE_VARIABLE_CliqueMaybeChildren_0_23, &startup__conv3_STATE_VARIABLE_CliqueMaybeChildren_24);
                }
#line 544 "startup.m"
                *startup__STATE_VARIABLE_CliqueMaybeChildren_24 = (MR_ArrayPtr) startup__conv3_STATE_VARIABLE_CliqueMaybeChildren_24;
#line 542 "startup.m"
              }
#line 545 "startup.m"
            else
#line 546 "startup.m"
              {
#line 546 "startup.m"
                *startup__STATE_VARIABLE_CliqueMaybeChildren_24 = startup__STATE_VARIABLE_CliqueMaybeChildren_0_23;
#line 546 "startup.m"
                *startup__STATE_VARIABLE_CliqueParents_22 = startup__STATE_VARIABLE_CliqueParents_0_21;
#line 546 "startup.m"
              }
#line 540 "startup.m"
          }
#line 548 "startup.m"
        else
#line 549 "startup.m"
          {
#line 549 "startup.m"
            *startup__STATE_VARIABLE_CliqueMaybeChildren_24 = startup__STATE_VARIABLE_CliqueMaybeChildren_0_23;
#line 549 "startup.m"
            *startup__STATE_VARIABLE_CliqueParents_22 = startup__STATE_VARIABLE_CliqueParents_0_21;
#line 549 "startup.m"
          }
#line 536 "startup.m"
      }
#line 551 "startup.m"
    else
#line 552 "startup.m"
      {
#line 552 "startup.m"
        *startup__STATE_VARIABLE_CliqueMaybeChildren_24 = startup__STATE_VARIABLE_CliqueMaybeChildren_0_23;
#line 552 "startup.m"
        *startup__STATE_VARIABLE_CliqueParents_22 = startup__STATE_VARIABLE_CliqueParents_0_21;
#line 552 "startup.m"
      }
#line 533 "startup.m"
  }
#line 525 "startup.m"
}

#line 519 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_8_p_0_2(
#line 519 "startup.m"
  MR_Box startup__closure_arg,
#line 519 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 519 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 519 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 519 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 519 "startup.m"
  MR_Box * startup__wrapper_arg_5)
#line 519 "startup.m"
{
#line 519 "startup.m"
  {
#line 519 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 519 "startup.m"
    MR_ArrayPtr startup__conv5_STATE_VARIABLE_CliqueParents_22;
#line 519 "startup.m"
    MR_ArrayPtr startup__conv4_STATE_VARIABLE_CliqueMaybeChildren_24;

#line 519 "startup.m"
    {
#line 519 "startup.m"
      startup__construct_clique_parents_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_Word) startup__wrapper_arg_1), ((MR_ArrayPtr) startup__wrapper_arg_2), &startup__conv5_STATE_VARIABLE_CliqueParents_22, ((MR_ArrayPtr) startup__wrapper_arg_4), &startup__conv4_STATE_VARIABLE_CliqueMaybeChildren_24);
    }
#line 519 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv5_STATE_VARIABLE_CliqueParents_22));
#line 519 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv4_STATE_VARIABLE_CliqueMaybeChildren_24));
#line 519 "startup.m"
  }
#line 519 "startup.m"
}

#line 1050 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_8_p_0_1(
#line 1050 "startup.m"
  MR_Box startup__closure_arg,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 1050 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 1050 "startup.m"
  MR_Box * startup__wrapper_arg_5)
#line 1050 "startup.m"
{
#line 1050 "startup.m"
  {
#line 1050 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 1050 "startup.m"
    MR_Word startup__conv1_CSDPtrs1_8;
#line 1050 "startup.m"
    MR_Word startup__conv0_IsZeroed_10;

#line 1050 "startup.m"
    {
#line 1050 "startup.m"
      startup__gather_call_site_csdptrs_5_p_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_CSDPtrs1_8, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_IsZeroed_10);
    }
#line 1050 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_CSDPtrs1_8));
#line 1050 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_IsZeroed_10));
#line 1050 "startup.m"
  }
#line 1050 "startup.m"
}

#line 506 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_8_p_0(
#line 506 "startup.m"
  MR_Word startup__InitDeep_9,
#line 506 "startup.m"
  MR_ArrayPtr startup__CliqueIndex_10,
#line 506 "startup.m"
  MR_Integer startup__PDI_11,
#line 506 "startup.m"
  MR_Word startup__CliquePtr_12,
#line 506 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueParents_0_16,
#line 506 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueParents_17,
#line 506 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueMaybeChildren_0_18,
#line 506 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueMaybeChildren_19)
#line 506 "startup.m"
{
#line 521 "startup.m"
  {
#line 521 "startup.m"
    MR_bool startup__succeeded = (startup__PDI_11 > (MR_Integer) 0);

#line 521 "startup.m"
    if (startup__succeeded)
#line 517 "startup.m"
      {
#line 517 "startup.m"
        MR_Word startup__TypeCtorInfo_37_37;
#line 517 "startup.m"
        MR_Word startup__TypeCtorInfo_13_56;
#line 517 "startup.m"
        MR_Word startup__CSDPtrs_15;
#line 517 "startup.m"
        MR_ArrayPtr startup__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 3)));
#line 517 "startup.m"
        MR_Word startup__V_22_22 = (MR_Word) startup__PDI_11;
#line 517 "startup.m"
        MR_Word startup__V_23_23;
#line 517 "startup.m"
        MR_Word startup__PD_42;
#line 517 "startup.m"
        MR_ArrayPtr startup__CallSiteArray_43;
#line 517 "startup.m"
        MR_Word startup__CallSites_50;
#line 517 "startup.m"
        MR_Word startup__CSDPtrsList0_51;
#line 517 "startup.m"
        MR_Word startup__CSDPtrsList_52;
#line 516 "startup.m"
        MR_Word startup__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 0)));
#line 516 "startup.m"
        MR_Word startup__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 1)));
#line 516 "startup.m"
        MR_ArrayPtr startup__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 2)));
#line 516 "startup.m"
        MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 4)));
#line 516 "startup.m"
        MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 5)));
#line 1042 "startup.m"
        MR_Word startup__V_45_45;
#line 1042 "startup.m"
        MR_Word startup__V_46_46;
#line 1050 "startup.m"
        MR_Word startup__V_44_44;
#line 1050 "startup.m"
        MR_Box startup__conv3_CSDPtrsList0_51;
#line 1050 "startup.m"
        MR_Box startup__conv2_V_44_44;
#line 518 "startup.m"
        MR_ArrayPtr startup__conv7_STATE_VARIABLE_CliqueParents_17;
#line 518 "startup.m"
        MR_ArrayPtr startup__conv6_STATE_VARIABLE_CliqueMaybeChildren_19;

#line 1041 "startup.m"
        {
#line 1041 "startup.m"
          profile__lookup_proc_dynamics_3_p_0(startup__V_21_21, startup__V_22_22, &startup__PD_42);
        }
#line 1042 "startup.m"
        startup__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_42, (MR_Integer) 0)));
#line 1042 "startup.m"
        startup__CallSiteArray_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_42, (MR_Integer) 1)));
#line 1042 "startup.m"
        startup__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_42, (MR_Integer) 2)));
#line 8313 "startup.c"
        startup__TypeCtorInfo_13_56 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
#line 1049 "startup.m"
        {
#line 1049 "startup.m"
          mercury__array__to_list_2_p_0(startup__TypeCtorInfo_13_56, (MR_ArrayPtr) startup__CallSiteArray_43, &startup__CallSites_50);
        }
#line 1050 "startup.m"
        {
#line 1050 "startup.m"
          mercury__list__foldl2_6_p_0(startup__TypeCtorInfo_13_56, (MR_Word) &startup_scalar_common_1[19], (MR_Word) &profile__profile__type_ctor_info_is_zeroed_0, (MR_Word) &startup_scalar_common_2[11], startup__CallSites_50, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv3_CSDPtrsList0_51, ((MR_Box) ((MR_Integer) 1)), &startup__conv2_V_44_44);
        }
#line 1050 "startup.m"
        startup__CSDPtrsList0_51 = ((MR_Word) startup__conv3_CSDPtrsList0_51);
#line 1050 "startup.m"
        startup__V_44_44 = ((MR_Word) startup__conv2_V_44_44);
#line 1052 "startup.m"
        {
#line 1052 "startup.m"
          mercury__list__reverse_2_p_0((MR_Word) &startup_scalar_common_1[8], startup__CSDPtrsList0_51, &startup__CSDPtrsList_52);
        }
#line 1053 "startup.m"
        {
#line 1053 "startup.m"
          mercury__list__condense_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__CSDPtrsList_52, &startup__CSDPtrs_15);
        }
#line 519 "startup.m"
        {
#line 519 "startup.m"
          startup__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 519 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_23_23, 0) = ((MR_Box) (&startup_scalar_common_5[1]));
#line 519 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_23_23, 1) = ((MR_Box) (startup__construct_clique_parents_8_p_0_2));
#line 519 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 519 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_23_23, 3) = ((MR_Box) (startup__InitDeep_9));
#line 519 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_23_23, 4) = ((MR_Box) (startup__CliqueIndex_10));
#line 519 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_23_23, 5) = ((MR_Box) (startup__CliquePtr_12));
#line 519 "startup.m"
        }
#line 8357 "startup.c"
        startup__TypeCtorInfo_37_37 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 518 "startup.m"
        {
#line 518 "startup.m"
          array_util__array_list_foldl2_6_p_0(startup__TypeCtorInfo_37_37, startup__TypeCtorInfo_37_37, (MR_Word) &startup_scalar_common_1[5], startup__V_23_23, startup__CSDPtrs_15, (MR_ArrayPtr) startup__STATE_VARIABLE_CliqueParents_0_16, &startup__conv7_STATE_VARIABLE_CliqueParents_17, (MR_ArrayPtr) startup__STATE_VARIABLE_CliqueMaybeChildren_0_18, &startup__conv6_STATE_VARIABLE_CliqueMaybeChildren_19);
        }
#line 518 "startup.m"
        *startup__STATE_VARIABLE_CliqueParents_17 = (MR_ArrayPtr) startup__conv7_STATE_VARIABLE_CliqueParents_17;
#line 518 "startup.m"
        *startup__STATE_VARIABLE_CliqueMaybeChildren_19 = (MR_ArrayPtr) startup__conv6_STATE_VARIABLE_CliqueMaybeChildren_19;
#line 517 "startup.m"
      }
#line 521 "startup.m"
    else
#line 522 "startup.m"
      {
#line 522 "startup.m"
        {
#line 522 "startup.m"
          mercury__require__error_1_p_0((MR_String) "construct_clique_parents: invalid pdi");
#line 522 "startup.m"
          return;
        }
#line 522 "startup.m"
      }
#line 521 "startup.m"
  }
#line 506 "startup.m"
}

#line 498 "startup.m"
static MR_bool MR_CALL 
startup__record_csd_containers_2_4_p_0_1(
#line 498 "startup.m"
  MR_Box startup__closure_arg)
#line 498 "startup.m"
{
#line 498 "startup.m"
  {
#line 498 "startup.m"
    MR_bool startup__succeeded;
#line 498 "startup.m"
    MR_Box startup__closure = startup__closure_arg;

#line 498 "startup.m"
    {
#line 498 "startup.m"
      return startup__succeeded = startup__IntroducedFrom__pred__record_csd_containers_2__498__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))));
    }
#line 498 "startup.m"
    return startup__succeeded;
#line 498 "startup.m"
  }
#line 498 "startup.m"
}

#line 489 "startup.m"
static void MR_CALL 
startup__record_csd_containers_2_4_p_0(
#line 489 "startup.m"
  MR_Word startup__PDPtr_1,
#line 489 "startup.m"
  MR_Word startup__HeadVar__2_2,
#line 489 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0_3,
#line 489 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteDynamics_4)
#line 489 "startup.m"
{
#line 494 "startup.m"
  while (MR_TRUE)
#line 494 "startup.m"
    {
#line 494 "startup.m"
      /* tailcall optimized into a loop */
#line 494 "startup.m"
      {
#line 494 "startup.m"
        MR_bool startup__succeeded;

#line 494 "startup.m"
        if ((startup__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "startup.m"
          *startup__STATE_VARIABLE_CallSiteDynamics_4 = startup__STATE_VARIABLE_CallSiteDynamics_0_3;
#line 494 "startup.m"
        else
#line 495 "startup.m"
          {
#line 495 "startup.m"
            MR_Word startup__CSDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__HeadVar__2_2, (MR_Integer) 0)));
#line 495 "startup.m"
            MR_Word startup__CSDPtrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__HeadVar__2_2, (MR_Integer) 1)));
#line 495 "startup.m"
            MR_Word startup__CSD0_13;
#line 495 "startup.m"
            MR_Word startup__CallerPDPtr0_14;
#line 495 "startup.m"
            MR_Word startup__CalleePDPtr_15;
#line 495 "startup.m"
            MR_Word startup__Own_16;
#line 495 "startup.m"
            MR_Word startup__CSD_17;
#line 495 "startup.m"
            MR_Word startup__V_20_20;
#line 495 "startup.m"
            MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_24_24;

#line 496 "startup.m"
            {
#line 496 "startup.m"
              profile__lookup_call_site_dynamics_3_p_0(startup__STATE_VARIABLE_CallSiteDynamics_0_3, startup__CSDPtr_10, &startup__CSD0_13);
            }
#line 497 "startup.m"
            startup__CallerPDPtr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD0_13, (MR_Integer) 0)));
#line 497 "startup.m"
            startup__CalleePDPtr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD0_13, (MR_Integer) 1)));
#line 497 "startup.m"
            startup__Own_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD0_13, (MR_Integer) 2)));
#line 498 "startup.m"
            {
#line 498 "startup.m"
              startup__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 498 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_20_20, 0) = ((MR_Box) (&startup_scalar_common_4[3]));
#line 498 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_20_20, 1) = ((MR_Box) (startup__record_csd_containers_2_4_p_0_1));
#line 498 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 498 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_20_20, 3) = ((MR_Box) (startup__CallerPDPtr0_14));
#line 498 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_20_20, 4) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
#line 498 "startup.m"
            }
#line 498 "startup.m"
            {
#line 498 "startup.m"
              mercury__require__require_2_p_0(startup__V_20_20, (MR_String) "record_csd_containers_2: real proc_dynamic_ptr");
            }
#line 500 "startup.m"
            {
#line 500 "startup.m"
              startup__CSD_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 500 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSD_17, 0) = ((MR_Box) (startup__PDPtr_1));
#line 500 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSD_17, 1) = ((MR_Box) (startup__CalleePDPtr_15));
#line 500 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSD_17, 2) = ((MR_Box) (startup__Own_16));
#line 500 "startup.m"
            }
#line 501 "startup.m"
            {
#line 501 "startup.m"
              profile__update_call_site_dynamics_4_p_0(startup__CSDPtr_10, startup__CSD_17, startup__STATE_VARIABLE_CallSiteDynamics_0_3, &startup__STATE_VARIABLE_CallSiteDynamics_24_24);
            }
#line 502 "startup.m"
            /* direct tailcall eliminated */
#line 502 "startup.m"
            {
#line 502 "startup.m"
              MR_Word startup__HeadVar__2__tmp_copy_2 = startup__CSDPtrs_11;
#line 502 "startup.m"
              MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0__tmp_copy_3 = startup__STATE_VARIABLE_CallSiteDynamics_24_24;

#line 502 "startup.m"
              startup__STATE_VARIABLE_CallSiteDynamics_0_3 = startup__STATE_VARIABLE_CallSiteDynamics_0__tmp_copy_3;
#line 502 "startup.m"
              startup__HeadVar__2_2 = startup__HeadVar__2__tmp_copy_2;
#line 502 "startup.m"
            }
#line 502 "startup.m"
            continue;
#line 495 "startup.m"
          }
#line 494 "startup.m"
      }
#line 494 "startup.m"
      break;
#line 494 "startup.m"
    }
#line 489 "startup.m"
}

#line 1050 "startup.m"
static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0_1(
#line 1050 "startup.m"
  MR_Box startup__closure_arg,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 1050 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 1050 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 1050 "startup.m"
  MR_Box * startup__wrapper_arg_5)
#line 1050 "startup.m"
{
#line 1050 "startup.m"
  {
#line 1050 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 1050 "startup.m"
    MR_Word startup__conv1_CSDPtrs1_8;
#line 1050 "startup.m"
    MR_Word startup__conv0_IsZeroed_10;

#line 1050 "startup.m"
    {
#line 1050 "startup.m"
      startup__gather_call_site_csdptrs_5_p_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_CSDPtrs1_8, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_IsZeroed_10);
    }
#line 1050 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_CSDPtrs1_8));
#line 1050 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_IsZeroed_10));
#line 1050 "startup.m"
  }
#line 1050 "startup.m"
}

#line 469 "startup.m"
static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0(
#line 469 "startup.m"
  MR_Integer startup__PDI_7,
#line 469 "startup.m"
  MR_Word startup__PD_8,
#line 469 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0_18,
#line 469 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteDynamics_19,
#line 469 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_ProcStatics_0_20,
#line 469 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_ProcStatics_21)
#line 469 "startup.m"
{
#line 474 "startup.m"
  {
#line 474 "startup.m"
    MR_bool startup__succeeded;
#line 474 "startup.m"
    MR_Word startup__TypeCtorInfo_13_50 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
#line 474 "startup.m"
    MR_ArrayPtr startup__CSDArray_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 1)));
#line 474 "startup.m"
    MR_Word startup__PDPtr_12 = (MR_Word) startup__PDI_7;
#line 474 "startup.m"
    MR_Word startup__CSDPtrs_13;
#line 474 "startup.m"
    MR_Word startup__IsZeroed_14;
#line 474 "startup.m"
    MR_Word startup__CallSites_44;
#line 474 "startup.m"
    MR_Word startup__CSDPtrsList0_45;
#line 474 "startup.m"
    MR_Word startup__CSDPtrsList_46;
#line 475 "startup.m"
    MR_Word startup__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 0)));
#line 475 "startup.m"
    MR_Word startup__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 2)));
#line 1050 "startup.m"
    MR_Box startup__conv3_CSDPtrsList0_45;
#line 1050 "startup.m"
    MR_Box startup__conv2_IsZeroed_14;

#line 1049 "startup.m"
    {
#line 1049 "startup.m"
      mercury__array__to_list_2_p_0(startup__TypeCtorInfo_13_50, (MR_ArrayPtr) startup__CSDArray_11, &startup__CallSites_44);
    }
#line 1050 "startup.m"
    {
#line 1050 "startup.m"
      mercury__list__foldl2_6_p_0(startup__TypeCtorInfo_13_50, (MR_Word) &startup_scalar_common_1[19], (MR_Word) &profile__profile__type_ctor_info_is_zeroed_0, (MR_Word) &startup_scalar_common_2[10], startup__CallSites_44, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv3_CSDPtrsList0_45, ((MR_Box) ((MR_Integer) 1)), &startup__conv2_IsZeroed_14);
    }
#line 1050 "startup.m"
    startup__CSDPtrsList0_45 = ((MR_Word) startup__conv3_CSDPtrsList0_45);
#line 1050 "startup.m"
    startup__IsZeroed_14 = ((MR_Word) startup__conv2_IsZeroed_14);
#line 1052 "startup.m"
    {
#line 1052 "startup.m"
      mercury__list__reverse_2_p_0((MR_Word) &startup_scalar_common_1[8], startup__CSDPtrsList0_45, &startup__CSDPtrsList_46);
    }
#line 1053 "startup.m"
    {
#line 1053 "startup.m"
      mercury__list__condense_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__CSDPtrsList_46, &startup__CSDPtrs_13);
    }
#line 478 "startup.m"
    {
#line 478 "startup.m"
      startup__record_csd_containers_2_4_p_0(startup__PDPtr_12, startup__CSDPtrs_13, startup__STATE_VARIABLE_CallSiteDynamics_0_18, startup__STATE_VARIABLE_CallSiteDynamics_19);
    }
#line 485 "startup.m"
#line 485 "startup.m"
    switch (startup__IsZeroed_14) {
#line 485 "startup.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 485 "startup.m"
      case (MR_Integer) 1:
#line 486 "startup.m"
        *startup__STATE_VARIABLE_ProcStatics_21 = startup__STATE_VARIABLE_ProcStatics_0_20;
#line 485 "startup.m"
        break;
#line 485 "startup.m"
      case (MR_Integer) 0:
#line 480 "startup.m"
        {
#line 480 "startup.m"
          MR_Word startup__PSPtr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 0)));
#line 480 "startup.m"
          MR_Word startup__PS0_16;
#line 480 "startup.m"
          MR_Word startup__PS_17;
#line 481 "startup.m"
          MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 1)));
#line 481 "startup.m"
          MR_Word startup__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 2)));
#line 483 "startup.m"
          MR_Word startup__V_29_29;
#line 483 "startup.m"
          MR_String startup__V_30_30;
#line 483 "startup.m"
          MR_String startup__V_31_31;
#line 483 "startup.m"
          MR_String startup__V_32_32;
#line 483 "startup.m"
          MR_String startup__V_33_33;
#line 483 "startup.m"
          MR_String startup__V_34_34;
#line 483 "startup.m"
          MR_Integer startup__V_35_35;
#line 483 "startup.m"
          MR_Word startup__V_36_36;
#line 483 "startup.m"
          MR_ArrayPtr startup__V_37_37;
#line 483 "startup.m"
          MR_ArrayPtr startup__V_38_38;
#line 483 "startup.m"
          MR_Word startup__V_39_39;
#line 483 "startup.m"
          MR_Word startup__V_40_40;

#line 482 "startup.m"
          {
#line 482 "startup.m"
            profile__lookup_proc_statics_3_p_0(startup__STATE_VARIABLE_ProcStatics_0_20, startup__PSPtr_15, &startup__PS0_16);
          }
#line 483 "startup.m"
          startup__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 0)));
#line 483 "startup.m"
          startup__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 1)));
#line 483 "startup.m"
          startup__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 2)));
#line 483 "startup.m"
          startup__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 3)));
#line 483 "startup.m"
          startup__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 4)));
#line 483 "startup.m"
          startup__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 5)));
#line 483 "startup.m"
          startup__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 6)));
#line 483 "startup.m"
          startup__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 7)));
#line 483 "startup.m"
          startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 8)));
#line 483 "startup.m"
          startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 9)));
#line 483 "startup.m"
          startup__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 10)));
#line 483 "startup.m"
          startup__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 11)));
#line 483 "startup.m"
          {
#line 483 "startup.m"
            startup__PS_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 483 "startup.m"
            MR_hl_field(MR_mktag(0), startup__PS_17, 0) = ((MR_Box) (startup__V_29_29));
#line 483 "startup.m"
            MR_hl_field(MR_mktag(0), startup__PS_17, 1) = ((MR_Box) (startup__V_30_30));
#line 483 "startup.m"
            MR_hl_field(MR_mktag(0), startup__PS_17, 2) = ((MR_Box) (startup__V_31_31));
#line 483 "startup.m"
            MR_hl_field(MR_mktag(0), startup__PS_17, 3) = ((MR_Box) (startup__V_32_32));
#line 483 "startup.m"
            MR_hl_field(MR_mktag(0), startup__PS_17, 4) = ((MR_Box) (startup__V_33_33));
#line 483 "startup.m"
            MR_hl_field(MR_mktag(0), startup__PS_17, 5) = ((MR_Box) (startup__V_34_34));
#line 483 "startup.m"
            MR_hl_field(MR_mktag(0), startup__PS_17, 6) = ((MR_Box) (startup__V_35_35));
#line 483 "startup.m"
            MR_hl_field(MR_mktag(0), startup__PS_17, 7) = ((MR_Box) (startup__V_36_36));
#line 483 "startup.m"
            MR_hl_field(MR_mktag(0), startup__PS_17, 8) = ((MR_Box) (startup__V_37_37));
#line 483 "startup.m"
            MR_hl_field(MR_mktag(0), startup__PS_17, 9) = ((MR_Box) (startup__V_38_38));
#line 483 "startup.m"
            MR_hl_field(MR_mktag(0), startup__PS_17, 10) = ((MR_Box) (startup__V_39_39));
#line 483 "startup.m"
            MR_hl_field(MR_mktag(0), startup__PS_17, 11) = ((MR_Box) ((MR_Integer) 0));
#line 483 "startup.m"
          }
#line 484 "startup.m"
          {
#line 484 "startup.m"
            profile__update_proc_statics_4_p_0(startup__PSPtr_15, startup__PS_17, startup__STATE_VARIABLE_ProcStatics_0_20, startup__STATE_VARIABLE_ProcStatics_21);
#line 484 "startup.m"
            return;
          }
#line 480 "startup.m"
        }
#line 485 "startup.m"
        break;
#line 485 "startup.m"
    }
#line 474 "startup.m"
  }
#line 469 "startup.m"
}

#line 457 "startup.m"
static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_2(
#line 457 "startup.m"
  MR_Box startup__closure_arg)
#line 457 "startup.m"
{
#line 457 "startup.m"
  {
#line 457 "startup.m"
    MR_bool startup__succeeded;
#line 457 "startup.m"
    MR_Box startup__closure = startup__closure_arg;

#line 457 "startup.m"
    {
#line 457 "startup.m"
      return startup__succeeded = startup__IntroducedFrom__pred__record_css_containers_2__457__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))));
    }
#line 457 "startup.m"
    return startup__succeeded;
#line 457 "startup.m"
  }
#line 457 "startup.m"
}

#line 455 "startup.m"
static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_1(
#line 455 "startup.m"
  MR_Box startup__closure_arg)
#line 455 "startup.m"
{
#line 455 "startup.m"
  {
#line 455 "startup.m"
    MR_bool startup__succeeded;
#line 455 "startup.m"
    MR_Box startup__closure = startup__closure_arg;

#line 455 "startup.m"
    {
#line 455 "startup.m"
      return startup__succeeded = startup__IntroducedFrom__pred__record_css_containers_2__455__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))));
    }
#line 455 "startup.m"
    return startup__succeeded;
#line 455 "startup.m"
  }
#line 455 "startup.m"
}

#line 444 "startup.m"
static void MR_CALL 
startup__record_css_containers_2_5_p_0(
#line 444 "startup.m"
  MR_Integer startup__SlotNum_6,
#line 444 "startup.m"
  MR_Word startup__PSPtr_7,
#line 444 "startup.m"
  MR_ArrayPtr startup__CSSPtrs_8,
#line 444 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0_18,
#line 444 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStatics_19)
#line 444 "startup.m"
{
#line 463 "startup.m"
  while (MR_TRUE)
#line 463 "startup.m"
    {
#line 463 "startup.m"
      /* tailcall optimized into a loop */
#line 463 "startup.m"
      {
#line 463 "startup.m"
        MR_bool startup__succeeded = (startup__SlotNum_6 >= (MR_Integer) 0);

#line 463 "startup.m"
        if (startup__succeeded)
#line 451 "startup.m"
          {
#line 451 "startup.m"
            MR_Word startup__CSSPtr_10;
#line 451 "startup.m"
            MR_Word startup__CSS0_11;
#line 451 "startup.m"
            MR_Word startup__PSPtr0_12;
#line 451 "startup.m"
            MR_Integer startup__SlotNum0_13;
#line 451 "startup.m"
            MR_Word startup__Kind_14;
#line 451 "startup.m"
            MR_Integer startup__LineNumber_15;
#line 451 "startup.m"
            MR_Word startup__GoalPath_16;
#line 451 "startup.m"
            MR_Word startup__CSS_17;
#line 451 "startup.m"
            MR_Word startup__V_21_21;
#line 451 "startup.m"
            MR_Word startup__V_25_25;
#line 451 "startup.m"
            MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_28_28;
#line 451 "startup.m"
            MR_Integer startup__V_29_29;
#line 451 "startup.m"
            MR_Box startup__conv0_CSSPtr_10;

#line 451 "startup.m"
            {
#line 451 "startup.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) startup__CSSPtrs_8, startup__SlotNum_6, &startup__conv0_CSSPtr_10);
            }
#line 451 "startup.m"
            startup__CSSPtr_10 = ((MR_Word) startup__conv0_CSSPtr_10);
#line 452 "startup.m"
            {
#line 452 "startup.m"
              profile__lookup_call_site_statics_3_p_0(startup__STATE_VARIABLE_CallSiteStatics_0_18, startup__CSSPtr_10, &startup__CSS0_11);
            }
#line 453 "startup.m"
            startup__PSPtr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 0)));
#line 453 "startup.m"
            startup__SlotNum0_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 1)));
#line 453 "startup.m"
            startup__Kind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 2)));
#line 453 "startup.m"
            startup__LineNumber_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 3)));
#line 453 "startup.m"
            startup__GoalPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 4)));
#line 455 "startup.m"
            {
#line 455 "startup.m"
              startup__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 455 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_21_21, 0) = ((MR_Box) (&startup_scalar_common_4[1]));
#line 455 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_21_21, 1) = ((MR_Box) (startup__record_css_containers_2_5_p_0_1));
#line 455 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 455 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_21_21, 3) = ((MR_Box) (startup__PSPtr0_12));
#line 455 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_21_21, 4) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
#line 455 "startup.m"
            }
#line 455 "startup.m"
            {
#line 455 "startup.m"
              mercury__require__require_2_p_0(startup__V_21_21, (MR_String) "record_css_containers_2: real proc_static_ptr");
            }
#line 457 "startup.m"
            {
#line 457 "startup.m"
              startup__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 457 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_25_25, 0) = ((MR_Box) (&startup_scalar_common_4[2]));
#line 457 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_25_25, 1) = ((MR_Box) (startup__record_css_containers_2_5_p_0_2));
#line 457 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 457 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_25_25, 3) = ((MR_Box) (startup__SlotNum0_13));
#line 457 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_25_25, 4) = ((MR_Box) ((MR_Integer) -1));
#line 457 "startup.m"
            }
#line 457 "startup.m"
            {
#line 457 "startup.m"
              mercury__require__require_2_p_0(startup__V_25_25, (MR_String) "record_css_containers_2: real slot_num");
            }
#line 459 "startup.m"
            {
#line 459 "startup.m"
              startup__CSS_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 459 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSS_17, 0) = ((MR_Box) (startup__PSPtr_7));
#line 459 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSS_17, 1) = ((MR_Box) (startup__SlotNum_6));
#line 459 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSS_17, 2) = ((MR_Box) (startup__Kind_14));
#line 459 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSS_17, 3) = ((MR_Box) (startup__LineNumber_15));
#line 459 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSS_17, 4) = ((MR_Box) (startup__GoalPath_16));
#line 459 "startup.m"
            }
#line 461 "startup.m"
            {
#line 461 "startup.m"
              profile__update_call_site_statics_4_p_0(startup__CSSPtr_10, startup__CSS_17, startup__STATE_VARIABLE_CallSiteStatics_0_18, &startup__STATE_VARIABLE_CallSiteStatics_28_28);
            }
#line 462 "startup.m"
            startup__V_29_29 = (startup__SlotNum_6 - (MR_Integer) 1);
#line 462 "startup.m"
            /* direct tailcall eliminated */
#line 462 "startup.m"
            {
#line 462 "startup.m"
              MR_Integer startup__SlotNum__tmp_copy_6 = startup__V_29_29;
#line 462 "startup.m"
              MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0__tmp_copy_18 = startup__STATE_VARIABLE_CallSiteStatics_28_28;

#line 462 "startup.m"
              startup__STATE_VARIABLE_CallSiteStatics_0_18 = startup__STATE_VARIABLE_CallSiteStatics_0__tmp_copy_18;
#line 462 "startup.m"
              startup__SlotNum_6 = startup__SlotNum__tmp_copy_6;
#line 462 "startup.m"
            }
#line 462 "startup.m"
            continue;
#line 451 "startup.m"
          }
#line 463 "startup.m"
        else
#line 463 "startup.m"
          *startup__STATE_VARIABLE_CallSiteStatics_19 = startup__STATE_VARIABLE_CallSiteStatics_0_18;
#line 463 "startup.m"
      }
#line 463 "startup.m"
      break;
#line 463 "startup.m"
    }
#line 444 "startup.m"
}

#line 426 "startup.m"
static void MR_CALL 
startup__record_css_containers_module_procs_6_p_0(
#line 426 "startup.m"
  MR_Integer startup__PSI_7,
#line 426 "startup.m"
  MR_Word startup__PS_8,
#line 426 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0_16,
#line 426 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStatics_17,
#line 426 "startup.m"
  MR_Word startup__STATE_VARIABLE_ModuleProcs_0_18,
#line 426 "startup.m"
  MR_Word * startup__STATE_VARIABLE_ModuleProcs_19)
#line 426 "startup.m"
{
#line 432 "startup.m"
  {
#line 432 "startup.m"
    MR_bool startup__succeeded;
#line 432 "startup.m"
    MR_ArrayPtr startup__CSSPtrs_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 8)));
#line 432 "startup.m"
    MR_Word startup__PSPtr_12 = (MR_Word) startup__PSI_7;
#line 432 "startup.m"
    MR_Integer startup__MaxCS_13;
#line 432 "startup.m"
    MR_String startup__DeclModule_14;
#line 433 "startup.m"
    MR_Word startup__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 0)));
#line 433 "startup.m"
    MR_String startup__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 1)));
#line 433 "startup.m"
    MR_String startup__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 2)));
#line 433 "startup.m"
    MR_String startup__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 3)));
#line 433 "startup.m"
    MR_String startup__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 4)));
#line 433 "startup.m"
    MR_String startup__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 5)));
#line 433 "startup.m"
    MR_Integer startup__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 6)));
#line 433 "startup.m"
    MR_Word startup__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 7)));
#line 433 "startup.m"
    MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 9)));
#line 433 "startup.m"
    MR_Word startup__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 10)));
#line 433 "startup.m"
    MR_Word startup__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 11)));
#line 437 "startup.m"
    MR_Word startup__V_37_37;
#line 437 "startup.m"
    MR_String startup__V_38_38;
#line 437 "startup.m"
    MR_String startup__V_39_39;
#line 437 "startup.m"
    MR_String startup__V_40_40;
#line 437 "startup.m"
    MR_String startup__V_41_41;
#line 437 "startup.m"
    MR_Integer startup__V_42_42;
#line 437 "startup.m"
    MR_Word startup__V_43_43;
#line 437 "startup.m"
    MR_ArrayPtr startup__V_44_44;
#line 437 "startup.m"
    MR_ArrayPtr startup__V_45_45;
#line 437 "startup.m"
    MR_Word startup__V_46_46;
#line 437 "startup.m"
    MR_Word startup__V_47_47;
#line 440 "startup.m"
    MR_Word startup__PSPtrs0_15;
#line 438 "startup.m"
    MR_Box startup__conv0_PSPtrs0_15;

#line 435 "startup.m"
    {
#line 435 "startup.m"
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) startup__CSSPtrs_11, &startup__MaxCS_13);
    }
#line 436 "startup.m"
    {
#line 436 "startup.m"
      startup__record_css_containers_2_5_p_0(startup__MaxCS_13, startup__PSPtr_12, startup__CSSPtrs_11, startup__STATE_VARIABLE_CallSiteStatics_0_16, startup__STATE_VARIABLE_CallSiteStatics_17);
    }
#line 437 "startup.m"
    startup__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 0)));
#line 437 "startup.m"
    startup__DeclModule_14 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 1)));
#line 437 "startup.m"
    startup__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 2)));
#line 437 "startup.m"
    startup__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 3)));
#line 437 "startup.m"
    startup__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 4)));
#line 437 "startup.m"
    startup__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 5)));
#line 437 "startup.m"
    startup__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 6)));
#line 437 "startup.m"
    startup__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 7)));
#line 437 "startup.m"
    startup__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 8)));
#line 437 "startup.m"
    startup__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 9)));
#line 437 "startup.m"
    startup__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 10)));
#line 437 "startup.m"
    startup__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 11)));
#line 438 "startup.m"
    {
#line 438 "startup.m"
      startup__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &startup_scalar_common_1[1], startup__STATE_VARIABLE_ModuleProcs_0_18, ((MR_Box) (startup__DeclModule_14)), &startup__conv0_PSPtrs0_15);
    }
#line 438 "startup.m"
    if (startup__succeeded)
#line 438 "startup.m"
      {
#line 438 "startup.m"
        startup__PSPtrs0_15 = ((MR_Word) startup__conv0_PSPtrs0_15);
#line 438 "startup.m"
        startup__succeeded = MR_TRUE;
#line 438 "startup.m"
      }
#line 440 "startup.m"
    if (startup__succeeded)
#line 439 "startup.m"
      {
#line 439 "startup.m"
        MR_Word startup__V_21_21;

#line 439 "startup.m"
        {
#line 439 "startup.m"
          startup__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_21_21, 0) = ((MR_Box) (startup__PSPtr_12));
#line 439 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_21_21, 1) = ((MR_Box) (startup__PSPtrs0_15));
#line 439 "startup.m"
        }
#line 439 "startup.m"
        {
#line 439 "startup.m"
          mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &startup_scalar_common_1[1], ((MR_Box) (startup__DeclModule_14)), ((MR_Box) (startup__V_21_21)), startup__STATE_VARIABLE_ModuleProcs_0_18, startup__STATE_VARIABLE_ModuleProcs_19);
#line 439 "startup.m"
          return;
        }
#line 439 "startup.m"
      }
#line 440 "startup.m"
    else
#line 441 "startup.m"
      {
#line 441 "startup.m"
        MR_Word startup__V_23_23;

#line 441 "startup.m"
        {
#line 441 "startup.m"
          startup__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_23_23, 0) = ((MR_Box) (startup__PSPtr_12));
#line 441 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 441 "startup.m"
        }
#line 441 "startup.m"
        {
#line 441 "startup.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &startup_scalar_common_1[1], ((MR_Box) (startup__DeclModule_14)), ((MR_Box) (startup__V_23_23)), startup__STATE_VARIABLE_ModuleProcs_0_18, startup__STATE_VARIABLE_ModuleProcs_19);
#line 441 "startup.m"
          return;
        }
#line 441 "startup.m"
      }
#line 432 "startup.m"
  }
#line 426 "startup.m"
}

#line 386 "startup.m"
static void MR_CALL 
startup__ensure_module_has_module_data_3_p_0(
#line 386 "startup.m"
  MR_String startup__Module_4,
#line 386 "startup.m"
  MR_Word startup__STATE_VARIABLE_ModuleDataMap_0_8,
#line 386 "startup.m"
  MR_Word * startup__STATE_VARIABLE_ModuleDataMap_9)
#line 386 "startup.m"
{
#line 392 "startup.m"
  {
#line 392 "startup.m"
    MR_bool startup__succeeded;
#line 390 "startup.m"
    MR_Word startup__V_6_6;
#line 390 "startup.m"
    MR_Box startup__conv0_V_6_6;

#line 390 "startup.m"
    {
#line 390 "startup.m"
      startup__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, startup__STATE_VARIABLE_ModuleDataMap_0_8, ((MR_Box) (startup__Module_4)), &startup__conv0_V_6_6);
    }
#line 390 "startup.m"
    if (startup__succeeded)
#line 390 "startup.m"
      {
#line 390 "startup.m"
        startup__V_6_6 = ((MR_Word) startup__conv0_V_6_6);
#line 390 "startup.m"
        startup__succeeded = MR_TRUE;
#line 390 "startup.m"
      }
#line 392 "startup.m"
    if (startup__succeeded)
#line 392 "startup.m"
      *startup__STATE_VARIABLE_ModuleDataMap_9 = startup__STATE_VARIABLE_ModuleDataMap_0_8;
#line 392 "startup.m"
    else
#line 393 "startup.m"
      {
#line 393 "startup.m"
        MR_Word startup__Data_7;
#line 393 "startup.m"
        MR_Word startup__V_10_10;
#line 393 "startup.m"
        MR_Word startup__V_11_11;

#line 393 "startup.m"
        {
#line 393 "startup.m"
          startup__V_10_10 = measurements__zero_own_prof_info_0_f_0();
        }
#line 393 "startup.m"
        {
#line 393 "startup.m"
          startup__V_11_11 = measurements__zero_inherit_prof_info_0_f_0();
        }
#line 393 "startup.m"
        {
#line 393 "startup.m"
          startup__Data_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 393 "startup.m"
          MR_hl_field(MR_mktag(0), startup__Data_7, 0) = ((MR_Box) (startup__V_10_10));
#line 393 "startup.m"
          MR_hl_field(MR_mktag(0), startup__Data_7, 1) = ((MR_Box) (startup__V_11_11));
#line 393 "startup.m"
          MR_hl_field(MR_mktag(0), startup__Data_7, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "startup.m"
        }
#line 394 "startup.m"
        {
#line 394 "startup.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, ((MR_Box) (startup__Module_4)), ((MR_Box) (startup__Data_7)), startup__STATE_VARIABLE_ModuleDataMap_0_8, startup__STATE_VARIABLE_ModuleDataMap_9);
#line 394 "startup.m"
          return;
        }
#line 393 "startup.m"
      }
#line 392 "startup.m"
  }
#line 386 "startup.m"
}

#line 381 "startup.m"
static MR_Word MR_CALL 
startup__initialize_module_data_1_f_0(
#line 381 "startup.m"
  MR_Word startup__PSPtrs_3)
#line 381 "startup.m"
{
#line 383 "startup.m"
  {
#line 383 "startup.m"
    MR_bool startup__succeeded;
#line 383 "startup.m"
    MR_Word startup__HeadVar__2_2;
#line 383 "startup.m"
    MR_Word startup__V_4_4;
#line 383 "startup.m"
    MR_Word startup__V_5_5;

#line 384 "startup.m"
    {
#line 384 "startup.m"
      startup__V_4_4 = measurements__zero_own_prof_info_0_f_0();
    }
#line 384 "startup.m"
    {
#line 384 "startup.m"
      startup__V_5_5 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 384 "startup.m"
    {
#line 384 "startup.m"
      startup__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 384 "startup.m"
      MR_hl_field(MR_mktag(0), startup__HeadVar__2_2, 0) = ((MR_Box) (startup__V_4_4));
#line 384 "startup.m"
      MR_hl_field(MR_mktag(0), startup__HeadVar__2_2, 1) = ((MR_Box) (startup__V_5_5));
#line 384 "startup.m"
      MR_hl_field(MR_mktag(0), startup__HeadVar__2_2, 2) = ((MR_Box) (startup__PSPtrs_3));
#line 384 "startup.m"
    }
#line 383 "startup.m"
    return startup__HeadVar__2_2;
#line 383 "startup.m"
  }
#line 381 "startup.m"
}

#line 367 "startup.m"
static MR_String MR_CALL 
startup__contour_file_name_1_f_0(
#line 367 "startup.m"
  MR_String startup__DataFileName_3)
#line 367 "startup.m"
{
#line 372 "startup.m"
  {
#line 372 "startup.m"
    MR_bool startup__succeeded;
#line 372 "startup.m"
    MR_String startup__ContourFileName_4;
#line 372 "startup.m"
    MR_String startup__BaseFileName_5;

#line 370 "startup.m"
    {
#line 370 "startup.m"
      startup__succeeded = mercury__string__remove_suffix_3_p_0(startup__DataFileName_3, (MR_String) ".data", &startup__BaseFileName_5);
    }
#line 372 "startup.m"
    if (startup__succeeded)
#line 371 "startup.m"
      {
#line 371 "startup.m"
        {
#line 371 "startup.m"
          return startup__ContourFileName_4 = mercury__string__f_43_43_2_f_0(startup__BaseFileName_5, (MR_String) ".contour");
        }
#line 371 "startup.m"
      }
#line 372 "startup.m"
    else
#line 373 "startup.m"
      {
#line 373 "startup.m"
        MR_String startup__V_8_8;

#line 373 "startup.m"
        {
#line 373 "startup.m"
          startup__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t remove suffix from deep file name: ", startup__DataFileName_3);
        }
#line 373 "startup.m"
        {
#line 373 "startup.m"
          mercury__require__error_1_p_0(startup__V_8_8);
        }
#line 373 "startup.m"
      }
#line 372 "startup.m"
    return startup__ContourFileName_4;
#line 372 "startup.m"
  }
#line 367 "startup.m"
}

#line 323 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_10(
#line 323 "startup.m"
  MR_Box startup__closure_arg,
#line 323 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 323 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 323 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 323 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 323 "startup.m"
{
#line 323 "startup.m"
  {
#line 323 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 323 "startup.m"
    MR_Word startup__conv40_STATE_VARIABLE_Deep_17;

#line 323 "startup.m"
    {
#line 323 "startup.m"
      startup__propagate_to_clique_4_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_Word) startup__wrapper_arg_3), &startup__conv40_STATE_VARIABLE_Deep_17);
    }
#line 323 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv40_STATE_VARIABLE_Deep_17));
#line 323 "startup.m"
  }
#line 323 "startup.m"
}

#line 293 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_9(
#line 293 "startup.m"
  MR_Box startup__closure_arg,
#line 293 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 293 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 293 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 293 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 293 "startup.m"
{
#line 293 "startup.m"
  {
#line 293 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 293 "startup.m"
    MR_ArrayPtr startup__conv31_STATE_VARIABLE_PDOwnArray_14;

#line 293 "startup.m"
    {
#line 293 "startup.m"
      startup__sum_call_sites_in_proc_dynamic_4_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv31_STATE_VARIABLE_PDOwnArray_14);
    }
#line 293 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv31_STATE_VARIABLE_PDOwnArray_14));
#line 293 "startup.m"
  }
#line 293 "startup.m"
}

#line 242 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_8(
#line 242 "startup.m"
  MR_Box startup__closure_arg,
#line 242 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 242 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 242 "startup.m"
  MR_Box * startup__wrapper_arg_3)
#line 242 "startup.m"
{
#line 242 "startup.m"
  {
#line 242 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 242 "startup.m"
    MR_Word startup__conv27_STATE_VARIABLE_ModuleDataMap_9;

#line 242 "startup.m"
    {
#line 242 "startup.m"
      startup__ensure_module_has_module_data_3_p_0(((MR_String) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv27_STATE_VARIABLE_ModuleDataMap_9);
    }
#line 242 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv27_STATE_VARIABLE_ModuleDataMap_9));
#line 242 "startup.m"
  }
#line 242 "startup.m"
}

#line 217 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_7(
#line 217 "startup.m"
  MR_Box startup__closure_arg,
#line 217 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 217 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 217 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 217 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 217 "startup.m"
{
#line 217 "startup.m"
  {
#line 217 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 217 "startup.m"
    MR_ArrayPtr startup__conv25_STATE_VARIABLE_CallSiteCalls_19;

#line 217 "startup.m"
    {
#line 217 "startup.m"
      startup__construct_call_site_calls_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv25_STATE_VARIABLE_CallSiteCalls_19);
    }
#line 217 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv25_STATE_VARIABLE_CallSiteCalls_19));
#line 217 "startup.m"
  }
#line 217 "startup.m"
}

#line 208 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_6(
#line 208 "startup.m"
  MR_Box startup__closure_arg,
#line 208 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 208 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 208 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 208 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 208 "startup.m"
{
#line 208 "startup.m"
  {
#line 208 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 208 "startup.m"
    MR_ArrayPtr startup__conv22_STATE_VARIABLE_CallSiteStaticMap_16;

#line 208 "startup.m"
    {
#line 208 "startup.m"
      startup__construct_call_site_caller_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv22_STATE_VARIABLE_CallSiteStaticMap_16);
    }
#line 208 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv22_STATE_VARIABLE_CallSiteStaticMap_16));
#line 208 "startup.m"
  }
#line 208 "startup.m"
}

#line 199 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_5(
#line 199 "startup.m"
  MR_Box startup__closure_arg,
#line 199 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 199 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 199 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 199 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 199 "startup.m"
{
#line 199 "startup.m"
  {
#line 199 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 199 "startup.m"
    MR_ArrayPtr startup__conv19_STATE_VARIABLE_ProcCallers_16;

#line 199 "startup.m"
    {
#line 199 "startup.m"
      startup__construct_proc_callers_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv19_STATE_VARIABLE_ProcCallers_16);
    }
#line 199 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv19_STATE_VARIABLE_ProcCallers_16));
#line 199 "startup.m"
  }
#line 199 "startup.m"
}

#line 187 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_4(
#line 187 "startup.m"
  MR_Box startup__closure_arg,
#line 187 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 187 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 187 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 187 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 187 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 187 "startup.m"
  MR_Box * startup__wrapper_arg_6)
#line 187 "startup.m"
{
#line 187 "startup.m"
  {
#line 187 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 187 "startup.m"
    MR_ArrayPtr startup__conv15_STATE_VARIABLE_CliqueParents_17;
#line 187 "startup.m"
    MR_ArrayPtr startup__conv14_STATE_VARIABLE_CliqueMaybeChildren_19;

#line 187 "startup.m"
    {
#line 187 "startup.m"
      startup__construct_clique_parents_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv15_STATE_VARIABLE_CliqueParents_17, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv14_STATE_VARIABLE_CliqueMaybeChildren_19);
    }
#line 187 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv15_STATE_VARIABLE_CliqueParents_17));
#line 187 "startup.m"
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv14_STATE_VARIABLE_CliqueMaybeChildren_19));
#line 187 "startup.m"
  }
#line 187 "startup.m"
}

#line 126 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_3(
#line 126 "startup.m"
  MR_Box startup__closure_arg,
#line 126 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 126 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 126 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 126 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 126 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 126 "startup.m"
  MR_Box * startup__wrapper_arg_6)
#line 126 "startup.m"
{
#line 126 "startup.m"
  {
#line 126 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 126 "startup.m"
    MR_ArrayPtr startup__conv7_STATE_VARIABLE_CallSiteDynamics_19;
#line 126 "startup.m"
    MR_ArrayPtr startup__conv6_STATE_VARIABLE_ProcStatics_21;

#line 126 "startup.m"
    {
#line 126 "startup.m"
      startup__record_csd_containers_zeroed_pss_6_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv7_STATE_VARIABLE_CallSiteDynamics_19, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv6_STATE_VARIABLE_ProcStatics_21);
    }
#line 126 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv7_STATE_VARIABLE_CallSiteDynamics_19));
#line 126 "startup.m"
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv6_STATE_VARIABLE_ProcStatics_21));
#line 126 "startup.m"
  }
#line 126 "startup.m"
}

#line 119 "startup.m"
static MR_Box MR_CALL 
startup__startup_11_p_0_2(
#line 119 "startup.m"
  MR_Box startup__closure_arg,
#line 119 "startup.m"
  MR_Box startup__wrapper_arg_1)
#line 119 "startup.m"
{
#line 119 "startup.m"
  {
#line 119 "startup.m"
    MR_Box startup__wrapper_arg_2;
#line 119 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 119 "startup.m"
    MR_Word startup__conv5_HeadVar__2_2;

#line 119 "startup.m"
    {
#line 119 "startup.m"
      startup__conv5_HeadVar__2_2 = startup__initialize_module_data_1_f_0(((MR_Word) startup__wrapper_arg_1));
    }
#line 119 "startup.m"
    startup__wrapper_arg_2 = ((MR_Box) (startup__conv5_HeadVar__2_2));
#line 119 "startup.m"
    return startup__wrapper_arg_2;
#line 119 "startup.m"
  }
#line 119 "startup.m"
}

#line 117 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_1(
#line 117 "startup.m"
  MR_Box startup__closure_arg,
#line 117 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 117 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 117 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 117 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 117 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 117 "startup.m"
  MR_Box * startup__wrapper_arg_6)
#line 117 "startup.m"
{
#line 117 "startup.m"
  {
#line 117 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 117 "startup.m"
    MR_ArrayPtr startup__conv1_STATE_VARIABLE_CallSiteStatics_17;
#line 117 "startup.m"
    MR_Word startup__conv0_STATE_VARIABLE_ModuleProcs_19;

#line 117 "startup.m"
    {
#line 117 "startup.m"
      startup__record_css_containers_module_procs_6_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv1_STATE_VARIABLE_CallSiteStatics_17, ((MR_Word) startup__wrapper_arg_5), &startup__conv0_STATE_VARIABLE_ModuleProcs_19);
    }
#line 117 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv1_STATE_VARIABLE_CallSiteStatics_17));
#line 117 "startup.m"
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv0_STATE_VARIABLE_ModuleProcs_19));
#line 117 "startup.m"
  }
#line 117 "startup.m"
}

#line 104 "startup.m"
static void MR_CALL 
startup__startup_11_p_0(
#line 104 "startup.m"
  MR_String startup__Machine_12,
#line 104 "startup.m"
  MR_String startup__ScriptName_13,
#line 104 "startup.m"
  MR_String startup__DataFileName_14,
#line 104 "startup.m"
  MR_Word startup__Canonical_15,
#line 104 "startup.m"
  MR_Word startup__MaybeOutputStream_16,
#line 104 "startup.m"
  MR_Word startup__DumpStages_17,
#line 104 "startup.m"
  MR_Word startup__DumpOptions_18,
#line 104 "startup.m"
  MR_Word startup__InitDeep0_19,
#line 104 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_93)
#line 104 "startup.m"
{
#line 109 "startup.m"
  {
#line 109 "startup.m"
    MR_bool startup__succeeded;
#line 109 "startup.m"
    MR_Word startup__TypeInfo_296_296;
#line 109 "startup.m"
    MR_Word startup__TypeCtorInfo_297_297;
#line 109 "startup.m"
    MR_Word startup__TypeInfo_298_298;
#line 109 "startup.m"
    MR_Word startup__TypeCtorInfo_299_299;
#line 109 "startup.m"
    MR_Word startup__TypeInfo_310_310;
#line 109 "startup.m"
    MR_Word startup__TypeInfo_311_311;
#line 109 "startup.m"
    MR_Word startup__TypeCtorInfo_312_312;
#line 109 "startup.m"
    MR_Word startup__TypeCtorInfo_317_317;
#line 109 "startup.m"
    MR_Word startup__TypeInfo_319_319;
#line 109 "startup.m"
    MR_Word startup__TypeInfo_331_331;
#line 109 "startup.m"
    MR_Word startup__TypeCtorInfo_343_343;
#line 109 "startup.m"
    MR_Word startup__TypeCtorInfo_356_356;
#line 109 "startup.m"
    MR_Word startup__TypeCtorInfo_357_357;
#line 109 "startup.m"
    MR_Word startup__TypeInfo_363_363;
#line 109 "startup.m"
    MR_Word startup__TypeCtorInfo_369_369;
#line 109 "startup.m"
    MR_Word startup__InitStats_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 0)));
#line 109 "startup.m"
    MR_Word startup__Root_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 1)));
#line 109 "startup.m"
    MR_ArrayPtr startup__CallSiteDynamics0_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 2)));
#line 109 "startup.m"
    MR_ArrayPtr startup__ProcDynamics_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 3)));
#line 109 "startup.m"
    MR_ArrayPtr startup__CallSiteStatics0_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 4)));
#line 109 "startup.m"
    MR_ArrayPtr startup__ProcStatics0_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 5)));
#line 109 "startup.m"
    MR_ArrayPtr startup__CallSiteStatics_28;
#line 109 "startup.m"
    MR_Word startup__ModuleProcs_29;
#line 109 "startup.m"
    MR_Word startup__ModuleDataMap0_30;
#line 109 "startup.m"
    MR_ArrayPtr startup__CallSiteDynamics_31;
#line 109 "startup.m"
    MR_ArrayPtr startup__ProcStatics_32;
#line 109 "startup.m"
    MR_Word startup__InitDeep1_33;
#line 109 "startup.m"
    MR_Word startup__InitDeep_34;
#line 109 "startup.m"
    MR_Integer startup__PDMax_35;
#line 109 "startup.m"
    MR_Integer startup__NPDs_36;
#line 109 "startup.m"
    MR_Integer startup__CSDMax_37;
#line 109 "startup.m"
    MR_Integer startup__NCSDs_38;
#line 109 "startup.m"
    MR_Integer startup__PSMax_39;
#line 109 "startup.m"
    MR_Integer startup__NPSs_40;
#line 109 "startup.m"
    MR_Integer startup__CSSMax_41;
#line 109 "startup.m"
    MR_Integer startup__NCSSs_42;
#line 109 "startup.m"
    MR_Word startup__CliqueList_43;
#line 109 "startup.m"
    MR_ArrayPtr startup__Cliques_44;
#line 109 "startup.m"
    MR_ArrayPtr startup__CliqueIndex_45;
#line 109 "startup.m"
    MR_Integer startup__CliqueMax_46;
#line 109 "startup.m"
    MR_Integer startup__NCliques_47;
#line 109 "startup.m"
    MR_ArrayPtr startup__CliqueParents0_48;
#line 109 "startup.m"
    MR_ArrayPtr startup__CliqueMaybeChildren0_49;
#line 109 "startup.m"
    MR_ArrayPtr startup__CliqueParents_50;
#line 109 "startup.m"
    MR_ArrayPtr startup__CliqueMaybeChildren_51;
#line 109 "startup.m"
    MR_ArrayPtr startup__ProcCallers0_52;
#line 109 "startup.m"
    MR_ArrayPtr startup__ProcCallers_53;
#line 109 "startup.m"
    MR_ArrayPtr startup__CallSiteStaticMap0_54;
#line 109 "startup.m"
    MR_ArrayPtr startup__CallSiteStaticMap_55;
#line 109 "startup.m"
    MR_ArrayPtr startup__CallSiteCalls0_56;
#line 109 "startup.m"
    MR_ArrayPtr startup__CallSiteCalls_57;
#line 109 "startup.m"
    MR_String startup__ProgRepFileName_58;
#line 109 "startup.m"
    MR_Word startup__ProgRepResult_59;
#line 109 "startup.m"
    MR_Word startup__MaybeProcRepFile_61;
#line 109 "startup.m"
    MR_Word startup__ModuleDataMap_65;
#line 109 "startup.m"
    MR_String startup__ContourFileName_71;
#line 109 "startup.m"
    MR_String startup__TryMsg_72;
#line 109 "startup.m"
    MR_Word startup__ExcludeFile_73;
#line 109 "startup.m"
    MR_Word startup__ExcludeContents_75;
#line 109 "startup.m"
    MR_ArrayPtr startup__CSDDesc0_80;
#line 109 "startup.m"
    MR_ArrayPtr startup__PDOwn0_81;
#line 109 "startup.m"
    MR_ArrayPtr startup__PDOwn_82;
#line 109 "startup.m"
    MR_ArrayPtr startup__PDDesc0_83;
#line 109 "startup.m"
    MR_ArrayPtr startup__PSOwn0_84;
#line 109 "startup.m"
    MR_ArrayPtr startup__PSDesc0_85;
#line 109 "startup.m"
    MR_ArrayPtr startup__CSSOwn0_86;
#line 109 "startup.m"
    MR_ArrayPtr startup__CSSDesc0_87;
#line 109 "startup.m"
    MR_ArrayPtr startup__PDCompTable0_88;
#line 109 "startup.m"
    MR_ArrayPtr startup__CSDCompTable0_89;
#line 109 "startup.m"
    MR_Word startup__CoverageDataType_90;
#line 109 "startup.m"
    MR_Word startup__V_99_99;
#line 109 "startup.m"
    MR_ArrayPtr startup__V_103_103;
#line 109 "startup.m"
    MR_Word startup__V_104_104;
#line 109 "startup.m"
    MR_ArrayPtr startup__V_112_112;
#line 109 "startup.m"
    MR_ArrayPtr startup__V_113_113;
#line 109 "startup.m"
    MR_ArrayPtr startup__V_128_128;
#line 109 "startup.m"
    MR_ArrayPtr startup__V_130_130;
#line 109 "startup.m"
    MR_ArrayPtr startup__V_132_132;
#line 109 "startup.m"
    MR_ArrayPtr startup__V_134_134;
#line 109 "startup.m"
    MR_Word startup__V_152_152;
#line 109 "startup.m"
    MR_Word startup__V_159_159;
#line 109 "startup.m"
    MR_Word startup__V_167_167;
#line 109 "startup.m"
    MR_Word startup__V_173_173;
#line 109 "startup.m"
    MR_Word startup__V_174_174;
#line 109 "startup.m"
    MR_Word startup__V_212_212;
#line 109 "startup.m"
    MR_Word startup__V_213_213;
#line 109 "startup.m"
    MR_Word startup__V_215_215;
#line 109 "startup.m"
    MR_Word startup__V_216_216;
#line 109 "startup.m"
    MR_Word startup__V_217_217;
#line 109 "startup.m"
    MR_Word startup__V_218_218;
#line 109 "startup.m"
    MR_Word startup__V_219_219;
#line 109 "startup.m"
    MR_Word startup__V_220_220;
#line 109 "startup.m"
    MR_Word startup__V_221_221;
#line 109 "startup.m"
    MR_Word startup__V_222_222;
#line 109 "startup.m"
    MR_Word startup__V_225_225;
#line 109 "startup.m"
    MR_Word startup__STATE_VARIABLE_Deep_243_243;
#line 109 "startup.m"
    MR_Word startup__STATE_VARIABLE_Deep_246_246;
#line 109 "startup.m"
    MR_String startup__V_375_375;
#line 109 "startup.m"
    MR_Word startup__V_381_381;
#line 109 "startup.m"
    MR_String startup__V_382_382;
#line 118 "startup.m"
    MR_Box startup__conv2_V_103_103;
#line 117 "startup.m"
    MR_Box startup__conv4_CallSiteStatics_28;
#line 117 "startup.m"
    MR_Box startup__conv3_ModuleProcs_29;
#line 127 "startup.m"
    MR_Box startup__conv8_V_112_112;
#line 127 "startup.m"
    MR_Box startup__conv9_V_113_113;
#line 126 "startup.m"
    MR_Box startup__conv11_CallSiteDynamics_31;
#line 126 "startup.m"
    MR_Box startup__conv10_ProcStatics_32;
#line 151 "startup.m"
    MR_Word startup__V_256_256;
#line 151 "startup.m"
    MR_Word startup__V_257_257;
#line 151 "startup.m"
    MR_ArrayPtr startup__V_258_258;
#line 151 "startup.m"
    MR_ArrayPtr startup__V_259_259;
#line 151 "startup.m"
    MR_ArrayPtr startup__V_260_260;
#line 153 "startup.m"
    MR_Word startup__V_261_261;
#line 153 "startup.m"
    MR_Word startup__V_262_262;
#line 153 "startup.m"
    MR_ArrayPtr startup__V_263_263;
#line 153 "startup.m"
    MR_ArrayPtr startup__V_264_264;
#line 153 "startup.m"
    MR_ArrayPtr startup__V_265_265;
#line 155 "startup.m"
    MR_Word startup__V_266_266;
#line 155 "startup.m"
    MR_Word startup__V_267_267;
#line 155 "startup.m"
    MR_ArrayPtr startup__V_268_268;
#line 155 "startup.m"
    MR_ArrayPtr startup__V_269_269;
#line 155 "startup.m"
    MR_ArrayPtr startup__V_270_270;
#line 157 "startup.m"
    MR_Word startup__V_271_271;
#line 157 "startup.m"
    MR_Word startup__V_272_272;
#line 157 "startup.m"
    MR_ArrayPtr startup__V_273_273;
#line 157 "startup.m"
    MR_ArrayPtr startup__V_274_274;
#line 157 "startup.m"
    MR_ArrayPtr startup__V_275_275;
#line 185 "startup.m"
    MR_ArrayPtr startup__conv12_CliqueParents0_48;
#line 186 "startup.m"
    MR_ArrayPtr startup__conv13_CliqueMaybeChildren0_49;
#line 187 "startup.m"
    MR_Box startup__conv17_CliqueParents_50;
#line 187 "startup.m"
    MR_Box startup__conv16_CliqueMaybeChildren_51;
#line 198 "startup.m"
    MR_ArrayPtr startup__conv18_ProcCallers0_52;
#line 199 "startup.m"
    MR_Box startup__conv20_ProcCallers_53;
#line 207 "startup.m"
    MR_ArrayPtr startup__conv21_CallSiteStaticMap0_54;
#line 208 "startup.m"
    MR_Box startup__conv23_CallSiteStaticMap_55;
#line 216 "startup.m"
    MR_ArrayPtr startup__conv24_CallSiteCalls0_56;
#line 217 "startup.m"
    MR_Box startup__conv26_CallSiteCalls_57;
#line 272 "startup.m"
    MR_String startup__V_74_74;
#line 291 "startup.m"
    MR_ArrayPtr startup__conv29_CSDDesc0_80;
#line 292 "startup.m"
    MR_ArrayPtr startup__conv30_PDOwn0_81;
#line 293 "startup.m"
    MR_Box startup__conv32_PDOwn_82;
#line 295 "startup.m"
    MR_ArrayPtr startup__conv33_PDDesc0_83;
#line 296 "startup.m"
    MR_ArrayPtr startup__conv34_PSOwn0_84;
#line 297 "startup.m"
    MR_ArrayPtr startup__conv35_PSDesc0_85;
#line 298 "startup.m"
    MR_ArrayPtr startup__conv36_CSSOwn0_86;
#line 299 "startup.m"
    MR_ArrayPtr startup__conv37_CSSDesc0_87;
#line 300 "startup.m"
    MR_ArrayPtr startup__conv38_PDCompTable0_88;
#line 301 "startup.m"
    MR_ArrayPtr startup__conv39_CSDCompTable0_89;
#line 302 "startup.m"
    MR_String startup__V_276_276;
#line 302 "startup.m"
    MR_Integer startup__V_277_277;
#line 302 "startup.m"
    MR_Integer startup__V_278_278;
#line 302 "startup.m"
    MR_Integer startup__V_279_279;
#line 302 "startup.m"
    MR_Integer startup__V_280_280;
#line 302 "startup.m"
    MR_Integer startup__V_281_281;
#line 302 "startup.m"
    MR_Integer startup__V_282_282;
#line 302 "startup.m"
    MR_Integer startup__V_283_283;
#line 302 "startup.m"
    MR_Integer startup__V_284_284;
#line 302 "startup.m"
    MR_Integer startup__V_285_285;
#line 302 "startup.m"
    MR_Word startup__V_286_286;

#line 113 "startup.m"
    {
#line 113 "startup.m"
      startup__V_99_99 = dump__default_dump_options_0_f_0();
    }
#line 112 "startup.m"
    {
#line 112 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(startup__InitDeep0_19, startup__V_99_99, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 0);
    }
#line 115 "startup.m"
    {
#line 115 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Mapping static call sites to containing procedures...\n");
    }
#line 10108 "startup.c"
    startup__TypeInfo_296_296 = (MR_Word) &startup_scalar_common_1[0];
#line 118 "startup.m"
    {
#line 118 "startup.m"
      startup__conv2_V_103_103 = array_util__u_1_f_0(startup__TypeInfo_296_296, ((MR_Box) (startup__CallSiteStatics0_26)));
    }
#line 118 "startup.m"
    startup__V_103_103 = ((MR_ArrayPtr) startup__conv2_V_103_103);
#line 10117 "startup.c"
    startup__TypeCtorInfo_297_297 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 10119 "startup.c"
    startup__TypeInfo_298_298 = (MR_Word) &startup_scalar_common_1[1];
#line 118 "startup.m"
    {
#line 118 "startup.m"
      startup__V_104_104 = mercury__map__init_0_f_0(startup__TypeCtorInfo_297_297, startup__TypeInfo_298_298);
    }
#line 10126 "startup.c"
    startup__TypeCtorInfo_299_299 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
#line 117 "startup.m"
    {
#line 117 "startup.m"
      array_util__array_foldl2_from_1_6_p_1(startup__TypeCtorInfo_299_299, startup__TypeInfo_296_296, (MR_Word) &startup_scalar_common_2[0], (MR_Word) &startup_scalar_common_2[4], (MR_ArrayPtr) startup__ProcStatics0_27, ((MR_Box) (startup__V_103_103)), &startup__conv4_CallSiteStatics_28, ((MR_Box) (startup__V_104_104)), &startup__conv3_ModuleProcs_29);
    }
#line 117 "startup.m"
    startup__CallSiteStatics_28 = ((MR_ArrayPtr) startup__conv4_CallSiteStatics_28);
#line 117 "startup.m"
    startup__ModuleProcs_29 = ((MR_Word) startup__conv3_ModuleProcs_29);
#line 119 "startup.m"
    {
#line 119 "startup.m"
      startup__ModuleDataMap0_30 = mercury__map__map_values_only_2_f_0(startup__TypeInfo_298_298, (MR_Word) &profile__profile__type_ctor_info_module_data_0, startup__TypeCtorInfo_297_297, (MR_Word) &startup_scalar_common_2[5], startup__ModuleProcs_29);
    }
#line 120 "startup.m"
    {
#line 120 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 122 "startup.m"
    {
#line 122 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 124 "startup.m"
    {
#line 124 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Mapping dynamic call sites to containing procedures...\n");
    }
#line 10157 "startup.c"
    startup__TypeInfo_310_310 = (MR_Word) &startup_scalar_common_1[2];
#line 127 "startup.m"
    {
#line 127 "startup.m"
      startup__conv8_V_112_112 = array_util__u_1_f_0(startup__TypeInfo_310_310, ((MR_Box) (startup__CallSiteDynamics0_24)));
    }
#line 127 "startup.m"
    startup__V_112_112 = ((MR_ArrayPtr) startup__conv8_V_112_112);
#line 10166 "startup.c"
    startup__TypeInfo_311_311 = (MR_Word) &startup_scalar_common_1[3];
#line 127 "startup.m"
    {
#line 127 "startup.m"
      startup__conv9_V_113_113 = array_util__u_1_f_0(startup__TypeInfo_311_311, ((MR_Box) (startup__ProcStatics0_27)));
    }
#line 127 "startup.m"
    startup__V_113_113 = ((MR_ArrayPtr) startup__conv9_V_113_113);
#line 10175 "startup.c"
    startup__TypeCtorInfo_312_312 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
#line 126 "startup.m"
    {
#line 126 "startup.m"
      array_util__array_foldl2_from_1_6_p_1(startup__TypeCtorInfo_312_312, startup__TypeInfo_310_310, startup__TypeInfo_311_311, (MR_Word) &startup_scalar_common_2[6], (MR_ArrayPtr) startup__ProcDynamics_25, ((MR_Box) (startup__V_112_112)), &startup__conv11_CallSiteDynamics_31, ((MR_Box) (startup__V_113_113)), &startup__conv10_ProcStatics_32);
    }
#line 126 "startup.m"
    startup__CallSiteDynamics_31 = ((MR_ArrayPtr) startup__conv11_CallSiteDynamics_31);
#line 126 "startup.m"
    startup__ProcStatics_32 = ((MR_ArrayPtr) startup__conv10_ProcStatics_32);
#line 128 "startup.m"
    {
#line 128 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 130 "startup.m"
    {
#line 130 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 132 "startup.m"
    {
#line 132 "startup.m"
      startup__InitDeep1_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 132 "startup.m"
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 0) = ((MR_Box) (startup__InitStats_22));
#line 132 "startup.m"
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 1) = ((MR_Box) (startup__Root_23));
#line 132 "startup.m"
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 2) = ((MR_Box) (startup__CallSiteDynamics_31));
#line 132 "startup.m"
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 3) = ((MR_Box) (startup__ProcDynamics_25));
#line 132 "startup.m"
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 4) = ((MR_Box) (startup__CallSiteStatics_28));
#line 132 "startup.m"
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 5) = ((MR_Box) (startup__ProcStatics_32));
#line 132 "startup.m"
    }
#line 134 "startup.m"
    {
#line 134 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(startup__InitDeep1_33, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 10);
    }
#line 139 "startup.m"
#line 139 "startup.m"
    switch (startup__Canonical_15) {
#line 139 "startup.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 139 "startup.m"
      case (MR_Integer) 0:
#line 138 "startup.m"
        startup__InitDeep_34 = startup__InitDeep1_33;
#line 139 "startup.m"
        break;
#line 139 "startup.m"
      case (MR_Integer) 1:
#line 140 "startup.m"
        {
#line 141 "startup.m"
          {
#line 141 "startup.m"
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Canonicalizing cliques...\n");
          }
#line 143 "startup.m"
          {
#line 143 "startup.m"
            canonical__canonicalize_cliques_2_p_0(startup__InitDeep1_33, &startup__InitDeep_34);
          }
#line 144 "startup.m"
          {
#line 144 "startup.m"
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
          }
#line 146 "startup.m"
          {
#line 146 "startup.m"
            startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
          }
#line 140 "startup.m"
        }
#line 139 "startup.m"
        break;
#line 139 "startup.m"
    }
#line 148 "startup.m"
    {
#line 148 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(startup__InitDeep_34, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 20);
    }
#line 151 "startup.m"
    startup__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 0)));
#line 151 "startup.m"
    startup__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 1)));
#line 151 "startup.m"
    startup__V_258_258 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 2)));
#line 151 "startup.m"
    startup__V_128_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 3)));
#line 151 "startup.m"
    startup__V_259_259 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 4)));
#line 151 "startup.m"
    startup__V_260_260 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 5)));
#line 151 "startup.m"
    {
#line 151 "startup.m"
      mercury__array__max_2_p_0(startup__TypeCtorInfo_312_312, (MR_ArrayPtr) startup__V_128_128, &startup__PDMax_35);
    }
#line 152 "startup.m"
    startup__NPDs_36 = (startup__PDMax_35 + (MR_Integer) 1);
#line 153 "startup.m"
    startup__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 0)));
#line 153 "startup.m"
    startup__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 1)));
#line 153 "startup.m"
    startup__V_130_130 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 2)));
#line 153 "startup.m"
    startup__V_263_263 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 3)));
#line 153 "startup.m"
    startup__V_264_264 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 4)));
#line 153 "startup.m"
    startup__V_265_265 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 5)));
#line 10296 "startup.c"
    startup__TypeCtorInfo_317_317 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
#line 153 "startup.m"
    {
#line 153 "startup.m"
      mercury__array__max_2_p_0(startup__TypeCtorInfo_317_317, (MR_ArrayPtr) startup__V_130_130, &startup__CSDMax_37);
    }
#line 154 "startup.m"
    startup__NCSDs_38 = (startup__CSDMax_37 + (MR_Integer) 1);
#line 155 "startup.m"
    startup__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 0)));
#line 155 "startup.m"
    startup__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 1)));
#line 155 "startup.m"
    startup__V_268_268 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 2)));
#line 155 "startup.m"
    startup__V_269_269 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 3)));
#line 155 "startup.m"
    startup__V_270_270 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 4)));
#line 155 "startup.m"
    startup__V_132_132 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 5)));
#line 155 "startup.m"
    {
#line 155 "startup.m"
      mercury__array__max_2_p_0(startup__TypeCtorInfo_299_299, (MR_ArrayPtr) startup__V_132_132, &startup__PSMax_39);
    }
#line 156 "startup.m"
    startup__NPSs_40 = (startup__PSMax_39 + (MR_Integer) 1);
#line 157 "startup.m"
    startup__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 0)));
#line 157 "startup.m"
    startup__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 1)));
#line 157 "startup.m"
    startup__V_273_273 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 2)));
#line 157 "startup.m"
    startup__V_274_274 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 3)));
#line 157 "startup.m"
    startup__V_134_134 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 4)));
#line 157 "startup.m"
    startup__V_275_275 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 5)));
#line 157 "startup.m"
    {
#line 157 "startup.m"
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_ArrayPtr) startup__V_134_134, &startup__CSSMax_41);
    }
#line 158 "startup.m"
    startup__NCSSs_42 = (startup__CSSMax_41 + (MR_Integer) 1);
#line 160 "startup.m"
    {
#line 160 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Finding cliques...\n");
    }
#line 162 "startup.m"
    {
#line 162 "startup.m"
      callgraph__find_cliques_2_p_0(startup__InitDeep_34, &startup__CliqueList_43);
    }
#line 163 "startup.m"
    {
#line 163 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 165 "startup.m"
    {
#line 165 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 167 "startup.m"
    {
#line 167 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Constructing clique indexes...\n");
    }
#line 169 "startup.m"
    {
#line 169 "startup.m"
      callgraph__make_clique_indexes_4_p_0(startup__NPDs_36, startup__CliqueList_43, &startup__Cliques_44, &startup__CliqueIndex_45);
    }
#line 170 "startup.m"
    {
#line 170 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 172 "startup.m"
    {
#line 172 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 174 "startup.m"
    {
#line 174 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Constructing clique parent map...\n");
    }
#line 10388 "startup.c"
    startup__TypeInfo_319_319 = (MR_Word) &startup_scalar_common_1[4];
#line 183 "startup.m"
    {
#line 183 "startup.m"
      mercury__array__max_2_p_0(startup__TypeInfo_319_319, (MR_ArrayPtr) startup__Cliques_44, &startup__CliqueMax_46);
    }
#line 184 "startup.m"
    startup__NCliques_47 = (startup__CliqueMax_46 + (MR_Integer) 1);
#line 185 "startup.m"
    {
#line 185 "startup.m"
      mercury__array__init_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__NCliques_47, ((MR_Box) (((MR_Box) ((MR_Integer) -1)))), &startup__conv12_CliqueParents0_48);
    }
#line 185 "startup.m"
    startup__CliqueParents0_48 = (MR_ArrayPtr) startup__conv12_CliqueParents0_48;
#line 186 "startup.m"
    {
#line 186 "startup.m"
      mercury__array__init_3_p_0((MR_Word) &startup_scalar_common_1[5], startup__NCSDs_38, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv13_CliqueMaybeChildren0_49);
    }
#line 186 "startup.m"
    startup__CliqueMaybeChildren0_49 = (MR_ArrayPtr) startup__conv13_CliqueMaybeChildren0_49;
#line 187 "startup.m"
    {
#line 187 "startup.m"
      startup__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 187 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_152_152, 0) = ((MR_Box) (&startup_scalar_common_5[0]));
#line 187 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_152_152, 1) = ((MR_Box) (startup__startup_11_p_0_4));
#line 187 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_152_152, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 187 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_152_152, 3) = ((MR_Box) (startup__InitDeep_34));
#line 187 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_152_152, 4) = ((MR_Box) (startup__CliqueIndex_45));
#line 187 "startup.m"
    }
#line 187 "startup.m"
    {
#line 187 "startup.m"
      array_util__array_foldl2_from_1_6_p_1((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_Word) &startup_scalar_common_1[6], (MR_Word) &startup_scalar_common_1[7], startup__V_152_152, (MR_ArrayPtr) startup__CliqueIndex_45, ((MR_Box) (startup__CliqueParents0_48)), &startup__conv17_CliqueParents_50, ((MR_Box) (startup__CliqueMaybeChildren0_49)), &startup__conv16_CliqueMaybeChildren_51);
    }
#line 187 "startup.m"
    startup__CliqueParents_50 = ((MR_ArrayPtr) startup__conv17_CliqueParents_50);
#line 187 "startup.m"
    startup__CliqueMaybeChildren_51 = ((MR_ArrayPtr) startup__conv16_CliqueMaybeChildren_51);
#line 192 "startup.m"
    {
#line 192 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 194 "startup.m"
    {
#line 194 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 196 "startup.m"
    {
#line 196 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Finding procedure callers...\n");
    }
#line 10451 "startup.c"
    startup__TypeInfo_331_331 = (MR_Word) &startup_scalar_common_1[8];
#line 198 "startup.m"
    {
#line 198 "startup.m"
      mercury__array__init_3_p_0(startup__TypeInfo_331_331, startup__NPSs_40, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv18_ProcCallers0_52);
    }
#line 198 "startup.m"
    startup__ProcCallers0_52 = (MR_ArrayPtr) startup__conv18_ProcCallers0_52;
#line 199 "startup.m"
    {
#line 199 "startup.m"
      startup__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 199 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_159_159, 0) = ((MR_Box) (&startup_scalar_common_6[0]));
#line 199 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_159_159, 1) = ((MR_Box) (startup__startup_11_p_0_5));
#line 199 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_159_159, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 199 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_159_159, 3) = ((MR_Box) (startup__InitDeep_34));
#line 199 "startup.m"
    }
#line 199 "startup.m"
    {
#line 199 "startup.m"
      array_util__array_foldl_from_1_4_p_1(startup__TypeCtorInfo_317_317, (MR_Word) &startup_scalar_common_1[9], startup__V_159_159, (MR_ArrayPtr) startup__CallSiteDynamics_31, ((MR_Box) (startup__ProcCallers0_52)), &startup__conv20_ProcCallers_53);
    }
#line 199 "startup.m"
    startup__ProcCallers_53 = ((MR_ArrayPtr) startup__conv20_ProcCallers_53);
#line 201 "startup.m"
    {
#line 201 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 203 "startup.m"
    {
#line 203 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 205 "startup.m"
    {
#line 205 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Constructing call site static map...\n");
    }
#line 207 "startup.m"
    {
#line 207 "startup.m"
      mercury__array__init_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, startup__NCSDs_38, ((MR_Box) (((MR_Box) ((MR_Integer) -1)))), &startup__conv21_CallSiteStaticMap0_54);
    }
#line 207 "startup.m"
    startup__CallSiteStaticMap0_54 = (MR_ArrayPtr) startup__conv21_CallSiteStaticMap0_54;
#line 208 "startup.m"
    {
#line 208 "startup.m"
      startup__V_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 208 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_167_167, 0) = ((MR_Box) (&startup_scalar_common_6[1]));
#line 208 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_167_167, 1) = ((MR_Box) (startup__startup_11_p_0_6));
#line 208 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_167_167, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 208 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_167_167, 3) = ((MR_Box) (startup__InitDeep_34));
#line 208 "startup.m"
    }
#line 208 "startup.m"
    {
#line 208 "startup.m"
      array_util__array_foldl_from_1_4_p_1(startup__TypeCtorInfo_312_312, (MR_Word) &startup_scalar_common_1[10], startup__V_167_167, (MR_ArrayPtr) startup__ProcDynamics_25, ((MR_Box) (startup__CallSiteStaticMap0_54)), &startup__conv23_CallSiteStaticMap_55);
    }
#line 208 "startup.m"
    startup__CallSiteStaticMap_55 = ((MR_ArrayPtr) startup__conv23_CallSiteStaticMap_55);
#line 210 "startup.m"
    {
#line 210 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 212 "startup.m"
    {
#line 212 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 214 "startup.m"
    {
#line 214 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Finding call site calls...\n");
    }
#line 10539 "startup.c"
    startup__TypeCtorInfo_343_343 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
#line 216 "startup.m"
    {
#line 216 "startup.m"
      startup__V_173_173 = mercury__map__init_0_f_0(startup__TypeCtorInfo_343_343, startup__TypeInfo_331_331);
    }
#line 216 "startup.m"
    {
#line 216 "startup.m"
      mercury__array__init_3_p_0((MR_Word) &startup_scalar_common_2[1], startup__NCSSs_42, ((MR_Box) (startup__V_173_173)), &startup__conv24_CallSiteCalls0_56);
    }
#line 216 "startup.m"
    startup__CallSiteCalls0_56 = (MR_ArrayPtr) startup__conv24_CallSiteCalls0_56;
#line 217 "startup.m"
    {
#line 217 "startup.m"
      startup__V_174_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 217 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_174_174, 0) = ((MR_Box) (&startup_scalar_common_6[2]));
#line 217 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_174_174, 1) = ((MR_Box) (startup__startup_11_p_0_7));
#line 217 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_174_174, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 217 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_174_174, 3) = ((MR_Box) (startup__InitDeep_34));
#line 217 "startup.m"
    }
#line 217 "startup.m"
    {
#line 217 "startup.m"
      array_util__array_foldl_from_1_4_p_1(startup__TypeCtorInfo_312_312, (MR_Word) &startup_scalar_common_1[11], startup__V_174_174, (MR_ArrayPtr) startup__ProcDynamics_25, ((MR_Box) (startup__CallSiteCalls0_56)), &startup__conv26_CallSiteCalls_57);
    }
#line 217 "startup.m"
    startup__CallSiteCalls_57 = ((MR_ArrayPtr) startup__conv26_CallSiteCalls_57);
#line 219 "startup.m"
    {
#line 219 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 221 "startup.m"
    {
#line 221 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 223 "startup.m"
    {
#line 223 "startup.m"
      startup__ProgRepFileName_58 = startup__make_progrep_filename_1_f_0(startup__DataFileName_14);
    }
#line 224 "startup.m"
    {
#line 224 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Reading program representation...\n");
    }
#line 226 "startup.m"
    {
#line 226 "startup.m"
      mdbcomp__program_representation__read_prog_rep_file_4_p_0(startup__ProgRepFileName_58, &startup__ProgRepResult_59);
    }
#line 244 "startup.m"
    if (((MR_tag((MR_Word) startup__ProgRepResult_59)) == (MR_mktag((MR_Integer) 1))))
#line 245 "startup.m"
      {
#line 245 "startup.m"
        MR_Word startup__Error_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__ProgRepResult_59, (MR_Integer) 0)));
#line 245 "startup.m"
        MR_Word startup__OpenProgRepResult_67;

#line 247 "startup.m"
        {
#line 247 "startup.m"
          mercury__io__open_input_4_p_0(startup__ProgRepFileName_58, &startup__OpenProgRepResult_67);
        }
#line 258 "startup.m"
        if (((MR_tag((MR_Word) startup__OpenProgRepResult_67)) == (MR_mktag((MR_Integer) 1))))
#line 259 "startup.m"
          {
#line 261 "startup.m"
            startup__MaybeProcRepFile_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 262 "startup.m"
            startup__ModuleDataMap_65 = startup__ModuleDataMap0_30;
#line 259 "startup.m"
          }
#line 258 "startup.m"
        else
#line 249 "startup.m"
          {
#line 249 "startup.m"
            MR_Word startup__ProgRepStream_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__OpenProgRepResult_67, (MR_Integer) 0)));
#line 249 "startup.m"
            MR_String startup__ErrorMessage_69;
#line 249 "startup.m"
            MR_String startup__V_183_183;
#line 249 "startup.m"
            MR_String startup__V_186_186;
#line 249 "startup.m"
            MR_Word startup__V_188_188;

#line 252 "startup.m"
            {
#line 252 "startup.m"
              mercury__io__close_input_3_p_0(startup__ProgRepStream_68);
            }
#line 253 "startup.m"
            {
#line 253 "startup.m"
              startup__ErrorMessage_69 = mercury__io__error_message_1_f_0(startup__Error_66);
            }
#line 255 "startup.m"
            {
#line 255 "startup.m"
              startup__V_186_186 = mercury__string__f_43_43_2_f_0(startup__ErrorMessage_69, (MR_String) "\n");
            }
#line 255 "startup.m"
            {
#line 255 "startup.m"
              startup__V_183_183 = mercury__string__f_43_43_2_f_0((MR_String) "% Error: ", startup__V_186_186);
            }
#line 254 "startup.m"
            {
#line 254 "startup.m"
              startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, startup__V_183_183);
            }
#line 256 "startup.m"
            {
#line 256 "startup.m"
              startup__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 256 "startup.m"
              MR_hl_field(MR_mktag(1), startup__V_188_188, 0) = ((MR_Box) (startup__ErrorMessage_69));
#line 256 "startup.m"
            }
#line 256 "startup.m"
            {
#line 256 "startup.m"
              startup__MaybeProcRepFile_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 256 "startup.m"
              MR_hl_field(MR_mktag(1), startup__MaybeProcRepFile_61, 0) = ((MR_Box) (startup__V_188_188));
#line 256 "startup.m"
            }
#line 257 "startup.m"
            startup__ModuleDataMap_65 = startup__ModuleDataMap0_30;
#line 249 "startup.m"
          }
#line 245 "startup.m"
      }
#line 244 "startup.m"
    else
#line 228 "startup.m"
      {
#line 228 "startup.m"
        MR_Word startup__ProgRep_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ProgRepResult_59, (MR_Integer) 0)));
#line 228 "startup.m"
        MR_Word startup__ModuleMap_62;
#line 228 "startup.m"
        MR_Word startup__ProgRepModules_63;
#line 228 "startup.m"
        MR_Word startup__V_191_191;
#line 242 "startup.m"
        MR_Box startup__conv28_ModuleDataMap_65;

#line 229 "startup.m"
        {
#line 229 "startup.m"
          startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
        }
#line 231 "startup.m"
        {
#line 231 "startup.m"
          startup__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 231 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_191_191, 0) = ((MR_Box) (startup__ProgRep_60));
#line 231 "startup.m"
        }
#line 231 "startup.m"
        {
#line 231 "startup.m"
          startup__MaybeProcRepFile_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 231 "startup.m"
          MR_hl_field(MR_mktag(1), startup__MaybeProcRepFile_61, 0) = ((MR_Box) (startup__V_191_191));
#line 231 "startup.m"
        }
#line 233 "startup.m"
        startup__ModuleMap_62 = (MR_Word) startup__ProgRep_60;
#line 234 "startup.m"
        {
#line 234 "startup.m"
          mercury__map__keys_2_p_0(startup__TypeCtorInfo_297_297, (MR_Word) &startup_scalar_common_1[12], startup__ModuleMap_62, &startup__ProgRepModules_63);
        }
#line 239 "startup.m"
        if ((startup__MaybeOutputStream_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 240 "startup.m"
          {
#line 240 "startup.m"
          }
#line 239 "startup.m"
        else
#line 236 "startup.m"
          {
#line 236 "startup.m"
            MR_Word startup__OutputStream_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__MaybeOutputStream_16, (MR_Integer) 0)));

#line 237 "startup.m"
            {
#line 237 "startup.m"
              mercury__io__write_4_p_0((MR_Word) &startup_scalar_common_1[13], startup__OutputStream_64, ((MR_Box) (startup__ProgRepModules_63)));
            }
#line 238 "startup.m"
            {
#line 238 "startup.m"
              mercury__io__nl_3_p_0(startup__OutputStream_64);
            }
#line 236 "startup.m"
          }
#line 242 "startup.m"
        {
#line 242 "startup.m"
          mercury__list__foldl_4_p_0(startup__TypeCtorInfo_297_297, (MR_Word) &startup_scalar_common_2[2], (MR_Word) &startup_scalar_common_2[7], startup__ProgRepModules_63, ((MR_Box) (startup__ModuleDataMap0_30)), &startup__conv28_ModuleDataMap_65);
        }
#line 242 "startup.m"
        startup__ModuleDataMap_65 = ((MR_Word) startup__conv28_ModuleDataMap_65);
#line 228 "startup.m"
      }
#line 267 "startup.m"
    {
#line 267 "startup.m"
      startup__ContourFileName_71 = startup__contour_file_name_1_f_0(startup__DataFileName_14);
    }
#line 10767 "startup.c"
    startup__V_381_381 = (MR_Word) &startup_scalar_common_8[0];
#line 269 "startup.m"
    {
#line 269 "startup.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(startup__V_381_381, startup__ContourFileName_71, &startup__V_375_375);
    }
#line 268 "startup.m"
    {
#line 268 "startup.m"
      startup__V_382_382 = mercury__string__f_43_43_2_f_0(startup__V_375_375, (MR_String) "\'...\n");
    }
#line 268 "startup.m"
    {
#line 268 "startup.m"
      startup__TryMsg_72 = mercury__string__f_43_43_2_f_0((MR_String) "% Trying to read contour exclusion file \140", startup__V_382_382);
    }
#line 270 "startup.m"
    {
#line 270 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, startup__TryMsg_72);
    }
#line 271 "startup.m"
    {
#line 271 "startup.m"
      exclude__read_exclude_file_5_p_0(startup__ContourFileName_71, startup__ModuleDataMap_65, &startup__ExcludeFile_73);
    }
#line 272 "startup.m"
    startup__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__ExcludeFile_73, (MR_Integer) 0)));
#line 272 "startup.m"
    startup__ExcludeContents_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ExcludeFile_73, (MR_Integer) 1)));
#line 277 "startup.m"
#line 277 "startup.m"
    switch (MR_tag((MR_Word) startup__ExcludeContents_75)) {
#line 277 "startup.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 277 "startup.m"
      case (MR_Integer) 0:
#line 274 "startup.m"
        {
#line 275 "startup.m"
          {
#line 275 "startup.m"
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Couldn\'t open file.\n");
          }
#line 274 "startup.m"
        }
#line 277 "startup.m"
        break;
#line 277 "startup.m"
      case (MR_Integer) 1:
#line 278 "startup.m"
        {
#line 278 "startup.m"
          MR_String startup__ExcludeError_76 = ((MR_String) (MR_hl_field(MR_mktag(1), startup__ExcludeContents_75, (MR_Integer) 0)));
#line 278 "startup.m"
          MR_String startup__ExcludeErrorMsg_77;
#line 278 "startup.m"
          MR_String startup__V_385_385;
#line 278 "startup.m"
          MR_String startup__V_392_392;

#line 280 "startup.m"
          {
#line 280 "startup.m"
            mercury__string__format__format_string_component_nowidth_noprec_3_p_0(startup__V_381_381, startup__ExcludeError_76, &startup__V_385_385);
          }
#line 279 "startup.m"
          {
#line 279 "startup.m"
            startup__V_392_392 = mercury__string__f_43_43_2_f_0(startup__V_385_385, (MR_String) ".\n");
          }
#line 279 "startup.m"
          {
#line 279 "startup.m"
            startup__ExcludeErrorMsg_77 = mercury__string__f_43_43_2_f_0((MR_String) "% File had unrecoverable errors:\n% ", startup__V_392_392);
          }
#line 281 "startup.m"
          {
#line 281 "startup.m"
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, startup__ExcludeErrorMsg_77);
          }
#line 278 "startup.m"
        }
#line 277 "startup.m"
        break;
#line 277 "startup.m"
      case (MR_Integer) 2:
#line 283 "startup.m"
        {
#line 284 "startup.m"
          {
#line 284 "startup.m"
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
          }
#line 283 "startup.m"
        }
#line 277 "startup.m"
        break;
#line 277 "startup.m"
    }
#line 288 "startup.m"
    {
#line 288 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Propagating measurements up call graph...\n");
    }
#line 291 "startup.m"
    {
#line 291 "startup.m"
      startup__V_212_212 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 10878 "startup.c"
    startup__TypeCtorInfo_356_356 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 291 "startup.m"
    {
#line 291 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_356_356, startup__NCSDs_38, ((MR_Box) (startup__V_212_212)), &startup__conv29_CSDDesc0_80);
    }
#line 291 "startup.m"
    startup__CSDDesc0_80 = (MR_ArrayPtr) startup__conv29_CSDDesc0_80;
#line 292 "startup.m"
    {
#line 292 "startup.m"
      startup__V_213_213 = measurements__zero_own_prof_info_0_f_0();
    }
#line 10892 "startup.c"
    startup__TypeCtorInfo_357_357 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 292 "startup.m"
    {
#line 292 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_357_357, startup__NPDs_36, ((MR_Box) (startup__V_213_213)), &startup__conv30_PDOwn0_81);
    }
#line 292 "startup.m"
    startup__PDOwn0_81 = (MR_ArrayPtr) startup__conv30_PDOwn0_81;
#line 293 "startup.m"
    {
#line 293 "startup.m"
      array_util__array_foldl_from_1_4_p_1(startup__TypeCtorInfo_317_317, (MR_Word) &startup_scalar_common_1[14], (MR_Word) &startup_scalar_common_2[8], (MR_ArrayPtr) startup__CallSiteDynamics_31, ((MR_Box) (startup__PDOwn0_81)), &startup__conv32_PDOwn_82);
    }
#line 293 "startup.m"
    startup__PDOwn_82 = ((MR_ArrayPtr) startup__conv32_PDOwn_82);
#line 295 "startup.m"
    {
#line 295 "startup.m"
      startup__V_215_215 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 295 "startup.m"
    {
#line 295 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_356_356, startup__NPDs_36, ((MR_Box) (startup__V_215_215)), &startup__conv33_PDDesc0_83);
    }
#line 295 "startup.m"
    startup__PDDesc0_83 = (MR_ArrayPtr) startup__conv33_PDDesc0_83;
#line 296 "startup.m"
    {
#line 296 "startup.m"
      startup__V_216_216 = measurements__zero_own_prof_info_0_f_0();
    }
#line 296 "startup.m"
    {
#line 296 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_357_357, startup__NPSs_40, ((MR_Box) (startup__V_216_216)), &startup__conv34_PSOwn0_84);
    }
#line 296 "startup.m"
    startup__PSOwn0_84 = (MR_ArrayPtr) startup__conv34_PSOwn0_84;
#line 297 "startup.m"
    {
#line 297 "startup.m"
      startup__V_217_217 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 297 "startup.m"
    {
#line 297 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_356_356, startup__NPSs_40, ((MR_Box) (startup__V_217_217)), &startup__conv35_PSDesc0_85);
    }
#line 297 "startup.m"
    startup__PSDesc0_85 = (MR_ArrayPtr) startup__conv35_PSDesc0_85;
#line 298 "startup.m"
    {
#line 298 "startup.m"
      startup__V_218_218 = measurements__zero_own_prof_info_0_f_0();
    }
#line 298 "startup.m"
    {
#line 298 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_357_357, startup__NCSSs_42, ((MR_Box) (startup__V_218_218)), &startup__conv36_CSSOwn0_86);
    }
#line 298 "startup.m"
    startup__CSSOwn0_86 = (MR_ArrayPtr) startup__conv36_CSSOwn0_86;
#line 299 "startup.m"
    {
#line 299 "startup.m"
      startup__V_219_219 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 299 "startup.m"
    {
#line 299 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_356_356, startup__NCSSs_42, ((MR_Box) (startup__V_219_219)), &startup__conv37_CSSDesc0_87);
    }
#line 299 "startup.m"
    startup__CSSDesc0_87 = (MR_ArrayPtr) startup__conv37_CSSDesc0_87;
#line 300 "startup.m"
    {
#line 300 "startup.m"
      startup__V_220_220 = mercury__map__init_0_f_0(startup__TypeCtorInfo_343_343, startup__TypeCtorInfo_356_356);
    }
#line 10973 "startup.c"
    startup__TypeInfo_363_363 = (MR_Word) &startup_scalar_common_2[3];
#line 300 "startup.m"
    {
#line 300 "startup.m"
      mercury__array__init_3_p_0(startup__TypeInfo_363_363, startup__NPDs_36, ((MR_Box) (startup__V_220_220)), &startup__conv38_PDCompTable0_88);
    }
#line 300 "startup.m"
    startup__PDCompTable0_88 = (MR_ArrayPtr) startup__conv38_PDCompTable0_88;
#line 301 "startup.m"
    {
#line 301 "startup.m"
      startup__V_221_221 = mercury__map__init_0_f_0(startup__TypeCtorInfo_343_343, startup__TypeCtorInfo_356_356);
    }
#line 301 "startup.m"
    {
#line 301 "startup.m"
      mercury__array__init_3_p_0(startup__TypeInfo_363_363, startup__NCSDs_38, ((MR_Box) (startup__V_221_221)), &startup__conv39_CSDCompTable0_89);
    }
#line 301 "startup.m"
    startup__CSDCompTable0_89 = (MR_ArrayPtr) startup__conv39_CSDCompTable0_89;
#line 302 "startup.m"
    startup__V_276_276 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 0)));
#line 302 "startup.m"
    startup__V_277_277 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 1)));
#line 302 "startup.m"
    startup__V_278_278 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 2)));
#line 302 "startup.m"
    startup__V_279_279 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 3)));
#line 302 "startup.m"
    startup__V_280_280 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 4)));
#line 302 "startup.m"
    startup__V_281_281 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 5)));
#line 302 "startup.m"
    startup__V_282_282 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 6)));
#line 302 "startup.m"
    startup__V_283_283 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 7)));
#line 302 "startup.m"
    startup__V_284_284 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 8)));
#line 302 "startup.m"
    startup__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 9)));
#line 302 "startup.m"
    startup__V_285_285 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_222_222, (MR_Integer) 0)));
#line 302 "startup.m"
    startup__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__V_222_222, (MR_Integer) 1)));
#line 302 "startup.m"
    startup__CoverageDataType_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__V_222_222, (MR_Integer) 3)));
#line 323 "startup.m"
    startup__V_225_225 = (MR_Word) &startup_scalar_common_2[9];
#line 11022 "startup.c"
    startup__TypeCtorInfo_369_369 = (MR_Word) &profile__profile__type_ctor_info_deep_0;
#line 324 "startup.m"
    {
#line 324 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 326 "startup.m"
    {
#line 326 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 11034 "startup.c"
#line 11035 "startup.c"
    switch (startup__CoverageDataType_90) {
#line 11037 "startup.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 11039 "startup.c"
      case (MR_Integer) 2:
#line 11041 "startup.c"
      case (MR_Integer) 1:
#line 11043 "startup.c"
        {
#line 11045 "startup.c"
          MR_Word startup__MaybeStaticCoverage0_91;
#line 11047 "startup.c"
          MR_ArrayPtr startup__StaticCoverage0_92;
#line 11049 "startup.c"
          MR_Word startup__V_223_223;
#line 11051 "startup.c"
          MR_Word startup__STATE_VARIABLE_Deep_224_224;
#line 11053 "startup.c"
          MR_Word startup__STATE_VARIABLE_Deep_226_226;
#line 310 "startup.m"
          MR_ArrayPtr startup__conv41_StaticCoverage0_92;
#line 323 "startup.m"
          MR_Box startup__conv42_STATE_VARIABLE_Deep_226_226;

#line 310 "startup.m"
          {
#line 310 "startup.m"
            startup__V_223_223 = measurements__zero_static_coverage_0_f_0();
          }
#line 310 "startup.m"
          {
#line 310 "startup.m"
            mercury__array__init_3_p_0((MR_Word) &startup_scalar_common_1[16], startup__NPSs_40, ((MR_Box) (startup__V_223_223)), &startup__conv41_StaticCoverage0_92);
          }
#line 310 "startup.m"
          startup__StaticCoverage0_92 = (MR_ArrayPtr) startup__conv41_StaticCoverage0_92;
#line 311 "startup.m"
          {
#line 311 "startup.m"
            startup__MaybeStaticCoverage0_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 311 "startup.m"
            MR_hl_field(MR_mktag(1), startup__MaybeStaticCoverage0_91, 0) = ((MR_Box) (startup__StaticCoverage0_92));
#line 311 "startup.m"
          }
#line 314 "startup.m"
          {
#line 314 "startup.m"
            startup__STATE_VARIABLE_Deep_224_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 0) = ((MR_Box) (startup__InitStats_22));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 1) = ((MR_Box) (startup__Machine_12));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 2) = ((MR_Box) (startup__ScriptName_13));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 3) = ((MR_Box) (startup__DataFileName_14));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 4) = ((MR_Box) (startup__Root_23));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 5) = ((MR_Box) (startup__CallSiteDynamics_31));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 6) = ((MR_Box) (startup__ProcDynamics_25));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 7) = ((MR_Box) (startup__CallSiteStatics_28));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 8) = ((MR_Box) (startup__ProcStatics_32));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 9) = ((MR_Box) (startup__CliqueIndex_45));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 10) = ((MR_Box) (startup__Cliques_44));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 11) = ((MR_Box) (startup__CliqueParents_50));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 12) = ((MR_Box) (startup__CliqueMaybeChildren_51));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 13) = ((MR_Box) (startup__ProcCallers_53));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 14) = ((MR_Box) (startup__CallSiteStaticMap_55));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 15) = ((MR_Box) (startup__CallSiteCalls_57));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 16) = ((MR_Box) (startup__PDOwn_82));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 17) = ((MR_Box) (startup__PDDesc0_83));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 18) = ((MR_Box) (startup__CSDDesc0_80));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 19) = ((MR_Box) (startup__PSOwn0_84));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 20) = ((MR_Box) (startup__PSDesc0_85));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 21) = ((MR_Box) (startup__CSSOwn0_86));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 22) = ((MR_Box) (startup__CSSDesc0_87));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 23) = ((MR_Box) (startup__PDCompTable0_88));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 24) = ((MR_Box) (startup__CSDCompTable0_89));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 25) = ((MR_Box) (startup__ModuleDataMap_65));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 26) = ((MR_Box) (startup__MaybeStaticCoverage0_91));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 27) = ((MR_Box) (startup__ExcludeFile_73));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 28) = ((MR_Box) (startup__MaybeProcRepFile_61));
#line 314 "startup.m"
          }
#line 323 "startup.m"
          {
#line 323 "startup.m"
            array_util__array_foldl_from_1_4_p_1(startup__TypeInfo_319_319, startup__TypeCtorInfo_369_369, startup__V_225_225, (MR_ArrayPtr) startup__Cliques_44, ((MR_Box) (startup__STATE_VARIABLE_Deep_224_224)), &startup__conv42_STATE_VARIABLE_Deep_226_226);
          }
#line 323 "startup.m"
          startup__STATE_VARIABLE_Deep_226_226 = ((MR_Word) startup__conv42_STATE_VARIABLE_Deep_226_226);
#line 328 "startup.m"
          {
#line 328 "startup.m"
            startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(startup__STATE_VARIABLE_Deep_226_226, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 30);
          }
#line 331 "startup.m"
          {
#line 331 "startup.m"
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Summarizing information...\n");
          }
#line 348 "startup.m"
#line 348 "startup.m"
          switch (startup__CoverageDataType_90) {
#line 348 "startup.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 348 "startup.m"
            case (MR_Integer) 2:
#line 349 "startup.m"
              {
#line 350 "startup.m"
                {
#line 350 "startup.m"
                  startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing proc dynamics with coverage...\n");
                }
#line 352 "startup.m"
                {
#line 352 "startup.m"
                  startup__summarize_proc_dynamics_with_coverage_data_2_p_0(startup__STATE_VARIABLE_Deep_226_226, &startup__STATE_VARIABLE_Deep_243_243);
                }
#line 349 "startup.m"
              }
#line 348 "startup.m"
              break;
#line 348 "startup.m"
            case (MR_Integer) 1:
#line 336 "startup.m"
              {
#line 336 "startup.m"
                MR_Word startup__STATE_VARIABLE_Deep_240_240;

#line 339 "startup.m"
                {
#line 339 "startup.m"
                  startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing static coverage...\n");
                }
#line 341 "startup.m"
                {
#line 341 "startup.m"
                  startup__summarize_proc_statics_coverage_2_p_0(startup__STATE_VARIABLE_Deep_226_226, &startup__STATE_VARIABLE_Deep_240_240);
                }
#line 345 "startup.m"
                {
#line 345 "startup.m"
                  startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing proc dynamics...\n");
                }
#line 347 "startup.m"
                {
#line 347 "startup.m"
                  startup__summarize_proc_dynamics_2_p_0(startup__STATE_VARIABLE_Deep_240_240, &startup__STATE_VARIABLE_Deep_243_243);
                }
#line 336 "startup.m"
              }
#line 348 "startup.m"
              break;
#line 348 "startup.m"
          }
#line 11217 "startup.c"
        }
#line 11219 "startup.c"
        break;
#line 11221 "startup.c"
      case (MR_Integer) 0:
#line 11223 "startup.c"
        {
#line 11225 "startup.c"
          MR_Word startup__STATE_VARIABLE_Deep_224_395;
#line 11227 "startup.c"
          MR_Word startup__STATE_VARIABLE_Deep_240_400;
#line 323 "startup.m"
          MR_Box startup__conv43_STATE_VARIABLE_Deep_240_400;

#line 314 "startup.m"
          {
#line 314 "startup.m"
            startup__STATE_VARIABLE_Deep_224_395 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 0) = ((MR_Box) (startup__InitStats_22));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 1) = ((MR_Box) (startup__Machine_12));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 2) = ((MR_Box) (startup__ScriptName_13));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 3) = ((MR_Box) (startup__DataFileName_14));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 4) = ((MR_Box) (startup__Root_23));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 5) = ((MR_Box) (startup__CallSiteDynamics_31));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 6) = ((MR_Box) (startup__ProcDynamics_25));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 7) = ((MR_Box) (startup__CallSiteStatics_28));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 8) = ((MR_Box) (startup__ProcStatics_32));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 9) = ((MR_Box) (startup__CliqueIndex_45));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 10) = ((MR_Box) (startup__Cliques_44));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 11) = ((MR_Box) (startup__CliqueParents_50));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 12) = ((MR_Box) (startup__CliqueMaybeChildren_51));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 13) = ((MR_Box) (startup__ProcCallers_53));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 14) = ((MR_Box) (startup__CallSiteStaticMap_55));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 15) = ((MR_Box) (startup__CallSiteCalls_57));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 16) = ((MR_Box) (startup__PDOwn_82));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 17) = ((MR_Box) (startup__PDDesc0_83));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 18) = ((MR_Box) (startup__CSDDesc0_80));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 19) = ((MR_Box) (startup__PSOwn0_84));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 20) = ((MR_Box) (startup__PSDesc0_85));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 21) = ((MR_Box) (startup__CSSOwn0_86));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 22) = ((MR_Box) (startup__CSSDesc0_87));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 23) = ((MR_Box) (startup__PDCompTable0_88));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 24) = ((MR_Box) (startup__CSDCompTable0_89));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 25) = ((MR_Box) (startup__ModuleDataMap_65));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 26) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 27) = ((MR_Box) (startup__ExcludeFile_73));
#line 314 "startup.m"
            MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_395, 28) = ((MR_Box) (startup__MaybeProcRepFile_61));
#line 314 "startup.m"
          }
#line 323 "startup.m"
          {
#line 323 "startup.m"
            array_util__array_foldl_from_1_4_p_1(startup__TypeInfo_319_319, startup__TypeCtorInfo_369_369, startup__V_225_225, (MR_ArrayPtr) startup__Cliques_44, ((MR_Box) (startup__STATE_VARIABLE_Deep_224_395)), &startup__conv43_STATE_VARIABLE_Deep_240_400);
          }
#line 323 "startup.m"
          startup__STATE_VARIABLE_Deep_240_400 = ((MR_Word) startup__conv43_STATE_VARIABLE_Deep_240_400);
#line 328 "startup.m"
          {
#line 328 "startup.m"
            startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(startup__STATE_VARIABLE_Deep_240_400, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 30);
          }
#line 331 "startup.m"
          {
#line 331 "startup.m"
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Summarizing information...\n");
          }
#line 345 "startup.m"
          {
#line 345 "startup.m"
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing proc dynamics...\n");
          }
#line 347 "startup.m"
          {
#line 347 "startup.m"
            startup__summarize_proc_dynamics_2_p_0(startup__STATE_VARIABLE_Deep_240_400, &startup__STATE_VARIABLE_Deep_243_243);
          }
#line 11323 "startup.c"
        }
#line 11325 "startup.c"
        break;
#line 11327 "startup.c"
    }
#line 354 "startup.m"
    {
#line 354 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing call site dynamics...\n");
    }
#line 356 "startup.m"
    {
#line 356 "startup.m"
      startup__summarize_call_site_dynamics_2_p_0(startup__STATE_VARIABLE_Deep_243_243, &startup__STATE_VARIABLE_Deep_246_246);
    }
#line 357 "startup.m"
    {
#line 357 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing modules...\n");
    }
#line 359 "startup.m"
    {
#line 359 "startup.m"
      startup__summarize_modules_2_p_0(startup__STATE_VARIABLE_Deep_246_246, startup__STATE_VARIABLE_Deep_93);
    }
#line 360 "startup.m"
    {
#line 360 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 362 "startup.m"
    {
#line 362 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 364 "startup.m"
    {
#line 364 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(*startup__STATE_VARIABLE_Deep_93, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 40);
#line 364 "startup.m"
      return;
    }
#line 109 "startup.m"
  }
#line 104 "startup.m"
}

#line 95 "startup.m"
static MR_String MR_CALL 
startup__make_progrep_filename_1_f_0(
#line 95 "startup.m"
  MR_String startup__DataFileName_3)
#line 95 "startup.m"
{
#line 100 "startup.m"
  {
#line 100 "startup.m"
    MR_bool startup__succeeded;
#line 100 "startup.m"
    MR_String startup__ProgrepFileName_4;
#line 100 "startup.m"
    MR_String startup__BaseFileName_5;

#line 98 "startup.m"
    {
#line 98 "startup.m"
      startup__succeeded = mercury__string__remove_suffix_3_p_0(startup__DataFileName_3, (MR_String) ".data", &startup__BaseFileName_5);
    }
#line 100 "startup.m"
    if (startup__succeeded)
#line 99 "startup.m"
      {
#line 99 "startup.m"
        {
#line 99 "startup.m"
          return startup__ProgrepFileName_4 = mercury__string__f_43_43_2_f_0(startup__BaseFileName_5, (MR_String) ".procrep");
        }
#line 99 "startup.m"
      }
#line 100 "startup.m"
    else
#line 101 "startup.m"
      {
#line 101 "startup.m"
        MR_String startup__V_8_8;

#line 101 "startup.m"
        {
#line 101 "startup.m"
          startup__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t remove suffix from deep file name: ", startup__DataFileName_3);
        }
#line 101 "startup.m"
        {
#line 101 "startup.m"
          mercury__require__error_1_p_0(startup__V_8_8);
        }
#line 101 "startup.m"
      }
#line 100 "startup.m"
    return startup__ProgrepFileName_4;
#line 100 "startup.m"
  }
#line 95 "startup.m"
}

#line 36 "startup.m"
void MR_CALL 
startup__read_and_startup_10_p_0(
#line 36 "startup.m"
  MR_String startup__Machine_11,
#line 36 "startup.m"
  MR_String startup__ScriptName_12,
#line 36 "startup.m"
  MR_String startup__DataFileName_13,
#line 36 "startup.m"
  MR_Word startup__Canonical_14,
#line 36 "startup.m"
  MR_Word startup__MaybeOutputStream_15,
#line 36 "startup.m"
  MR_Word startup__DumpStages_16,
#line 36 "startup.m"
  MR_Word startup__DumpOptions_17,
#line 36 "startup.m"
  MR_Word * startup__Result_18)
#line 36 "startup.m"
{
#line 69 "startup.m"
  {
#line 69 "startup.m"
    MR_bool startup__succeeded;
#line 69 "startup.m"
    MR_Word startup__DataFileResult_20;

#line 75 "startup.m"
    {
#line 75 "startup.m"
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
#line 11462 "startup.c"
    if ((startup__MaybeOutputStream_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 80 "startup.m"
      {
#line 80 "startup.m"
        read_profile__read_call_graph_4_p_0(startup__DataFileName_13, &startup__DataFileResult_20);
      }
#line 11469 "startup.c"
    else
#line 11471 "startup.c"
      {
#line 11473 "startup.c"
        MR_Word startup__OutputStream_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__MaybeOutputStream_15, (MR_Integer) 0)));

#line 1106 "startup.m"
        {
#line 1106 "startup.m"
          mercury__io__write_string_4_p_0(startup__OutputStream_53, (MR_String) "% Reading graph data...\n");
        }
#line 1107 "startup.m"
        {
#line 1107 "startup.m"
          mercury__io__flush_output_3_p_0(startup__OutputStream_53);
        }
#line 80 "startup.m"
        {
#line 80 "startup.m"
          read_profile__read_call_graph_4_p_0(startup__DataFileName_13, &startup__DataFileResult_20);
        }
#line 1106 "startup.m"
        {
#line 1106 "startup.m"
          mercury__io__write_string_4_p_0(startup__OutputStream_53, (MR_String) "% Done.\n");
        }
#line 1107 "startup.m"
        {
#line 1107 "startup.m"
          mercury__io__flush_output_3_p_0(startup__OutputStream_53);
        }
#line 11501 "startup.c"
      }
#line 90 "startup.m"
    if (((MR_tag((MR_Word) startup__DataFileResult_20)) == (MR_mktag((MR_Integer) 1))))
#line 92 "startup.m"
      *startup__Result_18 = (MR_Word) startup__DataFileResult_20;
#line 90 "startup.m"
    else
#line 85 "startup.m"
      {
#line 85 "startup.m"
        MR_Word startup__InitDeep_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__DataFileResult_20, (MR_Integer) 0)));
#line 85 "startup.m"
        MR_Word startup__Deep_22;

#line 86 "startup.m"
        {
#line 86 "startup.m"
          startup__startup_11_p_0(startup__Machine_11, startup__ScriptName_12, startup__DataFileName_13, startup__Canonical_14, startup__MaybeOutputStream_15, startup__DumpStages_16, startup__DumpOptions_17, startup__InitDeep_21, &startup__Deep_22);
        }
#line 89 "startup.m"
        {
#line 89 "startup.m"
          MR_Word base;
#line 89 "startup.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 89 "startup.m"
          *startup__Result_18 = base;
#line 89 "startup.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__Deep_22));
#line 89 "startup.m"
        }
#line 85 "startup.m"
      }
#line 69 "startup.m"
  }
#line 36 "startup.m"
}

#line 32 "startup.m"
void MR_CALL 
startup__read_and_startup_default_deep_options_9_p_0(
#line 32 "startup.m"
  MR_String startup__Machine_10,
#line 32 "startup.m"
  MR_String startup__ScriptName_11,
#line 32 "startup.m"
  MR_String startup__DataFileName_12,
#line 32 "startup.m"
  MR_Word startup__Canonical_13,
#line 32 "startup.m"
  MR_Word startup__MaybeOutputStream_14,
#line 32 "startup.m"
  MR_Word startup__DumpStages_15,
#line 32 "startup.m"
  MR_Word * startup__Res_16)
#line 32 "startup.m"
{
#line 64 "startup.m"
  {
#line 64 "startup.m"
    MR_bool startup__succeeded;
#line 64 "startup.m"
    MR_Word startup__V_20_20;

#line 66 "startup.m"
    {
#line 66 "startup.m"
      startup__V_20_20 = dump__default_dump_options_0_f_0();
    }
#line 65 "startup.m"
    {
#line 65 "startup.m"
      startup__read_and_startup_10_p_0(startup__Machine_10, startup__ScriptName_11, startup__DataFileName_12, startup__Canonical_13, startup__MaybeOutputStream_14, startup__DumpStages_15, startup__V_20_20, startup__Res_16);
#line 65 "startup.m"
      return;
    }
#line 64 "startup.m"
  }
#line 32 "startup.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module startup. */
