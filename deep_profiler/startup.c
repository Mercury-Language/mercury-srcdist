/*
** Automatically generated from `startup.m'
** by the Mercury compiler,
** version rotd-2024-06-05
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


// :- module startup.
// :- implementation.

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
#include "read_profile.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0;

static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0;

static const MR_FA_TypeInfo_Struct1 startup__array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0;

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

static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0;

static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0;

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__gather_call_site_csdptrs__1080__1_1_p_0(
  MR_Word LambdaHeadVar__1_21);

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_csd_containers_2__505__1_2_p_0(
  MR_Word CallerPDPtr0_14,
  MR_Word HeadVar__2_22);

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__464__1_2_p_0(
  MR_Integer SlotNum0_13,
  MR_Integer HeadVar__2_27);

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__462__1_2_p_0(
  MR_Word PSPtr0_12,
  MR_Word HeadVar__2_23);

static MR_bool MR_CALL 
startup__gather_call_site_csdptrs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
startup__gather_call_site_csdptrs_5_p_0(
  MR_Word Slot_6,
  MR_Word CSDPtrs0_7,
  MR_Word * CSDPtrs1_8,
  MR_Word IsZeroed0_9,
  MR_Word * IsZeroed_10);

static MR_Word MR_CALL 
startup__select_override_comp_2_f_0(
  MR_Word OverrideComp_4,
  MR_Word HeadVar__2_5);

static MR_Word MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_f_0(
  MR_Word OverrideComp_4);

static MR_Box MR_CALL 
startup__propagate_to_call_site_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
startup__propagate_to_call_site_7_p_0(
  MR_Integer CliqueNumber_8,
  MR_Word PDPtr_9,
  MR_Word CSDPtr_10,
  MR_Word STATE_VARIABLE_Deep_0_23,
  MR_Word * STATE_VARIABLE_Deep_24,
  MR_Word STATE_VARIABLE_PDCompTable_0_25,
  MR_Word * STATE_VARIABLE_PDCompTable_26);

static MR_Box MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0(
  MR_Integer CliqueNumber_10,
  MR_Word ParentCSDPtr_11,
  MR_Word PDPtr_12,
  MR_Word STATE_VARIABLE_Deep_0_26,
  MR_Word * STATE_VARIABLE_Deep_27,
  MR_Word STATE_VARIABLE_SumTable_0_28,
  MR_Word * STATE_VARIABLE_SumTable_29,
  MR_Word STATE_VARIABLE_OverrideTable_0_30,
  MR_Word * STATE_VARIABLE_OverrideTable_31);

static MR_Word MR_CALL 
startup__add_to_override_3_f_0(
  MR_Word STATE_VARIABLE_CompTable_0_10,
  MR_Word PSPtr_6,
  MR_Word PDTotal_7);

static MR_Box MR_CALL 
startup__propagate_to_clique_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
startup__propagate_to_clique_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
startup__propagate_to_clique_4_p_0(
  MR_Integer CliqueNumber_5,
  MR_Word Members_6,
  MR_Word STATE_VARIABLE_Deep_0_16,
  MR_Word * STATE_VARIABLE_Deep_17);

static void MR_CALL 
startup__accumulate_ps_costs_6_p_0(
  MR_Word Deep_7,
  MR_Word PSPtr_8,
  MR_Word Own0_9,
  MR_Word * Own_10,
  MR_Word Desc0_11,
  MR_Word * Desc_12);

static void MR_CALL 
startup__summarize_proc_static_coverage_4_p_0(
  MR_Integer Index_5,
  MR_Word PS_6,
  MR_ArrayPtr STATE_VARIABLE_CoverageArray_0_11,
  MR_ArrayPtr * STATE_VARIABLE_CoverageArray_12);

static void MR_CALL 
startup__summarize_module_costs_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Word MR_CALL 
startup__summarize_module_costs_2_f_0(
  MR_Word Deep_4,
  MR_Word ModuleData0_5);

static void MR_CALL 
startup__summarize_call_site_dynamic_10_p_0(
  MR_ArrayPtr CallSiteStaticMap_11,
  MR_ArrayPtr CallSiteStatics_12,
  MR_ArrayPtr CSDDescs_13,
  MR_ArrayPtr CSDCompTableArray_14,
  MR_Integer CSDI_15,
  MR_Word CSD_16,
  MR_ArrayPtr CSSOwnArray0_17,
  MR_ArrayPtr * CSSOwnArray_18,
  MR_ArrayPtr CSSDescArray0_19,
  MR_ArrayPtr * CSSDescArray_20);

static void MR_CALL 
startup__summarize_proc_dynamic_with_coverage_11_p_0(
  MR_ArrayPtr PDOwnArray_12,
  MR_ArrayPtr PDDescArray_13,
  MR_ArrayPtr PDCompTableArray_14,
  MR_Integer PDI_15,
  MR_Word PD_16,
  MR_ArrayPtr STATE_VARIABLE_PSOwnArray_0_24,
  MR_ArrayPtr * STATE_VARIABLE_PSOwnArray_25,
  MR_ArrayPtr STATE_VARIABLE_PSDescArray_0_26,
  MR_ArrayPtr * STATE_VARIABLE_PSDescArray_27,
  MR_ArrayPtr STATE_VARIABLE_CoverageArray_0_28,
  MR_ArrayPtr * STATE_VARIABLE_CoverageArray_29);

static void MR_CALL 
startup__summarize_proc_dynamic_9_p_0(
  MR_ArrayPtr PDOwnArray_10,
  MR_ArrayPtr PDDescArray_11,
  MR_ArrayPtr PDCompTableArray_12,
  MR_Integer PDI_13,
  MR_Word PD_14,
  MR_ArrayPtr PSOwnArray0_15,
  MR_ArrayPtr * PSOwnArray_16,
  MR_ArrayPtr PSDescArray0_17,
  MR_ArrayPtr * PSDescArray_18);

static void MR_CALL 
startup__sum_call_sites_in_proc_dynamic_4_p_0(
  MR_Integer HeadVar__1_5,
  MR_Word CSD_6,
  MR_ArrayPtr STATE_VARIABLE_PDOwnArray_0_13,
  MR_ArrayPtr * STATE_VARIABLE_PDOwnArray_14);

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_p_0(
  MR_Word CSD_6,
  MR_ArrayPtr STATE_VARIABLE_PDOwnArray_0_13,
  MR_ArrayPtr * STATE_VARIABLE_PDOwnArray_14);

static void MR_CALL 
startup__construct_call_site_calls_3_7_p_0(
  MR_ArrayPtr CallSiteDynamics_8,
  MR_ArrayPtr ProcDynamics_9,
  MR_Word CSSPtr_10,
  MR_Integer _Dummy_11,
  MR_Word CSDPtr_12,
  MR_ArrayPtr STATE_VARIABLE_CallSiteCalls_0_25,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteCalls_26);

static void MR_CALL 
startup__construct_call_site_calls_5_p_0(
  MR_Word InitDeep_6,
  MR_Integer _PDI_7,
  MR_Word PD_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteCalls_0_18,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteCalls_19);

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word InitDeep_6,
  MR_Word PD_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteCalls_0_18,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteCalls_19);

static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0(
  MR_ArrayPtr CallSiteDynamics_8,
  MR_ArrayPtr ProcDynamics_9,
  MR_Integer SlotNum_10,
  MR_ArrayPtr CSSPtrs_11,
  MR_ArrayPtr CSDArraySlots_12,
  MR_ArrayPtr STATE_VARIABLE_CallSiteCalls_0_19,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteCalls_20);

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(
  MR_ArrayPtr CallSiteDynamics_8,
  MR_ArrayPtr ProcDynamics_9,
  MR_Word CSSPtr_10,
  MR_Word CSDPtr_12,
  MR_ArrayPtr STATE_VARIABLE_CallSiteCalls_0_25,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteCalls_26);

static void MR_CALL 
startup__construct_call_site_caller_3_6_p_0(
  MR_ArrayPtr CallSiteDynamics_7,
  MR_Word CSSPtr_8,
  MR_Integer _Dummy_9,
  MR_Word CSDPtr_10,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStaticMap_0_12,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStaticMap_13);

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_p_0(
  MR_ArrayPtr CallSiteDynamics_7,
  MR_Word CSSPtr_8,
  MR_Word CSDPtr_10,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStaticMap_0_12,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStaticMap_13);

static void MR_CALL 
startup__construct_call_site_caller_5_p_0(
  MR_Word InitDeep_6,
  MR_Integer _PDI_7,
  MR_Word PD_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStaticMap_0_15,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStaticMap_16);

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_p_0(
  MR_Word InitDeep_6,
  MR_Word PD_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStaticMap_0_15,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStaticMap_16);

static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0(
  MR_Integer SlotNum_7,
  MR_ArrayPtr Deep_8,
  MR_ArrayPtr CSSPtrs_9,
  MR_ArrayPtr CSDArraySlots_10,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStaticMap_0_17,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStaticMap_18);

static void MR_CALL 
startup__construct_proc_callers_5_p_0(
  MR_Word InitDeep_6,
  MR_Integer CSDI_7,
  MR_Word CSD_8,
  MR_ArrayPtr STATE_VARIABLE_ProcCallers_0_15,
  MR_ArrayPtr * STATE_VARIABLE_ProcCallers_16);

static void MR_CALL 
startup__construct_clique_parents_2_8_p_0(
  MR_Word InitDeep_9,
  MR_ArrayPtr CliqueIndex_10,
  MR_Word ParentCliquePtr_11,
  MR_Word CSDPtr_12,
  MR_ArrayPtr STATE_VARIABLE_CliqueParents_0_21,
  MR_ArrayPtr * STATE_VARIABLE_CliqueParents_22,
  MR_ArrayPtr STATE_VARIABLE_CliqueMaybeChildren_0_23,
  MR_ArrayPtr * STATE_VARIABLE_CliqueMaybeChildren_24);

static void MR_CALL 
startup__construct_clique_parents_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
startup__construct_clique_parents_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
startup__construct_clique_parents_8_p_0(
  MR_Word InitDeep_9,
  MR_ArrayPtr CliqueIndex_10,
  MR_Integer PDI_11,
  MR_Word CliquePtr_12,
  MR_ArrayPtr STATE_VARIABLE_CliqueParents_0_16,
  MR_ArrayPtr * STATE_VARIABLE_CliqueParents_17,
  MR_ArrayPtr STATE_VARIABLE_CliqueMaybeChildren_0_18,
  MR_ArrayPtr * STATE_VARIABLE_CliqueMaybeChildren_19);

static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0(
  MR_Integer PDI_7,
  MR_Word PD_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteDynamics_0_18,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteDynamics_19,
  MR_ArrayPtr STATE_VARIABLE_ProcStatics_0_20,
  MR_ArrayPtr * STATE_VARIABLE_ProcStatics_21);

static MR_bool MR_CALL 
startup__record_csd_containers_2_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
startup__record_csd_containers_2_4_p_0(
  MR_Word PDPtr_1,
  MR_Word HeadVar__2_2,
  MR_ArrayPtr STATE_VARIABLE_CallSiteDynamics_0_3,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteDynamics_4);

static void MR_CALL 
startup__record_css_containers_module_procs_6_p_0(
  MR_Integer PSI_7,
  MR_Word PS_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStatics_0_16,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStatics_17,
  MR_Word STATE_VARIABLE_ModuleProcs_0_18,
  MR_Word * STATE_VARIABLE_ModuleProcs_19);

static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
startup__record_css_containers_2_5_p_0(
  MR_Integer SlotNum_6,
  MR_Word PSPtr_7,
  MR_ArrayPtr CSSPtrs_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStatics_0_18,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStatics_19);

static void MR_CALL 
startup__ensure_module_has_module_data_3_p_0(
  MR_String Module_4,
  MR_Word STATE_VARIABLE_ModuleDataMap_0_8,
  MR_Word * STATE_VARIABLE_ModuleDataMap_9);

static MR_Word MR_CALL 
startup__initialize_module_data_1_f_0(
  MR_Word PSPtrs_3);

static void MR_CALL 
startup__startup_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
startup__startup_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
startup__startup_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
startup__startup_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
startup__startup_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
startup__startup_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
startup__startup_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
startup__startup_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_Box MR_CALL 
startup__startup_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
startup__startup_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
startup__startup_11_p_0(
  MR_String Machine_12,
  MR_String ScriptName_13,
  MR_String DataFileName_14,
  MR_Word Canonical_15,
  MR_Word MaybeOutputStream_16,
  MR_Word DumpStages_17,
  MR_Word DumpOptions_18,
  MR_Word InitDeep0_19,
  MR_Word * STATE_VARIABLE_Deep_93);

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_55_93_95_48_7_p_0(
  MR_Word Var_44,
  MR_Word Var_45,
  MR_Word MaybeOutputStream_8,
  MR_String BaseName_9,
  MR_Word DumpStages_10,
  MR_Integer ThisStageNum_11);

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_55_93_95_48_7_p_0(
  MR_Word Var_44,
  MR_Word Var_45,
  MR_Word MaybeOutputStream_8,
  MR_String BaseName_9,
  MR_Word DumpStages_10,
  MR_Integer ThisStageNum_11);

static void MR_CALL 
startup__maybe_report_msg_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String Msg_2);

static void MR_CALL 
startup__maybe_report_stats_3_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0(
  MR_Word STATE_VARIABLE_Deep_0_6,
  MR_Word * STATE_VARIABLE_Deep_7);

static MR_Box MR_CALL 
startup__summarize_modules_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
startup__summarize_modules_2_p_0(
  MR_Word Deep0_3,
  MR_Word * Deep_4);

static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0(
  MR_Word STATE_VARIABLE_Deep_0_8,
  MR_Word * STATE_VARIABLE_Deep_9);

static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0(
  MR_Word STATE_VARIABLE_Deep_0_8,
  MR_Word * STATE_VARIABLE_Deep_9);

static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0(
  MR_Word Deep0_3,
  MR_Word * Deep_4);

static MR_String MR_CALL 
startup__contour_file_name_1_f_0(
  MR_String DataFileName_3);

static MR_String MR_CALL 
startup__make_progrep_filename_1_f_0(
  MR_String DataFileName_3);


static /* final */ const MR_Box startup_scalar_common_1[18][2];

static /* final */ const MR_Box startup_scalar_common_2[18][3];

static /* final */ const MR_Box startup_scalar_common_3[2][12];

static /* final */ const MR_Box startup_scalar_common_4[1][14];

static /* final */ const MR_Box startup_scalar_common_5[1][13];

static /* final */ const MR_Box startup_scalar_common_6[3][6];

static /* final */ const MR_Box startup_scalar_common_7[3][7];

static /* final */ const MR_Box startup_scalar_common_8[4][9];

static /* final */ const MR_Box startup_scalar_common_9[4][5];

static /* final */ const MR_Box startup_scalar_common_10[2][11];

static /* final */ const MR_Box startup_scalar_common_11[4][8];

static /* final */ const MR_Box startup_scalar_common_12[2][10];

static /* final */ const MR_Box startup_scalar_common_13[1][4];




static /* final */ const MR_Box startup_scalar_common_1[18][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&startup_scalar_common_1[5]))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&startup_scalar_common_1[8]))
  },
  /* row  10 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&startup_scalar_common_2[1]))
  },
  /* row  12 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_module_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row  13 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row  14 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0))
  },
  /* row  15 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
  /* row  16 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_static_coverage_info_0))
  },
  /* row  17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&startup_scalar_common_1[8]))
  },
};

static /* final */ const MR_Box startup_scalar_common_2[18][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&startup_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&startup_scalar_common_1[8]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_module_data_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&startup_scalar_common_7[0])),
    ((MR_Box) (startup__summarize_proc_statics_coverage_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&startup_scalar_common_8[0])),
    ((MR_Box) (startup__startup_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&startup_scalar_common_9[0])),
    ((MR_Box) (startup__startup_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&startup_scalar_common_8[1])),
    ((MR_Box) (startup__startup_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&startup_scalar_common_6[1])),
    ((MR_Box) (startup__startup_11_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&startup_scalar_common_7[1])),
    ((MR_Box) (startup__startup_11_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&startup_scalar_common_7[2])),
    ((MR_Box) (startup__startup_11_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&startup_scalar_common_11[3])),
    ((MR_Box) (startup__record_csd_containers_zeroed_pss_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&startup_scalar_common_11[3])),
    ((MR_Box) (startup__construct_clique_parents_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&startup_scalar_common_6[2])),
    ((MR_Box) (startup__propagate_to_clique_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&startup_scalar_common_11[3])),
    ((MR_Box) (startup__propagate_to_proc_dynamic_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&startup_scalar_common_6[2])),
    ((MR_Box) (startup__propagate_to_proc_dynamic_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&startup_scalar_common_6[2])),
    ((MR_Box) (startup__propagate_to_call_site_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&startup_scalar_common_13[0])),
    ((MR_Box) (startup__gather_call_site_csdptrs_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box startup_scalar_common_3[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
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

static /* final */ const MR_Box startup_scalar_common_4[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
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

static /* final */ const MR_Box startup_scalar_common_5[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
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

static /* final */ const MR_Box startup_scalar_common_6[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_module_data_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_module_data_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_7[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&startup__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_8[4][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_own_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&measurements__measurements__type_ctor_info_inherit_prof_info_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_9[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&startup__list__pti_list_1__plain_profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_module_data_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_static_ptr_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_10[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
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

static /* final */ const MR_Box startup_scalar_common_11[4][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&startup__list__pti_list_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__list__pti_list_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_is_zeroed_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_is_zeroed_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_12[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_static_ptr_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_deep_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0)),
    ((MR_Box) (&startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0))
  },
};

static /* final */ const MR_Box startup_scalar_common_13[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "read_profile.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_own_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_own_prof_info_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_inherit_prof_info_0) }
};

static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_TypeInfo) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0measurements__type_ctor_info_inherit_prof_info_0) }
};

static const MR_FA_TypeInfo_Struct1 startup__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&startup__array__ti_array_1builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&startup__maybe__ti_maybe_1array__ti_array_1builtin__type_ctor_info_int_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_static_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_static_0) }
};

static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_list__ti_list_1profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&startup__list__ti_list_1profile__type_ctor_info_proc_static_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_static_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_static_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0) }
};

static const MR_FA_TypeInfo_Struct1 startup__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&startup__maybe__ti_maybe_1profile__type_ctor_info_clique_ptr_0) }
};

static const MR_FA_TypeInfo_Struct1 startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0) }
};

static const MR_FA_TypeInfo_Struct2 startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_TypeInfo) (&startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&startup__tree234__ti_tree234_2profile__type_ctor_info_proc_static_ptr_0list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_module_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__list__pti_list_1__plain_list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&startup__list__ti_list_1profile__type_ctor_info_call_site_dynamic_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 startup__array__pti_array_1__plain_profile__type_ctor_info_proc_dynamic_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 startup__tree234__pti_tree234_2__plain_profile__type_ctor_info_proc_static_ptr_0__plain_measurements__type_ctor_info_inherit_prof_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_static_ptr_0),
    (MR_PseudoTypeInfo) (&measurements__measurements__type_ctor_info_inherit_prof_info_0)
  }
};

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__gather_call_site_csdptrs__1080__1_1_p_0(
  MR_Word LambdaHeadVar__1_21)
{
  MR_bool succeeded;
  MR_Integer CSDI_24 = (MR_Integer) (LambdaHeadVar__1_21);

  succeeded = (CSDI_24 > (MR_Integer) 0);
  return succeeded;
}

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_csd_containers_2__505__1_2_p_0(
  MR_Word CallerPDPtr0_14,
  MR_Word HeadVar__2_22)
{
  MR_bool succeeded;
  MR_Integer Var_26 = (MR_Integer) (CallerPDPtr0_14);
  MR_Integer Var_27 = (MR_Integer) (HeadVar__2_22);

  succeeded = (Var_26 == Var_27);
  return succeeded;
}

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__464__1_2_p_0(
  MR_Integer SlotNum0_13,
  MR_Integer HeadVar__2_27)
{
  MR_bool succeeded = (SlotNum0_13 == HeadVar__2_27);

  return succeeded;
}

static MR_bool MR_CALL 
startup__IntroducedFrom__pred__record_css_containers_2__462__1_2_p_0(
  MR_Word PSPtr0_12,
  MR_Word HeadVar__2_23)
{
  MR_bool succeeded;
  MR_Integer Var_34 = (MR_Integer) (PSPtr0_12);
  MR_Integer Var_35 = (MR_Integer) (HeadVar__2_23);

  succeeded = (Var_34 == Var_35);
  return succeeded;
}

static MR_bool MR_CALL 
startup__gather_call_site_csdptrs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = startup__IntroducedFrom__pred__gather_call_site_csdptrs__1080__1_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
startup__gather_call_site_csdptrs_5_p_0(
  MR_Word Slot_6,
  MR_Word CSDPtrs0_7,
  MR_Word * CSDPtrs1_8,
  MR_Word IsZeroed0_9,
  MR_Word * IsZeroed_10)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Slot_6)) == (MR_Integer) 1))
  {
    MR_Word IsZeroed1_13 = ((MR_Unsigned) ((MR_hl_field(1, Slot_6, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_ArrayPtr PtrArray_14 = ((MR_ArrayPtr) ((MR_hl_field(1, Slot_6, (MR_Integer) 1))));
    MR_Word PtrList0_15;
    MR_Word PtrList1_16;

    mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (PtrArray_14), &PtrList0_15);
    mercury__list__filter_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&startup_scalar_common_2[17]), PtrList0_15, &PtrList1_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *CSDPtrs1_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PtrList1_16));
      MR_hl_field(1, base, 1) = ((MR_Box) (CSDPtrs0_7));
    }
    switch (IsZeroed1_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *IsZeroed_10 = IsZeroed0_9;
        break;
      case (MR_Integer) 0:
        *IsZeroed_10 = (MR_Integer) 0;
        break;
    }
  }
  else
  {
    MR_Word CSDPtr_11 = ((MR_Word) ((MR_hl_field(0, Slot_6, (MR_Integer) 0))));
    MR_Integer CSDI_12 = (MR_Integer) (CSDPtr_11);

    succeeded = (CSDI_12 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_18;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = ((MR_Box) (CSDPtr_11));
        MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *CSDPtrs1_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (CSDPtrs0_7));
      }
    }
    else
      *CSDPtrs1_8 = CSDPtrs0_7;
    *IsZeroed_10 = IsZeroed0_9;
  }
}

