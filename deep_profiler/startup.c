/*
** Automatically generated from `startup.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 85 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_0;

#line 88 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0;

#line 91 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_proc_static_ptr_0;

#line 94 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_static_ptr_0;

#line 97 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0;

#line 100 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0;

#line 103 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0;

#line 106 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 109 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0;

#line 112 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0;

#line 115 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 118 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 121 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0;

#line 124 "startup.c"
static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 127 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 130 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0;

#line 133 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0;

#line 136 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

#line 139 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

#line 142 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0;

#line 145 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0;

#line 148 "startup.c"
static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

#line 151 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

#line 154 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__array__ti_array_1builtin__type_ctor_info_int_0;

#line 157 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

#line 160 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

#line 163 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0;

#line 398 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(
#line 398 "startup.m"
  MR_Word startup__V_47_47,
#line 398 "startup.m"
  MR_Word startup__V_48_48,
#line 398 "startup.m"
  MR_String startup__BaseName_7,
#line 398 "startup.m"
  MR_Word startup__DumpStages_8,
#line 398 "startup.m"
  MR_Integer startup__ThisStageNum_9);

#line 398 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(
#line 398 "startup.m"
  MR_Word startup__V_47_47,
#line 398 "startup.m"
  MR_Word startup__V_48_48,
#line 398 "startup.m"
  MR_String startup__BaseName_7,
#line 398 "startup.m"
  MR_Word startup__DumpStages_8,
#line 398 "startup.m"
  MR_Integer startup__ThisStageNum_9);

#line 1022 "startup.m"
static MR_Word MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_f_0(
#line 1022 "startup.m"
  MR_Word startup__OverrideComp_4);

#line 710 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_p_0(
#line 710 "startup.m"
  MR_Word startup__CSD_6,
#line 710 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PDOwnArray_0_13,
#line 710 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PDOwnArray_14);

#line 678 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(
#line 678 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_8,
#line 678 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_9,
#line 678 "startup.m"
  MR_Word startup__CSSPtr_10,
#line 678 "startup.m"
  MR_Word startup__CSDPtr_12,
#line 678 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_25,
#line 678 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_26);

#line 632 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_p_0(
#line 632 "startup.m"
  MR_Word startup__InitDeep_6,
#line 632 "startup.m"
  MR_Word startup__PD_8,
#line 632 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_18,
#line 632 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_19);

#line 617 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_p_0(
#line 617 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_7,
#line 617 "startup.m"
  MR_Word startup__CSSPtr_8,
#line 617 "startup.m"
  MR_Word startup__CSDPtr_10,
#line 617 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_12,
#line 617 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_13);

#line 577 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_p_0(
#line 577 "startup.m"
  MR_Word startup__InitDeep_6,
#line 577 "startup.m"
  MR_Word startup__PD_8,
#line 577 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_15,
#line 577 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_16);

#line 1076 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__gather_call_site_csdptrs__1076__1_1_p_0(
#line 1076 "startup.m"
  MR_Word startup__HeadVar__1_18);

#line 501 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_csd_containers_2__501__1_2_p_0(
#line 501 "startup.m"
  MR_Word startup__CallerPDPtr0_14,
#line 501 "startup.m"
  MR_Word startup__HeadVar__2_22);

#line 460 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__460__1_2_p_0(
#line 460 "startup.m"
  MR_Integer startup__SlotNum0_13,
#line 460 "startup.m"
  MR_Integer startup__HeadVar__2_27);

#line 458 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__458__1_2_p_0(
#line 458 "startup.m"
  MR_Word startup__PSPtr0_12,
#line 458 "startup.m"
  MR_Word startup__HeadVar__2_23);

#line 1105 "startup.m"
static void MR_CALL 
startup__maybe_report_msg_4_p_0(
#line 1105 "startup.m"
  MR_Word startup__HeadVar__1_1,
#line 1105 "startup.m"
  MR_String startup__Msg_2);

#line 1092 "startup.m"
static void MR_CALL 
startup__maybe_report_stats_3_p_0(
#line 1092 "startup.m"
  MR_Word startup__HeadVar__1_1);

#line 1076 "startup.m"
static MR_bool MR_CALL 
startup__gather_call_site_csdptrs_5_p_0_1(
#line 1076 "startup.m"
  MR_Box startup__closure_arg,
#line 1076 "startup.m"
  MR_Box startup__wrapper_arg_1);

#line 1058 "startup.m"
static void MR_CALL 
startup__gather_call_site_csdptrs_5_p_0(
#line 1058 "startup.m"
  MR_Word startup__Slot_6,
#line 1058 "startup.m"
  MR_Word startup__CSDPtrs0_7,
#line 1058 "startup.m"
  MR_Word * startup__CSDPtrs1_8,
#line 1058 "startup.m"
  MR_Word startup__IsZeroed0_9,
#line 1058 "startup.m"
  MR_Word * startup__IsZeroed_10);

#line 1053 "startup.m"
static void MR_CALL 
startup__flat_call_sites_3_p_0_1(
#line 1053 "startup.m"
  MR_Box startup__closure_arg,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 1053 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 1053 "startup.m"
  MR_Box * startup__wrapper_arg_5);

#line 1040 "startup.m"
static void MR_CALL 
startup__flat_call_sites_3_p_0(
#line 1040 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_4,
#line 1040 "startup.m"
  MR_Word startup__PDPtr_5,
#line 1040 "startup.m"
  MR_Word * startup__CSDPtrs_6);

#line 1027 "startup.m"
static MR_Word MR_CALL 
startup__add_to_override_3_f_0(
#line 1027 "startup.m"
  MR_Word startup__STATE_VARIABLE_CompTable_0_10,
#line 1027 "startup.m"
  MR_Word startup__PSPtr_6,
#line 1027 "startup.m"
  MR_Word startup__PDTotal_7);

#line 1022 "startup.m"
static MR_Word MR_CALL 
startup__select_override_comp_2_f_0(
#line 1022 "startup.m"
  MR_Word startup__OverrideComp_4,
#line 1022 "startup.m"
  MR_Word startup__HeadVar__2_5);

#line 1007 "startup.m"
static MR_Box MR_CALL 
startup__add_comp_tables_2_f_0_1(
#line 1007 "startup.m"
  MR_Box startup__closure_arg,
#line 1007 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1007 "startup.m"
  MR_Box startup__wrapper_arg_2);

#line 998 "startup.m"
static MR_Word MR_CALL 
startup__add_comp_tables_2_f_0(
#line 998 "startup.m"
  MR_Word startup__CompTableA_4,
#line 998 "startup.m"
  MR_Word startup__CompTableB_5);

#line 1007 "startup.m"
static MR_Box MR_CALL 
startup__propagate_to_call_site_7_p_0_1(
#line 1007 "startup.m"
  MR_Box startup__closure_arg,
#line 1007 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1007 "startup.m"
  MR_Box startup__wrapper_arg_2);

#line 973 "startup.m"
static void MR_CALL 
startup__propagate_to_call_site_7_p_0(
#line 973 "startup.m"
  MR_Integer startup__CliqueNumber_8,
#line 973 "startup.m"
  MR_Word startup__PDPtr_9,
#line 973 "startup.m"
  MR_Word startup__CSDPtr_10,
#line 973 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_23,
#line 973 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_24,
#line 973 "startup.m"
  MR_Word startup__STATE_VARIABLE_PDCompTable_0_25,
#line 973 "startup.m"
  MR_Word * startup__STATE_VARIABLE_PDCompTable_26);

#line 947 "startup.m"
static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0_1(
#line 947 "startup.m"
  MR_Box startup__closure_arg,
#line 947 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 947 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 947 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 947 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 947 "startup.m"
  MR_Box * startup__wrapper_arg_5);

#line 939 "startup.m"
static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0(
#line 939 "startup.m"
  MR_Integer startup__CliqueNumber_10,
#line 939 "startup.m"
  MR_Word startup__ParentCSDPtr_11,
#line 939 "startup.m"
  MR_Word startup__PDPtr_12,
#line 939 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_26,
#line 939 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_27,
#line 939 "startup.m"
  MR_Word startup__STATE_VARIABLE_SumTable_0_28,
#line 939 "startup.m"
  MR_Word * startup__STATE_VARIABLE_SumTable_29,
#line 939 "startup.m"
  MR_Word startup__STATE_VARIABLE_OverrideTable_0_30,
#line 939 "startup.m"
  MR_Word * startup__STATE_VARIABLE_OverrideTable_31);

#line 1019 "startup.m"
static MR_Box MR_CALL 
startup__propagate_to_clique_4_p_0_2(
#line 1019 "startup.m"
  MR_Box startup__closure_arg,
#line 1019 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1019 "startup.m"
  MR_Box startup__wrapper_arg_2);

#line 925 "startup.m"
static void MR_CALL 
startup__propagate_to_clique_4_p_0_1(
#line 925 "startup.m"
  MR_Box startup__closure_arg,
#line 925 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 925 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 925 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 925 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 925 "startup.m"
  MR_Box * startup__wrapper_arg_5,
#line 925 "startup.m"
  MR_Box startup__wrapper_arg_6,
#line 925 "startup.m"
  MR_Box * startup__wrapper_arg_7);

#line 920 "startup.m"
static void MR_CALL 
startup__propagate_to_clique_4_p_0(
#line 920 "startup.m"
  MR_Integer startup__CliqueNumber_5,
#line 920 "startup.m"
  MR_Word startup__Members_6,
#line 920 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_16,
#line 920 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_17);

#line 908 "startup.m"
static void MR_CALL 
startup__accumulate_ps_costs_6_p_0(
#line 908 "startup.m"
  MR_Word startup__Deep_7,
#line 908 "startup.m"
  MR_Word startup__PSPtr_8,
#line 908 "startup.m"
  MR_Word startup__Own0_9,
#line 908 "startup.m"
  MR_Word * startup__Own_10,
#line 908 "startup.m"
  MR_Word startup__Desc0_11,
#line 908 "startup.m"
  MR_Word * startup__Desc_12);

#line 891 "startup.m"
static void MR_CALL 
startup__summarize_proc_static_coverage_4_p_0(
#line 891 "startup.m"
  MR_Integer startup__Index_5,
#line 891 "startup.m"
  MR_Word startup__PS_6,
#line 891 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CoverageArray_0_11,
#line 891 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CoverageArray_12);

#line 885 "startup.m"
static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0_1(
#line 885 "startup.m"
  MR_Box startup__closure_arg,
#line 885 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 885 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 885 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 885 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 881 "startup.m"
static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0(
#line 881 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_6,
#line 881 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_7);

#line 876 "startup.m"
static void MR_CALL 
startup__summarize_module_costs_2_f_0_1(
#line 876 "startup.m"
  MR_Box startup__closure_arg,
#line 876 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 876 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 876 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 876 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 876 "startup.m"
  MR_Box * startup__wrapper_arg_5);

#line 872 "startup.m"
static MR_Word MR_CALL 
startup__summarize_module_costs_2_f_0(
#line 872 "startup.m"
  MR_Word startup__Deep_4,
#line 872 "startup.m"
  MR_Word startup__ModuleData0_5);

#line 869 "startup.m"
static MR_Box MR_CALL 
startup__summarize_modules_2_p_0_1(
#line 869 "startup.m"
  MR_Box startup__closure_arg,
#line 869 "startup.m"
  MR_Box startup__wrapper_arg_1);

#line 864 "startup.m"
static void MR_CALL 
startup__summarize_modules_2_p_0(
#line 864 "startup.m"
  MR_Word startup__Deep0_3,
#line 864 "startup.m"
  MR_Word * startup__Deep_4);

#line 829 "startup.m"
static void MR_CALL 
startup__summarize_call_site_dynamic_10_p_0(
#line 829 "startup.m"
  MR_ArrayPtr startup__CallSiteStaticMap_11,
#line 829 "startup.m"
  MR_ArrayPtr startup__CallSiteStatics_12,
#line 829 "startup.m"
  MR_ArrayPtr startup__CSDDescs_13,
#line 829 "startup.m"
  MR_ArrayPtr startup__CSDCompTableArray_14,
#line 829 "startup.m"
  MR_Integer startup__CSDI_15,
#line 829 "startup.m"
  MR_Word startup__CSD_16,
#line 829 "startup.m"
  MR_ArrayPtr startup__CSSOwnArray0_17,
#line 829 "startup.m"
  MR_ArrayPtr * startup__CSSOwnArray_18,
#line 829 "startup.m"
  MR_ArrayPtr startup__CSSDescArray0_19,
#line 829 "startup.m"
  MR_ArrayPtr * startup__CSSDescArray_20);

#line 819 "startup.m"
static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0_1(
#line 819 "startup.m"
  MR_Box startup__closure_arg,
#line 819 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 819 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 819 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 819 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 819 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 819 "startup.m"
  MR_Box * startup__wrapper_arg_6);

#line 814 "startup.m"
static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0(
#line 814 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_8,
#line 814 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_9);

#line 785 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamic_with_coverage_11_p_0(
#line 785 "startup.m"
  MR_ArrayPtr startup__PDOwnArray_12,
#line 785 "startup.m"
  MR_ArrayPtr startup__PDDescArray_13,
#line 785 "startup.m"
  MR_ArrayPtr startup__PDCompTableArray_14,
#line 785 "startup.m"
  MR_Integer startup__PDI_15,
#line 785 "startup.m"
  MR_Word startup__PD_16,
#line 785 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PSOwnArray_0_24,
#line 785 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PSOwnArray_25,
#line 785 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PSDescArray_0_26,
#line 785 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PSDescArray_27,
#line 785 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CoverageArray_0_28,
#line 785 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CoverageArray_29);

#line 774 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0_1(
#line 774 "startup.m"
  MR_Box startup__closure_arg,
#line 774 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 774 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 774 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 774 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 774 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 774 "startup.m"
  MR_Box * startup__wrapper_arg_6,
#line 774 "startup.m"
  MR_Box startup__wrapper_arg_7,
#line 774 "startup.m"
  MR_Box * startup__wrapper_arg_8);

#line 768 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0(
#line 768 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_8,
#line 768 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_9);

#line 742 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamic_9_p_0(
#line 742 "startup.m"
  MR_ArrayPtr startup__PDOwnArray_10,
#line 742 "startup.m"
  MR_ArrayPtr startup__PDDescArray_11,
#line 742 "startup.m"
  MR_ArrayPtr startup__PDCompTableArray_12,
#line 742 "startup.m"
  MR_Integer startup__PDI_13,
#line 742 "startup.m"
  MR_Word startup__PD_14,
#line 742 "startup.m"
  MR_ArrayPtr startup__PSOwnArray0_15,
#line 742 "startup.m"
  MR_ArrayPtr * startup__PSOwnArray_16,
#line 742 "startup.m"
  MR_ArrayPtr startup__PSDescArray0_17,
#line 742 "startup.m"
  MR_ArrayPtr * startup__PSDescArray_18);

#line 732 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0_1(
#line 732 "startup.m"
  MR_Box startup__closure_arg,
#line 732 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 732 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 732 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 732 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 732 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 732 "startup.m"
  MR_Box * startup__wrapper_arg_6);

#line 727 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0(
#line 727 "startup.m"
  MR_Word startup__Deep0_3,
#line 727 "startup.m"
  MR_Word * startup__Deep_4);

#line 710 "startup.m"
static void MR_CALL 
startup__sum_call_sites_in_proc_dynamic_4_p_0(
#line 710 "startup.m"
  MR_Integer startup__HeadVar__1_5,
#line 710 "startup.m"
  MR_Word startup__CSD_6,
#line 710 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PDOwnArray_0_13,
#line 710 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PDOwnArray_14);

#line 678 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_3_7_p_0(
#line 678 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_8,
#line 678 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_9,
#line 678 "startup.m"
  MR_Word startup__CSSPtr_10,
#line 678 "startup.m"
  MR_Integer startup___Dummy_11,
#line 678 "startup.m"
  MR_Word startup__CSDPtr_12,
#line 678 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_25,
#line 678 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_26);

#line 667 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0_1(
#line 667 "startup.m"
  MR_Box startup__closure_arg,
#line 667 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 667 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 667 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 667 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 649 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0(
#line 649 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_8,
#line 649 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_9,
#line 649 "startup.m"
  MR_Integer startup__SlotNum_10,
#line 649 "startup.m"
  MR_ArrayPtr startup__CSSPtrs_11,
#line 649 "startup.m"
  MR_ArrayPtr startup__CSDArraySlots_12,
#line 649 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_19,
#line 649 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_20);

#line 632 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_5_p_0(
#line 632 "startup.m"
  MR_Word startup__InitDeep_6,
#line 632 "startup.m"
  MR_Integer startup___PDI_7,
#line 632 "startup.m"
  MR_Word startup__PD_8,
#line 632 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_18,
#line 632 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_19);

#line 617 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_3_6_p_0(
#line 617 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_7,
#line 617 "startup.m"
  MR_Word startup__CSSPtr_8,
#line 617 "startup.m"
  MR_Integer startup___Dummy_9,
#line 617 "startup.m"
  MR_Word startup__CSDPtr_10,
#line 617 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_12,
#line 617 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_13);

#line 608 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0_1(
#line 608 "startup.m"
  MR_Box startup__closure_arg,
#line 608 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 608 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 608 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 608 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 591 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0(
#line 591 "startup.m"
  MR_Integer startup__SlotNum_7,
#line 591 "startup.m"
  MR_ArrayPtr startup__Deep_8,
#line 591 "startup.m"
  MR_ArrayPtr startup__CSSPtrs_9,
#line 591 "startup.m"
  MR_ArrayPtr startup__CSDArraySlots_10,
#line 591 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_17,
#line 591 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_18);

#line 577 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_5_p_0(
#line 577 "startup.m"
  MR_Word startup__InitDeep_6,
#line 577 "startup.m"
  MR_Integer startup___PDI_7,
#line 577 "startup.m"
  MR_Word startup__PD_8,
#line 577 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_15,
#line 577 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_16);

#line 560 "startup.m"
static void MR_CALL 
startup__construct_proc_callers_5_p_0(
#line 560 "startup.m"
  MR_Word startup__InitDeep_6,
#line 560 "startup.m"
  MR_Integer startup__CSDI_7,
#line 560 "startup.m"
  MR_Word startup__CSD_8,
#line 560 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_ProcCallers_0_15,
#line 560 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_ProcCallers_16);

#line 528 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_2_8_p_0(
#line 528 "startup.m"
  MR_Word startup__InitDeep_9,
#line 528 "startup.m"
  MR_ArrayPtr startup__CliqueIndex_10,
#line 528 "startup.m"
  MR_Word startup__ParentCliquePtr_11,
#line 528 "startup.m"
  MR_Word startup__CSDPtr_12,
#line 528 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueParents_0_21,
#line 528 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueParents_22,
#line 528 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueMaybeChildren_0_23,
#line 528 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueMaybeChildren_24);

#line 521 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_8_p_0_2(
#line 521 "startup.m"
  MR_Box startup__closure_arg,
#line 521 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 521 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 521 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 521 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 521 "startup.m"
  MR_Box * startup__wrapper_arg_5);

#line 1053 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_8_p_0_1(
#line 1053 "startup.m"
  MR_Box startup__closure_arg,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 1053 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 1053 "startup.m"
  MR_Box * startup__wrapper_arg_5);

#line 509 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_8_p_0(
#line 509 "startup.m"
  MR_Word startup__InitDeep_9,
#line 509 "startup.m"
  MR_ArrayPtr startup__CliqueIndex_10,
#line 509 "startup.m"
  MR_Integer startup__PDI_11,
#line 509 "startup.m"
  MR_Word startup__CliquePtr_12,
#line 509 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueParents_0_16,
#line 509 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueParents_17,
#line 509 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueMaybeChildren_0_18,
#line 509 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueMaybeChildren_19);

#line 501 "startup.m"
static MR_bool MR_CALL 
startup__record_csd_containers_2_4_p_0_1(
#line 501 "startup.m"
  MR_Box startup__closure_arg);

#line 492 "startup.m"
static void MR_CALL 
startup__record_csd_containers_2_4_p_0(
#line 492 "startup.m"
  MR_Word startup__PDPtr_1,
#line 492 "startup.m"
  MR_Word startup__HeadVar__2_2,
#line 492 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0_3,
#line 492 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteDynamics_4);

#line 1053 "startup.m"
static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0_1(
#line 1053 "startup.m"
  MR_Box startup__closure_arg,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 1053 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 1053 "startup.m"
  MR_Box * startup__wrapper_arg_5);

#line 472 "startup.m"
static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0(
#line 472 "startup.m"
  MR_Integer startup__PDI_7,
#line 472 "startup.m"
  MR_Word startup__PD_8,
#line 472 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0_18,
#line 472 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteDynamics_19,
#line 472 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_ProcStatics_0_20,
#line 472 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_ProcStatics_21);

#line 460 "startup.m"
static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_2(
#line 460 "startup.m"
  MR_Box startup__closure_arg);

#line 458 "startup.m"
static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_1(
#line 458 "startup.m"
  MR_Box startup__closure_arg);

#line 447 "startup.m"
static void MR_CALL 
startup__record_css_containers_2_5_p_0(
#line 447 "startup.m"
  MR_Integer startup__SlotNum_6,
#line 447 "startup.m"
  MR_Word startup__PSPtr_7,
#line 447 "startup.m"
  MR_ArrayPtr startup__CSSPtrs_8,
#line 447 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0_18,
#line 447 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStatics_19);

#line 429 "startup.m"
static void MR_CALL 
startup__record_css_containers_module_procs_6_p_0(
#line 429 "startup.m"
  MR_Integer startup__PSI_7,
#line 429 "startup.m"
  MR_Word startup__PS_8,
#line 429 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0_16,
#line 429 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStatics_17,
#line 429 "startup.m"
  MR_Word startup__STATE_VARIABLE_ModuleProcs_0_18,
#line 429 "startup.m"
  MR_Word * startup__STATE_VARIABLE_ModuleProcs_19);

#line 387 "startup.m"
static void MR_CALL 
startup__ensure_module_has_module_data_3_p_0(
#line 387 "startup.m"
  MR_String startup__Module_4,
#line 387 "startup.m"
  MR_Word startup__STATE_VARIABLE_ModuleDataMap_0_8,
#line 387 "startup.m"
  MR_Word * startup__STATE_VARIABLE_ModuleDataMap_9);

#line 382 "startup.m"
static MR_Word MR_CALL 
startup__initialize_module_data_1_f_0(
#line 382 "startup.m"
  MR_Word startup__PSPtrs_3);

#line 368 "startup.m"
static MR_String MR_CALL 
startup__contour_file_name_1_f_0(
#line 368 "startup.m"
  MR_String startup__DataFileName_3);

#line 324 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_10(
#line 324 "startup.m"
  MR_Box startup__closure_arg,
#line 324 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 324 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 324 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 324 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 294 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_9(
#line 294 "startup.m"
  MR_Box startup__closure_arg,
#line 294 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 294 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 294 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 294 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 243 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_8(
#line 243 "startup.m"
  MR_Box startup__closure_arg,
#line 243 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 243 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 243 "startup.m"
  MR_Box * startup__wrapper_arg_3);

#line 218 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_7(
#line 218 "startup.m"
  MR_Box startup__closure_arg,
#line 218 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 218 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 218 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 218 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 209 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_6(
#line 209 "startup.m"
  MR_Box startup__closure_arg,
#line 209 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 209 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 209 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 209 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 200 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_5(
#line 200 "startup.m"
  MR_Box startup__closure_arg,
#line 200 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 200 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 200 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 200 "startup.m"
  MR_Box * startup__wrapper_arg_4);

#line 188 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_4(
#line 188 "startup.m"
  MR_Box startup__closure_arg,
#line 188 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 188 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 188 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 188 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 188 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 188 "startup.m"
  MR_Box * startup__wrapper_arg_6);

#line 127 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_3(
#line 127 "startup.m"
  MR_Box startup__closure_arg,
#line 127 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 127 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 127 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 127 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 127 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 127 "startup.m"
  MR_Box * startup__wrapper_arg_6);

#line 120 "startup.m"
static MR_Box MR_CALL 
startup__startup_11_p_0_2(
#line 120 "startup.m"
  MR_Box startup__closure_arg,
#line 120 "startup.m"
  MR_Box startup__wrapper_arg_1);

#line 118 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_1(
#line 118 "startup.m"
  MR_Box startup__closure_arg,
#line 118 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 118 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 118 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 118 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 118 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 118 "startup.m"
  MR_Box * startup__wrapper_arg_6);

#line 105 "startup.m"
static void MR_CALL 
startup__startup_11_p_0(
#line 105 "startup.m"
  MR_String startup__Machine_12,
#line 105 "startup.m"
  MR_String startup__ScriptName_13,
#line 105 "startup.m"
  MR_String startup__DataFileName_14,
#line 105 "startup.m"
  MR_Word startup__Canonical_15,
#line 105 "startup.m"
  MR_Word startup__MaybeOutputStream_16,
#line 105 "startup.m"
  MR_Word startup__DumpStages_17,
#line 105 "startup.m"
  MR_Word startup__DumpOptions_18,
#line 105 "startup.m"
  MR_Word startup__InitDeep0_19,
#line 105 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_93);

#line 96 "startup.m"
static MR_String MR_CALL 
startup__make_progrep_filename_1_f_0(
#line 96 "startup.m"
  MR_String startup__DataFileName_3);


static /* final */ const MR_Box startup_scalar_common_1[18][2];

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




static /* final */ const MR_Box startup_scalar_common_1[18][2] = {
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
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_static_coverage_info_0))
  },
  /* row 17 */
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "profile.mh"
#include "profile.mh"
#include "array.mh"
#include "array.mh"
#include "read_profile.mh"
#include "read_profile.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1847 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_0
  }
};

#line 1855 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 1863 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &startup__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 1872 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0
  }
};

#line 1880 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_0
  }
};

#line 1888 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_0
  }
};

#line 1896 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 1904 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1912 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 1920 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0
  }
};

#line 1928 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1936 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1944 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_static_ptr_0
  }
};

#line 1952 "startup.c"
static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1961 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 1969 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_module_data_0
  }
};

#line 1978 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_own_prof_info_0
  }
};

#line 1986 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 1994 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0
  }
};

#line 2002 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_0
  }
};

#line 2010 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 2018 "startup.c"
static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_TypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 2027 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 2035 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2043 "startup.c"
static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &startup__array__ti_array_1builtin__type_ctor_info_int_0
  }
};

#line 2051 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &startup__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0
  }
};

#line 2059 "startup.c"
static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_static_ptr_0,
    (MR_PseudoTypeInfo) &measurements__measurements__type_ctor_info_inherit_prof_info_0
  }
};

#line 398 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(
#line 398 "startup.m"
  MR_Word startup__V_47_47,
#line 398 "startup.m"
  MR_Word startup__V_48_48,
#line 398 "startup.m"
  MR_String startup__BaseName_7,
#line 398 "startup.m"
  MR_Word startup__DumpStages_8,
#line 398 "startup.m"
  MR_Integer startup__ThisStageNum_9)
#line 398 "startup.m"
{
#line 401 "startup.m"
  {
#line 401 "startup.m"
    MR_bool startup__succeeded;
#line 401 "startup.m"
    MR_String startup__ThisStage_12;

#line 402 "startup.m"
    {
#line 402 "startup.m"
      mercury__string__int_to_string_2_p_0(startup__ThisStageNum_9, &startup__ThisStage_12);
    }
#line 405 "startup.m"
    {
#line 405 "startup.m"
      startup__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "all")), startup__DumpStages_8);
    }
#line 406 "startup.m"
    if (!(startup__succeeded))
#line 407 "startup.m"
      {
#line 407 "startup.m"
        {
#line 407 "startup.m"
          startup__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (startup__ThisStage_12)), startup__DumpStages_8);
        }
#line 407 "startup.m"
      }
#line 423 "startup.m"
    if (startup__succeeded)
#line 410 "startup.m"
      {
#line 410 "startup.m"
        MR_String startup__FileName_13;
#line 410 "startup.m"
        MR_Word startup__OpenRes_14;
#line 410 "startup.m"
        MR_Word startup__V_23_23;
#line 410 "startup.m"
        MR_Word startup__V_24_24;
#line 410 "startup.m"
        MR_Word startup__V_26_26;

#line 410 "startup.m"
        {
#line 410 "startup.m"
          startup__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_26_26, 0) = ((MR_Box) (startup__ThisStage_12));
#line 410 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "startup.m"
        }
#line 410 "startup.m"
        {
#line 410 "startup.m"
          startup__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_24_24, 0) = ((MR_Box) ((MR_String) ".deepdump."));
#line 410 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_24_24, 1) = ((MR_Box) (startup__V_26_26));
#line 410 "startup.m"
        }
#line 410 "startup.m"
        {
#line 410 "startup.m"
          startup__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_23_23, 0) = ((MR_Box) (startup__BaseName_7));
#line 410 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_23_23, 1) = ((MR_Box) (startup__V_24_24));
#line 410 "startup.m"
        }
#line 410 "startup.m"
        {
#line 410 "startup.m"
          mercury__string__append_list_2_p_0(startup__V_23_23, &startup__FileName_13);
        }
#line 411 "startup.m"
        {
#line 411 "startup.m"
          mercury__io__open_output_4_p_0(startup__FileName_13, &startup__OpenRes_14);
        }
#line 418 "startup.m"
        if (((MR_tag((MR_Word) startup__OpenRes_14)) == (MR_mktag((MR_Integer) 1))))
#line 419 "startup.m"
          {
#line 419 "startup.m"
            MR_Word startup__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__OpenRes_14, (MR_Integer) 0)));
#line 419 "startup.m"
            MR_String startup__Msg_19;
#line 419 "startup.m"
            MR_String startup__V_43_43;
#line 419 "startup.m"
            MR_String startup__V_45_45;
#line 419 "startup.m"
            MR_String startup__V_46_46;

#line 420 "startup.m"
            {
#line 420 "startup.m"
              mercury__io__error_message_2_p_0(startup__Error_18, &startup__Msg_19);
            }
#line 2186 "startup.c"
            {
#line 2188 "startup.c"
              startup__V_43_43 = mercury__string__f_43_43_2_f_0(startup__Msg_19, (MR_String) "\n");
            }
#line 2191 "startup.c"
            {
#line 2193 "startup.c"
              startup__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) ": ", startup__V_43_43);
            }
#line 2196 "startup.c"
            {
#line 2198 "startup.c"
              startup__V_46_46 = mercury__string__f_43_43_2_f_0(startup__FileName_13, startup__V_45_45);
            }
#line 2201 "startup.c"
            {
#line 2203 "startup.c"
              mercury__io__write_string_3_p_0(startup__V_46_46);
#line 2205 "startup.c"
              return;
            }
#line 419 "startup.m"
          }
#line 418 "startup.m"
        else
#line 413 "startup.m"
          {
#line 413 "startup.m"
            MR_Word startup__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__OpenRes_14, (MR_Integer) 0)));
#line 413 "startup.m"
            MR_Word startup__CurStream_16;
#line 417 "startup.m"
            MR_Word startup__V_17_17;

#line 414 "startup.m"
            {
#line 414 "startup.m"
              mercury__io__set_output_stream_4_p_0(startup__FileStream_15, &startup__CurStream_16);
            }
#line 415 "startup.m"
            {
#line 415 "startup.m"
              dump__dump_initial_deep_4_p_0(startup__V_47_47, startup__V_48_48);
            }
#line 416 "startup.m"
            {
#line 416 "startup.m"
              mercury__io__close_output_3_p_0(startup__FileStream_15);
            }
#line 417 "startup.m"
            {
#line 417 "startup.m"
              mercury__io__set_output_stream_4_p_0(startup__CurStream_16, &startup__V_17_17);
            }
#line 413 "startup.m"
          }
#line 410 "startup.m"
      }
#line 423 "startup.m"
    else
#line 421 "startup.m"
      {
#line 421 "startup.m"
      }
#line 401 "startup.m"
  }
#line 398 "startup.m"
}

#line 398 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(
#line 398 "startup.m"
  MR_Word startup__V_47_47,
#line 398 "startup.m"
  MR_Word startup__V_48_48,
#line 398 "startup.m"
  MR_String startup__BaseName_7,
#line 398 "startup.m"
  MR_Word startup__DumpStages_8,
#line 398 "startup.m"
  MR_Integer startup__ThisStageNum_9)
#line 398 "startup.m"
{
#line 401 "startup.m"
  {
#line 401 "startup.m"
    MR_bool startup__succeeded;
#line 401 "startup.m"
    MR_String startup__ThisStage_12;

#line 402 "startup.m"
    {
#line 402 "startup.m"
      mercury__string__int_to_string_2_p_0(startup__ThisStageNum_9, &startup__ThisStage_12);
    }
#line 405 "startup.m"
    {
#line 405 "startup.m"
      startup__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "all")), startup__DumpStages_8);
    }
#line 406 "startup.m"
    if (!(startup__succeeded))
#line 407 "startup.m"
      {
#line 407 "startup.m"
        {
#line 407 "startup.m"
          startup__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (startup__ThisStage_12)), startup__DumpStages_8);
        }
#line 407 "startup.m"
      }
#line 423 "startup.m"
    if (startup__succeeded)
#line 410 "startup.m"
      {
#line 410 "startup.m"
        MR_String startup__FileName_13;
#line 410 "startup.m"
        MR_Word startup__OpenRes_14;
#line 410 "startup.m"
        MR_Word startup__V_23_23;
#line 410 "startup.m"
        MR_Word startup__V_24_24;
#line 410 "startup.m"
        MR_Word startup__V_26_26;

#line 410 "startup.m"
        {
#line 410 "startup.m"
          startup__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_26_26, 0) = ((MR_Box) (startup__ThisStage_12));
#line 410 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "startup.m"
        }
#line 410 "startup.m"
        {
#line 410 "startup.m"
          startup__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_24_24, 0) = ((MR_Box) ((MR_String) ".deepdump."));
#line 410 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_24_24, 1) = ((MR_Box) (startup__V_26_26));
#line 410 "startup.m"
        }
#line 410 "startup.m"
        {
#line 410 "startup.m"
          startup__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_23_23, 0) = ((MR_Box) (startup__BaseName_7));
#line 410 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_23_23, 1) = ((MR_Box) (startup__V_24_24));
#line 410 "startup.m"
        }
#line 410 "startup.m"
        {
#line 410 "startup.m"
          mercury__string__append_list_2_p_0(startup__V_23_23, &startup__FileName_13);
        }
#line 411 "startup.m"
        {
#line 411 "startup.m"
          mercury__io__open_output_4_p_0(startup__FileName_13, &startup__OpenRes_14);
        }
#line 418 "startup.m"
        if (((MR_tag((MR_Word) startup__OpenRes_14)) == (MR_mktag((MR_Integer) 1))))
#line 419 "startup.m"
          {
#line 419 "startup.m"
            MR_Word startup__Error_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__OpenRes_14, (MR_Integer) 0)));
#line 419 "startup.m"
            MR_String startup__Msg_19;
#line 419 "startup.m"
            MR_String startup__V_43_43;
#line 419 "startup.m"
            MR_String startup__V_45_45;
#line 419 "startup.m"
            MR_String startup__V_46_46;

#line 420 "startup.m"
            {
#line 420 "startup.m"
              mercury__io__error_message_2_p_0(startup__Error_18, &startup__Msg_19);
            }
#line 2374 "startup.c"
            {
#line 2376 "startup.c"
              startup__V_43_43 = mercury__string__f_43_43_2_f_0(startup__Msg_19, (MR_String) "\n");
            }
#line 2379 "startup.c"
            {
#line 2381 "startup.c"
              startup__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) ": ", startup__V_43_43);
            }
#line 2384 "startup.c"
            {
#line 2386 "startup.c"
              startup__V_46_46 = mercury__string__f_43_43_2_f_0(startup__FileName_13, startup__V_45_45);
            }
#line 2389 "startup.c"
            {
#line 2391 "startup.c"
              mercury__io__write_string_3_p_0(startup__V_46_46);
#line 2393 "startup.c"
              return;
            }
#line 419 "startup.m"
          }
#line 418 "startup.m"
        else
#line 413 "startup.m"
          {
#line 413 "startup.m"
            MR_Word startup__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__OpenRes_14, (MR_Integer) 0)));
#line 413 "startup.m"
            MR_Word startup__CurStream_16;
#line 417 "startup.m"
            MR_Word startup__V_17_17;

#line 414 "startup.m"
            {
#line 414 "startup.m"
              mercury__io__set_output_stream_4_p_0(startup__FileStream_15, &startup__CurStream_16);
            }
#line 415 "startup.m"
            {
#line 415 "startup.m"
              dump__dump_deep_4_p_0(startup__V_47_47, startup__V_48_48);
            }
#line 416 "startup.m"
            {
#line 416 "startup.m"
              mercury__io__close_output_3_p_0(startup__FileStream_15);
            }
#line 417 "startup.m"
            {
#line 417 "startup.m"
              mercury__io__set_output_stream_4_p_0(startup__CurStream_16, &startup__V_17_17);
            }
#line 413 "startup.m"
          }
#line 410 "startup.m"
      }
#line 423 "startup.m"
    else
#line 421 "startup.m"
      {
#line 421 "startup.m"
      }
#line 401 "startup.m"
  }
#line 398 "startup.m"
}

#line 1022 "startup.m"
static MR_Word MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_f_0(
#line 1022 "startup.m"
  MR_Word startup__OverrideComp_4)
#line 1022 "startup.m"
{
#line 1025 "startup.m"
  {
#line 1025 "startup.m"
    MR_bool startup__succeeded;
#line 1025 "startup.m"
    MR_Word startup__OverrideComp_3 = startup__OverrideComp_4;

#line 1025 "startup.m"
    return startup__OverrideComp_3;
#line 1025 "startup.m"
  }
#line 1022 "startup.m"
}

#line 710 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_p_0(
#line 710 "startup.m"
  MR_Word startup__CSD_6,
#line 710 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PDOwnArray_0_13,
#line 710 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PDOwnArray_14)
#line 710 "startup.m"
{
#line 713 "startup.m"
  {
#line 713 "startup.m"
    MR_bool startup__succeeded;
#line 713 "startup.m"
    MR_Word startup__CalleeOwn_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_6, (MR_Integer) 2)));
#line 713 "startup.m"
    MR_Word startup__PDPtr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_6, (MR_Integer) 1)));
#line 713 "startup.m"
    MR_Integer startup__PDI_10 = (MR_Integer) startup__PDPtr_9;
#line 714 "startup.m"
    MR_Word startup__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_6, (MR_Integer) 0)));

#line 717 "startup.m"
    startup__succeeded = (startup__PDI_10 > (MR_Integer) 0);
#line 721 "startup.m"
    if (startup__succeeded)
#line 718 "startup.m"
      {
#line 718 "startup.m"
        MR_Word startup__TypeCtorInfo_22_22 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 718 "startup.m"
        MR_Word startup__ProcOwn0_11;
#line 718 "startup.m"
        MR_Word startup__ProcOwn_12;
#line 718 "startup.m"
        MR_Box startup__conv0_ProcOwn0_11;
#line 720 "startup.m"
        MR_ArrayPtr startup__conv1_STATE_VARIABLE_PDOwnArray_14;

#line 718 "startup.m"
        {
#line 718 "startup.m"
          mercury__array__lookup_3_p_0(startup__TypeCtorInfo_22_22, (MR_ArrayPtr) startup__STATE_VARIABLE_PDOwnArray_0_13, startup__PDI_10, &startup__conv0_ProcOwn0_11);
        }
#line 718 "startup.m"
        startup__ProcOwn0_11 = ((MR_Word) startup__conv0_ProcOwn0_11);
#line 719 "startup.m"
        {
#line 719 "startup.m"
          startup__ProcOwn_12 = measurements__add_own_to_own_2_f_0(startup__CalleeOwn_8, startup__ProcOwn0_11);
        }
#line 720 "startup.m"
        {
#line 720 "startup.m"
          mercury__array__set_4_p_0(startup__TypeCtorInfo_22_22, startup__PDI_10, ((MR_Box) (startup__ProcOwn_12)), (MR_ArrayPtr) startup__STATE_VARIABLE_PDOwnArray_0_13, &startup__conv1_STATE_VARIABLE_PDOwnArray_14);
        }
#line 720 "startup.m"
        *startup__STATE_VARIABLE_PDOwnArray_14 = (MR_ArrayPtr) startup__conv1_STATE_VARIABLE_PDOwnArray_14;
#line 718 "startup.m"
      }
#line 721 "startup.m"
    else
#line 722 "startup.m"
      {
#line 722 "startup.m"
        {
#line 722 "startup.m"
          mercury__require__error_1_p_0((MR_String) "sum_call_sites_in_proc_dynamic: invalid pdptr");
#line 722 "startup.m"
          return;
        }
#line 722 "startup.m"
      }
#line 713 "startup.m"
  }
#line 710 "startup.m"
}

#line 678 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(
#line 678 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_8,
#line 678 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_9,
#line 678 "startup.m"
  MR_Word startup__CSSPtr_10,
#line 678 "startup.m"
  MR_Word startup__CSDPtr_12,
#line 678 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_25,
#line 678 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_26)
#line 678 "startup.m"
{
#line 685 "startup.m"
  {
#line 685 "startup.m"
    MR_bool startup__succeeded;
#line 685 "startup.m"
    MR_Integer startup__CSDI_14 = (MR_Integer) startup__CSDPtr_12;

#line 687 "startup.m"
    startup__succeeded = (startup__CSDI_14 > (MR_Integer) 0);
#line 704 "startup.m"
    if (startup__succeeded)
#line 688 "startup.m"
      {
#line 688 "startup.m"
        MR_Word startup__TypeInfo_37_37;
#line 688 "startup.m"
        MR_Word startup__CSD_15;
#line 688 "startup.m"
        MR_Word startup__PDPtr_16;
#line 688 "startup.m"
        MR_Integer startup__PDI_17;
#line 688 "startup.m"
        MR_Word startup__PD_18;
#line 688 "startup.m"
        MR_Word startup__PSPtr_19;
#line 688 "startup.m"
        MR_Integer startup__CSSI_20;
#line 688 "startup.m"
        MR_Word startup__CallMap0_21;
#line 688 "startup.m"
        MR_Word startup__CallMap_24;
#line 688 "startup.m"
        MR_Box startup__conv0_CSD_15;
#line 689 "startup.m"
        MR_Word startup__V_31_31;
#line 689 "startup.m"
        MR_Word startup__V_32_32;
#line 691 "startup.m"
        MR_Box startup__conv1_PD_18;
#line 692 "startup.m"
        MR_ArrayPtr startup__V_33_33;
#line 692 "startup.m"
        MR_Word startup__V_34_34;
#line 695 "startup.m"
        MR_Box startup__conv2_CallMap0_21;
#line 699 "startup.m"
        MR_Word startup__CallList0_22;
#line 696 "startup.m"
        MR_Box startup__conv3_CallList0_22;
#line 703 "startup.m"
        MR_ArrayPtr startup__conv4_STATE_VARIABLE_CallSiteCalls_26;

#line 688 "startup.m"
        {
#line 688 "startup.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) startup__CallSiteDynamics_8, startup__CSDI_14, &startup__conv0_CSD_15);
        }
#line 688 "startup.m"
        startup__CSD_15 = ((MR_Word) startup__conv0_CSD_15);
#line 689 "startup.m"
        startup__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_15, (MR_Integer) 0)));
#line 689 "startup.m"
        startup__PDPtr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_15, (MR_Integer) 1)));
#line 689 "startup.m"
        startup__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_15, (MR_Integer) 2)));
#line 690 "startup.m"
        startup__PDI_17 = (MR_Integer) startup__PDPtr_16;
#line 691 "startup.m"
        {
#line 691 "startup.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) startup__ProcDynamics_9, startup__PDI_17, &startup__conv1_PD_18);
        }
#line 691 "startup.m"
        startup__PD_18 = ((MR_Word) startup__conv1_PD_18);
#line 692 "startup.m"
        startup__PSPtr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_18, (MR_Integer) 0)));
#line 692 "startup.m"
        startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_18, (MR_Integer) 1)));
#line 692 "startup.m"
        startup__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_18, (MR_Integer) 2)));
#line 694 "startup.m"
        startup__CSSI_20 = (MR_Integer) startup__CSSPtr_10;
#line 2644 "startup.c"
        startup__TypeInfo_37_37 = (MR_Word) &startup_scalar_common_2[1];
#line 695 "startup.m"
        {
#line 695 "startup.m"
          mercury__array__lookup_3_p_0(startup__TypeInfo_37_37, (MR_ArrayPtr) startup__STATE_VARIABLE_CallSiteCalls_0_25, startup__CSSI_20, &startup__conv2_CallMap0_21);
        }
#line 695 "startup.m"
        startup__CallMap0_21 = ((MR_Word) startup__conv2_CallMap0_21);
#line 696 "startup.m"
        {
#line 696 "startup.m"
          startup__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_1[8], startup__CallMap0_21, ((MR_Box) (startup__PSPtr_19)), &startup__conv3_CallList0_22);
        }
#line 696 "startup.m"
        if (startup__succeeded)
#line 696 "startup.m"
          {
#line 696 "startup.m"
            startup__CallList0_22 = ((MR_Word) startup__conv3_CallList0_22);
#line 696 "startup.m"
            startup__succeeded = MR_TRUE;
#line 696 "startup.m"
          }
#line 699 "startup.m"
        if (startup__succeeded)
#line 697 "startup.m"
          {
#line 697 "startup.m"
            MR_Word startup__CallList_23;

#line 697 "startup.m"
            {
#line 697 "startup.m"
              startup__CallList_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "startup.m"
              MR_hl_field(MR_mktag(1), startup__CallList_23, 0) = ((MR_Box) (startup__CSDPtr_12));
#line 697 "startup.m"
              MR_hl_field(MR_mktag(1), startup__CallList_23, 1) = ((MR_Box) (startup__CallList0_22));
#line 697 "startup.m"
            }
#line 698 "startup.m"
            {
#line 698 "startup.m"
              mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_1[8], ((MR_Box) (startup__PSPtr_19)), ((MR_Box) (startup__CallList_23)), startup__CallMap0_21, &startup__CallMap_24);
            }
#line 697 "startup.m"
          }
#line 699 "startup.m"
        else
#line 700 "startup.m"
          {
#line 700 "startup.m"
            MR_Word startup__CallList_30;

#line 700 "startup.m"
            {
#line 700 "startup.m"
              startup__CallList_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "startup.m"
              MR_hl_field(MR_mktag(1), startup__CallList_30, 0) = ((MR_Box) (startup__CSDPtr_12));
#line 700 "startup.m"
              MR_hl_field(MR_mktag(1), startup__CallList_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "startup.m"
            }
#line 701 "startup.m"
            {
#line 701 "startup.m"
              mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_1[8], ((MR_Box) (startup__PSPtr_19)), ((MR_Box) (startup__CallList_30)), startup__CallMap0_21, &startup__CallMap_24);
            }
#line 700 "startup.m"
          }
#line 703 "startup.m"
        {
#line 703 "startup.m"
          mercury__array__set_4_p_0(startup__TypeInfo_37_37, startup__CSSI_20, ((MR_Box) (startup__CallMap_24)), (MR_ArrayPtr) startup__STATE_VARIABLE_CallSiteCalls_0_25, &startup__conv4_STATE_VARIABLE_CallSiteCalls_26);
        }
#line 703 "startup.m"
        *startup__STATE_VARIABLE_CallSiteCalls_26 = (MR_ArrayPtr) startup__conv4_STATE_VARIABLE_CallSiteCalls_26;
#line 688 "startup.m"
      }
#line 704 "startup.m"
    else
#line 703 "startup.m"
      *startup__STATE_VARIABLE_CallSiteCalls_26 = startup__STATE_VARIABLE_CallSiteCalls_0_25;
#line 685 "startup.m"
  }
#line 678 "startup.m"
}

#line 632 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_p_0(
#line 632 "startup.m"
  MR_Word startup__InitDeep_6,
#line 632 "startup.m"
  MR_Word startup__PD_8,
#line 632 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_18,
#line 632 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_19)
#line 632 "startup.m"
{
#line 637 "startup.m"
  {
#line 637 "startup.m"
    MR_bool startup__succeeded;
#line 637 "startup.m"
    MR_Word startup__PSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 0)));
#line 637 "startup.m"
    MR_ArrayPtr startup__CSDArraySlots_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 1)));
#line 637 "startup.m"
    MR_Integer startup__MaxCS_12;
#line 637 "startup.m"
    MR_Integer startup__PSI_13;
#line 637 "startup.m"
    MR_Word startup__PS_14;
#line 637 "startup.m"
    MR_ArrayPtr startup__CSSPtrs_15;
#line 637 "startup.m"
    MR_ArrayPtr startup__CallSiteDynamics_16;
#line 637 "startup.m"
    MR_ArrayPtr startup__ProcDynamics_17;
#line 637 "startup.m"
    MR_ArrayPtr startup__V_20_20;
#line 638 "startup.m"
    MR_Word startup__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 2)));
#line 642 "startup.m"
    MR_Word startup__V_26_26;
#line 642 "startup.m"
    MR_Word startup__V_27_27;
#line 642 "startup.m"
    MR_ArrayPtr startup__V_28_28;
#line 642 "startup.m"
    MR_ArrayPtr startup__V_29_29;
#line 642 "startup.m"
    MR_ArrayPtr startup__V_30_30;
#line 642 "startup.m"
    MR_Box startup__conv0_PS_14;
#line 643 "startup.m"
    MR_Word startup__V_31_31;
#line 643 "startup.m"
    MR_String startup__V_32_32;
#line 643 "startup.m"
    MR_String startup__V_33_33;
#line 643 "startup.m"
    MR_String startup__V_34_34;
#line 643 "startup.m"
    MR_String startup__V_35_35;
#line 643 "startup.m"
    MR_String startup__V_36_36;
#line 643 "startup.m"
    MR_Integer startup__V_37_37;
#line 643 "startup.m"
    MR_Word startup__V_38_38;
#line 643 "startup.m"
    MR_ArrayPtr startup__V_39_39;
#line 643 "startup.m"
    MR_Word startup__V_40_40;
#line 643 "startup.m"
    MR_Word startup__V_41_41;
#line 644 "startup.m"
    MR_Word startup__V_42_42;
#line 644 "startup.m"
    MR_Word startup__V_43_43;
#line 644 "startup.m"
    MR_ArrayPtr startup__V_45_45;
#line 644 "startup.m"
    MR_ArrayPtr startup__V_46_46;

#line 640 "startup.m"
    {
#line 640 "startup.m"
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) startup__CSDArraySlots_11, &startup__MaxCS_12);
    }
#line 641 "startup.m"
    startup__PSI_13 = (MR_Integer) startup__PSPtr_10;
#line 642 "startup.m"
    startup__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
#line 642 "startup.m"
    startup__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
#line 642 "startup.m"
    startup__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
#line 642 "startup.m"
    startup__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
#line 642 "startup.m"
    startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
#line 642 "startup.m"
    startup__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
#line 642 "startup.m"
    {
#line 642 "startup.m"
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) startup__V_20_20, startup__PSI_13, &startup__conv0_PS_14);
    }
#line 642 "startup.m"
    startup__PS_14 = ((MR_Word) startup__conv0_PS_14);
#line 643 "startup.m"
    startup__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 0)));
#line 643 "startup.m"
    startup__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 1)));
#line 643 "startup.m"
    startup__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 2)));
#line 643 "startup.m"
    startup__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 3)));
#line 643 "startup.m"
    startup__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 4)));
#line 643 "startup.m"
    startup__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 5)));
#line 643 "startup.m"
    startup__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 6)));
#line 643 "startup.m"
    startup__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 7)));
#line 643 "startup.m"
    startup__CSSPtrs_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 8)));
#line 643 "startup.m"
    startup__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 9)));
#line 643 "startup.m"
    startup__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 10)));
#line 643 "startup.m"
    startup__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_14, (MR_Integer) 11)));
#line 644 "startup.m"
    startup__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
#line 644 "startup.m"
    startup__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
#line 644 "startup.m"
    startup__CallSiteDynamics_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
#line 644 "startup.m"
    startup__ProcDynamics_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
#line 644 "startup.m"
    startup__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
#line 644 "startup.m"
    startup__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
#line 646 "startup.m"
    {
#line 646 "startup.m"
      startup__construct_call_site_calls_2_7_p_0(startup__CallSiteDynamics_16, startup__ProcDynamics_17, startup__MaxCS_12, startup__CSSPtrs_15, startup__CSDArraySlots_11, startup__STATE_VARIABLE_CallSiteCalls_0_18, startup__STATE_VARIABLE_CallSiteCalls_19);
#line 646 "startup.m"
      return;
    }
#line 637 "startup.m"
  }
#line 632 "startup.m"
}

#line 617 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_p_0(
#line 617 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_7,
#line 617 "startup.m"
  MR_Word startup__CSSPtr_8,
#line 617 "startup.m"
  MR_Word startup__CSDPtr_10,
#line 617 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_12,
#line 617 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_13)
#line 617 "startup.m"
{
#line 626 "startup.m"
  {
#line 626 "startup.m"
    MR_bool startup__succeeded;

#line 624 "startup.m"
    {
#line 624 "startup.m"
      startup__succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(startup__CallSiteDynamics_7, startup__CSDPtr_10);
    }
#line 626 "startup.m"
    if (startup__succeeded)
#line 625 "startup.m"
      {
#line 625 "startup.m"
        profile__update_call_site_static_map_4_p_0(startup__CSDPtr_10, startup__CSSPtr_8, startup__STATE_VARIABLE_CallSiteStaticMap_0_12, startup__STATE_VARIABLE_CallSiteStaticMap_13);
#line 625 "startup.m"
        return;
      }
#line 626 "startup.m"
    else
#line 625 "startup.m"
      *startup__STATE_VARIABLE_CallSiteStaticMap_13 = startup__STATE_VARIABLE_CallSiteStaticMap_0_12;
#line 626 "startup.m"
  }
#line 617 "startup.m"
}

#line 577 "startup.m"
static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_p_0(
#line 577 "startup.m"
  MR_Word startup__InitDeep_6,
#line 577 "startup.m"
  MR_Word startup__PD_8,
#line 577 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_15,
#line 577 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_16)
#line 577 "startup.m"
{
#line 581 "startup.m"
  {
#line 581 "startup.m"
    MR_bool startup__succeeded;
#line 581 "startup.m"
    MR_Word startup__PSPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 0)));
#line 581 "startup.m"
    MR_ArrayPtr startup__CSDArraySlots_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 1)));
#line 581 "startup.m"
    MR_Word startup__PS_12;
#line 581 "startup.m"
    MR_ArrayPtr startup__CSSPtrs_13;
#line 581 "startup.m"
    MR_Integer startup__MaxCS_14;
#line 581 "startup.m"
    MR_ArrayPtr startup__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
#line 581 "startup.m"
    MR_ArrayPtr startup__V_18_18;
#line 582 "startup.m"
    MR_Word startup__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 2)));
#line 584 "startup.m"
    MR_Word startup__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
#line 584 "startup.m"
    MR_Word startup__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
#line 584 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
#line 584 "startup.m"
    MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
#line 584 "startup.m"
    MR_ArrayPtr startup__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
#line 585 "startup.m"
    MR_Word startup__V_29_29;
#line 585 "startup.m"
    MR_String startup__V_30_30;
#line 585 "startup.m"
    MR_String startup__V_31_31;
#line 585 "startup.m"
    MR_String startup__V_32_32;
#line 585 "startup.m"
    MR_String startup__V_33_33;
#line 585 "startup.m"
    MR_String startup__V_34_34;
#line 585 "startup.m"
    MR_Integer startup__V_35_35;
#line 585 "startup.m"
    MR_Word startup__V_36_36;
#line 585 "startup.m"
    MR_ArrayPtr startup__V_37_37;
#line 585 "startup.m"
    MR_Word startup__V_38_38;
#line 585 "startup.m"
    MR_Word startup__V_39_39;
#line 587 "startup.m"
    MR_Word startup__V_40_40;
#line 587 "startup.m"
    MR_Word startup__V_41_41;
#line 587 "startup.m"
    MR_ArrayPtr startup__V_42_42;
#line 587 "startup.m"
    MR_ArrayPtr startup__V_43_43;
#line 587 "startup.m"
    MR_ArrayPtr startup__V_44_44;

#line 584 "startup.m"
    {
#line 584 "startup.m"
      profile__lookup_proc_statics_3_p_0(startup__V_17_17, startup__PSPtr_10, &startup__PS_12);
    }
#line 585 "startup.m"
    startup__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 0)));
#line 585 "startup.m"
    startup__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 1)));
#line 585 "startup.m"
    startup__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 2)));
#line 585 "startup.m"
    startup__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 3)));
#line 585 "startup.m"
    startup__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 4)));
#line 585 "startup.m"
    startup__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 5)));
#line 585 "startup.m"
    startup__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 6)));
#line 585 "startup.m"
    startup__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 7)));
#line 585 "startup.m"
    startup__CSSPtrs_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 8)));
#line 585 "startup.m"
    startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 9)));
#line 585 "startup.m"
    startup__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 10)));
#line 585 "startup.m"
    startup__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_12, (MR_Integer) 11)));
#line 586 "startup.m"
    {
#line 586 "startup.m"
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) startup__CSDArraySlots_11, &startup__MaxCS_14);
    }
#line 587 "startup.m"
    startup__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
#line 587 "startup.m"
    startup__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
#line 587 "startup.m"
    startup__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
#line 587 "startup.m"
    startup__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
#line 587 "startup.m"
    startup__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
#line 587 "startup.m"
    startup__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
#line 587 "startup.m"
    {
#line 587 "startup.m"
      startup__construct_call_site_caller_2_6_p_0(startup__MaxCS_14, startup__V_18_18, startup__CSSPtrs_13, startup__CSDArraySlots_11, startup__STATE_VARIABLE_CallSiteStaticMap_0_15, startup__STATE_VARIABLE_CallSiteStaticMap_16);
#line 587 "startup.m"
      return;
    }
#line 581 "startup.m"
  }
#line 577 "startup.m"
}

#line 1076 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__gather_call_site_csdptrs__1076__1_1_p_0(
#line 1076 "startup.m"
  MR_Word startup__HeadVar__1_18)
#line 1076 "startup.m"
{
#line 1076 "startup.m"
  {
#line 1076 "startup.m"
    MR_bool startup__succeeded;
#line 1076 "startup.m"
    MR_Integer startup__CSDI_24 = (MR_Integer) startup__HeadVar__1_18;

#line 1078 "startup.m"
    startup__succeeded = (startup__CSDI_24 > (MR_Integer) 0);
#line 1076 "startup.m"
    return startup__succeeded;
#line 1076 "startup.m"
  }
#line 1076 "startup.m"
}

#line 501 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_csd_containers_2__501__1_2_p_0(
#line 501 "startup.m"
  MR_Word startup__CallerPDPtr0_14,
#line 501 "startup.m"
  MR_Word startup__HeadVar__2_22)
#line 501 "startup.m"
{
#line 501 "startup.m"
  {
#line 501 "startup.m"
    MR_bool startup__succeeded;
#line 501 "startup.m"
    MR_Integer startup__V_27_27 = (MR_Integer) startup__CallerPDPtr0_14;
#line 501 "startup.m"
    MR_Integer startup__V_28_28 = (MR_Integer) startup__HeadVar__2_22;

#line 501 "startup.m"
    startup__succeeded = (startup__V_27_27 == startup__V_28_28);
#line 501 "startup.m"
    return startup__succeeded;
#line 501 "startup.m"
  }
#line 501 "startup.m"
}

#line 460 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__460__1_2_p_0(
#line 460 "startup.m"
  MR_Integer startup__SlotNum0_13,
#line 460 "startup.m"
  MR_Integer startup__HeadVar__2_27)
#line 460 "startup.m"
{
#line 460 "startup.m"
  {
#line 460 "startup.m"
    MR_bool startup__succeeded = (startup__SlotNum0_13 == startup__HeadVar__2_27);

#line 460 "startup.m"
    return startup__succeeded;
#line 460 "startup.m"
  }
#line 460 "startup.m"
}

#line 458 "startup.m"
static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__458__1_2_p_0(
#line 458 "startup.m"
  MR_Word startup__PSPtr0_12,
#line 458 "startup.m"
  MR_Word startup__HeadVar__2_23)
#line 458 "startup.m"
{
#line 458 "startup.m"
  {
#line 458 "startup.m"
    MR_bool startup__succeeded;
#line 458 "startup.m"
    MR_Integer startup__V_35_35 = (MR_Integer) startup__PSPtr0_12;
#line 458 "startup.m"
    MR_Integer startup__V_36_36 = (MR_Integer) startup__HeadVar__2_23;

#line 458 "startup.m"
    startup__succeeded = (startup__V_35_35 == startup__V_36_36);
#line 458 "startup.m"
    return startup__succeeded;
#line 458 "startup.m"
  }
#line 458 "startup.m"
}

#line 1105 "startup.m"
static void MR_CALL 
startup__maybe_report_msg_4_p_0(
#line 1105 "startup.m"
  MR_Word startup__HeadVar__1_1,
#line 1105 "startup.m"
  MR_String startup__Msg_2)
#line 1105 "startup.m"
{
#line 1108 "startup.m"
  {
#line 1108 "startup.m"
    MR_bool startup__succeeded;

#line 1108 "startup.m"
    if ((startup__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1111 "startup.m"
      {
#line 1111 "startup.m"
      }
#line 1108 "startup.m"
    else
#line 1108 "startup.m"
      {
#line 1108 "startup.m"
        MR_Word startup__OutputStream_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__HeadVar__1_1, (MR_Integer) 0)));

#line 1109 "startup.m"
        {
#line 1109 "startup.m"
          mercury__io__write_string_4_p_0(startup__OutputStream_5, startup__Msg_2);
        }
#line 1110 "startup.m"
        {
#line 1110 "startup.m"
          mercury__io__flush_output_3_p_0(startup__OutputStream_5);
#line 1110 "startup.m"
          return;
        }
#line 1108 "startup.m"
      }
#line 1108 "startup.m"
  }
#line 1105 "startup.m"
}

#line 1092 "startup.m"
static void MR_CALL 
startup__maybe_report_stats_3_p_0(
#line 1092 "startup.m"
  MR_Word startup__HeadVar__1_1)
#line 1092 "startup.m"
{
#line 1101 "startup.m"
  {
#line 1101 "startup.m"
    MR_bool startup__succeeded;

#line 1101 "startup.m"
    if ((startup__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1103 "startup.m"
      {
#line 1103 "startup.m"
      }
#line 1101 "startup.m"
    else
#line 1101 "startup.m"
      {
#line 1101 "startup.m"
      }
#line 1101 "startup.m"
  }
#line 1092 "startup.m"
}

#line 1076 "startup.m"
static MR_bool MR_CALL 
startup__gather_call_site_csdptrs_5_p_0_1(
#line 1076 "startup.m"
  MR_Box startup__closure_arg,
#line 1076 "startup.m"
  MR_Box startup__wrapper_arg_1)
#line 1076 "startup.m"
{
#line 1076 "startup.m"
  {
#line 1076 "startup.m"
    MR_bool startup__succeeded;
#line 1076 "startup.m"
    MR_Box startup__closure = startup__closure_arg;

#line 1076 "startup.m"
    {
#line 1076 "startup.m"
      return startup__succeeded = startup__IntroducedFrom__pred__gather_call_site_csdptrs__1076__1_1_p_0(((MR_Word) startup__wrapper_arg_1));
    }
#line 1076 "startup.m"
    return startup__succeeded;
#line 1076 "startup.m"
  }
#line 1076 "startup.m"
}

#line 1058 "startup.m"
static void MR_CALL 
startup__gather_call_site_csdptrs_5_p_0(
#line 1058 "startup.m"
  MR_Word startup__Slot_6,
#line 1058 "startup.m"
  MR_Word startup__CSDPtrs0_7,
#line 1058 "startup.m"
  MR_Word * startup__CSDPtrs1_8,
#line 1058 "startup.m"
  MR_Word startup__IsZeroed0_9,
#line 1058 "startup.m"
  MR_Word * startup__IsZeroed_10)
#line 1058 "startup.m"
{
#line 1065 "startup.m"
  {
#line 1065 "startup.m"
    MR_bool startup__succeeded;

#line 1065 "startup.m"
    if (((MR_tag((MR_Word) startup__Slot_6)) == (MR_mktag((MR_Integer) 1))))
#line 1074 "startup.m"
      {
#line 1074 "startup.m"
        MR_Word startup__TypeCtorInfo_28_28 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 1074 "startup.m"
        MR_Word startup__IsZeroed1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__Slot_6, (MR_Integer) 0)));
#line 1074 "startup.m"
        MR_ArrayPtr startup__PtrArray_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__Slot_6, (MR_Integer) 1)));
#line 1074 "startup.m"
        MR_Word startup__PtrList0_15;
#line 1074 "startup.m"
        MR_Word startup__PtrList1_16;

#line 1075 "startup.m"
        {
#line 1075 "startup.m"
          mercury__array__to_list_2_p_0(startup__TypeCtorInfo_28_28, (MR_ArrayPtr) startup__PtrArray_14, &startup__PtrList0_15);
        }
#line 1076 "startup.m"
        {
#line 1076 "startup.m"
          mercury__list__filter_3_p_0(startup__TypeCtorInfo_28_28, (MR_Word) &startup_scalar_common_2[17], startup__PtrList0_15, &startup__PtrList1_16);
        }
#line 1080 "startup.m"
        {
#line 1080 "startup.m"
          MR_Word base;
#line 1080 "startup.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "startup.m"
          *startup__CSDPtrs1_8 = base;
#line 1080 "startup.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (startup__PtrList1_16));
#line 1080 "startup.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (startup__CSDPtrs0_7));
#line 1080 "startup.m"
        }
#line 1084 "startup.m"
        if ((startup__IsZeroed1_13 == (MR_Integer) 1))
#line 1086 "startup.m"
          *startup__IsZeroed_10 = startup__IsZeroed0_9;
#line 1084 "startup.m"
        else
#line 1083 "startup.m"
          *startup__IsZeroed_10 = (MR_Integer) 0;
#line 1074 "startup.m"
      }
#line 1065 "startup.m"
    else
#line 1065 "startup.m"
      {
#line 1065 "startup.m"
        MR_Word startup__CSDPtr_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Slot_6, (MR_Integer) 0)));
#line 1065 "startup.m"
        MR_Integer startup__CSDI_12 = (MR_Integer) startup__CSDPtr_11;

#line 1067 "startup.m"
        startup__succeeded = (startup__CSDI_12 > (MR_Integer) 0);
#line 1069 "startup.m"
        if (startup__succeeded)
#line 1068 "startup.m"
          {
#line 1068 "startup.m"
            MR_Word startup__V_21_21;

#line 1068 "startup.m"
            {
#line 1068 "startup.m"
              startup__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "startup.m"
              MR_hl_field(MR_mktag(1), startup__V_21_21, 0) = ((MR_Box) (startup__CSDPtr_11));
#line 1068 "startup.m"
              MR_hl_field(MR_mktag(1), startup__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1068 "startup.m"
            }
#line 1068 "startup.m"
            {
#line 1068 "startup.m"
              MR_Word base;
#line 1068 "startup.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "startup.m"
              *startup__CSDPtrs1_8 = base;
#line 1068 "startup.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (startup__V_21_21));
#line 1068 "startup.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (startup__CSDPtrs0_7));
#line 1068 "startup.m"
            }
#line 1068 "startup.m"
          }
#line 1069 "startup.m"
        else
#line 1070 "startup.m"
          *startup__CSDPtrs1_8 = startup__CSDPtrs0_7;
#line 1072 "startup.m"
        *startup__IsZeroed_10 = startup__IsZeroed0_9;
#line 1065 "startup.m"
      }
#line 1065 "startup.m"
  }
#line 1058 "startup.m"
}

#line 1053 "startup.m"
static void MR_CALL 
startup__flat_call_sites_3_p_0_1(
#line 1053 "startup.m"
  MR_Box startup__closure_arg,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 1053 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 1053 "startup.m"
  MR_Box * startup__wrapper_arg_5)
#line 1053 "startup.m"
{
#line 1053 "startup.m"
  {
#line 1053 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 1053 "startup.m"
    MR_Word startup__conv1_CSDPtrs1_8;
#line 1053 "startup.m"
    MR_Word startup__conv0_IsZeroed_10;

#line 1053 "startup.m"
    {
#line 1053 "startup.m"
      startup__gather_call_site_csdptrs_5_p_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_CSDPtrs1_8, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_IsZeroed_10);
    }
#line 1053 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_CSDPtrs1_8));
#line 1053 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_IsZeroed_10));
#line 1053 "startup.m"
  }
#line 1053 "startup.m"
}

#line 1040 "startup.m"
static void MR_CALL 
startup__flat_call_sites_3_p_0(
#line 1040 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_4,
#line 1040 "startup.m"
  MR_Word startup__PDPtr_5,
#line 1040 "startup.m"
  MR_Word * startup__CSDPtrs_6)
#line 1040 "startup.m"
{
#line 1043 "startup.m"
  {
#line 1043 "startup.m"
    MR_bool startup__succeeded;
#line 1043 "startup.m"
    MR_Word startup__TypeCtorInfo_13_21;
#line 1043 "startup.m"
    MR_Word startup__PD_7;
#line 1043 "startup.m"
    MR_ArrayPtr startup__CallSiteArray_8;
#line 1043 "startup.m"
    MR_Word startup__CallSites_15;
#line 1043 "startup.m"
    MR_Word startup__CSDPtrsList0_16;
#line 1043 "startup.m"
    MR_Word startup__CSDPtrsList_17;
#line 1045 "startup.m"
    MR_Word startup__V_10_10;
#line 1045 "startup.m"
    MR_Word startup__V_11_11;
#line 1053 "startup.m"
    MR_Word startup__V_9_9;
#line 1053 "startup.m"
    MR_Box startup__conv3_CSDPtrsList0_16;
#line 1053 "startup.m"
    MR_Box startup__conv2_V_9_9;

#line 1044 "startup.m"
    {
#line 1044 "startup.m"
      profile__lookup_proc_dynamics_3_p_0(startup__ProcDynamics_4, startup__PDPtr_5, &startup__PD_7);
    }
#line 1045 "startup.m"
    startup__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_7, (MR_Integer) 0)));
#line 1045 "startup.m"
    startup__CallSiteArray_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_7, (MR_Integer) 1)));
#line 1045 "startup.m"
    startup__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_7, (MR_Integer) 2)));
#line 3481 "startup.c"
    startup__TypeCtorInfo_13_21 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
#line 1052 "startup.m"
    {
#line 1052 "startup.m"
      mercury__array__to_list_2_p_0(startup__TypeCtorInfo_13_21, (MR_ArrayPtr) startup__CallSiteArray_8, &startup__CallSites_15);
    }
#line 1053 "startup.m"
    {
#line 1053 "startup.m"
      mercury__list__foldl2_6_p_0(startup__TypeCtorInfo_13_21, (MR_Word) &startup_scalar_common_1[17], (MR_Word) &profile__profile__type_ctor_info_is_zeroed_0, (MR_Word) &startup_scalar_common_2[16], startup__CallSites_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv3_CSDPtrsList0_16, ((MR_Box) ((MR_Integer) 1)), &startup__conv2_V_9_9);
    }
#line 1053 "startup.m"
    startup__CSDPtrsList0_16 = ((MR_Word) startup__conv3_CSDPtrsList0_16);
#line 1053 "startup.m"
    startup__V_9_9 = ((MR_Word) startup__conv2_V_9_9);
#line 1055 "startup.m"
    {
#line 1055 "startup.m"
      mercury__list__reverse_2_p_0((MR_Word) &startup_scalar_common_1[8], startup__CSDPtrsList0_16, &startup__CSDPtrsList_17);
    }
#line 1056 "startup.m"
    {
#line 1056 "startup.m"
      mercury__list__condense_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__CSDPtrsList_17, startup__CSDPtrs_6);
#line 1056 "startup.m"
      return;
    }
#line 1043 "startup.m"
  }
#line 1040 "startup.m"
}

#line 1027 "startup.m"
static MR_Word MR_CALL 
startup__add_to_override_3_f_0(
#line 1027 "startup.m"
  MR_Word startup__STATE_VARIABLE_CompTable_0_10,
#line 1027 "startup.m"
  MR_Word startup__PSPtr_6,
#line 1027 "startup.m"
  MR_Word startup__PDTotal_7)
#line 1027 "startup.m"
{
#line 1034 "startup.m"
  {
#line 1034 "startup.m"
    MR_bool startup__succeeded;
#line 1034 "startup.m"
    MR_Word startup__STATE_VARIABLE_CompTable_11;
#line 1034 "startup.m"
    MR_Word startup__Comp0_8;
#line 1031 "startup.m"
    MR_Box startup__conv0_Comp0_8;

#line 1031 "startup.m"
    {
#line 1031 "startup.m"
      startup__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__STATE_VARIABLE_CompTable_0_10, ((MR_Box) (startup__PSPtr_6)), &startup__conv0_Comp0_8);
    }
#line 1031 "startup.m"
    if (startup__succeeded)
#line 1031 "startup.m"
      {
#line 1031 "startup.m"
        startup__Comp0_8 = ((MR_Word) startup__conv0_Comp0_8);
#line 1031 "startup.m"
        startup__succeeded = MR_TRUE;
#line 1031 "startup.m"
      }
#line 1034 "startup.m"
    if (startup__succeeded)
#line 1032 "startup.m"
      {
#line 1032 "startup.m"
        MR_Word startup__Comp_9;

#line 1032 "startup.m"
        {
#line 1032 "startup.m"
          startup__Comp_9 = measurements__add_inherit_to_inherit_2_f_0(startup__Comp0_8, startup__PDTotal_7);
        }
#line 1033 "startup.m"
        {
#line 1033 "startup.m"
          mercury__map__det_update_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, ((MR_Box) (startup__PSPtr_6)), ((MR_Box) (startup__Comp_9)), startup__STATE_VARIABLE_CompTable_0_10, &startup__STATE_VARIABLE_CompTable_11);
        }
#line 1032 "startup.m"
      }
#line 1034 "startup.m"
    else
#line 1035 "startup.m"
      {
#line 1035 "startup.m"
        {
#line 1035 "startup.m"
          mercury__map__det_insert_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, ((MR_Box) (startup__PSPtr_6)), ((MR_Box) (startup__PDTotal_7)), startup__STATE_VARIABLE_CompTable_0_10, &startup__STATE_VARIABLE_CompTable_11);
        }
#line 1035 "startup.m"
      }
#line 1034 "startup.m"
    return startup__STATE_VARIABLE_CompTable_11;
#line 1034 "startup.m"
  }
#line 1027 "startup.m"
}

#line 1022 "startup.m"
static MR_Word MR_CALL 
startup__select_override_comp_2_f_0(
#line 1022 "startup.m"
  MR_Word startup__OverrideComp_4,
#line 1022 "startup.m"
  MR_Word startup__HeadVar__2_5)
#line 1022 "startup.m"
{
#line 1025 "startup.m"
  {
#line 1025 "startup.m"
    MR_bool startup__succeeded;
#line 1025 "startup.m"
    MR_Word startup__OverrideComp_3;

#line 1025 "startup.m"
    {
#line 1025 "startup.m"
      return startup__OverrideComp_3 = startup__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_f_0(startup__OverrideComp_4);
    }
#line 1025 "startup.m"
    return startup__OverrideComp_3;
#line 1025 "startup.m"
  }
#line 1022 "startup.m"
}

#line 1007 "startup.m"
static MR_Box MR_CALL 
startup__add_comp_tables_2_f_0_1(
#line 1007 "startup.m"
  MR_Box startup__closure_arg,
#line 1007 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1007 "startup.m"
  MR_Box startup__wrapper_arg_2)
#line 1007 "startup.m"
{
#line 1007 "startup.m"
  {
#line 1007 "startup.m"
    MR_Box startup__wrapper_arg_3;
#line 1007 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 1007 "startup.m"
    MR_Word startup__conv0_HeadVar__3_3;

#line 1007 "startup.m"
    {
#line 1007 "startup.m"
      startup__conv0_HeadVar__3_3 = measurements__add_inherit_to_inherit_2_f_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2));
    }
#line 1007 "startup.m"
    startup__wrapper_arg_3 = ((MR_Box) (startup__conv0_HeadVar__3_3));
#line 1007 "startup.m"
    return startup__wrapper_arg_3;
#line 1007 "startup.m"
  }
#line 1007 "startup.m"
}

#line 998 "startup.m"
static MR_Word MR_CALL 
startup__add_comp_tables_2_f_0(
#line 998 "startup.m"
  MR_Word startup__CompTableA_4,
#line 998 "startup.m"
  MR_Word startup__CompTableB_5)
#line 998 "startup.m"
{
#line 1004 "startup.m"
  {
#line 1004 "startup.m"
    MR_bool startup__succeeded;
#line 1004 "startup.m"
    MR_Word startup__CompTable_6;

#line 1002 "startup.m"
    {
#line 1002 "startup.m"
      startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__CompTableA_4);
    }
#line 1004 "startup.m"
    if (startup__succeeded)
#line 1003 "startup.m"
      startup__CompTable_6 = startup__CompTableB_5;
#line 1004 "startup.m"
    else
#line 1006 "startup.m"
      {
#line 1004 "startup.m"
        {
#line 1004 "startup.m"
          startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__CompTableB_5);
        }
#line 1006 "startup.m"
        if (startup__succeeded)
#line 1005 "startup.m"
          startup__CompTable_6 = startup__CompTableA_4;
#line 1006 "startup.m"
        else
#line 1007 "startup.m"
          {
#line 1007 "startup.m"
            {
#line 1007 "startup.m"
              startup__CompTable_6 = mercury__map__union_3_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_2[15], startup__CompTableA_4, startup__CompTableB_5);
            }
#line 1007 "startup.m"
          }
#line 1006 "startup.m"
      }
#line 1004 "startup.m"
    return startup__CompTable_6;
#line 1004 "startup.m"
  }
#line 998 "startup.m"
}

#line 1007 "startup.m"
static MR_Box MR_CALL 
startup__propagate_to_call_site_7_p_0_1(
#line 1007 "startup.m"
  MR_Box startup__closure_arg,
#line 1007 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1007 "startup.m"
  MR_Box startup__wrapper_arg_2)
#line 1007 "startup.m"
{
#line 1007 "startup.m"
  {
#line 1007 "startup.m"
    MR_Box startup__wrapper_arg_3;
#line 1007 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 1007 "startup.m"
    MR_Word startup__conv0_HeadVar__3_3;

#line 1007 "startup.m"
    {
#line 1007 "startup.m"
      startup__conv0_HeadVar__3_3 = measurements__add_inherit_to_inherit_2_f_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2));
    }
#line 1007 "startup.m"
    startup__wrapper_arg_3 = ((MR_Box) (startup__conv0_HeadVar__3_3));
#line 1007 "startup.m"
    return startup__wrapper_arg_3;
#line 1007 "startup.m"
  }
#line 1007 "startup.m"
}

#line 973 "startup.m"
static void MR_CALL 
startup__propagate_to_call_site_7_p_0(
#line 973 "startup.m"
  MR_Integer startup__CliqueNumber_8,
#line 973 "startup.m"
  MR_Word startup__PDPtr_9,
#line 973 "startup.m"
  MR_Word startup__CSDPtr_10,
#line 973 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_23,
#line 973 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_24,
#line 973 "startup.m"
  MR_Word startup__STATE_VARIABLE_PDCompTable_0_25,
#line 973 "startup.m"
  MR_Word * startup__STATE_VARIABLE_PDCompTable_26)
#line 973 "startup.m"
{
#line 977 "startup.m"
  {
#line 977 "startup.m"
    MR_bool startup__succeeded;
#line 977 "startup.m"
    MR_Word startup__CSD_13;
#line 977 "startup.m"
    MR_Word startup__CalleeOwn_14;
#line 977 "startup.m"
    MR_Word startup__CalleePDPtr_15;
#line 977 "startup.m"
    MR_Word startup__ChildCliquePtr_16;
#line 977 "startup.m"
    MR_Integer startup__ChildCliqueNumber_17;
#line 979 "startup.m"
    MR_Word startup__V_29_29;

#line 978 "startup.m"
    {
#line 978 "startup.m"
      profile__deep_lookup_call_site_dynamics_3_p_0(startup__STATE_VARIABLE_Deep_0_23, startup__CSDPtr_10, &startup__CSD_13);
    }
#line 979 "startup.m"
    startup__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_13, (MR_Integer) 0)));
#line 979 "startup.m"
    startup__CalleePDPtr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_13, (MR_Integer) 1)));
#line 979 "startup.m"
    startup__CalleeOwn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_13, (MR_Integer) 2)));
#line 981 "startup.m"
    {
#line 981 "startup.m"
      profile__deep_lookup_clique_index_3_p_0(startup__STATE_VARIABLE_Deep_0_23, startup__CalleePDPtr_15, &startup__ChildCliquePtr_16);
    }
#line 982 "startup.m"
    startup__ChildCliqueNumber_17 = (MR_Integer) startup__ChildCliquePtr_16;
#line 983 "startup.m"
    startup__succeeded = (startup__ChildCliqueNumber_17 == startup__CliqueNumber_8);
#line 986 "startup.m"
    if (startup__succeeded)
#line 985 "startup.m"
      {
#line 985 "startup.m"
        *startup__STATE_VARIABLE_PDCompTable_26 = startup__STATE_VARIABLE_PDCompTable_0_25;
#line 985 "startup.m"
        *startup__STATE_VARIABLE_Deep_24 = startup__STATE_VARIABLE_Deep_0_23;
#line 985 "startup.m"
      }
#line 986 "startup.m"
    else
#line 987 "startup.m"
      {
#line 987 "startup.m"
        MR_Word startup__ProcDesc0_18;
#line 987 "startup.m"
        MR_Word startup__CalleeDesc_19;
#line 987 "startup.m"
        MR_Word startup__CalleeTotal_20;
#line 987 "startup.m"
        MR_Word startup__ProcDesc_21;
#line 987 "startup.m"
        MR_Word startup__CSDCompTable_22;

#line 987 "startup.m"
        {
#line 987 "startup.m"
          profile__deep_lookup_pd_desc_3_p_0(startup__STATE_VARIABLE_Deep_0_23, startup__PDPtr_9, &startup__ProcDesc0_18);
        }
#line 988 "startup.m"
        {
#line 988 "startup.m"
          profile__deep_lookup_csd_desc_3_p_0(startup__STATE_VARIABLE_Deep_0_23, startup__CSDPtr_10, &startup__CalleeDesc_19);
        }
#line 989 "startup.m"
        {
#line 989 "startup.m"
          startup__CalleeTotal_20 = measurements__add_own_to_inherit_2_f_0(startup__CalleeOwn_14, startup__CalleeDesc_19);
        }
#line 990 "startup.m"
        {
#line 990 "startup.m"
          startup__ProcDesc_21 = measurements__add_inherit_to_inherit_2_f_0(startup__ProcDesc0_18, startup__CalleeTotal_20);
        }
#line 991 "startup.m"
        {
#line 991 "startup.m"
          profile__deep_update_pd_desc_4_p_0(startup__PDPtr_9, startup__ProcDesc_21, startup__STATE_VARIABLE_Deep_0_23, startup__STATE_VARIABLE_Deep_24);
        }
#line 992 "startup.m"
        {
#line 992 "startup.m"
          profile__deep_lookup_csd_comp_table_3_p_0(*startup__STATE_VARIABLE_Deep_24, startup__CSDPtr_10, &startup__CSDCompTable_22);
        }
#line 1002 "startup.m"
        {
#line 1002 "startup.m"
          startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__STATE_VARIABLE_PDCompTable_0_25);
        }
#line 1004 "startup.m"
        if (startup__succeeded)
#line 1003 "startup.m"
          *startup__STATE_VARIABLE_PDCompTable_26 = startup__CSDCompTable_22;
#line 1004 "startup.m"
        else
#line 1006 "startup.m"
          {
#line 1004 "startup.m"
            {
#line 1004 "startup.m"
              startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__CSDCompTable_22);
            }
#line 1006 "startup.m"
            if (startup__succeeded)
#line 1005 "startup.m"
              *startup__STATE_VARIABLE_PDCompTable_26 = startup__STATE_VARIABLE_PDCompTable_0_25;
#line 1006 "startup.m"
            else
#line 1007 "startup.m"
              {
#line 1007 "startup.m"
                {
#line 1007 "startup.m"
                  *startup__STATE_VARIABLE_PDCompTable_26 = mercury__map__union_3_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_2[14], startup__STATE_VARIABLE_PDCompTable_0_25, startup__CSDCompTable_22);
                }
#line 1007 "startup.m"
              }
#line 1006 "startup.m"
          }
#line 987 "startup.m"
      }
#line 977 "startup.m"
  }
#line 973 "startup.m"
}

#line 947 "startup.m"
static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0_1(
#line 947 "startup.m"
  MR_Box startup__closure_arg,
#line 947 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 947 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 947 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 947 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 947 "startup.m"
  MR_Box * startup__wrapper_arg_5)
#line 947 "startup.m"
{
#line 947 "startup.m"
  {
#line 947 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 947 "startup.m"
    MR_Word startup__conv1_STATE_VARIABLE_Deep_24;
#line 947 "startup.m"
    MR_Word startup__conv0_STATE_VARIABLE_PDCompTable_26;

#line 947 "startup.m"
    {
#line 947 "startup.m"
      startup__propagate_to_call_site_7_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_STATE_VARIABLE_Deep_24, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_STATE_VARIABLE_PDCompTable_26);
    }
#line 947 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_STATE_VARIABLE_Deep_24));
#line 947 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_STATE_VARIABLE_PDCompTable_26));
#line 947 "startup.m"
  }
#line 947 "startup.m"
}

#line 939 "startup.m"
static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0(
#line 939 "startup.m"
  MR_Integer startup__CliqueNumber_10,
#line 939 "startup.m"
  MR_Word startup__ParentCSDPtr_11,
#line 939 "startup.m"
  MR_Word startup__PDPtr_12,
#line 939 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_26,
#line 939 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_27,
#line 939 "startup.m"
  MR_Word startup__STATE_VARIABLE_SumTable_0_28,
#line 939 "startup.m"
  MR_Word * startup__STATE_VARIABLE_SumTable_29,
#line 939 "startup.m"
  MR_Word startup__STATE_VARIABLE_OverrideTable_0_30,
#line 939 "startup.m"
  MR_Word * startup__STATE_VARIABLE_OverrideTable_31)
#line 939 "startup.m"
{
#line 945 "startup.m"
  {
#line 945 "startup.m"
    MR_bool startup__succeeded;
#line 945 "startup.m"
    MR_Word startup__CSDPtrs_16;
#line 945 "startup.m"
    MR_Word startup__PDCompTable_17;
#line 945 "startup.m"
    MR_Word startup__ProcDesc_18;
#line 945 "startup.m"
    MR_Word startup__ProcOwn_19;
#line 945 "startup.m"
    MR_Word startup__ProcTotal_20;
#line 945 "startup.m"
    MR_Word startup__PD_21;
#line 945 "startup.m"
    MR_Word startup__PSPtr_22;
#line 945 "startup.m"
    MR_Word startup__PS_23;
#line 945 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 6)));
#line 945 "startup.m"
    MR_Word startup__V_33_33;
#line 945 "startup.m"
    MR_Word startup__STATE_VARIABLE_Deep_34_34;
#line 945 "startup.m"
    MR_Word startup__V_35_35;
#line 945 "startup.m"
    MR_Word startup__STATE_VARIABLE_Deep_36_36;
#line 946 "startup.m"
    MR_Word startup__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 0)));
#line 946 "startup.m"
    MR_String startup__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 1)));
#line 946 "startup.m"
    MR_String startup__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 2)));
#line 946 "startup.m"
    MR_String startup__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 3)));
#line 946 "startup.m"
    MR_Word startup__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 4)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 5)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 7)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 8)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 9)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 10)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 11)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 12)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 13)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 14)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 15)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 16)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 17)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 18)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 19)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 20)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 21)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_62_62 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 22)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_63_63 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 23)));
#line 946 "startup.m"
    MR_ArrayPtr startup__V_64_64 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 24)));
#line 946 "startup.m"
    MR_Word startup__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 25)));
#line 946 "startup.m"
    MR_Word startup__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 26)));
#line 946 "startup.m"
    MR_Word startup__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 27)));
#line 946 "startup.m"
    MR_Word startup__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_26, (MR_Integer) 28)));
#line 947 "startup.m"
    MR_Box startup__conv3_STATE_VARIABLE_Deep_34_34;
#line 947 "startup.m"
    MR_Box startup__conv2_PDCompTable_17;
#line 957 "startup.m"
    MR_ArrayPtr startup__V_69_69;
#line 957 "startup.m"
    MR_Word startup__V_70_70;
#line 959 "startup.m"
    MR_Word startup__V_38_38;
#line 959 "startup.m"
    MR_Word startup__V_71_71;
#line 959 "startup.m"
    MR_String startup__V_72_72;
#line 959 "startup.m"
    MR_String startup__V_73_73;
#line 959 "startup.m"
    MR_String startup__V_74_74;
#line 959 "startup.m"
    MR_String startup__V_75_75;
#line 959 "startup.m"
    MR_String startup__V_76_76;
#line 959 "startup.m"
    MR_Integer startup__V_77_77;
#line 959 "startup.m"
    MR_Word startup__V_78_78;
#line 959 "startup.m"
    MR_ArrayPtr startup__V_79_79;
#line 959 "startup.m"
    MR_ArrayPtr startup__V_80_80;
#line 959 "startup.m"
    MR_Word startup__V_81_81;

#line 946 "startup.m"
    {
#line 946 "startup.m"
      startup__flat_call_sites_3_p_0(startup__V_32_32, startup__PDPtr_12, &startup__CSDPtrs_16);
    }
#line 947 "startup.m"
    {
#line 947 "startup.m"
      startup__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 947 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_33_33, 0) = ((MR_Box) (&startup_scalar_common_9[1]));
#line 947 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_33_33, 1) = ((MR_Box) (startup__propagate_to_proc_dynamic_9_p_0_1));
#line 947 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 947 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_33_33, 3) = ((MR_Box) (startup__CliqueNumber_10));
#line 947 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_33_33, 4) = ((MR_Box) (startup__PDPtr_12));
#line 947 "startup.m"
    }
#line 947 "startup.m"
    {
#line 947 "startup.m"
      startup__V_35_35 = mercury__map__init_0_f_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0);
    }
#line 947 "startup.m"
    {
#line 947 "startup.m"
      mercury__list__foldl2_6_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &profile__profile__type_ctor_info_deep_0, (MR_Word) &startup_scalar_common_2[3], startup__V_33_33, startup__CSDPtrs_16, ((MR_Box) (startup__STATE_VARIABLE_Deep_0_26)), &startup__conv3_STATE_VARIABLE_Deep_34_34, ((MR_Box) (startup__V_35_35)), &startup__conv2_PDCompTable_17);
    }
#line 947 "startup.m"
    startup__STATE_VARIABLE_Deep_34_34 = ((MR_Word) startup__conv3_STATE_VARIABLE_Deep_34_34);
#line 947 "startup.m"
    startup__PDCompTable_17 = ((MR_Word) startup__conv2_PDCompTable_17);
#line 949 "startup.m"
    {
#line 949 "startup.m"
      profile__deep_update_pd_comp_table_4_p_0(startup__PDPtr_12, startup__PDCompTable_17, startup__STATE_VARIABLE_Deep_34_34, &startup__STATE_VARIABLE_Deep_36_36);
    }
#line 951 "startup.m"
    {
#line 951 "startup.m"
      profile__deep_lookup_pd_desc_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__PDPtr_12, &startup__ProcDesc_18);
    }
#line 952 "startup.m"
    {
#line 952 "startup.m"
      profile__deep_lookup_pd_own_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__PDPtr_12, &startup__ProcOwn_19);
    }
#line 953 "startup.m"
    {
#line 953 "startup.m"
      startup__ProcTotal_20 = measurements__add_own_to_inherit_2_f_0(startup__ProcOwn_19, startup__ProcDesc_18);
    }
#line 955 "startup.m"
    {
#line 955 "startup.m"
      *startup__STATE_VARIABLE_SumTable_29 = startup__add_comp_tables_2_f_0(startup__STATE_VARIABLE_SumTable_0_28, startup__PDCompTable_17);
    }
#line 956 "startup.m"
    {
#line 956 "startup.m"
      profile__deep_lookup_proc_dynamics_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__PDPtr_12, &startup__PD_21);
    }
#line 957 "startup.m"
    startup__PSPtr_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_21, (MR_Integer) 0)));
#line 957 "startup.m"
    startup__V_69_69 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_21, (MR_Integer) 1)));
#line 957 "startup.m"
    startup__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_21, (MR_Integer) 2)));
#line 958 "startup.m"
    {
#line 958 "startup.m"
      profile__deep_lookup_proc_statics_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__PSPtr_22, &startup__PS_23);
    }
#line 959 "startup.m"
    startup__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 0)));
#line 959 "startup.m"
    startup__V_72_72 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 1)));
#line 959 "startup.m"
    startup__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 2)));
#line 959 "startup.m"
    startup__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 3)));
#line 959 "startup.m"
    startup__V_75_75 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 4)));
#line 959 "startup.m"
    startup__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 5)));
#line 959 "startup.m"
    startup__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 6)));
#line 959 "startup.m"
    startup__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 7)));
#line 959 "startup.m"
    startup__V_79_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 8)));
#line 959 "startup.m"
    startup__V_80_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 9)));
#line 959 "startup.m"
    startup__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 10)));
#line 959 "startup.m"
    startup__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_23, (MR_Integer) 11)));
#line 959 "startup.m"
    startup__succeeded = (startup__V_38_38 == (MR_Integer) 0);
#line 961 "startup.m"
    if (startup__succeeded)
#line 960 "startup.m"
      {
#line 960 "startup.m"
        *startup__STATE_VARIABLE_OverrideTable_31 = startup__add_to_override_3_f_0(startup__STATE_VARIABLE_OverrideTable_0_30, startup__PSPtr_22, startup__ProcTotal_20);
      }
#line 961 "startup.m"
    else
#line 960 "startup.m"
      *startup__STATE_VARIABLE_OverrideTable_31 = startup__STATE_VARIABLE_OverrideTable_0_30;
#line 965 "startup.m"
    {
#line 965 "startup.m"
      startup__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__ParentCSDPtr_11);
    }
#line 969 "startup.m"
    if (startup__succeeded)
#line 966 "startup.m"
      {
#line 966 "startup.m"
        MR_Word startup__ParentDesc0_24;
#line 966 "startup.m"
        MR_Word startup__ParentDesc_25;

#line 966 "startup.m"
        {
#line 966 "startup.m"
          profile__deep_lookup_csd_desc_3_p_0(startup__STATE_VARIABLE_Deep_36_36, startup__ParentCSDPtr_11, &startup__ParentDesc0_24);
        }
#line 967 "startup.m"
        {
#line 967 "startup.m"
          startup__ParentDesc_25 = measurements__add_inherit_to_inherit_2_f_0(startup__ParentDesc0_24, startup__ProcTotal_20);
        }
#line 968 "startup.m"
        {
#line 968 "startup.m"
          profile__deep_update_csd_desc_4_p_0(startup__ParentCSDPtr_11, startup__ParentDesc_25, startup__STATE_VARIABLE_Deep_36_36, startup__STATE_VARIABLE_Deep_27);
#line 968 "startup.m"
          return;
        }
#line 966 "startup.m"
      }
#line 969 "startup.m"
    else
#line 968 "startup.m"
      *startup__STATE_VARIABLE_Deep_27 = startup__STATE_VARIABLE_Deep_36_36;
#line 945 "startup.m"
  }
#line 939 "startup.m"
}

#line 1019 "startup.m"
static MR_Box MR_CALL 
startup__propagate_to_clique_4_p_0_2(
#line 1019 "startup.m"
  MR_Box startup__closure_arg,
#line 1019 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1019 "startup.m"
  MR_Box startup__wrapper_arg_2)
#line 1019 "startup.m"
{
#line 1019 "startup.m"
  {
#line 1019 "startup.m"
    MR_Box startup__wrapper_arg_3;
#line 1019 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 1019 "startup.m"
    MR_Word startup__conv7_OverrideComp_3;

#line 1019 "startup.m"
    {
#line 1019 "startup.m"
      startup__conv7_OverrideComp_3 = startup__select_override_comp_2_f_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2));
    }
#line 1019 "startup.m"
    startup__wrapper_arg_3 = ((MR_Box) (startup__conv7_OverrideComp_3));
#line 1019 "startup.m"
    return startup__wrapper_arg_3;
#line 1019 "startup.m"
  }
#line 1019 "startup.m"
}

#line 925 "startup.m"
static void MR_CALL 
startup__propagate_to_clique_4_p_0_1(
#line 925 "startup.m"
  MR_Box startup__closure_arg,
#line 925 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 925 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 925 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 925 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 925 "startup.m"
  MR_Box * startup__wrapper_arg_5,
#line 925 "startup.m"
  MR_Box startup__wrapper_arg_6,
#line 925 "startup.m"
  MR_Box * startup__wrapper_arg_7)
#line 925 "startup.m"
{
#line 925 "startup.m"
  {
#line 925 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 925 "startup.m"
    MR_Word startup__conv3_STATE_VARIABLE_Deep_27;
#line 925 "startup.m"
    MR_Word startup__conv2_STATE_VARIABLE_SumTable_29;
#line 925 "startup.m"
    MR_Word startup__conv1_STATE_VARIABLE_OverrideTable_31;

#line 925 "startup.m"
    {
#line 925 "startup.m"
      startup__propagate_to_proc_dynamic_9_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv3_STATE_VARIABLE_Deep_27, ((MR_Word) startup__wrapper_arg_4), &startup__conv2_STATE_VARIABLE_SumTable_29, ((MR_Word) startup__wrapper_arg_6), &startup__conv1_STATE_VARIABLE_OverrideTable_31);
    }
#line 925 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv3_STATE_VARIABLE_Deep_27));
#line 925 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv2_STATE_VARIABLE_SumTable_29));
#line 925 "startup.m"
    *startup__wrapper_arg_7 = ((MR_Box) (startup__conv1_STATE_VARIABLE_OverrideTable_31));
#line 925 "startup.m"
  }
#line 925 "startup.m"
}

#line 920 "startup.m"
static void MR_CALL 
startup__propagate_to_clique_4_p_0(
#line 920 "startup.m"
  MR_Integer startup__CliqueNumber_5,
#line 920 "startup.m"
  MR_Word startup__Members_6,
#line 920 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_16,
#line 920 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_17)
#line 920 "startup.m"
{
#line 923 "startup.m"
  {
#line 923 "startup.m"
    MR_bool startup__succeeded;
#line 923 "startup.m"
    MR_Word startup__TypeCtorInfo_63_63;
#line 923 "startup.m"
    MR_Word startup__TypeCtorInfo_64_64;
#line 923 "startup.m"
    MR_Word startup__TypeInfo_67_67;
#line 923 "startup.m"
    MR_Word startup__ParentCSDPtr_8;
#line 923 "startup.m"
    MR_Word startup__SumTable_9;
#line 923 "startup.m"
    MR_Word startup__OverrideMap_10;
#line 923 "startup.m"
    MR_ArrayPtr startup__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 11)));
#line 923 "startup.m"
    MR_Word startup__V_19_19;
#line 923 "startup.m"
    MR_Word startup__STATE_VARIABLE_Deep_20_20;
#line 923 "startup.m"
    MR_Word startup__V_21_21;
#line 923 "startup.m"
    MR_Word startup__V_22_22;
#line 924 "startup.m"
    MR_Word startup__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 0)));
#line 924 "startup.m"
    MR_String startup__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 1)));
#line 924 "startup.m"
    MR_String startup__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 2)));
#line 924 "startup.m"
    MR_String startup__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 3)));
#line 924 "startup.m"
    MR_Word startup__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 4)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 5)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 6)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 7)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 8)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 9)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 10)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 12)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 13)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 14)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 15)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 16)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 17)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 18)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 19)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 20)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 21)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 22)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 23)));
#line 924 "startup.m"
    MR_ArrayPtr startup__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 24)));
#line 924 "startup.m"
    MR_Word startup__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 25)));
#line 924 "startup.m"
    MR_Word startup__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 26)));
#line 924 "startup.m"
    MR_Word startup__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 27)));
#line 924 "startup.m"
    MR_Word startup__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_16, (MR_Integer) 28)));
#line 924 "startup.m"
    MR_Box startup__conv0_ParentCSDPtr_8;
#line 925 "startup.m"
    MR_Box startup__conv6_STATE_VARIABLE_Deep_20_20;
#line 925 "startup.m"
    MR_Box startup__conv5_SumTable_9;
#line 925 "startup.m"
    MR_Box startup__conv4_OverrideMap_10;

#line 924 "startup.m"
    {
#line 924 "startup.m"
      mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_ArrayPtr) startup__V_18_18, startup__CliqueNumber_5, &startup__conv0_ParentCSDPtr_8);
    }
#line 924 "startup.m"
    startup__ParentCSDPtr_8 = ((MR_Word) startup__conv0_ParentCSDPtr_8);
#line 925 "startup.m"
    {
#line 925 "startup.m"
      startup__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 925 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_19_19, 0) = ((MR_Box) (&startup_scalar_common_10[1]));
#line 925 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_19_19, 1) = ((MR_Box) (startup__propagate_to_clique_4_p_0_1));
#line 925 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 925 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_19_19, 3) = ((MR_Box) (startup__CliqueNumber_5));
#line 925 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_19_19, 4) = ((MR_Box) (startup__ParentCSDPtr_8));
#line 925 "startup.m"
    }
#line 4441 "startup.c"
    startup__TypeCtorInfo_63_63 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
#line 4443 "startup.c"
    startup__TypeCtorInfo_64_64 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 925 "startup.m"
    {
#line 925 "startup.m"
      startup__V_21_21 = mercury__map__init_0_f_0(startup__TypeCtorInfo_63_63, startup__TypeCtorInfo_64_64);
    }
#line 925 "startup.m"
    {
#line 925 "startup.m"
      startup__V_22_22 = mercury__map__init_0_f_0(startup__TypeCtorInfo_63_63, startup__TypeCtorInfo_64_64);
    }
#line 4455 "startup.c"
    startup__TypeInfo_67_67 = (MR_Word) &startup_scalar_common_2[3];
#line 925 "startup.m"
    {
#line 925 "startup.m"
      mercury__list__foldl3_8_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &profile__profile__type_ctor_info_deep_0, startup__TypeInfo_67_67, startup__TypeInfo_67_67, startup__V_19_19, startup__Members_6, ((MR_Box) (startup__STATE_VARIABLE_Deep_0_16)), &startup__conv6_STATE_VARIABLE_Deep_20_20, ((MR_Box) (startup__V_21_21)), &startup__conv5_SumTable_9, ((MR_Box) (startup__V_22_22)), &startup__conv4_OverrideMap_10);
    }
#line 925 "startup.m"
    startup__STATE_VARIABLE_Deep_20_20 = ((MR_Word) startup__conv6_STATE_VARIABLE_Deep_20_20);
#line 925 "startup.m"
    startup__SumTable_9 = ((MR_Word) startup__conv5_SumTable_9);
#line 925 "startup.m"
    startup__OverrideMap_10 = ((MR_Word) startup__conv4_OverrideMap_10);
#line 927 "startup.m"
    {
#line 927 "startup.m"
      startup__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(startup__STATE_VARIABLE_Deep_20_20, startup__ParentCSDPtr_8);
    }
#line 935 "startup.m"
    if (startup__succeeded)
#line 928 "startup.m"
      {
#line 928 "startup.m"
        MR_Word startup__ParentCSD_11;
#line 928 "startup.m"
        MR_Word startup__ParentOwn_12;
#line 928 "startup.m"
        MR_Word startup__ParentDesc0_13;
#line 928 "startup.m"
        MR_Word startup__ParentDesc_14;
#line 928 "startup.m"
        MR_Word startup__CSDCompTable_15;
#line 928 "startup.m"
        MR_Word startup__STATE_VARIABLE_Deep_23_23;
#line 929 "startup.m"
        MR_Word startup__V_53_53;
#line 929 "startup.m"
        MR_Word startup__V_54_54;

#line 928 "startup.m"
        {
#line 928 "startup.m"
          profile__deep_lookup_call_site_dynamics_3_p_0(startup__STATE_VARIABLE_Deep_20_20, startup__ParentCSDPtr_8, &startup__ParentCSD_11);
        }
#line 929 "startup.m"
        startup__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ParentCSD_11, (MR_Integer) 0)));
#line 929 "startup.m"
        startup__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ParentCSD_11, (MR_Integer) 1)));
#line 929 "startup.m"
        startup__ParentOwn_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ParentCSD_11, (MR_Integer) 2)));
#line 930 "startup.m"
        {
#line 930 "startup.m"
          profile__deep_lookup_csd_desc_3_p_0(startup__STATE_VARIABLE_Deep_20_20, startup__ParentCSDPtr_8, &startup__ParentDesc0_13);
        }
#line 931 "startup.m"
        {
#line 931 "startup.m"
          startup__ParentDesc_14 = measurements__subtract_own_from_inherit_2_f_0(startup__ParentOwn_12, startup__ParentDesc0_13);
        }
#line 932 "startup.m"
        {
#line 932 "startup.m"
          profile__deep_update_csd_desc_4_p_0(startup__ParentCSDPtr_8, startup__ParentDesc_14, startup__STATE_VARIABLE_Deep_20_20, &startup__STATE_VARIABLE_Deep_23_23);
        }
#line 1014 "startup.m"
        {
#line 1014 "startup.m"
          startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__OverrideMap_10);
        }
#line 1016 "startup.m"
        if (startup__succeeded)
#line 1015 "startup.m"
          startup__CSDCompTable_15 = startup__SumTable_9;
#line 1016 "startup.m"
        else
#line 1018 "startup.m"
          {
#line 1016 "startup.m"
            {
#line 1016 "startup.m"
              startup__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__SumTable_9);
            }
#line 1018 "startup.m"
            if (startup__succeeded)
#line 1017 "startup.m"
              startup__CSDCompTable_15 = startup__OverrideMap_10;
#line 1018 "startup.m"
            else
#line 1019 "startup.m"
              {
#line 1019 "startup.m"
                {
#line 1019 "startup.m"
                  startup__CSDCompTable_15 = mercury__map__union_3_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &startup_scalar_common_2[13], startup__OverrideMap_10, startup__SumTable_9);
                }
#line 1019 "startup.m"
              }
#line 1018 "startup.m"
          }
#line 934 "startup.m"
        {
#line 934 "startup.m"
          profile__deep_update_csd_comp_table_4_p_0(startup__ParentCSDPtr_8, startup__CSDCompTable_15, startup__STATE_VARIABLE_Deep_23_23, startup__STATE_VARIABLE_Deep_17);
#line 934 "startup.m"
          return;
        }
#line 928 "startup.m"
      }
#line 935 "startup.m"
    else
#line 934 "startup.m"
      *startup__STATE_VARIABLE_Deep_17 = startup__STATE_VARIABLE_Deep_20_20;
#line 923 "startup.m"
  }
#line 920 "startup.m"
}

#line 908 "startup.m"
static void MR_CALL 
startup__accumulate_ps_costs_6_p_0(
#line 908 "startup.m"
  MR_Word startup__Deep_7,
#line 908 "startup.m"
  MR_Word startup__PSPtr_8,
#line 908 "startup.m"
  MR_Word startup__Own0_9,
#line 908 "startup.m"
  MR_Word * startup__Own_10,
#line 908 "startup.m"
  MR_Word startup__Desc0_11,
#line 908 "startup.m"
  MR_Word * startup__Desc_12)
#line 908 "startup.m"
{
#line 912 "startup.m"
  {
#line 912 "startup.m"
    MR_bool startup__succeeded;
#line 912 "startup.m"
    MR_Word startup__PSOwn_13;
#line 912 "startup.m"
    MR_Word startup__PSDesc_14;

#line 913 "startup.m"
    {
#line 913 "startup.m"
      profile__deep_lookup_ps_own_3_p_0(startup__Deep_7, startup__PSPtr_8, &startup__PSOwn_13);
    }
#line 914 "startup.m"
    {
#line 914 "startup.m"
      profile__deep_lookup_ps_desc_3_p_0(startup__Deep_7, startup__PSPtr_8, &startup__PSDesc_14);
    }
#line 915 "startup.m"
    {
#line 915 "startup.m"
      *startup__Own_10 = measurements__add_own_to_own_2_f_0(startup__Own0_9, startup__PSOwn_13);
    }
#line 916 "startup.m"
    {
#line 916 "startup.m"
      *startup__Desc_12 = measurements__add_inherit_to_inherit_2_f_0(startup__Desc0_11, startup__PSDesc_14);
    }
#line 912 "startup.m"
  }
#line 908 "startup.m"
}

#line 891 "startup.m"
static void MR_CALL 
startup__summarize_proc_static_coverage_4_p_0(
#line 891 "startup.m"
  MR_Integer startup__Index_5,
#line 891 "startup.m"
  MR_Word startup__PS_6,
#line 891 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CoverageArray_0_11,
#line 891 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CoverageArray_12)
#line 891 "startup.m"
{
#line 895 "startup.m"
  {
#line 895 "startup.m"
    MR_bool startup__succeeded;
#line 895 "startup.m"
    MR_Word startup__MaybeCoverage_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 10)));
#line 896 "startup.m"
    MR_Word startup__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 0)));
#line 896 "startup.m"
    MR_String startup__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 1)));
#line 896 "startup.m"
    MR_String startup__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 2)));
#line 896 "startup.m"
    MR_String startup__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 3)));
#line 896 "startup.m"
    MR_String startup__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 4)));
#line 896 "startup.m"
    MR_String startup__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 5)));
#line 896 "startup.m"
    MR_Integer startup__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 6)));
#line 896 "startup.m"
    MR_Word startup__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 7)));
#line 896 "startup.m"
    MR_ArrayPtr startup__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 8)));
#line 896 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 9)));
#line 896 "startup.m"
    MR_Word startup__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_6, (MR_Integer) 11)));

#line 901 "startup.m"
    if ((startup__MaybeCoverage_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 902 "startup.m"
      {
#line 903 "startup.m"
        {
#line 903 "startup.m"
          mercury__require__unexpected_3_p_0((MR_String) "startup", (MR_String) "predicate \140startup.summarize_proc_static_coverage\'/4", (MR_String) "no coverage data in proc static");
#line 903 "startup.m"
          return;
        }
#line 902 "startup.m"
      }
#line 901 "startup.m"
    else
#line 898 "startup.m"
      {
#line 898 "startup.m"
        MR_ArrayPtr startup__Coverage0_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__MaybeCoverage_8, (MR_Integer) 0)));
#line 898 "startup.m"
        MR_Word startup__Coverage_10;
#line 900 "startup.m"
        MR_ArrayPtr startup__conv0_STATE_VARIABLE_CoverageArray_12;

#line 899 "startup.m"
        {
#line 899 "startup.m"
          measurements__array_to_static_coverage_2_p_0(startup__Coverage0_9, &startup__Coverage_10);
        }
#line 900 "startup.m"
        {
#line 900 "startup.m"
          mercury__array__set_4_p_0((MR_Word) &measurements__measurements__type_ctor_info_static_coverage_info_0, startup__Index_5, ((MR_Box) (startup__Coverage_10)), (MR_ArrayPtr) startup__STATE_VARIABLE_CoverageArray_0_11, &startup__conv0_STATE_VARIABLE_CoverageArray_12);
        }
#line 900 "startup.m"
        *startup__STATE_VARIABLE_CoverageArray_12 = (MR_ArrayPtr) startup__conv0_STATE_VARIABLE_CoverageArray_12;
#line 898 "startup.m"
      }
#line 895 "startup.m"
  }
#line 891 "startup.m"
}

#line 885 "startup.m"
static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0_1(
#line 885 "startup.m"
  MR_Box startup__closure_arg,
#line 885 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 885 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 885 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 885 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 885 "startup.m"
{
#line 885 "startup.m"
  {
#line 885 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 885 "startup.m"
    MR_ArrayPtr startup__conv0_STATE_VARIABLE_CoverageArray_12;

#line 885 "startup.m"
    {
#line 885 "startup.m"
      startup__summarize_proc_static_coverage_4_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv0_STATE_VARIABLE_CoverageArray_12);
    }
#line 885 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv0_STATE_VARIABLE_CoverageArray_12));
#line 885 "startup.m"
  }
#line 885 "startup.m"
}

#line 881 "startup.m"
static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0(
#line 881 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_6,
#line 881 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_7)
#line 881 "startup.m"
{
#line 883 "startup.m"
  {
#line 883 "startup.m"
    MR_bool startup__succeeded;
#line 883 "startup.m"
    MR_Integer startup__NPS_4;
#line 883 "startup.m"
    MR_ArrayPtr startup__CoverageArray_5;
#line 883 "startup.m"
    MR_Word startup__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 0)));
#line 883 "startup.m"
    MR_ArrayPtr startup__V_11_11;
#line 883 "startup.m"
    MR_Word startup__V_12_12;
#line 883 "startup.m"
    MR_Word startup__V_14_14;
#line 883 "startup.m"
    MR_ArrayPtr startup__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 8)));
#line 884 "startup.m"
    MR_String startup__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 1)));
#line 884 "startup.m"
    MR_String startup__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 2)));
#line 884 "startup.m"
    MR_String startup__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 3)));
#line 884 "startup.m"
    MR_Word startup__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 4)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 5)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 6)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 7)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 9)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 10)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 11)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 12)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 13)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 14)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 15)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 16)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 17)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 18)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 19)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 20)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 21)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 22)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 23)));
#line 884 "startup.m"
    MR_ArrayPtr startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 24)));
#line 884 "startup.m"
    MR_Word startup__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 25)));
#line 884 "startup.m"
    MR_Word startup__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 26)));
#line 884 "startup.m"
    MR_Word startup__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 27)));
#line 884 "startup.m"
    MR_Word startup__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 28)));
#line 884 "startup.m"
    MR_String startup__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 0)));
#line 884 "startup.m"
    MR_Integer startup__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 1)));
#line 884 "startup.m"
    MR_Integer startup__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 2)));
#line 884 "startup.m"
    MR_Integer startup__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 3)));
#line 884 "startup.m"
    MR_Integer startup__V_47_47;
#line 884 "startup.m"
    MR_Integer startup__V_48_48;
#line 884 "startup.m"
    MR_Integer startup__V_49_49;
#line 884 "startup.m"
    MR_Integer startup__V_50_50;
#line 884 "startup.m"
    MR_Word startup__V_51_51;
#line 885 "startup.m"
    MR_ArrayPtr startup__conv1_V_11_11;
#line 885 "startup.m"
    MR_Box startup__conv2_CoverageArray_5;
#line 889 "startup.m"
    MR_Word startup__V_80_80;
#line 889 "startup.m"
    MR_String startup__V_81_81;
#line 889 "startup.m"
    MR_String startup__V_82_82;
#line 889 "startup.m"
    MR_String startup__V_83_83;
#line 889 "startup.m"
    MR_Word startup__V_84_84;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_85_85;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_86_86;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_87_87;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_88_88;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_89_89;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_90_90;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_91_91;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_92_92;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_93_93;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_94_94;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_95_95;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_96_96;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_97_97;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_98_98;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_99_99;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_100_100;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_101_101;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_102_102;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_103_103;
#line 889 "startup.m"
    MR_ArrayPtr startup__V_104_104;
#line 889 "startup.m"
    MR_Word startup__V_105_105;
#line 889 "startup.m"
    MR_Word startup__V_107_107;
#line 889 "startup.m"
    MR_Word startup__V_108_108;
#line 889 "startup.m"
    MR_Word startup__V_106_106;

#line 884 "startup.m"
    startup__NPS_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 4)));
#line 884 "startup.m"
    startup__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 5)));
#line 884 "startup.m"
    startup__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 6)));
#line 884 "startup.m"
    startup__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 7)));
#line 884 "startup.m"
    startup__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 8)));
#line 884 "startup.m"
    startup__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__V_8_8, (MR_Integer) 9)));
#line 888 "startup.m"
    {
#line 888 "startup.m"
      startup__V_12_12 = measurements__zero_static_coverage_0_f_0();
    }
#line 885 "startup.m"
    {
#line 885 "startup.m"
      startup__conv1_V_11_11 = mercury__array__init_2_f_0((MR_Word) &measurements__measurements__type_ctor_info_static_coverage_info_0, startup__NPS_4, ((MR_Box) (startup__V_12_12)));
    }
#line 885 "startup.m"
    startup__V_11_11 = (MR_ArrayPtr) startup__conv1_V_11_11;
#line 885 "startup.m"
    {
#line 885 "startup.m"
      array_util__array_foldl_from_1_4_p_1((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_Word) &startup_scalar_common_1[16], (MR_Word) &startup_scalar_common_2[12], (MR_ArrayPtr) startup__V_22_22, ((MR_Box) (startup__V_11_11)), &startup__conv2_CoverageArray_5);
    }
#line 885 "startup.m"
    startup__CoverageArray_5 = ((MR_ArrayPtr) startup__conv2_CoverageArray_5);
#line 889 "startup.m"
    {
#line 889 "startup.m"
      startup__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(1), startup__V_14_14, 0) = ((MR_Box) (startup__CoverageArray_5));
#line 889 "startup.m"
    }
#line 889 "startup.m"
    startup__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 0)));
#line 889 "startup.m"
    startup__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 1)));
#line 889 "startup.m"
    startup__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 2)));
#line 889 "startup.m"
    startup__V_83_83 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 3)));
#line 889 "startup.m"
    startup__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 4)));
#line 889 "startup.m"
    startup__V_85_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 5)));
#line 889 "startup.m"
    startup__V_86_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 6)));
#line 889 "startup.m"
    startup__V_87_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 7)));
#line 889 "startup.m"
    startup__V_88_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 8)));
#line 889 "startup.m"
    startup__V_89_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 9)));
#line 889 "startup.m"
    startup__V_90_90 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 10)));
#line 889 "startup.m"
    startup__V_91_91 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 11)));
#line 889 "startup.m"
    startup__V_92_92 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 12)));
#line 889 "startup.m"
    startup__V_93_93 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 13)));
#line 889 "startup.m"
    startup__V_94_94 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 14)));
#line 889 "startup.m"
    startup__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 15)));
#line 889 "startup.m"
    startup__V_96_96 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 16)));
#line 889 "startup.m"
    startup__V_97_97 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 17)));
#line 889 "startup.m"
    startup__V_98_98 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 18)));
#line 889 "startup.m"
    startup__V_99_99 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 19)));
#line 889 "startup.m"
    startup__V_100_100 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 20)));
#line 889 "startup.m"
    startup__V_101_101 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 21)));
#line 889 "startup.m"
    startup__V_102_102 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 22)));
#line 889 "startup.m"
    startup__V_103_103 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 23)));
#line 889 "startup.m"
    startup__V_104_104 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 24)));
#line 889 "startup.m"
    startup__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 25)));
#line 889 "startup.m"
    startup__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 26)));
#line 889 "startup.m"
    startup__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 27)));
#line 889 "startup.m"
    startup__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_6, (MR_Integer) 28)));
#line 889 "startup.m"
    {
#line 889 "startup.m"
      MR_Word base;
#line 889 "startup.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 889 "startup.m"
      *startup__STATE_VARIABLE_Deep_7 = base;
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__V_80_80));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__V_81_81));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__V_82_82));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__V_83_83));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__V_84_84));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__V_85_85));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__V_86_86));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__V_87_87));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__V_88_88));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__V_89_89));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__V_90_90));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__V_91_91));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__V_92_92));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__V_93_93));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__V_94_94));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__V_95_95));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__V_96_96));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__V_97_97));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__V_98_98));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__V_99_99));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__V_100_100));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__V_101_101));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__V_102_102));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__V_103_103));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__V_104_104));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__V_105_105));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__V_14_14));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__V_107_107));
#line 889 "startup.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__V_108_108));
#line 889 "startup.m"
    }
#line 883 "startup.m"
  }
#line 881 "startup.m"
}

#line 876 "startup.m"
static void MR_CALL 
startup__summarize_module_costs_2_f_0_1(
#line 876 "startup.m"
  MR_Box startup__closure_arg,
#line 876 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 876 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 876 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 876 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 876 "startup.m"
  MR_Box * startup__wrapper_arg_5)
#line 876 "startup.m"
{
#line 876 "startup.m"
  {
#line 876 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 876 "startup.m"
    MR_Word startup__conv1_Own_10;
#line 876 "startup.m"
    MR_Word startup__conv0_Desc_12;

#line 876 "startup.m"
    {
#line 876 "startup.m"
      startup__accumulate_ps_costs_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_Own_10, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_Desc_12);
    }
#line 876 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_Own_10));
#line 876 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_Desc_12));
#line 876 "startup.m"
  }
#line 876 "startup.m"
}

#line 872 "startup.m"
static MR_Word MR_CALL 
startup__summarize_module_costs_2_f_0(
#line 872 "startup.m"
  MR_Word startup__Deep_4,
#line 872 "startup.m"
  MR_Word startup__ModuleData0_5)
#line 872 "startup.m"
{
#line 874 "startup.m"
  {
#line 874 "startup.m"
    MR_bool startup__succeeded;
#line 874 "startup.m"
    MR_Word startup__ModuleData_6;
#line 874 "startup.m"
    MR_Word startup__Own0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ModuleData0_5, (MR_Integer) 0)));
#line 874 "startup.m"
    MR_Word startup__Desc0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ModuleData0_5, (MR_Integer) 1)));
#line 874 "startup.m"
    MR_Word startup__PSPtrs_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ModuleData0_5, (MR_Integer) 2)));
#line 874 "startup.m"
    MR_Word startup__Own_10;
#line 874 "startup.m"
    MR_Word startup__Desc_11;
#line 874 "startup.m"
    MR_Word startup__V_12_12;
#line 876 "startup.m"
    MR_Box startup__conv3_Own_10;
#line 876 "startup.m"
    MR_Box startup__conv2_Desc_11;

#line 876 "startup.m"
    {
#line 876 "startup.m"
      startup__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 876 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_12_12, 0) = ((MR_Box) (&startup_scalar_common_3[3]));
#line 876 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_12_12, 1) = ((MR_Box) (startup__summarize_module_costs_2_f_0_1));
#line 876 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 876 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_12_12, 3) = ((MR_Box) (startup__Deep_4));
#line 876 "startup.m"
    }
#line 876 "startup.m"
    {
#line 876 "startup.m"
      mercury__list__foldl2_6_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__V_12_12, startup__PSPtrs_9, ((MR_Box) (startup__Own0_7)), &startup__conv3_Own_10, ((MR_Box) (startup__Desc0_8)), &startup__conv2_Desc_11);
    }
#line 876 "startup.m"
    startup__Own_10 = ((MR_Word) startup__conv3_Own_10);
#line 876 "startup.m"
    startup__Desc_11 = ((MR_Word) startup__conv2_Desc_11);
#line 877 "startup.m"
    {
#line 877 "startup.m"
      startup__ModuleData_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 877 "startup.m"
      MR_hl_field(MR_mktag(0), startup__ModuleData_6, 0) = ((MR_Box) (startup__Own_10));
#line 877 "startup.m"
      MR_hl_field(MR_mktag(0), startup__ModuleData_6, 1) = ((MR_Box) (startup__Desc_11));
#line 877 "startup.m"
      MR_hl_field(MR_mktag(0), startup__ModuleData_6, 2) = ((MR_Box) (startup__PSPtrs_9));
#line 877 "startup.m"
    }
#line 874 "startup.m"
    return startup__ModuleData_6;
#line 874 "startup.m"
  }
#line 872 "startup.m"
}

#line 869 "startup.m"
static MR_Box MR_CALL 
startup__summarize_modules_2_p_0_1(
#line 869 "startup.m"
  MR_Box startup__closure_arg,
#line 869 "startup.m"
  MR_Box startup__wrapper_arg_1)
#line 869 "startup.m"
{
#line 869 "startup.m"
  {
#line 869 "startup.m"
    MR_Box startup__wrapper_arg_2;
#line 869 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 869 "startup.m"
    MR_Word startup__conv0_ModuleData_6;

#line 869 "startup.m"
    {
#line 869 "startup.m"
      startup__conv0_ModuleData_6 = startup__summarize_module_costs_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) startup__wrapper_arg_1));
    }
#line 869 "startup.m"
    startup__wrapper_arg_2 = ((MR_Box) (startup__conv0_ModuleData_6));
#line 869 "startup.m"
    return startup__wrapper_arg_2;
#line 869 "startup.m"
  }
#line 869 "startup.m"
}

#line 864 "startup.m"
static void MR_CALL 
startup__summarize_modules_2_p_0(
#line 864 "startup.m"
  MR_Word startup__Deep0_3,
#line 864 "startup.m"
  MR_Word * startup__Deep_4)
#line 864 "startup.m"
{
#line 866 "startup.m"
  {
#line 866 "startup.m"
    MR_bool startup__succeeded;
#line 866 "startup.m"
    MR_Word startup__TypeCtorInfo_65_65 = (MR_Word) &profile__profile__type_ctor_info_module_data_0;
#line 866 "startup.m"
    MR_Word startup__ModuleData0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 25)));
#line 866 "startup.m"
    MR_Word startup__ModuleData_6;
#line 866 "startup.m"
    MR_Word startup__V_7_7;
#line 867 "startup.m"
    MR_Word startup__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 0)));
#line 867 "startup.m"
    MR_String startup__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 1)));
#line 867 "startup.m"
    MR_String startup__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 2)));
#line 867 "startup.m"
    MR_String startup__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 3)));
#line 867 "startup.m"
    MR_Word startup__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 4)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_13_13 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 5)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_14_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 6)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 7)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_16_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 8)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 9)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 10)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_19_19 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 11)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_20_20 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 12)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 13)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 14)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 15)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 16)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 17)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 18)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 19)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 20)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 21)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 22)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 23)));
#line 867 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 24)));
#line 867 "startup.m"
    MR_Word startup__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 26)));
#line 867 "startup.m"
    MR_Word startup__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 27)));
#line 867 "startup.m"
    MR_Word startup__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 28)));
#line 870 "startup.m"
    MR_Word startup__V_36_36;
#line 870 "startup.m"
    MR_String startup__V_37_37;
#line 870 "startup.m"
    MR_String startup__V_38_38;
#line 870 "startup.m"
    MR_String startup__V_39_39;
#line 870 "startup.m"
    MR_Word startup__V_40_40;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_41_41;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_42_42;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_43_43;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_44_44;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_45_45;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_46_46;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_47_47;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_48_48;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_49_49;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_50_50;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_51_51;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_52_52;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_53_53;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_54_54;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_55_55;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_56_56;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_57_57;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_58_58;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_59_59;
#line 870 "startup.m"
    MR_ArrayPtr startup__V_60_60;
#line 870 "startup.m"
    MR_Word startup__V_62_62;
#line 870 "startup.m"
    MR_Word startup__V_63_63;
#line 870 "startup.m"
    MR_Word startup__V_64_64;
#line 870 "startup.m"
    MR_Word startup__V_61_61;

#line 869 "startup.m"
    {
#line 869 "startup.m"
      startup__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 869 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_7_7, 0) = ((MR_Box) (&startup_scalar_common_7[1]));
#line 869 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_7_7, 1) = ((MR_Box) (startup__summarize_modules_2_p_0_1));
#line 869 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 869 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_7_7, 3) = ((MR_Box) (startup__Deep0_3));
#line 869 "startup.m"
    }
#line 868 "startup.m"
    {
#line 868 "startup.m"
      startup__ModuleData_6 = mercury__map__map_values_only_2_f_0(startup__TypeCtorInfo_65_65, startup__TypeCtorInfo_65_65, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, startup__V_7_7, startup__ModuleData0_5);
    }
#line 870 "startup.m"
    startup__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 0)));
#line 870 "startup.m"
    startup__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 1)));
#line 870 "startup.m"
    startup__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 2)));
#line 870 "startup.m"
    startup__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 3)));
#line 870 "startup.m"
    startup__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 4)));
#line 870 "startup.m"
    startup__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 5)));
#line 870 "startup.m"
    startup__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 6)));
#line 870 "startup.m"
    startup__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 7)));
#line 870 "startup.m"
    startup__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 8)));
#line 870 "startup.m"
    startup__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 9)));
#line 870 "startup.m"
    startup__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 10)));
#line 870 "startup.m"
    startup__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 11)));
#line 870 "startup.m"
    startup__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 12)));
#line 870 "startup.m"
    startup__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 13)));
#line 870 "startup.m"
    startup__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 14)));
#line 870 "startup.m"
    startup__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 15)));
#line 870 "startup.m"
    startup__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 16)));
#line 870 "startup.m"
    startup__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 17)));
#line 870 "startup.m"
    startup__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 18)));
#line 870 "startup.m"
    startup__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 19)));
#line 870 "startup.m"
    startup__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 20)));
#line 870 "startup.m"
    startup__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 21)));
#line 870 "startup.m"
    startup__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 22)));
#line 870 "startup.m"
    startup__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 23)));
#line 870 "startup.m"
    startup__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 24)));
#line 870 "startup.m"
    startup__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 25)));
#line 870 "startup.m"
    startup__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 26)));
#line 870 "startup.m"
    startup__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 27)));
#line 870 "startup.m"
    startup__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 28)));
#line 870 "startup.m"
    {
#line 870 "startup.m"
      MR_Word base;
#line 870 "startup.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 870 "startup.m"
      *startup__Deep_4 = base;
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__V_36_36));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__V_37_37));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__V_38_38));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__V_39_39));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__V_40_40));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__V_41_41));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__V_42_42));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__V_43_43));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__V_44_44));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__V_45_45));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__V_46_46));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__V_47_47));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__V_48_48));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__V_49_49));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__V_50_50));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__V_51_51));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__V_52_52));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__V_53_53));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__V_54_54));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__V_55_55));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__V_56_56));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__V_57_57));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__V_58_58));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__V_59_59));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__V_60_60));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__ModuleData_6));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__V_62_62));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__V_63_63));
#line 870 "startup.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__V_64_64));
#line 870 "startup.m"
    }
#line 866 "startup.m"
  }
#line 864 "startup.m"
}

#line 829 "startup.m"
static void MR_CALL 
startup__summarize_call_site_dynamic_10_p_0(
#line 829 "startup.m"
  MR_ArrayPtr startup__CallSiteStaticMap_11,
#line 829 "startup.m"
  MR_ArrayPtr startup__CallSiteStatics_12,
#line 829 "startup.m"
  MR_ArrayPtr startup__CSDDescs_13,
#line 829 "startup.m"
  MR_ArrayPtr startup__CSDCompTableArray_14,
#line 829 "startup.m"
  MR_Integer startup__CSDI_15,
#line 829 "startup.m"
  MR_Word startup__CSD_16,
#line 829 "startup.m"
  MR_ArrayPtr startup__CSSOwnArray0_17,
#line 829 "startup.m"
  MR_ArrayPtr * startup__CSSOwnArray_18,
#line 829 "startup.m"
  MR_ArrayPtr startup__CSSDescArray0_19,
#line 829 "startup.m"
  MR_ArrayPtr * startup__CSSDescArray_20)
#line 829 "startup.m"
{
#line 838 "startup.m"
  {
#line 838 "startup.m"
    MR_bool startup__succeeded;
#line 838 "startup.m"
    MR_Word startup__CSDPtr_21 = (MR_Word) startup__CSDI_15;
#line 838 "startup.m"
    MR_Word startup__CSSPtr_22;
#line 838 "startup.m"
    MR_Integer startup__CSSI_23;

#line 840 "startup.m"
    {
#line 840 "startup.m"
      profile__lookup_call_site_static_map_3_p_0(startup__CallSiteStaticMap_11, startup__CSDPtr_21, &startup__CSSPtr_22);
    }
#line 841 "startup.m"
    startup__CSSI_23 = (MR_Integer) startup__CSSPtr_22;
#line 842 "startup.m"
    startup__succeeded = (startup__CSSI_23 > (MR_Integer) 0);
#line 858 "startup.m"
    if (startup__succeeded)
#line 843 "startup.m"
      {
#line 843 "startup.m"
        MR_Word startup__CSDOwn_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 2)));
#line 843 "startup.m"
        MR_Word startup__CSDDesc0_25;
#line 843 "startup.m"
        MR_Word startup__CSDCompTable_26;
#line 843 "startup.m"
        MR_Word startup__CSS_27;
#line 843 "startup.m"
        MR_Word startup__CSDDesc_29;
#line 843 "startup.m"
        MR_Word startup__CSSOwn0_30;
#line 843 "startup.m"
        MR_Word startup__CSSDesc0_31;
#line 843 "startup.m"
        MR_Word startup__CSSOwn_32;
#line 843 "startup.m"
        MR_Word startup__CSSDesc_33;
#line 843 "startup.m"
        MR_ArrayPtr startup__V_36_36;
#line 843 "startup.m"
        MR_ArrayPtr startup__V_37_37;
#line 843 "startup.m"
        MR_Word startup__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 0)));
#line 843 "startup.m"
        MR_Word startup__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 1)));
#line 849 "startup.m"
        MR_Word startup__InnerTotal_28;
#line 847 "startup.m"
        MR_Word startup__V_35_35;
#line 847 "startup.m"
        MR_Integer startup__V_41_41;
#line 847 "startup.m"
        MR_Word startup__V_42_42;
#line 847 "startup.m"
        MR_Integer startup__V_43_43;
#line 847 "startup.m"
        MR_Word startup__V_44_44;
#line 847 "startup.m"
        MR_Box startup__conv0_InnerTotal_28;
#line 856 "startup.m"
        MR_Box startup__conv1_V_36_36;
#line 857 "startup.m"
        MR_Box startup__conv2_V_37_37;

#line 844 "startup.m"
        {
#line 844 "startup.m"
          profile__lookup_csd_desc_3_p_0(startup__CSDDescs_13, startup__CSDPtr_21, &startup__CSDDesc0_25);
        }
#line 845 "startup.m"
        {
#line 845 "startup.m"
          profile__lookup_csd_comp_table_3_p_0(startup__CSDCompTableArray_14, startup__CSDPtr_21, &startup__CSDCompTable_26);
        }
#line 846 "startup.m"
        {
#line 846 "startup.m"
          profile__lookup_call_site_statics_3_p_0(startup__CallSiteStatics_12, startup__CSSPtr_22, &startup__CSS_27);
        }
#line 847 "startup.m"
        startup__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 0)));
#line 847 "startup.m"
        startup__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 1)));
#line 847 "startup.m"
        startup__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 2)));
#line 847 "startup.m"
        startup__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 3)));
#line 847 "startup.m"
        startup__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS_27, (MR_Integer) 4)));
#line 847 "startup.m"
        {
#line 847 "startup.m"
          startup__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__CSDCompTable_26, ((MR_Box) (startup__V_35_35)), &startup__conv0_InnerTotal_28);
        }
#line 847 "startup.m"
        if (startup__succeeded)
#line 847 "startup.m"
          {
#line 847 "startup.m"
            startup__InnerTotal_28 = ((MR_Word) startup__conv0_InnerTotal_28);
#line 847 "startup.m"
            startup__succeeded = MR_TRUE;
#line 847 "startup.m"
          }
#line 849 "startup.m"
        if (startup__succeeded)
#line 848 "startup.m"
          {
#line 848 "startup.m"
            startup__CSDDesc_29 = measurements__subtract_inherit_from_inherit_2_f_0(startup__InnerTotal_28, startup__CSDDesc0_25);
          }
#line 849 "startup.m"
        else
#line 850 "startup.m"
          startup__CSDDesc_29 = startup__CSDDesc0_25;
#line 852 "startup.m"
        {
#line 852 "startup.m"
          profile__lookup_css_own_3_p_0(startup__CSSOwnArray0_17, startup__CSSPtr_22, &startup__CSSOwn0_30);
        }
#line 853 "startup.m"
        {
#line 853 "startup.m"
          profile__lookup_css_desc_3_p_0(startup__CSSDescArray0_19, startup__CSSPtr_22, &startup__CSSDesc0_31);
        }
#line 854 "startup.m"
        {
#line 854 "startup.m"
          startup__CSSOwn_32 = measurements__add_own_to_own_2_f_0(startup__CSDOwn_24, startup__CSSOwn0_30);
        }
#line 855 "startup.m"
        {
#line 855 "startup.m"
          startup__CSSDesc_33 = measurements__add_inherit_to_inherit_2_f_0(startup__CSDDesc_29, startup__CSSDesc0_31);
        }
#line 856 "startup.m"
        {
#line 856 "startup.m"
          startup__conv1_V_36_36 = array_util__u_1_f_0((MR_Word) &startup_scalar_common_1[14], ((MR_Box) (startup__CSSOwnArray0_17)));
        }
#line 856 "startup.m"
        startup__V_36_36 = ((MR_ArrayPtr) startup__conv1_V_36_36);
#line 856 "startup.m"
        {
#line 856 "startup.m"
          profile__update_css_own_4_p_0(startup__CSSPtr_22, startup__CSSOwn_32, startup__V_36_36, startup__CSSOwnArray_18);
        }
#line 857 "startup.m"
        {
#line 857 "startup.m"
          startup__conv2_V_37_37 = array_util__u_1_f_0((MR_Word) &startup_scalar_common_1[15], ((MR_Box) (startup__CSSDescArray0_19)));
        }
#line 857 "startup.m"
        startup__V_37_37 = ((MR_ArrayPtr) startup__conv2_V_37_37);
#line 857 "startup.m"
        {
#line 857 "startup.m"
          profile__update_css_desc_4_p_0(startup__CSSPtr_22, startup__CSSDesc_33, startup__V_37_37, startup__CSSDescArray_20);
#line 857 "startup.m"
          return;
        }
#line 843 "startup.m"
      }
#line 858 "startup.m"
    else
#line 859 "startup.m"
      {
#line 859 "startup.m"
        {
#line 859 "startup.m"
          mercury__require__error_1_p_0((MR_String) "summarize_call_site_dynamic: invalid css ptr");
#line 859 "startup.m"
          return;
        }
#line 859 "startup.m"
      }
#line 838 "startup.m"
  }
#line 829 "startup.m"
}

#line 819 "startup.m"
static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0_1(
#line 819 "startup.m"
  MR_Box startup__closure_arg,
#line 819 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 819 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 819 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 819 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 819 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 819 "startup.m"
  MR_Box * startup__wrapper_arg_6)
#line 819 "startup.m"
{
#line 819 "startup.m"
  {
#line 819 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 819 "startup.m"
    MR_ArrayPtr startup__conv1_CSSOwnArray_18;
#line 819 "startup.m"
    MR_ArrayPtr startup__conv0_CSSDescArray_20;

#line 819 "startup.m"
    {
#line 819 "startup.m"
      startup__summarize_call_site_dynamic_10_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 6))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv1_CSSOwnArray_18, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv0_CSSDescArray_20);
    }
#line 819 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv1_CSSOwnArray_18));
#line 819 "startup.m"
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv0_CSSDescArray_20));
#line 819 "startup.m"
  }
#line 819 "startup.m"
}

#line 814 "startup.m"
static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0(
#line 814 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_8,
#line 814 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_9)
#line 814 "startup.m"
{
#line 816 "startup.m"
  {
#line 816 "startup.m"
    MR_bool startup__succeeded;
#line 816 "startup.m"
    MR_ArrayPtr startup__CSSOwnArray0_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 21)));
#line 816 "startup.m"
    MR_ArrayPtr startup__CSSDescArray0_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 22)));
#line 816 "startup.m"
    MR_ArrayPtr startup__CSSOwnArray_6;
#line 816 "startup.m"
    MR_ArrayPtr startup__CSSDescArray_7;
#line 816 "startup.m"
    MR_Word startup__V_10_10;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_12_12;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_13_13;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 5)));
#line 816 "startup.m"
    MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 7)));
#line 816 "startup.m"
    MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 14)));
#line 816 "startup.m"
    MR_ArrayPtr startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 18)));
#line 816 "startup.m"
    MR_ArrayPtr startup__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 24)));
#line 816 "startup.m"
    MR_Word startup__V_216_216;
#line 816 "startup.m"
    MR_String startup__V_217_217;
#line 816 "startup.m"
    MR_String startup__V_218_218;
#line 816 "startup.m"
    MR_String startup__V_219_219;
#line 816 "startup.m"
    MR_Word startup__V_220_220;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_221_221;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_222_222;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_223_223;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_224_224;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_225_225;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_226_226;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_227_227;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_228_228;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_229_229;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_230_230;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_231_231;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_232_232;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_233_233;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_234_234;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_235_235;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_236_236;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_239_239;
#line 816 "startup.m"
    MR_ArrayPtr startup__V_240_240;
#line 816 "startup.m"
    MR_Word startup__V_241_241;
#line 816 "startup.m"
    MR_Word startup__V_242_242;
#line 816 "startup.m"
    MR_Word startup__V_243_243;
#line 816 "startup.m"
    MR_Word startup__V_244_244;
#line 817 "startup.m"
    MR_Word startup__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 0)));
#line 817 "startup.m"
    MR_String startup__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 1)));
#line 817 "startup.m"
    MR_String startup__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 2)));
#line 817 "startup.m"
    MR_String startup__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 3)));
#line 817 "startup.m"
    MR_Word startup__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 4)));
#line 817 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 6)));
#line 817 "startup.m"
    MR_ArrayPtr startup__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 8)));
#line 817 "startup.m"
    MR_ArrayPtr startup__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 9)));
#line 817 "startup.m"
    MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 10)));
#line 817 "startup.m"
    MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 11)));
#line 817 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 12)));
#line 817 "startup.m"
    MR_ArrayPtr startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 13)));
#line 817 "startup.m"
    MR_ArrayPtr startup__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 15)));
#line 817 "startup.m"
    MR_ArrayPtr startup__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 16)));
#line 817 "startup.m"
    MR_ArrayPtr startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 17)));
#line 817 "startup.m"
    MR_ArrayPtr startup__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 19)));
#line 817 "startup.m"
    MR_ArrayPtr startup__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 20)));
#line 817 "startup.m"
    MR_ArrayPtr startup__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 23)));
#line 817 "startup.m"
    MR_Word startup__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 25)));
#line 817 "startup.m"
    MR_Word startup__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 26)));
#line 817 "startup.m"
    MR_Word startup__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 27)));
#line 817 "startup.m"
    MR_Word startup__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 28)));
#line 819 "startup.m"
    MR_ArrayPtr startup__conv2_V_12_12;
#line 819 "startup.m"
    MR_ArrayPtr startup__conv3_V_13_13;
#line 819 "startup.m"
    MR_Box startup__conv5_CSSOwnArray_6;
#line 819 "startup.m"
    MR_Box startup__conv4_CSSDescArray_7;
#line 826 "startup.m"
    MR_ArrayPtr startup__V_237_237;
#line 826 "startup.m"
    MR_ArrayPtr startup__V_238_238;

#line 819 "startup.m"
    {
#line 819 "startup.m"
      startup__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 819 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 0) = ((MR_Box) (&startup_scalar_common_12[0]));
#line 819 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 1) = ((MR_Box) (startup__summarize_call_site_dynamics_2_p_0_1));
#line 819 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 819 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 3) = ((MR_Box) (startup__V_34_34));
#line 819 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 4) = ((MR_Box) (startup__V_27_27));
#line 819 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 5) = ((MR_Box) (startup__V_38_38));
#line 819 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_10_10, 6) = ((MR_Box) (startup__V_43_43));
#line 819 "startup.m"
    }
#line 819 "startup.m"
    {
#line 819 "startup.m"
      startup__conv2_V_12_12 = mercury__array__copy_1_f_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) startup__CSSOwnArray0_4);
    }
#line 819 "startup.m"
    startup__V_12_12 = (MR_ArrayPtr) startup__conv2_V_12_12;
#line 819 "startup.m"
    {
#line 819 "startup.m"
      startup__conv3_V_13_13 = mercury__array__copy_1_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) startup__CSSDescArray0_5);
    }
#line 819 "startup.m"
    startup__V_13_13 = (MR_ArrayPtr) startup__conv3_V_13_13;
#line 819 "startup.m"
    {
#line 819 "startup.m"
      array_util__array_foldl2_from_1_6_p_1((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_Word) &startup_scalar_common_1[14], (MR_Word) &startup_scalar_common_1[15], startup__V_10_10, (MR_ArrayPtr) startup__V_25_25, ((MR_Box) (startup__V_12_12)), &startup__conv5_CSSOwnArray_6, ((MR_Box) (startup__V_13_13)), &startup__conv4_CSSDescArray_7);
    }
#line 819 "startup.m"
    startup__CSSOwnArray_6 = ((MR_ArrayPtr) startup__conv5_CSSOwnArray_6);
#line 819 "startup.m"
    startup__CSSDescArray_7 = ((MR_ArrayPtr) startup__conv4_CSSDescArray_7);
#line 826 "startup.m"
    startup__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 0)));
#line 826 "startup.m"
    startup__V_217_217 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 1)));
#line 826 "startup.m"
    startup__V_218_218 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 2)));
#line 826 "startup.m"
    startup__V_219_219 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 3)));
#line 826 "startup.m"
    startup__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 4)));
#line 826 "startup.m"
    startup__V_221_221 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 5)));
#line 826 "startup.m"
    startup__V_222_222 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 6)));
#line 826 "startup.m"
    startup__V_223_223 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 7)));
#line 826 "startup.m"
    startup__V_224_224 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 8)));
#line 826 "startup.m"
    startup__V_225_225 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 9)));
#line 826 "startup.m"
    startup__V_226_226 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 10)));
#line 826 "startup.m"
    startup__V_227_227 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 11)));
#line 826 "startup.m"
    startup__V_228_228 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 12)));
#line 826 "startup.m"
    startup__V_229_229 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 13)));
#line 826 "startup.m"
    startup__V_230_230 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 14)));
#line 826 "startup.m"
    startup__V_231_231 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 15)));
#line 826 "startup.m"
    startup__V_232_232 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 16)));
#line 826 "startup.m"
    startup__V_233_233 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 17)));
#line 826 "startup.m"
    startup__V_234_234 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 18)));
#line 826 "startup.m"
    startup__V_235_235 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 19)));
#line 826 "startup.m"
    startup__V_236_236 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 20)));
#line 826 "startup.m"
    startup__V_237_237 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 21)));
#line 826 "startup.m"
    startup__V_238_238 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 22)));
#line 826 "startup.m"
    startup__V_239_239 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 23)));
#line 826 "startup.m"
    startup__V_240_240 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 24)));
#line 826 "startup.m"
    startup__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 25)));
#line 826 "startup.m"
    startup__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 26)));
#line 826 "startup.m"
    startup__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 27)));
#line 826 "startup.m"
    startup__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 28)));
#line 827 "startup.m"
    {
#line 827 "startup.m"
      MR_Word base;
#line 827 "startup.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 827 "startup.m"
      *startup__STATE_VARIABLE_Deep_9 = base;
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__V_216_216));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__V_217_217));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__V_218_218));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__V_219_219));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__V_220_220));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__V_221_221));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__V_222_222));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__V_223_223));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__V_224_224));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__V_225_225));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__V_226_226));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__V_227_227));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__V_228_228));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__V_229_229));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__V_230_230));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__V_231_231));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__V_232_232));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__V_233_233));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__V_234_234));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__V_235_235));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__V_236_236));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__CSSOwnArray_6));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__CSSDescArray_7));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__V_239_239));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__V_240_240));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__V_241_241));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__V_242_242));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__V_243_243));
#line 827 "startup.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__V_244_244));
#line 827 "startup.m"
    }
#line 816 "startup.m"
  }
#line 814 "startup.m"
}

#line 785 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamic_with_coverage_11_p_0(
#line 785 "startup.m"
  MR_ArrayPtr startup__PDOwnArray_12,
#line 785 "startup.m"
  MR_ArrayPtr startup__PDDescArray_13,
#line 785 "startup.m"
  MR_ArrayPtr startup__PDCompTableArray_14,
#line 785 "startup.m"
  MR_Integer startup__PDI_15,
#line 785 "startup.m"
  MR_Word startup__PD_16,
#line 785 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PSOwnArray_0_24,
#line 785 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PSOwnArray_25,
#line 785 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PSDescArray_0_26,
#line 785 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PSDescArray_27,
#line 785 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CoverageArray_0_28,
#line 785 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CoverageArray_29)
#line 785 "startup.m"
{
#line 795 "startup.m"
  {
#line 795 "startup.m"
    MR_bool startup__succeeded;
#line 795 "startup.m"
    MR_Word startup__PSPtr_20;
#line 795 "startup.m"
    MR_Word startup__MaybeDynamicCoverage_21;
#line 798 "startup.m"
    MR_ArrayPtr startup__V_38_38;

#line 796 "startup.m"
    {
#line 796 "startup.m"
      startup__summarize_proc_dynamic_9_p_0(startup__PDOwnArray_12, startup__PDDescArray_13, startup__PDCompTableArray_14, startup__PDI_15, startup__PD_16, startup__STATE_VARIABLE_PSOwnArray_0_24, startup__STATE_VARIABLE_PSOwnArray_25, startup__STATE_VARIABLE_PSDescArray_0_26, startup__STATE_VARIABLE_PSDescArray_27);
    }
#line 798 "startup.m"
    startup__PSPtr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_16, (MR_Integer) 0)));
#line 798 "startup.m"
    startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_16, (MR_Integer) 1)));
#line 798 "startup.m"
    startup__MaybeDynamicCoverage_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_16, (MR_Integer) 2)));
#line 807 "startup.m"
    if ((startup__MaybeDynamicCoverage_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 808 "startup.m"
      {
#line 809 "startup.m"
        {
#line 809 "startup.m"
          mercury__require__unexpected_3_p_0((MR_String) "startup", (MR_String) "predicate \140startup.summarize_proc_dynamic_with_coverage\'/11", (MR_String) "no coverage point array in proc dynamic");
#line 809 "startup.m"
          return;
        }
#line 808 "startup.m"
      }
#line 807 "startup.m"
    else
#line 801 "startup.m"
      {
#line 801 "startup.m"
        MR_ArrayPtr startup__DynamicCoverage_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__MaybeDynamicCoverage_21, (MR_Integer) 0)));
#line 801 "startup.m"
        MR_Word startup__STATE_VARIABLE_StaticCoverage_35_35;
#line 801 "startup.m"
        MR_Word startup__STATE_VARIABLE_StaticCoverage_36_36;

#line 803 "startup.m"
        {
#line 803 "startup.m"
          profile__lookup_ps_coverage_3_p_0(startup__STATE_VARIABLE_CoverageArray_0_28, startup__PSPtr_20, &startup__STATE_VARIABLE_StaticCoverage_35_35);
        }
#line 804 "startup.m"
        {
#line 804 "startup.m"
          measurements__add_coverage_arrays_3_p_0(startup__DynamicCoverage_22, startup__STATE_VARIABLE_StaticCoverage_35_35, &startup__STATE_VARIABLE_StaticCoverage_36_36);
        }
#line 805 "startup.m"
        {
#line 805 "startup.m"
          profile__update_ps_coverage_4_p_0(startup__PSPtr_20, startup__STATE_VARIABLE_StaticCoverage_36_36, startup__STATE_VARIABLE_CoverageArray_0_28, startup__STATE_VARIABLE_CoverageArray_29);
#line 805 "startup.m"
          return;
        }
#line 801 "startup.m"
      }
#line 795 "startup.m"
  }
#line 785 "startup.m"
}

#line 774 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0_1(
#line 774 "startup.m"
  MR_Box startup__closure_arg,
#line 774 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 774 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 774 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 774 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 774 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 774 "startup.m"
  MR_Box * startup__wrapper_arg_6,
#line 774 "startup.m"
  MR_Box startup__wrapper_arg_7,
#line 774 "startup.m"
  MR_Box * startup__wrapper_arg_8)
#line 774 "startup.m"
{
#line 774 "startup.m"
  {
#line 774 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 774 "startup.m"
    MR_ArrayPtr startup__conv2_STATE_VARIABLE_PSOwnArray_25;
#line 774 "startup.m"
    MR_ArrayPtr startup__conv1_STATE_VARIABLE_PSDescArray_27;
#line 774 "startup.m"
    MR_ArrayPtr startup__conv0_STATE_VARIABLE_CoverageArray_29;

#line 774 "startup.m"
    {
#line 774 "startup.m"
      startup__summarize_proc_dynamic_with_coverage_11_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv2_STATE_VARIABLE_PSOwnArray_25, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv1_STATE_VARIABLE_PSDescArray_27, ((MR_ArrayPtr) startup__wrapper_arg_7), &startup__conv0_STATE_VARIABLE_CoverageArray_29);
    }
#line 774 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv2_STATE_VARIABLE_PSOwnArray_25));
#line 774 "startup.m"
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv1_STATE_VARIABLE_PSDescArray_27));
#line 774 "startup.m"
    *startup__wrapper_arg_8 = ((MR_Box) (startup__conv0_STATE_VARIABLE_CoverageArray_29));
#line 774 "startup.m"
  }
#line 774 "startup.m"
}

#line 768 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0(
#line 768 "startup.m"
  MR_Word startup__STATE_VARIABLE_Deep_0_8,
#line 768 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_9)
#line 768 "startup.m"
{
#line 770 "startup.m"
  {
#line 770 "startup.m"
    MR_bool startup__succeeded;
#line 770 "startup.m"
    MR_Integer startup__NPS_4;
#line 770 "startup.m"
    MR_ArrayPtr startup__PSOwnArray_5;
#line 770 "startup.m"
    MR_ArrayPtr startup__PSDescArray_6;
#line 770 "startup.m"
    MR_ArrayPtr startup__CoverageArray_7;
#line 770 "startup.m"
    MR_Integer startup__V_10_10;
#line 770 "startup.m"
    MR_Word startup__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 0)));
#line 770 "startup.m"
    MR_Word startup__V_13_13;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_15_15;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_16_16;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_17_17;
#line 770 "startup.m"
    MR_Word startup__V_21_21;
#line 770 "startup.m"
    MR_Word startup__V_22_22;
#line 770 "startup.m"
    MR_Word startup__V_23_23;
#line 770 "startup.m"
    MR_Word startup__V_27_27;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 6)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 16)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 17)));
#line 770 "startup.m"
    MR_ArrayPtr startup__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 23)));
#line 770 "startup.m"
    MR_Word startup__V_177_177;
#line 770 "startup.m"
    MR_String startup__V_178_178;
#line 770 "startup.m"
    MR_String startup__V_179_179;
#line 770 "startup.m"
    MR_String startup__V_180_180;
#line 770 "startup.m"
    MR_Word startup__V_181_181;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_182_182;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_183_183;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_184_184;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_185_185;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_186_186;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_187_187;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_188_188;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_189_189;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_190_190;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_191_191;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_192_192;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_193_193;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_194_194;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_195_195;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_198_198;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_199_199;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_200_200;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_201_201;
#line 770 "startup.m"
    MR_Word startup__V_202_202;
#line 770 "startup.m"
    MR_Word startup__V_204_204;
#line 770 "startup.m"
    MR_Word startup__V_205_205;
#line 770 "startup.m"
    MR_Word startup__V_206_206;
#line 770 "startup.m"
    MR_String startup__V_207_207;
#line 770 "startup.m"
    MR_String startup__V_208_208;
#line 770 "startup.m"
    MR_String startup__V_209_209;
#line 770 "startup.m"
    MR_Word startup__V_210_210;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_211_211;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_212_212;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_213_213;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_214_214;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_215_215;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_216_216;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_217_217;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_218_218;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_219_219;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_220_220;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_221_221;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_222_222;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_223_223;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_224_224;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_225_225;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_227_227;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_228_228;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_229_229;
#line 770 "startup.m"
    MR_ArrayPtr startup__V_230_230;
#line 770 "startup.m"
    MR_Word startup__V_231_231;
#line 770 "startup.m"
    MR_Word startup__V_233_233;
#line 770 "startup.m"
    MR_Word startup__V_234_234;
#line 773 "startup.m"
    MR_String startup__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 1)));
#line 773 "startup.m"
    MR_String startup__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 2)));
#line 773 "startup.m"
    MR_String startup__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 3)));
#line 773 "startup.m"
    MR_Word startup__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 4)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 5)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 7)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 8)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_36_36 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 9)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 10)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 11)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 12)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 13)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_41_41 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 14)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 15)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 18)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 19)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 20)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 21)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 22)));
#line 773 "startup.m"
    MR_ArrayPtr startup__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 24)));
#line 773 "startup.m"
    MR_Word startup__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 25)));
#line 773 "startup.m"
    MR_Word startup__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 26)));
#line 773 "startup.m"
    MR_Word startup__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 27)));
#line 773 "startup.m"
    MR_Word startup__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 28)));
#line 773 "startup.m"
    MR_String startup__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 0)));
#line 773 "startup.m"
    MR_Integer startup__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 1)));
#line 773 "startup.m"
    MR_Integer startup__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 2)));
#line 773 "startup.m"
    MR_Integer startup__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 3)));
#line 773 "startup.m"
    MR_Integer startup__V_60_60;
#line 773 "startup.m"
    MR_Integer startup__V_61_61;
#line 773 "startup.m"
    MR_Integer startup__V_62_62;
#line 773 "startup.m"
    MR_Integer startup__V_63_63;
#line 773 "startup.m"
    MR_Word startup__V_64_64;
#line 774 "startup.m"
    MR_ArrayPtr startup__conv3_V_15_15;
#line 774 "startup.m"
    MR_ArrayPtr startup__conv4_V_16_16;
#line 774 "startup.m"
    MR_ArrayPtr startup__conv5_V_17_17;
#line 774 "startup.m"
    MR_Box startup__conv8_PSOwnArray_5;
#line 774 "startup.m"
    MR_Box startup__conv7_PSDescArray_6;
#line 774 "startup.m"
    MR_Box startup__conv6_CoverageArray_7;
#line 781 "startup.m"
    MR_ArrayPtr startup__V_196_196;
#line 781 "startup.m"
    MR_ArrayPtr startup__V_197_197;
#line 781 "startup.m"
    MR_Word startup__V_203_203;

#line 773 "startup.m"
    startup__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 4)));
#line 773 "startup.m"
    startup__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 5)));
#line 773 "startup.m"
    startup__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 6)));
#line 773 "startup.m"
    startup__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 7)));
#line 773 "startup.m"
    startup__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 8)));
#line 773 "startup.m"
    startup__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__V_11_11, (MR_Integer) 9)));
#line 773 "startup.m"
    startup__NPS_4 = (startup__V_10_10 + (MR_Integer) 1);
#line 774 "startup.m"
    {
#line 774 "startup.m"
      startup__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 774 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_13_13, 0) = ((MR_Box) (&startup_scalar_common_11[0]));
#line 774 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_13_13, 1) = ((MR_Box) (startup__summarize_proc_dynamics_with_coverage_data_2_p_0_1));
#line 774 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 774 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_13_13, 3) = ((MR_Box) (startup__V_43_43));
#line 774 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_13_13, 4) = ((MR_Box) (startup__V_44_44));
#line 774 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_13_13, 5) = ((MR_Box) (startup__V_50_50));
#line 774 "startup.m"
    }
#line 778 "startup.m"
    {
#line 778 "startup.m"
      startup__V_21_21 = measurements__zero_own_prof_info_0_f_0();
    }
#line 774 "startup.m"
    {
#line 774 "startup.m"
      startup__conv3_V_15_15 = mercury__array__init_2_f_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, startup__NPS_4, ((MR_Box) (startup__V_21_21)));
    }
#line 774 "startup.m"
    startup__V_15_15 = (MR_ArrayPtr) startup__conv3_V_15_15;
#line 779 "startup.m"
    {
#line 779 "startup.m"
      startup__V_22_22 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 774 "startup.m"
    {
#line 774 "startup.m"
      startup__conv4_V_16_16 = mercury__array__init_2_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__NPS_4, ((MR_Box) (startup__V_22_22)));
    }
#line 774 "startup.m"
    startup__V_16_16 = (MR_ArrayPtr) startup__conv4_V_16_16;
#line 780 "startup.m"
    {
#line 780 "startup.m"
      startup__V_23_23 = measurements__zero_static_coverage_0_f_0();
    }
#line 774 "startup.m"
    {
#line 774 "startup.m"
      startup__conv5_V_17_17 = mercury__array__init_2_f_0((MR_Word) &measurements__measurements__type_ctor_info_static_coverage_info_0, startup__NPS_4, ((MR_Box) (startup__V_23_23)));
    }
#line 774 "startup.m"
    startup__V_17_17 = (MR_ArrayPtr) startup__conv5_V_17_17;
#line 774 "startup.m"
    {
#line 774 "startup.m"
      array_util__array_foldl3_from_1_8_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &startup_scalar_common_1[14], (MR_Word) &startup_scalar_common_1[15], (MR_Word) &startup_scalar_common_1[16], startup__V_13_13, (MR_ArrayPtr) startup__V_33_33, ((MR_Box) (startup__V_15_15)), &startup__conv8_PSOwnArray_5, ((MR_Box) (startup__V_16_16)), &startup__conv7_PSDescArray_6, ((MR_Box) (startup__V_17_17)), &startup__conv6_CoverageArray_7);
    }
#line 774 "startup.m"
    startup__PSOwnArray_5 = ((MR_ArrayPtr) startup__conv8_PSOwnArray_5);
#line 774 "startup.m"
    startup__PSDescArray_6 = ((MR_ArrayPtr) startup__conv7_PSDescArray_6);
#line 774 "startup.m"
    startup__CoverageArray_7 = ((MR_ArrayPtr) startup__conv6_CoverageArray_7);
#line 781 "startup.m"
    startup__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 0)));
#line 781 "startup.m"
    startup__V_178_178 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 1)));
#line 781 "startup.m"
    startup__V_179_179 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 2)));
#line 781 "startup.m"
    startup__V_180_180 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 3)));
#line 781 "startup.m"
    startup__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 4)));
#line 781 "startup.m"
    startup__V_182_182 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 5)));
#line 781 "startup.m"
    startup__V_183_183 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 6)));
#line 781 "startup.m"
    startup__V_184_184 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 7)));
#line 781 "startup.m"
    startup__V_185_185 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 8)));
#line 781 "startup.m"
    startup__V_186_186 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 9)));
#line 781 "startup.m"
    startup__V_187_187 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 10)));
#line 781 "startup.m"
    startup__V_188_188 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 11)));
#line 781 "startup.m"
    startup__V_189_189 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 12)));
#line 781 "startup.m"
    startup__V_190_190 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 13)));
#line 781 "startup.m"
    startup__V_191_191 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 14)));
#line 781 "startup.m"
    startup__V_192_192 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 15)));
#line 781 "startup.m"
    startup__V_193_193 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 16)));
#line 781 "startup.m"
    startup__V_194_194 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 17)));
#line 781 "startup.m"
    startup__V_195_195 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 18)));
#line 781 "startup.m"
    startup__V_196_196 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 19)));
#line 781 "startup.m"
    startup__V_197_197 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 20)));
#line 781 "startup.m"
    startup__V_198_198 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 21)));
#line 781 "startup.m"
    startup__V_199_199 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 22)));
#line 781 "startup.m"
    startup__V_200_200 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 23)));
#line 781 "startup.m"
    startup__V_201_201 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 24)));
#line 781 "startup.m"
    startup__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 25)));
#line 781 "startup.m"
    startup__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 26)));
#line 781 "startup.m"
    startup__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 27)));
#line 781 "startup.m"
    startup__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_0_8, (MR_Integer) 28)));
#line 782 "startup.m"
    startup__V_206_206 = startup__V_177_177;
#line 782 "startup.m"
    startup__V_207_207 = startup__V_178_178;
#line 782 "startup.m"
    startup__V_208_208 = startup__V_179_179;
#line 782 "startup.m"
    startup__V_209_209 = startup__V_180_180;
#line 782 "startup.m"
    startup__V_210_210 = startup__V_181_181;
#line 782 "startup.m"
    startup__V_211_211 = startup__V_182_182;
#line 782 "startup.m"
    startup__V_212_212 = startup__V_183_183;
#line 782 "startup.m"
    startup__V_213_213 = startup__V_184_184;
#line 782 "startup.m"
    startup__V_214_214 = startup__V_185_185;
#line 782 "startup.m"
    startup__V_215_215 = startup__V_186_186;
#line 782 "startup.m"
    startup__V_216_216 = startup__V_187_187;
#line 782 "startup.m"
    startup__V_217_217 = startup__V_188_188;
#line 782 "startup.m"
    startup__V_218_218 = startup__V_189_189;
#line 782 "startup.m"
    startup__V_219_219 = startup__V_190_190;
#line 782 "startup.m"
    startup__V_220_220 = startup__V_191_191;
#line 782 "startup.m"
    startup__V_221_221 = startup__V_192_192;
#line 782 "startup.m"
    startup__V_222_222 = startup__V_193_193;
#line 782 "startup.m"
    startup__V_223_223 = startup__V_194_194;
#line 782 "startup.m"
    startup__V_224_224 = startup__V_195_195;
#line 782 "startup.m"
    startup__V_225_225 = startup__PSOwnArray_5;
#line 782 "startup.m"
    startup__V_227_227 = startup__V_198_198;
#line 782 "startup.m"
    startup__V_228_228 = startup__V_199_199;
#line 782 "startup.m"
    startup__V_229_229 = startup__V_200_200;
#line 782 "startup.m"
    startup__V_230_230 = startup__V_201_201;
#line 782 "startup.m"
    startup__V_231_231 = startup__V_202_202;
#line 782 "startup.m"
    startup__V_233_233 = startup__V_204_204;
#line 782 "startup.m"
    startup__V_234_234 = startup__V_205_205;
#line 783 "startup.m"
    {
#line 783 "startup.m"
      startup__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(1), startup__V_27_27, 0) = ((MR_Box) (startup__CoverageArray_7));
#line 783 "startup.m"
    }
#line 783 "startup.m"
    {
#line 783 "startup.m"
      MR_Word base;
#line 783 "startup.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 783 "startup.m"
      *startup__STATE_VARIABLE_Deep_9 = base;
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__V_206_206));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__V_207_207));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__V_208_208));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__V_209_209));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__V_210_210));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__V_211_211));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__V_212_212));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__V_213_213));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__V_214_214));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__V_215_215));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__V_216_216));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__V_217_217));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__V_218_218));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__V_219_219));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__V_220_220));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__V_221_221));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__V_222_222));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__V_223_223));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__V_224_224));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__V_225_225));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__PSDescArray_6));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__V_227_227));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__V_228_228));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__V_229_229));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__V_230_230));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__V_231_231));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__V_27_27));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__V_233_233));
#line 783 "startup.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__V_234_234));
#line 783 "startup.m"
    }
#line 770 "startup.m"
  }
#line 768 "startup.m"
}

#line 742 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamic_9_p_0(
#line 742 "startup.m"
  MR_ArrayPtr startup__PDOwnArray_10,
#line 742 "startup.m"
  MR_ArrayPtr startup__PDDescArray_11,
#line 742 "startup.m"
  MR_ArrayPtr startup__PDCompTableArray_12,
#line 742 "startup.m"
  MR_Integer startup__PDI_13,
#line 742 "startup.m"
  MR_Word startup__PD_14,
#line 742 "startup.m"
  MR_ArrayPtr startup__PSOwnArray0_15,
#line 742 "startup.m"
  MR_ArrayPtr * startup__PSOwnArray_16,
#line 742 "startup.m"
  MR_ArrayPtr startup__PSDescArray0_17,
#line 742 "startup.m"
  MR_ArrayPtr * startup__PSDescArray_18)
#line 742 "startup.m"
{
#line 750 "startup.m"
  {
#line 750 "startup.m"
    MR_bool startup__succeeded;
#line 750 "startup.m"
    MR_Word startup__PSPtr_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_14, (MR_Integer) 0)));
#line 750 "startup.m"
    MR_Word startup__PDPtr_20 = (MR_Word) startup__PDI_13;
#line 750 "startup.m"
    MR_Word startup__PDOwn_21;
#line 750 "startup.m"
    MR_Word startup__PDDesc0_22;
#line 750 "startup.m"
    MR_Word startup__PDCompTable_23;
#line 750 "startup.m"
    MR_Word startup__PDDesc_25;
#line 750 "startup.m"
    MR_Word startup__PSOwn0_26;
#line 750 "startup.m"
    MR_Word startup__PSDesc0_27;
#line 750 "startup.m"
    MR_Word startup__PSOwn_28;
#line 750 "startup.m"
    MR_Word startup__PSDesc_29;
#line 750 "startup.m"
    MR_ArrayPtr startup__V_30_30;
#line 750 "startup.m"
    MR_ArrayPtr startup__V_31_31;
#line 751 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_14, (MR_Integer) 1)));
#line 751 "startup.m"
    MR_Word startup__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_14, (MR_Integer) 2)));
#line 758 "startup.m"
    MR_Word startup__InnerTotal_24;
#line 756 "startup.m"
    MR_Box startup__conv0_InnerTotal_24;
#line 765 "startup.m"
    MR_Box startup__conv1_V_30_30;
#line 766 "startup.m"
    MR_Box startup__conv2_V_31_31;

#line 753 "startup.m"
    {
#line 753 "startup.m"
      profile__lookup_pd_own_3_p_0(startup__PDOwnArray_10, startup__PDPtr_20, &startup__PDOwn_21);
    }
#line 754 "startup.m"
    {
#line 754 "startup.m"
      profile__lookup_pd_desc_3_p_0(startup__PDDescArray_11, startup__PDPtr_20, &startup__PDDesc0_22);
    }
#line 755 "startup.m"
    {
#line 755 "startup.m"
      profile__lookup_pd_comp_table_3_p_0(startup__PDCompTableArray_12, startup__PDPtr_20, &startup__PDCompTable_23);
    }
#line 756 "startup.m"
    {
#line 756 "startup.m"
      startup__succeeded = mercury__map__search_3_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0, (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, startup__PDCompTable_23, ((MR_Box) (startup__PSPtr_19)), &startup__conv0_InnerTotal_24);
    }
#line 756 "startup.m"
    if (startup__succeeded)
#line 756 "startup.m"
      {
#line 756 "startup.m"
        startup__InnerTotal_24 = ((MR_Word) startup__conv0_InnerTotal_24);
#line 756 "startup.m"
        startup__succeeded = MR_TRUE;
#line 756 "startup.m"
      }
#line 758 "startup.m"
    if (startup__succeeded)
#line 757 "startup.m"
      {
#line 757 "startup.m"
        startup__PDDesc_25 = measurements__subtract_inherit_from_inherit_2_f_0(startup__InnerTotal_24, startup__PDDesc0_22);
      }
#line 758 "startup.m"
    else
#line 759 "startup.m"
      startup__PDDesc_25 = startup__PDDesc0_22;
#line 761 "startup.m"
    {
#line 761 "startup.m"
      profile__lookup_ps_own_3_p_0(startup__PSOwnArray0_15, startup__PSPtr_19, &startup__PSOwn0_26);
    }
#line 762 "startup.m"
    {
#line 762 "startup.m"
      profile__lookup_ps_desc_3_p_0(startup__PSDescArray0_17, startup__PSPtr_19, &startup__PSDesc0_27);
    }
#line 763 "startup.m"
    {
#line 763 "startup.m"
      startup__PSOwn_28 = measurements__add_own_to_own_2_f_0(startup__PDOwn_21, startup__PSOwn0_26);
    }
#line 764 "startup.m"
    {
#line 764 "startup.m"
      startup__PSDesc_29 = measurements__add_inherit_to_inherit_2_f_0(startup__PDDesc_25, startup__PSDesc0_27);
    }
#line 765 "startup.m"
    {
#line 765 "startup.m"
      startup__conv1_V_30_30 = array_util__u_1_f_0((MR_Word) &startup_scalar_common_1[14], ((MR_Box) (startup__PSOwnArray0_15)));
    }
#line 765 "startup.m"
    startup__V_30_30 = ((MR_ArrayPtr) startup__conv1_V_30_30);
#line 765 "startup.m"
    {
#line 765 "startup.m"
      profile__update_ps_own_4_p_0(startup__PSPtr_19, startup__PSOwn_28, startup__V_30_30, startup__PSOwnArray_16);
    }
#line 766 "startup.m"
    {
#line 766 "startup.m"
      startup__conv2_V_31_31 = array_util__u_1_f_0((MR_Word) &startup_scalar_common_1[15], ((MR_Box) (startup__PSDescArray0_17)));
    }
#line 766 "startup.m"
    startup__V_31_31 = ((MR_ArrayPtr) startup__conv2_V_31_31);
#line 766 "startup.m"
    {
#line 766 "startup.m"
      profile__update_ps_desc_4_p_0(startup__PSPtr_19, startup__PSDesc_29, startup__V_31_31, startup__PSDescArray_18);
#line 766 "startup.m"
      return;
    }
#line 750 "startup.m"
  }
#line 742 "startup.m"
}

#line 732 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0_1(
#line 732 "startup.m"
  MR_Box startup__closure_arg,
#line 732 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 732 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 732 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 732 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 732 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 732 "startup.m"
  MR_Box * startup__wrapper_arg_6)
#line 732 "startup.m"
{
#line 732 "startup.m"
  {
#line 732 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 732 "startup.m"
    MR_ArrayPtr startup__conv1_PSOwnArray_16;
#line 732 "startup.m"
    MR_ArrayPtr startup__conv0_PSDescArray_18;

#line 732 "startup.m"
    {
#line 732 "startup.m"
      startup__summarize_proc_dynamic_9_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv1_PSOwnArray_16, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv0_PSDescArray_18);
    }
#line 732 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv1_PSOwnArray_16));
#line 732 "startup.m"
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv0_PSDescArray_18));
#line 732 "startup.m"
  }
#line 732 "startup.m"
}

#line 727 "startup.m"
static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0(
#line 727 "startup.m"
  MR_Word startup__Deep0_3,
#line 727 "startup.m"
  MR_Word * startup__Deep_4)
#line 727 "startup.m"
{
#line 729 "startup.m"
  {
#line 729 "startup.m"
    MR_bool startup__succeeded;
#line 729 "startup.m"
    MR_ArrayPtr startup__PSOwnArray0_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 19)));
#line 729 "startup.m"
    MR_ArrayPtr startup__PSDescArray0_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 20)));
#line 729 "startup.m"
    MR_ArrayPtr startup__PSOwnArray_7;
#line 729 "startup.m"
    MR_ArrayPtr startup__PSDescArray_8;
#line 729 "startup.m"
    MR_Word startup__V_9_9;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_11_11;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_12_12;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 6)));
#line 729 "startup.m"
    MR_ArrayPtr startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 16)));
#line 729 "startup.m"
    MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 17)));
#line 729 "startup.m"
    MR_ArrayPtr startup__V_39_39 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 23)));
#line 729 "startup.m"
    MR_Word startup__V_185_185;
#line 729 "startup.m"
    MR_String startup__V_186_186;
#line 729 "startup.m"
    MR_String startup__V_187_187;
#line 729 "startup.m"
    MR_String startup__V_188_188;
#line 729 "startup.m"
    MR_Word startup__V_189_189;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_190_190;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_191_191;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_192_192;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_193_193;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_194_194;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_195_195;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_196_196;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_197_197;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_198_198;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_199_199;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_200_200;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_201_201;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_202_202;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_203_203;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_206_206;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_207_207;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_208_208;
#line 729 "startup.m"
    MR_ArrayPtr startup__V_209_209;
#line 729 "startup.m"
    MR_Word startup__V_210_210;
#line 729 "startup.m"
    MR_Word startup__V_211_211;
#line 729 "startup.m"
    MR_Word startup__V_212_212;
#line 729 "startup.m"
    MR_Word startup__V_213_213;
#line 730 "startup.m"
    MR_Word startup__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 0)));
#line 730 "startup.m"
    MR_String startup__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 1)));
#line 730 "startup.m"
    MR_String startup__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 2)));
#line 730 "startup.m"
    MR_String startup__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 3)));
#line 730 "startup.m"
    MR_Word startup__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 4)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 5)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 7)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 8)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 9)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 10)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_28_28 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 11)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 12)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 13)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 14)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 15)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 18)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 21)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 22)));
#line 730 "startup.m"
    MR_ArrayPtr startup__V_40_40 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 24)));
#line 730 "startup.m"
    MR_Word startup__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 25)));
#line 730 "startup.m"
    MR_Word startup__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 26)));
#line 730 "startup.m"
    MR_Word startup__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 27)));
#line 730 "startup.m"
    MR_Word startup__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 28)));
#line 732 "startup.m"
    MR_ArrayPtr startup__conv2_V_11_11;
#line 732 "startup.m"
    MR_ArrayPtr startup__conv3_V_12_12;
#line 732 "startup.m"
    MR_Box startup__conv5_PSOwnArray_7;
#line 732 "startup.m"
    MR_Box startup__conv4_PSDescArray_8;
#line 738 "startup.m"
    MR_ArrayPtr startup__V_204_204;
#line 738 "startup.m"
    MR_ArrayPtr startup__V_205_205;

#line 732 "startup.m"
    {
#line 732 "startup.m"
      startup__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 732 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_9_9, 0) = ((MR_Box) (&startup_scalar_common_10[0]));
#line 732 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_9_9, 1) = ((MR_Box) (startup__summarize_proc_dynamics_2_p_0_1));
#line 732 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_9_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 732 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_9_9, 3) = ((MR_Box) (startup__V_33_33));
#line 732 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_9_9, 4) = ((MR_Box) (startup__V_34_34));
#line 732 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_9_9, 5) = ((MR_Box) (startup__V_39_39));
#line 732 "startup.m"
    }
#line 732 "startup.m"
    {
#line 732 "startup.m"
      startup__conv2_V_11_11 = mercury__array__copy_1_f_0((MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0, (MR_ArrayPtr) startup__PSOwnArray0_5);
    }
#line 732 "startup.m"
    startup__V_11_11 = (MR_ArrayPtr) startup__conv2_V_11_11;
#line 732 "startup.m"
    {
#line 732 "startup.m"
      startup__conv3_V_12_12 = mercury__array__copy_1_f_0((MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0, (MR_ArrayPtr) startup__PSDescArray0_6);
    }
#line 732 "startup.m"
    startup__V_12_12 = (MR_ArrayPtr) startup__conv3_V_12_12;
#line 732 "startup.m"
    {
#line 732 "startup.m"
      array_util__array_foldl2_from_1_6_p_1((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &startup_scalar_common_1[14], (MR_Word) &startup_scalar_common_1[15], startup__V_9_9, (MR_ArrayPtr) startup__V_23_23, ((MR_Box) (startup__V_11_11)), &startup__conv5_PSOwnArray_7, ((MR_Box) (startup__V_12_12)), &startup__conv4_PSDescArray_8);
    }
#line 732 "startup.m"
    startup__PSOwnArray_7 = ((MR_ArrayPtr) startup__conv5_PSOwnArray_7);
#line 732 "startup.m"
    startup__PSDescArray_8 = ((MR_ArrayPtr) startup__conv4_PSDescArray_8);
#line 738 "startup.m"
    startup__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 0)));
#line 738 "startup.m"
    startup__V_186_186 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 1)));
#line 738 "startup.m"
    startup__V_187_187 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 2)));
#line 738 "startup.m"
    startup__V_188_188 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 3)));
#line 738 "startup.m"
    startup__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 4)));
#line 738 "startup.m"
    startup__V_190_190 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 5)));
#line 738 "startup.m"
    startup__V_191_191 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 6)));
#line 738 "startup.m"
    startup__V_192_192 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 7)));
#line 738 "startup.m"
    startup__V_193_193 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 8)));
#line 738 "startup.m"
    startup__V_194_194 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 9)));
#line 738 "startup.m"
    startup__V_195_195 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 10)));
#line 738 "startup.m"
    startup__V_196_196 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 11)));
#line 738 "startup.m"
    startup__V_197_197 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 12)));
#line 738 "startup.m"
    startup__V_198_198 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 13)));
#line 738 "startup.m"
    startup__V_199_199 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 14)));
#line 738 "startup.m"
    startup__V_200_200 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 15)));
#line 738 "startup.m"
    startup__V_201_201 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 16)));
#line 738 "startup.m"
    startup__V_202_202 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 17)));
#line 738 "startup.m"
    startup__V_203_203 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 18)));
#line 738 "startup.m"
    startup__V_204_204 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 19)));
#line 738 "startup.m"
    startup__V_205_205 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 20)));
#line 738 "startup.m"
    startup__V_206_206 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 21)));
#line 738 "startup.m"
    startup__V_207_207 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 22)));
#line 738 "startup.m"
    startup__V_208_208 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 23)));
#line 738 "startup.m"
    startup__V_209_209 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 24)));
#line 738 "startup.m"
    startup__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 25)));
#line 738 "startup.m"
    startup__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 26)));
#line 738 "startup.m"
    startup__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 27)));
#line 738 "startup.m"
    startup__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__Deep0_3, (MR_Integer) 28)));
#line 738 "startup.m"
    {
#line 738 "startup.m"
      MR_Word base;
#line 738 "startup.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 738 "startup.m"
      *startup__Deep_4 = base;
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__V_185_185));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (startup__V_186_186));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (startup__V_187_187));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (startup__V_188_188));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (startup__V_189_189));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (startup__V_190_190));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (startup__V_191_191));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (startup__V_192_192));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (startup__V_193_193));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (startup__V_194_194));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (startup__V_195_195));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (startup__V_196_196));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (startup__V_197_197));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (startup__V_198_198));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (startup__V_199_199));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (startup__V_200_200));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (startup__V_201_201));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (startup__V_202_202));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (startup__V_203_203));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (startup__PSOwnArray_7));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 20) = ((MR_Box) (startup__PSDescArray_8));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 21) = ((MR_Box) (startup__V_206_206));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 22) = ((MR_Box) (startup__V_207_207));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 23) = ((MR_Box) (startup__V_208_208));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 24) = ((MR_Box) (startup__V_209_209));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 25) = ((MR_Box) (startup__V_210_210));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 26) = ((MR_Box) (startup__V_211_211));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 27) = ((MR_Box) (startup__V_212_212));
#line 738 "startup.m"
      MR_hl_field(MR_mktag(0), base, 28) = ((MR_Box) (startup__V_213_213));
#line 738 "startup.m"
    }
#line 729 "startup.m"
  }
#line 727 "startup.m"
}

#line 710 "startup.m"
static void MR_CALL 
startup__sum_call_sites_in_proc_dynamic_4_p_0(
#line 710 "startup.m"
  MR_Integer startup__HeadVar__1_5,
#line 710 "startup.m"
  MR_Word startup__CSD_6,
#line 710 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_PDOwnArray_0_13,
#line 710 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_PDOwnArray_14)
#line 710 "startup.m"
{
#line 713 "startup.m"
  {
#line 713 "startup.m"
    MR_bool startup__succeeded;

#line 713 "startup.m"
    {
#line 713 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_p_0(startup__CSD_6, startup__STATE_VARIABLE_PDOwnArray_0_13, startup__STATE_VARIABLE_PDOwnArray_14);
#line 713 "startup.m"
      return;
    }
#line 713 "startup.m"
  }
#line 710 "startup.m"
}

#line 678 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_3_7_p_0(
#line 678 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_8,
#line 678 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_9,
#line 678 "startup.m"
  MR_Word startup__CSSPtr_10,
#line 678 "startup.m"
  MR_Integer startup___Dummy_11,
#line 678 "startup.m"
  MR_Word startup__CSDPtr_12,
#line 678 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_25,
#line 678 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_26)
#line 678 "startup.m"
{
#line 685 "startup.m"
  {
#line 685 "startup.m"
    MR_bool startup__succeeded;

#line 685 "startup.m"
    {
#line 685 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(startup__CallSiteDynamics_8, startup__ProcDynamics_9, startup__CSSPtr_10, startup__CSDPtr_12, startup__STATE_VARIABLE_CallSiteCalls_0_25, startup__STATE_VARIABLE_CallSiteCalls_26);
#line 685 "startup.m"
      return;
    }
#line 685 "startup.m"
  }
#line 678 "startup.m"
}

#line 667 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0_1(
#line 667 "startup.m"
  MR_Box startup__closure_arg,
#line 667 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 667 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 667 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 667 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 667 "startup.m"
{
#line 667 "startup.m"
  {
#line 667 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 667 "startup.m"
    MR_ArrayPtr startup__conv2_STATE_VARIABLE_CallSiteCalls_26;

#line 667 "startup.m"
    {
#line 667 "startup.m"
      startup__construct_call_site_calls_3_7_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv2_STATE_VARIABLE_CallSiteCalls_26);
    }
#line 667 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv2_STATE_VARIABLE_CallSiteCalls_26));
#line 667 "startup.m"
  }
#line 667 "startup.m"
}

#line 649 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0(
#line 649 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_8,
#line 649 "startup.m"
  MR_ArrayPtr startup__ProcDynamics_9,
#line 649 "startup.m"
  MR_Integer startup__SlotNum_10,
#line 649 "startup.m"
  MR_ArrayPtr startup__CSSPtrs_11,
#line 649 "startup.m"
  MR_ArrayPtr startup__CSDArraySlots_12,
#line 649 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_19,
#line 649 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_20)
#line 649 "startup.m"
{
#line 674 "startup.m"
  while (MR_TRUE)
#line 674 "startup.m"
    {
#line 674 "startup.m"
      /* tailcall optimized into a loop */
#line 674 "startup.m"
      {
#line 674 "startup.m"
        MR_bool startup__succeeded = (startup__SlotNum_10 >= (MR_Integer) 0);

#line 674 "startup.m"
        if (startup__succeeded)
#line 659 "startup.m"
          {
#line 659 "startup.m"
            MR_Word startup__CSDArraySlot_14;
#line 659 "startup.m"
            MR_Word startup__CSSPtr_15;
#line 659 "startup.m"
            MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_25_25;
#line 659 "startup.m"
            MR_Integer startup__V_26_26;
#line 659 "startup.m"
            MR_Box startup__conv0_CSDArraySlot_14;
#line 660 "startup.m"
            MR_Box startup__conv1_CSSPtr_15;

#line 659 "startup.m"
            {
#line 659 "startup.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) startup__CSDArraySlots_12, startup__SlotNum_10, &startup__conv0_CSDArraySlot_14);
            }
#line 659 "startup.m"
            startup__CSDArraySlot_14 = ((MR_Word) startup__conv0_CSDArraySlot_14);
#line 660 "startup.m"
            {
#line 660 "startup.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) startup__CSSPtrs_11, startup__SlotNum_10, &startup__conv1_CSSPtr_15);
            }
#line 660 "startup.m"
            startup__CSSPtr_15 = ((MR_Word) startup__conv1_CSSPtr_15);
#line 665 "startup.m"
            if (((MR_tag((MR_Word) startup__CSDArraySlot_14)) == (MR_mktag((MR_Integer) 1))))
#line 666 "startup.m"
              {
#line 666 "startup.m"
                MR_ArrayPtr startup__CSDPtrs_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__CSDArraySlot_14, (MR_Integer) 1)));
#line 666 "startup.m"
                MR_Word startup__V_22_22;
#line 666 "startup.m"
                MR_Word startup__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__CSDArraySlot_14, (MR_Integer) 0)));
#line 667 "startup.m"
                MR_Box startup__conv3_STATE_VARIABLE_CallSiteCalls_25_25;

#line 667 "startup.m"
                {
#line 667 "startup.m"
                  startup__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 667 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_22_22, 0) = ((MR_Box) (&startup_scalar_common_9[0]));
#line 667 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_22_22, 1) = ((MR_Box) (startup__construct_call_site_calls_2_7_p_0_1));
#line 667 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 667 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_22_22, 3) = ((MR_Box) (startup__CallSiteDynamics_8));
#line 667 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_22_22, 4) = ((MR_Box) (startup__ProcDynamics_9));
#line 667 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_22_22, 5) = ((MR_Box) (startup__CSSPtr_15));
#line 667 "startup.m"
                }
#line 667 "startup.m"
                {
#line 667 "startup.m"
                  array_util__array_foldl_from_0_4_p_1((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &startup_scalar_common_1[11], startup__V_22_22, (MR_ArrayPtr) startup__CSDPtrs_18, ((MR_Box) (startup__STATE_VARIABLE_CallSiteCalls_0_19)), &startup__conv3_STATE_VARIABLE_CallSiteCalls_25_25);
                }
#line 667 "startup.m"
                startup__STATE_VARIABLE_CallSiteCalls_25_25 = ((MR_ArrayPtr) startup__conv3_STATE_VARIABLE_CallSiteCalls_25_25);
#line 666 "startup.m"
              }
#line 665 "startup.m"
            else
#line 662 "startup.m"
              {
#line 662 "startup.m"
                MR_Word startup__CSDPtr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSDArraySlot_14, (MR_Integer) 0)));

#line 663 "startup.m"
                {
#line 663 "startup.m"
                  startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(startup__CallSiteDynamics_8, startup__ProcDynamics_9, startup__CSSPtr_15, startup__CSDPtr_16, startup__STATE_VARIABLE_CallSiteCalls_0_19, &startup__STATE_VARIABLE_CallSiteCalls_25_25);
                }
#line 662 "startup.m"
              }
#line 672 "startup.m"
            startup__V_26_26 = (startup__SlotNum_10 - (MR_Integer) 1);
#line 672 "startup.m"
            /* direct tailcall eliminated */
#line 672 "startup.m"
            {
#line 672 "startup.m"
              MR_Integer startup__SlotNum__tmp_copy_10 = startup__V_26_26;
#line 672 "startup.m"
              MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0__tmp_copy_19 = startup__STATE_VARIABLE_CallSiteCalls_25_25;

#line 672 "startup.m"
              startup__STATE_VARIABLE_CallSiteCalls_0_19 = startup__STATE_VARIABLE_CallSiteCalls_0__tmp_copy_19;
#line 672 "startup.m"
              startup__SlotNum_10 = startup__SlotNum__tmp_copy_10;
#line 672 "startup.m"
            }
#line 672 "startup.m"
            continue;
#line 659 "startup.m"
          }
#line 674 "startup.m"
        else
#line 672 "startup.m"
          *startup__STATE_VARIABLE_CallSiteCalls_20 = startup__STATE_VARIABLE_CallSiteCalls_0_19;
#line 674 "startup.m"
      }
#line 674 "startup.m"
      break;
#line 674 "startup.m"
    }
#line 649 "startup.m"
}

#line 632 "startup.m"
static void MR_CALL 
startup__construct_call_site_calls_5_p_0(
#line 632 "startup.m"
  MR_Word startup__InitDeep_6,
#line 632 "startup.m"
  MR_Integer startup___PDI_7,
#line 632 "startup.m"
  MR_Word startup__PD_8,
#line 632 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteCalls_0_18,
#line 632 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteCalls_19)
#line 632 "startup.m"
{
#line 637 "startup.m"
  {
#line 637 "startup.m"
    MR_bool startup__succeeded;

#line 637 "startup.m"
    {
#line 637 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_p_0(startup__InitDeep_6, startup__PD_8, startup__STATE_VARIABLE_CallSiteCalls_0_18, startup__STATE_VARIABLE_CallSiteCalls_19);
#line 637 "startup.m"
      return;
    }
#line 637 "startup.m"
  }
#line 632 "startup.m"
}

#line 617 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_3_6_p_0(
#line 617 "startup.m"
  MR_ArrayPtr startup__CallSiteDynamics_7,
#line 617 "startup.m"
  MR_Word startup__CSSPtr_8,
#line 617 "startup.m"
  MR_Integer startup___Dummy_9,
#line 617 "startup.m"
  MR_Word startup__CSDPtr_10,
#line 617 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_12,
#line 617 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_13)
#line 617 "startup.m"
{
#line 626 "startup.m"
  {
#line 626 "startup.m"
    MR_bool startup__succeeded;

#line 626 "startup.m"
    {
#line 626 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_p_0(startup__CallSiteDynamics_7, startup__CSSPtr_8, startup__CSDPtr_10, startup__STATE_VARIABLE_CallSiteStaticMap_0_12, startup__STATE_VARIABLE_CallSiteStaticMap_13);
#line 626 "startup.m"
      return;
    }
#line 626 "startup.m"
  }
#line 617 "startup.m"
}

#line 608 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0_1(
#line 608 "startup.m"
  MR_Box startup__closure_arg,
#line 608 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 608 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 608 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 608 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 608 "startup.m"
{
#line 608 "startup.m"
  {
#line 608 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 608 "startup.m"
    MR_ArrayPtr startup__conv2_STATE_VARIABLE_CallSiteStaticMap_13;

#line 608 "startup.m"
    {
#line 608 "startup.m"
      startup__construct_call_site_caller_3_6_p_0(((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv2_STATE_VARIABLE_CallSiteStaticMap_13);
    }
#line 608 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv2_STATE_VARIABLE_CallSiteStaticMap_13));
#line 608 "startup.m"
  }
#line 608 "startup.m"
}

#line 591 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0(
#line 591 "startup.m"
  MR_Integer startup__SlotNum_7,
#line 591 "startup.m"
  MR_ArrayPtr startup__Deep_8,
#line 591 "startup.m"
  MR_ArrayPtr startup__CSSPtrs_9,
#line 591 "startup.m"
  MR_ArrayPtr startup__CSDArraySlots_10,
#line 591 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_17,
#line 591 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_18)
#line 591 "startup.m"
{
#line 613 "startup.m"
  while (MR_TRUE)
#line 613 "startup.m"
    {
#line 613 "startup.m"
      /* tailcall optimized into a loop */
#line 613 "startup.m"
      {
#line 613 "startup.m"
        MR_bool startup__succeeded = (startup__SlotNum_7 >= (MR_Integer) 0);

#line 613 "startup.m"
        if (startup__succeeded)
#line 600 "startup.m"
          {
#line 600 "startup.m"
            MR_Word startup__CSDArraySlot_12;
#line 600 "startup.m"
            MR_Word startup__CSSPtr_13;
#line 600 "startup.m"
            MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_23_23;
#line 600 "startup.m"
            MR_Integer startup__V_24_24;
#line 600 "startup.m"
            MR_Box startup__conv0_CSDArraySlot_12;
#line 601 "startup.m"
            MR_Box startup__conv1_CSSPtr_13;

#line 600 "startup.m"
            {
#line 600 "startup.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0, (MR_ArrayPtr) startup__CSDArraySlots_10, startup__SlotNum_7, &startup__conv0_CSDArraySlot_12);
            }
#line 600 "startup.m"
            startup__CSDArraySlot_12 = ((MR_Word) startup__conv0_CSDArraySlot_12);
#line 601 "startup.m"
            {
#line 601 "startup.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) startup__CSSPtrs_9, startup__SlotNum_7, &startup__conv1_CSSPtr_13);
            }
#line 601 "startup.m"
            startup__CSSPtr_13 = ((MR_Word) startup__conv1_CSSPtr_13);
#line 606 "startup.m"
            if (((MR_tag((MR_Word) startup__CSDArraySlot_12)) == (MR_mktag((MR_Integer) 1))))
#line 607 "startup.m"
              {
#line 607 "startup.m"
                MR_ArrayPtr startup__CSDPtrs_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), startup__CSDArraySlot_12, (MR_Integer) 1)));
#line 607 "startup.m"
                MR_Word startup__V_20_20;
#line 607 "startup.m"
                MR_Word startup__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__CSDArraySlot_12, (MR_Integer) 0)));
#line 608 "startup.m"
                MR_Box startup__conv3_STATE_VARIABLE_CallSiteStaticMap_23_23;

#line 608 "startup.m"
                {
#line 608 "startup.m"
                  startup__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 608 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_20_20, 0) = ((MR_Box) (&startup_scalar_common_3[2]));
#line 608 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_20_20, 1) = ((MR_Box) (startup__construct_call_site_caller_2_6_p_0_1));
#line 608 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 608 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_20_20, 3) = ((MR_Box) (startup__Deep_8));
#line 608 "startup.m"
                  MR_hl_field(MR_mktag(0), startup__V_20_20, 4) = ((MR_Box) (startup__CSSPtr_13));
#line 608 "startup.m"
                }
#line 608 "startup.m"
                {
#line 608 "startup.m"
                  array_util__array_foldl_from_0_4_p_1((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, (MR_Word) &startup_scalar_common_1[10], startup__V_20_20, (MR_ArrayPtr) startup__CSDPtrs_16, ((MR_Box) (startup__STATE_VARIABLE_CallSiteStaticMap_0_17)), &startup__conv3_STATE_VARIABLE_CallSiteStaticMap_23_23);
                }
#line 608 "startup.m"
                startup__STATE_VARIABLE_CallSiteStaticMap_23_23 = ((MR_ArrayPtr) startup__conv3_STATE_VARIABLE_CallSiteStaticMap_23_23);
#line 607 "startup.m"
              }
#line 606 "startup.m"
            else
#line 603 "startup.m"
              {
#line 603 "startup.m"
                MR_Word startup__CSDPtr_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSDArraySlot_12, (MR_Integer) 0)));

#line 624 "startup.m"
                {
#line 624 "startup.m"
                  startup__succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(startup__Deep_8, startup__CSDPtr_14);
                }
#line 626 "startup.m"
                if (startup__succeeded)
#line 625 "startup.m"
                  {
#line 625 "startup.m"
                    profile__update_call_site_static_map_4_p_0(startup__CSDPtr_14, startup__CSSPtr_13, startup__STATE_VARIABLE_CallSiteStaticMap_0_17, &startup__STATE_VARIABLE_CallSiteStaticMap_23_23);
                  }
#line 626 "startup.m"
                else
#line 625 "startup.m"
                  startup__STATE_VARIABLE_CallSiteStaticMap_23_23 = startup__STATE_VARIABLE_CallSiteStaticMap_0_17;
#line 603 "startup.m"
              }
#line 611 "startup.m"
            startup__V_24_24 = (startup__SlotNum_7 - (MR_Integer) 1);
#line 611 "startup.m"
            /* direct tailcall eliminated */
#line 611 "startup.m"
            {
#line 611 "startup.m"
              MR_Integer startup__SlotNum__tmp_copy_7 = startup__V_24_24;
#line 611 "startup.m"
              MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0__tmp_copy_17 = startup__STATE_VARIABLE_CallSiteStaticMap_23_23;

#line 611 "startup.m"
              startup__STATE_VARIABLE_CallSiteStaticMap_0_17 = startup__STATE_VARIABLE_CallSiteStaticMap_0__tmp_copy_17;
#line 611 "startup.m"
              startup__SlotNum_7 = startup__SlotNum__tmp_copy_7;
#line 611 "startup.m"
            }
#line 611 "startup.m"
            continue;
#line 600 "startup.m"
          }
#line 613 "startup.m"
        else
#line 611 "startup.m"
          *startup__STATE_VARIABLE_CallSiteStaticMap_18 = startup__STATE_VARIABLE_CallSiteStaticMap_0_17;
#line 613 "startup.m"
      }
#line 613 "startup.m"
      break;
#line 613 "startup.m"
    }
#line 591 "startup.m"
}

#line 577 "startup.m"
static void MR_CALL 
startup__construct_call_site_caller_5_p_0(
#line 577 "startup.m"
  MR_Word startup__InitDeep_6,
#line 577 "startup.m"
  MR_Integer startup___PDI_7,
#line 577 "startup.m"
  MR_Word startup__PD_8,
#line 577 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStaticMap_0_15,
#line 577 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStaticMap_16)
#line 577 "startup.m"
{
#line 581 "startup.m"
  {
#line 581 "startup.m"
    MR_bool startup__succeeded;

#line 581 "startup.m"
    {
#line 581 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_p_0(startup__InitDeep_6, startup__PD_8, startup__STATE_VARIABLE_CallSiteStaticMap_0_15, startup__STATE_VARIABLE_CallSiteStaticMap_16);
#line 581 "startup.m"
      return;
    }
#line 581 "startup.m"
  }
#line 577 "startup.m"
}

#line 560 "startup.m"
static void MR_CALL 
startup__construct_proc_callers_5_p_0(
#line 560 "startup.m"
  MR_Word startup__InitDeep_6,
#line 560 "startup.m"
  MR_Integer startup__CSDI_7,
#line 560 "startup.m"
  MR_Word startup__CSD_8,
#line 560 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_ProcCallers_0_15,
#line 560 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_ProcCallers_16)
#line 560 "startup.m"
{
#line 565 "startup.m"
  {
#line 565 "startup.m"
    MR_bool startup__succeeded;
#line 565 "startup.m"
    MR_Word startup__PDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_8, (MR_Integer) 1)));
#line 566 "startup.m"
    MR_Word startup__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_8, (MR_Integer) 0)));
#line 566 "startup.m"
    MR_Word startup__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_8, (MR_Integer) 2)));
#line 567 "startup.m"
    MR_ArrayPtr startup__V_17_17 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
#line 567 "startup.m"
    MR_Word startup__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
#line 567 "startup.m"
    MR_Word startup__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
#line 567 "startup.m"
    MR_ArrayPtr startup__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
#line 567 "startup.m"
    MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
#line 567 "startup.m"
    MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));

#line 567 "startup.m"
    {
#line 567 "startup.m"
      startup__succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(startup__V_17_17, startup__PDPtr_10);
    }
#line 573 "startup.m"
    if (startup__succeeded)
#line 568 "startup.m"
      {
#line 568 "startup.m"
        MR_Word startup__PD_11;
#line 568 "startup.m"
        MR_Word startup__PSPtr_12;
#line 568 "startup.m"
        MR_Word startup__Callers0_13;
#line 568 "startup.m"
        MR_Word startup__Callers_14;
#line 568 "startup.m"
        MR_ArrayPtr startup__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 3)));
#line 568 "startup.m"
        MR_Word startup__V_19_19;
#line 568 "startup.m"
        MR_Word startup__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 0)));
#line 568 "startup.m"
        MR_Word startup__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 1)));
#line 568 "startup.m"
        MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 2)));
#line 568 "startup.m"
        MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 4)));
#line 568 "startup.m"
        MR_ArrayPtr startup__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_6, (MR_Integer) 5)));
#line 569 "startup.m"
        MR_ArrayPtr startup__V_33_33;
#line 569 "startup.m"
        MR_Word startup__V_34_34;

#line 568 "startup.m"
        {
#line 568 "startup.m"
          profile__lookup_proc_dynamics_3_p_0(startup__V_18_18, startup__PDPtr_10, &startup__PD_11);
        }
#line 569 "startup.m"
        startup__PSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_11, (MR_Integer) 0)));
#line 569 "startup.m"
        startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_11, (MR_Integer) 1)));
#line 569 "startup.m"
        startup__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_11, (MR_Integer) 2)));
#line 570 "startup.m"
        {
#line 570 "startup.m"
          profile__lookup_proc_callers_3_p_0(startup__STATE_VARIABLE_ProcCallers_0_15, startup__PSPtr_12, &startup__Callers0_13);
        }
#line 571 "startup.m"
        startup__V_19_19 = (MR_Word) startup__CSDI_7;
#line 571 "startup.m"
        {
#line 571 "startup.m"
          startup__Callers_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "startup.m"
          MR_hl_field(MR_mktag(1), startup__Callers_14, 0) = ((MR_Box) (startup__V_19_19));
#line 571 "startup.m"
          MR_hl_field(MR_mktag(1), startup__Callers_14, 1) = ((MR_Box) (startup__Callers0_13));
#line 571 "startup.m"
        }
#line 572 "startup.m"
        {
#line 572 "startup.m"
          profile__update_proc_callers_4_p_0(startup__PSPtr_12, startup__Callers_14, startup__STATE_VARIABLE_ProcCallers_0_15, startup__STATE_VARIABLE_ProcCallers_16);
#line 572 "startup.m"
          return;
        }
#line 568 "startup.m"
      }
#line 573 "startup.m"
    else
#line 572 "startup.m"
      *startup__STATE_VARIABLE_ProcCallers_16 = startup__STATE_VARIABLE_ProcCallers_0_15;
#line 565 "startup.m"
  }
#line 560 "startup.m"
}

#line 528 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_2_8_p_0(
#line 528 "startup.m"
  MR_Word startup__InitDeep_9,
#line 528 "startup.m"
  MR_ArrayPtr startup__CliqueIndex_10,
#line 528 "startup.m"
  MR_Word startup__ParentCliquePtr_11,
#line 528 "startup.m"
  MR_Word startup__CSDPtr_12,
#line 528 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueParents_0_21,
#line 528 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueParents_22,
#line 528 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueMaybeChildren_0_23,
#line 528 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueMaybeChildren_24)
#line 528 "startup.m"
{
#line 536 "startup.m"
  {
#line 536 "startup.m"
    MR_bool startup__succeeded;
#line 536 "startup.m"
    MR_Integer startup__CSDI_15 = (MR_Integer) startup__CSDPtr_12;

#line 538 "startup.m"
    startup__succeeded = (startup__CSDI_15 > (MR_Integer) 0);
#line 554 "startup.m"
    if (startup__succeeded)
#line 539 "startup.m"
      {
#line 539 "startup.m"
        MR_Word startup__CSD_16;
#line 539 "startup.m"
        MR_Word startup__ChildPDPtr_17;
#line 539 "startup.m"
        MR_Integer startup__ChildPDI_18;
#line 539 "startup.m"
        MR_ArrayPtr startup__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 2)));
#line 539 "startup.m"
        MR_Word startup__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 0)));
#line 539 "startup.m"
        MR_Word startup__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 1)));
#line 539 "startup.m"
        MR_ArrayPtr startup__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 3)));
#line 539 "startup.m"
        MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 4)));
#line 539 "startup.m"
        MR_ArrayPtr startup__V_35_35 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 5)));
#line 539 "startup.m"
        MR_Box startup__conv0_CSD_16;
#line 540 "startup.m"
        MR_Word startup__V_36_36;
#line 540 "startup.m"
        MR_Word startup__V_37_37;

#line 539 "startup.m"
        {
#line 539 "startup.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) startup__V_26_26, startup__CSDI_15, &startup__conv0_CSD_16);
        }
#line 539 "startup.m"
        startup__CSD_16 = ((MR_Word) startup__conv0_CSD_16);
#line 540 "startup.m"
        startup__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 0)));
#line 540 "startup.m"
        startup__ChildPDPtr_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 1)));
#line 540 "startup.m"
        startup__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD_16, (MR_Integer) 2)));
#line 541 "startup.m"
        startup__ChildPDI_18 = (MR_Integer) startup__ChildPDPtr_17;
#line 542 "startup.m"
        startup__succeeded = (startup__ChildPDI_18 > (MR_Integer) 0);
#line 551 "startup.m"
        if (startup__succeeded)
#line 543 "startup.m"
          {
#line 543 "startup.m"
            MR_Word startup__ChildCliquePtr_19;
#line 543 "startup.m"
            MR_Box startup__conv1_ChildCliquePtr_19;
#line 544 "startup.m"
            MR_Integer startup__V_43_43;
#line 544 "startup.m"
            MR_Integer startup__V_44_44;

#line 543 "startup.m"
            {
#line 543 "startup.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_ArrayPtr) startup__CliqueIndex_10, startup__ChildPDI_18, &startup__conv1_ChildCliquePtr_19);
            }
#line 543 "startup.m"
            startup__ChildCliquePtr_19 = ((MR_Word) startup__conv1_ChildCliquePtr_19);
#line 544 "startup.m"
            startup__V_43_43 = (MR_Integer) startup__ChildCliquePtr_19;
#line 544 "startup.m"
            startup__V_44_44 = (MR_Integer) startup__ParentCliquePtr_11;
#line 544 "startup.m"
            startup__succeeded = (startup__V_43_43 == startup__V_44_44);
#line 544 "startup.m"
            startup__succeeded = !(startup__succeeded);
#line 548 "startup.m"
            if (startup__succeeded)
#line 545 "startup.m"
              {
#line 545 "startup.m"
                MR_Integer startup__ChildCliqueNum_20 = (MR_Integer) startup__ChildCliquePtr_19;
#line 545 "startup.m"
                MR_Word startup__V_29_29;
#line 546 "startup.m"
                MR_ArrayPtr startup__conv2_STATE_VARIABLE_CliqueParents_22;
#line 547 "startup.m"
                MR_ArrayPtr startup__conv3_STATE_VARIABLE_CliqueMaybeChildren_24;

#line 546 "startup.m"
                {
#line 546 "startup.m"
                  mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__ChildCliqueNum_20, ((MR_Box) (startup__CSDPtr_12)), (MR_ArrayPtr) startup__STATE_VARIABLE_CliqueParents_0_21, &startup__conv2_STATE_VARIABLE_CliqueParents_22);
                }
#line 546 "startup.m"
                *startup__STATE_VARIABLE_CliqueParents_22 = (MR_ArrayPtr) startup__conv2_STATE_VARIABLE_CliqueParents_22;
#line 547 "startup.m"
                {
#line 547 "startup.m"
                  startup__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 547 "startup.m"
                  MR_hl_field(MR_mktag(1), startup__V_29_29, 0) = ((MR_Box) (startup__ChildCliquePtr_19));
#line 547 "startup.m"
                }
#line 547 "startup.m"
                {
#line 547 "startup.m"
                  mercury__array__set_4_p_0((MR_Word) &startup_scalar_common_1[5], startup__CSDI_15, ((MR_Box) (startup__V_29_29)), (MR_ArrayPtr) startup__STATE_VARIABLE_CliqueMaybeChildren_0_23, &startup__conv3_STATE_VARIABLE_CliqueMaybeChildren_24);
                }
#line 547 "startup.m"
                *startup__STATE_VARIABLE_CliqueMaybeChildren_24 = (MR_ArrayPtr) startup__conv3_STATE_VARIABLE_CliqueMaybeChildren_24;
#line 545 "startup.m"
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
#line 543 "startup.m"
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
#line 539 "startup.m"
      }
#line 554 "startup.m"
    else
#line 555 "startup.m"
      {
#line 555 "startup.m"
        *startup__STATE_VARIABLE_CliqueMaybeChildren_24 = startup__STATE_VARIABLE_CliqueMaybeChildren_0_23;
#line 555 "startup.m"
        *startup__STATE_VARIABLE_CliqueParents_22 = startup__STATE_VARIABLE_CliqueParents_0_21;
#line 555 "startup.m"
      }
#line 536 "startup.m"
  }
#line 528 "startup.m"
}

#line 521 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_8_p_0_2(
#line 521 "startup.m"
  MR_Box startup__closure_arg,
#line 521 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 521 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 521 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 521 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 521 "startup.m"
  MR_Box * startup__wrapper_arg_5)
#line 521 "startup.m"
{
#line 521 "startup.m"
  {
#line 521 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 521 "startup.m"
    MR_ArrayPtr startup__conv5_STATE_VARIABLE_CliqueParents_22;
#line 521 "startup.m"
    MR_ArrayPtr startup__conv4_STATE_VARIABLE_CliqueMaybeChildren_24;

#line 521 "startup.m"
    {
#line 521 "startup.m"
      startup__construct_clique_parents_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 5))), ((MR_Word) startup__wrapper_arg_1), ((MR_ArrayPtr) startup__wrapper_arg_2), &startup__conv5_STATE_VARIABLE_CliqueParents_22, ((MR_ArrayPtr) startup__wrapper_arg_4), &startup__conv4_STATE_VARIABLE_CliqueMaybeChildren_24);
    }
#line 521 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv5_STATE_VARIABLE_CliqueParents_22));
#line 521 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv4_STATE_VARIABLE_CliqueMaybeChildren_24));
#line 521 "startup.m"
  }
#line 521 "startup.m"
}

#line 1053 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_8_p_0_1(
#line 1053 "startup.m"
  MR_Box startup__closure_arg,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 1053 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 1053 "startup.m"
  MR_Box * startup__wrapper_arg_5)
#line 1053 "startup.m"
{
#line 1053 "startup.m"
  {
#line 1053 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 1053 "startup.m"
    MR_Word startup__conv1_CSDPtrs1_8;
#line 1053 "startup.m"
    MR_Word startup__conv0_IsZeroed_10;

#line 1053 "startup.m"
    {
#line 1053 "startup.m"
      startup__gather_call_site_csdptrs_5_p_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_CSDPtrs1_8, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_IsZeroed_10);
    }
#line 1053 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_CSDPtrs1_8));
#line 1053 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_IsZeroed_10));
#line 1053 "startup.m"
  }
#line 1053 "startup.m"
}

#line 509 "startup.m"
static void MR_CALL 
startup__construct_clique_parents_8_p_0(
#line 509 "startup.m"
  MR_Word startup__InitDeep_9,
#line 509 "startup.m"
  MR_ArrayPtr startup__CliqueIndex_10,
#line 509 "startup.m"
  MR_Integer startup__PDI_11,
#line 509 "startup.m"
  MR_Word startup__CliquePtr_12,
#line 509 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueParents_0_16,
#line 509 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueParents_17,
#line 509 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CliqueMaybeChildren_0_18,
#line 509 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CliqueMaybeChildren_19)
#line 509 "startup.m"
{
#line 524 "startup.m"
  {
#line 524 "startup.m"
    MR_bool startup__succeeded = (startup__PDI_11 > (MR_Integer) 0);

#line 524 "startup.m"
    if (startup__succeeded)
#line 520 "startup.m"
      {
#line 520 "startup.m"
        MR_Word startup__TypeCtorInfo_37_37;
#line 520 "startup.m"
        MR_Word startup__TypeCtorInfo_13_56;
#line 520 "startup.m"
        MR_Word startup__CSDPtrs_15;
#line 520 "startup.m"
        MR_ArrayPtr startup__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 3)));
#line 520 "startup.m"
        MR_Word startup__V_22_22 = (MR_Word) startup__PDI_11;
#line 520 "startup.m"
        MR_Word startup__V_23_23;
#line 520 "startup.m"
        MR_Word startup__PD_42;
#line 520 "startup.m"
        MR_ArrayPtr startup__CallSiteArray_43;
#line 520 "startup.m"
        MR_Word startup__CallSites_50;
#line 520 "startup.m"
        MR_Word startup__CSDPtrsList0_51;
#line 520 "startup.m"
        MR_Word startup__CSDPtrsList_52;
#line 519 "startup.m"
        MR_Word startup__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 0)));
#line 519 "startup.m"
        MR_Word startup__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 1)));
#line 519 "startup.m"
        MR_ArrayPtr startup__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 2)));
#line 519 "startup.m"
        MR_ArrayPtr startup__V_30_30 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 4)));
#line 519 "startup.m"
        MR_ArrayPtr startup__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_9, (MR_Integer) 5)));
#line 1045 "startup.m"
        MR_Word startup__V_45_45;
#line 1045 "startup.m"
        MR_Word startup__V_46_46;
#line 1053 "startup.m"
        MR_Word startup__V_44_44;
#line 1053 "startup.m"
        MR_Box startup__conv3_CSDPtrsList0_51;
#line 1053 "startup.m"
        MR_Box startup__conv2_V_44_44;
#line 521 "startup.m"
        MR_ArrayPtr startup__conv7_STATE_VARIABLE_CliqueParents_17;
#line 521 "startup.m"
        MR_ArrayPtr startup__conv6_STATE_VARIABLE_CliqueMaybeChildren_19;

#line 1044 "startup.m"
        {
#line 1044 "startup.m"
          profile__lookup_proc_dynamics_3_p_0(startup__V_21_21, startup__V_22_22, &startup__PD_42);
        }
#line 1045 "startup.m"
        startup__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_42, (MR_Integer) 0)));
#line 1045 "startup.m"
        startup__CallSiteArray_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_42, (MR_Integer) 1)));
#line 1045 "startup.m"
        startup__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_42, (MR_Integer) 2)));
#line 8264 "startup.c"
        startup__TypeCtorInfo_13_56 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
#line 1052 "startup.m"
        {
#line 1052 "startup.m"
          mercury__array__to_list_2_p_0(startup__TypeCtorInfo_13_56, (MR_ArrayPtr) startup__CallSiteArray_43, &startup__CallSites_50);
        }
#line 1053 "startup.m"
        {
#line 1053 "startup.m"
          mercury__list__foldl2_6_p_0(startup__TypeCtorInfo_13_56, (MR_Word) &startup_scalar_common_1[17], (MR_Word) &profile__profile__type_ctor_info_is_zeroed_0, (MR_Word) &startup_scalar_common_2[11], startup__CallSites_50, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv3_CSDPtrsList0_51, ((MR_Box) ((MR_Integer) 1)), &startup__conv2_V_44_44);
        }
#line 1053 "startup.m"
        startup__CSDPtrsList0_51 = ((MR_Word) startup__conv3_CSDPtrsList0_51);
#line 1053 "startup.m"
        startup__V_44_44 = ((MR_Word) startup__conv2_V_44_44);
#line 1055 "startup.m"
        {
#line 1055 "startup.m"
          mercury__list__reverse_2_p_0((MR_Word) &startup_scalar_common_1[8], startup__CSDPtrsList0_51, &startup__CSDPtrsList_52);
        }
#line 1056 "startup.m"
        {
#line 1056 "startup.m"
          mercury__list__condense_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__CSDPtrsList_52, &startup__CSDPtrs_15);
        }
#line 521 "startup.m"
        {
#line 521 "startup.m"
          startup__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 521 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_23_23, 0) = ((MR_Box) (&startup_scalar_common_5[1]));
#line 521 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_23_23, 1) = ((MR_Box) (startup__construct_clique_parents_8_p_0_2));
#line 521 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 521 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_23_23, 3) = ((MR_Box) (startup__InitDeep_9));
#line 521 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_23_23, 4) = ((MR_Box) (startup__CliqueIndex_10));
#line 521 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_23_23, 5) = ((MR_Box) (startup__CliquePtr_12));
#line 521 "startup.m"
        }
#line 8308 "startup.c"
        startup__TypeCtorInfo_37_37 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 521 "startup.m"
        {
#line 521 "startup.m"
          array_util__array_list_foldl2_6_p_0(startup__TypeCtorInfo_37_37, startup__TypeCtorInfo_37_37, (MR_Word) &startup_scalar_common_1[5], startup__V_23_23, startup__CSDPtrs_15, (MR_ArrayPtr) startup__STATE_VARIABLE_CliqueParents_0_16, &startup__conv7_STATE_VARIABLE_CliqueParents_17, (MR_ArrayPtr) startup__STATE_VARIABLE_CliqueMaybeChildren_0_18, &startup__conv6_STATE_VARIABLE_CliqueMaybeChildren_19);
        }
#line 521 "startup.m"
        *startup__STATE_VARIABLE_CliqueParents_17 = (MR_ArrayPtr) startup__conv7_STATE_VARIABLE_CliqueParents_17;
#line 521 "startup.m"
        *startup__STATE_VARIABLE_CliqueMaybeChildren_19 = (MR_ArrayPtr) startup__conv6_STATE_VARIABLE_CliqueMaybeChildren_19;
#line 520 "startup.m"
      }
#line 524 "startup.m"
    else
#line 525 "startup.m"
      {
#line 525 "startup.m"
        {
#line 525 "startup.m"
          mercury__require__error_1_p_0((MR_String) "construct_clique_parents: invalid pdi");
#line 525 "startup.m"
          return;
        }
#line 525 "startup.m"
      }
#line 524 "startup.m"
  }
#line 509 "startup.m"
}

#line 501 "startup.m"
static MR_bool MR_CALL 
startup__record_csd_containers_2_4_p_0_1(
#line 501 "startup.m"
  MR_Box startup__closure_arg)
#line 501 "startup.m"
{
#line 501 "startup.m"
  {
#line 501 "startup.m"
    MR_bool startup__succeeded;
#line 501 "startup.m"
    MR_Box startup__closure = startup__closure_arg;

#line 501 "startup.m"
    {
#line 501 "startup.m"
      return startup__succeeded = startup__IntroducedFrom__pred__record_csd_containers_2__501__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))));
    }
#line 501 "startup.m"
    return startup__succeeded;
#line 501 "startup.m"
  }
#line 501 "startup.m"
}

#line 492 "startup.m"
static void MR_CALL 
startup__record_csd_containers_2_4_p_0(
#line 492 "startup.m"
  MR_Word startup__PDPtr_1,
#line 492 "startup.m"
  MR_Word startup__HeadVar__2_2,
#line 492 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0_3,
#line 492 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteDynamics_4)
#line 492 "startup.m"
{
#line 497 "startup.m"
  while (MR_TRUE)
#line 497 "startup.m"
    {
#line 497 "startup.m"
      /* tailcall optimized into a loop */
#line 497 "startup.m"
      {
#line 497 "startup.m"
        MR_bool startup__succeeded;

#line 497 "startup.m"
        if ((startup__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 497 "startup.m"
          *startup__STATE_VARIABLE_CallSiteDynamics_4 = startup__STATE_VARIABLE_CallSiteDynamics_0_3;
#line 497 "startup.m"
        else
#line 498 "startup.m"
          {
#line 498 "startup.m"
            MR_Word startup__CSDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__HeadVar__2_2, (MR_Integer) 0)));
#line 498 "startup.m"
            MR_Word startup__CSDPtrs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__HeadVar__2_2, (MR_Integer) 1)));
#line 498 "startup.m"
            MR_Word startup__CSD0_13;
#line 498 "startup.m"
            MR_Word startup__CallerPDPtr0_14;
#line 498 "startup.m"
            MR_Word startup__CalleePDPtr_15;
#line 498 "startup.m"
            MR_Word startup__Own_16;
#line 498 "startup.m"
            MR_Word startup__CSD_17;
#line 498 "startup.m"
            MR_Word startup__V_20_20;
#line 498 "startup.m"
            MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_24_24;

#line 499 "startup.m"
            {
#line 499 "startup.m"
              profile__lookup_call_site_dynamics_3_p_0(startup__STATE_VARIABLE_CallSiteDynamics_0_3, startup__CSDPtr_10, &startup__CSD0_13);
            }
#line 500 "startup.m"
            startup__CallerPDPtr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD0_13, (MR_Integer) 0)));
#line 500 "startup.m"
            startup__CalleePDPtr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD0_13, (MR_Integer) 1)));
#line 500 "startup.m"
            startup__Own_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSD0_13, (MR_Integer) 2)));
#line 501 "startup.m"
            {
#line 501 "startup.m"
              startup__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 501 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_20_20, 0) = ((MR_Box) (&startup_scalar_common_4[3]));
#line 501 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_20_20, 1) = ((MR_Box) (startup__record_csd_containers_2_4_p_0_1));
#line 501 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 501 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_20_20, 3) = ((MR_Box) (startup__CallerPDPtr0_14));
#line 501 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_20_20, 4) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
#line 501 "startup.m"
            }
#line 501 "startup.m"
            {
#line 501 "startup.m"
              mercury__require__require_2_p_0(startup__V_20_20, (MR_String) "record_csd_containers_2: real proc_dynamic_ptr");
            }
#line 503 "startup.m"
            {
#line 503 "startup.m"
              startup__CSD_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 503 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSD_17, 0) = ((MR_Box) (startup__PDPtr_1));
#line 503 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSD_17, 1) = ((MR_Box) (startup__CalleePDPtr_15));
#line 503 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSD_17, 2) = ((MR_Box) (startup__Own_16));
#line 503 "startup.m"
            }
#line 504 "startup.m"
            {
#line 504 "startup.m"
              profile__update_call_site_dynamics_4_p_0(startup__CSDPtr_10, startup__CSD_17, startup__STATE_VARIABLE_CallSiteDynamics_0_3, &startup__STATE_VARIABLE_CallSiteDynamics_24_24);
            }
#line 505 "startup.m"
            /* direct tailcall eliminated */
#line 505 "startup.m"
            {
#line 505 "startup.m"
              MR_Word startup__HeadVar__2__tmp_copy_2 = startup__CSDPtrs_11;
#line 505 "startup.m"
              MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0__tmp_copy_3 = startup__STATE_VARIABLE_CallSiteDynamics_24_24;

#line 505 "startup.m"
              startup__STATE_VARIABLE_CallSiteDynamics_0_3 = startup__STATE_VARIABLE_CallSiteDynamics_0__tmp_copy_3;
#line 505 "startup.m"
              startup__HeadVar__2_2 = startup__HeadVar__2__tmp_copy_2;
#line 505 "startup.m"
            }
#line 505 "startup.m"
            continue;
#line 498 "startup.m"
          }
#line 497 "startup.m"
      }
#line 497 "startup.m"
      break;
#line 497 "startup.m"
    }
#line 492 "startup.m"
}

#line 1053 "startup.m"
static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0_1(
#line 1053 "startup.m"
  MR_Box startup__closure_arg,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 1053 "startup.m"
  MR_Box * startup__wrapper_arg_3,
#line 1053 "startup.m"
  MR_Box startup__wrapper_arg_4,
#line 1053 "startup.m"
  MR_Box * startup__wrapper_arg_5)
#line 1053 "startup.m"
{
#line 1053 "startup.m"
  {
#line 1053 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 1053 "startup.m"
    MR_Word startup__conv1_CSDPtrs1_8;
#line 1053 "startup.m"
    MR_Word startup__conv0_IsZeroed_10;

#line 1053 "startup.m"
    {
#line 1053 "startup.m"
      startup__gather_call_site_csdptrs_5_p_0(((MR_Word) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv1_CSDPtrs1_8, ((MR_Word) startup__wrapper_arg_4), &startup__conv0_IsZeroed_10);
    }
#line 1053 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv1_CSDPtrs1_8));
#line 1053 "startup.m"
    *startup__wrapper_arg_5 = ((MR_Box) (startup__conv0_IsZeroed_10));
#line 1053 "startup.m"
  }
#line 1053 "startup.m"
}

#line 472 "startup.m"
static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0(
#line 472 "startup.m"
  MR_Integer startup__PDI_7,
#line 472 "startup.m"
  MR_Word startup__PD_8,
#line 472 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteDynamics_0_18,
#line 472 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteDynamics_19,
#line 472 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_ProcStatics_0_20,
#line 472 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_ProcStatics_21)
#line 472 "startup.m"
{
#line 477 "startup.m"
  {
#line 477 "startup.m"
    MR_bool startup__succeeded;
#line 477 "startup.m"
    MR_Word startup__TypeCtorInfo_13_50 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
#line 477 "startup.m"
    MR_ArrayPtr startup__CSDArray_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 1)));
#line 477 "startup.m"
    MR_Word startup__PDPtr_12 = (MR_Word) startup__PDI_7;
#line 477 "startup.m"
    MR_Word startup__CSDPtrs_13;
#line 477 "startup.m"
    MR_Word startup__IsZeroed_14;
#line 477 "startup.m"
    MR_Word startup__CallSites_44;
#line 477 "startup.m"
    MR_Word startup__CSDPtrsList0_45;
#line 477 "startup.m"
    MR_Word startup__CSDPtrsList_46;
#line 478 "startup.m"
    MR_Word startup__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 0)));
#line 478 "startup.m"
    MR_Word startup__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 2)));
#line 1053 "startup.m"
    MR_Box startup__conv3_CSDPtrsList0_45;
#line 1053 "startup.m"
    MR_Box startup__conv2_IsZeroed_14;

#line 1052 "startup.m"
    {
#line 1052 "startup.m"
      mercury__array__to_list_2_p_0(startup__TypeCtorInfo_13_50, (MR_ArrayPtr) startup__CSDArray_11, &startup__CallSites_44);
    }
#line 1053 "startup.m"
    {
#line 1053 "startup.m"
      mercury__list__foldl2_6_p_0(startup__TypeCtorInfo_13_50, (MR_Word) &startup_scalar_common_1[17], (MR_Word) &profile__profile__type_ctor_info_is_zeroed_0, (MR_Word) &startup_scalar_common_2[10], startup__CallSites_44, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv3_CSDPtrsList0_45, ((MR_Box) ((MR_Integer) 1)), &startup__conv2_IsZeroed_14);
    }
#line 1053 "startup.m"
    startup__CSDPtrsList0_45 = ((MR_Word) startup__conv3_CSDPtrsList0_45);
#line 1053 "startup.m"
    startup__IsZeroed_14 = ((MR_Word) startup__conv2_IsZeroed_14);
#line 1055 "startup.m"
    {
#line 1055 "startup.m"
      mercury__list__reverse_2_p_0((MR_Word) &startup_scalar_common_1[8], startup__CSDPtrsList0_45, &startup__CSDPtrsList_46);
    }
#line 1056 "startup.m"
    {
#line 1056 "startup.m"
      mercury__list__condense_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__CSDPtrsList_46, &startup__CSDPtrs_13);
    }
#line 481 "startup.m"
    {
#line 481 "startup.m"
      startup__record_csd_containers_2_4_p_0(startup__PDPtr_12, startup__CSDPtrs_13, startup__STATE_VARIABLE_CallSiteDynamics_0_18, startup__STATE_VARIABLE_CallSiteDynamics_19);
    }
#line 488 "startup.m"
    if ((startup__IsZeroed_14 == (MR_Integer) 1))
#line 489 "startup.m"
      *startup__STATE_VARIABLE_ProcStatics_21 = startup__STATE_VARIABLE_ProcStatics_0_20;
#line 488 "startup.m"
    else
#line 483 "startup.m"
      {
#line 483 "startup.m"
        MR_Word startup__PSPtr_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 0)));
#line 483 "startup.m"
        MR_Word startup__PS0_16;
#line 483 "startup.m"
        MR_Word startup__PS_17;
#line 484 "startup.m"
        MR_ArrayPtr startup__V_27_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 1)));
#line 484 "startup.m"
        MR_Word startup__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PD_8, (MR_Integer) 2)));
#line 486 "startup.m"
        MR_Word startup__V_29_29;
#line 486 "startup.m"
        MR_String startup__V_30_30;
#line 486 "startup.m"
        MR_String startup__V_31_31;
#line 486 "startup.m"
        MR_String startup__V_32_32;
#line 486 "startup.m"
        MR_String startup__V_33_33;
#line 486 "startup.m"
        MR_String startup__V_34_34;
#line 486 "startup.m"
        MR_Integer startup__V_35_35;
#line 486 "startup.m"
        MR_Word startup__V_36_36;
#line 486 "startup.m"
        MR_ArrayPtr startup__V_37_37;
#line 486 "startup.m"
        MR_ArrayPtr startup__V_38_38;
#line 486 "startup.m"
        MR_Word startup__V_39_39;
#line 486 "startup.m"
        MR_Word startup__V_40_40;

#line 485 "startup.m"
        {
#line 485 "startup.m"
          profile__lookup_proc_statics_3_p_0(startup__STATE_VARIABLE_ProcStatics_0_20, startup__PSPtr_15, &startup__PS0_16);
        }
#line 486 "startup.m"
        startup__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 0)));
#line 486 "startup.m"
        startup__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 1)));
#line 486 "startup.m"
        startup__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 2)));
#line 486 "startup.m"
        startup__V_32_32 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 3)));
#line 486 "startup.m"
        startup__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 4)));
#line 486 "startup.m"
        startup__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 5)));
#line 486 "startup.m"
        startup__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 6)));
#line 486 "startup.m"
        startup__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 7)));
#line 486 "startup.m"
        startup__V_37_37 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 8)));
#line 486 "startup.m"
        startup__V_38_38 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 9)));
#line 486 "startup.m"
        startup__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 10)));
#line 486 "startup.m"
        startup__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS0_16, (MR_Integer) 11)));
#line 486 "startup.m"
        {
#line 486 "startup.m"
          startup__PS_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
#line 486 "startup.m"
          MR_hl_field(MR_mktag(0), startup__PS_17, 0) = ((MR_Box) (startup__V_29_29));
#line 486 "startup.m"
          MR_hl_field(MR_mktag(0), startup__PS_17, 1) = ((MR_Box) (startup__V_30_30));
#line 486 "startup.m"
          MR_hl_field(MR_mktag(0), startup__PS_17, 2) = ((MR_Box) (startup__V_31_31));
#line 486 "startup.m"
          MR_hl_field(MR_mktag(0), startup__PS_17, 3) = ((MR_Box) (startup__V_32_32));
#line 486 "startup.m"
          MR_hl_field(MR_mktag(0), startup__PS_17, 4) = ((MR_Box) (startup__V_33_33));
#line 486 "startup.m"
          MR_hl_field(MR_mktag(0), startup__PS_17, 5) = ((MR_Box) (startup__V_34_34));
#line 486 "startup.m"
          MR_hl_field(MR_mktag(0), startup__PS_17, 6) = ((MR_Box) (startup__V_35_35));
#line 486 "startup.m"
          MR_hl_field(MR_mktag(0), startup__PS_17, 7) = ((MR_Box) (startup__V_36_36));
#line 486 "startup.m"
          MR_hl_field(MR_mktag(0), startup__PS_17, 8) = ((MR_Box) (startup__V_37_37));
#line 486 "startup.m"
          MR_hl_field(MR_mktag(0), startup__PS_17, 9) = ((MR_Box) (startup__V_38_38));
#line 486 "startup.m"
          MR_hl_field(MR_mktag(0), startup__PS_17, 10) = ((MR_Box) (startup__V_39_39));
#line 486 "startup.m"
          MR_hl_field(MR_mktag(0), startup__PS_17, 11) = ((MR_Box) ((MR_Integer) 0));
#line 486 "startup.m"
        }
#line 487 "startup.m"
        {
#line 487 "startup.m"
          profile__update_proc_statics_4_p_0(startup__PSPtr_15, startup__PS_17, startup__STATE_VARIABLE_ProcStatics_0_20, startup__STATE_VARIABLE_ProcStatics_21);
#line 487 "startup.m"
          return;
        }
#line 483 "startup.m"
      }
#line 477 "startup.m"
  }
#line 472 "startup.m"
}

#line 460 "startup.m"
static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_2(
#line 460 "startup.m"
  MR_Box startup__closure_arg)
#line 460 "startup.m"
{
#line 460 "startup.m"
  {
#line 460 "startup.m"
    MR_bool startup__succeeded;
#line 460 "startup.m"
    MR_Box startup__closure = startup__closure_arg;

#line 460 "startup.m"
    {
#line 460 "startup.m"
      return startup__succeeded = startup__IntroducedFrom__pred__record_css_containers_2__460__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))));
    }
#line 460 "startup.m"
    return startup__succeeded;
#line 460 "startup.m"
  }
#line 460 "startup.m"
}

#line 458 "startup.m"
static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_1(
#line 458 "startup.m"
  MR_Box startup__closure_arg)
#line 458 "startup.m"
{
#line 458 "startup.m"
  {
#line 458 "startup.m"
    MR_bool startup__succeeded;
#line 458 "startup.m"
    MR_Box startup__closure = startup__closure_arg;

#line 458 "startup.m"
    {
#line 458 "startup.m"
      return startup__succeeded = startup__IntroducedFrom__pred__record_css_containers_2__458__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))));
    }
#line 458 "startup.m"
    return startup__succeeded;
#line 458 "startup.m"
  }
#line 458 "startup.m"
}

#line 447 "startup.m"
static void MR_CALL 
startup__record_css_containers_2_5_p_0(
#line 447 "startup.m"
  MR_Integer startup__SlotNum_6,
#line 447 "startup.m"
  MR_Word startup__PSPtr_7,
#line 447 "startup.m"
  MR_ArrayPtr startup__CSSPtrs_8,
#line 447 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0_18,
#line 447 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStatics_19)
#line 447 "startup.m"
{
#line 466 "startup.m"
  while (MR_TRUE)
#line 466 "startup.m"
    {
#line 466 "startup.m"
      /* tailcall optimized into a loop */
#line 466 "startup.m"
      {
#line 466 "startup.m"
        MR_bool startup__succeeded = (startup__SlotNum_6 >= (MR_Integer) 0);

#line 466 "startup.m"
        if (startup__succeeded)
#line 454 "startup.m"
          {
#line 454 "startup.m"
            MR_Word startup__CSSPtr_10;
#line 454 "startup.m"
            MR_Word startup__CSS0_11;
#line 454 "startup.m"
            MR_Word startup__PSPtr0_12;
#line 454 "startup.m"
            MR_Integer startup__SlotNum0_13;
#line 454 "startup.m"
            MR_Word startup__Kind_14;
#line 454 "startup.m"
            MR_Integer startup__LineNumber_15;
#line 454 "startup.m"
            MR_Word startup__GoalPath_16;
#line 454 "startup.m"
            MR_Word startup__CSS_17;
#line 454 "startup.m"
            MR_Word startup__V_21_21;
#line 454 "startup.m"
            MR_Word startup__V_25_25;
#line 454 "startup.m"
            MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_28_28;
#line 454 "startup.m"
            MR_Integer startup__V_29_29;
#line 454 "startup.m"
            MR_Box startup__conv0_CSSPtr_10;

#line 454 "startup.m"
            {
#line 454 "startup.m"
              mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) startup__CSSPtrs_8, startup__SlotNum_6, &startup__conv0_CSSPtr_10);
            }
#line 454 "startup.m"
            startup__CSSPtr_10 = ((MR_Word) startup__conv0_CSSPtr_10);
#line 455 "startup.m"
            {
#line 455 "startup.m"
              profile__lookup_call_site_statics_3_p_0(startup__STATE_VARIABLE_CallSiteStatics_0_18, startup__CSSPtr_10, &startup__CSS0_11);
            }
#line 456 "startup.m"
            startup__PSPtr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 0)));
#line 456 "startup.m"
            startup__SlotNum0_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 1)));
#line 456 "startup.m"
            startup__Kind_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 2)));
#line 456 "startup.m"
            startup__LineNumber_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 3)));
#line 456 "startup.m"
            startup__GoalPath_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__CSS0_11, (MR_Integer) 4)));
#line 458 "startup.m"
            {
#line 458 "startup.m"
              startup__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 458 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_21_21, 0) = ((MR_Box) (&startup_scalar_common_4[1]));
#line 458 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_21_21, 1) = ((MR_Box) (startup__record_css_containers_2_5_p_0_1));
#line 458 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 458 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_21_21, 3) = ((MR_Box) (startup__PSPtr0_12));
#line 458 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_21_21, 4) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
#line 458 "startup.m"
            }
#line 458 "startup.m"
            {
#line 458 "startup.m"
              mercury__require__require_2_p_0(startup__V_21_21, (MR_String) "record_css_containers_2: real proc_static_ptr");
            }
#line 460 "startup.m"
            {
#line 460 "startup.m"
              startup__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 460 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_25_25, 0) = ((MR_Box) (&startup_scalar_common_4[2]));
#line 460 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_25_25, 1) = ((MR_Box) (startup__record_css_containers_2_5_p_0_2));
#line 460 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 460 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_25_25, 3) = ((MR_Box) (startup__SlotNum0_13));
#line 460 "startup.m"
              MR_hl_field(MR_mktag(0), startup__V_25_25, 4) = ((MR_Box) ((MR_Integer) -1));
#line 460 "startup.m"
            }
#line 460 "startup.m"
            {
#line 460 "startup.m"
              mercury__require__require_2_p_0(startup__V_25_25, (MR_String) "record_css_containers_2: real slot_num");
            }
#line 462 "startup.m"
            {
#line 462 "startup.m"
              startup__CSS_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 462 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSS_17, 0) = ((MR_Box) (startup__PSPtr_7));
#line 462 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSS_17, 1) = ((MR_Box) (startup__SlotNum_6));
#line 462 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSS_17, 2) = ((MR_Box) (startup__Kind_14));
#line 462 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSS_17, 3) = ((MR_Box) (startup__LineNumber_15));
#line 462 "startup.m"
              MR_hl_field(MR_mktag(0), startup__CSS_17, 4) = ((MR_Box) (startup__GoalPath_16));
#line 462 "startup.m"
            }
#line 464 "startup.m"
            {
#line 464 "startup.m"
              profile__update_call_site_statics_4_p_0(startup__CSSPtr_10, startup__CSS_17, startup__STATE_VARIABLE_CallSiteStatics_0_18, &startup__STATE_VARIABLE_CallSiteStatics_28_28);
            }
#line 465 "startup.m"
            startup__V_29_29 = (startup__SlotNum_6 - (MR_Integer) 1);
#line 465 "startup.m"
            /* direct tailcall eliminated */
#line 465 "startup.m"
            {
#line 465 "startup.m"
              MR_Integer startup__SlotNum__tmp_copy_6 = startup__V_29_29;
#line 465 "startup.m"
              MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0__tmp_copy_18 = startup__STATE_VARIABLE_CallSiteStatics_28_28;

#line 465 "startup.m"
              startup__STATE_VARIABLE_CallSiteStatics_0_18 = startup__STATE_VARIABLE_CallSiteStatics_0__tmp_copy_18;
#line 465 "startup.m"
              startup__SlotNum_6 = startup__SlotNum__tmp_copy_6;
#line 465 "startup.m"
            }
#line 465 "startup.m"
            continue;
#line 454 "startup.m"
          }
#line 466 "startup.m"
        else
#line 465 "startup.m"
          *startup__STATE_VARIABLE_CallSiteStatics_19 = startup__STATE_VARIABLE_CallSiteStatics_0_18;
#line 466 "startup.m"
      }
#line 466 "startup.m"
      break;
#line 466 "startup.m"
    }
#line 447 "startup.m"
}

#line 429 "startup.m"
static void MR_CALL 
startup__record_css_containers_module_procs_6_p_0(
#line 429 "startup.m"
  MR_Integer startup__PSI_7,
#line 429 "startup.m"
  MR_Word startup__PS_8,
#line 429 "startup.m"
  MR_ArrayPtr startup__STATE_VARIABLE_CallSiteStatics_0_16,
#line 429 "startup.m"
  MR_ArrayPtr * startup__STATE_VARIABLE_CallSiteStatics_17,
#line 429 "startup.m"
  MR_Word startup__STATE_VARIABLE_ModuleProcs_0_18,
#line 429 "startup.m"
  MR_Word * startup__STATE_VARIABLE_ModuleProcs_19)
#line 429 "startup.m"
{
#line 435 "startup.m"
  {
#line 435 "startup.m"
    MR_bool startup__succeeded;
#line 435 "startup.m"
    MR_ArrayPtr startup__CSSPtrs_11 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 8)));
#line 435 "startup.m"
    MR_Word startup__PSPtr_12 = (MR_Word) startup__PSI_7;
#line 435 "startup.m"
    MR_Integer startup__MaxCS_13;
#line 435 "startup.m"
    MR_String startup__DeclModule_14;
#line 436 "startup.m"
    MR_Word startup__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 0)));
#line 436 "startup.m"
    MR_String startup__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 1)));
#line 436 "startup.m"
    MR_String startup__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 2)));
#line 436 "startup.m"
    MR_String startup__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 3)));
#line 436 "startup.m"
    MR_String startup__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 4)));
#line 436 "startup.m"
    MR_String startup__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 5)));
#line 436 "startup.m"
    MR_Integer startup__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 6)));
#line 436 "startup.m"
    MR_Word startup__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 7)));
#line 436 "startup.m"
    MR_ArrayPtr startup__V_34_34 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 9)));
#line 436 "startup.m"
    MR_Word startup__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 10)));
#line 436 "startup.m"
    MR_Word startup__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 11)));
#line 440 "startup.m"
    MR_Word startup__V_37_37;
#line 440 "startup.m"
    MR_String startup__V_38_38;
#line 440 "startup.m"
    MR_String startup__V_39_39;
#line 440 "startup.m"
    MR_String startup__V_40_40;
#line 440 "startup.m"
    MR_String startup__V_41_41;
#line 440 "startup.m"
    MR_Integer startup__V_42_42;
#line 440 "startup.m"
    MR_Word startup__V_43_43;
#line 440 "startup.m"
    MR_ArrayPtr startup__V_44_44;
#line 440 "startup.m"
    MR_ArrayPtr startup__V_45_45;
#line 440 "startup.m"
    MR_Word startup__V_46_46;
#line 440 "startup.m"
    MR_Word startup__V_47_47;
#line 443 "startup.m"
    MR_Word startup__PSPtrs0_15;
#line 441 "startup.m"
    MR_Box startup__conv0_PSPtrs0_15;

#line 438 "startup.m"
    {
#line 438 "startup.m"
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, (MR_ArrayPtr) startup__CSSPtrs_11, &startup__MaxCS_13);
    }
#line 439 "startup.m"
    {
#line 439 "startup.m"
      startup__record_css_containers_2_5_p_0(startup__MaxCS_13, startup__PSPtr_12, startup__CSSPtrs_11, startup__STATE_VARIABLE_CallSiteStatics_0_16, startup__STATE_VARIABLE_CallSiteStatics_17);
    }
#line 440 "startup.m"
    startup__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 0)));
#line 440 "startup.m"
    startup__DeclModule_14 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 1)));
#line 440 "startup.m"
    startup__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 2)));
#line 440 "startup.m"
    startup__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 3)));
#line 440 "startup.m"
    startup__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 4)));
#line 440 "startup.m"
    startup__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 5)));
#line 440 "startup.m"
    startup__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 6)));
#line 440 "startup.m"
    startup__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 7)));
#line 440 "startup.m"
    startup__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 8)));
#line 440 "startup.m"
    startup__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 9)));
#line 440 "startup.m"
    startup__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 10)));
#line 440 "startup.m"
    startup__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__PS_8, (MR_Integer) 11)));
#line 441 "startup.m"
    {
#line 441 "startup.m"
      startup__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &startup_scalar_common_1[1], startup__STATE_VARIABLE_ModuleProcs_0_18, ((MR_Box) (startup__DeclModule_14)), &startup__conv0_PSPtrs0_15);
    }
#line 441 "startup.m"
    if (startup__succeeded)
#line 441 "startup.m"
      {
#line 441 "startup.m"
        startup__PSPtrs0_15 = ((MR_Word) startup__conv0_PSPtrs0_15);
#line 441 "startup.m"
        startup__succeeded = MR_TRUE;
#line 441 "startup.m"
      }
#line 443 "startup.m"
    if (startup__succeeded)
#line 442 "startup.m"
      {
#line 442 "startup.m"
        MR_Word startup__V_21_21;

#line 442 "startup.m"
        {
#line 442 "startup.m"
          startup__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_21_21, 0) = ((MR_Box) (startup__PSPtr_12));
#line 442 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_21_21, 1) = ((MR_Box) (startup__PSPtrs0_15));
#line 442 "startup.m"
        }
#line 442 "startup.m"
        {
#line 442 "startup.m"
          mercury__map__det_update_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &startup_scalar_common_1[1], ((MR_Box) (startup__DeclModule_14)), ((MR_Box) (startup__V_21_21)), startup__STATE_VARIABLE_ModuleProcs_0_18, startup__STATE_VARIABLE_ModuleProcs_19);
#line 442 "startup.m"
          return;
        }
#line 442 "startup.m"
      }
#line 443 "startup.m"
    else
#line 444 "startup.m"
      {
#line 444 "startup.m"
        MR_Word startup__V_23_23;

#line 444 "startup.m"
        {
#line 444 "startup.m"
          startup__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 444 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_23_23, 0) = ((MR_Box) (startup__PSPtr_12));
#line 444 "startup.m"
          MR_hl_field(MR_mktag(1), startup__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 444 "startup.m"
        }
#line 444 "startup.m"
        {
#line 444 "startup.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &startup_scalar_common_1[1], ((MR_Box) (startup__DeclModule_14)), ((MR_Box) (startup__V_23_23)), startup__STATE_VARIABLE_ModuleProcs_0_18, startup__STATE_VARIABLE_ModuleProcs_19);
#line 444 "startup.m"
          return;
        }
#line 444 "startup.m"
      }
#line 435 "startup.m"
  }
#line 429 "startup.m"
}

#line 387 "startup.m"
static void MR_CALL 
startup__ensure_module_has_module_data_3_p_0(
#line 387 "startup.m"
  MR_String startup__Module_4,
#line 387 "startup.m"
  MR_Word startup__STATE_VARIABLE_ModuleDataMap_0_8,
#line 387 "startup.m"
  MR_Word * startup__STATE_VARIABLE_ModuleDataMap_9)
#line 387 "startup.m"
{
#line 393 "startup.m"
  {
#line 393 "startup.m"
    MR_bool startup__succeeded;
#line 391 "startup.m"
    MR_Word startup__V_6_6;
#line 391 "startup.m"
    MR_Box startup__conv0_V_6_6;

#line 391 "startup.m"
    {
#line 391 "startup.m"
      startup__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, startup__STATE_VARIABLE_ModuleDataMap_0_8, ((MR_Box) (startup__Module_4)), &startup__conv0_V_6_6);
    }
#line 391 "startup.m"
    if (startup__succeeded)
#line 391 "startup.m"
      {
#line 391 "startup.m"
        startup__V_6_6 = ((MR_Word) startup__conv0_V_6_6);
#line 391 "startup.m"
        startup__succeeded = MR_TRUE;
#line 391 "startup.m"
      }
#line 393 "startup.m"
    if (startup__succeeded)
#line 391 "startup.m"
      *startup__STATE_VARIABLE_ModuleDataMap_9 = startup__STATE_VARIABLE_ModuleDataMap_0_8;
#line 393 "startup.m"
    else
#line 394 "startup.m"
      {
#line 394 "startup.m"
        MR_Word startup__Data_7;
#line 394 "startup.m"
        MR_Word startup__V_10_10;
#line 394 "startup.m"
        MR_Word startup__V_11_11;

#line 394 "startup.m"
        {
#line 394 "startup.m"
          startup__V_10_10 = measurements__zero_own_prof_info_0_f_0();
        }
#line 394 "startup.m"
        {
#line 394 "startup.m"
          startup__V_11_11 = measurements__zero_inherit_prof_info_0_f_0();
        }
#line 394 "startup.m"
        {
#line 394 "startup.m"
          startup__Data_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 394 "startup.m"
          MR_hl_field(MR_mktag(0), startup__Data_7, 0) = ((MR_Box) (startup__V_10_10));
#line 394 "startup.m"
          MR_hl_field(MR_mktag(0), startup__Data_7, 1) = ((MR_Box) (startup__V_11_11));
#line 394 "startup.m"
          MR_hl_field(MR_mktag(0), startup__Data_7, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "startup.m"
        }
#line 395 "startup.m"
        {
#line 395 "startup.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, ((MR_Box) (startup__Module_4)), ((MR_Box) (startup__Data_7)), startup__STATE_VARIABLE_ModuleDataMap_0_8, startup__STATE_VARIABLE_ModuleDataMap_9);
#line 395 "startup.m"
          return;
        }
#line 394 "startup.m"
      }
#line 393 "startup.m"
  }
#line 387 "startup.m"
}

#line 382 "startup.m"
static MR_Word MR_CALL 
startup__initialize_module_data_1_f_0(
#line 382 "startup.m"
  MR_Word startup__PSPtrs_3)
#line 382 "startup.m"
{
#line 384 "startup.m"
  {
#line 384 "startup.m"
    MR_bool startup__succeeded;
#line 384 "startup.m"
    MR_Word startup__HeadVar__2_2;
#line 384 "startup.m"
    MR_Word startup__V_4_4;
#line 384 "startup.m"
    MR_Word startup__V_5_5;

#line 385 "startup.m"
    {
#line 385 "startup.m"
      startup__V_4_4 = measurements__zero_own_prof_info_0_f_0();
    }
#line 385 "startup.m"
    {
#line 385 "startup.m"
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
#line 384 "startup.m"
    return startup__HeadVar__2_2;
#line 384 "startup.m"
  }
#line 382 "startup.m"
}

#line 368 "startup.m"
static MR_String MR_CALL 
startup__contour_file_name_1_f_0(
#line 368 "startup.m"
  MR_String startup__DataFileName_3)
#line 368 "startup.m"
{
#line 373 "startup.m"
  {
#line 373 "startup.m"
    MR_bool startup__succeeded;
#line 373 "startup.m"
    MR_String startup__ContourFileName_4;
#line 373 "startup.m"
    MR_String startup__BaseFileName_5;

#line 371 "startup.m"
    {
#line 371 "startup.m"
      startup__succeeded = mercury__string__remove_suffix_3_p_0(startup__DataFileName_3, (MR_String) ".data", &startup__BaseFileName_5);
    }
#line 373 "startup.m"
    if (startup__succeeded)
#line 372 "startup.m"
      {
#line 372 "startup.m"
        {
#line 372 "startup.m"
          return startup__ContourFileName_4 = mercury__string__f_43_43_2_f_0(startup__BaseFileName_5, (MR_String) ".contour");
        }
#line 372 "startup.m"
      }
#line 373 "startup.m"
    else
#line 374 "startup.m"
      {
#line 374 "startup.m"
        MR_String startup__V_8_8;

#line 374 "startup.m"
        {
#line 374 "startup.m"
          startup__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t remove suffix from deep file name: ", startup__DataFileName_3);
        }
#line 374 "startup.m"
        {
#line 374 "startup.m"
          mercury__require__error_1_p_0(startup__V_8_8);
        }
#line 374 "startup.m"
      }
#line 373 "startup.m"
    return startup__ContourFileName_4;
#line 373 "startup.m"
  }
#line 368 "startup.m"
}

#line 324 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_10(
#line 324 "startup.m"
  MR_Box startup__closure_arg,
#line 324 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 324 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 324 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 324 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 324 "startup.m"
{
#line 324 "startup.m"
  {
#line 324 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 324 "startup.m"
    MR_Word startup__conv40_STATE_VARIABLE_Deep_17;

#line 324 "startup.m"
    {
#line 324 "startup.m"
      startup__propagate_to_clique_4_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_Word) startup__wrapper_arg_3), &startup__conv40_STATE_VARIABLE_Deep_17);
    }
#line 324 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv40_STATE_VARIABLE_Deep_17));
#line 324 "startup.m"
  }
#line 324 "startup.m"
}

#line 294 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_9(
#line 294 "startup.m"
  MR_Box startup__closure_arg,
#line 294 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 294 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 294 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 294 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 294 "startup.m"
{
#line 294 "startup.m"
  {
#line 294 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 294 "startup.m"
    MR_ArrayPtr startup__conv31_STATE_VARIABLE_PDOwnArray_14;

#line 294 "startup.m"
    {
#line 294 "startup.m"
      startup__sum_call_sites_in_proc_dynamic_4_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv31_STATE_VARIABLE_PDOwnArray_14);
    }
#line 294 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv31_STATE_VARIABLE_PDOwnArray_14));
#line 294 "startup.m"
  }
#line 294 "startup.m"
}

#line 243 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_8(
#line 243 "startup.m"
  MR_Box startup__closure_arg,
#line 243 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 243 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 243 "startup.m"
  MR_Box * startup__wrapper_arg_3)
#line 243 "startup.m"
{
#line 243 "startup.m"
  {
#line 243 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 243 "startup.m"
    MR_Word startup__conv27_STATE_VARIABLE_ModuleDataMap_9;

#line 243 "startup.m"
    {
#line 243 "startup.m"
      startup__ensure_module_has_module_data_3_p_0(((MR_String) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), &startup__conv27_STATE_VARIABLE_ModuleDataMap_9);
    }
#line 243 "startup.m"
    *startup__wrapper_arg_3 = ((MR_Box) (startup__conv27_STATE_VARIABLE_ModuleDataMap_9));
#line 243 "startup.m"
  }
#line 243 "startup.m"
}

#line 218 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_7(
#line 218 "startup.m"
  MR_Box startup__closure_arg,
#line 218 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 218 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 218 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 218 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 218 "startup.m"
{
#line 218 "startup.m"
  {
#line 218 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 218 "startup.m"
    MR_ArrayPtr startup__conv25_STATE_VARIABLE_CallSiteCalls_19;

#line 218 "startup.m"
    {
#line 218 "startup.m"
      startup__construct_call_site_calls_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv25_STATE_VARIABLE_CallSiteCalls_19);
    }
#line 218 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv25_STATE_VARIABLE_CallSiteCalls_19));
#line 218 "startup.m"
  }
#line 218 "startup.m"
}

#line 209 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_6(
#line 209 "startup.m"
  MR_Box startup__closure_arg,
#line 209 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 209 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 209 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 209 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 209 "startup.m"
{
#line 209 "startup.m"
  {
#line 209 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 209 "startup.m"
    MR_ArrayPtr startup__conv22_STATE_VARIABLE_CallSiteStaticMap_16;

#line 209 "startup.m"
    {
#line 209 "startup.m"
      startup__construct_call_site_caller_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv22_STATE_VARIABLE_CallSiteStaticMap_16);
    }
#line 209 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv22_STATE_VARIABLE_CallSiteStaticMap_16));
#line 209 "startup.m"
  }
#line 209 "startup.m"
}

#line 200 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_5(
#line 200 "startup.m"
  MR_Box startup__closure_arg,
#line 200 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 200 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 200 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 200 "startup.m"
  MR_Box * startup__wrapper_arg_4)
#line 200 "startup.m"
{
#line 200 "startup.m"
  {
#line 200 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 200 "startup.m"
    MR_ArrayPtr startup__conv19_STATE_VARIABLE_ProcCallers_16;

#line 200 "startup.m"
    {
#line 200 "startup.m"
      startup__construct_proc_callers_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv19_STATE_VARIABLE_ProcCallers_16);
    }
#line 200 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv19_STATE_VARIABLE_ProcCallers_16));
#line 200 "startup.m"
  }
#line 200 "startup.m"
}

#line 188 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_4(
#line 188 "startup.m"
  MR_Box startup__closure_arg,
#line 188 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 188 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 188 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 188 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 188 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 188 "startup.m"
  MR_Box * startup__wrapper_arg_6)
#line 188 "startup.m"
{
#line 188 "startup.m"
  {
#line 188 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 188 "startup.m"
    MR_ArrayPtr startup__conv15_STATE_VARIABLE_CliqueParents_17;
#line 188 "startup.m"
    MR_ArrayPtr startup__conv14_STATE_VARIABLE_CliqueMaybeChildren_19;

#line 188 "startup.m"
    {
#line 188 "startup.m"
      startup__construct_clique_parents_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 3))), ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__closure, (MR_Integer) 4))), ((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv15_STATE_VARIABLE_CliqueParents_17, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv14_STATE_VARIABLE_CliqueMaybeChildren_19);
    }
#line 188 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv15_STATE_VARIABLE_CliqueParents_17));
#line 188 "startup.m"
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv14_STATE_VARIABLE_CliqueMaybeChildren_19));
#line 188 "startup.m"
  }
#line 188 "startup.m"
}

#line 127 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_3(
#line 127 "startup.m"
  MR_Box startup__closure_arg,
#line 127 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 127 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 127 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 127 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 127 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 127 "startup.m"
  MR_Box * startup__wrapper_arg_6)
#line 127 "startup.m"
{
#line 127 "startup.m"
  {
#line 127 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 127 "startup.m"
    MR_ArrayPtr startup__conv7_STATE_VARIABLE_CallSiteDynamics_19;
#line 127 "startup.m"
    MR_ArrayPtr startup__conv6_STATE_VARIABLE_ProcStatics_21;

#line 127 "startup.m"
    {
#line 127 "startup.m"
      startup__record_csd_containers_zeroed_pss_6_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv7_STATE_VARIABLE_CallSiteDynamics_19, ((MR_ArrayPtr) startup__wrapper_arg_5), &startup__conv6_STATE_VARIABLE_ProcStatics_21);
    }
#line 127 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv7_STATE_VARIABLE_CallSiteDynamics_19));
#line 127 "startup.m"
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv6_STATE_VARIABLE_ProcStatics_21));
#line 127 "startup.m"
  }
#line 127 "startup.m"
}

#line 120 "startup.m"
static MR_Box MR_CALL 
startup__startup_11_p_0_2(
#line 120 "startup.m"
  MR_Box startup__closure_arg,
#line 120 "startup.m"
  MR_Box startup__wrapper_arg_1)
#line 120 "startup.m"
{
#line 120 "startup.m"
  {
#line 120 "startup.m"
    MR_Box startup__wrapper_arg_2;
#line 120 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 120 "startup.m"
    MR_Word startup__conv5_HeadVar__2_2;

#line 120 "startup.m"
    {
#line 120 "startup.m"
      startup__conv5_HeadVar__2_2 = startup__initialize_module_data_1_f_0(((MR_Word) startup__wrapper_arg_1));
    }
#line 120 "startup.m"
    startup__wrapper_arg_2 = ((MR_Box) (startup__conv5_HeadVar__2_2));
#line 120 "startup.m"
    return startup__wrapper_arg_2;
#line 120 "startup.m"
  }
#line 120 "startup.m"
}

#line 118 "startup.m"
static void MR_CALL 
startup__startup_11_p_0_1(
#line 118 "startup.m"
  MR_Box startup__closure_arg,
#line 118 "startup.m"
  MR_Box startup__wrapper_arg_1,
#line 118 "startup.m"
  MR_Box startup__wrapper_arg_2,
#line 118 "startup.m"
  MR_Box startup__wrapper_arg_3,
#line 118 "startup.m"
  MR_Box * startup__wrapper_arg_4,
#line 118 "startup.m"
  MR_Box startup__wrapper_arg_5,
#line 118 "startup.m"
  MR_Box * startup__wrapper_arg_6)
#line 118 "startup.m"
{
#line 118 "startup.m"
  {
#line 118 "startup.m"
    MR_Box startup__closure = startup__closure_arg;
#line 118 "startup.m"
    MR_ArrayPtr startup__conv1_STATE_VARIABLE_CallSiteStatics_17;
#line 118 "startup.m"
    MR_Word startup__conv0_STATE_VARIABLE_ModuleProcs_19;

#line 118 "startup.m"
    {
#line 118 "startup.m"
      startup__record_css_containers_module_procs_6_p_0(((MR_Integer) startup__wrapper_arg_1), ((MR_Word) startup__wrapper_arg_2), ((MR_ArrayPtr) startup__wrapper_arg_3), &startup__conv1_STATE_VARIABLE_CallSiteStatics_17, ((MR_Word) startup__wrapper_arg_5), &startup__conv0_STATE_VARIABLE_ModuleProcs_19);
    }
#line 118 "startup.m"
    *startup__wrapper_arg_4 = ((MR_Box) (startup__conv1_STATE_VARIABLE_CallSiteStatics_17));
#line 118 "startup.m"
    *startup__wrapper_arg_6 = ((MR_Box) (startup__conv0_STATE_VARIABLE_ModuleProcs_19));
#line 118 "startup.m"
  }
#line 118 "startup.m"
}

#line 105 "startup.m"
static void MR_CALL 
startup__startup_11_p_0(
#line 105 "startup.m"
  MR_String startup__Machine_12,
#line 105 "startup.m"
  MR_String startup__ScriptName_13,
#line 105 "startup.m"
  MR_String startup__DataFileName_14,
#line 105 "startup.m"
  MR_Word startup__Canonical_15,
#line 105 "startup.m"
  MR_Word startup__MaybeOutputStream_16,
#line 105 "startup.m"
  MR_Word startup__DumpStages_17,
#line 105 "startup.m"
  MR_Word startup__DumpOptions_18,
#line 105 "startup.m"
  MR_Word startup__InitDeep0_19,
#line 105 "startup.m"
  MR_Word * startup__STATE_VARIABLE_Deep_93)
#line 105 "startup.m"
{
#line 110 "startup.m"
  {
#line 110 "startup.m"
    MR_bool startup__succeeded;
#line 110 "startup.m"
    MR_Word startup__TypeInfo_296_296;
#line 110 "startup.m"
    MR_Word startup__TypeCtorInfo_297_297;
#line 110 "startup.m"
    MR_Word startup__TypeInfo_298_298;
#line 110 "startup.m"
    MR_Word startup__TypeCtorInfo_299_299;
#line 110 "startup.m"
    MR_Word startup__TypeInfo_310_310;
#line 110 "startup.m"
    MR_Word startup__TypeInfo_311_311;
#line 110 "startup.m"
    MR_Word startup__TypeCtorInfo_312_312;
#line 110 "startup.m"
    MR_Word startup__TypeCtorInfo_317_317;
#line 110 "startup.m"
    MR_Word startup__TypeInfo_319_319;
#line 110 "startup.m"
    MR_Word startup__TypeInfo_331_331;
#line 110 "startup.m"
    MR_Word startup__TypeCtorInfo_343_343;
#line 110 "startup.m"
    MR_Word startup__TypeCtorInfo_356_356;
#line 110 "startup.m"
    MR_Word startup__TypeCtorInfo_357_357;
#line 110 "startup.m"
    MR_Word startup__TypeInfo_363_363;
#line 110 "startup.m"
    MR_Word startup__TypeCtorInfo_369_369;
#line 110 "startup.m"
    MR_Word startup__InitStats_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 0)));
#line 110 "startup.m"
    MR_Word startup__Root_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 1)));
#line 110 "startup.m"
    MR_ArrayPtr startup__CallSiteDynamics0_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 2)));
#line 110 "startup.m"
    MR_ArrayPtr startup__ProcDynamics_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 3)));
#line 110 "startup.m"
    MR_ArrayPtr startup__CallSiteStatics0_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 4)));
#line 110 "startup.m"
    MR_ArrayPtr startup__ProcStatics0_27 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep0_19, (MR_Integer) 5)));
#line 110 "startup.m"
    MR_ArrayPtr startup__CallSiteStatics_28;
#line 110 "startup.m"
    MR_Word startup__ModuleProcs_29;
#line 110 "startup.m"
    MR_Word startup__ModuleDataMap0_30;
#line 110 "startup.m"
    MR_ArrayPtr startup__CallSiteDynamics_31;
#line 110 "startup.m"
    MR_ArrayPtr startup__ProcStatics_32;
#line 110 "startup.m"
    MR_Word startup__InitDeep1_33;
#line 110 "startup.m"
    MR_Word startup__InitDeep_34;
#line 110 "startup.m"
    MR_Integer startup__PDMax_35;
#line 110 "startup.m"
    MR_Integer startup__NPDs_36;
#line 110 "startup.m"
    MR_Integer startup__CSDMax_37;
#line 110 "startup.m"
    MR_Integer startup__NCSDs_38;
#line 110 "startup.m"
    MR_Integer startup__PSMax_39;
#line 110 "startup.m"
    MR_Integer startup__NPSs_40;
#line 110 "startup.m"
    MR_Integer startup__CSSMax_41;
#line 110 "startup.m"
    MR_Integer startup__NCSSs_42;
#line 110 "startup.m"
    MR_Word startup__CliqueList_43;
#line 110 "startup.m"
    MR_ArrayPtr startup__Cliques_44;
#line 110 "startup.m"
    MR_ArrayPtr startup__CliqueIndex_45;
#line 110 "startup.m"
    MR_Integer startup__CliqueMax_46;
#line 110 "startup.m"
    MR_Integer startup__NCliques_47;
#line 110 "startup.m"
    MR_ArrayPtr startup__CliqueParents0_48;
#line 110 "startup.m"
    MR_ArrayPtr startup__CliqueMaybeChildren0_49;
#line 110 "startup.m"
    MR_ArrayPtr startup__CliqueParents_50;
#line 110 "startup.m"
    MR_ArrayPtr startup__CliqueMaybeChildren_51;
#line 110 "startup.m"
    MR_ArrayPtr startup__ProcCallers0_52;
#line 110 "startup.m"
    MR_ArrayPtr startup__ProcCallers_53;
#line 110 "startup.m"
    MR_ArrayPtr startup__CallSiteStaticMap0_54;
#line 110 "startup.m"
    MR_ArrayPtr startup__CallSiteStaticMap_55;
#line 110 "startup.m"
    MR_ArrayPtr startup__CallSiteCalls0_56;
#line 110 "startup.m"
    MR_ArrayPtr startup__CallSiteCalls_57;
#line 110 "startup.m"
    MR_String startup__ProgRepFileName_58;
#line 110 "startup.m"
    MR_Word startup__ProgRepResult_59;
#line 110 "startup.m"
    MR_Word startup__MaybeProcRepFile_61;
#line 110 "startup.m"
    MR_Word startup__ModuleDataMap_65;
#line 110 "startup.m"
    MR_String startup__ContourFileName_71;
#line 110 "startup.m"
    MR_String startup__TryMsg_72;
#line 110 "startup.m"
    MR_Word startup__ExcludeFile_73;
#line 110 "startup.m"
    MR_Word startup__ExcludeContents_75;
#line 110 "startup.m"
    MR_ArrayPtr startup__CSDDesc0_80;
#line 110 "startup.m"
    MR_ArrayPtr startup__PDOwn0_81;
#line 110 "startup.m"
    MR_ArrayPtr startup__PDOwn_82;
#line 110 "startup.m"
    MR_ArrayPtr startup__PDDesc0_83;
#line 110 "startup.m"
    MR_ArrayPtr startup__PSOwn0_84;
#line 110 "startup.m"
    MR_ArrayPtr startup__PSDesc0_85;
#line 110 "startup.m"
    MR_ArrayPtr startup__CSSOwn0_86;
#line 110 "startup.m"
    MR_ArrayPtr startup__CSSDesc0_87;
#line 110 "startup.m"
    MR_ArrayPtr startup__PDCompTable0_88;
#line 110 "startup.m"
    MR_ArrayPtr startup__CSDCompTable0_89;
#line 110 "startup.m"
    MR_Word startup__CoverageDataType_90;
#line 110 "startup.m"
    MR_Word startup__V_99_99;
#line 110 "startup.m"
    MR_ArrayPtr startup__V_103_103;
#line 110 "startup.m"
    MR_Word startup__V_104_104;
#line 110 "startup.m"
    MR_ArrayPtr startup__V_112_112;
#line 110 "startup.m"
    MR_ArrayPtr startup__V_113_113;
#line 110 "startup.m"
    MR_ArrayPtr startup__V_128_128;
#line 110 "startup.m"
    MR_ArrayPtr startup__V_130_130;
#line 110 "startup.m"
    MR_ArrayPtr startup__V_132_132;
#line 110 "startup.m"
    MR_ArrayPtr startup__V_134_134;
#line 110 "startup.m"
    MR_Word startup__V_152_152;
#line 110 "startup.m"
    MR_Word startup__V_159_159;
#line 110 "startup.m"
    MR_Word startup__V_167_167;
#line 110 "startup.m"
    MR_Word startup__V_173_173;
#line 110 "startup.m"
    MR_Word startup__V_174_174;
#line 110 "startup.m"
    MR_Word startup__V_212_212;
#line 110 "startup.m"
    MR_Word startup__V_213_213;
#line 110 "startup.m"
    MR_Word startup__V_215_215;
#line 110 "startup.m"
    MR_Word startup__V_216_216;
#line 110 "startup.m"
    MR_Word startup__V_217_217;
#line 110 "startup.m"
    MR_Word startup__V_218_218;
#line 110 "startup.m"
    MR_Word startup__V_219_219;
#line 110 "startup.m"
    MR_Word startup__V_220_220;
#line 110 "startup.m"
    MR_Word startup__V_221_221;
#line 110 "startup.m"
    MR_Word startup__V_222_222;
#line 110 "startup.m"
    MR_Word startup__V_225_225;
#line 110 "startup.m"
    MR_Word startup__STATE_VARIABLE_Deep_243_243;
#line 110 "startup.m"
    MR_Word startup__STATE_VARIABLE_Deep_246_246;
#line 110 "startup.m"
    MR_String startup__V_375_375;
#line 118 "startup.m"
    MR_Box startup__conv2_V_103_103;
#line 118 "startup.m"
    MR_Box startup__conv4_CallSiteStatics_28;
#line 118 "startup.m"
    MR_Box startup__conv3_ModuleProcs_29;
#line 127 "startup.m"
    MR_Box startup__conv8_V_112_112;
#line 127 "startup.m"
    MR_Box startup__conv9_V_113_113;
#line 127 "startup.m"
    MR_Box startup__conv11_CallSiteDynamics_31;
#line 127 "startup.m"
    MR_Box startup__conv10_ProcStatics_32;
#line 152 "startup.m"
    MR_Word startup__V_256_256;
#line 152 "startup.m"
    MR_Word startup__V_257_257;
#line 152 "startup.m"
    MR_ArrayPtr startup__V_258_258;
#line 152 "startup.m"
    MR_ArrayPtr startup__V_259_259;
#line 152 "startup.m"
    MR_ArrayPtr startup__V_260_260;
#line 154 "startup.m"
    MR_Word startup__V_261_261;
#line 154 "startup.m"
    MR_Word startup__V_262_262;
#line 154 "startup.m"
    MR_ArrayPtr startup__V_263_263;
#line 154 "startup.m"
    MR_ArrayPtr startup__V_264_264;
#line 154 "startup.m"
    MR_ArrayPtr startup__V_265_265;
#line 156 "startup.m"
    MR_Word startup__V_266_266;
#line 156 "startup.m"
    MR_Word startup__V_267_267;
#line 156 "startup.m"
    MR_ArrayPtr startup__V_268_268;
#line 156 "startup.m"
    MR_ArrayPtr startup__V_269_269;
#line 156 "startup.m"
    MR_ArrayPtr startup__V_270_270;
#line 158 "startup.m"
    MR_Word startup__V_271_271;
#line 158 "startup.m"
    MR_Word startup__V_272_272;
#line 158 "startup.m"
    MR_ArrayPtr startup__V_273_273;
#line 158 "startup.m"
    MR_ArrayPtr startup__V_274_274;
#line 158 "startup.m"
    MR_ArrayPtr startup__V_275_275;
#line 186 "startup.m"
    MR_ArrayPtr startup__conv12_CliqueParents0_48;
#line 187 "startup.m"
    MR_ArrayPtr startup__conv13_CliqueMaybeChildren0_49;
#line 188 "startup.m"
    MR_Box startup__conv17_CliqueParents_50;
#line 188 "startup.m"
    MR_Box startup__conv16_CliqueMaybeChildren_51;
#line 199 "startup.m"
    MR_ArrayPtr startup__conv18_ProcCallers0_52;
#line 200 "startup.m"
    MR_Box startup__conv20_ProcCallers_53;
#line 208 "startup.m"
    MR_ArrayPtr startup__conv21_CallSiteStaticMap0_54;
#line 209 "startup.m"
    MR_Box startup__conv23_CallSiteStaticMap_55;
#line 217 "startup.m"
    MR_ArrayPtr startup__conv24_CallSiteCalls0_56;
#line 218 "startup.m"
    MR_Box startup__conv26_CallSiteCalls_57;
#line 273 "startup.m"
    MR_String startup__V_74_74;
#line 292 "startup.m"
    MR_ArrayPtr startup__conv29_CSDDesc0_80;
#line 293 "startup.m"
    MR_ArrayPtr startup__conv30_PDOwn0_81;
#line 294 "startup.m"
    MR_Box startup__conv32_PDOwn_82;
#line 296 "startup.m"
    MR_ArrayPtr startup__conv33_PDDesc0_83;
#line 297 "startup.m"
    MR_ArrayPtr startup__conv34_PSOwn0_84;
#line 298 "startup.m"
    MR_ArrayPtr startup__conv35_PSDesc0_85;
#line 299 "startup.m"
    MR_ArrayPtr startup__conv36_CSSOwn0_86;
#line 300 "startup.m"
    MR_ArrayPtr startup__conv37_CSSDesc0_87;
#line 301 "startup.m"
    MR_ArrayPtr startup__conv38_PDCompTable0_88;
#line 302 "startup.m"
    MR_ArrayPtr startup__conv39_CSDCompTable0_89;
#line 303 "startup.m"
    MR_String startup__V_276_276;
#line 303 "startup.m"
    MR_Integer startup__V_277_277;
#line 303 "startup.m"
    MR_Integer startup__V_278_278;
#line 303 "startup.m"
    MR_Integer startup__V_279_279;
#line 303 "startup.m"
    MR_Integer startup__V_280_280;
#line 303 "startup.m"
    MR_Integer startup__V_281_281;
#line 303 "startup.m"
    MR_Integer startup__V_282_282;
#line 303 "startup.m"
    MR_Integer startup__V_283_283;
#line 303 "startup.m"
    MR_Integer startup__V_284_284;
#line 303 "startup.m"
    MR_Integer startup__V_285_285;
#line 303 "startup.m"
    MR_Word startup__V_286_286;

#line 114 "startup.m"
    {
#line 114 "startup.m"
      startup__V_99_99 = dump__default_dump_options_0_f_0();
    }
#line 113 "startup.m"
    {
#line 113 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(startup__InitDeep0_19, startup__V_99_99, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 0);
    }
#line 116 "startup.m"
    {
#line 116 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Mapping static call sites to containing procedures...\n");
    }
#line 10044 "startup.c"
    startup__TypeInfo_296_296 = (MR_Word) &startup_scalar_common_1[0];
#line 118 "startup.m"
    {
#line 118 "startup.m"
      startup__conv2_V_103_103 = array_util__u_1_f_0(startup__TypeInfo_296_296, ((MR_Box) (startup__CallSiteStatics0_26)));
    }
#line 118 "startup.m"
    startup__V_103_103 = ((MR_ArrayPtr) startup__conv2_V_103_103);
#line 10053 "startup.c"
    startup__TypeCtorInfo_297_297 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 10055 "startup.c"
    startup__TypeInfo_298_298 = (MR_Word) &startup_scalar_common_1[1];
#line 118 "startup.m"
    {
#line 118 "startup.m"
      startup__V_104_104 = mercury__map__init_0_f_0(startup__TypeCtorInfo_297_297, startup__TypeInfo_298_298);
    }
#line 10062 "startup.c"
    startup__TypeCtorInfo_299_299 = (MR_Word) &profile__profile__type_ctor_info_proc_static_0;
#line 118 "startup.m"
    {
#line 118 "startup.m"
      array_util__array_foldl2_from_1_6_p_1(startup__TypeCtorInfo_299_299, startup__TypeInfo_296_296, (MR_Word) &startup_scalar_common_2[0], (MR_Word) &startup_scalar_common_2[4], (MR_ArrayPtr) startup__ProcStatics0_27, ((MR_Box) (startup__V_103_103)), &startup__conv4_CallSiteStatics_28, ((MR_Box) (startup__V_104_104)), &startup__conv3_ModuleProcs_29);
    }
#line 118 "startup.m"
    startup__CallSiteStatics_28 = ((MR_ArrayPtr) startup__conv4_CallSiteStatics_28);
#line 118 "startup.m"
    startup__ModuleProcs_29 = ((MR_Word) startup__conv3_ModuleProcs_29);
#line 120 "startup.m"
    {
#line 120 "startup.m"
      startup__ModuleDataMap0_30 = mercury__map__map_values_only_2_f_0(startup__TypeInfo_298_298, (MR_Word) &profile__profile__type_ctor_info_module_data_0, startup__TypeCtorInfo_297_297, (MR_Word) &startup_scalar_common_2[5], startup__ModuleProcs_29);
    }
#line 121 "startup.m"
    {
#line 121 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 123 "startup.m"
    {
#line 123 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 125 "startup.m"
    {
#line 125 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Mapping dynamic call sites to containing procedures...\n");
    }
#line 10093 "startup.c"
    startup__TypeInfo_310_310 = (MR_Word) &startup_scalar_common_1[2];
#line 127 "startup.m"
    {
#line 127 "startup.m"
      startup__conv8_V_112_112 = array_util__u_1_f_0(startup__TypeInfo_310_310, ((MR_Box) (startup__CallSiteDynamics0_24)));
    }
#line 127 "startup.m"
    startup__V_112_112 = ((MR_ArrayPtr) startup__conv8_V_112_112);
#line 10102 "startup.c"
    startup__TypeInfo_311_311 = (MR_Word) &startup_scalar_common_1[3];
#line 127 "startup.m"
    {
#line 127 "startup.m"
      startup__conv9_V_113_113 = array_util__u_1_f_0(startup__TypeInfo_311_311, ((MR_Box) (startup__ProcStatics0_27)));
    }
#line 127 "startup.m"
    startup__V_113_113 = ((MR_ArrayPtr) startup__conv9_V_113_113);
#line 10111 "startup.c"
    startup__TypeCtorInfo_312_312 = (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0;
#line 127 "startup.m"
    {
#line 127 "startup.m"
      array_util__array_foldl2_from_1_6_p_1(startup__TypeCtorInfo_312_312, startup__TypeInfo_310_310, startup__TypeInfo_311_311, (MR_Word) &startup_scalar_common_2[6], (MR_ArrayPtr) startup__ProcDynamics_25, ((MR_Box) (startup__V_112_112)), &startup__conv11_CallSiteDynamics_31, ((MR_Box) (startup__V_113_113)), &startup__conv10_ProcStatics_32);
    }
#line 127 "startup.m"
    startup__CallSiteDynamics_31 = ((MR_ArrayPtr) startup__conv11_CallSiteDynamics_31);
#line 127 "startup.m"
    startup__ProcStatics_32 = ((MR_ArrayPtr) startup__conv10_ProcStatics_32);
#line 129 "startup.m"
    {
#line 129 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 131 "startup.m"
    {
#line 131 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 133 "startup.m"
    {
#line 133 "startup.m"
      startup__InitDeep1_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 133 "startup.m"
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 0) = ((MR_Box) (startup__InitStats_22));
#line 133 "startup.m"
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 1) = ((MR_Box) (startup__Root_23));
#line 133 "startup.m"
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 2) = ((MR_Box) (startup__CallSiteDynamics_31));
#line 133 "startup.m"
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 3) = ((MR_Box) (startup__ProcDynamics_25));
#line 133 "startup.m"
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 4) = ((MR_Box) (startup__CallSiteStatics_28));
#line 133 "startup.m"
      MR_hl_field(MR_mktag(0), startup__InitDeep1_33, 5) = ((MR_Box) (startup__ProcStatics_32));
#line 133 "startup.m"
    }
#line 135 "startup.m"
    {
#line 135 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(startup__InitDeep1_33, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 10);
    }
#line 140 "startup.m"
    if ((startup__Canonical_15 == (MR_Integer) 0))
#line 139 "startup.m"
      startup__InitDeep_34 = startup__InitDeep1_33;
#line 140 "startup.m"
    else
#line 141 "startup.m"
      {
#line 142 "startup.m"
        {
#line 142 "startup.m"
          startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Canonicalizing cliques...\n");
        }
#line 144 "startup.m"
        {
#line 144 "startup.m"
          canonical__canonicalize_cliques_2_p_0(startup__InitDeep1_33, &startup__InitDeep_34);
        }
#line 145 "startup.m"
        {
#line 145 "startup.m"
          startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
        }
#line 147 "startup.m"
        {
#line 147 "startup.m"
          startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
        }
#line 141 "startup.m"
      }
#line 149 "startup.m"
    {
#line 149 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_54_93_95_48_6_p_0(startup__InitDeep_34, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 20);
    }
#line 152 "startup.m"
    startup__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 0)));
#line 152 "startup.m"
    startup__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 1)));
#line 152 "startup.m"
    startup__V_258_258 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 2)));
#line 152 "startup.m"
    startup__V_128_128 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 3)));
#line 152 "startup.m"
    startup__V_259_259 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 4)));
#line 152 "startup.m"
    startup__V_260_260 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 5)));
#line 152 "startup.m"
    {
#line 152 "startup.m"
      mercury__array__max_2_p_0(startup__TypeCtorInfo_312_312, (MR_ArrayPtr) startup__V_128_128, &startup__PDMax_35);
    }
#line 153 "startup.m"
    startup__NPDs_36 = (startup__PDMax_35 + (MR_Integer) 1);
#line 154 "startup.m"
    startup__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 0)));
#line 154 "startup.m"
    startup__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 1)));
#line 154 "startup.m"
    startup__V_130_130 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 2)));
#line 154 "startup.m"
    startup__V_263_263 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 3)));
#line 154 "startup.m"
    startup__V_264_264 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 4)));
#line 154 "startup.m"
    startup__V_265_265 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 5)));
#line 10221 "startup.c"
    startup__TypeCtorInfo_317_317 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0;
#line 154 "startup.m"
    {
#line 154 "startup.m"
      mercury__array__max_2_p_0(startup__TypeCtorInfo_317_317, (MR_ArrayPtr) startup__V_130_130, &startup__CSDMax_37);
    }
#line 155 "startup.m"
    startup__NCSDs_38 = (startup__CSDMax_37 + (MR_Integer) 1);
#line 156 "startup.m"
    startup__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 0)));
#line 156 "startup.m"
    startup__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 1)));
#line 156 "startup.m"
    startup__V_268_268 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 2)));
#line 156 "startup.m"
    startup__V_269_269 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 3)));
#line 156 "startup.m"
    startup__V_270_270 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 4)));
#line 156 "startup.m"
    startup__V_132_132 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 5)));
#line 156 "startup.m"
    {
#line 156 "startup.m"
      mercury__array__max_2_p_0(startup__TypeCtorInfo_299_299, (MR_ArrayPtr) startup__V_132_132, &startup__PSMax_39);
    }
#line 157 "startup.m"
    startup__NPSs_40 = (startup__PSMax_39 + (MR_Integer) 1);
#line 158 "startup.m"
    startup__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 0)));
#line 158 "startup.m"
    startup__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 1)));
#line 158 "startup.m"
    startup__V_273_273 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 2)));
#line 158 "startup.m"
    startup__V_274_274 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 3)));
#line 158 "startup.m"
    startup__V_134_134 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 4)));
#line 158 "startup.m"
    startup__V_275_275 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), startup__InitDeep_34, (MR_Integer) 5)));
#line 158 "startup.m"
    {
#line 158 "startup.m"
      mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_0, (MR_ArrayPtr) startup__V_134_134, &startup__CSSMax_41);
    }
#line 159 "startup.m"
    startup__NCSSs_42 = (startup__CSSMax_41 + (MR_Integer) 1);
#line 161 "startup.m"
    {
#line 161 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Finding cliques...\n");
    }
#line 163 "startup.m"
    {
#line 163 "startup.m"
      callgraph__find_cliques_2_p_0(startup__InitDeep_34, &startup__CliqueList_43);
    }
#line 164 "startup.m"
    {
#line 164 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 166 "startup.m"
    {
#line 166 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 168 "startup.m"
    {
#line 168 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Constructing clique indexes...\n");
    }
#line 170 "startup.m"
    {
#line 170 "startup.m"
      callgraph__make_clique_indexes_4_p_0(startup__NPDs_36, startup__CliqueList_43, &startup__Cliques_44, &startup__CliqueIndex_45);
    }
#line 171 "startup.m"
    {
#line 171 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 173 "startup.m"
    {
#line 173 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 175 "startup.m"
    {
#line 175 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Constructing clique parent map...\n");
    }
#line 10313 "startup.c"
    startup__TypeInfo_319_319 = (MR_Word) &startup_scalar_common_1[4];
#line 184 "startup.m"
    {
#line 184 "startup.m"
      mercury__array__max_2_p_0(startup__TypeInfo_319_319, (MR_ArrayPtr) startup__Cliques_44, &startup__CliqueMax_46);
    }
#line 185 "startup.m"
    startup__NCliques_47 = (startup__CliqueMax_46 + (MR_Integer) 1);
#line 186 "startup.m"
    {
#line 186 "startup.m"
      mercury__array__init_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0, startup__NCliques_47, ((MR_Box) (((MR_Box) ((MR_Integer) -1)))), &startup__conv12_CliqueParents0_48);
    }
#line 186 "startup.m"
    startup__CliqueParents0_48 = (MR_ArrayPtr) startup__conv12_CliqueParents0_48;
#line 187 "startup.m"
    {
#line 187 "startup.m"
      mercury__array__init_3_p_0((MR_Word) &startup_scalar_common_1[5], startup__NCSDs_38, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv13_CliqueMaybeChildren0_49);
    }
#line 187 "startup.m"
    startup__CliqueMaybeChildren0_49 = (MR_ArrayPtr) startup__conv13_CliqueMaybeChildren0_49;
#line 188 "startup.m"
    {
#line 188 "startup.m"
      startup__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 188 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_152_152, 0) = ((MR_Box) (&startup_scalar_common_5[0]));
#line 188 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_152_152, 1) = ((MR_Box) (startup__startup_11_p_0_4));
#line 188 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_152_152, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 188 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_152_152, 3) = ((MR_Box) (startup__InitDeep_34));
#line 188 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_152_152, 4) = ((MR_Box) (startup__CliqueIndex_45));
#line 188 "startup.m"
    }
#line 188 "startup.m"
    {
#line 188 "startup.m"
      array_util__array_foldl2_from_1_6_p_1((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, (MR_Word) &startup_scalar_common_1[6], (MR_Word) &startup_scalar_common_1[7], startup__V_152_152, (MR_ArrayPtr) startup__CliqueIndex_45, ((MR_Box) (startup__CliqueParents0_48)), &startup__conv17_CliqueParents_50, ((MR_Box) (startup__CliqueMaybeChildren0_49)), &startup__conv16_CliqueMaybeChildren_51);
    }
#line 188 "startup.m"
    startup__CliqueParents_50 = ((MR_ArrayPtr) startup__conv17_CliqueParents_50);
#line 188 "startup.m"
    startup__CliqueMaybeChildren_51 = ((MR_ArrayPtr) startup__conv16_CliqueMaybeChildren_51);
#line 193 "startup.m"
    {
#line 193 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 195 "startup.m"
    {
#line 195 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 197 "startup.m"
    {
#line 197 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Finding procedure callers...\n");
    }
#line 10376 "startup.c"
    startup__TypeInfo_331_331 = (MR_Word) &startup_scalar_common_1[8];
#line 199 "startup.m"
    {
#line 199 "startup.m"
      mercury__array__init_3_p_0(startup__TypeInfo_331_331, startup__NPSs_40, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &startup__conv18_ProcCallers0_52);
    }
#line 199 "startup.m"
    startup__ProcCallers0_52 = (MR_ArrayPtr) startup__conv18_ProcCallers0_52;
#line 200 "startup.m"
    {
#line 200 "startup.m"
      startup__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 200 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_159_159, 0) = ((MR_Box) (&startup_scalar_common_6[0]));
#line 200 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_159_159, 1) = ((MR_Box) (startup__startup_11_p_0_5));
#line 200 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_159_159, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 200 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_159_159, 3) = ((MR_Box) (startup__InitDeep_34));
#line 200 "startup.m"
    }
#line 200 "startup.m"
    {
#line 200 "startup.m"
      array_util__array_foldl_from_1_4_p_1(startup__TypeCtorInfo_317_317, (MR_Word) &startup_scalar_common_1[9], startup__V_159_159, (MR_ArrayPtr) startup__CallSiteDynamics_31, ((MR_Box) (startup__ProcCallers0_52)), &startup__conv20_ProcCallers_53);
    }
#line 200 "startup.m"
    startup__ProcCallers_53 = ((MR_ArrayPtr) startup__conv20_ProcCallers_53);
#line 202 "startup.m"
    {
#line 202 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 204 "startup.m"
    {
#line 204 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 206 "startup.m"
    {
#line 206 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Constructing call site static map...\n");
    }
#line 208 "startup.m"
    {
#line 208 "startup.m"
      mercury__array__init_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_static_ptr_0, startup__NCSDs_38, ((MR_Box) (((MR_Box) ((MR_Integer) -1)))), &startup__conv21_CallSiteStaticMap0_54);
    }
#line 208 "startup.m"
    startup__CallSiteStaticMap0_54 = (MR_ArrayPtr) startup__conv21_CallSiteStaticMap0_54;
#line 209 "startup.m"
    {
#line 209 "startup.m"
      startup__V_167_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 209 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_167_167, 0) = ((MR_Box) (&startup_scalar_common_6[1]));
#line 209 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_167_167, 1) = ((MR_Box) (startup__startup_11_p_0_6));
#line 209 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_167_167, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 209 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_167_167, 3) = ((MR_Box) (startup__InitDeep_34));
#line 209 "startup.m"
    }
#line 209 "startup.m"
    {
#line 209 "startup.m"
      array_util__array_foldl_from_1_4_p_1(startup__TypeCtorInfo_312_312, (MR_Word) &startup_scalar_common_1[10], startup__V_167_167, (MR_ArrayPtr) startup__ProcDynamics_25, ((MR_Box) (startup__CallSiteStaticMap0_54)), &startup__conv23_CallSiteStaticMap_55);
    }
#line 209 "startup.m"
    startup__CallSiteStaticMap_55 = ((MR_ArrayPtr) startup__conv23_CallSiteStaticMap_55);
#line 211 "startup.m"
    {
#line 211 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 213 "startup.m"
    {
#line 213 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 215 "startup.m"
    {
#line 215 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Finding call site calls...\n");
    }
#line 10464 "startup.c"
    startup__TypeCtorInfo_343_343 = (MR_Word) &profile__profile__type_ctor_info_proc_static_ptr_0;
#line 217 "startup.m"
    {
#line 217 "startup.m"
      startup__V_173_173 = mercury__map__init_0_f_0(startup__TypeCtorInfo_343_343, startup__TypeInfo_331_331);
    }
#line 217 "startup.m"
    {
#line 217 "startup.m"
      mercury__array__init_3_p_0((MR_Word) &startup_scalar_common_2[1], startup__NCSSs_42, ((MR_Box) (startup__V_173_173)), &startup__conv24_CallSiteCalls0_56);
    }
#line 217 "startup.m"
    startup__CallSiteCalls0_56 = (MR_ArrayPtr) startup__conv24_CallSiteCalls0_56;
#line 218 "startup.m"
    {
#line 218 "startup.m"
      startup__V_174_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 218 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_174_174, 0) = ((MR_Box) (&startup_scalar_common_6[2]));
#line 218 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_174_174, 1) = ((MR_Box) (startup__startup_11_p_0_7));
#line 218 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_174_174, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 218 "startup.m"
      MR_hl_field(MR_mktag(0), startup__V_174_174, 3) = ((MR_Box) (startup__InitDeep_34));
#line 218 "startup.m"
    }
#line 218 "startup.m"
    {
#line 218 "startup.m"
      array_util__array_foldl_from_1_4_p_1(startup__TypeCtorInfo_312_312, (MR_Word) &startup_scalar_common_1[11], startup__V_174_174, (MR_ArrayPtr) startup__ProcDynamics_25, ((MR_Box) (startup__CallSiteCalls0_56)), &startup__conv26_CallSiteCalls_57);
    }
#line 218 "startup.m"
    startup__CallSiteCalls_57 = ((MR_ArrayPtr) startup__conv26_CallSiteCalls_57);
#line 220 "startup.m"
    {
#line 220 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 222 "startup.m"
    {
#line 222 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 224 "startup.m"
    {
#line 224 "startup.m"
      startup__ProgRepFileName_58 = startup__make_progrep_filename_1_f_0(startup__DataFileName_14);
    }
#line 225 "startup.m"
    {
#line 225 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Reading program representation...\n");
    }
#line 227 "startup.m"
    {
#line 227 "startup.m"
      mdbcomp__program_representation__read_prog_rep_file_4_p_0(startup__ProgRepFileName_58, &startup__ProgRepResult_59);
    }
#line 245 "startup.m"
    if (((MR_tag((MR_Word) startup__ProgRepResult_59)) == (MR_mktag((MR_Integer) 1))))
#line 246 "startup.m"
      {
#line 246 "startup.m"
        MR_Word startup__Error_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__ProgRepResult_59, (MR_Integer) 0)));
#line 246 "startup.m"
        MR_Word startup__OpenProgRepResult_67;

#line 248 "startup.m"
        {
#line 248 "startup.m"
          mercury__io__open_input_4_p_0(startup__ProgRepFileName_58, &startup__OpenProgRepResult_67);
        }
#line 259 "startup.m"
        if (((MR_tag((MR_Word) startup__OpenProgRepResult_67)) == (MR_mktag((MR_Integer) 1))))
#line 260 "startup.m"
          {
#line 262 "startup.m"
            startup__MaybeProcRepFile_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 263 "startup.m"
            startup__ModuleDataMap_65 = startup__ModuleDataMap0_30;
#line 260 "startup.m"
          }
#line 259 "startup.m"
        else
#line 250 "startup.m"
          {
#line 250 "startup.m"
            MR_Word startup__ProgRepStream_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__OpenProgRepResult_67, (MR_Integer) 0)));
#line 250 "startup.m"
            MR_String startup__ErrorMessage_69;
#line 250 "startup.m"
            MR_String startup__V_183_183;
#line 250 "startup.m"
            MR_String startup__V_186_186;
#line 250 "startup.m"
            MR_Word startup__V_188_188;

#line 253 "startup.m"
            {
#line 253 "startup.m"
              mercury__io__close_input_3_p_0(startup__ProgRepStream_68);
            }
#line 254 "startup.m"
            {
#line 254 "startup.m"
              startup__ErrorMessage_69 = mercury__io__error_message_1_f_0(startup__Error_66);
            }
#line 256 "startup.m"
            {
#line 256 "startup.m"
              startup__V_186_186 = mercury__string__f_43_43_2_f_0(startup__ErrorMessage_69, (MR_String) "\n");
            }
#line 255 "startup.m"
            {
#line 255 "startup.m"
              startup__V_183_183 = mercury__string__f_43_43_2_f_0((MR_String) "% Error: ", startup__V_186_186);
            }
#line 255 "startup.m"
            {
#line 255 "startup.m"
              startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, startup__V_183_183);
            }
#line 257 "startup.m"
            {
#line 257 "startup.m"
              startup__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 257 "startup.m"
              MR_hl_field(MR_mktag(1), startup__V_188_188, 0) = ((MR_Box) (startup__ErrorMessage_69));
#line 257 "startup.m"
            }
#line 257 "startup.m"
            {
#line 257 "startup.m"
              startup__MaybeProcRepFile_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 257 "startup.m"
              MR_hl_field(MR_mktag(1), startup__MaybeProcRepFile_61, 0) = ((MR_Box) (startup__V_188_188));
#line 257 "startup.m"
            }
#line 258 "startup.m"
            startup__ModuleDataMap_65 = startup__ModuleDataMap0_30;
#line 250 "startup.m"
          }
#line 246 "startup.m"
      }
#line 245 "startup.m"
    else
#line 229 "startup.m"
      {
#line 229 "startup.m"
        MR_Word startup__ProgRep_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ProgRepResult_59, (MR_Integer) 0)));
#line 229 "startup.m"
        MR_Word startup__ModuleMap_62;
#line 229 "startup.m"
        MR_Word startup__ProgRepModules_63;
#line 229 "startup.m"
        MR_Word startup__V_191_191;
#line 243 "startup.m"
        MR_Box startup__conv28_ModuleDataMap_65;

#line 230 "startup.m"
        {
#line 230 "startup.m"
          startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
        }
#line 232 "startup.m"
        {
#line 232 "startup.m"
          startup__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 232 "startup.m"
          MR_hl_field(MR_mktag(0), startup__V_191_191, 0) = ((MR_Box) (startup__ProgRep_60));
#line 232 "startup.m"
        }
#line 232 "startup.m"
        {
#line 232 "startup.m"
          startup__MaybeProcRepFile_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 232 "startup.m"
          MR_hl_field(MR_mktag(1), startup__MaybeProcRepFile_61, 0) = ((MR_Box) (startup__V_191_191));
#line 232 "startup.m"
        }
#line 234 "startup.m"
        startup__ModuleMap_62 = (MR_Word) startup__ProgRep_60;
#line 235 "startup.m"
        {
#line 235 "startup.m"
          mercury__map__keys_2_p_0(startup__TypeCtorInfo_297_297, (MR_Word) &startup_scalar_common_1[12], startup__ModuleMap_62, &startup__ProgRepModules_63);
        }
#line 240 "startup.m"
        if ((startup__MaybeOutputStream_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 241 "startup.m"
          {
#line 241 "startup.m"
          }
#line 240 "startup.m"
        else
#line 237 "startup.m"
          {
#line 237 "startup.m"
            MR_Word startup__OutputStream_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__MaybeOutputStream_16, (MR_Integer) 0)));

#line 238 "startup.m"
            {
#line 238 "startup.m"
              mercury__io__write_4_p_0((MR_Word) &startup_scalar_common_1[13], startup__OutputStream_64, ((MR_Box) (startup__ProgRepModules_63)));
            }
#line 239 "startup.m"
            {
#line 239 "startup.m"
              mercury__io__nl_3_p_0(startup__OutputStream_64);
            }
#line 237 "startup.m"
          }
#line 243 "startup.m"
        {
#line 243 "startup.m"
          mercury__list__foldl_4_p_0(startup__TypeCtorInfo_297_297, (MR_Word) &startup_scalar_common_2[2], (MR_Word) &startup_scalar_common_2[7], startup__ProgRepModules_63, ((MR_Box) (startup__ModuleDataMap0_30)), &startup__conv28_ModuleDataMap_65);
        }
#line 243 "startup.m"
        startup__ModuleDataMap_65 = ((MR_Word) startup__conv28_ModuleDataMap_65);
#line 229 "startup.m"
      }
#line 268 "startup.m"
    {
#line 268 "startup.m"
      startup__ContourFileName_71 = startup__contour_file_name_1_f_0(startup__DataFileName_14);
    }
#line 10692 "startup.c"
    {
#line 10694 "startup.c"
      startup__V_375_375 = mercury__string__f_43_43_2_f_0(startup__ContourFileName_71, (MR_String) "\'...\n");
    }
#line 10697 "startup.c"
    {
#line 10699 "startup.c"
      startup__TryMsg_72 = mercury__string__f_43_43_2_f_0((MR_String) "% Trying to read contour exclusion file \140", startup__V_375_375);
    }
#line 271 "startup.m"
    {
#line 271 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, startup__TryMsg_72);
    }
#line 272 "startup.m"
    {
#line 272 "startup.m"
      exclude__read_exclude_file_5_p_0(startup__ContourFileName_71, startup__ModuleDataMap_65, &startup__ExcludeFile_73);
    }
#line 273 "startup.m"
    startup__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__ExcludeFile_73, (MR_Integer) 0)));
#line 273 "startup.m"
    startup__ExcludeContents_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__ExcludeFile_73, (MR_Integer) 1)));
#line 278 "startup.m"
    if ((startup__ExcludeContents_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 275 "startup.m"
      {
#line 276 "startup.m"
        {
#line 276 "startup.m"
          startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Couldn\'t open file.\n");
        }
#line 275 "startup.m"
      }
#line 278 "startup.m"
    else
#line 278 "startup.m"
      if (((MR_tag((MR_Word) startup__ExcludeContents_75)) == (MR_mktag((MR_Integer) 2))))
#line 284 "startup.m"
        {
#line 285 "startup.m"
          {
#line 285 "startup.m"
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
          }
#line 284 "startup.m"
        }
#line 278 "startup.m"
      else
#line 279 "startup.m"
        {
#line 279 "startup.m"
          MR_String startup__ExcludeError_76 = ((MR_String) (MR_hl_field(MR_mktag(1), startup__ExcludeContents_75, (MR_Integer) 0)));
#line 279 "startup.m"
          MR_String startup__ExcludeErrorMsg_77;
#line 279 "startup.m"
          MR_String startup__V_378_378;

#line 10751 "startup.c"
          {
#line 10753 "startup.c"
            startup__V_378_378 = mercury__string__f_43_43_2_f_0(startup__ExcludeError_76, (MR_String) ".\n");
          }
#line 10756 "startup.c"
          {
#line 10758 "startup.c"
            startup__ExcludeErrorMsg_77 = mercury__string__f_43_43_2_f_0((MR_String) "% File had unrecoverable errors:\n% ", startup__V_378_378);
          }
#line 282 "startup.m"
          {
#line 282 "startup.m"
            startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, startup__ExcludeErrorMsg_77);
          }
#line 279 "startup.m"
        }
#line 289 "startup.m"
    {
#line 289 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Propagating measurements up call graph...\n");
    }
#line 292 "startup.m"
    {
#line 292 "startup.m"
      startup__V_212_212 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 10778 "startup.c"
    startup__TypeCtorInfo_356_356 = (MR_Word) &measurements__measurements__type_ctor_info_inherit_prof_info_0;
#line 292 "startup.m"
    {
#line 292 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_356_356, startup__NCSDs_38, ((MR_Box) (startup__V_212_212)), &startup__conv29_CSDDesc0_80);
    }
#line 292 "startup.m"
    startup__CSDDesc0_80 = (MR_ArrayPtr) startup__conv29_CSDDesc0_80;
#line 293 "startup.m"
    {
#line 293 "startup.m"
      startup__V_213_213 = measurements__zero_own_prof_info_0_f_0();
    }
#line 10792 "startup.c"
    startup__TypeCtorInfo_357_357 = (MR_Word) &measurements__measurements__type_ctor_info_own_prof_info_0;
#line 293 "startup.m"
    {
#line 293 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_357_357, startup__NPDs_36, ((MR_Box) (startup__V_213_213)), &startup__conv30_PDOwn0_81);
    }
#line 293 "startup.m"
    startup__PDOwn0_81 = (MR_ArrayPtr) startup__conv30_PDOwn0_81;
#line 294 "startup.m"
    {
#line 294 "startup.m"
      array_util__array_foldl_from_1_4_p_1(startup__TypeCtorInfo_317_317, (MR_Word) &startup_scalar_common_1[14], (MR_Word) &startup_scalar_common_2[8], (MR_ArrayPtr) startup__CallSiteDynamics_31, ((MR_Box) (startup__PDOwn0_81)), &startup__conv32_PDOwn_82);
    }
#line 294 "startup.m"
    startup__PDOwn_82 = ((MR_ArrayPtr) startup__conv32_PDOwn_82);
#line 296 "startup.m"
    {
#line 296 "startup.m"
      startup__V_215_215 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 296 "startup.m"
    {
#line 296 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_356_356, startup__NPDs_36, ((MR_Box) (startup__V_215_215)), &startup__conv33_PDDesc0_83);
    }
#line 296 "startup.m"
    startup__PDDesc0_83 = (MR_ArrayPtr) startup__conv33_PDDesc0_83;
#line 297 "startup.m"
    {
#line 297 "startup.m"
      startup__V_216_216 = measurements__zero_own_prof_info_0_f_0();
    }
#line 297 "startup.m"
    {
#line 297 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_357_357, startup__NPSs_40, ((MR_Box) (startup__V_216_216)), &startup__conv34_PSOwn0_84);
    }
#line 297 "startup.m"
    startup__PSOwn0_84 = (MR_ArrayPtr) startup__conv34_PSOwn0_84;
#line 298 "startup.m"
    {
#line 298 "startup.m"
      startup__V_217_217 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 298 "startup.m"
    {
#line 298 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_356_356, startup__NPSs_40, ((MR_Box) (startup__V_217_217)), &startup__conv35_PSDesc0_85);
    }
#line 298 "startup.m"
    startup__PSDesc0_85 = (MR_ArrayPtr) startup__conv35_PSDesc0_85;
#line 299 "startup.m"
    {
#line 299 "startup.m"
      startup__V_218_218 = measurements__zero_own_prof_info_0_f_0();
    }
#line 299 "startup.m"
    {
#line 299 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_357_357, startup__NCSSs_42, ((MR_Box) (startup__V_218_218)), &startup__conv36_CSSOwn0_86);
    }
#line 299 "startup.m"
    startup__CSSOwn0_86 = (MR_ArrayPtr) startup__conv36_CSSOwn0_86;
#line 300 "startup.m"
    {
#line 300 "startup.m"
      startup__V_219_219 = measurements__zero_inherit_prof_info_0_f_0();
    }
#line 300 "startup.m"
    {
#line 300 "startup.m"
      mercury__array__init_3_p_0(startup__TypeCtorInfo_356_356, startup__NCSSs_42, ((MR_Box) (startup__V_219_219)), &startup__conv37_CSSDesc0_87);
    }
#line 300 "startup.m"
    startup__CSSDesc0_87 = (MR_ArrayPtr) startup__conv37_CSSDesc0_87;
#line 301 "startup.m"
    {
#line 301 "startup.m"
      startup__V_220_220 = mercury__map__init_0_f_0(startup__TypeCtorInfo_343_343, startup__TypeCtorInfo_356_356);
    }
#line 10873 "startup.c"
    startup__TypeInfo_363_363 = (MR_Word) &startup_scalar_common_2[3];
#line 301 "startup.m"
    {
#line 301 "startup.m"
      mercury__array__init_3_p_0(startup__TypeInfo_363_363, startup__NPDs_36, ((MR_Box) (startup__V_220_220)), &startup__conv38_PDCompTable0_88);
    }
#line 301 "startup.m"
    startup__PDCompTable0_88 = (MR_ArrayPtr) startup__conv38_PDCompTable0_88;
#line 302 "startup.m"
    {
#line 302 "startup.m"
      startup__V_221_221 = mercury__map__init_0_f_0(startup__TypeCtorInfo_343_343, startup__TypeCtorInfo_356_356);
    }
#line 302 "startup.m"
    {
#line 302 "startup.m"
      mercury__array__init_3_p_0(startup__TypeInfo_363_363, startup__NCSDs_38, ((MR_Box) (startup__V_221_221)), &startup__conv39_CSDCompTable0_89);
    }
#line 302 "startup.m"
    startup__CSDCompTable0_89 = (MR_ArrayPtr) startup__conv39_CSDCompTable0_89;
#line 303 "startup.m"
    startup__V_276_276 = ((MR_String) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 0)));
#line 303 "startup.m"
    startup__V_277_277 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 1)));
#line 303 "startup.m"
    startup__V_278_278 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 2)));
#line 303 "startup.m"
    startup__V_279_279 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 3)));
#line 303 "startup.m"
    startup__V_280_280 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 4)));
#line 303 "startup.m"
    startup__V_281_281 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 5)));
#line 303 "startup.m"
    startup__V_282_282 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 6)));
#line 303 "startup.m"
    startup__V_283_283 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 7)));
#line 303 "startup.m"
    startup__V_284_284 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 8)));
#line 303 "startup.m"
    startup__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__InitStats_22, (MR_Integer) 9)));
#line 303 "startup.m"
    startup__V_285_285 = ((MR_Integer) (MR_hl_field(MR_mktag(0), startup__V_222_222, (MR_Integer) 0)));
#line 303 "startup.m"
    startup__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__V_222_222, (MR_Integer) 1)));
#line 303 "startup.m"
    startup__CoverageDataType_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__V_222_222, (MR_Integer) 3)));
#line 324 "startup.m"
    startup__V_225_225 = (MR_Word) &startup_scalar_common_2[9];
#line 10922 "startup.c"
    startup__TypeCtorInfo_369_369 = (MR_Word) &profile__profile__type_ctor_info_deep_0;
#line 325 "startup.m"
    {
#line 325 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 327 "startup.m"
    {
#line 327 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 10934 "startup.c"
    if ((startup__CoverageDataType_90 == (MR_Integer) 0))
#line 10936 "startup.c"
      {
#line 10938 "startup.c"
        MR_Word startup__STATE_VARIABLE_Deep_224_381;
#line 10940 "startup.c"
        MR_Word startup__STATE_VARIABLE_Deep_240_386;
#line 324 "startup.m"
        MR_Box startup__conv41_STATE_VARIABLE_Deep_240_386;

#line 315 "startup.m"
        {
#line 315 "startup.m"
          startup__STATE_VARIABLE_Deep_224_381 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 0) = ((MR_Box) (startup__InitStats_22));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 1) = ((MR_Box) (startup__Machine_12));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 2) = ((MR_Box) (startup__ScriptName_13));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 3) = ((MR_Box) (startup__DataFileName_14));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 4) = ((MR_Box) (startup__Root_23));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 5) = ((MR_Box) (startup__CallSiteDynamics_31));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 6) = ((MR_Box) (startup__ProcDynamics_25));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 7) = ((MR_Box) (startup__CallSiteStatics_28));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 8) = ((MR_Box) (startup__ProcStatics_32));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 9) = ((MR_Box) (startup__CliqueIndex_45));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 10) = ((MR_Box) (startup__Cliques_44));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 11) = ((MR_Box) (startup__CliqueParents_50));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 12) = ((MR_Box) (startup__CliqueMaybeChildren_51));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 13) = ((MR_Box) (startup__ProcCallers_53));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 14) = ((MR_Box) (startup__CallSiteStaticMap_55));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 15) = ((MR_Box) (startup__CallSiteCalls_57));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 16) = ((MR_Box) (startup__PDOwn_82));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 17) = ((MR_Box) (startup__PDDesc0_83));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 18) = ((MR_Box) (startup__CSDDesc0_80));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 19) = ((MR_Box) (startup__PSOwn0_84));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 20) = ((MR_Box) (startup__PSDesc0_85));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 21) = ((MR_Box) (startup__CSSOwn0_86));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 22) = ((MR_Box) (startup__CSSDesc0_87));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 23) = ((MR_Box) (startup__PDCompTable0_88));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 24) = ((MR_Box) (startup__CSDCompTable0_89));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 25) = ((MR_Box) (startup__ModuleDataMap_65));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 26) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 27) = ((MR_Box) (startup__ExcludeFile_73));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_381, 28) = ((MR_Box) (startup__MaybeProcRepFile_61));
#line 315 "startup.m"
        }
#line 324 "startup.m"
        {
#line 324 "startup.m"
          array_util__array_foldl_from_1_4_p_1(startup__TypeInfo_319_319, startup__TypeCtorInfo_369_369, startup__V_225_225, (MR_ArrayPtr) startup__Cliques_44, ((MR_Box) (startup__STATE_VARIABLE_Deep_224_381)), &startup__conv41_STATE_VARIABLE_Deep_240_386);
        }
#line 324 "startup.m"
        startup__STATE_VARIABLE_Deep_240_386 = ((MR_Word) startup__conv41_STATE_VARIABLE_Deep_240_386);
#line 329 "startup.m"
        {
#line 329 "startup.m"
          startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(startup__STATE_VARIABLE_Deep_240_386, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 30);
        }
#line 332 "startup.m"
        {
#line 332 "startup.m"
          startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Summarizing information...\n");
        }
#line 346 "startup.m"
        {
#line 346 "startup.m"
          startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing proc dynamics...\n");
        }
#line 348 "startup.m"
        {
#line 348 "startup.m"
          startup__summarize_proc_dynamics_2_p_0(startup__STATE_VARIABLE_Deep_240_386, &startup__STATE_VARIABLE_Deep_243_243);
        }
#line 11036 "startup.c"
      }
#line 11038 "startup.c"
    else
#line 11040 "startup.c"
      {
#line 11042 "startup.c"
        MR_Word startup__MaybeStaticCoverage0_91;
#line 11044 "startup.c"
        MR_ArrayPtr startup__StaticCoverage0_92;
#line 11046 "startup.c"
        MR_Word startup__V_223_223;
#line 11048 "startup.c"
        MR_Word startup__STATE_VARIABLE_Deep_224_224;
#line 11050 "startup.c"
        MR_Word startup__STATE_VARIABLE_Deep_226_226;
#line 311 "startup.m"
        MR_ArrayPtr startup__conv42_StaticCoverage0_92;
#line 324 "startup.m"
        MR_Box startup__conv43_STATE_VARIABLE_Deep_226_226;

#line 311 "startup.m"
        {
#line 311 "startup.m"
          startup__V_223_223 = measurements__zero_static_coverage_0_f_0();
        }
#line 311 "startup.m"
        {
#line 311 "startup.m"
          mercury__array__init_3_p_0((MR_Word) &measurements__measurements__type_ctor_info_static_coverage_info_0, startup__NPSs_40, ((MR_Box) (startup__V_223_223)), &startup__conv42_StaticCoverage0_92);
        }
#line 311 "startup.m"
        startup__StaticCoverage0_92 = (MR_ArrayPtr) startup__conv42_StaticCoverage0_92;
#line 312 "startup.m"
        {
#line 312 "startup.m"
          startup__MaybeStaticCoverage0_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 312 "startup.m"
          MR_hl_field(MR_mktag(1), startup__MaybeStaticCoverage0_91, 0) = ((MR_Box) (startup__StaticCoverage0_92));
#line 312 "startup.m"
        }
#line 315 "startup.m"
        {
#line 315 "startup.m"
          startup__STATE_VARIABLE_Deep_224_224 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 29 * sizeof(MR_Word)), NULL, NULL);
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 0) = ((MR_Box) (startup__InitStats_22));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 1) = ((MR_Box) (startup__Machine_12));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 2) = ((MR_Box) (startup__ScriptName_13));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 3) = ((MR_Box) (startup__DataFileName_14));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 4) = ((MR_Box) (startup__Root_23));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 5) = ((MR_Box) (startup__CallSiteDynamics_31));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 6) = ((MR_Box) (startup__ProcDynamics_25));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 7) = ((MR_Box) (startup__CallSiteStatics_28));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 8) = ((MR_Box) (startup__ProcStatics_32));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 9) = ((MR_Box) (startup__CliqueIndex_45));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 10) = ((MR_Box) (startup__Cliques_44));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 11) = ((MR_Box) (startup__CliqueParents_50));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 12) = ((MR_Box) (startup__CliqueMaybeChildren_51));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 13) = ((MR_Box) (startup__ProcCallers_53));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 14) = ((MR_Box) (startup__CallSiteStaticMap_55));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 15) = ((MR_Box) (startup__CallSiteCalls_57));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 16) = ((MR_Box) (startup__PDOwn_82));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 17) = ((MR_Box) (startup__PDDesc0_83));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 18) = ((MR_Box) (startup__CSDDesc0_80));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 19) = ((MR_Box) (startup__PSOwn0_84));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 20) = ((MR_Box) (startup__PSDesc0_85));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 21) = ((MR_Box) (startup__CSSOwn0_86));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 22) = ((MR_Box) (startup__CSSDesc0_87));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 23) = ((MR_Box) (startup__PDCompTable0_88));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 24) = ((MR_Box) (startup__CSDCompTable0_89));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 25) = ((MR_Box) (startup__ModuleDataMap_65));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 26) = ((MR_Box) (startup__MaybeStaticCoverage0_91));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 27) = ((MR_Box) (startup__ExcludeFile_73));
#line 315 "startup.m"
          MR_hl_field(MR_mktag(0), startup__STATE_VARIABLE_Deep_224_224, 28) = ((MR_Box) (startup__MaybeProcRepFile_61));
#line 315 "startup.m"
        }
#line 324 "startup.m"
        {
#line 324 "startup.m"
          array_util__array_foldl_from_1_4_p_1(startup__TypeInfo_319_319, startup__TypeCtorInfo_369_369, startup__V_225_225, (MR_ArrayPtr) startup__Cliques_44, ((MR_Box) (startup__STATE_VARIABLE_Deep_224_224)), &startup__conv43_STATE_VARIABLE_Deep_226_226);
        }
#line 324 "startup.m"
        startup__STATE_VARIABLE_Deep_226_226 = ((MR_Word) startup__conv43_STATE_VARIABLE_Deep_226_226);
#line 329 "startup.m"
        {
#line 329 "startup.m"
          startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(startup__STATE_VARIABLE_Deep_226_226, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 30);
        }
#line 332 "startup.m"
        {
#line 332 "startup.m"
          startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Summarizing information...\n");
        }
#line 349 "startup.m"
        if ((startup__CoverageDataType_90 == (MR_Integer) 2))
#line 350 "startup.m"
          {
#line 351 "startup.m"
            {
#line 351 "startup.m"
              startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing proc dynamics with coverage...\n");
            }
#line 353 "startup.m"
            {
#line 353 "startup.m"
              startup__summarize_proc_dynamics_with_coverage_data_2_p_0(startup__STATE_VARIABLE_Deep_226_226, &startup__STATE_VARIABLE_Deep_243_243);
            }
#line 350 "startup.m"
          }
#line 349 "startup.m"
        else
#line 337 "startup.m"
          {
#line 337 "startup.m"
            MR_Word startup__STATE_VARIABLE_Deep_240_240;

#line 340 "startup.m"
            {
#line 340 "startup.m"
              startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing static coverage...\n");
            }
#line 342 "startup.m"
            {
#line 342 "startup.m"
              startup__summarize_proc_statics_coverage_2_p_0(startup__STATE_VARIABLE_Deep_226_226, &startup__STATE_VARIABLE_Deep_240_240);
            }
#line 346 "startup.m"
            {
#line 346 "startup.m"
              startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing proc dynamics...\n");
            }
#line 348 "startup.m"
            {
#line 348 "startup.m"
              startup__summarize_proc_dynamics_2_p_0(startup__STATE_VARIABLE_Deep_240_240, &startup__STATE_VARIABLE_Deep_243_243);
            }
#line 337 "startup.m"
          }
#line 11203 "startup.c"
      }
#line 355 "startup.m"
    {
#line 355 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing call site dynamics...\n");
    }
#line 357 "startup.m"
    {
#line 357 "startup.m"
      startup__summarize_call_site_dynamics_2_p_0(startup__STATE_VARIABLE_Deep_243_243, &startup__STATE_VARIABLE_Deep_246_246);
    }
#line 358 "startup.m"
    {
#line 358 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "\t% Summarizing modules...\n");
    }
#line 360 "startup.m"
    {
#line 360 "startup.m"
      startup__summarize_modules_2_p_0(startup__STATE_VARIABLE_Deep_246_246, startup__STATE_VARIABLE_Deep_93);
    }
#line 361 "startup.m"
    {
#line 361 "startup.m"
      startup__maybe_report_msg_4_p_0(startup__MaybeOutputStream_16, (MR_String) "% Done.\n");
    }
#line 363 "startup.m"
    {
#line 363 "startup.m"
      startup__maybe_report_stats_3_p_0(startup__MaybeOutputStream_16);
    }
#line 365 "startup.m"
    {
#line 365 "startup.m"
      startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_54_93_95_48_6_p_0(*startup__STATE_VARIABLE_Deep_93, startup__DumpOptions_18, startup__DataFileName_14, startup__DumpStages_17, (MR_Integer) 40);
#line 365 "startup.m"
      return;
    }
#line 110 "startup.m"
  }
#line 105 "startup.m"
}

#line 96 "startup.m"
static MR_String MR_CALL 
startup__make_progrep_filename_1_f_0(
#line 96 "startup.m"
  MR_String startup__DataFileName_3)
#line 96 "startup.m"
{
#line 101 "startup.m"
  {
#line 101 "startup.m"
    MR_bool startup__succeeded;
#line 101 "startup.m"
    MR_String startup__ProgrepFileName_4;
#line 101 "startup.m"
    MR_String startup__BaseFileName_5;

#line 99 "startup.m"
    {
#line 99 "startup.m"
      startup__succeeded = mercury__string__remove_suffix_3_p_0(startup__DataFileName_3, (MR_String) ".data", &startup__BaseFileName_5);
    }
#line 101 "startup.m"
    if (startup__succeeded)
#line 100 "startup.m"
      {
#line 100 "startup.m"
        {
#line 100 "startup.m"
          return startup__ProgrepFileName_4 = mercury__string__f_43_43_2_f_0(startup__BaseFileName_5, (MR_String) ".procrep");
        }
#line 100 "startup.m"
      }
#line 101 "startup.m"
    else
#line 102 "startup.m"
      {
#line 102 "startup.m"
        MR_String startup__V_8_8;

#line 102 "startup.m"
        {
#line 102 "startup.m"
          startup__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t remove suffix from deep file name: ", startup__DataFileName_3);
        }
#line 102 "startup.m"
        {
#line 102 "startup.m"
          mercury__require__error_1_p_0(startup__V_8_8);
        }
#line 102 "startup.m"
      }
#line 101 "startup.m"
    return startup__ProgrepFileName_4;
#line 101 "startup.m"
  }
#line 96 "startup.m"
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
#line 70 "startup.m"
  {
#line 70 "startup.m"
    MR_bool startup__succeeded;
#line 70 "startup.m"
    MR_Word startup__DataFileResult_20;

#line 76 "startup.m"
    {
#line 76 "startup.m"
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
#line 11338 "startup.c"
    if ((startup__MaybeOutputStream_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 81 "startup.m"
      {
#line 81 "startup.m"
        read_profile__read_call_graph_4_p_0(startup__DataFileName_13, &startup__DataFileResult_20);
      }
#line 11345 "startup.c"
    else
#line 11347 "startup.c"
      {
#line 11349 "startup.c"
        MR_Word startup__OutputStream_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), startup__MaybeOutputStream_15, (MR_Integer) 0)));

#line 1109 "startup.m"
        {
#line 1109 "startup.m"
          mercury__io__write_string_4_p_0(startup__OutputStream_53, (MR_String) "% Reading graph data...\n");
        }
#line 1110 "startup.m"
        {
#line 1110 "startup.m"
          mercury__io__flush_output_3_p_0(startup__OutputStream_53);
        }
#line 81 "startup.m"
        {
#line 81 "startup.m"
          read_profile__read_call_graph_4_p_0(startup__DataFileName_13, &startup__DataFileResult_20);
        }
#line 1109 "startup.m"
        {
#line 1109 "startup.m"
          mercury__io__write_string_4_p_0(startup__OutputStream_53, (MR_String) "% Done.\n");
        }
#line 1110 "startup.m"
        {
#line 1110 "startup.m"
          mercury__io__flush_output_3_p_0(startup__OutputStream_53);
        }
#line 11377 "startup.c"
      }
#line 91 "startup.m"
    if (((MR_tag((MR_Word) startup__DataFileResult_20)) == (MR_mktag((MR_Integer) 1))))
#line 93 "startup.m"
      *startup__Result_18 = (MR_Word) startup__DataFileResult_20;
#line 91 "startup.m"
    else
#line 86 "startup.m"
      {
#line 86 "startup.m"
        MR_Word startup__InitDeep_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), startup__DataFileResult_20, (MR_Integer) 0)));
#line 86 "startup.m"
        MR_Word startup__Deep_22;

#line 87 "startup.m"
        {
#line 87 "startup.m"
          startup__startup_11_p_0(startup__Machine_11, startup__ScriptName_12, startup__DataFileName_13, startup__Canonical_14, startup__MaybeOutputStream_15, startup__DumpStages_16, startup__DumpOptions_17, startup__InitDeep_21, &startup__Deep_22);
        }
#line 90 "startup.m"
        {
#line 90 "startup.m"
          MR_Word base;
#line 90 "startup.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 90 "startup.m"
          *startup__Result_18 = base;
#line 90 "startup.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (startup__Deep_22));
#line 90 "startup.m"
        }
#line 86 "startup.m"
      }
#line 70 "startup.m"
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
#line 65 "startup.m"
  {
#line 65 "startup.m"
    MR_bool startup__succeeded;
#line 65 "startup.m"
    MR_Word startup__V_20_20;

#line 66 "startup.m"
    {
#line 66 "startup.m"
      startup__V_20_20 = dump__default_dump_options_0_f_0();
    }
#line 66 "startup.m"
    {
#line 66 "startup.m"
      startup__read_and_startup_10_p_0(startup__Machine_10, startup__ScriptName_11, startup__DataFileName_12, startup__Canonical_13, startup__MaybeOutputStream_14, startup__DumpStages_15, startup__V_20_20, startup__Res_16);
#line 66 "startup.m"
      return;
    }
#line 65 "startup.m"
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
