/*
** Automatically generated from `globals.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__globals__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 520 "../library/io.int"
#include "io.mh"

#line 27 "globals.c"
#line 526 "../library/io.int"
#include "string.mh"

#line 31 "globals.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "globals.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "globals.c"
#line 40 "globals.c"
#include "globals.mh"

#line 43 "globals.c"
#line 44 "globals.c"
#ifndef GLOBALS_DECL_GUARD
#define GLOBALS_DECL_GUARD

#line 48 "globals.c"
#line 49 "globals.c"

#endif
#line 52 "globals.c"


struct mercury_type_0 {
	MR_String f1;
};
static const struct mercury_type_0 mercury_vector_common_0_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_globals__type_ctor_info_what_to_profile_0,
	mercury_data_globals__type_ctor_info_globals_0;
MR_decl_label3(globals__io_get_globals_3_0, 2,4,3)
MR_decl_label1(globals__io_init_3_0, 2)
MR_decl_label4(globals__io_lookup_accumulating_option_4_0, 2,4,3,7)
MR_decl_label4(globals__io_lookup_bool_option_4_0, 2,4,3,7)
MR_decl_label4(globals__io_lookup_int_option_4_0, 2,4,3,7)
MR_decl_label4(globals__io_lookup_option_4_0, 2,4,3,7)
MR_decl_label4(globals__io_lookup_string_option_4_0, 2,4,3,7)
MR_decl_label1(globals__io_set_globals_3_0, 2)
MR_decl_label6(globals__io_set_option_4_0, 2,4,3,7,8,9)
MR_decl_label2(globals__lookup_accumulating_option_3_0, 2,3)
MR_decl_label2(globals__lookup_bool_option_3_0, 2,3)
MR_decl_label2(globals__lookup_int_option_3_0, 2,3)
MR_decl_label2(globals__lookup_string_option_3_0, 2,3)
MR_decl_label5(globals__what_to_profile_2_0, 3,4,5,6,1)
MR_decl_label1(__Unify___globals__globals_0_0, 1)
MR_decl_label2(__Compare___globals__globals_0_0, 3,7)
MR_def_extern_entry(globals__what_to_profile_2_0)
MR_def_extern_entry(globals__what_to_profile_2_1)
MR_def_extern_entry(globals__init_2_0)
MR_def_extern_entry(globals__get_what_to_profile_2_0)
MR_def_extern_entry(globals__get_options_2_0)
MR_def_extern_entry(globals__set_what_to_profile_3_0)
MR_def_extern_entry(globals__set_options_3_0)
MR_def_extern_entry(globals__lookup_option_3_0)
MR_def_extern_entry(globals__lookup_bool_option_3_0)
MR_def_extern_entry(globals__lookup_int_option_3_0)
MR_def_extern_entry(globals__lookup_string_option_3_0)
MR_def_extern_entry(globals__lookup_accumulating_option_3_0)
MR_def_extern_entry(globals__io_set_globals_3_0)
MR_def_extern_entry(globals__io_init_3_0)
MR_def_extern_entry(globals__io_get_globals_3_0)
MR_def_extern_entry(globals__io_lookup_option_4_0)
MR_def_extern_entry(globals__io_set_option_4_0)
MR_def_extern_entry(globals__io_lookup_bool_option_4_0)
MR_def_extern_entry(globals__io_lookup_int_option_4_0)
MR_def_extern_entry(globals__io_lookup_string_option_4_0)
MR_def_extern_entry(globals__io_lookup_accumulating_option_4_0)
MR_def_extern_entry(__Unify___globals__globals_0_0)
MR_def_extern_entry(__Compare___globals__globals_0_0)
MR_def_extern_entry(__Unify___globals__what_to_profile_0_0)
MR_def_extern_entry(__Compare___globals__what_to_profile_0_0)

static const struct mercury_type_0 mercury_vector_common_0_0[5] =
{
{
MR_string_const("memory-words", 12)
},
{
MR_string_const("memory-cells", 12)
},
{
MR_string_const("user-plus-system-time", 21)
},
{
MR_string_const("user-time", 9)
},
{
MR_string_const("real-time", 9)
},
};

static const MR_EnumFunctorDesc mercury_data_globals__enum_functor_desc_what_to_profile_0_0 = {
	"memory_words",
	0
};

static const MR_EnumFunctorDesc mercury_data_globals__enum_functor_desc_what_to_profile_0_1 = {
	"memory_cells",
	1
};

static const MR_EnumFunctorDesc mercury_data_globals__enum_functor_desc_what_to_profile_0_2 = {
	"user_plus_system_time",
	2
};

static const MR_EnumFunctorDesc mercury_data_globals__enum_functor_desc_what_to_profile_0_3 = {
	"user_time",
	3
};

static const MR_EnumFunctorDesc mercury_data_globals__enum_functor_desc_what_to_profile_0_4 = {
	"real_time",
	4
};

const MR_EnumFunctorDescPtr mercury_data_globals__enum_value_ordered_what_to_profile_0[] = {
	&mercury_data_globals__enum_functor_desc_what_to_profile_0_0,
	&mercury_data_globals__enum_functor_desc_what_to_profile_0_1,
	&mercury_data_globals__enum_functor_desc_what_to_profile_0_2,
	&mercury_data_globals__enum_functor_desc_what_to_profile_0_3,
	&mercury_data_globals__enum_functor_desc_what_to_profile_0_4
};

const MR_EnumFunctorDescPtr mercury_data_globals__enum_name_ordered_what_to_profile_0[] = {
	&mercury_data_globals__enum_functor_desc_what_to_profile_0_1,
	&mercury_data_globals__enum_functor_desc_what_to_profile_0_0,
	&mercury_data_globals__enum_functor_desc_what_to_profile_0_4,
	&mercury_data_globals__enum_functor_desc_what_to_profile_0_2,
	&mercury_data_globals__enum_functor_desc_what_to_profile_0_3
};

const MR_Integer mercury_data_globals__functor_number_map_what_to_profile_0[] = {
	1,
	0,
	3,
	4,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_globals__type_ctor_info_what_to_profile_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___globals__what_to_profile_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___globals__what_to_profile_0_0)),
	"globals",
	"what_to_profile",
	{ (void *)mercury_data_globals__enum_name_ordered_what_to_profile_0 },
	{ (void *)mercury_data_globals__enum_value_ordered_what_to_profile_0 },
	5,
	4,
	mercury_data_globals__functor_number_map_what_to_profile_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_options__type_ctor_info_option_0;
extern const MR_TypeCtorInfo_Struct mercury_data_getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_options__type_ctor_info_option_0,
	(MR_TypeInfo) &mercury_data_getopt__type_ctor_info_option_data_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_globals__type_ctor_info_what_to_profile_0;

const MR_PseudoTypeInfo mercury_data_globals__field_types_globals_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_globals__type_ctor_info_what_to_profile_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0
};

const MR_ConstString mercury_data_globals__field_names_globals_0_0[] = {
	"what_to_profile",
	"option_table"
};

static const MR_DuFunctorDesc mercury_data_globals__du_functor_desc_globals_0_0 = {
	"globals",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_globals__field_types_globals_0_0,
	mercury_data_globals__field_names_globals_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_globals__du_stag_ordered_globals_0_0[] = {
	&mercury_data_globals__du_functor_desc_globals_0_0

};

const MR_DuPtagLayout mercury_data_globals__du_ptag_ordered_globals_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_globals__du_stag_ordered_globals_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_globals__du_name_ordered_globals_0[] = {
	&mercury_data_globals__du_functor_desc_globals_0_0
};

const MR_Integer mercury_data_globals__functor_number_map_globals_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_globals__type_ctor_info_globals_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___globals__globals_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___globals__globals_0_0)),
	"globals",
	"globals",
	{ (void *)mercury_data_globals__du_name_ordered_globals_0 },
	{ (void *)mercury_data_globals__du_ptag_ordered_globals_0 },
	1,
	4,
	mercury_data_globals__functor_number_map_globals_0
};


MR_BEGIN_MODULE(globals_module0)
	MR_init_entry1(globals__what_to_profile_2_0);
	MR_init_label5(globals__what_to_profile_2_0,3,4,5,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__what_to_profile_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("memory-cells", 12)) != 0)) {
		MR_GOTO_LAB(globals__what_to_profile_2_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(globals__what_to_profile_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("memory-words", 12)) != 0)) {
		MR_GOTO_LAB(globals__what_to_profile_2_0_i4);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(globals__what_to_profile_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("real-time", 9)) != 0)) {
		MR_GOTO_LAB(globals__what_to_profile_2_0_i5);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(globals__what_to_profile_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("user-plus-system-time", 21)) != 0)) {
		MR_GOTO_LAB(globals__what_to_profile_2_0_i6);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(globals__what_to_profile_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("user-time", 9)) != 0)) {
		MR_GOTO_LAB(globals__what_to_profile_2_0_i1);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(globals__what_to_profile_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module1)
	MR_init_entry1(globals__what_to_profile_2_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__what_to_profile_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = (MR_Word) (MR_Word *) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, MR_r1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module2)
	MR_init_entry1(globals__init_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__init_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module3)
	MR_init_entry1(globals__get_what_to_profile_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__get_what_to_profile_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module4)
	MR_init_entry1(globals__get_options_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__get_options_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module5)
	MR_init_entry1(globals__set_what_to_profile_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__set_what_to_profile_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r2, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module6)
	MR_init_entry1(globals__set_options_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__set_options_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(globals_module7)
	MR_init_entry1(globals__lookup_option_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__lookup_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_np_tailcall_ent(map__lookup_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(globals_module8)
	MR_init_entry1(globals__lookup_bool_option_3_0);
	MR_init_label2(globals__lookup_bool_option_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__lookup_bool_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		globals__lookup_bool_option_3_0_i2);
MR_def_label(globals__lookup_bool_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(globals__lookup_bool_option_3_0_i3);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(globals__lookup_bool_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.lookup_bool_option: invalid bool option", 47);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module9)
	MR_init_entry1(globals__lookup_int_option_3_0);
	MR_init_label2(globals__lookup_int_option_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__lookup_int_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		globals__lookup_int_option_3_0_i2);
MR_def_label(globals__lookup_int_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(globals__lookup_int_option_3_0_i3);
	}
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_decr_sp_and_return(1);
MR_def_label(globals__lookup_int_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.lookup_int_option: invalid int option", 45);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module10)
	MR_init_entry1(globals__lookup_string_option_3_0);
	MR_init_label2(globals__lookup_string_option_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__lookup_string_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		globals__lookup_string_option_3_0_i2);
MR_def_label(globals__lookup_string_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(globals__lookup_string_option_3_0_i3);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(globals__lookup_string_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.lookup_string_option: invalid string option", 51);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module11)
	MR_init_entry1(globals__lookup_accumulating_option_3_0);
	MR_init_label2(globals__lookup_accumulating_option_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__lookup_accumulating_option_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		globals__lookup_accumulating_option_3_0_i2);
MR_def_label(globals__lookup_accumulating_option_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(globals__lookup_accumulating_option_3_0_i3);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_decr_sp_and_return(1);
MR_def_label(globals__lookup_accumulating_option_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.lookup_accumulating_option: invalid accumulating option", 63);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__type_to_univ_2_0);
MR_decl_entry(io__set_globals_3_0);

MR_BEGIN_MODULE(globals_module12)
	MR_init_entry1(globals__io_set_globals_3_0);
	MR_init_label1(globals__io_set_globals_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__io_set_globals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(globals, globals);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		globals__io_set_globals_3_0_i2);
MR_def_label(globals__io_set_globals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__set_globals_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module13)
	MR_init_entry1(globals__io_init_3_0);
	MR_init_label1(globals__io_init_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__io_init_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(globals, globals);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		globals__io_init_3_0_i2);
MR_def_label(globals__io_init_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__set_globals_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__get_globals_3_0);
MR_decl_entry(univ__univ_to_type_2_0);

MR_BEGIN_MODULE(globals_module14)
	MR_init_entry1(globals__io_get_globals_3_0);
	MR_init_label3(globals__io_get_globals_3_0,2,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__io_get_globals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(io__get_globals_3_0,
		globals__io_get_globals_3_0_i2);
MR_def_label(globals__io_get_globals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(globals, globals);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		globals__io_get_globals_3_0_i4);
MR_def_label(globals__io_get_globals_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(globals__io_get_globals_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(globals__io_get_globals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.io_get_globals: univ_to_type failed", 43);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module15)
	MR_init_entry1(globals__io_lookup_option_4_0);
	MR_init_label4(globals__io_lookup_option_4_0,2,4,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__io_lookup_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__get_globals_3_0,
		globals__io_lookup_option_4_0_i2);
MR_def_label(globals__io_lookup_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(globals, globals);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		globals__io_lookup_option_4_0_i4);
MR_def_label(globals__io_lookup_option_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(globals__io_lookup_option_4_0_i3);
	}
	MR_r4 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(map__lookup_3_0);
MR_def_label(globals__io_lookup_option_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.io_get_globals: univ_to_type failed", 43);
	MR_np_call_localret_ent(require__error_1_0,
		globals__io_lookup_option_4_0_i7);
MR_def_label(globals__io_lookup_option_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(map__lookup_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(globals_module16)
	MR_init_entry1(globals__io_set_option_4_0);
	MR_init_label6(globals__io_set_option_4_0,2,4,3,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__io_set_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(io__get_globals_3_0,
		globals__io_set_option_4_0_i2);
MR_def_label(globals__io_set_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(globals, globals);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		globals__io_set_option_4_0_i4);
MR_def_label(globals__io_set_option_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(globals__io_set_option_4_0_i3);
	}
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	}
	MR_np_call_localret_ent(map__set_4_0,
		globals__io_set_option_4_0_i8);
MR_def_label(globals__io_set_option_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.io_get_globals: univ_to_type failed", 43);
	MR_np_call_localret_ent(require__error_1_0,
		globals__io_set_option_4_0_i7);
MR_def_label(globals__io_set_option_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(map__set_4_0,
		globals__io_set_option_4_0_i8);
MR_def_label(globals__io_set_option_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_sv(1), 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(globals, globals);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		globals__io_set_option_4_0_i9);
MR_def_label(globals__io_set_option_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__set_globals_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module17)
	MR_init_entry1(globals__io_lookup_bool_option_4_0);
	MR_init_label4(globals__io_lookup_bool_option_4_0,2,4,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__io_lookup_bool_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__get_globals_3_0,
		globals__io_lookup_bool_option_4_0_i2);
MR_def_label(globals__io_lookup_bool_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(globals, globals);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		globals__io_lookup_bool_option_4_0_i4);
MR_def_label(globals__io_lookup_bool_option_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(globals__io_lookup_bool_option_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(globals__lookup_bool_option_3_0);
MR_def_label(globals__io_lookup_bool_option_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.io_get_globals: univ_to_type failed", 43);
	MR_np_call_localret_ent(require__error_1_0,
		globals__io_lookup_bool_option_4_0_i7);
MR_def_label(globals__io_lookup_bool_option_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(globals__lookup_bool_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module18)
	MR_init_entry1(globals__io_lookup_int_option_4_0);
	MR_init_label4(globals__io_lookup_int_option_4_0,2,4,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__io_lookup_int_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__get_globals_3_0,
		globals__io_lookup_int_option_4_0_i2);
MR_def_label(globals__io_lookup_int_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(globals, globals);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		globals__io_lookup_int_option_4_0_i4);
MR_def_label(globals__io_lookup_int_option_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(globals__io_lookup_int_option_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(globals__lookup_int_option_3_0);
MR_def_label(globals__io_lookup_int_option_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.io_get_globals: univ_to_type failed", 43);
	MR_np_call_localret_ent(require__error_1_0,
		globals__io_lookup_int_option_4_0_i7);
MR_def_label(globals__io_lookup_int_option_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(globals__lookup_int_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module19)
	MR_init_entry1(globals__io_lookup_string_option_4_0);
	MR_init_label4(globals__io_lookup_string_option_4_0,2,4,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__io_lookup_string_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__get_globals_3_0,
		globals__io_lookup_string_option_4_0_i2);
MR_def_label(globals__io_lookup_string_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(globals, globals);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		globals__io_lookup_string_option_4_0_i4);
MR_def_label(globals__io_lookup_string_option_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(globals__io_lookup_string_option_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(globals__lookup_string_option_3_0);
MR_def_label(globals__io_lookup_string_option_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.io_get_globals: univ_to_type failed", 43);
	MR_np_call_localret_ent(require__error_1_0,
		globals__io_lookup_string_option_4_0_i7);
MR_def_label(globals__io_lookup_string_option_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(globals__lookup_string_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module20)
	MR_init_entry1(globals__io_lookup_accumulating_option_4_0);
	MR_init_label4(globals__io_lookup_accumulating_option_4_0,2,4,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__globals__io_lookup_accumulating_option_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(io__get_globals_3_0,
		globals__io_lookup_accumulating_option_4_0_i2);
MR_def_label(globals__io_lookup_accumulating_option_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(globals, globals);
	MR_np_call_localret_ent(univ__univ_to_type_2_0,
		globals__io_lookup_accumulating_option_4_0_i4);
MR_def_label(globals__io_lookup_accumulating_option_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(globals__io_lookup_accumulating_option_4_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(globals__lookup_accumulating_option_3_0);
MR_def_label(globals__io_lookup_accumulating_option_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("globals.io_get_globals: univ_to_type failed", 43);
	MR_np_call_localret_ent(require__error_1_0,
		globals__io_lookup_accumulating_option_4_0_i7);
MR_def_label(globals__io_lookup_accumulating_option_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(globals__lookup_accumulating_option_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(globals_module21)
	MR_init_entry1(__Unify___globals__globals_0_0);
	MR_init_label1(__Unify___globals__globals_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___globals__globals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___globals__globals_0_0_i1);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
MR_def_label(__Unify___globals__globals_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(globals_module22)
	MR_init_entry1(__Compare___globals__globals_0_0);
	MR_init_label2(__Compare___globals__globals_0_0,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___globals__globals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___globals__globals_0_0_i3);
MR_def_label(__Compare___globals__globals_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___globals__globals_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(options, option);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(getopt, option_data);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___globals__globals_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module23)
	MR_init_entry1(__Unify___globals__what_to_profile_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___globals__what_to_profile_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(globals_module24)
	MR_init_entry1(__Compare___globals__what_to_profile_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___globals__what_to_profile_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__globals_maybe_bunch_0(void)
{
	globals_module0();
	globals_module1();
	globals_module2();
	globals_module3();
	globals_module4();
	globals_module5();
	globals_module6();
	globals_module7();
	globals_module8();
	globals_module9();
	globals_module10();
	globals_module11();
	globals_module12();
	globals_module13();
	globals_module14();
	globals_module15();
	globals_module16();
	globals_module17();
	globals_module18();
	globals_module19();
	globals_module20();
	globals_module21();
	globals_module22();
	globals_module23();
	globals_module24();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__globals__init(void);
void mercury__globals__init_type_tables(void);
void mercury__globals__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__globals__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__globals__init_complexity_procs(void);
#endif

void mercury__globals__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__globals_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_globals__type_ctor_info_what_to_profile_0,
		globals__what_to_profile_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_globals__type_ctor_info_globals_0,
		globals__globals_0_0);
	mercury__globals__init_debugger();
}

void mercury__globals__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_globals__type_ctor_info_what_to_profile_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_globals__type_ctor_info_globals_0);
	}
}


void mercury__globals__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__globals__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__globals__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