static MR_Word MR_CALL 
startup__select_override_comp_2_f_0(
  MR_Word OverrideComp_4,
  MR_Word HeadVar__2_5)
{
  MR_Word OverrideComp_3;

  OverrideComp_3 = startup__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_f_0(OverrideComp_4);
  return OverrideComp_3;
}

static MR_Word MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_101_108_101_99_116_95_111_118_101_114_114_105_100_101_95_99_111_109_112_95_95_91_50_93_95_48_2_f_0(
  MR_Word OverrideComp_4)
{
  MR_Word OverrideComp_3 = OverrideComp_4;

  return OverrideComp_3;
}

static MR_Box MR_CALL 
startup__propagate_to_call_site_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = measurements__add_inherit_to_inherit_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
startup__propagate_to_call_site_7_p_0(
  MR_Integer CliqueNumber_8,
  MR_Word PDPtr_9,
  MR_Word CSDPtr_10,
  MR_Word STATE_VARIABLE_Deep_0_23,
  MR_Word * STATE_VARIABLE_Deep_24,
  MR_Word STATE_VARIABLE_PDCompTable_0_25,
  MR_Word * STATE_VARIABLE_PDCompTable_26)
{
  MR_bool succeeded;
  MR_Word CSD_13;
  MR_Word CalleeOwn_14;
  MR_Word CalleePDPtr_15;
  MR_Word ChildCliquePtr_16;
  MR_Integer ChildCliqueNumber_17;

  profile__deep_lookup_call_site_dynamics_3_p_0(STATE_VARIABLE_Deep_0_23, CSDPtr_10, &CSD_13);
  CalleePDPtr_15 = ((MR_Word) ((MR_hl_field(0, CSD_13, (MR_Integer) 1))));
  CalleeOwn_14 = ((MR_Word) ((MR_hl_field(0, CSD_13, (MR_Integer) 2))));
  profile__deep_lookup_clique_index_3_p_0(STATE_VARIABLE_Deep_0_23, CalleePDPtr_15, &ChildCliquePtr_16);
  ChildCliqueNumber_17 = (MR_Integer) (ChildCliquePtr_16);
  succeeded = (ChildCliqueNumber_17 == CliqueNumber_8);
  if (succeeded)
  {
    *STATE_VARIABLE_PDCompTable_26 = STATE_VARIABLE_PDCompTable_0_25;
    *STATE_VARIABLE_Deep_24 = STATE_VARIABLE_Deep_0_23;
  }
  else
  {
    MR_Word ProcDesc0_18;
    MR_Word CalleeDesc_19;
    MR_Word CalleeTotal_20;
    MR_Word ProcDesc_21;
    MR_Word CSDCompTable_22;

    profile__deep_lookup_pd_desc_3_p_0(STATE_VARIABLE_Deep_0_23, PDPtr_9, &ProcDesc0_18);
    profile__deep_lookup_csd_desc_3_p_0(STATE_VARIABLE_Deep_0_23, CSDPtr_10, &CalleeDesc_19);
    CalleeTotal_20 = measurements__add_own_to_inherit_2_f_0(CalleeOwn_14, CalleeDesc_19);
    ProcDesc_21 = measurements__add_inherit_to_inherit_2_f_0(ProcDesc0_18, CalleeTotal_20);
    profile__deep_update_pd_desc_4_p_0(PDPtr_9, ProcDesc_21, STATE_VARIABLE_Deep_0_23, STATE_VARIABLE_Deep_24);
    profile__deep_lookup_csd_comp_table_3_p_0(*STATE_VARIABLE_Deep_24, CSDPtr_10, &CSDCompTable_22);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), STATE_VARIABLE_PDCompTable_0_25);
    if (succeeded)
      *STATE_VARIABLE_PDCompTable_26 = CSDCompTable_22;
    else
    {
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), CSDCompTable_22);
      if (succeeded)
        *STATE_VARIABLE_PDCompTable_26 = STATE_VARIABLE_PDCompTable_0_25;
      else
        *STATE_VARIABLE_PDCompTable_26 = mercury__map__union_3_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&startup_scalar_common_2[16]), STATE_VARIABLE_PDCompTable_0_25, CSDCompTable_22);
    }
  }
}

static MR_Box MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__3_3;

  conv8_HeadVar__3_3 = measurements__add_inherit_to_inherit_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__3_3));
  return wrapper_arg_3;
}

static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_STATE_VARIABLE_Deep_24;
  MR_Word conv4_STATE_VARIABLE_PDCompTable_26;

  startup__propagate_to_call_site_7_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_STATE_VARIABLE_Deep_24, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_PDCompTable_26);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_Deep_24));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_PDCompTable_26));
}

static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_CSDPtrs1_8;
  MR_Word conv0_IsZeroed_10;

  startup__gather_call_site_csdptrs_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_CSDPtrs1_8, ((MR_Word) (wrapper_arg_4)), &conv0_IsZeroed_10);
  *wrapper_arg_3 = ((MR_Box) (conv1_CSDPtrs1_8));
  *wrapper_arg_5 = ((MR_Box) (conv0_IsZeroed_10));
}

static void MR_CALL 
startup__propagate_to_proc_dynamic_9_p_0(
  MR_Integer CliqueNumber_10,
  MR_Word ParentCSDPtr_11,
  MR_Word PDPtr_12,
  MR_Word STATE_VARIABLE_Deep_0_26,
  MR_Word * STATE_VARIABLE_Deep_27,
  MR_Word STATE_VARIABLE_SumTable_0_28,
  MR_Word * STATE_VARIABLE_SumTable_29,
  MR_Word STATE_VARIABLE_OverrideTable_0_30,
  MR_Word * STATE_VARIABLE_OverrideTable_31)
{
  MR_bool succeeded;
  MR_Word CSDPtrs_16;
  MR_Word PDCompTable_17;
  MR_Word ProcDesc_18;
  MR_Word ProcOwn_19;
  MR_Word ProcTotal_20;
  MR_Word PD_21;
  MR_Word PSPtr_22;
  MR_Word PS_23;
  MR_ArrayPtr Var_32 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_26, (MR_Integer) 6))));
  MR_Word Var_33;
  MR_Word STATE_VARIABLE_Deep_34_34;
  MR_Word Var_35;
  MR_Word STATE_VARIABLE_Deep_36_36;
  MR_Word PD_91;
  MR_ArrayPtr CallSiteArray_92;
  MR_Word CallSites_96;
  MR_Word CSDPtrsList0_97;
  MR_Word CSDPtrsList_98;
  MR_Box conv3_CSDPtrsList0_97;
  MR_Box conv2_Var_93;
  MR_Box conv7_STATE_VARIABLE_Deep_34_34;
  MR_Box conv6_PDCompTable_17;
  MR_Word Var_38;

  profile__lookup_proc_dynamics_3_p_0(Var_32, PDPtr_12, &PD_91);
  CallSiteArray_92 = ((MR_ArrayPtr) ((MR_hl_field(0, PD_91, (MR_Integer) 1))));
  mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (CallSiteArray_92), &CallSites_96);
  mercury__list__foldl2_6_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_Word) (&startup_scalar_common_1[17]), (MR_Word) (&profile__profile__type_ctor_info_is_zeroed_0), (MR_Word) (&startup_scalar_common_2[14]), CallSites_96, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_CSDPtrsList0_97, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_93);
  CSDPtrsList0_97 = ((MR_Word) (conv3_CSDPtrsList0_97));
  mercury__list__reverse_2_p_0((MR_Word) (&startup_scalar_common_1[8]), CSDPtrsList0_97, &CSDPtrsList_98);
  mercury__list__condense_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CSDPtrsList_98, &CSDPtrs_16);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&startup_scalar_common_12[1]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (startup__propagate_to_proc_dynamic_9_p_0_2));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (CliqueNumber_10));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) (PDPtr_12));
  }
  Var_35 = mercury__map__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&profile__profile__type_ctor_info_deep_0), (MR_Word) (&startup_scalar_common_2[3]), Var_33, CSDPtrs_16, ((MR_Box) (STATE_VARIABLE_Deep_0_26)), &conv7_STATE_VARIABLE_Deep_34_34, ((MR_Box) (Var_35)), &conv6_PDCompTable_17);
  STATE_VARIABLE_Deep_34_34 = ((MR_Word) (conv7_STATE_VARIABLE_Deep_34_34));
  PDCompTable_17 = ((MR_Word) (conv6_PDCompTable_17));
  profile__deep_update_pd_comp_table_4_p_0(PDPtr_12, PDCompTable_17, STATE_VARIABLE_Deep_34_34, &STATE_VARIABLE_Deep_36_36);
  profile__deep_lookup_pd_desc_3_p_0(STATE_VARIABLE_Deep_36_36, PDPtr_12, &ProcDesc_18);
  profile__deep_lookup_pd_own_3_p_0(STATE_VARIABLE_Deep_36_36, PDPtr_12, &ProcOwn_19);
  ProcTotal_20 = measurements__add_own_to_inherit_2_f_0(ProcOwn_19, ProcDesc_18);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), STATE_VARIABLE_SumTable_0_28);
  if (succeeded)
    *STATE_VARIABLE_SumTable_29 = PDCompTable_17;
  else
  {
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), PDCompTable_17);
    if (succeeded)
      *STATE_VARIABLE_SumTable_29 = STATE_VARIABLE_SumTable_0_28;
    else
      *STATE_VARIABLE_SumTable_29 = mercury__map__union_3_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&startup_scalar_common_2[15]), STATE_VARIABLE_SumTable_0_28, PDCompTable_17);
  }
  profile__deep_lookup_proc_dynamics_3_p_0(STATE_VARIABLE_Deep_36_36, PDPtr_12, &PD_21);
  PSPtr_22 = ((MR_Word) ((MR_hl_field(0, PD_21, (MR_Integer) 0))));
  profile__deep_lookup_proc_statics_3_p_0(STATE_VARIABLE_Deep_36_36, PSPtr_22, &PS_23);
  Var_38 = ((MR_Unsigned) ((MR_hl_field(0, PS_23, (MR_Integer) 11))) & (MR_Integer) 1);
  succeeded = (Var_38 == (MR_Integer) 0);
  if (succeeded)
    *STATE_VARIABLE_OverrideTable_31 = startup__add_to_override_3_f_0(STATE_VARIABLE_OverrideTable_0_30, PSPtr_22, ProcTotal_20);
  else
    *STATE_VARIABLE_OverrideTable_31 = STATE_VARIABLE_OverrideTable_0_30;
  succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(STATE_VARIABLE_Deep_36_36, ParentCSDPtr_11);
  if (succeeded)
  {
    MR_Word ParentDesc0_24;
    MR_Word ParentDesc_25;

    profile__deep_lookup_csd_desc_3_p_0(STATE_VARIABLE_Deep_36_36, ParentCSDPtr_11, &ParentDesc0_24);
    ParentDesc_25 = measurements__add_inherit_to_inherit_2_f_0(ParentDesc0_24, ProcTotal_20);
    profile__deep_update_csd_desc_4_p_0(ParentCSDPtr_11, ParentDesc_25, STATE_VARIABLE_Deep_36_36, STATE_VARIABLE_Deep_27);
  }
  else
    *STATE_VARIABLE_Deep_27 = STATE_VARIABLE_Deep_36_36;
}

static MR_Word MR_CALL 
startup__add_to_override_3_f_0(
  MR_Word STATE_VARIABLE_CompTable_0_10,
  MR_Word PSPtr_6,
  MR_Word PDTotal_7)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_CompTable_11;
  MR_Word Comp0_8;
  MR_Box conv0_Comp0_8;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), STATE_VARIABLE_CompTable_0_10, ((MR_Box) (PSPtr_6)), &conv0_Comp0_8);
  if (succeeded)
  {
    Comp0_8 = ((MR_Word) (conv0_Comp0_8));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Comp_9;

    Comp_9 = measurements__add_inherit_to_inherit_2_f_0(Comp0_8, PDTotal_7);
    mercury__map__det_update_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), ((MR_Box) (PSPtr_6)), ((MR_Box) (Comp_9)), STATE_VARIABLE_CompTable_0_10, &STATE_VARIABLE_CompTable_11);
  }
  else
    mercury__map__det_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), ((MR_Box) (PSPtr_6)), ((MR_Box) (PDTotal_7)), STATE_VARIABLE_CompTable_0_10, &STATE_VARIABLE_CompTable_11);
  return STATE_VARIABLE_CompTable_11;
}

static MR_Box MR_CALL 
startup__propagate_to_clique_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Word conv7_OverrideComp_3;

  conv7_OverrideComp_3 = startup__select_override_comp_2_f_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv7_OverrideComp_3));
  return wrapper_arg_3;
}

static void MR_CALL 
startup__propagate_to_clique_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_Deep_27;
  MR_Word conv2_STATE_VARIABLE_SumTable_29;
  MR_Word conv1_STATE_VARIABLE_OverrideTable_31;

  startup__propagate_to_proc_dynamic_9_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_Deep_27, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_SumTable_29, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_OverrideTable_31);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_Deep_27));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_SumTable_29));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_OverrideTable_31));
}

static void MR_CALL 
startup__propagate_to_clique_4_p_0(
  MR_Integer CliqueNumber_5,
  MR_Word Members_6,
  MR_Word STATE_VARIABLE_Deep_0_16,
  MR_Word * STATE_VARIABLE_Deep_17)
{
  MR_bool succeeded;
  MR_Word ParentCSDPtr_8;
  MR_Word SumTable_9;
  MR_Word OverrideMap_10;
  MR_ArrayPtr Var_18 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_16, (MR_Integer) 11))));
  MR_Word Var_19;
  MR_Word STATE_VARIABLE_Deep_20_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Box conv0_ParentCSDPtr_8;
  MR_Box conv6_STATE_VARIABLE_Deep_20_20;
  MR_Box conv5_SumTable_9;
  MR_Box conv4_OverrideMap_10;

  mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (Var_18), CliqueNumber_5, &conv0_ParentCSDPtr_8);
  ParentCSDPtr_8 = ((MR_Word) (conv0_ParentCSDPtr_8));
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&startup_scalar_common_3[1]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (startup__propagate_to_clique_4_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (CliqueNumber_5));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (ParentCSDPtr_8));
  }
  Var_21 = mercury__map__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0));
  Var_22 = mercury__map__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0));
  mercury__list__foldl3_8_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&profile__profile__type_ctor_info_deep_0), (MR_Word) (&startup_scalar_common_2[3]), (MR_Word) (&startup_scalar_common_2[3]), Var_19, Members_6, ((MR_Box) (STATE_VARIABLE_Deep_0_16)), &conv6_STATE_VARIABLE_Deep_20_20, ((MR_Box) (Var_21)), &conv5_SumTable_9, ((MR_Box) (Var_22)), &conv4_OverrideMap_10);
  STATE_VARIABLE_Deep_20_20 = ((MR_Word) (conv6_STATE_VARIABLE_Deep_20_20));
  SumTable_9 = ((MR_Word) (conv5_SumTable_9));
  OverrideMap_10 = ((MR_Word) (conv4_OverrideMap_10));
  succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(STATE_VARIABLE_Deep_20_20, ParentCSDPtr_8);
  if (succeeded)
  {
    MR_Word ParentCSD_11;
    MR_Word ParentOwn_12;
    MR_Word ParentDesc0_13;
    MR_Word ParentDesc_14;
    MR_Word CSDCompTable_15;
    MR_Word STATE_VARIABLE_Deep_23_23;

    profile__deep_lookup_call_site_dynamics_3_p_0(STATE_VARIABLE_Deep_20_20, ParentCSDPtr_8, &ParentCSD_11);
    ParentOwn_12 = ((MR_Word) ((MR_hl_field(0, ParentCSD_11, (MR_Integer) 2))));
    profile__deep_lookup_csd_desc_3_p_0(STATE_VARIABLE_Deep_20_20, ParentCSDPtr_8, &ParentDesc0_13);
    ParentDesc_14 = measurements__subtract_own_from_inherit_2_f_0(ParentOwn_12, ParentDesc0_13);
    profile__deep_update_csd_desc_4_p_0(ParentCSDPtr_8, ParentDesc_14, STATE_VARIABLE_Deep_20_20, &STATE_VARIABLE_Deep_23_23);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), OverrideMap_10);
    if (succeeded)
      CSDCompTable_15 = SumTable_9;
    else
    {
      succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), SumTable_9);
      if (succeeded)
        CSDCompTable_15 = OverrideMap_10;
      else
        CSDCompTable_15 = mercury__map__union_3_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&startup_scalar_common_2[13]), OverrideMap_10, SumTable_9);
    }
    profile__deep_update_csd_comp_table_4_p_0(ParentCSDPtr_8, CSDCompTable_15, STATE_VARIABLE_Deep_23_23, STATE_VARIABLE_Deep_17);
  }
  else
    *STATE_VARIABLE_Deep_17 = STATE_VARIABLE_Deep_20_20;
}

static void MR_CALL 
startup__accumulate_ps_costs_6_p_0(
  MR_Word Deep_7,
  MR_Word PSPtr_8,
  MR_Word Own0_9,
  MR_Word * Own_10,
  MR_Word Desc0_11,
  MR_Word * Desc_12)
{
  MR_Word PSOwn_13;
  MR_Word PSDesc_14;

  profile__deep_lookup_ps_own_3_p_0(Deep_7, PSPtr_8, &PSOwn_13);
  profile__deep_lookup_ps_desc_3_p_0(Deep_7, PSPtr_8, &PSDesc_14);
  *Own_10 = measurements__add_own_to_own_2_f_0(Own0_9, PSOwn_13);
  *Desc_12 = measurements__add_inherit_to_inherit_2_f_0(Desc0_11, PSDesc_14);
}

static void MR_CALL 
startup__summarize_proc_static_coverage_4_p_0(
  MR_Integer Index_5,
  MR_Word PS_6,
  MR_ArrayPtr STATE_VARIABLE_CoverageArray_0_11,
  MR_ArrayPtr * STATE_VARIABLE_CoverageArray_12)
{
  MR_Word MaybeCoverage_8 = ((MR_Word) ((MR_hl_field(0, PS_6, (MR_Integer) 10))));

  if ((MaybeCoverage_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140startup.summarize_proc_static_coverage\'/4", (MR_String) "no coverage data in proc static");
      return;
    }
  else
  {
    MR_ArrayPtr Coverage0_9 = ((MR_ArrayPtr) ((MR_hl_field(1, MaybeCoverage_8, (MR_Integer) 0))));
    MR_Word Coverage_10;
    MR_ArrayPtr conv0_STATE_VARIABLE_CoverageArray_12;

    measurements__array_to_static_coverage_2_p_0(Coverage0_9, &Coverage_10);
    mercury__array__set_4_p_0((MR_Word) (&measurements__measurements__type_ctor_info_static_coverage_info_0), Index_5, ((MR_Box) (Coverage_10)), (MR_ArrayPtr) (STATE_VARIABLE_CoverageArray_0_11), &conv0_STATE_VARIABLE_CoverageArray_12);
    *STATE_VARIABLE_CoverageArray_12 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_CoverageArray_12);
  }
}

static void MR_CALL 
startup__summarize_module_costs_2_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Own_10;
  MR_Word conv0_Desc_12;

  startup__accumulate_ps_costs_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_Own_10, ((MR_Word) (wrapper_arg_4)), &conv0_Desc_12);
  *wrapper_arg_3 = ((MR_Box) (conv1_Own_10));
  *wrapper_arg_5 = ((MR_Box) (conv0_Desc_12));
}

static MR_Word MR_CALL 
startup__summarize_module_costs_2_f_0(
  MR_Word Deep_4,
  MR_Word ModuleData0_5)
{
  MR_Word ModuleData_6;
  MR_Word Own0_7 = ((MR_Word) ((MR_hl_field(0, ModuleData0_5, (MR_Integer) 0))));
  MR_Word Desc0_8 = ((MR_Word) ((MR_hl_field(0, ModuleData0_5, (MR_Integer) 1))));
  MR_Word PSPtrs_9 = ((MR_Word) ((MR_hl_field(0, ModuleData0_5, (MR_Integer) 2))));
  MR_Word Own_10;
  MR_Word Desc_11;
  MR_Word Var_12;
  MR_Box conv3_Own_10;
  MR_Box conv2_Desc_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&startup_scalar_common_8[3]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (startup__summarize_module_costs_2_f_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Deep_4));
  }
  mercury__list__foldl2_6_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), Var_12, PSPtrs_9, ((MR_Box) (Own0_7)), &conv3_Own_10, ((MR_Box) (Desc0_8)), &conv2_Desc_11);
  Own_10 = ((MR_Word) (conv3_Own_10));
  Desc_11 = ((MR_Word) (conv2_Desc_11));
  {
    ModuleData_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModuleData_6, 0) = ((MR_Box) (Own_10));
    MR_hl_field(0, ModuleData_6, 1) = ((MR_Box) (Desc_11));
    MR_hl_field(0, ModuleData_6, 2) = ((MR_Box) (PSPtrs_9));
  }
  return ModuleData_6;
}

