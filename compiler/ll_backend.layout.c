/*
** Automatically generated from `layout.m'
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
INIT mercury__ll_backend__layout__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 33 "../library/array.int2"
#include "array.mh"

#line 28 "ll_backend.layout.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "ll_backend.layout.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 36 "ll_backend.layout.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ll_backend.layout.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.layout.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ll_backend.layout.c"
#line 49 "ll_backend.layout.c"
#include "ll_backend.layout.mh"

#line 52 "ll_backend.layout.c"
#line 53 "ll_backend.layout.c"
#ifndef LL_BACKEND__LAYOUT_DECL_GUARD
#define LL_BACKEND__LAYOUT_DECL_GUARD

#line 57 "ll_backend.layout.c"
#line 58 "ll_backend.layout.c"

#endif
#line 61 "ll_backend.layout.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__layout__type_ctor_info_alloc_site_info_0,
	mercury_data_ll_backend__layout__type_ctor_info_basic_label_layout_0,
	mercury_data_ll_backend__layout__type_ctor_info_closure_proc_id_data_0,
	mercury_data_ll_backend__layout__type_ctor_info_data_or_slot_id_0,
	mercury_data_ll_backend__layout__type_ctor_info_deep_excp_slots_0,
	mercury_data_ll_backend__layout__type_ctor_info_event_set_layout_data_0,
	mercury_data_ll_backend__layout__type_ctor_info_file_layout_data_0,
	mercury_data_ll_backend__layout__type_ctor_info_label_layout_long_vars_0,
	mercury_data_ll_backend__layout__type_ctor_info_label_layout_no_vars_0,
	mercury_data_ll_backend__layout__type_ctor_info_label_layout_short_vars_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__layout__type_ctor_info_label_long_var_info_0,
	mercury_data_ll_backend__layout__type_ctor_info_label_short_var_info_0,
	mercury_data_ll_backend__layout__type_ctor_info_label_vars_0,
	mercury_data_ll_backend__layout__type_ctor_info_layout_array_name_0,
	mercury_data_ll_backend__layout__type_ctor_info_layout_name_0,
	mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0,
	mercury_data_ll_backend__layout__type_ctor_info_maybe_proc_id_and_more_0,
	mercury_data_ll_backend__layout__type_ctor_info_module_layout_data_0,
	mercury_data_ll_backend__layout__type_ctor_info_proc_layout_data_0,
	mercury_data_ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__layout__type_ctor_info_proc_layout_kind_0,
	mercury_data_ll_backend__layout__type_ctor_info_proc_layout_proc_static_0,
	mercury_data_ll_backend__layout__type_ctor_info_proc_layout_stack_traversal_0,
	mercury_data_ll_backend__layout__type_ctor_info_proc_layout_user_or_uci_0,
	mercury_data_ll_backend__layout__type_ctor_info_string_with_0s_0,
	mercury_data_ll_backend__layout__type_ctor_info_table_io_decl_data_0,
	mercury_data_ll_backend__layout__type_ctor_info_user_event_data_0;
MR_decl_label4(__Unify___ll_backend__layout__alloc_site_info_0_0, 4,6,8,1)
MR_decl_label7(__Unify___ll_backend__layout__basic_label_layout_0_0, 4,6,8,10,12,16,1)
MR_decl_label6(__Unify___ll_backend__layout__closure_proc_id_data_0_0, 4,6,8,10,12,1)
MR_decl_label3(__Unify___ll_backend__layout__data_or_slot_id_0_0, 16,5,1)
MR_decl_label2(__Unify___ll_backend__layout__deep_excp_slots_0_0, 4,1)
MR_decl_label3(__Unify___ll_backend__layout__event_set_layout_data_0_0, 4,8,1)
MR_decl_label2(__Unify___ll_backend__layout__file_layout_data_0_0, 7,1)
MR_decl_label3(__Unify___ll_backend__layout__label_layout_long_vars_0_0, 4,8,1)
MR_decl_label1(__Unify___ll_backend__layout__label_layout_no_vars_0_0, 6)
MR_decl_label3(__Unify___ll_backend__layout__label_layout_short_vars_0_0, 4,8,1)
MR_decl_label3(__Unify___ll_backend__layout__label_long_var_info_0_0, 4,6,1)
MR_decl_label3(__Unify___ll_backend__layout__label_short_var_info_0_0, 4,6,1)
MR_decl_label10(__Unify___ll_backend__layout__layout_array_name_0_0, 5,6,7,8,9,10,11,12,13,14)
MR_decl_label10(__Unify___ll_backend__layout__layout_array_name_0_0, 15,16,17,18,19,20,21,61,22,1)
MR_decl_label10(__Unify___ll_backend__layout__layout_name_0_0, 7,5,13,11,17,15,23,21,27,25)
MR_decl_label10(__Unify___ll_backend__layout__layout_name_0_0, 29,33,39,37,41,45,51,49,55,53)
MR_decl_label10(__Unify___ll_backend__layout__layout_name_0_0, 59,57,63,61,65,71,69,146,73,1)
MR_decl_label3(__Unify___ll_backend__layout__layout_slot_name_0_0, 4,6,1)
MR_decl_label6(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0, 18,5,7,9,11,1)
MR_decl_label9(__Unify___ll_backend__layout__module_layout_data_0_0, 7,30,5,12,14,16,18,20,1)
MR_decl_label4(__Unify___ll_backend__layout__proc_layout_data_0_0, 4,6,10,1)
MR_decl_label10(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0, 4,6,8,10,12,14,16,18,20,22)
MR_decl_label5(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0, 24,26,28,30,1)
MR_decl_label3(__Unify___ll_backend__layout__proc_layout_kind_0_0, 10,5,1)
MR_decl_label4(__Unify___ll_backend__layout__proc_layout_proc_static_0_0, 4,7,11,1)
MR_decl_label4(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0, 4,6,8,1)
MR_decl_label1(__Unify___ll_backend__layout__string_with_0s_0_0, 6)
MR_decl_label4(__Unify___ll_backend__layout__table_io_decl_data_0_0, 4,6,10,1)
MR_decl_label3(__Unify___ll_backend__layout__user_event_data_0_0, 4,8,1)
MR_decl_label10(__Index___ll_backend__layout__layout_array_name_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label8(__Index___ll_backend__layout__layout_array_name_0_0, 13,14,15,16,17,18,19,20)
MR_decl_label10(__Index___ll_backend__layout__layout_name_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label7(__Index___ll_backend__layout__layout_name_0_0, 13,14,15,16,17,18,19)
MR_decl_label6(__Compare___ll_backend__layout__alloc_site_info_0_0, 3,2,5,9,13,37)
MR_decl_label10(__Compare___ll_backend__layout__basic_label_layout_0_0, 3,2,5,9,13,17,21,25,29,69)
MR_decl_label10(__Compare___ll_backend__layout__closure_proc_id_data_0_0, 3,2,5,9,13,17,21,25,29,69)
MR_decl_label5(__Compare___ll_backend__layout__data_or_slot_id_0_0, 3,2,7,5,10)
MR_decl_label5(__Compare___ll_backend__layout__deep_excp_slots_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___ll_backend__layout__event_set_layout_data_0_0, 3,2,5,21)
MR_decl_label4(__Compare___ll_backend__layout__file_layout_data_0_0, 3,2,5,28)
MR_decl_label4(__Compare___ll_backend__layout__label_layout_long_vars_0_0, 3,2,5,21)
MR_decl_label2(__Compare___ll_backend__layout__label_layout_no_vars_0_0, 3,2)
MR_decl_label4(__Compare___ll_backend__layout__label_layout_short_vars_0_0, 3,2,5,21)
MR_decl_label8(__Compare___ll_backend__layout__label_long_var_info_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label7(__Compare___ll_backend__layout__label_short_var_info_0_0, 3,2,5,9,13,17,45)
MR_decl_label10(__Compare___ll_backend__layout__layout_array_name_0_0, 4,5,6,7,10,11,12,13,14,15)
MR_decl_label10(__Compare___ll_backend__layout__layout_array_name_0_0, 16,17,18,19,20,21,22,23,24,25)
MR_decl_label4(__Compare___ll_backend__layout__layout_array_name_0_0, 26,77,27,8)
MR_decl_label10(__Compare___ll_backend__layout__layout_name_0_0, 3,2,4,5,6,7,13,17,10,26)
MR_decl_label10(__Compare___ll_backend__layout__layout_name_0_0, 23,34,31,42,39,50,47,55,58,64)
MR_decl_label10(__Compare___ll_backend__layout__layout_name_0_0, 61,69,72,78,82,75,91,95,88,104)
MR_decl_label9(__Compare___ll_backend__layout__layout_name_0_0, 101,112,109,117,123,120,128,369,370)
MR_decl_label4(__Compare___ll_backend__layout__layout_slot_name_0_0, 3,2,5,21)
MR_decl_label8(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0, 36,7,5,9,11,15,19,26)
MR_decl_label10(__Compare___ll_backend__layout__module_layout_data_0_0, 3,2,9,13,7,5,20,22,26,30)
MR_decl_label5(__Compare___ll_backend__layout__module_layout_data_0_0, 34,38,42,46,117)
MR_decl_label5(__Compare___ll_backend__layout__proc_layout_data_0_0, 3,2,5,9,29)
MR_decl_label10(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label10(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0, 37,41,45,49,53,57,61,65,69,149)
MR_decl_label4(__Compare___ll_backend__layout__proc_layout_kind_0_0, 18,7,5,9)
MR_decl_label8(__Compare___ll_backend__layout__proc_layout_proc_static_0_0, 3,2,5,9,13,17,22,73)
MR_decl_label6(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0, 3,2,5,9,13,37)
MR_decl_label2(__Compare___ll_backend__layout__string_with_0s_0_0, 3,2)
MR_decl_label6(__Compare___ll_backend__layout__table_io_decl_data_0_0, 3,2,5,9,13,37)
MR_decl_label5(__Compare___ll_backend__layout__user_event_data_0_0, 3,2,5,9,29)
MR_def_extern_entry(__Unify___ll_backend__layout__alloc_site_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__alloc_site_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__basic_label_layout_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__basic_label_layout_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__closure_proc_id_data_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__closure_proc_id_data_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__data_or_slot_id_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__data_or_slot_id_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__deep_excp_slots_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__deep_excp_slots_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__event_set_layout_data_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__event_set_layout_data_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__file_layout_data_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__file_layout_data_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__label_layout_long_vars_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__label_layout_long_vars_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__label_layout_no_vars_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__label_layout_no_vars_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__label_layout_short_vars_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__label_layout_short_vars_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__label_long_var_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__label_long_var_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__label_short_var_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__label_short_var_info_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__label_vars_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__label_vars_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__layout_array_name_0_0)
MR_def_extern_entry(__Index___ll_backend__layout__layout_array_name_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__layout_array_name_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__layout_name_0_0)
MR_def_extern_entry(__Index___ll_backend__layout__layout_name_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__layout_name_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__layout_slot_name_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__layout_slot_name_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__module_layout_data_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__module_layout_data_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__proc_layout_data_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__proc_layout_data_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__proc_layout_kind_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__proc_layout_kind_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__proc_layout_proc_static_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__proc_layout_proc_static_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__proc_layout_user_or_uci_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__proc_layout_user_or_uci_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__string_with_0s_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__string_with_0s_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__table_io_decl_data_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__table_io_decl_data_0_0)
MR_def_extern_entry(__Unify___ll_backend__layout__user_event_data_0_0)
MR_def_extern_entry(__Compare___ll_backend__layout__user_event_data_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_CTOR0_ADDR(builtin, tuple),
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_alloc_site_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_alloc_site_info_0_0[] = {
	"as_proc_label",
	"as_context",
	"as_type",
	"as_size"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_alloc_site_info_0_0 = {
	"alloc_site_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_alloc_site_info_0_0,
	mercury_data_ll_backend__layout__field_names_alloc_site_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_alloc_site_info_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_alloc_site_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_alloc_site_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_alloc_site_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_alloc_site_info_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_alloc_site_info_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_alloc_site_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_alloc_site_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__alloc_site_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__alloc_site_info_0_0)),
	"ll_backend.layout",
	"alloc_site_info",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_alloc_site_info_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_alloc_site_info_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_alloc_site_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_trace_port_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1bool__type_ctor_info_bool_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_bool__type_ctor_info_bool_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_name_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_basic_label_layout_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_name_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_trace_port_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_basic_label_layout_0_0[] = {
	"proc_label",
	"label_num",
	"proc_layout_name",
	"maybe_port",
	"maybe_is_hidden",
	"label_num_in_module",
	"maybe_goal_path",
	"maybe_user_info"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_basic_label_layout_0_0 = {
	"basic_label_layout",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_basic_label_layout_0_0,
	mercury_data_ll_backend__layout__field_names_basic_label_layout_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_basic_label_layout_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_basic_label_layout_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_basic_label_layout_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_basic_label_layout_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_basic_label_layout_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_basic_label_layout_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_basic_label_layout_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_basic_label_layout_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__basic_label_layout_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__basic_label_layout_0_0)),
	"ll_backend.layout",
	"basic_label_layout",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_basic_label_layout_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_basic_label_layout_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_basic_label_layout_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_origin_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_origin_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_closure_proc_id_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_origin_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_closure_proc_id_data_0_0[] = {
	"caller_proc_label",
	"caller_closure_seq_no",
	"closure_proc_label",
	"closure_module_name",
	"closure_file_name",
	"closure_line_number",
	"closure_origin",
	"closure_goal_path"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0 = {
	"closure_proc_id_data",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_closure_proc_id_data_0_0,
	mercury_data_ll_backend__layout__field_names_closure_proc_id_data_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_closure_proc_id_data_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_closure_proc_id_data_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_closure_proc_id_data_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_closure_proc_id_data_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__closure_proc_id_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__closure_proc_id_data_0_0)),
	"ll_backend.layout",
	"closure_proc_id_data",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_closure_proc_id_data_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_closure_proc_id_data_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_closure_proc_id_data_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_data_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_data_id_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_data_or_slot_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_data_id_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_data_or_slot_id_0_0 = {
	"data_or_slot_is_data",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_data_or_slot_id_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_data_or_slot_id_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_data_or_slot_id_0_1 = {
	"data_or_slot_is_slot",
	1,
	0,
	MR_SECTAG_NONE_DIRECT_ARG,
	0,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_data_or_slot_id_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_data_or_slot_id_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_data_or_slot_id_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_data_or_slot_id_0_1[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_data_or_slot_id_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_data_or_slot_id_0[] = {
	{ 1, MR_SECTAG_NONE_DIRECT_ARG,
	mercury_data_ll_backend__layout__du_stag_ordered_data_or_slot_id_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_data_or_slot_id_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_data_or_slot_id_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_data_or_slot_id_0_0,
	&mercury_data_ll_backend__layout__du_functor_desc_data_or_slot_id_0_1
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_data_or_slot_id_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_data_or_slot_id_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__data_or_slot_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__data_or_slot_id_0_0)),
	"ll_backend.layout",
	"data_or_slot_id",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_data_or_slot_id_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_data_or_slot_id_0 },
	2,
	4,
	mercury_data_ll_backend__layout__functor_number_map_data_or_slot_id_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_deep_excp_slots_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_deep_excp_slots_0_0[] = {
	"top_csd",
	"middle_csd",
	"old_outermost"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_deep_excp_slots_0_0 = {
	"deep_excp_slots",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_deep_excp_slots_0_0,
	mercury_data_ll_backend__layout__field_names_deep_excp_slots_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_deep_excp_slots_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_deep_excp_slots_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_deep_excp_slots_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_deep_excp_slots_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_deep_excp_slots_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_deep_excp_slots_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__deep_excp_slots_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__deep_excp_slots_0_0)),
	"ll_backend.layout",
	"deep_excp_slots",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_deep_excp_slots_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_deep_excp_slots_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_deep_excp_slots_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_event_set_data_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_event_set_data_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_event_set_layout_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_event_set_data_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_event_set_layout_data_0_0 = {
	"event_set_layout_data",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_event_set_layout_data_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_event_set_layout_data_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_event_set_layout_data_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_event_set_layout_data_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_event_set_layout_data_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_event_set_layout_data_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_event_set_layout_data_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__event_set_layout_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__event_set_layout_data_0_0)),
	"ll_backend.layout",
	"event_set_layout_data",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_event_set_layout_data_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_event_set_layout_data_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_event_set_layout_data_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_file_layout_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_file_layout_data_0_0[] = {
	"file_name",
	"line_no_label_list"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_file_layout_data_0_0 = {
	"file_layout_data",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_file_layout_data_0_0,
	mercury_data_ll_backend__layout__field_names_file_layout_data_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_file_layout_data_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_file_layout_data_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_file_layout_data_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_file_layout_data_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_file_layout_data_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_file_layout_data_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_file_layout_data_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_file_layout_data_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__file_layout_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__file_layout_data_0_0)),
	"ll_backend.layout",
	"file_layout_data",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_file_layout_data_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_file_layout_data_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_file_layout_data_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_basic_label_layout_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_label_long_var_info_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_label_layout_long_vars_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_basic_label_layout_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_label_long_var_info_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0 = {
	"label_layout_long_vars",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_label_layout_long_vars_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_label_layout_long_vars_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_label_layout_long_vars_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_label_layout_long_vars_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_label_layout_long_vars_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__label_layout_long_vars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__label_layout_long_vars_0_0)),
	"ll_backend.layout",
	"label_layout_long_vars",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_label_layout_long_vars_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_label_layout_long_vars_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_label_layout_long_vars_0
};

static const MR_NotagFunctorDesc mercury_data_ll_backend__layout__notag_functor_desc_label_layout_no_vars_0 = {
	"label_layout_no_vars",
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_basic_label_layout_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_label_layout_no_vars_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_label_layout_no_vars_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__label_layout_no_vars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__label_layout_no_vars_0_0)),
	"ll_backend.layout",
	"label_layout_no_vars",
	{ (void *)&mercury_data_ll_backend__layout__notag_functor_desc_label_layout_no_vars_0 },
	{ (void *)&mercury_data_ll_backend__layout__notag_functor_desc_label_layout_no_vars_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_label_layout_no_vars_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_label_short_var_info_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_label_layout_short_vars_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_basic_label_layout_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_label_short_var_info_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0 = {
	"label_layout_short_vars",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_label_layout_short_vars_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_label_layout_short_vars_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_label_layout_short_vars_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_label_layout_short_vars_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_label_layout_short_vars_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__label_layout_short_vars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__label_layout_short_vars_0_0)),
	"ll_backend.layout",
	"label_layout_short_vars",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_label_layout_short_vars_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_label_layout_short_vars_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_label_layout_short_vars_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_label_long_var_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_label_long_var_info_0_0[] = {
	"llvi_encoded_var_count",
	"llvi_type_params",
	"llvi_ptis",
	"llvi_hlds_var_nums",
	"llvi_short_locns",
	"llvi_long_locns"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_label_long_var_info_0_0 = {
	"label_long_var_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_label_long_var_info_0_0,
	mercury_data_ll_backend__layout__field_names_label_long_var_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_label_long_var_info_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_label_long_var_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_label_long_var_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_label_long_var_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_label_long_var_info_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_label_long_var_info_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_label_long_var_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_label_long_var_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__label_long_var_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__label_long_var_info_0_0)),
	"ll_backend.layout",
	"label_long_var_info",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_label_long_var_info_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_label_long_var_info_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_label_long_var_info_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_label_short_var_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_label_short_var_info_0_0[] = {
	"lsvi_encoded_var_count",
	"lsvi_type_params",
	"lsvi_ptis",
	"lsvi_hlds_var_nums",
	"lsvi_short_locns"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_label_short_var_info_0_0 = {
	"label_short_var_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_label_short_var_info_0_0,
	mercury_data_ll_backend__layout__field_names_label_short_var_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_label_short_var_info_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_label_short_var_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_label_short_var_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_label_short_var_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_label_short_var_info_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_label_short_var_info_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_label_short_var_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_label_short_var_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__label_short_var_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__label_short_var_info_0_0)),
	"ll_backend.layout",
	"label_short_var_info",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_label_short_var_info_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_label_short_var_info_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_label_short_var_info_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__layout__enum_functor_desc_label_vars_0_0 = {
	"label_has_no_var_info",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__layout__enum_functor_desc_label_vars_0_1 = {
	"label_has_short_var_info",
	1
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__layout__enum_functor_desc_label_vars_0_2 = {
	"label_has_long_var_info",
	2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__layout__enum_value_ordered_label_vars_0[] = {
	&mercury_data_ll_backend__layout__enum_functor_desc_label_vars_0_0,
	&mercury_data_ll_backend__layout__enum_functor_desc_label_vars_0_1,
	&mercury_data_ll_backend__layout__enum_functor_desc_label_vars_0_2
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__layout__enum_name_ordered_label_vars_0[] = {
	&mercury_data_ll_backend__layout__enum_functor_desc_label_vars_0_2,
	&mercury_data_ll_backend__layout__enum_functor_desc_label_vars_0_0,
	&mercury_data_ll_backend__layout__enum_functor_desc_label_vars_0_1
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_label_vars_0[] = {
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_label_vars_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__label_vars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__label_vars_0_0)),
	"ll_backend.layout",
	"label_vars",
	{ (void *)mercury_data_ll_backend__layout__enum_name_ordered_label_vars_0 },
	{ (void *)mercury_data_ll_backend__layout__enum_value_ordered_label_vars_0 },
	3,
	4,
	mercury_data_ll_backend__layout__functor_number_map_label_vars_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_0 = {
	"pseudo_type_info_array",
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

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_1 = {
	"hlds_var_nums_array",
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

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_2 = {
	"short_locns_array",
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

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_3 = {
	"long_locns_array",
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

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_4 = {
	"user_event_layout_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_5 = {
	"user_event_var_nums_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_label_vars_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_array_name_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_label_vars_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_6 = {
	"label_layout_array",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_array_name_0_6,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_7 = {
	"proc_static_call_sites_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_8 = {
	"proc_static_cp_static_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_9 = {
	"proc_static_cp_dynamic_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_10 = {
	"proc_static_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_11 = {
	"proc_head_var_nums_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	11,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_12 = {
	"proc_var_names_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	11,
	12,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_13 = {
	"proc_body_bytecodes_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	12,
	13,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_14 = {
	"proc_table_io_decl_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	13,
	14,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_15 = {
	"proc_event_layouts_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	14,
	15,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_16 = {
	"proc_exec_trace_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	15,
	16,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_17 = {
	"threadscope_string_table_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	16,
	17,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_18 = {
	"alloc_site_array",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	17,
	18,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_layout_array_name_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_0,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_1,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_2,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_3,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_4,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_5,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_7,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_8,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_9,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_10,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_11,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_12,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_13,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_14,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_15,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_16,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_17,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_18

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_layout_array_name_0_1[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_6

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_layout_array_name_0[] = {
	{ 18, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__layout__du_stag_ordered_layout_array_name_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_layout_array_name_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_layout_array_name_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_18,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_1,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_6,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_3,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_13,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_15,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_16,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_11,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_10,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_7,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_9,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_8,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_14,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_12,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_0,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_2,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_17,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_4,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_array_name_0_5
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_layout_array_name_0[] = {
	14,
	1,
	15,
	3,
	17,
	18,
	2,
	9,
	11,
	10,
	8,
	7,
	13,
	4,
	12,
	5,
	6,
	16,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_array_name_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__layout_array_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__layout_array_name_0_0)),
	"ll_backend.layout",
	"layout_array_name",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_layout_array_name_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_layout_array_name_0 },
	19,
	4,
	mercury_data_ll_backend__layout__functor_number_map_layout_array_name_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_proc_layout_kind_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_proc_layout_kind_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_0 = {
	"proc_layout",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_1 = {
	"closure_proc_id",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_2 = {
	"file_layout",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_2,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_3 = {
	"file_layout_line_number_vector",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_3,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_4 = {
	"file_layout_label_layout_vector",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_4,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_5 = {
	"module_layout_string_table",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_5,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_6 = {
	"module_layout_file_vector",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_6,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_7 = {
	"module_layout_proc_vector",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_7,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_8 = {
	"module_layout_label_exec_count",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_8,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_9 = {
	"module_layout_event_set_desc",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_9,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_10 = {
	"module_layout_event_arg_names",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	10,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_10,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_11 = {
	"module_layout_event_synth_attrs",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	11,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_11,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_12 = {
	"module_layout_event_synth_attr_args",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	12,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_12,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_13 = {
	"module_layout_event_synth_attr_order",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	13,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_13,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_14 = {
	"module_layout_event_synth_order",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	14,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_14,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_15 = {
	"module_layout_event_specs",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	12,
	15,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_15,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_16[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_16 = {
	"module_common_layout",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	13,
	16,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_16,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_name_0_17[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_17 = {
	"module_layout",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	14,
	17,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_name_0_17,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_layout_name_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_layout_name_0_1[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_layout_name_0_2[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_2

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_layout_name_0_3[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_3,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_4,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_5,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_6,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_7,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_8,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_9,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_10,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_11,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_12,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_13,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_14,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_15,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_16,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_17

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_layout_name_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_layout_name_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_layout_name_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_layout_name_0_2 },
	{ 15, MR_SECTAG_REMOTE,
	mercury_data_ll_backend__layout__du_stag_ordered_layout_name_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_layout_name_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_1,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_2,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_4,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_3,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_16,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_17,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_10,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_9,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_15,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_12,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_13,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_11,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_14,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_6,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_8,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_7,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_5,
	&mercury_data_ll_backend__layout__du_functor_desc_layout_name_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_layout_name_0[] = {
	17,
	0,
	1,
	3,
	2,
	16,
	13,
	15,
	14,
	7,
	6,
	11,
	9,
	10,
	12,
	8,
	4,
	5 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_name_0 = {
	0,
	15,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__layout_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__layout_name_0_0)),
	"ll_backend.layout",
	"layout_name",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_layout_name_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_layout_name_0 },
	18,
	4,
	mercury_data_ll_backend__layout__functor_number_map_layout_name_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_array_name_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_layout_slot_name_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_array_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_layout_slot_name_0_0 = {
	"layout_slot",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_layout_slot_name_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_layout_slot_name_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_layout_slot_name_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_layout_slot_name_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_layout_slot_name_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_layout_slot_name_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_layout_slot_name_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_layout_slot_name_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__layout_slot_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__layout_slot_name_0_0)),
	"ll_backend.layout",
	"layout_slot_name",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_layout_slot_name_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_layout_slot_name_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_layout_slot_name_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0 = {
	"no_proc_id_and_more",
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

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_maybe_proc_id_and_more_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_name_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_maybe_proc_id_and_more_0_1[] = {
	"maybe_proc_static",
	"maybe_exec_trace",
	"proc_body_bytes",
	"proc_module_common"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1 = {
	"proc_id_and_more",
	4,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_maybe_proc_id_and_more_0_1,
	mercury_data_ll_backend__layout__field_names_maybe_proc_id_and_more_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_1[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_maybe_proc_id_and_more_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_maybe_proc_id_and_more_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0,
	&mercury_data_ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_maybe_proc_id_and_more_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_maybe_proc_id_and_more_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0)),
	"ll_backend.layout",
	"maybe_proc_id_and_more",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_maybe_proc_id_and_more_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_maybe_proc_id_and_more_0 },
	2,
	4,
	mercury_data_ll_backend__layout__functor_number_map_maybe_proc_id_and_more_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_string_with_0s_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_module_layout_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_string_with_0s_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_module_layout_data_0_0[] = {
	"module_common_name",
	"string_table_size",
	"string_table"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_module_layout_data_0_0 = {
	"module_layout_common_data",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_module_layout_data_0_0,
	mercury_data_ll_backend__layout__field_names_module_layout_data_0_0,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_file_layout_data_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_file_layout_data_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_event_set_layout_data_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_event_set_layout_data_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_module_layout_data_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__trace_params__type_ctor_info_trace_level_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_module_layout_data_0_1[] = {
	"module_name",
	"module_common",
	"proc_layout_names",
	"file_layouts",
	"trace_level",
	"suppressed_events",
	"num_label_exec_count",
	"maybe_event_specs"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_module_layout_data_0_1 = {
	"module_layout_data",
	8,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_module_layout_data_0_1,
	mercury_data_ll_backend__layout__field_names_module_layout_data_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_module_layout_data_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_module_layout_data_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_module_layout_data_0_1[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_module_layout_data_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_module_layout_data_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_module_layout_data_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_module_layout_data_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_module_layout_data_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_module_layout_data_0_0,
	&mercury_data_ll_backend__layout__du_functor_desc_module_layout_data_0_1
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_module_layout_data_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_module_layout_data_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__module_layout_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__module_layout_data_0_0)),
	"ll_backend.layout",
	"module_layout_data",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_module_layout_data_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_module_layout_data_0 },
	2,
	4,
	mercury_data_ll_backend__layout__functor_number_map_module_layout_data_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_proc_layout_stack_traversal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_maybe_proc_id_and_more_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_proc_layout_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_proc_layout_stack_traversal_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_maybe_proc_id_and_more_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_proc_layout_data_0_0[] = {
	"proc_layout_label",
	"proc_layout_trav",
	"proc_layout_more"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_proc_layout_data_0_0 = {
	"proc_layout_data",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_proc_layout_data_0_0,
	mercury_data_ll_backend__layout__field_names_proc_layout_data_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_proc_layout_data_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_proc_layout_data_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_proc_layout_data_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_proc_layout_data_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_proc_layout_data_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_proc_layout_data_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_proc_layout_data_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_proc_layout_data_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__proc_layout_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__proc_layout_data_0_0)),
	"ll_backend.layout",
	"proc_layout_data",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_proc_layout_data_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_proc_layout_data_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_proc_layout_data_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_data_or_slot_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_data_or_slot_id_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_data_or_slot_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_proc_layout_exec_trace_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_data_or_slot_id_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_eval_method_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__trace_params__type_ctor_info_trace_level_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_proc_layout_exec_trace_0_0[] = {
	"plet_maybe_call_label_slot",
	"plet_proc_event_layouts",
	"plet_num_proc_event_layouts",
	"plet_maybe_table_info",
	"plet_head_var_nums",
	"plet_num_head_var_nums",
	"plet_var_names",
	"plet_max_var_num",
	"plet_max_r_num",
	"plet_maybe_from_full_slot",
	"plet_maybe_io_seq_slot",
	"plet_maybe_trail_slot",
	"plet_maybe_maxfr_slot",
	"plet_eval_method",
	"plet_maybe_call_table_slot",
	"plet_maybe_tail_rec_slot",
	"plet_eff_trace_level",
	"plet_exec_trace_flags"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0 = {
	"proc_layout_exec_trace",
	18,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_proc_layout_exec_trace_0_0,
	mercury_data_ll_backend__layout__field_names_proc_layout_exec_trace_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_proc_layout_exec_trace_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_proc_layout_exec_trace_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_proc_layout_exec_trace_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0)),
	"ll_backend.layout",
	"proc_layout_exec_trace",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_proc_layout_exec_trace_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_proc_layout_exec_trace_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_proc_layout_exec_trace_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_proc_layout_kind_0_0 = {
	"proc_layout_traversal",
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
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_proc_layout_user_or_uci_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_proc_layout_kind_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_proc_layout_user_or_uci_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_proc_layout_kind_0_1 = {
	"proc_layout_proc_id",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_proc_layout_kind_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_proc_layout_kind_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_proc_layout_kind_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_proc_layout_kind_0_1[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_proc_layout_kind_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_proc_layout_kind_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__layout__du_stag_ordered_proc_layout_kind_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_proc_layout_kind_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_proc_layout_kind_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_proc_layout_kind_0_1,
	&mercury_data_ll_backend__layout__du_functor_desc_proc_layout_kind_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_proc_layout_kind_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_proc_layout_kind_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__proc_layout_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__proc_layout_kind_0_0)),
	"ll_backend.layout",
	"proc_layout_kind",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_proc_layout_kind_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_proc_layout_kind_0 },
	2,
	4,
	mercury_data_ll_backend__layout__functor_number_map_proc_layout_kind_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_tuple_0;

static const MR_VA_TypeInfo_Struct2 mercury_data___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
	&mercury_data_builtin__type_ctor_info_tuple_0,
	2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data___vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_deep_excp_slots_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_proc_layout_proc_static_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_deep_excp_slots_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_proc_layout_proc_static_0_0[] = {
	"plps_file_name",
	"plps_line_number",
	"plps_is_in_interface",
	"plps_excp_slots",
	"plps_call_site_statics",
	"plps_coverage_points"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0 = {
	"proc_layout_proc_static",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_proc_layout_proc_static_0_0,
	mercury_data_ll_backend__layout__field_names_proc_layout_proc_static_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_proc_layout_proc_static_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_proc_layout_proc_static_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_proc_layout_proc_static_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_proc_layout_proc_static_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__proc_layout_proc_static_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__proc_layout_proc_static_0_0)),
	"ll_backend.layout",
	"proc_layout_proc_static",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_proc_layout_proc_static_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_proc_layout_proc_static_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_proc_layout_proc_static_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_proc_layout_stack_traversal_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_determinism_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_proc_layout_stack_traversal_0_0[] = {
	"plst_entry_label",
	"plst_succip_slot",
	"plst_stack_slot_count",
	"plst_detism"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0 = {
	"proc_layout_stack_traversal",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_proc_layout_stack_traversal_0_0,
	mercury_data_ll_backend__layout__field_names_proc_layout_stack_traversal_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_proc_layout_stack_traversal_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_proc_layout_stack_traversal_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_proc_layout_stack_traversal_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_proc_layout_stack_traversal_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0)),
	"ll_backend.layout",
	"proc_layout_stack_traversal",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_proc_layout_stack_traversal_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_proc_layout_stack_traversal_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_proc_layout_stack_traversal_0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0 = {
	"user",
	0
};

static const MR_EnumFunctorDesc mercury_data_ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1 = {
	"uci",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__layout__enum_value_ordered_proc_layout_user_or_uci_0[] = {
	&mercury_data_ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0,
	&mercury_data_ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ll_backend__layout__enum_name_ordered_proc_layout_user_or_uci_0[] = {
	&mercury_data_ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1,
	&mercury_data_ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_proc_layout_user_or_uci_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_proc_layout_user_or_uci_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__proc_layout_user_or_uci_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__proc_layout_user_or_uci_0_0)),
	"ll_backend.layout",
	"proc_layout_user_or_uci",
	{ (void *)mercury_data_ll_backend__layout__enum_name_ordered_proc_layout_user_or_uci_0 },
	{ (void *)mercury_data_ll_backend__layout__enum_value_ordered_proc_layout_user_or_uci_0 },
	2,
	4,
	mercury_data_ll_backend__layout__functor_number_map_proc_layout_user_or_uci_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

static const MR_NotagFunctorDesc mercury_data_ll_backend__layout__notag_functor_desc_string_with_0s_0 = {
	"string_with_0s",
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_string_with_0s_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_string_with_0s_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__string_with_0s_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__string_with_0s_0_0)),
	"ll_backend.layout",
	"string_with_0s",
	{ (void *)&mercury_data_ll_backend__layout__notag_functor_desc_string_with_0s_0 },
	{ (void *)&mercury_data_ll_backend__layout__notag_functor_desc_string_with_0s_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_string_with_0s_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_table_io_decl_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_table_io_decl_data_0_0[] = {
	"tid_proc_ptr",
	"tid_num_ptis",
	"tid_ptis",
	"tid_type_params"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_table_io_decl_data_0_0 = {
	"table_io_decl_data",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_table_io_decl_data_0_0,
	mercury_data_ll_backend__layout__field_names_table_io_decl_data_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_table_io_decl_data_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_table_io_decl_data_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_table_io_decl_data_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_table_io_decl_data_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_table_io_decl_data_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_table_io_decl_data_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_table_io_decl_data_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_table_io_decl_data_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__table_io_decl_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__table_io_decl_data_0_0)),
	"ll_backend.layout",
	"table_io_decl_data",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_table_io_decl_data_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_table_io_decl_data_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_table_io_decl_data_0
};

const MR_PseudoTypeInfo mercury_data_ll_backend__layout__field_types_user_event_data_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_rval_0,
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0
};

const MR_ConstString mercury_data_ll_backend__layout__field_names_user_event_data_0_0[] = {
	"user_event_number",
	"user_event_locns",
	"user_event_var_nums"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__layout__du_functor_desc_user_event_data_0_0 = {
	"user_event_data",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__layout__field_types_user_event_data_0_0,
	mercury_data_ll_backend__layout__field_names_user_event_data_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_stag_ordered_user_event_data_0_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_user_event_data_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__layout__du_ptag_ordered_user_event_data_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__layout__du_stag_ordered_user_event_data_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__layout__du_name_ordered_user_event_data_0[] = {
	&mercury_data_ll_backend__layout__du_functor_desc_user_event_data_0_0
};

const MR_Integer mercury_data_ll_backend__layout__functor_number_map_user_event_data_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_user_event_data_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__layout__user_event_data_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__layout__user_event_data_0_0)),
	"ll_backend.layout",
	"user_event_data",
	{ (void *)mercury_data_ll_backend__layout__du_name_ordered_user_event_data_0 },
	{ (void *)mercury_data_ll_backend__layout__du_ptag_ordered_user_event_data_0 },
	1,
	4,
	mercury_data_ll_backend__layout__functor_number_map_user_event_data_0
};



MR_decl_entry(__Unify___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module0)
	MR_init_entry1(__Unify___ll_backend__layout__alloc_site_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__alloc_site_info_0_0);
	MR_init_label4(__Unify___ll_backend__layout__alloc_site_info_0_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__alloc_site_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__alloc_site_info_0_0_i8);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___ll_backend__layout__alloc_site_info_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__alloc_site_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__alloc_site_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___term__context_0_0,
		__Unify___ll_backend__layout__alloc_site_info_0_0_i6);
MR_def_label(__Unify___ll_backend__layout__alloc_site_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__alloc_site_info_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(5)) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__alloc_site_info_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___ll_backend__layout__alloc_site_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__alloc_site_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(__Compare___term__context_0_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__layout_module1)
	MR_init_entry1(__Compare___ll_backend__layout__alloc_site_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__alloc_site_info_0_0);
	MR_init_label6(__Compare___ll_backend__layout__alloc_site_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__alloc_site_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__alloc_site_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__alloc_site_info_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__alloc_site_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__alloc_site_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___ll_backend__layout__alloc_site_info_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__alloc_site_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__alloc_site_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___term__context_0_0,
		__Compare___ll_backend__layout__alloc_site_info_0_0_i9);
MR_def_label(__Compare___ll_backend__layout__alloc_site_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__alloc_site_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__layout__alloc_site_info_0_0_i13);
MR_def_label(__Compare___ll_backend__layout__alloc_site_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__alloc_site_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__alloc_site_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__layout_module2)
	MR_init_entry1(__Unify___ll_backend__layout__basic_label_layout_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__basic_label_layout_0_0);
	MR_init_label7(__Unify___ll_backend__layout__basic_label_layout_0_0,4,6,8,10,12,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__basic_label_layout_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__basic_label_layout_0_0_i16);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___ll_backend__layout__basic_label_layout_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__basic_label_layout_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__basic_label_layout_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__basic_label_layout_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___ll_backend__layout__layout_name_0_0,
		__Unify___ll_backend__layout__basic_label_layout_0_0_i6);
MR_def_label(__Unify___ll_backend__layout__basic_label_layout_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__basic_label_layout_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, trace_port);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__basic_label_layout_0_0_i8);
MR_def_label(__Unify___ll_backend__layout__basic_label_layout_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__basic_label_layout_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__basic_label_layout_0_0_i10);
MR_def_label(__Unify___ll_backend__layout__basic_label_layout_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__basic_label_layout_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(12))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__basic_label_layout_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__basic_label_layout_0_0_i12);
MR_def_label(__Unify___ll_backend__layout__basic_label_layout_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__basic_label_layout_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__layout__basic_label_layout_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__basic_label_layout_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__layout_module3)
	MR_init_entry1(__Compare___ll_backend__layout__basic_label_layout_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__basic_label_layout_0_0);
	MR_init_label10(__Compare___ll_backend__layout__basic_label_layout_0_0,3,2,5,9,13,17,21,25,29,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__basic_label_layout_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__basic_label_layout_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__basic_label_layout_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__basic_label_layout_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__basic_label_layout_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___ll_backend__layout__basic_label_layout_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__basic_label_layout_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__basic_label_layout_0_0_i69);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__basic_label_layout_0_0_i9);
MR_def_label(__Compare___ll_backend__layout__basic_label_layout_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__basic_label_layout_0_0_i69);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___ll_backend__layout__layout_name_0_0,
		__Compare___ll_backend__layout__basic_label_layout_0_0_i13);
MR_def_label(__Compare___ll_backend__layout__basic_label_layout_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__basic_label_layout_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, trace_port);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__basic_label_layout_0_0_i17);
MR_def_label(__Compare___ll_backend__layout__basic_label_layout_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__basic_label_layout_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__basic_label_layout_0_0_i21);
MR_def_label(__Compare___ll_backend__layout__basic_label_layout_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__basic_label_layout_0_0_i69);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__basic_label_layout_0_0_i25);
MR_def_label(__Compare___ll_backend__layout__basic_label_layout_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__basic_label_layout_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__basic_label_layout_0_0_i29);
MR_def_label(__Compare___ll_backend__layout__basic_label_layout_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__basic_label_layout_0_0_i69);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__layout__basic_label_layout_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Unify___hlds__hlds_pred__pred_origin_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module4)
	MR_init_entry1(__Unify___ll_backend__layout__closure_proc_id_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__closure_proc_id_data_0_0);
	MR_init_label6(__Unify___ll_backend__layout__closure_proc_id_data_0_0,4,6,8,10,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__closure_proc_id_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__closure_proc_id_data_0_0_i12);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___ll_backend__layout__closure_proc_id_data_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__closure_proc_id_data_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__closure_proc_id_data_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__closure_proc_id_data_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___ll_backend__layout__closure_proc_id_data_0_0_i6);
MR_def_label(__Unify___ll_backend__layout__closure_proc_id_data_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__closure_proc_id_data_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__layout__closure_proc_id_data_0_0_i8);
MR_def_label(__Unify___ll_backend__layout__closure_proc_id_data_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__closure_proc_id_data_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(4), (char *) (MR_Word *) MR_sv(11)) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__closure_proc_id_data_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(12))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__closure_proc_id_data_0_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_origin_0_0,
		__Unify___ll_backend__layout__closure_proc_id_data_0_0_i10);
MR_def_label(__Unify___ll_backend__layout__closure_proc_id_data_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__closure_proc_id_data_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(7), (char *) (MR_Word *) MR_sv(14)) == 0);
	MR_decr_sp_and_return(15);
MR_def_label(__Unify___ll_backend__layout__closure_proc_id_data_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__closure_proc_id_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___hlds__hlds_pred__pred_origin_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module5)
	MR_init_entry1(__Compare___ll_backend__layout__closure_proc_id_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__closure_proc_id_data_0_0);
	MR_init_label10(__Compare___ll_backend__layout__closure_proc_id_data_0_0,3,2,5,9,13,17,21,25,29,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__closure_proc_id_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__closure_proc_id_data_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__closure_proc_id_data_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__closure_proc_id_data_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__closure_proc_id_data_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___ll_backend__layout__closure_proc_id_data_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__closure_proc_id_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__closure_proc_id_data_0_0_i69);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__closure_proc_id_data_0_0_i9);
MR_def_label(__Compare___ll_backend__layout__closure_proc_id_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__closure_proc_id_data_0_0_i69);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___ll_backend__layout__closure_proc_id_data_0_0_i13);
MR_def_label(__Compare___ll_backend__layout__closure_proc_id_data_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__closure_proc_id_data_0_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__layout__closure_proc_id_data_0_0_i17);
MR_def_label(__Compare___ll_backend__layout__closure_proc_id_data_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__closure_proc_id_data_0_0_i69);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__layout__closure_proc_id_data_0_0_i21);
MR_def_label(__Compare___ll_backend__layout__closure_proc_id_data_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__closure_proc_id_data_0_0_i69);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__closure_proc_id_data_0_0_i25);
MR_def_label(__Compare___ll_backend__layout__closure_proc_id_data_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__closure_proc_id_data_0_0_i69);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___hlds__hlds_pred__pred_origin_0_0,
		__Compare___ll_backend__layout__closure_proc_id_data_0_0_i29);
MR_def_label(__Compare___ll_backend__layout__closure_proc_id_data_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__closure_proc_id_data_0_0_i69);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__layout__closure_proc_id_data_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__data_id_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module6)
	MR_init_entry1(__Unify___ll_backend__layout__data_or_slot_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__data_or_slot_id_0_0);
	MR_init_label3(__Unify___ll_backend__layout__data_or_slot_id_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__data_or_slot_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__data_or_slot_id_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__data_or_slot_id_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__data_or_slot_id_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__data_id_0_0);
	}
MR_def_label(__Unify___ll_backend__layout__data_or_slot_id_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__data_or_slot_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__data_or_slot_id_0_0_i1);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 0);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__layout__layout_slot_name_0_0);
MR_def_label(__Unify___ll_backend__layout__data_or_slot_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__data_id_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module7)
	MR_init_entry1(__Compare___ll_backend__layout__data_or_slot_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__data_or_slot_id_0_0);
	MR_init_label5(__Compare___ll_backend__layout__data_or_slot_id_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__data_or_slot_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__data_or_slot_id_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__data_or_slot_id_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__data_or_slot_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__data_or_slot_id_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__data_or_slot_id_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__data_or_slot_id_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__data_id_0_0);
MR_def_label(__Compare___ll_backend__layout__data_or_slot_id_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__layout__data_or_slot_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__data_or_slot_id_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__layout__data_or_slot_id_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 0);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__layout__layout_slot_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module8)
	MR_init_entry1(__Unify___ll_backend__layout__deep_excp_slots_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__deep_excp_slots_0_0);
	MR_init_label2(__Unify___ll_backend__layout__deep_excp_slots_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__deep_excp_slots_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__deep_excp_slots_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__deep_excp_slots_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__deep_excp_slots_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__layout__deep_excp_slots_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__deep_excp_slots_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module9)
	MR_init_entry1(__Compare___ll_backend__layout__deep_excp_slots_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__deep_excp_slots_0_0);
	MR_init_label5(__Compare___ll_backend__layout__deep_excp_slots_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__deep_excp_slots_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__deep_excp_slots_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__deep_excp_slots_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__deep_excp_slots_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__deep_excp_slots_0_0,2)
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
		__Compare___ll_backend__layout__deep_excp_slots_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__deep_excp_slots_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__deep_excp_slots_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__deep_excp_slots_0_0_i9);
MR_def_label(__Compare___ll_backend__layout__deep_excp_slots_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__deep_excp_slots_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__deep_excp_slots_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__event_set_data_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__layout_module10)
	MR_init_entry1(__Unify___ll_backend__layout__event_set_layout_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__event_set_layout_data_0_0);
	MR_init_label3(__Unify___ll_backend__layout__event_set_layout_data_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__event_set_layout_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__event_set_layout_data_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__event_set_data_0_0,
		__Unify___ll_backend__layout__event_set_layout_data_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__event_set_layout_data_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__event_set_layout_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___ll_backend__layout__event_set_layout_data_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__event_set_layout_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__event_set_data_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__layout_module11)
	MR_init_entry1(__Compare___ll_backend__layout__event_set_layout_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__event_set_layout_data_0_0);
	MR_init_label4(__Compare___ll_backend__layout__event_set_layout_data_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__event_set_layout_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__event_set_layout_data_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__event_set_layout_data_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__event_set_layout_data_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__event_set_layout_data_0_0,2)
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
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__event_set_data_0_0,
		__Compare___ll_backend__layout__event_set_layout_data_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__event_set_layout_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__event_set_layout_data_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, rval);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___ll_backend__layout__event_set_layout_data_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__layout_module12)
	MR_init_entry1(__Unify___ll_backend__layout__file_layout_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__file_layout_data_0_0);
	MR_init_label2(__Unify___ll_backend__layout__file_layout_data_0_0,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__file_layout_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__file_layout_data_0_0_i7);
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
		MR_GOTO_LAB(__Unify___ll_backend__layout__file_layout_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___ll_backend__layout__file_layout_data_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__file_layout_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__layout_module13)
	MR_init_entry1(__Compare___ll_backend__layout__file_layout_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__file_layout_data_0_0);
	MR_init_label4(__Compare___ll_backend__layout__file_layout_data_0_0,3,2,5,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__file_layout_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__file_layout_data_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__file_layout_data_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__file_layout_data_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__file_layout_data_0_0,2)
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
		__Compare___ll_backend__layout__file_layout_data_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__file_layout_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__file_layout_data_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__layout__file_layout_data_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module14)
	MR_init_entry1(__Unify___ll_backend__layout__label_layout_long_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__label_layout_long_vars_0_0);
	MR_init_label3(__Unify___ll_backend__layout__label_layout_long_vars_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__label_layout_long_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_layout_long_vars_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___ll_backend__layout__basic_label_layout_0_0,
		__Unify___ll_backend__layout__label_layout_long_vars_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__label_layout_long_vars_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_layout_long_vars_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__layout__label_long_var_info_0_0);
MR_def_label(__Unify___ll_backend__layout__label_layout_long_vars_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__label_layout_long_vars_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module15)
	MR_init_entry1(__Compare___ll_backend__layout__label_layout_long_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__label_layout_long_vars_0_0);
	MR_init_label4(__Compare___ll_backend__layout__label_layout_long_vars_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__label_layout_long_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_layout_long_vars_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__label_layout_long_vars_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__label_layout_long_vars_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__label_layout_long_vars_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ll_backend__layout__basic_label_layout_0_0,
		__Compare___ll_backend__layout__label_layout_long_vars_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__label_layout_long_vars_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_layout_long_vars_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__layout__label_long_var_info_0_0);
MR_def_label(__Compare___ll_backend__layout__label_layout_long_vars_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module16)
	MR_init_entry1(__Unify___ll_backend__layout__label_layout_no_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__label_layout_no_vars_0_0);
	MR_init_label1(__Unify___ll_backend__layout__label_layout_no_vars_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__label_layout_no_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_layout_no_vars_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__layout__basic_label_layout_0_0);
MR_def_label(__Unify___ll_backend__layout__label_layout_no_vars_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module17)
	MR_init_entry1(__Compare___ll_backend__layout__label_layout_no_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__label_layout_no_vars_0_0);
	MR_init_label2(__Compare___ll_backend__layout__label_layout_no_vars_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__label_layout_no_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_layout_no_vars_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__label_layout_no_vars_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__label_layout_no_vars_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__label_layout_no_vars_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__layout__basic_label_layout_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module18)
	MR_init_entry1(__Unify___ll_backend__layout__label_layout_short_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__label_layout_short_vars_0_0);
	MR_init_label3(__Unify___ll_backend__layout__label_layout_short_vars_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__label_layout_short_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_layout_short_vars_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___ll_backend__layout__basic_label_layout_0_0,
		__Unify___ll_backend__layout__label_layout_short_vars_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__label_layout_short_vars_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_layout_short_vars_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__layout__label_short_var_info_0_0);
MR_def_label(__Unify___ll_backend__layout__label_layout_short_vars_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__label_layout_short_vars_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module19)
	MR_init_entry1(__Compare___ll_backend__layout__label_layout_short_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__label_layout_short_vars_0_0);
	MR_init_label4(__Compare___ll_backend__layout__label_layout_short_vars_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__label_layout_short_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_layout_short_vars_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__label_layout_short_vars_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__label_layout_short_vars_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__label_layout_short_vars_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ll_backend__layout__basic_label_layout_0_0,
		__Compare___ll_backend__layout__label_layout_short_vars_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__label_layout_short_vars_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_layout_short_vars_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__layout__label_short_var_info_0_0);
MR_def_label(__Compare___ll_backend__layout__label_layout_short_vars_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__rval_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module20)
	MR_init_entry1(__Unify___ll_backend__layout__label_long_var_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__label_long_var_info_0_0);
	MR_init_label3(__Unify___ll_backend__layout__label_long_var_info_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__label_long_var_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_long_var_info_0_0_i6);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_long_var_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr4, 5);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__layout__label_long_var_info_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__label_long_var_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_long_var_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_long_var_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(6))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_long_var_info_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_long_var_info_0_0_i1);
	}
	MR_r1 = (MR_sv(4) == MR_sv(8));
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___ll_backend__layout__label_long_var_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__label_long_var_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__rval_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module21)
	MR_init_entry1(__Compare___ll_backend__layout__label_long_var_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__label_long_var_info_0_0);
	MR_init_label8(__Compare___ll_backend__layout__label_long_var_info_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__label_long_var_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_long_var_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__label_long_var_info_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__label_long_var_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__label_long_var_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__label_long_var_info_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__label_long_var_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_long_var_info_0_0_i53);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__layout__label_long_var_info_0_0_i9);
MR_def_label(__Compare___ll_backend__layout__label_long_var_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_long_var_info_0_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__label_long_var_info_0_0_i13);
MR_def_label(__Compare___ll_backend__layout__label_long_var_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_long_var_info_0_0_i53);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__label_long_var_info_0_0_i17);
MR_def_label(__Compare___ll_backend__layout__label_long_var_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_long_var_info_0_0_i53);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__label_long_var_info_0_0_i21);
MR_def_label(__Compare___ll_backend__layout__label_long_var_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_long_var_info_0_0_i53);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__label_long_var_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module22)
	MR_init_entry1(__Unify___ll_backend__layout__label_short_var_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__label_short_var_info_0_0);
	MR_init_label3(__Unify___ll_backend__layout__label_short_var_info_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__label_short_var_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_short_var_info_0_0_i6);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_short_var_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 4);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__layout__label_short_var_info_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__label_short_var_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_short_var_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_short_var_info_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__label_short_var_info_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___ll_backend__layout__label_short_var_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__label_short_var_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module23)
	MR_init_entry1(__Compare___ll_backend__layout__label_short_var_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__label_short_var_info_0_0);
	MR_init_label7(__Compare___ll_backend__layout__label_short_var_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__label_short_var_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_short_var_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__label_short_var_info_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__label_short_var_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__label_short_var_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__label_short_var_info_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__label_short_var_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_short_var_info_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__layout__label_short_var_info_0_0_i9);
MR_def_label(__Compare___ll_backend__layout__label_short_var_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_short_var_info_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__label_short_var_info_0_0_i13);
MR_def_label(__Compare___ll_backend__layout__label_short_var_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_short_var_info_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__label_short_var_info_0_0_i17);
MR_def_label(__Compare___ll_backend__layout__label_short_var_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__label_short_var_info_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__label_short_var_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module24)
	MR_init_entry1(__Unify___ll_backend__layout__label_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__label_vars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__label_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module25)
	MR_init_entry1(__Compare___ll_backend__layout__label_vars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__label_vars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__label_vars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module26)
	MR_init_entry1(__Unify___ll_backend__layout__layout_array_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__layout_array_name_0_0);
	MR_init_label10(__Unify___ll_backend__layout__layout_array_name_0_0,5,6,7,8,9,10,11,12,13,14)
	MR_init_label10(__Unify___ll_backend__layout__layout_array_name_0_0,15,16,17,18,19,20,21,61,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__layout_array_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i61);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,17)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,12)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i8);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,14)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i9);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,15)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i10);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,10)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i11);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i12);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i13);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i14);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i15);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,13)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i16);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,11)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i17);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i18);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i19);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,16)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i20);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i21);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i22);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_array_name_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_array_name_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module27)
	MR_init_entry1(__Index___ll_backend__layout__layout_array_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___ll_backend__layout__layout_array_name_0_0);
	MR_init_label10(__Index___ll_backend__layout__layout_array_name_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label8(__Index___ll_backend__layout__layout_array_name_0_0,13,14,15,16,17,18,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___ll_backend__layout__layout_array_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i3);
	}
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i5);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,12)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i6);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i7);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i8);
	}
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i9);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i10);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i11);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i12);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i13);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i14);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i15);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i18);
	}
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i19);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_array_name_0_0_i20);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_array_name_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module28)
	MR_init_entry1(__Compare___ll_backend__layout__layout_array_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__layout_array_name_0_0);
	MR_init_label10(__Compare___ll_backend__layout__layout_array_name_0_0,4,5,6,7,10,11,12,13,14,15)
	MR_init_label10(__Compare___ll_backend__layout__layout_array_name_0_0,16,17,18,19,20,21,22,23,24,25)
	MR_init_label4(__Compare___ll_backend__layout__layout_array_name_0_0,26,77,27,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__layout_array_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i77);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___ll_backend__layout__layout_array_name_0_0,
		__Compare___ll_backend__layout__layout_array_name_0_0_i4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___ll_backend__layout__layout_array_name_0_0,
		__Compare___ll_backend__layout__layout_array_name_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,17)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i10);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i11);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i12);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,12)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i13);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,14)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,15)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i15);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,10)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i16);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,9)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,6)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,8)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i19);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,7)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i20);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,13)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i21);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,11)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i22);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i24);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,16)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i25);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i26);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i27);
	}
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_array_name_0_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__layout_array_name_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module29)
	MR_init_entry1(__Unify___ll_backend__layout__layout_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__layout_name_0_0);
	MR_init_label10(__Unify___ll_backend__layout__layout_name_0_0,7,5,13,11,17,15,23,21,27,25)
	MR_init_label10(__Unify___ll_backend__layout__layout_name_0_0,29,33,39,37,41,45,51,49,55,53)
	MR_init_label10(__Unify___ll_backend__layout__layout_name_0_0,59,57,63,61,65,71,69,146,73,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__layout_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i146);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(1, MR_tempr4, 2);
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___ll_backend__layout__layout_name_0_0_i7);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__proc_label_0_0);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__layout__layout_name_0_0_i13);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0,
		__Unify___ll_backend__layout__layout_name_0_0_i17);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__layout__proc_layout_kind_0_0);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__layout__layout_name_0_0_i23);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i25);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__layout__layout_name_0_0_i27);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,13)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i29);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,14)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i33);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i37);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__layout__layout_name_0_0_i39);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i41);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,12)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i45);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i49);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__layout__layout_name_0_0_i51);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i53);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__layout__layout_name_0_0_i55);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i57);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__layout__layout_name_0_0_i59);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i61);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__layout__layout_name_0_0_i63);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i65);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i69);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__layout__layout_name_0_0_i71);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i73);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_name_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Unify___ll_backend__layout__layout_name_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module30)
	MR_init_entry1(__Index___ll_backend__layout__layout_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___ll_backend__layout__layout_name_0_0);
	MR_init_label10(__Index___ll_backend__layout__layout_name_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label7(__Index___ll_backend__layout__layout_name_0_0,13,14,15,16,17,18,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___ll_backend__layout__layout_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i4);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i6);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i7);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i8);
	}
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i9);
	}
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i10);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i11);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i12);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i13);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i14);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i15);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i16);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i17);
	}
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i18);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(__Index___ll_backend__layout__layout_name_0_0_i19);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___ll_backend__layout__layout_name_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module31)
	MR_init_entry1(__Compare___ll_backend__layout__layout_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__layout_name_0_0);
	MR_init_label10(__Compare___ll_backend__layout__layout_name_0_0,3,2,4,5,6,7,13,17,10,26)
	MR_init_label10(__Compare___ll_backend__layout__layout_name_0_0,23,34,31,42,39,50,47,55,58,64)
	MR_init_label10(__Compare___ll_backend__layout__layout_name_0_0,61,69,72,78,82,75,91,95,88,104)
	MR_init_label9(__Compare___ll_backend__layout__layout_name_0_0,101,112,109,117,123,120,128,369,370)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__layout_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Index___ll_backend__layout__layout_name_0_0,
		__Compare___ll_backend__layout__layout_name_0_0_i4);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___ll_backend__layout__layout_name_0_0,
		__Compare___ll_backend__layout__layout_name_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___ll_backend__layout__layout_name_0_0_i13);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__layout_name_0_0_i17);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__proc_label_0_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i23);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__layout__layout_name_0_0_i26);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i31);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
	}
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,
		__Compare___ll_backend__layout__layout_name_0_0_i34);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__layout__proc_layout_kind_0_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i39);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__layout__layout_name_0_0_i42);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i47);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__layout__layout_name_0_0_i50);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,13)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i55);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,13)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,14)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i58);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,14)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i61);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__layout__layout_name_0_0_i64);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i69);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,12)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i72);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i75);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__layout__layout_name_0_0_i78);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__layout_name_0_0_i82);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i88);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__layout__layout_name_0_0_i91);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__layout_name_0_0_i95);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i101);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__layout__layout_name_0_0_i104);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i109);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__layout__layout_name_0_0_i112);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i117);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i120);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__layout__layout_name_0_0_i123);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i370);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i128);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_name_0_0_i369);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,369)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
MR_def_label(__Compare___ll_backend__layout__layout_name_0_0,370)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module32)
	MR_init_entry1(__Unify___ll_backend__layout__layout_slot_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__layout_slot_name_0_0);
	MR_init_label3(__Unify___ll_backend__layout__layout_slot_name_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__layout_slot_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_slot_name_0_0_i6);
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
	MR_np_call_localret_ent(__Unify___ll_backend__layout__layout_array_name_0_0,
		__Unify___ll_backend__layout__layout_slot_name_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__layout_slot_name_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__layout_slot_name_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ll_backend__layout__layout_slot_name_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__layout_slot_name_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module33)
	MR_init_entry1(__Compare___ll_backend__layout__layout_slot_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__layout_slot_name_0_0);
	MR_init_label4(__Compare___ll_backend__layout__layout_slot_name_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__layout_slot_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_slot_name_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__layout_slot_name_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__layout_slot_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__layout_slot_name_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ll_backend__layout__layout_array_name_0_0,
		__Compare___ll_backend__layout__layout_slot_name_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__layout_slot_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__layout_slot_name_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__layout_slot_name_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module34)
	MR_init_entry1(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__maybe_proc_id_and_more_0_0);
	MR_init_label6(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0,18,5,7,9,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__maybe_proc_id_and_more_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0_i18);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(8);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0_i7);
MR_def_label(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0_i9);
MR_def_label(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0_i11);
MR_def_label(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(__Unify___ll_backend__layout__layout_name_0_0);
MR_def_label(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module35)
	MR_init_entry1(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__maybe_proc_id_and_more_0_0);
	MR_init_label8(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0,36,7,5,9,11,15,19,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__maybe_proc_id_and_more_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0_i36);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(1, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0_i11);
MR_def_label(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0_i26);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0_i15);
MR_def_label(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0_i26);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0_i19);
MR_def_label(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0_i26);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___ll_backend__layout__layout_name_0_0);
MR_def_label(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___libs__trace_params__trace_level_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module36)
	MR_init_entry1(__Unify___ll_backend__layout__module_layout_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__module_layout_data_0_0);
	MR_init_label9(__Unify___ll_backend__layout__module_layout_data_0_0,7,30,5,12,14,16,18,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__module_layout_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__module_layout_data_0_0_i30);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__module_layout_data_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__module_layout_data_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__layout__module_layout_data_0_0_i7);
MR_def_label(__Unify___ll_backend__layout__module_layout_data_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__module_layout_data_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__module_layout_data_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___ll_backend__layout__string_with_0s_0_0);
MR_def_label(__Unify___ll_backend__layout__module_layout_data_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__module_layout_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__module_layout_data_0_0_i1);
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
	MR_sv(8) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(9) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(10) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(1, MR_tempr2, 4);
	MR_sv(12) = MR_tfield(1, MR_tempr2, 5);
	MR_sv(13) = MR_tfield(1, MR_tempr2, 6);
	MR_sv(14) = MR_tfield(1, MR_tempr2, 7);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__layout__module_layout_data_0_0_i12);
MR_def_label(__Unify___ll_backend__layout__module_layout_data_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__module_layout_data_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Unify___ll_backend__layout__layout_name_0_0,
		__Unify___ll_backend__layout__module_layout_data_0_0_i14);
MR_def_label(__Unify___ll_backend__layout__module_layout_data_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__module_layout_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_name);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__layout__module_layout_data_0_0_i16);
MR_def_label(__Unify___ll_backend__layout__module_layout_data_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__module_layout_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, file_layout_data);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__layout__module_layout_data_0_0_i18);
MR_def_label(__Unify___ll_backend__layout__module_layout_data_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__module_layout_data_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(__Unify___libs__trace_params__trace_level_0_0,
		__Unify___ll_backend__layout__module_layout_data_0_0_i20);
MR_def_label(__Unify___ll_backend__layout__module_layout_data_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__module_layout_data_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(12))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__module_layout_data_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__module_layout_data_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, event_set_layout_data);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__layout__module_layout_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___libs__trace_params__trace_level_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module37)
	MR_init_entry1(__Compare___ll_backend__layout__module_layout_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__module_layout_data_0_0);
	MR_init_label10(__Compare___ll_backend__layout__module_layout_data_0_0,3,2,9,13,7,5,20,22,26,30)
	MR_init_label5(__Compare___ll_backend__layout__module_layout_data_0_0,34,38,42,46,117)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__module_layout_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__layout__module_layout_data_0_0_i9);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i117);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__module_layout_data_0_0_i13);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i117);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___ll_backend__layout__string_with_0s_0_0);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(15);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(15);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(14) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(13) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(12) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(11) = MR_tfield(1, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(1, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(1, MR_tempr5, 6);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 7);
	MR_tempr6 = MR_sv(2);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__layout__module_layout_data_0_0_i22);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i117);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___ll_backend__layout__layout_name_0_0,
		__Compare___ll_backend__layout__module_layout_data_0_0_i26);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i117);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_name);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__layout__module_layout_data_0_0_i30);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i117);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, file_layout_data);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__layout__module_layout_data_0_0_i34);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i117);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___libs__trace_params__trace_level_0_0,
		__Compare___ll_backend__layout__module_layout_data_0_0_i38);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i117);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__module_layout_data_0_0_i42);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i117);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__module_layout_data_0_0_i46);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__module_layout_data_0_0_i117);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, event_set_layout_data);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__layout__module_layout_data_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module38)
	MR_init_entry1(__Unify___ll_backend__layout__proc_layout_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__proc_layout_data_0_0);
	MR_init_label4(__Unify___ll_backend__layout__proc_layout_data_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__proc_layout_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_data_0_0_i10);
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
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_rtti__rtti_proc_label_0_0,
		__Unify___ll_backend__layout__proc_layout_data_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__proc_layout_data_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_data_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0,
		__Unify___ll_backend__layout__proc_layout_data_0_0_i6);
MR_def_label(__Unify___ll_backend__layout__proc_layout_data_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_data_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ll_backend__layout__maybe_proc_id_and_more_0_0);
MR_def_label(__Unify___ll_backend__layout__proc_layout_data_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__proc_layout_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module39)
	MR_init_entry1(__Compare___ll_backend__layout__proc_layout_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__proc_layout_data_0_0);
	MR_init_label5(__Compare___ll_backend__layout__proc_layout_data_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__proc_layout_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_data_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_data_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__proc_layout_data_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__proc_layout_data_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_rtti__rtti_proc_label_0_0,
		__Compare___ll_backend__layout__proc_layout_data_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__proc_layout_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_data_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0,
		__Compare___ll_backend__layout__proc_layout_data_0_0_i9);
MR_def_label(__Compare___ll_backend__layout__proc_layout_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_data_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__layout__maybe_proc_id_and_more_0_0);
MR_def_label(__Compare___ll_backend__layout__proc_layout_data_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__eval_method_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module40)
	MR_init_entry1(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__proc_layout_exec_trace_0_0);
	MR_init_label10(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,4,6,8,10,12,14,16,18,20,22)
	MR_init_label5(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,24,26,28,30,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__proc_layout_exec_trace_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i30);
	}
	MR_incr_sp(36);
	MR_sv(36) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 10);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 11);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 13);
	MR_sv(14) = MR_tfield(0, MR_tempr1, 14);
	MR_sv(15) = MR_tfield(0, MR_tempr1, 15);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 16);
	MR_sv(17) = MR_tfield(0, MR_tempr1, 17);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(19) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(20) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(21) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(22) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(23) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(24) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(25) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(26) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(27) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(28) = MR_tfield(0, MR_tempr2, 11);
	MR_sv(29) = MR_tfield(0, MR_tempr2, 12);
	MR_sv(30) = MR_tfield(0, MR_tempr2, 13);
	MR_sv(31) = MR_tfield(0, MR_tempr2, 14);
	MR_sv(32) = MR_tfield(0, MR_tempr2, 15);
	MR_sv(33) = MR_tfield(0, MR_tempr2, 16);
	MR_sv(34) = MR_tfield(0, MR_tempr2, 17);
	MR_sv(35) = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r1 = MR_sv(35);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___ll_backend__layout__layout_slot_name_0_0,
		__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i6);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(19))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, data_or_slot_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i8);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	MR_r1 = MR_sv(35);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i10);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(22))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	MR_r1 = MR_sv(35);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i12);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(24))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(25))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(26);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i14);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(27);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i16);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(28);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i18);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(29);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i20);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(30);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__eval_method_0_0,
		__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i22);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(31);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i24);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(32);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i26);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(33);
	MR_np_call_localret_ent(__Unify___libs__trace_params__trace_level_0_0,
		__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i28);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0_i1);
	}
	MR_r1 = (MR_sv(17) == MR_sv(34));
	MR_decr_sp_and_return(36);
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__proc_layout_exec_trace_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(36);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___parse_tree__prog_data__eval_method_0_0);

MR_BEGIN_MODULE(ll_backend__layout_module41)
	MR_init_entry1(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__proc_layout_exec_trace_0_0);
	MR_init_label10(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label10(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,37,41,45,49,53,57,61,65,69,149)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__proc_layout_exec_trace_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i3);
	}
	MR_incr_sp(35);
	MR_sv(35) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(34) = MR_tfield(0, MR_tempr5, 17);
	MR_sv(33) = MR_tfield(0, MR_tempr5, 16);
	MR_sv(32) = MR_tfield(0, MR_tempr5, 15);
	MR_sv(31) = MR_tfield(0, MR_tempr5, 14);
	MR_sv(30) = MR_tfield(0, MR_tempr5, 13);
	MR_sv(29) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(28) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(27) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(26) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(25) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(17) = MR_tfield(0, MR_tempr6, 17);
	MR_sv(16) = MR_tfield(0, MR_tempr6, 16);
	MR_sv(15) = MR_tfield(0, MR_tempr6, 15);
	MR_sv(14) = MR_tfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_tfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 12);
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
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Compare___ll_backend__layout__layout_slot_name_0_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i9);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i13);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, data_or_slot_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i17);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i21);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i25);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i29);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i33);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i37);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(26);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i41);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(27);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i45);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(28);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i49);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(29);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i53);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(30);
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__eval_method_0_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i57);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(31);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i61);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(32);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i65);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(33);
	MR_np_call_localret_ent(__Compare___libs__trace_params__trace_level_0_0,
		__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i69);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0_i149);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(34);
	MR_succip_word = MR_sv(35);
	MR_decr_sp(35);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__proc_layout_exec_trace_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(35);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module42)
	MR_init_entry1(__Unify___ll_backend__layout__proc_layout_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__proc_layout_kind_0_0);
	MR_init_label3(__Unify___ll_backend__layout__proc_layout_kind_0_0,10,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__proc_layout_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_kind_0_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_kind_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__layout__proc_layout_kind_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__proc_layout_kind_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_kind_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__proc_layout_kind_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module43)
	MR_init_entry1(__Compare___ll_backend__layout__proc_layout_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__proc_layout_kind_0_0);
	MR_init_label4(__Compare___ll_backend__layout__proc_layout_kind_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__proc_layout_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_kind_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_kind_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_kind_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__layout__proc_layout_kind_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__layout__proc_layout_kind_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__layout__proc_layout_kind_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_kind_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__layout__proc_layout_kind_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module44)
	MR_init_entry1(__Unify___ll_backend__layout__proc_layout_proc_static_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__proc_layout_proc_static_0_0);
	MR_init_label4(__Unify___ll_backend__layout__proc_layout_proc_static_0_0,4,7,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__proc_layout_proc_static_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_proc_static_0_0_i11);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_proc_static_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_proc_static_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_proc_static_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 4);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(3) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 5);
	MR_r1 = MR_tfield(0, MR_tempr3, 3);
	MR_r2 = MR_tfield(0, MR_tempr4, 3);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__layout__deep_excp_slots_0_0,
		__Unify___ll_backend__layout__proc_layout_proc_static_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__proc_layout_proc_static_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_proc_static_0_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__proc_layout_proc_static_0_0_i7);
MR_def_label(__Unify___ll_backend__layout__proc_layout_proc_static_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_proc_static_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ll_backend__layout__proc_layout_proc_static_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__proc_layout_proc_static_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module45)
	MR_init_entry1(__Compare___ll_backend__layout__proc_layout_proc_static_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__proc_layout_proc_static_0_0);
	MR_init_label8(__Compare___ll_backend__layout__proc_layout_proc_static_0_0,3,2,5,9,13,17,22,73)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__proc_layout_proc_static_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_proc_static_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_proc_static_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__proc_layout_proc_static_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__proc_layout_proc_static_0_0,2)
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
		__Compare___ll_backend__layout__proc_layout_proc_static_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__proc_layout_proc_static_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_proc_static_0_0_i73);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__proc_layout_proc_static_0_0_i9);
MR_def_label(__Compare___ll_backend__layout__proc_layout_proc_static_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_proc_static_0_0_i73);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__proc_layout_proc_static_0_0_i13);
MR_def_label(__Compare___ll_backend__layout__proc_layout_proc_static_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_proc_static_0_0_i73);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(__Compare___ll_backend__layout__deep_excp_slots_0_0,
		__Compare___ll_backend__layout__proc_layout_proc_static_0_0_i17);
MR_def_label(__Compare___ll_backend__layout__proc_layout_proc_static_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_proc_static_0_0_i73);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__proc_layout_proc_static_0_0_i22);
MR_def_label(__Compare___ll_backend__layout__proc_layout_proc_static_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_proc_static_0_0_i73);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ll_backend__layout__proc_layout_proc_static_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module46)
	MR_init_entry1(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__proc_layout_stack_traversal_0_0);
	MR_init_label4(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0,4,6,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__proc_layout_stack_traversal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0_i8);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0_i6);
MR_def_label(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__proc_layout_stack_traversal_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module47)
	MR_init_entry1(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__proc_layout_stack_traversal_0_0);
	MR_init_label6(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__proc_layout_stack_traversal_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0_i9);
MR_def_label(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0_i13);
MR_def_label(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__layout__proc_layout_stack_traversal_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module48)
	MR_init_entry1(__Unify___ll_backend__layout__proc_layout_user_or_uci_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__proc_layout_user_or_uci_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__proc_layout_user_or_uci_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module49)
	MR_init_entry1(__Compare___ll_backend__layout__proc_layout_user_or_uci_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__proc_layout_user_or_uci_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__proc_layout_user_or_uci_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

MR_BEGIN_MODULE(ll_backend__layout_module50)
	MR_init_entry1(__Unify___ll_backend__layout__string_with_0s_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__string_with_0s_0_0);
	MR_init_label1(__Unify___ll_backend__layout__string_with_0s_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__string_with_0s_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__string_with_0s_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__layout__string_with_0s_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module51)
	MR_init_entry1(__Compare___ll_backend__layout__string_with_0s_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__string_with_0s_0_0);
	MR_init_label2(__Compare___ll_backend__layout__string_with_0s_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__string_with_0s_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__string_with_0s_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__string_with_0s_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__string_with_0s_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__string_with_0s_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module52)
	MR_init_entry1(__Unify___ll_backend__layout__table_io_decl_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__table_io_decl_data_0_0);
	MR_init_label4(__Unify___ll_backend__layout__table_io_decl_data_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__table_io_decl_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__table_io_decl_data_0_0_i10);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__layout__layout_name_0_0,
		__Unify___ll_backend__layout__table_io_decl_data_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__table_io_decl_data_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__table_io_decl_data_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__table_io_decl_data_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__layout__table_io_decl_data_0_0_i6);
MR_def_label(__Unify___ll_backend__layout__table_io_decl_data_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__table_io_decl_data_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__rval_0_0);
MR_def_label(__Unify___ll_backend__layout__table_io_decl_data_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__table_io_decl_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module53)
	MR_init_entry1(__Compare___ll_backend__layout__table_io_decl_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__table_io_decl_data_0_0);
	MR_init_label6(__Compare___ll_backend__layout__table_io_decl_data_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__table_io_decl_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__table_io_decl_data_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__table_io_decl_data_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__table_io_decl_data_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__table_io_decl_data_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___ll_backend__layout__layout_name_0_0,
		__Compare___ll_backend__layout__table_io_decl_data_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__table_io_decl_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__table_io_decl_data_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__layout__table_io_decl_data_0_0_i9);
MR_def_label(__Compare___ll_backend__layout__table_io_decl_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__table_io_decl_data_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__layout__table_io_decl_data_0_0_i13);
MR_def_label(__Compare___ll_backend__layout__table_io_decl_data_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__table_io_decl_data_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__rval_0_0);
MR_def_label(__Compare___ll_backend__layout__table_io_decl_data_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module54)
	MR_init_entry1(__Unify___ll_backend__layout__user_event_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__layout__user_event_data_0_0);
	MR_init_label3(__Unify___ll_backend__layout__user_event_data_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__layout__user_event_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__user_event_data_0_0_i8);
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
		MR_GOTO_LAB(__Unify___ll_backend__layout__user_event_data_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		__Unify___ll_backend__layout__user_event_data_0_0_i4);
MR_def_label(__Unify___ll_backend__layout__user_event_data_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__layout__user_event_data_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__layout__layout_slot_name_0_0);
MR_def_label(__Unify___ll_backend__layout__user_event_data_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__layout__user_event_data_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__layout_module55)
	MR_init_entry1(__Compare___ll_backend__layout__user_event_data_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__layout__user_event_data_0_0);
	MR_init_label5(__Compare___ll_backend__layout__user_event_data_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__layout__user_event_data_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__user_event_data_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__layout__user_event_data_0_0_i2);
MR_def_label(__Compare___ll_backend__layout__user_event_data_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__layout__user_event_data_0_0,2)
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
		__Compare___ll_backend__layout__user_event_data_0_0_i5);
MR_def_label(__Compare___ll_backend__layout__user_event_data_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__user_event_data_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ll_backend__llds__rval_0_0,
		__Compare___ll_backend__layout__user_event_data_0_0_i9);
MR_def_label(__Compare___ll_backend__layout__user_event_data_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__layout__user_event_data_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ll_backend__layout__layout_slot_name_0_0);
MR_def_label(__Compare___ll_backend__layout__user_event_data_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__layout_maybe_bunch_0(void)
{
	ll_backend__layout_module0();
	ll_backend__layout_module1();
	ll_backend__layout_module2();
	ll_backend__layout_module3();
	ll_backend__layout_module4();
	ll_backend__layout_module5();
	ll_backend__layout_module6();
	ll_backend__layout_module7();
	ll_backend__layout_module8();
	ll_backend__layout_module9();
	ll_backend__layout_module10();
	ll_backend__layout_module11();
	ll_backend__layout_module12();
	ll_backend__layout_module13();
	ll_backend__layout_module14();
	ll_backend__layout_module15();
	ll_backend__layout_module16();
	ll_backend__layout_module17();
	ll_backend__layout_module18();
	ll_backend__layout_module19();
	ll_backend__layout_module20();
	ll_backend__layout_module21();
	ll_backend__layout_module22();
	ll_backend__layout_module23();
	ll_backend__layout_module24();
	ll_backend__layout_module25();
	ll_backend__layout_module26();
	ll_backend__layout_module27();
	ll_backend__layout_module28();
	ll_backend__layout_module29();
	ll_backend__layout_module30();
	ll_backend__layout_module31();
	ll_backend__layout_module32();
	ll_backend__layout_module33();
	ll_backend__layout_module34();
	ll_backend__layout_module35();
	ll_backend__layout_module36();
	ll_backend__layout_module37();
	ll_backend__layout_module38();
	ll_backend__layout_module39();
}

static void mercury__ll_backend__layout_maybe_bunch_1(void)
{
	ll_backend__layout_module40();
	ll_backend__layout_module41();
	ll_backend__layout_module42();
	ll_backend__layout_module43();
	ll_backend__layout_module44();
	ll_backend__layout_module45();
	ll_backend__layout_module46();
	ll_backend__layout_module47();
	ll_backend__layout_module48();
	ll_backend__layout_module49();
	ll_backend__layout_module50();
	ll_backend__layout_module51();
	ll_backend__layout_module52();
	ll_backend__layout_module53();
	ll_backend__layout_module54();
	ll_backend__layout_module55();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__layout__init(void);
void mercury__ll_backend__layout__init_type_tables(void);
void mercury__ll_backend__layout__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__layout__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__layout__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__layout__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__layout__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__layout_maybe_bunch_0();
	mercury__ll_backend__layout_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_alloc_site_info_0,
		ll_backend__layout__alloc_site_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_basic_label_layout_0,
		ll_backend__layout__basic_label_layout_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_closure_proc_id_data_0,
		ll_backend__layout__closure_proc_id_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_data_or_slot_id_0,
		ll_backend__layout__data_or_slot_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_deep_excp_slots_0,
		ll_backend__layout__deep_excp_slots_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_event_set_layout_data_0,
		ll_backend__layout__event_set_layout_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_file_layout_data_0,
		ll_backend__layout__file_layout_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_label_layout_long_vars_0,
		ll_backend__layout__label_layout_long_vars_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_label_layout_no_vars_0,
		ll_backend__layout__label_layout_no_vars_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_label_layout_short_vars_0,
		ll_backend__layout__label_layout_short_vars_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_label_long_var_info_0,
		ll_backend__layout__label_long_var_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_label_short_var_info_0,
		ll_backend__layout__label_short_var_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_label_vars_0,
		ll_backend__layout__label_vars_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_layout_array_name_0,
		ll_backend__layout__layout_array_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_layout_name_0,
		ll_backend__layout__layout_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0,
		ll_backend__layout__layout_slot_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_maybe_proc_id_and_more_0,
		ll_backend__layout__maybe_proc_id_and_more_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_module_layout_data_0,
		ll_backend__layout__module_layout_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_proc_layout_data_0,
		ll_backend__layout__proc_layout_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0,
		ll_backend__layout__proc_layout_exec_trace_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_proc_layout_kind_0,
		ll_backend__layout__proc_layout_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_proc_layout_proc_static_0,
		ll_backend__layout__proc_layout_proc_static_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_proc_layout_stack_traversal_0,
		ll_backend__layout__proc_layout_stack_traversal_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_proc_layout_user_or_uci_0,
		ll_backend__layout__proc_layout_user_or_uci_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_string_with_0s_0,
		ll_backend__layout__string_with_0s_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_table_io_decl_data_0,
		ll_backend__layout__table_io_decl_data_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__layout__type_ctor_info_user_event_data_0,
		ll_backend__layout__user_event_data_0_0);
	mercury__ll_backend__layout__init_debugger();
}

void mercury__ll_backend__layout__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_alloc_site_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_basic_label_layout_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_closure_proc_id_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_data_or_slot_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_deep_excp_slots_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_event_set_layout_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_file_layout_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_label_layout_long_vars_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_label_layout_no_vars_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_label_layout_short_vars_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_label_long_var_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_label_short_var_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_label_vars_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_layout_array_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_layout_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_maybe_proc_id_and_more_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_module_layout_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_proc_layout_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_proc_layout_exec_trace_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_proc_layout_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_proc_layout_proc_static_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_proc_layout_stack_traversal_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_proc_layout_user_or_uci_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_string_with_0s_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_table_io_decl_data_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__layout__type_ctor_info_user_event_data_0);
	}
}


void mercury__ll_backend__layout__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__layout__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__layout);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__layout__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__layout__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
