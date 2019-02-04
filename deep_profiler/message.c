/*
** Automatically generated from `message.m'
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
INIT mercury__message__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 268 "profile.int"
#include "profile.mh"

#line 28 "message.c"
#line 231 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 32 "message.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 36 "message.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 40 "message.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 44 "message.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "message.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 52 "message.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 56 "message.c"
#line 57 "message.c"
#include "message.mh"

#line 60 "message.c"
#line 61 "message.c"
#ifndef MESSAGE_DECL_GUARD
#define MESSAGE_DECL_GUARD

#line 65 "message.c"
#line 66 "message.c"

#endif
#line 69 "message.c"

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
MR_decl_label10(message__location_to_string_3_0, 4,5,6,28,29,30,31,32,33,34)
MR_decl_label10(message__location_to_string_3_0, 35,9,12,10,16,17,18,19,22,23)
MR_decl_label3(message__location_to_string_3_0, 24,25,26)
MR_decl_label10(message__message_to_string_2_0, 2,26,46,29,12,20,24,25,30,31)
MR_decl_label8(message__message_to_string_2_0, 32,33,34,35,36,37,38,39)
MR_decl_label3(fn__message__indent_1_0, 2,25,7)
MR_decl_label6(fn__message__message_get_level_1_0, 14,20,17,7,11,13)
MR_decl_label10(fn__message__message_type_to_string_1_0, 34,58,8,9,59,16,17,60,3,6)
MR_decl_label10(fn__message__message_type_to_string_1_0, 11,12,13,19,20,21,23,24,25,26)
MR_decl_label6(fn__message__message_type_to_string_1_0, 27,28,30,31,32,33)
MR_decl_label2(fn__message__nl_indent_1_0, 2,3)
MR_decl_label3(__Unify___message__message_0_0, 4,8,1)
MR_decl_label10(__Unify___message__message_type_0_0, 23,9,13,26,5,11,16,18,20,27)
MR_decl_label1(__Unify___message__message_type_0_0, 1)
MR_decl_label5(__Unify___message__program_location_0_0, 13,7,9,19,1)
MR_decl_label4(__Compare___message__message_0_0, 3,2,5,21)
MR_decl_label10(__Compare___message__message_type_0_0, 204,36,215,39,57,71,93,107,100,207)
MR_decl_label10(__Compare___message__message_type_0_0, 5,224,22,40,75,89,92,111,124,127)
MR_decl_label10(__Compare___message__message_type_0_0, 128,142,145,137,146,165,168,156,158,169)
MR_decl_label8(__Compare___message__message_type_0_0, 183,186,180,187,200,246,203,208)
MR_decl_label10(__Compare___message__program_location_0_0, 3,2,26,30,13,55,23,16,18,93)
MR_def_extern_entry(fn__message__message_get_level_1_0)
MR_def_extern_entry(fn__message__message_level_to_int_1_0)
MR_def_extern_entry(fn__message__indent_1_0)
MR_def_extern_entry(message__location_to_string_3_0)
MR_decl_static(fn__message__message_type_to_string_1_0)
MR_def_extern_entry(message__message_to_string_2_0)
MR_def_extern_entry(message__append_message_4_0)
MR_def_extern_entry(fn__message__nl_indent_1_0)
MR_def_extern_entry(fn__message__indent_size_1_0)
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
	"info_found_conjs_above_callsite_threshold",
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
	"info_split_conjunction_into_partitions",
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

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_3 = {
	"info_found_n_conjunctions_with_positive_speedup",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_4 = {
	"notice_duplicate_instantiation",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_4,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_5 = {
	"notice_callpair_has_more_than_one_dependant_var",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_6 = {
	"notice_partition_does_not_have_costly_calls",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	6,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_6,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_7 = {
	"warning_cannot_lookup_proc_defn",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
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
	3,
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
	3,
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
	4,
	10,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_10,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_message_type_0_0[] = {
	&mercury_data_message__du_functor_desc_message_type_0_0,
	&mercury_data_message__du_functor_desc_message_type_0_5,
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
	&mercury_data_message__du_functor_desc_message_type_0_3,
	&mercury_data_message__du_functor_desc_message_type_0_4,
	&mercury_data_message__du_functor_desc_message_type_0_6,
	&mercury_data_message__du_functor_desc_message_type_0_8,
	&mercury_data_message__du_functor_desc_message_type_0_10

};

const MR_DuPtagLayout mercury_data_message__du_ptag_ordered_message_type_0[] = {
	{ 4, MR_SECTAG_LOCAL,
	mercury_data_message__du_stag_ordered_message_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_message_type_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_message_type_0_2 },
	{ 5, MR_SECTAG_REMOTE,
	mercury_data_message__du_stag_ordered_message_type_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_message__du_name_ordered_message_type_0[] = {
	&mercury_data_message__du_functor_desc_message_type_0_10,
	&mercury_data_message__du_functor_desc_message_type_0_9,
	&mercury_data_message__du_functor_desc_message_type_0_0,
	&mercury_data_message__du_functor_desc_message_type_0_1,
	&mercury_data_message__du_functor_desc_message_type_0_3,
	&mercury_data_message__du_functor_desc_message_type_0_2,
	&mercury_data_message__du_functor_desc_message_type_0_5,
	&mercury_data_message__du_functor_desc_message_type_0_4,
	&mercury_data_message__du_functor_desc_message_type_0_6,
	&mercury_data_message__du_functor_desc_message_type_0_8,
	&mercury_data_message__du_functor_desc_message_type_0_7
};

const MR_Integer mercury_data_message__functor_number_map_message_type_0[] = {
	2,
	3,
	5,
	4,
	7,
	6,
	8,
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__message__message_get_level_1_0);
	MR_init_label6(fn__message__message_get_level_1_0,14,20,17,7,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'message_get_level'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__message__message_get_level_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__message__message_get_level_1_0_i14) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i7) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i7) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i17));
MR_def_label(fn__message__message_get_level_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r2),0)) {
		MR_GOTO_LAB(fn__message__message_get_level_1_0_i7);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),1)) {
		MR_GOTO_LAB(fn__message__message_get_level_1_0_i11);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r2),2)) {
		MR_GOTO_LAB(fn__message__message_get_level_1_0_i13);
	}
MR_def_label(fn__message__message_get_level_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(fn__message__message_get_level_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(fn__message__message_get_level_1_0_i7) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i11) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i11) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i13) MR_AND
		MR_LABEL_AP(fn__message__message_get_level_1_0_i20));
MR_def_label(fn__message__message_get_level_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__message__message_get_level_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__message__message_get_level_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module1)
	MR_init_entry1(fn__message__message_level_to_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__message__message_level_to_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'message_level_to_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__message__message_level_to_int_1_0);
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

MR_decl_entry(require__error_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(fn__cord__snoc_2_0);

MR_BEGIN_MODULE(message_module2)
	MR_init_entry1(fn__message__indent_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__message__indent_1_0);
	MR_init_label3(fn__message__indent_1_0,2,25,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'indent'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__message__indent_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,0)) {
		MR_GOTO_LAB(fn__message__indent_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("automatic_parallelism: Negative indent", 38);
	MR_np_tailcall_ent(require__error_1_0);
MR_def_label(fn__message__indent_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__message__indent_1_0_i25);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(fn__cord__empty_0_0);
MR_def_label(fn__message__indent_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = ((MR_Integer) MR_r1 - (MR_Integer) 1);
	MR_np_localcall_lab(fn__message__indent_1_0,
		fn__message__indent_1_0_i7);
MR_def_label(fn__message__indent_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("  ", 2);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__cord__snoc_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(program_representation_utils__print_proc_label_to_string_2_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);
MR_decl_entry(mdbcomp__program_representation__empty_goal_path_1_1);
MR_decl_entry(fn__mdbcomp__program_representation__goal_path_to_string_1_0);

MR_BEGIN_MODULE(message_module3)
	MR_init_entry1(message__location_to_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__message__location_to_string_3_0);
	MR_init_label10(message__location_to_string_3_0,4,5,6,28,29,30,31,32,33,34)
	MR_init_label10(message__location_to_string_3_0,35,9,12,10,16,17,18,19,22,23)
	MR_init_label3(message__location_to_string_3_0,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'location_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__message__location_to_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TEST(MR_r2,1)) {
		MR_GOTO_LAB(message__location_to_string_3_0_i9);
	}
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(message__location_to_string_3_0_i28);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		message__location_to_string_3_0_i4);
MR_def_label(message__location_to_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("clique ", 7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__location_to_string_3_0_i5);
MR_def_label(message__location_to_string_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		message__location_to_string_3_0_i6);
MR_def_label(message__location_to_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i26);
MR_def_label(message__location_to_string_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(program_representation_utils__print_proc_label_to_string_2_0,
		message__location_to_string_3_0_i29);
MR_def_label(message__location_to_string_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		message__location_to_string_3_0_i30);
MR_def_label(message__location_to_string_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Proc: ", 6);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i31);
MR_def_label(message__location_to_string_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i32);
MR_def_label(message__location_to_string_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i33);
MR_def_label(message__location_to_string_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__location_to_string_3_0_i34);
MR_def_label(message__location_to_string_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__location_to_string_3_0_i35);
MR_def_label(message__location_to_string_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
MR_def_label(message__location_to_string_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__empty_goal_path_1_1,
		message__location_to_string_3_0_i12);
MR_def_label(message__location_to_string_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(message__location_to_string_3_0_i10);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Root goal", 9);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i19);
MR_def_label(message__location_to_string_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(4) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("Goal: ", 6);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i16);
MR_def_label(message__location_to_string_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__goal_path_to_string_1_0,
		message__location_to_string_3_0_i17);
MR_def_label(message__location_to_string_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i18);
MR_def_label(message__location_to_string_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__location_to_string_3_0_i19);
MR_def_label(message__location_to_string_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_localcall_lab(message__location_to_string_3_0,
		message__location_to_string_3_0_i22);
MR_def_label(message__location_to_string_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		message__location_to_string_3_0_i23);
MR_def_label(message__location_to_string_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i24);
MR_def_label(message__location_to_string_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__location_to_string_3_0_i25);
MR_def_label(message__location_to_string_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__location_to_string_3_0_i26);
MR_def_label(message__location_to_string_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module4)
	MR_init_entry1(fn__message__message_type_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__message__message_type_to_string_1_0);
	MR_init_label10(fn__message__message_type_to_string_1_0,34,58,8,9,59,16,17,60,3,6)
	MR_init_label10(fn__message__message_type_to_string_1_0,11,12,13,19,20,21,23,24,25,26)
	MR_init_label6(fn__message__message_type_to_string_1_0,27,28,30,31,32,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'message_type_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__message__message_type_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__message__message_type_to_string_1_0_i34) MR_AND
		MR_LABEL_AP(fn__message__message_type_to_string_1_0_i58) MR_AND
		MR_LABEL_AP(fn__message__message_type_to_string_1_0_i59) MR_AND
		MR_LABEL_AP(fn__message__message_type_to_string_1_0_i60));
MR_def_label(fn__message__message_type_to_string_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i6);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r1),1)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i19);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_r1),2)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i33);
	}
	MR_r2 = (MR_Word) MR_string_const("extra proc dynamnics for a clique proc are not currenty handled.", 64);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
MR_def_label(fn__message__message_type_to_string_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__message__message_type_to_string_1_0_i8);
MR_def_label(fn__message__message_type_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" conjuncts above callsite threashold", 36);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i9);
MR_def_label(fn__message__message_type_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Found ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i32);
MR_def_label(fn__message__message_type_to_string_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_string_const(" partitions, this may reduce parallelism", 40);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__message__message_type_to_string_1_0_i16);
MR_def_label(fn__message__message_type_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i17);
MR_def_label(fn__message__message_type_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Split conjunction into ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i32);
MR_def_label(fn__message__message_type_to_string_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__message__message_type_to_string_1_0_i11) MR_AND
		MR_LABEL_AP(fn__message__message_type_to_string_1_0_i20) MR_AND
		MR_LABEL_AP(fn__message__message_type_to_string_1_0_i23) MR_AND
		MR_LABEL_AP(fn__message__message_type_to_string_1_0_i30) MR_AND
		MR_LABEL_AP(fn__message__message_type_to_string_1_0_i3));
MR_def_label(fn__message__message_type_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Error generating coverage procedure report: ", 44);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i32);
MR_def_label(fn__message__message_type_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Found candidate conjunction", 27);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
MR_def_label(fn__message__message_type_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (MR_Word) MR_string_const(" conjunctions with a positive speedup due to parallelisation", 60);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__message__message_type_to_string_1_0_i12);
MR_def_label(fn__message__message_type_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i13);
MR_def_label(fn__message__message_type_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Found ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i32);
MR_def_label(fn__message__message_type_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Parallelising call pairs that have more than one dependant variable is not yet supported.", 89);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
MR_def_label(fn__message__message_type_to_string_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__message__message_type_to_string_1_0_i21);
MR_def_label(fn__message__message_type_to_string_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" conjunctions not parallelised: Seen duplicate instantiations", 61);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i32);
MR_def_label(fn__message__message_type_to_string_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = (MR_Word) MR_string_const(" costly calls and cannot be parallelised", 40);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__message__message_type_to_string_1_0_i24);
MR_def_label(fn__message__message_type_to_string_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i25);
MR_def_label(fn__message__message_type_to_string_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" has only ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i26);
MR_def_label(fn__message__message_type_to_string_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__message__message_type_to_string_1_0_i27);
MR_def_label(fn__message__message_type_to_string_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i28);
MR_def_label(fn__message__message_type_to_string_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Partition ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i32);
MR_def_label(fn__message__message_type_to_string_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const("\n  falling back to some other method", 36);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i31);
MR_def_label(fn__message__message_type_to_string_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Cannot compute procrep coverage annotation: ", 44);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i32);
MR_def_label(fn__message__message_type_to_string_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
MR_def_label(fn__message__message_type_to_string_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("Could not look up proc defn, perhaps this procedure is built-in", 63);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(message_module5)
	MR_init_entry1(message__message_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__message__message_to_string_2_0);
	MR_init_label10(message__message_to_string_2_0,2,26,46,29,12,20,24,25,30,31)
	MR_init_label8(message__message_to_string_2_0,32,33,34,35,36,37,38,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'message_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__message__message_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(message__location_to_string_3_0,
		message__message_to_string_2_0_i2);
MR_def_label(message__message_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(message__message_to_string_2_0_i26) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i12) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i12) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i29));
MR_def_label(message__message_to_string_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(1)),0)) {
		MR_GOTO_LAB(message__message_to_string_2_0_i12);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(1)),1)) {
		MR_GOTO_LAB(message__message_to_string_2_0_i20);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(1)),2)) {
		MR_GOTO_LAB(message__message_to_string_2_0_i24);
	}
MR_def_label(message__message_to_string_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Error", 5);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__message_to_string_2_0_i25);
MR_def_label(message__message_to_string_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(message__message_to_string_2_0_i12) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i20) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i20) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i24) MR_AND
		MR_LABEL_AP(message__message_to_string_2_0_i46));
MR_def_label(message__message_to_string_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Info", 4);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__message_to_string_2_0_i25);
MR_def_label(message__message_to_string_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Notice", 6);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__message_to_string_2_0_i25);
MR_def_label(message__message_to_string_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Warning", 7);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__message_to_string_2_0_i25);
MR_def_label(message__message_to_string_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__message__message_type_to_string_1_0,
		message__message_to_string_2_0_i30);
MR_def_label(message__message_to_string_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__message_to_string_2_0_i31);
MR_def_label(message__message_to_string_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		message__message_to_string_2_0_i32);
MR_def_label(message__message_to_string_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__message_to_string_2_0_i33);
MR_def_label(message__message_to_string_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__message_to_string_2_0_i34);
MR_def_label(message__message_to_string_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__message_to_string_2_0_i35);
MR_def_label(message__message_to_string_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__message_to_string_2_0_i36);
MR_def_label(message__message_to_string_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__message_to_string_2_0_i37);
MR_def_label(message__message_to_string_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__message_to_string_2_0_i38);
MR_def_label(message__message_to_string_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		message__message_to_string_2_0_i39);
MR_def_label(message__message_to_string_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(string__append_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module6)
	MR_init_entry1(message__append_message_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__message__append_message_4_0);
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


MR_BEGIN_MODULE(message_module7)
	MR_init_entry1(fn__message__nl_indent_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__message__nl_indent_1_0);
	MR_init_label2(fn__message__nl_indent_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nl_indent'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__message__nl_indent_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		fn__message__nl_indent_1_0_i2);
MR_def_label(fn__message__nl_indent_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		fn__message__nl_indent_1_0_i3);
MR_def_label(fn__message__nl_indent_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module8)
	MR_init_entry1(fn__message__indent_size_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__message__indent_size_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'indent_size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__message__indent_size_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 2 * (MR_Integer) MR_r1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module9)
	MR_init_entry1(__Unify___message__message_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___message__message_0_0);
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
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
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


MR_BEGIN_MODULE(message_module10)
	MR_init_entry1(__Compare___message__message_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___message__message_0_0);
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


MR_BEGIN_MODULE(message_module11)
	MR_init_entry1(__Unify___message__message_level_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___message__message_level_0_0);
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

MR_BEGIN_MODULE(message_module12)
	MR_init_entry1(__Compare___message__message_level_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___message__message_level_0_0);
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


MR_BEGIN_MODULE(message_module13)
	MR_init_entry1(__Unify___message__message_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___message__message_type_0_0);
	MR_init_label10(__Unify___message__message_type_0_0,23,9,13,26,5,11,16,18,20,27)
	MR_init_label1(__Unify___message__message_type_0_0,1)
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
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i27);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___message__message_type_0_0_i23) MR_AND
		MR_LABEL_AP(__Unify___message__message_type_0_0_i9) MR_AND
		MR_LABEL_AP(__Unify___message__message_type_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___message__message_type_0_0_i26));
MR_def_label(__Unify___message__message_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_unmkbody(MR_tempr1);
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___message__message_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___message__message_type_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___message__message_type_0_0_i16) MR_AND
		MR_LABEL_AP(__Unify___message__message_type_0_0_i18) MR_AND
		MR_LABEL_AP(__Unify___message__message_type_0_0_i20) MR_AND
		MR_LABEL_AP(__Unify___message__message_type_0_0_i5));
MR_def_label(__Unify___message__message_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 2);
	MR_r2 = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___message__message_type_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,27)
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

MR_BEGIN_MODULE(message_module14)
	MR_init_entry1(__Compare___message__message_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___message__message_type_0_0);
	MR_init_label10(__Compare___message__message_type_0_0,204,36,215,39,57,71,93,107,100,207)
	MR_init_label10(__Compare___message__message_type_0_0,5,224,22,40,75,89,92,111,124,127)
	MR_init_label10(__Compare___message__message_type_0_0,128,142,145,137,146,165,168,156,158,169)
	MR_init_label8(__Compare___message__message_type_0_0,183,186,180,187,200,246,203,208)
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
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i215);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i204) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i57) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i93) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i207));
MR_def_label(__Compare___message__message_type_0_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(1)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i40);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(1)),1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i111);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(1)),2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i187);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i36) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i39));
MR_def_label(__Compare___message__message_type_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
MR_def_label(__Compare___message__message_type_0_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),4)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
MR_def_label(__Compare___message__message_type_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i71) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i100) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246));
MR_def_label(__Compare___message__message_type_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i107) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i100) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246));
MR_def_label(__Compare___message__message_type_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___message__message_type_0_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i75) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i128) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i146) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i169) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i5));
MR_def_label(__Compare___message__message_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i22);
	}
MR_def_label(__Compare___message__message_type_0_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),4)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i180);
	}
	MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
MR_def_label(__Compare___message__message_type_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i215);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i89) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i92));
MR_def_label(__Compare___message__message_type_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i137);
	}
	MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
MR_def_label(__Compare___message__message_type_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i124) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i127));
MR_def_label(__Compare___message__message_type_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i215);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246));
MR_def_label(__Compare___message__message_type_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i142) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i145));
MR_def_label(__Compare___message__message_type_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i137) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246));
MR_def_label(__Compare___message__message_type_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___message__message_type_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i165) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i168));
MR_def_label(__Compare___message__message_type_0_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i246);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,168)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i156) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246));
MR_def_label(__Compare___message__message_type_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___message__message_type_0_0_i158);
MR_def_label(__Compare___message__message_type_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i208);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___message__message_type_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i183) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i186));
MR_def_label(__Compare___message__message_type_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,186)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i180) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246));
MR_def_label(__Compare___message__message_type_0_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___message__message_type_0_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i200) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i203));
MR_def_label(__Compare___message__message_type_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i224);
	}
	if (MR_INT_EQ(MR_unmkbody(MR_sv(2)),2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i215);
	}
MR_def_label(__Compare___message__message_type_0_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__message_type_0_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i224) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246) MR_AND
		MR_LABEL_AP(__Compare___message__message_type_0_0_i246));
MR_def_label(__Compare___message__message_type_0_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__program_representation__string_proc_label_0_0);
MR_decl_entry(__Unify___mdbcomp__program_representation__goal_path_0_0);

MR_BEGIN_MODULE(message_module15)
	MR_init_entry1(__Unify___message__program_location_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___message__program_location_0_0);
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
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i7);
	}
	if ((MR_r1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___message__program_location_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
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
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
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

MR_BEGIN_MODULE(message_module16)
	MR_init_entry1(__Compare___message__program_location_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___message__program_location_0_0);
	MR_init_label10(__Compare___message__program_location_0_0,3,2,26,30,13,55,23,16,18,93)
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
	if (MR_PTAG_TEST(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i13);
	}
	if (MR_PTAG_TEST(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i26);
	}
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i23);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i23);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___message__program_location_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i55);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__program_location_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__string_proc_label_0_0);
MR_def_label(__Compare___message__program_location_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i16);
	}
	if (MR_PTAG_TEST(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i23);
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
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
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
	message_module12();
	message_module13();
	message_module14();
	message_module15();
	message_module16();
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