static void MR_CALL 
startup__summarize_call_site_dynamic_10_p_0(
  MR_ArrayPtr CallSiteStaticMap_11,
  MR_ArrayPtr CallSiteStatics_12,
  MR_ArrayPtr CSDDescs_13,
  MR_ArrayPtr CSDCompTableArray_14,
  MR_Integer CSDI_15,
  MR_Word CSD_16,
  MR_ArrayPtr CSSOwnArray0_17,
  MR_ArrayPtr * CSSOwnArray_18,
  MR_ArrayPtr CSSDescArray0_19,
  MR_ArrayPtr * CSSDescArray_20)
{
  MR_bool succeeded;
  MR_Word CSDPtr_21 = (MR_Word) (CSDI_15);
  MR_Word CSSPtr_22;
  MR_Integer CSSI_23;

  profile__lookup_call_site_static_map_3_p_0(CallSiteStaticMap_11, CSDPtr_21, &CSSPtr_22);
  CSSI_23 = (MR_Integer) (CSSPtr_22);
  succeeded = (CSSI_23 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word CSDOwn_24 = ((MR_Word) ((MR_hl_field(0, CSD_16, (MR_Integer) 2))));
    MR_Word CSDDesc0_25;
    MR_Word CSDCompTable_26;
    MR_Word CSS_27;
    MR_Word CSDDesc_29;
    MR_Word CSSOwn0_30;
    MR_Word CSSDesc0_31;
    MR_Word CSSOwn_32;
    MR_Word CSSDesc_33;
    MR_ArrayPtr Var_36;
    MR_ArrayPtr Var_37;
    MR_Word InnerTotal_28;
    MR_Word Var_35;
    MR_Box conv0_InnerTotal_28;
    MR_Box conv1_Var_36;
    MR_Box conv2_Var_37;

    profile__lookup_csd_desc_3_p_0(CSDDescs_13, CSDPtr_21, &CSDDesc0_25);
    profile__lookup_csd_comp_table_3_p_0(CSDCompTableArray_14, CSDPtr_21, &CSDCompTable_26);
    profile__lookup_call_site_statics_3_p_0(CallSiteStatics_12, CSSPtr_22, &CSS_27);
    Var_35 = ((MR_Word) ((MR_hl_field(0, CSS_27, (MR_Integer) 0))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), CSDCompTable_26, ((MR_Box) (Var_35)), &conv0_InnerTotal_28);
    if (succeeded)
    {
      InnerTotal_28 = ((MR_Word) (conv0_InnerTotal_28));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      CSDDesc_29 = measurements__subtract_inherit_from_inherit_2_f_0(InnerTotal_28, CSDDesc0_25);
    else
      CSDDesc_29 = CSDDesc0_25;
    profile__lookup_css_own_3_p_0(CSSOwnArray0_17, CSSPtr_22, &CSSOwn0_30);
    profile__lookup_css_desc_3_p_0(CSSDescArray0_19, CSSPtr_22, &CSSDesc0_31);
    CSSOwn_32 = measurements__add_own_to_own_2_f_0(CSDOwn_24, CSSOwn0_30);
    CSSDesc_33 = measurements__add_inherit_to_inherit_2_f_0(CSDDesc_29, CSSDesc0_31);
    conv1_Var_36 = array_util__u_1_f_0((MR_Word) (&startup_scalar_common_1[14]), ((MR_Box) (CSSOwnArray0_17)));
    Var_36 = ((MR_ArrayPtr) (conv1_Var_36));
    profile__update_css_own_4_p_0(CSSPtr_22, CSSOwn_32, Var_36, CSSOwnArray_18);
    conv2_Var_37 = array_util__u_1_f_0((MR_Word) (&startup_scalar_common_1[15]), ((MR_Box) (CSSDescArray0_19)));
    Var_37 = ((MR_ArrayPtr) (conv2_Var_37));
    profile__update_css_desc_4_p_0(CSSPtr_22, CSSDesc_33, Var_37, CSSDescArray_20);
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "summarize_call_site_dynamic: invalid css ptr");
      return;
    }
}

static void MR_CALL 
startup__summarize_proc_dynamic_with_coverage_11_p_0(
  MR_ArrayPtr PDOwnArray_12,
  MR_ArrayPtr PDDescArray_13,
  MR_ArrayPtr PDCompTableArray_14,
  MR_Integer PDI_15,
  MR_Word PD_16,
  MR_ArrayPtr STATE_VARIABLE_PSOwnArray_0_24,
  MR_ArrayPtr * STATE_VARIABLE_PSOwnArray_25,
  MR_ArrayPtr STATE_VARIABLE_PSDescArray_0_26,
  MR_ArrayPtr * STATE_VARIABLE_PSDescArray_27,
  MR_ArrayPtr STATE_VARIABLE_CoverageArray_0_28,
  MR_ArrayPtr * STATE_VARIABLE_CoverageArray_29)
{
  MR_Word PSPtr_20;
  MR_Word MaybeDynamicCoverage_21;

  startup__summarize_proc_dynamic_9_p_0(PDOwnArray_12, PDDescArray_13, PDCompTableArray_14, PDI_15, PD_16, STATE_VARIABLE_PSOwnArray_0_24, STATE_VARIABLE_PSOwnArray_25, STATE_VARIABLE_PSDescArray_0_26, STATE_VARIABLE_PSDescArray_27);
  PSPtr_20 = ((MR_Word) ((MR_hl_field(0, PD_16, (MR_Integer) 0))));
  MaybeDynamicCoverage_21 = ((MR_Word) ((MR_hl_field(0, PD_16, (MR_Integer) 2))));
  if ((MaybeDynamicCoverage_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140startup.summarize_proc_dynamic_with_coverage\'/11", (MR_String) "no coverage point array in proc dynamic");
      return;
    }
  else
  {
    MR_ArrayPtr DynamicCoverage_22 = ((MR_ArrayPtr) ((MR_hl_field(1, MaybeDynamicCoverage_21, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_StaticCoverage_32_32;
    MR_Word STATE_VARIABLE_StaticCoverage_33_33;

    profile__lookup_ps_coverage_3_p_0(STATE_VARIABLE_CoverageArray_0_28, PSPtr_20, &STATE_VARIABLE_StaticCoverage_32_32);
    measurements__add_coverage_arrays_3_p_0(DynamicCoverage_22, STATE_VARIABLE_StaticCoverage_32_32, &STATE_VARIABLE_StaticCoverage_33_33);
    profile__update_ps_coverage_4_p_0(PSPtr_20, STATE_VARIABLE_StaticCoverage_33_33, STATE_VARIABLE_CoverageArray_0_28, STATE_VARIABLE_CoverageArray_29);
  }
}

static void MR_CALL 
startup__summarize_proc_dynamic_9_p_0(
  MR_ArrayPtr PDOwnArray_10,
  MR_ArrayPtr PDDescArray_11,
  MR_ArrayPtr PDCompTableArray_12,
  MR_Integer PDI_13,
  MR_Word PD_14,
  MR_ArrayPtr PSOwnArray0_15,
  MR_ArrayPtr * PSOwnArray_16,
  MR_ArrayPtr PSDescArray0_17,
  MR_ArrayPtr * PSDescArray_18)
{
  MR_bool succeeded;
  MR_Word PSPtr_19 = ((MR_Word) ((MR_hl_field(0, PD_14, (MR_Integer) 0))));
  MR_Word PDPtr_20 = (MR_Word) (PDI_13);
  MR_Word PDOwn_21;
  MR_Word PDDesc0_22;
  MR_Word PDCompTable_23;
  MR_Word PDDesc_25;
  MR_Word PSOwn0_26;
  MR_Word PSDesc0_27;
  MR_Word PSOwn_28;
  MR_Word PSDesc_29;
  MR_ArrayPtr Var_30;
  MR_ArrayPtr Var_31;
  MR_Word InnerTotal_24;
  MR_Box conv0_InnerTotal_24;
  MR_Box conv1_Var_30;
  MR_Box conv2_Var_31;

  profile__lookup_pd_own_3_p_0(PDOwnArray_10, PDPtr_20, &PDOwn_21);
  profile__lookup_pd_desc_3_p_0(PDDescArray_11, PDPtr_20, &PDDesc0_22);
  profile__lookup_pd_comp_table_3_p_0(PDCompTableArray_12, PDPtr_20, &PDCompTable_23);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), PDCompTable_23, ((MR_Box) (PSPtr_19)), &conv0_InnerTotal_24);
  if (succeeded)
  {
    InnerTotal_24 = ((MR_Word) (conv0_InnerTotal_24));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    PDDesc_25 = measurements__subtract_inherit_from_inherit_2_f_0(InnerTotal_24, PDDesc0_22);
  else
    PDDesc_25 = PDDesc0_22;
  profile__lookup_ps_own_3_p_0(PSOwnArray0_15, PSPtr_19, &PSOwn0_26);
  profile__lookup_ps_desc_3_p_0(PSDescArray0_17, PSPtr_19, &PSDesc0_27);
  PSOwn_28 = measurements__add_own_to_own_2_f_0(PDOwn_21, PSOwn0_26);
  PSDesc_29 = measurements__add_inherit_to_inherit_2_f_0(PDDesc_25, PSDesc0_27);
  conv1_Var_30 = array_util__u_1_f_0((MR_Word) (&startup_scalar_common_1[14]), ((MR_Box) (PSOwnArray0_15)));
  Var_30 = ((MR_ArrayPtr) (conv1_Var_30));
  profile__update_ps_own_4_p_0(PSPtr_19, PSOwn_28, Var_30, PSOwnArray_16);
  conv2_Var_31 = array_util__u_1_f_0((MR_Word) (&startup_scalar_common_1[15]), ((MR_Box) (PSDescArray0_17)));
  Var_31 = ((MR_ArrayPtr) (conv2_Var_31));
  profile__update_ps_desc_4_p_0(PSPtr_19, PSDesc_29, Var_31, PSDescArray_18);
}

static void MR_CALL 
startup__sum_call_sites_in_proc_dynamic_4_p_0(
  MR_Integer HeadVar__1_5,
  MR_Word CSD_6,
  MR_ArrayPtr STATE_VARIABLE_PDOwnArray_0_13,
  MR_ArrayPtr * STATE_VARIABLE_PDOwnArray_14)
{
  startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_p_0(CSD_6, STATE_VARIABLE_PDOwnArray_0_13, STATE_VARIABLE_PDOwnArray_14);
}

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_109_95_99_97_108_108_95_115_105_116_101_115_95_105_110_95_112_114_111_99_95_100_121_110_97_109_105_99_95_95_91_49_93_95_48_4_p_0(
  MR_Word CSD_6,
  MR_ArrayPtr STATE_VARIABLE_PDOwnArray_0_13,
  MR_ArrayPtr * STATE_VARIABLE_PDOwnArray_14)
{
  MR_bool succeeded;
  MR_Word CalleeOwn_8 = ((MR_Word) ((MR_hl_field(0, CSD_6, (MR_Integer) 2))));
  MR_Word PDPtr_9 = ((MR_Word) ((MR_hl_field(0, CSD_6, (MR_Integer) 1))));
  MR_Integer PDI_10 = (MR_Integer) (PDPtr_9);

  succeeded = (PDI_10 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word ProcOwn0_11;
    MR_Word ProcOwn_12;
    MR_Box conv0_ProcOwn0_11;
    MR_ArrayPtr conv1_STATE_VARIABLE_PDOwnArray_14;

    mercury__array__lookup_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (STATE_VARIABLE_PDOwnArray_0_13), PDI_10, &conv0_ProcOwn0_11);
    ProcOwn0_11 = ((MR_Word) (conv0_ProcOwn0_11));
    ProcOwn_12 = measurements__add_own_to_own_2_f_0(CalleeOwn_8, ProcOwn0_11);
    mercury__array__set_4_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), PDI_10, ((MR_Box) (ProcOwn_12)), (MR_ArrayPtr) (STATE_VARIABLE_PDOwnArray_0_13), &conv1_STATE_VARIABLE_PDOwnArray_14);
    *STATE_VARIABLE_PDOwnArray_14 = (MR_ArrayPtr) (conv1_STATE_VARIABLE_PDOwnArray_14);
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "sum_call_sites_in_proc_dynamic: invalid pdptr");
      return;
    }
}

static void MR_CALL 
startup__construct_call_site_calls_3_7_p_0(
  MR_ArrayPtr CallSiteDynamics_8,
  MR_ArrayPtr ProcDynamics_9,
  MR_Word CSSPtr_10,
  MR_Integer _Dummy_11,
  MR_Word CSDPtr_12,
  MR_ArrayPtr STATE_VARIABLE_CallSiteCalls_0_25,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteCalls_26)
{
  startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(CallSiteDynamics_8, ProcDynamics_9, CSSPtr_10, CSDPtr_12, STATE_VARIABLE_CallSiteCalls_0_25, STATE_VARIABLE_CallSiteCalls_26);
}

static void MR_CALL 
startup__construct_call_site_calls_5_p_0(
  MR_Word InitDeep_6,
  MR_Integer _PDI_7,
  MR_Word PD_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteCalls_0_18,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteCalls_19)
{
  startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_p_0(InitDeep_6, PD_8, STATE_VARIABLE_CallSiteCalls_0_18, STATE_VARIABLE_CallSiteCalls_19);
}

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_95_91_50_93_95_48_5_p_0(
  MR_Word InitDeep_6,
  MR_Word PD_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteCalls_0_18,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteCalls_19)
{
  MR_Word PSPtr_10 = ((MR_Word) ((MR_hl_field(0, PD_8, (MR_Integer) 0))));
  MR_ArrayPtr CSDArraySlots_11 = ((MR_ArrayPtr) ((MR_hl_field(0, PD_8, (MR_Integer) 1))));
  MR_Integer MaxCS_12;
  MR_Integer PSI_13;
  MR_Word PS_14;
  MR_ArrayPtr CSSPtrs_15;
  MR_ArrayPtr CallSiteDynamics_16;
  MR_ArrayPtr ProcDynamics_17;
  MR_ArrayPtr Var_20;
  MR_Box conv0_PS_14;

  mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (CSDArraySlots_11), &MaxCS_12);
  PSI_13 = (MR_Integer) (PSPtr_10);
  Var_20 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_6, (MR_Integer) 5))));
  mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), (MR_ArrayPtr) (Var_20), PSI_13, &conv0_PS_14);
  PS_14 = ((MR_Word) (conv0_PS_14));
  CSSPtrs_15 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_14, (MR_Integer) 8))));
  CallSiteDynamics_16 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_6, (MR_Integer) 2))));
  ProcDynamics_17 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_6, (MR_Integer) 3))));
  startup__construct_call_site_calls_2_7_p_0(CallSiteDynamics_16, ProcDynamics_17, MaxCS_12, CSSPtrs_15, CSDArraySlots_11, STATE_VARIABLE_CallSiteCalls_0_18, STATE_VARIABLE_CallSiteCalls_19);
}

static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv2_STATE_VARIABLE_CallSiteCalls_26;

  startup__construct_call_site_calls_3_7_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv2_STATE_VARIABLE_CallSiteCalls_26);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_CallSiteCalls_26));
}

static void MR_CALL 
startup__construct_call_site_calls_2_7_p_0(
  MR_ArrayPtr CallSiteDynamics_8,
  MR_ArrayPtr ProcDynamics_9,
  MR_Integer SlotNum_10,
  MR_ArrayPtr CSSPtrs_11,
  MR_ArrayPtr CSDArraySlots_12,
  MR_ArrayPtr STATE_VARIABLE_CallSiteCalls_0_19,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteCalls_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (SlotNum_10 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word CSDArraySlot_14;
      MR_Word CSSPtr_15;
      MR_ArrayPtr STATE_VARIABLE_CallSiteCalls_23_23;
      MR_Integer Var_26;
      MR_Box conv0_CSDArraySlot_14;
      MR_Box conv1_CSSPtr_15;
      MR_Integer next_value_of_SlotNum_10;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_CallSiteCalls_0_19;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (CSDArraySlots_12), SlotNum_10, &conv0_CSDArraySlot_14);
      CSDArraySlot_14 = ((MR_Word) (conv0_CSDArraySlot_14));
      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_ArrayPtr) (CSSPtrs_11), SlotNum_10, &conv1_CSSPtr_15);
      CSSPtr_15 = ((MR_Word) (conv1_CSSPtr_15));
      if (((MR_tag((MR_Word) CSDArraySlot_14)) == (MR_Integer) 1))
      {
        MR_ArrayPtr CSDPtrs_18 = ((MR_ArrayPtr) ((MR_hl_field(1, CSDArraySlot_14, (MR_Integer) 1))));
        MR_Word Var_24;
        MR_Box conv3_STATE_VARIABLE_CallSiteCalls_23_23;

        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = ((MR_Box) (&startup_scalar_common_12[0]));
          MR_hl_field(0, Var_24, 1) = ((MR_Box) (startup__construct_call_site_calls_2_7_p_0_1));
          MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_24, 3) = ((MR_Box) (CallSiteDynamics_8));
          MR_hl_field(0, Var_24, 4) = ((MR_Box) (ProcDynamics_9));
          MR_hl_field(0, Var_24, 5) = ((MR_Box) (CSSPtr_15));
        }
        array_util__array_foldl_from_0_4_p_1((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&startup_scalar_common_1[11]), Var_24, (MR_ArrayPtr) (CSDPtrs_18), ((MR_Box) (STATE_VARIABLE_CallSiteCalls_0_19)), &conv3_STATE_VARIABLE_CallSiteCalls_23_23);
        STATE_VARIABLE_CallSiteCalls_23_23 = ((MR_ArrayPtr) (conv3_STATE_VARIABLE_CallSiteCalls_23_23));
      }
      else
      {
        MR_Word CSDPtr_16 = ((MR_Word) ((MR_hl_field(0, CSDArraySlot_14, (MR_Integer) 0))));

        startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(CallSiteDynamics_8, ProcDynamics_9, CSSPtr_15, CSDPtr_16, STATE_VARIABLE_CallSiteCalls_0_19, &STATE_VARIABLE_CallSiteCalls_23_23);
      }
      Var_26 = (MR_Integer) ((MR_Unsigned) SlotNum_10 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_SlotNum_10 = Var_26;
      next_value_of_STATE_VARIABLE_CallSiteCalls_0_19 = STATE_VARIABLE_CallSiteCalls_23_23;
      SlotNum_10 = next_value_of_SlotNum_10;
      STATE_VARIABLE_CallSiteCalls_0_19 = next_value_of_STATE_VARIABLE_CallSiteCalls_0_19;
      continue;
    }
    else
      *STATE_VARIABLE_CallSiteCalls_20 = STATE_VARIABLE_CallSiteCalls_0_19;
    break;
  }
}

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_115_95_51_95_95_91_52_93_95_48_7_p_0(
  MR_ArrayPtr CallSiteDynamics_8,
  MR_ArrayPtr ProcDynamics_9,
  MR_Word CSSPtr_10,
  MR_Word CSDPtr_12,
  MR_ArrayPtr STATE_VARIABLE_CallSiteCalls_0_25,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteCalls_26)
{
  MR_bool succeeded;
  MR_Integer CSDI_14 = (MR_Integer) (CSDPtr_12);

  succeeded = (CSDI_14 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word CSD_15;
    MR_Word PDPtr_16;
    MR_Integer PDI_17;
    MR_Word PD_18;
    MR_Word PSPtr_19;
    MR_Integer CSSI_20;
    MR_Word CallMap0_21;
    MR_Word CallMap_24;
    MR_Box conv0_CSD_15;
    MR_Box conv1_PD_18;
    MR_Box conv2_CallMap0_21;
    MR_Word CallList0_22;
    MR_Box conv3_CallList0_22;
    MR_ArrayPtr conv4_STATE_VARIABLE_CallSiteCalls_26;

    mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (CallSiteDynamics_8), CSDI_14, &conv0_CSD_15);
    CSD_15 = ((MR_Word) (conv0_CSD_15));
    PDPtr_16 = ((MR_Word) ((MR_hl_field(0, CSD_15, (MR_Integer) 1))));
    PDI_17 = (MR_Integer) (PDPtr_16);
    mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_ArrayPtr) (ProcDynamics_9), PDI_17, &conv1_PD_18);
    PD_18 = ((MR_Word) (conv1_PD_18));
    PSPtr_19 = ((MR_Word) ((MR_hl_field(0, PD_18, (MR_Integer) 0))));
    CSSI_20 = (MR_Integer) (CSSPtr_10);
    mercury__array__lookup_3_p_0((MR_Word) (&startup_scalar_common_2[1]), (MR_ArrayPtr) (STATE_VARIABLE_CallSiteCalls_0_25), CSSI_20, &conv2_CallMap0_21);
    CallMap0_21 = ((MR_Word) (conv2_CallMap0_21));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&startup_scalar_common_1[8]), CallMap0_21, ((MR_Box) (PSPtr_19)), &conv3_CallList0_22);
    if (succeeded)
    {
      CallList0_22 = ((MR_Word) (conv3_CallList0_22));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word CallList_23;

      {
        CallList_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CallList_23, 0) = ((MR_Box) (CSDPtr_12));
        MR_hl_field(1, CallList_23, 1) = ((MR_Box) (CallList0_22));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&startup_scalar_common_1[8]), ((MR_Box) (PSPtr_19)), ((MR_Box) (CallList_23)), CallMap0_21, &CallMap_24);
    }
    else
    {
      MR_Word CallList_30;

      {
        CallList_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CallList_30, 0) = ((MR_Box) (CSDPtr_12));
        MR_hl_field(1, CallList_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&startup_scalar_common_1[8]), ((MR_Box) (PSPtr_19)), ((MR_Box) (CallList_30)), CallMap0_21, &CallMap_24);
    }
    mercury__array__set_4_p_0((MR_Word) (&startup_scalar_common_2[1]), CSSI_20, ((MR_Box) (CallMap_24)), (MR_ArrayPtr) (STATE_VARIABLE_CallSiteCalls_0_25), &conv4_STATE_VARIABLE_CallSiteCalls_26);
    *STATE_VARIABLE_CallSiteCalls_26 = (MR_ArrayPtr) (conv4_STATE_VARIABLE_CallSiteCalls_26);
  }
  else
    *STATE_VARIABLE_CallSiteCalls_26 = STATE_VARIABLE_CallSiteCalls_0_25;
}

