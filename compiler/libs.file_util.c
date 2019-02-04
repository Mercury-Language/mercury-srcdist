/*
** Automatically generated from `file_util.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
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
INIT mercury__libs__file_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "libs.file_util.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "libs.file_util.c"
#line 43 "../library/time.int"
#include "time.mh"

#line 35 "libs.file_util.c"
#line 56 "../library/dir.int"
#include "dir.mh"

#line 39 "libs.file_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "libs.file_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "libs.file_util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 51 "libs.file_util.c"
#line 52 "libs.file_util.c"
#include "libs.file_util.mh"

#line 55 "libs.file_util.c"
#line 56 "libs.file_util.c"
#ifndef LIBS__FILE_UTIL_DECL_GUARD
#define LIBS__FILE_UTIL_DECL_GUARD

#line 60 "libs.file_util.c"
#line 61 "libs.file_util.c"

#endif
#line 64 "libs.file_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_libs__file_util__type_ctor_info_dir_name_0,
	mercury_data_libs__file_util__type_ctor_info_file_name_0,
	mercury_data_libs__file_util__type_ctor_info_maybe_open_file_0,
	mercury_data_libs__file_util__type_ctor_info_open_file_pred_1;
MR_decl_label1(libs__file_util__IntroducedFrom__pred__output_to_file__222__1_4_0, 2)
MR_decl_label4(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0, 16,3,4,6)
MR_decl_label8(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0, 2,3,5,6,7,8,9,4)
MR_decl_label8(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0, 10,13,17,18,12,19,20,21)
MR_decl_label3(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0, 22,23,24)
MR_decl_label5(libs__file_util__check_file_mod_time_5_0, 3,2,4,5,10)
MR_decl_label8(libs__file_util__check_file_return_dir_6_0, 3,2,4,5,10,11,16,15)
MR_decl_label2(libs__file_util__check_file_return_dir_6_0, 18,12)
MR_decl_label4(libs__file_util__do_search_for_file__ho2_6_0, 16,3,4,6)
MR_decl_label8(libs__file_util__get_install_name_option_4_0, 2,3,4,7,8,9,10,11)
MR_decl_label3(libs__file_util__get_install_name_option_4_0, 5,14,15)
MR_decl_label1(libs__file_util__maybe_flush_output_3_0, 12)
MR_decl_label1(libs__file_util__maybe_report_stats_3_0, 12)
MR_decl_label1(libs__file_util__maybe_write_string_4_0, 12)
MR_decl_label8(libs__file_util__output_to_file_return_result_5_0, 2,3,5,6,7,8,9,4)
MR_decl_label8(libs__file_util__output_to_file_return_result_5_0, 10,13,17,18,12,19,20,21)
MR_decl_label3(libs__file_util__output_to_file_return_result_5_0, 22,23,24)
MR_decl_label3(libs__file_util__report_error_3_0, 2,3,4)
MR_decl_label5(libs__file_util__report_error_to_stream_4_0, 2,3,4,5,6)
MR_decl_label5(libs__file_util__search_for_file_6_0, 2,6,5,8,3)
MR_decl_label6(libs__file_util__search_for_file_mod_time_5_0, 2,5,6,7,8,4)
MR_decl_label6(libs__file_util__search_for_file_returning_dir_6_0, 2,5,6,7,8,4)
MR_def_extern_entry(libs__file_util__search_for_file_returning_dir_6_0)
MR_def_extern_entry(libs__file_util__search_for_file_6_0)
MR_def_extern_entry(libs__file_util__search_for_file_mod_time_5_0)
MR_def_extern_entry(libs__file_util__maybe_report_stats_3_0)
MR_def_extern_entry(libs__file_util__maybe_write_string_4_0)
MR_def_extern_entry(libs__file_util__maybe_flush_output_3_0)
MR_def_extern_entry(libs__file_util__report_error_3_0)
MR_def_extern_entry(libs__file_util__output_to_file_return_result_5_0)
MR_def_extern_entry(libs__file_util__output_to_file_4_0)
MR_def_extern_entry(libs__file_util__get_install_name_option_4_0)
MR_def_extern_entry(libs__file_util__report_error_to_stream_4_0)
MR_decl_static(libs__file_util__check_file_return_dir_6_0)
MR_decl_static(libs__file_util__check_file_mod_time_5_0)
MR_def_extern_entry(__Unify___libs__file_util__dir_name_0_0)
MR_def_extern_entry(__Compare___libs__file_util__dir_name_0_0)
MR_def_extern_entry(__Unify___libs__file_util__file_name_0_0)
MR_def_extern_entry(__Compare___libs__file_util__file_name_0_0)
MR_def_extern_entry(__Unify___libs__file_util__maybe_open_file_0_0)
MR_def_extern_entry(__Compare___libs__file_util__maybe_open_file_0_0)
MR_def_extern_entry(__Unify___libs__file_util__open_file_pred_1_0)
MR_def_extern_entry(__Compare___libs__file_util__open_file_pred_1_0)
MR_decl_static(libs__file_util__IntroducedFrom__pred__output_to_file__222__1_4_0)
MR_decl_static(libs__file_util__do_search_for_file__ho2_6_0)
MR_decl_static(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0)
MR_decl_static(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const("\' for output.", 13),
MR_tbmkword(0, 0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_TypeCtorInfo_Struct mercury_data_libs__file_util__type_ctor_info_dir_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__file_util__dir_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__file_util__dir_name_0_0)),
	"libs.file_util",
	"dir_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_libs__file_util__type_ctor_info_file_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__file_util__file_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__file_util__file_name_0_0)),
	"libs.file_util",
	"file_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_libs__file_util__enum_functor_desc_maybe_open_file_0_0 = {
	"open_file",
	0
};

static const MR_EnumFunctorDesc mercury_data_libs__file_util__enum_functor_desc_maybe_open_file_0_1 = {
	"do_not_open_file",
	1
};

const MR_EnumFunctorDescPtr mercury_data_libs__file_util__enum_value_ordered_maybe_open_file_0[] = {
	&mercury_data_libs__file_util__enum_functor_desc_maybe_open_file_0_0,
	&mercury_data_libs__file_util__enum_functor_desc_maybe_open_file_0_1
};

const MR_EnumFunctorDescPtr mercury_data_libs__file_util__enum_name_ordered_maybe_open_file_0[] = {
	&mercury_data_libs__file_util__enum_functor_desc_maybe_open_file_0_1,
	&mercury_data_libs__file_util__enum_functor_desc_maybe_open_file_0_0
};

const MR_Integer mercury_data_libs__file_util__functor_number_map_maybe_open_file_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_libs__file_util__type_ctor_info_maybe_open_file_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__file_util__maybe_open_file_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__file_util__maybe_open_file_0_0)),
	"libs.file_util",
	"maybe_open_file",
	{ (void *)mercury_data_libs__file_util__enum_name_ordered_maybe_open_file_0 },
	{ (void *)mercury_data_libs__file_util__enum_value_ordered_maybe_open_file_0 },
	2,
	4,
	mercury_data_libs__file_util__functor_number_map_maybe_open_file_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_error_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_maybe__pti_maybe_error_1__pseudo_1 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct3 mercury_data___vpti_pred_3__pseudo_maybe__pti_maybe_error_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	3,
{	(MR_PseudoTypeInfo) &mercury_data_maybe__pti_maybe_error_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_PseudoTypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_libs__file_util__type_ctor_info_open_file_pred_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___libs__file_util__open_file_pred_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___libs__file_util__open_file_pred_1_0)),
	"libs.file_util",
	"open_file_pred",
	{ 0 },
	{ (void *)&mercury_data___vpti_pred_3__pseudo_maybe__pti_maybe_error_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};

MR_decl_entry(fn__string__join_list_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(libs__file_util_module0)
	MR_init_entry1(libs__file_util__search_for_file_returning_dir_6_0);
	MR_init_label6(libs__file_util__search_for_file_returning_dir_6_0,2,5,6,7,8,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'search_for_file_returning_dir'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__file_util__search_for_file_returning_dir_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0,
		libs__file_util__search_for_file_returning_dir_6_0_i2);
MR_def_label(libs__file_util__search_for_file_returning_dir_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__file_util__search_for_file_returning_dir_6_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		libs__file_util__search_for_file_returning_dir_6_0_i5);
MR_def_label(libs__file_util__search_for_file_returning_dir_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' in directories ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__file_util__search_for_file_returning_dir_6_0_i6);
MR_def_label(libs__file_util__search_for_file_returning_dir_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__file_util__search_for_file_returning_dir_6_0_i7);
MR_def_label(libs__file_util__search_for_file_returning_dir_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot find \140", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__file_util__search_for_file_returning_dir_6_0_i8);
MR_def_label(libs__file_util__search_for_file_returning_dir_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(libs__file_util__search_for_file_returning_dir_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(dir__this_directory_1_0);
MR_decl_entry(fn__dir__make_path_name_2_0);

MR_BEGIN_MODULE(libs__file_util_module1)
	MR_init_entry1(libs__file_util__search_for_file_6_0);
	MR_init_label5(libs__file_util__search_for_file_6_0,2,6,5,8,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'search_for_file'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__file_util__search_for_file_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(libs__file_util__search_for_file_returning_dir_6_0,
		libs__file_util__search_for_file_6_0_i2);
MR_def_label(libs__file_util__search_for_file_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(libs__file_util__search_for_file_6_0_i3);
	}
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(dir__this_directory_1_0,
		libs__file_util__search_for_file_6_0_i6);
MR_def_label(libs__file_util__search_for_file_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(libs__file_util__search_for_file_6_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(libs__file_util__search_for_file_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__dir__make_path_name_2_0,
		libs__file_util__search_for_file_6_0_i8);
MR_def_label(libs__file_util__search_for_file_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	}
MR_def_label(libs__file_util__search_for_file_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__file_util_module2)
	MR_init_entry1(libs__file_util__search_for_file_mod_time_5_0);
	MR_init_label6(libs__file_util__search_for_file_mod_time_5_0,2,5,6,7,8,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'search_for_file_mod_time'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__file_util__search_for_file_mod_time_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(libs__file_util__do_search_for_file__ho2_6_0,
		libs__file_util__search_for_file_mod_time_5_0_i2);
MR_def_label(libs__file_util__search_for_file_mod_time_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__file_util__search_for_file_mod_time_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__string__join_list_2_0,
		libs__file_util__search_for_file_mod_time_5_0_i5);
MR_def_label(libs__file_util__search_for_file_mod_time_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' in directories ", 17);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__file_util__search_for_file_mod_time_5_0_i6);
MR_def_label(libs__file_util__search_for_file_mod_time_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__file_util__search_for_file_mod_time_5_0_i7);
MR_def_label(libs__file_util__search_for_file_mod_time_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("cannot find \140", 13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		libs__file_util__search_for_file_mod_time_5_0_i8);
MR_def_label(libs__file_util__search_for_file_mod_time_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(libs__file_util__search_for_file_mod_time_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__report_stats_2_0);

MR_BEGIN_MODULE(libs__file_util_module3)
	MR_init_entry1(libs__file_util__maybe_report_stats_3_0);
	MR_init_label1(libs__file_util__maybe_report_stats_3_0,12)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'maybe_report_stats'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__file_util__maybe_report_stats_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(libs__file_util__maybe_report_stats_3_0_i12);
	}
	MR_np_tailcall_ent(io__report_stats_2_0);
MR_def_label(libs__file_util__maybe_report_stats_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(libs__file_util_module4)
	MR_init_entry1(libs__file_util__maybe_write_string_4_0);
	MR_init_label1(libs__file_util__maybe_write_string_4_0,12)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'maybe_write_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__file_util__maybe_write_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(libs__file_util__maybe_write_string_4_0_i12);
	}
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(libs__file_util__maybe_write_string_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__flush_output_2_0);

MR_BEGIN_MODULE(libs__file_util_module5)
	MR_init_entry1(libs__file_util__maybe_flush_output_3_0);
	MR_init_label1(libs__file_util__maybe_flush_output_3_0,12)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'maybe_flush_output'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__file_util__maybe_flush_output_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(libs__file_util__maybe_flush_output_3_0_i12);
	}
	MR_np_tailcall_ent(io__flush_output_2_0);
MR_def_label(libs__file_util__maybe_flush_output_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(libs__file_util_module6)
	MR_init_entry1(libs__file_util__report_error_3_0);
	MR_init_label3(libs__file_util__report_error_3_0,2,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'report_error'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__file_util__report_error_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error: ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__file_util__report_error_3_0_i2);
MR_def_label(libs__file_util__report_error_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__file_util__report_error_3_0_i3);
MR_def_label(libs__file_util__report_error_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__file_util__report_error_3_0_i4);
MR_def_label(libs__file_util__report_error_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(io__open_output_4_0);
MR_decl_entry(string__append_list_2_0);
MR_decl_entry(io__set_output_stream_4_0);
MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(io__close_output_3_0);

MR_BEGIN_MODULE(libs__file_util_module7)
	MR_init_entry1(libs__file_util__output_to_file_return_result_5_0);
	MR_init_label8(libs__file_util__output_to_file_return_result_5_0,2,3,5,6,7,8,9,4)
	MR_init_label8(libs__file_util__output_to_file_return_result_5_0,10,13,17,18,12,19,20,21)
	MR_init_label3(libs__file_util__output_to_file_return_result_5_0,22,23,24)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'output_to_file_return_result'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__file_util__output_to_file_return_result_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Integer) 39;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__file_util__output_to_file_return_result_5_0_i2);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 47;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		libs__file_util__output_to_file_return_result_5_0_i3);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(libs__file_util__output_to_file_return_result_5_0_i5);
	}
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(libs__file_util__output_to_file_return_result_5_0_i4);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Writing to file \140", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__file_util__output_to_file_return_result_5_0_i6);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__file_util__output_to_file_return_result_5_0_i7);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'...\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__file_util__output_to_file_return_result_5_0_i8);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		libs__file_util__output_to_file_return_result_5_0_i9);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__open_output_4_0,
		libs__file_util__output_to_file_return_result_5_0_i10);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(libs__file_util__output_to_file_return_result_5_0_i12);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		libs__file_util__output_to_file_return_result_5_0_i13);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("can\'t open file \140", 17);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		libs__file_util__output_to_file_return_result_5_0_i17);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__file_util__report_error_3_0,
		libs__file_util__output_to_file_return_result_5_0_i18);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		libs__file_util__output_to_file_return_result_5_0_i19);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__file_util__output_to_file_return_result_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__libs__file_util__output_to_file_return_result_5_0_i20);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		libs__file_util__output_to_file_return_result_5_0_i21);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__close_output_3_0,
		libs__file_util__output_to_file_return_result_5_0_i22);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		libs__file_util__output_to_file_return_result_5_0_i23);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		libs__file_util__output_to_file_return_result_5_0_i24);
MR_def_label(libs__file_util__output_to_file_return_result_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__file_util_module8)
	MR_init_entry1(libs__file_util__output_to_file_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'output_to_file'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__file_util__output_to_file_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_get_globals_3_0);
MR_decl_entry(libs__globals__lookup_string_option_3_0);
MR_decl_entry(libs__handle_options__grade_directory_component_2_0);
MR_decl_entry(fn__f_100_105_114_95_95_47_2_0);
MR_decl_entry(fn__libs__options__quote_arg_1_0);

MR_BEGIN_MODULE(libs__file_util_module9)
	MR_init_entry1(libs__file_util__get_install_name_option_4_0);
	MR_init_label8(libs__file_util__get_install_name_option_4_0,2,3,4,7,8,9,10,11)
	MR_init_label3(libs__file_util__get_install_name_option_4_0,5,14,15)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_install_name_option'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__file_util__get_install_name_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		libs__file_util__get_install_name_option_4_0_i2);
MR_def_label(libs__file_util__get_install_name_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r2 = (MR_Integer) 564;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__file_util__get_install_name_option_4_0_i3);
MR_def_label(libs__file_util__get_install_name_option_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 565;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__file_util__get_install_name_option_4_0_i4);
MR_def_label(libs__file_util__get_install_name_option_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(libs__file_util__get_install_name_option_4_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 575;
	MR_np_call_localret_ent(libs__globals__lookup_string_option_3_0,
		libs__file_util__get_install_name_option_4_0_i7);
MR_def_label(libs__file_util__get_install_name_option_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__handle_options__grade_directory_component_2_0,
		libs__file_util__get_install_name_option_4_0_i8);
MR_def_label(libs__file_util__get_install_name_option_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	}
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__file_util__get_install_name_option_4_0_i9);
MR_def_label(libs__file_util__get_install_name_option_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mercury", 7);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__file_util__get_install_name_option_4_0_i10);
MR_def_label(libs__file_util__get_install_name_option_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("lib", 3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__file_util__get_install_name_option_4_0_i11);
MR_def_label(libs__file_util__get_install_name_option_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__file_util__get_install_name_option_4_0_i5);
MR_def_label(libs__file_util__get_install_name_option_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		libs__file_util__get_install_name_option_4_0_i14);
MR_def_label(libs__file_util__get_install_name_option_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__libs__options__quote_arg_1_0,
		libs__file_util__get_install_name_option_4_0_i15);
MR_def_label(libs__file_util__get_install_name_option_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__file_util_module10)
	MR_init_entry1(libs__file_util__report_error_to_stream_4_0);
	MR_init_label5(libs__file_util__report_error_to_stream_4_0,2,3,4,5,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'report_error_to_stream'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__libs__file_util__report_error_to_stream_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		libs__file_util__report_error_to_stream_4_0_i2);
MR_def_label(libs__file_util__report_error_to_stream_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error: ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__file_util__report_error_to_stream_4_0_i3);
MR_def_label(libs__file_util__report_error_to_stream_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__file_util__report_error_to_stream_4_0_i4);
MR_def_label(libs__file_util__report_error_to_stream_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		libs__file_util__report_error_to_stream_4_0_i5);
MR_def_label(libs__file_util__report_error_to_stream_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		libs__file_util__report_error_to_stream_4_0_i6);
MR_def_label(libs__file_util__report_error_to_stream_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__set_output_stream_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__open_input_4_0);
MR_decl_entry(fn__dir__directory_separator_0_0);
MR_decl_entry(fn__string__from_char_1_0);
MR_decl_entry(fn__string__append_list_1_0);
MR_decl_entry(io__close_input_3_0);
MR_decl_entry(io__set_input_stream_4_0);

MR_BEGIN_MODULE(libs__file_util_module11)
	MR_init_entry1(libs__file_util__check_file_return_dir_6_0);
	MR_init_label8(libs__file_util__check_file_return_dir_6_0,3,2,4,5,10,11,16,15)
	MR_init_label2(libs__file_util__check_file_return_dir_6_0,18,12)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'check_file_return_dir'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__file_util__check_file_return_dir_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(dir__this_directory_1_0,
		libs__file_util__check_file_return_dir_6_0_i3);
MR_def_label(libs__file_util__check_file_return_dir_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(libs__file_util__check_file_return_dir_6_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__open_input_4_0,
		libs__file_util__check_file_return_dir_6_0_i11);
MR_def_label(libs__file_util__check_file_return_dir_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__directory_separator_0_0,
		libs__file_util__check_file_return_dir_6_0_i4);
MR_def_label(libs__file_util__check_file_return_dir_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_char_1_0,
		libs__file_util__check_file_return_dir_6_0_i5);
MR_def_label(libs__file_util__check_file_return_dir_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		libs__file_util__check_file_return_dir_6_0_i10);
MR_def_label(libs__file_util__check_file_return_dir_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__open_input_4_0,
		libs__file_util__check_file_return_dir_6_0_i11);
MR_def_label(libs__file_util__check_file_return_dir_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(libs__file_util__check_file_return_dir_6_0_i12);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(libs__file_util__check_file_return_dir_6_0_i15);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(io__close_input_3_0,
		libs__file_util__check_file_return_dir_6_0_i16);
MR_def_label(libs__file_util__check_file_return_dir_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(libs__file_util__check_file_return_dir_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		libs__file_util__check_file_return_dir_6_0_i18);
MR_def_label(libs__file_util__check_file_return_dir_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
MR_def_label(libs__file_util__check_file_return_dir_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__file_modification_time_4_0);

MR_BEGIN_MODULE(libs__file_util_module12)
	MR_init_entry1(libs__file_util__check_file_mod_time_5_0);
	MR_init_label5(libs__file_util__check_file_mod_time_5_0,3,2,4,5,10)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'check_file_mod_time'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__file_util__check_file_mod_time_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(dir__this_directory_1_0,
		libs__file_util__check_file_mod_time_5_0_i3);
MR_def_label(libs__file_util__check_file_mod_time_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_r1) != 0)) {
		MR_GOTO_LAB(libs__file_util__check_file_mod_time_5_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__file_modification_time_4_0);
MR_def_label(libs__file_util__check_file_mod_time_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__dir__directory_separator_0_0,
		libs__file_util__check_file_mod_time_5_0_i4);
MR_def_label(libs__file_util__check_file_mod_time_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__string__from_char_1_0,
		libs__file_util__check_file_mod_time_5_0_i5);
MR_def_label(libs__file_util__check_file_mod_time_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__string__append_list_1_0,
		libs__file_util__check_file_mod_time_5_0_i10);
MR_def_label(libs__file_util__check_file_mod_time_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__file_modification_time_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__file_util_module13)
	MR_init_entry1(__Unify___libs__file_util__dir_name_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__file_util__dir_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(libs__file_util_module14)
	MR_init_entry1(__Compare___libs__file_util__dir_name_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__file_util__dir_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__file_util_module15)
	MR_init_entry1(__Unify___libs__file_util__file_name_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__file_util__file_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__file_util_module16)
	MR_init_entry1(__Compare___libs__file_util__file_name_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__file_util__file_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__file_util_module17)
	MR_init_entry1(__Unify___libs__file_util__maybe_open_file_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__file_util__maybe_open_file_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(libs__file_util_module18)
	MR_init_entry1(__Compare___libs__file_util__maybe_open_file_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__file_util__maybe_open_file_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(libs__file_util_module19)
	MR_init_entry1(__Unify___libs__file_util__open_file_pred_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___libs__file_util__open_file_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(libs__file_util_module20)
	MR_init_entry1(__Compare___libs__file_util__open_file_pred_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___libs__file_util__open_file_pred_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__file_util_module21)
	MR_init_entry1(libs__file_util__IntroducedFrom__pred__output_to_file__222__1_4_0);
	MR_init_label1(libs__file_util__IntroducedFrom__pred__output_to_file__222__1_4_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_to_file__222__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__file_util__IntroducedFrom__pred__output_to_file__222__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(libs__file_util__IntroducedFrom__pred__output_to_file__222__1_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__libs__file_util__IntroducedFrom__pred__output_to_file__222__1_4_0_i2);
MR_def_label(libs__file_util__IntroducedFrom__pred__output_to_file__222__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__file_util_module22)
	MR_init_entry1(libs__file_util__do_search_for_file__ho2_6_0);
	MR_init_label4(libs__file_util__do_search_for_file__ho2_6_0,16,3,4,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'do_search_for_file__ho2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(libs__file_util__do_search_for_file__ho2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(libs__file_util__do_search_for_file__ho2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(libs__file_util__do_search_for_file__ho2_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(libs__file_util__do_search_for_file__ho2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(libs__file_util__check_file_mod_time_5_0,
		libs__file_util__do_search_for_file__ho2_6_0_i4);
MR_def_label(libs__file_util__do_search_for_file__ho2_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(libs__file_util__do_search_for_file__ho2_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(libs__file_util__do_search_for_file__ho2_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(libs__file_util__do_search_for_file__ho2_6_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__file_util_module23)
	MR_init_entry1(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0);
	MR_init_label8(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,2,3,5,6,7,8,9,4)
	MR_init_label8(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,10,13,17,18,12,19,20,21)
	MR_init_label3(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,22,23,24)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__output_to_file_return_result__ho1__[3]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 39;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i2);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 47;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i3);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i5);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_GOTO_LAB(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i4);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Writing to file \140", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i6);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i7);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'...\n", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i8);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__flush_output_2_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i9);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__open_output_4_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i10);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i12);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i13);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("can\'t open file \140", 17);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i17);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__file_util__report_error_3_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i18);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i19);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__file_util__IntroducedFrom__pred__output_to_file__222__1_4_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i20);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i21);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__close_output_3_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i22);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("% done.\n", 8);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i23);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0_i24);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_116_111_95_102_105_108_101_95_114_101_116_117_114_110_95_114_101_115_117_108_116_95_95_104_111_49_95_95_91_51_93_95_48_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(libs__file_util_module24)
	MR_init_entry1(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0);
	MR_init_label4(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0,16,3,4,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__do_search_for_file__ho3__[2]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r2, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(libs__file_util__check_file_return_dir_6_0,
		f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0_i4);
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(f_108_105_98_115_95_95_102_105_108_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_51_95_95_91_50_93_95_48_6_0_i16);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__libs__file_util_maybe_bunch_0(void)
{
	libs__file_util_module0();
	libs__file_util_module1();
	libs__file_util_module2();
	libs__file_util_module3();
	libs__file_util_module4();
	libs__file_util_module5();
	libs__file_util_module6();
	libs__file_util_module7();
	libs__file_util_module8();
	libs__file_util_module9();
	libs__file_util_module10();
	libs__file_util_module11();
	libs__file_util_module12();
	libs__file_util_module13();
	libs__file_util_module14();
	libs__file_util_module15();
	libs__file_util_module16();
	libs__file_util_module17();
	libs__file_util_module18();
	libs__file_util_module19();
	libs__file_util_module20();
	libs__file_util_module21();
	libs__file_util_module22();
	libs__file_util_module23();
	libs__file_util_module24();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__libs__file_util__init(void);
void mercury__libs__file_util__init_type_tables(void);
void mercury__libs__file_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__libs__file_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__libs__file_util__init_complexity_procs(void);
#endif

void mercury__libs__file_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__libs__file_util_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__file_util__type_ctor_info_dir_name_0,
		libs__file_util__dir_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__file_util__type_ctor_info_file_name_0,
		libs__file_util__file_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__file_util__type_ctor_info_maybe_open_file_0,
		libs__file_util__maybe_open_file_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_libs__file_util__type_ctor_info_open_file_pred_1,
		libs__file_util__open_file_pred_1_0);
	mercury__libs__file_util__init_debugger();
}

void mercury__libs__file_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__file_util__type_ctor_info_dir_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__file_util__type_ctor_info_file_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__file_util__type_ctor_info_maybe_open_file_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_libs__file_util__type_ctor_info_open_file_pred_1);
	}
}


void mercury__libs__file_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__libs__file_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__libs__file_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__libs__file_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
