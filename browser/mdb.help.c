/*
** Automatically generated from `help.m'
** by the Mercury compiler,
** version rotd-2011-09-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__help__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.help.c"
#include "mdb.help.mh"

#line 28 "mdb.help.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.help.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "mdb.help.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 40 "mdb.help.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "mdb.help.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "mdb.help.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 52 "mdb.help.c"
#line 53 "mdb.help.c"
#ifndef MDB__HELP_DECL_GUARD
#define MDB__HELP_DECL_GUARD

#line 57 "mdb.help.c"
#line 58 "mdb.help.c"

#endif
#line 61 "mdb.help.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__help__type_ctor_info_entry_0,
	mercury_data_mdb__help__type_ctor_info_help_res_0,
	mercury_data_mdb__help__type_ctor_info_node_0,
	mercury_data_mdb__help__type_ctor_info_path_0,
	mercury_data_mdb__help__type_ctor_info_system_0,
	mercury_data_mdb__help__type_ctor_info_text_0;
MR_decl_label10(mdb__help__add_node_7_0, 8,6,9,5,15,13,16,12,18,3)
MR_decl_label5(mdb__help__add_node_7_0, 23,25,28,21,29)
MR_decl_label1(mdb__help__help_system_type_1_0, 3)
MR_decl_label3(mdb__help__insert_into_entry_list_5_0, 3,7,6)
MR_decl_label3(mdb__help__name_5_0, 2,5,7)
MR_decl_label2(mdb__help__one_path_step_3_0, 3,1)
MR_decl_label8(mdb__help__path_6_0, 36,3,7,11,10,5,13,14)
MR_decl_label3(mdb__help__print_entry_list_4_0, 10,4,12)
MR_decl_label3(mdb__help__replace_entry_3_0, 4,6,3)
MR_decl_label1(mdb__help__result_is_error_2_0, 1)
MR_decl_label5(mdb__help__search_entry_list_7_0, 16,3,5,4,6)
MR_decl_label2(__Unify___mdb__help__entry_0_0, 6,1)
MR_decl_label3(__Unify___mdb__help__help_res_0_0, 10,5,1)
MR_decl_label2(__Unify___mdb__help__node_0_0, 6,1)
MR_decl_label5(__Compare___mdb__help__entry_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___mdb__help__help_res_0_0, 18,7,5,9)
MR_decl_label4(__Compare___mdb__help__node_0_0, 3,2,5,21)
MR_def_extern_entry(mdb__help__init_1_0)
MR_decl_static(mdb__help__insert_into_entry_list_5_0)
MR_decl_static(mdb__help__one_path_step_3_0)
MR_decl_static(mdb__help__replace_entry_3_0)
MR_decl_static(mdb__help__add_node_7_0)
MR_def_extern_entry(mdb__help__add_help_node_7_0)
MR_decl_static(mdb__help__print_entry_list_4_0)
MR_def_extern_entry(mdb__help__help_4_0)
MR_def_extern_entry(mdb__help__path_6_0)
MR_decl_static(mdb__help__search_entry_list_7_0)
MR_decl_static(mdb__help__search_node_7_0)
MR_def_extern_entry(mdb__help__name_5_0)
MR_def_extern_entry(mdb__help__help_system_type_1_0)
MR_def_extern_entry(mdb__help__result_is_error_2_0)
MR_def_extern_entry(__Unify___mdb__help__entry_0_0)
MR_def_extern_entry(__Compare___mdb__help__entry_0_0)
MR_def_extern_entry(__Unify___mdb__help__help_res_0_0)
MR_def_extern_entry(__Compare___mdb__help__help_res_0_0)
MR_decl_static(__Unify___mdb__help__node_0_0)
MR_decl_static(__Compare___mdb__help__node_0_0)
MR_def_extern_entry(__Unify___mdb__help__path_0_0)
MR_def_extern_entry(__Compare___mdb__help__path_0_0)
MR_def_extern_entry(__Unify___mdb__help__system_0_0)
MR_def_extern_entry(__Compare___mdb__help__system_0_0)
MR_decl_static(__Unify___mdb__help__text_0_0)
MR_decl_static(__Compare___mdb__help__text_0_0)

static const struct mercury_type_0 mercury_common_0[3] =
{
{
MR_string_const("entry with given index already exists", 37)
},
{
MR_string_const("entry with given name already exists", 36)
},
{
MR_string_const("the path does not go that deep", 30)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdb__help, entry)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__help__type_ctor_info_node_0;

const MR_PseudoTypeInfo mercury_data_mdb__help__field_types_entry_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__help__type_ctor_info_node_0
};

static const MR_DuFunctorDesc mercury_data_mdb__help__du_functor_desc_entry_0_0 = {
	"entry",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__help__field_types_entry_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__help__du_stag_ordered_entry_0_0[] = {
	&mercury_data_mdb__help__du_functor_desc_entry_0_0

};

const MR_DuPtagLayout mercury_data_mdb__help__du_ptag_ordered_entry_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__help__du_stag_ordered_entry_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__help__du_name_ordered_entry_0[] = {
	&mercury_data_mdb__help__du_functor_desc_entry_0_0
};

const MR_Integer mercury_data_mdb__help__functor_number_map_entry_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__help__type_ctor_info_entry_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__help__entry_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__help__entry_0_0)),
	"mdb.help",
	"entry",
	{ (void *)mercury_data_mdb__help__du_name_ordered_entry_0 },
	{ (void *)mercury_data_mdb__help__du_ptag_ordered_entry_0 },
	1,
	4,
	mercury_data_mdb__help__functor_number_map_entry_0
};

static const MR_DuFunctorDesc mercury_data_mdb__help__du_functor_desc_help_res_0_0 = {
	"help_ok",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__help__field_types_help_res_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__help__du_functor_desc_help_res_0_1 = {
	"help_error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__help__field_types_help_res_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__help__du_stag_ordered_help_res_0_0[] = {
	&mercury_data_mdb__help__du_functor_desc_help_res_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__help__du_stag_ordered_help_res_0_1[] = {
	&mercury_data_mdb__help__du_functor_desc_help_res_0_1

};

const MR_DuPtagLayout mercury_data_mdb__help__du_ptag_ordered_help_res_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__help__du_stag_ordered_help_res_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__help__du_stag_ordered_help_res_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__help__du_name_ordered_help_res_0[] = {
	&mercury_data_mdb__help__du_functor_desc_help_res_0_1,
	&mercury_data_mdb__help__du_functor_desc_help_res_0_0
};

const MR_Integer mercury_data_mdb__help__functor_number_map_help_res_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__help__type_ctor_info_help_res_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__help__help_res_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__help__help_res_0_0)),
	"mdb.help",
	"help_res",
	{ (void *)mercury_data_mdb__help__du_name_ordered_help_res_0 },
	{ (void *)mercury_data_mdb__help__du_ptag_ordered_help_res_0 },
	2,
	4,
	mercury_data_mdb__help__functor_number_map_help_res_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__help__type_ctor_info_entry_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdb__help__type_ctor_info_entry_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdb__help__type_ctor_info_entry_0
}};

const MR_PseudoTypeInfo mercury_data_mdb__help__field_types_node_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdb__help__type_ctor_info_entry_0
};

static const MR_DuFunctorDesc mercury_data_mdb__help__du_functor_desc_node_0_0 = {
	"node",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__help__field_types_node_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__help__du_stag_ordered_node_0_0[] = {
	&mercury_data_mdb__help__du_functor_desc_node_0_0

};

const MR_DuPtagLayout mercury_data_mdb__help__du_ptag_ordered_node_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__help__du_stag_ordered_node_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__help__du_name_ordered_node_0[] = {
	&mercury_data_mdb__help__du_functor_desc_node_0_0
};

const MR_Integer mercury_data_mdb__help__functor_number_map_node_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__help__type_ctor_info_node_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__help__node_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__help__node_0_0)),
	"mdb.help",
	"node",
	{ (void *)mercury_data_mdb__help__du_name_ordered_node_0 },
	{ (void *)mercury_data_mdb__help__du_ptag_ordered_node_0 },
	1,
	4,
	mercury_data_mdb__help__functor_number_map_node_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdb__help__type_ctor_info_path_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__help__path_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__help__path_0_0)),
	"mdb.help",
	"path",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__help__type_ctor_info_system_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__help__system_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__help__system_0_0)),
	"mdb.help",
	"system",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1mdb__help__type_ctor_info_entry_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__help__type_ctor_info_text_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__help__text_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__help__text_0_0)),
	"mdb.help",
	"text",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(mdb__help_module0)
	MR_init_entry1(mdb__help__init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__help__init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__help_module1)
	MR_init_entry1(mdb__help__insert_into_entry_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__insert_into_entry_list_5_0);
	MR_init_label3(mdb__help__insert_into_entry_list_5_0,3,7,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'insert_into_entry_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__help__insert_into_entry_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__help__insert_into_entry_list_5_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
	}
MR_def_label(mdb__help__insert_into_entry_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (((MR_Integer) MR_tempr1 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(mdb__help__insert_into_entry_list_5_0_i6);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(mdb__help__insert_into_entry_list_5_0,
		mdb__help__insert_into_entry_list_5_0_i7);
MR_def_label(mdb__help__insert_into_entry_list_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(mdb__help__insert_into_entry_list_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r3;
	MR_tfield(0, MR_tempr1, 2) = MR_r4;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__help_module2)
	MR_init_entry1(mdb__help__one_path_step_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__one_path_step_3_0);
	MR_init_label2(mdb__help__one_path_step_3_0,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'one_path_step'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__help__one_path_step_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__help__one_path_step_3_0_i1);
	}
	MR_r3 = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(mdb__help__one_path_step_3_0_i3);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__help__one_path_step_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localtailcall(mdb__help__one_path_step_3_0);
MR_def_label(mdb__help__one_path_step_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdb__help_module3)
	MR_init_entry1(mdb__help__replace_entry_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__replace_entry_3_0);
	MR_init_label3(mdb__help__replace_entry_3_0,4,6,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'replace_entry'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__help__replace_entry_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__help__replace_entry_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(1, MR_r1, 1);
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(0, MR_r2, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(mdb__help__replace_entry_3_0_i4);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(mdb__help__replace_entry_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_np_localcall_lab(mdb__help__replace_entry_3_0,
		mdb__help__replace_entry_3_0_i6);
MR_def_label(mdb__help__replace_entry_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(mdb__help__replace_entry_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("replace_entry: entry to be replaced not found", 45);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(mdb__help_module4)
	MR_init_entry1(mdb__help__add_node_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__add_node_7_0);
	MR_init_label10(mdb__help__add_node_7_0,8,6,9,5,15,13,16,12,18,3)
	MR_init_label5(mdb__help__add_node_7_0,23,25,28,21,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_node'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__help__add_node_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__help__add_node_7_0_i3);
	}
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(mdb__help__add_node_7_0_i6);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__help, entry);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		mdb__help__add_node_7_0_i8);
MR_def_label(mdb__help__add_node_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 0);
	if ((MR_sv(4) != MR_r3)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(mdb__help__add_node_7_0_i9);
MR_def_label(mdb__help__add_node_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(mdb__help__add_node_7_0_i5);
MR_def_label(mdb__help__add_node_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(10);
MR_def_label(mdb__help__add_node_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(mdb__help__add_node_7_0_i13);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__help, entry);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_1,
		mdb__help__add_node_7_0_i15);
MR_def_label(mdb__help__add_node_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 1);
	if ((strcmp((char *) (MR_Word *) MR_sv(5), (char *) (MR_Word *) MR_r3) != 0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(mdb__help__add_node_7_0_i16);
MR_def_label(mdb__help__add_node_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(mdb__help__add_node_7_0_i12);
MR_def_label(mdb__help__add_node_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(10);
MR_def_label(mdb__help__add_node_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(mdb__help__insert_into_entry_list_5_0,
		mdb__help__add_node_7_0_i18);
MR_def_label(mdb__help__add_node_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(mdb__help__add_node_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__help__one_path_step_3_0,
		mdb__help__add_node_7_0_i23);
MR_def_label(mdb__help__add_node_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__help__add_node_7_0_i21);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_tempr3 = MR_sv(6);
	MR_tempr4 = MR_tfield(0, MR_r2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 0);
	MR_r1 = MR_tfield(0, MR_tempr4, 1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_localcall_lab(mdb__help__add_node_7_0,
		mdb__help__add_node_7_0_i25);
MR_def_label(mdb__help__add_node_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__help__replace_entry_3_0,
		mdb__help__add_node_7_0_i28);
MR_def_label(mdb__help__add_node_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(mdb__help__add_node_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = (MR_Word) MR_string_const("invalid path component ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		mdb__help__add_node_7_0_i29);
MR_def_label(mdb__help__add_node_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__help_module5)
	MR_init_entry1(mdb__help__add_help_node_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__add_help_node_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_help_node'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__help__add_help_node_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_tempr1;
	MR_np_tailcall_ent(mdb__help__add_node_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_4_0);

MR_BEGIN_MODULE(mdb__help_module6)
	MR_init_entry1(mdb__help__print_entry_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__print_entry_list_4_0);
	MR_init_label3(mdb__help__print_entry_list_4_0,10,4,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'print_entry_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__help__print_entry_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(mdb__help__print_entry_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__help__print_entry_list_4_0_i12);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 2), 0);
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__help__print_entry_list_4_0_i4);
MR_def_label(mdb__help__print_entry_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(mdb__help__print_entry_list_4_0_i10);
MR_def_label(mdb__help__print_entry_list_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__help_module7)
	MR_init_entry1(mdb__help__help_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__help_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'help'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__help__help_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(mdb__help__print_entry_list_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdb__help_module8)
	MR_init_entry1(mdb__help__path_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__path_6_0);
	MR_init_label8(mdb__help__path_6_0,36,3,7,11,10,5,13,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'path'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__help__path_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdb__help__path_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__help__path_6_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_decr_sp_and_return(4);
MR_def_label(mdb__help__path_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__help__one_path_step_3_0,
		mdb__help__path_6_0_i7);
MR_def_label(mdb__help__path_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__help__path_6_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(mdb__help__path_6_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tfield(0, MR_r2, 2), 0);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__help__path_6_0_i11);
MR_def_label(mdb__help__path_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(mdb__help__path_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_r2, 2), 1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdb__help__path_6_0_i36);
MR_def_label(mdb__help__path_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("\"", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__help__path_6_0_i13);
MR_def_label(mdb__help__path_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("error at path component \"", 25);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdb__help__path_6_0_i14);
MR_def_label(mdb__help__path_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__help_module9)
	MR_init_entry1(mdb__help__search_entry_list_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__search_entry_list_7_0);
	MR_init_label5(mdb__help__search_entry_list_7_0,16,3,5,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_entry_list'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__help__search_entry_list_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdb__help__search_entry_list_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__help__search_entry_list_7_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(mdb__help__search_entry_list_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r6 = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if ((strcmp((char *) (MR_Word *) MR_r2, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(mdb__help__search_entry_list_7_0_i4);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = MR_tfield(0, MR_r6, 0);
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__help__search_entry_list_7_0_i5);
MR_def_label(mdb__help__search_entry_list_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_decr_sp_and_return(4);
MR_def_label(mdb__help__search_entry_list_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_r6;
	MR_np_call_localret_ent(mdb__help__search_node_7_0,
		mdb__help__search_entry_list_7_0_i6);
MR_def_label(mdb__help__search_entry_list_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdb__help__search_entry_list_7_0_i16);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__help_module10)
	MR_init_entry1(mdb__help__search_node_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__search_node_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'search_node'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__help__search_node_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_tailcall_ent(mdb__help__search_entry_list_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(mdb__help_module11)
	MR_init_entry1(mdb__help__name_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__name_5_0);
	MR_init_label3(mdb__help__name_5_0,2,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'name'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__help__name_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(mdb__help__search_entry_list_7_0,
		mdb__help__name_5_0_i2);
MR_def_label(mdb__help__name_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__help__name_5_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("There is no such help topic.\n", 29);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__help__name_5_0_i5);
MR_def_label(mdb__help__name_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(mdb__help__print_entry_list_4_0);
MR_def_label(mdb__help__name_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__type_desc__type_of_1_0);

MR_BEGIN_MODULE(mdb__help_module12)
	MR_init_entry1(mdb__help__help_system_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__help_system_type_1_0);
	MR_init_label1(mdb__help__help_system_type_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'help_system_type'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__help__help_system_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__type_desc__type_of_1_0,
		mdb__help__help_system_type_1_0_i3);
MR_def_label(mdb__help__help_system_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__help_module13)
	MR_init_entry1(mdb__help__result_is_error_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__help__result_is_error_2_0);
	MR_init_label1(mdb__help__result_is_error_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'result_is_error'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__help__result_is_error_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__help__result_is_error_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__help__result_is_error_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__help_module14)
	MR_init_entry1(__Unify___mdb__help__entry_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__help__entry_0_0);
	MR_init_label2(__Unify___mdb__help__entry_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__help__entry_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__help__entry_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdb__help__entry_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__help__entry_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__help__node_0_0);
	}
MR_def_label(__Unify___mdb__help__entry_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__help__entry_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdb__help_module15)
	MR_init_entry1(__Compare___mdb__help__entry_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__help__entry_0_0);
	MR_init_label5(__Compare___mdb__help__entry_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__help__entry_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__help__entry_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__help__entry_0_0_i2);
MR_def_label(__Compare___mdb__help__entry_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__help__entry_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___mdb__help__entry_0_0_i5);
MR_def_label(__Compare___mdb__help__entry_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__help__entry_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__help__entry_0_0_i9);
MR_def_label(__Compare___mdb__help__entry_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__help__entry_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdb__help__node_0_0);
MR_def_label(__Compare___mdb__help__entry_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__help_module16)
	MR_init_entry1(__Unify___mdb__help__help_res_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__help__help_res_0_0);
	MR_init_label3(__Unify___mdb__help__help_res_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__help__help_res_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__help__help_res_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdb__help__help_res_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__help__help_res_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__help__help_res_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mdb__help__help_res_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___mdb__help__help_res_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__help_module17)
	MR_init_entry1(__Compare___mdb__help__help_res_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__help__help_res_0_0);
	MR_init_label4(__Compare___mdb__help__help_res_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__help__help_res_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__help__help_res_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__help__help_res_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__help__help_res_0_0_i7);
	}
MR_def_label(__Compare___mdb__help__help_res_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__help__help_res_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__help__help_res_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__help__help_res_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__help__help_res_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdb__help_module18)
	MR_init_entry1(__Unify___mdb__help__node_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__help__node_0_0);
	MR_init_label2(__Unify___mdb__help__node_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__help__node_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__help__node_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__help__node_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__help, entry);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdb__help__node_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__help__node_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(mdb__help_module19)
	MR_init_entry1(__Compare___mdb__help__node_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__help__node_0_0);
	MR_init_label4(__Compare___mdb__help__node_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__help__node_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__help__node_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__help__node_0_0_i2);
MR_def_label(__Compare___mdb__help__node_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__help__node_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__help__node_0_0_i5);
MR_def_label(__Compare___mdb__help__node_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__help__node_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__help, entry);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__help__node_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

MR_BEGIN_MODULE(mdb__help_module20)
	MR_init_entry1(__Unify___mdb__help__path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__help__path_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__help__path_0_0);
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


MR_BEGIN_MODULE(mdb__help_module21)
	MR_init_entry1(__Compare___mdb__help__path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__help__path_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__help__path_0_0);
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


MR_BEGIN_MODULE(mdb__help_module22)
	MR_init_entry1(__Unify___mdb__help__system_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__help__system_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__help__system_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__help, entry);
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


MR_BEGIN_MODULE(mdb__help_module23)
	MR_init_entry1(__Compare___mdb__help__system_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__help__system_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__help__system_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__help, entry);
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


MR_BEGIN_MODULE(mdb__help_module24)
	MR_init_entry1(__Unify___mdb__help__text_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__help__text_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__help__text_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__help_module25)
	MR_init_entry1(__Compare___mdb__help__text_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__help__text_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__help__text_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__mdb__help__result_is_error_2_0);

MR_bool
ML_HELP_result_is_error(MR_Word Mercury__argument1, MR_String * Mercury__argument2);

MR_bool
ML_HELP_result_is_error(MR_Word Mercury__argument1, MR_String * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__help__result_is_error_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__help__result_is_error_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	if (!MR_r1) {
		MR_restore_regs_from_mem(c_regs);
	return MR_FALSE;
	}
	*Mercury__argument2 = (MR_String) MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return MR_TRUE;
}


MR_declare_entry(mercury__mdb__help__help_system_type_1_0);

void
ML_HELP_help_system_type(MR_Word * Mercury__argument1);

void
ML_HELP_help_system_type(MR_Word * Mercury__argument1)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__help__help_system_type_1_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__help__help_system_type_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument1 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__mdb__help__name_5_0);

void
ML_HELP_name(MR_Word Mercury__argument1, MR_String Mercury__argument2, MR_Word Mercury__argument3);

void
ML_HELP_name(MR_Word Mercury__argument1, MR_String Mercury__argument2, MR_Word Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__help__name_5_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = (MR_Word) Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__help__name_5_0), MR_FALSE);
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


MR_declare_entry(mercury__mdb__help__path_6_0);

void
ML_HELP_path(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word * Mercury__argument4);

void
ML_HELP_path(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3, MR_Word * Mercury__argument4)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__help__path_6_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__help__path_6_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument4 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__mdb__help__help_4_0);

void
ML_HELP_help(MR_Word Mercury__argument1, MR_Word Mercury__argument2);

void
ML_HELP_help(MR_Word Mercury__argument1, MR_Word Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__help__help_4_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__help__help_4_0), MR_FALSE);
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


MR_declare_entry(mercury__mdb__help__add_help_node_7_0);

void
ML_HELP_add_help_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Integer Mercury__argument3, MR_String Mercury__argument4, MR_String Mercury__argument5, MR_Word * Mercury__argument6, MR_Word * Mercury__argument7);

void
ML_HELP_add_help_node(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Integer Mercury__argument3, MR_String Mercury__argument4, MR_String Mercury__argument5, MR_Word * Mercury__argument6, MR_Word * Mercury__argument7)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__help__add_help_node_7_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = (MR_Word) Mercury__argument4;
	MR_r5 = (MR_Word) Mercury__argument5;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__help__add_help_node_7_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument6 = MR_r1;
	*Mercury__argument7 = MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__mdb__help__init_1_0);

void
ML_HELP_init(MR_Word * Mercury__argument1);

void
ML_HELP_init(MR_Word * Mercury__argument1)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__help__init_1_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__help__init_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument1 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__mdb__help_maybe_bunch_0(void)
{
	mdb__help_module0();
	mdb__help_module1();
	mdb__help_module2();
	mdb__help_module3();
	mdb__help_module4();
	mdb__help_module5();
	mdb__help_module6();
	mdb__help_module7();
	mdb__help_module8();
	mdb__help_module9();
	mdb__help_module10();
	mdb__help_module11();
	mdb__help_module12();
	mdb__help_module13();
	mdb__help_module14();
	mdb__help_module15();
	mdb__help_module16();
	mdb__help_module17();
	mdb__help_module18();
	mdb__help_module19();
	mdb__help_module20();
	mdb__help_module21();
	mdb__help_module22();
	mdb__help_module23();
	mdb__help_module24();
	mdb__help_module25();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__help__init(void);
void mercury__mdb__help__init_type_tables(void);
void mercury__mdb__help__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__help__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__help__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__help__init_threadscope_string_table(void);
#endif

void mercury__mdb__help__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__help_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__help__type_ctor_info_entry_0,
		mdb__help__entry_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__help__type_ctor_info_help_res_0,
		mdb__help__help_res_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__help__type_ctor_info_node_0,
		mdb__help__node_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__help__type_ctor_info_path_0,
		mdb__help__path_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__help__type_ctor_info_system_0,
		mdb__help__system_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__help__type_ctor_info_text_0,
		mdb__help__text_0_0);
	mercury__mdb__help__init_debugger();
}

void mercury__mdb__help__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__help__type_ctor_info_entry_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__help__type_ctor_info_help_res_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__help__type_ctor_info_node_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__help__type_ctor_info_path_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__help__type_ctor_info_system_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__help__type_ctor_info_text_0);
	}
}


void mercury__mdb__help__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__help__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__help);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__help__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__help__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