static void MR_CALL 
startup__construct_call_site_caller_3_6_p_0(
  MR_ArrayPtr CallSiteDynamics_7,
  MR_Word CSSPtr_8,
  MR_Integer _Dummy_9,
  MR_Word CSDPtr_10,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStaticMap_0_12,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStaticMap_13)
{
  startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_p_0(CallSiteDynamics_7, CSSPtr_8, CSDPtr_10, STATE_VARIABLE_CallSiteStaticMap_0_12, STATE_VARIABLE_CallSiteStaticMap_13);
}

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_51_95_95_91_51_93_95_48_6_p_0(
  MR_ArrayPtr CallSiteDynamics_7,
  MR_Word CSSPtr_8,
  MR_Word CSDPtr_10,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStaticMap_0_12,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStaticMap_13)
{
  MR_bool succeeded;

  succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(CallSiteDynamics_7, CSDPtr_10);
  if (succeeded)
    profile__update_call_site_static_map_4_p_0(CSDPtr_10, CSSPtr_8, STATE_VARIABLE_CallSiteStaticMap_0_12, STATE_VARIABLE_CallSiteStaticMap_13);
  else
    *STATE_VARIABLE_CallSiteStaticMap_13 = STATE_VARIABLE_CallSiteStaticMap_0_12;
}

static void MR_CALL 
startup__construct_call_site_caller_5_p_0(
  MR_Word InitDeep_6,
  MR_Integer _PDI_7,
  MR_Word PD_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStaticMap_0_15,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStaticMap_16)
{
  startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_p_0(InitDeep_6, PD_8, STATE_VARIABLE_CallSiteStaticMap_0_15, STATE_VARIABLE_CallSiteStaticMap_16);
}

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_95_99_97_108_108_95_115_105_116_101_95_99_97_108_108_101_114_95_95_91_50_93_95_48_5_p_0(
  MR_Word InitDeep_6,
  MR_Word PD_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStaticMap_0_15,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStaticMap_16)
{
  MR_Word PSPtr_10 = ((MR_Word) ((MR_hl_field(0, PD_8, (MR_Integer) 0))));
  MR_ArrayPtr CSDArraySlots_11 = ((MR_ArrayPtr) ((MR_hl_field(0, PD_8, (MR_Integer) 1))));
  MR_Word PS_12;
  MR_ArrayPtr CSSPtrs_13;
  MR_Integer MaxCS_14;
  MR_ArrayPtr Var_17 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_6, (MR_Integer) 5))));
  MR_ArrayPtr Var_18;

  profile__lookup_proc_statics_3_p_0(Var_17, PSPtr_10, &PS_12);
  CSSPtrs_13 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_12, (MR_Integer) 8))));
  mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (CSDArraySlots_11), &MaxCS_14);
  Var_18 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_6, (MR_Integer) 2))));
  startup__construct_call_site_caller_2_6_p_0(MaxCS_14, Var_18, CSSPtrs_13, CSDArraySlots_11, STATE_VARIABLE_CallSiteStaticMap_0_15, STATE_VARIABLE_CallSiteStaticMap_16);
}

static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv2_STATE_VARIABLE_CallSiteStaticMap_13;

  startup__construct_call_site_caller_3_6_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv2_STATE_VARIABLE_CallSiteStaticMap_13);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_CallSiteStaticMap_13));
}

static void MR_CALL 
startup__construct_call_site_caller_2_6_p_0(
  MR_Integer SlotNum_7,
  MR_ArrayPtr Deep_8,
  MR_ArrayPtr CSSPtrs_9,
  MR_ArrayPtr CSDArraySlots_10,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStaticMap_0_17,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStaticMap_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (SlotNum_7 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word CSDArraySlot_12;
      MR_Word CSSPtr_13;
      MR_ArrayPtr STATE_VARIABLE_CallSiteStaticMap_21_21;
      MR_Integer Var_24;
      MR_Box conv0_CSDArraySlot_12;
      MR_Box conv1_CSSPtr_13;
      MR_Integer next_value_of_SlotNum_7;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_CallSiteStaticMap_0_17;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (CSDArraySlots_10), SlotNum_7, &conv0_CSDArraySlot_12);
      CSDArraySlot_12 = ((MR_Word) (conv0_CSDArraySlot_12));
      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_ArrayPtr) (CSSPtrs_9), SlotNum_7, &conv1_CSSPtr_13);
      CSSPtr_13 = ((MR_Word) (conv1_CSSPtr_13));
      if (((MR_tag((MR_Word) CSDArraySlot_12)) == (MR_Integer) 1))
      {
        MR_ArrayPtr CSDPtrs_16 = ((MR_ArrayPtr) ((MR_hl_field(1, CSDArraySlot_12, (MR_Integer) 1))));
        MR_Word Var_22;
        MR_Box conv3_STATE_VARIABLE_CallSiteStaticMap_21_21;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (&startup_scalar_common_8[2]));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (startup__construct_call_site_caller_2_6_p_0_1));
          MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_22, 3) = ((MR_Box) (Deep_8));
          MR_hl_field(0, Var_22, 4) = ((MR_Box) (CSSPtr_13));
        }
        array_util__array_foldl_from_0_4_p_1((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&startup_scalar_common_1[10]), Var_22, (MR_ArrayPtr) (CSDPtrs_16), ((MR_Box) (STATE_VARIABLE_CallSiteStaticMap_0_17)), &conv3_STATE_VARIABLE_CallSiteStaticMap_21_21);
        STATE_VARIABLE_CallSiteStaticMap_21_21 = ((MR_ArrayPtr) (conv3_STATE_VARIABLE_CallSiteStaticMap_21_21));
      }
      else
      {
        MR_Word CSDPtr_14 = ((MR_Word) ((MR_hl_field(0, CSDArraySlot_12, (MR_Integer) 0))));

        succeeded = profile__valid_call_site_dynamic_ptr_raw_2_p_0(Deep_8, CSDPtr_14);
        if (succeeded)
          profile__update_call_site_static_map_4_p_0(CSDPtr_14, CSSPtr_13, STATE_VARIABLE_CallSiteStaticMap_0_17, &STATE_VARIABLE_CallSiteStaticMap_21_21);
        else
          STATE_VARIABLE_CallSiteStaticMap_21_21 = STATE_VARIABLE_CallSiteStaticMap_0_17;
      }
      Var_24 = (MR_Integer) ((MR_Unsigned) SlotNum_7 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_SlotNum_7 = Var_24;
      next_value_of_STATE_VARIABLE_CallSiteStaticMap_0_17 = STATE_VARIABLE_CallSiteStaticMap_21_21;
      SlotNum_7 = next_value_of_SlotNum_7;
      STATE_VARIABLE_CallSiteStaticMap_0_17 = next_value_of_STATE_VARIABLE_CallSiteStaticMap_0_17;
      continue;
    }
    else
      *STATE_VARIABLE_CallSiteStaticMap_18 = STATE_VARIABLE_CallSiteStaticMap_0_17;
    break;
  }
}

static void MR_CALL 
startup__construct_proc_callers_5_p_0(
  MR_Word InitDeep_6,
  MR_Integer CSDI_7,
  MR_Word CSD_8,
  MR_ArrayPtr STATE_VARIABLE_ProcCallers_0_15,
  MR_ArrayPtr * STATE_VARIABLE_ProcCallers_16)
{
  MR_bool succeeded;
  MR_Word PDPtr_10 = ((MR_Word) ((MR_hl_field(0, CSD_8, (MR_Integer) 1))));
  MR_ArrayPtr Var_17 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_6, (MR_Integer) 3))));

  succeeded = profile__valid_proc_dynamic_ptr_raw_2_p_0(Var_17, PDPtr_10);
  if (succeeded)
  {
    MR_Word PD_11;
    MR_Word PSPtr_12;
    MR_Word Callers0_13;
    MR_Word Callers_14;
    MR_ArrayPtr Var_18 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_6, (MR_Integer) 3))));
    MR_Word Var_19;

    profile__lookup_proc_dynamics_3_p_0(Var_18, PDPtr_10, &PD_11);
    PSPtr_12 = ((MR_Word) ((MR_hl_field(0, PD_11, (MR_Integer) 0))));
    profile__lookup_proc_callers_3_p_0(STATE_VARIABLE_ProcCallers_0_15, PSPtr_12, &Callers0_13);
    Var_19 = (MR_Word) (CSDI_7);
    {
      Callers_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Callers_14, 0) = ((MR_Box) (Var_19));
      MR_hl_field(1, Callers_14, 1) = ((MR_Box) (Callers0_13));
    }
    profile__update_proc_callers_4_p_0(PSPtr_12, Callers_14, STATE_VARIABLE_ProcCallers_0_15, STATE_VARIABLE_ProcCallers_16);
  }
  else
    *STATE_VARIABLE_ProcCallers_16 = STATE_VARIABLE_ProcCallers_0_15;
}

static void MR_CALL 
startup__construct_clique_parents_2_8_p_0(
  MR_Word InitDeep_9,
  MR_ArrayPtr CliqueIndex_10,
  MR_Word ParentCliquePtr_11,
  MR_Word CSDPtr_12,
  MR_ArrayPtr STATE_VARIABLE_CliqueParents_0_21,
  MR_ArrayPtr * STATE_VARIABLE_CliqueParents_22,
  MR_ArrayPtr STATE_VARIABLE_CliqueMaybeChildren_0_23,
  MR_ArrayPtr * STATE_VARIABLE_CliqueMaybeChildren_24)
{
  MR_bool succeeded;
  MR_Integer CSDI_15 = (MR_Integer) (CSDPtr_12);

  succeeded = (CSDI_15 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word CSD_16;
    MR_Word ChildPDPtr_17;
    MR_Integer ChildPDI_18;
    MR_ArrayPtr Var_26 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_9, (MR_Integer) 2))));
    MR_Box conv0_CSD_16;

    mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (Var_26), CSDI_15, &conv0_CSD_16);
    CSD_16 = ((MR_Word) (conv0_CSD_16));
    ChildPDPtr_17 = ((MR_Word) ((MR_hl_field(0, CSD_16, (MR_Integer) 1))));
    ChildPDI_18 = (MR_Integer) (ChildPDPtr_17);
    succeeded = (ChildPDI_18 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word ChildCliquePtr_19;
      MR_Box conv1_ChildCliquePtr_19;
      MR_Integer Var_42;
      MR_Integer Var_43;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), (MR_ArrayPtr) (CliqueIndex_10), ChildPDI_18, &conv1_ChildCliquePtr_19);
      ChildCliquePtr_19 = ((MR_Word) (conv1_ChildCliquePtr_19));
      Var_42 = (MR_Integer) (ChildCliquePtr_19);
      Var_43 = (MR_Integer) (ParentCliquePtr_11);
      succeeded = (Var_42 != Var_43);
      if (succeeded)
      {
        MR_Integer ChildCliqueNum_20 = (MR_Integer) (ChildCliquePtr_19);
        MR_Word Var_29;
        MR_ArrayPtr conv2_STATE_VARIABLE_CliqueParents_22;
        MR_ArrayPtr conv3_STATE_VARIABLE_CliqueMaybeChildren_24;

        mercury__array__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), ChildCliqueNum_20, ((MR_Box) (CSDPtr_12)), (MR_ArrayPtr) (STATE_VARIABLE_CliqueParents_0_21), &conv2_STATE_VARIABLE_CliqueParents_22);
        *STATE_VARIABLE_CliqueParents_22 = (MR_ArrayPtr) (conv2_STATE_VARIABLE_CliqueParents_22);
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (ChildCliquePtr_19));
        }
        mercury__array__set_4_p_0((MR_Word) (&startup_scalar_common_1[5]), CSDI_15, ((MR_Box) (Var_29)), (MR_ArrayPtr) (STATE_VARIABLE_CliqueMaybeChildren_0_23), &conv3_STATE_VARIABLE_CliqueMaybeChildren_24);
        *STATE_VARIABLE_CliqueMaybeChildren_24 = (MR_ArrayPtr) (conv3_STATE_VARIABLE_CliqueMaybeChildren_24);
      }
      else
      {
        *STATE_VARIABLE_CliqueMaybeChildren_24 = STATE_VARIABLE_CliqueMaybeChildren_0_23;
        *STATE_VARIABLE_CliqueParents_22 = STATE_VARIABLE_CliqueParents_0_21;
      }
    }
    else
    {
      *STATE_VARIABLE_CliqueMaybeChildren_24 = STATE_VARIABLE_CliqueMaybeChildren_0_23;
      *STATE_VARIABLE_CliqueParents_22 = STATE_VARIABLE_CliqueParents_0_21;
    }
  }
  else
  {
    *STATE_VARIABLE_CliqueMaybeChildren_24 = STATE_VARIABLE_CliqueMaybeChildren_0_23;
    *STATE_VARIABLE_CliqueParents_22 = STATE_VARIABLE_CliqueParents_0_21;
  }
}

static void MR_CALL 
startup__construct_clique_parents_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv5_STATE_VARIABLE_CliqueParents_22;
  MR_ArrayPtr conv4_STATE_VARIABLE_CliqueMaybeChildren_24;

  startup__construct_clique_parents_2_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_ArrayPtr) (wrapper_arg_2)), &conv5_STATE_VARIABLE_CliqueParents_22, ((MR_ArrayPtr) (wrapper_arg_4)), &conv4_STATE_VARIABLE_CliqueMaybeChildren_24);
  *wrapper_arg_3 = ((MR_Box) (conv5_STATE_VARIABLE_CliqueParents_22));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_CliqueMaybeChildren_24));
}

static void MR_CALL 
startup__construct_clique_parents_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_CSDPtrs1_8;
  MR_Word conv0_IsZeroed_10;

  startup__gather_call_site_csdptrs_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_CSDPtrs1_8, ((MR_Word) (wrapper_arg_4)), &conv0_IsZeroed_10);
  *wrapper_arg_3 = ((MR_Box) (conv1_CSDPtrs1_8));
  *wrapper_arg_5 = ((MR_Box) (conv0_IsZeroed_10));
}

static void MR_CALL 
startup__construct_clique_parents_8_p_0(
  MR_Word InitDeep_9,
  MR_ArrayPtr CliqueIndex_10,
  MR_Integer PDI_11,
  MR_Word CliquePtr_12,
  MR_ArrayPtr STATE_VARIABLE_CliqueParents_0_16,
  MR_ArrayPtr * STATE_VARIABLE_CliqueParents_17,
  MR_ArrayPtr STATE_VARIABLE_CliqueMaybeChildren_0_18,
  MR_ArrayPtr * STATE_VARIABLE_CliqueMaybeChildren_19)
{
  MR_bool succeeded = (PDI_11 > (MR_Integer) 0);

  if (succeeded)
  {
    MR_Word CSDPtrs_15;
    MR_ArrayPtr Var_21 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_9, (MR_Integer) 3))));
    MR_Word Var_22 = (MR_Word) (PDI_11);
    MR_Word Var_23;
    MR_Word PD_39;
    MR_ArrayPtr CallSiteArray_40;
    MR_Word CallSites_44;
    MR_Word CSDPtrsList0_45;
    MR_Word CSDPtrsList_46;
    MR_Box conv3_CSDPtrsList0_45;
    MR_Box conv2_Var_41;
    MR_ArrayPtr conv7_STATE_VARIABLE_CliqueParents_17;
    MR_ArrayPtr conv6_STATE_VARIABLE_CliqueMaybeChildren_19;

    profile__lookup_proc_dynamics_3_p_0(Var_21, Var_22, &PD_39);
    CallSiteArray_40 = ((MR_ArrayPtr) ((MR_hl_field(0, PD_39, (MR_Integer) 1))));
    mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (CallSiteArray_40), &CallSites_44);
    mercury__list__foldl2_6_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_Word) (&startup_scalar_common_1[17]), (MR_Word) (&profile__profile__type_ctor_info_is_zeroed_0), (MR_Word) (&startup_scalar_common_2[12]), CallSites_44, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_CSDPtrsList0_45, ((MR_Box) ((MR_Integer) 1)), &conv2_Var_41);
    CSDPtrsList0_45 = ((MR_Word) (conv3_CSDPtrsList0_45));
    mercury__list__reverse_2_p_0((MR_Word) (&startup_scalar_common_1[8]), CSDPtrsList0_45, &CSDPtrsList_46);
    mercury__list__condense_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CSDPtrsList_46, &CSDPtrs_15);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (&startup_scalar_common_10[1]));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (startup__construct_clique_parents_8_p_0_2));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_23, 3) = ((MR_Box) (InitDeep_9));
      MR_hl_field(0, Var_23, 4) = ((MR_Box) (CliqueIndex_10));
      MR_hl_field(0, Var_23, 5) = ((MR_Box) (CliquePtr_12));
    }
    array_util__array_list_foldl2_6_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&startup_scalar_common_1[5]), Var_23, CSDPtrs_15, (MR_ArrayPtr) (STATE_VARIABLE_CliqueParents_0_16), &conv7_STATE_VARIABLE_CliqueParents_17, (MR_ArrayPtr) (STATE_VARIABLE_CliqueMaybeChildren_0_18), &conv6_STATE_VARIABLE_CliqueMaybeChildren_19);
    *STATE_VARIABLE_CliqueParents_17 = (MR_ArrayPtr) (conv7_STATE_VARIABLE_CliqueParents_17);
    *STATE_VARIABLE_CliqueMaybeChildren_19 = (MR_ArrayPtr) (conv6_STATE_VARIABLE_CliqueMaybeChildren_19);
  }
  else
    {
      mercury__require__error_1_p_0((MR_String) "construct_clique_parents: invalid pdi");
      return;
    }
}

static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_CSDPtrs1_8;
  MR_Word conv0_IsZeroed_10;

  startup__gather_call_site_csdptrs_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_CSDPtrs1_8, ((MR_Word) (wrapper_arg_4)), &conv0_IsZeroed_10);
  *wrapper_arg_3 = ((MR_Box) (conv1_CSDPtrs1_8));
  *wrapper_arg_5 = ((MR_Box) (conv0_IsZeroed_10));
}

static void MR_CALL 
startup__record_csd_containers_zeroed_pss_6_p_0(
  MR_Integer PDI_7,
  MR_Word PD_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteDynamics_0_18,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteDynamics_19,
  MR_ArrayPtr STATE_VARIABLE_ProcStatics_0_20,
  MR_ArrayPtr * STATE_VARIABLE_ProcStatics_21)
{
  MR_ArrayPtr CSDArray_11 = ((MR_ArrayPtr) ((MR_hl_field(0, PD_8, (MR_Integer) 1))));
  MR_Word PDPtr_12 = (MR_Word) (PDI_7);
  MR_Word CSDPtrs_13;
  MR_Word IsZeroed_14;
  MR_Word CallSites_40;
  MR_Word CSDPtrsList0_41;
  MR_Word CSDPtrsList_42;
  MR_Box conv3_CSDPtrsList0_41;
  MR_Box conv2_IsZeroed_14;

  mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (CSDArray_11), &CallSites_40);
  mercury__list__foldl2_6_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_Word) (&startup_scalar_common_1[17]), (MR_Word) (&profile__profile__type_ctor_info_is_zeroed_0), (MR_Word) (&startup_scalar_common_2[11]), CallSites_40, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_CSDPtrsList0_41, ((MR_Box) ((MR_Integer) 1)), &conv2_IsZeroed_14);
  CSDPtrsList0_41 = ((MR_Word) (conv3_CSDPtrsList0_41));
  IsZeroed_14 = ((MR_Word) (conv2_IsZeroed_14));
  mercury__list__reverse_2_p_0((MR_Word) (&startup_scalar_common_1[8]), CSDPtrsList0_41, &CSDPtrsList_42);
  mercury__list__condense_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), CSDPtrsList_42, &CSDPtrs_13);
  startup__record_csd_containers_2_4_p_0(PDPtr_12, CSDPtrs_13, STATE_VARIABLE_CallSiteDynamics_0_18, STATE_VARIABLE_CallSiteDynamics_19);
  switch (IsZeroed_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_ProcStatics_21 = STATE_VARIABLE_ProcStatics_0_20;
      break;
    case (MR_Integer) 0:
      {
        MR_Word PSPtr_15 = ((MR_Word) ((MR_hl_field(0, PD_8, (MR_Integer) 0))));
        MR_Word PS0_16;
        MR_Word PS_17;
        MR_Word Var_28;
        MR_String Var_29;
        MR_String Var_30;
        MR_String Var_31;
        MR_String Var_32;
        MR_String Var_33;
        MR_Integer Var_34;
        MR_Word Var_35;
        MR_ArrayPtr Var_36;
        MR_ArrayPtr Var_37;
        MR_Word Var_38;

        profile__lookup_proc_statics_3_p_0(STATE_VARIABLE_ProcStatics_0_20, PSPtr_15, &PS0_16);
        Var_28 = ((MR_Word) ((MR_hl_field(0, PS0_16, (MR_Integer) 0))));
        Var_29 = ((MR_String) ((MR_hl_field(0, PS0_16, (MR_Integer) 1))));
        Var_30 = ((MR_String) ((MR_hl_field(0, PS0_16, (MR_Integer) 2))));
        Var_31 = ((MR_String) ((MR_hl_field(0, PS0_16, (MR_Integer) 3))));
        Var_32 = ((MR_String) ((MR_hl_field(0, PS0_16, (MR_Integer) 4))));
        Var_33 = ((MR_String) ((MR_hl_field(0, PS0_16, (MR_Integer) 5))));
        Var_34 = ((MR_Integer) ((MR_hl_field(0, PS0_16, (MR_Integer) 6))));
        Var_35 = ((MR_Unsigned) ((MR_hl_field(0, PS0_16, (MR_Integer) 7))) & (MR_Integer) 1);
        Var_36 = ((MR_ArrayPtr) ((MR_hl_field(0, PS0_16, (MR_Integer) 8))));
        Var_37 = ((MR_ArrayPtr) ((MR_hl_field(0, PS0_16, (MR_Integer) 9))));
        Var_38 = ((MR_Word) ((MR_hl_field(0, PS0_16, (MR_Integer) 10))));
        {
          PS_17 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PS_17, 0) = ((MR_Box) (Var_28));
          MR_hl_field(0, PS_17, 1) = ((MR_Box) (Var_29));
          MR_hl_field(0, PS_17, 2) = ((MR_Box) (Var_30));
          MR_hl_field(0, PS_17, 3) = ((MR_Box) (Var_31));
          MR_hl_field(0, PS_17, 4) = ((MR_Box) (Var_32));
          MR_hl_field(0, PS_17, 5) = ((MR_Box) (Var_33));
          MR_hl_field(0, PS_17, 6) = ((MR_Box) (Var_34));
          MR_hl_field(0, PS_17, 7) = (MR_Box) ((MR_Unsigned) (Var_35));
          MR_hl_field(0, PS_17, 8) = ((MR_Box) (Var_36));
          MR_hl_field(0, PS_17, 9) = ((MR_Box) (Var_37));
          MR_hl_field(0, PS_17, 10) = ((MR_Box) (Var_38));
          MR_hl_field(0, PS_17, 11) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        profile__update_proc_statics_4_p_0(PSPtr_15, PS_17, STATE_VARIABLE_ProcStatics_0_20, STATE_VARIABLE_ProcStatics_21);
      }
      break;
  }
}

