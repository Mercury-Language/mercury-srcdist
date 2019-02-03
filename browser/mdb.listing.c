/*
** Automatically generated from `listing.m'
** by the Mercury compiler,
** version 11.07.1, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__listing__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.listing.c"
#include "mdb.listing.mh"

#line 28 "mdb.listing.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.listing.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "mdb.listing.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 40 "mdb.listing.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 44 "mdb.listing.c"
#line 58 "../library/dir.int"
#include "dir.mh"

#line 48 "mdb.listing.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 52 "mdb.listing.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 56 "mdb.listing.c"
#line 57 "mdb.listing.c"
#ifndef MDB__LISTING_DECL_GUARD
#define MDB__LISTING_DECL_GUARD

#line 61 "mdb.listing.c"
#line 62 "mdb.listing.c"

#endif
#line 65 "mdb.listing.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__listing__type_ctor_info_c_file_ptr_0,
	mercury_data_mdb__listing__type_ctor_info_file_name_0,
	mercury_data_mdb__listing__type_ctor_info_line_no_0,
	mercury_data_mdb__listing__type_ctor_info_path_name_0,
	mercury_data_mdb__listing__type_ctor_info_search_path_0;
MR_decl_label5(mdb__listing__find_and_open_file_5_0, 23,3,4,5,7)
MR_decl_label9(mdb__listing__list_file_9_0, 4,6,9,2,11,12,13,16,15)
MR_decl_label10(mdb__listing__list_file_portable_9_0, 4,6,9,10,11,12,8,2,17,18)
MR_decl_label7(mdb__listing__list_file_portable_9_0, 19,22,25,26,24,21,30)
MR_decl_label1(mdb__listing__pop_list_path_2_0, 3)
MR_decl_label10(mdb__listing__print_lines_in_range_m_8_0, 39,2,6,7,8,5,11,13,15,10)
MR_decl_label1(mdb__listing__print_lines_in_range_m_8_0, 43)
MR_decl_label1(fn__mdb__listing__listing_type_0_0, 3)
MR_def_extern_entry(fn__mdb__listing__new_list_path_0_0)
MR_def_extern_entry(fn__mdb__listing__get_list_path_1_0)
MR_def_extern_entry(mdb__listing__set_list_path_3_0)
MR_def_extern_entry(mdb__listing__clear_list_path_2_0)
MR_def_extern_entry(mdb__listing__push_list_path_3_0)
MR_def_extern_entry(mdb__listing__pop_list_path_2_0)
MR_decl_static(mdb__listing__write_to_c_file_4_0)
MR_decl_static(mdb__listing__find_and_open_file_5_0)
MR_decl_static(fn__mdb__listing__mercury_stream_to_c_FILE_star_1_0)
MR_decl_static(mdb__listing__print_lines_in_range_c_8_0)
MR_def_extern_entry(mdb__listing__list_file_9_0)
MR_decl_static(mdb__listing__print_lines_in_range_m_8_0)
MR_def_extern_entry(mdb__listing__list_file_portable_9_0)
MR_decl_static(fn__mdb__listing__listing_type_0_0)
MR_def_extern_entry(__Unify___mdb__listing__c_file_ptr_0_0)
MR_def_extern_entry(__Compare___mdb__listing__c_file_ptr_0_0)
MR_def_extern_entry(__Unify___mdb__listing__file_name_0_0)
MR_def_extern_entry(__Compare___mdb__listing__file_name_0_0)
MR_def_extern_entry(__Unify___mdb__listing__line_no_0_0)
MR_def_extern_entry(__Compare___mdb__listing__line_no_0_0)
MR_def_extern_entry(__Unify___mdb__listing__path_name_0_0)
MR_def_extern_entry(__Compare___mdb__listing__path_name_0_0)
MR_def_extern_entry(__Unify___mdb__listing__search_path_0_0)
MR_def_extern_entry(__Compare___mdb__listing__search_path_0_0)
MR_def_extern_entry(f_109_100_98_95_95_108_105_115_116_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_108_105_115_116_95_112_97_116_104_95_95_91_50_93_95_48_3_0)
MR_def_extern_entry(f_109_100_98_95_95_108_105_115_116_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_114_95_108_105_115_116_95_112_97_116_104_95_95_91_49_93_95_48_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__listing__type_ctor_info_c_file_ptr_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__listing__c_file_ptr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__listing__c_file_ptr_0_0)),
	"mdb.listing",
	"c_file_ptr",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_TypeCtorInfo_Struct mercury_data_mdb__listing__type_ctor_info_file_name_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__listing__file_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__listing__file_name_0_0)),
	"mdb.listing",
	"file_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_mdb__listing__type_ctor_info_line_no_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__listing__line_no_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__listing__line_no_0_0)),
	"mdb.listing",
	"line_no",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__listing__type_ctor_info_path_name_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__listing__path_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__listing__path_name_0_0)),
	"mdb.listing",
	"path_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdb__listing__type_ctor_info_search_path_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__listing__search_path_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__listing__search_path_0_0)),
	"mdb.listing",
	"search_path",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(mdb__listing_module0)
	MR_init_entry1(fn__mdb__listing__new_list_path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__listing__new_list_path_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new_list_path'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__listing__new_list_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module1)
	MR_init_entry1(fn__mdb__listing__get_list_path_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__listing__get_list_path_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_list_path'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__listing__get_list_path_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module2)
	MR_init_entry1(mdb__listing__set_list_path_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__listing__set_list_path_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_list_path'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__listing__set_list_path_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_98_95_95_108_105_115_116_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_108_105_115_116_95_112_97_116_104_95_95_91_50_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module3)
	MR_init_entry1(mdb__listing__clear_list_path_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__listing__clear_list_path_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'clear_list_path'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__listing__clear_list_path_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_100_98_95_95_108_105_115_116_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_114_95_108_105_115_116_95_112_97_116_104_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module4)
	MR_init_entry1(mdb__listing__push_list_path_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__listing__push_list_path_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'push_list_path'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__listing__push_list_path_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module5)
	MR_init_entry1(mdb__listing__pop_list_path_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__listing__pop_list_path_2_0);
	MR_init_label1(mdb__listing__pop_list_path_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pop_list_path'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__listing__pop_list_path_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__listing__pop_list_path_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(mdb__listing__pop_list_path_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module6)
	MR_init_entry1(mdb__listing__write_to_c_file_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__listing__write_to_c_file_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_to_c_file'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__listing__write_to_c_file_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	FILE *	ErrStrm;
	MR_String	Str;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__listing__write_to_c_file_4_0
	ErrStrm = (FILE *) MR_r1;
	Str = (MR_String) MR_r2;
{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);
    IO = IO0;
;}
#line 393 "mdb.listing.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_100_105_114_95_95_47_2_0);
MR_decl_entry(io__open_input_4_0);

MR_BEGIN_MODULE(mdb__listing_module7)
	MR_init_entry1(mdb__listing__find_and_open_file_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__listing__find_and_open_file_5_0);
	MR_init_label5(mdb__listing__find_and_open_file_5_0,23,3,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_and_open_file'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__listing__find_and_open_file_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mdb__listing__find_and_open_file_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__listing__find_and_open_file_5_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(mdb__listing__find_and_open_file_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		mdb__listing__find_and_open_file_5_0_i4);
MR_def_label(mdb__listing__find_and_open_file_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__open_input_4_0,
		mdb__listing__find_and_open_file_5_0_i5);
MR_def_label(mdb__listing__find_and_open_file_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdb__listing__find_and_open_file_5_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(mdb__listing__find_and_open_file_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__listing__find_and_open_file_5_0_i23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module8)
	MR_init_entry1(fn__mdb__listing__mercury_stream_to_c_FILE_star_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__listing__mercury_stream_to_c_FILE_star_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_stream_to_c_FILE_star'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__listing__mercury_stream_to_c_FILE_star_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	InStream;
	FILE *	InStrm;
#define	MR_PROC_LABEL	mercury__fn__mdb__listing__mercury_stream_to_c_FILE_star_1_0
	InStream = MR_r1;
{
#line 262 "listing.m"

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));
;}
#line 488 "mdb.listing.c"
	MR_r1 = (MR_Word) InStrm;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module9)
	MR_init_entry1(mdb__listing__print_lines_in_range_c_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__listing__print_lines_in_range_c_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_lines_in_range_c'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__listing__print_lines_in_range_c_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	FILE *	InStrm;
	FILE *	OutStrm;
	MR_Integer	ThisLine;
	MR_Integer	FirstLine;
	MR_Integer	LastLine;
	MR_Integer	MarkLine;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__listing__print_lines_in_range_c_8_0
	InStrm = (FILE *) MR_r1;
	OutStrm = (FILE *) MR_r2;
	ThisLine = MR_r3;
	FirstLine = MR_r4;
	LastLine = MR_r5;
	MarkLine = MR_r6;
{
#line 284 "listing.m"

    if (FirstLine <= ThisLine && ThisLine <= LastLine) {
        const char *s = (ThisLine == MarkLine) ? "> " : "  ";
        fputs(s, (FILE *)OutStrm);
    }
    while(ThisLine <= LastLine) {
        int c = fgetc((FILE *)InStrm);
        if (c == EOF) {
            fputc('\n', (FILE *)OutStrm);
            break;
        }
        if (FirstLine <= ThisLine) {
            fputc(c, (FILE *)OutStrm);
        }
        if (c == '\n') {
            ThisLine++;
            if (FirstLine <= ThisLine && ThisLine <= LastLine)  {
                const char *s = (ThisLine == MarkLine) ? "> " : "  ";
                fputs(s, (FILE *)OutStrm);
            }
        }
    }
    IO = IO0;
;}
#line 555 "mdb.listing.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(dir__path_name_is_absolute_1_0);
MR_decl_entry(fn__io__error_message_1_0);
MR_decl_entry(fn__dir__this_directory_0_0);
MR_decl_entry(io__close_input_3_0);

MR_BEGIN_MODULE(mdb__listing_module10)
	MR_init_entry1(mdb__listing__list_file_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__listing__list_file_9_0);
	MR_init_label9(mdb__listing__list_file_9_0,4,6,9,2,11,12,13,16,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_file'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__listing__list_file_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__path_name_is_absolute_1_0,
		mdb__listing__list_file_9_0_i4);
MR_def_label(mdb__listing__list_file_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__listing__list_file_9_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__open_input_4_0,
		mdb__listing__list_file_9_0_i6);
MR_def_label(mdb__listing__list_file_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__listing__list_file_9_0_i15);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		mdb__listing__list_file_9_0_i9);
MR_def_label(mdb__listing__list_file_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	FILE *	ErrStrm;
	MR_String	Str;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__listing__list_file_9_0
	ErrStrm = (FILE *) MR_sv(2);
	Str = (MR_String) (MR_Word) MR_string_const("mdb: cannot open file ", 22);
{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);
    IO = IO0;
;}
#line 632 "mdb.listing.c"
#undef	MR_PROC_LABEL
	}
	{
	FILE *	ErrStrm;
	MR_String	Str;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__listing__list_file_9_0
	ErrStrm = (FILE *) MR_sv(2);
	Str = (MR_String) MR_sv(3);
{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);
    IO = IO0;
;}
#line 649 "mdb.listing.c"
#undef	MR_PROC_LABEL
	}
	{
	FILE *	ErrStrm;
	MR_String	Str;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__listing__list_file_9_0
	ErrStrm = (FILE *) MR_sv(2);
	Str = (MR_String) (MR_Word) MR_string_const(": ", 2);
{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);
    IO = IO0;
;}
#line 666 "mdb.listing.c"
#undef	MR_PROC_LABEL
	}
	{
	FILE *	ErrStrm;
	MR_String	Str;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__listing__list_file_9_0
	ErrStrm = (FILE *) MR_sv(2);
	Str = (MR_String) MR_r1;
{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);
    IO = IO0;
;}
#line 683 "mdb.listing.c"
#undef	MR_PROC_LABEL
	}
	{
	FILE *	ErrStrm;
	MR_String	Str;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__listing__list_file_9_0
	ErrStrm = (FILE *) MR_sv(2);
	Str = (MR_String) (MR_Word) MR_string_const("\n", 1);
{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);
    IO = IO0;
;}
#line 700 "mdb.listing.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(8);
MR_def_label(mdb__listing__list_file_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(5);
	MR_tempr4 = MR_sv(6);
	MR_tempr5 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		mdb__listing__list_file_9_0_i11);
MR_def_label(mdb__listing__list_file_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		mdb__listing__list_file_9_0_i12);
MR_def_label(mdb__listing__list_file_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__open_input_4_0,
		mdb__listing__list_file_9_0_i13);
MR_def_label(mdb__listing__list_file_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__listing__list_file_9_0_i15);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__listing__find_and_open_file_5_0,
		mdb__listing__list_file_9_0_i16);
MR_def_label(mdb__listing__list_file_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__listing__list_file_9_0_i15);
	}
	{
	FILE *	ErrStrm;
	MR_String	Str;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__listing__list_file_9_0
	ErrStrm = (FILE *) MR_sv(2);
	Str = (MR_String) (MR_Word) MR_string_const("mdb: cannot find file ", 22);
{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);
    IO = IO0;
;}
#line 755 "mdb.listing.c"
#undef	MR_PROC_LABEL
	}
	{
	FILE *	ErrStrm;
	MR_String	Str;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__listing__list_file_9_0
	ErrStrm = (FILE *) MR_sv(2);
	Str = (MR_String) MR_sv(3);
{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);
    IO = IO0;
;}
#line 772 "mdb.listing.c"
#undef	MR_PROC_LABEL
	}
	{
	FILE *	ErrStrm;
	MR_String	Str;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__listing__list_file_9_0
	ErrStrm = (FILE *) MR_sv(2);
	Str = (MR_String) (MR_Word) MR_string_const("\n", 1);
{
#line 197 "listing.m"

    fputs(Str, (FILE *)ErrStrm);
    IO = IO0;
;}
#line 789 "mdb.listing.c"
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(8);
MR_def_label(mdb__listing__list_file_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_mask_field(MR_r1, 0);
	{
	MR_Word	InStream;
	FILE *	InStrm;
#define	MR_PROC_LABEL	mercury__mdb__listing__list_file_9_0
	InStream = MR_tempr1;
{
#line 262 "listing.m"

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));
;}
#line 808 "mdb.listing.c"
	MR_tempr2 = (MR_Word) InStrm;
#undef	MR_PROC_LABEL
	}
	{
	FILE *	InStrm;
	FILE *	OutStrm;
	MR_Integer	ThisLine;
	MR_Integer	FirstLine;
	MR_Integer	LastLine;
	MR_Integer	MarkLine;
	MR_Word	IO0;
	MR_Word	IO;
#define	MR_PROC_LABEL	mercury__mdb__listing__list_file_9_0
	InStrm = (FILE *) MR_tempr2;
	OutStrm = (FILE *) MR_sv(1);
	ThisLine = (MR_Integer) 1;
	FirstLine = MR_sv(4);
	LastLine = MR_sv(5);
	MarkLine = MR_sv(6);
{
#line 284 "listing.m"

    if (FirstLine <= ThisLine && ThisLine <= LastLine) {
        const char *s = (ThisLine == MarkLine) ? "> " : "  ";
        fputs(s, (FILE *)OutStrm);
    }
    while(ThisLine <= LastLine) {
        int c = fgetc((FILE *)InStrm);
        if (c == EOF) {
            fputc('\n', (FILE *)OutStrm);
            break;
        }
        if (FirstLine <= ThisLine) {
            fputc(c, (FILE *)OutStrm);
        }
        if (c == '\n') {
            ThisLine++;
            if (FirstLine <= ThisLine && ThisLine <= LastLine)  {
                const char *s = (ThisLine == MarkLine) ? "> " : "  ";
                fputs(s, (FILE *)OutStrm);
            }
        }
    }
    IO = IO0;
;}
#line 854 "mdb.listing.c"
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__close_input_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_line_as_string_4_0);
MR_decl_entry(io__write_string_4_0);

MR_BEGIN_MODULE(mdb__listing_module11)
	MR_init_entry1(mdb__listing__print_lines_in_range_m_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__listing__print_lines_in_range_m_8_0);
	MR_init_label10(mdb__listing__print_lines_in_range_m_8_0,39,2,6,7,8,5,11,13,15,10)
	MR_init_label1(mdb__listing__print_lines_in_range_m_8_0,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_lines_in_range_m'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__listing__print_lines_in_range_m_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(mdb__listing__print_lines_in_range_m_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(io__read_line_as_string_4_0,
		mdb__listing__print_lines_in_range_m_8_0_i2);
MR_def_label(mdb__listing__print_lines_in_range_m_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__listing__print_lines_in_range_m_8_0_i43);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__listing__print_lines_in_range_m_8_0_i5);
	}
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("Error: ", 7);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__listing__print_lines_in_range_m_8_0_i6);
MR_def_label(mdb__listing__print_lines_in_range_m_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		mdb__listing__print_lines_in_range_m_8_0_i7);
MR_def_label(mdb__listing__print_lines_in_range_m_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__listing__print_lines_in_range_m_8_0_i8);
MR_def_label(mdb__listing__print_lines_in_range_m_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_4_0);
MR_def_label(mdb__listing__print_lines_in_range_m_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(4) > (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(mdb__listing__print_lines_in_range_m_8_0_i10);
	}
	if (((MR_Integer) MR_sv(3) > (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(mdb__listing__print_lines_in_range_m_8_0_i10);
	}
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	if ((MR_sv(3) != MR_sv(6))) {
		MR_GOTO_LAB(mdb__listing__print_lines_in_range_m_8_0_i11);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("> ", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__listing__print_lines_in_range_m_8_0_i13);
MR_def_label(mdb__listing__print_lines_in_range_m_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("  ", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__listing__print_lines_in_range_m_8_0_i13);
MR_def_label(mdb__listing__print_lines_in_range_m_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__listing__print_lines_in_range_m_8_0_i15);
MR_def_label(mdb__listing__print_lines_in_range_m_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(mdb__listing__print_lines_in_range_m_8_0_i39);
MR_def_label(mdb__listing__print_lines_in_range_m_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(mdb__listing__print_lines_in_range_m_8_0_i39);
MR_def_label(mdb__listing__print_lines_in_range_m_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module12)
	MR_init_entry1(mdb__listing__list_file_portable_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__listing__list_file_portable_9_0);
	MR_init_label10(mdb__listing__list_file_portable_9_0,4,6,9,10,11,12,8,2,17,18)
	MR_init_label7(mdb__listing__list_file_portable_9_0,19,22,25,26,24,21,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list_file_portable'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__listing__list_file_portable_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__path_name_is_absolute_1_0,
		mdb__listing__list_file_portable_9_0_i4);
MR_def_label(mdb__listing__list_file_portable_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__listing__list_file_portable_9_0_i2);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__open_input_4_0,
		mdb__listing__list_file_portable_9_0_i6);
MR_def_label(mdb__listing__list_file_portable_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__listing__list_file_portable_9_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__io__error_message_1_0,
		mdb__listing__list_file_portable_9_0_i9);
MR_def_label(mdb__listing__list_file_portable_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("mdb: cannot open file ", 22);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__listing__list_file_portable_9_0_i10);
MR_def_label(mdb__listing__list_file_portable_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__listing__list_file_portable_9_0_i11);
MR_def_label(mdb__listing__list_file_portable_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__listing__list_file_portable_9_0_i12);
MR_def_label(mdb__listing__list_file_portable_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__listing__list_file_portable_9_0_i26);
MR_def_label(mdb__listing__list_file_portable_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(mdb__listing__print_lines_in_range_m_8_0,
		mdb__listing__list_file_portable_9_0_i30);
MR_def_label(mdb__listing__list_file_portable_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(5);
	MR_tempr4 = MR_sv(6);
	MR_tempr5 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		mdb__listing__list_file_portable_9_0_i17);
MR_def_label(mdb__listing__list_file_portable_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_100_105_114_95_95_47_2_0,
		mdb__listing__list_file_portable_9_0_i18);
MR_def_label(mdb__listing__list_file_portable_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__open_input_4_0,
		mdb__listing__list_file_portable_9_0_i19);
MR_def_label(mdb__listing__list_file_portable_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__listing__list_file_portable_9_0_i21);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdb__listing__find_and_open_file_5_0,
		mdb__listing__list_file_portable_9_0_i22);
MR_def_label(mdb__listing__list_file_portable_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__listing__list_file_portable_9_0_i24);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("mdb: cannot find file ", 22);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__listing__list_file_portable_9_0_i25);
MR_def_label(mdb__listing__list_file_portable_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__listing__list_file_portable_9_0_i26);
MR_def_label(mdb__listing__list_file_portable_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_4_0);
MR_def_label(mdb__listing__list_file_portable_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(mdb__listing__print_lines_in_range_m_8_0,
		mdb__listing__list_file_portable_9_0_i30);
MR_def_label(mdb__listing__list_file_portable_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	}
	MR_np_call_localret_ent(mdb__listing__print_lines_in_range_m_8_0,
		mdb__listing__list_file_portable_9_0_i30);
MR_def_label(mdb__listing__list_file_portable_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__close_input_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__type_desc__type_of_1_0);

MR_BEGIN_MODULE(mdb__listing_module13)
	MR_init_entry1(fn__mdb__listing__listing_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__listing__listing_type_0_0);
	MR_init_label1(fn__mdb__listing__listing_type_0_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'listing_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__listing__listing_type_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		fn__mdb__listing__listing_type_0_0_i3);
MR_def_label(fn__mdb__listing__listing_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdb__listing_module14)
	MR_init_entry1(__Unify___mdb__listing__c_file_ptr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__listing__c_file_ptr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__listing__c_file_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdb__listing_module15)
	MR_init_entry1(__Compare___mdb__listing__c_file_ptr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__listing__c_file_ptr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__listing__c_file_ptr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module16)
	MR_init_entry1(__Unify___mdb__listing__file_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__listing__file_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__listing__file_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdb__listing_module17)
	MR_init_entry1(__Compare___mdb__listing__file_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__listing__file_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__listing__file_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module18)
	MR_init_entry1(__Unify___mdb__listing__line_no_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__listing__line_no_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__listing__line_no_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdb__listing_module19)
	MR_init_entry1(__Compare___mdb__listing__line_no_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__listing__line_no_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__listing__line_no_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module20)
	MR_init_entry1(__Unify___mdb__listing__path_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__listing__path_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__listing__path_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module21)
	MR_init_entry1(__Compare___mdb__listing__path_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__listing__path_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__listing__path_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdb__listing_module22)
	MR_init_entry1(__Unify___mdb__listing__search_path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__listing__search_path_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__listing__search_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(mdb__listing_module23)
	MR_init_entry1(__Compare___mdb__listing__search_path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__listing__search_path_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__listing__search_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module24)
	MR_init_entry1(f_109_100_98_95_95_108_105_115_116_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_108_105_115_116_95_112_97_116_104_95_95_91_50_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_108_105_115_116_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_108_105_115_116_95_112_97_116_104_95_95_91_50_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__set_list_path__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_100_98_95_95_108_105_115_116_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_108_105_115_116_95_112_97_116_104_95_95_91_50_93_95_48_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__listing_module25)
	MR_init_entry1(f_109_100_98_95_95_108_105_115_116_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_114_95_108_105_115_116_95_112_97_116_104_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_108_105_115_116_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_114_95_108_105_115_116_95_112_97_116_104_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__clear_list_path__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_109_100_98_95_95_108_105_115_116_105_110_103_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_114_95_108_105_115_116_95_112_97_116_104_95_95_91_49_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__fn__mdb__listing__listing_type_0_0);

MR_Word
ML_LISTING_listing_type(void);

MR_Word
ML_LISTING_listing_type(void)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__listing__listing_type_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__listing__listing_type_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_entry(mercury__mdb__listing__list_file_9_0);

void
ML_LISTING_list_file(FILE * Mercury__argument1, FILE * Mercury__argument2, MR_String Mercury__argument3, MR_Integer Mercury__argument4, MR_Integer Mercury__argument5, MR_Integer Mercury__argument6, MR_Word Mercury__argument7);

void
ML_LISTING_list_file(FILE * Mercury__argument1, FILE * Mercury__argument2, MR_String Mercury__argument3, MR_Integer Mercury__argument4, MR_Integer Mercury__argument5, MR_Integer Mercury__argument6, MR_Word Mercury__argument7)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__listing__list_file_9_0));
#endif
	MR_restore_registers();
	MR_MAYBE_BOX_FOREIGN_TYPE(FILE *, Mercury__argument1, MR_r1);
	MR_MAYBE_BOX_FOREIGN_TYPE(FILE *, Mercury__argument2, MR_r2);
	MR_r3 = (MR_Word) Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_r6 = Mercury__argument6;
	MR_r7 = Mercury__argument7;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__listing__list_file_9_0), MR_FALSE);
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


MR_declare_entry(mercury__mdb__listing__pop_list_path_2_0);

void
ML_LISTING_pop_list_path(MR_Word Mercury__argument1, MR_Word * Mercury__argument2);

void
ML_LISTING_pop_list_path(MR_Word Mercury__argument1, MR_Word * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__listing__pop_list_path_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__listing__pop_list_path_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__mdb__listing__push_list_path_3_0);

void
ML_LISTING_push_list_path(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

void
ML_LISTING_push_list_path(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__listing__push_list_path_3_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__listing__push_list_path_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument3 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__mdb__listing__clear_list_path_2_0);

void
ML_LISTING_clear_list_path(MR_Word Mercury__argument1, MR_Word * Mercury__argument2);

void
ML_LISTING_clear_list_path(MR_Word Mercury__argument1, MR_Word * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__listing__clear_list_path_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__listing__clear_list_path_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__mdb__listing__set_list_path_3_0);

void
ML_LISTING_set_list_path(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3);

void
ML_LISTING_set_list_path(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__listing__set_list_path_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__listing__set_list_path_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument3 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__fn__mdb__listing__get_list_path_1_0);

MR_Word
ML_LISTING_get_list_path(MR_Word Mercury__argument1);

MR_Word
ML_LISTING_get_list_path(MR_Word Mercury__argument1)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__listing__get_list_path_1_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__listing__get_list_path_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_entry(mercury__fn__mdb__listing__new_list_path_0_0);

MR_Word
ML_LISTING_new_list_path(void);

MR_Word
ML_LISTING_new_list_path(void)
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
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__listing__new_list_path_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__listing__new_list_path_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


static void mercury__mdb__listing_maybe_bunch_0(void)
{
	mdb__listing_module0();
	mdb__listing_module1();
	mdb__listing_module2();
	mdb__listing_module3();
	mdb__listing_module4();
	mdb__listing_module5();
	mdb__listing_module6();
	mdb__listing_module7();
	mdb__listing_module8();
	mdb__listing_module9();
	mdb__listing_module10();
	mdb__listing_module11();
	mdb__listing_module12();
	mdb__listing_module13();
	mdb__listing_module14();
	mdb__listing_module15();
	mdb__listing_module16();
	mdb__listing_module17();
	mdb__listing_module18();
	mdb__listing_module19();
	mdb__listing_module20();
	mdb__listing_module21();
	mdb__listing_module22();
	mdb__listing_module23();
	mdb__listing_module24();
	mdb__listing_module25();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__listing__init(void);
void mercury__mdb__listing__init_type_tables(void);
void mercury__mdb__listing__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__listing__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__listing__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__listing__init_threadscope_string_table(void);
#endif

void mercury__mdb__listing__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__listing_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__listing__type_ctor_info_c_file_ptr_0,
		mdb__listing__c_file_ptr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__listing__type_ctor_info_file_name_0,
		mdb__listing__file_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__listing__type_ctor_info_line_no_0,
		mdb__listing__line_no_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__listing__type_ctor_info_path_name_0,
		mdb__listing__path_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__listing__type_ctor_info_search_path_0,
		mdb__listing__search_path_0_0);
	mercury__mdb__listing__init_debugger();
}

void mercury__mdb__listing__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__listing__type_ctor_info_c_file_ptr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__listing__type_ctor_info_file_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__listing__type_ctor_info_line_no_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__listing__type_ctor_info_path_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__listing__type_ctor_info_search_path_0);
	}
}


void mercury__mdb__listing__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__listing__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__listing);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__listing__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__listing__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
