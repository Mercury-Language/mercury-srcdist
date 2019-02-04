/*
** Automatically generated from `llds_out_util.m'
** by the Mercury compiler,
** version rotd-2010-01-31, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__llds_out__llds_out_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 28 "ll_backend.llds_out.llds_out_util.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 32 "ll_backend.llds_out.llds_out_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "ll_backend.llds_out.llds_out_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 40 "ll_backend.llds_out.llds_out_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 44 "ll_backend.llds_out.llds_out_util.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "ll_backend.llds_out.llds_out_util.c"
#line 49 "ll_backend.llds_out.llds_out_util.c"
#include "ll_backend.llds_out.llds_out_util.mh"

#line 52 "ll_backend.llds_out.llds_out_util.c"
#line 53 "ll_backend.llds_out.llds_out_util.c"
#ifndef LL_BACKEND__LLDS_OUT__LLDS_OUT_UTIL_DECL_GUARD
#define LL_BACKEND__LLDS_OUT__LLDS_OUT_UTIL_DECL_GUARD

#line 57 "ll_backend.llds_out.llds_out_util.c"
#line 58 "ll_backend.llds_out.llds_out_util.c"

#endif
#line 61 "ll_backend.llds_out.llds_out_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0,
	mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0,
	mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0;
MR_decl_label1(ll_backend__llds_out__llds_out_util__output_indent_5_0, 14)
MR_decl_label1(ll_backend__llds_out__llds_out_util__output_reset_line_num_3_0, 12)
MR_decl_label3(ll_backend__llds_out__llds_out_util__output_set_line_num_4_0, 4,5,14)
MR_decl_label10(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label4(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0, 12,13,14,15)
MR_decl_label10(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0, 13,11,7,38,5,15,17,21,25,27)
MR_decl_label4(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0, 31,33,39,1)
MR_decl_label7(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0, 4,6,8,10,12,16,1)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0, 3,56,39,43,22,25,183,5,73,79)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0, 90,97,107,124,133,135,146,158,163,173)
MR_decl_label2(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0, 174,258)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0, 37,41,45,49,53,57,61,65,69,73)
MR_decl_label1(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0, 157)
MR_def_extern_entry(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_util__output_set_line_num_4_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_util__output_reset_line_num_3_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_util__decl_set_init_1_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_util__decl_set_insert_3_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_util__decl_set_is_member_2_0)
MR_def_extern_entry(ll_backend__llds_out__llds_out_util__output_indent_5_0)
MR_def_extern_entry(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds_out__llds_out_util__decl_set_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds_out__llds_out_util__decl_set_0_0)
MR_def_extern_entry(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0)
MR_def_extern_entry(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0 = {
	"decl_float_label",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_type_num_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_type_num_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1 = {
	"decl_common_type",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_code_addr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_code_addr_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_code_addr_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2 = {
	"decl_code_addr",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_id_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__rtti__type_ctor_info_rtti_id_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3 = {
	"decl_rtti_id",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_3,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_name_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_name_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4 = {
	"decl_layout_id",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_4,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__rtti__type_ctor_info_proc_tabling_struct_id_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5 = {
	"decl_tabling_id",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6 = {
	"decl_foreign_proc_struct",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_6,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_c_global_var_ref_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_c_global_var_ref_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_c_global_var_ref_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7 = {
	"decl_c_global_var",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_7,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8 = {
	"decl_type_info_like_struct",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_8,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9 = {
	"decl_typeclass_constraint_struct",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_out__llds_out_util__field_types_decl_id_0_9,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0[] = {
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1[] = {
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2[] = {
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3[] = {
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9

};

const MR_DuPtagLayout mercury_data_ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_2 },
	{ 7, MR_SECTAG_REMOTE,
	mercury_data_ll_backend__llds_out__llds_out_util__du_stag_ordered_decl_id_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0[] = {
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_7,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_2,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_1,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_0,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_6,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_4,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_3,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_5,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_8,
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_decl_id_0_9
};

const MR_Integer mercury_data_ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0[] = {
	3,
	2,
	1,
	6,
	5,
	7,
	4,
	0,
	8,
	9 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0)),
	"ll_backend.llds_out.llds_out_util",
	"decl_id",
	{ (void *)mercury_data_ll_backend__llds_out__llds_out_util__du_name_ordered_decl_id_0 },
	{ (void *)mercury_data_ll_backend__llds_out__llds_out_util__du_ptag_ordered_decl_id_0 },
	10,
	4,
	mercury_data_ll_backend__llds_out__llds_out_util__functor_number_map_decl_id_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_set_tree234__type_ctor_info_set_tree234_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
	&mercury_data_set_tree234__type_ctor_info_set_tree234_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds_out__llds_out_util__decl_set_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_set_0_0)),
	"ll_backend.llds_out.llds_out_util",
	"decl_set",
	{ 0 },
	{ (void *)&mercury_data_set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_data_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_data_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_data_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__trace_params__type_ctor_info_trace_level_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__trace_params__type_ctor_info_trace_level_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_globals_0
};

const MR_ConstString mercury_data_ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0[] = {
	"lout_module_name",
	"lout_mangled_module_name",
	"lout_internal_label_to_layout",
	"lout_entry_label_to_layout",
	"lout_table_io_decl_map",
	"lout_auto_comments",
	"lout_line_numbers",
	"lout_emit_c_loops",
	"lout_generate_bytecode",
	"lout_local_thread_engine_base",
	"lout_profile_calls",
	"lout_profile_time",
	"lout_profile_memory",
	"lout_profile_deep",
	"lout_unboxed_float",
	"lout_static_ground_floats",
	"lout_use_macro_for_redo_fail",
	"lout_trace_level",
	"lout_globals"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0 = {
	"llds_out_info",
	19,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0,
	mercury_data_ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0[] = {
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__llds_out__llds_out_util__du_stag_ordered_llds_out_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0[] = {
	&mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0
};

const MR_Integer mercury_data_ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0)),
	"ll_backend.llds_out.llds_out_util",
	"llds_out_info",
	{ (void *)mercury_data_ll_backend__llds_out__llds_out_util__du_name_ordered_llds_out_info_0 },
	{ (void *)mercury_data_ll_backend__llds_out__llds_out_util__du_ptag_ordered_llds_out_info_0 },
	1,
	4,
	mercury_data_ll_backend__llds_out__llds_out_util__functor_number_map_llds_out_info_0
};



MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(libs__globals__get_trace_level_2_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module0)
	MR_init_entry1(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0);
	MR_init_label10(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label4(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,12,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_llds_out_info'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i2);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 120;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i3);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 119;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i4);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 451;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i5);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 118;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i6);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 454;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i7);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 170;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i8);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 171;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i9);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 172;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i10);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 173;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i11);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 216;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i12);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 422;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i13);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 450;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i14);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0_i15);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 19);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(6);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_sv(7);
	MR_tfield(0, MR_r2, 6) = MR_sv(8);
	MR_tfield(0, MR_r2, 7) = MR_sv(9);
	MR_tfield(0, MR_r2, 8) = MR_sv(10);
	MR_tfield(0, MR_r2, 9) = MR_sv(11);
	MR_tfield(0, MR_r2, 10) = MR_sv(12);
	MR_tfield(0, MR_r2, 11) = MR_sv(13);
	MR_tfield(0, MR_r2, 12) = MR_sv(14);
	MR_tfield(0, MR_r2, 13) = MR_sv(15);
	MR_tfield(0, MR_r2, 14) = MR_sv(16);
	MR_tfield(0, MR_r2, 15) = MR_sv(17);
	MR_tfield(0, MR_r2, 16) = MR_sv(18);
	MR_tfield(0, MR_r2, 17) = MR_r1;
	MR_tfield(0, MR_r2, 18) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(backend_libs__c_util__always_set_line_num_4_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module1)
	MR_init_entry1(ll_backend__llds_out__llds_out_util__output_set_line_num_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_util__output_set_line_num_4_0);
	MR_init_label3(ll_backend__llds_out__llds_out_util__output_set_line_num_4_0,4,5,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_set_line_num'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_util__output_set_line_num_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 6);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_util__output_set_line_num_4_0_i14);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(term__context_file_2_0,
		ll_backend__llds_out__llds_out_util__output_set_line_num_4_0_i4);
MR_def_label(ll_backend__llds_out__llds_out_util__output_set_line_num_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(term__context_line_2_0,
		ll_backend__llds_out__llds_out_util__output_set_line_num_4_0_i5);
MR_def_label(ll_backend__llds_out__llds_out_util__output_set_line_num_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(backend_libs__c_util__always_set_line_num_4_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_util__output_set_line_num_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__always_reset_line_num_2_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module2)
	MR_init_entry1(ll_backend__llds_out__llds_out_util__output_reset_line_num_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_util__output_reset_line_num_3_0);
	MR_init_label1(ll_backend__llds_out__llds_out_util__output_reset_line_num_3_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_reset_line_num'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_util__output_reset_line_num_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 6);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_util__output_reset_line_num_3_0_i12);
	}
	MR_np_tailcall_ent(backend_libs__c_util__always_reset_line_num_2_0);
	}
MR_def_label(ll_backend__llds_out__llds_out_util__output_reset_line_num_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set_tree234__init_0_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module3)
	MR_init_entry1(ll_backend__llds_out__llds_out_util__decl_set_init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_util__decl_set_init_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'decl_set_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_util__decl_set_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, decl_id);
	MR_np_tailcall_ent(fn__set_tree234__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_tree234__insert_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module4)
	MR_init_entry1(ll_backend__llds_out__llds_out_util__decl_set_insert_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_util__decl_set_insert_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'decl_set_insert'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_util__decl_set_insert_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, decl_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(set_tree234__insert_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set_tree234__contains_2_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module5)
	MR_init_entry1(ll_backend__llds_out__llds_out_util__decl_set_is_member_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_util__decl_set_is_member_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'decl_set_is_member'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_util__decl_set_is_member_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, decl_id);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(set_tree234__contains_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module6)
	MR_init_entry1(ll_backend__llds_out__llds_out_util__output_indent_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__llds_out__llds_out_util__output_indent_5_0);
	MR_init_label1(ll_backend__llds_out__llds_out_util__output_indent_5_0,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_indent'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__llds_out__llds_out_util__output_indent_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r3,0)) {
		MR_GOTO_LAB(ll_backend__llds_out__llds_out_util__output_indent_5_0_i14);
	}
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ll_backend__llds_out__llds_out_util__output_indent_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__code_addr_0_0);
MR_decl_entry(__Unify___ll_backend__layout__layout_name_0_0);
MR_decl_entry(__Unify___backend_libs__rtti__rtti_id_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(__Unify___backend_libs__rtti__proc_tabling_struct_id_0_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module7)
	MR_init_entry1(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0);
	MR_init_label10(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,13,11,7,38,5,15,17,21,25,27)
	MR_init_label4(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,31,33,39,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i39);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i13) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i11) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i7) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i38));
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(0, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__code_addr_0_0);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i21) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i17) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i25) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i15) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i5) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i31) MR_AND
		MR_LABEL_AP(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i33));
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__layout__layout_name_0_0);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___backend_libs__rtti__rtti_id_0_0);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
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
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i27);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___backend_libs__rtti__proc_tabling_struct_id_0_0);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___ll_backend__llds__code_addr_0_0);
MR_decl_entry(__Compare___ll_backend__layout__layout_name_0_0);
MR_decl_entry(__Compare___backend_libs__rtti__rtti_id_0_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(__Compare___backend_libs__rtti__proc_tabling_struct_id_0_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module8)
	MR_init_entry1(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0);
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,3,56,39,43,22,25,183,5,73,79)
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,90,97,107,124,133,135,146,158,163,173)
	MR_init_label2(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,174,258)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i56) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i39) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i22) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i183));
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i43) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158));
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i25) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158));
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__code_addr_0_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,183)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(1), 0),
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i107) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i90) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i124) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i73) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i5) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i146) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i163));
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i79) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158));
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i79) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158));
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i97) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158));
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__layout__layout_name_0_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173);
	}
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___backend_libs__rtti__rtti_id_0_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i133) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158));
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,133)
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i135);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i258);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___backend_libs__rtti__proc_tabling_struct_id_0_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_sv(2), 0),
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i174) MR_AND
		MR_LABEL_AP(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i158));
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i173);
	}
	if (MR_INT_EQ(MR_tfield(3, MR_sv(2), 0),6)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i174);
	}
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___set_tree234__set_tree234_1_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module9)
	MR_init_entry1(__Unify___ll_backend__llds_out__llds_out_util__decl_set_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__llds_out__llds_out_util__decl_set_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds_out__llds_out_util__decl_set_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, decl_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___set_tree234__set_tree234_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___set_tree234__set_tree234_1_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module10)
	MR_init_entry1(__Compare___ll_backend__llds_out__llds_out_util__decl_set_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__llds_out__llds_out_util__decl_set_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds_out__llds_out_util__decl_set_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, decl_id);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___set_tree234__set_tree234_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___libs__trace_params__trace_level_0_0);
MR_decl_entry(__Unify___libs__globals__globals_0_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module11)
	MR_init_entry1(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0);
	MR_init_label7(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,4,6,8,10,12,16,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i16);
	}
	MR_incr_sp(37);
	MR_sv(37) = (MR_Word) MR_succip;
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
	MR_sv(18) = MR_tfield(0, MR_tempr1, 18);
	MR_sv(19) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(20) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(21) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(22) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(23) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(24) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(25) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(26) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(27) = MR_tfield(0, MR_tempr2, 9);
	MR_sv(28) = MR_tfield(0, MR_tempr2, 10);
	MR_sv(29) = MR_tfield(0, MR_tempr2, 11);
	MR_sv(30) = MR_tfield(0, MR_tempr2, 12);
	MR_sv(31) = MR_tfield(0, MR_tempr2, 13);
	MR_sv(32) = MR_tfield(0, MR_tempr2, 14);
	MR_sv(33) = MR_tfield(0, MR_tempr2, 15);
	MR_sv(34) = MR_tfield(0, MR_tempr2, 16);
	MR_sv(35) = MR_tfield(0, MR_tempr2, 17);
	MR_sv(36) = MR_tfield(0, MR_tempr2, 18);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i4);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(19)) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i6);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, data_id);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i8);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(22);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i10);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(5) != MR_sv(23))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(24))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(25))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(26))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(9) != MR_sv(27))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(10) != MR_sv(28))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(11) != MR_sv(29))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(12) != MR_sv(30))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(13) != MR_sv(31))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(14) != MR_sv(32))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(15) != MR_sv(33))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(16) != MR_sv(34))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(35);
	MR_np_call_localret_ent(__Unify___libs__trace_params__trace_level_0_0,
		__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i12);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(36);
	MR_succip_word = MR_sv(37);
	MR_decr_sp(37);
	MR_np_tailcall_ent(__Unify___libs__globals__globals_0_0);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(37);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___libs__trace_params__trace_level_0_0);
MR_decl_entry(__Compare___libs__globals__globals_0_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module12)
	MR_init_entry1(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0);
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,37,41,45,49,53,57,61,65,69,73)
	MR_init_label1(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,157)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i3);
	}
	MR_incr_sp(37);
	MR_sv(37) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i2);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(36) = MR_tfield(0, MR_tempr5, 18);
	MR_sv(35) = MR_tfield(0, MR_tempr5, 17);
	MR_sv(34) = MR_tfield(0, MR_tempr5, 16);
	MR_sv(33) = MR_tfield(0, MR_tempr5, 15);
	MR_sv(32) = MR_tfield(0, MR_tempr5, 14);
	MR_sv(31) = MR_tfield(0, MR_tempr5, 13);
	MR_sv(30) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(29) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(28) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(27) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(26) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(25) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(18) = MR_tfield(0, MR_tempr6, 18);
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
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i5);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i9);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i13);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, data_id);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(21);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i17);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i21);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i25);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i29);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i33);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i37);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i41);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i45);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i49);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(30);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i53);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(31);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i57);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(32);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i61);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(33);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i65);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(34);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i69);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(35);
	MR_np_call_localret_ent(__Compare___libs__trace_params__trace_level_0_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i73);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i157);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(36);
	MR_succip_word = MR_sv(37);
	MR_decr_sp(37);
	MR_np_tailcall_ent(__Compare___libs__globals__globals_0_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(37);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__llds_out__llds_out_util_maybe_bunch_0(void)
{
	ll_backend__llds_out__llds_out_util_module0();
	ll_backend__llds_out__llds_out_util_module1();
	ll_backend__llds_out__llds_out_util_module2();
	ll_backend__llds_out__llds_out_util_module3();
	ll_backend__llds_out__llds_out_util_module4();
	ll_backend__llds_out__llds_out_util_module5();
	ll_backend__llds_out__llds_out_util_module6();
	ll_backend__llds_out__llds_out_util_module7();
	ll_backend__llds_out__llds_out_util_module8();
	ll_backend__llds_out__llds_out_util_module9();
	ll_backend__llds_out__llds_out_util_module10();
	ll_backend__llds_out__llds_out_util_module11();
	ll_backend__llds_out__llds_out_util_module12();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__llds_out__llds_out_util__init(void);
void mercury__ll_backend__llds_out__llds_out_util__init_type_tables(void);
void mercury__ll_backend__llds_out__llds_out_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__llds_out__llds_out_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__llds_out__llds_out_util__init_complexity_procs(void);
#endif

void mercury__ll_backend__llds_out__llds_out_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__llds_out__llds_out_util_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0,
		ll_backend__llds_out__llds_out_util__decl_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0,
		ll_backend__llds_out__llds_out_util__decl_set_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0,
		ll_backend__llds_out__llds_out_util__llds_out_info_0_0);
	mercury__ll_backend__llds_out__llds_out_util__init_debugger();
}

void mercury__ll_backend__llds_out__llds_out_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0);
	}
}


void mercury__ll_backend__llds_out__llds_out_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__llds_out__llds_out_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__llds_out__llds_out_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__llds_out__llds_out_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