static MR_bool MR_CALL 
startup__record_csd_containers_2_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = startup__IntroducedFrom__pred__record_csd_containers_2__505__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
startup__record_csd_containers_2_4_p_0(
  MR_Word PDPtr_1,
  MR_Word HeadVar__2_2,
  MR_ArrayPtr STATE_VARIABLE_CallSiteDynamics_0_3,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteDynamics_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CallSiteDynamics_4 = STATE_VARIABLE_CallSiteDynamics_0_3;
    else
    {
      MR_Word CSDPtr_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word CSDPtrs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word CSD0_13;
      MR_Word CallerPDPtr0_14;
      MR_Word CalleePDPtr_15;
      MR_Word Own_16;
      MR_Word CSD_17;
      MR_Word Var_20;
      MR_ArrayPtr STATE_VARIABLE_CallSiteDynamics_24_24;
      MR_Word next_value_of_HeadVar__2_2;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_CallSiteDynamics_0_3;

      profile__lookup_call_site_dynamics_3_p_0(STATE_VARIABLE_CallSiteDynamics_0_3, CSDPtr_10, &CSD0_13);
      CallerPDPtr0_14 = ((MR_Word) ((MR_hl_field(0, CSD0_13, (MR_Integer) 0))));
      CalleePDPtr_15 = ((MR_Word) ((MR_hl_field(0, CSD0_13, (MR_Integer) 1))));
      Own_16 = ((MR_Word) ((MR_hl_field(0, CSD0_13, (MR_Integer) 2))));
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_20, 0) = ((MR_Box) (&startup_scalar_common_9[3]));
        MR_hl_field(0, Var_20, 1) = ((MR_Box) (startup__record_csd_containers_2_4_p_0_1));
        MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_20, 3) = ((MR_Box) (CallerPDPtr0_14));
        MR_hl_field(0, Var_20, 4) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
      }
      mercury__require__require_2_p_0(Var_20, (MR_String) "record_csd_containers_2: real proc_dynamic_ptr");
      {
        CSD_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CSD_17, 0) = ((MR_Box) (PDPtr_1));
        MR_hl_field(0, CSD_17, 1) = ((MR_Box) (CalleePDPtr_15));
        MR_hl_field(0, CSD_17, 2) = ((MR_Box) (Own_16));
      }
      profile__update_call_site_dynamics_4_p_0(CSDPtr_10, CSD_17, STATE_VARIABLE_CallSiteDynamics_0_3, &STATE_VARIABLE_CallSiteDynamics_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = CSDPtrs_11;
      next_value_of_STATE_VARIABLE_CallSiteDynamics_0_3 = STATE_VARIABLE_CallSiteDynamics_24_24;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_CallSiteDynamics_0_3 = next_value_of_STATE_VARIABLE_CallSiteDynamics_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
startup__record_css_containers_module_procs_6_p_0(
  MR_Integer PSI_7,
  MR_Word PS_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStatics_0_16,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStatics_17,
  MR_Word STATE_VARIABLE_ModuleProcs_0_18,
  MR_Word * STATE_VARIABLE_ModuleProcs_19)
{
  MR_bool succeeded;
  MR_ArrayPtr CSSPtrs_11 = ((MR_ArrayPtr) ((MR_hl_field(0, PS_8, (MR_Integer) 8))));
  MR_Word PSPtr_12 = (MR_Word) (PSI_7);
  MR_Integer MaxCS_13;
  MR_String DeclModule_14;
  MR_Word PSPtrs0_15;
  MR_Box conv0_PSPtrs0_15;

  mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_ArrayPtr) (CSSPtrs_11), &MaxCS_13);
  startup__record_css_containers_2_5_p_0(MaxCS_13, PSPtr_12, CSSPtrs_11, STATE_VARIABLE_CallSiteStatics_0_16, STATE_VARIABLE_CallSiteStatics_17);
  DeclModule_14 = ((MR_String) ((MR_hl_field(0, PS_8, (MR_Integer) 1))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&startup_scalar_common_1[1]), STATE_VARIABLE_ModuleProcs_0_18, ((MR_Box) (DeclModule_14)), &conv0_PSPtrs0_15);
  if (succeeded)
  {
    PSPtrs0_15 = ((MR_Word) (conv0_PSPtrs0_15));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word Var_21;

    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (PSPtr_12));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (PSPtrs0_15));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&startup_scalar_common_1[1]), ((MR_Box) (DeclModule_14)), ((MR_Box) (Var_21)), STATE_VARIABLE_ModuleProcs_0_18, STATE_VARIABLE_ModuleProcs_19);
  }
  else
  {
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (PSPtr_12));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&startup_scalar_common_1[1]), ((MR_Box) (DeclModule_14)), ((MR_Box) (Var_23)), STATE_VARIABLE_ModuleProcs_0_18, STATE_VARIABLE_ModuleProcs_19);
  }
}

static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = startup__IntroducedFrom__pred__record_css_containers_2__464__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
startup__record_css_containers_2_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = startup__IntroducedFrom__pred__record_css_containers_2__462__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
startup__record_css_containers_2_5_p_0(
  MR_Integer SlotNum_6,
  MR_Word PSPtr_7,
  MR_ArrayPtr CSSPtrs_8,
  MR_ArrayPtr STATE_VARIABLE_CallSiteStatics_0_18,
  MR_ArrayPtr * STATE_VARIABLE_CallSiteStatics_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (SlotNum_6 >= (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word CSSPtr_10;
      MR_Word CSS0_11;
      MR_Word PSPtr0_12;
      MR_Integer SlotNum0_13;
      MR_Word Kind_14;
      MR_Integer LineNumber_15;
      MR_Word GoalPath_16;
      MR_Word CSS_17;
      MR_Word Var_21;
      MR_Word Var_25;
      MR_ArrayPtr STATE_VARIABLE_CallSiteStatics_28_28;
      MR_Integer Var_29;
      MR_Box conv0_CSSPtr_10;
      MR_Integer next_value_of_SlotNum_6;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_CallSiteStatics_0_18;

      mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), (MR_ArrayPtr) (CSSPtrs_8), SlotNum_6, &conv0_CSSPtr_10);
      CSSPtr_10 = ((MR_Word) (conv0_CSSPtr_10));
      profile__lookup_call_site_statics_3_p_0(STATE_VARIABLE_CallSiteStatics_0_18, CSSPtr_10, &CSS0_11);
      PSPtr0_12 = ((MR_Word) ((MR_hl_field(0, CSS0_11, (MR_Integer) 0))));
      SlotNum0_13 = ((MR_Integer) ((MR_hl_field(0, CSS0_11, (MR_Integer) 1))));
      Kind_14 = ((MR_Word) ((MR_hl_field(0, CSS0_11, (MR_Integer) 2))));
      LineNumber_15 = ((MR_Integer) ((MR_hl_field(0, CSS0_11, (MR_Integer) 3))));
      GoalPath_16 = ((MR_Word) ((MR_hl_field(0, CSS0_11, (MR_Integer) 4))));
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (&startup_scalar_common_9[1]));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (startup__record_css_containers_2_5_p_0_1));
        MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_21, 3) = ((MR_Box) (PSPtr0_12));
        MR_hl_field(0, Var_21, 4) = ((MR_Box) (((MR_Box) ((MR_Integer) -1))));
      }
      mercury__require__require_2_p_0(Var_21, (MR_String) "record_css_containers_2: real proc_static_ptr");
      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = ((MR_Box) (&startup_scalar_common_9[2]));
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (startup__record_css_containers_2_5_p_0_2));
        MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_25, 3) = ((MR_Box) (SlotNum0_13));
        MR_hl_field(0, Var_25, 4) = ((MR_Box) ((MR_Integer) -1));
      }
      mercury__require__require_2_p_0(Var_25, (MR_String) "record_css_containers_2: real slot_num");
      {
        CSS_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, CSS_17, 0) = ((MR_Box) (PSPtr_7));
        MR_hl_field(0, CSS_17, 1) = ((MR_Box) (SlotNum_6));
        MR_hl_field(0, CSS_17, 2) = ((MR_Box) (Kind_14));
        MR_hl_field(0, CSS_17, 3) = ((MR_Box) (LineNumber_15));
        MR_hl_field(0, CSS_17, 4) = ((MR_Box) (GoalPath_16));
      }
      profile__update_call_site_statics_4_p_0(CSSPtr_10, CSS_17, STATE_VARIABLE_CallSiteStatics_0_18, &STATE_VARIABLE_CallSiteStatics_28_28);
      Var_29 = (MR_Integer) ((MR_Unsigned) SlotNum_6 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_SlotNum_6 = Var_29;
      next_value_of_STATE_VARIABLE_CallSiteStatics_0_18 = STATE_VARIABLE_CallSiteStatics_28_28;
      SlotNum_6 = next_value_of_SlotNum_6;
      STATE_VARIABLE_CallSiteStatics_0_18 = next_value_of_STATE_VARIABLE_CallSiteStatics_0_18;
      continue;
    }
    else
      *STATE_VARIABLE_CallSiteStatics_19 = STATE_VARIABLE_CallSiteStatics_0_18;
    break;
  }
}

static void MR_CALL 
startup__ensure_module_has_module_data_3_p_0(
  MR_String Module_4,
  MR_Word STATE_VARIABLE_ModuleDataMap_0_8,
  MR_Word * STATE_VARIABLE_ModuleDataMap_9)
{
  MR_bool succeeded;
  MR_Box conv0_Var_6;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&profile__profile__type_ctor_info_module_data_0), STATE_VARIABLE_ModuleDataMap_0_8, ((MR_Box) (Module_4)), &conv0_Var_6);
  if (succeeded)
    succeeded = MR_TRUE;
  if (succeeded)
    *STATE_VARIABLE_ModuleDataMap_9 = STATE_VARIABLE_ModuleDataMap_0_8;
  else
  {
    MR_Word Data_7;
    MR_Word Var_10;
    MR_Word Var_11;

    Var_10 = measurements__zero_own_prof_info_0_f_0();
    Var_11 = measurements__zero_inherit_prof_info_0_f_0();
    {
      Data_7 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Data_7, 0) = ((MR_Box) (Var_10));
      MR_hl_field(0, Data_7, 1) = ((MR_Box) (Var_11));
      MR_hl_field(0, Data_7, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&profile__profile__type_ctor_info_module_data_0), ((MR_Box) (Module_4)), ((MR_Box) (Data_7)), STATE_VARIABLE_ModuleDataMap_0_8, STATE_VARIABLE_ModuleDataMap_9);
  }
}

static MR_Word MR_CALL 
startup__initialize_module_data_1_f_0(
  MR_Word PSPtrs_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Word Var_5;

  Var_4 = measurements__zero_own_prof_info_0_f_0();
  Var_5 = measurements__zero_inherit_prof_info_0_f_0();
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 2) = ((MR_Box) (PSPtrs_3));
  }
  return HeadVar__2_2;
}

void MR_CALL 
startup__read_and_startup_default_deep_options_9_p_0(
  MR_String Machine_10,
  MR_String ScriptName_11,
  MR_String DataFileName_12,
  MR_Word Canonical_13,
  MR_Word MaybeOutputStream_14,
  MR_Word DumpStages_15,
  MR_Word * Res_16)
{
  MR_Word Var_20;

  Var_20 = dump__default_dump_options_0_f_0();
  startup__read_and_startup_10_p_0(Machine_10, ScriptName_11, DataFileName_12, Canonical_13, MaybeOutputStream_14, DumpStages_15, Var_20, Res_16);
}

void MR_CALL 
startup__read_and_startup_10_p_0(
  MR_String Machine_11,
  MR_String ScriptName_12,
  MR_String DataFileName_13,
  MR_Word Canonical_14,
  MR_Word MaybeOutputStream_15,
  MR_Word DumpStages_16,
  MR_Word DumpOptions_17,
  MR_Word * Result_18)
{
  MR_Word DataFileResult_20;

  mdbcomp__shared_utilities__unlimit_stack_2_p_0();
  if ((MaybeOutputStream_15 == (MR_Word) ((MR_Unsigned) 0U)))
    read_profile__read_call_graph_4_p_0(DataFileName_13, &DataFileResult_20);
  else
  {
    MR_Word OutputStream_47 = ((MR_Word) ((MR_hl_field(1, MaybeOutputStream_15, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(OutputStream_47, (MR_String) "% Reading graph data...\n");
    mercury__io__flush_output_3_p_0(OutputStream_47);
    read_profile__read_call_graph_4_p_0(DataFileName_13, &DataFileResult_20);
    mercury__io__write_string_4_p_0(OutputStream_47, (MR_String) "% Done.\n");
    mercury__io__flush_output_3_p_0(OutputStream_47);
  }
  if (((MR_tag((MR_Word) DataFileResult_20)) == (MR_Integer) 1))
    *Result_18 = (MR_Word) (DataFileResult_20);
  else
  {
    MR_Word InitDeep_21 = ((MR_Word) ((MR_hl_field(0, DataFileResult_20, (MR_Integer) 0))));
    MR_Word Deep_22;

    startup__startup_11_p_0(Machine_11, ScriptName_12, DataFileName_13, Canonical_14, MaybeOutputStream_15, DumpStages_16, DumpOptions_17, InitDeep_21, &Deep_22);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_18 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Deep_22));
    }
  }
}

static void MR_CALL 
startup__startup_11_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv40_STATE_VARIABLE_Deep_17;

  startup__propagate_to_clique_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv40_STATE_VARIABLE_Deep_17);
  *wrapper_arg_4 = ((MR_Box) (conv40_STATE_VARIABLE_Deep_17));
}

static void MR_CALL 
startup__startup_11_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv31_STATE_VARIABLE_PDOwnArray_14;

  startup__sum_call_sites_in_proc_dynamic_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv31_STATE_VARIABLE_PDOwnArray_14);
  *wrapper_arg_4 = ((MR_Box) (conv31_STATE_VARIABLE_PDOwnArray_14));
}

static void MR_CALL 
startup__startup_11_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv27_STATE_VARIABLE_ModuleDataMap_9;

  startup__ensure_module_has_module_data_3_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv27_STATE_VARIABLE_ModuleDataMap_9);
  *wrapper_arg_3 = ((MR_Box) (conv27_STATE_VARIABLE_ModuleDataMap_9));
}

static void MR_CALL 
startup__startup_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv25_STATE_VARIABLE_CallSiteCalls_19;

  startup__construct_call_site_calls_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv25_STATE_VARIABLE_CallSiteCalls_19);
  *wrapper_arg_4 = ((MR_Box) (conv25_STATE_VARIABLE_CallSiteCalls_19));
}

static void MR_CALL 
startup__startup_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv22_STATE_VARIABLE_CallSiteStaticMap_16;

  startup__construct_call_site_caller_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv22_STATE_VARIABLE_CallSiteStaticMap_16);
  *wrapper_arg_4 = ((MR_Box) (conv22_STATE_VARIABLE_CallSiteStaticMap_16));
}

static void MR_CALL 
startup__startup_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv19_STATE_VARIABLE_ProcCallers_16;

  startup__construct_proc_callers_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv19_STATE_VARIABLE_ProcCallers_16);
  *wrapper_arg_4 = ((MR_Box) (conv19_STATE_VARIABLE_ProcCallers_16));
}

static void MR_CALL 
startup__startup_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv15_STATE_VARIABLE_CliqueParents_17;
  MR_ArrayPtr conv14_STATE_VARIABLE_CliqueMaybeChildren_19;

  startup__construct_clique_parents_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv15_STATE_VARIABLE_CliqueParents_17, ((MR_ArrayPtr) (wrapper_arg_5)), &conv14_STATE_VARIABLE_CliqueMaybeChildren_19);
  *wrapper_arg_4 = ((MR_Box) (conv15_STATE_VARIABLE_CliqueParents_17));
  *wrapper_arg_6 = ((MR_Box) (conv14_STATE_VARIABLE_CliqueMaybeChildren_19));
}

static void MR_CALL 
startup__startup_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv7_STATE_VARIABLE_CallSiteDynamics_19;
  MR_ArrayPtr conv6_STATE_VARIABLE_ProcStatics_21;

  startup__record_csd_containers_zeroed_pss_6_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv7_STATE_VARIABLE_CallSiteDynamics_19, ((MR_ArrayPtr) (wrapper_arg_5)), &conv6_STATE_VARIABLE_ProcStatics_21);
  *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_CallSiteDynamics_19));
  *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_ProcStatics_21));
}

static MR_Box MR_CALL 
startup__startup_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_2;

  conv5_HeadVar__2_2 = startup__initialize_module_data_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
startup__startup_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv1_STATE_VARIABLE_CallSiteStatics_17;
  MR_Word conv0_STATE_VARIABLE_ModuleProcs_19;

  startup__record_css_containers_module_procs_6_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv1_STATE_VARIABLE_CallSiteStatics_17, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_ModuleProcs_19);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_CallSiteStatics_17));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleProcs_19));
}

