/*
** Automatically generated from `output_prof_info.m'
** by the Mercury compiler,
** version rotd-2010-03-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__output_prof_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 28 "output_prof_info.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 32 "output_prof_info.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "output_prof_info.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "output_prof_info.c"
#line 41 "output_prof_info.c"
#include "output_prof_info.mh"

#line 44 "output_prof_info.c"
#line 45 "output_prof_info.c"
#ifndef OUTPUT_PROF_INFO_DECL_GUARD
#define OUTPUT_PROF_INFO_DECL_GUARD

#line 49 "output_prof_info.c"
#line 50 "output_prof_info.c"

#endif
#line 53 "output_prof_info.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_output_prof_info__type_ctor_info_child_0,
	mercury_data_output_prof_info__type_ctor_info_output_0,
	mercury_data_output_prof_info__type_ctor_info_output_prof_0,
	mercury_data_output_prof_info__type_ctor_info_parent_0;
MR_decl_label2(__Unify___output_prof_info__child_0_0, 4,1)
MR_decl_label4(__Unify___output_prof_info__output_0_0, 4,6,10,1)
MR_decl_label7(__Unify___output_prof_info__output_prof_0_0, 7,32,5,12,14,16,1)
MR_decl_label2(__Unify___output_prof_info__parent_0_0, 4,1)
MR_decl_label8(__Compare___output_prof_info__child_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label5(__Compare___output_prof_info__output_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___output_prof_info__output_prof_0_0, 3,2,9,13,17,21,25,29,33,37)
MR_decl_label10(__Compare___output_prof_info__output_prof_0_0, 7,5,50,52,56,60,64,68,72,76)
MR_decl_label5(__Compare___output_prof_info__output_prof_0_0, 80,84,88,92,207)
MR_decl_label7(__Compare___output_prof_info__parent_0_0, 3,2,5,9,13,17,45)
MR_def_extern_entry(__Unify___output_prof_info__child_0_0)
MR_def_extern_entry(__Compare___output_prof_info__child_0_0)
MR_def_extern_entry(__Unify___output_prof_info__output_0_0)
MR_def_extern_entry(__Compare___output_prof_info__output_0_0)
MR_def_extern_entry(__Unify___output_prof_info__output_prof_0_0)
MR_def_extern_entry(__Compare___output_prof_info__output_prof_0_0)
MR_def_extern_entry(__Unify___output_prof_info__parent_0_0)
MR_def_extern_entry(__Compare___output_prof_info__parent_0_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_output_prof_info__field_types_child_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_output_prof_info__du_functor_desc_child_0_0 = {
	"child",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_output_prof_info__field_types_child_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_output_prof_info__du_stag_ordered_child_0_0[] = {
	&mercury_data_output_prof_info__du_functor_desc_child_0_0

};

const MR_DuPtagLayout mercury_data_output_prof_info__du_ptag_ordered_child_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_output_prof_info__du_stag_ordered_child_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_output_prof_info__du_name_ordered_child_0[] = {
	&mercury_data_output_prof_info__du_functor_desc_child_0_0
};

const MR_Integer mercury_data_output_prof_info__functor_number_map_child_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_child_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___output_prof_info__child_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___output_prof_info__child_0_0)),
	"output_prof_info",
	"child",
	{ (void *)mercury_data_output_prof_info__du_name_ordered_child_0 },
	{ (void *)mercury_data_output_prof_info__du_ptag_ordered_child_0 },
	1,
	4,
	mercury_data_output_prof_info__functor_number_map_child_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_output_prof_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_output_prof_info__type_ctor_info_output_prof_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_output_prof_info__field_types_output_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_output_prof_info__du_functor_desc_output_0_0 = {
	"output",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_output_prof_info__field_types_output_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_output_prof_info__du_stag_ordered_output_0_0[] = {
	&mercury_data_output_prof_info__du_functor_desc_output_0_0

};

const MR_DuPtagLayout mercury_data_output_prof_info__du_ptag_ordered_output_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_output_prof_info__du_stag_ordered_output_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_output_prof_info__du_name_ordered_output_0[] = {
	&mercury_data_output_prof_info__du_functor_desc_output_0_0
};

const MR_Integer mercury_data_output_prof_info__functor_number_map_output_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_output_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___output_prof_info__output_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___output_prof_info__output_0_0)),
	"output_prof_info",
	"output",
	{ (void *)mercury_data_output_prof_info__du_name_ordered_output_0 },
	{ (void *)mercury_data_output_prof_info__du_ptag_ordered_output_0 },
	1,
	4,
	mercury_data_output_prof_info__functor_number_map_output_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_parent_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1output_prof_info__type_ctor_info_parent_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_output_prof_info__type_ctor_info_parent_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_child_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1output_prof_info__type_ctor_info_child_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_output_prof_info__type_ctor_info_child_0
}};

const MR_PseudoTypeInfo mercury_data_output_prof_info__field_types_output_prof_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1output_prof_info__type_ctor_info_parent_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1output_prof_info__type_ctor_info_child_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1output_prof_info__type_ctor_info_parent_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1output_prof_info__type_ctor_info_child_0
};

static const MR_DuFunctorDesc mercury_data_output_prof_info__du_functor_desc_output_prof_0_0 = {
	"output_prof",
	12,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_output_prof_info__field_types_output_prof_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_output_prof_info__field_types_output_prof_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1output_prof_info__type_ctor_info_parent_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1output_prof_info__type_ctor_info_child_0
};

static const MR_DuFunctorDesc mercury_data_output_prof_info__du_functor_desc_output_prof_0_1 = {
	"output_cycle_prof",
	9,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_output_prof_info__field_types_output_prof_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_output_prof_info__du_stag_ordered_output_prof_0_0[] = {
	&mercury_data_output_prof_info__du_functor_desc_output_prof_0_0

};

const MR_DuFunctorDescPtr mercury_data_output_prof_info__du_stag_ordered_output_prof_0_1[] = {
	&mercury_data_output_prof_info__du_functor_desc_output_prof_0_1

};

const MR_DuPtagLayout mercury_data_output_prof_info__du_ptag_ordered_output_prof_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_output_prof_info__du_stag_ordered_output_prof_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_output_prof_info__du_stag_ordered_output_prof_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_output_prof_info__du_name_ordered_output_prof_0[] = {
	&mercury_data_output_prof_info__du_functor_desc_output_prof_0_1,
	&mercury_data_output_prof_info__du_functor_desc_output_prof_0_0
};

const MR_Integer mercury_data_output_prof_info__functor_number_map_output_prof_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_output_prof_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___output_prof_info__output_prof_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___output_prof_info__output_prof_0_0)),
	"output_prof_info",
	"output_prof",
	{ (void *)mercury_data_output_prof_info__du_name_ordered_output_prof_0 },
	{ (void *)mercury_data_output_prof_info__du_ptag_ordered_output_prof_0 },
	2,
	4,
	mercury_data_output_prof_info__functor_number_map_output_prof_0
};

const MR_PseudoTypeInfo mercury_data_output_prof_info__field_types_parent_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_output_prof_info__du_functor_desc_parent_0_0 = {
	"parent",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_output_prof_info__field_types_parent_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_output_prof_info__du_stag_ordered_parent_0_0[] = {
	&mercury_data_output_prof_info__du_functor_desc_parent_0_0

};

const MR_DuPtagLayout mercury_data_output_prof_info__du_ptag_ordered_parent_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_output_prof_info__du_stag_ordered_parent_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_output_prof_info__du_name_ordered_parent_0[] = {
	&mercury_data_output_prof_info__du_functor_desc_parent_0_0
};

const MR_Integer mercury_data_output_prof_info__functor_number_map_parent_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_parent_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___output_prof_info__parent_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___output_prof_info__parent_0_0)),
	"output_prof_info",
	"parent",
	{ (void *)mercury_data_output_prof_info__du_name_ordered_parent_0 },
	{ (void *)mercury_data_output_prof_info__du_ptag_ordered_parent_0 },
	1,
	4,
	mercury_data_output_prof_info__functor_number_map_parent_0
};




MR_BEGIN_MODULE(output_prof_info_module0)
	MR_init_entry1(__Unify___output_prof_info__child_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___output_prof_info__child_0_0);
	MR_init_label2(__Unify___output_prof_info__child_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___output_prof_info__child_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__child_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___output_prof_info__child_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__child_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__child_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__child_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__child_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___output_prof_info__child_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___output_prof_info__child_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(output_prof_info_module1)
	MR_init_entry1(__Compare___output_prof_info__child_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___output_prof_info__child_0_0);
	MR_init_label8(__Compare___output_prof_info__child_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___output_prof_info__child_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___output_prof_info__child_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___output_prof_info__child_0_0_i2);
MR_def_label(__Compare___output_prof_info__child_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___output_prof_info__child_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___output_prof_info__child_0_0_i5);
MR_def_label(__Compare___output_prof_info__child_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__child_0_0_i53);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__child_0_0_i9);
MR_def_label(__Compare___output_prof_info__child_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__child_0_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__child_0_0_i13);
MR_def_label(__Compare___output_prof_info__child_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__child_0_0_i53);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__child_0_0_i17);
MR_def_label(__Compare___output_prof_info__child_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__child_0_0_i53);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__child_0_0_i21);
MR_def_label(__Compare___output_prof_info__child_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__child_0_0_i53);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___output_prof_info__child_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(output_prof_info_module2)
	MR_init_entry1(__Unify___output_prof_info__output_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___output_prof_info__output_0_0);
	MR_init_label4(__Unify___output_prof_info__output_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___output_prof_info__output_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
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
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, output_prof);
	MR_r3 = MR_tfield(0, MR_tempr1, 0);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___output_prof_info__output_0_0_i4);
MR_def_label(__Unify___output_prof_info__output_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___output_prof_info__output_0_0_i6);
MR_def_label(__Unify___output_prof_info__output_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___output_prof_info__output_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___output_prof_info__output_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(output_prof_info_module3)
	MR_init_entry1(__Compare___output_prof_info__output_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___output_prof_info__output_0_0);
	MR_init_label5(__Compare___output_prof_info__output_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___output_prof_info__output_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___output_prof_info__output_0_0_i2);
MR_def_label(__Compare___output_prof_info__output_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___output_prof_info__output_0_0,2)
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
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, output_prof);
	MR_r3 = MR_tfield(0, MR_tempr3, 0);
	MR_r4 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___output_prof_info__output_0_0_i5);
MR_def_label(__Compare___output_prof_info__output_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___output_prof_info__output_0_0_i9);
MR_def_label(__Compare___output_prof_info__output_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___output_prof_info__output_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(output_prof_info_module4)
	MR_init_entry1(__Unify___output_prof_info__output_prof_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___output_prof_info__output_prof_0_0);
	MR_init_label7(__Unify___output_prof_info__output_prof_0_0,7,32,5,12,14,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___output_prof_info__output_prof_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i32);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 2);
	if ((MR_word_to_float(MR_tempr3) != MR_word_to_float(MR_tempr4))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 3);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 3);
	if ((MR_word_to_float(MR_tempr3) != MR_word_to_float(MR_tempr4))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 4);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 4);
	if ((MR_word_to_float(MR_tempr3) != MR_word_to_float(MR_tempr4))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 5);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 5);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr1, 6);
	MR_tempr4 = MR_tfield(1, MR_tempr2, 6);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 8);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr4, 8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_r2 = MR_tfield(1, MR_tempr3, 7);
	MR_r3 = MR_tfield(1, MR_tempr4, 7);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___output_prof_info__output_prof_0_0_i7);
MR_def_label(__Unify___output_prof_info__output_prof_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___output_prof_info__output_prof_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___output_prof_info__output_prof_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 3);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 4);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 4);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 5);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 5);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 6);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 6);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 7);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 7);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(0, MR_tempr1, 9);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 11);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 11);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(0, MR_tempr1, 8);
	MR_r3 = MR_tfield(0, MR_tempr2, 8);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___output_prof_info__output_prof_0_0_i12);
MR_def_label(__Unify___output_prof_info__output_prof_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___output_prof_info__output_prof_0_0_i14);
MR_def_label(__Unify___output_prof_info__output_prof_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___output_prof_info__output_prof_0_0_i16);
MR_def_label(__Unify___output_prof_info__output_prof_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___output_prof_info__output_prof_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(output_prof_info_module5)
	MR_init_entry1(__Compare___output_prof_info__output_prof_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___output_prof_info__output_prof_0_0);
	MR_init_label10(__Compare___output_prof_info__output_prof_0_0,3,2,9,13,17,21,25,29,33,37)
	MR_init_label10(__Compare___output_prof_info__output_prof_0_0,7,5,50,52,56,60,64,68,72,76)
	MR_init_label5(__Compare___output_prof_info__output_prof_0_0,80,84,88,92,207)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___output_prof_info__output_prof_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i3);
	}
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i2);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___output_prof_info__output_prof_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(16) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(15) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(14) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(13) = MR_tfield(1, MR_tempr5, 4);
	MR_sv(12) = MR_tfield(1, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(1, MR_tempr5, 6);
	MR_sv(10) = MR_tfield(1, MR_tempr5, 7);
	MR_sv(9) = MR_tfield(1, MR_tempr5, 8);
	MR_tempr6 = MR_sv(2);
	MR_sv(8) = MR_tfield(1, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(1, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(1, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(1, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___output_prof_info__output_prof_0_0_i9);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__output_prof_0_0_i13);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i17);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i21);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i25);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__output_prof_0_0_i29);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__output_prof_0_0_i33);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___output_prof_info__output_prof_0_0_i37);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i50);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 11);
	MR_tempr6 = MR_sv(2);
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
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___output_prof_info__output_prof_0_0_i52);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__output_prof_0_0_i56);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i60);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i64);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i68);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i72);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__output_prof_0_0_i76);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__output_prof_0_0_i80);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___output_prof_info__output_prof_0_0_i84);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___output_prof_info__output_prof_0_0_i88);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___output_prof_info__output_prof_0_0_i92);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i207);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(output_prof_info_module6)
	MR_init_entry1(__Unify___output_prof_info__parent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___output_prof_info__parent_0_0);
	MR_init_label2(__Unify___output_prof_info__parent_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___output_prof_info__parent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__parent_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___output_prof_info__parent_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__parent_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__parent_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_word_to_float(MR_r1) != MR_word_to_float(MR_r2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__parent_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___output_prof_info__parent_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___output_prof_info__parent_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(output_prof_info_module7)
	MR_init_entry1(__Compare___output_prof_info__parent_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___output_prof_info__parent_0_0);
	MR_init_label7(__Compare___output_prof_info__parent_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___output_prof_info__parent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___output_prof_info__parent_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___output_prof_info__parent_0_0_i2);
MR_def_label(__Compare___output_prof_info__parent_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___output_prof_info__parent_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___output_prof_info__parent_0_0_i5);
MR_def_label(__Compare___output_prof_info__parent_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__parent_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__parent_0_0_i9);
MR_def_label(__Compare___output_prof_info__parent_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__parent_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__parent_0_0_i13);
MR_def_label(__Compare___output_prof_info__parent_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__parent_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__parent_0_0_i17);
MR_def_label(__Compare___output_prof_info__parent_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__parent_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___output_prof_info__parent_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__output_prof_info_maybe_bunch_0(void)
{
	output_prof_info_module0();
	output_prof_info_module1();
	output_prof_info_module2();
	output_prof_info_module3();
	output_prof_info_module4();
	output_prof_info_module5();
	output_prof_info_module6();
	output_prof_info_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__output_prof_info__init(void);
void mercury__output_prof_info__init_type_tables(void);
void mercury__output_prof_info__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__output_prof_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__output_prof_info__init_complexity_procs(void);
#endif

void mercury__output_prof_info__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__output_prof_info_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_output_prof_info__type_ctor_info_child_0,
		output_prof_info__child_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_output_prof_info__type_ctor_info_output_0,
		output_prof_info__output_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_output_prof_info__type_ctor_info_output_prof_0,
		output_prof_info__output_prof_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_output_prof_info__type_ctor_info_parent_0,
		output_prof_info__parent_0_0);
	mercury__output_prof_info__init_debugger();
}

void mercury__output_prof_info__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_output_prof_info__type_ctor_info_child_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_output_prof_info__type_ctor_info_output_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_output_prof_info__type_ctor_info_output_prof_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_output_prof_info__type_ctor_info_parent_0);
	}
}


void mercury__output_prof_info__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__output_prof_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__output_prof_info);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__output_prof_info__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
