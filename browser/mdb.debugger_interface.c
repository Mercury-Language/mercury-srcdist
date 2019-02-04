/*
** Automatically generated from `debugger_interface.m'
** by the Mercury compiler,
** version rotd-2012-03-21, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__debugger_interface__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.debugger_interface.c"
#include "mdb.debugger_interface.mh"

#line 28 "mdb.debugger_interface.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.debugger_interface.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "mdb.debugger_interface.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 40 "mdb.debugger_interface.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 44 "mdb.debugger_interface.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "mdb.debugger_interface.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 52 "mdb.debugger_interface.c"
#line 53 "mdb.debugger_interface.c"
#ifndef MDB__DEBUGGER_INTERFACE_DECL_GUARD
#define MDB__DEBUGGER_INTERFACE_DECL_GUARD

#line 57 "mdb.debugger_interface.c"
#line 58 "mdb.debugger_interface.c"

#endif
#line 61 "mdb.debugger_interface.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Integer f1;
	MR_String f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__debugger_interface__type_ctor_info_arity_0,
	mercury_data_mdb__debugger_interface__type_ctor_info_call_number_0,
	mercury_data_mdb__debugger_interface__type_ctor_info_debugger_request_0,
	mercury_data_mdb__debugger_interface__type_ctor_info_debugger_response_0,
	mercury_data_mdb__debugger_interface__type_ctor_info_depth_number_0,
	mercury_data_mdb__debugger_interface__type_ctor_info_determinism_0,
	mercury_data_mdb__debugger_interface__type_ctor_info_event_number_0,
	mercury_data_mdb__debugger_interface__type_ctor_info_match_1,
	mercury_data_mdb__debugger_interface__type_ctor_info_pred_match_0;
MR_decl_label10(mdb__debugger_interface__found_match_comp_14_0, 4,6,8,10,14,16,12,19,20,22)
MR_decl_label7(mdb__debugger_interface__found_match_comp_14_0, 24,26,28,31,52,2,1)
MR_decl_label10(mdb__debugger_interface__found_match_user_14_0, 4,6,8,10,14,16,12,19,20,22)
MR_decl_label7(mdb__debugger_interface__found_match_user_14_0, 24,26,28,31,52,2,1)
MR_decl_label5(mdb__debugger_interface__get_list_modules_to_import_3_0, 2,4,6,11,12)
MR_decl_label1(mdb__debugger_interface__get_mmc_options_2_0, 2)
MR_decl_label1(mdb__debugger_interface__get_object_file_name_2_0, 2)
MR_decl_label1(mdb__debugger_interface__get_variable_name_2_0, 2)
MR_decl_label10(mdb__debugger_interface__match_2_0, 4,10,69,36,7,13,15,17,12,1)
MR_decl_label2(mdb__debugger_interface__output_current_live_var_names_5_0, 3,4)
MR_decl_label2(mdb__debugger_interface__output_current_nth_var_4_0, 3,4)
MR_decl_label2(mdb__debugger_interface__output_current_slots_comp_16_0, 3,4)
MR_decl_label2(mdb__debugger_interface__output_current_slots_user_16_0, 3,4)
MR_decl_label2(mdb__debugger_interface__output_current_vars_5_0, 3,4)
MR_decl_label10(mdb__debugger_interface__read_request_from_socket_5_0, 2,4,6,9,10,11,12,13,14,15)
MR_decl_label10(mdb__debugger_interface__read_request_from_socket_5_0, 16,17,18,19,20,21,22,23,24,25)
MR_decl_label5(mdb__debugger_interface__read_request_from_socket_5_0, 26,27,28,29,30)
MR_decl_label1(fn__mdb__debugger_interface__get_var_number_1_0, 2)
MR_decl_label10(__Unify___mdb__debugger_interface__debugger_request_0_0, 5,6,7,8,9,10,11,12,13,14)
MR_decl_label10(__Unify___mdb__debugger_interface__debugger_request_0_0, 15,16,17,18,19,23,25,27,29,31)
MR_decl_label10(__Unify___mdb__debugger_interface__debugger_request_0_0, 33,35,37,39,41,44,21,48,50,54)
MR_decl_label5(__Unify___mdb__debugger_interface__debugger_request_0_0, 56,60,131,62,1)
MR_decl_label10(__Unify___mdb__debugger_interface__debugger_response_0_0, 5,6,7,8,9,10,11,12,13,14)
MR_decl_label10(__Unify___mdb__debugger_interface__debugger_response_0_0, 15,16,17,18,19,20,21,22,23,24)
MR_decl_label10(__Unify___mdb__debugger_interface__debugger_response_0_0, 26,30,28,34,40,38,44,46,48,50)
MR_decl_label6(__Unify___mdb__debugger_interface__debugger_response_0_0, 52,54,56,174,58,1)
MR_decl_label7(__Unify___mdb__debugger_interface__match_1_0, 5,6,10,16,36,14,1)
MR_decl_label6(__Unify___mdb__debugger_interface__pred_match_0_0, 5,8,24,6,13,1)
MR_decl_label10(__Index___mdb__debugger_interface__debugger_request_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(__Index___mdb__debugger_interface__debugger_request_0_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label2(__Index___mdb__debugger_interface__debugger_request_0_0, 23,24)
MR_decl_label10(__Index___mdb__debugger_interface__debugger_response_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(__Index___mdb__debugger_interface__debugger_response_0_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(__Index___mdb__debugger_interface__debugger_response_0_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label2(__Index___mdb__debugger_interface__debugger_response_0_0, 33,34)
MR_decl_label10(__Compare___mdb__debugger_interface__debugger_request_0_0, 4,5,6,7,10,11,12,13,14,15)
MR_decl_label10(__Compare___mdb__debugger_interface__debugger_request_0_0, 16,17,18,19,20,21,22,172,23,24)
MR_decl_label10(__Compare___mdb__debugger_interface__debugger_request_0_0, 30,34,38,42,46,50,54,58,62,66)
MR_decl_label10(__Compare___mdb__debugger_interface__debugger_request_0_0, 71,27,86,89,92,95,98,101,8,110)
MR_decl_label10(__Compare___mdb__debugger_interface__debugger_response_0_0, 4,5,6,7,10,11,12,13,14,15)
MR_decl_label10(__Compare___mdb__debugger_interface__debugger_response_0_0, 16,17,18,19,20,21,22,23,24,25)
MR_decl_label10(__Compare___mdb__debugger_interface__debugger_response_0_0, 26,27,367,28,32,36,40,44,48,52)
MR_decl_label10(__Compare___mdb__debugger_interface__debugger_response_0_0, 56,60,64,68,72,76,29,95,99,103)
MR_decl_label10(__Compare___mdb__debugger_interface__debugger_response_0_0, 107,111,115,119,123,127,131,135,139,92)
MR_decl_label10(__Compare___mdb__debugger_interface__debugger_response_0_0, 158,155,163,169,166,174,177,183,187,180)
MR_decl_label10(__Compare___mdb__debugger_interface__debugger_response_0_0, 193,196,199,205,209,213,202,223,227,231)
MR_decl_label6(__Compare___mdb__debugger_interface__debugger_response_0_0, 235,220,245,249,8,259)
MR_decl_label10(__Compare___mdb__debugger_interface__match_1_0, 72,7,8,9,5,13,14,16,11,20)
MR_decl_label10(__Compare___mdb__debugger_interface__match_1_0, 21,22,18,27,28,29,32,25,38,39)
MR_decl_label5(__Compare___mdb__debugger_interface__match_1_0, 68,40,69,41,43)
MR_decl_label10(__Compare___mdb__debugger_interface__pred_match_0_0, 42,43,5,11,14,9,20,21,23,28)
MR_def_extern_entry(mdb__debugger_interface__dummy_pred_to_avoid_warning_about_nothing_exported_0_0)
MR_decl_static(mdb__debugger_interface__output_current_slots_user_16_0)
MR_decl_static(mdb__debugger_interface__output_current_slots_comp_16_0)
MR_decl_static(mdb__debugger_interface__output_current_vars_5_0)
MR_decl_static(mdb__debugger_interface__output_current_nth_var_4_0)
MR_decl_static(mdb__debugger_interface__output_current_live_var_names_5_0)
MR_decl_static(fn__mdb__debugger_interface__get_var_number_1_0)
MR_decl_static(mdb__debugger_interface__match_2_0)
MR_decl_static(mdb__debugger_interface__found_match_user_14_0)
MR_decl_static(mdb__debugger_interface__found_match_comp_14_0)
MR_decl_static(mdb__debugger_interface__read_request_from_socket_5_0)
MR_decl_static(mdb__debugger_interface__get_list_modules_to_import_3_0)
MR_decl_static(mdb__debugger_interface__get_mmc_options_2_0)
MR_decl_static(mdb__debugger_interface__get_object_file_name_2_0)
MR_decl_static(mdb__debugger_interface__init_mercury_string_1_0)
MR_decl_static(mdb__debugger_interface__get_variable_name_2_0)
MR_decl_static(__Unify___mdb__debugger_interface__arity_0_0)
MR_decl_static(__Compare___mdb__debugger_interface__arity_0_0)
MR_decl_static(__Unify___mdb__debugger_interface__call_number_0_0)
MR_decl_static(__Compare___mdb__debugger_interface__call_number_0_0)
MR_decl_static(__Unify___mdb__debugger_interface__debugger_request_0_0)
MR_decl_static(__Index___mdb__debugger_interface__debugger_request_0_0)
MR_decl_static(__Compare___mdb__debugger_interface__debugger_request_0_0)
MR_decl_static(__Unify___mdb__debugger_interface__debugger_response_0_0)
MR_decl_static(__Index___mdb__debugger_interface__debugger_response_0_0)
MR_decl_static(__Compare___mdb__debugger_interface__debugger_response_0_0)
MR_decl_static(__Unify___mdb__debugger_interface__depth_number_0_0)
MR_decl_static(__Compare___mdb__debugger_interface__depth_number_0_0)
MR_decl_static(__Unify___mdb__debugger_interface__determinism_0_0)
MR_decl_static(__Compare___mdb__debugger_interface__determinism_0_0)
MR_decl_static(__Unify___mdb__debugger_interface__event_number_0_0)
MR_decl_static(__Compare___mdb__debugger_interface__event_number_0_0)
MR_decl_static(__Unify___mdb__debugger_interface__match_1_0)
MR_decl_static(__Compare___mdb__debugger_interface__match_1_0)
MR_decl_static(__Unify___mdb__debugger_interface__pred_match_0_0)
MR_decl_static(__Compare___mdb__debugger_interface__pred_match_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(univ, univ)
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
0,
MR_string_const("end of file", 11)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_mdb__debugger_interface__type_ctor_info_arity_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__debugger_interface__arity_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__debugger_interface__arity_0_0)),
	"mdb.debugger_interface",
	"arity",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__debugger_interface__type_ctor_info_call_number_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__debugger_interface__call_number_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__debugger_interface__call_number_0_0)),
	"mdb.debugger_interface",
	"call_number",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_0 = {
	"hello_reply",
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

static const MR_FA_TypeInfo_Struct1 mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0 = {
	&mercury_data_mdb__debugger_interface__type_ctor_info_match_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
	&mercury_data_mdb__debugger_interface__type_ctor_info_match_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0 = {
	&mercury_data_mdb__debugger_interface__type_ctor_info_match_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1univ__type_ctor_info_univ_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_mdb__debugger_interface__ti_match_1list__ti_list_1univ__type_ctor_info_univ_0 = {
	&mercury_data_mdb__debugger_interface__type_ctor_info_match_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1univ__type_ctor_info_univ_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__debugger_interface__type_ctor_info_pred_match_0;

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_request_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_trace_port_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__type_ctor_info_pred_match_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1list__ti_list_1univ__type_ctor_info_univ_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_1 = {
	"forward_move",
	12,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_request_0_1,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_2 = {
	"current_slots",
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

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_3 = {
	"current_vars",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_4 = {
	"current_live_var_names",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_request_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_5 = {
	"current_nth_var",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	5,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_request_0_5,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_6 = {
	"abort_prog",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_7 = {
	"no_trace",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_8 = {
	"retry",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_9 = {
	"stack",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_10 = {
	"nondet_stack",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_11 = {
	"stack_regs",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	11,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_request_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_12 = {
	"error",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	12,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_request_0_12,
	NULL,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_request_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_13 = {
	"query",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	13,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_request_0_13,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_request_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_14 = {
	"cc_query",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	14,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_request_0_14,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_request_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_15 = {
	"io_query",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	15,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_request_0_15,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_request_0_16[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_16 = {
	"mmc_options",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	16,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_request_0_16,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_request_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_17 = {
	"browse",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	17,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_request_0_17,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_request_0_18[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_18 = {
	"link_collect",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	18,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_request_0_18,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_19 = {
	"collect",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	19,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_20 = {
	"current_grade",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	11,
	20,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_21 = {
	"collect_arg_on",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	12,
	21,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_22 = {
	"collect_arg_off",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	13,
	22,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_request_0_0[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_0,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_2,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_3,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_4,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_6,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_7,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_8,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_9,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_10,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_11,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_19,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_20,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_21,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_22

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_request_0_1[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_request_0_2[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_5

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_request_0_3[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_12,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_13,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_14,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_15,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_16,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_17,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_18

};

const MR_DuPtagLayout mercury_data_mdb__debugger_interface__du_ptag_ordered_debugger_request_0[] = {
	{ 14, MR_SECTAG_LOCAL,
	mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_request_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_request_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_request_0_2 },
	{ 7, MR_SECTAG_REMOTE,
	mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_request_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_name_ordered_debugger_request_0[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_6,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_17,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_14,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_19,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_22,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_21,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_20,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_4,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_5,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_2,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_3,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_12,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_1,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_0,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_15,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_18,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_16,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_7,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_10,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_13,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_8,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_9,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_request_0_11
};

const MR_Integer mercury_data_mdb__debugger_interface__functor_number_map_debugger_request_0[] = {
	13,
	12,
	9,
	10,
	7,
	8,
	0,
	17,
	20,
	21,
	18,
	22,
	11,
	19,
	2,
	14,
	16,
	1,
	15,
	3,
	6,
	5,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__debugger_interface__type_ctor_info_debugger_request_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__debugger_interface__debugger_request_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__debugger_interface__debugger_request_0_0)),
	"mdb.debugger_interface",
	"debugger_request",
	{ (void *)mercury_data_mdb__debugger_interface__du_name_ordered_debugger_request_0 },
	{ (void *)mercury_data_mdb__debugger_interface__du_ptag_ordered_debugger_request_0 },
	23,
	4,
	mercury_data_mdb__debugger_interface__functor_number_map_debugger_request_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_0 = {
	"hello",
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

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_1 = {
	"start",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_2 = {
	"forward_move_match_found",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_3 = {
	"forward_move_match_not_found",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_DuArgLocn mercury_data_mdb__debugger_interface__field_locns_debugger_response_0_4[] = {
	{ 0, 0, 0 },
	{ 1, 0, 0 },
	{ 2, 0, 0 },
	{ 3, 0, 4 },
	{ 3, 4, 1 },
	{ 4, 0, 0 },
	{ 5, 0, 0 },
	{ 6, 0, 0 },
	{ 7, 0, 0 },
	{ 8, 0, 0 },
	{ 9, 0, 0 },
	{ 10, 0, 0 },
	{ 11, 0, 0 },
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_4 = {
	"current_slots_user",
	13,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_4,
	NULL,
	mercury_data_mdb__debugger_interface__field_locns_debugger_response_0_4,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_5 = {
	"current_slots_comp",
	13,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	5,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_5,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1univ__type_ctor_info_univ_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_6 = {
	"current_vars",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	6,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_6,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_univ__type_ctor_info_univ_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_7 = {
	"current_nth_var",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	7,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_7,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_8 = {
	"current_live_var_names",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	8,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_8,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_9 = {
	"last_event",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_10 = {
	"browser_end",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_11 = {
	"mmc_option_ok",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	11,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_12 = {
	"ok",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	12,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_13 = {
	"error",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	13,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_13,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_14 = {
	"level",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	14,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_14,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_15 = {
	"proc",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	15,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_15,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_16[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_16 = {
	"proc",
	4,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	16,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_16,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_17 = {
	"def_module",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	17,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_17,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_18[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_18 = {
	"detail",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	18,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_18,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_19 = {
	"pred",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	19,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_20 = {
	"func",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	20,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_21[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_21 = {
	"det",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	21,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_21,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_22 = {
	"end_stack",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	22,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_23[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_23 = {
	"stack_regs",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	23,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_23,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_24 = {
	"link_collect_succeeded",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	11,
	24,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_25 = {
	"link_collect_failed",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	12,
	25,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_26 = {
	"collect_linked",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	13,
	26,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_27 = {
	"collect_not_linked",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	14,
	27,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_debugger_response_0_28[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_28 = {
	"grade",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	28,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_debugger_response_0_28,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_29 = {
	"execution_continuing",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	15,
	29,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_30 = {
	"execution_terminated",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	16,
	30,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_31 = {
	"collect_arg_on_ok",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	17,
	31,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_32 = {
	"collect_arg_off_ok",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	18,
	32,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_response_0_0[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_0,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_1,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_2,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_3,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_9,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_10,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_11,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_12,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_19,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_20,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_22,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_24,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_25,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_26,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_27,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_29,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_30,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_31,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_32

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_response_0_1[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_4

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_response_0_2[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_5

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_response_0_3[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_6,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_7,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_8,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_13,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_14,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_15,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_16,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_17,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_18,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_21,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_23,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_28

};

const MR_DuPtagLayout mercury_data_mdb__debugger_interface__du_ptag_ordered_debugger_response_0[] = {
	{ 19, MR_SECTAG_LOCAL,
	mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_response_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_response_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_response_0_2 },
	{ 12, MR_SECTAG_REMOTE,
	mercury_data_mdb__debugger_interface__du_stag_ordered_debugger_response_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_name_ordered_debugger_response_0[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_10,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_32,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_31,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_26,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_27,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_8,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_7,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_5,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_4,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_6,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_17,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_21,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_18,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_22,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_13,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_29,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_30,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_2,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_3,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_20,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_28,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_0,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_9,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_14,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_25,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_24,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_11,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_12,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_19,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_16,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_15,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_23,
	&mercury_data_mdb__debugger_interface__du_functor_desc_debugger_response_0_1
};

const MR_Integer mercury_data_mdb__debugger_interface__functor_number_map_debugger_response_0[] = {
	21,
	32,
	17,
	18,
	8,
	7,
	9,
	6,
	5,
	22,
	0,
	26,
	27,
	14,
	23,
	30,
	29,
	10,
	12,
	28,
	19,
	11,
	13,
	31,
	25,
	24,
	3,
	4,
	20,
	15,
	16,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__debugger_interface__type_ctor_info_debugger_response_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__debugger_interface__debugger_response_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__debugger_interface__debugger_response_0_0)),
	"mdb.debugger_interface",
	"debugger_response",
	{ (void *)mercury_data_mdb__debugger_interface__du_name_ordered_debugger_response_0 },
	{ (void *)mercury_data_mdb__debugger_interface__du_ptag_ordered_debugger_response_0 },
	33,
	4,
	mercury_data_mdb__debugger_interface__functor_number_map_debugger_response_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__debugger_interface__type_ctor_info_depth_number_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__debugger_interface__depth_number_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__debugger_interface__depth_number_0_0)),
	"mdb.debugger_interface",
	"depth_number",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__debugger_interface__type_ctor_info_determinism_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__debugger_interface__determinism_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__debugger_interface__determinism_0_0)),
	"mdb.debugger_interface",
	"determinism",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__debugger_interface__type_ctor_info_event_number_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__debugger_interface__event_number_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__debugger_interface__event_number_0_0)),
	"mdb.debugger_interface",
	"event_number",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_match_1_0 = {
	"nop",
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

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_match_1_1[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_match_1_1 = {
	"exact",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_match_1_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_match_1_2[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_match_1_2 = {
	"neg",
	1,
	1,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_match_1_2,
	NULL,
	NULL,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_match_1_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_match_1_3 = {
	"list",
	1,
	1,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_match_1_3,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_match_1_4[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_match_1_4 = {
	"interval",
	2,
	3,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_match_1_4,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_match_1_0[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_match_1_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_match_1_1[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_match_1_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_match_1_2[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_match_1_2

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_match_1_3[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_match_1_3,
	&mercury_data_mdb__debugger_interface__du_functor_desc_match_1_4

};

const MR_DuPtagLayout mercury_data_mdb__debugger_interface__du_ptag_ordered_match_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__debugger_interface__du_stag_ordered_match_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__debugger_interface__du_stag_ordered_match_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__debugger_interface__du_stag_ordered_match_1_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_mdb__debugger_interface__du_stag_ordered_match_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_name_ordered_match_1[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_match_1_1,
	&mercury_data_mdb__debugger_interface__du_functor_desc_match_1_4,
	&mercury_data_mdb__debugger_interface__du_functor_desc_match_1_3,
	&mercury_data_mdb__debugger_interface__du_functor_desc_match_1_2,
	&mercury_data_mdb__debugger_interface__du_functor_desc_match_1_0
};

const MR_Integer mercury_data_mdb__debugger_interface__functor_number_map_match_1[] = {
	4,
	0,
	3,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__debugger_interface__type_ctor_info_match_1 = {
	1,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__debugger_interface__match_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__debugger_interface__match_1_0)),
	"mdb.debugger_interface",
	"match",
	{ (void *)mercury_data_mdb__debugger_interface__du_name_ordered_match_1 },
	{ (void *)mercury_data_mdb__debugger_interface__du_ptag_ordered_match_1 },
	5,
	4,
	mercury_data_mdb__debugger_interface__functor_number_map_match_1
};

static const MR_FA_TypeInfo_Struct1 mercury_data_mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
	&mercury_data_mdb__debugger_interface__type_ctor_info_match_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0
}};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_pred_match_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_pred_match_0_0 = {
	"match_user_pred",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_pred_match_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__debugger_interface__field_types_pred_match_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_pred_match_0_1 = {
	"match_compiler_generated_pred",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__debugger_interface__field_types_pred_match_0_1,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__debugger_interface__du_functor_desc_pred_match_0_2 = {
	"match_any_pred",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_pred_match_0_0[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_pred_match_0_2

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_pred_match_0_1[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_pred_match_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_stag_ordered_pred_match_0_2[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_pred_match_0_1

};

const MR_DuPtagLayout mercury_data_mdb__debugger_interface__du_ptag_ordered_pred_match_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__debugger_interface__du_stag_ordered_pred_match_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__debugger_interface__du_stag_ordered_pred_match_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__debugger_interface__du_stag_ordered_pred_match_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__debugger_interface__du_name_ordered_pred_match_0[] = {
	&mercury_data_mdb__debugger_interface__du_functor_desc_pred_match_0_2,
	&mercury_data_mdb__debugger_interface__du_functor_desc_pred_match_0_1,
	&mercury_data_mdb__debugger_interface__du_functor_desc_pred_match_0_0
};

const MR_Integer mercury_data_mdb__debugger_interface__functor_number_map_pred_match_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__debugger_interface__type_ctor_info_pred_match_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__debugger_interface__pred_match_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__debugger_interface__pred_match_0_0)),
	"mdb.debugger_interface",
	"pred_match",
	{ (void *)mercury_data_mdb__debugger_interface__du_name_ordered_pred_match_0 },
	{ (void *)mercury_data_mdb__debugger_interface__du_ptag_ordered_pred_match_0 },
	3,
	4,
	mercury_data_mdb__debugger_interface__functor_number_map_pred_match_0
};




MR_BEGIN_MODULE(mdb__debugger_interface_module0)
	MR_init_entry1(mdb__debugger_interface__dummy_pred_to_avoid_warning_about_nothing_exported_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__dummy_pred_to_avoid_warning_about_nothing_exported_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dummy_pred_to_avoid_warning_about_nothing_exported'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__debugger_interface__dummy_pred_to_avoid_warning_about_nothing_exported_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(io__print_4_0);
MR_decl_entry(io__flush_output_3_0);

MR_BEGIN_MODULE(mdb__debugger_interface_module1)
	MR_init_entry1(mdb__debugger_interface__output_current_slots_user_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__output_current_slots_user_16_0);
	MR_init_label2(mdb__debugger_interface__output_current_slots_user_16_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_current_slots_user'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__output_current_slots_user_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 12);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tfield(1, MR_tempr1, 2) = MR_r3;
	MR_tfield(1, MR_tempr1, 3) = ((MR_Integer) MR_r4 | ((MR_Integer) MR_r5 << (MR_Integer) 4));
	MR_tfield(1, MR_tempr1, 4) = MR_r6;
	MR_tfield(1, MR_tempr1, 5) = MR_r7;
	MR_tfield(1, MR_tempr1, 6) = MR_r8;
	MR_tfield(1, MR_tempr1, 7) = MR_r9;
	MR_tfield(1, MR_tempr1, 8) = MR_r10;
	MR_tfield(1, MR_tempr1, 9) = MR_r11;
	MR_tfield(1, MR_tempr1, 10) = MR_r12;
	MR_tfield(1, MR_tempr1, 11) = MR_r13;
	MR_tempr2 = MR_r14;
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__debugger_interface, debugger_response);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_4_0,
		mdb__debugger_interface__output_current_slots_user_16_0_i3);
MR_def_label(mdb__debugger_interface__output_current_slots_user_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__print_4_0,
		mdb__debugger_interface__output_current_slots_user_16_0_i4);
MR_def_label(mdb__debugger_interface__output_current_slots_user_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__flush_output_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module2)
	MR_init_entry1(mdb__debugger_interface__output_current_slots_comp_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__output_current_slots_comp_16_0);
	MR_init_label2(mdb__debugger_interface__output_current_slots_comp_16_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_current_slots_comp'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__output_current_slots_comp_16_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 13);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_r2;
	MR_tfield(2, MR_tempr1, 2) = MR_r3;
	MR_tfield(2, MR_tempr1, 3) = MR_r4;
	MR_tfield(2, MR_tempr1, 4) = MR_r5;
	MR_tfield(2, MR_tempr1, 5) = MR_r6;
	MR_tfield(2, MR_tempr1, 6) = MR_r7;
	MR_tfield(2, MR_tempr1, 7) = MR_r8;
	MR_tfield(2, MR_tempr1, 8) = MR_r9;
	MR_tfield(2, MR_tempr1, 9) = MR_r10;
	MR_tfield(2, MR_tempr1, 10) = MR_r11;
	MR_tfield(2, MR_tempr1, 11) = MR_r12;
	MR_tfield(2, MR_tempr1, 12) = MR_r13;
	MR_tempr2 = MR_r14;
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__debugger_interface, debugger_response);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_4_0,
		mdb__debugger_interface__output_current_slots_comp_16_0_i3);
MR_def_label(mdb__debugger_interface__output_current_slots_comp_16_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__print_4_0,
		mdb__debugger_interface__output_current_slots_comp_16_0_i4);
MR_def_label(mdb__debugger_interface__output_current_slots_comp_16_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__flush_output_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module3)
	MR_init_entry1(mdb__debugger_interface__output_current_vars_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__output_current_vars_5_0);
	MR_init_label2(mdb__debugger_interface__output_current_vars_5_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_current_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__output_current_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__debugger_interface, debugger_response);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_4_0,
		mdb__debugger_interface__output_current_vars_5_0_i3);
MR_def_label(mdb__debugger_interface__output_current_vars_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__print_4_0,
		mdb__debugger_interface__output_current_vars_5_0_i4);
MR_def_label(mdb__debugger_interface__output_current_vars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__flush_output_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module4)
	MR_init_entry1(mdb__debugger_interface__output_current_nth_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__output_current_nth_var_4_0);
	MR_init_label2(mdb__debugger_interface__output_current_nth_var_4_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_current_nth_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__output_current_nth_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__debugger_interface, debugger_response);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_4_0,
		mdb__debugger_interface__output_current_nth_var_4_0_i3);
MR_def_label(mdb__debugger_interface__output_current_nth_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__print_4_0,
		mdb__debugger_interface__output_current_nth_var_4_0_i4);
MR_def_label(mdb__debugger_interface__output_current_nth_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__flush_output_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module5)
	MR_init_entry1(mdb__debugger_interface__output_current_live_var_names_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__output_current_live_var_names_5_0);
	MR_init_label2(mdb__debugger_interface__output_current_live_var_names_5_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_current_live_var_names'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__output_current_live_var_names_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__debugger_interface, debugger_response);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_4_0,
		mdb__debugger_interface__output_current_live_var_names_5_0_i3);
MR_def_label(mdb__debugger_interface__output_current_live_var_names_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__print_4_0,
		mdb__debugger_interface__output_current_live_var_names_5_0_i4);
MR_def_label(mdb__debugger_interface__output_current_live_var_names_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__flush_output_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdb__debugger_interface_module6)
	MR_init_entry1(fn__mdb__debugger_interface__get_var_number_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__debugger_interface__get_var_number_1_0);
	MR_init_label1(fn__mdb__debugger_interface__get_var_number_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_var_number'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__debugger_interface__get_var_number_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(fn__mdb__debugger_interface__get_var_number_1_0_i2);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_proceed();
MR_def_label(fn__mdb__debugger_interface__get_var_number_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("get_var_number: not a current_nth_var request", 45);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(mdb__debugger_interface_module7)
	MR_init_entry1(mdb__debugger_interface__match_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__match_2_0);
	MR_init_label10(mdb__debugger_interface__match_2_0,4,10,69,36,7,13,15,17,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'match'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__match_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__debugger_interface__match_2_0_i69);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(mdb__debugger_interface__match_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(mdb__debugger_interface__match_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(mdb__debugger_interface__match_2_0_i7);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(builtin__unify_2_0,
		mdb__debugger_interface__match_2_0_i10);
MR_def_label(mdb__debugger_interface__match_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(mdb__debugger_interface__match_2_0_i1);
	}
	MR_GOTO_LAB(mdb__debugger_interface__match_2_0_i36);
MR_def_label(mdb__debugger_interface__match_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdb__debugger_interface__match_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(mdb__debugger_interface__match_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(mdb__debugger_interface__match_2_0_i12);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_r1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		mdb__debugger_interface__match_2_0_i13);
MR_def_label(mdb__debugger_interface__match_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdb__debugger_interface__match_2_0_i15);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		mdb__debugger_interface__match_2_0_i17);
MR_def_label(mdb__debugger_interface__match_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdb__debugger_interface__match_2_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(builtin__compare_3_0,
		mdb__debugger_interface__match_2_0_i17);
MR_def_label(mdb__debugger_interface__match_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(mdb__debugger_interface__match_2_0_i36);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 2);
	MR_decr_sp_and_return(4);
MR_def_label(mdb__debugger_interface__match_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(list__member_2_0);
	}
MR_def_label(mdb__debugger_interface__match_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

MR_BEGIN_MODULE(mdb__debugger_interface_module8)
	MR_init_entry1(mdb__debugger_interface__found_match_user_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__found_match_user_14_0);
	MR_init_label10(mdb__debugger_interface__found_match_user_14_0,4,6,8,10,14,16,12,19,20,22)
	MR_init_label7(mdb__debugger_interface__found_match_user_14_0,24,26,28,31,52,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'found_match_user'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__found_match_user_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r14,1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i2);
	}
	MR_sv(24) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(6) = MR_r8;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_sv(9) = MR_r11;
	MR_sv(10) = MR_r12;
	MR_sv(11) = MR_r13;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r14;
	MR_sv(12) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(13) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(14) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(15) = MR_tfield(1, MR_tempr2, 4);
	MR_sv(16) = MR_tfield(1, MR_tempr2, 5);
	MR_sv(17) = MR_tfield(1, MR_tempr2, 6);
	MR_sv(18) = MR_tfield(1, MR_tempr2, 7);
	MR_sv(19) = MR_tfield(1, MR_tempr2, 8);
	MR_sv(20) = MR_tfield(1, MR_tempr2, 9);
	MR_sv(21) = MR_tfield(1, MR_tempr2, 10);
	MR_sv(22) = MR_tfield(1, MR_tempr2, 11);
	MR_sv(23) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(23);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_user_14_0_i4);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i1);
	}
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_user_14_0_i6);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i1);
	}
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_user_14_0_i8);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, trace_port);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_user_14_0_i10);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(15),1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(15);
	MR_sv(24) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_user_14_0_i14);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_user_14_0_i16);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i1);
	}
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(16);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i19);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(15),0,0)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i1);
	}
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(16);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
MR_def_label(mdb__debugger_interface__found_match_user_14_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_user_14_0_i20);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i1);
	}
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_user_14_0_i22);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i1);
	}
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_user_14_0_i24);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i1);
	}
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_user_14_0_i26);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i1);
	}
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_user_14_0_i28);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_user_14_0_i31);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_user_14_0_i1);
	}
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(22);
	MR_r3 = MR_sv(11);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(mdb__debugger_interface__match_2_0);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__debugger_interface__found_match_user_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("found_match: forward_move expected", 34);
	MR_np_call_localret_ent(require__error_1_0,
		mdb__debugger_interface__found_match_user_14_0_i52);
MR_def_label(mdb__debugger_interface__found_match_user_14_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module9)
	MR_init_entry1(mdb__debugger_interface__found_match_comp_14_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__found_match_comp_14_0);
	MR_init_label10(mdb__debugger_interface__found_match_comp_14_0,4,6,8,10,14,16,12,19,20,22)
	MR_init_label7(mdb__debugger_interface__found_match_comp_14_0,24,26,28,31,52,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'found_match_comp'/14 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__found_match_comp_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r14,1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i2);
	}
	MR_sv(24) = MR_r2;
	MR_sv(23) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_r9;
	MR_sv(7) = MR_r10;
	MR_sv(8) = MR_r11;
	MR_sv(9) = MR_r12;
	MR_sv(10) = MR_r13;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r14;
	MR_sv(11) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(12) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(13) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(14) = MR_tfield(1, MR_tempr2, 4);
	MR_sv(15) = MR_tfield(1, MR_tempr2, 5);
	MR_sv(16) = MR_tfield(1, MR_tempr2, 6);
	MR_sv(17) = MR_tfield(1, MR_tempr2, 7);
	MR_sv(18) = MR_tfield(1, MR_tempr2, 8);
	MR_sv(19) = MR_tfield(1, MR_tempr2, 9);
	MR_sv(20) = MR_tfield(1, MR_tempr2, 10);
	MR_sv(21) = MR_tfield(1, MR_tempr2, 11);
	MR_sv(22) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_comp_14_0_i4);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i1);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_comp_14_0_i6);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i1);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_comp_14_0_i8);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, trace_port);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_comp_14_0_i10);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i1);
	}
	if (MR_PTAG_TESTR(MR_sv(14),2)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(24) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(23) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(23);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_comp_14_0_i14);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i1);
	}
	MR_r1 = MR_sv(23);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_comp_14_0_i16);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i1);
	}
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(15);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i19);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(14),0,0)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i1);
	}
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(15);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_comp_14_0_i20);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i1);
	}
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_comp_14_0_i22);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i1);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_comp_14_0_i24);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i1);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_comp_14_0_i26);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i1);
	}
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_comp_14_0_i28);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(mdb__debugger_interface__match_2_0,
		mdb__debugger_interface__found_match_comp_14_0_i31);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__debugger_interface__found_match_comp_14_0_i1);
	}
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(mdb__debugger_interface__match_2_0);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("found_match: forward_move expected", 34);
	MR_np_call_localret_ent(require__error_1_0,
		mdb__debugger_interface__found_match_comp_14_0_i52);
MR_def_label(mdb__debugger_interface__found_match_comp_14_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__read_4_0);

MR_BEGIN_MODULE(mdb__debugger_interface_module10)
	MR_init_entry1(mdb__debugger_interface__read_request_from_socket_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__read_request_from_socket_5_0);
	MR_init_label10(mdb__debugger_interface__read_request_from_socket_5_0,2,4,6,9,10,11,12,13,14,15)
	MR_init_label10(mdb__debugger_interface__read_request_from_socket_5_0,16,17,18,19,20,21,22,23,24,25)
	MR_init_label5(mdb__debugger_interface__read_request_from_socket_5_0,26,27,28,29,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_request_from_socket'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__read_request_from_socket_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__debugger_interface, debugger_request);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__read_4_0,
		mdb__debugger_interface__read_request_from_socket_5_0_i2);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_r2 = (MR_Integer) 6;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 6;
	MR_decr_sp_and_return(1);
	}
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,4)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i9);
	}
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 5;
	MR_decr_sp_and_return(1);
	}
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,10)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i10);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 19;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,13)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i11);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 22;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,12)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i12);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 21;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,11)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i13);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 20;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,3)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i14);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 7;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,1)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i15);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 3;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,2)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i16);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 2;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i17);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,5)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i18);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 4;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,8)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i19);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 11;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,6)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i20);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 9;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,7)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i21);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 10;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,9)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i22);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 12;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i23);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 8;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,1)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i24);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i25);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 17;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i26);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 14;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i27);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 6;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i28);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 15;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,6)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i29);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 18;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(mdb__debugger_interface__read_request_from_socket_5_0_i30);
	}
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 16;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__debugger_interface__read_request_from_socket_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 13;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(mdb__debugger_interface_module11)
	MR_init_entry1(mdb__debugger_interface__get_list_modules_to_import_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__get_list_modules_to_import_3_0);
	MR_init_label5(mdb__debugger_interface__get_list_modules_to_import_3_0,2,4,6,11,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_list_modules_to_import'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__get_list_modules_to_import_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(mdb__debugger_interface__get_list_modules_to_import_3_0_i2);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_GOTO_LAB(mdb__debugger_interface__get_list_modules_to_import_3_0_i11);
MR_def_label(mdb__debugger_interface__get_list_modules_to_import_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(mdb__debugger_interface__get_list_modules_to_import_3_0_i4);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_GOTO_LAB(mdb__debugger_interface__get_list_modules_to_import_3_0_i11);
MR_def_label(mdb__debugger_interface__get_list_modules_to_import_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(mdb__debugger_interface__get_list_modules_to_import_3_0_i6);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_GOTO_LAB(mdb__debugger_interface__get_list_modules_to_import_3_0_i11);
MR_def_label(mdb__debugger_interface__get_list_modules_to_import_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("get_list_modules_to_import: not a query request", 47);
	MR_np_call_localret_ent(require__error_1_0,
		mdb__debugger_interface__get_list_modules_to_import_3_0_i11);
MR_def_label(mdb__debugger_interface__get_list_modules_to_import_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(list__length_2_0,
		mdb__debugger_interface__get_list_modules_to_import_3_0_i12);
MR_def_label(mdb__debugger_interface__get_list_modules_to_import_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module12)
	MR_init_entry1(mdb__debugger_interface__get_mmc_options_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__get_mmc_options_2_0);
	MR_init_label1(mdb__debugger_interface__get_mmc_options_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_mmc_options'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__get_mmc_options_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(mdb__debugger_interface__get_mmc_options_2_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_proceed();
MR_def_label(mdb__debugger_interface__get_mmc_options_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("get_mmc_options: not a mmc_options request", 42);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module13)
	MR_init_entry1(mdb__debugger_interface__get_object_file_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__get_object_file_name_2_0);
	MR_init_label1(mdb__debugger_interface__get_object_file_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_object_file_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__get_object_file_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(mdb__debugger_interface__get_object_file_name_2_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_proceed();
MR_def_label(mdb__debugger_interface__get_object_file_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("get_object_file_name: not a link_collect request", 48);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module14)
	MR_init_entry1(mdb__debugger_interface__init_mercury_string_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__init_mercury_string_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_mercury_string'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__init_mercury_string_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module15)
	MR_init_entry1(mdb__debugger_interface__get_variable_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__debugger_interface__get_variable_name_2_0);
	MR_init_label1(mdb__debugger_interface__get_variable_name_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_variable_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__debugger_interface__get_variable_name_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(mdb__debugger_interface__get_variable_name_2_0_i2);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_proceed();
MR_def_label(mdb__debugger_interface__get_variable_name_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("get_variable_name: not a browse request", 39);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module16)
	MR_init_entry1(__Unify___mdb__debugger_interface__arity_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__debugger_interface__arity_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__debugger_interface__arity_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdb__debugger_interface_module17)
	MR_init_entry1(__Compare___mdb__debugger_interface__arity_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__debugger_interface__arity_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__debugger_interface__arity_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module18)
	MR_init_entry1(__Unify___mdb__debugger_interface__call_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__debugger_interface__call_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__debugger_interface__call_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module19)
	MR_init_entry1(__Compare___mdb__debugger_interface__call_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__debugger_interface__call_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__debugger_interface__call_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdb__debugger_interface_module20)
	MR_init_entry1(__Unify___mdb__debugger_interface__debugger_request_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__debugger_interface__debugger_request_0_0);
	MR_init_label10(__Unify___mdb__debugger_interface__debugger_request_0_0,5,6,7,8,9,10,11,12,13,14)
	MR_init_label10(__Unify___mdb__debugger_interface__debugger_request_0_0,15,16,17,18,19,23,25,27,29,31)
	MR_init_label10(__Unify___mdb__debugger_interface__debugger_request_0_0,33,35,37,39,41,44,21,48,50,54)
	MR_init_label5(__Unify___mdb__debugger_interface__debugger_request_0_0,56,60,131,62,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__debugger_interface__debugger_request_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i131);
	}
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,4)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(23);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,10)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,13)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,12)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,11)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i11);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i12);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i13);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i14);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i15);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i16);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i17);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i18);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i19);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(23);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i21);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(1, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(1, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(1, MR_tempr1, 9);
	MR_sv(10) = MR_tfield(1, MR_tempr1, 10);
	MR_sv(11) = MR_tfield(1, MR_tempr1, 11);
	MR_sv(12) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(13) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(14) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(15) = MR_tfield(1, MR_tempr2, 4);
	MR_sv(16) = MR_tfield(1, MR_tempr2, 5);
	MR_sv(17) = MR_tfield(1, MR_tempr2, 6);
	MR_sv(18) = MR_tfield(1, MR_tempr2, 7);
	MR_sv(19) = MR_tfield(1, MR_tempr2, 8);
	MR_sv(20) = MR_tfield(1, MR_tempr2, 9);
	MR_sv(21) = MR_tfield(1, MR_tempr2, 10);
	MR_sv(22) = MR_tfield(1, MR_tempr2, 11);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__debugger_interface__match_1_0,
		__Unify___mdb__debugger_interface__debugger_request_0_0_i23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___mdb__debugger_interface__match_1_0,
		__Unify___mdb__debugger_interface__debugger_request_0_0_i25);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___mdb__debugger_interface__match_1_0,
		__Unify___mdb__debugger_interface__debugger_request_0_0_i27);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, trace_port);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___mdb__debugger_interface__match_1_0,
		__Unify___mdb__debugger_interface__debugger_request_0_0_i29);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___mdb__debugger_interface__pred_match_0_0,
		__Unify___mdb__debugger_interface__debugger_request_0_0_i31);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Unify___mdb__debugger_interface__match_1_0,
		__Unify___mdb__debugger_interface__debugger_request_0_0_i33);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Unify___mdb__debugger_interface__match_1_0,
		__Unify___mdb__debugger_interface__debugger_request_0_0_i35);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___mdb__debugger_interface__match_1_0,
		__Unify___mdb__debugger_interface__debugger_request_0_0_i37);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(__Unify___mdb__debugger_interface__match_1_0,
		__Unify___mdb__debugger_interface__debugger_request_0_0_i39);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___mdb__debugger_interface__match_1_0,
		__Unify___mdb__debugger_interface__debugger_request_0_0_i41);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___mdb__debugger_interface__match_1_0,
		__Unify___mdb__debugger_interface__debugger_request_0_0_i44);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(22);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Unify___mdb__debugger_interface__match_1_0);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i48);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(23);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i50);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i54);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(23);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i56);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i60);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(23);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i62);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(23);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_request_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__debugger_interface__debugger_request_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module21)
	MR_init_entry1(__Index___mdb__debugger_interface__debugger_request_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___mdb__debugger_interface__debugger_request_0_0);
	MR_init_label10(__Index___mdb__debugger_interface__debugger_request_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(__Index___mdb__debugger_interface__debugger_request_0_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label2(__Index___mdb__debugger_interface__debugger_request_0_0,23,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Index___mdb__debugger_interface__debugger_request_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i3);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i4);
	}
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i5);
	}
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i6);
	}
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i7);
	}
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i8);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i10);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i12);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i13);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i14);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i15);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i16);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i17);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i18);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i19);
	}
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i20);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i21);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i22);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i23);
	}
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_request_0_0_i24);
	}
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_request_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(mdb__debugger_interface_module22)
	MR_init_entry1(__Compare___mdb__debugger_interface__debugger_request_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__debugger_interface__debugger_request_0_0);
	MR_init_label10(__Compare___mdb__debugger_interface__debugger_request_0_0,4,5,6,7,10,11,12,13,14,15)
	MR_init_label10(__Compare___mdb__debugger_interface__debugger_request_0_0,16,17,18,19,20,21,22,172,23,24)
	MR_init_label10(__Compare___mdb__debugger_interface__debugger_request_0_0,30,34,38,42,46,50,54,58,62,66)
	MR_init_label10(__Compare___mdb__debugger_interface__debugger_request_0_0,71,27,86,89,92,95,98,101,8,110)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__debugger_interface__debugger_request_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i172);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___mdb__debugger_interface__debugger_request_0_0,
		__Compare___mdb__debugger_interface__debugger_request_0_0_i4);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___mdb__debugger_interface__debugger_request_0_0,
		__Compare___mdb__debugger_interface__debugger_request_0_0_i5);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,10)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,13)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,12)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,11)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i23);
	}
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(23);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i24);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i8);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i27);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(22) = MR_tfield(1, MR_tempr5, 11);
	MR_sv(21) = MR_tfield(1, MR_tempr5, 10);
	MR_sv(20) = MR_tfield(1, MR_tempr5, 9);
	MR_sv(19) = MR_tfield(1, MR_tempr5, 8);
	MR_sv(18) = MR_tfield(1, MR_tempr5, 7);
	MR_sv(17) = MR_tfield(1, MR_tempr5, 6);
	MR_sv(16) = MR_tfield(1, MR_tempr5, 5);
	MR_sv(15) = MR_tfield(1, MR_tempr5, 4);
	MR_sv(14) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(13) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(12) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(11) = MR_tfield(1, MR_tempr6, 11);
	MR_sv(10) = MR_tfield(1, MR_tempr6, 10);
	MR_sv(9) = MR_tfield(1, MR_tempr6, 9);
	MR_sv(8) = MR_tfield(1, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(1, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(1, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(1, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdb__debugger_interface__match_1_0,
		__Compare___mdb__debugger_interface__debugger_request_0_0_i30);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i110);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(12);
	MR_np_call_localret_ent(__Compare___mdb__debugger_interface__match_1_0,
		__Compare___mdb__debugger_interface__debugger_request_0_0_i34);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i110);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___mdb__debugger_interface__match_1_0,
		__Compare___mdb__debugger_interface__debugger_request_0_0_i38);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i110);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, trace_port);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___mdb__debugger_interface__match_1_0,
		__Compare___mdb__debugger_interface__debugger_request_0_0_i42);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i110);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___mdb__debugger_interface__pred_match_0_0,
		__Compare___mdb__debugger_interface__debugger_request_0_0_i46);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i110);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(__Compare___mdb__debugger_interface__match_1_0,
		__Compare___mdb__debugger_interface__debugger_request_0_0_i50);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i110);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___mdb__debugger_interface__match_1_0,
		__Compare___mdb__debugger_interface__debugger_request_0_0_i54);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i110);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___mdb__debugger_interface__match_1_0,
		__Compare___mdb__debugger_interface__debugger_request_0_0_i58);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i110);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(19);
	MR_np_call_localret_ent(__Compare___mdb__debugger_interface__match_1_0,
		__Compare___mdb__debugger_interface__debugger_request_0_0_i62);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i110);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___mdb__debugger_interface__match_1_0,
		__Compare___mdb__debugger_interface__debugger_request_0_0_i66);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i110);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___mdb__debugger_interface__match_1_0,
		__Compare___mdb__debugger_interface__debugger_request_0_0_i71);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i110);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(22);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Compare___mdb__debugger_interface__match_1_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i86);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i89);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i92);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i95);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i98);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i101);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_request_0_0_i8);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_request_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___univ__univ_0_0);

MR_BEGIN_MODULE(mdb__debugger_interface_module23)
	MR_init_entry1(__Unify___mdb__debugger_interface__debugger_response_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__debugger_interface__debugger_response_0_0);
	MR_init_label10(__Unify___mdb__debugger_interface__debugger_response_0_0,5,6,7,8,9,10,11,12,13,14)
	MR_init_label10(__Unify___mdb__debugger_interface__debugger_response_0_0,15,16,17,18,19,20,21,22,23,24)
	MR_init_label10(__Unify___mdb__debugger_interface__debugger_response_0_0,26,30,28,34,40,38,44,46,48,50)
	MR_init_label6(__Unify___mdb__debugger_interface__debugger_response_0_0,52,54,56,174,58,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__debugger_interface__debugger_response_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i174);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,5)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,18)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,17)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,13)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,14)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,10)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,15)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i11);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,16)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i12);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i13);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i14);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i15);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i16);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i17);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,12)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i18);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,11)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i19);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i20);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i21);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i22);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i23);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(4);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i24);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 4);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 4);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 5);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 5);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 6);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 6);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 7);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 7);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 8);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 8);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 9);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 9);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 10);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 10);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 11);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 11);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(2, MR_tempr3, 12);
	MR_tempr2 = MR_tfield(2, MR_tempr4, 12);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i26);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = ((MR_Integer) MR_tfield(1, MR_tempr3, 3) & (MR_Integer) 15);
	MR_tempr2 = ((MR_Integer) MR_tfield(1, MR_tempr4, 3) & (MR_Integer) 15);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = (((MR_Integer) MR_tfield(1, MR_tempr3, 3) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_tempr2 = (((MR_Integer) MR_tfield(1, MR_tempr4, 3) >> (MR_Integer) 4) & (MR_Integer) 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 4);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 4);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 5);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 5);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 6);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 6);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 7);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 7);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 8);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 8);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 9);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 9);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 10);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 10);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 11);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 11);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i28);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__debugger_interface__debugger_response_0_0_i30);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i34);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___univ__univ_0_0);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i38);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__debugger_interface__debugger_response_0_0_i40);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i44);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i46);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i48);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 3);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i50);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i52);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i54);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i56);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 4);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 4);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i58);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 3);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 4);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 4);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 5);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 5);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__debugger_response_0_0_i1);
	}
	MR_tempr1 = MR_tfield(3, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 3);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Unify___mdb__debugger_interface__debugger_response_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module24)
	MR_init_entry1(__Index___mdb__debugger_interface__debugger_response_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___mdb__debugger_interface__debugger_response_0_0);
	MR_init_label10(__Index___mdb__debugger_interface__debugger_response_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(__Index___mdb__debugger_interface__debugger_response_0_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(__Index___mdb__debugger_interface__debugger_response_0_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label2(__Index___mdb__debugger_interface__debugger_response_0_0,33,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Index___mdb__debugger_interface__debugger_response_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i3);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,18)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i4);
	}
	MR_r1 = (MR_Integer) 32;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i5);
	}
	MR_r1 = (MR_Integer) 31;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i6);
	}
	MR_r1 = (MR_Integer) 26;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i7);
	}
	MR_r1 = (MR_Integer) 27;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i9);
	}
	MR_r1 = (MR_Integer) 29;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i10);
	}
	MR_r1 = (MR_Integer) 30;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i12);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i13);
	}
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i15);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i16);
	}
	MR_r1 = (MR_Integer) 25;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i17);
	}
	MR_r1 = (MR_Integer) 24;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i18);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i19);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i20);
	}
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i22);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i23);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i24);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i25);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i26);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i27);
	}
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i28);
	}
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i29);
	}
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i30);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i31);
	}
	MR_r1 = (MR_Integer) 28;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i32);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i33);
	}
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(__Index___mdb__debugger_interface__debugger_response_0_0_i34);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___mdb__debugger_interface__debugger_response_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___univ__univ_0_0);

MR_BEGIN_MODULE(mdb__debugger_interface_module25)
	MR_init_entry1(__Compare___mdb__debugger_interface__debugger_response_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__debugger_interface__debugger_response_0_0);
	MR_init_label10(__Compare___mdb__debugger_interface__debugger_response_0_0,4,5,6,7,10,11,12,13,14,15)
	MR_init_label10(__Compare___mdb__debugger_interface__debugger_response_0_0,16,17,18,19,20,21,22,23,24,25)
	MR_init_label10(__Compare___mdb__debugger_interface__debugger_response_0_0,26,27,367,28,32,36,40,44,48,52)
	MR_init_label10(__Compare___mdb__debugger_interface__debugger_response_0_0,56,60,64,68,72,76,29,95,99,103)
	MR_init_label10(__Compare___mdb__debugger_interface__debugger_response_0_0,107,111,115,119,123,127,131,135,139,92)
	MR_init_label10(__Compare___mdb__debugger_interface__debugger_response_0_0,158,155,163,169,166,174,177,183,187,180)
	MR_init_label10(__Compare___mdb__debugger_interface__debugger_response_0_0,193,196,199,205,209,213,202,223,227,231)
	MR_init_label6(__Compare___mdb__debugger_interface__debugger_response_0_0,235,220,245,249,8,259)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__debugger_interface__debugger_response_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i367);
	}
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_np_call_localret_ent(__Index___mdb__debugger_interface__debugger_response_0_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i4);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(__Index___mdb__debugger_interface__debugger_response_0_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i5);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(11) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(11) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,5)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,18)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,17)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,13)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,14)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,10)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,15)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,16)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,3)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,9)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,4)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,12)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,11)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,6)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i25);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,7)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i26);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,8)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i27);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i28);
	}
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,367)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(25);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(9),2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i29);
	}
	if (MR_PTAG_TESTR(MR_sv(10),2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(10);
	MR_sv(8) = MR_tfield(2, MR_tempr5, 12);
	MR_sv(7) = MR_tfield(2, MR_tempr5, 11);
	MR_sv(6) = MR_tfield(2, MR_tempr5, 10);
	MR_sv(5) = MR_tfield(2, MR_tempr5, 9);
	MR_sv(4) = MR_tfield(2, MR_tempr5, 8);
	MR_sv(3) = MR_tfield(2, MR_tempr5, 7);
	MR_sv(2) = MR_tfield(2, MR_tempr5, 6);
	MR_sv(1) = MR_tfield(2, MR_tempr5, 5);
	MR_sv(24) = MR_tfield(2, MR_tempr5, 4);
	MR_sv(23) = MR_tfield(2, MR_tempr5, 3);
	MR_sv(22) = MR_tfield(2, MR_tempr5, 2);
	MR_sv(21) = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(9);
	MR_sv(20) = MR_tfield(2, MR_tempr6, 12);
	MR_sv(19) = MR_tfield(2, MR_tempr6, 11);
	MR_sv(18) = MR_tfield(2, MR_tempr6, 10);
	MR_sv(17) = MR_tfield(2, MR_tempr6, 9);
	MR_sv(16) = MR_tfield(2, MR_tempr6, 8);
	MR_sv(15) = MR_tfield(2, MR_tempr6, 7);
	MR_sv(14) = MR_tfield(2, MR_tempr6, 6);
	MR_sv(13) = MR_tfield(2, MR_tempr6, 5);
	MR_sv(12) = MR_tfield(2, MR_tempr6, 4);
	MR_sv(11) = MR_tfield(2, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(9) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i32);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i36);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i40);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i44);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i48);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i52);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i56);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i60);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i64);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i68);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i72);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i76);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(9),1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i92);
	}
	if (MR_PTAG_TESTR(MR_sv(10),1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(10);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 11);
	MR_sv(7) = MR_tfield(1, MR_tempr5, 10);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 9);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 8);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 7);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 6);
	MR_sv(2) = MR_tfield(1, MR_tempr5, 5);
	MR_sv(1) = MR_tfield(1, MR_tempr5, 4);
	MR_sv(24) = (((MR_Integer) MR_tfield(1, MR_tempr5, 3) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(23) = ((MR_Integer) MR_tfield(1, MR_tempr5, 3) & (MR_Integer) 15);
	MR_sv(22) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(21) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(9);
	MR_sv(20) = MR_tfield(1, MR_tempr6, 11);
	MR_sv(19) = MR_tfield(1, MR_tempr6, 10);
	MR_sv(18) = MR_tfield(1, MR_tempr6, 9);
	MR_sv(17) = MR_tfield(1, MR_tempr6, 8);
	MR_sv(16) = MR_tfield(1, MR_tempr6, 7);
	MR_sv(15) = MR_tfield(1, MR_tempr6, 6);
	MR_sv(14) = MR_tfield(1, MR_tempr6, 5);
	MR_sv(13) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(12) = (((MR_Integer) MR_tfield(1, MR_tempr6, 3) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(11) = ((MR_Integer) MR_tfield(1, MR_tempr6, 3) & (MR_Integer) 15);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(9) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i95);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i99);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i103);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i107);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i111);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i115);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i119);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i123);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i127);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i131);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i135);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i139);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i155);
	}
	if (MR_RTAGS_TESTR(MR_sv(10),3,2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(10);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(9);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(9) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(10) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i158);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i163);
	}
	if (MR_RTAGS_TESTR(MR_sv(10),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(9), 1);
	MR_r2 = MR_tfield(3, MR_sv(10), 1);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___univ__univ_0_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i166);
	}
	if (MR_RTAGS_TESTR(MR_sv(10),3,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(10);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(9);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(9) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(10) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i169);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,7)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i174);
	}
	if (MR_RTAGS_TESTR(MR_sv(10),3,7)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(9), 1);
	MR_r2 = MR_tfield(3, MR_sv(10), 1);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,9)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i177);
	}
	if (MR_RTAGS_TESTR(MR_sv(10),3,9)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(9), 1);
	MR_r2 = MR_tfield(3, MR_sv(10), 1);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,8)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i180);
	}
	if (MR_RTAGS_TESTR(MR_sv(10),3,8)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(10);
	MR_sv(12) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(11) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(9);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(9) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i183);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i187);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,3)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i193);
	}
	if (MR_RTAGS_TESTR(MR_sv(10),3,3)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(9), 1);
	MR_r2 = MR_tfield(3, MR_sv(10), 1);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,11)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i196);
	}
	if (MR_RTAGS_TESTR(MR_sv(10),3,11)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(9), 1);
	MR_r2 = MR_tfield(3, MR_sv(10), 1);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,4)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i199);
	}
	if (MR_RTAGS_TESTR(MR_sv(10),3,4)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	MR_r1 = MR_tfield(3, MR_sv(9), 1);
	MR_r2 = MR_tfield(3, MR_sv(10), 1);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,6)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i202);
	}
	if (MR_RTAGS_TESTR(MR_sv(10),3,6)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(10);
	MR_sv(14) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(13) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(12) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(9);
	MR_sv(11) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(9) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i205);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i209);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i213);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(9),3,5)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i220);
	}
	if (MR_RTAGS_TESTR(MR_sv(10),3,5)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(10);
	MR_sv(16) = MR_tfield(3, MR_tempr5, 5);
	MR_sv(15) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(14) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(13) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(9);
	MR_sv(12) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(11) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(9) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i223);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i227);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i231);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i235);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(16);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,220)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(10),3,10)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(10);
	MR_sv(12) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(11) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(9);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(9) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i245);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,245)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__debugger_interface__debugger_response_0_0_i249);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__debugger_response_0_0_i259);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(12);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___mdb__debugger_interface__debugger_response_0_0,259)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module26)
	MR_init_entry1(__Unify___mdb__debugger_interface__depth_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__debugger_interface__depth_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__debugger_interface__depth_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module27)
	MR_init_entry1(__Compare___mdb__debugger_interface__depth_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__debugger_interface__depth_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__debugger_interface__depth_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module28)
	MR_init_entry1(__Unify___mdb__debugger_interface__determinism_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__debugger_interface__determinism_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__debugger_interface__determinism_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module29)
	MR_init_entry1(__Compare___mdb__debugger_interface__determinism_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__debugger_interface__determinism_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__debugger_interface__determinism_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module30)
	MR_init_entry1(__Unify___mdb__debugger_interface__event_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__debugger_interface__event_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__debugger_interface__event_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module31)
	MR_init_entry1(__Compare___mdb__debugger_interface__event_number_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__debugger_interface__event_number_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__debugger_interface__event_number_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module32)
	MR_init_entry1(__Unify___mdb__debugger_interface__match_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__debugger_interface__match_1_0);
	MR_init_label7(__Unify___mdb__debugger_interface__match_1_0,5,6,10,16,36,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__debugger_interface__match_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__match_1_0_i36);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__match_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__debugger_interface__match_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__match_1_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__match_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdb__debugger_interface__match_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__match_1_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__match_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdb__debugger_interface__match_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__match_1_0_i14);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__match_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___mdb__debugger_interface__match_1_0_i16);
MR_def_label(__Unify___mdb__debugger_interface__match_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__match_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___mdb__debugger_interface__match_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__debugger_interface__match_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__match_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__debugger_interface__match_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module33)
	MR_init_entry1(__Compare___mdb__debugger_interface__match_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__debugger_interface__match_1_0);
	MR_init_label10(__Compare___mdb__debugger_interface__match_1_0,72,7,8,9,5,13,14,16,11,20)
	MR_init_label10(__Compare___mdb__debugger_interface__match_1_0,21,22,18,27,28,29,32,25,38,39)
	MR_init_label5(__Compare___mdb__debugger_interface__match_1_0,68,40,69,41,43)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__debugger_interface__match_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i72);
	}
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(2) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i7);
	}
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i69);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i14);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(3), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i69);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i18);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i22);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(3), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i69);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i25);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i27);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i28);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i68);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___mdb__debugger_interface__match_1_0_i32);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i43);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i38);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i39);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i40);
	}
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(3),3,1)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__match_1_0_i41);
	}
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(3), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__debugger_interface__match_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module34)
	MR_init_entry1(__Unify___mdb__debugger_interface__pred_match_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__debugger_interface__pred_match_0_0);
	MR_init_label6(__Unify___mdb__debugger_interface__pred_match_0_0,5,8,24,6,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__debugger_interface__pred_match_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__pred_match_0_0_i24);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__pred_match_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__debugger_interface__pred_match_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__pred_match_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__pred_match_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__debugger_interface__match_1_0,
		__Unify___mdb__debugger_interface__pred_match_0_0_i8);
MR_def_label(__Unify___mdb__debugger_interface__pred_match_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__pred_match_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__debugger_interface__match_1_0);
MR_def_label(__Unify___mdb__debugger_interface__pred_match_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__debugger_interface__pred_match_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__pred_match_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdb__debugger_interface__match_1_0,
		__Unify___mdb__debugger_interface__pred_match_0_0_i13);
MR_def_label(__Unify___mdb__debugger_interface__pred_match_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__debugger_interface__pred_match_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__debugger_interface__match_1_0);
MR_def_label(__Unify___mdb__debugger_interface__pred_match_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__debugger_interface_module35)
	MR_init_entry1(__Compare___mdb__debugger_interface__pred_match_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__debugger_interface__pred_match_0_0);
	MR_init_label10(__Compare___mdb__debugger_interface__pred_match_0_0,42,43,5,11,14,9,20,21,23,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__debugger_interface__pred_match_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__pred_match_0_0_i42);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__pred_match_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__pred_match_0_0_i43);
	}
MR_def_label(__Compare___mdb__debugger_interface__pred_match_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__debugger_interface__pred_match_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__debugger_interface__pred_match_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__pred_match_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__pred_match_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__debugger_interface__pred_match_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__pred_match_0_0_i43);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(2, MR_tempr3, 0);
	MR_r3 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdb__debugger_interface__match_1_0,
		__Compare___mdb__debugger_interface__pred_match_0_0_i14);
MR_def_label(__Compare___mdb__debugger_interface__pred_match_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__pred_match_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdb__debugger_interface__match_1_0);
MR_def_label(__Compare___mdb__debugger_interface__pred_match_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__pred_match_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__debugger_interface__pred_match_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__pred_match_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__debugger_interface__pred_match_0_0,21)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, pred_or_func);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdb__debugger_interface__match_1_0,
		__Compare___mdb__debugger_interface__pred_match_0_0_i23);
MR_def_label(__Compare___mdb__debugger_interface__pred_match_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__debugger_interface__pred_match_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdb__debugger_interface__match_1_0);
MR_def_label(__Compare___mdb__debugger_interface__pred_match_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__mdb__debugger_interface__get_variable_name_2_0);

void
ML_DI_get_variable_name(MR_Word Mercury__argument1, MR_String * Mercury__argument2);

void
ML_DI_get_variable_name(MR_Word Mercury__argument1, MR_String * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__debugger_interface__get_variable_name_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__debugger_interface__get_variable_name_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = (MR_String) MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__debugger_interface__init_mercury_string_1_0);

void
ML_DI_init_mercury_string(MR_String * Mercury__argument1);

void
ML_DI_init_mercury_string(MR_String * Mercury__argument1)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__debugger_interface__init_mercury_string_1_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__debugger_interface__init_mercury_string_1_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument1 = (MR_String) MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__debugger_interface__get_object_file_name_2_0);

void
ML_DI_get_object_file_name(MR_Word Mercury__argument1, MR_String * Mercury__argument2);

void
ML_DI_get_object_file_name(MR_Word Mercury__argument1, MR_String * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__debugger_interface__get_object_file_name_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__debugger_interface__get_object_file_name_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = (MR_String) MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__debugger_interface__get_mmc_options_2_0);

void
ML_DI_get_mmc_options(MR_Word Mercury__argument1, MR_String * Mercury__argument2);

void
ML_DI_get_mmc_options(MR_Word Mercury__argument1, MR_String * Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__debugger_interface__get_mmc_options_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__debugger_interface__get_mmc_options_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = (MR_String) MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__debugger_interface__get_list_modules_to_import_3_0);

void
ML_DI_get_list_modules_to_import(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2, MR_Word * Mercury__argument3);

void
ML_DI_get_list_modules_to_import(MR_Word Mercury__argument1, MR_Integer * Mercury__argument2, MR_Word * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__debugger_interface__get_list_modules_to_import_3_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__debugger_interface__get_list_modules_to_import_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
	*Mercury__argument3 = MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__debugger_interface__read_request_from_socket_5_0);

void
ML_DI_read_request_from_socket(MR_Word Mercury__argument1, MR_Word * Mercury__argument2, MR_Integer * Mercury__argument3);

void
ML_DI_read_request_from_socket(MR_Word Mercury__argument1, MR_Word * Mercury__argument2, MR_Integer * Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__debugger_interface__read_request_from_socket_5_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__debugger_interface__read_request_from_socket_5_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
	*Mercury__argument3 = MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdb__debugger_interface__found_match_comp_14_0);

MR_bool
ML_DI_found_match_comp(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Integer Mercury__argument3, MR_Word Mercury__argument4, MR_String Mercury__argument5, MR_String Mercury__argument6, MR_String Mercury__argument7, MR_String Mercury__argument8, MR_Integer Mercury__argument9, MR_Integer Mercury__argument10, MR_Integer Mercury__argument11, MR_Word Mercury__argument12, MR_String Mercury__argument13, MR_Word Mercury__argument14);

MR_bool
ML_DI_found_match_comp(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Integer Mercury__argument3, MR_Word Mercury__argument4, MR_String Mercury__argument5, MR_String Mercury__argument6, MR_String Mercury__argument7, MR_String Mercury__argument8, MR_Integer Mercury__argument9, MR_Integer Mercury__argument10, MR_Integer Mercury__argument11, MR_Word Mercury__argument12, MR_String Mercury__argument13, MR_Word Mercury__argument14)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__debugger_interface__found_match_comp_14_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = (MR_Word) Mercury__argument5;
	MR_r6 = (MR_Word) Mercury__argument6;
	MR_r7 = (MR_Word) Mercury__argument7;
	MR_r8 = (MR_Word) Mercury__argument8;
	MR_r9 = Mercury__argument9;
	MR_r10 = Mercury__argument10;
	MR_r11 = Mercury__argument11;
	MR_r12 = Mercury__argument12;
	MR_r13 = (MR_Word) Mercury__argument13;
	MR_r14 = Mercury__argument14;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__debugger_interface__found_match_comp_14_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	if (!MR_r1) {
		MR_restore_regs_from_mem(c_regs);
	return MR_FALSE;
	}
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return MR_TRUE;
}


MR_declare_static(mercury__mdb__debugger_interface__found_match_user_14_0);

MR_bool
ML_DI_found_match_user(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Integer Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_String Mercury__argument6, MR_String Mercury__argument7, MR_String Mercury__argument8, MR_Integer Mercury__argument9, MR_Integer Mercury__argument10, MR_Integer Mercury__argument11, MR_Word Mercury__argument12, MR_String Mercury__argument13, MR_Word Mercury__argument14);

MR_bool
ML_DI_found_match_user(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Integer Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_String Mercury__argument6, MR_String Mercury__argument7, MR_String Mercury__argument8, MR_Integer Mercury__argument9, MR_Integer Mercury__argument10, MR_Integer Mercury__argument11, MR_Word Mercury__argument12, MR_String Mercury__argument13, MR_Word Mercury__argument14)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__debugger_interface__found_match_user_14_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_r6 = (MR_Word) Mercury__argument6;
	MR_r7 = (MR_Word) Mercury__argument7;
	MR_r8 = (MR_Word) Mercury__argument8;
	MR_r9 = Mercury__argument9;
	MR_r10 = Mercury__argument10;
	MR_r11 = Mercury__argument11;
	MR_r12 = Mercury__argument12;
	MR_r13 = (MR_Word) Mercury__argument13;
	MR_r14 = Mercury__argument14;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__debugger_interface__found_match_user_14_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	if (!MR_r1) {
		MR_restore_regs_from_mem(c_regs);
	return MR_FALSE;
	}
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return MR_TRUE;
}


MR_declare_static(mercury__fn__mdb__debugger_interface__get_var_number_1_0);

MR_Integer
ML_DI_get_var_number(MR_Word Mercury__argument1);

MR_Integer
ML_DI_get_var_number(MR_Word Mercury__argument1)
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
	MR_Integer return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__debugger_interface__get_var_number_1_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__debugger_interface__get_var_number_1_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__debugger_interface__output_current_live_var_names_5_0);

void
ML_DI_output_current_live_var_names(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3);

void
ML_DI_output_current_live_var_names(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__debugger_interface__output_current_live_var_names_5_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__debugger_interface__output_current_live_var_names_5_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__debugger_interface__output_current_nth_var_4_0);

void
ML_DI_output_current_nth_var(MR_Word Mercury__argument1, MR_Word Mercury__argument2);

void
ML_DI_output_current_nth_var(MR_Word Mercury__argument1, MR_Word Mercury__argument2)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__debugger_interface__output_current_nth_var_4_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__debugger_interface__output_current_nth_var_4_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__debugger_interface__output_current_vars_5_0);

void
ML_DI_output_current_vars(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3);

void
ML_DI_output_current_vars(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__debugger_interface__output_current_vars_5_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__debugger_interface__output_current_vars_5_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__debugger_interface__output_current_slots_comp_16_0);

void
ML_DI_output_current_slots_comp(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Integer Mercury__argument3, MR_Word Mercury__argument4, MR_String Mercury__argument5, MR_String Mercury__argument6, MR_String Mercury__argument7, MR_String Mercury__argument8, MR_Integer Mercury__argument9, MR_Integer Mercury__argument10, MR_Integer Mercury__argument11, MR_String Mercury__argument12, MR_Integer Mercury__argument13, MR_Word Mercury__argument14);

void
ML_DI_output_current_slots_comp(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Integer Mercury__argument3, MR_Word Mercury__argument4, MR_String Mercury__argument5, MR_String Mercury__argument6, MR_String Mercury__argument7, MR_String Mercury__argument8, MR_Integer Mercury__argument9, MR_Integer Mercury__argument10, MR_Integer Mercury__argument11, MR_String Mercury__argument12, MR_Integer Mercury__argument13, MR_Word Mercury__argument14)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__debugger_interface__output_current_slots_comp_16_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = (MR_Word) Mercury__argument5;
	MR_r6 = (MR_Word) Mercury__argument6;
	MR_r7 = (MR_Word) Mercury__argument7;
	MR_r8 = (MR_Word) Mercury__argument8;
	MR_r9 = Mercury__argument9;
	MR_r10 = Mercury__argument10;
	MR_r11 = Mercury__argument11;
	MR_r12 = (MR_Word) Mercury__argument12;
	MR_r13 = Mercury__argument13;
	MR_r14 = Mercury__argument14;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__debugger_interface__output_current_slots_comp_16_0), MR_FALSE);
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


MR_declare_static(mercury__mdb__debugger_interface__output_current_slots_user_16_0);

void
ML_DI_output_current_slots_user(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Integer Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_String Mercury__argument6, MR_String Mercury__argument7, MR_String Mercury__argument8, MR_Integer Mercury__argument9, MR_Integer Mercury__argument10, MR_Integer Mercury__argument11, MR_String Mercury__argument12, MR_Integer Mercury__argument13, MR_Word Mercury__argument14);

void
ML_DI_output_current_slots_user(MR_Integer Mercury__argument1, MR_Integer Mercury__argument2, MR_Integer Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5, MR_String Mercury__argument6, MR_String Mercury__argument7, MR_String Mercury__argument8, MR_Integer Mercury__argument9, MR_Integer Mercury__argument10, MR_Integer Mercury__argument11, MR_String Mercury__argument12, MR_Integer Mercury__argument13, MR_Word Mercury__argument14)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__debugger_interface__output_current_slots_user_16_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_r6 = (MR_Word) Mercury__argument6;
	MR_r7 = (MR_Word) Mercury__argument7;
	MR_r8 = (MR_Word) Mercury__argument8;
	MR_r9 = Mercury__argument9;
	MR_r10 = Mercury__argument10;
	MR_r11 = Mercury__argument11;
	MR_r12 = (MR_Word) Mercury__argument12;
	MR_r13 = Mercury__argument13;
	MR_r14 = Mercury__argument14;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__debugger_interface__output_current_slots_user_16_0), MR_FALSE);
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


static void mercury__mdb__debugger_interface_maybe_bunch_0(void)
{
	mdb__debugger_interface_module0();
	mdb__debugger_interface_module1();
	mdb__debugger_interface_module2();
	mdb__debugger_interface_module3();
	mdb__debugger_interface_module4();
	mdb__debugger_interface_module5();
	mdb__debugger_interface_module6();
	mdb__debugger_interface_module7();
	mdb__debugger_interface_module8();
	mdb__debugger_interface_module9();
	mdb__debugger_interface_module10();
	mdb__debugger_interface_module11();
	mdb__debugger_interface_module12();
	mdb__debugger_interface_module13();
	mdb__debugger_interface_module14();
	mdb__debugger_interface_module15();
	mdb__debugger_interface_module16();
	mdb__debugger_interface_module17();
	mdb__debugger_interface_module18();
	mdb__debugger_interface_module19();
	mdb__debugger_interface_module20();
	mdb__debugger_interface_module21();
	mdb__debugger_interface_module22();
	mdb__debugger_interface_module23();
	mdb__debugger_interface_module24();
	mdb__debugger_interface_module25();
	mdb__debugger_interface_module26();
	mdb__debugger_interface_module27();
	mdb__debugger_interface_module28();
	mdb__debugger_interface_module29();
	mdb__debugger_interface_module30();
	mdb__debugger_interface_module31();
	mdb__debugger_interface_module32();
	mdb__debugger_interface_module33();
	mdb__debugger_interface_module34();
	mdb__debugger_interface_module35();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__debugger_interface__init(void);
void mercury__mdb__debugger_interface__init_type_tables(void);
void mercury__mdb__debugger_interface__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__debugger_interface__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__debugger_interface__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__debugger_interface__init_threadscope_string_table(void);
#endif

void mercury__mdb__debugger_interface__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__debugger_interface_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__debugger_interface__type_ctor_info_arity_0,
		mdb__debugger_interface__arity_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__debugger_interface__type_ctor_info_call_number_0,
		mdb__debugger_interface__call_number_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__debugger_interface__type_ctor_info_debugger_request_0,
		mdb__debugger_interface__debugger_request_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__debugger_interface__type_ctor_info_debugger_response_0,
		mdb__debugger_interface__debugger_response_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__debugger_interface__type_ctor_info_depth_number_0,
		mdb__debugger_interface__depth_number_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__debugger_interface__type_ctor_info_determinism_0,
		mdb__debugger_interface__determinism_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__debugger_interface__type_ctor_info_event_number_0,
		mdb__debugger_interface__event_number_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__debugger_interface__type_ctor_info_match_1,
		mdb__debugger_interface__match_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__debugger_interface__type_ctor_info_pred_match_0,
		mdb__debugger_interface__pred_match_0_0);
	mercury__mdb__debugger_interface__init_debugger();
}

void mercury__mdb__debugger_interface__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__debugger_interface__type_ctor_info_arity_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__debugger_interface__type_ctor_info_call_number_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__debugger_interface__type_ctor_info_debugger_request_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__debugger_interface__type_ctor_info_debugger_response_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__debugger_interface__type_ctor_info_depth_number_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__debugger_interface__type_ctor_info_determinism_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__debugger_interface__type_ctor_info_event_number_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__debugger_interface__type_ctor_info_match_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__debugger_interface__type_ctor_info_pred_match_0);
	}
}


void mercury__mdb__debugger_interface__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__debugger_interface__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__debugger_interface);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__debugger_interface__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__debugger_interface__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