static void MR_CALL 
startup__startup_11_p_0(
  MR_String Machine_12,
  MR_String ScriptName_13,
  MR_String DataFileName_14,
  MR_Word Canonical_15,
  MR_Word MaybeOutputStream_16,
  MR_Word DumpStages_17,
  MR_Word DumpOptions_18,
  MR_Word InitDeep0_19,
  MR_Word * STATE_VARIABLE_Deep_93)
{
  MR_Word InitStats_22 = ((MR_Word) ((MR_hl_field(0, InitDeep0_19, (MR_Integer) 0))));
  MR_Word Root_23 = ((MR_Word) ((MR_hl_field(0, InitDeep0_19, (MR_Integer) 1))));
  MR_ArrayPtr CallSiteDynamics0_24 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_19, (MR_Integer) 2))));
  MR_ArrayPtr ProcDynamics_25 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_19, (MR_Integer) 3))));
  MR_ArrayPtr CallSiteStatics0_26 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_19, (MR_Integer) 4))));
  MR_ArrayPtr ProcStatics0_27 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep0_19, (MR_Integer) 5))));
  MR_ArrayPtr CallSiteStatics_28;
  MR_Word ModuleProcs_29;
  MR_Word ModuleDataMap0_30;
  MR_ArrayPtr CallSiteDynamics_31;
  MR_ArrayPtr ProcStatics_32;
  MR_Word InitDeep1_33;
  MR_Word InitDeep_34;
  MR_Integer PDMax_35;
  MR_Integer NPDs_36;
  MR_Integer CSDMax_37;
  MR_Integer NCSDs_38;
  MR_Integer PSMax_39;
  MR_Integer NPSs_40;
  MR_Integer CSSMax_41;
  MR_Integer NCSSs_42;
  MR_Word CliqueList_43;
  MR_ArrayPtr Cliques_44;
  MR_ArrayPtr CliqueIndex_45;
  MR_Integer CliqueMax_46;
  MR_Integer NCliques_47;
  MR_ArrayPtr CliqueParents0_48;
  MR_ArrayPtr CliqueMaybeChildren0_49;
  MR_ArrayPtr CliqueParents_50;
  MR_ArrayPtr CliqueMaybeChildren_51;
  MR_ArrayPtr ProcCallers0_52;
  MR_ArrayPtr ProcCallers_53;
  MR_ArrayPtr CallSiteStaticMap0_54;
  MR_ArrayPtr CallSiteStaticMap_55;
  MR_ArrayPtr CallSiteCalls0_56;
  MR_ArrayPtr CallSiteCalls_57;
  MR_String ProgRepFileName_58;
  MR_Word ProgRepResult_59;
  MR_Word MaybeProcRepFile_61;
  MR_Word ModuleDataMap_65;
  MR_String ContourFileName_71;
  MR_String TryMsg_72;
  MR_Word ExcludeFile_73;
  MR_Word ExcludeContents_75;
  MR_ArrayPtr CSDDesc0_80;
  MR_ArrayPtr PDOwn0_81;
  MR_ArrayPtr PDOwn_82;
  MR_ArrayPtr PDDesc0_83;
  MR_ArrayPtr PSOwn0_84;
  MR_ArrayPtr PSDesc0_85;
  MR_ArrayPtr CSSOwn0_86;
  MR_ArrayPtr CSSDesc0_87;
  MR_ArrayPtr PDCompTable0_88;
  MR_ArrayPtr CSDCompTable0_89;
  MR_Word CoverageDataType_90;
  MR_Word Var_99;
  MR_ArrayPtr Var_103;
  MR_Word Var_104;
  MR_ArrayPtr Var_112;
  MR_ArrayPtr Var_113;
  MR_ArrayPtr Var_128;
  MR_ArrayPtr Var_130;
  MR_ArrayPtr Var_132;
  MR_ArrayPtr Var_134;
  MR_Word Var_152;
  MR_Word Var_159;
  MR_Word Var_167;
  MR_Word Var_173;
  MR_Word Var_174;
  MR_Word Var_212;
  MR_Word Var_213;
  MR_Word Var_215;
  MR_Word Var_216;
  MR_Word Var_217;
  MR_Word Var_218;
  MR_Word Var_219;
  MR_Word Var_220;
  MR_Word Var_221;
  MR_Word Var_222;
  MR_Word STATE_VARIABLE_Deep_240_240;
  MR_Word STATE_VARIABLE_Deep_246_246;
  MR_String Var_379;
  MR_Box conv2_Var_103;
  MR_Box conv4_CallSiteStatics_28;
  MR_Box conv3_ModuleProcs_29;
  MR_Box conv8_Var_112;
  MR_Box conv9_Var_113;
  MR_Box conv11_CallSiteDynamics_31;
  MR_Box conv10_ProcStatics_32;
  MR_ArrayPtr conv12_CliqueParents0_48;
  MR_ArrayPtr conv13_CliqueMaybeChildren0_49;
  MR_Box conv17_CliqueParents_50;
  MR_Box conv16_CliqueMaybeChildren_51;
  MR_ArrayPtr conv18_ProcCallers0_52;
  MR_Box conv20_ProcCallers_53;
  MR_ArrayPtr conv21_CallSiteStaticMap0_54;
  MR_Box conv23_CallSiteStaticMap_55;
  MR_ArrayPtr conv24_CallSiteCalls0_56;
  MR_Box conv26_CallSiteCalls_57;
  MR_ArrayPtr conv29_CSDDesc0_80;
  MR_ArrayPtr conv30_PDOwn0_81;
  MR_Box conv32_PDOwn_82;
  MR_ArrayPtr conv33_PDDesc0_83;
  MR_ArrayPtr conv34_PSOwn0_84;
  MR_ArrayPtr conv35_PSDesc0_85;
  MR_ArrayPtr conv36_CSSOwn0_86;
  MR_ArrayPtr conv37_CSSDesc0_87;
  MR_ArrayPtr conv38_PDCompTable0_88;
  MR_ArrayPtr conv39_CSDCompTable0_89;

  Var_99 = dump__default_dump_options_0_f_0();
  startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_55_93_95_48_7_p_0(InitDeep0_19, Var_99, MaybeOutputStream_16, DataFileName_14, DumpStages_17, (MR_Integer) 0);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Mapping static call sites to containing procedures...\n");
  conv2_Var_103 = array_util__u_1_f_0((MR_Word) (&startup_scalar_common_1[0]), ((MR_Box) (CallSiteStatics0_26)));
  Var_103 = ((MR_ArrayPtr) (conv2_Var_103));
  Var_104 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&startup_scalar_common_1[1]));
  array_util__array_foldl2_from_1_6_p_1((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), (MR_Word) (&startup_scalar_common_1[0]), (MR_Word) (&startup_scalar_common_2[0]), (MR_Word) (&startup_scalar_common_2[5]), (MR_ArrayPtr) (ProcStatics0_27), ((MR_Box) (Var_103)), &conv4_CallSiteStatics_28, ((MR_Box) (Var_104)), &conv3_ModuleProcs_29);
  CallSiteStatics_28 = ((MR_ArrayPtr) (conv4_CallSiteStatics_28));
  ModuleProcs_29 = ((MR_Word) (conv3_ModuleProcs_29));
  ModuleDataMap0_30 = mercury__map__map_values_only_2_f_0((MR_Word) (&startup_scalar_common_1[1]), (MR_Word) (&profile__profile__type_ctor_info_module_data_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&startup_scalar_common_2[6]), ModuleProcs_29);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Done.\n");
  startup__maybe_report_stats_3_p_0(MaybeOutputStream_16);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Mapping dynamic call sites to containing procedures...\n");
  conv8_Var_112 = array_util__u_1_f_0((MR_Word) (&startup_scalar_common_1[2]), ((MR_Box) (CallSiteDynamics0_24)));
  Var_112 = ((MR_ArrayPtr) (conv8_Var_112));
  conv9_Var_113 = array_util__u_1_f_0((MR_Word) (&startup_scalar_common_1[3]), ((MR_Box) (ProcStatics0_27)));
  Var_113 = ((MR_ArrayPtr) (conv9_Var_113));
  array_util__array_foldl2_from_1_6_p_1((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_Word) (&startup_scalar_common_1[2]), (MR_Word) (&startup_scalar_common_1[3]), (MR_Word) (&startup_scalar_common_2[7]), (MR_ArrayPtr) (ProcDynamics_25), ((MR_Box) (Var_112)), &conv11_CallSiteDynamics_31, ((MR_Box) (Var_113)), &conv10_ProcStatics_32);
  CallSiteDynamics_31 = ((MR_ArrayPtr) (conv11_CallSiteDynamics_31));
  ProcStatics_32 = ((MR_ArrayPtr) (conv10_ProcStatics_32));
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Done.\n");
  startup__maybe_report_stats_3_p_0(MaybeOutputStream_16);
  {
    InitDeep1_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, InitDeep1_33, 0) = ((MR_Box) (InitStats_22));
    MR_hl_field(0, InitDeep1_33, 1) = ((MR_Box) (Root_23));
    MR_hl_field(0, InitDeep1_33, 2) = ((MR_Box) (CallSiteDynamics_31));
    MR_hl_field(0, InitDeep1_33, 3) = ((MR_Box) (ProcDynamics_25));
    MR_hl_field(0, InitDeep1_33, 4) = ((MR_Box) (CallSiteStatics_28));
    MR_hl_field(0, InitDeep1_33, 5) = ((MR_Box) (ProcStatics_32));
  }
  startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_55_93_95_48_7_p_0(InitDeep1_33, DumpOptions_18, MaybeOutputStream_16, DataFileName_14, DumpStages_17, (MR_Integer) 10);
  switch (Canonical_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      InitDeep_34 = InitDeep1_33;
      break;
    case (MR_Integer) 1:
      {
        startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Canonicalizing cliques...\n");
        canonical__canonicalize_cliques_2_p_0(InitDeep1_33, &InitDeep_34);
        startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Done.\n");
        startup__maybe_report_stats_3_p_0(MaybeOutputStream_16);
      }
      break;
  }
  startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_55_93_95_48_7_p_0(InitDeep_34, DumpOptions_18, MaybeOutputStream_16, DataFileName_14, DumpStages_17, (MR_Integer) 20);
  Var_128 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_34, (MR_Integer) 3))));
  mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_ArrayPtr) (Var_128), &PDMax_35);
  NPDs_36 = (MR_Integer) ((MR_Unsigned) PDMax_35 + (MR_Unsigned) 1);
  Var_130 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_34, (MR_Integer) 2))));
  mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (Var_130), &CSDMax_37);
  NCSDs_38 = (MR_Integer) ((MR_Unsigned) CSDMax_37 + (MR_Unsigned) 1);
  Var_132 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_34, (MR_Integer) 5))));
  mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), (MR_ArrayPtr) (Var_132), &PSMax_39);
  NPSs_40 = (MR_Integer) ((MR_Unsigned) PSMax_39 + (MR_Unsigned) 1);
  Var_134 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_34, (MR_Integer) 4))));
  mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_0), (MR_ArrayPtr) (Var_134), &CSSMax_41);
  NCSSs_42 = (MR_Integer) ((MR_Unsigned) CSSMax_41 + (MR_Unsigned) 1);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Finding cliques...\n");
  callgraph__find_cliques_2_p_0(InitDeep_34, &CliqueList_43);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Done.\n");
  startup__maybe_report_stats_3_p_0(MaybeOutputStream_16);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Constructing clique indexes...\n");
  callgraph__make_clique_indexes_4_p_0(NPDs_36, CliqueList_43, &Cliques_44, &CliqueIndex_45);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Done.\n");
  startup__maybe_report_stats_3_p_0(MaybeOutputStream_16);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Constructing clique parent map...\n");
  mercury__array__max_2_p_0((MR_Word) (&startup_scalar_common_1[4]), (MR_ArrayPtr) (Cliques_44), &CliqueMax_46);
  NCliques_47 = (MR_Integer) ((MR_Unsigned) CliqueMax_46 + (MR_Unsigned) 1);
  mercury__array__init_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), NCliques_47, ((MR_Box) (((MR_Box) ((MR_Integer) -1)))), &conv12_CliqueParents0_48);
  CliqueParents0_48 = (MR_ArrayPtr) (conv12_CliqueParents0_48);
  mercury__array__init_3_p_0((MR_Word) (&startup_scalar_common_1[5]), NCSDs_38, ((MR_Box) ((MR_Unsigned) 0U)), &conv13_CliqueMaybeChildren0_49);
  CliqueMaybeChildren0_49 = (MR_ArrayPtr) (conv13_CliqueMaybeChildren0_49);
  {
    Var_152 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_152, 0) = ((MR_Box) (&startup_scalar_common_10[0]));
    MR_hl_field(0, Var_152, 1) = ((MR_Box) (startup__startup_11_p_0_4));
    MR_hl_field(0, Var_152, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_152, 3) = ((MR_Box) (InitDeep_34));
    MR_hl_field(0, Var_152, 4) = ((MR_Box) (CliqueIndex_45));
  }
  array_util__array_foldl2_from_1_6_p_1((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), (MR_Word) (&startup_scalar_common_1[6]), (MR_Word) (&startup_scalar_common_1[7]), Var_152, (MR_ArrayPtr) (CliqueIndex_45), ((MR_Box) (CliqueParents0_48)), &conv17_CliqueParents_50, ((MR_Box) (CliqueMaybeChildren0_49)), &conv16_CliqueMaybeChildren_51);
  CliqueParents_50 = ((MR_ArrayPtr) (conv17_CliqueParents_50));
  CliqueMaybeChildren_51 = ((MR_ArrayPtr) (conv16_CliqueMaybeChildren_51));
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Done.\n");
  startup__maybe_report_stats_3_p_0(MaybeOutputStream_16);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Finding procedure callers...\n");
  mercury__array__init_3_p_0((MR_Word) (&startup_scalar_common_1[8]), NPSs_40, ((MR_Box) ((MR_Unsigned) 0U)), &conv18_ProcCallers0_52);
  ProcCallers0_52 = (MR_ArrayPtr) (conv18_ProcCallers0_52);
  {
    Var_159 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_159, 0) = ((MR_Box) (&startup_scalar_common_11[0]));
    MR_hl_field(0, Var_159, 1) = ((MR_Box) (startup__startup_11_p_0_5));
    MR_hl_field(0, Var_159, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_159, 3) = ((MR_Box) (InitDeep_34));
  }
  array_util__array_foldl_from_1_4_p_1((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_Word) (&startup_scalar_common_1[9]), Var_159, (MR_ArrayPtr) (CallSiteDynamics_31), ((MR_Box) (ProcCallers0_52)), &conv20_ProcCallers_53);
  ProcCallers_53 = ((MR_ArrayPtr) (conv20_ProcCallers_53));
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Done.\n");
  startup__maybe_report_stats_3_p_0(MaybeOutputStream_16);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Constructing call site static map...\n");
  mercury__array__init_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_static_ptr_0), NCSDs_38, ((MR_Box) (((MR_Box) ((MR_Integer) -1)))), &conv21_CallSiteStaticMap0_54);
  CallSiteStaticMap0_54 = (MR_ArrayPtr) (conv21_CallSiteStaticMap0_54);
  {
    Var_167 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_167, 0) = ((MR_Box) (&startup_scalar_common_11[1]));
    MR_hl_field(0, Var_167, 1) = ((MR_Box) (startup__startup_11_p_0_6));
    MR_hl_field(0, Var_167, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_167, 3) = ((MR_Box) (InitDeep_34));
  }
  array_util__array_foldl_from_1_4_p_1((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_Word) (&startup_scalar_common_1[10]), Var_167, (MR_ArrayPtr) (ProcDynamics_25), ((MR_Box) (CallSiteStaticMap0_54)), &conv23_CallSiteStaticMap_55);
  CallSiteStaticMap_55 = ((MR_ArrayPtr) (conv23_CallSiteStaticMap_55));
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Done.\n");
  startup__maybe_report_stats_3_p_0(MaybeOutputStream_16);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Finding call site calls...\n");
  Var_173 = mercury__map__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&startup_scalar_common_1[8]));
  mercury__array__init_3_p_0((MR_Word) (&startup_scalar_common_2[1]), NCSSs_42, ((MR_Box) (Var_173)), &conv24_CallSiteCalls0_56);
  CallSiteCalls0_56 = (MR_ArrayPtr) (conv24_CallSiteCalls0_56);
  {
    Var_174 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_174, 0) = ((MR_Box) (&startup_scalar_common_11[2]));
    MR_hl_field(0, Var_174, 1) = ((MR_Box) (startup__startup_11_p_0_7));
    MR_hl_field(0, Var_174, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_174, 3) = ((MR_Box) (InitDeep_34));
  }
  array_util__array_foldl_from_1_4_p_1((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_Word) (&startup_scalar_common_1[11]), Var_174, (MR_ArrayPtr) (ProcDynamics_25), ((MR_Box) (CallSiteCalls0_56)), &conv26_CallSiteCalls_57);
  CallSiteCalls_57 = ((MR_ArrayPtr) (conv26_CallSiteCalls_57));
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Done.\n");
  startup__maybe_report_stats_3_p_0(MaybeOutputStream_16);
  ProgRepFileName_58 = startup__make_progrep_filename_1_f_0(DataFileName_14);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Reading program representation...\n");
  mdbcomp__program_representation__read_prog_rep_file_4_p_0(ProgRepFileName_58, &ProgRepResult_59);
  if (((MR_tag((MR_Word) ProgRepResult_59)) == (MR_Integer) 1))
  {
    MR_Word Error_66 = ((MR_Word) ((MR_hl_field(1, ProgRepResult_59, (MR_Integer) 0))));
    MR_Word OpenProgRepResult_67;

    mercury__io__open_input_4_p_0(ProgRepFileName_58, &OpenProgRepResult_67);
    if (((MR_tag((MR_Word) OpenProgRepResult_67)) == (MR_Integer) 1))
    {
      MaybeProcRepFile_61 = (MR_Word) ((MR_Unsigned) 0U);
      ModuleDataMap_65 = ModuleDataMap0_30;
    }
    else
    {
      MR_Word ProgRepStream_68 = ((MR_Word) ((MR_hl_field(0, OpenProgRepResult_67, (MR_Integer) 0))));
      MR_String ErrorMessage_69;
      MR_String Var_189;
      MR_String Var_192;
      MR_Word Var_194;

      mercury__io__close_input_3_p_0(ProgRepStream_68);
      ErrorMessage_69 = mercury__io__error_message_1_f_0(Error_66);
      Var_192 = mercury__string__f_43_43_2_f_0(ErrorMessage_69, (MR_String) "\n");
      Var_189 = mercury__string__f_43_43_2_f_0((MR_String) "% Error: ", Var_192);
      startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, Var_189);
      {
        Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_194, 0) = ((MR_Box) (ErrorMessage_69));
      }
      {
        MaybeProcRepFile_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeProcRepFile_61, 0) = ((MR_Box) (Var_194));
      }
      ModuleDataMap_65 = ModuleDataMap0_30;
    }
  }
  else
  {
    MR_Word ProgRep_60 = ((MR_Word) ((MR_hl_field(0, ProgRepResult_59, (MR_Integer) 0))));
    MR_Word ModuleMap_62;
    MR_Word ProgRepModules_63;
    MR_Word Var_183;
    MR_Box conv28_ModuleDataMap_65;

    startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Done.\n");
    {
      Var_183 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_183, 0) = ((MR_Box) (ProgRep_60));
    }
    {
      MaybeProcRepFile_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeProcRepFile_61, 0) = ((MR_Box) (Var_183));
    }
    ModuleMap_62 = (MR_Word) (ProgRep_60);
    mercury__map__keys_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&startup_scalar_common_1[12]), ModuleMap_62, &ProgRepModules_63);
    if (!((MaybeOutputStream_16 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word OutputStream_64 = ((MR_Word) ((MR_hl_field(1, MaybeOutputStream_16, (MR_Integer) 0))));

      mercury__io__write_4_p_0((MR_Word) (&startup_scalar_common_1[13]), OutputStream_64, ((MR_Box) (ProgRepModules_63)));
      mercury__io__nl_3_p_0(OutputStream_64);
    }
    mercury__list__foldl_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&startup_scalar_common_2[2]), (MR_Word) (&startup_scalar_common_2[8]), ProgRepModules_63, ((MR_Box) (ModuleDataMap0_30)), &conv28_ModuleDataMap_65);
    ModuleDataMap_65 = ((MR_Word) (conv28_ModuleDataMap_65));
  }
  ContourFileName_71 = startup__contour_file_name_1_f_0(DataFileName_14);
  Var_379 = mercury__string__f_43_43_2_f_0(ContourFileName_71, (MR_String) "\'...\n");
  TryMsg_72 = mercury__string__f_43_43_2_f_0((MR_String) "% Trying to read contour exclusion file \140", Var_379);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, TryMsg_72);
  exclude__read_exclude_file_5_p_0(ContourFileName_71, ModuleDataMap_65, &ExcludeFile_73);
  ExcludeContents_75 = ((MR_Word) ((MR_hl_field(0, ExcludeFile_73, (MR_Integer) 1))));
  switch (MR_tag((MR_Word) ExcludeContents_75)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Couldn\'t open file.\n");
      break;
    case (MR_Integer) 1:
      {
        MR_String ExcludeError_76 = ((MR_String) ((MR_hl_field(1, ExcludeContents_75, (MR_Integer) 0))));
        MR_String ExcludeErrorMsg_77;
        MR_String Var_382;

        Var_382 = mercury__string__f_43_43_2_f_0(ExcludeError_76, (MR_String) ".\n");
        ExcludeErrorMsg_77 = mercury__string__f_43_43_2_f_0((MR_String) "% File had unrecoverable errors:\n% ", Var_382);
        startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, ExcludeErrorMsg_77);
      }
      break;
    case (MR_Integer) 2:
      startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Done.\n");
      break;
  }
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Propagating measurements up call graph...\n");
  Var_212 = measurements__zero_inherit_prof_info_0_f_0();
  mercury__array__init_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), NCSDs_38, ((MR_Box) (Var_212)), &conv29_CSDDesc0_80);
  CSDDesc0_80 = (MR_ArrayPtr) (conv29_CSDDesc0_80);
  Var_213 = measurements__zero_own_prof_info_0_f_0();
  mercury__array__init_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), NPDs_36, ((MR_Box) (Var_213)), &conv30_PDOwn0_81);
  PDOwn0_81 = (MR_ArrayPtr) (conv30_PDOwn0_81);
  array_util__array_foldl_from_1_4_p_1((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_Word) (&startup_scalar_common_1[14]), (MR_Word) (&startup_scalar_common_2[9]), (MR_ArrayPtr) (CallSiteDynamics_31), ((MR_Box) (PDOwn0_81)), &conv32_PDOwn_82);
  PDOwn_82 = ((MR_ArrayPtr) (conv32_PDOwn_82));
  Var_215 = measurements__zero_inherit_prof_info_0_f_0();
  mercury__array__init_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), NPDs_36, ((MR_Box) (Var_215)), &conv33_PDDesc0_83);
  PDDesc0_83 = (MR_ArrayPtr) (conv33_PDDesc0_83);
  Var_216 = measurements__zero_own_prof_info_0_f_0();
  mercury__array__init_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), NPSs_40, ((MR_Box) (Var_216)), &conv34_PSOwn0_84);
  PSOwn0_84 = (MR_ArrayPtr) (conv34_PSOwn0_84);
  Var_217 = measurements__zero_inherit_prof_info_0_f_0();
  mercury__array__init_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), NPSs_40, ((MR_Box) (Var_217)), &conv35_PSDesc0_85);
  PSDesc0_85 = (MR_ArrayPtr) (conv35_PSDesc0_85);
  Var_218 = measurements__zero_own_prof_info_0_f_0();
  mercury__array__init_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), NCSSs_42, ((MR_Box) (Var_218)), &conv36_CSSOwn0_86);
  CSSOwn0_86 = (MR_ArrayPtr) (conv36_CSSOwn0_86);
  Var_219 = measurements__zero_inherit_prof_info_0_f_0();
  mercury__array__init_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), NCSSs_42, ((MR_Box) (Var_219)), &conv37_CSSDesc0_87);
  CSSDesc0_87 = (MR_ArrayPtr) (conv37_CSSDesc0_87);
  Var_220 = mercury__map__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0));
  mercury__array__init_3_p_0((MR_Word) (&startup_scalar_common_2[3]), NPDs_36, ((MR_Box) (Var_220)), &conv38_PDCompTable0_88);
  PDCompTable0_88 = (MR_ArrayPtr) (conv38_PDCompTable0_88);
  Var_221 = mercury__map__init_0_f_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_ptr_0), (MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0));
  mercury__array__init_3_p_0((MR_Word) (&startup_scalar_common_2[3]), NCSDs_38, ((MR_Box) (Var_221)), &conv39_CSDCompTable0_89);
  CSDCompTable0_89 = (MR_ArrayPtr) (conv39_CSDCompTable0_89);
  Var_222 = ((MR_Word) ((MR_hl_field(0, InitStats_22, (MR_Integer) 9))));
  CoverageDataType_90 = ((MR_Unsigned) ((MR_hl_field(0, Var_222, (MR_Integer) 3))) & (MR_Integer) 3);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Done.\n");
  startup__maybe_report_stats_3_p_0(MaybeOutputStream_16);
  switch (CoverageDataType_90) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        MR_Word MaybeStaticCoverage0_91;
        MR_ArrayPtr StaticCoverage0_92;
        MR_Word Var_223;
        MR_Word STATE_VARIABLE_Deep_224_224;
        MR_Word STATE_VARIABLE_Deep_226_226;
        MR_ArrayPtr conv41_StaticCoverage0_92;
        MR_Box conv42_STATE_VARIABLE_Deep_226_226;

        Var_223 = measurements__zero_static_coverage_0_f_0();
        mercury__array__init_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_static_coverage_info_0), NPSs_40, ((MR_Box) (Var_223)), &conv41_StaticCoverage0_92);
        StaticCoverage0_92 = (MR_ArrayPtr) (conv41_StaticCoverage0_92);
        {
          MaybeStaticCoverage0_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeStaticCoverage0_91, 0) = ((MR_Box) (StaticCoverage0_92));
        }
        {
          STATE_VARIABLE_Deep_224_224 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 0) = ((MR_Box) (InitStats_22));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 1) = ((MR_Box) (Machine_12));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 2) = ((MR_Box) (ScriptName_13));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 3) = ((MR_Box) (DataFileName_14));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 4) = ((MR_Box) (Root_23));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 5) = ((MR_Box) (CallSiteDynamics_31));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 6) = ((MR_Box) (ProcDynamics_25));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 7) = ((MR_Box) (CallSiteStatics_28));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 8) = ((MR_Box) (ProcStatics_32));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 9) = ((MR_Box) (CliqueIndex_45));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 10) = ((MR_Box) (Cliques_44));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 11) = ((MR_Box) (CliqueParents_50));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 12) = ((MR_Box) (CliqueMaybeChildren_51));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 13) = ((MR_Box) (ProcCallers_53));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 14) = ((MR_Box) (CallSiteStaticMap_55));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 15) = ((MR_Box) (CallSiteCalls_57));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 16) = ((MR_Box) (PDOwn_82));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 17) = ((MR_Box) (PDDesc0_83));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 18) = ((MR_Box) (CSDDesc0_80));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 19) = ((MR_Box) (PSOwn0_84));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 20) = ((MR_Box) (PSDesc0_85));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 21) = ((MR_Box) (CSSOwn0_86));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 22) = ((MR_Box) (CSSDesc0_87));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 23) = ((MR_Box) (PDCompTable0_88));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 24) = ((MR_Box) (CSDCompTable0_89));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 25) = ((MR_Box) (ModuleDataMap_65));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 26) = ((MR_Box) (MaybeStaticCoverage0_91));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 27) = ((MR_Box) (ExcludeFile_73));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 28) = ((MR_Box) (MaybeProcRepFile_61));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_224, 29) = ((MR_Box) (MaybeOutputStream_16));
        }
        array_util__array_foldl_from_1_4_p_1((MR_Word) (&startup_scalar_common_1[4]), (MR_Word) (&profile__profile__type_ctor_info_deep_0), (MR_Word) (&startup_scalar_common_2[10]), (MR_ArrayPtr) (Cliques_44), ((MR_Box) (STATE_VARIABLE_Deep_224_224)), &conv42_STATE_VARIABLE_Deep_226_226);
        STATE_VARIABLE_Deep_226_226 = ((MR_Word) (conv42_STATE_VARIABLE_Deep_226_226));
        startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_55_93_95_48_7_p_0(STATE_VARIABLE_Deep_226_226, DumpOptions_18, MaybeOutputStream_16, DataFileName_14, DumpStages_17, (MR_Integer) 30);
        startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Summarizing information...\n");
        startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "\t% Summarizing proc dynamics with coverage...\n");
        startup__summarize_proc_dynamics_with_coverage_data_2_p_0(STATE_VARIABLE_Deep_226_226, &STATE_VARIABLE_Deep_240_240);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_Deep_237_385;
        MR_Word MaybeStaticCoverage0_398;
        MR_ArrayPtr StaticCoverage0_399;
        MR_Word Var_400;
        MR_Word STATE_VARIABLE_Deep_224_401;
        MR_Word STATE_VARIABLE_Deep_226_402;
        MR_ArrayPtr conv43_StaticCoverage0_399;
        MR_Box conv44_STATE_VARIABLE_Deep_226_402;

        Var_400 = measurements__zero_static_coverage_0_f_0();
        mercury__array__init_3_p_0((MR_Word) (&measurements__measurements__type_ctor_info_static_coverage_info_0), NPSs_40, ((MR_Box) (Var_400)), &conv43_StaticCoverage0_399);
        StaticCoverage0_399 = (MR_ArrayPtr) (conv43_StaticCoverage0_399);
        {
          MaybeStaticCoverage0_398 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeStaticCoverage0_398, 0) = ((MR_Box) (StaticCoverage0_399));
        }
        {
          STATE_VARIABLE_Deep_224_401 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 0) = ((MR_Box) (InitStats_22));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 1) = ((MR_Box) (Machine_12));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 2) = ((MR_Box) (ScriptName_13));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 3) = ((MR_Box) (DataFileName_14));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 4) = ((MR_Box) (Root_23));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 5) = ((MR_Box) (CallSiteDynamics_31));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 6) = ((MR_Box) (ProcDynamics_25));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 7) = ((MR_Box) (CallSiteStatics_28));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 8) = ((MR_Box) (ProcStatics_32));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 9) = ((MR_Box) (CliqueIndex_45));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 10) = ((MR_Box) (Cliques_44));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 11) = ((MR_Box) (CliqueParents_50));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 12) = ((MR_Box) (CliqueMaybeChildren_51));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 13) = ((MR_Box) (ProcCallers_53));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 14) = ((MR_Box) (CallSiteStaticMap_55));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 15) = ((MR_Box) (CallSiteCalls_57));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 16) = ((MR_Box) (PDOwn_82));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 17) = ((MR_Box) (PDDesc0_83));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 18) = ((MR_Box) (CSDDesc0_80));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 19) = ((MR_Box) (PSOwn0_84));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 20) = ((MR_Box) (PSDesc0_85));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 21) = ((MR_Box) (CSSOwn0_86));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 22) = ((MR_Box) (CSSDesc0_87));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 23) = ((MR_Box) (PDCompTable0_88));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 24) = ((MR_Box) (CSDCompTable0_89));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 25) = ((MR_Box) (ModuleDataMap_65));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 26) = ((MR_Box) (MaybeStaticCoverage0_398));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 27) = ((MR_Box) (ExcludeFile_73));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 28) = ((MR_Box) (MaybeProcRepFile_61));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_401, 29) = ((MR_Box) (MaybeOutputStream_16));
        }
        array_util__array_foldl_from_1_4_p_1((MR_Word) (&startup_scalar_common_1[4]), (MR_Word) (&profile__profile__type_ctor_info_deep_0), (MR_Word) (&startup_scalar_common_2[10]), (MR_ArrayPtr) (Cliques_44), ((MR_Box) (STATE_VARIABLE_Deep_224_401)), &conv44_STATE_VARIABLE_Deep_226_402);
        STATE_VARIABLE_Deep_226_402 = ((MR_Word) (conv44_STATE_VARIABLE_Deep_226_402));
        startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_55_93_95_48_7_p_0(STATE_VARIABLE_Deep_226_402, DumpOptions_18, MaybeOutputStream_16, DataFileName_14, DumpStages_17, (MR_Integer) 30);
        startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Summarizing information...\n");
        startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "\t% Summarizing static coverage...\n");
        startup__summarize_proc_statics_coverage_2_p_0(STATE_VARIABLE_Deep_226_402, &STATE_VARIABLE_Deep_237_385);
        startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "\t% Summarizing proc dynamics...\n");
        startup__summarize_proc_dynamics_2_p_0(STATE_VARIABLE_Deep_237_385, &STATE_VARIABLE_Deep_240_240);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_Deep_224_392;
        MR_Word STATE_VARIABLE_Deep_226_393;
        MR_Box conv45_STATE_VARIABLE_Deep_226_393;

        {
          STATE_VARIABLE_Deep_224_392 = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 0) = ((MR_Box) (InitStats_22));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 1) = ((MR_Box) (Machine_12));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 2) = ((MR_Box) (ScriptName_13));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 3) = ((MR_Box) (DataFileName_14));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 4) = ((MR_Box) (Root_23));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 5) = ((MR_Box) (CallSiteDynamics_31));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 6) = ((MR_Box) (ProcDynamics_25));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 7) = ((MR_Box) (CallSiteStatics_28));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 8) = ((MR_Box) (ProcStatics_32));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 9) = ((MR_Box) (CliqueIndex_45));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 10) = ((MR_Box) (Cliques_44));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 11) = ((MR_Box) (CliqueParents_50));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 12) = ((MR_Box) (CliqueMaybeChildren_51));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 13) = ((MR_Box) (ProcCallers_53));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 14) = ((MR_Box) (CallSiteStaticMap_55));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 15) = ((MR_Box) (CallSiteCalls_57));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 16) = ((MR_Box) (PDOwn_82));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 17) = ((MR_Box) (PDDesc0_83));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 18) = ((MR_Box) (CSDDesc0_80));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 19) = ((MR_Box) (PSOwn0_84));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 20) = ((MR_Box) (PSDesc0_85));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 21) = ((MR_Box) (CSSOwn0_86));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 22) = ((MR_Box) (CSSDesc0_87));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 23) = ((MR_Box) (PDCompTable0_88));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 24) = ((MR_Box) (CSDCompTable0_89));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 25) = ((MR_Box) (ModuleDataMap_65));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 26) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 27) = ((MR_Box) (ExcludeFile_73));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 28) = ((MR_Box) (MaybeProcRepFile_61));
          MR_hl_field(0, STATE_VARIABLE_Deep_224_392, 29) = ((MR_Box) (MaybeOutputStream_16));
        }
        array_util__array_foldl_from_1_4_p_1((MR_Word) (&startup_scalar_common_1[4]), (MR_Word) (&profile__profile__type_ctor_info_deep_0), (MR_Word) (&startup_scalar_common_2[10]), (MR_ArrayPtr) (Cliques_44), ((MR_Box) (STATE_VARIABLE_Deep_224_392)), &conv45_STATE_VARIABLE_Deep_226_393);
        STATE_VARIABLE_Deep_226_393 = ((MR_Word) (conv45_STATE_VARIABLE_Deep_226_393));
        startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_55_93_95_48_7_p_0(STATE_VARIABLE_Deep_226_393, DumpOptions_18, MaybeOutputStream_16, DataFileName_14, DumpStages_17, (MR_Integer) 30);
        startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Summarizing information...\n");
        startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "\t% Summarizing proc dynamics...\n");
        startup__summarize_proc_dynamics_2_p_0(STATE_VARIABLE_Deep_226_393, &STATE_VARIABLE_Deep_240_240);
      }
      break;
  }
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "\t% Summarizing call site dynamics...\n");
  startup__summarize_call_site_dynamics_2_p_0(STATE_VARIABLE_Deep_240_240, &STATE_VARIABLE_Deep_246_246);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "\t% Summarizing modules...\n");
  startup__summarize_modules_2_p_0(STATE_VARIABLE_Deep_246_246, STATE_VARIABLE_Deep_93);
  startup__maybe_report_msg_4_p_0(MaybeOutputStream_16, (MR_String) "% Done.\n");
  startup__maybe_report_stats_3_p_0(MaybeOutputStream_16);
  startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_55_93_95_48_7_p_0(*STATE_VARIABLE_Deep_93, DumpOptions_18, MaybeOutputStream_16, DataFileName_14, DumpStages_17, (MR_Integer) 40);
}

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_50_95_95_91_55_93_95_48_7_p_0(
  MR_Word Var_44,
  MR_Word Var_45,
  MR_Word MaybeOutputStream_8,
  MR_String BaseName_9,
  MR_Word DumpStages_10,
  MR_Integer ThisStageNum_11)
{
  MR_bool succeeded;
  MR_String ThisStageStr_14;

  mercury__string__int_to_string_2_p_0(ThisStageNum_11, &ThisStageStr_14);
  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "all")), DumpStages_10);
  if (!(succeeded))
    succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ThisStageStr_14)), DumpStages_10);
  if (succeeded)
  {
    MR_String FileName_15;
    MR_Word OpenRes_16;
    MR_String Var_24;

    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) ".deepdump.", ThisStageStr_14);
    FileName_15 = mercury__string__f_43_43_2_f_0(BaseName_9, Var_24);
    mercury__io__open_output_4_p_0(FileName_15, &OpenRes_16);
    if (((MR_tag((MR_Word) OpenRes_16)) == (MR_Integer) 1))
    {
      MR_Word Error_18 = ((MR_Word) ((MR_hl_field(1, OpenRes_16, (MR_Integer) 0))));
      MR_String Msg_19;
      MR_Word OutputStream_20;

      mercury__io__error_message_2_p_0(Error_18, &Msg_19);
      if ((MaybeOutputStream_8 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__stderr_stream_3_p_0(&OutputStream_20);
      else
        OutputStream_20 = ((MR_Word) ((MR_hl_field(1, MaybeOutputStream_8, (MR_Integer) 0))));
      mercury__io__write_string_4_p_0(OutputStream_20, FileName_15);
      mercury__io__write_string_4_p_0(OutputStream_20, (MR_String) ": ");
      mercury__io__write_string_4_p_0(OutputStream_20, Msg_19);
      mercury__io__write_string_4_p_0(OutputStream_20, (MR_String) "\n");
    }
    else
    {
      MR_Word FileStream_17 = ((MR_Word) ((MR_hl_field(0, OpenRes_16, (MR_Integer) 0))));

      dump__dump_initial_deep_5_p_0(Var_44, Var_45, FileStream_17);
      mercury__io__close_output_3_p_0(FileStream_17);
    }
  }
}

