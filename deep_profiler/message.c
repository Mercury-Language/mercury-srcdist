/*
** Automatically generated from `message.m'
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
INIT mercury__message__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 268 "profile.int"
#include "profile.mh"

#line 27 "message.c"
#line 226 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 31 "message.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 35 "message.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 39 "message.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 43 "message.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "message.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 51 "message.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 55 "message.c"
#line 56 "message.c"
#include "message.mh"

#line 59 "message.c"
#line 60 "message.c"
#ifndef MESSAGE_DECL_GUARD
#define MESSAGE_DECL_GUARD

#line 64 "message.c"
#line 65 "message.c"

#endif
#line 68 "message.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_message__type_ctor_info_message_0,
	mercury_data_message__type_ctor_info_message_level_0,
	mercury_data_message__type_ctor_info_message_type_0,
	mercury_data_message__type_ctor_info_program_location_0;
MR_decl_label8(message__message_to_string_2_0, 2,22,12,13,15,16,17,25)
MR_decl_label8(message__message_to_string_2_0, 19,20,4,5,6,7,8,9)
MR_decl_label6(message__message_to_string_2_0, 10,11,21,27,28,29)
MR_decl_label6(fn__message__message_get_level_1_0, 14,17,19,4,5,9)
MR_decl_label3(__Unify___message__message_0_0, 4,8,1)
MR_decl_label7(__Unify___message__message_type_0_0, 13,15,23,5,19,25,1)
MR_decl_label5(__Unify___message__program_location_0_0, 13,7,9,19,1)
MR_decl_label4(__Compare___message__message_0_0, 3,2,5,21)
MR_decl_label8(__Compare___message__message_type_0_0, 207,132,149,151,165,161,168,210)
MR_decl_label8(__Compare___message__message_type_0_0, 184,187,217,5,19,22,24,37)
MR_decl_label8(__Compare___message__message_type_0_0, 40,219,42,55,58,60,73,76)
MR_decl_label8(__Compare___message__message_type_0_0, 78,91,94,96,109,112,279,114)
MR_decl_label4(__Compare___message__message_type_0_0, 127,189,202,201)
MR_decl_label8(__Compare___message__program_location_0_0, 3,2,26,30,13,55,23,16)
MR_decl_label2(__Compare___message__program_location_0_0, 18,93)
MR_def_extern_entry(fn__message__message_get_level_1_0)
MR_def_extern_entry(fn__message__message_level_to_int_1_0)
MR_def_extern_entry(message__message_to_string_2_0)
MR_def_extern_entry(message__append_message_4_0)
MR_def_extern_entry(__Unify___message__message_0_0)
MR_def_extern_entry(__Compare___message__message_0_0)
MR_def_extern_entry(__Unify___message__message_level_0_0)
MR_def_extern_entry(__Compare___message__message_level_0_0)
MR_def_extern_entry(__Unify___message__message_type_0_0)
MR_def_extern_entry(__Compare___message__message_type_0_0)
MR_def_extern_entry(__Unify___message__program_location_0_0)
MR_def_extern_entry(__Compare___message__program_location_0_0)

static const struct mercury_type_0 mercury_vector_common_0_0[4] =
{
{
4
},
{
3
},
{
2
},
{
1
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_program_location_0;
extern const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_type_0;

const MR_PseudoTypeInfo mercury_data_message__field_types_message_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_message__type_ctor_info_program_location_0,
	(MR_PseudoTypeInfo) &mercury_data_message__type_ctor_info_message_type_0
};

const MR_ConstString mercury_data_message__field_names_message_0_0[] = {
	"message_location",
	"message_type"
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_0_0 = {
	"message",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_0_0,
	mercury_data_message__field_names_message_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_message_0_0[] = {
	&mercury_data_message__du_functor_desc_message_0_0

};

const MR_DuPtagLayout mercury_data_message__du_ptag_ordered_message_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_message_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_message__du_name_ordered_message_0[] = {
	&mercury_data_message__du_functor_desc_message_0_0
};

const MR_Integer mercury_data_message__functor_number_map_message_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___message__message_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___message__message_0_0)),
	"message",
	"message",
	{ (void *)mercury_data_message__du_name_ordered_message_0 },
	{ (void *)mercury_data_message__du_ptag_ordered_message_0 },
	1,
	4,
	mercury_data_message__functor_number_map_message_0
};

static const MR_EnumFunctorDesc mercury_data_message__enum_functor_desc_message_level_0_0 = {
	"message_info",
	0
};

static const MR_EnumFunctorDesc mercury_data_message__enum_functor_desc_message_level_0_1 = {
	"message_notice",
	1
};

static const MR_EnumFunctorDesc mercury_data_message__enum_functor_desc_message_level_0_2 = {
	"message_warning",
	2
};

static const MR_EnumFunctorDesc mercury_data_message__enum_functor_desc_message_level_0_3 = {
	"message_error",
	3
};

const MR_EnumFunctorDescPtr mercury_data_message__enum_value_ordered_message_level_0[] = {
	&mercury_data_message__enum_functor_desc_message_level_0_0,
	&mercury_data_message__enum_functor_desc_message_level_0_1,
	&mercury_data_message__enum_functor_desc_message_level_0_2,
	&mercury_data_message__enum_functor_desc_message_level_0_3
};

const MR_EnumFunctorDescPtr mercury_data_message__enum_name_ordered_message_level_0[] = {
	&mercury_data_message__enum_functor_desc_message_level_0_3,
	&mercury_data_message__enum_functor_desc_message_level_0_0,
	&mercury_data_message__enum_functor_desc_message_level_0_1,
	&mercury_data_message__enum_functor_desc_message_level_0_2
};

const MR_Integer mercury_data_message__functor_number_map_message_level_0[] = {
	1,
	2,
	3,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_level_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___message__message_level_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___message__message_level_0_0)),
	"message",
	"message_level",
	{ (void *)mercury_data_message__enum_name_ordered_message_level_0 },
	{ (void *)mercury_data_message__enum_value_ordered_message_level_0 },
	4,
	4,
	mercury_data_message__functor_number_map_message_level_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_0 = {
	"info_found_candidate_conjunction",
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_1 = {
	"notice_duplicate_instantiation",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_2 = {
	"notice_extra_callpairs_in_conjunction",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_2,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_3 = {
	"notice_candidate_callpairs_not_adjacent",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_4 = {
	"notice_cannot_parallelise_over_cheap_call_goal",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_5 = {
	"notice_cannot_parallelise_over_nonatomic_goal",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_6 = {
	"notice_callpair_has_more_than_one_dependant_var",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_7 = {
	"warning_cannot_lookup_proc_defn",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_8 = {
	"warning_cannot_compute_procrep_coverage_fallback",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	8,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_8,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_9 = {
	"error_extra_proc_dynamics_in_clique_proc",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_10 = {
	"error_coverage_procrep_error",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	10,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_10,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_message_type_0_0[] = {
	&mercury_data_message__du_functor_desc_message_type_0_0,
	&mercury_data_message__du_functor_desc_message_type_0_3,
	&mercury_data_message__du_functor_desc_message_type_0_4,
	&mercury_data_message__du_functor_desc_message_type_0_5,
	&mercury_data_message__du_functor_desc_message_type_0_6,
	&mercury_data_message__du_functor_desc_message_type_0_7,
	&mercury_data_message__du_functor_desc_message_type_0_9

};

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_message_type_0_1[] = {
	&mercury_data_message__du_functor_desc_message_type_0_1

};

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_message_type_0_2[] = {
	&mercury_data_message__du_functor_desc_message_type_0_2

};

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_message_type_0_3[] = {
	&mercury_data_message__du_functor_desc_message_type_0_8,
	&mercury_data_message__du_functor_desc_message_type_0_10

};

const MR_DuPtagLayout mercury_data_message__du_ptag_ordered_message_type_0[] = {
	{ 7, MR_SECTAG_LOCAL,
	mercury_data_message__du_stag_ordered_message_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_message_type_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_message_type_0_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_message__du_stag_ordered_message_type_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_message__du_name_ordered_message_type_0[] = {
	&mercury_data_message__du_functor_desc_message_type_0_10,
	&mercury_data_message__du_functor_desc_message_type_0_9,
	&mercury_data_message__du_functor_desc_message_type_0_0,
	&mercury_data_message__du_functor_desc_message_type_0_6,
	&mercury_data_message__du_functor_desc_message_type_0_3,
	&mercury_data_message__du_functor_desc_message_type_0_4,
	&mercury_data_message__du_functor_desc_message_type_0_5,
	&mercury_data_message__du_functor_desc_message_type_0_1,
	&mercury_data_message__du_functor_desc_message_type_0_2,
	&mercury_data_message__du_functor_desc_message_type_0_8,
	&mercury_data_message__du_functor_desc_message_type_0_7
};

const MR_Integer mercury_data_message__functor_number_map_message_type_0[] = {
	2,
	7,
	8,
	4,
	5,
	6,
	3,
	10,
	9,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_type_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___message__message_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___message__message_type_0_0)),
	"message",
	"message_type",
	{ (void *)mercury_data_message__du_name_ordered_message_type_0 },
	{ (void *)mercury_data_message__du_ptag_ordered_message_type_0 },
	11,
	4,
	mercury_data_message__functor_number_map_message_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;

const MR_PseudoTypeInfo mercury_data_message__field_types_program_location_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_program_location_0_0 = {
	"proc",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_program_location_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;

const MR_PseudoTypeInfo mercury_data_message__field_types_program_location_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_program_location_0_1 = {
	"goal",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_program_location_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;

const MR_PseudoTypeInfo mercury_data_message__field_types_program_location_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_program_location_0_2 = {
	"clique",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_program_location_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_program_location_0_0[] = {
	&mercury_data_message__du_functor_desc_program_location_0_0

};

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_program_location_0_1[] = {
	&mercury_data_message__du_functor_desc_program_location_0_1

};

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_program_location_0_2[] = {
	&mercury_data_message__du_functor_desc_program_location_0_2

};

const MR_DuPtagLayout mercury_data_message__du_ptag_ordered_program_location_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_program_location_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_program_location_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_program_location_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_message__du_name_ordered_program_location_0[] = {
	&mercury_data_message__du_functor_desc_program_location_0_2,
	&mercury_data_message__du_functor_desc_program_location_0_1,
	&mercury_data_message__du_functor_desc_program_location_0_0
};

const MR_Integer mercury_data_message__functor_number_map_program_location_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_program_location_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___message__program_location_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___message__program_location_0_0)),
	"message",
	"program_location",
	{ (void *)mercury_data_message__du_name_ordered_program_location_0 },
	{ (void *)mercury_data_message__du_ptag_ordered_program_location_0 },
	3,
	4,
	mercury_data_message__functor_number_map_program_location_0
};


MR_BEGIN_MODULE(message_module0)
	MR_init_entry1(fn__message__message_get_level_1_0);
	MR_init_label6(fn__message__message_get_level_1_0,14,17,19,4,5,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'message_get_level'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__message__message_get_level_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__message__message_get_level_1_0_i14) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i9) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i9) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i17));
MR_def_label(fn__message__message_get_level_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r2),
		MR_LABEL_AP(fn__message__message_get_level_1_0_i5) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i9) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i9) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i9) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i9) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i19) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i4));
MR_def_label(fn__message__message_get_level_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(fn__message__message_get_level_1_0_i4);
	}
MR_def_label(fn__message__message_get_level_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(fn__message__message_get_level_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(fn__message__message_get_level_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__message__message_get_level_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module1)
	MR_init_entry1(fn__message__message_level_to_int_1_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'message_level_to_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__message__message_level_to_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(message_module2)
	MR_init_entry1(message__message_to_string_2_0);
	MR_init_label8(message__message_to_string_2_0,2,22,12,13,15,16,17,25)
	MR_init_label8(message__message_to_string_2_0,19,20,4,5,6,7,8,9)
	MR_init_label6(message__message_to_string_2_0,10,11,21,27,28,29)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'message_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__message__message_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, program_location);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		message__message_to_string_2_0_i2);
MR_def_label(message__message_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(message__message_to_string_2_0_i22) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i12) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i15) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i25));
MR_def_label(message__message_to_string_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(1)),
		MR_LABEL_AP(message__message_to_string_2_0_i7) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i9) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i10) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i11) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i8) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i21) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i6));
MR_def_label(message__message_to_string_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		message__message_to_string_2_0_i13);
MR_def_label(message__message_to_string_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" conjunctions not parallelised: Seen duplicate instantiations", 61);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i17);
MR_def_label(message__message_to_string_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		message__message_to_string_2_0_i16);
MR_def_label(message__message_to_string_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" potential call pairs not parallelised in this conjunction", 58);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i17);
MR_def_label(message__message_to_string_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_string_const("Notice", 6);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i27);
MR_def_label(message__message_to_string_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(message__message_to_string_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(3, MR_tempr1, 1);
	MR_r2 = (MR_Word) MR_string_const("\n  falling back to some other method", 36);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i19);
MR_def_label(message__message_to_string_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Cannot compute procrep coverage annotation: ", 44);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i20);
MR_def_label(message__message_to_string_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_string_const("Warning", 7);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i27);
MR_def_label(message__message_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error generating coverage procedure report: ", 44);
	MR_r2 = MR_ctfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i5);
MR_def_label(message__message_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_string_const("Error", 5);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i27);
MR_def_label(message__message_to_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("Error", 5);
	MR_r2 = (MR_Word) MR_string_const("extra proc dynamnics for a clique proc are not currenty handled.", 64);
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i27);
MR_def_label(message__message_to_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("Info", 4);
	MR_r2 = (MR_Word) MR_string_const("Found candidate conjunction", 27);
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i27);
MR_def_label(message__message_to_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("Notice", 6);
	MR_r2 = (MR_Word) MR_string_const("Parallelising call pairs that have more than one dependant variable is not yet supported.", 89);
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i27);
MR_def_label(message__message_to_string_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("Notice", 6);
	MR_r2 = (MR_Word) MR_string_const("Two callpairs are difficult to parallelise because they are not adjacent", 72);
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i27);
MR_def_label(message__message_to_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("Notice", 6);
	MR_r2 = (MR_Word) MR_string_const("Parallelising expensive call goals with cheap call goals between them is not supported", 86);
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i27);
MR_def_label(message__message_to_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("Notice", 6);
	MR_r2 = (MR_Word) MR_string_const("Parallelising call goals with non-atomic goals between them is not supported", 76);
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i27);
MR_def_label(message__message_to_string_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_string_const("Warning", 7);
	MR_r2 = (MR_Word) MR_string_const("Could not look up proc defn, perhaps this procedure is built-in", 63);
	MR_r1 = (MR_Word) MR_string_const(": ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i27);
MR_def_label(message__message_to_string_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i28);
MR_def_label(message__message_to_string_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(": In ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__message_to_string_2_0_i29);
MR_def_label(message__message_to_string_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__snoc_2_0);

MR_BEGIN_MODULE(message_module3)
	MR_init_entry1(message__append_message_4_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'append_message'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__message__append_message_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(fn__cord__snoc_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module4)
	MR_init_entry1(__Unify___message__message_0_0);
	MR_init_label3(__Unify___message__message_0_0,4,8,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___message__message_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___message__message_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___message__program_location_0_0,
		__Unify___message__message_0_0_i4);
MR_def_label(__Unify___message__message_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___message__message_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___message__message_type_0_0);
MR_def_label(__Unify___message__message_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___message__message_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module5)
	MR_init_entry1(__Compare___message__message_0_0);
	MR_init_label4(__Compare___message__message_0_0,3,2,5,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___message__message_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___message__message_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___message__message_0_0_i2);
MR_def_label(__Compare___message__message_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___message__message_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___message__program_location_0_0,
		__Compare___message__message_0_0_i5);
MR_def_label(__Compare___message__message_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___message__message_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___message__message_type_0_0);
MR_def_label(__Compare___message__message_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module6)
	MR_init_entry1(__Unify___message__message_level_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___message__message_level_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(message_module7)
	MR_init_entry1(__Compare___message__message_level_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___message__message_level_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module8)
	MR_init_entry1(__Unify___message__message_type_0_0);
	MR_init_label7(__Unify___message__message_type_0_0,13,15,23,5,19,25,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___message__message_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___message__message_type_0_0_i19) MR_AND
		MR_LABEL_AP(__Unify___message__message_type_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___message__message_type_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___message__message_type_0_0_i23));
MR_def_label(__Unify___message__message_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___message__message_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___message__message_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i5);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___message__message_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___message__message_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,1)
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

MR_BEGIN_MODULE(message_module9)
	MR_init_entry1(__Compare___message__message_type_0_0);
	MR_init_label8(__Compare___message__message_type_0_0,207,132,149,151,165,161,168,210)
	MR_init_label8(__Compare___message__message_type_0_0,184,187,217,5,19,22,24,37)
	MR_init_label8(__Compare___message__message_type_0_0,40,219,42,55,58,60,73,76)
	MR_init_label8(__Compare___message__message_type_0_0,78,91,94,96,109,112,279,114)
	MR_init_label4(__Compare___message__message_type_0_0,127,189,202,201)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___message__message_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i201);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i207) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i132) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i151) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i210));
MR_def_label(__Compare___message__message_type_0_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(1)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i42) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i78) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i96) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i114) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i60) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i189) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i24));
MR_def_label(__Compare___message__message_type_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i165) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i161) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i149));
MR_def_label(__Compare___message__message_type_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i279);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i165) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i161) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i168));
MR_def_label(__Compare___message__message_type_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i219);
	}
	MR_GOTO_LAB(__Compare___message__message_type_0_0_i279);
MR_def_label(__Compare___message__message_type_0_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_sv(1), 0);
	MR_r2 = MR_const_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___message__message_type_0_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i279);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i5);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i184) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i187));
MR_def_label(__Compare___message__message_type_0_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),6)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i279);
	}
	MR_GOTO_LAB(__Compare___message__message_type_0_0_i219);
MR_def_label(__Compare___message__message_type_0_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i279);
	}
MR_def_label(__Compare___message__message_type_0_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_sv(1), 1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___message__message_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i19) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i22));
MR_def_label(__Compare___message__message_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),5)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i219);
	}
	MR_GOTO_LAB(__Compare___message__message_type_0_0_i219);
MR_def_label(__Compare___message__message_type_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i217);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i37) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i40));
MR_def_label(__Compare___message__message_type_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),6)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i201);
	}
	MR_GOTO_LAB(__Compare___message__message_type_0_0_i219);
MR_def_label(__Compare___message__message_type_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i279);
	}
MR_def_label(__Compare___message__message_type_0_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i55) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i58));
MR_def_label(__Compare___message__message_type_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i201);
	}
	MR_GOTO_LAB(__Compare___message__message_type_0_0_i279);
MR_def_label(__Compare___message__message_type_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i279);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i73) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i76));
MR_def_label(__Compare___message__message_type_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i201) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279));
MR_def_label(__Compare___message__message_type_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i279);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i91) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i94));
MR_def_label(__Compare___message__message_type_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i201) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279));
MR_def_label(__Compare___message__message_type_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i279);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i109) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i112));
MR_def_label(__Compare___message__message_type_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i201) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279));
MR_def_label(__Compare___message__message_type_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i279);
	}
MR_def_label(__Compare___message__message_type_0_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i127) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279));
MR_def_label(__Compare___message__message_type_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i201) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279));
MR_def_label(__Compare___message__message_type_0_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i202) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279));
MR_def_label(__Compare___message__message_type_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i219) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i201) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i279));
MR_def_label(__Compare___message__message_type_0_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__program_representation__string_proc_label_0_0);
MR_decl_entry(__Unify___mdbcomp__program_representation__goal_path_0_0);

MR_BEGIN_MODULE(message_module10)
	MR_init_entry1(__Unify___message__program_location_0_0);
	MR_init_label5(__Unify___message__program_location_0_0,13,7,9,19,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___message__program_location_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	MR_r1 = MR_tempr3;
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i7);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(2, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_tempr4);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___message__program_location_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__string_proc_label_0_0);
MR_def_label(__Unify___message__program_location_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__string_proc_label_0_0,
		__Unify___message__program_location_0_0_i9);
MR_def_label(__Unify___message__program_location_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__goal_path_0_0);
MR_def_label(__Unify___message__program_location_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___message__program_location_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__program_representation__string_proc_label_0_0);
MR_decl_entry(__Compare___mdbcomp__program_representation__goal_path_0_0);

MR_BEGIN_MODULE(message_module11)
	MR_init_entry1(__Compare___message__program_location_0_0);
	MR_init_label8(__Compare___message__program_location_0_0,3,2,26,30,13,55,23,16)
	MR_init_label2(__Compare___message__program_location_0_0,18,93)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___message__program_location_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___message__program_location_0_0_i2);
MR_def_label(__Compare___message__program_location_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___message__program_location_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i13);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i26);
	}
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i23);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i23);
	}
	MR_r1 = MR_ctfield(2, MR_tempr2, 0);
	MR_r2 = MR_ctfield(2, MR_tempr3, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
	}
MR_def_label(__Compare___message__program_location_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i55);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___message__program_location_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_sv(1), 0);
	MR_r2 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__string_proc_label_0_0);
MR_def_label(__Compare___message__program_location_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i16);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i23);
	}
	}
MR_def_label(__Compare___message__program_location_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__program_location_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__program_location_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__string_proc_label_0_0,
		__Compare___message__program_location_0_0_i18);
MR_def_label(__Compare___message__program_location_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i93);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__goal_path_0_0);
MR_def_label(__Compare___message__program_location_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__message_maybe_bunch_0(void)
{
	message_module0();
	message_module1();
	message_module2();
	message_module3();
	message_module4();
	message_module5();
	message_module6();
	message_module7();
	message_module8();
	message_module9();
	message_module10();
	message_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__message__init(void);
void mercury__message__init_type_tables(void);
void mercury__message__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__message__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__message__init_complexity_procs(void);
#endif

void mercury__message__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__message_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_message__type_ctor_info_message_0,
		message__message_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_message__type_ctor_info_message_level_0,
		message__message_level_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_message__type_ctor_info_message_type_0,
		message__message_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_message__type_ctor_info_program_location_0,
		message__program_location_0_0);
	mercury__message__init_debugger();
}

void mercury__message__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_message__type_ctor_info_message_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_message__type_ctor_info_message_level_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_message__type_ctor_info_message_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_message__type_ctor_info_program_location_0);
	}
}


void mercury__message__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__message__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__message);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__message__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
