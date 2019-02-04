/*
** Automatically generated from `message.m'
** by the Mercury compiler,
** version rotd-2011-07-19, configured for x86_64-unknown-linux-gnu.
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
REQUIRED_INIT mercury__message__required_init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 26 "message.c"
#include "message.mh"

#line 29 "message.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 33 "message.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 37 "message.c"
#line 284 "profile.int"
#include "profile.mh"

#line 41 "message.c"
#line 202 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 45 "message.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 49 "message.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 53 "message.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 57 "message.c"
#line 39 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 61 "message.c"
#line 62 "message.c"
#ifndef MESSAGE_DECL_GUARD
#define MESSAGE_DECL_GUARD

#line 66 "message.c"
#line 405 "message.m"
#ifdef MR_HIGHLEVEL_CODE
    extern MR_Integer message__mutable_variable_verbosity_level_mut;
#else
    extern MR_Word message__mutable_variable_verbosity_level_mut;
#endif
#ifdef MR_THREAD_SAFE
    extern MercuryLock message__mutable_variable_verbosity_level_mut_lock;
#endif

#line 77 "message.c"
#line 78 "message.c"

#endif
#line 81 "message.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_message__type_ctor_info_message_0,
	mercury_data_message__type_ctor_info_message_level_0,
	mercury_data_message__type_ctor_info_message_type_0,
	mercury_data_message__type_ctor_info_program_location_0;
MR_decl_label10(message__location_to_string_3_0, 4,5,6,3,10,11,12,13,9,17)
MR_decl_label10(message__location_to_string_3_0, 19,21,22,23,24,25,26,27,28,15)
MR_decl_label7(message__location_to_string_3_0, 30,31,32,33,34,35,36)
MR_decl_label10(message__message_to_string_2_0, 2,4,6,8,10,11,12,13,14,15)
MR_decl_label5(message__message_to_string_2_0, 16,17,18,19,20)
MR_decl_label10(message__write_out_message_4_0, 3,4,5,2,8,9,10,7,11,12)
MR_decl_label1(message__write_out_message_4_0, 14)
MR_decl_label3(fn__message__indent_1_0, 2,25,7)
MR_decl_label3(fn__message__message_get_level_1_0, 3,4,5)
MR_decl_label3(fn__message__message_level_to_int_1_0, 3,4,5)
MR_decl_label10(fn__message__message_type_to_string_1_0, 3,4,5,6,7,149,10,9,14,15)
MR_decl_label10(fn__message__message_type_to_string_1_0, 13,17,20,21,19,24,23,29,28,32)
MR_decl_label9(fn__message__message_type_to_string_1_0, 33,34,35,36,31,38,40,42,43)
MR_decl_label2(fn__message__nl_indent_1_0, 2,3)
MR_decl_label3(__Unify___message__message_0_0, 4,8,1)
MR_decl_label10(__Unify___message__message_type_0_0, 5,6,7,8,9,10,11,13,15,17)
MR_decl_label7(__Unify___message__message_type_0_0, 19,21,23,25,71,27,1)
MR_decl_label6(__Unify___message__program_location_0_0, 5,7,11,29,9,1)
MR_decl_label10(__Index___message__message_type_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label5(__Index___message__message_type_0_0, 13,14,15,16,17)
MR_decl_label4(__Compare___message__message_0_0, 3,2,5,21)
MR_decl_label10(__Compare___message__message_type_0_0, 4,5,6,7,10,11,12,13,14,92)
MR_decl_label10(__Compare___message__message_type_0_0, 15,16,19,22,25,28,31,37,34,42)
MR_decl_label3(__Compare___message__message_type_0_0, 45,8,54)
MR_decl_label10(__Compare___message__program_location_0_0, 3,2,7,9,5,90,13,11,19,20)
MR_decl_label6(__Compare___message__program_location_0_0, 23,17,29,30,31,145)
MR_def_extern_entry(fn__message__message_get_level_1_0)
MR_def_extern_entry(fn__message__message_level_to_int_1_0)
MR_def_extern_entry(fn__message__indent_1_0)
MR_def_extern_entry(message__location_to_string_3_0)
MR_decl_static(fn__message__message_type_to_string_1_0)
MR_def_extern_entry(message__message_to_string_2_0)
MR_def_extern_entry(message__append_message_4_0)
MR_def_extern_entry(fn__message__nl_0_0)
MR_def_extern_entry(fn__message__nl_indent_1_0)
MR_def_extern_entry(fn__message__indent_size_1_0)
MR_def_extern_entry(message__write_out_messages_4_0)
MR_decl_static(message__lock_verbosity_level_mut_0_0)
MR_decl_static(message__unlock_verbosity_level_mut_0_0)
MR_decl_static(message__unsafe_set_verbosity_level_mut_1_0)
MR_def_extern_entry(message__set_verbosity_level_3_0)
MR_def_extern_entry(fn__message__default_verbosity_level_0_0)
MR_decl_static(message__pre_initialise_mutable_verbosity_level_mut_0_0)
MR_decl_static(message__initialise_mutable_verbosity_level_mut_0_0)
MR_decl_static(message__unsafe_get_verbosity_level_mut_1_0)
MR_decl_static(message__write_out_message_4_0)
MR_def_extern_entry(__Unify___message__message_0_0)
MR_def_extern_entry(__Compare___message__message_0_0)
MR_def_extern_entry(__Unify___message__message_level_0_0)
MR_def_extern_entry(__Compare___message__message_level_0_0)
MR_def_extern_entry(__Unify___message__message_type_0_0)
MR_def_extern_entry(__Index___message__message_type_0_0)
MR_def_extern_entry(__Compare___message__message_type_0_0)
MR_def_extern_entry(__Unify___message__program_location_0_0)
MR_def_extern_entry(__Compare___message__program_location_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__message__write_out_messages_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_output_stream_0;
extern const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__message__write_out_messages_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(io, output_stream),
MR_CTOR0_ADDR(message, message),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
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
	NULL,
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
	15,
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
	15,
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
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_2 = {
	"info_found_pushed_conjs_above_callsite_threshold",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_3 = {
	"info_split_conjunction_into_partitions",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_3,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_4 = {
	"info_found_n_conjunctions_with_positive_speedup",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	4,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_4,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_5 = {
	"notice_duplicate_instantiation",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	5,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_5,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_6 = {
	"notice_callpair_has_more_than_one_dependant_var",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_7 = {
	"notice_partition_does_not_have_costly_calls",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	7,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_7,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0;

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_detism_rep_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_8 = {
	"notice_candidate_conjunction_not_det",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	8,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_8,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_9 = {
	"warning_cannot_lookup_proc_defn",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_10 = {
	"warning_cannot_compute_procrep_coverage_fallback",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	10,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_10,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_11 = {
	"warning_cannot_compute_cost_of_recursive_calls",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	11,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_11,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_12 = {
	"warning_cannot_compute_first_use_time",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	12,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_12,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_13 = {
	"error_extra_proc_dynamics_in_clique_proc",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	13,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_14 = {
	"error_cannot_lookup_coverage_points",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	14,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_message__field_types_message_type_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_message_type_0_15 = {
	"error_exception_thrown",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	15,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_message_type_0_15,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_message_type_0_0[] = {
	&mercury_data_message__du_functor_desc_message_type_0_0,
	&mercury_data_message__du_functor_desc_message_type_0_2,
	&mercury_data_message__du_functor_desc_message_type_0_6,
	&mercury_data_message__du_functor_desc_message_type_0_9,
	&mercury_data_message__du_functor_desc_message_type_0_13,
	&mercury_data_message__du_functor_desc_message_type_0_14

};

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_message_type_0_1[] = {
	&mercury_data_message__du_functor_desc_message_type_0_1

};

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_message_type_0_2[] = {
	&mercury_data_message__du_functor_desc_message_type_0_3

};

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_message_type_0_3[] = {
	&mercury_data_message__du_functor_desc_message_type_0_4,
	&mercury_data_message__du_functor_desc_message_type_0_5,
	&mercury_data_message__du_functor_desc_message_type_0_7,
	&mercury_data_message__du_functor_desc_message_type_0_8,
	&mercury_data_message__du_functor_desc_message_type_0_10,
	&mercury_data_message__du_functor_desc_message_type_0_11,
	&mercury_data_message__du_functor_desc_message_type_0_12,
	&mercury_data_message__du_functor_desc_message_type_0_15

};

const MR_DuPtagLayout mercury_data_message__du_ptag_ordered_message_type_0[] = {
	{ 6, MR_SECTAG_LOCAL,
	mercury_data_message__du_stag_ordered_message_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_message_type_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_message_type_0_2 },
	{ 8, MR_SECTAG_REMOTE,
	mercury_data_message__du_stag_ordered_message_type_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_message__du_name_ordered_message_type_0[] = {
	&mercury_data_message__du_functor_desc_message_type_0_14,
	&mercury_data_message__du_functor_desc_message_type_0_15,
	&mercury_data_message__du_functor_desc_message_type_0_13,
	&mercury_data_message__du_functor_desc_message_type_0_0,
	&mercury_data_message__du_functor_desc_message_type_0_1,
	&mercury_data_message__du_functor_desc_message_type_0_4,
	&mercury_data_message__du_functor_desc_message_type_0_2,
	&mercury_data_message__du_functor_desc_message_type_0_3,
	&mercury_data_message__du_functor_desc_message_type_0_6,
	&mercury_data_message__du_functor_desc_message_type_0_8,
	&mercury_data_message__du_functor_desc_message_type_0_5,
	&mercury_data_message__du_functor_desc_message_type_0_7,
	&mercury_data_message__du_functor_desc_message_type_0_11,
	&mercury_data_message__du_functor_desc_message_type_0_12,
	&mercury_data_message__du_functor_desc_message_type_0_10,
	&mercury_data_message__du_functor_desc_message_type_0_9
};

const MR_Integer mercury_data_message__functor_number_map_message_type_0[] = {
	3,
	4,
	6,
	7,
	5,
	10,
	8,
	11,
	9,
	15,
	14,
	12,
	13,
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_message_type_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___message__message_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___message__message_type_0_0)),
	"message",
	"message_type",
	{ (void *)mercury_data_message__du_name_ordered_message_type_0 },
	{ (void *)mercury_data_message__du_ptag_ordered_message_type_0 },
	16,
	4,
	mercury_data_message__functor_number_map_message_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0;

const MR_PseudoTypeInfo mercury_data_message__field_types_program_location_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_program_location_0_0 = {
	"pl_proc",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_program_location_0_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

const MR_PseudoTypeInfo mercury_data_message__field_types_program_location_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_program_location_0_1 = {
	"pl_goal",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_program_location_0_1,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;

const MR_PseudoTypeInfo mercury_data_message__field_types_program_location_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_program_location_0_2 = {
	"pl_clique",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_program_location_0_2,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;

const MR_PseudoTypeInfo mercury_data_message__field_types_program_location_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0
};

static const MR_DuFunctorDesc mercury_data_message__du_functor_desc_program_location_0_3 = {
	"pl_csd",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_message__field_types_program_location_0_3,
	NULL,
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

const MR_DuFunctorDescPtr mercury_data_message__du_stag_ordered_program_location_0_3[] = {
	&mercury_data_message__du_functor_desc_program_location_0_3

};

const MR_DuPtagLayout mercury_data_message__du_ptag_ordered_program_location_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_program_location_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_program_location_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_program_location_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_message__du_stag_ordered_program_location_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_message__du_name_ordered_program_location_0[] = {
	&mercury_data_message__du_functor_desc_program_location_0_2,
	&mercury_data_message__du_functor_desc_program_location_0_3,
	&mercury_data_message__du_functor_desc_program_location_0_1,
	&mercury_data_message__du_functor_desc_program_location_0_0
};

const MR_Integer mercury_data_message__functor_number_map_program_location_0[] = {
	3,
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_message__type_ctor_info_program_location_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___message__program_location_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___message__program_location_0_0)),
	"message",
	"program_location",
	{ (void *)mercury_data_message__du_name_ordered_program_location_0 },
	{ (void *)mercury_data_message__du_ptag_ordered_program_location_0 },
	4,
	4,
	mercury_data_message__functor_number_map_program_location_0
};


static const MR_UserClosureId
mercury_data__closure_layout__message__write_out_messages_4_0_1 = {
{
MR_PREDICATE,
"message",
"message",
"write_out_message",
4,
0
},
"message",
"message.m",
409,
"6"
};



MR_BEGIN_MODULE(message_module0)
	MR_init_entry1(fn__message__message_get_level_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__message__message_get_level_1_0);
	MR_init_label3(fn__message__message_get_level_1_0,3,4,5)
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
	if (!(((((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 5)) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 7))) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 4))))) {
		MR_GOTO_LAB(fn__message__message_get_level_1_0_i3);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(fn__message__message_get_level_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0)) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 1))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 0))) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 1))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(fn__message__message_get_level_1_0_i4);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__message__message_get_level_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 2)) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 3))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 1))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 2))))) {
		MR_GOTO_LAB(fn__message__message_get_level_1_0_i5);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__message__message_get_level_1_0,5)
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
	MR_init_label3(fn__message__message_level_to_int_1_0,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'message_level_to_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__message__message_level_to_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(fn__message__message_level_to_int_1_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__message__message_level_to_int_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__message__message_level_to_int_1_0_i4);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(fn__message__message_level_to_int_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__message__message_level_to_int_1_0_i5);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(fn__message__message_level_to_int_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
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
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);
MR_decl_entry(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0);
MR_decl_entry(program_representation_utils__print_proc_label_to_string_2_0);

MR_BEGIN_MODULE(message_module3)
	MR_init_entry1(message__location_to_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__message__location_to_string_3_0);
	MR_init_label10(message__location_to_string_3_0,4,5,6,3,10,11,12,13,9,17)
	MR_init_label10(message__location_to_string_3_0,19,21,22,23,24,25,26,27,28,15)
	MR_init_label7(message__location_to_string_3_0,30,31,32,33,34,35,36)
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
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(message__location_to_string_3_0_i3);
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
		message__location_to_string_3_0_i13);
MR_def_label(message__location_to_string_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(message__location_to_string_3_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r2, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		message__location_to_string_3_0_i10);
MR_def_label(message__location_to_string_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("call site dynamic ", 18);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		message__location_to_string_3_0_i11);
MR_def_label(message__location_to_string_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		message__location_to_string_3_0_i12);
MR_def_label(message__location_to_string_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i13);
MR_def_label(message__location_to_string_3_0,13)
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
MR_def_label(message__location_to_string_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(message__location_to_string_3_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(message__location_to_string_3_0,
		message__location_to_string_3_0_i17);
MR_def_label(message__location_to_string_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(message__location_to_string_3_0_i19);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Root goal", 9);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i24);
MR_def_label(message__location_to_string_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("Goal: ", 6);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i21);
MR_def_label(message__location_to_string_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__goal_path__rev_goal_path_to_string_1_0,
		message__location_to_string_3_0_i22);
MR_def_label(message__location_to_string_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i23);
MR_def_label(message__location_to_string_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__location_to_string_3_0_i24);
MR_def_label(message__location_to_string_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		message__location_to_string_3_0_i25);
MR_def_label(message__location_to_string_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i26);
MR_def_label(message__location_to_string_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__location_to_string_3_0_i27);
MR_def_label(message__location_to_string_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__location_to_string_3_0_i28);
MR_def_label(message__location_to_string_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
MR_def_label(message__location_to_string_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(program_representation_utils__print_proc_label_to_string_2_0,
		message__location_to_string_3_0_i30);
MR_def_label(message__location_to_string_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		message__location_to_string_3_0_i31);
MR_def_label(message__location_to_string_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Proc: ", 6);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i32);
MR_def_label(message__location_to_string_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i33);
MR_def_label(message__location_to_string_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__location_to_string_3_0_i34);
MR_def_label(message__location_to_string_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(3);
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
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__location_to_string_3_0_i36);
MR_def_label(message__location_to_string_3_0,36)
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
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__string_1_0);
MR_decl_entry(string__format_3_0);

MR_BEGIN_MODULE(message_module4)
	MR_init_entry1(fn__message__message_type_to_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__message__message_type_to_string_1_0);
	MR_init_label10(fn__message__message_type_to_string_1_0,3,4,5,6,7,149,10,9,14,15)
	MR_init_label10(fn__message__message_type_to_string_1_0,13,17,20,21,19,24,23,29,28,32)
	MR_init_label9(fn__message__message_type_to_string_1_0,33,34,35,36,31,38,40,42,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'message_type_to_string'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__message__message_type_to_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i3);
	}
	MR_r2 = (MR_Word) MR_string_const("Cannot lookup coverage points", 29);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
MR_def_label(fn__message__message_type_to_string_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i4);
	}
	MR_r2 = (MR_Word) MR_string_const("extra proc dynamnics for a clique proc are not currenty handled.", 64);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
MR_def_label(fn__message__message_type_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i5);
	}
	MR_r2 = (MR_Word) MR_string_const("Found candidate conjunction", 27);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
MR_def_label(fn__message__message_type_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i6);
	}
	MR_r2 = (MR_Word) MR_string_const("Found pushed conjuncts above callsite threashold", 48);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
MR_def_label(fn__message__message_type_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i7);
	}
	MR_r2 = (MR_Word) MR_string_const("Parallelising call pairs that have more than one dependent variable is not yet supported.", 89);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
MR_def_label(fn__message__message_type_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i149);
	}
	MR_r2 = (MR_Word) MR_string_const("Could not look up proc defn, perhaps this procedure is built-in", 63);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
MR_def_label(fn__message__message_type_to_string_1_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__message__message_type_to_string_1_0_i10);
MR_def_label(fn__message__message_type_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" conjuncts above callsite threashold", 36);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i21);
MR_def_label(fn__message__message_type_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i13);
	}
	MR_sv(1) = (MR_Word) MR_string_const(" partitions, this may reduce parallelism", 40);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__message__message_type_to_string_1_0_i14);
MR_def_label(fn__message__message_type_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i15);
MR_def_label(fn__message__message_type_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Split conjunction into ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i43);
MR_def_label(fn__message__message_type_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Exception thrown: ", 18);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i43);
MR_def_label(fn__message__message_type_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i19);
	}
	MR_sv(1) = (MR_Word) MR_string_const(" conjunctions with a positive speedup due to parallelisation", 60);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__message__message_type_to_string_1_0_i20);
MR_def_label(fn__message__message_type_to_string_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i21);
MR_def_label(fn__message__message_type_to_string_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Found ", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i43);
MR_def_label(fn__message__message_type_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i23);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__program_representation, detism_rep);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__string_1_0,
		fn__message__message_type_to_string_1_0_i24);
MR_def_label(fn__message__message_type_to_string_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_string_const("There are %d goals amoungst goals above the parallelisation overhead.", 69);
	}
	MR_np_call_localret_ent(string__format_3_0,
		fn__message__message_type_to_string_1_0_i43);
MR_def_label(fn__message__message_type_to_string_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i28);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__message__message_type_to_string_1_0_i29);
MR_def_label(fn__message__message_type_to_string_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" conjunctions not parallelised: Seen duplicate instantiations", 61);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i43);
MR_def_label(fn__message__message_type_to_string_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i31);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = (MR_Word) MR_string_const(" costly calls and cannot be parallelised", 40);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__message__message_type_to_string_1_0_i32);
MR_def_label(fn__message__message_type_to_string_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i33);
MR_def_label(fn__message__message_type_to_string_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" has only ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i34);
MR_def_label(fn__message__message_type_to_string_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__message__message_type_to_string_1_0_i35);
MR_def_label(fn__message__message_type_to_string_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i36);
MR_def_label(fn__message__message_type_to_string_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Partition ", 10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i43);
MR_def_label(fn__message__message_type_to_string_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i38);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Cannot compute cost of recursive calls: ", 40);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i43);
MR_def_label(fn__message__message_type_to_string_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(fn__message__message_type_to_string_1_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Cannot compute the production or consumption time of a variable: ", 65);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i43);
MR_def_label(fn__message__message_type_to_string_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = (MR_Word) MR_string_const("\n  falling back to some other method", 36);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i42);
MR_def_label(fn__message__message_type_to_string_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Cannot compute procrep coverage annotation: ", 44);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__message__message_type_to_string_1_0_i43);
MR_def_label(fn__message__message_type_to_string_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
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
	MR_init_label10(message__message_to_string_2_0,2,4,6,8,10,11,12,13,14,15)
	MR_init_label5(message__message_to_string_2_0,16,17,18,19,20)
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
	if (!(((((MR_Integer) MR_sv(1) == (MR_Integer) MR_tbmkword(0, 5)) || ((MR_tag(MR_sv(1)) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_sv(1), 0) == (MR_Integer) 7))) || ((MR_Integer) MR_sv(1) == (MR_Integer) MR_tbmkword(0, 4))))) {
		MR_GOTO_LAB(message__message_to_string_2_0_i4);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Error", 5);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__message_to_string_2_0_i10);
MR_def_label(message__message_to_string_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((MR_Integer) MR_sv(1) == (MR_Integer) MR_tbmkword(0, 0)) || (MR_tag(MR_sv(1)) == MR_mktag((MR_Integer) 1))) || ((MR_tag(MR_sv(1)) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_sv(1), 0) == (MR_Integer) 0))) || ((MR_Integer) MR_sv(1) == (MR_Integer) MR_tbmkword(0, 1))) || (MR_tag(MR_sv(1)) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(message__message_to_string_2_0_i6);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Info", 4);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__message_to_string_2_0_i10);
MR_def_label(message__message_to_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((MR_Integer) MR_sv(1) == (MR_Integer) MR_tbmkword(0, 2)) || ((MR_tag(MR_sv(1)) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_sv(1), 0) == (MR_Integer) 3))) || ((MR_tag(MR_sv(1)) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_sv(1), 0) == (MR_Integer) 1))) || ((MR_tag(MR_sv(1)) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_sv(1), 0) == (MR_Integer) 2))))) {
		MR_GOTO_LAB(message__message_to_string_2_0_i8);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Notice", 6);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__message_to_string_2_0_i10);
MR_def_label(message__message_to_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Warning", 7);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__message_to_string_2_0_i10);
MR_def_label(message__message_to_string_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__message__message_type_to_string_1_0,
		message__message_to_string_2_0_i11);
MR_def_label(message__message_to_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(6) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const(":\n", 2);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__message_to_string_2_0_i12);
MR_def_label(message__message_to_string_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__message__indent_1_0,
		message__message_to_string_2_0_i13);
MR_def_label(message__message_to_string_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		message__message_to_string_2_0_i14);
MR_def_label(message__message_to_string_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__message_to_string_2_0_i15);
MR_def_label(message__message_to_string_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__message_to_string_2_0_i16);
MR_def_label(message__message_to_string_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__message_to_string_2_0_i17);
MR_def_label(message__message_to_string_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__message_to_string_2_0_i18);
MR_def_label(message__message_to_string_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		message__message_to_string_2_0_i19);
MR_def_label(message__message_to_string_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		message__message_to_string_2_0_i20);
MR_def_label(message__message_to_string_2_0,20)
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
	MR_init_entry1(fn__message__nl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__message__nl_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'nl'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__message__nl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module8)
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
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
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
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module9)
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

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(cord__foldl_pred_4_2);

MR_BEGIN_MODULE(message_module10)
	MR_init_entry1(message__write_out_messages_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__message__write_out_messages_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_out_messages'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__message__write_out_messages_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(message__write_out_message_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(message, message);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(cord__foldl_pred_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module11)
	MR_init_entry1(message__lock_verbosity_level_mut_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__message__lock_verbosity_level_mut_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lock_verbosity_level_mut'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(message__lock_verbosity_level_mut_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__message__lock_verbosity_level_mut_0_0
{
#line 405 "message.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif
;}
#line 1897 "message.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module12)
	MR_init_entry1(message__unlock_verbosity_level_mut_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__message__unlock_verbosity_level_mut_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unlock_verbosity_level_mut'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(message__unlock_verbosity_level_mut_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__message__unlock_verbosity_level_mut_0_0
{
#line 405 "message.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif
;}
#line 1930 "message.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module13)
	MR_init_entry1(message__unsafe_set_verbosity_level_mut_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__message__unsafe_set_verbosity_level_mut_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_set_verbosity_level_mut'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(message__unsafe_set_verbosity_level_mut_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__message__unsafe_set_verbosity_level_mut_1_0
	X = MR_r1;
{
#line 405 "message.m"
message__mutable_variable_verbosity_level_mut = X;
;}
#line 1962 "message.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module14)
	MR_init_entry1(message__set_verbosity_level_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__message__set_verbosity_level_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_verbosity_level'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__message__set_verbosity_level_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__message__set_verbosity_level_3_0
{
#line 405 "message.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif
;}
#line 1995 "message.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__message__set_verbosity_level_3_0
	X = MR_r1;
{
#line 405 "message.m"
message__mutable_variable_verbosity_level_mut = X;
;}
#line 2006 "message.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__message__set_verbosity_level_3_0
{
#line 405 "message.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif
;}
#line 2018 "message.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module15)
	MR_init_entry1(fn__message__default_verbosity_level_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__message__default_verbosity_level_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_verbosity_level'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__message__default_verbosity_level_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module16)
	MR_init_entry1(message__pre_initialise_mutable_verbosity_level_mut_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__message__pre_initialise_mutable_verbosity_level_mut_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pre_initialise_mutable_verbosity_level_mut'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(message__pre_initialise_mutable_verbosity_level_mut_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__message__pre_initialise_mutable_verbosity_level_mut_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_verbosity_level_mut");
{
#line 405 "message.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&message__mutable_variable_verbosity_level_mut_lock, MR_MUTEX_ATTR);
#endif
;}
#line 2073 "message.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_verbosity_level_mut");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module17)
	MR_init_entry1(message__initialise_mutable_verbosity_level_mut_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__message__initialise_mutable_verbosity_level_mut_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'initialise_mutable_verbosity_level_mut'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(message__initialise_mutable_verbosity_level_mut_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__message__initialise_mutable_verbosity_level_mut_0_0
	MR_OBTAIN_GLOBAL_LOCK("pre_initialise_mutable_verbosity_level_mut");
{
#line 405 "message.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&message__mutable_variable_verbosity_level_mut_lock, MR_MUTEX_ATTR);
#endif
;}
#line 2107 "message.c"
	MR_RELEASE_GLOBAL_LOCK("pre_initialise_mutable_verbosity_level_mut");
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__message__initialise_mutable_verbosity_level_mut_0_0
{
#line 405 "message.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif
;}
#line 2120 "message.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__message__initialise_mutable_verbosity_level_mut_0_0
	X = (MR_Integer) 2;
{
#line 405 "message.m"
message__mutable_variable_verbosity_level_mut = X;
;}
#line 2131 "message.c"
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__message__initialise_mutable_verbosity_level_mut_0_0
{
#line 405 "message.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif
;}
#line 2143 "message.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module18)
	MR_init_entry1(message__unsafe_get_verbosity_level_mut_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__message__unsafe_get_verbosity_level_mut_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_get_verbosity_level_mut'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(message__unsafe_get_verbosity_level_mut_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__message__unsafe_get_verbosity_level_mut_1_0
{
#line 405 "message.m"
X = message__mutable_variable_verbosity_level_mut;
;}
#line 2174 "message.c"
	MR_r1 = X;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_4_0);
MR_decl_entry(io__nl_3_0);

MR_BEGIN_MODULE(message_module19)
	MR_init_entry1(message__write_out_message_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__message__write_out_message_4_0);
	MR_init_label10(message__write_out_message_4_0,3,4,5,2,8,9,10,7,11,12)
	MR_init_label1(message__write_out_message_4_0,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_out_message'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(message__write_out_message_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_r4 = MR_tempr1;
	if (!(((((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 5)) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 7))) || ((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 4))))) {
		MR_GOTO_LAB(message__write_out_message_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 3;
	MR_GOTO_LAB(message__write_out_message_4_0_i2);
	}
MR_def_label(message__write_out_message_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((MR_Integer) MR_r4 == (MR_Integer) MR_tbmkword(0, 0)) || (MR_tag(MR_r4) == MR_mktag((MR_Integer) 1))) || ((MR_tag(MR_r4) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r4, 0) == (MR_Integer) 0))) || ((MR_Integer) MR_r4 == (MR_Integer) MR_tbmkword(0, 1))) || (MR_tag(MR_r4) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(message__write_out_message_4_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_GOTO_LAB(message__write_out_message_4_0_i2);
MR_def_label(message__write_out_message_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((MR_Integer) MR_r4 == (MR_Integer) MR_tbmkword(0, 2)) || ((MR_tag(MR_r4) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r4, 0) == (MR_Integer) 3))) || ((MR_tag(MR_r4) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r4, 0) == (MR_Integer) 1))) || ((MR_tag(MR_r4) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r4, 0) == (MR_Integer) 2))))) {
		MR_GOTO_LAB(message__write_out_message_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(message__write_out_message_4_0_i2);
MR_def_label(message__write_out_message_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 2;
MR_def_label(message__write_out_message_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__message__write_out_message_4_0
{
#line 405 "message.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif
;}
#line 2251 "message.c"
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__message__write_out_message_4_0
{
#line 405 "message.m"
X = message__mutable_variable_verbosity_level_mut;
;}
#line 2261 "message.c"
	MR_r3 = X;
#undef	MR_PROC_LABEL
	}
	{
#define	MR_PROC_LABEL	mercury__message__write_out_message_4_0
{
#line 405 "message.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif
;}
#line 2274 "message.c"
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(message__write_out_message_4_0_i8);
	}
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 1;
	MR_GOTO_LAB(message__write_out_message_4_0_i7);
MR_def_label(message__write_out_message_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(message__write_out_message_4_0_i9);
	}
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 4;
	MR_GOTO_LAB(message__write_out_message_4_0_i7);
MR_def_label(message__write_out_message_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(message__write_out_message_4_0_i10);
	}
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 3;
	MR_GOTO_LAB(message__write_out_message_4_0_i7);
MR_def_label(message__write_out_message_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 2;
MR_def_label(message__write_out_message_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(message__write_out_message_4_0_i14);
	}
	MR_np_call_localret_ent(message__message_to_string_2_0,
		message__write_out_message_4_0_i11);
MR_def_label(message__write_out_message_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		message__write_out_message_4_0_i12);
MR_def_label(message__write_out_message_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__nl_3_0);
MR_def_label(message__write_out_message_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(message_module20)
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


MR_BEGIN_MODULE(message_module21)
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


MR_BEGIN_MODULE(message_module22)
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

MR_BEGIN_MODULE(message_module23)
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


MR_BEGIN_MODULE(message_module24)
	MR_init_entry1(__Unify___message__message_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___message__message_type_0_0);
	MR_init_label10(__Unify___message__message_type_0_0,5,6,7,8,9,10,11,13,15,17)
	MR_init_label7(__Unify___message__message_type_0_0,19,21,23,25,71,27,1)
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
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i71);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,5)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___message__message_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i15);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i17);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i19);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i23);
	}
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
MR_def_label(__Unify___message__message_type_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i25);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i27);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___message__message_type_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___message__message_type_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
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


MR_BEGIN_MODULE(message_module25)
	MR_init_entry1(__Index___message__message_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___message__message_type_0_0);
	MR_init_label10(__Index___message__message_type_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label5(__Index___message__message_type_0_0,13,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___message__message_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i3);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i4);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i6);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i7);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i8);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i10);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i11);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i12);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i13);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i14);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i15);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i16);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(__Index___message__message_type_0_0_i17);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___message__message_type_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(message_module26)
	MR_init_entry1(__Compare___message__message_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___message__message_type_0_0);
	MR_init_label10(__Compare___message__message_type_0_0,4,5,6,7,10,11,12,13,14,92)
	MR_init_label10(__Compare___message__message_type_0_0,15,16,19,22,25,28,31,37,34,42)
	MR_init_label3(__Compare___message__message_type_0_0,45,8,54)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___message__message_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i92);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___message__message_type_0_0,
		__Compare___message__message_type_0_0_i4);
MR_def_label(__Compare___message__message_type_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___message__message_type_0_0,
		__Compare___message__message_type_0_0_i5);
MR_def_label(__Compare___message__message_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___message__message_type_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___message__message_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___message__message_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___message__message_type_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___message__message_type_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___message__message_type_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___message__message_type_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i15);
	}
MR_def_label(__Compare___message__message_type_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___message__message_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i16);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___message__message_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i19);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___message__message_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i22);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___message__message_type_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i25);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___message__message_type_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i28);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___message__message_type_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i31);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___message__message_type_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i34);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___message__message_type_0_0_i37);
MR_def_label(__Compare___message__message_type_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i54);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___message__message_type_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i42);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___message__message_type_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i45);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___message__message_type_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___message__message_type_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___message__message_type_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___message__message_type_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__program_representation__string_proc_label_0_0);
MR_decl_entry(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0);

MR_BEGIN_MODULE(message_module27)
	MR_init_entry1(__Unify___message__program_location_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___message__program_location_0_0);
	MR_init_label6(__Unify___message__program_location_0_0,5,7,11,29,9,1)
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
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i29);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i5);
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
MR_def_label(__Unify___message__program_location_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___message__program_location_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i9);
	}
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
		__Unify___message__program_location_0_0_i11);
MR_def_label(__Unify___message__program_location_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__goal_path__reverse_goal_path_0_0);
MR_def_label(__Unify___message__program_location_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___message__program_location_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___message__program_location_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__string_proc_label_0_0);
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
MR_decl_entry(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0);

MR_BEGIN_MODULE(message_module28)
	MR_init_entry1(__Compare___message__program_location_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___message__program_location_0_0);
	MR_init_label10(__Compare___message__program_location_0_0,3,2,7,9,5,90,13,11,19,20)
	MR_init_label6(__Compare___message__program_location_0_0,23,17,29,30,31,145)
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
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i7);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___message__program_location_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__program_location_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i90);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__program_location_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i13);
	}
MR_def_label(__Compare___message__program_location_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__program_location_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i90);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___message__program_location_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i17);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__program_location_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__program_location_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i90);
	}
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
		__Compare___message__program_location_0_0_i23);
MR_def_label(__Compare___message__program_location_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i145);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__goal_path__reverse_goal_path_0_0);
MR_def_label(__Compare___message__program_location_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i29);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__program_location_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__program_location_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___message__program_location_0_0_i31);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___message__program_location_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__string_proc_label_0_0);
MR_def_label(__Compare___message__program_location_0_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 405 "message.m"
MR_Word message__mutable_variable_verbosity_level_mut;
#ifdef MR_THREAD_SAFE
    MercuryLock message__mutable_variable_verbosity_level_mut_lock;
#endif

#line 3379 "message.c"

MR_declare_static(mercury__message__initialise_mutable_verbosity_level_mut_0_0);

void
message__user_init_pred_0(void);

void
message__user_init_pred_0(void)
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
	MR_setup_callback(MR_ENTRY(mercury__message__initialise_mutable_verbosity_level_mut_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__message__initialise_mutable_verbosity_level_mut_0_0), MR_FALSE);
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
	message_module17();
	message_module18();
	message_module19();
	message_module20();
	message_module21();
	message_module22();
	message_module23();
	message_module24();
	message_module25();
	message_module26();
	message_module27();
	message_module28();
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
#ifdef MR_THREADSCOPE
void mercury__message__init_threadscope_string_table(void);
#endif
void mercury__message__required_init(void);

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

#ifdef MR_THREADSCOPE

void mercury__message__init_threadscope_string_table(void)
{
}

#endif

void mercury__message__required_init(void)
{
	message__user_init_pred_0();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