static void MR_CALL 
startup__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_100_117_109_112_95_95_104_111_49_95_95_91_55_93_95_48_7_p_0(
  MR_Word Var_44,
  MR_Word Var_45,
  MR_Word MaybeOutputStream_8,
  MR_String BaseName_9,
  MR_Word DumpStages_10,
  MR_Integer ThisStageNum_11)
{
  MR_bool succeeded;
  MR_String ThisStageStr_14;

  mercury__string__int_to_string_2_p_0(ThisStageNum_11, &ThisStageStr_14);
  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "all")), DumpStages_10);
  if (!(succeeded))
    succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ThisStageStr_14)), DumpStages_10);
  if (succeeded)
  {
    MR_String FileName_15;
    MR_Word OpenRes_16;
    MR_String Var_24;

    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) ".deepdump.", ThisStageStr_14);
    FileName_15 = mercury__string__f_43_43_2_f_0(BaseName_9, Var_24);
    mercury__io__open_output_4_p_0(FileName_15, &OpenRes_16);
    if (((MR_tag((MR_Word) OpenRes_16)) == (MR_Integer) 1))
    {
      MR_Word Error_18 = ((MR_Word) ((MR_hl_field(1, OpenRes_16, (MR_Integer) 0))));
      MR_String Msg_19;
      MR_Word OutputStream_20;

      mercury__io__error_message_2_p_0(Error_18, &Msg_19);
      if ((MaybeOutputStream_8 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__stderr_stream_3_p_0(&OutputStream_20);
      else
        OutputStream_20 = ((MR_Word) ((MR_hl_field(1, MaybeOutputStream_8, (MR_Integer) 0))));
      mercury__io__write_string_4_p_0(OutputStream_20, FileName_15);
      mercury__io__write_string_4_p_0(OutputStream_20, (MR_String) ": ");
      mercury__io__write_string_4_p_0(OutputStream_20, Msg_19);
      mercury__io__write_string_4_p_0(OutputStream_20, (MR_String) "\n");
    }
    else
    {
      MR_Word FileStream_17 = ((MR_Word) ((MR_hl_field(0, OpenRes_16, (MR_Integer) 0))));

      dump__dump_deep_5_p_0(Var_44, Var_45, FileStream_17);
      mercury__io__close_output_3_p_0(FileStream_17);
    }
  }
}

static void MR_CALL 
startup__maybe_report_msg_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String Msg_2)
{
  if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word OutputStream_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    mercury__io__write_string_4_p_0(OutputStream_5, Msg_2);
    mercury__io__flush_output_3_p_0(OutputStream_5);
  }
}

static void MR_CALL 
startup__maybe_report_stats_3_p_0(
  MR_Word HeadVar__1_1)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
  }
}

static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv0_STATE_VARIABLE_CoverageArray_12;

  startup__summarize_proc_static_coverage_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv0_STATE_VARIABLE_CoverageArray_12);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_CoverageArray_12));
}

static void MR_CALL 
startup__summarize_proc_statics_coverage_2_p_0(
  MR_Word STATE_VARIABLE_Deep_0_6,
  MR_Word * STATE_VARIABLE_Deep_7)
{
  MR_Integer NPS_4;
  MR_ArrayPtr CoverageArray_5;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 0))));
  MR_ArrayPtr Var_11;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_ArrayPtr Var_22 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 8))));
  MR_ArrayPtr conv1_Var_11;
  MR_Box conv2_CoverageArray_5;
  MR_Word Var_82;
  MR_String Var_83;
  MR_String Var_84;
  MR_String Var_85;
  MR_Word Var_86;
  MR_ArrayPtr Var_87;
  MR_ArrayPtr Var_88;
  MR_ArrayPtr Var_89;
  MR_ArrayPtr Var_90;
  MR_ArrayPtr Var_91;
  MR_ArrayPtr Var_92;
  MR_ArrayPtr Var_93;
  MR_ArrayPtr Var_94;
  MR_ArrayPtr Var_95;
  MR_ArrayPtr Var_96;
  MR_ArrayPtr Var_97;
  MR_ArrayPtr Var_98;
  MR_ArrayPtr Var_99;
  MR_ArrayPtr Var_100;
  MR_ArrayPtr Var_101;
  MR_ArrayPtr Var_102;
  MR_ArrayPtr Var_103;
  MR_ArrayPtr Var_104;
  MR_ArrayPtr Var_105;
  MR_ArrayPtr Var_106;
  MR_Word Var_107;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_111;

  NPS_4 = ((MR_Integer) ((MR_hl_field(0, Var_8, (MR_Integer) 4))));
  Var_12 = measurements__zero_static_coverage_0_f_0();
  conv1_Var_11 = mercury__array__init_2_f_0((MR_Word) (&measurements__measurements__type_ctor_info_static_coverage_info_0), NPS_4, ((MR_Box) (Var_12)));
  Var_11 = (MR_ArrayPtr) (conv1_Var_11);
  array_util__array_foldl_from_1_4_p_1((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), (MR_Word) (&startup_scalar_common_1[16]), (MR_Word) (&startup_scalar_common_2[4]), (MR_ArrayPtr) (Var_22), ((MR_Box) (Var_11)), &conv2_CoverageArray_5);
  CoverageArray_5 = ((MR_ArrayPtr) (conv2_CoverageArray_5));
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (CoverageArray_5));
  }
  Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 0))));
  Var_83 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 1))));
  Var_84 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 2))));
  Var_85 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 3))));
  Var_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 4))));
  Var_87 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 5))));
  Var_88 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 6))));
  Var_89 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 7))));
  Var_90 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 8))));
  Var_91 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 9))));
  Var_92 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 10))));
  Var_93 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 11))));
  Var_94 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 12))));
  Var_95 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 13))));
  Var_96 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 14))));
  Var_97 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 15))));
  Var_98 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 16))));
  Var_99 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 17))));
  Var_100 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 18))));
  Var_101 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 19))));
  Var_102 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 20))));
  Var_103 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 21))));
  Var_104 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 22))));
  Var_105 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 23))));
  Var_106 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 24))));
  Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 25))));
  Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 27))));
  Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 28))));
  Var_111 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_6, (MR_Integer) 29))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Deep_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_82));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_83));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_84));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_85));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_86));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_87));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_88));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_89));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_90));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_91));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_92));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_93));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_94));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_95));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_96));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_97));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_98));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_99));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_100));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_101));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_102));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_103));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_104));
    MR_hl_field(0, base, 23) = ((MR_Box) (Var_105));
    MR_hl_field(0, base, 24) = ((MR_Box) (Var_106));
    MR_hl_field(0, base, 25) = ((MR_Box) (Var_107));
    MR_hl_field(0, base, 26) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 27) = ((MR_Box) (Var_109));
    MR_hl_field(0, base, 28) = ((MR_Box) (Var_110));
    MR_hl_field(0, base, 29) = ((MR_Box) (Var_111));
  }
}

static MR_Box MR_CALL 
startup__summarize_modules_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_ModuleData_6;

  conv0_ModuleData_6 = startup__summarize_module_costs_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_ModuleData_6));
  return wrapper_arg_2;
}

static void MR_CALL 
startup__summarize_modules_2_p_0(
  MR_Word Deep0_3,
  MR_Word * Deep_4)
{
  MR_Word ModuleData0_5 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 25))));
  MR_Word ModuleData_6;
  MR_Word Var_7;
  MR_Word Var_37;
  MR_String Var_38;
  MR_String Var_39;
  MR_String Var_40;
  MR_Word Var_41;
  MR_ArrayPtr Var_42;
  MR_ArrayPtr Var_43;
  MR_ArrayPtr Var_44;
  MR_ArrayPtr Var_45;
  MR_ArrayPtr Var_46;
  MR_ArrayPtr Var_47;
  MR_ArrayPtr Var_48;
  MR_ArrayPtr Var_49;
  MR_ArrayPtr Var_50;
  MR_ArrayPtr Var_51;
  MR_ArrayPtr Var_52;
  MR_ArrayPtr Var_53;
  MR_ArrayPtr Var_54;
  MR_ArrayPtr Var_55;
  MR_ArrayPtr Var_56;
  MR_ArrayPtr Var_57;
  MR_ArrayPtr Var_58;
  MR_ArrayPtr Var_59;
  MR_ArrayPtr Var_60;
  MR_ArrayPtr Var_61;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&startup_scalar_common_6[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (startup__summarize_modules_2_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (Deep0_3));
  }
  ModuleData_6 = mercury__map__map_values_only_2_f_0((MR_Word) (&profile__profile__type_ctor_info_module_data_0), (MR_Word) (&profile__profile__type_ctor_info_module_data_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_7, ModuleData0_5);
  Var_37 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 0))));
  Var_38 = ((MR_String) ((MR_hl_field(0, Deep0_3, (MR_Integer) 1))));
  Var_39 = ((MR_String) ((MR_hl_field(0, Deep0_3, (MR_Integer) 2))));
  Var_40 = ((MR_String) ((MR_hl_field(0, Deep0_3, (MR_Integer) 3))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 4))));
  Var_42 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 5))));
  Var_43 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 6))));
  Var_44 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 7))));
  Var_45 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 8))));
  Var_46 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 9))));
  Var_47 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 10))));
  Var_48 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 11))));
  Var_49 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 12))));
  Var_50 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 13))));
  Var_51 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 14))));
  Var_52 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 15))));
  Var_53 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 16))));
  Var_54 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 17))));
  Var_55 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 18))));
  Var_56 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 19))));
  Var_57 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 20))));
  Var_58 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 21))));
  Var_59 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 22))));
  Var_60 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 23))));
  Var_61 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 24))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 26))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 27))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 28))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 29))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    *Deep_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_42));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_43));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_44));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_55));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_56));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_57));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_58));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_59));
    MR_hl_field(0, base, 23) = ((MR_Box) (Var_60));
    MR_hl_field(0, base, 24) = ((MR_Box) (Var_61));
    MR_hl_field(0, base, 25) = ((MR_Box) (ModuleData_6));
    MR_hl_field(0, base, 26) = ((MR_Box) (Var_63));
    MR_hl_field(0, base, 27) = ((MR_Box) (Var_64));
    MR_hl_field(0, base, 28) = ((MR_Box) (Var_65));
    MR_hl_field(0, base, 29) = ((MR_Box) (Var_66));
  }
}

