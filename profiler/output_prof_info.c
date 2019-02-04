/*
** Automatically generated from `output_prof_info.m'
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
INIT mercury__output_prof_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 130 "../library/io.int2"
#include "io.mh"

#line 27 "output_prof_info.c"
#line 136 "../library/io.int2"
#include "string.mh"

#line 31 "output_prof_info.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "output_prof_info.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "output_prof_info.c"
#line 40 "output_prof_info.c"
#include "output_prof_info.mh"

#line 43 "output_prof_info.c"
#line 44 "output_prof_info.c"
#ifndef OUTPUT_PROF_INFO_DECL_GUARD
#define OUTPUT_PROF_INFO_DECL_GUARD

#line 48 "output_prof_info.c"
#line 49 "output_prof_info.c"

#endif
#line 52 "output_prof_info.c"


extern const MR_TypeCtorInfo_Struct
	mercury_data_output_prof_info__type_ctor_info_parent_0,
	mercury_data_output_prof_info__type_ctor_info_output_prof_0,
	mercury_data_output_prof_info__type_ctor_info_output_0,
	mercury_data_output_prof_info__type_ctor_info_child_0;
MR_decl_label1(__Unify___output_prof_info__child_0_0, 1)
MR_decl_label3(__Unify___output_prof_info__output_0_0, 2,4,1)
MR_decl_label6(__Unify___output_prof_info__output_prof_0_0, 5,7,9,3,14,1)
MR_decl_label1(__Unify___output_prof_info__parent_0_0, 1)
MR_decl_label6(__Compare___output_prof_info__child_0_0, 3,7,11,15,19,27)
MR_decl_label3(__Compare___output_prof_info__output_0_0, 3,7,12)
MR_decl_label8(__Compare___output_prof_info__output_prof_0_0, 7,11,15,19,23,27,31,35)
MR_decl_label8(__Compare___output_prof_info__output_prof_0_0, 39,43,47,5,3,202,65,69)
MR_decl_label7(__Compare___output_prof_info__output_prof_0_0, 73,77,81,85,89,93,199)
MR_decl_label5(__Compare___output_prof_info__parent_0_0, 3,7,11,15,22)
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
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
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
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_output_prof_info__type_ctor_info_output_prof_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_TypeInfo) &mercury_data_output_prof_info__type_ctor_info_output_prof_0
}};

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


MR_BEGIN_MODULE(output_prof_info_module0)
	MR_init_entry1(__Unify___output_prof_info__child_0_0);
	MR_init_label1(__Unify___output_prof_info__child_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___output_prof_info__child_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___output_prof_info__child_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__child_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 2);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__child_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 3);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__child_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 4);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 4);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__child_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 5);
	MR_r1 = MR_ctfield(0, MR_tempr3, 5);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___output_prof_info__child_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_init_label6(__Compare___output_prof_info__child_0_0,3,7,11,15,19,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___output_prof_info__child_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___output_prof_info__child_0_0_i3);
MR_def_label(__Compare___output_prof_info__child_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__child_0_0_i27);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__child_0_0_i7);
MR_def_label(__Compare___output_prof_info__child_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__child_0_0_i27);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__child_0_0_i11);
MR_def_label(__Compare___output_prof_info__child_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__child_0_0_i27);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__child_0_0_i15);
MR_def_label(__Compare___output_prof_info__child_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__child_0_0_i27);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__child_0_0_i19);
MR_def_label(__Compare___output_prof_info__child_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__child_0_0_i27);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___output_prof_info__child_0_0,27)
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
	MR_init_label3(__Unify___output_prof_info__output_0_0,2,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___output_prof_info__output_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, output_prof);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___output_prof_info__output_0_0_i2);
MR_def_label(__Unify___output_prof_info__output_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_0_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___output_prof_info__output_0_0_i4);
MR_def_label(__Unify___output_prof_info__output_0_0,4)
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
MR_def_label(__Unify___output_prof_info__output_0_0,1)
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

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(output_prof_info_module3)
	MR_init_entry1(__Compare___output_prof_info__output_0_0);
	MR_init_label3(__Compare___output_prof_info__output_0_0,3,7,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___output_prof_info__output_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, output_prof);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___output_prof_info__output_0_0_i3);
MR_def_label(__Compare___output_prof_info__output_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_0_0_i12);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___output_prof_info__output_0_0_i7);
MR_def_label(__Compare___output_prof_info__output_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_0_0_i12);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___output_prof_info__output_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(output_prof_info_module4)
	MR_init_entry1(__Unify___output_prof_info__output_prof_0_0);
	MR_init_label6(__Unify___output_prof_info__output_prof_0_0,5,7,9,3,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___output_prof_info__output_prof_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 2);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 3);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 4);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 4);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 5);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 5);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 6);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 6);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 7);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 7);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 9);
	MR_sv(2) = MR_ctfield(0, MR_r1, 10);
	MR_sv(3) = MR_ctfield(0, MR_r1, 11);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 9);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 10);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 11);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 8);
	MR_r3 = MR_ctfield(0, MR_tempr2, 8);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___output_prof_info__output_prof_0_0_i5);
MR_def_label(__Unify___output_prof_info__output_prof_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___output_prof_info__output_prof_0_0_i7);
MR_def_label(__Unify___output_prof_info__output_prof_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___output_prof_info__output_prof_0_0_i9);
MR_def_label(__Unify___output_prof_info__output_prof_0_0,9)
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
MR_def_label(__Unify___output_prof_info__output_prof_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 2);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 3);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 3);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 4);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 4);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 5);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 5);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 6);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 6);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__output_prof_0_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 8);
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 8);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_tempr2 = MR_tempr3;
	MR_r2 = MR_ctfield(1, MR_tempr1, 7);
	MR_r3 = MR_ctfield(1, MR_tempr2, 7);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___output_prof_info__output_prof_0_0_i14);
MR_def_label(__Unify___output_prof_info__output_prof_0_0,14)
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
MR_def_label(__Unify___output_prof_info__output_prof_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(output_prof_info_module5)
	MR_init_entry1(__Compare___output_prof_info__output_prof_0_0);
	MR_init_label8(__Compare___output_prof_info__output_prof_0_0,7,11,15,19,23,27,31,35)
	MR_init_label8(__Compare___output_prof_info__output_prof_0_0,39,43,47,5,3,202,65,69)
	MR_init_label7(__Compare___output_prof_info__output_prof_0_0,73,77,81,85,89,93,199)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___output_prof_info__output_prof_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i5);
	}
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(22) = MR_ctfield(0, MR_r1, 1);
	MR_sv(21) = MR_ctfield(0, MR_r1, 2);
	MR_sv(20) = MR_ctfield(0, MR_r1, 3);
	MR_sv(19) = MR_ctfield(0, MR_r1, 4);
	MR_sv(18) = MR_ctfield(0, MR_r1, 5);
	MR_sv(17) = MR_ctfield(0, MR_r1, 6);
	MR_sv(16) = MR_ctfield(0, MR_r1, 7);
	MR_sv(15) = MR_ctfield(0, MR_r1, 8);
	MR_sv(14) = MR_ctfield(0, MR_r1, 9);
	MR_sv(13) = MR_ctfield(0, MR_r1, 10);
	MR_sv(12) = MR_ctfield(0, MR_r1, 11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 11);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 10);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 9);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 8);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___output_prof_info__output_prof_0_0_i7);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__output_prof_0_0_i11);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i15);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i19);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i23);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i27);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__output_prof_0_0_i31);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__output_prof_0_0_i35);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___output_prof_info__output_prof_0_0_i39);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___output_prof_info__output_prof_0_0_i43);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___output_prof_info__output_prof_0_0_i47);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(11);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___output_prof_info__output_prof_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i202);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Compare___output_prof_info__output_prof_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	MR_sv(16) = MR_ctfield(1, MR_r1, 1);
	MR_sv(15) = MR_ctfield(1, MR_r1, 2);
	MR_sv(14) = MR_ctfield(1, MR_r1, 3);
	MR_sv(13) = MR_ctfield(1, MR_r1, 4);
	MR_sv(12) = MR_ctfield(1, MR_r1, 5);
	MR_sv(11) = MR_ctfield(1, MR_r1, 6);
	MR_sv(10) = MR_ctfield(1, MR_r1, 7);
	MR_sv(9) = MR_ctfield(1, MR_r1, 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_ctfield(1, MR_tempr1, 8);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 7);
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 6);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 5);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 4);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___output_prof_info__output_prof_0_0_i65);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__output_prof_0_0_i69);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i73);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i77);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__output_prof_0_0_i81);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__output_prof_0_0_i85);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__output_prof_0_0_i89);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, parent);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___output_prof_info__output_prof_0_0_i93);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__output_prof_0_0_i199);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(output_prof_info, child);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___output_prof_info__output_prof_0_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(output_prof_info_module6)
	MR_init_entry1(__Unify___output_prof_info__parent_0_0);
	MR_init_label1(__Unify___output_prof_info__parent_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___output_prof_info__parent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___output_prof_info__parent_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___output_prof_info__parent_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 2);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__parent_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 3);
	if ((MR_word_to_float(MR_tempr1) != MR_word_to_float(MR_tempr2))) {
		MR_GOTO_LAB(__Unify___output_prof_info__parent_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 4);
	MR_r1 = MR_ctfield(0, MR_tempr3, 4);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___output_prof_info__parent_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(output_prof_info_module7)
	MR_init_entry1(__Compare___output_prof_info__parent_0_0);
	MR_init_label5(__Compare___output_prof_info__parent_0_0,3,7,11,15,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___output_prof_info__parent_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___output_prof_info__parent_0_0_i3);
MR_def_label(__Compare___output_prof_info__parent_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__parent_0_0_i22);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___output_prof_info__parent_0_0_i7);
MR_def_label(__Compare___output_prof_info__parent_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__parent_0_0_i22);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__parent_0_0_i11);
MR_def_label(__Compare___output_prof_info__parent_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__parent_0_0_i22);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___output_prof_info__parent_0_0_i15);
MR_def_label(__Compare___output_prof_info__parent_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___output_prof_info__parent_0_0_i22);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___output_prof_info__parent_0_0,22)
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
void mercury__output_prof_info__write_out_proc_statics(FILE *fp);
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
		mercury_data_output_prof_info__type_ctor_info_parent_0,
		output_prof_info__parent_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_output_prof_info__type_ctor_info_output_prof_0,
		output_prof_info__output_prof_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_output_prof_info__type_ctor_info_output_0,
		output_prof_info__output_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_output_prof_info__type_ctor_info_child_0,
		output_prof_info__child_0_0);
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
		&mercury_data_output_prof_info__type_ctor_info_parent_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_output_prof_info__type_ctor_info_output_prof_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_output_prof_info__type_ctor_info_output_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_output_prof_info__type_ctor_info_child_0);
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

void mercury__output_prof_info__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__output_prof_info__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
