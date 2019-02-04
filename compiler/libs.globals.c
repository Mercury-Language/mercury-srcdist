/*
** Automatically generated from `globals.m'
** by the Mercury compiler,
** version rotd-2010-06-17, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__libs__globals__init
REQUIRED_INIT mercury__libs__globals__required_init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 26 "libs.globals.c"
#include "libs.globals.mh"

#line 29 "libs.globals.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 33 "libs.globals.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 37 "libs.globals.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 41 "libs.globals.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 45 "libs.globals.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 49 "libs.globals.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 53 "libs.globals.c"
#line 54 "libs.globals.c"
#ifndef LIBS__GLOBALS_DECL_GUARD
#define LIBS__GLOBALS_DECL_GUARD

#line 58 "libs.globals.c"
#line 694 "globals.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Unsigned libs__globals__mutable_variable_solver_auto_init_supported;
#else
    extern MR_Unsigned libs__globals__mutable_variable_solver_auto_init_supported;
#endif

#line 66 "libs.globals.c"
#line 699 "globals.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word libs__globals__mutable_variable_maybe_from_ground_term_threshold;
#else
    extern MR_Word libs__globals__mutable_variable_maybe_from_ground_term_threshold;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock;
#endif

#line 77 "libs.globals.c"
#line 705 "globals.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word libs__globals__mutable_variable_extra_error_info;
#else
    extern MR_Word libs__globals__mutable_variable_extra_error_info;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock libs__globals__mutable_variable_extra_error_info_lock;
#endif

#line 88 "libs.globals.c"
#line 708 "globals.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word libs__globals__mutable_variable_disable_smart_recompilation;
#else
    extern MR_Word libs__globals__mutable_variable_disable_smart_recompilation;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock libs__globals__mutable_variable_disable_smart_recompilation_lock;
#endif

#line 99 "libs.globals.c"
#line 711 "globals.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word libs__globals__mutable_variable_disable_generate_item_version_numbers;
#else
    extern MR_Word libs__globals__mutable_variable_disable_generate_item_version_numbers;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock libs__globals__mutable_variable_disable_generate_item_version_numbers_lock;
#endif

#line 110 "libs.globals.c"
#line 714 "globals.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Word libs__globals__mutable_variable_maybe_source_file_map;
#else
    extern MR_Word libs__globals__mutable_variable_maybe_source_file_map;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock libs__globals__mutable_variable_maybe_source_file_map_lock;
#endif

#line 121 "libs.globals.c"
#line 122 "libs.globals.c"

#endif
#line 125 "libs.globals.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_0 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_1[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_2[];

struct mercury_type_1 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_0[];

struct mercury_type_2 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__globals__type_ctor_info_c_compiler_type_0,
	mercury_data_libs__globals__type_ctor_info_compilation_target_0,
	mercury_data_libs__globals__type_ctor_info_foreign_language_0,
	mercury_data_libs__globals__type_ctor_info_gc_method_0,
	mercury_data_libs__globals__type_ctor_info_globals_0,
	mercury_data_libs__globals__type_ctor_info_il_version_number_0,
	mercury_data_libs__globals__type_ctor_info_may_be_thread_safe_0,
	mercury_data_libs__globals__type_ctor_info_reuse_strategy_0,
	mercury_data_libs__globals__type_ctor_info_source_file_map_0,
	mercury_data_libs__globals__type_ctor_info_tags_method_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__globals__type_ctor_info_termination_norm_0;
MR_decl_label10(libs__globals__convert_c_compiler_type_2_0, 4,5,7,155,10,18,24,26,31,33)
MR_decl_label6(libs__globals__convert_c_compiler_type_2_0, 39,38,30,23,11,1)
MR_decl_label8(libs__globals__convert_foreign_language_2_0, 2,4,5,6,7,8,9,1)
MR_decl_label10(libs__globals__convert_gc_method_2_0, 3,15,5,6,7,8,10,11,12,13)
MR_decl_label2(libs__globals__convert_maybe_thread_safe_2_0, 3,1)
MR_decl_label2(libs__globals__convert_reuse_strategy_3_0, 3,1)
MR_decl_label3(libs__globals__convert_tags_method_2_0, 3,4,1)
MR_decl_label7(libs__globals__convert_target_2_0, 2,4,5,6,7,8,1)
MR_decl_label4(libs__globals__convert_termination_norm_2_0, 3,4,5,1)
MR_decl_label6(libs__globals__current_grade_supports_concurrency_2_0, 3,16,5,17,10,7)
MR_decl_label4(libs__globals__current_grade_supports_par_conj_2_0, 2,3,4,5)
MR_decl_label2(libs__globals__current_grade_supports_tabling_2_0, 2,3)
MR_decl_label2(libs__globals__get_any_intermod_2_0, 2,3)
MR_decl_label1(libs__globals__get_backend_foreign_languages_2_0, 2)
MR_decl_label2(libs__globals__globals_init_mutables_3_0, 2,3)
MR_decl_label2(libs__globals__lookup_accumulating_option_3_0, 2,3)
MR_decl_label2(libs__globals__lookup_bool_option_3_0, 2,3)
MR_decl_label3(libs__globals__lookup_bool_option_3_1, 2,8,3)
MR_decl_label2(libs__globals__lookup_int_option_3_0, 2,3)
MR_decl_label2(libs__globals__lookup_maybe_string_option_3_0, 2,3)
MR_decl_label2(libs__globals__lookup_string_option_3_0, 2,3)
MR_decl_label1(libs__globals__set_option_4_0, 2)
MR_decl_label1(libs__globals__set_trace_level_none_2_0, 2)
MR_decl_label3(libs__globals__want_return_var_layouts_2_0, 6,3,2)
MR_decl_label2(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__516__1_1_0, 3,2)
MR_decl_label5(__Unify___libs__globals__c_compiler_type_0_0, 6,8,10,19,1)
MR_decl_label8(__Unify___libs__globals__globals_0_0, 4,6,8,10,12,14,18,1)
MR_decl_label2(__Unify___libs__globals__il_version_number_0_0, 4,1)
MR_decl_label3(__Unify___libs__globals__reuse_strategy_0_0, 10,5,1)
MR_decl_label10(__Compare___libs__globals__c_compiler_type_0_0, 41,53,12,65,43,50,85,14,102,17)
MR_decl_label3(__Compare___libs__globals__c_compiler_type_0_0, 19,23,55)
MR_decl_label10(__Compare___libs__globals__globals_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label5(__Compare___libs__globals__globals_0_0, 37,41,45,49,109)
MR_decl_label6(__Compare___libs__globals__il_version_number_0_0, 3,2,5,9,13,37)
MR_decl_label4(__Compare___libs__globals__reuse_strategy_0_0, 18,7,5,9)
MR_def_extern_entry(fn__libs__globals__compilation_target_string_1_0)
MR_def_extern_entry(fn__libs__globals__foreign_language_string_1_0)
MR_def_extern_entry(fn__libs__globals__simple_foreign_language_string_1_0)
MR_def_extern_entry(fn__libs__globals__gc_is_conservative_1_0)
MR_def_extern_entry(libs__globals__convert_target_2_0)
MR_def_extern_entry(libs__globals__convert_foreign_language_2_0)
MR_def_extern_entry(libs__globals__convert_gc_method_2_0)
MR_def_extern_entry(libs__globals__convert_tags_method_2_0)
MR_def_extern_entry(libs__globals__convert_termination_norm_2_0)
MR_def_extern_entry(libs__globals__convert_maybe_thread_safe_2_0)
MR_def_extern_entry(libs__globals__convert_c_compiler_type_2_0)
MR_def_extern_entry(libs__globals__convert_reuse_strategy_3_0)
MR_def_extern_entry(libs__globals__globals_init_14_0)
MR_def_extern_entry(libs__globals__get_options_2_0)
MR_def_extern_entry(libs__globals__get_target_2_0)
MR_def_extern_entry(libs__globals__lookup_option_3_0)
MR_def_extern_entry(libs__globals__lookup_accumulating_option_3_0)
MR_def_extern_entry(libs__globals__get_backend_foreign_languages_2_0)
MR_def_extern_entry(libs__globals__get_gc_method_2_0)
MR_def_extern_entry(libs__globals__get_tags_method_2_0)
MR_def_extern_entry(libs__globals__get_termination_norm_2_0)
MR_def_extern_entry(libs__globals__get_termination2_norm_2_0)
MR_def_extern_entry(libs__globals__get_trace_level_2_0)
MR_def_extern_entry(libs__globals__get_trace_suppress_2_0)
MR_def_extern_entry(libs__globals__get_maybe_thread_safe_2_0)
MR_def_extern_entry(libs__globals__get_c_compiler_type_2_0)
MR_def_extern_entry(libs__globals__get_reuse_strategy_2_0)
MR_def_extern_entry(libs__globals__get_maybe_il_version_number_2_0)
MR_def_extern_entry(libs__globals__get_maybe_feedback_info_2_0)
MR_def_extern_entry(libs__globals__set_options_3_0)
MR_def_extern_entry(libs__globals__set_option_4_0)
MR_def_extern_entry(libs__globals__set_gc_method_3_0)
MR_def_extern_entry(libs__globals__set_tags_method_3_0)
MR_def_extern_entry(libs__globals__set_trace_level_3_0)
MR_def_extern_entry(libs__globals__set_trace_level_none_2_0)
MR_def_extern_entry(libs__globals__set_maybe_feedback_info_3_0)
MR_def_extern_entry(libs__globals__lookup_bool_option_3_0)
MR_def_extern_entry(libs__globals__lookup_bool_option_3_1)
MR_def_extern_entry(libs__globals__lookup_int_option_3_0)
MR_def_extern_entry(libs__globals__lookup_string_option_3_0)
MR_def_extern_entry(libs__globals__lookup_maybe_string_option_3_0)
MR_def_extern_entry(libs__globals__want_return_var_layouts_2_0)
MR_def_extern_entry(libs__globals__current_grade_supports_tabling_2_0)
MR_def_extern_entry(libs__globals__current_grade_supports_par_conj_2_0)
MR_def_extern_entry(libs__globals__current_grade_supports_concurrency_2_0)
MR_def_extern_entry(libs__globals__get_any_intermod_2_0)
MR_decl_static(libs__globals__lock_solver_auto_init_supported_0_0)
MR_decl_static(libs__globals__unlock_solver_auto_init_supported_0_0)
MR_decl_static(libs__globals__unsafe_set_solver_auto_init_supported_1_0)
MR_decl_static(libs__globals__lock_maybe_from_ground_term_threshold_0_0)
MR_decl_static(libs__globals__unlock_maybe_from_ground_term_threshold_0_0)
MR_decl_static(libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_0)
MR_def_extern_entry(libs__globals__globals_init_mutables_3_0)
MR_decl_static(libs__globals__unsafe_get_solver_auto_init_supported_1_0)
MR_def_extern_entry(libs__globals__semipure_get_solver_auto_init_supported_1_0)
MR_decl_static(libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_0)
MR_def_extern_entry(fn__libs__globals__get_maybe_from_ground_term_threshold_0_0)
MR_decl_static(libs__globals__lock_extra_error_info_0_0)
MR_decl_static(libs__globals__unlock_extra_error_info_0_0)
MR_decl_static(libs__globals__unsafe_get_extra_error_info_1_0)
MR_def_extern_entry(libs__globals__io_get_extra_error_info_3_0)
MR_decl_static(libs__globals__unsafe_set_extra_error_info_1_0)
MR_def_extern_entry(libs__globals__io_set_extra_error_info_3_0)
MR_decl_static(libs__globals__lock_disable_smart_recompilation_0_0)
MR_decl_static(libs__globals__unlock_disable_smart_recompilation_0_0)
MR_decl_static(libs__globals__unsafe_get_disable_smart_recompilation_1_0)
MR_def_extern_entry(libs__globals__io_get_disable_smart_recompilation_3_0)
MR_decl_static(libs__globals__unsafe_set_disable_smart_recompilation_1_0)
MR_def_extern_entry(libs__globals__io_set_disable_smart_recompilation_3_0)
MR_decl_static(libs__globals__lock_disable_generate_item_version_numbers_0_0)
MR_decl_static(libs__globals__unlock_disable_generate_item_version_numbers_0_0)
MR_decl_static(libs__globals__unsafe_get_disable_generate_item_version_numbers_1_0)
MR_def_extern_entry(libs__globals__io_get_disable_generate_item_version_numbers_3_0)
MR_decl_static(libs__globals__unsafe_set_disable_generate_item_version_numbers_1_0)
MR_def_extern_entry(libs__globals__io_set_disable_generate_item_version_numbers_3_0)
MR_decl_static(libs__globals__lock_maybe_source_file_map_0_0)
MR_decl_static(libs__globals__unlock_maybe_source_file_map_0_0)
MR_decl_static(libs__globals__unsafe_get_maybe_source_file_map_1_0)
MR_def_extern_entry(libs__globals__io_get_maybe_source_file_map_3_0)
MR_decl_static(libs__globals__unsafe_set_maybe_source_file_map_1_0)
MR_def_extern_entry(libs__globals__io_set_maybe_source_file_map_3_0)
MR_decl_static(libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_0)
MR_decl_static(libs__globals__initialise_mutable_solver_auto_init_supported_0_0)
MR_decl_static(libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_0)
MR_decl_static(libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_0)
MR_decl_static(libs__globals__pre_initialise_mutable_extra_error_info_0_0)
MR_decl_static(libs__globals__initialise_mutable_extra_error_info_0_0)
MR_decl_static(libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_0)
MR_decl_static(libs__globals__initialise_mutable_disable_smart_recompilation_0_0)
MR_decl_static(libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_0)
MR_decl_static(libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_0)
MR_decl_static(libs__globals__pre_initialise_mutable_maybe_source_file_map_0_0)
MR_decl_static(libs__globals__initialise_mutable_maybe_source_file_map_0_0)
MR_def_extern_entry(__Unify___libs__globals__c_compiler_type_0_0)
MR_def_extern_entry(__Compare___libs__globals__c_compiler_type_0_0)
MR_def_extern_entry(__Unify___libs__globals__compilation_target_0_0)
MR_def_extern_entry(__Compare___libs__globals__compilation_target_0_0)
MR_def_extern_entry(__Unify___libs__globals__foreign_language_0_0)
MR_def_extern_entry(__Compare___libs__globals__foreign_language_0_0)
MR_def_extern_entry(__Unify___libs__globals__gc_method_0_0)
MR_def_extern_entry(__Compare___libs__globals__gc_method_0_0)
MR_def_extern_entry(__Unify___libs__globals__globals_0_0)
MR_def_extern_entry(__Compare___libs__globals__globals_0_0)
MR_def_extern_entry(__Unify___libs__globals__il_version_number_0_0)
MR_def_extern_entry(__Compare___libs__globals__il_version_number_0_0)
MR_def_extern_entry(__Unify___libs__globals__may_be_thread_safe_0_0)
MR_def_extern_entry(__Compare___libs__globals__may_be_thread_safe_0_0)
MR_def_extern_entry(__Unify___libs__globals__reuse_strategy_0_0)
MR_def_extern_entry(__Compare___libs__globals__reuse_strategy_0_0)
MR_def_extern_entry(__Unify___libs__globals__source_file_map_0_0)
MR_def_extern_entry(__Compare___libs__globals__source_file_map_0_0)
MR_def_extern_entry(__Unify___libs__globals__tags_method_0_0)
MR_def_extern_entry(__Compare___libs__globals__tags_method_0_0)
MR_def_extern_entry(__Unify___libs__globals__termination_norm_0_0)
MR_def_extern_entry(__Compare___libs__globals__termination_norm_0_0)
MR_decl_static(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__516__1_1_0)
MR_decl_static(libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__373__1_1_0)

static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__globals__convert_c_compiler_type_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__globals__convert_c_compiler_type_2_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__373__1_1_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__516__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__globals__get_backend_foreign_languages_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__globals__get_backend_foreign_languages_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
};

static const struct mercury_type_0 mercury_vector_common_0_0[6] =
{
{
MR_string_const("C", 1)
},
{
MR_string_const("IL", 2)
},
{
MR_string_const("Java", 4)
},
{
MR_string_const("asm", 3)
},
{
MR_string_const("x86_64", 6)
},
{
MR_string_const("Erlang", 6)
},
};

static const struct mercury_type_0 mercury_vector_common_0_1[5] =
{
{
MR_string_const("C", 1)
},
{
MR_string_const("C#", 2)
},
{
MR_string_const("Java", 4)
},
{
MR_string_const("IL", 2)
},
{
MR_string_const("Erlang", 6)
},
};

static const struct mercury_type_0 mercury_vector_common_0_2[5] =
{
{
MR_string_const("c", 1)
},
{
MR_string_const("csharp", 6)
},
{
MR_string_const("java", 4)
},
{
MR_string_const("il", 2)
},
{
MR_string_const("erlang", 6)
},
};

static const struct mercury_type_1 mercury_vector_common_1_0[7] =
{
{
0
},
{
0
},
{
1
},
{
1
},
{
1
},
{
1
},
{
0
},
};

static const struct mercury_type_2 mercury_vector_common_2_0[16] =
{
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("boehm", 5),
-1
},
{
MR_string_const("accurate", 8),
-1
},
{
MR_string_const("conservative", 12),
-1
},
{
MR_string_const("automatic", 9),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("boehm_debug", 11),
1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("mps", 3),
-1
},
{
MR_string_const("none", 4),
2
},
{
MR_string_const("hgc", 3),
-1
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_PseudoTypeInfo mercury_data_libs__globals__field_types_c_compiler_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_libs__globals__field_names_c_compiler_type_0_0[] = {
	"gcc_major_ver",
	"gcc_minor_ver",
	"gcc_patch_level"
};

static const MR_DuFunctorDesc mercury_data_libs__globals__du_functor_desc_c_compiler_type_0_0 = {
	"cc_gcc",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_libs__globals__field_types_c_compiler_type_0_0,
	mercury_data_libs__globals__field_names_c_compiler_type_0_0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_libs__globals__du_functor_desc_c_compiler_type_0_1 = {
	"cc_lcc",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_libs__globals__du_functor_desc_c_compiler_type_0_2 = {
	"cc_cl",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_libs__globals__du_functor_desc_c_compiler_type_0_3 = {
	"cc_unknown",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_libs__globals__du_stag_ordered_c_compiler_type_0_0[] = {
	&mercury_data_libs__globals__du_functor_desc_c_compiler_type_0_1,
	&mercury_data_libs__globals__du_functor_desc_c_compiler_type_0_2,
	&mercury_data_libs__globals__du_functor_desc_c_compiler_type_0_3

};

const MR_DuFunctorDescPtr mercury_data_libs__globals__du_stag_ordered_c_compiler_type_0_1[] = {
	&mercury_data_libs__globals__du_functor_desc_c_compiler_type_0_0

};

const MR_DuPtagLayout mercury_data_libs__globals__du_ptag_ordered_c_compiler_type_0[] = {
	{ 3, MR_SECTAG_LOCAL,
	mercury_data_libs__globals__du_stag_ordered_c_compiler_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__globals__du_stag_ordered_c_compiler_type_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_libs__globals__du_name_ordered_c_compiler_type_0[] = {
	&mercury_data_libs__globals__du_functor_desc_c_compiler_type_0_2,
	&mercury_data_libs__globals__du_functor_desc_c_compiler_type_0_0,
	&mercury_data_libs__globals__du_functor_desc_c_compiler_type_0_1,
	&mercury_data_libs__globals__du_functor_desc_c_compiler_type_0_3
};

const MR_Integer mercury_data_libs__globals__functor_number_map_c_compiler_type_0[] = {
	1,
	2,
	0,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_c_compiler_type_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__globals__c_compiler_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__globals__c_compiler_type_0_0)),
	"libs.globals",
	"c_compiler_type",
	{ (void *)mercury_data_libs__globals__du_name_ordered_c_compiler_type_0 },
	{ (void *)mercury_data_libs__globals__du_ptag_ordered_c_compiler_type_0 },
	4,
	4,
	mercury_data_libs__globals__functor_number_map_c_compiler_type_0
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_compilation_target_0_0 = {
	"target_c",
	0
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_compilation_target_0_1 = {
	"target_il",
	1
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_compilation_target_0_2 = {
	"target_java",
	2
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_compilation_target_0_3 = {
	"target_asm",
	3
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_compilation_target_0_4 = {
	"target_x86_64",
	4
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_compilation_target_0_5 = {
	"target_erlang",
	5
};

const MR_EnumFunctorDescPtr mercury_data_libs__globals__enum_value_ordered_compilation_target_0[] = {
	&mercury_data_libs__globals__enum_functor_desc_compilation_target_0_0,
	&mercury_data_libs__globals__enum_functor_desc_compilation_target_0_1,
	&mercury_data_libs__globals__enum_functor_desc_compilation_target_0_2,
	&mercury_data_libs__globals__enum_functor_desc_compilation_target_0_3,
	&mercury_data_libs__globals__enum_functor_desc_compilation_target_0_4,
	&mercury_data_libs__globals__enum_functor_desc_compilation_target_0_5
};

const MR_EnumFunctorDescPtr mercury_data_libs__globals__enum_name_ordered_compilation_target_0[] = {
	&mercury_data_libs__globals__enum_functor_desc_compilation_target_0_3,
	&mercury_data_libs__globals__enum_functor_desc_compilation_target_0_0,
	&mercury_data_libs__globals__enum_functor_desc_compilation_target_0_5,
	&mercury_data_libs__globals__enum_functor_desc_compilation_target_0_1,
	&mercury_data_libs__globals__enum_functor_desc_compilation_target_0_2,
	&mercury_data_libs__globals__enum_functor_desc_compilation_target_0_4
};

const MR_Integer mercury_data_libs__globals__functor_number_map_compilation_target_0[] = {
	1,
	3,
	4,
	0,
	5,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_compilation_target_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__globals__compilation_target_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__globals__compilation_target_0_0)),
	"libs.globals",
	"compilation_target",
	{ (void *)mercury_data_libs__globals__enum_name_ordered_compilation_target_0 },
	{ (void *)mercury_data_libs__globals__enum_value_ordered_compilation_target_0 },
	6,
	4,
	mercury_data_libs__globals__functor_number_map_compilation_target_0
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_foreign_language_0_0 = {
	"lang_c",
	0
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_foreign_language_0_1 = {
	"lang_csharp",
	1
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_foreign_language_0_2 = {
	"lang_java",
	2
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_foreign_language_0_3 = {
	"lang_il",
	3
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_foreign_language_0_4 = {
	"lang_erlang",
	4
};

const MR_EnumFunctorDescPtr mercury_data_libs__globals__enum_value_ordered_foreign_language_0[] = {
	&mercury_data_libs__globals__enum_functor_desc_foreign_language_0_0,
	&mercury_data_libs__globals__enum_functor_desc_foreign_language_0_1,
	&mercury_data_libs__globals__enum_functor_desc_foreign_language_0_2,
	&mercury_data_libs__globals__enum_functor_desc_foreign_language_0_3,
	&mercury_data_libs__globals__enum_functor_desc_foreign_language_0_4
};

const MR_EnumFunctorDescPtr mercury_data_libs__globals__enum_name_ordered_foreign_language_0[] = {
	&mercury_data_libs__globals__enum_functor_desc_foreign_language_0_0,
	&mercury_data_libs__globals__enum_functor_desc_foreign_language_0_1,
	&mercury_data_libs__globals__enum_functor_desc_foreign_language_0_4,
	&mercury_data_libs__globals__enum_functor_desc_foreign_language_0_3,
	&mercury_data_libs__globals__enum_functor_desc_foreign_language_0_2
};

const MR_Integer mercury_data_libs__globals__functor_number_map_foreign_language_0[] = {
	0,
	1,
	4,
	3,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__globals__foreign_language_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__globals__foreign_language_0_0)),
	"libs.globals",
	"foreign_language",
	{ (void *)mercury_data_libs__globals__enum_name_ordered_foreign_language_0 },
	{ (void *)mercury_data_libs__globals__enum_value_ordered_foreign_language_0 },
	5,
	4,
	mercury_data_libs__globals__functor_number_map_foreign_language_0
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_gc_method_0_0 = {
	"gc_automatic",
	0
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_gc_method_0_1 = {
	"gc_none",
	1
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_gc_method_0_2 = {
	"gc_boehm",
	2
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_gc_method_0_3 = {
	"gc_boehm_debug",
	3
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_gc_method_0_4 = {
	"gc_hgc",
	4
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_gc_method_0_5 = {
	"gc_mps",
	5
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_gc_method_0_6 = {
	"gc_accurate",
	6
};

const MR_EnumFunctorDescPtr mercury_data_libs__globals__enum_value_ordered_gc_method_0[] = {
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_0,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_1,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_2,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_3,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_4,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_5,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_6
};

const MR_EnumFunctorDescPtr mercury_data_libs__globals__enum_name_ordered_gc_method_0[] = {
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_6,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_0,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_2,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_3,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_4,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_5,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_1
};

const MR_Integer mercury_data_libs__globals__functor_number_map_gc_method_0[] = {
	1,
	6,
	2,
	3,
	4,
	5,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_gc_method_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__globals__gc_method_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__globals__gc_method_0_0)),
	"libs.globals",
	"gc_method",
	{ (void *)mercury_data_libs__globals__enum_name_ordered_gc_method_0 },
	{ (void *)mercury_data_libs__globals__enum_value_ordered_gc_method_0 },
	7,
	4,
	mercury_data_libs__globals__functor_number_map_gc_method_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt_io__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_libs__options__type_ctor_info_option_0,
	(MR_TypeInfo) &mercury_data_getopt_io__type_ctor_info_option_data_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_il_version_number_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1libs__globals__type_ctor_info_il_version_number_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_libs__globals__type_ctor_info_il_version_number_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__feedback__type_ctor_info_feedback_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__feedback__type_ctor_info_feedback_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_compilation_target_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_gc_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_tags_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_termination_norm_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_c_compiler_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_reuse_strategy_0;

const MR_PseudoTypeInfo mercury_data_libs__globals__field_types_globals_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_compilation_target_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_gc_method_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_tags_method_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_termination_norm_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_termination_norm_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__trace_params__type_ctor_info_trace_level_0,
	(MR_PseudoTypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1libs__trace_params__type_ctor_info_trace_suppress_item_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_c_compiler_type_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_reuse_strategy_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1libs__globals__type_ctor_info_il_version_number_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_0
};

const MR_ConstString mercury_data_libs__globals__field_names_globals_0_0[] = {
	"g_options",
	"g_target",
	"g_gc_method",
	"g_tags_method",
	"g_termination_norm",
	"g_termination2_norm",
	"g_trace_level",
	"g_trace_suppress_items",
	"g_may_be_thread_safe",
	"g_c_compiler_type",
	"g_reuse_strategy",
	"g_maybe_il_version_number",
	"g_maybe_feedback"
};

static const MR_DuFunctorDesc mercury_data_libs__globals__du_functor_desc_globals_0_0 = {
	"globals",
	13,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_libs__globals__field_types_globals_0_0,
	mercury_data_libs__globals__field_names_globals_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_libs__globals__du_stag_ordered_globals_0_0[] = {
	&mercury_data_libs__globals__du_functor_desc_globals_0_0

};

const MR_DuPtagLayout mercury_data_libs__globals__du_ptag_ordered_globals_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__globals__du_stag_ordered_globals_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_libs__globals__du_name_ordered_globals_0[] = {
	&mercury_data_libs__globals__du_functor_desc_globals_0_0
};

const MR_Integer mercury_data_libs__globals__functor_number_map_globals_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__globals__globals_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__globals__globals_0_0)),
	"libs.globals",
	"globals",
	{ (void *)mercury_data_libs__globals__du_name_ordered_globals_0 },
	{ (void *)mercury_data_libs__globals__du_ptag_ordered_globals_0 },
	1,
	4,
	mercury_data_libs__globals__functor_number_map_globals_0
};

const MR_PseudoTypeInfo mercury_data_libs__globals__field_types_il_version_number_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_libs__globals__field_names_il_version_number_0_0[] = {
	"ivn_major",
	"ivn_minor",
	"ivn_build",
	"ivn_revision"
};

static const MR_DuFunctorDesc mercury_data_libs__globals__du_functor_desc_il_version_number_0_0 = {
	"il_version_number",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_libs__globals__field_types_il_version_number_0_0,
	mercury_data_libs__globals__field_names_il_version_number_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_libs__globals__du_stag_ordered_il_version_number_0_0[] = {
	&mercury_data_libs__globals__du_functor_desc_il_version_number_0_0

};

const MR_DuPtagLayout mercury_data_libs__globals__du_ptag_ordered_il_version_number_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__globals__du_stag_ordered_il_version_number_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_libs__globals__du_name_ordered_il_version_number_0[] = {
	&mercury_data_libs__globals__du_functor_desc_il_version_number_0_0
};

const MR_Integer mercury_data_libs__globals__functor_number_map_il_version_number_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_il_version_number_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__globals__il_version_number_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__globals__il_version_number_0_0)),
	"libs.globals",
	"il_version_number",
	{ (void *)mercury_data_libs__globals__du_name_ordered_il_version_number_0 },
	{ (void *)mercury_data_libs__globals__du_ptag_ordered_il_version_number_0 },
	1,
	4,
	mercury_data_libs__globals__functor_number_map_il_version_number_0
};

const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_may_be_thread_safe_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__globals__may_be_thread_safe_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__globals__may_be_thread_safe_0_0)),
	"libs.globals",
	"may_be_thread_safe",
	{ 0 },
	{ (void *)&mercury_data_bool__type_ctor_info_bool_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_libs__globals__du_functor_desc_reuse_strategy_0_0 = {
	"same_cons_id",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_libs__globals__field_types_reuse_strategy_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_libs__globals__du_functor_desc_reuse_strategy_0_1 = {
	"within_n_cells_difference",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_libs__globals__field_types_reuse_strategy_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_libs__globals__du_stag_ordered_reuse_strategy_0_0[] = {
	&mercury_data_libs__globals__du_functor_desc_reuse_strategy_0_0

};

const MR_DuFunctorDescPtr mercury_data_libs__globals__du_stag_ordered_reuse_strategy_0_1[] = {
	&mercury_data_libs__globals__du_functor_desc_reuse_strategy_0_1

};

const MR_DuPtagLayout mercury_data_libs__globals__du_ptag_ordered_reuse_strategy_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_libs__globals__du_stag_ordered_reuse_strategy_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_libs__globals__du_stag_ordered_reuse_strategy_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_libs__globals__du_name_ordered_reuse_strategy_0[] = {
	&mercury_data_libs__globals__du_functor_desc_reuse_strategy_0_0,
	&mercury_data_libs__globals__du_functor_desc_reuse_strategy_0_1
};

const MR_Integer mercury_data_libs__globals__functor_number_map_reuse_strategy_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_reuse_strategy_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__globals__reuse_strategy_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__globals__reuse_strategy_0_0)),
	"libs.globals",
	"reuse_strategy",
	{ (void *)mercury_data_libs__globals__du_name_ordered_reuse_strategy_0 },
	{ (void *)mercury_data_libs__globals__du_ptag_ordered_reuse_strategy_0 },
	2,
	4,
	mercury_data_libs__globals__functor_number_map_reuse_strategy_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_source_file_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__globals__source_file_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__globals__source_file_map_0_0)),
	"libs.globals",
	"source_file_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_tags_method_0_0 = {
	"tags_none",
	0
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_tags_method_0_1 = {
	"tags_low",
	1
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_tags_method_0_2 = {
	"tags_high",
	2
};

const MR_EnumFunctorDescPtr mercury_data_libs__globals__enum_value_ordered_tags_method_0[] = {
	&mercury_data_libs__globals__enum_functor_desc_tags_method_0_0,
	&mercury_data_libs__globals__enum_functor_desc_tags_method_0_1,
	&mercury_data_libs__globals__enum_functor_desc_tags_method_0_2
};

const MR_EnumFunctorDescPtr mercury_data_libs__globals__enum_name_ordered_tags_method_0[] = {
	&mercury_data_libs__globals__enum_functor_desc_tags_method_0_2,
	&mercury_data_libs__globals__enum_functor_desc_tags_method_0_1,
	&mercury_data_libs__globals__enum_functor_desc_tags_method_0_0
};

const MR_Integer mercury_data_libs__globals__functor_number_map_tags_method_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_tags_method_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__globals__tags_method_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__globals__tags_method_0_0)),
	"libs.globals",
	"tags_method",
	{ (void *)mercury_data_libs__globals__enum_name_ordered_tags_method_0 },
	{ (void *)mercury_data_libs__globals__enum_value_ordered_tags_method_0 },
	3,
	4,
	mercury_data_libs__globals__functor_number_map_tags_method_0
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_termination_norm_0_0 = {
	"norm_simple",
	0
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_termination_norm_0_1 = {
	"norm_total",
	1
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_termination_norm_0_2 = {
	"norm_num_data_elems",
	2
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_termination_norm_0_3 = {
	"norm_size_data_elems",
	3
};

const MR_EnumFunctorDescPtr mercury_data_libs__globals__enum_value_ordered_termination_norm_0[] = {
	&mercury_data_libs__globals__enum_functor_desc_termination_norm_0_0,
	&mercury_data_libs__globals__enum_functor_desc_termination_norm_0_1,
	&mercury_data_libs__globals__enum_functor_desc_termination_norm_0_2,
	&mercury_data_libs__globals__enum_functor_desc_termination_norm_0_3
};

const MR_EnumFunctorDescPtr mercury_data_libs__globals__enum_name_ordered_termination_norm_0[] = {
	&mercury_data_libs__globals__enum_functor_desc_termination_norm_0_2,
	&mercury_data_libs__globals__enum_functor_desc_termination_norm_0_0,
	&mercury_data_libs__globals__enum_functor_desc_termination_norm_0_3,
	&mercury_data_libs__globals__enum_functor_desc_termination_norm_0_1
};

const MR_Integer mercury_data_libs__globals__functor_number_map_termination_norm_0[] = {
	1,
	3,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_termination_norm_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__globals__termination_norm_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__globals__termination_norm_0_0)),
	"libs.globals",
	"termination_norm",
	{ (void *)mercury_data_libs__globals__enum_name_ordered_termination_norm_0 },
	{ (void *)mercury_data_libs__globals__enum_value_ordered_termination_norm_0 },
	4,
	4,
	mercury_data_libs__globals__functor_number_map_termination_norm_0
};


static const MR_UserClosureId
mercury_data__closure_layout__libs__globals__get_backend_foreign_languages_2_0_1 = {
{
MR_FUNCTION,
"libs.globals",
"libs.globals",
"lambda_globals_m_516",
2,
0
},
"libs.globals",
"globals.m",
513,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__globals__convert_c_compiler_type_2_0_1 = {
{
MR_PREDICATE,
"libs.globals",
"libs.globals",
"lambda_globals_m_373",
1,
0
},
"libs.globals",
"globals.m",
373,
"d1;c4;"
};



MR_BEGIN_MODULE(libs__globals_module0)
	MR_init_entry1(fn__libs__globals__compilation_target_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__globals__compilation_target_string_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compilation_target_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__globals__compilation_target_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, (MR_Integer) MR_r1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module1)
	MR_init_entry1(fn__libs__globals__foreign_language_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__globals__foreign_language_string_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_language_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__globals__foreign_language_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, (MR_Integer) MR_r1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module2)
	MR_init_entry1(fn__libs__globals__simple_foreign_language_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__globals__simple_foreign_language_string_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'simple_foreign_language_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__globals__simple_foreign_language_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_2, (MR_Integer) MR_r1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module3)
	MR_init_entry1(fn__libs__globals__gc_is_conservative_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__globals__gc_is_conservative_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gc_is_conservative'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__globals__gc_is_conservative_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_0, (MR_Integer) MR_r1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__to_lower_1_0);

MR_BEGIN_MODULE(libs__globals_module4)
	MR_init_entry1(libs__globals__convert_target_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__convert_target_2_0);
	MR_init_label7(libs__globals__convert_target_2_0,2,4,5,6,7,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_target'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__convert_target_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__to_lower_1_0,
		libs__globals__convert_target_2_0_i2);
MR_def_label(libs__globals__convert_target_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("c", 1)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_target_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_target_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("il", 2)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_target_2_0_i5);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_target_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("asm", 3)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_target_2_0_i6);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_target_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java", 4)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_target_2_0_i7);
	}
	MR_r2 = (MR_Integer) 2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_target_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang", 6)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_target_2_0_i8);
	}
	MR_r2 = (MR_Integer) 5;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_target_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("x86_64", 6)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_target_2_0_i1);
	}
	MR_r2 = (MR_Integer) 4;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_target_2_0,1)
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


MR_BEGIN_MODULE(libs__globals_module5)
	MR_init_entry1(libs__globals__convert_foreign_language_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__convert_foreign_language_2_0);
	MR_init_label8(libs__globals__convert_foreign_language_2_0,2,4,5,6,7,8,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_foreign_language'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__convert_foreign_language_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__to_lower_1_0,
		libs__globals__convert_foreign_language_2_0_i2);
MR_def_label(libs__globals__convert_foreign_language_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("c", 1)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_foreign_language_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("c#", 2)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i5);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_foreign_language_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("il", 2)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i6);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_foreign_language_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("java", 4)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i7);
	}
	MR_r2 = (MR_Integer) 2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_foreign_language_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("csharp", 6)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i8);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_foreign_language_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("erlang", 6)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i9);
	}
	MR_r2 = (MR_Integer) 4;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_foreign_language_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("c sharp", 7)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_foreign_language_2_0,1)
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


MR_BEGIN_MODULE(libs__globals_module6)
	MR_init_entry1(libs__globals__convert_gc_method_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__convert_gc_method_2_0);
	MR_init_label10(libs__globals__convert_gc_method_2_0,3,15,5,6,7,8,10,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_gc_method'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__convert_gc_method_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 15);
MR_def_label(libs__globals__convert_gc_method_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r3 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_2_0)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(libs__globals__convert_gc_method_2_0_i5);
	}
	MR_r3 = ((MR_Word *) &mercury_vector_common_2_0)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(libs__globals__convert_gc_method_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i15) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i11) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i13) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i11) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i12) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i15) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i15) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i15) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i10) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i15) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i15) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i15) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i15) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i7) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i6) MR_AND
		MR_LABEL_AP(libs__globals__convert_gc_method_2_0_i8));
MR_def_label(libs__globals__convert_gc_method_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module7)
	MR_init_entry1(libs__globals__convert_tags_method_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__convert_tags_method_2_0);
	MR_init_label3(libs__globals__convert_tags_method_2_0,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_tags_method'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__convert_tags_method_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("low", 3)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_tags_method_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_tags_method_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("high", 4)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_tags_method_2_0_i4);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_tags_method_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("none", 4)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_tags_method_2_0_i1);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_tags_method_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module8)
	MR_init_entry1(libs__globals__convert_termination_norm_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__convert_termination_norm_2_0);
	MR_init_label4(libs__globals__convert_termination_norm_2_0,3,4,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_termination_norm'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__convert_termination_norm_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("total", 5)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_termination_norm_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_termination_norm_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("simple", 6)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_termination_norm_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_termination_norm_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("num-data-elems", 14)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_termination_norm_2_0_i5);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_termination_norm_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("size-data-elems", 15)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_termination_norm_2_0_i1);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_termination_norm_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module9)
	MR_init_entry1(libs__globals__convert_maybe_thread_safe_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__convert_maybe_thread_safe_2_0);
	MR_init_label2(libs__globals__convert_maybe_thread_safe_2_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_maybe_thread_safe'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__convert_maybe_thread_safe_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("no", 2)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_maybe_thread_safe_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_maybe_thread_safe_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("yes", 3)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_maybe_thread_safe_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_maybe_thread_safe_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__words_separator_2_0);
MR_decl_entry(string__to_int_2_0);
MR_decl_entry(builtin__false_0_0);

MR_BEGIN_MODULE(libs__globals_module10)
	MR_init_entry1(libs__globals__convert_c_compiler_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__convert_c_compiler_type_2_0);
	MR_init_label10(libs__globals__convert_c_compiler_type_2_0,4,5,7,155,10,18,24,26,31,33)
	MR_init_label6(libs__globals__convert_c_compiler_type_2_0,39,38,30,23,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_c_compiler_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__convert_c_compiler_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("cl", 2)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i4);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_c_compiler_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("gcc", 3)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i5);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_c_compiler_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("lcc", 3)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i7);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_c_compiler_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("unknown", 7)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i155);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_c_compiler_type_2_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		libs__globals__convert_c_compiler_type_2_0_i10);
MR_def_label(libs__globals__convert_c_compiler_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("gcc", 3)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i11);
	}
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i11);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i11);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i11);
	}
	MR_tempr4 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i11);
	}
	MR_sv(2) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr2, 0);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r4, MR_string_const("u", 1)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i18);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("u", 1)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i18);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("u", 1)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i18);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(libs__globals__convert_c_compiler_type_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(string__to_int_2_0,
		libs__globals__convert_c_compiler_type_2_0_i24);
MR_def_label(libs__globals__convert_c_compiler_type_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i23);
	}
	if (MR_INT_LT(MR_r2,2)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i23);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("u", 1)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i26);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(libs__globals__convert_c_compiler_type_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		libs__globals__convert_c_compiler_type_2_0_i31);
MR_def_label(libs__globals__convert_c_compiler_type_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i30);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i30);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("u", 1)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tfield(1, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(libs__globals__convert_c_compiler_type_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__to_int_2_0,
		libs__globals__convert_c_compiler_type_2_0_i39);
MR_def_label(libs__globals__convert_c_compiler_type_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i38);
	}
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(libs__globals__convert_c_compiler_type_2_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tfield(1, MR_r2, 2) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
	}
MR_def_label(libs__globals__convert_c_compiler_type_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(builtin__false_0_0,
		libs__globals__convert_c_compiler_type_2_0_i1);
MR_def_label(libs__globals__convert_c_compiler_type_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(builtin__false_0_0,
		libs__globals__convert_c_compiler_type_2_0_i1);
MR_def_label(libs__globals__convert_c_compiler_type_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(builtin__false_0_0,
		libs__globals__convert_c_compiler_type_2_0_i1);
MR_def_label(libs__globals__convert_c_compiler_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(builtin__false_0_0,
		libs__globals__convert_c_compiler_type_2_0_i1);
MR_def_label(libs__globals__convert_c_compiler_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module11)
	MR_init_entry1(libs__globals__convert_reuse_strategy_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__convert_reuse_strategy_3_0);
	MR_init_label2(libs__globals__convert_reuse_strategy_3_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_reuse_strategy'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__convert_reuse_strategy_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("same_cons_id", 12)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_reuse_strategy_3_0_i3);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_reuse_strategy_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("within_n_cells_difference", 25)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_reuse_strategy_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(libs__globals__convert_reuse_strategy_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module12)
	MR_init_entry1(libs__globals__globals_init_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__globals_init_14_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'globals_init'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__globals_init_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r5;
	MR_tfield(0, MR_tempr1, 5) = MR_r6;
	MR_tfield(0, MR_tempr1, 6) = MR_r7;
	MR_tfield(0, MR_tempr1, 7) = MR_r8;
	MR_tfield(0, MR_tempr1, 8) = MR_r9;
	MR_tfield(0, MR_tempr1, 9) = MR_r10;
	MR_tfield(0, MR_tempr1, 10) = MR_r11;
	MR_tfield(0, MR_tempr1, 11) = MR_r12;
	MR_tfield(0, MR_tempr1, 12) = MR_r13;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module13)
	MR_init_entry1(libs__globals__get_options_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_options_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_options'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_options_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module14)
	MR_init_entry1(libs__globals__get_target_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_target_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_target'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_target_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(libs__globals_module15)
	MR_init_entry1(libs__globals__lookup_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__lookup_option_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__lookup_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(libs__globals_module16)
	MR_init_entry1(libs__globals__lookup_accumulating_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__lookup_accumulating_option_3_0);
	MR_init_label2(libs__globals__lookup_accumulating_option_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_accumulating_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__lookup_accumulating_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__globals__lookup_accumulating_option_3_0_i2);
MR_def_label(libs__globals__lookup_accumulating_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(libs__globals__lookup_accumulating_option_3_0_i3);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(libs__globals__lookup_accumulating_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.m", 9);
	MR_r2 = (MR_Word) MR_string_const("lookup_accumulating_option: invalid accumulating option", 55);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(libs__globals_module17)
	MR_init_entry1(libs__globals__get_backend_foreign_languages_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_backend_foreign_languages_2_0);
	MR_init_label1(libs__globals__get_backend_foreign_languages_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_backend_foreign_languages'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_backend_foreign_languages_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 237;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__globals__get_backend_foreign_languages_2_0_i2);
MR_def_label(libs__globals__get_backend_foreign_languages_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__list__map_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module18)
	MR_init_entry1(libs__globals__get_gc_method_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_gc_method_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_gc_method'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_gc_method_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module19)
	MR_init_entry1(libs__globals__get_tags_method_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_tags_method_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_tags_method'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_tags_method_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module20)
	MR_init_entry1(libs__globals__get_termination_norm_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_termination_norm_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_termination_norm'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_termination_norm_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module21)
	MR_init_entry1(libs__globals__get_termination2_norm_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_termination2_norm_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_termination2_norm'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_termination2_norm_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module22)
	MR_init_entry1(libs__globals__get_trace_level_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_trace_level_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_trace_level'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_trace_level_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module23)
	MR_init_entry1(libs__globals__get_trace_suppress_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_trace_suppress_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_trace_suppress'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_trace_suppress_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module24)
	MR_init_entry1(libs__globals__get_maybe_thread_safe_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_maybe_thread_safe_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_maybe_thread_safe'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_maybe_thread_safe_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module25)
	MR_init_entry1(libs__globals__get_c_compiler_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_c_compiler_type_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_c_compiler_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_c_compiler_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module26)
	MR_init_entry1(libs__globals__get_reuse_strategy_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_reuse_strategy_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_reuse_strategy'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_reuse_strategy_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module27)
	MR_init_entry1(libs__globals__get_maybe_il_version_number_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_maybe_il_version_number_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_maybe_il_version_number'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_maybe_il_version_number_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 11);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module28)
	MR_init_entry1(libs__globals__get_maybe_feedback_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_maybe_feedback_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_maybe_feedback_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_maybe_feedback_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module29)
	MR_init_entry1(libs__globals__set_options_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__set_options_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_options'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__set_options_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_r2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_r2, 12);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(libs__globals_module30)
	MR_init_entry1(libs__globals__set_option_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__set_option_4_0);
	MR_init_label1(libs__globals__set_option_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_option'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__set_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__set_4_0,
		libs__globals__set_option_4_0_i2);
MR_def_label(libs__globals__set_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 13);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_tfield(0, MR_tempr1, 6);
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module31)
	MR_init_entry1(libs__globals__set_gc_method_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__set_gc_method_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_gc_method'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__set_gc_method_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_r2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_r2, 12);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module32)
	MR_init_entry1(libs__globals__set_tags_method_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__set_tags_method_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_tags_method'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__set_tags_method_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_r2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_r2, 12);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module33)
	MR_init_entry1(libs__globals__set_trace_level_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__set_trace_level_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_trace_level'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__set_trace_level_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_r2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_tfield(0, MR_r2, 12);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__trace_params__trace_level_none_0_0);

MR_BEGIN_MODULE(libs__globals_module34)
	MR_init_entry1(libs__globals__set_trace_level_none_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__set_trace_level_none_2_0);
	MR_init_label1(libs__globals__set_trace_level_none_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_trace_level_none'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__set_trace_level_none_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_none_0_0,
		libs__globals__set_trace_level_none_2_0_i2);
MR_def_label(libs__globals__set_trace_level_none_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 13);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 2) = MR_tfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r2, 3) = MR_tfield(0, MR_tempr1, 3);
	MR_tfield(0, MR_r2, 4) = MR_tfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r2, 5) = MR_tfield(0, MR_tempr1, 5);
	MR_tfield(0, MR_r2, 6) = MR_r1;
	MR_tfield(0, MR_r2, 7) = MR_tfield(0, MR_tempr1, 7);
	MR_tfield(0, MR_r2, 8) = MR_tfield(0, MR_tempr1, 8);
	MR_tfield(0, MR_r2, 9) = MR_tfield(0, MR_tempr1, 9);
	MR_tfield(0, MR_r2, 10) = MR_tfield(0, MR_tempr1, 10);
	MR_tfield(0, MR_r2, 11) = MR_tfield(0, MR_tempr1, 11);
	MR_tfield(0, MR_r2, 12) = MR_tfield(0, MR_tempr1, 12);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module35)
	MR_init_entry1(libs__globals__set_maybe_feedback_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__set_maybe_feedback_info_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_maybe_feedback_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__set_maybe_feedback_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_tfield(0, MR_r2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_tfield(0, MR_r2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_tfield(0, MR_r2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_tfield(0, MR_r2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_tfield(0, MR_r2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_tfield(0, MR_r2, 10);
	MR_tfield(0, MR_tempr1, 11) = MR_tfield(0, MR_r2, 11);
	MR_tfield(0, MR_tempr1, 12) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module36)
	MR_init_entry1(libs__globals__lookup_bool_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__lookup_bool_option_3_0);
	MR_init_label2(libs__globals__lookup_bool_option_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_bool_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__lookup_bool_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__globals__lookup_bool_option_3_0_i2);
MR_def_label(libs__globals__lookup_bool_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__globals__lookup_bool_option_3_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(libs__globals__lookup_bool_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.m", 9);
	MR_r2 = (MR_Word) MR_string_const("lookup_bool_option: invalid bool option", 39);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module37)
	MR_init_entry1(libs__globals__lookup_bool_option_3_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__lookup_bool_option_3_1);
	MR_init_label3(libs__globals__lookup_bool_option_3_1,2,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_bool_option'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__lookup_bool_option_3_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__globals__lookup_bool_option_3_1_i2);
MR_def_label(libs__globals__lookup_bool_option_3_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__globals__lookup_bool_option_3_1_i3);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_sv(1) == MR_r2);
	MR_decr_sp_and_return(2);
MR_def_label(libs__globals__lookup_bool_option_3_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__lookup_bool_option_3_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.m", 9);
	MR_r2 = (MR_Word) MR_string_const("lookup_bool_option: invalid bool option", 39);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		libs__globals__lookup_bool_option_3_1_i8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module38)
	MR_init_entry1(libs__globals__lookup_int_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__lookup_int_option_3_0);
	MR_init_label2(libs__globals__lookup_int_option_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_int_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__lookup_int_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__globals__lookup_int_option_3_0_i2);
MR_def_label(libs__globals__lookup_int_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(libs__globals__lookup_int_option_3_0_i3);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(libs__globals__lookup_int_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.m", 9);
	MR_r2 = (MR_Word) MR_string_const("lookup_int_option: invalid int option", 37);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module39)
	MR_init_entry1(libs__globals__lookup_string_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__lookup_string_option_3_0);
	MR_init_label2(libs__globals__lookup_string_option_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_string_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__lookup_string_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__globals__lookup_string_option_3_0_i2);
MR_def_label(libs__globals__lookup_string_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__globals__lookup_string_option_3_0_i3);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(libs__globals__lookup_string_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.m", 9);
	MR_r2 = (MR_Word) MR_string_const("lookup_string_option: invalid string option", 43);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module40)
	MR_init_entry1(libs__globals__lookup_maybe_string_option_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__lookup_maybe_string_option_3_0);
	MR_init_label2(libs__globals__lookup_maybe_string_option_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_maybe_string_option'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__lookup_maybe_string_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__globals__lookup_maybe_string_option_3_0_i2);
MR_def_label(libs__globals__lookup_maybe_string_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(libs__globals__lookup_maybe_string_option_3_0_i3);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(libs__globals__lookup_maybe_string_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.m", 9);
	MR_r2 = (MR_Word) MR_string_const("lookup_string_option: invalid maybe_string option", 49);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__trace_params__trace_needs_return_info_2_0);

MR_BEGIN_MODULE(libs__globals_module41)
	MR_init_entry1(libs__globals__want_return_var_layouts_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__want_return_var_layouts_2_0);
	MR_init_label3(libs__globals__want_return_var_layouts_2_0,6,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'want_return_var_layouts'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__want_return_var_layouts_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_EQ(MR_r2,6)) {
		MR_GOTO_LAB(libs__globals__want_return_var_layouts_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 6);
	MR_r2 = MR_tfield(0, MR_tempr1, 7);
	}
	MR_np_call_localret_ent(fn__libs__trace_params__trace_needs_return_info_2_0,
		libs__globals__want_return_var_layouts_2_0_i6);
MR_def_label(libs__globals__want_return_var_layouts_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__globals__want_return_var_layouts_2_0_i2);
	}
MR_def_label(libs__globals__want_return_var_layouts_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(libs__globals__want_return_var_layouts_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module42)
	MR_init_entry1(libs__globals__current_grade_supports_tabling_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__current_grade_supports_tabling_2_0);
	MR_init_label2(libs__globals__current_grade_supports_tabling_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'current_grade_supports_tabling'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__current_grade_supports_tabling_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_r2 = (MR_Integer) 227;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__globals__current_grade_supports_tabling_2_0_i2);
MR_def_label(libs__globals__current_grade_supports_tabling_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(libs__globals__current_grade_supports_tabling_2_0_i3);
	}
	if (MR_INT_EQ(MR_sv(2),6)) {
		MR_GOTO_LAB(libs__globals__current_grade_supports_tabling_2_0_i3);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__globals__current_grade_supports_tabling_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(libs__globals__current_grade_supports_tabling_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module43)
	MR_init_entry1(libs__globals__current_grade_supports_par_conj_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__current_grade_supports_par_conj_2_0);
	MR_init_label4(libs__globals__current_grade_supports_par_conj_2_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'current_grade_supports_par_conj'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__current_grade_supports_par_conj_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_r2 = (MR_Integer) 226;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__globals__current_grade_supports_par_conj_2_0_i2);
MR_def_label(libs__globals__current_grade_supports_par_conj_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 194;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__globals__current_grade_supports_par_conj_2_0_i3);
MR_def_label(libs__globals__current_grade_supports_par_conj_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 196;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__globals__current_grade_supports_par_conj_2_0_i4);
MR_def_label(libs__globals__current_grade_supports_par_conj_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(libs__globals__current_grade_supports_par_conj_2_0_i5);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(libs__globals__current_grade_supports_par_conj_2_0_i5);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__globals__current_grade_supports_par_conj_2_0_i5);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__globals__current_grade_supports_par_conj_2_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(libs__globals__current_grade_supports_par_conj_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module44)
	MR_init_entry1(libs__globals__current_grade_supports_concurrency_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__current_grade_supports_concurrency_2_0);
	MR_init_label6(libs__globals__current_grade_supports_concurrency_2_0,3,16,5,17,10,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'current_grade_supports_concurrency'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__current_grade_supports_concurrency_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(libs__globals__current_grade_supports_concurrency_2_0_i16) MR_AND
		MR_LABEL_AP(libs__globals__current_grade_supports_concurrency_2_0_i17) MR_AND
		MR_LABEL_AP(libs__globals__current_grade_supports_concurrency_2_0_i3) MR_AND
		MR_LABEL_AP(libs__globals__current_grade_supports_concurrency_2_0_i3) MR_AND
		MR_LABEL_AP(libs__globals__current_grade_supports_concurrency_2_0_i3) MR_AND
		MR_LABEL_AP(libs__globals__current_grade_supports_concurrency_2_0_i17));
MR_def_label(libs__globals__current_grade_supports_concurrency_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(libs__globals__current_grade_supports_concurrency_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 226;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__globals__current_grade_supports_concurrency_2_0_i5);
MR_def_label(libs__globals__current_grade_supports_concurrency_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__globals__current_grade_supports_concurrency_2_0_i7);
	}
	MR_GOTO_LAB(libs__globals__current_grade_supports_concurrency_2_0_i10);
MR_def_label(libs__globals__current_grade_supports_concurrency_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(libs__globals__current_grade_supports_concurrency_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(libs__globals__current_grade_supports_concurrency_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 194;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__bool__or_2_0);

MR_BEGIN_MODULE(libs__globals_module45)
	MR_init_entry1(libs__globals__get_any_intermod_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__get_any_intermod_2_0);
	MR_init_label2(libs__globals__get_any_intermod_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_any_intermod'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_any_intermod_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 301;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__globals__get_any_intermod_2_0_i2);
MR_def_label(libs__globals__get_any_intermod_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 306;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__globals__get_any_intermod_2_0_i3);
MR_def_label(libs__globals__get_any_intermod_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__bool__or_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module46)
	MR_init_entry1(libs__globals__lock_solver_auto_init_supported_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__lock_solver_auto_init_supported_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_solver_auto_init_supported'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__lock_solver_auto_init_supported_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__lock_solver_auto_init_supported_0_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module47)
	MR_init_entry1(libs__globals__unlock_solver_auto_init_supported_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unlock_solver_auto_init_supported_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_solver_auto_init_supported'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unlock_solver_auto_init_supported_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__unlock_solver_auto_init_supported_0_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module48)
	MR_init_entry1(libs__globals__unsafe_set_solver_auto_init_supported_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unsafe_set_solver_auto_init_supported_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_solver_auto_init_supported'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_set_solver_auto_init_supported_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_set_solver_auto_init_supported_1_0
	X = MR_r1;
{
#line 694 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);
;}
#line 3473 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module49)
	MR_init_entry1(libs__globals__lock_maybe_from_ground_term_threshold_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__lock_maybe_from_ground_term_threshold_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_maybe_from_ground_term_threshold'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__lock_maybe_from_ground_term_threshold_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__lock_maybe_from_ground_term_threshold_0_0
{
#line 699 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif
;}
#line 3506 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module50)
	MR_init_entry1(libs__globals__unlock_maybe_from_ground_term_threshold_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unlock_maybe_from_ground_term_threshold_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_maybe_from_ground_term_threshold'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unlock_maybe_from_ground_term_threshold_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__unlock_maybe_from_ground_term_threshold_0_0
{
#line 699 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif
;}
#line 3539 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module51)
	MR_init_entry1(libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_maybe_from_ground_term_threshold'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_set_maybe_from_ground_term_threshold_1_0
	X = MR_r1;
{
#line 699 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;
;}
#line 3571 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module52)
	MR_init_entry1(libs__globals__globals_init_mutables_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__globals_init_mutables_3_0);
	MR_init_label2(libs__globals__globals_init_mutables_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'globals_init_mutables'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__globals_init_mutables_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 270;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		libs__globals__globals_init_mutables_3_0_i2);
MR_def_label(libs__globals__globals_init_mutables_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__globals_init_mutables_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__globals_init_mutables_3_0
	X = MR_r1;
{
#line 694 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);
;}
#line 3616 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__globals_init_mutables_3_0
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 319;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		libs__globals__globals_init_mutables_3_0_i3);
MR_def_label(libs__globals__globals_init_mutables_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
#define	MR_PROC_LABEL	mercury__libs__globals__globals_init_mutables_3_0
{
#line 699 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif
;}
#line 3640 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__globals_init_mutables_3_0
	X = MR_r2;
{
#line 699 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;
;}
#line 3651 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__globals_init_mutables_3_0
{
#line 699 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif
;}
#line 3663 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module53)
	MR_init_entry1(libs__globals__unsafe_get_solver_auto_init_supported_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unsafe_get_solver_auto_init_supported_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_solver_auto_init_supported'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_get_solver_auto_init_supported_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_get_solver_auto_init_supported_1_0
{
#line 694 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);
;}
#line 3694 "libs.globals.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module54)
	MR_init_entry1(libs__globals__semipure_get_solver_auto_init_supported_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__semipure_get_solver_auto_init_supported_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'semipure_get_solver_auto_init_supported'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__semipure_get_solver_auto_init_supported_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__semipure_get_solver_auto_init_supported_1_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__semipure_get_solver_auto_init_supported_1_0
{
#line 694 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);
;}
#line 3730 "libs.globals.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__semipure_get_solver_auto_init_supported_1_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module55)
	MR_init_entry1(libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_maybe_from_ground_term_threshold'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_get_maybe_from_ground_term_threshold_1_0
{
#line 699 "globals.m"
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;
;}
#line 3766 "libs.globals.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module56)
	MR_init_entry1(fn__libs__globals__get_maybe_from_ground_term_threshold_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__globals__get_maybe_from_ground_term_threshold_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_maybe_from_ground_term_threshold'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__globals__get_maybe_from_ground_term_threshold_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__libs__globals__get_maybe_from_ground_term_threshold_0_0
{
#line 699 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif
;}
#line 3800 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__libs__globals__get_maybe_from_ground_term_threshold_0_0
{
#line 699 "globals.m"
X = libs__globals__mutable_variable_maybe_from_ground_term_threshold;
;}
#line 3810 "libs.globals.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__fn__libs__globals__get_maybe_from_ground_term_threshold_0_0
{
#line 699 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif
;}
#line 3823 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module57)
	MR_init_entry1(libs__globals__lock_extra_error_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__lock_extra_error_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_extra_error_info'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__lock_extra_error_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__lock_extra_error_info_0_0
{
#line 705 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif
;}
#line 3856 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module58)
	MR_init_entry1(libs__globals__unlock_extra_error_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unlock_extra_error_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_extra_error_info'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unlock_extra_error_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__unlock_extra_error_info_0_0
{
#line 705 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif
;}
#line 3889 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module59)
	MR_init_entry1(libs__globals__unsafe_get_extra_error_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unsafe_get_extra_error_info_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_extra_error_info'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_get_extra_error_info_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_get_extra_error_info_1_0
{
#line 705 "globals.m"
X = libs__globals__mutable_variable_extra_error_info;
;}
#line 3920 "libs.globals.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module60)
	MR_init_entry1(libs__globals__io_get_extra_error_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__io_get_extra_error_info_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'io_get_extra_error_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_extra_error_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_extra_error_info_3_0
{
#line 705 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif
;}
#line 3954 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_extra_error_info_3_0
{
#line 705 "globals.m"
X = libs__globals__mutable_variable_extra_error_info;
;}
#line 3966 "libs.globals.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_extra_error_info_3_0
{
#line 705 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif
;}
#line 3979 "libs.globals.c"
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


MR_BEGIN_MODULE(libs__globals_module61)
	MR_init_entry1(libs__globals__unsafe_set_extra_error_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unsafe_set_extra_error_info_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_extra_error_info'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_set_extra_error_info_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_set_extra_error_info_1_0
	X = MR_r1;
{
#line 705 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;
;}
#line 4013 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module62)
	MR_init_entry1(libs__globals__io_set_extra_error_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__io_set_extra_error_info_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'io_set_extra_error_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_set_extra_error_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_extra_error_info_3_0
{
#line 705 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif
;}
#line 4046 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_extra_error_info_3_0
	X = MR_r1;
{
#line 705 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;
;}
#line 4057 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_extra_error_info_3_0
{
#line 705 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif
;}
#line 4069 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module63)
	MR_init_entry1(libs__globals__lock_disable_smart_recompilation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__lock_disable_smart_recompilation_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_disable_smart_recompilation'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__lock_disable_smart_recompilation_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__lock_disable_smart_recompilation_0_0
{
#line 708 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif
;}
#line 4102 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module64)
	MR_init_entry1(libs__globals__unlock_disable_smart_recompilation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unlock_disable_smart_recompilation_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_disable_smart_recompilation'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unlock_disable_smart_recompilation_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__unlock_disable_smart_recompilation_0_0
{
#line 708 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif
;}
#line 4135 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module65)
	MR_init_entry1(libs__globals__unsafe_get_disable_smart_recompilation_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unsafe_get_disable_smart_recompilation_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_disable_smart_recompilation'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_get_disable_smart_recompilation_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_get_disable_smart_recompilation_1_0
{
#line 708 "globals.m"
X = libs__globals__mutable_variable_disable_smart_recompilation;
;}
#line 4166 "libs.globals.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module66)
	MR_init_entry1(libs__globals__io_get_disable_smart_recompilation_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__io_get_disable_smart_recompilation_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'io_get_disable_smart_recompilation'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_disable_smart_recompilation_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_disable_smart_recompilation_3_0
{
#line 708 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif
;}
#line 4200 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_disable_smart_recompilation_3_0
{
#line 708 "globals.m"
X = libs__globals__mutable_variable_disable_smart_recompilation;
;}
#line 4212 "libs.globals.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_disable_smart_recompilation_3_0
{
#line 708 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif
;}
#line 4225 "libs.globals.c"
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


MR_BEGIN_MODULE(libs__globals_module67)
	MR_init_entry1(libs__globals__unsafe_set_disable_smart_recompilation_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unsafe_set_disable_smart_recompilation_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_disable_smart_recompilation'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_set_disable_smart_recompilation_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_set_disable_smart_recompilation_1_0
	X = MR_r1;
{
#line 708 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;
;}
#line 4259 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module68)
	MR_init_entry1(libs__globals__io_set_disable_smart_recompilation_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__io_set_disable_smart_recompilation_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'io_set_disable_smart_recompilation'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_set_disable_smart_recompilation_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_disable_smart_recompilation_3_0
{
#line 708 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif
;}
#line 4292 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_disable_smart_recompilation_3_0
	X = MR_r1;
{
#line 708 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;
;}
#line 4303 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_disable_smart_recompilation_3_0
{
#line 708 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif
;}
#line 4315 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module69)
	MR_init_entry1(libs__globals__lock_disable_generate_item_version_numbers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__lock_disable_generate_item_version_numbers_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_disable_generate_item_version_numbers'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__lock_disable_generate_item_version_numbers_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__lock_disable_generate_item_version_numbers_0_0
{
#line 711 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif
;}
#line 4348 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module70)
	MR_init_entry1(libs__globals__unlock_disable_generate_item_version_numbers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unlock_disable_generate_item_version_numbers_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_disable_generate_item_version_numbers'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unlock_disable_generate_item_version_numbers_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__unlock_disable_generate_item_version_numbers_0_0
{
#line 711 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif
;}
#line 4381 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module71)
	MR_init_entry1(libs__globals__unsafe_get_disable_generate_item_version_numbers_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unsafe_get_disable_generate_item_version_numbers_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_disable_generate_item_version_numbers'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_get_disable_generate_item_version_numbers_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_get_disable_generate_item_version_numbers_1_0
{
#line 711 "globals.m"
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;
;}
#line 4412 "libs.globals.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module72)
	MR_init_entry1(libs__globals__io_get_disable_generate_item_version_numbers_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__io_get_disable_generate_item_version_numbers_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'io_get_disable_generate_item_version_numbers'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_disable_generate_item_version_numbers_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_disable_generate_item_version_numbers_3_0
{
#line 711 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif
;}
#line 4446 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_disable_generate_item_version_numbers_3_0
{
#line 711 "globals.m"
X = libs__globals__mutable_variable_disable_generate_item_version_numbers;
;}
#line 4458 "libs.globals.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_disable_generate_item_version_numbers_3_0
{
#line 711 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif
;}
#line 4471 "libs.globals.c"
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


MR_BEGIN_MODULE(libs__globals_module73)
	MR_init_entry1(libs__globals__unsafe_set_disable_generate_item_version_numbers_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unsafe_set_disable_generate_item_version_numbers_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_disable_generate_item_version_numbers'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_set_disable_generate_item_version_numbers_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_set_disable_generate_item_version_numbers_1_0
	X = MR_r1;
{
#line 711 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;
;}
#line 4505 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module74)
	MR_init_entry1(libs__globals__io_set_disable_generate_item_version_numbers_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__io_set_disable_generate_item_version_numbers_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'io_set_disable_generate_item_version_numbers'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_set_disable_generate_item_version_numbers_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_disable_generate_item_version_numbers_3_0
{
#line 711 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif
;}
#line 4538 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_disable_generate_item_version_numbers_3_0
	X = MR_r1;
{
#line 711 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;
;}
#line 4549 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_disable_generate_item_version_numbers_3_0
{
#line 711 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif
;}
#line 4561 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module75)
	MR_init_entry1(libs__globals__lock_maybe_source_file_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__lock_maybe_source_file_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_maybe_source_file_map'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__lock_maybe_source_file_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__lock_maybe_source_file_map_0_0
{
#line 714 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif
;}
#line 4594 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module76)
	MR_init_entry1(libs__globals__unlock_maybe_source_file_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unlock_maybe_source_file_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_maybe_source_file_map'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unlock_maybe_source_file_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__unlock_maybe_source_file_map_0_0
{
#line 714 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif
;}
#line 4627 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module77)
	MR_init_entry1(libs__globals__unsafe_get_maybe_source_file_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unsafe_get_maybe_source_file_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_maybe_source_file_map'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_get_maybe_source_file_map_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_get_maybe_source_file_map_1_0
{
#line 714 "globals.m"
X = libs__globals__mutable_variable_maybe_source_file_map;
;}
#line 4658 "libs.globals.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module78)
	MR_init_entry1(libs__globals__io_get_maybe_source_file_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__io_get_maybe_source_file_map_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'io_get_maybe_source_file_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_maybe_source_file_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_maybe_source_file_map_3_0
{
#line 714 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif
;}
#line 4692 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_maybe_source_file_map_3_0
{
#line 714 "globals.m"
X = libs__globals__mutable_variable_maybe_source_file_map;
;}
#line 4704 "libs.globals.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_maybe_source_file_map_3_0
{
#line 714 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif
;}
#line 4717 "libs.globals.c"
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


MR_BEGIN_MODULE(libs__globals_module79)
	MR_init_entry1(libs__globals__unsafe_set_maybe_source_file_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__unsafe_set_maybe_source_file_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_maybe_source_file_map'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_set_maybe_source_file_map_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_set_maybe_source_file_map_1_0
	X = MR_r1;
{
#line 714 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;
;}
#line 4751 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module80)
	MR_init_entry1(libs__globals__io_set_maybe_source_file_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__io_set_maybe_source_file_map_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'io_set_maybe_source_file_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_set_maybe_source_file_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_maybe_source_file_map_3_0
{
#line 714 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif
;}
#line 4784 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_maybe_source_file_map_3_0
	X = MR_r1;
{
#line 714 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;
;}
#line 4795 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_maybe_source_file_map_3_0
{
#line 714 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif
;}
#line 4807 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module81)
	MR_init_entry1(libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_solver_auto_init_supported'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__pre_initialise_mutable_solver_auto_init_supported_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_solver_auto_init_supported");
{
#line 694 "globals.m"
libs__globals__mutable_variable_solver_auto_init_supported = MR_new_thread_local_mutable_index();
;}
#line 4838 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_solver_auto_init_supported");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module82)
	MR_init_entry1(libs__globals__initialise_mutable_solver_auto_init_supported_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__initialise_mutable_solver_auto_init_supported_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_solver_auto_init_supported'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__initialise_mutable_solver_auto_init_supported_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_solver_auto_init_supported_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_solver_auto_init_supported");
{
#line 694 "globals.m"
libs__globals__mutable_variable_solver_auto_init_supported = MR_new_thread_local_mutable_index();
;}
#line 4870 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_solver_auto_init_supported");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_solver_auto_init_supported_0_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_solver_auto_init_supported_0_0
	X = (MR_Integer) 0;
{
#line 694 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_solver_auto_init_supported);
;}
#line 4886 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_solver_auto_init_supported_0_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module83)
	MR_init_entry1(libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_maybe_from_ground_term_threshold'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__pre_initialise_mutable_maybe_from_ground_term_threshold_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_maybe_from_ground_term_threshold");
{
#line 699 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif
;}
#line 4923 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_maybe_from_ground_term_threshold");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module84)
	MR_init_entry1(libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_maybe_from_ground_term_threshold'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_maybe_from_ground_term_threshold");
{
#line 699 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock, MR_MUTEX_ATTR);
#endif
;}
#line 4957 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_maybe_from_ground_term_threshold");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_0
{
#line 699 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif
;}
#line 4970 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_0
	X = (MR_Word) MR_tbmkword(0, 0);
{
#line 699 "globals.m"
libs__globals__mutable_variable_maybe_from_ground_term_threshold = X;
;}
#line 4981 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_0
{
#line 699 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock,
                "libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock");
#endif
;}
#line 4993 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module85)
	MR_init_entry1(libs__globals__pre_initialise_mutable_extra_error_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__pre_initialise_mutable_extra_error_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_extra_error_info'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__pre_initialise_mutable_extra_error_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__pre_initialise_mutable_extra_error_info_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_extra_error_info");
{
#line 705 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif
;}
#line 5026 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_extra_error_info");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module86)
	MR_init_entry1(libs__globals__initialise_mutable_extra_error_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__initialise_mutable_extra_error_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_extra_error_info'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__initialise_mutable_extra_error_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_extra_error_info_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_extra_error_info");
{
#line 705 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_extra_error_info_lock, MR_MUTEX_ATTR);
#endif
;}
#line 5060 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_extra_error_info");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_extra_error_info_0_0
{
#line 705 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif
;}
#line 5073 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_extra_error_info_0_0
	X = (MR_Integer) 0;
{
#line 705 "globals.m"
libs__globals__mutable_variable_extra_error_info = X;
;}
#line 5084 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_extra_error_info_0_0
{
#line 705 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_extra_error_info_lock,
                "libs__globals__mutable_variable_extra_error_info_lock");
#endif
;}
#line 5096 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module87)
	MR_init_entry1(libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_disable_smart_recompilation'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__pre_initialise_mutable_disable_smart_recompilation_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_disable_smart_recompilation");
{
#line 708 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif
;}
#line 5129 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_disable_smart_recompilation");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module88)
	MR_init_entry1(libs__globals__initialise_mutable_disable_smart_recompilation_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__initialise_mutable_disable_smart_recompilation_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_disable_smart_recompilation'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__initialise_mutable_disable_smart_recompilation_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_disable_smart_recompilation_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_disable_smart_recompilation");
{
#line 708 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_smart_recompilation_lock, MR_MUTEX_ATTR);
#endif
;}
#line 5163 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_disable_smart_recompilation");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_disable_smart_recompilation_0_0
{
#line 708 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif
;}
#line 5176 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_disable_smart_recompilation_0_0
	X = (MR_Integer) 0;
{
#line 708 "globals.m"
libs__globals__mutable_variable_disable_smart_recompilation = X;
;}
#line 5187 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_disable_smart_recompilation_0_0
{
#line 708 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_smart_recompilation_lock,
                "libs__globals__mutable_variable_disable_smart_recompilation_lock");
#endif
;}
#line 5199 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module89)
	MR_init_entry1(libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_disable_generate_item_version_numbers'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__pre_initialise_mutable_disable_generate_item_version_numbers_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_disable_generate_item_version_numbers");
{
#line 711 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif
;}
#line 5232 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_disable_generate_item_version_numbers");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module90)
	MR_init_entry1(libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_disable_generate_item_version_numbers'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_disable_generate_item_version_numbers");
{
#line 711 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock, MR_MUTEX_ATTR);
#endif
;}
#line 5266 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_disable_generate_item_version_numbers");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_0
{
#line 711 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif
;}
#line 5279 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_0
	X = (MR_Integer) 0;
{
#line 711 "globals.m"
libs__globals__mutable_variable_disable_generate_item_version_numbers = X;
;}
#line 5290 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_0
{
#line 711 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_disable_generate_item_version_numbers_lock,
                "libs__globals__mutable_variable_disable_generate_item_version_numbers_lock");
#endif
;}
#line 5302 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module91)
	MR_init_entry1(libs__globals__pre_initialise_mutable_maybe_source_file_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__pre_initialise_mutable_maybe_source_file_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_maybe_source_file_map'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__pre_initialise_mutable_maybe_source_file_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__pre_initialise_mutable_maybe_source_file_map_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_maybe_source_file_map");
{
#line 714 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif
;}
#line 5335 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_maybe_source_file_map");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module92)
	MR_init_entry1(libs__globals__initialise_mutable_maybe_source_file_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__initialise_mutable_maybe_source_file_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_maybe_source_file_map'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__initialise_mutable_maybe_source_file_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_maybe_source_file_map_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_maybe_source_file_map");
{
#line 714 "globals.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&libs__globals__mutable_variable_maybe_source_file_map_lock, MR_MUTEX_ATTR);
#endif
;}
#line 5369 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_maybe_source_file_map");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_maybe_source_file_map_0_0
{
#line 714 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif
;}
#line 5382 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_maybe_source_file_map_0_0
	X = (MR_Word) MR_tbmkword(0, 0);
{
#line 714 "globals.m"
libs__globals__mutable_variable_maybe_source_file_map = X;
;}
#line 5393 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_maybe_source_file_map_0_0
{
#line 714 "globals.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&libs__globals__mutable_variable_maybe_source_file_map_lock,
                "libs__globals__mutable_variable_maybe_source_file_map_lock");
#endif
;}
#line 5405 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(libs__globals_module93)
	MR_init_entry1(__Unify___libs__globals__c_compiler_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__globals__c_compiler_type_0_0);
	MR_init_label5(__Unify___libs__globals__c_compiler_type_0_0,6,8,10,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__globals__c_compiler_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__globals__c_compiler_type_0_0_i19);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___libs__globals__c_compiler_type_0_0_i6);
	}
	MR_r2 = MR_unmkbody(MR_tempr1);
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(6);
	MR_proceed();
	}
MR_def_label(__Unify___libs__globals__c_compiler_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___libs__globals__c_compiler_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(5) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___libs__globals__c_compiler_type_0_0_i8);
MR_def_label(__Unify___libs__globals__c_compiler_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__globals__c_compiler_type_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___libs__globals__c_compiler_type_0_0_i10);
MR_def_label(__Unify___libs__globals__c_compiler_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__globals__c_compiler_type_0_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___libs__globals__c_compiler_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__globals__c_compiler_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(libs__globals_module94)
	MR_init_entry1(__Compare___libs__globals__c_compiler_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__globals__c_compiler_type_0_0);
	MR_init_label10(__Compare___libs__globals__c_compiler_type_0_0,41,53,12,65,43,50,85,14,102,17)
	MR_init_label3(__Compare___libs__globals__c_compiler_type_0_0,19,23,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__globals__c_compiler_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i65);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i14);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i53);
	}
	MR_r2 = MR_tag(MR_tempr2);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i85);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i41);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Compare___libs__globals__c_compiler_type_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i102);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___libs__globals__c_compiler_type_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(1)),1)) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i43);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i85);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___libs__globals__c_compiler_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i102);
	}
MR_def_label(__Compare___libs__globals__c_compiler_type_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___libs__globals__c_compiler_type_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i85);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i50);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___libs__globals__c_compiler_type_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i65);
	}
MR_def_label(__Compare___libs__globals__c_compiler_type_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___libs__globals__c_compiler_type_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tag(MR_sv(2));
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i17);
	}
MR_def_label(__Compare___libs__globals__c_compiler_type_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___libs__globals__c_compiler_type_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___libs__globals__c_compiler_type_0_0_i19);
MR_def_label(__Compare___libs__globals__c_compiler_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i55);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___libs__globals__c_compiler_type_0_0_i23);
MR_def_label(__Compare___libs__globals__c_compiler_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__c_compiler_type_0_0_i55);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___libs__globals__c_compiler_type_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module95)
	MR_init_entry1(__Unify___libs__globals__compilation_target_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__globals__compilation_target_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__globals__compilation_target_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(libs__globals_module96)
	MR_init_entry1(__Compare___libs__globals__compilation_target_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__globals__compilation_target_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__globals__compilation_target_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module97)
	MR_init_entry1(__Unify___libs__globals__foreign_language_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__globals__foreign_language_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__globals__foreign_language_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module98)
	MR_init_entry1(__Compare___libs__globals__foreign_language_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__globals__foreign_language_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__globals__foreign_language_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module99)
	MR_init_entry1(__Unify___libs__globals__gc_method_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__globals__gc_method_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__globals__gc_method_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module100)
	MR_init_entry1(__Compare___libs__globals__gc_method_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__globals__gc_method_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__globals__gc_method_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___libs__trace_params__trace_level_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_items_0;
MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(libs__globals_module101)
	MR_init_entry1(__Unify___libs__globals__globals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__globals__globals_0_0);
	MR_init_label8(__Unify___libs__globals__globals_0_0,4,6,8,10,12,14,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__globals__globals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i18);
	}
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
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
	MR_sv(11) = MR_tfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(19) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(20) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(21) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(22) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(23) = MR_tfield(0, MR_tempr2, 11);
	MR_sv(24) = MR_tfield(0, MR_tempr2, 12);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___libs__globals__globals_0_0_i4);
MR_def_label(__Unify___libs__globals__globals_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(14))) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(15))) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(16))) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(17))) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___libs__trace_params__trace_level_0_0,
		__Unify___libs__globals__globals_0_0_i6);
MR_def_label(__Unify___libs__globals__globals_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_items);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___libs__globals__globals_0_0_i8);
MR_def_label(__Unify___libs__globals__globals_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(20))) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___libs__globals__c_compiler_type_0_0,
		__Unify___libs__globals__globals_0_0_i10);
MR_def_label(__Unify___libs__globals__globals_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(__Unify___libs__globals__reuse_strategy_0_0,
		__Unify___libs__globals__globals_0_0_i12);
MR_def_label(__Unify___libs__globals__globals_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, il_version_number);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___libs__globals__globals_0_0_i14);
MR_def_label(__Unify___libs__globals__globals_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_info);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(24);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___libs__globals__globals_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__globals__globals_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___libs__trace_params__trace_level_0_0);
MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(libs__globals_module102)
	MR_init_entry1(__Compare___libs__globals__globals_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__globals__globals_0_0);
	MR_init_label10(__Compare___libs__globals__globals_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label5(__Compare___libs__globals__globals_0_0,37,41,45,49,109)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__globals__globals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i3);
	}
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i2);
MR_def_label(__Compare___libs__globals__globals_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___libs__globals__globals_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___libs__globals__globals_0_0_i5);
MR_def_label(__Compare___libs__globals__globals_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i109);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__globals_0_0_i9);
MR_def_label(__Compare___libs__globals__globals_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i109);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__globals_0_0_i13);
MR_def_label(__Compare___libs__globals__globals_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i109);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__globals_0_0_i17);
MR_def_label(__Compare___libs__globals__globals_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i109);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__globals_0_0_i21);
MR_def_label(__Compare___libs__globals__globals_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i109);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__globals_0_0_i25);
MR_def_label(__Compare___libs__globals__globals_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i109);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___libs__trace_params__trace_level_0_0,
		__Compare___libs__globals__globals_0_0_i29);
MR_def_label(__Compare___libs__globals__globals_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i109);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_items);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___libs__globals__globals_0_0_i33);
MR_def_label(__Compare___libs__globals__globals_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i109);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__globals_0_0_i37);
MR_def_label(__Compare___libs__globals__globals_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i109);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___libs__globals__c_compiler_type_0_0,
		__Compare___libs__globals__globals_0_0_i41);
MR_def_label(__Compare___libs__globals__globals_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i109);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___libs__globals__reuse_strategy_0_0,
		__Compare___libs__globals__globals_0_0_i45);
MR_def_label(__Compare___libs__globals__globals_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i109);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, il_version_number);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___libs__globals__globals_0_0_i49);
MR_def_label(__Compare___libs__globals__globals_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i109);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__feedback, feedback_info);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(24);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___libs__globals__globals_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module103)
	MR_init_entry1(__Unify___libs__globals__il_version_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__globals__il_version_number_0_0);
	MR_init_label2(__Unify___libs__globals__il_version_number_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__globals__il_version_number_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__globals__il_version_number_0_0_i4);
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
		MR_GOTO_LAB(__Unify___libs__globals__il_version_number_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__globals__il_version_number_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__globals__il_version_number_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___libs__globals__il_version_number_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__globals__il_version_number_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module104)
	MR_init_entry1(__Compare___libs__globals__il_version_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__globals__il_version_number_0_0);
	MR_init_label6(__Compare___libs__globals__il_version_number_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__globals__il_version_number_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__globals__il_version_number_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___libs__globals__il_version_number_0_0_i2);
MR_def_label(__Compare___libs__globals__il_version_number_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___libs__globals__il_version_number_0_0,2)
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
		__Compare___libs__globals__il_version_number_0_0_i5);
MR_def_label(__Compare___libs__globals__il_version_number_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__il_version_number_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__il_version_number_0_0_i9);
MR_def_label(__Compare___libs__globals__il_version_number_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__il_version_number_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__il_version_number_0_0_i13);
MR_def_label(__Compare___libs__globals__il_version_number_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__il_version_number_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___libs__globals__il_version_number_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module105)
	MR_init_entry1(__Unify___libs__globals__may_be_thread_safe_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__globals__may_be_thread_safe_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__globals__may_be_thread_safe_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module106)
	MR_init_entry1(__Compare___libs__globals__may_be_thread_safe_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__globals__may_be_thread_safe_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__globals__may_be_thread_safe_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module107)
	MR_init_entry1(__Unify___libs__globals__reuse_strategy_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__globals__reuse_strategy_0_0);
	MR_init_label3(__Unify___libs__globals__reuse_strategy_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__globals__reuse_strategy_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__globals__reuse_strategy_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___libs__globals__reuse_strategy_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___libs__globals__reuse_strategy_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__globals__reuse_strategy_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___libs__globals__reuse_strategy_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___libs__globals__reuse_strategy_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module108)
	MR_init_entry1(__Compare___libs__globals__reuse_strategy_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__globals__reuse_strategy_0_0);
	MR_init_label4(__Compare___libs__globals__reuse_strategy_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__globals__reuse_strategy_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__globals__reuse_strategy_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__reuse_strategy_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__reuse_strategy_0_0_i7);
	}
MR_def_label(__Compare___libs__globals__reuse_strategy_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__globals__reuse_strategy_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__globals__reuse_strategy_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__reuse_strategy_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___libs__globals__reuse_strategy_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module109)
	MR_init_entry1(__Unify___libs__globals__source_file_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__globals__source_file_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__globals__source_file_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module110)
	MR_init_entry1(__Compare___libs__globals__source_file_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__globals__source_file_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__globals__source_file_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module111)
	MR_init_entry1(__Unify___libs__globals__tags_method_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__globals__tags_method_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__globals__tags_method_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module112)
	MR_init_entry1(__Compare___libs__globals__tags_method_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__globals__tags_method_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__globals__tags_method_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module113)
	MR_init_entry1(__Unify___libs__globals__termination_norm_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___libs__globals__termination_norm_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__globals__termination_norm_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module114)
	MR_init_entry1(__Compare___libs__globals__termination_norm_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___libs__globals__termination_norm_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__globals__termination_norm_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module115)
	MR_init_entry1(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__516__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__516__1_1_0);
	MR_init_label2(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__516__1_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__get_backend_foreign_languages__516__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__516__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__convert_foreign_language_2_0,
		fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__516__1_1_0_i3);
MR_def_label(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__516__1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__516__1_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__516__1_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.m", 9);
	MR_r2 = (MR_Word) MR_string_const("io_get_backend_foreign_languages: invalid foreign_language string", 65);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module116)
	MR_init_entry1(libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__373__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__373__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__convert_c_compiler_type_with_version__373__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__IntroducedFrom__pred__convert_c_compiler_type_with_version__373__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 95);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 714 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_source_file_map;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_source_file_map_lock;
#endif

#line 6659 "libs.globals.c"
#line 711 "globals.m"
MR_Word libs__globals__mutable_variable_disable_generate_item_version_numbers;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_generate_item_version_numbers_lock;
#endif

#line 6666 "libs.globals.c"
#line 708 "globals.m"
MR_Word libs__globals__mutable_variable_disable_smart_recompilation;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_disable_smart_recompilation_lock;
#endif

#line 6673 "libs.globals.c"
#line 705 "globals.m"
MR_Word libs__globals__mutable_variable_extra_error_info;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_extra_error_info_lock;
#endif

#line 6680 "libs.globals.c"
#line 699 "globals.m"
MR_Word libs__globals__mutable_variable_maybe_from_ground_term_threshold;
#ifdef MR_THREAD_SAFE
    MercuryLock libs__globals__mutable_variable_maybe_from_ground_term_threshold_lock;
#endif

#line 6687 "libs.globals.c"
#line 694 "globals.m"
MR_Unsigned libs__globals__mutable_variable_solver_auto_init_supported;

#line 6691 "libs.globals.c"

MR_declare_static(mercury__libs__globals__initialise_mutable_maybe_source_file_map_0_0);

void
libs__globals__user_init_pred_5(void);

void
libs__globals__user_init_pred_5(void)
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
	MR_setup_callback(MR_ENTRY(mercury__libs__globals__initialise_mutable_maybe_source_file_map_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__libs__globals__initialise_mutable_maybe_source_file_map_0_0), MR_FALSE);
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


MR_declare_static(mercury__libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_0);

void
libs__globals__user_init_pred_4(void);

void
libs__globals__user_init_pred_4(void)
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
	MR_setup_callback(MR_ENTRY(mercury__libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__libs__globals__initialise_mutable_disable_generate_item_version_numbers_0_0), MR_FALSE);
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


MR_declare_static(mercury__libs__globals__initialise_mutable_disable_smart_recompilation_0_0);

void
libs__globals__user_init_pred_3(void);

void
libs__globals__user_init_pred_3(void)
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
	MR_setup_callback(MR_ENTRY(mercury__libs__globals__initialise_mutable_disable_smart_recompilation_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__libs__globals__initialise_mutable_disable_smart_recompilation_0_0), MR_FALSE);
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


MR_declare_static(mercury__libs__globals__initialise_mutable_extra_error_info_0_0);

void
libs__globals__user_init_pred_2(void);

void
libs__globals__user_init_pred_2(void)
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
	MR_setup_callback(MR_ENTRY(mercury__libs__globals__initialise_mutable_extra_error_info_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__libs__globals__initialise_mutable_extra_error_info_0_0), MR_FALSE);
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


MR_declare_static(mercury__libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_0);

void
libs__globals__user_init_pred_1(void);

void
libs__globals__user_init_pred_1(void)
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
	MR_setup_callback(MR_ENTRY(mercury__libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__libs__globals__initialise_mutable_maybe_from_ground_term_threshold_0_0), MR_FALSE);
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


MR_declare_static(mercury__libs__globals__initialise_mutable_solver_auto_init_supported_0_0);

void
libs__globals__user_init_pred_0(void);

void
libs__globals__user_init_pred_0(void)
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
	MR_setup_callback(MR_ENTRY(mercury__libs__globals__initialise_mutable_solver_auto_init_supported_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__libs__globals__initialise_mutable_solver_auto_init_supported_0_0), MR_FALSE);
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


static void mercury__libs__globals_maybe_bunch_0(void)
{
	libs__globals_module0();
	libs__globals_module1();
	libs__globals_module2();
	libs__globals_module3();
	libs__globals_module4();
	libs__globals_module5();
	libs__globals_module6();
	libs__globals_module7();
	libs__globals_module8();
	libs__globals_module9();
	libs__globals_module10();
	libs__globals_module11();
	libs__globals_module12();
	libs__globals_module13();
	libs__globals_module14();
	libs__globals_module15();
	libs__globals_module16();
	libs__globals_module17();
	libs__globals_module18();
	libs__globals_module19();
	libs__globals_module20();
	libs__globals_module21();
	libs__globals_module22();
	libs__globals_module23();
	libs__globals_module24();
	libs__globals_module25();
	libs__globals_module26();
	libs__globals_module27();
	libs__globals_module28();
	libs__globals_module29();
	libs__globals_module30();
	libs__globals_module31();
	libs__globals_module32();
	libs__globals_module33();
	libs__globals_module34();
	libs__globals_module35();
	libs__globals_module36();
	libs__globals_module37();
	libs__globals_module38();
	libs__globals_module39();
}

static void mercury__libs__globals_maybe_bunch_1(void)
{
	libs__globals_module40();
	libs__globals_module41();
	libs__globals_module42();
	libs__globals_module43();
	libs__globals_module44();
	libs__globals_module45();
	libs__globals_module46();
	libs__globals_module47();
	libs__globals_module48();
	libs__globals_module49();
	libs__globals_module50();
	libs__globals_module51();
	libs__globals_module52();
	libs__globals_module53();
	libs__globals_module54();
	libs__globals_module55();
	libs__globals_module56();
	libs__globals_module57();
	libs__globals_module58();
	libs__globals_module59();
	libs__globals_module60();
	libs__globals_module61();
	libs__globals_module62();
	libs__globals_module63();
	libs__globals_module64();
	libs__globals_module65();
	libs__globals_module66();
	libs__globals_module67();
	libs__globals_module68();
	libs__globals_module69();
	libs__globals_module70();
	libs__globals_module71();
	libs__globals_module72();
	libs__globals_module73();
	libs__globals_module74();
	libs__globals_module75();
	libs__globals_module76();
	libs__globals_module77();
	libs__globals_module78();
	libs__globals_module79();
}

static void mercury__libs__globals_maybe_bunch_2(void)
{
	libs__globals_module80();
	libs__globals_module81();
	libs__globals_module82();
	libs__globals_module83();
	libs__globals_module84();
	libs__globals_module85();
	libs__globals_module86();
	libs__globals_module87();
	libs__globals_module88();
	libs__globals_module89();
	libs__globals_module90();
	libs__globals_module91();
	libs__globals_module92();
	libs__globals_module93();
	libs__globals_module94();
	libs__globals_module95();
	libs__globals_module96();
	libs__globals_module97();
	libs__globals_module98();
	libs__globals_module99();
	libs__globals_module100();
	libs__globals_module101();
	libs__globals_module102();
	libs__globals_module103();
	libs__globals_module104();
	libs__globals_module105();
	libs__globals_module106();
	libs__globals_module107();
	libs__globals_module108();
	libs__globals_module109();
	libs__globals_module110();
	libs__globals_module111();
	libs__globals_module112();
	libs__globals_module113();
	libs__globals_module114();
	libs__globals_module115();
	libs__globals_module116();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__globals__init(void);
void mercury__libs__globals__init_type_tables(void);
void mercury__libs__globals__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__globals__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__globals__init_complexity_procs(void);
#endif
void mercury__libs__globals__required_init(void);

void mercury__libs__globals__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__globals_maybe_bunch_0();
	mercury__libs__globals_maybe_bunch_1();
	mercury__libs__globals_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_c_compiler_type_0,
		libs__globals__c_compiler_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_compilation_target_0,
		libs__globals__compilation_target_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_foreign_language_0,
		libs__globals__foreign_language_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_gc_method_0,
		libs__globals__gc_method_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_globals_0,
		libs__globals__globals_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_il_version_number_0,
		libs__globals__il_version_number_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_may_be_thread_safe_0,
		libs__globals__may_be_thread_safe_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_reuse_strategy_0,
		libs__globals__reuse_strategy_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_source_file_map_0,
		libs__globals__source_file_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_tags_method_0,
		libs__globals__tags_method_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_termination_norm_0,
		libs__globals__termination_norm_0_0);
	mercury__libs__globals__init_debugger();
}

void mercury__libs__globals__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_c_compiler_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_compilation_target_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_foreign_language_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_gc_method_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_globals_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_il_version_number_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_may_be_thread_safe_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_reuse_strategy_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_source_file_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_tags_method_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_termination_norm_0);
	}
}


void mercury__libs__globals__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__globals__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__libs__globals);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__globals__init_complexity_procs(void)
{
}

#endif

void mercury__libs__globals__required_init(void)
{
	libs__globals__user_init_pred_0();
	libs__globals__user_init_pred_1();
	libs__globals__user_init_pred_2();
	libs__globals__user_init_pred_3();
	libs__globals__user_init_pred_4();
	libs__globals__user_init_pred_5();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
