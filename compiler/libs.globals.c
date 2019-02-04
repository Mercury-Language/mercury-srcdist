/*
** Automatically generated from `globals.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
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
#line 25 "libs.globals.c"
#include "libs.globals.mh"

#line 28 "libs.globals.c"
#line 530 "../library/io.int"
#include "io.mh"

#line 32 "libs.globals.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 36 "libs.globals.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "libs.globals.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "libs.globals.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 48 "libs.globals.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "libs.globals.c"
#line 53 "libs.globals.c"
#ifndef LIBS__GLOBALS_DECL_GUARD
#define LIBS__GLOBALS_DECL_GUARD

#line 57 "libs.globals.c"
#line 366 "globals.m"
extern MR_Unsigned libs__globals__mutable_variable_globals;

#line 61 "libs.globals.c"
#line 372 "globals.m"
extern MR_Unsigned libs__globals__mutable_variable_extra_error_info;

#line 65 "libs.globals.c"
#line 66 "libs.globals.c"

#endif
#line 69 "libs.globals.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_2 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

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

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__globals__type_ctor_info_termination_norm_0,
	mercury_data_libs__globals__type_ctor_info_tags_method_0,
	mercury_data_libs__globals__type_ctor_info_source_file_map_0,
	mercury_data_libs__globals__type_ctor_info_may_be_thread_safe_0,
	mercury_data_libs__globals__type_ctor_info_globals_0,
	mercury_data_libs__globals__type_ctor_info_gc_method_0,
	mercury_data_libs__globals__type_ctor_info_foreign_language_0,
	mercury_data_libs__globals__type_ctor_info_compilation_target_0;
MR_decl_label8(libs__globals__convert_foreign_language_2_0, 2,4,5,6,7,8,9,1)
MR_decl_label7(libs__globals__convert_gc_method_2_0, 3,4,5,6,7,8,1)
MR_decl_label2(libs__globals__convert_maybe_thread_safe_2_0, 3,1)
MR_decl_label3(libs__globals__convert_tags_method_2_0, 3,4,1)
MR_decl_label7(libs__globals__convert_target_2_0, 2,4,5,6,7,8,1)
MR_decl_label4(libs__globals__convert_termination_norm_2_0, 3,4,5,1)
MR_decl_label1(libs__globals__get_backend_foreign_languages_2_0, 2)
MR_decl_label8(libs__globals__globals_io_init_11_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(libs__globals__globals_io_init_11_0, 10)
MR_decl_label3(libs__globals__have_static_code_addresses_2_0, 2,3,4)
MR_decl_label1(libs__globals__imported_is_constant_3_0, 2)
MR_decl_label1(libs__globals__initialise_mutable_globals_0_0, 2)
MR_decl_label2(libs__globals__io_get_backend_foreign_languages_3_0, 2,3)
MR_decl_label1(libs__globals__io_get_gc_method_3_0, 2)
MR_decl_label2(libs__globals__io_get_globals_3_0, 3,2)
MR_decl_label1(libs__globals__io_get_maybe_thread_safe_3_0, 2)
MR_decl_label1(libs__globals__io_get_tags_method_3_0, 2)
MR_decl_label1(libs__globals__io_get_target_3_0, 2)
MR_decl_label1(libs__globals__io_get_termination2_norm_3_0, 2)
MR_decl_label1(libs__globals__io_get_termination_norm_3_0, 2)
MR_decl_label1(libs__globals__io_get_trace_level_3_0, 2)
MR_decl_label1(libs__globals__io_get_trace_suppress_3_0, 2)
MR_decl_label1(libs__globals__io_lookup_accumulating_option_4_0, 2)
MR_decl_label1(libs__globals__io_lookup_bool_option_4_0, 2)
MR_decl_label4(libs__globals__io_lookup_foreign_language_option_4_0, 2,3,6,5)
MR_decl_label1(libs__globals__io_lookup_int_option_4_0, 2)
MR_decl_label1(libs__globals__io_lookup_maybe_string_option_4_0, 2)
MR_decl_label1(libs__globals__io_lookup_option_4_0, 2)
MR_decl_label1(libs__globals__io_lookup_string_option_4_0, 2)
MR_decl_label2(libs__globals__io_printing_usage_3_0, 2,3)
MR_decl_label2(libs__globals__io_set_gc_method_3_0, 2,3)
MR_decl_label1(libs__globals__io_set_globals_3_0, 2)
MR_decl_label3(libs__globals__io_set_option_4_0, 2,3,4)
MR_decl_label2(libs__globals__io_set_tags_method_3_0, 2,3)
MR_decl_label2(libs__globals__io_set_trace_level_3_0, 2,3)
MR_decl_label1(libs__globals__io_set_trace_level_none_2_0, 2)
MR_decl_label2(libs__globals__lookup_accumulating_option_3_0, 2,3)
MR_decl_label2(libs__globals__lookup_bool_option_3_0, 2,3)
MR_decl_label3(libs__globals__lookup_bool_option_3_1, 2,8,3)
MR_decl_label2(libs__globals__lookup_int_option_3_0, 2,3)
MR_decl_label2(libs__globals__lookup_maybe_string_option_3_0, 2,3)
MR_decl_label2(libs__globals__lookup_string_option_3_0, 2,3)
MR_decl_label1(libs__globals__set_option_4_0, 2)
MR_decl_label1(libs__globals__set_trace_level_none_2_0, 2)
MR_decl_label3(libs__globals__want_return_var_layouts_2_0, 6,3,2)
MR_decl_label2(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__398__1_1_0, 3,2)
MR_decl_label6(__Unify___libs__globals__globals_0_0, 4,6,8,10,12,1)
MR_decl_label8(__Compare___libs__globals__globals_0_0, 3,2,5,9,13,17,21,25)
MR_decl_label5(__Compare___libs__globals__globals_0_0, 29,33,37,41,93)
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
MR_def_extern_entry(libs__globals__globals_init_10_0)
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
MR_def_extern_entry(libs__globals__get_source_file_map_2_0)
MR_def_extern_entry(libs__globals__get_maybe_thread_safe_2_0)
MR_def_extern_entry(libs__globals__set_options_3_0)
MR_def_extern_entry(libs__globals__set_option_4_0)
MR_def_extern_entry(libs__globals__set_gc_method_3_0)
MR_def_extern_entry(libs__globals__set_tags_method_3_0)
MR_def_extern_entry(libs__globals__set_trace_level_3_0)
MR_def_extern_entry(libs__globals__set_trace_level_none_2_0)
MR_def_extern_entry(libs__globals__set_source_file_map_3_0)
MR_def_extern_entry(libs__globals__lookup_bool_option_3_0)
MR_def_extern_entry(libs__globals__lookup_bool_option_3_1)
MR_def_extern_entry(libs__globals__lookup_int_option_3_0)
MR_def_extern_entry(libs__globals__lookup_string_option_3_0)
MR_def_extern_entry(libs__globals__lookup_maybe_string_option_3_0)
MR_def_extern_entry(libs__globals__imported_is_constant_3_0)
MR_def_extern_entry(libs__globals__have_static_code_addresses_2_0)
MR_def_extern_entry(libs__globals__want_return_var_layouts_2_0)
MR_decl_static(libs__globals__lock_globals_0_0)
MR_decl_static(libs__globals__unlock_globals_0_0)
MR_decl_static(libs__globals__unsafe_set_globals_1_0)
MR_def_extern_entry(libs__globals__io_set_globals_3_0)
MR_def_extern_entry(libs__globals__globals_io_init_11_0)
MR_decl_static(libs__globals__unsafe_get_globals_1_0)
MR_def_extern_entry(libs__globals__io_get_globals_3_0)
MR_def_extern_entry(libs__globals__io_get_target_3_0)
MR_def_extern_entry(libs__globals__io_get_backend_foreign_languages_3_0)
MR_def_extern_entry(libs__globals__io_lookup_string_option_4_0)
MR_def_extern_entry(libs__globals__io_lookup_foreign_language_option_4_0)
MR_def_extern_entry(libs__globals__io_get_gc_method_3_0)
MR_def_extern_entry(libs__globals__io_get_tags_method_3_0)
MR_def_extern_entry(libs__globals__io_get_termination_norm_3_0)
MR_def_extern_entry(libs__globals__io_get_termination2_norm_3_0)
MR_def_extern_entry(libs__globals__io_get_trace_level_3_0)
MR_def_extern_entry(libs__globals__io_get_trace_suppress_3_0)
MR_def_extern_entry(libs__globals__io_get_maybe_thread_safe_3_0)
MR_decl_static(libs__globals__lock_extra_error_info_0_0)
MR_decl_static(libs__globals__unlock_extra_error_info_0_0)
MR_decl_static(libs__globals__unsafe_get_extra_error_info_1_0)
MR_def_extern_entry(libs__globals__io_get_extra_error_info_3_0)
MR_def_extern_entry(libs__globals__io_set_option_4_0)
MR_def_extern_entry(libs__globals__io_set_gc_method_3_0)
MR_def_extern_entry(libs__globals__io_set_tags_method_3_0)
MR_def_extern_entry(libs__globals__io_set_trace_level_3_0)
MR_def_extern_entry(libs__globals__io_set_trace_level_none_2_0)
MR_decl_static(libs__globals__unsafe_set_extra_error_info_1_0)
MR_def_extern_entry(libs__globals__io_set_extra_error_info_3_0)
MR_def_extern_entry(libs__globals__io_lookup_option_4_0)
MR_def_extern_entry(libs__globals__io_lookup_bool_option_4_0)
MR_def_extern_entry(libs__globals__io_lookup_int_option_4_0)
MR_def_extern_entry(libs__globals__io_lookup_maybe_string_option_4_0)
MR_def_extern_entry(libs__globals__io_lookup_accumulating_option_4_0)
MR_def_extern_entry(libs__globals__io_printing_usage_3_0)
MR_decl_static(libs__globals__pre_initialise_mutable_globals_0_0)
MR_decl_static(libs__globals__initialise_mutable_globals_0_0)
MR_decl_static(libs__globals__pre_initialise_mutable_extra_error_info_0_0)
MR_decl_static(libs__globals__initialise_mutable_extra_error_info_0_0)
MR_def_extern_entry(__Unify___libs__globals__compilation_target_0_0)
MR_def_extern_entry(__Compare___libs__globals__compilation_target_0_0)
MR_def_extern_entry(__Unify___libs__globals__foreign_language_0_0)
MR_def_extern_entry(__Compare___libs__globals__foreign_language_0_0)
MR_def_extern_entry(__Unify___libs__globals__gc_method_0_0)
MR_def_extern_entry(__Compare___libs__globals__gc_method_0_0)
MR_def_extern_entry(__Unify___libs__globals__globals_0_0)
MR_def_extern_entry(__Compare___libs__globals__globals_0_0)
MR_def_extern_entry(__Unify___libs__globals__may_be_thread_safe_0_0)
MR_def_extern_entry(__Compare___libs__globals__may_be_thread_safe_0_0)
MR_def_extern_entry(__Unify___libs__globals__source_file_map_0_0)
MR_def_extern_entry(__Compare___libs__globals__source_file_map_0_0)
MR_def_extern_entry(__Unify___libs__globals__tags_method_0_0)
MR_def_extern_entry(__Compare___libs__globals__tags_method_0_0)
MR_def_extern_entry(__Unify___libs__globals__termination_norm_0_0)
MR_def_extern_entry(__Compare___libs__globals__termination_norm_0_0)
MR_decl_static(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__398__1_1_0)

static const MR_UserClosureId
mercury_data__closure_layout__libs__globals__get_backend_foreign_languages_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const MR_UserClosureId
mercury_data__closure_layout__libs__globals__io_get_backend_foreign_languages_3_0_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_data__closure_layout__libs__globals__get_backend_foreign_languages_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
{
(MR_Word *) &mercury_data__closure_layout__libs__globals__io_get_backend_foreign_languages_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__398__1_1_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__398__1_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR
}
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

static const struct mercury_type_1 mercury_vector_common_1_0[6] =
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
0
},
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
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

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
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1libs__trace_params__type_ctor_info_trace_suppress_item_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_libs__trace_params__type_ctor_info_trace_suppress_item_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_compilation_target_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_gc_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_tags_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_termination_norm_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0;

const MR_PseudoTypeInfo mercury_data_libs__globals__field_types_globals_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_compilation_target_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_gc_method_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_tags_method_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_termination_norm_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_termination_norm_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__trace_params__type_ctor_info_trace_level_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1libs__trace_params__type_ctor_info_trace_suppress_item_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_libs__globals__field_names_globals_0_0[] = {
	"options",
	"target",
	"gc_method",
	"tags_method",
	"termination_norm",
	"termination2_norm",
	"trace_level",
	"trace_suppress_items",
	"source_file_map",
	"have_printed_usage",
	"may_be_thread_safe"
};

static const MR_DuFunctorDesc mercury_data_libs__globals__du_functor_desc_globals_0_0 = {
	"globals",
	11,
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
	"gc_mps",
	4
};

static const MR_EnumFunctorDesc mercury_data_libs__globals__enum_functor_desc_gc_method_0_5 = {
	"gc_accurate",
	5
};

const MR_EnumFunctorDescPtr mercury_data_libs__globals__enum_value_ordered_gc_method_0[] = {
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_0,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_1,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_2,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_3,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_4,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_5
};

const MR_EnumFunctorDescPtr mercury_data_libs__globals__enum_name_ordered_gc_method_0[] = {
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_5,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_0,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_2,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_3,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_4,
	&mercury_data_libs__globals__enum_functor_desc_gc_method_0_1
};

const MR_Integer mercury_data_libs__globals__functor_number_map_gc_method_0[] = {
	1,
	5,
	2,
	3,
	4,
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
	6,
	4,
	mercury_data_libs__globals__functor_number_map_gc_method_0
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

static const MR_UserClosureId
mercury_data__closure_layout__libs__globals__get_backend_foreign_languages_2_0_1 = {
{
MR_FUNCTION,
"libs.globals",
"libs.globals",
"lambda_globals_m_398",
2,
0
},
"libs.globals",
"globals.m",
395,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__libs__globals__io_get_backend_foreign_languages_3_0_1 = {
{
MR_FUNCTION,
"libs.globals",
"libs.globals",
"lambda_globals_m_398",
2,
0
},
"libs.globals",
"globals.m",
395,
"d1;c6;"
};


MR_BEGIN_MODULE(libs__globals_module0)
	MR_init_entry1(fn__libs__globals__compilation_target_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__globals__compilation_target_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, (MR_Integer) MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module1)
	MR_init_entry1(fn__libs__globals__foreign_language_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__globals__foreign_language_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, (MR_Integer) MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module2)
	MR_init_entry1(fn__libs__globals__simple_foreign_language_string_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__globals__simple_foreign_language_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_2, (MR_Integer) MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module3)
	MR_init_entry1(fn__libs__globals__gc_is_conservative_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__libs__globals__gc_is_conservative_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_1_0, (MR_Integer) MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
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
	MR_init_label7(libs__globals__convert_target_2_0,2,4,5,6,7,8,1)
MR_BEGIN_CODE

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
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("asm", 3)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_target_2_0_i4);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_target_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("c", 1)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_target_2_0_i5);
	}
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_target_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("erlang", 6)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_target_2_0_i6);
	}
	MR_r2 = (MR_Integer) 5;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_target_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("il", 2)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_target_2_0_i7);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_target_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("java", 4)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_target_2_0_i8);
	}
	MR_r2 = (MR_Integer) 2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_target_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("x86_64", 6)) != 0)) {
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
	MR_init_label8(libs__globals__convert_foreign_language_2_0,2,4,5,6,7,8,9,1)
MR_BEGIN_CODE

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
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("c", 1)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_foreign_language_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("c sharp", 7)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i5);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_foreign_language_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("c#", 2)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i6);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_foreign_language_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("csharp", 6)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i7);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_foreign_language_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("erlang", 6)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i8);
	}
	MR_r2 = (MR_Integer) 4;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_foreign_language_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("il", 2)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i9);
	}
	MR_r2 = (MR_Integer) 3;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_foreign_language_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("java", 4)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_foreign_language_2_0_i1);
	}
	MR_r2 = (MR_Integer) 2;
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
	MR_init_label7(libs__globals__convert_gc_method_2_0,3,4,5,6,7,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__convert_gc_method_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("accurate", 8)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_gc_method_2_0_i3);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("automatic", 9)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_gc_method_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("boehm", 5)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_gc_method_2_0_i5);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("boehm_debug", 11)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_gc_method_2_0_i6);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("conservative", 12)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_gc_method_2_0_i7);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("mps", 3)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_gc_method_2_0_i8);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("none", 4)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_gc_method_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_gc_method_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module7)
	MR_init_entry1(libs__globals__convert_tags_method_2_0);
	MR_init_label3(libs__globals__convert_tags_method_2_0,3,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__convert_tags_method_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("high", 4)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_tags_method_2_0_i3);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_tags_method_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("low", 3)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_tags_method_2_0_i4);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_tags_method_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("none", 4)) != 0)) {
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
	MR_init_label4(libs__globals__convert_termination_norm_2_0,3,4,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__convert_termination_norm_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("num-data-elems", 14)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_termination_norm_2_0_i3);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_termination_norm_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("simple", 6)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_termination_norm_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_termination_norm_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("size-data-elems", 15)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_termination_norm_2_0_i5);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_termination_norm_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("total", 5)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_termination_norm_2_0_i1);
	}
	MR_r2 = (MR_Integer) 1;
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
	MR_init_label2(libs__globals__convert_maybe_thread_safe_2_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__convert_maybe_thread_safe_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("no", 2)) != 0)) {
		MR_GOTO_LAB(libs__globals__convert_maybe_thread_safe_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(libs__globals__convert_maybe_thread_safe_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("yes", 3)) != 0)) {
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


MR_BEGIN_MODULE(libs__globals_module10)
	MR_init_entry1(libs__globals__globals_init_10_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__globals_init_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r5;
	MR_tfield(0, MR_tempr1, 5) = MR_r6;
	MR_tfield(0, MR_tempr1, 6) = MR_r7;
	MR_tfield(0, MR_tempr1, 7) = MR_r8;
	MR_tfield(0, MR_tempr1, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 10) = MR_r9;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module11)
	MR_init_entry1(libs__globals__get_options_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_options_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module12)
	MR_init_entry1(libs__globals__get_target_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_target_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(libs__globals_module13)
	MR_init_entry1(libs__globals__lookup_option_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__lookup_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(libs__globals_module14)
	MR_init_entry1(libs__globals__lookup_accumulating_option_3_0);
	MR_init_label2(libs__globals__lookup_accumulating_option_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__lookup_accumulating_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__globals__lookup_accumulating_option_3_0_i2);
MR_def_label(libs__globals__lookup_accumulating_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(libs__globals__lookup_accumulating_option_3_0_i3);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
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

MR_decl_entry(fn__list__map_2_0);

MR_BEGIN_MODULE(libs__globals_module15)
	MR_init_entry1(libs__globals__get_backend_foreign_languages_2_0);
	MR_init_label1(libs__globals__get_backend_foreign_languages_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_backend_foreign_languages_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 206;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__globals__get_backend_foreign_languages_2_0_i2);
MR_def_label(libs__globals__get_backend_foreign_languages_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__list__map_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module16)
	MR_init_entry1(libs__globals__get_gc_method_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_gc_method_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module17)
	MR_init_entry1(libs__globals__get_tags_method_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_tags_method_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module18)
	MR_init_entry1(libs__globals__get_termination_norm_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_termination_norm_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module19)
	MR_init_entry1(libs__globals__get_termination2_norm_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_termination2_norm_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module20)
	MR_init_entry1(libs__globals__get_trace_level_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_trace_level_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module21)
	MR_init_entry1(libs__globals__get_trace_suppress_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_trace_suppress_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 7);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module22)
	MR_init_entry1(libs__globals__get_source_file_map_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_source_file_map_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module23)
	MR_init_entry1(libs__globals__get_maybe_thread_safe_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__get_maybe_thread_safe_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module24)
	MR_init_entry1(libs__globals__set_options_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__set_options_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(libs__globals_module25)
	MR_init_entry1(libs__globals__set_option_4_0);
	MR_init_label1(libs__globals__set_option_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__set_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_ctfield(0, MR_r3, 0);
	MR_np_call_localret_ent(map__set_4_0,
		libs__globals__set_option_4_0_i2);
MR_def_label(libs__globals__set_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module26)
	MR_init_entry1(libs__globals__set_gc_method_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__set_gc_method_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module27)
	MR_init_entry1(libs__globals__set_tags_method_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__set_tags_method_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module28)
	MR_init_entry1(libs__globals__set_trace_level_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__set_trace_level_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__trace_params__trace_level_none_0_0);

MR_BEGIN_MODULE(libs__globals_module29)
	MR_init_entry1(libs__globals__set_trace_level_none_2_0);
	MR_init_label1(libs__globals__set_trace_level_none_2_0,2)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module30)
	MR_init_entry1(libs__globals__set_source_file_map_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__set_source_file_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_r1;
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module31)
	MR_init_entry1(libs__globals__lookup_bool_option_3_0);
	MR_init_label2(libs__globals__lookup_bool_option_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__lookup_bool_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__globals__lookup_bool_option_3_0_i2);
MR_def_label(libs__globals__lookup_bool_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__globals__lookup_bool_option_3_0_i3);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
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


MR_BEGIN_MODULE(libs__globals_module32)
	MR_init_entry1(libs__globals__lookup_bool_option_3_1);
	MR_init_label3(libs__globals__lookup_bool_option_3_1,2,8,3)
MR_BEGIN_CODE

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
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__globals__lookup_bool_option_3_1_i2);
MR_def_label(libs__globals__lookup_bool_option_3_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__globals__lookup_bool_option_3_1_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_sv(1) == MR_tempr1);
	MR_decr_sp_and_return(2);
	}
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


MR_BEGIN_MODULE(libs__globals_module33)
	MR_init_entry1(libs__globals__lookup_int_option_3_0);
	MR_init_label2(libs__globals__lookup_int_option_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__lookup_int_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__globals__lookup_int_option_3_0_i2);
MR_def_label(libs__globals__lookup_int_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(libs__globals__lookup_int_option_3_0_i3);
	}
	MR_r1 = MR_ctfield(2, MR_r1, 0);
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


MR_BEGIN_MODULE(libs__globals_module34)
	MR_init_entry1(libs__globals__lookup_string_option_3_0);
	MR_init_label2(libs__globals__lookup_string_option_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__lookup_string_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__globals__lookup_string_option_3_0_i2);
MR_def_label(libs__globals__lookup_string_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(libs__globals__lookup_string_option_3_0_i3);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
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


MR_BEGIN_MODULE(libs__globals_module35)
	MR_init_entry1(libs__globals__lookup_maybe_string_option_3_0);
	MR_init_label2(libs__globals__lookup_maybe_string_option_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__lookup_maybe_string_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		libs__globals__lookup_maybe_string_option_3_0_i2);
MR_def_label(libs__globals__lookup_maybe_string_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(libs__globals__lookup_maybe_string_option_3_0_i3);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
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


MR_BEGIN_MODULE(libs__globals_module36)
	MR_init_entry1(libs__globals__imported_is_constant_3_0);
	MR_init_label1(libs__globals__imported_is_constant_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__imported_is_constant_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(libs__globals__imported_is_constant_3_0_i2);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(libs__globals__imported_is_constant_3_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(libs__globals__imported_is_constant_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(getopt_io__lookup_bool_option_3_0);

MR_BEGIN_MODULE(libs__globals_module37)
	MR_init_entry1(libs__globals__have_static_code_addresses_2_0);
	MR_init_label3(libs__globals__have_static_code_addresses_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__have_static_code_addresses_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 191;
	MR_np_call_localret_ent(getopt_io__lookup_bool_option_3_0,
		libs__globals__have_static_code_addresses_2_0_i2);
MR_def_label(libs__globals__have_static_code_addresses_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r3 = (MR_Integer) 193;
	MR_np_call_localret_ent(getopt_io__lookup_bool_option_3_0,
		libs__globals__have_static_code_addresses_2_0_i3);
MR_def_label(libs__globals__have_static_code_addresses_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__globals__have_static_code_addresses_2_0_i4);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(libs__globals__have_static_code_addresses_2_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
MR_def_label(libs__globals__have_static_code_addresses_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__trace_params__trace_needs_return_info_2_0);

MR_BEGIN_MODULE(libs__globals_module38)
	MR_init_entry1(libs__globals__want_return_var_layouts_2_0);
	MR_init_label3(libs__globals__want_return_var_layouts_2_0,6,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__want_return_var_layouts_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(0, MR_r1, 2);
	if (MR_INT_EQ(MR_r2,5)) {
		MR_GOTO_LAB(libs__globals__want_return_var_layouts_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 6);
	MR_r2 = MR_ctfield(0, MR_tempr1, 7);
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


MR_BEGIN_MODULE(libs__globals_module39)
	MR_init_entry1(libs__globals__lock_globals_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__lock_globals_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__lock_globals_0_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module40)
	MR_init_entry1(libs__globals__unlock_globals_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unlock_globals_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__unlock_globals_0_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module41)
	MR_init_entry1(libs__globals__unsafe_set_globals_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_set_globals_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_set_globals_1_0
	X = MR_r1;
{
#line 366 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_globals);;}
#line 2397 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__type_to_univ_2_1);

MR_BEGIN_MODULE(libs__globals_module42)
	MR_init_entry1(libs__globals__io_set_globals_3_0);
	MR_init_label1(libs__globals__io_set_globals_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_set_globals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, globals);
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		libs__globals__io_set_globals_3_0_i2);
MR_def_label(libs__globals__io_set_globals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_globals_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_globals_3_0
	X = MR_r1;
{
#line 366 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_globals);;}
#line 2439 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_globals_3_0
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__copy_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_suppress_items_0;

MR_BEGIN_MODULE(libs__globals_module43)
	MR_init_entry1(libs__globals__globals_io_init_11_0);
	MR_init_label8(libs__globals__globals_io_init_11_0,2,3,4,5,6,7,8,9)
	MR_init_label1(libs__globals__globals_io_init_11_0,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__globals_io_init_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, compilation_target);
	MR_np_call_localret_ent(builtin__copy_2_1,
		libs__globals__globals_io_init_11_0_i2);
MR_def_label(libs__globals__globals_io_init_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, gc_method);
	MR_np_call_localret_ent(builtin__copy_2_1,
		libs__globals__globals_io_init_11_0_i3);
MR_def_label(libs__globals__globals_io_init_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, tags_method);
	MR_np_call_localret_ent(builtin__copy_2_1,
		libs__globals__globals_io_init_11_0_i4);
MR_def_label(libs__globals__globals_io_init_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, termination_norm);
	MR_np_call_localret_ent(builtin__copy_2_1,
		libs__globals__globals_io_init_11_0_i5);
MR_def_label(libs__globals__globals_io_init_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, termination_norm);
	MR_np_call_localret_ent(builtin__copy_2_1,
		libs__globals__globals_io_init_11_0_i6);
MR_def_label(libs__globals__globals_io_init_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_level);
	MR_np_call_localret_ent(builtin__copy_2_1,
		libs__globals__globals_io_init_11_0_i7);
MR_def_label(libs__globals__globals_io_init_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_items);
	MR_np_call_localret_ent(builtin__copy_2_1,
		libs__globals__globals_io_init_11_0_i8);
MR_def_label(libs__globals__globals_io_init_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_np_call_localret_ent(builtin__copy_2_1,
		libs__globals__globals_io_init_11_0_i9);
MR_def_label(libs__globals__globals_io_init_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, globals);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		libs__globals__globals_io_init_11_0_i10);
MR_def_label(libs__globals__globals_io_init_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__globals_io_init_11_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__globals_io_init_11_0
	X = MR_r1;
{
#line 366 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_globals);;}
#line 2564 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__globals_io_init_11_0
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module44)
	MR_init_entry1(libs__globals__unsafe_get_globals_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unsafe_get_globals_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__unsafe_get_globals_1_0
{
#line 366 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_globals);;}
#line 2595 "libs.globals.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__univ_to_type_2_0);

MR_BEGIN_MODULE(libs__globals_module45)
	MR_init_entry1(libs__globals__io_get_globals_3_0);
	MR_init_label2(libs__globals__io_get_globals_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_globals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_globals_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_globals_3_0
{
#line 366 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_globals);;}
#line 2631 "libs.globals.c"
	MR_r2 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_globals_3_0
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, globals);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		libs__globals__io_get_globals_3_0_i3);
MR_def_label(libs__globals__io_get_globals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__globals__io_get_globals_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(libs__globals__io_get_globals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.m", 9);
	MR_r2 = (MR_Word) MR_string_const("io_get_globals: univ_to_type failed", 35);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module46)
	MR_init_entry1(libs__globals__io_get_target_3_0);
	MR_init_label1(libs__globals__io_get_target_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_target_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_get_target_3_0_i2);
MR_def_label(libs__globals__io_get_target_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module47)
	MR_init_entry1(libs__globals__io_get_backend_foreign_languages_3_0);
	MR_init_label2(libs__globals__io_get_backend_foreign_languages_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_backend_foreign_languages_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_get_backend_foreign_languages_3_0_i2);
MR_def_label(libs__globals__io_get_backend_foreign_languages_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 206;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		libs__globals__io_get_backend_foreign_languages_3_0_i3);
MR_def_label(libs__globals__io_get_backend_foreign_languages_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__list__map_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module48)
	MR_init_entry1(libs__globals__io_lookup_string_option_4_0);
	MR_init_label1(libs__globals__io_lookup_string_option_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_lookup_string_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_lookup_string_option_4_0_i2);
MR_def_label(libs__globals__io_lookup_string_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__globals__lookup_string_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module49)
	MR_init_entry1(libs__globals__io_lookup_foreign_language_option_4_0);
	MR_init_label4(libs__globals__io_lookup_foreign_language_option_4_0,2,3,6,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_lookup_foreign_language_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_lookup_foreign_language_option_4_0_i2);
MR_def_label(libs__globals__io_lookup_foreign_language_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__globals__io_lookup_foreign_language_option_4_0_i3);
MR_def_label(libs__globals__io_lookup_foreign_language_option_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__convert_foreign_language_2_0,
		libs__globals__io_lookup_foreign_language_option_4_0_i6);
MR_def_label(libs__globals__io_lookup_foreign_language_option_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(libs__globals__io_lookup_foreign_language_option_4_0_i5);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(libs__globals__io_lookup_foreign_language_option_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.m", 9);
	MR_r2 = (MR_Word) MR_string_const("io_lookup_foreign_language_option: invalid foreign_language option", 66);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module50)
	MR_init_entry1(libs__globals__io_get_gc_method_3_0);
	MR_init_label1(libs__globals__io_get_gc_method_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_gc_method_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_get_gc_method_3_0_i2);
MR_def_label(libs__globals__io_get_gc_method_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module51)
	MR_init_entry1(libs__globals__io_get_tags_method_3_0);
	MR_init_label1(libs__globals__io_get_tags_method_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_tags_method_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_get_tags_method_3_0_i2);
MR_def_label(libs__globals__io_get_tags_method_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module52)
	MR_init_entry1(libs__globals__io_get_termination_norm_3_0);
	MR_init_label1(libs__globals__io_get_termination_norm_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_termination_norm_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_get_termination_norm_3_0_i2);
MR_def_label(libs__globals__io_get_termination_norm_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module53)
	MR_init_entry1(libs__globals__io_get_termination2_norm_3_0);
	MR_init_label1(libs__globals__io_get_termination2_norm_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_termination2_norm_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_get_termination2_norm_3_0_i2);
MR_def_label(libs__globals__io_get_termination2_norm_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module54)
	MR_init_entry1(libs__globals__io_get_trace_level_3_0);
	MR_init_label1(libs__globals__io_get_trace_level_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_trace_level_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_get_trace_level_3_0_i2);
MR_def_label(libs__globals__io_get_trace_level_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 6);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module55)
	MR_init_entry1(libs__globals__io_get_trace_suppress_3_0);
	MR_init_label1(libs__globals__io_get_trace_suppress_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_trace_suppress_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_get_trace_suppress_3_0_i2);
MR_def_label(libs__globals__io_get_trace_suppress_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 7);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module56)
	MR_init_entry1(libs__globals__io_get_maybe_thread_safe_3_0);
	MR_init_label1(libs__globals__io_get_maybe_thread_safe_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_maybe_thread_safe_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_get_maybe_thread_safe_3_0_i2);
MR_def_label(libs__globals__io_get_maybe_thread_safe_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 10);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module57)
	MR_init_entry1(libs__globals__lock_extra_error_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__lock_extra_error_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__lock_extra_error_info_0_0
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
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__unlock_extra_error_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__unlock_extra_error_info_0_0
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
MR_BEGIN_CODE

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
#line 372 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_extra_error_info);;}
#line 3042 "libs.globals.c"
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
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_get_extra_error_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_extra_error_info_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_extra_error_info_3_0
{
#line 372 "globals.m"
MR_get_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_extra_error_info);;}
#line 3076 "libs.globals.c"
	MR_tempr1 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_get_extra_error_info_3_0
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
	MR_init_entry1(libs__globals__io_set_option_4_0);
	MR_init_label3(libs__globals__io_set_option_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_set_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_set_option_4_0_i2);
MR_def_label(libs__globals__io_set_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_ctfield(0, MR_sv(1), 0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__set_4_0,
		libs__globals__io_set_option_4_0_i3);
MR_def_label(libs__globals__io_set_option_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_tempr2, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_tempr2, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_tempr2, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_tempr2, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, globals);
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		libs__globals__io_set_option_4_0_i4);
MR_def_label(libs__globals__io_set_option_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_option_4_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_option_4_0
	X = MR_r1;
{
#line 366 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_globals);;}
#line 3156 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_option_4_0
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module62)
	MR_init_entry1(libs__globals__io_set_gc_method_3_0);
	MR_init_label2(libs__globals__io_set_gc_method_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_set_gc_method_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_set_gc_method_3_0_i2);
MR_def_label(libs__globals__io_set_gc_method_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_r1, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_r1, 10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, globals);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		libs__globals__io_set_gc_method_3_0_i3);
MR_def_label(libs__globals__io_set_gc_method_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_gc_method_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_gc_method_3_0
	X = MR_r1;
{
#line 366 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_globals);;}
#line 3221 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_gc_method_3_0
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module63)
	MR_init_entry1(libs__globals__io_set_tags_method_3_0);
	MR_init_label2(libs__globals__io_set_tags_method_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_set_tags_method_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_set_tags_method_3_0_i2);
MR_def_label(libs__globals__io_set_tags_method_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_r1, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_r1, 10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, globals);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		libs__globals__io_set_tags_method_3_0_i3);
MR_def_label(libs__globals__io_set_tags_method_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_tags_method_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_tags_method_3_0
	X = MR_r1;
{
#line 366 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_globals);;}
#line 3286 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_tags_method_3_0
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module64)
	MR_init_entry1(libs__globals__io_set_trace_level_3_0);
	MR_init_label2(libs__globals__io_set_trace_level_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_set_trace_level_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_set_trace_level_3_0_i2);
MR_def_label(libs__globals__io_set_trace_level_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = MR_ctfield(0, MR_r1, 9);
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_r1, 10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, globals);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		libs__globals__io_set_trace_level_3_0_i3);
MR_def_label(libs__globals__io_set_trace_level_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_trace_level_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_trace_level_3_0
	X = MR_r1;
{
#line 366 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_globals);;}
#line 3351 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_trace_level_3_0
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module65)
	MR_init_entry1(libs__globals__io_set_trace_level_none_2_0);
	MR_init_label1(libs__globals__io_set_trace_level_none_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_set_trace_level_none_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__libs__trace_params__trace_level_none_0_0,
		libs__globals__io_set_trace_level_none_2_0_i2);
MR_def_label(libs__globals__io_set_trace_level_none_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__globals__io_set_trace_level_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module66)
	MR_init_entry1(libs__globals__unsafe_set_extra_error_info_1_0);
MR_BEGIN_CODE

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
#line 372 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_extra_error_info);;}
#line 3410 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module67)
	MR_init_entry1(libs__globals__io_set_extra_error_info_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_set_extra_error_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_extra_error_info_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_extra_error_info_3_0
	X = MR_r1;
{
#line 372 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_extra_error_info);;}
#line 3442 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_set_extra_error_info_3_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module68)
	MR_init_entry1(libs__globals__io_lookup_option_4_0);
	MR_init_label1(libs__globals__io_lookup_option_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_lookup_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_lookup_option_4_0_i2);
MR_def_label(libs__globals__io_lookup_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module69)
	MR_init_entry1(libs__globals__io_lookup_bool_option_4_0);
	MR_init_label1(libs__globals__io_lookup_bool_option_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_lookup_bool_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_lookup_bool_option_4_0_i2);
MR_def_label(libs__globals__io_lookup_bool_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__globals__lookup_bool_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module70)
	MR_init_entry1(libs__globals__io_lookup_int_option_4_0);
	MR_init_label1(libs__globals__io_lookup_int_option_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_lookup_int_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_lookup_int_option_4_0_i2);
MR_def_label(libs__globals__io_lookup_int_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__globals__lookup_int_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module71)
	MR_init_entry1(libs__globals__io_lookup_maybe_string_option_4_0);
	MR_init_label1(libs__globals__io_lookup_maybe_string_option_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_lookup_maybe_string_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_lookup_maybe_string_option_4_0_i2);
MR_def_label(libs__globals__io_lookup_maybe_string_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__globals__lookup_maybe_string_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module72)
	MR_init_entry1(libs__globals__io_lookup_accumulating_option_4_0);
	MR_init_label1(libs__globals__io_lookup_accumulating_option_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_lookup_accumulating_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_lookup_accumulating_option_4_0_i2);
MR_def_label(libs__globals__io_lookup_accumulating_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__globals__lookup_accumulating_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module73)
	MR_init_entry1(libs__globals__io_printing_usage_3_0);
	MR_init_label2(libs__globals__io_printing_usage_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__globals__io_printing_usage_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__globals__io_printing_usage_3_0_i2);
MR_def_label(libs__globals__io_printing_usage_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 11);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_r1, 4);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r1, 5);
	MR_tfield(0, MR_tempr1, 6) = MR_ctfield(0, MR_r1, 6);
	MR_tfield(0, MR_tempr1, 7) = MR_ctfield(0, MR_r1, 7);
	MR_tfield(0, MR_tempr1, 8) = MR_ctfield(0, MR_r1, 8);
	MR_tfield(0, MR_tempr1, 9) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 10) = MR_ctfield(0, MR_r1, 10);
	MR_sv(1) = MR_ctfield(0, MR_r1, 9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, globals);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		libs__globals__io_printing_usage_3_0_i3);
MR_def_label(libs__globals__io_printing_usage_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_printing_usage_3_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__io_printing_usage_3_0
	X = MR_r1;
{
#line 366 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_globals);;}
#line 3659 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__io_printing_usage_3_0
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module74)
	MR_init_entry1(libs__globals__pre_initialise_mutable_globals_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__pre_initialise_mutable_globals_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__pre_initialise_mutable_globals_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_globals");
{
#line 366 "globals.m"
libs__globals__mutable_variable_globals = MR_new_thread_local_mutable_index();
;}
#line 3692 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_globals");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(fn__univ__univ_1_1);

MR_BEGIN_MODULE(libs__globals_module75)
	MR_init_entry1(libs__globals__initialise_mutable_globals_0_0);
	MR_init_label1(libs__globals__initialise_mutable_globals_0_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__globals__initialise_mutable_globals_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_globals_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_globals");
{
#line 366 "globals.m"
libs__globals__mutable_variable_globals = MR_new_thread_local_mutable_index();
;}
#line 3726 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_globals");
#undef	MR_PROC_LABEL
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__univ__univ_1_1,
		libs__globals__initialise_mutable_globals_0_0_i2);
MR_def_label(libs__globals__initialise_mutable_globals_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_globals_0_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_globals_0_0
	X = MR_r1;
{
#line 366 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_globals);;}
#line 3747 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_globals_0_0
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module76)
	MR_init_entry1(libs__globals__pre_initialise_mutable_extra_error_info_0_0);
MR_BEGIN_CODE

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
#line 372 "globals.m"
libs__globals__mutable_variable_extra_error_info = MR_new_thread_local_mutable_index();
;}
#line 3779 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_extra_error_info");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module77)
	MR_init_entry1(libs__globals__initialise_mutable_extra_error_info_0_0);
MR_BEGIN_CODE

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
#line 372 "globals.m"
libs__globals__mutable_variable_extra_error_info = MR_new_thread_local_mutable_index();
;}
#line 3808 "libs.globals.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_extra_error_info");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_extra_error_info_0_0
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_extra_error_info_0_0
	X = (MR_Integer) 0;
{
#line 372 "globals.m"
MR_set_thread_local_mutable(MR_Word, X, libs__globals__mutable_variable_extra_error_info);;}
#line 3823 "libs.globals.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__libs__globals__initialise_mutable_extra_error_info_0_0
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module78)
	MR_init_entry1(__Unify___libs__globals__compilation_target_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(libs__globals_module79)
	MR_init_entry1(__Compare___libs__globals__compilation_target_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(libs__globals_module80)
	MR_init_entry1(__Unify___libs__globals__foreign_language_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(libs__globals_module81)
	MR_init_entry1(__Compare___libs__globals__foreign_language_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(libs__globals_module82)
	MR_init_entry1(__Unify___libs__globals__gc_method_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(libs__globals_module83)
	MR_init_entry1(__Compare___libs__globals__gc_method_0_0);
MR_BEGIN_CODE

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
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(libs__globals_module84)
	MR_init_entry1(__Unify___libs__globals__globals_0_0);
	MR_init_label6(__Unify___libs__globals__globals_0_0,4,6,8,10,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__globals__globals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i12);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(12) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(13) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(14) = MR_ctfield(0, MR_tempr2, 4);
	MR_sv(15) = MR_ctfield(0, MR_tempr2, 5);
	MR_sv(16) = MR_ctfield(0, MR_tempr2, 6);
	MR_sv(17) = MR_ctfield(0, MR_tempr2, 7);
	MR_sv(18) = MR_ctfield(0, MR_tempr2, 8);
	MR_sv(19) = MR_ctfield(0, MR_tempr2, 9);
	MR_sv(20) = MR_ctfield(0, MR_tempr2, 10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___libs__globals__globals_0_0_i4);
MR_def_label(__Unify___libs__globals__globals_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(11))) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(12))) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(14))) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(15))) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___libs__trace_params__trace_level_0_0,
		__Unify___libs__globals__globals_0_0_i6);
MR_def_label(__Unify___libs__globals__globals_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_items);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___libs__globals__globals_0_0_i8);
MR_def_label(__Unify___libs__globals__globals_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___libs__globals__globals_0_0_i10);
MR_def_label(__Unify___libs__globals__globals_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	if ((MR_sv(9) != MR_sv(19))) {
		MR_GOTO_LAB(__Unify___libs__globals__globals_0_0_i1);
	}
	MR_r1 = (MR_sv(10) == MR_sv(20));
	MR_decr_sp_and_return(21);
MR_def_label(__Unify___libs__globals__globals_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___libs__globals__globals_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___libs__trace_params__trace_level_0_0);
MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(libs__globals_module85)
	MR_init_entry1(__Compare___libs__globals__globals_0_0);
	MR_init_label8(__Compare___libs__globals__globals_0_0,3,2,5,9,13,17,21,25)
	MR_init_label5(__Compare___libs__globals__globals_0_0,29,33,37,41,93)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__globals__globals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i3);
	}
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
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
	MR_sv(20) = MR_ctfield(0, MR_tempr5, 10);
	MR_sv(19) = MR_ctfield(0, MR_tempr5, 9);
	MR_sv(18) = MR_ctfield(0, MR_tempr5, 8);
	MR_sv(17) = MR_ctfield(0, MR_tempr5, 7);
	MR_sv(16) = MR_ctfield(0, MR_tempr5, 6);
	MR_sv(15) = MR_ctfield(0, MR_tempr5, 5);
	MR_sv(14) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(13) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(12) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(11) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(10) = MR_ctfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt_io, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___libs__globals__globals_0_0_i5);
MR_def_label(__Compare___libs__globals__globals_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i93);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__globals_0_0_i9);
MR_def_label(__Compare___libs__globals__globals_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i93);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__globals_0_0_i13);
MR_def_label(__Compare___libs__globals__globals_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i93);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__globals_0_0_i17);
MR_def_label(__Compare___libs__globals__globals_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i93);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__globals_0_0_i21);
MR_def_label(__Compare___libs__globals__globals_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i93);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__globals_0_0_i25);
MR_def_label(__Compare___libs__globals__globals_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i93);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___libs__trace_params__trace_level_0_0,
		__Compare___libs__globals__globals_0_0_i29);
MR_def_label(__Compare___libs__globals__globals_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__trace_params, trace_suppress_items);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___libs__globals__globals_0_0_i33);
MR_def_label(__Compare___libs__globals__globals_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___libs__globals__globals_0_0_i37);
MR_def_label(__Compare___libs__globals__globals_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i93);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___libs__globals__globals_0_0_i41);
MR_def_label(__Compare___libs__globals__globals_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___libs__globals__globals_0_0_i93);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(20);
	MR_succip_word = MR_sv(21);
	MR_decr_sp(21);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___libs__globals__globals_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(21);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__globals_module86)
	MR_init_entry1(__Unify___libs__globals__may_be_thread_safe_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(libs__globals_module87)
	MR_init_entry1(__Compare___libs__globals__may_be_thread_safe_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(libs__globals_module88)
	MR_init_entry1(__Unify___libs__globals__source_file_map_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(libs__globals_module89)
	MR_init_entry1(__Compare___libs__globals__source_file_map_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(libs__globals_module90)
	MR_init_entry1(__Unify___libs__globals__tags_method_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(libs__globals_module91)
	MR_init_entry1(__Compare___libs__globals__tags_method_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(libs__globals_module92)
	MR_init_entry1(__Unify___libs__globals__termination_norm_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(libs__globals_module93)
	MR_init_entry1(__Compare___libs__globals__termination_norm_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(libs__globals_module94)
	MR_init_entry1(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__398__1_1_0);
	MR_init_label2(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__398__1_1_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__398__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(libs__globals__convert_foreign_language_2_0,
		fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__398__1_1_0_i3);
MR_def_label(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__398__1_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__398__1_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__libs__globals__IntroducedFrom__func__get_backend_foreign_languages__398__1_1_0,2)
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
#line 372 "globals.m"
MR_Unsigned libs__globals__mutable_variable_extra_error_info;

#line 4442 "libs.globals.c"
#line 366 "globals.m"
MR_Unsigned libs__globals__mutable_variable_globals;

#line 4446 "libs.globals.c"

MR_declare_static(mercury__libs__globals__initialise_mutable_extra_error_info_0_0);

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


MR_declare_static(mercury__libs__globals__initialise_mutable_globals_0_0);

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
	MR_setup_callback(MR_ENTRY(mercury__libs__globals__initialise_mutable_globals_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__libs__globals__initialise_mutable_globals_0_0), MR_FALSE);
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
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__globals__init(void);
void mercury__libs__globals__init_type_tables(void);
void mercury__libs__globals__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__globals__write_out_proc_statics(FILE *fp);
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
		mercury_data_libs__globals__type_ctor_info_termination_norm_0,
		libs__globals__termination_norm_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_tags_method_0,
		libs__globals__tags_method_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_source_file_map_0,
		libs__globals__source_file_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_may_be_thread_safe_0,
		libs__globals__may_be_thread_safe_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_globals_0,
		libs__globals__globals_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_gc_method_0,
		libs__globals__gc_method_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_foreign_language_0,
		libs__globals__foreign_language_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__globals__type_ctor_info_compilation_target_0,
		libs__globals__compilation_target_0_0);
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
		&mercury_data_libs__globals__type_ctor_info_termination_norm_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_tags_method_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_source_file_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_may_be_thread_safe_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_globals_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_gc_method_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_foreign_language_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__globals__type_ctor_info_compilation_target_0);
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

void mercury__libs__globals__write_out_proc_statics(FILE *fp)
{
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
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