static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv1_CSSOwnArray_18;
  MR_ArrayPtr conv0_CSSDescArray_20;

  startup__summarize_call_site_dynamic_10_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv1_CSSOwnArray_18, ((MR_ArrayPtr) (wrapper_arg_5)), &conv0_CSSDescArray_20);
  *wrapper_arg_4 = ((MR_Box) (conv1_CSSOwnArray_18));
  *wrapper_arg_6 = ((MR_Box) (conv0_CSSDescArray_20));
}

static void MR_CALL 
startup__summarize_call_site_dynamics_2_p_0(
  MR_Word STATE_VARIABLE_Deep_0_8,
  MR_Word * STATE_VARIABLE_Deep_9)
{
  MR_ArrayPtr CSSOwnArray0_4 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 21))));
  MR_ArrayPtr CSSDescArray0_5 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 22))));
  MR_ArrayPtr CSSOwnArray_6;
  MR_ArrayPtr CSSDescArray_7;
  MR_Word Var_10;
  MR_ArrayPtr Var_12;
  MR_ArrayPtr Var_13;
  MR_ArrayPtr Var_24 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 5))));
  MR_ArrayPtr Var_26 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 7))));
  MR_ArrayPtr Var_33 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 14))));
  MR_ArrayPtr Var_37 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 18))));
  MR_ArrayPtr Var_42 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 24))));
  MR_Word Var_222;
  MR_String Var_223;
  MR_String Var_224;
  MR_String Var_225;
  MR_Word Var_226;
  MR_ArrayPtr Var_227;
  MR_ArrayPtr Var_228;
  MR_ArrayPtr Var_229;
  MR_ArrayPtr Var_230;
  MR_ArrayPtr Var_231;
  MR_ArrayPtr Var_232;
  MR_ArrayPtr Var_233;
  MR_ArrayPtr Var_234;
  MR_ArrayPtr Var_235;
  MR_ArrayPtr Var_236;
  MR_ArrayPtr Var_237;
  MR_ArrayPtr Var_238;
  MR_ArrayPtr Var_239;
  MR_ArrayPtr Var_240;
  MR_ArrayPtr Var_241;
  MR_ArrayPtr Var_242;
  MR_ArrayPtr Var_245;
  MR_ArrayPtr Var_246;
  MR_Word Var_247;
  MR_Word Var_248;
  MR_Word Var_249;
  MR_Word Var_250;
  MR_Word Var_251;
  MR_ArrayPtr conv2_Var_12;
  MR_ArrayPtr conv3_Var_13;
  MR_Box conv5_CSSOwnArray_6;
  MR_Box conv4_CSSDescArray_7;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&startup_scalar_common_5[0]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (startup__summarize_call_site_dynamics_2_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_37));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_42));
  }
  conv2_Var_12 = mercury__array__copy_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (CSSOwnArray0_4));
  Var_12 = (MR_ArrayPtr) (conv2_Var_12);
  conv3_Var_13 = mercury__array__copy_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (CSSDescArray0_5));
  Var_13 = (MR_ArrayPtr) (conv3_Var_13);
  array_util__array_foldl2_from_1_6_p_1((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_Word) (&startup_scalar_common_1[14]), (MR_Word) (&startup_scalar_common_1[15]), Var_10, (MR_ArrayPtr) (Var_24), ((MR_Box) (Var_12)), &conv5_CSSOwnArray_6, ((MR_Box) (Var_13)), &conv4_CSSDescArray_7);
  CSSOwnArray_6 = ((MR_ArrayPtr) (conv5_CSSOwnArray_6));
  CSSDescArray_7 = ((MR_ArrayPtr) (conv4_CSSDescArray_7));
  Var_222 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 0))));
  Var_223 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 1))));
  Var_224 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 2))));
  Var_225 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 3))));
  Var_226 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 4))));
  Var_227 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 5))));
  Var_228 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 6))));
  Var_229 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 7))));
  Var_230 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 8))));
  Var_231 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 9))));
  Var_232 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 10))));
  Var_233 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 11))));
  Var_234 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 12))));
  Var_235 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 13))));
  Var_236 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 14))));
  Var_237 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 15))));
  Var_238 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 16))));
  Var_239 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 17))));
  Var_240 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 18))));
  Var_241 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 19))));
  Var_242 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 20))));
  Var_245 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 23))));
  Var_246 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 24))));
  Var_247 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 25))));
  Var_248 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 26))));
  Var_249 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 27))));
  Var_250 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 28))));
  Var_251 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 29))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Deep_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_222));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_223));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_224));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_225));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_226));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_227));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_228));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_229));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_230));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_231));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_232));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_233));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_234));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_235));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_236));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_237));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_238));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_239));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_240));
    MR_hl_field(0, base, 19) = ((MR_Box) (Var_241));
    MR_hl_field(0, base, 20) = ((MR_Box) (Var_242));
    MR_hl_field(0, base, 21) = ((MR_Box) (CSSOwnArray_6));
    MR_hl_field(0, base, 22) = ((MR_Box) (CSSDescArray_7));
    MR_hl_field(0, base, 23) = ((MR_Box) (Var_245));
    MR_hl_field(0, base, 24) = ((MR_Box) (Var_246));
    MR_hl_field(0, base, 25) = ((MR_Box) (Var_247));
    MR_hl_field(0, base, 26) = ((MR_Box) (Var_248));
    MR_hl_field(0, base, 27) = ((MR_Box) (Var_249));
    MR_hl_field(0, base, 28) = ((MR_Box) (Var_250));
    MR_hl_field(0, base, 29) = ((MR_Box) (Var_251));
  }
}

static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv2_STATE_VARIABLE_PSOwnArray_25;
  MR_ArrayPtr conv1_STATE_VARIABLE_PSDescArray_27;
  MR_ArrayPtr conv0_STATE_VARIABLE_CoverageArray_29;

  startup__summarize_proc_dynamic_with_coverage_11_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv2_STATE_VARIABLE_PSOwnArray_25, ((MR_ArrayPtr) (wrapper_arg_5)), &conv1_STATE_VARIABLE_PSDescArray_27, ((MR_ArrayPtr) (wrapper_arg_7)), &conv0_STATE_VARIABLE_CoverageArray_29);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_PSOwnArray_25));
  *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_PSDescArray_27));
  *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_CoverageArray_29));
}

static void MR_CALL 
startup__summarize_proc_dynamics_with_coverage_data_2_p_0(
  MR_Word STATE_VARIABLE_Deep_0_8,
  MR_Word * STATE_VARIABLE_Deep_9)
{
  MR_Integer NPS_4;
  MR_ArrayPtr PSOwnArray_5;
  MR_ArrayPtr PSDescArray_6;
  MR_ArrayPtr CoverageArray_7;
  MR_Integer Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 0))));
  MR_Word Var_13;
  MR_ArrayPtr Var_15;
  MR_ArrayPtr Var_16;
  MR_ArrayPtr Var_17;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_27;
  MR_ArrayPtr Var_33 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 6))));
  MR_ArrayPtr Var_43 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 16))));
  MR_ArrayPtr Var_44 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 17))));
  MR_ArrayPtr Var_50 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 23))));
  MR_Word Var_182;
  MR_String Var_183;
  MR_String Var_184;
  MR_String Var_185;
  MR_Word Var_186;
  MR_ArrayPtr Var_187;
  MR_ArrayPtr Var_188;
  MR_ArrayPtr Var_189;
  MR_ArrayPtr Var_190;
  MR_ArrayPtr Var_191;
  MR_ArrayPtr Var_192;
  MR_ArrayPtr Var_193;
  MR_ArrayPtr Var_194;
  MR_ArrayPtr Var_195;
  MR_ArrayPtr Var_196;
  MR_ArrayPtr Var_197;
  MR_ArrayPtr Var_198;
  MR_ArrayPtr Var_199;
  MR_ArrayPtr Var_200;
  MR_ArrayPtr Var_203;
  MR_ArrayPtr Var_204;
  MR_ArrayPtr Var_205;
  MR_ArrayPtr Var_206;
  MR_Word Var_207;
  MR_Word Var_209;
  MR_Word Var_210;
  MR_Word Var_211;
  MR_ArrayPtr conv3_Var_15;
  MR_ArrayPtr conv4_Var_16;
  MR_ArrayPtr conv5_Var_17;
  MR_Box conv8_PSOwnArray_5;
  MR_Box conv7_PSDescArray_6;
  MR_Box conv6_CoverageArray_7;

  Var_10 = ((MR_Integer) ((MR_hl_field(0, Var_11, (MR_Integer) 4))));
  NPS_4 = (MR_Integer) ((MR_Unsigned) Var_10 + (MR_Unsigned) 1);
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (&startup_scalar_common_4[0]));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (startup__summarize_proc_dynamics_with_coverage_data_2_p_0_1));
    MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_13, 3) = ((MR_Box) (Var_43));
    MR_hl_field(0, Var_13, 4) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_13, 5) = ((MR_Box) (Var_50));
  }
  Var_21 = measurements__zero_own_prof_info_0_f_0();
  conv3_Var_15 = mercury__array__init_2_f_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), NPS_4, ((MR_Box) (Var_21)));
  Var_15 = (MR_ArrayPtr) (conv3_Var_15);
  Var_22 = measurements__zero_inherit_prof_info_0_f_0();
  conv4_Var_16 = mercury__array__init_2_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), NPS_4, ((MR_Box) (Var_22)));
  Var_16 = (MR_ArrayPtr) (conv4_Var_16);
  Var_23 = measurements__zero_static_coverage_0_f_0();
  conv5_Var_17 = mercury__array__init_2_f_0((MR_Word) (&measurements__measurements__type_ctor_info_static_coverage_info_0), NPS_4, ((MR_Box) (Var_23)));
  Var_17 = (MR_ArrayPtr) (conv5_Var_17);
  array_util__array_foldl3_from_1_8_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_Word) (&startup_scalar_common_1[14]), (MR_Word) (&startup_scalar_common_1[15]), (MR_Word) (&startup_scalar_common_1[16]), Var_13, (MR_ArrayPtr) (Var_33), ((MR_Box) (Var_15)), &conv8_PSOwnArray_5, ((MR_Box) (Var_16)), &conv7_PSDescArray_6, ((MR_Box) (Var_17)), &conv6_CoverageArray_7);
  PSOwnArray_5 = ((MR_ArrayPtr) (conv8_PSOwnArray_5));
  PSDescArray_6 = ((MR_ArrayPtr) (conv7_PSDescArray_6));
  CoverageArray_7 = ((MR_ArrayPtr) (conv6_CoverageArray_7));
  Var_182 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 0))));
  Var_183 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 1))));
  Var_184 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 2))));
  Var_185 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 3))));
  Var_186 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 4))));
  Var_187 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 5))));
  Var_188 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 6))));
  Var_189 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 7))));
  Var_190 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 8))));
  Var_191 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 9))));
  Var_192 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 10))));
  Var_193 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 11))));
  Var_194 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 12))));
  Var_195 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 13))));
  Var_196 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 14))));
  Var_197 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 15))));
  Var_198 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 16))));
  Var_199 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 17))));
  Var_200 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 18))));
  Var_203 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 21))));
  Var_204 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 22))));
  Var_205 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 23))));
  Var_206 = ((MR_ArrayPtr) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 24))));
  Var_207 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 25))));
  Var_209 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 27))));
  Var_210 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 28))));
  Var_211 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Deep_0_8, (MR_Integer) 29))));
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (CoverageArray_7));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Deep_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_182));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_183));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_184));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_185));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_186));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_187));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_188));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_189));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_190));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_191));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_192));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_193));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_194));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_195));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_196));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_197));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_198));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_199));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_200));
    MR_hl_field(0, base, 19) = ((MR_Box) (PSOwnArray_5));
    MR_hl_field(0, base, 20) = ((MR_Box) (PSDescArray_6));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_203));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_204));
    MR_hl_field(0, base, 23) = ((MR_Box) (Var_205));
    MR_hl_field(0, base, 24) = ((MR_Box) (Var_206));
    MR_hl_field(0, base, 25) = ((MR_Box) (Var_207));
    MR_hl_field(0, base, 26) = ((MR_Box) (Var_27));
    MR_hl_field(0, base, 27) = ((MR_Box) (Var_209));
    MR_hl_field(0, base, 28) = ((MR_Box) (Var_210));
    MR_hl_field(0, base, 29) = ((MR_Box) (Var_211));
  }
}

static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv1_PSOwnArray_16;
  MR_ArrayPtr conv0_PSDescArray_18;

  startup__summarize_proc_dynamic_9_p_0(((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_ArrayPtr) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv1_PSOwnArray_16, ((MR_ArrayPtr) (wrapper_arg_5)), &conv0_PSDescArray_18);
  *wrapper_arg_4 = ((MR_Box) (conv1_PSOwnArray_16));
  *wrapper_arg_6 = ((MR_Box) (conv0_PSDescArray_18));
}

static void MR_CALL 
startup__summarize_proc_dynamics_2_p_0(
  MR_Word Deep0_3,
  MR_Word * Deep_4)
{
  MR_ArrayPtr PSOwnArray0_5 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 19))));
  MR_ArrayPtr PSDescArray0_6 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 20))));
  MR_ArrayPtr PSOwnArray_7;
  MR_ArrayPtr PSDescArray_8;
  MR_Word Var_9;
  MR_ArrayPtr Var_11;
  MR_ArrayPtr Var_12;
  MR_ArrayPtr Var_23 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 6))));
  MR_ArrayPtr Var_33 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 16))));
  MR_ArrayPtr Var_34 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 17))));
  MR_ArrayPtr Var_39 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 23))));
  MR_Word Var_191;
  MR_String Var_192;
  MR_String Var_193;
  MR_String Var_194;
  MR_Word Var_195;
  MR_ArrayPtr Var_196;
  MR_ArrayPtr Var_197;
  MR_ArrayPtr Var_198;
  MR_ArrayPtr Var_199;
  MR_ArrayPtr Var_200;
  MR_ArrayPtr Var_201;
  MR_ArrayPtr Var_202;
  MR_ArrayPtr Var_203;
  MR_ArrayPtr Var_204;
  MR_ArrayPtr Var_205;
  MR_ArrayPtr Var_206;
  MR_ArrayPtr Var_207;
  MR_ArrayPtr Var_208;
  MR_ArrayPtr Var_209;
  MR_ArrayPtr Var_212;
  MR_ArrayPtr Var_213;
  MR_ArrayPtr Var_214;
  MR_ArrayPtr Var_215;
  MR_Word Var_216;
  MR_Word Var_217;
  MR_Word Var_218;
  MR_Word Var_219;
  MR_Word Var_220;
  MR_ArrayPtr conv2_Var_11;
  MR_ArrayPtr conv3_Var_12;
  MR_Box conv5_PSOwnArray_7;
  MR_Box conv4_PSDescArray_8;

  {
    Var_9 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_9, 0) = ((MR_Box) (&startup_scalar_common_3[0]));
    MR_hl_field(0, Var_9, 1) = ((MR_Box) (startup__summarize_proc_dynamics_2_p_0_1));
    MR_hl_field(0, Var_9, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_9, 3) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_9, 4) = ((MR_Box) (Var_34));
    MR_hl_field(0, Var_9, 5) = ((MR_Box) (Var_39));
  }
  conv2_Var_11 = mercury__array__copy_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_own_prof_info_0), (MR_ArrayPtr) (PSOwnArray0_5));
  Var_11 = (MR_ArrayPtr) (conv2_Var_11);
  conv3_Var_12 = mercury__array__copy_1_f_0((MR_Word) (&measurements__measurements__type_ctor_info_inherit_prof_info_0), (MR_ArrayPtr) (PSDescArray0_6));
  Var_12 = (MR_ArrayPtr) (conv3_Var_12);
  array_util__array_foldl2_from_1_6_p_1((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_Word) (&startup_scalar_common_1[14]), (MR_Word) (&startup_scalar_common_1[15]), Var_9, (MR_ArrayPtr) (Var_23), ((MR_Box) (Var_11)), &conv5_PSOwnArray_7, ((MR_Box) (Var_12)), &conv4_PSDescArray_8);
  PSOwnArray_7 = ((MR_ArrayPtr) (conv5_PSOwnArray_7));
  PSDescArray_8 = ((MR_ArrayPtr) (conv4_PSDescArray_8));
  Var_191 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 0))));
  Var_192 = ((MR_String) ((MR_hl_field(0, Deep0_3, (MR_Integer) 1))));
  Var_193 = ((MR_String) ((MR_hl_field(0, Deep0_3, (MR_Integer) 2))));
  Var_194 = ((MR_String) ((MR_hl_field(0, Deep0_3, (MR_Integer) 3))));
  Var_195 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 4))));
  Var_196 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 5))));
  Var_197 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 6))));
  Var_198 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 7))));
  Var_199 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 8))));
  Var_200 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 9))));
  Var_201 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 10))));
  Var_202 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 11))));
  Var_203 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 12))));
  Var_204 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 13))));
  Var_205 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 14))));
  Var_206 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 15))));
  Var_207 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 16))));
  Var_208 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 17))));
  Var_209 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 18))));
  Var_212 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 21))));
  Var_213 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 22))));
  Var_214 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 23))));
  Var_215 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep0_3, (MR_Integer) 24))));
  Var_216 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 25))));
  Var_217 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 26))));
  Var_218 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 27))));
  Var_219 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 28))));
  Var_220 = ((MR_Word) ((MR_hl_field(0, Deep0_3, (MR_Integer) 29))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (30 * sizeof(MR_Word)), NULL, NULL);
    *Deep_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_191));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_192));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_193));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_194));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_195));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_196));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_197));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_198));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_199));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_200));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_201));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_202));
    MR_hl_field(0, base, 12) = ((MR_Box) (Var_203));
    MR_hl_field(0, base, 13) = ((MR_Box) (Var_204));
    MR_hl_field(0, base, 14) = ((MR_Box) (Var_205));
    MR_hl_field(0, base, 15) = ((MR_Box) (Var_206));
    MR_hl_field(0, base, 16) = ((MR_Box) (Var_207));
    MR_hl_field(0, base, 17) = ((MR_Box) (Var_208));
    MR_hl_field(0, base, 18) = ((MR_Box) (Var_209));
    MR_hl_field(0, base, 19) = ((MR_Box) (PSOwnArray_7));
    MR_hl_field(0, base, 20) = ((MR_Box) (PSDescArray_8));
    MR_hl_field(0, base, 21) = ((MR_Box) (Var_212));
    MR_hl_field(0, base, 22) = ((MR_Box) (Var_213));
    MR_hl_field(0, base, 23) = ((MR_Box) (Var_214));
    MR_hl_field(0, base, 24) = ((MR_Box) (Var_215));
    MR_hl_field(0, base, 25) = ((MR_Box) (Var_216));
    MR_hl_field(0, base, 26) = ((MR_Box) (Var_217));
    MR_hl_field(0, base, 27) = ((MR_Box) (Var_218));
    MR_hl_field(0, base, 28) = ((MR_Box) (Var_219));
    MR_hl_field(0, base, 29) = ((MR_Box) (Var_220));
  }
}

static MR_String MR_CALL 
startup__contour_file_name_1_f_0(
  MR_String DataFileName_3)
{
  MR_bool succeeded;
  MR_String ContourFileName_4;
  MR_String BaseFileName_5;

  succeeded = mercury__string__remove_suffix_3_p_0(DataFileName_3, (MR_String) ".data", &BaseFileName_5);
  if (succeeded)
    ContourFileName_4 = mercury__string__f_43_43_2_f_0(BaseFileName_5, (MR_String) ".contour");
  else
  {
    MR_String Var_8;

    Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t remove suffix from deep file name: ", DataFileName_3);
    mercury__require__error_1_p_0(Var_8);
  }
  return ContourFileName_4;
}

static MR_String MR_CALL 
startup__make_progrep_filename_1_f_0(
  MR_String DataFileName_3)
{
  MR_bool succeeded;
  MR_String ProgrepFileName_4;
  MR_String BaseFileName_5;

  succeeded = mercury__string__remove_suffix_3_p_0(DataFileName_3, (MR_String) ".data", &BaseFileName_5);
  if (succeeded)
    ProgrepFileName_4 = mercury__string__f_43_43_2_f_0(BaseFileName_5, (MR_String) ".procrep");
  else
  {
    MR_String Var_8;

    Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "Couldn\'t remove suffix from deep file name: ", DataFileName_3);
    mercury__require__error_1_p_0(Var_8);
  }
  return ProgrepFileName_4;
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

// :- end_module startup.
