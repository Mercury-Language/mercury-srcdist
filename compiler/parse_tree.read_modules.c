/*
** Automatically generated from `read_modules.m'
** by the Mercury compiler,
** version rotd-2009-09-15, configured for i686-pc-linux-gnu.
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
INIT mercury__parse_tree__read_modules__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "parse_tree.read_modules.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "parse_tree.read_modules.c"
#line 56 "../library/dir.int"
#include "dir.mh"

#line 35 "parse_tree.read_modules.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "parse_tree.read_modules.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "parse_tree.read_modules.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "parse_tree.read_modules.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 51 "parse_tree.read_modules.c"
#line 52 "parse_tree.read_modules.c"
#include "parse_tree.read_modules.mh"

#line 55 "parse_tree.read_modules.c"
#line 56 "parse_tree.read_modules.c"
#ifndef PARSE_TREE__READ_MODULES_DECL_GUARD
#define PARSE_TREE__READ_MODULES_DECL_GUARD

#line 60 "parse_tree.read_modules.c"
#line 61 "parse_tree.read_modules.c"

#endif
#line 64 "parse_tree.read_modules.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__read_modules__type_ctor_info_have_read_module_0,
	mercury_data_parse_tree__read_modules__type_ctor_info_have_read_module_map_0,
	mercury_data_parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0;
MR_decl_label8(parse_tree__read_modules__check_timestamp_5_0, 28,3,6,8,10,11,12,14)
MR_decl_label8(parse_tree__read_modules__check_timestamp_5_0, 15,16,17,18,19,20,21,22)
MR_decl_label3(parse_tree__read_modules__check_timestamp_5_0, 23,25,5)
MR_decl_label8(parse_tree__read_modules__do_read_module_15_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(parse_tree__read_modules__do_read_module_15_0, 12,13,3,15,16,17,18,19)
MR_decl_label8(parse_tree__read_modules__do_read_module_15_0, 20,21,22,23,2,24,28,30)
MR_decl_label8(parse_tree__read_modules__do_read_module_15_0, 32,34,33,35,36,41,42,40)
MR_decl_label8(parse_tree__read_modules__do_read_module_15_0, 45,44,46,47,48,38,49,53)
MR_decl_label3(parse_tree__read_modules__find_read_module_9_0, 4,7,1)
MR_decl_label2(parse_tree__read_modules__maybe_read_module_14_0, 4,2)
MR_decl_label8(parse_tree__read_modules__read_module_from_file_12_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(parse_tree__read_modules__read_module_from_file_12_0, 10,13,11,16,19,18,22,24)
MR_decl_label8(parse_tree__read_modules__read_module_from_file_12_0, 25,28,29,27,31,33,34,35)
MR_decl_label1(parse_tree__read_modules__read_module_ignore_errors_12_0, 2)
MR_decl_label5(__Unify___parse_tree__read_modules__have_read_module_0_0, 4,6,8,10,1)
MR_decl_label7(__Compare___parse_tree__read_modules__have_read_module_0_0, 3,2,5,9,13,17,45)
MR_decl_static(parse_tree__read_modules__check_timestamp_5_0)
MR_decl_static(parse_tree__read_modules__do_read_module_15_0)
MR_def_extern_entry(parse_tree__read_modules__read_module_13_0)
MR_def_extern_entry(parse_tree__read_modules__read_module_if_changed_13_0)
MR_def_extern_entry(parse_tree__read_modules__read_module_ignore_errors_12_0)
MR_def_extern_entry(parse_tree__read_modules__read_module_from_file_12_0)
MR_def_extern_entry(parse_tree__read_modules__find_read_module_9_0)
MR_def_extern_entry(parse_tree__read_modules__maybe_read_module_14_0)
MR_def_extern_entry(__Unify___parse_tree__read_modules__have_read_module_0_0)
MR_def_extern_entry(__Compare___parse_tree__read_modules__have_read_module_0_0)
MR_def_extern_entry(__Unify___parse_tree__read_modules__have_read_module_map_0_0)
MR_def_extern_entry(__Compare___parse_tree__read_modules__have_read_module_map_0_0)
MR_decl_static(__Unify___parse_tree__read_modules__maybe_ignore_errors_0_0)
MR_decl_static(__Compare___parse_tree__read_modules__maybe_ignore_errors_0_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_error_1;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe_error),
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__read_modules__do_read_module_15_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__read_modules__do_read_module_15_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__file_util__type_ctor_info_maybe_open_file_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__read_modules__read_module_from_file_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__read_modules__read_module_from_file_12_0_2;
static const struct mercury_type_2 mercury_common_2[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__read_modules__do_read_module_15_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(1,0),
MR_COMMON(1,0),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_COMMON(1,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__read_modules__do_read_module_15_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(libs__file_util, maybe_open_file),
MR_COMMON(1,0),
MR_STRING_CTOR_ADDR,
MR_COMMON(1,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__read_modules__read_module_from_file_12_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(libs__file_util, maybe_open_file),
MR_COMMON(1,0),
MR_STRING_CTOR_ADDR,
MR_COMMON(1,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__parse_tree__read_modules__read_module_from_file_12_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(libs__file_util, maybe_open_file),
MR_COMMON(1,0),
MR_STRING_CTOR_ADDR,
MR_COMMON(1,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_STRING_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__module_imports__type_ctor_info_module_timestamp_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_item__type_ctor_info_item_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_item__type_ctor_info_item_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io__type_ctor_info_module_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__module_imports__type_ctor_info_module_timestamp_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_io__type_ctor_info_module_error_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__read_modules__field_types_have_read_module_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__module_imports__type_ctor_info_module_timestamp_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_io__type_ctor_info_module_error_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__read_modules__du_functor_desc_have_read_module_0_0 = {
	"have_read_module",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__read_modules__field_types_have_read_module_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__read_modules__du_stag_ordered_have_read_module_0_0[] = {
	&mercury_data_parse_tree__read_modules__du_functor_desc_have_read_module_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__read_modules__du_ptag_ordered_have_read_module_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__read_modules__du_stag_ordered_have_read_module_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__read_modules__du_name_ordered_have_read_module_0[] = {
	&mercury_data_parse_tree__read_modules__du_functor_desc_have_read_module_0_0
};

const MR_Integer mercury_data_parse_tree__read_modules__functor_number_map_have_read_module_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__read_modules__type_ctor_info_have_read_module_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__read_modules__have_read_module_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__read_modules__have_read_module_0_0)),
	"parse_tree.read_modules",
	"have_read_module",
	{ (void *)mercury_data_parse_tree__read_modules__du_name_ordered_have_read_module_0 },
	{ (void *)mercury_data_parse_tree__read_modules__du_ptag_ordered_have_read_module_0 },
	1,
	4,
	mercury_data_parse_tree__read_modules__functor_number_map_have_read_module_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__read_modules__type_ctor_info_have_read_module_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0parse_tree__read_modules__type_ctor_info_have_read_module_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_parse_tree__read_modules__type_ctor_info_have_read_module_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__read_modules__type_ctor_info_have_read_module_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__read_modules__have_read_module_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__read_modules__have_read_module_map_0_0)),
	"parse_tree.read_modules",
	"have_read_module_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0parse_tree__read_modules__type_ctor_info_have_read_module_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0 = {
	"ignore_errors",
	0
};

static const MR_EnumFunctorDesc mercury_data_parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1 = {
	"do_not_ignore_errors",
	1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0[] = {
	&mercury_data_parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0,
	&mercury_data_parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1
};

const MR_EnumFunctorDescPtr mercury_data_parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0[] = {
	&mercury_data_parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_1,
	&mercury_data_parse_tree__read_modules__enum_functor_desc_maybe_ignore_errors_0_0
};

const MR_Integer mercury_data_parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__read_modules__maybe_ignore_errors_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__read_modules__maybe_ignore_errors_0_0)),
	"parse_tree.read_modules",
	"maybe_ignore_errors",
	{ (void *)mercury_data_parse_tree__read_modules__enum_name_ordered_maybe_ignore_errors_0 },
	{ (void *)mercury_data_parse_tree__read_modules__enum_value_ordered_maybe_ignore_errors_0 },
	2,
	4,
	mercury_data_parse_tree__read_modules__functor_number_map_maybe_ignore_errors_0
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__read_modules__do_read_module_15_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_io",
"parse_tree.prog_io",
"search_for_module_source",
6,
0
},
"parse_tree.read_modules",
"read_modules.m",
210,
"d1;c31;t;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__read_modules__do_read_module_15_0_2 = {
{
MR_PREDICATE,
"libs.file_util",
"libs.file_util",
"search_for_file",
6,
0
},
"parse_tree.read_modules",
"read_modules.m",
213,
"d1;c31;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__read_modules__read_module_from_file_12_0_1 = {
{
MR_PREDICATE,
"libs.file_util",
"libs.file_util",
"search_for_file",
6,
0
},
"parse_tree.read_modules",
"read_modules.m",
294,
"d1;c29;"
};

static const MR_UserClosureId
mercury_data__closure_layout__parse_tree__read_modules__read_module_from_file_12_0_2 = {
{
MR_PREDICATE,
"libs.file_util",
"libs.file_util",
"search_for_file",
6,
0
},
"parse_tree.read_modules",
"read_modules.m",
294,
"d1;c29;"
};

MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(libs__globals__io_set_option_4_0);
MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(parse_tree__read_modules_module0)
	MR_init_entry1(parse_tree__read_modules__check_timestamp_5_0);
	MR_init_label8(parse_tree__read_modules__check_timestamp_5_0,28,3,6,8,10,11,12,14)
	MR_init_label8(parse_tree__read_modules__check_timestamp_5_0,15,16,17,18,19,20,21,22)
	MR_init_label3(parse_tree__read_modules__check_timestamp_5_0,23,25,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'check_timestamp'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__read_modules__check_timestamp_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(parse_tree__read_modules__check_timestamp_5_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(parse_tree__read_modules__check_timestamp_5_0_i5);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r4, 0);
	MR_r1 = (MR_Integer) 97;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		parse_tree__read_modules__check_timestamp_5_0_i6);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__read_modules__check_timestamp_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r1 = (MR_Integer) 97;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		parse_tree__read_modules__check_timestamp_5_0_i10);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 98;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(libs__globals__io_set_option_4_0,
		parse_tree__read_modules__check_timestamp_5_0_i11);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 22;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		parse_tree__read_modules__check_timestamp_5_0_i12);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__read_modules__check_timestamp_5_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Warning: cannot find modification time for ", 43);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__read_modules__check_timestamp_5_0_i15);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__read_modules__check_timestamp_5_0_i16);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__read_modules__check_timestamp_5_0_i17);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__error_message_2_0,
		parse_tree__read_modules__check_timestamp_5_0_i18);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("  ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__read_modules__check_timestamp_5_0_i19);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__read_modules__check_timestamp_5_0_i20);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__read_modules__check_timestamp_5_0_i21);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("  Smart recompilation will not work.\n", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		parse_tree__read_modules__check_timestamp_5_0_i22);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		parse_tree__read_modules__check_timestamp_5_0_i23);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(parse_tree__read_modules__check_timestamp_5_0_i25);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		parse_tree__read_modules__check_timestamp_5_0_i28);
MR_def_label(parse_tree__read_modules__check_timestamp_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(0, MR_r4, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__file_names__module_name_to_file_name_6_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(libs__file_util__maybe_write_string_4_0);
MR_decl_entry(libs__file_util__maybe_flush_output_3_0);
MR_decl_entry(libs__globals__io_lookup_accumulating_option_4_0);
MR_decl_entry(fn__dir__this_directory_0_0);
MR_decl_entry(parse_tree__file_names__module_name_to_search_file_name_5_0);
MR_decl_entry(parse_tree__prog_io__search_for_module_source_6_0);
MR_decl_entry(libs__file_util__search_for_file_6_0);
MR_decl_entry(parse_tree__prog_io__actually_read_module_11_0);
MR_decl_entry(parse_tree__prog_io__actually_read_module_if_changed_11_0);
MR_decl_entry(parse_tree__prog_io__check_module_has_expected_name_5_0);
MR_decl_entry(parse_tree__error_util__maybe_write_out_errors_no_module_6_0);

MR_BEGIN_MODULE(parse_tree__read_modules_module1)
	MR_init_entry1(parse_tree__read_modules__do_read_module_15_0);
	MR_init_label8(parse_tree__read_modules__do_read_module_15_0,4,5,6,7,8,9,10,11)
	MR_init_label8(parse_tree__read_modules__do_read_module_15_0,12,13,3,15,16,17,18,19)
	MR_init_label8(parse_tree__read_modules__do_read_module_15_0,20,21,22,23,2,24,28,30)
	MR_init_label8(parse_tree__read_modules__do_read_module_15_0,32,34,33,35,36,41,42,40)
	MR_init_label8(parse_tree__read_modules__do_read_module_15_0,45,44,46,47,48,38,49,53)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'do_read_module'/15 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__read_modules__do_read_module_15_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r6,1)) {
		MR_GOTO_LAB(parse_tree__read_modules__do_read_module_15_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_file_name_6_0,
		parse_tree__read_modules__do_read_module_15_0_i4);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		parse_tree__read_modules__do_read_module_15_0_i5);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("\'... ", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__read_modules__do_read_module_15_0_i6);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" \140", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__read_modules__do_read_module_15_0_i7);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__read_modules__do_read_module_15_0_i8);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__read_modules__do_read_module_15_0_i9);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__do_read_module_15_0_i10);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		parse_tree__read_modules__do_read_module_15_0_i11);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 591;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		parse_tree__read_modules__do_read_module_15_0_i12);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		parse_tree__read_modules__do_read_module_15_0_i13);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(parse_tree__read_modules__do_read_module_15_0_i2);
	}
MR_def_label(parse_tree__read_modules__do_read_module_15_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__file_names__module_name_to_search_file_name_5_0,
		parse_tree__read_modules__do_read_module_15_0_i15);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 40;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		parse_tree__read_modules__do_read_module_15_0_i16);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("\'... ", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__read_modules__do_read_module_15_0_i17);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" \140", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__read_modules__do_read_module_15_0_i18);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__read_modules__do_read_module_15_0_i19);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		parse_tree__read_modules__do_read_module_15_0_i20);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__do_read_module_15_0_i21);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		parse_tree__read_modules__do_read_module_15_0_i22);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 591;
	MR_np_call_localret_ent(libs__globals__io_lookup_accumulating_option_4_0,
		parse_tree__read_modules__do_read_module_15_0_i23);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_sv(5) = MR_r1;
MR_def_label(parse_tree__read_modules__do_read_module_15_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const(".m", 2)) != 0)) {
		MR_GOTO_LAB(parse_tree__read_modules__do_read_module_15_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_io__search_for_module_source_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 5) = MR_r3;
	MR_GOTO_LAB(parse_tree__read_modules__do_read_module_15_0_i28);
	}
MR_def_label(parse_tree__read_modules__do_read_module_15_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__file_util__search_for_file_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	}
MR_def_label(parse_tree__read_modules__do_read_module_15_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(parse_tree__read_modules__do_read_module_15_0_i30);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(parse_tree__prog_io__actually_read_module_11_0,
		parse_tree__read_modules__do_read_module_15_0_i32);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r4 = MR_ctfield(1, MR_sv(6), 0);
	MR_np_call_localret_ent(parse_tree__prog_io__actually_read_module_if_changed_11_0,
		parse_tree__read_modules__do_read_module_15_0_i32);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_r9 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r5 = MR_r9;
	MR_r3 = MR_r8;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r6;
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(parse_tree__read_modules__do_read_module_15_0_i34);
	}
	MR_GOTO_LAB(parse_tree__read_modules__do_read_module_15_0_i33);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r5, 0);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_io__check_module_has_expected_name_5_0,
		parse_tree__read_modules__do_read_module_15_0_i35);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(parse_tree__read_modules__check_timestamp_5_0,
		parse_tree__read_modules__do_read_module_15_0_i36);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(parse_tree__read_modules__do_read_module_15_0_i38);
	}
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(parse_tree__read_modules__do_read_module_15_0_i40);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("fatal error(s).\n", 16);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__do_read_module_15_0_i41);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__error_util__maybe_write_out_errors_no_module_6_0,
		parse_tree__read_modules__do_read_module_15_0_i42);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		parse_tree__read_modules__do_read_module_15_0_i48);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(parse_tree__read_modules__do_read_module_15_0_i44);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("successful parse.\n", 18);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__do_read_module_15_0_i45);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("parse error(s).\n", 16);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__do_read_module_15_0_i46);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(parse_tree__error_util__maybe_write_out_errors_no_module_6_0,
		parse_tree__read_modules__do_read_module_15_0_i47);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		parse_tree__read_modules__do_read_module_15_0_i48);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(parse_tree__read_modules__do_read_module_15_0_i49);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(parse_tree__read_modules__do_read_module_15_0_i49);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("not found.\n", 11);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__do_read_module_15_0_i53);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_string_const("done.\n", 6);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__do_read_module_15_0_i53);
MR_def_label(parse_tree__read_modules__do_read_module_15_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(2);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__read_modules_module2)
	MR_init_entry1(parse_tree__read_modules__read_module_13_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'read_module'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__read_modules__read_module_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_tempr5;
	MR_np_tailcall_ent(parse_tree__read_modules__do_read_module_15_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__read_modules_module3)
	MR_init_entry1(parse_tree__read_modules__read_module_if_changed_13_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'read_module_if_changed'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__read_modules__read_module_if_changed_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r6;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_r6 = MR_tempr5;
	MR_r7 = MR_tempr1;
	MR_r8 = (MR_Integer) 0;
	MR_np_tailcall_ent(parse_tree__read_modules__do_read_module_15_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__read_modules_module4)
	MR_init_entry1(parse_tree__read_modules__read_module_ignore_errors_12_0);
	MR_init_label1(parse_tree__read_modules__read_module_ignore_errors_12_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'read_module_ignore_errors'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__read_modules__read_module_ignore_errors_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_tempr5;
	}
	MR_np_call_localret_ent(parse_tree__read_modules__do_read_module_15_0,
		parse_tree__read_modules__read_module_ignore_errors_12_0_i2);
MR_def_label(parse_tree__read_modules__read_module_ignore_errors_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__io_get_globals_3_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(dir__basename_2_0);
MR_decl_entry(parse_tree__file_names__file_name_to_module_name_2_0);
MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);

MR_BEGIN_MODULE(parse_tree__read_modules_module5)
	MR_init_entry1(parse_tree__read_modules__read_module_from_file_12_0);
	MR_init_label8(parse_tree__read_modules__read_module_from_file_12_0,2,3,4,5,6,7,8,9)
	MR_init_label8(parse_tree__read_modules__read_module_from_file_12_0,10,13,11,16,19,18,22,24)
	MR_init_label8(parse_tree__read_modules__read_module_from_file_12_0,25,28,29,27,31,33,34,35)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'read_module_from_file'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__read_modules__read_module_from_file_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(libs__globals__io_get_globals_3_0,
		parse_tree__read_modules__read_module_from_file_12_0_i2);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r2 = (MR_Integer) 40;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		parse_tree__read_modules__read_module_from_file_12_0_i3);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("% ", 2);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__read_module_from_file_12_0_i4);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__read_module_from_file_12_0_i5);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const(" \140", 2);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__read_module_from_file_12_0_i6);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__read_module_from_file_12_0_i7);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("\'... ", 5);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__read_module_from_file_12_0_i8);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(libs__file_util__maybe_flush_output_3_0,
		parse_tree__read_modules__read_module_from_file_12_0_i9);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(string__append_3_2,
		parse_tree__read_modules__read_module_from_file_12_0_i10);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(dir__basename_2_0,
		parse_tree__read_modules__read_module_from_file_12_0_i13);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__read_modules__read_module_from_file_12_0_i11);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		parse_tree__read_modules__read_module_from_file_12_0_i16);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(parse_tree__file_names__file_name_to_module_name_2_0,
		parse_tree__read_modules__read_module_from_file_12_0_i16);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(parse_tree__read_modules__read_module_from_file_12_0_i18);
	}
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__dir__this_directory_0_0,
		parse_tree__read_modules__read_module_from_file_12_0_i19);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(libs__file_util__search_for_file_6_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr2, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 4) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 5) = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__actually_read_module_11_0,
		parse_tree__read_modules__read_module_from_file_12_0_i24);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Integer) 591;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		parse_tree__read_modules__read_module_from_file_12_0_i22);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(libs__file_util__search_for_file_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(parse_tree__prog_io__actually_read_module_11_0,
		parse_tree__read_modules__read_module_from_file_12_0_i24);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r6;
	}
	MR_np_call_localret_ent(parse_tree__read_modules__check_timestamp_5_0,
		parse_tree__read_modules__read_module_from_file_12_0_i25);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(parse_tree__read_modules__read_module_from_file_12_0_i27);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("fatal error(s).\n", 16);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__read_module_from_file_12_0_i28);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__error_util__maybe_write_out_errors_no_module_6_0,
		parse_tree__read_modules__read_module_from_file_12_0_i29);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		parse_tree__read_modules__read_module_from_file_12_0_i35);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(parse_tree__read_modules__read_module_from_file_12_0_i31);
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("successful parse.\n", 18);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__read_module_from_file_12_0_i35);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const("parse error(s).\n", 16);
	MR_np_call_localret_ent(libs__file_util__maybe_write_string_4_0,
		parse_tree__read_modules__read_module_from_file_12_0_i33);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__error_util__maybe_write_out_errors_no_module_6_0,
		parse_tree__read_modules__read_module_from_file_12_0_i34);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(io__set_exit_status_3_0,
		parse_tree__read_modules__read_module_from_file_12_0_i35);
MR_def_label(parse_tree__read_modules__read_module_from_file_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);

MR_BEGIN_MODULE(parse_tree__read_modules_module6)
	MR_init_entry1(parse_tree__read_modules__find_read_module_9_0);
	MR_init_label3(parse_tree__read_modules__find_read_module_9_0,4,7,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'find_read_module'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__read_modules__find_read_module_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__read_modules, have_read_module);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		parse_tree__read_modules__find_read_module_9_0_i4);
MR_def_label(parse_tree__read_modules__find_read_module_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__read_modules__find_read_module_9_0_i1);
	}
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(parse_tree__read_modules__find_read_module_9_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__read_modules__find_read_module_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tfield(1, MR_r6, 0) = MR_ctfield(0, MR_ctfield(0, MR_tempr2, 0), 1);
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	MR_r5 = MR_ctfield(0, MR_tempr1, 4);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(parse_tree__read_modules__find_read_module_9_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__read_modules_module7)
	MR_init_entry1(parse_tree__read_modules__maybe_read_module_14_0);
	MR_init_label2(parse_tree__read_modules__maybe_read_module_14_0,4,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'maybe_read_module'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__parse_tree__read_modules__maybe_read_module_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_tempr3 = MR_r7;
	MR_sv(6) = MR_tempr3;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(parse_tree__read_modules__find_read_module_9_0,
		parse_tree__read_modules__maybe_read_module_14_0_i4);
MR_def_label(parse_tree__read_modules__maybe_read_module_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(parse_tree__read_modules__maybe_read_module_14_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_decr_sp_and_return(7);
MR_def_label(parse_tree__read_modules__maybe_read_module_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(parse_tree__read_modules__do_read_module_15_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__module_imports__module_timestamp_0_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(parse_tree__read_modules_module8)
	MR_init_entry1(__Unify___parse_tree__read_modules__have_read_module_0_0);
	MR_init_label5(__Unify___parse_tree__read_modules__have_read_module_0_0,4,6,8,10,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__read_modules__have_read_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__read_modules__have_read_module_0_0_i10);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
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
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__module_imports__module_timestamp_0_0,
		__Unify___parse_tree__read_modules__have_read_module_0_0_i4);
MR_def_label(__Unify___parse_tree__read_modules__have_read_module_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__read_modules__have_read_module_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__read_modules__have_read_module_0_0_i6);
MR_def_label(__Unify___parse_tree__read_modules__have_read_module_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__read_modules__have_read_module_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__read_modules__have_read_module_0_0_i8);
MR_def_label(__Unify___parse_tree__read_modules__have_read_module_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__read_modules__have_read_module_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___parse_tree__read_modules__have_read_module_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(4), (char *) (MR_Word *) MR_sv(8)) == 0);
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___parse_tree__read_modules__have_read_module_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__read_modules__have_read_module_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__module_imports__module_timestamp_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(parse_tree__read_modules_module9)
	MR_init_entry1(__Compare___parse_tree__read_modules__have_read_module_0_0);
	MR_init_label7(__Compare___parse_tree__read_modules__have_read_module_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__read_modules__have_read_module_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__read_modules__have_read_module_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__read_modules__have_read_module_0_0_i2);
MR_def_label(__Compare___parse_tree__read_modules__have_read_module_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__read_modules__have_read_module_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__module_imports__module_timestamp_0_0,
		__Compare___parse_tree__read_modules__have_read_module_0_0_i5);
MR_def_label(__Compare___parse_tree__read_modules__have_read_module_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__read_modules__have_read_module_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_item, item);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__read_modules__have_read_module_0_0_i9);
MR_def_label(__Compare___parse_tree__read_modules__have_read_module_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__read_modules__have_read_module_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__read_modules__have_read_module_0_0_i13);
MR_def_label(__Compare___parse_tree__read_modules__have_read_module_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__read_modules__have_read_module_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__read_modules__have_read_module_0_0_i17);
MR_def_label(__Compare___parse_tree__read_modules__have_read_module_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__read_modules__have_read_module_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__read_modules__have_read_module_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(parse_tree__read_modules_module10)
	MR_init_entry1(__Unify___parse_tree__read_modules__have_read_module_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__read_modules__have_read_module_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__read_modules, have_read_module);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(parse_tree__read_modules_module11)
	MR_init_entry1(__Compare___parse_tree__read_modules__have_read_module_map_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__read_modules__have_read_module_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__read_modules, have_read_module);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__read_modules_module12)
	MR_init_entry1(__Unify___parse_tree__read_modules__maybe_ignore_errors_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___parse_tree__read_modules__maybe_ignore_errors_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__read_modules_module13)
	MR_init_entry1(__Compare___parse_tree__read_modules__maybe_ignore_errors_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___parse_tree__read_modules__maybe_ignore_errors_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__read_modules_maybe_bunch_0(void)
{
	parse_tree__read_modules_module0();
	parse_tree__read_modules_module1();
	parse_tree__read_modules_module2();
	parse_tree__read_modules_module3();
	parse_tree__read_modules_module4();
	parse_tree__read_modules_module5();
	parse_tree__read_modules_module6();
	parse_tree__read_modules_module7();
	parse_tree__read_modules_module8();
	parse_tree__read_modules_module9();
	parse_tree__read_modules_module10();
	parse_tree__read_modules_module11();
	parse_tree__read_modules_module12();
	parse_tree__read_modules_module13();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__read_modules__init(void);
void mercury__parse_tree__read_modules__init_type_tables(void);
void mercury__parse_tree__read_modules__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__read_modules__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__read_modules__init_complexity_procs(void);
#endif

void mercury__parse_tree__read_modules__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__read_modules_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__read_modules__type_ctor_info_have_read_module_0,
		parse_tree__read_modules__have_read_module_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__read_modules__type_ctor_info_have_read_module_map_0,
		parse_tree__read_modules__have_read_module_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0,
		parse_tree__read_modules__maybe_ignore_errors_0_0);
	mercury__parse_tree__read_modules__init_debugger();
}

void mercury__parse_tree__read_modules__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__read_modules__type_ctor_info_have_read_module_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__read_modules__type_ctor_info_have_read_module_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__read_modules__type_ctor_info_maybe_ignore_errors_0);
	}
}


void mercury__parse_tree__read_modules__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__read_modules__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parse_tree__read_modules);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__read_modules__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
