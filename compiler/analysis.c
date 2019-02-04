/*
** Automatically generated from `analysis.m'
** by the Mercury compiler,
** version rotd-2011-08-21, configured for x86_64-unknown-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__analysis__init
REQUIRED_INIT mercury__analysis__required_init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 29 "analysis.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 33 "analysis.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 37 "analysis.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 41 "analysis.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 45 "analysis.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 49 "analysis.c"
#line 50 "analysis.c"
#include "analysis.mh"

#line 53 "analysis.c"
#line 54 "analysis.c"
#ifndef ANALYSIS_DECL_GUARD
#define ANALYSIS_DECL_GUARD

#line 58 "analysis.c"
#line 1375 "analysis.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word analysis__mutable_variable_debug_analysis;
#else
    extern MR_Word analysis__mutable_variable_debug_analysis;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock analysis__mutable_variable_debug_analysis_lock;
#endif

#line 69 "analysis.c"
#line 70 "analysis.c"

#endif
#line 73 "analysis.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
	MR_Integer f6;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Unsigned f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Unsigned f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Integer f6;
	MR_Word * f7;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Word * f6;
	MR_Word * f7;
	MR_Word * f8;
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

struct mercury_type_12 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_12 mercury_common_12[];

struct mercury_type_13 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_13 mercury_common_13[];

struct mercury_type_14 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_14 mercury_common_14[];

struct mercury_type_15 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_15 mercury_common_15[];

struct mercury_type_16 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Integer f5;
	MR_Integer f6;
	MR_Word * f7;
	MR_Word * f8;
};
MR_STATIC_LINKAGE const struct mercury_type_16 mercury_common_16[];

struct mercury_type_17 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
MR_STATIC_LINKAGE const struct mercury_type_17 mercury_common_17[];

struct mercury_type_18 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_18 mercury_common_18[];

struct mercury_type_19 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_19 mercury_common_19[];

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__[],
	mercury_data_base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[],
	mercury_data_base_typeclass_info_analysis__call_pattern__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[];

extern const MR_TypeClassDeclStruct
	mercury_data_analysis__type_class_decl_to_term_1,
	mercury_data_analysis__type_class_decl_partial_order_2,
	mercury_data_analysis__type_class_decl_compiler_1,
	mercury_data_analysis__type_class_decl_call_pattern_2,
	mercury_data_analysis__type_class_decl_answer_pattern_2,
	mercury_data_analysis__type_class_decl_analysis_3;

extern const MR_TypeCtorInfo_Struct
	mercury_data_analysis__type_ctor_info_analysis_info_0,
	mercury_data_analysis__type_ctor_info_analysis_map_1,
	mercury_data_analysis__type_ctor_info_analysis_name_0,
	mercury_data_analysis__type_ctor_info_analysis_request_0,
	mercury_data_analysis__type_ctor_info_analysis_result_2,
	mercury_data_analysis__type_ctor_info_analysis_status_0,
	mercury_data_analysis__type_ctor_info_analysis_type_0,
	mercury_data_analysis__type_ctor_info_any_call_0,
	mercury_data_analysis__type_ctor_info_fixpoint_type_0,
	mercury_data_analysis__type_ctor_info_func_analysis_map_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_analysis__type_ctor_info_func_id_0,
	mercury_data_analysis__type_ctor_info_imdg_arc_0,
	mercury_data_analysis__type_ctor_info_make_analysis_registry_0,
	mercury_data_analysis__type_ctor_info_module_analysis_map_1,
	mercury_data_analysis__type_ctor_info_no_func_info_0,
	mercury_data_analysis__type_ctor_info_some_analysis_result_0;
MR_decl_label1(analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_0, 1)
MR_decl_label2(analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1166__1_2_0, 3,1)
MR_decl_label4(analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0, 2,3,4,5)
MR_decl_label2(analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__601__1_4_0, 2,3)
MR_decl_label6(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0, 4,5,6,8,9,2)
MR_decl_label4(analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0, 2,3,4,5)
MR_decl_label4(analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0, 2,3,4,7)
MR_decl_label2(analysis__IntroducedFrom__pred__update_analysis_registry_5__889__1_7_0, 2,3)
MR_decl_label1(analysis__IntroducedFrom__pred__update_analysis_registry_5__918__1_7_0, 2)
MR_decl_label1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_0, 12)
MR_decl_label1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_0, 12)
MR_decl_label1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_0, 12)
MR_decl_label1(analysis__debug_msg_3_0, 12)
MR_decl_label4(analysis__ensure_module_status_loaded_6_0, 3,2,5,6)
MR_decl_label8(analysis__load_module_analysis_results_6_0, 9,11,4,2,14,15,16,21)
MR_decl_label2(analysis__load_module_imdg_6_0, 2,6)
MR_decl_label7(analysis__lookup_best_result_6_0, 4,2,5,7,9,10,12)
MR_decl_label6(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0, 2,3,4,7,9,11)
MR_decl_label8(analysis__lookup_existing_call_patterns_5_0, 3,2,6,11,13,15,17,7)
MR_decl_label3(analysis__lookup_matching_results_6_0, 2,3,4)
MR_decl_label10(analysis__lookup_requests_5_0, 3,2,6,11,13,15,17,19,20,7)
MR_decl_label9(analysis__lookup_results_1_5_0, 3,4,2,8,5,6,11,14,15)
MR_decl_label7(analysis__lookup_results_2_4_0, 2,7,9,11,13,14,3)
MR_decl_label2(analysis__maybe_write_module_imdg_5_0, 6,9)
MR_decl_label2(analysis__maybe_write_module_overall_status_5_0, 3,6)
MR_decl_label2(analysis__maybe_write_module_requests_5_0, 6,9)
MR_decl_label2(analysis__module_is_local_3_0, 3,2)
MR_decl_label4(analysis__more_precise_answer_4_0, 3,4,5,2)
MR_decl_label5(analysis__prepare_intermodule_analysis_7_0, 2,5,6,7,11)
MR_decl_label10(analysis__record_dependency_7_0, 4,2,7,9,8,11,15,16,17,18)
MR_decl_label7(analysis__record_dependency_7_0, 21,22,20,23,24,26,12)
MR_decl_label10(analysis__record_dependency_2_7_0, 6,2,10,11,15,12,18,19,22,20)
MR_decl_label6(analysis__record_dependency_2_7_0, 26,28,27,34,35,36)
MR_decl_label7(analysis__record_request_6_0, 4,2,7,9,8,11,12)
MR_decl_label10(analysis__record_request_2_7_0, 6,2,10,11,15,12,18,19,22,20)
MR_decl_label4(analysis__record_request_2_7_0, 34,35,36,37)
MR_decl_label5(analysis__record_result_7_0, 3,2,6,9,8)
MR_decl_label8(analysis__record_result_in_analysis_map_6_0, 2,6,3,9,10,13,11,24)
MR_decl_label7(analysis__replace_result_in_analysis_map_8_0, 2,6,7,8,9,10,11)
MR_decl_label10(analysis__replace_result_in_list_6_0, 4,5,6,7,9,10,11,8,15,3)
MR_decl_label8(analysis__taint_module_overall_status_7_0, 22,4,5,6,8,9,7,10)
MR_decl_label5(analysis__update_analysis_registry_5_0, 3,4,2,5,8)
MR_decl_label10(analysis__update_analysis_registry_5_9_0, 2,3,4,10,11,12,6,15,16,17)
MR_decl_label10(analysis__update_analysis_registry_5_9_0, 19,21,20,14,24,27,28,29,26,31)
MR_decl_label10(analysis__update_analysis_registry_5_9_0, 35,36,37,38,40,5,46,48,50,54)
MR_decl_label2(analysis__update_analysis_registry_5_9_0, 55,42)
MR_decl_label9(analysis__update_intermodule_dependencies_2_4_0, 5,6,7,9,12,8,13,14,16)
MR_decl_label10(analysis__write_analysis_files_7_0, 2,3,4,6,7,8,9,11,15,12)
MR_decl_label9(analysis__write_analysis_files_7_0, 19,20,24,25,27,28,30,31,32)
MR_decl_label10(analysis__write_changed_answer_6_0, 2,3,4,5,6,7,8,9,10,12)
MR_decl_label4(analysis__write_clearing_entries_4_0, 2,3,4,5)
MR_decl_label8(analysis__write_no_change_in_result_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label4(analysis__write_tainting_module_4_0, 2,3,4,5)
MR_decl_label3(fn__analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_0, 2,3,4)
MR_decl_label3(fn__analysis__IntroducedFrom__func__lookup_requests__675__1_2_0, 2,3,4)
MR_decl_label8(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0, 2,3,4,5,6,7,8,9)
MR_decl_label6(fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0, 2,3,4,5,6,1)
MR_decl_label1(fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_0, 3)
MR_decl_label7(fn__analysis__arc_module_name_3_0, 2,3,4,5,6,7,1)
MR_decl_label4(fn__analysis__imdg_dependent_modules_5_0, 5,7,10,2)
MR_decl_label9(fn__analysis__init_analysis_info_3_0, 3,2,4,8,9,13,14,18,19)
MR_decl_label3(fn__analysis__lub_2_0, 2,4,5)
MR_decl_label10(__Unify___analysis__analysis_info_0_0, 4,5,6,8,10,15,17,22,26,31)
MR_decl_label2(__Unify___analysis__analysis_info_0_0, 38,1)
MR_decl_label5(__Unify___analysis__analysis_request_0_0, 4,5,6,10,1)
MR_decl_label4(__Unify___analysis__analysis_result_2_0, 4,6,8,1)
MR_decl_label2(__Unify___analysis__func_id_0_0, 4,1)
MR_decl_label5(__Unify___analysis__imdg_arc_0_0, 4,5,6,10,1)
MR_decl_label8(__Unify___analysis__some_analysis_result_0_0, 4,5,6,8,9,10,12,1)
MR_decl_label10(__Compare___analysis__analysis_info_0_0, 3,2,5,6,7,11,15,19,26,30)
MR_decl_label4(__Compare___analysis__analysis_info_0_0, 37,43,50,131)
MR_decl_label6(__Compare___analysis__analysis_request_0_0, 3,2,5,6,7,23)
MR_decl_label5(__Compare___analysis__analysis_result_2_0, 3,2,5,9,29)
MR_decl_label6(__Compare___analysis__func_id_0_0, 3,2,5,9,13,37)
MR_decl_label6(__Compare___analysis__imdg_arc_0_0, 3,2,5,6,7,23)
MR_decl_label9(__Compare___analysis__some_analysis_result_0_0, 3,2,5,6,7,11,12,13,33)
MR_def_extern_entry(fn__analysis__compiler_name_1_0)
MR_def_extern_entry(fn__analysis__analyses_2_0)
MR_def_extern_entry(analysis__module_name_to_read_file_name_7_0)
MR_def_extern_entry(analysis__module_name_to_write_file_name_7_0)
MR_def_extern_entry(fn__analysis__analysis_name_2_0)
MR_def_extern_entry(fn__analysis__analysis_version_number_2_0)
MR_def_extern_entry(fn__analysis__preferred_fixpoint_type_2_0)
MR_def_extern_entry(fn__analysis__bottom_2_0)
MR_def_extern_entry(fn__analysis__top_2_0)
MR_def_extern_entry(analysis__get_func_info_6_0)
MR_def_extern_entry(analysis__more_precise_than_3_0)
MR_def_extern_entry(analysis__equivalent_3_0)
MR_def_extern_entry(fn__analysis__to_term_1_0)
MR_def_extern_entry(analysis__from_term_2_0)
MR_def_extern_entry(fn__analysis__lub_2_0)
MR_def_extern_entry(fn__analysis__init_analysis_info_3_0)
MR_def_extern_entry(analysis__lookup_existing_call_patterns_5_0)
MR_def_extern_entry(analysis__lookup_results_2_4_0)
MR_def_extern_entry(analysis__lock_debug_analysis_0_0)
MR_def_extern_entry(analysis__unlock_debug_analysis_0_0)
MR_def_extern_entry(analysis__unsafe_get_debug_analysis_1_0)
MR_def_extern_entry(analysis__get_debug_analysis_3_0)
MR_def_extern_entry(analysis__debug_msg_3_0)
MR_def_extern_entry(analysis__lookup_results_1_5_0)
MR_def_extern_entry(analysis__lookup_results_4_0)
MR_def_extern_entry(analysis__lookup_matching_results_6_0)
MR_def_extern_entry(analysis__lookup_best_result_6_0)
MR_def_extern_entry(analysis__record_result_in_analysis_map_6_0)
MR_def_extern_entry(analysis__record_result_7_0)
MR_def_extern_entry(analysis__module_is_local_3_0)
MR_def_extern_entry(analysis__record_request_2_7_0)
MR_def_extern_entry(analysis__record_request_6_0)
MR_def_extern_entry(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0)
MR_def_extern_entry(analysis__record_dependency_2_7_0)
MR_def_extern_entry(analysis__record_dependency_7_0)
MR_def_extern_entry(analysis__lookup_requests_5_0)
MR_def_extern_entry(analysis__do_read_module_overall_status_6_0)
MR_def_extern_entry(analysis__load_module_analysis_results_6_0)
MR_def_extern_entry(analysis__prepare_intermodule_analysis_7_0)
MR_def_extern_entry(analysis__update_analysis_registry_2_7_0)
MR_def_extern_entry(analysis__update_analysis_registry_5_0)
MR_def_extern_entry(analysis__update_intermodule_dependencies_4_0)
MR_def_extern_entry(fn__analysis__lub_result_statuses_1_0)
MR_def_extern_entry(analysis__write_analysis_files_7_0)
MR_def_extern_entry(analysis__unsafe_set_debug_analysis_1_0)
MR_def_extern_entry(analysis__set_debug_analysis_3_0)
MR_def_extern_entry(analysis__enable_debug_messages_3_0)
MR_def_extern_entry(analysis__more_precise_answer_4_0)
MR_def_extern_entry(analysis__update_analysis_registry_3_8_0)
MR_def_extern_entry(analysis__update_analysis_registry_4_9_0)
MR_def_extern_entry(analysis__replace_result_in_list_6_0)
MR_def_extern_entry(analysis__replace_result_in_analysis_map_8_0)
MR_def_extern_entry(fn__analysis__imdg_dependent_modules_5_0)
MR_def_extern_entry(analysis__update_analysis_registry_5_9_0)
MR_def_extern_entry(fn__analysis__arc_module_name_3_0)
MR_def_extern_entry(analysis__ensure_module_status_loaded_6_0)
MR_def_extern_entry(analysis__taint_module_overall_status_7_0)
MR_def_extern_entry(analysis__write_no_change_in_result_6_0)
MR_def_extern_entry(analysis__write_changed_answer_6_0)
MR_def_extern_entry(analysis__write_tainting_module_4_0)
MR_def_extern_entry(analysis__clear_imdg_entries_pointing_at_3_0)
MR_def_extern_entry(analysis__update_intermodule_dependencies_2_4_0)
MR_def_extern_entry(analysis__write_clearing_entries_4_0)
MR_def_extern_entry(analysis__clear_imdg_entries_pointing_at_2_3_0)
MR_def_extern_entry(analysis__clear_imdg_entries_pointing_at_3_3_0)
MR_def_extern_entry(analysis__combine_func_imdg_3_0)
MR_def_extern_entry(analysis__combine_imdg_lists_3_0)
MR_def_extern_entry(analysis__load_module_imdg_6_0)
MR_def_extern_entry(analysis__maybe_write_module_overall_status_5_0)
MR_def_extern_entry(analysis__maybe_write_module_requests_5_0)
MR_def_extern_entry(analysis__maybe_write_module_imdg_5_0)
MR_def_extern_entry(fn__analysis__lub_result_statuses_2_3_0)
MR_def_extern_entry(fn__analysis__lub_result_statuses_3_3_0)
MR_def_extern_entry(fn__analysis__lub_result_statuses_4_2_0)
MR_def_extern_entry(analysis__pre_initialise_mutable_debug_analysis_0_0)
MR_def_extern_entry(analysis__set_debug_analysis_1_0)
MR_def_extern_entry(analysis__initialise_mutable_debug_analysis_0_0)
MR_def_extern_entry(analysis__get_debug_analysis_1_0)
MR_def_extern_entry(__Unify___analysis__analysis_info_0_0)
MR_def_extern_entry(__Compare___analysis__analysis_info_0_0)
MR_def_extern_entry(__Unify___analysis__analysis_map_1_0)
MR_def_extern_entry(__Compare___analysis__analysis_map_1_0)
MR_def_extern_entry(__Unify___analysis__analysis_name_0_0)
MR_def_extern_entry(__Compare___analysis__analysis_name_0_0)
MR_def_extern_entry(__Unify___analysis__analysis_request_0_0)
MR_def_extern_entry(__Compare___analysis__analysis_request_0_0)
MR_def_extern_entry(__Unify___analysis__analysis_result_2_0)
MR_def_extern_entry(__Compare___analysis__analysis_result_2_0)
MR_def_extern_entry(__Unify___analysis__analysis_status_0_0)
MR_def_extern_entry(__Compare___analysis__analysis_status_0_0)
MR_def_extern_entry(__Unify___analysis__analysis_type_0_0)
MR_def_extern_entry(__Compare___analysis__analysis_type_0_0)
MR_def_extern_entry(__Unify___analysis__any_call_0_0)
MR_def_extern_entry(__Compare___analysis__any_call_0_0)
MR_def_extern_entry(__Unify___analysis__fixpoint_type_0_0)
MR_def_extern_entry(__Compare___analysis__fixpoint_type_0_0)
MR_def_extern_entry(__Unify___analysis__func_analysis_map_1_0)
MR_def_extern_entry(__Compare___analysis__func_analysis_map_1_0)
MR_def_extern_entry(__Unify___analysis__func_id_0_0)
MR_def_extern_entry(__Compare___analysis__func_id_0_0)
MR_def_extern_entry(__Unify___analysis__imdg_arc_0_0)
MR_def_extern_entry(__Compare___analysis__imdg_arc_0_0)
MR_def_extern_entry(__Unify___analysis__make_analysis_registry_0_0)
MR_def_extern_entry(__Compare___analysis__make_analysis_registry_0_0)
MR_def_extern_entry(__Unify___analysis__module_analysis_map_1_0)
MR_def_extern_entry(__Compare___analysis__module_analysis_map_1_0)
MR_def_extern_entry(__Unify___analysis__no_func_info_0_0)
MR_def_extern_entry(__Compare___analysis__no_func_info_0_0)
MR_def_extern_entry(__Unify___analysis__some_analysis_result_0_0)
MR_def_extern_entry(__Compare___analysis__some_analysis_result_0_0)
MR_def_extern_entry(analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_0)
MR_def_extern_entry(analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_0)
MR_def_extern_entry(fn__analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_0)
MR_def_extern_entry(analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_0)
MR_decl_static(fn__analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_0)
MR_decl_static(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0)
MR_decl_static(analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0)
MR_decl_static(fn__analysis__IntroducedFrom__func__lookup_requests__675__1_2_0)
MR_decl_static(analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0)
MR_decl_static(analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0)
MR_decl_static(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0)
MR_decl_static(analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__601__1_4_0)
MR_decl_static(analysis__IntroducedFrom__pred__update_analysis_registry_5__889__1_7_0)
MR_decl_static(analysis__IntroducedFrom__pred__update_analysis_registry_5__918__1_7_0)
MR_decl_static(fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0)
MR_decl_static(analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1166__1_2_0)
MR_def_extern_entry(fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_0)
MR_def_extern_entry(fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_0)
MR_def_extern_entry(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
MR_def_extern_entry(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_49_44_32_50_93_95_48_2_0)
MR_def_extern_entry(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_0)
MR_def_extern_entry(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0)
MR_def_extern_entry(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0)
MR_def_extern_entry(fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_0)
MR_decl_static(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_0)
MR_decl_static(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_some_analysis_result_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_imdg_arc_0;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(analysis, analysis_request)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(analysis, some_analysis_result)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(analysis, imdg_arc)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(analysis, some_analysis_result)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(analysis, some_analysis_result)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(analysis, imdg_arc)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(analysis, imdg_arc)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_func_id_0;
static const struct mercury_type_1 mercury_common_1[8] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(analysis, func_id),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,1,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(analysis, func_id),
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,1,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(analysis, func_id),
MR_TAG_COMMON(0,0,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,1,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(analysis, func_id),
MR_COMMON(0,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(analysis, func_id),
MR_COMMON(0,6)
}
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
1,
17485
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__lookup_existing_call_patterns_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_typeclass_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_some_analysis_result_0;
static const MR_UserClosureId
mercury_data__closure_layout__analysis__lookup_requests_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_request_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__lookup_existing_call_patterns_5_0_1,
MR_COMMON(2,0),
3,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_CTOR0_ADDR(analysis, some_analysis_result),
1
},
{
(MR_Word *) &mercury_data__closure_layout__analysis__lookup_requests_5_0_1,
MR_COMMON(2,0),
3,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_CTOR0_ADDR(analysis, analysis_request),
1
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_CTOR_ADDR(analysis, analysis_result, 2),
1,
2
},
{
MR_CTOR_ADDR(analysis, analysis_result, 2),
2,
3
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
{
2,
17485,
17501
}
},
{
{
2,
17469,
17485
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__lookup_results_2_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__analysis__clear_imdg_entries_pointing_at_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_intermodule_dependencies_2_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__analysis__clear_imdg_entries_pointing_at_2_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__analysis__combine_func_imdg_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_status_0;
static const struct mercury_type_6 mercury_common_6[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__lookup_results_2_4_0_1,
MR_COMMON(5,0)
},
3,
{
MR_CTOR0_ADDR(private_builtin, typeclass_info),
MR_CTOR0_ADDR(analysis, some_analysis_result),
MR_COMMON(4,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__clear_imdg_entries_pointing_at_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,7),
MR_COMMON(1,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__update_intermodule_dependencies_2_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,7),
MR_COMMON(1,7),
MR_COMMON(1,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__clear_imdg_entries_pointing_at_2_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__combine_func_imdg_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(0,7),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(analysis, some_analysis_result),
MR_CTOR0_ADDR(analysis, analysis_status),
MR_CTOR0_ADDR(analysis, analysis_status)
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
3,
17469,
17485,
17501
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__lookup_matching_results_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0_1;
static const struct mercury_type_8 mercury_common_8[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__lookup_matching_results_6_0_1,
MR_COMMON(7,0),
4,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
2,
MR_COMMON(4,1)
},
{
(MR_Word *) &mercury_data__closure_layout__analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0_1,
MR_COMMON(7,0),
4,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
2,
MR_COMMON(4,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__lookup_best_result_6_0_1;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__lookup_best_result_6_0_1,
MR_COMMON(7,0),
5,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
MR_COMMON(4,1),
MR_COMMON(4,1),
MR_COMMON(4,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__prepare_intermodule_analysis_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__analysis__write_analysis_files_7_0_1;
static const struct mercury_type_10 mercury_common_10[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__prepare_intermodule_analysis_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__write_analysis_files_7_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_analysis_registry_2_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__update_analysis_registry_2_7_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_COMMON(1,6),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_intermodule_dependencies_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__analysis__lub_result_statuses_1_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_func_id_0;
static const struct mercury_type_12 mercury_common_12[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__update_intermodule_dependencies_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_CTOR0_ADDR(analysis, analysis_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__analysis__lub_result_statuses_1_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_COMMON(1,6),
MR_CTOR0_ADDR(analysis, analysis_status),
MR_CTOR0_ADDR(analysis, analysis_status)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(analysis, func_id),
MR_COMMON(0,4),
MR_CTOR0_ADDR(analysis, analysis_status),
MR_CTOR0_ADDR(analysis, analysis_status)
}
},
};

static const struct mercury_type_13 mercury_common_13[6] =
{
{
MR_COMMON(12,1),
MR_ENTRY_AP(fn__analysis__lub_result_statuses_2_3_0),
0
},
{
MR_COMMON(18,0),
MR_ENTRY_AP(fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(analysis__combine_func_imdg_3_0),
0
},
{
MR_COMMON(6,4),
MR_ENTRY_AP(analysis__combine_imdg_lists_3_0),
0
},
{
MR_COMMON(12,2),
MR_ENTRY_AP(fn__analysis__lub_result_statuses_3_3_0),
0
},
{
MR_COMMON(6,5),
MR_ENTRY_AP(fn__analysis__lub_result_statuses_4_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__write_analysis_files_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__analysis__write_analysis_files_7_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__analysis__write_analysis_files_7_0_4;
static const struct mercury_type_14 mercury_common_14[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__write_analysis_files_7_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(analysis, analysis_info),
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__write_analysis_files_7_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(analysis, analysis_info),
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__write_analysis_files_7_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(analysis, analysis_info),
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_analysis_registry_3_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_analysis_registry_4_9_0_1;
static const struct mercury_type_15 mercury_common_15[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__update_analysis_registry_3_8_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(analysis, func_id),
MR_COMMON(0,4),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__update_analysis_registry_4_9_0_1,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(analysis, func_id),
MR_CTOR0_ADDR(analysis, some_analysis_result),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__analysis__imdg_dependent_modules_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_imdg_arc_0;
static const struct mercury_type_16 mercury_common_16[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__analysis__imdg_dependent_modules_5_0_1,
MR_COMMON(5,1),
5,
MR_CTOR0_ADDR(private_builtin, typeclass_info),
1,
2,
MR_CTOR0_ADDR(analysis, imdg_arc),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_analysis_registry_5_9_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_analysis_registry_5_9_0_3;
static const struct mercury_type_17 mercury_common_17[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__update_analysis_registry_5_9_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(analysis, analysis_status),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__update_analysis_registry_5_9_0_3,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(analysis, analysis_status),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_CTOR0_ADDR(analysis, analysis_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_analysis_registry_5_9_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__analysis__clear_imdg_entries_pointing_at_3_3_0_1;
static const struct mercury_type_18 mercury_common_18[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__analysis__update_analysis_registry_5_9_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(analysis, analysis_request),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name)
},
{
(MR_Word *) &mercury_data__closure_layout__analysis__clear_imdg_entries_pointing_at_3_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_CTOR0_ADDR(analysis, imdg_arc)
},
};

static const struct mercury_type_19 mercury_common_19[1] =
{
{
MR_string_const("any", 3)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_request_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_analysis__type_ctor_info_analysis_request_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_analysis__type_ctor_info_func_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1analysis__type_ctor_info_analysis_request_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_status_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_analysis__type_ctor_info_analysis_status_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_analysis__type_ctor_info_some_analysis_result_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_analysis__type_ctor_info_func_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_analysis__type_ctor_info_imdg_arc_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_analysis__type_ctor_info_func_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1analysis__type_ctor_info_imdg_arc_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_make_analysis_registry_0;

const MR_PseudoTypeInfo mercury_data_analysis__field_types_analysis_info_0_0[] = {
	(MR_PseudoTypeInfo) 513,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_analysis__type_ctor_info_make_analysis_registry_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_analysis_request_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0analysis__type_ctor_info_analysis_status_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_some_analysis_result_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2analysis__type_ctor_info_func_id_0list__ti_list_1analysis__type_ctor_info_imdg_arc_0
};

const MR_ConstString mercury_data_analysis__field_names_analysis_info_0_0[] = {
	"compiler",
	"this_module",
	"make_analysis_registry",
	"local_module_names",
	"analysis_requests",
	"module_statuses",
	"old_analysis_results",
	"new_analysis_results",
	"old_imdg",
	"new_imdg"
};

const MR_DuExistLocn mercury_data_analysis__exist_locns_analysis_info_0_0[] = {
	{ 0, 1 }
};
extern const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_compiler_1;

static const MR_TypeClassConstraint_1Struct mercury_data_analysis__exist_tc_constr_analysis_info_0_0_1 = {
	&mercury_data_analysis__type_class_decl_compiler_1,
	{
	(MR_PseudoTypeInfo) 1
	}
};

const MR_TypeClassConstraint mercury_data_analysis__exist_tc_constrs_analysis_info_0_0[] = {
		(MR_TypeClassConstraint) &mercury_data_analysis__exist_tc_constr_analysis_info_0_0_1

};

static const MR_DuExistInfo mercury_data_analysis__exist_info_analysis_info_0_0 = {
	0,
	1,
	1,
	mercury_data_analysis__exist_locns_analysis_info_0_0,
	mercury_data_analysis__exist_tc_constrs_analysis_info_0_0
};

static const MR_DuFunctorDesc mercury_data_analysis__du_functor_desc_analysis_info_0_0 = {
	"analysis_info",
	10,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_analysis__field_types_analysis_info_0_0,
	mercury_data_analysis__field_names_analysis_info_0_0,
	NULL,
	&mercury_data_analysis__exist_info_analysis_info_0_0
};

const MR_DuFunctorDescPtr mercury_data_analysis__du_stag_ordered_analysis_info_0_0[] = {
	&mercury_data_analysis__du_functor_desc_analysis_info_0_0

};

const MR_DuPtagLayout mercury_data_analysis__du_ptag_ordered_analysis_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_analysis__du_stag_ordered_analysis_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_analysis__du_name_ordered_analysis_info_0[] = {
	&mercury_data_analysis__du_functor_desc_analysis_info_0_0
};

const MR_Integer mercury_data_analysis__functor_number_map_analysis_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__analysis_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__analysis_info_0_0)),
	"analysis",
	"analysis_info",
	{ (void *)mercury_data_analysis__du_name_ordered_analysis_info_0 },
	{ (void *)mercury_data_analysis__du_ptag_ordered_analysis_info_0 },
	1,
	4,
	mercury_data_analysis__functor_number_map_analysis_info_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_analysis__type_ctor_info_func_id_0,
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
}};

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1
}};

const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_map_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__analysis_map_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__analysis_map_1_0)),
	"analysis",
	"analysis_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__pseudo_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_name_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__analysis_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__analysis_name_0_0)),
	"analysis",
	"analysis_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_analysis__field_types_analysis_request_0_0[] = {
	(MR_PseudoTypeInfo) 514,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

const MR_ConstString mercury_data_analysis__field_names_analysis_request_0_0[] = {
	"req_call",
	"req_caller"
};

const MR_DuExistLocn mercury_data_analysis__exist_locns_analysis_request_0_0[] = {
	{ 0, 3 },
	{ 0, 4 }
};
extern const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_call_pattern_2;

static const MR_TypeClassConstraint_2Struct mercury_data_analysis__exist_tc_constr_analysis_request_0_0_1 = {
	&mercury_data_analysis__type_class_decl_call_pattern_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
	}
};

const MR_TypeClassConstraint mercury_data_analysis__exist_tc_constrs_analysis_request_0_0[] = {
		(MR_TypeClassConstraint) &mercury_data_analysis__exist_tc_constr_analysis_request_0_0_1

};

static const MR_DuExistInfo mercury_data_analysis__exist_info_analysis_request_0_0 = {
	0,
	2,
	1,
	mercury_data_analysis__exist_locns_analysis_request_0_0,
	mercury_data_analysis__exist_tc_constrs_analysis_request_0_0
};

static const MR_DuFunctorDesc mercury_data_analysis__du_functor_desc_analysis_request_0_0 = {
	"analysis_request",
	2,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_analysis__field_types_analysis_request_0_0,
	mercury_data_analysis__field_names_analysis_request_0_0,
	NULL,
	&mercury_data_analysis__exist_info_analysis_request_0_0
};

const MR_DuFunctorDescPtr mercury_data_analysis__du_stag_ordered_analysis_request_0_0[] = {
	&mercury_data_analysis__du_functor_desc_analysis_request_0_0

};

const MR_DuPtagLayout mercury_data_analysis__du_ptag_ordered_analysis_request_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_analysis__du_stag_ordered_analysis_request_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_analysis__du_name_ordered_analysis_request_0[] = {
	&mercury_data_analysis__du_functor_desc_analysis_request_0_0
};

const MR_Integer mercury_data_analysis__functor_number_map_analysis_request_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_request_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__analysis_request_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__analysis_request_0_0)),
	"analysis",
	"analysis_request",
	{ (void *)mercury_data_analysis__du_name_ordered_analysis_request_0 },
	{ (void *)mercury_data_analysis__du_ptag_ordered_analysis_request_0 },
	1,
	4,
	mercury_data_analysis__functor_number_map_analysis_request_0
};

const MR_PseudoTypeInfo mercury_data_analysis__field_types_analysis_result_2_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) &mercury_data_analysis__type_ctor_info_analysis_status_0
};

const MR_ConstString mercury_data_analysis__field_names_analysis_result_2_0[] = {
	"ar_call",
	"ar_answer",
	"ar_status"
};

static const MR_DuFunctorDesc mercury_data_analysis__du_functor_desc_analysis_result_2_0 = {
	"analysis_result",
	3,
	3,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_analysis__field_types_analysis_result_2_0,
	mercury_data_analysis__field_names_analysis_result_2_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_analysis__du_stag_ordered_analysis_result_2_0[] = {
	&mercury_data_analysis__du_functor_desc_analysis_result_2_0

};

const MR_DuPtagLayout mercury_data_analysis__du_ptag_ordered_analysis_result_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_analysis__du_stag_ordered_analysis_result_2_0 }

};

const MR_DuFunctorDescPtr mercury_data_analysis__du_name_ordered_analysis_result_2[] = {
	&mercury_data_analysis__du_functor_desc_analysis_result_2_0
};

const MR_Integer mercury_data_analysis__functor_number_map_analysis_result_2[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_result_2 = {
	2,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__analysis_result_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__analysis_result_2_0)),
	"analysis",
	"analysis_result",
	{ (void *)mercury_data_analysis__du_name_ordered_analysis_result_2 },
	{ (void *)mercury_data_analysis__du_ptag_ordered_analysis_result_2 },
	1,
	4,
	mercury_data_analysis__functor_number_map_analysis_result_2
};

static const MR_EnumFunctorDesc mercury_data_analysis__enum_functor_desc_analysis_status_0_0 = {
	"invalid",
	0
};

static const MR_EnumFunctorDesc mercury_data_analysis__enum_functor_desc_analysis_status_0_1 = {
	"suboptimal",
	1
};

static const MR_EnumFunctorDesc mercury_data_analysis__enum_functor_desc_analysis_status_0_2 = {
	"optimal",
	2
};

const MR_EnumFunctorDescPtr mercury_data_analysis__enum_value_ordered_analysis_status_0[] = {
	&mercury_data_analysis__enum_functor_desc_analysis_status_0_0,
	&mercury_data_analysis__enum_functor_desc_analysis_status_0_1,
	&mercury_data_analysis__enum_functor_desc_analysis_status_0_2
};

const MR_EnumFunctorDescPtr mercury_data_analysis__enum_name_ordered_analysis_status_0[] = {
	&mercury_data_analysis__enum_functor_desc_analysis_status_0_0,
	&mercury_data_analysis__enum_functor_desc_analysis_status_0_2,
	&mercury_data_analysis__enum_functor_desc_analysis_status_0_1
};

const MR_Integer mercury_data_analysis__functor_number_map_analysis_status_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_status_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__analysis_status_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__analysis_status_0_0)),
	"analysis",
	"analysis_status",
	{ (void *)mercury_data_analysis__enum_name_ordered_analysis_status_0 },
	{ (void *)mercury_data_analysis__enum_value_ordered_analysis_status_0 },
	3,
	4,
	mercury_data_analysis__functor_number_map_analysis_status_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_unit__pti_unit_1__pseudo_514 = {
	&mercury_data_unit__type_ctor_info_unit_1,
{	(MR_PseudoTypeInfo) 514
}};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_unit__pti_unit_1__pseudo_515 = {
	&mercury_data_unit__type_ctor_info_unit_1,
{	(MR_PseudoTypeInfo) 515
}};

const MR_PseudoTypeInfo mercury_data_analysis__field_types_analysis_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_unit__pti_unit_1__pseudo_514,
	(MR_PseudoTypeInfo) &mercury_data_unit__pti_unit_1__pseudo_515
};

const MR_DuExistLocn mercury_data_analysis__exist_locns_analysis_type_0_0[] = {
	{ 0, 3 },
	{ 0, 4 },
	{ 0, 5 }
};
extern const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_analysis_3;

static const MR_TypeClassConstraint_3Struct mercury_data_analysis__exist_tc_constr_analysis_type_0_0_1 = {
	&mercury_data_analysis__type_class_decl_analysis_3,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 3
	}
};

const MR_TypeClassConstraint mercury_data_analysis__exist_tc_constrs_analysis_type_0_0[] = {
		(MR_TypeClassConstraint) &mercury_data_analysis__exist_tc_constr_analysis_type_0_0_1

};

static const MR_DuExistInfo mercury_data_analysis__exist_info_analysis_type_0_0 = {
	0,
	3,
	1,
	mercury_data_analysis__exist_locns_analysis_type_0_0,
	mercury_data_analysis__exist_tc_constrs_analysis_type_0_0
};

static const MR_DuFunctorDesc mercury_data_analysis__du_functor_desc_analysis_type_0_0 = {
	"analysis_type",
	2,
	3,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_analysis__field_types_analysis_type_0_0,
	NULL,
	NULL,
	&mercury_data_analysis__exist_info_analysis_type_0_0
};

const MR_DuFunctorDescPtr mercury_data_analysis__du_stag_ordered_analysis_type_0_0[] = {
	&mercury_data_analysis__du_functor_desc_analysis_type_0_0

};

const MR_DuPtagLayout mercury_data_analysis__du_ptag_ordered_analysis_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_analysis__du_stag_ordered_analysis_type_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_analysis__du_name_ordered_analysis_type_0[] = {
	&mercury_data_analysis__du_functor_desc_analysis_type_0_0
};

const MR_Integer mercury_data_analysis__functor_number_map_analysis_type_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_analysis_type_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__analysis_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__analysis_type_0_0)),
	"analysis",
	"analysis_type",
	{ (void *)mercury_data_analysis__du_name_ordered_analysis_type_0 },
	{ (void *)mercury_data_analysis__du_ptag_ordered_analysis_type_0 },
	1,
	4,
	mercury_data_analysis__functor_number_map_analysis_type_0
};

static const MR_EnumFunctorDesc mercury_data_analysis__enum_functor_desc_any_call_0_0 = {
	"any_call",
	0
};

const MR_EnumFunctorDescPtr mercury_data_analysis__enum_value_ordered_any_call_0[] = {
	&mercury_data_analysis__enum_functor_desc_any_call_0_0
};

const MR_EnumFunctorDescPtr mercury_data_analysis__enum_name_ordered_any_call_0[] = {
	&mercury_data_analysis__enum_functor_desc_any_call_0_0
};

const MR_Integer mercury_data_analysis__functor_number_map_any_call_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_any_call_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__any_call_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__any_call_0_0)),
	"analysis",
	"any_call",
	{ (void *)mercury_data_analysis__enum_name_ordered_any_call_0 },
	{ (void *)mercury_data_analysis__enum_value_ordered_any_call_0 },
	1,
	4,
	mercury_data_analysis__functor_number_map_any_call_0
};

static const MR_EnumFunctorDesc mercury_data_analysis__enum_functor_desc_fixpoint_type_0_0 = {
	"least_fixpoint",
	0
};

static const MR_EnumFunctorDesc mercury_data_analysis__enum_functor_desc_fixpoint_type_0_1 = {
	"greatest_fixpoint",
	1
};

const MR_EnumFunctorDescPtr mercury_data_analysis__enum_value_ordered_fixpoint_type_0[] = {
	&mercury_data_analysis__enum_functor_desc_fixpoint_type_0_0,
	&mercury_data_analysis__enum_functor_desc_fixpoint_type_0_1
};

const MR_EnumFunctorDescPtr mercury_data_analysis__enum_name_ordered_fixpoint_type_0[] = {
	&mercury_data_analysis__enum_functor_desc_fixpoint_type_0_1,
	&mercury_data_analysis__enum_functor_desc_fixpoint_type_0_0
};

const MR_Integer mercury_data_analysis__functor_number_map_fixpoint_type_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_fixpoint_type_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__fixpoint_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__fixpoint_type_0_0)),
	"analysis",
	"fixpoint_type",
	{ (void *)mercury_data_analysis__enum_name_ordered_fixpoint_type_0 },
	{ (void *)mercury_data_analysis__enum_value_ordered_fixpoint_type_0 },
	2,
	4,
	mercury_data_analysis__functor_number_map_fixpoint_type_0
};

const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_func_analysis_map_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__func_analysis_map_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__func_analysis_map_1_0)),
	"analysis",
	"func_analysis_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_analysis__field_types_func_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_analysis__field_names_func_id_0_0[] = {
	"fid_pf",
	"fid_name",
	"fid_arity",
	"fid_mode"
};

static const MR_DuFunctorDesc mercury_data_analysis__du_functor_desc_func_id_0_0 = {
	"func_id",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_analysis__field_types_func_id_0_0,
	mercury_data_analysis__field_names_func_id_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_analysis__du_stag_ordered_func_id_0_0[] = {
	&mercury_data_analysis__du_functor_desc_func_id_0_0

};

const MR_DuPtagLayout mercury_data_analysis__du_ptag_ordered_func_id_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_analysis__du_stag_ordered_func_id_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_analysis__du_name_ordered_func_id_0[] = {
	&mercury_data_analysis__du_functor_desc_func_id_0_0
};

const MR_Integer mercury_data_analysis__functor_number_map_func_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_func_id_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__func_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__func_id_0_0)),
	"analysis",
	"func_id",
	{ (void *)mercury_data_analysis__du_name_ordered_func_id_0 },
	{ (void *)mercury_data_analysis__du_ptag_ordered_func_id_0 },
	1,
	4,
	mercury_data_analysis__functor_number_map_func_id_0
};

const MR_PseudoTypeInfo mercury_data_analysis__field_types_imdg_arc_0_0[] = {
	(MR_PseudoTypeInfo) 514,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

const MR_ConstString mercury_data_analysis__field_names_imdg_arc_0_0[] = {
	"imdg_call",
	"imdg_caller"
};

const MR_DuExistLocn mercury_data_analysis__exist_locns_imdg_arc_0_0[] = {
	{ 0, 3 },
	{ 0, 4 }
};
extern const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_call_pattern_2;

static const MR_TypeClassConstraint_2Struct mercury_data_analysis__exist_tc_constr_imdg_arc_0_0_1 = {
	&mercury_data_analysis__type_class_decl_call_pattern_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
	}
};

const MR_TypeClassConstraint mercury_data_analysis__exist_tc_constrs_imdg_arc_0_0[] = {
		(MR_TypeClassConstraint) &mercury_data_analysis__exist_tc_constr_imdg_arc_0_0_1

};

static const MR_DuExistInfo mercury_data_analysis__exist_info_imdg_arc_0_0 = {
	0,
	2,
	1,
	mercury_data_analysis__exist_locns_imdg_arc_0_0,
	mercury_data_analysis__exist_tc_constrs_imdg_arc_0_0
};

static const MR_DuFunctorDesc mercury_data_analysis__du_functor_desc_imdg_arc_0_0 = {
	"imdg_arc",
	2,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_analysis__field_types_imdg_arc_0_0,
	mercury_data_analysis__field_names_imdg_arc_0_0,
	NULL,
	&mercury_data_analysis__exist_info_imdg_arc_0_0
};

const MR_DuFunctorDescPtr mercury_data_analysis__du_stag_ordered_imdg_arc_0_0[] = {
	&mercury_data_analysis__du_functor_desc_imdg_arc_0_0

};

const MR_DuPtagLayout mercury_data_analysis__du_ptag_ordered_imdg_arc_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_analysis__du_stag_ordered_imdg_arc_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_analysis__du_name_ordered_imdg_arc_0[] = {
	&mercury_data_analysis__du_functor_desc_imdg_arc_0_0
};

const MR_Integer mercury_data_analysis__functor_number_map_imdg_arc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_imdg_arc_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__imdg_arc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__imdg_arc_0_0)),
	"analysis",
	"imdg_arc",
	{ (void *)mercury_data_analysis__du_name_ordered_imdg_arc_0 },
	{ (void *)mercury_data_analysis__du_ptag_ordered_imdg_arc_0 },
	1,
	4,
	mercury_data_analysis__functor_number_map_imdg_arc_0
};

static const MR_EnumFunctorDesc mercury_data_analysis__enum_functor_desc_make_analysis_registry_0_0 = {
	"make_analysis_registry",
	0
};

static const MR_EnumFunctorDesc mercury_data_analysis__enum_functor_desc_make_analysis_registry_0_1 = {
	"use_analysis_registry_only",
	1
};

const MR_EnumFunctorDescPtr mercury_data_analysis__enum_value_ordered_make_analysis_registry_0[] = {
	&mercury_data_analysis__enum_functor_desc_make_analysis_registry_0_0,
	&mercury_data_analysis__enum_functor_desc_make_analysis_registry_0_1
};

const MR_EnumFunctorDescPtr mercury_data_analysis__enum_name_ordered_make_analysis_registry_0[] = {
	&mercury_data_analysis__enum_functor_desc_make_analysis_registry_0_0,
	&mercury_data_analysis__enum_functor_desc_make_analysis_registry_0_1
};

const MR_Integer mercury_data_analysis__functor_number_map_make_analysis_registry_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_make_analysis_registry_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__make_analysis_registry_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__make_analysis_registry_0_0)),
	"analysis",
	"make_analysis_registry",
	{ (void *)mercury_data_analysis__enum_name_ordered_make_analysis_registry_0 },
	{ (void *)mercury_data_analysis__enum_value_ordered_make_analysis_registry_0 },
	2,
	4,
	mercury_data_analysis__functor_number_map_make_analysis_registry_0
};

const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_module_analysis_map_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__module_analysis_map_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__module_analysis_map_1_0)),
	"analysis",
	"module_analysis_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__pseudo_tree234__pti_tree234_2__plain_analysis__type_ctor_info_func_id_0__pseudo_list__pti_list_1__pseudo_1 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_analysis__enum_functor_desc_no_func_info_0_0 = {
	"no_func_info",
	0
};

const MR_EnumFunctorDescPtr mercury_data_analysis__enum_value_ordered_no_func_info_0[] = {
	&mercury_data_analysis__enum_functor_desc_no_func_info_0_0
};

const MR_EnumFunctorDescPtr mercury_data_analysis__enum_name_ordered_no_func_info_0[] = {
	&mercury_data_analysis__enum_functor_desc_no_func_info_0_0
};

const MR_Integer mercury_data_analysis__functor_number_map_no_func_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_no_func_info_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_DUMMY,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__no_func_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__no_func_info_0_0)),
	"analysis",
	"no_func_info",
	{ (void *)mercury_data_analysis__enum_name_ordered_no_func_info_0 },
	{ (void *)mercury_data_analysis__enum_value_ordered_no_func_info_0 },
	1,
	4,
	mercury_data_analysis__functor_number_map_no_func_info_0
};

const MR_PseudoTypeInfo mercury_data_analysis__field_types_some_analysis_result_0_0[] = {
	(MR_PseudoTypeInfo) 514,
	(MR_PseudoTypeInfo) 515,
	(MR_PseudoTypeInfo) &mercury_data_analysis__type_ctor_info_analysis_status_0
};

const MR_ConstString mercury_data_analysis__field_names_some_analysis_result_0_0[] = {
	"some_ar_call",
	"some_ar_answer",
	"some_ar_status"
};

const MR_DuExistLocn mercury_data_analysis__exist_locns_some_analysis_result_0_0[] = {
	{ 0, 3 },
	{ 0, 4 },
	{ 0, 5 }
};
extern const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_analysis_3;

static const MR_TypeClassConstraint_3Struct mercury_data_analysis__exist_tc_constr_some_analysis_result_0_0_1 = {
	&mercury_data_analysis__type_class_decl_analysis_3,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 3
	}
};

const MR_TypeClassConstraint mercury_data_analysis__exist_tc_constrs_some_analysis_result_0_0[] = {
		(MR_TypeClassConstraint) &mercury_data_analysis__exist_tc_constr_some_analysis_result_0_0_1

};

static const MR_DuExistInfo mercury_data_analysis__exist_info_some_analysis_result_0_0 = {
	0,
	3,
	1,
	mercury_data_analysis__exist_locns_some_analysis_result_0_0,
	mercury_data_analysis__exist_tc_constrs_some_analysis_result_0_0
};

static const MR_DuFunctorDesc mercury_data_analysis__du_functor_desc_some_analysis_result_0_0 = {
	"some_analysis_result",
	3,
	3,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_analysis__field_types_some_analysis_result_0_0,
	mercury_data_analysis__field_names_some_analysis_result_0_0,
	NULL,
	&mercury_data_analysis__exist_info_some_analysis_result_0_0
};

const MR_DuFunctorDescPtr mercury_data_analysis__du_stag_ordered_some_analysis_result_0_0[] = {
	&mercury_data_analysis__du_functor_desc_some_analysis_result_0_0

};

const MR_DuPtagLayout mercury_data_analysis__du_ptag_ordered_some_analysis_result_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_analysis__du_stag_ordered_some_analysis_result_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_analysis__du_name_ordered_some_analysis_result_0[] = {
	&mercury_data_analysis__du_functor_desc_some_analysis_result_0_0
};

const MR_Integer mercury_data_analysis__functor_number_map_some_analysis_result_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_analysis__type_ctor_info_some_analysis_result_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___analysis__some_analysis_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___analysis__some_analysis_result_0_0)),
	"analysis",
	"some_analysis_result",
	{ (void *)mercury_data_analysis__du_name_ordered_some_analysis_result_0 },
	{ (void *)mercury_data_analysis__du_ptag_ordered_some_analysis_result_0 },
	1,
	4,
	mercury_data_analysis__functor_number_map_some_analysis_result_0
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 2,
	(MR_Code *) 2,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_0))
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_analysis__call_pattern__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 2,
	(MR_Code *) 2,
	(MR_Code *) 0,
	
};

const MR_ConstString mercury_data_analysis__type_class_id_var_names_to_term_1[] = {
	"S",
};

const MR_TypeClassMethod mercury_data_analysis__type_class_id_method_ids_to_term_1[] = {
	{ "to_term", 2, MR_FUNCTION },
	{ "from_term", 2, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_analysis__type_class_id_to_term_1 = {
	"analysis",
	"to_term",
	1,
	1,
	2,
	mercury_data_analysis__type_class_id_var_names_to_term_1,
	mercury_data_analysis__type_class_id_method_ids_to_term_1
};

const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_to_term_1 = {
	&mercury_data_analysis__type_class_id_to_term_1,
	0,
	0,
	NULL
};

const MR_ConstString mercury_data_analysis__type_class_id_var_names_partial_order_2[] = {
	"FuncInfo",
	"T",
};

const MR_TypeClassMethod mercury_data_analysis__type_class_id_method_ids_partial_order_2[] = {
	{ "more_precise_than", 3, MR_PREDICATE },
	{ "equivalent", 3, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_analysis__type_class_id_partial_order_2 = {
	"analysis",
	"partial_order",
	2,
	2,
	2,
	mercury_data_analysis__type_class_id_var_names_partial_order_2,
	mercury_data_analysis__type_class_id_method_ids_partial_order_2
};

const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_partial_order_2 = {
	&mercury_data_analysis__type_class_id_partial_order_2,
	0,
	0,
	NULL
};

const MR_ConstString mercury_data_analysis__type_class_id_var_names_compiler_1[] = {
	"Compiler",
};

const MR_TypeClassMethod mercury_data_analysis__type_class_id_method_ids_compiler_1[] = {
	{ "compiler_name", 2, MR_FUNCTION },
	{ "analyses", 3, MR_FUNCTION },
	{ "module_name_to_read_file_name", 7, MR_PREDICATE },
	{ "module_name_to_write_file_name", 7, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_analysis__type_class_id_compiler_1 = {
	"analysis",
	"compiler",
	1,
	1,
	4,
	mercury_data_analysis__type_class_id_var_names_compiler_1,
	mercury_data_analysis__type_class_id_method_ids_compiler_1
};

const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_compiler_1 = {
	&mercury_data_analysis__type_class_id_compiler_1,
	0,
	0,
	NULL
};

const MR_ConstString mercury_data_analysis__type_class_id_var_names_call_pattern_2[] = {
	"FuncInfo",
	"Call",
};

static const MR_TypeClassId mercury_data_analysis__type_class_id_call_pattern_2 = {
	"analysis",
	"call_pattern",
	2,
	2,
	0,
	mercury_data_analysis__type_class_id_var_names_call_pattern_2,
	NULL
};
extern const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_partial_order_2;

static const MR_TypeClassConstraint_2Struct mercury_data_analysis__type_class_decl_super_call_pattern_2_1 = {
	&mercury_data_analysis__type_class_decl_partial_order_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
	}
};
extern const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_to_term_1;

static const MR_TypeClassConstraint_1Struct mercury_data_analysis__type_class_decl_super_call_pattern_2_2 = {
	&mercury_data_analysis__type_class_decl_to_term_1,
	{
	(MR_PseudoTypeInfo) 2
	}
};

const MR_TypeClassConstraint mercury_data_analysis__type_class_decl_supers_call_pattern_2[] = {
	(MR_TypeClassConstraint) &mercury_data_analysis__type_class_decl_super_call_pattern_2_1,
	(MR_TypeClassConstraint) &mercury_data_analysis__type_class_decl_super_call_pattern_2_2
};

const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_call_pattern_2 = {
	&mercury_data_analysis__type_class_id_call_pattern_2,
	0,
	2,
	mercury_data_analysis__type_class_decl_supers_call_pattern_2
};

const MR_ConstString mercury_data_analysis__type_class_id_var_names_answer_pattern_2[] = {
	"FuncInfo",
	"Answer",
};

static const MR_TypeClassId mercury_data_analysis__type_class_id_answer_pattern_2 = {
	"analysis",
	"answer_pattern",
	2,
	2,
	0,
	mercury_data_analysis__type_class_id_var_names_answer_pattern_2,
	NULL
};
extern const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_partial_order_2;

static const MR_TypeClassConstraint_2Struct mercury_data_analysis__type_class_decl_super_answer_pattern_2_1 = {
	&mercury_data_analysis__type_class_decl_partial_order_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
	}
};
extern const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_to_term_1;

static const MR_TypeClassConstraint_1Struct mercury_data_analysis__type_class_decl_super_answer_pattern_2_2 = {
	&mercury_data_analysis__type_class_decl_to_term_1,
	{
	(MR_PseudoTypeInfo) 2
	}
};

const MR_TypeClassConstraint mercury_data_analysis__type_class_decl_supers_answer_pattern_2[] = {
	(MR_TypeClassConstraint) &mercury_data_analysis__type_class_decl_super_answer_pattern_2_1,
	(MR_TypeClassConstraint) &mercury_data_analysis__type_class_decl_super_answer_pattern_2_2
};

const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_answer_pattern_2 = {
	&mercury_data_analysis__type_class_id_answer_pattern_2,
	0,
	2,
	mercury_data_analysis__type_class_decl_supers_answer_pattern_2
};

const MR_ConstString mercury_data_analysis__type_class_id_var_names_analysis_3[] = {
	"FuncInfo",
	"Call",
	"Answer",
};

const MR_TypeClassMethod mercury_data_analysis__type_class_id_method_ids_analysis_3[] = {
	{ "analysis_name", 3, MR_FUNCTION },
	{ "analysis_version_number", 3, MR_FUNCTION },
	{ "preferred_fixpoint_type", 3, MR_FUNCTION },
	{ "bottom", 3, MR_FUNCTION },
	{ "top", 3, MR_FUNCTION },
	{ "get_func_info", 6, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_analysis__type_class_id_analysis_3 = {
	"analysis",
	"analysis",
	3,
	3,
	6,
	mercury_data_analysis__type_class_id_var_names_analysis_3,
	mercury_data_analysis__type_class_id_method_ids_analysis_3
};
extern const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_call_pattern_2;

static const MR_TypeClassConstraint_2Struct mercury_data_analysis__type_class_decl_super_analysis_3_1 = {
	&mercury_data_analysis__type_class_decl_call_pattern_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
	}
};
extern const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_answer_pattern_2;

static const MR_TypeClassConstraint_2Struct mercury_data_analysis__type_class_decl_super_analysis_3_2 = {
	&mercury_data_analysis__type_class_decl_answer_pattern_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 3
	}
};

const MR_TypeClassConstraint mercury_data_analysis__type_class_decl_supers_analysis_3[] = {
	(MR_TypeClassConstraint) &mercury_data_analysis__type_class_decl_super_analysis_3_1,
	(MR_TypeClassConstraint) &mercury_data_analysis__type_class_decl_super_analysis_3_2
};

const MR_TypeClassDeclStruct mercury_data_analysis__type_class_decl_analysis_3 = {
	&mercury_data_analysis__type_class_id_analysis_3,
	0,
	2,
	mercury_data_analysis__type_class_decl_supers_analysis_3
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_0_1 = {
{
MR_FUNCTION,
"analysis",
"analysis",
"lub_result_statuses_4",
3,
0
},
"analysis",
"analysis.m",
1366,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_0_1 = {
{
MR_FUNCTION,
"analysis",
"analysis",
"lub_result_statuses_3",
4,
0
},
"analysis",
"analysis.m",
1360,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__combine_func_imdg_3_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"combine_imdg_lists",
3,
0
},
"analysis",
"analysis.m",
1173,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__clear_imdg_entries_pointing_at_3_3_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"lambda_analysis_m_1166",
2,
0
},
"analysis",
"analysis.m",
1166,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__clear_imdg_entries_pointing_at_2_3_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"clear_imdg_entries_pointing_at_3",
3,
0
},
"analysis",
"analysis.m",
1159,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_intermodule_dependencies_2_4_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"combine_func_imdg",
3,
0
},
"analysis",
"analysis.m",
1129,
"20"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__clear_imdg_entries_pointing_at_3_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"clear_imdg_entries_pointing_at_2",
3,
0
},
"analysis",
"analysis.m",
1151,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_analysis_registry_5_9_0_3 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"taint_module_overall_status",
7,
0
},
"analysis",
"analysis.m",
952,
"73"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_analysis_registry_5_9_0_2 = {
{
MR_FUNCTION,
"analysis",
"analysis",
"lambda_analysis_m_947",
2,
0
},
"analysis",
"analysis.m",
947,
"65"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_analysis_registry_5_9_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"taint_module_overall_status",
7,
0
},
"analysis",
"analysis.m",
920,
"45"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__analysis__imdg_dependent_modules_5_0_1 = {
{
MR_FUNCTION,
"analysis",
"analysis",
"arc_module_name",
4,
0
},
"analysis",
"analysis.m",
1011,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_analysis_registry_4_9_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"update_analysis_registry_5",
9,
0
},
"analysis",
"analysis.m",
869,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_analysis_registry_3_8_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"update_analysis_registry_4",
9,
0
},
"analysis",
"analysis.m",
858,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__write_analysis_files_7_0_4 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"maybe_write_module_imdg",
5,
0
},
"analysis",
"analysis.m",
1275,
"41"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__write_analysis_files_7_0_3 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"maybe_write_module_requests",
5,
0
},
"analysis",
"analysis.m",
1267,
"38"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__write_analysis_files_7_0_2 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"maybe_write_module_overall_status",
5,
0
},
"analysis",
"analysis.m",
1258,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__write_analysis_files_7_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"load_module_imdg",
6,
0
},
"analysis",
"analysis.m",
1240,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__analysis__lub_result_statuses_1_0_1 = {
{
MR_FUNCTION,
"analysis",
"analysis",
"lub_result_statuses_2",
4,
0
},
"analysis",
"analysis.m",
1353,
"4"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_intermodule_dependencies_4_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"update_intermodule_dependencies_2",
4,
0
},
"analysis",
"analysis.m",
1114,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__update_analysis_registry_2_7_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"update_analysis_registry_3",
8,
0
},
"analysis",
"analysis.m",
849,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__prepare_intermodule_analysis_7_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"load_module_analysis_results",
6,
0
},
"analysis",
"analysis.m",
1190,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__lookup_requests_5_0_1 = {
{
MR_FUNCTION,
"analysis",
"analysis",
"lambda_analysis_m_675",
3,
0
},
"analysis",
"analysis.m",
675,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"lambda_analysis_m_601",
4,
0
},
"analysis",
"analysis.m",
601,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__lookup_best_result_6_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"more_precise_answer",
4,
0
},
"analysis",
"analysis.m",
573,
"32"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__lookup_matching_results_6_0_1 = {
{
MR_PREDICATE,
"analysis",
"analysis",
"lambda_analysis_m_548",
4,
0
},
"analysis",
"analysis.m",
548,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__lookup_results_2_4_0_1 = {
{
MR_FUNCTION,
"analysis",
"analysis",
"lambda_analysis_m_536",
3,
0
},
"analysis",
"analysis.m",
536,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__analysis__lookup_existing_call_patterns_5_0_1 = {
{
MR_FUNCTION,
"analysis",
"analysis",
"lambda_analysis_m_480",
3,
0
},
"analysis",
"analysis.m",
480,
"23"
};


MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(analysis_module0)
	MR_init_entry1(fn__analysis__compiler_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__compiler_name_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compiler_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__compiler_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__analysis__compiler_name_1_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(analysis_module1)
	MR_init_entry1(fn__analysis__analyses_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__analyses_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'analyses'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__analyses_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__analysis__analyses_2_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_5);

MR_BEGIN_MODULE(analysis_module2)
	MR_init_entry1(analysis__module_name_to_read_file_name_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__module_name_to_read_file_name_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_name_to_read_file_name'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__module_name_to_read_file_name_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__module_name_to_read_file_name_7_0));
	MR_np_tailcall_ent(do_call_class_method_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module3)
	MR_init_entry1(analysis__module_name_to_write_file_name_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__module_name_to_write_file_name_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_name_to_write_file_name'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__module_name_to_write_file_name_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__module_name_to_write_file_name_7_0));
	MR_np_tailcall_ent(do_call_class_method_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_0);

MR_BEGIN_MODULE(analysis_module4)
	MR_init_entry1(fn__analysis__analysis_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__analysis_name_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'analysis_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__analysis_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__analysis__analysis_name_2_0));
	MR_np_tailcall_ent(do_call_class_method_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module5)
	MR_init_entry1(fn__analysis__analysis_version_number_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__analysis_version_number_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'analysis_version_number'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__analysis_version_number_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__analysis__analysis_version_number_2_0));
	MR_np_tailcall_ent(do_call_class_method_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module6)
	MR_init_entry1(fn__analysis__preferred_fixpoint_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__preferred_fixpoint_type_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'preferred_fixpoint_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__preferred_fixpoint_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__analysis__preferred_fixpoint_type_2_0));
	MR_np_tailcall_ent(do_call_class_method_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module7)
	MR_init_entry1(fn__analysis__bottom_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__bottom_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bottom'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__bottom_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 4;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__analysis__bottom_2_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module8)
	MR_init_entry1(fn__analysis__top_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__top_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'top'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__top_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 5;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__analysis__top_2_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_3);

MR_BEGIN_MODULE(analysis_module9)
	MR_init_entry1(analysis__get_func_info_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__get_func_info_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_func_info'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__get_func_info_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r2 = (MR_Integer) 6;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__get_func_info_6_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module10)
	MR_init_entry1(analysis__more_precise_than_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__more_precise_than_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'more_precise_than'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__more_precise_than_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__more_precise_than_3_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module11)
	MR_init_entry1(analysis__equivalent_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__equivalent_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'equivalent'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__equivalent_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__equivalent_3_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module12)
	MR_init_entry1(fn__analysis__to_term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__to_term_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_term'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__to_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__analysis__to_term_1_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module13)
	MR_init_entry1(analysis__from_term_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__from_term_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_term'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__from_term_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__from_term_2_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(analysis_module14)
	MR_init_entry1(fn__analysis__lub_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__lub_2_0);
	MR_init_label3(fn__analysis__lub_2_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lub'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__lub_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		fn__analysis__lub_2_0_i2);
MR_def_label(fn__analysis__lub_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__analysis__lub_2_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(fn__analysis__lub_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__analysis__lub_2_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(fn__analysis__lub_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(analysis_module15)
	MR_init_entry1(fn__analysis__init_analysis_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__init_analysis_info_3_0);
	MR_init_label9(fn__analysis__init_analysis_info_3_0,3,2,4,8,9,13,14,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_analysis_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__init_analysis_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__analysis__init_analysis_info_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Integer) 1;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_GOTO_LAB(fn__analysis__init_analysis_info_3_0_i2);
MR_def_label(fn__analysis__init_analysis_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = (MR_Integer) 0;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
MR_def_label(fn__analysis__init_analysis_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__set__init_0_0,
		fn__analysis__init_analysis_info_3_0_i4);
MR_def_label(fn__analysis__init_analysis_info_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(9) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__analysis__init_analysis_info_3_0_i8);
MR_def_label(fn__analysis__init_analysis_info_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__analysis__init_analysis_info_3_0_i9);
MR_def_label(fn__analysis__init_analysis_info_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__analysis__init_analysis_info_3_0_i13);
MR_def_label(fn__analysis__init_analysis_info_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__analysis__init_analysis_info_3_0_i14);
MR_def_label(fn__analysis__init_analysis_info_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__analysis__init_analysis_info_3_0_i18);
MR_def_label(fn__analysis__init_analysis_info_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__analysis__init_analysis_info_3_0_i19);
MR_def_label(fn__analysis__init_analysis_info_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 11);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_sv(2);
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = MR_sv(4);
	MR_tfield(0, MR_r2, 5) = MR_sv(5);
	MR_tfield(0, MR_r2, 6) = MR_sv(6);
	MR_tfield(0, MR_r2, 7) = MR_sv(10);
	MR_tfield(0, MR_r2, 8) = MR_sv(9);
	MR_tfield(0, MR_r2, 9) = MR_sv(8);
	MR_tfield(0, MR_r2, 10) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(fn__map__elem_2_0);
MR_decl_entry(private_builtin__type_info_from_typeclass_info_3_0);
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(analysis_module16)
	MR_init_entry1(analysis__lookup_existing_call_patterns_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__lookup_existing_call_patterns_5_0);
	MR_init_label8(analysis__lookup_existing_call_patterns_5_0,3,2,6,11,13,15,17,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_existing_call_patterns'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__lookup_existing_call_patterns_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(5) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		analysis__lookup_existing_call_patterns_5_0_i3);
MR_def_label(analysis__lookup_existing_call_patterns_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__lookup_existing_call_patterns_5_0_i2);
	}
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(analysis__lookup_existing_call_patterns_5_0_i6);
MR_def_label(analysis__lookup_existing_call_patterns_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("analysis", 8);
	MR_r2 = (MR_Word) MR_string_const("predicate \140analysis.lookup_existing_call_patterns\'/5", 52);
	MR_r3 = (MR_Word) MR_string_const("not this_module", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		analysis__lookup_existing_call_patterns_5_0_i6);
MR_def_label(analysis__lookup_existing_call_patterns_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_tfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(fn__map__elem_2_0,
		analysis__lookup_existing_call_patterns_5_0_i11);
MR_def_label(analysis__lookup_existing_call_patterns_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__lookup_existing_call_patterns_5_0_i7);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__elem_2_0,
		analysis__lookup_existing_call_patterns_5_0_i13);
MR_def_label(analysis__lookup_existing_call_patterns_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__lookup_existing_call_patterns_5_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__elem_2_0,
		analysis__lookup_existing_call_patterns_5_0_i15);
MR_def_label(analysis__lookup_existing_call_patterns_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__lookup_existing_call_patterns_5_0_i7);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__lookup_existing_call_patterns_5_0_i17);
MR_def_label(analysis__lookup_existing_call_patterns_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, some_analysis_result);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
MR_def_label(analysis__lookup_existing_call_patterns_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module17)
	MR_init_entry1(analysis__lookup_results_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__lookup_results_2_4_0);
	MR_init_label7(analysis__lookup_results_2_4_0,2,7,9,11,13,14,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_results_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__lookup_results_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__lookup_results_2_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_0),
		mercury__analysis__lookup_results_2_4_0_i2);
MR_def_label(analysis__lookup_results_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r3;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__elem_2_0,
		analysis__lookup_results_2_4_0_i7);
MR_def_label(analysis__lookup_results_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__lookup_results_2_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__elem_2_0,
		analysis__lookup_results_2_4_0_i9);
MR_def_label(analysis__lookup_results_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__lookup_results_2_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__elem_2_0,
		analysis__lookup_results_2_4_0_i11);
MR_def_label(analysis__lookup_results_2_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__lookup_results_2_4_0_i3);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__lookup_results_2_4_0_i13);
MR_def_label(analysis__lookup_results_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__lookup_results_2_4_0_i14);
MR_def_label(analysis__lookup_results_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(analysis, analysis_result, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, some_analysis_result);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
MR_def_label(analysis__lookup_results_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module18)
	MR_init_entry1(analysis__lock_debug_analysis_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__lock_debug_analysis_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_debug_analysis'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__lock_debug_analysis_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__analysis__lock_debug_analysis_0_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 3580 "analysis.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module19)
	MR_init_entry1(analysis__unlock_debug_analysis_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__unlock_debug_analysis_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_debug_analysis'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__unlock_debug_analysis_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__analysis__unlock_debug_analysis_0_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 3613 "analysis.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module20)
	MR_init_entry1(analysis__unsafe_get_debug_analysis_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__unsafe_get_debug_analysis_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_debug_analysis'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__unsafe_get_debug_analysis_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__unsafe_get_debug_analysis_1_0
{
#line 1375 "analysis.m"
X = analysis__mutable_variable_debug_analysis;
;}
#line 3644 "analysis.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module21)
	MR_init_entry1(analysis__get_debug_analysis_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__get_debug_analysis_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_debug_analysis'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__get_debug_analysis_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__analysis__get_debug_analysis_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 3678 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__get_debug_analysis_3_0
{
#line 1375 "analysis.m"
X = analysis__mutable_variable_debug_analysis;
;}
#line 3690 "analysis.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__analysis__get_debug_analysis_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 3703 "analysis.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_1);

MR_BEGIN_MODULE(analysis_module22)
	MR_init_entry1(analysis__debug_msg_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__debug_msg_3_0);
	MR_init_label1(analysis__debug_msg_3_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'debug_msg'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__debug_msg_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__analysis__debug_msg_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 3740 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__debug_msg_3_0
{
#line 1375 "analysis.m"
X = analysis__mutable_variable_debug_analysis;
;}
#line 3750 "analysis.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__analysis__debug_msg_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 3763 "analysis.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(analysis__debug_msg_3_0_i12);
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__debug_msg_3_0));
	MR_np_tailcall_ent(do_call_closure_1);
MR_def_label(analysis__debug_msg_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module23)
	MR_init_entry1(analysis__lookup_results_1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__lookup_results_1_5_0);
	MR_init_label9(analysis__lookup_results_1_5_0,3,4,2,8,5,6,11,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_results_1'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__lookup_results_1_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__analysis__lookup_results_1_5_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 3806 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__lookup_results_1_5_0
{
#line 1375 "analysis.m"
X = analysis__mutable_variable_debug_analysis;
;}
#line 3816 "analysis.c"
	MR_r7 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__analysis__lookup_results_1_5_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 3829 "analysis.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(analysis__lookup_results_1_5_0_i3);
	}
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_GOTO_LAB(analysis__lookup_results_1_5_0_i2);
MR_def_label(analysis__lookup_results_1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0,
		analysis__lookup_results_1_5_0_i4);
MR_def_label(analysis__lookup_results_1_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
MR_def_label(analysis__lookup_results_1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(analysis__lookup_results_1_5_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r4 = MR_tfield(0, MR_sv(4), 6);
	MR_np_call_localret_ent(fn__map__elem_2_0,
		analysis__lookup_results_1_5_0_i8);
MR_def_label(analysis__lookup_results_1_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__lookup_results_1_5_0_i5);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(analysis__lookup_results_1_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(analysis__lookup_results_1_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
MR_def_label(analysis__lookup_results_1_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_sv(4), 7);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(analysis__lookup_results_2_4_0,
		analysis__lookup_results_1_5_0_i11);
MR_def_label(analysis__lookup_results_1_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__analysis__lookup_results_1_5_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 3901 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__lookup_results_1_5_0
{
#line 1375 "analysis.m"
X = analysis__mutable_variable_debug_analysis;
;}
#line 3911 "analysis.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__analysis__lookup_results_1_5_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 3924 "analysis.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(analysis__lookup_results_1_5_0_i15);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0,
		analysis__lookup_results_1_5_0_i14);
MR_def_label(analysis__lookup_results_1_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
MR_def_label(analysis__lookup_results_1_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module24)
	MR_init_entry1(analysis__lookup_results_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__lookup_results_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_results'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__lookup_results_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = (MR_Integer) 0;
	MR_np_tailcall_ent(analysis__lookup_results_1_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__filter_2_0);

MR_BEGIN_MODULE(analysis_module25)
	MR_init_entry1(analysis__lookup_matching_results_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__lookup_matching_results_6_0);
	MR_init_label3(analysis__lookup_matching_results_6_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_matching_results'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__lookup_matching_results_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(4) = MR_r1;
	MR_r5 = (MR_Integer) 0;
	MR_np_call_localret_ent(analysis__lookup_results_1_5_0,
		analysis__lookup_matching_results_6_0_i2);
MR_def_label(analysis__lookup_matching_results_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__lookup_matching_results_6_0_i3);
MR_def_label(analysis__lookup_matching_results_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__lookup_matching_results_6_0_i4);
MR_def_label(analysis__lookup_matching_results_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(analysis, analysis_result, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_sv(1);
	MR_tfield(0, MR_r2, 5) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__list__filter_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(analysis_module26)
	MR_init_entry1(analysis__lookup_best_result_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__lookup_best_result_6_0);
	MR_init_label7(analysis__lookup_best_result_6_0,4,2,5,7,9,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_best_result'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__lookup_best_result_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__analysis__lookup_best_result_6_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 4061 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__lookup_best_result_6_0
{
#line 1375 "analysis.m"
X = analysis__mutable_variable_debug_analysis;
;}
#line 4071 "analysis.c"
	MR_r8 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__analysis__lookup_best_result_6_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 4084 "analysis.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r8,0)) {
		MR_GOTO_LAB(analysis__lookup_best_result_6_0_i2);
	}
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(6) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0,
		analysis__lookup_best_result_6_0_i4);
MR_def_label(analysis__lookup_best_result_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(1);
	MR_r1 = MR_sv(5);
MR_def_label(analysis__lookup_best_result_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(analysis__lookup_matching_results_6_0,
		analysis__lookup_best_result_6_0_i5);
MR_def_label(analysis__lookup_best_result_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(analysis__lookup_best_result_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(7);
MR_def_label(analysis__lookup_best_result_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__more_precise_answer_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 4;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__lookup_best_result_6_0_i9);
MR_def_label(analysis__lookup_best_result_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__lookup_best_result_6_0_i10);
MR_def_label(analysis__lookup_best_result_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(analysis, analysis_result, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		analysis__lookup_best_result_6_0_i12);
MR_def_label(analysis__lookup_best_result_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(fn__map__set_3_0);

MR_BEGIN_MODULE(analysis_module27)
	MR_init_entry1(analysis__record_result_in_analysis_map_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__record_result_in_analysis_map_6_0);
	MR_init_label8(analysis__record_result_in_analysis_map_6_0,2,6,3,9,10,13,11,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_result_in_analysis_map'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__record_result_in_analysis_map_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__record_result_in_analysis_map_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_0),
		mercury__analysis__record_result_in_analysis_map_6_0_i2);
MR_def_label(analysis__record_result_in_analysis_map_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		analysis__record_result_in_analysis_map_6_0_i6);
MR_def_label(analysis__record_result_in_analysis_map_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_result_in_analysis_map_6_0_i3);
	}
	MR_r4 = MR_sv(8);
	MR_r3 = MR_r2;
	MR_GOTO_LAB(analysis__record_result_in_analysis_map_6_0_i10);
MR_def_label(analysis__record_result_in_analysis_map_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(fn__map__init_0_0,
		analysis__record_result_in_analysis_map_6_0_i9);
MR_def_label(analysis__record_result_in_analysis_map_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(8);
	MR_r3 = MR_r1;
MR_def_label(analysis__record_result_in_analysis_map_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r4;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(map__search_3_0,
		analysis__record_result_in_analysis_map_6_0_i13);
MR_def_label(analysis__record_result_in_analysis_map_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_result_in_analysis_map_6_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r4 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		analysis__record_result_in_analysis_map_6_0_i24);
MR_def_label(analysis__record_result_in_analysis_map_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		analysis__record_result_in_analysis_map_6_0_i24);
MR_def_label(analysis__record_result_in_analysis_map_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__map__set_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module28)
	MR_init_entry1(analysis__record_result_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__record_result_7_0);
	MR_init_label5(analysis__record_result_7_0,3,2,6,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_result'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__record_result_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		analysis__record_result_7_0_i3);
MR_def_label(analysis__record_result_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_result_7_0_i2);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(analysis__record_result_7_0_i6);
MR_def_label(analysis__record_result_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("analysis", 8);
	MR_r2 = (MR_Word) MR_string_const("predicate \140analysis.record_result\'/7", 36);
	MR_r3 = (MR_Word) MR_string_const("recording result for procedure defined in another module", 56);
	MR_np_call_localret_ent(require__unexpected_3_0,
		analysis__record_result_7_0_i6);
MR_def_label(analysis__record_result_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(analysis__record_result_7_0_i8);
	}
	MR_r6 = MR_tfield(0, MR_tempr2, 8);
	}
	MR_np_call_localret_ent(analysis__record_result_in_analysis_map_6_0,
		analysis__record_result_7_0_i9);
MR_def_label(analysis__record_result_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_r1;
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(analysis__record_result_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__contains_2_0);

MR_BEGIN_MODULE(analysis_module29)
	MR_init_entry1(analysis__module_is_local_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__module_is_local_3_0);
	MR_init_label2(analysis__module_is_local_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_is_local'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__module_is_local_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__contains_2_0,
		analysis__module_is_local_3_0_i3);
MR_def_label(analysis__module_is_local_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__module_is_local_3_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(analysis__module_is_local_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__search_2_0);

MR_BEGIN_MODULE(analysis_module30)
	MR_init_entry1(analysis__record_request_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__record_request_2_7_0);
	MR_init_label10(analysis__record_request_2_7_0,6,2,10,11,15,12,18,19,22,20)
	MR_init_label4(analysis__record_request_2_7_0,34,35,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_request_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__record_request_2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(fn__map__search_2_0,
		analysis__record_request_2_7_0_i6);
MR_def_label(analysis__record_request_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_request_2_7_0_i2);
	}
	MR_r4 = MR_sv(1);
	MR_r3 = MR_r2;
	MR_GOTO_LAB(analysis__record_request_2_7_0_i11);
MR_def_label(analysis__record_request_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		analysis__record_request_2_7_0_i10);
MR_def_label(analysis__record_request_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = MR_r1;
MR_def_label(analysis__record_request_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__map__search_2_0,
		analysis__record_request_2_7_0_i15);
MR_def_label(analysis__record_request_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_request_2_7_0_i12);
	}
	MR_r4 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_GOTO_LAB(analysis__record_request_2_7_0_i19);
MR_def_label(analysis__record_request_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		analysis__record_request_2_7_0_i18);
MR_def_label(analysis__record_request_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r3 = MR_r1;
MR_def_label(analysis__record_request_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__search_2_0,
		analysis__record_request_2_7_0_i22);
MR_def_label(analysis__record_request_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_request_2_7_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_GOTO_LAB(analysis__record_request_2_7_0_i34);
	}
MR_def_label(analysis__record_request_2_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,1);
	}
MR_def_label(analysis__record_request_2_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_tfield(0, MR_sv(7), 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_np_call_localret_ent(fn__map__set_3_0,
		analysis__record_request_2_7_0_i35);
MR_def_label(analysis__record_request_2_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		analysis__record_request_2_7_0_i36);
MR_def_label(analysis__record_request_2_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		analysis__record_request_2_7_0_i37);
MR_def_label(analysis__record_request_2_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_r1;
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module31)
	MR_init_entry1(analysis__record_request_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__record_request_6_0);
	MR_init_label7(analysis__record_request_6_0,4,2,7,9,8,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_request'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__record_request_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	MR_sv(1) = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(7) = MR_tempr2;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		analysis__record_request_6_0_i4);
MR_def_label(analysis__record_request_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_request_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("analysis", 8);
	MR_r2 = (MR_Word) MR_string_const("predicate \140analysis.record_request\'/6", 37);
	MR_r3 = (MR_Word) MR_string_const("request on self", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		analysis__record_request_6_0_i7);
MR_def_label(analysis__record_request_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(5);
	MR_tempr4 = MR_sv(7);
	MR_r1 = MR_sv(8);
	}
MR_def_label(analysis__record_request_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(set__contains_2_0,
		analysis__record_request_6_0_i9);
MR_def_label(analysis__record_request_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_request_6_0_i8);
	}
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r8 = (MR_Integer) 1;
	MR_r7 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(analysis__record_request_6_0_i11);
MR_def_label(analysis__record_request_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r8 = (MR_Integer) 0;
	MR_r7 = MR_sv(7);
	MR_r1 = MR_sv(8);
MR_def_label(analysis__record_request_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(analysis__record_request_6_0_i12);
	}
	if (MR_INT_NE(MR_r8,1)) {
		MR_GOTO_LAB(analysis__record_request_6_0_i12);
	}
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(analysis__record_request_2_7_0);
MR_def_label(analysis__record_request_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module32)
	MR_init_entry1(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0);
	MR_init_label6(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0,2,3,4,7,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_exactly_matching_result_even_from_invalid_modules'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(4) = MR_r1;
	MR_r5 = (MR_Integer) 1;
	MR_np_call_localret_ent(analysis__lookup_results_1_5_0,
		analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0_i2);
MR_def_label(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0_i3);
MR_def_label(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0_i4);
MR_def_label(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(analysis, analysis_result, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(8,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__601__1_4_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_sv(1);
	MR_tfield(0, MR_r2, 5) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__filter_2_0,
		analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0_i7);
MR_def_label(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0_i9);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
MR_def_label(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0_i11);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("analysis", 8);
	MR_r2 = (MR_Word) MR_string_const("predicate \140analysis.lookup_exactly_matching_result_even_from_invalid_modules\'/6", 79);
	MR_r3 = (MR_Word) MR_string_const("zero or one exactly matching results expected", 45);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(analysis_module33)
	MR_init_entry1(analysis__record_dependency_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__record_dependency_2_7_0);
	MR_init_label10(analysis__record_dependency_2_7_0,6,2,10,11,15,12,18,19,22,20)
	MR_init_label6(analysis__record_dependency_2_7_0,26,28,27,34,35,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_dependency_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__record_dependency_2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_tfield(0, MR_tempr1, 10);
	}
	MR_np_call_localret_ent(fn__map__search_2_0,
		analysis__record_dependency_2_7_0_i6);
MR_def_label(analysis__record_dependency_2_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_dependency_2_7_0_i2);
	}
	MR_r4 = MR_sv(1);
	MR_r3 = MR_r2;
	MR_GOTO_LAB(analysis__record_dependency_2_7_0_i11);
MR_def_label(analysis__record_dependency_2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_np_call_localret_ent(fn__map__init_0_0,
		analysis__record_dependency_2_7_0_i10);
MR_def_label(analysis__record_dependency_2_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r3 = MR_r1;
MR_def_label(analysis__record_dependency_2_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_np_call_localret_ent(fn__map__search_2_0,
		analysis__record_dependency_2_7_0_i15);
MR_def_label(analysis__record_dependency_2_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_dependency_2_7_0_i12);
	}
	MR_r4 = MR_sv(3);
	MR_r3 = MR_r2;
	MR_GOTO_LAB(analysis__record_dependency_2_7_0_i19);
MR_def_label(analysis__record_dependency_2_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__map__init_0_0,
		analysis__record_dependency_2_7_0_i18);
MR_def_label(analysis__record_dependency_2_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r3 = MR_r1;
MR_def_label(analysis__record_dependency_2_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__map__search_2_0,
		analysis__record_dependency_2_7_0_i22);
MR_def_label(analysis__record_dependency_2_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_dependency_2_7_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_GOTO_LAB(analysis__record_dependency_2_7_0_i26);
	}
MR_def_label(analysis__record_dependency_2_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(9);
	MR_tfield(0, MR_r2, 1) = MR_sv(6);
	MR_tfield(0, MR_r2, 2) = MR_sv(8);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
MR_def_label(analysis__record_dependency_2_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, imdg_arc);
	MR_np_call_localret_ent(list__member_2_0,
		analysis__record_dependency_2_7_0_i28);
MR_def_label(analysis__record_dependency_2_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_dependency_2_7_0_i27);
	}
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(10);
MR_def_label(analysis__record_dependency_2_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_sv(8) = MR_tfield(0, MR_sv(7), 10);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		analysis__record_dependency_2_7_0_i34);
MR_def_label(analysis__record_dependency_2_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		analysis__record_dependency_2_7_0_i35);
MR_def_label(analysis__record_dependency_2_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__set_3_0,
		analysis__record_dependency_2_7_0_i36);
MR_def_label(analysis__record_dependency_2_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__superclass_from_typeclass_info_3_0);
MR_decl_entry(type_desc__same_type_2_0);

MR_BEGIN_MODULE(analysis_module34)
	MR_init_entry1(analysis__record_dependency_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__record_dependency_7_0);
	MR_init_label10(analysis__record_dependency_7_0,4,2,7,9,8,11,15,16,17,18)
	MR_init_label7(analysis__record_dependency_7_0,21,22,20,23,24,26,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_dependency'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__record_dependency_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = MR_tempr2;
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		analysis__record_dependency_7_0_i4);
MR_def_label(analysis__record_dependency_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_dependency_7_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("analysis", 8);
	MR_r2 = (MR_Word) MR_string_const("predicate \140analysis.record_dependency\'/7", 40);
	MR_r3 = (MR_Word) MR_string_const("dependency on self", 18);
	MR_np_call_localret_ent(require__unexpected_3_0,
		analysis__record_dependency_7_0_i7);
MR_def_label(analysis__record_dependency_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(6);
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_tempr4 = MR_sv(5);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_r2;
	}
MR_def_label(analysis__record_dependency_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(8) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(set__contains_2_0,
		analysis__record_dependency_7_0_i9);
MR_def_label(analysis__record_dependency_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__record_dependency_7_0_i8);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_sv(7);
	MR_GOTO_LAB(analysis__record_dependency_7_0_i11);
MR_def_label(analysis__record_dependency_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(7);
MR_def_label(analysis__record_dependency_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(analysis__record_dependency_7_0_i12);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(analysis__record_dependency_7_0_i12);
	}
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__record_dependency_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_0),
		mercury__analysis__record_dependency_7_0_i15);
MR_def_label(analysis__record_dependency_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__record_dependency_7_0_i16);
MR_def_label(analysis__record_dependency_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(5);
	MR_np_call_localret_ent(analysis__record_dependency_2_7_0,
		analysis__record_dependency_7_0_i17);
MR_def_label(analysis__record_dependency_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0,
		analysis__record_dependency_7_0_i18);
MR_def_label(analysis__record_dependency_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(analysis__record_dependency_7_0_i20);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__record_dependency_7_0_i21);
MR_def_label(analysis__record_dependency_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(6);
	MR_np_call_localret_ent(analysis__record_request_6_0,
		analysis__record_dependency_7_0_i22);
MR_def_label(analysis__record_dependency_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_decr_sp_and_return(9);
MR_def_label(analysis__record_dependency_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__record_dependency_7_0_i23);
MR_def_label(analysis__record_dependency_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__record_dependency_7_0_i24);
MR_def_label(analysis__record_dependency_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR_ADDR(analysis, analysis_result, 2);
	MR_tfield(0, MR_r2, 1) = MR_sv(8);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(type_desc__same_type_2_0,
		analysis__record_dependency_7_0_i26);
MR_def_label(analysis__record_dependency_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(9);
MR_def_label(analysis__record_dependency_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__filter_map_2_0);
MR_decl_entry(list__sort_and_remove_dups_2_0);

MR_BEGIN_MODULE(analysis_module35)
	MR_init_entry1(analysis__lookup_requests_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__lookup_requests_5_0);
	MR_init_label10(analysis__lookup_requests_5_0,3,2,6,11,13,15,17,19,20,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_requests'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__lookup_requests_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		analysis__lookup_requests_5_0_i3);
MR_def_label(analysis__lookup_requests_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__lookup_requests_5_0_i2);
	}
	MR_r4 = MR_sv(4);
	MR_GOTO_LAB(analysis__lookup_requests_5_0_i6);
MR_def_label(analysis__lookup_requests_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("analysis", 8);
	MR_r2 = (MR_Word) MR_string_const("predicate \140analysis.lookup_requests\'/5", 38);
	MR_r3 = (MR_Word) MR_string_const("not this_module", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		analysis__lookup_requests_5_0_i6);
MR_def_label(analysis__lookup_requests_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(0, MR_tempr1, 5);
	}
	MR_np_call_localret_ent(map__search_3_0,
		analysis__lookup_requests_5_0_i11);
MR_def_label(analysis__lookup_requests_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__lookup_requests_5_0_i7);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__elem_2_0,
		analysis__lookup_requests_5_0_i13);
MR_def_label(analysis__lookup_requests_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__lookup_requests_5_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__elem_2_0,
		analysis__lookup_requests_5_0_i15);
MR_def_label(analysis__lookup_requests_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__lookup_requests_5_0_i7);
	}
	MR_sv(3) = MR_r2;
	MR_sv(5) = (MR_Integer) 4;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__lookup_requests_5_0_i17);
MR_def_label(analysis__lookup_requests_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__analysis__IntroducedFrom__func__lookup_requests__675__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_request);
	MR_r2 = MR_tempr2;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		analysis__lookup_requests_5_0_i19);
MR_def_label(analysis__lookup_requests_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__lookup_requests_5_0_i20);
MR_def_label(analysis__lookup_requests_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__sort_and_remove_dups_2_0);
MR_def_label(analysis__lookup_requests_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(analysis__file__read_module_overall_status_6_0);

MR_BEGIN_MODULE(analysis_module36)
	MR_init_entry1(analysis__do_read_module_overall_status_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__do_read_module_overall_status_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_read_module_overall_status'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__do_read_module_overall_status_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(analysis__file__read_module_overall_status_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__contains_2_0);
MR_decl_entry(analysis__file__read_module_analysis_results_6_0);
MR_decl_entry(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);

MR_BEGIN_MODULE(analysis_module37)
	MR_init_entry1(analysis__load_module_analysis_results_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__load_module_analysis_results_6_0);
	MR_init_label8(analysis__load_module_analysis_results_6_0,9,11,4,2,14,15,16,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'load_module_analysis_results'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__load_module_analysis_results_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_tfield(0, MR_r3, 7);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__contains_2_0,
		analysis__load_module_analysis_results_6_0_i9);
MR_def_label(analysis__load_module_analysis_results_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(analysis__load_module_analysis_results_6_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__contains_2_0,
		analysis__load_module_analysis_results_6_0_i11);
MR_def_label(analysis__load_module_analysis_results_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__load_module_analysis_results_6_0_i2);
	}
MR_def_label(analysis__load_module_analysis_results_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("analysis", 8);
	MR_r2 = (MR_Word) MR_string_const("predicate \140analysis.load_module_analysis_results\'/6", 51);
	MR_r3 = (MR_Word) MR_string_const("ensure_old_module_analysis_results_loaded", 41);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(analysis__load_module_analysis_results_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(analysis__do_read_module_overall_status_6_0,
		analysis__load_module_analysis_results_6_0_i14);
MR_def_label(analysis__load_module_analysis_results_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(analysis__file__read_module_analysis_results_6_0,
		analysis__load_module_analysis_results_6_0_i15);
MR_def_label(analysis__load_module_analysis_results_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_sv(2), 6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		analysis__load_module_analysis_results_6_0_i16);
MR_def_label(analysis__load_module_analysis_results_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr3, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr3, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr3, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr3, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr3, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr3, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr3, 10);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr1, 7);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		analysis__load_module_analysis_results_6_0_i21);
MR_def_label(analysis__load_module_analysis_results_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__delete_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(set__fold2_6_2);
MR_decl_entry(analysis__file__read_module_analysis_requests_6_0);

MR_BEGIN_MODULE(analysis_module38)
	MR_init_entry1(analysis__prepare_intermodule_analysis_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__prepare_intermodule_analysis_7_0);
	MR_init_label5(analysis__prepare_intermodule_analysis_7_0,2,5,6,7,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_intermodule_analysis'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__prepare_intermodule_analysis_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r1 = MR_sv(5);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__set__delete_2_0,
		analysis__prepare_intermodule_analysis_7_0_i2);
MR_def_label(analysis__prepare_intermodule_analysis_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r6 = MR_tempr1;
	MR_tempr4 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr4, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr4, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr4, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr4, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr4, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr4, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr4, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr4, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr4, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr4, 10);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(analysis__load_module_analysis_results_6_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(4);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(set__fold2_6_2,
		analysis__prepare_intermodule_analysis_7_0_i5);
MR_def_label(analysis__prepare_intermodule_analysis_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(analysis__load_module_analysis_results_6_0,
		analysis__prepare_intermodule_analysis_7_0_i6);
MR_def_label(analysis__prepare_intermodule_analysis_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(analysis__file__read_module_analysis_requests_6_0,
		analysis__prepare_intermodule_analysis_7_0_i7);
MR_def_label(analysis__prepare_intermodule_analysis_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_sv(4), 5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		analysis__prepare_intermodule_analysis_7_0_i11);
MR_def_label(analysis__prepare_intermodule_analysis_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__foldl2_6_2);

MR_BEGIN_MODULE(analysis_module39)
	MR_init_entry1(analysis__update_analysis_registry_2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__update_analysis_registry_2_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_analysis_registry_2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__update_analysis_registry_2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(11,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__update_analysis_registry_3_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_info);
	MR_tempr3 = MR_r4;
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_np_tailcall_ent(map__foldl2_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(analysis_module40)
	MR_init_entry1(analysis__update_analysis_registry_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__update_analysis_registry_5_0);
	MR_init_label5(analysis__update_analysis_registry_5_0,3,4,2,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_analysis_registry'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__update_analysis_registry_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__analysis__update_analysis_registry_5_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 5722 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__update_analysis_registry_5_0
{
#line 1375 "analysis.m"
X = analysis__mutable_variable_debug_analysis;
;}
#line 5732 "analysis.c"
	MR_r6 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__analysis__update_analysis_registry_5_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 5745 "analysis.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(analysis__update_analysis_registry_5_0_i3);
	}
	MR_r4 = MR_r2;
	MR_GOTO_LAB(analysis__update_analysis_registry_5_0_i2);
MR_def_label(analysis__update_analysis_registry_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("% Updating analysis registry.\n", 30);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__update_analysis_registry_5_0_i4);
MR_def_label(analysis__update_analysis_registry_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(1);
MR_def_label(analysis__update_analysis_registry_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 8);
	}
	MR_np_call_localret_ent(analysis__update_analysis_registry_2_7_0,
		analysis__update_analysis_registry_5_0_i5);
MR_def_label(analysis__update_analysis_registry_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(fn__map__init_0_0,
		analysis__update_analysis_registry_5_0_i8);
MR_def_label(analysis__update_analysis_registry_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__fold_4_0);

MR_BEGIN_MODULE(analysis_module41)
	MR_init_entry1(analysis__update_intermodule_dependencies_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__update_intermodule_dependencies_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_intermodule_dependencies'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__update_intermodule_dependencies_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(12,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__update_intermodule_dependencies_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_info);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(set__fold_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__foldl_3_0);

MR_BEGIN_MODULE(analysis_module42)
	MR_init_entry1(fn__analysis__lub_result_statuses_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__lub_result_statuses_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lub_result_statuses'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__lub_result_statuses_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,13,0);
	MR_r5 = MR_tempr1;
	MR_r6 = (MR_Integer) 2;
	MR_np_tailcall_ent(fn__map__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__intersect_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(set__fold_4_2);
MR_decl_entry(fn__map__det_elem_2_0);
MR_decl_entry(analysis__file__write_module_analysis_results_6_0);
MR_decl_entry(analysis__file__empty_request_file_5_0);
MR_decl_entry(parse_tree__module_cmds__touch_datestamp_4_0);

MR_BEGIN_MODULE(analysis_module43)
	MR_init_entry1(analysis__write_analysis_files_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__write_analysis_files_7_0);
	MR_init_label10(analysis__write_analysis_files_7_0,2,3,4,6,7,8,9,11,15,12)
	MR_init_label9(analysis__write_analysis_files_7_0,19,20,24,25,27,28,30,31,32)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_analysis_files'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__write_analysis_files_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tempr1;
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r4;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__set__delete_2_0,
		analysis__write_analysis_files_7_0_i2);
MR_def_label(analysis__write_analysis_files_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(0, MR_sv(5), 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__intersect_2_0,
		analysis__write_analysis_files_7_0_i3);
MR_def_label(analysis__write_analysis_files_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		analysis__write_analysis_files_7_0_i4);
MR_def_label(analysis__write_analysis_files_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__load_module_imdg_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(9) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_info);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__fold2_6_2,
		analysis__write_analysis_files_7_0_i6);
MR_def_label(analysis__write_analysis_files_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(analysis__update_analysis_registry_5_0,
		analysis__write_analysis_files_7_0_i7);
MR_def_label(analysis__write_analysis_files_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 8);
	MR_np_call_localret_ent(fn__analysis__lub_result_statuses_1_0,
		analysis__write_analysis_files_7_0_i8);
MR_def_label(analysis__write_analysis_files_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_sv(6), 6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		analysis__write_analysis_files_7_0_i9);
MR_def_label(analysis__write_analysis_files_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(analysis__update_intermodule_dependencies_4_0,
		analysis__write_analysis_files_7_0_i11);
MR_def_label(analysis__write_analysis_files_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_tfield(0, MR_sv(6), 8);
	MR_np_call_localret_ent(map__is_empty_1_0,
		analysis__write_analysis_files_7_0_i15);
MR_def_label(analysis__write_analysis_files_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__write_analysis_files_7_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__maybe_write_module_overall_status_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_GOTO_LAB(analysis__write_analysis_files_7_0_i19);
	}
MR_def_label(analysis__write_analysis_files_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("analysis", 8);
	MR_r2 = (MR_Word) MR_string_const("predicate \140analysis.write_analysis_files\'/7", 43);
	MR_r3 = (MR_Word) MR_string_const("new_analysis_results is not empty", 33);
	MR_np_call_localret_ent(require__unexpected_3_0,
		analysis__write_analysis_files_7_0_i19);
MR_def_label(analysis__write_analysis_files_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(set__fold_4_2,
		analysis__write_analysis_files_7_0_i20);
MR_def_label(analysis__write_analysis_files_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_sv(6), 7);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		analysis__write_analysis_files_7_0_i24);
MR_def_label(analysis__write_analysis_files_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(analysis__file__write_module_analysis_results_6_0,
		analysis__write_analysis_files_7_0_i25);
MR_def_label(analysis__write_analysis_files_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__maybe_write_module_requests_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(set__fold_4_2,
		analysis__write_analysis_files_7_0_i27);
MR_def_label(analysis__write_analysis_files_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(analysis__file__empty_request_file_5_0,
		analysis__write_analysis_files_7_0_i28);
MR_def_label(analysis__write_analysis_files_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(14,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__maybe_write_module_imdg_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(set__fold_4_2,
		analysis__write_analysis_files_7_0_i30);
MR_def_label(analysis__write_analysis_files_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r5 = (MR_Word) MR_string_const(".analysis_date", 14);
	MR_np_call_localret_ent(analysis__module_name_to_write_file_name_7_0,
		analysis__write_analysis_files_7_0_i31);
MR_def_label(analysis__write_analysis_files_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__module_cmds__touch_datestamp_4_0,
		analysis__write_analysis_files_7_0_i32);
MR_def_label(analysis__write_analysis_files_7_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module44)
	MR_init_entry1(analysis__unsafe_set_debug_analysis_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__unsafe_set_debug_analysis_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_debug_analysis'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__unsafe_set_debug_analysis_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__unsafe_set_debug_analysis_1_0
	X = MR_r1;
{
#line 1375 "analysis.m"
analysis__mutable_variable_debug_analysis = X;
;}
#line 6160 "analysis.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module45)
	MR_init_entry1(analysis__set_debug_analysis_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__set_debug_analysis_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_debug_analysis'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__set_debug_analysis_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__analysis__set_debug_analysis_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 6193 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__set_debug_analysis_3_0
	X = MR_r1;
{
#line 1375 "analysis.m"
analysis__mutable_variable_debug_analysis = X;
;}
#line 6204 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__analysis__set_debug_analysis_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 6216 "analysis.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module46)
	MR_init_entry1(analysis__enable_debug_messages_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__enable_debug_messages_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'enable_debug_messages'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__enable_debug_messages_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__analysis__enable_debug_messages_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 6249 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__enable_debug_messages_3_0
	X = MR_r1;
{
#line 1375 "analysis.m"
analysis__mutable_variable_debug_analysis = X;
;}
#line 6260 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__analysis__enable_debug_messages_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 6272 "analysis.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module47)
	MR_init_entry1(analysis__more_precise_answer_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__more_precise_answer_4_0);
	MR_init_label4(analysis__more_precise_answer_4_0,3,4,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'more_precise_answer'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__more_precise_answer_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__more_precise_answer_4_0_i3);
MR_def_label(analysis__more_precise_answer_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__more_precise_answer_4_0_i4);
MR_def_label(analysis__more_precise_answer_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__more_precise_answer_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__analysis__more_precise_answer_4_0_i5);
MR_def_label(analysis__more_precise_answer_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__more_precise_answer_4_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(analysis__more_precise_answer_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module48)
	MR_init_entry1(analysis__update_analysis_registry_3_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__update_analysis_registry_3_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_analysis_registry_3'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__update_analysis_registry_3_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__update_analysis_registry_4_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_info);
	MR_tempr2 = MR_r4;
	MR_r4 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_r7 = MR_tempr3;
	MR_np_tailcall_ent(map__foldl2_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl2_6_2);

MR_BEGIN_MODULE(analysis_module49)
	MR_init_entry1(analysis__update_analysis_registry_4_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__update_analysis_registry_4_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_analysis_registry_4'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__update_analysis_registry_4_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(15,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__update_analysis_registry_5_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, some_analysis_result);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl2_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__univ__univ_1_0);
MR_decl_entry(univ__det_univ_to_type_2_0);

MR_BEGIN_MODULE(analysis_module50)
	MR_init_entry1(analysis__replace_result_in_list_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__replace_result_in_list_6_0);
	MR_init_label10(analysis__replace_result_in_list_6_0,4,5,6,7,9,10,11,8,15,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_result_in_list'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__replace_result_in_list_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r6,0,0)) {
		MR_GOTO_LAB(analysis__replace_result_in_list_6_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Integer) 4;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__replace_result_in_list_6_0_i4);
MR_def_label(analysis__replace_result_in_list_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		analysis__replace_result_in_list_6_0_i5);
MR_def_label(analysis__replace_result_in_list_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__replace_result_in_list_6_0_i6);
MR_def_label(analysis__replace_result_in_list_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		analysis__replace_result_in_list_6_0_i7);
MR_def_label(analysis__replace_result_in_list_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__replace_result_in_list_6_0_i9);
MR_def_label(analysis__replace_result_in_list_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__replace_result_in_list_6_0_i10);
MR_def_label(analysis__replace_result_in_list_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__replace_result_in_list_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__analysis__replace_result_in_list_6_0_i11);
MR_def_label(analysis__replace_result_in_list_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__replace_result_in_list_6_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(6);
	MR_decr_sp_and_return(9);
	}
MR_def_label(analysis__replace_result_in_list_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_np_localcall_lab(analysis__replace_result_in_list_6_0,
		analysis__replace_result_in_list_6_0_i15);
MR_def_label(analysis__replace_result_in_list_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(analysis__replace_result_in_list_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("analysis", 8);
	MR_r2 = (MR_Word) MR_string_const("predicate \140analysis.replace_result_in_list\'/6", 45);
	MR_r3 = (MR_Word) MR_string_const("found no result to replace", 26);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__lookup_2_0);
MR_decl_entry(fn__map__det_update_3_0);

MR_BEGIN_MODULE(analysis_module51)
	MR_init_entry1(analysis__replace_result_in_analysis_map_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__replace_result_in_analysis_map_8_0);
	MR_init_label7(analysis__replace_result_in_analysis_map_8_0,2,6,7,8,9,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_result_in_analysis_map'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__replace_result_in_analysis_map_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(11) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__replace_result_in_analysis_map_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_0),
		mercury__analysis__replace_result_in_analysis_map_8_0_i2);
MR_def_label(analysis__replace_result_in_analysis_map_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r3;
	MR_sv(12) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		analysis__replace_result_in_analysis_map_8_0_i6);
MR_def_label(analysis__replace_result_in_analysis_map_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		analysis__replace_result_in_analysis_map_8_0_i7);
MR_def_label(analysis__replace_result_in_analysis_map_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		analysis__replace_result_in_analysis_map_8_0_i8);
MR_def_label(analysis__replace_result_in_analysis_map_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(analysis__replace_result_in_list_6_0,
		analysis__replace_result_in_analysis_map_8_0_i9);
MR_def_label(analysis__replace_result_in_analysis_map_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__det_update_3_0,
		analysis__replace_result_in_analysis_map_8_0_i10);
MR_def_label(analysis__replace_result_in_analysis_map_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__det_update_3_0,
		analysis__replace_result_in_analysis_map_8_0_i11);
MR_def_label(analysis__replace_result_in_analysis_map_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(fn__map__det_update_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__from_list_1_0);

MR_BEGIN_MODULE(analysis_module52)
	MR_init_entry1(fn__analysis__imdg_dependent_modules_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__imdg_dependent_modules_5_0);
	MR_init_label4(fn__analysis__imdg_dependent_modules_5_0,5,7,10,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'imdg_dependent_modules'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__imdg_dependent_modules_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__analysis__imdg_dependent_modules_5_0_i5);
MR_def_label(fn__analysis__imdg_dependent_modules_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__analysis__imdg_dependent_modules_5_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__analysis__imdg_dependent_modules_5_0_i7);
MR_def_label(fn__analysis__imdg_dependent_modules_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__analysis__imdg_dependent_modules_5_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(16,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__analysis__arc_module_name_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, imdg_arc);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		fn__analysis__imdg_dependent_modules_5_0_i10);
MR_def_label(fn__analysis__imdg_dependent_modules_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__set__from_list_1_0);
	}
MR_def_label(fn__analysis__imdg_dependent_modules_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__set__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module53)
	MR_init_entry1(analysis__update_analysis_registry_5_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__update_analysis_registry_5_9_0);
	MR_init_label10(analysis__update_analysis_registry_5_9_0,2,3,4,10,11,12,6,15,16,17)
	MR_init_label10(analysis__update_analysis_registry_5_9_0,19,21,20,14,24,27,28,29,26,31)
	MR_init_label10(analysis__update_analysis_registry_5_9_0,35,36,37,38,40,5,46,48,50,54)
	MR_init_label2(analysis__update_analysis_registry_5_9_0,55,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_analysis_registry_5'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__update_analysis_registry_5_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(11) = MR_r6;
	MR_sv(12) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(analysis__get_func_info_6_0,
		analysis__update_analysis_registry_5_9_0_i2);
MR_def_label(analysis__update_analysis_registry_5_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(9);
	MR_np_call_localret_ent(analysis__lookup_exactly_matching_result_even_from_invalid_modules_6_0,
		analysis__update_analysis_registry_5_9_0_i3);
MR_def_label(analysis__update_analysis_registry_5_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		analysis__update_analysis_registry_5_9_0_i4);
MR_def_label(analysis__update_analysis_registry_5_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(analysis__update_analysis_registry_5_9_0_i6);
	}
	MR_sv(5) = MR_r1;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tfield(0, MR_sv(11), 7);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		analysis__update_analysis_registry_5_9_0_i10);
MR_def_label(analysis__update_analysis_registry_5_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(analysis__record_result_in_analysis_map_6_0,
		analysis__update_analysis_registry_5_9_0_i11);
MR_def_label(analysis__update_analysis_registry_5_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tfield(0, MR_sv(11), 7);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		analysis__update_analysis_registry_5_9_0_i12);
MR_def_label(analysis__update_analysis_registry_5_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(11);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_r4 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_GOTO_LAB(analysis__update_analysis_registry_5_9_0_i5);
	}
MR_def_label(analysis__update_analysis_registry_5_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(5), 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_r1;
	MR_sv(8) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__update_analysis_registry_5_9_0_i15);
MR_def_label(analysis__update_analysis_registry_5_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__update_analysis_registry_5_9_0_i16);
MR_def_label(analysis__update_analysis_registry_5_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(analysis__equivalent_3_0,
		analysis__update_analysis_registry_5_9_0_i17);
MR_def_label(analysis__update_analysis_registry_5_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__update_analysis_registry_5_9_0_i14);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_0,
		analysis__update_analysis_registry_5_9_0_i19);
MR_def_label(analysis__update_analysis_registry_5_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(7) == MR_sv(8))) {
		MR_GOTO_LAB(analysis__update_analysis_registry_5_9_0_i20);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_tfield(0, MR_sv(11), 7);
	MR_np_call_localret_ent(analysis__replace_result_in_analysis_map_8_0,
		analysis__update_analysis_registry_5_9_0_i21);
MR_def_label(analysis__update_analysis_registry_5_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r5 = MR_tempr1;
	MR_tempr2 = MR_sv(11);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_r4 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_GOTO_LAB(analysis__update_analysis_registry_5_9_0_i5);
	}
MR_def_label(analysis__update_analysis_registry_5_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(10);
	MR_sv(10) = MR_sv(11);
	MR_GOTO_LAB(analysis__update_analysis_registry_5_9_0_i5);
MR_def_label(analysis__update_analysis_registry_5_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_tfield(0, MR_sv(11), 7);
	MR_np_call_localret_ent(analysis__replace_result_in_analysis_map_8_0,
		analysis__update_analysis_registry_5_9_0_i24);
MR_def_label(analysis__update_analysis_registry_5_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(11);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_r1;
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(11) = MR_tempr1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__update_analysis_registry_5_9_0_i27);
MR_def_label(analysis__update_analysis_registry_5_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__update_analysis_registry_5_9_0_i28);
MR_def_label(analysis__update_analysis_registry_5_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(analysis__more_precise_than_3_0,
		analysis__update_analysis_registry_5_9_0_i29);
MR_def_label(analysis__update_analysis_registry_5_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__update_analysis_registry_5_9_0_i26);
	}
	MR_r3 = MR_sv(10);
	MR_sv(7) = (MR_Integer) 1;
	MR_GOTO_LAB(analysis__update_analysis_registry_5_9_0_i31);
MR_def_label(analysis__update_analysis_registry_5_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(10);
	MR_sv(7) = (MR_Integer) 0;
MR_def_label(analysis__update_analysis_registry_5_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r4 = MR_tfield(0, MR_sv(11), 9);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		analysis__update_analysis_registry_5_9_0_i35);
MR_def_label(analysis__update_analysis_registry_5_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__update_analysis_registry_5_9_0_i36);
MR_def_label(analysis__update_analysis_registry_5_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(9);
	MR_np_call_localret_ent(fn__analysis__imdg_dependent_modules_5_0,
		analysis__update_analysis_registry_5_9_0_i37);
MR_def_label(analysis__update_analysis_registry_5_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(9);
	MR_np_call_localret_ent(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_0,
		analysis__update_analysis_registry_5_9_0_i38);
MR_def_label(analysis__update_analysis_registry_5_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(17,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__taint_module_overall_status_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(11);
	}
	MR_np_call_localret_ent(set__fold2_6_2,
		analysis__update_analysis_registry_5_9_0_i40);
MR_def_label(analysis__update_analysis_registry_5_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(10);
	MR_sv(10) = MR_r1;
MR_def_label(analysis__update_analysis_registry_5_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(0, MR_sv(10), 5);
	MR_np_call_localret_ent(map__search_3_0,
		analysis__update_analysis_registry_5_9_0_i46);
MR_def_label(analysis__update_analysis_registry_5_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__update_analysis_registry_5_9_0_i42);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__elem_2_0,
		analysis__update_analysis_registry_5_9_0_i48);
MR_def_label(analysis__update_analysis_registry_5_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__update_analysis_registry_5_9_0_i42);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__elem_2_0,
		analysis__update_analysis_registry_5_9_0_i50);
MR_def_label(analysis__update_analysis_registry_5_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__update_analysis_registry_5_9_0_i42);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(analysis__update_analysis_registry_5_9_0_i42);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_request);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,13,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__filter_map_2_0,
		analysis__update_analysis_registry_5_9_0_i54);
MR_def_label(analysis__update_analysis_registry_5_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__sort_and_remove_dups_2_0,
		analysis__update_analysis_registry_5_9_0_i55);
MR_def_label(analysis__update_analysis_registry_5_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(17,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__taint_module_overall_status_7_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(10);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(list__foldl2_6_2);
	}
MR_def_label(analysis__update_analysis_registry_5_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module54)
	MR_init_entry1(fn__analysis__arc_module_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__arc_module_name_3_0);
	MR_init_label7(fn__analysis__arc_module_name_3_0,2,3,4,5,6,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'arc_module_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__arc_module_name_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Integer) 4;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__analysis__arc_module_name_3_0_i2);
MR_def_label(fn__analysis__arc_module_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		fn__analysis__arc_module_name_3_0_i3);
MR_def_label(fn__analysis__arc_module_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__analysis__arc_module_name_3_0_i4);
MR_def_label(fn__analysis__arc_module_name_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		fn__analysis__arc_module_name_3_0_i5);
MR_def_label(fn__analysis__arc_module_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		fn__analysis__arc_module_name_3_0_i6);
MR_def_label(fn__analysis__arc_module_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__analysis__arc_module_name_3_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__fn__analysis__arc_module_name_3_0_i7);
MR_def_label(fn__analysis__arc_module_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__analysis__arc_module_name_3_0_i1);
	}
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__analysis__arc_module_name_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module55)
	MR_init_entry1(analysis__ensure_module_status_loaded_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__ensure_module_status_loaded_6_0);
	MR_init_label4(analysis__ensure_module_status_loaded_6_0,3,2,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ensure_module_status_loaded'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__ensure_module_status_loaded_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r3 = MR_tfield(0, MR_r3, 6);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__contains_2_0,
		analysis__ensure_module_status_loaded_6_0_i3);
MR_def_label(analysis__ensure_module_status_loaded_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__ensure_module_status_loaded_6_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(analysis__ensure_module_status_loaded_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(analysis__file__read_module_overall_status_6_0,
		analysis__ensure_module_status_loaded_6_0_i5);
MR_def_label(analysis__ensure_module_status_loaded_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(0, MR_sv(3), 6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		analysis__ensure_module_status_loaded_6_0_i6);
MR_def_label(analysis__ensure_module_status_loaded_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module56)
	MR_init_entry1(analysis__taint_module_overall_status_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__taint_module_overall_status_7_0);
	MR_init_label8(analysis__taint_module_overall_status_7_0,22,4,5,6,8,9,7,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'taint_module_overall_status'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__taint_module_overall_status_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(analysis__taint_module_overall_status_7_0_i22);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(analysis__taint_module_overall_status_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_r4;
	}
	MR_np_call_localret_ent(analysis__ensure_module_status_loaded_6_0,
		analysis__taint_module_overall_status_7_0_i4);
MR_def_label(analysis__taint_module_overall_status_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_sv(3), 6);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		analysis__taint_module_overall_status_7_0_i5);
MR_def_label(analysis__taint_module_overall_status_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__analysis__lub_2_0,
		analysis__taint_module_overall_status_7_0_i6);
MR_def_label(analysis__taint_module_overall_status_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__analysis__taint_module_overall_status_7_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 7404 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__taint_module_overall_status_7_0
{
#line 1375 "analysis.m"
X = analysis__mutable_variable_debug_analysis;
;}
#line 7414 "analysis.c"
	MR_r6 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__analysis__taint_module_overall_status_7_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 7427 "analysis.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(analysis__taint_module_overall_status_7_0_i8);
	}
	MR_r3 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_GOTO_LAB(analysis__taint_module_overall_status_7_0_i7);
MR_def_label(analysis__taint_module_overall_status_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(analysis__write_tainting_module_4_0,
		analysis__taint_module_overall_status_7_0_i9);
MR_def_label(analysis__taint_module_overall_status_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
MR_def_label(analysis__taint_module_overall_status_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_sv(3), 6);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		analysis__taint_module_overall_status_7_0_i10);
MR_def_label(analysis__taint_module_overall_status_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_3_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(analysis_module57)
	MR_init_entry1(analysis__write_no_change_in_result_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__write_no_change_in_result_6_0);
	MR_init_label8(analysis__write_no_change_in_result_6_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_no_change_in_result'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__write_no_change_in_result_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("% No change in the result ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__write_no_change_in_result_6_0_i2);
MR_def_label(analysis__write_no_change_in_result_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		analysis__write_no_change_in_result_6_0_i3);
MR_def_label(analysis__write_no_change_in_result_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__write_no_change_in_result_6_0_i4);
MR_def_label(analysis__write_no_change_in_result_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__write_3_0,
		analysis__write_no_change_in_result_6_0_i5);
MR_def_label(analysis__write_no_change_in_result_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__write_no_change_in_result_6_0_i6);
MR_def_label(analysis__write_no_change_in_result_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__write_3_0,
		analysis__write_no_change_in_result_6_0_i7);
MR_def_label(analysis__write_no_change_in_result_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" --> ", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__write_no_change_in_result_6_0_i8);
MR_def_label(analysis__write_no_change_in_result_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(io__write_3_0,
		analysis__write_no_change_in_result_6_0_i9);
MR_def_label(analysis__write_no_change_in_result_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module58)
	MR_init_entry1(analysis__write_changed_answer_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__write_changed_answer_6_0);
	MR_init_label10(analysis__write_changed_answer_6_0,2,3,4,5,6,7,8,9,10,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_changed_answer'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__write_changed_answer_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__write_changed_answer_6_0_i2);
MR_def_label(analysis__write_changed_answer_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		analysis__write_changed_answer_6_0_i3);
MR_def_label(analysis__write_changed_answer_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" changed to ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__write_changed_answer_6_0_i4);
MR_def_label(analysis__write_changed_answer_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__write_3_0,
		analysis__write_changed_answer_6_0_i5);
MR_def_label(analysis__write_changed_answer_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		analysis__write_changed_answer_6_0_i6);
MR_def_label(analysis__write_changed_answer_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Mark dependent modules as ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__write_changed_answer_6_0_i7);
MR_def_label(analysis__write_changed_answer_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__write_3_0,
		analysis__write_changed_answer_6_0_i8);
MR_def_label(analysis__write_changed_answer_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		analysis__write_changed_answer_6_0_i9);
MR_def_label(analysis__write_changed_answer_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("The modules to mark are: ", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__write_changed_answer_6_0_i10);
MR_def_label(analysis__write_changed_answer_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(io__write_3_0,
		analysis__write_changed_answer_6_0_i12);
MR_def_label(analysis__write_changed_answer_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__print_3_0);

MR_BEGIN_MODULE(analysis_module59)
	MR_init_entry1(analysis__write_tainting_module_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__write_tainting_module_4_0);
	MR_init_label4(analysis__write_tainting_module_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_tainting_module'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__write_tainting_module_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% Tainting the overall module status of ", 40);
	MR_np_call_localret_ent(io__print_3_0,
		analysis__write_tainting_module_4_0_i2);
MR_def_label(analysis__write_tainting_module_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__print_3_0,
		analysis__write_tainting_module_4_0_i3);
MR_def_label(analysis__write_tainting_module_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(" with ", 6);
	MR_np_call_localret_ent(io__print_3_0,
		analysis__write_tainting_module_4_0_i4);
MR_def_label(analysis__write_tainting_module_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__print_3_0,
		analysis__write_tainting_module_4_0_i5);
MR_def_label(analysis__write_tainting_module_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__map_values_only_3_0);

MR_BEGIN_MODULE(analysis_module60)
	MR_init_entry1(analysis__clear_imdg_entries_pointing_at_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__clear_imdg_entries_pointing_at_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'clear_imdg_entries_pointing_at'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__clear_imdg_entries_pointing_at_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__clear_imdg_entries_pointing_at_2_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__map_values_only_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(map__union_4_1);
MR_decl_entry(fn__map__delete_2_0);

MR_BEGIN_MODULE(analysis_module61)
	MR_init_entry1(analysis__update_intermodule_dependencies_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__update_intermodule_dependencies_2_4_0);
	MR_init_label9(analysis__update_intermodule_dependencies_2_4_0,5,6,7,9,12,8,13,14,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'update_intermodule_dependencies_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__update_intermodule_dependencies_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tfield(0, MR_r3, 9);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		analysis__update_intermodule_dependencies_2_4_0_i5);
MR_def_label(analysis__update_intermodule_dependencies_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_0,
		analysis__update_intermodule_dependencies_2_4_0_i6);
MR_def_label(analysis__update_intermodule_dependencies_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(analysis__clear_imdg_entries_pointing_at_3_0,
		analysis__update_intermodule_dependencies_2_4_0_i7);
MR_def_label(analysis__update_intermodule_dependencies_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_sv(3), 10);
	MR_np_call_localret_ent(fn__map__elem_2_0,
		analysis__update_intermodule_dependencies_2_4_0_i9);
MR_def_label(analysis__update_intermodule_dependencies_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__update_intermodule_dependencies_2_4_0_i8);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,13,2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__union_4_1,
		analysis__update_intermodule_dependencies_2_4_0_i12);
MR_def_label(analysis__update_intermodule_dependencies_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_r1;
	MR_r2 = MR_sv(6);
	MR_GOTO_LAB(analysis__update_intermodule_dependencies_2_4_0_i13);
MR_def_label(analysis__update_intermodule_dependencies_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_r2 = MR_sv(6);
MR_def_label(analysis__update_intermodule_dependencies_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r4 = MR_tfield(0, MR_sv(3), 9);
	MR_np_call_localret_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0,
		analysis__update_intermodule_dependencies_2_4_0_i14);
MR_def_label(analysis__update_intermodule_dependencies_2_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_r1;
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tfield(0, MR_tempr1, 10);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__map__delete_2_0,
		analysis__update_intermodule_dependencies_2_4_0_i16);
MR_def_label(analysis__update_intermodule_dependencies_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module62)
	MR_init_entry1(analysis__write_clearing_entries_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__write_clearing_entries_4_0);
	MR_init_label4(analysis__write_clearing_entries_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_clearing_entries'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__write_clearing_entries_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("% Clearing entries involving ", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__write_clearing_entries_4_0_i2);
MR_def_label(analysis__write_clearing_entries_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_3_0,
		analysis__write_clearing_entries_4_0_i3);
MR_def_label(analysis__write_clearing_entries_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" from ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__write_clearing_entries_4_0_i4);
MR_def_label(analysis__write_clearing_entries_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		analysis__write_clearing_entries_4_0_i5);
MR_def_label(analysis__write_clearing_entries_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'s IMDG.\n", 9);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module63)
	MR_init_entry1(analysis__clear_imdg_entries_pointing_at_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__clear_imdg_entries_pointing_at_2_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'clear_imdg_entries_pointing_at_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__clear_imdg_entries_pointing_at_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__clear_imdg_entries_pointing_at_3_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__map_values_only_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_3_0);

MR_BEGIN_MODULE(analysis_module64)
	MR_init_entry1(analysis__clear_imdg_entries_pointing_at_3_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__clear_imdg_entries_pointing_at_3_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'clear_imdg_entries_pointing_at_3'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__clear_imdg_entries_pointing_at_3_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(18,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1166__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, imdg_arc);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__filter_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module65)
	MR_init_entry1(analysis__combine_func_imdg_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__combine_func_imdg_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'combine_func_imdg'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__combine_func_imdg_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,13,3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(map__union_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(analysis_module66)
	MR_init_entry1(analysis__combine_imdg_lists_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__combine_imdg_lists_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'combine_imdg_lists'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__combine_imdg_lists_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, imdg_arc);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(analysis__file__read_module_imdg_6_0);
MR_decl_entry(map__det_insert_4_0);

MR_BEGIN_MODULE(analysis_module67)
	MR_init_entry1(analysis__load_module_imdg_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__load_module_imdg_6_0);
	MR_init_label2(analysis__load_module_imdg_6_0,2,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'load_module_imdg'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__load_module_imdg_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(analysis__file__read_module_imdg_6_0,
		analysis__load_module_imdg_6_0_i2);
MR_def_label(analysis__load_module_imdg_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(0, MR_sv(2), 9);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		analysis__load_module_imdg_6_0_i6);
MR_def_label(analysis__load_module_imdg_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_r1;
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(analysis__file__write_module_overall_status_6_0);

MR_BEGIN_MODULE(analysis_module68)
	MR_init_entry1(analysis__maybe_write_module_overall_status_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__maybe_write_module_overall_status_5_0);
	MR_init_label2(analysis__maybe_write_module_overall_status_5_0,3,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_write_module_overall_status'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__maybe_write_module_overall_status_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r3 = MR_tfield(0, MR_sv(1), 6);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		analysis__maybe_write_module_overall_status_5_0_i3);
MR_def_label(analysis__maybe_write_module_overall_status_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__maybe_write_module_overall_status_5_0_i6);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(analysis__file__write_module_overall_status_6_0);
	}
MR_def_label(analysis__maybe_write_module_overall_status_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(analysis__file__write_module_analysis_requests_6_0);

MR_BEGIN_MODULE(analysis_module69)
	MR_init_entry1(analysis__maybe_write_module_requests_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__maybe_write_module_requests_5_0);
	MR_init_label2(analysis__maybe_write_module_requests_5_0,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_write_module_requests'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__maybe_write_module_requests_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(0, MR_sv(1), 5);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		analysis__maybe_write_module_requests_5_0_i6);
MR_def_label(analysis__maybe_write_module_requests_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__maybe_write_module_requests_5_0_i9);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(analysis__file__write_module_analysis_requests_6_0);
	}
MR_def_label(analysis__maybe_write_module_requests_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(analysis__file__write_module_imdg_6_0);

MR_BEGIN_MODULE(analysis_module70)
	MR_init_entry1(analysis__maybe_write_module_imdg_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__maybe_write_module_imdg_5_0);
	MR_init_label2(analysis__maybe_write_module_imdg_5_0,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_write_module_imdg'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__maybe_write_module_imdg_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_tfield(0, MR_sv(1), 9);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__search_3_0,
		analysis__maybe_write_module_imdg_5_0_i6);
MR_def_label(analysis__maybe_write_module_imdg_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(analysis__maybe_write_module_imdg_5_0_i9);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(analysis__file__write_module_imdg_6_0);
	}
MR_def_label(analysis__maybe_write_module_imdg_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module71)
	MR_init_entry1(fn__analysis__lub_result_statuses_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__lub_result_statuses_2_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lub_result_statuses_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__lub_result_statuses_2_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module72)
	MR_init_entry1(fn__analysis__lub_result_statuses_3_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__lub_result_statuses_3_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lub_result_statuses_3'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__lub_result_statuses_3_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module73)
	MR_init_entry1(fn__analysis__lub_result_statuses_4_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__lub_result_statuses_4_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lub_result_statuses_4'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__lub_result_statuses_4_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_np_tailcall_ent(fn__analysis__lub_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module74)
	MR_init_entry1(analysis__pre_initialise_mutable_debug_analysis_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__pre_initialise_mutable_debug_analysis_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_debug_analysis'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__pre_initialise_mutable_debug_analysis_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__analysis__pre_initialise_mutable_debug_analysis_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_debug_analysis");
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__mutable_variable_debug_analysis_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8375 "analysis.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_debug_analysis");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module75)
	MR_init_entry1(analysis__set_debug_analysis_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__set_debug_analysis_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_debug_analysis'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__set_debug_analysis_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__analysis__set_debug_analysis_1_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 8409 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__set_debug_analysis_1_0
	X = MR_r1;
{
#line 1375 "analysis.m"
analysis__mutable_variable_debug_analysis = X;
;}
#line 8420 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__analysis__set_debug_analysis_1_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 8432 "analysis.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module76)
	MR_init_entry1(analysis__initialise_mutable_debug_analysis_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__initialise_mutable_debug_analysis_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_debug_analysis'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__initialise_mutable_debug_analysis_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__analysis__initialise_mutable_debug_analysis_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_debug_analysis");
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&analysis__mutable_variable_debug_analysis_lock, MR_MUTEX_ATTR);
#endif
;}
#line 8465 "analysis.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_debug_analysis");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__analysis__initialise_mutable_debug_analysis_0_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 8478 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__initialise_mutable_debug_analysis_0_0
	X = (MR_Integer) 0;
{
#line 1375 "analysis.m"
analysis__mutable_variable_debug_analysis = X;
;}
#line 8489 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__analysis__initialise_mutable_debug_analysis_0_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 8501 "analysis.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module77)
	MR_init_entry1(analysis__get_debug_analysis_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__get_debug_analysis_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_debug_analysis'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__get_debug_analysis_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__analysis__get_debug_analysis_1_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 8534 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__analysis__get_debug_analysis_1_0
{
#line 1375 "analysis.m"
X = analysis__mutable_variable_debug_analysis;
;}
#line 8544 "analysis.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__analysis__get_debug_analysis_1_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 8557 "analysis.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__typed_unify_2_0);
MR_decl_entry(__Unify___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(analysis_module78)
	MR_init_entry1(__Unify___analysis__analysis_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__analysis_info_0_0);
	MR_init_label10(__Unify___analysis__analysis_info_0_0,4,5,6,8,10,15,17,22,26,31)
	MR_init_label2(__Unify___analysis__analysis_info_0_0,38,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__analysis_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_info_0_0_i38);
	}
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(19) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(20) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(22) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(21) = (MR_Integer) 1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(21);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Unify___analysis__analysis_info_0_0_i4);
MR_def_label(__Unify___analysis__analysis_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(22);
	MR_sv(22) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(21);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Unify___analysis__analysis_info_0_0_i5);
MR_def_label(__Unify___analysis__analysis_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_0,
		__Unify___analysis__analysis_info_0_0_i6);
MR_def_label(__Unify___analysis__analysis_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___analysis__analysis_info_0_0_i8);
MR_def_label(__Unify___analysis__analysis_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_info_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___analysis__analysis_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___set_ordlist__set_ordlist_1_0,
		__Unify___analysis__analysis_info_0_0_i10);
MR_def_label(__Unify___analysis__analysis_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___analysis__analysis_info_0_0_i15);
MR_def_label(__Unify___analysis__analysis_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___analysis__analysis_info_0_0_i17);
MR_def_label(__Unify___analysis__analysis_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___analysis__analysis_info_0_0_i22);
MR_def_label(__Unify___analysis__analysis_info_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___analysis__analysis_info_0_0_i26);
MR_def_label(__Unify___analysis__analysis_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___analysis__analysis_info_0_0_i31);
MR_def_label(__Unify___analysis__analysis_info_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(20);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___analysis__analysis_info_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___analysis__analysis_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__typed_compare_3_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___set_ordlist__set_ordlist_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(analysis_module79)
	MR_init_entry1(__Compare___analysis__analysis_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__analysis_info_0_0);
	MR_init_label10(__Compare___analysis__analysis_info_0_0,3,2,5,6,7,11,15,19,26,30)
	MR_init_label4(__Compare___analysis__analysis_info_0_0,37,43,50,131)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__analysis_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_info_0_0_i3);
	}
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___analysis__analysis_info_0_0_i2);
MR_def_label(__Compare___analysis__analysis_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___analysis__analysis_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(20) = MR_tfield(0, MR_tempr4, 10);
	MR_sv(19) = MR_tfield(0, MR_tempr4, 9);
	MR_sv(18) = MR_tfield(0, MR_tempr4, 8);
	MR_sv(17) = MR_tfield(0, MR_tempr4, 7);
	MR_sv(16) = MR_tfield(0, MR_tempr4, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr4, 2);
	MR_tempr5 = MR_sv(1);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_tempr2 = MR_tempr5;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_sv(11) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(22) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(21) = (MR_Integer) 1;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_sv(21);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Compare___analysis__analysis_info_0_0_i5);
MR_def_label(__Compare___analysis__analysis_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(22);
	MR_sv(22) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(21);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Compare___analysis__analysis_info_0_0_i6);
MR_def_label(__Compare___analysis__analysis_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(private_builtin__typed_compare_3_0,
		__Compare___analysis__analysis_info_0_0_i7);
MR_def_label(__Compare___analysis__analysis_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_info_0_0_i131);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___analysis__analysis_info_0_0_i11);
MR_def_label(__Compare___analysis__analysis_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_info_0_0_i131);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___analysis__analysis_info_0_0_i15);
MR_def_label(__Compare___analysis__analysis_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_info_0_0_i131);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___set_ordlist__set_ordlist_1_0,
		__Compare___analysis__analysis_info_0_0_i19);
MR_def_label(__Compare___analysis__analysis_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_info_0_0_i131);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___analysis__analysis_info_0_0_i26);
MR_def_label(__Compare___analysis__analysis_info_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_info_0_0_i131);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___analysis__analysis_info_0_0_i30);
MR_def_label(__Compare___analysis__analysis_info_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_info_0_0_i131);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___analysis__analysis_info_0_0_i37);
MR_def_label(__Compare___analysis__analysis_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_info_0_0_i131);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___analysis__analysis_info_0_0_i43);
MR_def_label(__Compare___analysis__analysis_info_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_info_0_0_i131);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___analysis__analysis_info_0_0_i50);
MR_def_label(__Compare___analysis__analysis_info_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_info_0_0_i131);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,5);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(20);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___analysis__analysis_info_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module80)
	MR_init_entry1(__Unify___analysis__analysis_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__analysis_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__analysis_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module81)
	MR_init_entry1(__Compare___analysis__analysis_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__analysis_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__analysis_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 2) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module82)
	MR_init_entry1(__Unify___analysis__analysis_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__analysis_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__analysis_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(analysis_module83)
	MR_init_entry1(__Compare___analysis__analysis_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__analysis_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__analysis_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module84)
	MR_init_entry1(__Unify___analysis__analysis_request_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__analysis_request_0_0);
	MR_init_label5(__Unify___analysis__analysis_request_0_0,4,5,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__analysis_request_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_request_0_0_i10);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = (MR_Integer) 4;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Unify___analysis__analysis_request_0_0_i4);
MR_def_label(__Unify___analysis__analysis_request_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Unify___analysis__analysis_request_0_0_i5);
MR_def_label(__Unify___analysis__analysis_request_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_0,
		__Unify___analysis__analysis_request_0_0_i6);
MR_def_label(__Unify___analysis__analysis_request_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_request_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___analysis__analysis_request_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___analysis__analysis_request_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module85)
	MR_init_entry1(__Compare___analysis__analysis_request_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__analysis_request_0_0);
	MR_init_label6(__Compare___analysis__analysis_request_0_0,3,2,5,6,7,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__analysis_request_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_request_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___analysis__analysis_request_0_0_i2);
MR_def_label(__Compare___analysis__analysis_request_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___analysis__analysis_request_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_tempr2 = MR_tempr5;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(5) = (MR_Integer) 4;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Compare___analysis__analysis_request_0_0_i5);
MR_def_label(__Compare___analysis__analysis_request_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Compare___analysis__analysis_request_0_0_i6);
MR_def_label(__Compare___analysis__analysis_request_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(private_builtin__typed_compare_3_0,
		__Compare___analysis__analysis_request_0_0_i7);
MR_def_label(__Compare___analysis__analysis_request_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_request_0_0_i23);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___analysis__analysis_request_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(analysis_module86)
	MR_init_entry1(__Unify___analysis__analysis_result_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__analysis_result_2_0);
	MR_init_label4(__Unify___analysis__analysis_result_2_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__analysis_result_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_result_2_0_i8);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___analysis__analysis_result_2_0_i4);
MR_def_label(__Unify___analysis__analysis_result_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_result_2_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___analysis__analysis_result_2_0_i6);
MR_def_label(__Unify___analysis__analysis_result_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__analysis_result_2_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(3));
	MR_decr_sp_and_return(6);
MR_def_label(__Unify___analysis__analysis_result_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___analysis__analysis_result_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(analysis_module87)
	MR_init_entry1(__Compare___analysis__analysis_result_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__analysis_result_2_0);
	MR_init_label5(__Compare___analysis__analysis_result_2_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__analysis_result_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_result_2_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_GOTO_LAB(__Compare___analysis__analysis_result_2_0_i2);
MR_def_label(__Compare___analysis__analysis_result_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___analysis__analysis_result_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr7 = MR_sv(2);
	MR_sv(3) = MR_tfield(0, MR_tempr7, 2);
	MR_tempr1 = MR_tfield(0, MR_tempr7, 1);
	MR_tempr8 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr8, 2);
	MR_tempr3 = MR_tfield(0, MR_tempr8, 1);
	MR_tempr4 = MR_tempr8;
	MR_sv(1) = MR_tempr3;
	MR_tempr5 = MR_tempr7;
	MR_sv(2) = MR_tempr2;
	MR_tempr6 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr6;
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	MR_r3 = MR_tfield(0, MR_tempr5, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___analysis__analysis_result_2_0_i5);
MR_def_label(__Compare___analysis__analysis_result_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_result_2_0_i29);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___analysis__analysis_result_2_0_i9);
MR_def_label(__Compare___analysis__analysis_result_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__analysis_result_2_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___analysis__analysis_result_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module88)
	MR_init_entry1(__Unify___analysis__analysis_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__analysis_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__analysis_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module89)
	MR_init_entry1(__Compare___analysis__analysis_status_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__analysis_status_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__analysis_status_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module90)
	MR_init_entry1(__Unify___analysis__analysis_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__analysis_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__analysis_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module91)
	MR_init_entry1(__Compare___analysis__analysis_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__analysis_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__analysis_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module92)
	MR_init_entry1(__Unify___analysis__any_call_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__any_call_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__any_call_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module93)
	MR_init_entry1(__Compare___analysis__any_call_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__any_call_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__any_call_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module94)
	MR_init_entry1(__Unify___analysis__fixpoint_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__fixpoint_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__fixpoint_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module95)
	MR_init_entry1(__Compare___analysis__fixpoint_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__fixpoint_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__fixpoint_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module96)
	MR_init_entry1(__Unify___analysis__func_analysis_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__func_analysis_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__func_analysis_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module97)
	MR_init_entry1(__Compare___analysis__func_analysis_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__func_analysis_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__func_analysis_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module98)
	MR_init_entry1(__Unify___analysis__func_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__func_id_0_0);
	MR_init_label2(__Unify___analysis__func_id_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__func_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___analysis__func_id_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___analysis__func_id_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___analysis__func_id_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___analysis__func_id_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___analysis__func_id_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___analysis__func_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module99)
	MR_init_entry1(__Compare___analysis__func_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__func_id_0_0);
	MR_init_label6(__Compare___analysis__func_id_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__func_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___analysis__func_id_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___analysis__func_id_0_0_i2);
MR_def_label(__Compare___analysis__func_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___analysis__func_id_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___analysis__func_id_0_0_i5);
MR_def_label(__Compare___analysis__func_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__func_id_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___analysis__func_id_0_0_i9);
MR_def_label(__Compare___analysis__func_id_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__func_id_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___analysis__func_id_0_0_i13);
MR_def_label(__Compare___analysis__func_id_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__func_id_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___analysis__func_id_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module100)
	MR_init_entry1(__Unify___analysis__imdg_arc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__imdg_arc_0_0);
	MR_init_label5(__Unify___analysis__imdg_arc_0_0,4,5,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__imdg_arc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___analysis__imdg_arc_0_0_i10);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = (MR_Integer) 4;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Unify___analysis__imdg_arc_0_0_i4);
MR_def_label(__Unify___analysis__imdg_arc_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Unify___analysis__imdg_arc_0_0_i5);
MR_def_label(__Unify___analysis__imdg_arc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_0,
		__Unify___analysis__imdg_arc_0_0_i6);
MR_def_label(__Unify___analysis__imdg_arc_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__imdg_arc_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___analysis__imdg_arc_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___analysis__imdg_arc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module101)
	MR_init_entry1(__Compare___analysis__imdg_arc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__imdg_arc_0_0);
	MR_init_label6(__Compare___analysis__imdg_arc_0_0,3,2,5,6,7,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__imdg_arc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___analysis__imdg_arc_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___analysis__imdg_arc_0_0_i2);
MR_def_label(__Compare___analysis__imdg_arc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___analysis__imdg_arc_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr4 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 2);
	MR_tempr2 = MR_tempr5;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(5) = (MR_Integer) 4;
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Compare___analysis__imdg_arc_0_0_i5);
MR_def_label(__Compare___analysis__imdg_arc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Compare___analysis__imdg_arc_0_0_i6);
MR_def_label(__Compare___analysis__imdg_arc_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(private_builtin__typed_compare_3_0,
		__Compare___analysis__imdg_arc_0_0_i7);
MR_def_label(__Compare___analysis__imdg_arc_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__imdg_arc_0_0_i23);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___analysis__imdg_arc_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module102)
	MR_init_entry1(__Unify___analysis__make_analysis_registry_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__make_analysis_registry_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__make_analysis_registry_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module103)
	MR_init_entry1(__Compare___analysis__make_analysis_registry_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__make_analysis_registry_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__make_analysis_registry_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module104)
	MR_init_entry1(__Unify___analysis__module_analysis_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__module_analysis_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__module_analysis_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module105)
	MR_init_entry1(__Compare___analysis__module_analysis_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__module_analysis_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__module_analysis_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module106)
	MR_init_entry1(__Unify___analysis__no_func_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__no_func_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__no_func_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module107)
	MR_init_entry1(__Compare___analysis__no_func_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__no_func_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__no_func_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module108)
	MR_init_entry1(__Unify___analysis__some_analysis_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___analysis__some_analysis_result_0_0);
	MR_init_label8(__Unify___analysis__some_analysis_result_0_0,4,5,6,8,9,10,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___analysis__some_analysis_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___analysis__some_analysis_result_0_0_i12);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = (MR_Integer) 4;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Unify___analysis__some_analysis_result_0_0_i4);
MR_def_label(__Unify___analysis__some_analysis_result_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Unify___analysis__some_analysis_result_0_0_i5);
MR_def_label(__Unify___analysis__some_analysis_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_0,
		__Unify___analysis__some_analysis_result_0_0_i6);
MR_def_label(__Unify___analysis__some_analysis_result_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__some_analysis_result_0_0_i1);
	}
	MR_sv(9) = (MR_Integer) 5;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Unify___analysis__some_analysis_result_0_0_i8);
MR_def_label(__Unify___analysis__some_analysis_result_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Unify___analysis__some_analysis_result_0_0_i9);
MR_def_label(__Unify___analysis__some_analysis_result_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(private_builtin__typed_unify_2_0,
		__Unify___analysis__some_analysis_result_0_0_i10);
MR_def_label(__Unify___analysis__some_analysis_result_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___analysis__some_analysis_result_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(5));
	MR_decr_sp_and_return(10);
MR_def_label(__Unify___analysis__some_analysis_result_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___analysis__some_analysis_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module109)
	MR_init_entry1(__Compare___analysis__some_analysis_result_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___analysis__some_analysis_result_0_0);
	MR_init_label9(__Compare___analysis__some_analysis_result_0_0,3,2,5,6,7,11,12,13,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___analysis__some_analysis_result_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___analysis__some_analysis_result_0_0_i3);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_GOTO_LAB(__Compare___analysis__some_analysis_result_0_0_i2);
MR_def_label(__Compare___analysis__some_analysis_result_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___analysis__some_analysis_result_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_sv(7) = MR_tfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_sv(9);
	MR_r1 = MR_tfield(0, MR_tempr4, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr4, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr4, 2);
	MR_sv(9) = MR_tfield(0, MR_sv(9), 1);
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_r1;
	MR_sv(8) = (MR_Integer) 4;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Compare___analysis__some_analysis_result_0_0_i5);
MR_def_label(__Compare___analysis__some_analysis_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Compare___analysis__some_analysis_result_0_0_i6);
MR_def_label(__Compare___analysis__some_analysis_result_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(private_builtin__typed_compare_3_0,
		__Compare___analysis__some_analysis_result_0_0_i7);
MR_def_label(__Compare___analysis__some_analysis_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__some_analysis_result_0_0_i33);
	}
	MR_sv(9) = (MR_Integer) 5;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Compare___analysis__some_analysis_result_0_0_i11);
MR_def_label(__Compare___analysis__some_analysis_result_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		__Compare___analysis__some_analysis_result_0_0_i12);
MR_def_label(__Compare___analysis__some_analysis_result_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(private_builtin__typed_compare_3_0,
		__Compare___analysis__some_analysis_result_0_0_i13);
MR_def_label(__Compare___analysis__some_analysis_result_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___analysis__some_analysis_result_0_0_i33);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___analysis__some_analysis_result_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module110)
	MR_init_entry1(analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module111)
	MR_init_entry1(analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module112)
	MR_init_entry1(fn__analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module113)
	MR_init_entry1(analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_0);
	MR_init_label1(analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_0_i1);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("any", 3)) != 0)) {
		MR_GOTO_LAB(analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module114)
	MR_init_entry1(fn__analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_0);
	MR_init_label3(fn__analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__lookup_existing_call_patterns__480__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Integer) 4;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_0_i2);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		fn__analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_0_i3);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_0_i4);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_existing_call_patterns__480__1_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(univ__det_univ_to_type_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module115)
	MR_init_entry1(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0);
	MR_init_label6(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0,4,5,6,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__lookup_matching_results__548__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r4, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0_i4);
MR_def_label(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0_i5);
MR_def_label(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0_i6);
MR_def_label(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0_i2);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0_i8);
MR_def_label(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0_i9);
MR_def_label(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = (MR_Integer) 2;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
MR_def_label(analysis__IntroducedFrom__pred__lookup_matching_results__548__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module116)
	MR_init_entry1(analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0);
	MR_init_label4(analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__lookup_best_result__558__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("% Looking up best analysis result for ", 38);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0_i2);
MR_def_label(analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0_i3);
MR_def_label(analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0_i4);
MR_def_label(analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__write_3_0,
		analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0_i5);
MR_def_label(analysis__IntroducedFrom__pred__lookup_best_result__558__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__univ__univ_1_2);

MR_BEGIN_MODULE(analysis_module117)
	MR_init_entry1(fn__analysis__IntroducedFrom__func__lookup_requests__675__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__IntroducedFrom__func__lookup_requests__675__1_2_0);
	MR_init_label3(fn__analysis__IntroducedFrom__func__lookup_requests__675__1_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__lookup_requests__675__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__analysis__IntroducedFrom__func__lookup_requests__675__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(1) = (MR_Integer) 4;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__analysis__IntroducedFrom__func__lookup_requests__675__1_2_0_i2);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_requests__675__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__analysis__IntroducedFrom__func__lookup_requests__675__1_2_0_i3);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_requests__675__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		fn__analysis__IntroducedFrom__func__lookup_requests__675__1_2_0_i4);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_requests__675__1_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__univ__univ_1_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module118)
	MR_init_entry1(analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0);
	MR_init_label4(analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__lookup_results_1__499__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("% Looking up analysis results for ", 34);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0_i2);
MR_def_label(analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0_i3);
MR_def_label(analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0_i4);
MR_def_label(analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__write_3_0,
		analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0_i5);
MR_def_label(analysis__IntroducedFrom__pred__lookup_results_1__499__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module119)
	MR_init_entry1(analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0);
	MR_init_label4(analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0,2,3,4,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__lookup_results_1__516__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Found these results: ", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0_i2);
MR_def_label(analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0_i3);
MR_def_label(analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 5;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0_i4);
MR_def_label(analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(analysis, analysis_result, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(io__print_3_0,
		analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0_i7);
MR_def_label(analysis__IntroducedFrom__pred__lookup_results_1__516__1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module120)
	MR_init_entry1(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0);
	MR_init_label8(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__lookup_results_2__536__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 3);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = (MR_Integer) 4;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0_i2);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0_i3);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0_i4);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0_i5);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Integer) 5;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0_i6);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0_i7);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0_i8);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(univ__det_univ_to_type_2_0,
		fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0_i9);
MR_def_label(fn__analysis__IntroducedFrom__func__lookup_results_2__536__1_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module121)
	MR_init_entry1(analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__601__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__601__1_4_0);
	MR_init_label2(analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__601__1_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__601__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__601__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r4, 0);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__601__1_4_0_i2);
MR_def_label(analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__601__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(private_builtin__superclass_from_typeclass_info_3_0,
		analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__601__1_4_0_i3);
MR_def_label(analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__601__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r2 = (MR_Integer) 2;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(analysis__IntroducedFrom__pred__lookup_exactly_matching_result_even_from_invalid_modules__601__1_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module122)
	MR_init_entry1(analysis__IntroducedFrom__pred__update_analysis_registry_5__889__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__IntroducedFrom__pred__update_analysis_registry_5__889__1_7_0);
	MR_init_label2(analysis__IntroducedFrom__pred__update_analysis_registry_5__889__1_7_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__update_analysis_registry_5__889__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(analysis__IntroducedFrom__pred__update_analysis_registry_5__889__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r1;
	MR_r2 = (MR_Integer) 4;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__IntroducedFrom__pred__update_analysis_registry_5__889__1_7_0_i2);
MR_def_label(analysis__IntroducedFrom__pred__update_analysis_registry_5__889__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 5;
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__IntroducedFrom__pred__update_analysis_registry_5__889__1_7_0_i3);
MR_def_label(analysis__IntroducedFrom__pred__update_analysis_registry_5__889__1_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(analysis__write_no_change_in_result_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module123)
	MR_init_entry1(analysis__IntroducedFrom__pred__update_analysis_registry_5__918__1_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__IntroducedFrom__pred__update_analysis_registry_5__918__1_7_0);
	MR_init_label1(analysis__IntroducedFrom__pred__update_analysis_registry_5__918__1_7_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__update_analysis_registry_5__918__1'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(analysis__IntroducedFrom__pred__update_analysis_registry_5__918__1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r2 = (MR_Integer) 5;
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		analysis__IntroducedFrom__pred__update_analysis_registry_5__918__1_7_0_i2);
MR_def_label(analysis__IntroducedFrom__pred__update_analysis_registry_5__918__1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(analysis__write_changed_answer_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___univ__univ_0_0);

MR_BEGIN_MODULE(analysis_module124)
	MR_init_entry1(fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0);
	MR_init_label6(fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0,2,3,4,5,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__update_analysis_registry_5__947__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(4) = (MR_Integer) 4;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0_i2);
MR_def_label(fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0_i3);
MR_def_label(fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(private_builtin__type_info_from_typeclass_info_3_0,
		fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0_i4);
MR_def_label(fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__univ__univ_1_0,
		fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0_i5);
MR_def_label(fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___univ__univ_0_0,
		fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0_i6);
MR_def_label(fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0_i1);
	}
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__analysis__IntroducedFrom__func__update_analysis_registry_5__947__1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module125)
	MR_init_entry1(analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1166__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1166__1_2_0);
	MR_init_label2(analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1166__1_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1166__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1166__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1166__1_2_0_i3);
MR_def_label(analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1166__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1166__1_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(analysis__IntroducedFrom__pred__clear_imdg_entries_pointing_at_3__1166__1_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module126)
	MR_init_entry1(fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__lub_result_statuses_2__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_50_95_95_91_49_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, func_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,13,4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(fn__map__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(analysis_module127)
	MR_init_entry1(fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__lub_result_statuses_3__[1]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_117_98_95_114_101_115_117_108_116_95_115_116_97_116_117_115_101_115_95_51_95_95_91_49_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(analysis, some_analysis_result);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(analysis, analysis_status);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,13,5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__list__foldl_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module128)
	MR_init_entry1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___analysis__any_call_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module129)
	MR_init_entry1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___analysis__any_call_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module130)
	MR_init_entry1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Unify___analysis__no_func_info_0__[1, 2]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_49_44_32_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module131)
	MR_init_entry1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred____Compare___analysis__no_func_info_0__[2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_48_95_95_91_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__semidet_fail_0_0);

MR_BEGIN_MODULE(analysis_module132)
	MR_init_entry1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3__[1, 2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_109_111_114_101_95_112_114_101_99_105_115_101_95_116_104_97_110_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(builtin__semidet_fail_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__semidet_succeed_0_0);

MR_BEGIN_MODULE(analysis_module133)
	MR_init_entry1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3__[1, 2, 3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_112_97_114_116_105_97_108_95_111_114_100_101_114_95_95_95_95_97_110_97_108_121_115_105_115_95_95_110_111_95_102_117_110_99_95_105_110_102_111_95_95_97_114_105_116_121_48_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_101_113_117_105_118_97_108_101_110_116_95_51_95_95_91_49_44_32_50_44_32_51_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(builtin__semidet_succeed_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__context_init_0_0);

MR_BEGIN_MODULE(analysis_module134)
	MR_init_entry1(fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_0);
	MR_init_label1(fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,19,0);
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_0_i3);
MR_def_label(fn__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_95_95_95_97_110_97_108_121_115_105_115_95_95_97_110_121_95_99_97_108_108_95_95_97_114_105_116_121_48_95_95_95_95_95_95_97_110_97_108_121_115_105_115_95_95_116_111_95_116_101_114_109_95_49_95_95_91_49_93_95_48_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module135)
	MR_init_entry1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_0);
	MR_init_label1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__debug_msg__ho1__[3]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 11392 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_0
{
#line 1375 "analysis.m"
X = analysis__mutable_variable_debug_analysis;
;}
#line 11402 "analysis.c"
	MR_r4 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 11415 "analysis.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_0_i12);
	}
	MR_np_tailcall_ent(analysis__write_clearing_entries_4_0);
MR_def_label(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_49_95_95_91_51_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module136)
	MR_init_entry1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_0);
	MR_init_label1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__debug_msg__ho3__[6]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 11455 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_0
{
#line 1375 "analysis.m"
X = analysis__mutable_variable_debug_analysis;
;}
#line 11465 "analysis.c"
	MR_r7 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 11478 "analysis.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r7,0)) {
		MR_GOTO_LAB(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_0_i12);
	}
	MR_np_tailcall_ent(analysis__IntroducedFrom__pred__update_analysis_registry_5__918__1_7_0);
MR_def_label(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_51_95_95_91_54_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(analysis_module137)
	MR_init_entry1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_0);
	MR_init_label1(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__debug_msg__ho4__[6]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 11518 "analysis.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_0
{
#line 1375 "analysis.m"
X = analysis__mutable_variable_debug_analysis;
;}
#line 11528 "analysis.c"
	MR_r7 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_0
{
#line 1375 "analysis.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&analysis__mutable_variable_debug_analysis_lock,
                "analysis__mutable_variable_debug_analysis_lock");
#endif
;}
#line 11541 "analysis.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r7,0)) {
		MR_GOTO_LAB(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_0_i12);
	}
	MR_np_tailcall_ent(analysis__IntroducedFrom__pred__update_analysis_registry_5__889__1_7_0);
MR_def_label(f_97_110_97_108_121_115_105_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_98_117_103_95_109_115_103_95_95_104_111_52_95_95_91_54_93_95_48_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 1375 "analysis.m"
MR_Word analysis__mutable_variable_debug_analysis;
#ifdef MR_THREAD_SAFE
    MercuryLock analysis__mutable_variable_debug_analysis_lock;
#endif

#line 11562 "analysis.c"

MR_declare_entry(mercury__analysis__initialise_mutable_debug_analysis_0_0);

void
analysis__user_init_pred_0(void);

void
analysis__user_init_pred_0(void)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__analysis__initialise_mutable_debug_analysis_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__analysis__initialise_mutable_debug_analysis_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__analysis_maybe_bunch_0(void)
{
	analysis_module0();
	analysis_module1();
	analysis_module2();
	analysis_module3();
	analysis_module4();
	analysis_module5();
	analysis_module6();
	analysis_module7();
	analysis_module8();
	analysis_module9();
	analysis_module10();
	analysis_module11();
	analysis_module12();
	analysis_module13();
	analysis_module14();
	analysis_module15();
	analysis_module16();
	analysis_module17();
	analysis_module18();
	analysis_module19();
	analysis_module20();
	analysis_module21();
	analysis_module22();
	analysis_module23();
	analysis_module24();
	analysis_module25();
	analysis_module26();
	analysis_module27();
	analysis_module28();
	analysis_module29();
	analysis_module30();
	analysis_module31();
	analysis_module32();
	analysis_module33();
	analysis_module34();
	analysis_module35();
	analysis_module36();
	analysis_module37();
	analysis_module38();
	analysis_module39();
}

static void mercury__analysis_maybe_bunch_1(void)
{
	analysis_module40();
	analysis_module41();
	analysis_module42();
	analysis_module43();
	analysis_module44();
	analysis_module45();
	analysis_module46();
	analysis_module47();
	analysis_module48();
	analysis_module49();
	analysis_module50();
	analysis_module51();
	analysis_module52();
	analysis_module53();
	analysis_module54();
	analysis_module55();
	analysis_module56();
	analysis_module57();
	analysis_module58();
	analysis_module59();
	analysis_module60();
	analysis_module61();
	analysis_module62();
	analysis_module63();
	analysis_module64();
	analysis_module65();
	analysis_module66();
	analysis_module67();
	analysis_module68();
	analysis_module69();
	analysis_module70();
	analysis_module71();
	analysis_module72();
	analysis_module73();
	analysis_module74();
	analysis_module75();
	analysis_module76();
	analysis_module77();
	analysis_module78();
	analysis_module79();
}

static void mercury__analysis_maybe_bunch_2(void)
{
	analysis_module80();
	analysis_module81();
	analysis_module82();
	analysis_module83();
	analysis_module84();
	analysis_module85();
	analysis_module86();
	analysis_module87();
	analysis_module88();
	analysis_module89();
	analysis_module90();
	analysis_module91();
	analysis_module92();
	analysis_module93();
	analysis_module94();
	analysis_module95();
	analysis_module96();
	analysis_module97();
	analysis_module98();
	analysis_module99();
	analysis_module100();
	analysis_module101();
	analysis_module102();
	analysis_module103();
	analysis_module104();
	analysis_module105();
	analysis_module106();
	analysis_module107();
	analysis_module108();
	analysis_module109();
	analysis_module110();
	analysis_module111();
	analysis_module112();
	analysis_module113();
	analysis_module114();
	analysis_module115();
	analysis_module116();
	analysis_module117();
	analysis_module118();
	analysis_module119();
}

static void mercury__analysis_maybe_bunch_3(void)
{
	analysis_module120();
	analysis_module121();
	analysis_module122();
	analysis_module123();
	analysis_module124();
	analysis_module125();
	analysis_module126();
	analysis_module127();
	analysis_module128();
	analysis_module129();
	analysis_module130();
	analysis_module131();
	analysis_module132();
	analysis_module133();
	analysis_module134();
	analysis_module135();
	analysis_module136();
	analysis_module137();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__analysis__init(void);
void mercury__analysis__init_type_tables(void);
void mercury__analysis__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__analysis__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__analysis__init_threadscope_string_table(void);
#endif
void mercury__analysis__required_init(void);

void mercury__analysis__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__analysis_maybe_bunch_0();
	mercury__analysis_maybe_bunch_1();
	mercury__analysis_maybe_bunch_2();
	mercury__analysis_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_analysis_info_0,
		analysis__analysis_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_analysis_map_1,
		analysis__analysis_map_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_analysis_name_0,
		analysis__analysis_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_analysis_request_0,
		analysis__analysis_request_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_analysis_result_2,
		analysis__analysis_result_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_analysis_status_0,
		analysis__analysis_status_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_analysis_type_0,
		analysis__analysis_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_any_call_0,
		analysis__any_call_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_fixpoint_type_0,
		analysis__fixpoint_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_func_analysis_map_1,
		analysis__func_analysis_map_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_func_id_0,
		analysis__func_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_imdg_arc_0,
		analysis__imdg_arc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_make_analysis_registry_0,
		analysis__make_analysis_registry_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_module_analysis_map_1,
		analysis__module_analysis_map_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_no_func_info_0,
		analysis__no_func_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_analysis__type_ctor_info_some_analysis_result_0,
		analysis__some_analysis_result_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__, 5) =
			MR_ENTRY_AP(fn__analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__to_term_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_analysis__to_term__arity1__analysis__any_call__arity0__, 6) =
			MR_ENTRY_AP(analysis__ClassMethod_for_analysis__to_term____analysis__any_call__arity0______analysis__from_term_2_2_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__, 5) =
			MR_ENTRY_AP(analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__more_precise_than_3_3_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_analysis__partial_order__arity2__analysis__no_func_info__arity0__analysis__any_call__arity0__, 6) =
			MR_ENTRY_AP(analysis__ClassMethod_for_analysis__partial_order____analysis__no_func_info__arity0__analysis__any_call__arity0______analysis__equivalent_3_3_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
#ifndef MR_STATIC_CODE_ADDRESSES
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__analysis__init_debugger();
}

void mercury__analysis__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_analysis_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_analysis_map_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_analysis_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_analysis_request_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_analysis_result_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_analysis_status_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_analysis_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_any_call_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_fixpoint_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_func_analysis_map_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_func_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_imdg_arc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_make_analysis_registry_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_module_analysis_map_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_no_func_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_analysis__type_ctor_info_some_analysis_result_0);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_analysis__type_class_decl_to_term_1);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_analysis__type_class_decl_partial_order_2);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_analysis__type_class_decl_compiler_1);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_analysis__type_class_decl_call_pattern_2);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_analysis__type_class_decl_answer_pattern_2);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_analysis__type_class_decl_analysis_3);
	}
}


void mercury__analysis__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__analysis__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__analysis);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__analysis__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__analysis__init_threadscope_string_table(void)
{
}

#endif

void mercury__analysis__required_init(void)
{
	analysis__user_init_pred_0();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
