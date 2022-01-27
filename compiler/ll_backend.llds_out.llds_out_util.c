/*
** Automatically generated from `llds_out_util.m'
** by the Mercury compiler,
** version rotd-2013-03-18, configured for x86_64-apple-darwin12.2.1.
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
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "ll_backend.llds_out.llds_out_util.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "ll_backend.llds_out.llds_out_util.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "ll_backend.llds_out.llds_out_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ll_backend.llds_out.llds_out_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "ll_backend.llds_out.llds_out_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
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
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0,
	mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0,
	mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_llds_out_info_0;
MR_decl_label1(ll_backend__llds_out__llds_out_util__output_indent_5_0, 14)
MR_decl_label1(ll_backend__llds_out__llds_out_util__output_reset_line_num_3_0, 12)
MR_decl_label3(ll_backend__llds_out__llds_out_util__output_set_line_num_4_0, 4,5,14)
MR_decl_label10(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label4(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0, 12,13,14,15)
MR_decl_label10(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0, 5,9,11,13,15,17,21,27,25,63)
MR_decl_label2(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0, 31,1)
MR_decl_label8(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0, 4,6,8,10,12,14,18,1)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0, 3,2,7,9,10,11,12,13,14,15)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0, 5,19,20,22,23,24,25,26,27,17)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0, 31,32,33,35,36,37,38,39,29,43)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0, 44,45,46,48,49,50,51,41,55,56)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0, 57,58,59,61,62,63,53,67,68,69)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0, 70,71,72,74,75,65,79,80,81,82)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0, 83,84,85,87,77,91,92,93,94,507)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0, 95,96,97,100,89,108,109,110,111,112)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0, 113,114,115,322,106,119,120,121,122,123)
MR_decl_label4(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0, 124,125,126,818)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label10(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0, 37,41,45,49,53,57,61,65,69,73)
MR_decl_label2(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0, 77,225)
MR_def_extern_entry(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0)
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

extern const MR_TypeCtorInfo_Struct mercury_data_set_tree234__type_ctor_info_set_tree234_1;
static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
MR_CTOR1_ADDR(set_tree234, set_tree234),
MR_CTOR0_ADDR(ll_backend__llds_out__llds_out_util, decl_id)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_data_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_alloc_site_id_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, data_id)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ll_backend__llds, alloc_site_id),
MR_CTOR0_ADDR(ll_backend__layout, layout_slot_name)
}
},
};
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
	15,
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
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_tree234__ti_set_tree234_1ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0 = {
	&mercury_data_set_tree234__type_ctor_info_set_tree234_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_id_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds_out__llds_out_util__type_ctor_info_decl_set_0 = {
	0,
	15,
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
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_data_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_label_0ll_backend__llds__type_ctor_info_data_id_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_data_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_ll_backend__layout__type_ctor_info_layout_slot_name_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_alloc_site_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_alloc_site_id_0,
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
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_alloc_site_id_0ll_backend__layout__type_ctor_info_layout_slot_name_0,
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
	"lout_alloc_site_map",
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

const MR_DuArgLocn mercury_data_ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0[] = {
	{ 0, 0, 0 },
	{ 1, 0, 0 },
	{ 2, 0, 0 },
	{ 3, 0, 0 },
	{ 4, 0, 0 },
	{ 5, 0, 0 },
	{ 6, 0, 1 },
	{ 6, 1, 1 },
	{ 6, 2, 1 },
	{ 6, 3, 1 },
	{ 6, 4, 1 },
	{ 6, 5, 1 },
	{ 6, 6, 1 },
	{ 6, 7, 1 },
	{ 6, 8, 1 },
	{ 6, 9, 1 },
	{ 6, 10, 1 },
	{ 6, 11, 1 },
	{ 6, 12, 3 },
	{ 7, 0, 0 },
};

static const MR_DuFunctorDesc mercury_data_ll_backend__llds_out__llds_out_util__du_functor_desc_llds_out_info_0_0 = {
	"llds_out_info",
	20,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__llds_out__llds_out_util__field_types_llds_out_info_0_0,
	mercury_data_ll_backend__llds_out__llds_out_util__field_names_llds_out_info_0_0,
	mercury_data_ll_backend__llds_out__llds_out_util__field_locns_llds_out_info_0_0,
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
	15,
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
	MR_init_entry1(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0);
	MR_init_label10(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label4(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,12,13,14,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_llds_out_info'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(20);
	MR_sv(20) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i2);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 134;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i3);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 133;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i4);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 473;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i5);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 132;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i6);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 476;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i7);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 188;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i8);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 189;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i9);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 190;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i10);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 191;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i11);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 238;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i12);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 442;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i13);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 472;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i14);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(libs__globals__get_trace_level_2_0,
		fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0_i15);
MR_def_label(fn__ll_backend__llds_out__llds_out_util__init_llds_out_info_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 8);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(7);
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tfield(0, MR_r2, 3) = MR_sv(4);
	MR_tfield(0, MR_r2, 4) = MR_sv(5);
	MR_tfield(0, MR_r2, 5) = MR_sv(6);
	MR_tfield(0, MR_r2, 6) = ((MR_Integer) MR_sv(8) | (((MR_Integer) MR_sv(9) << (MR_Integer) 1) | (((MR_Integer) MR_sv(10) << (MR_Integer) 2) | (((MR_Integer) MR_sv(11) << (MR_Integer) 3) | (((MR_Integer) MR_sv(12) << (MR_Integer) 4) | (((MR_Integer) MR_sv(13) << (MR_Integer) 5) | (((MR_Integer) MR_sv(14) << (MR_Integer) 6) | (((MR_Integer) MR_sv(15) << (MR_Integer) 7) | (((MR_Integer) MR_sv(16) << (MR_Integer) 8) | (((MR_Integer) MR_sv(17) << (MR_Integer) 9) | (((MR_Integer) MR_sv(18) << (MR_Integer) 10) | (((MR_Integer) MR_sv(19) << (MR_Integer) 11) | ((MR_Integer) MR_r1 << (MR_Integer) 12)))))))))))));
	MR_tfield(0, MR_r2, 7) = MR_sv(2);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(20);
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
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r1, 6) >> (MR_Integer) 1) & (MR_Integer) 1);
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
	MR_tempr1 = (((MR_Integer) MR_tfield(0, MR_r1, 6) >> (MR_Integer) 1) & (MR_Integer) 1);
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
	MR_init_label10(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,5,9,11,13,15,17,21,27,25,63)
	MR_init_label2(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,31,1)
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
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i63);
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
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__llds__code_addr_0_0);
	}
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i9);
	}
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
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i11);
	}
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
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i13);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i15);
	}
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
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i17);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ll_backend__layout__layout_name_0_0);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___backend_libs__rtti__rtti_id_0_0);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i25);
	}
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
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0_i31);
	}
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
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,31)
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
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__decl_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__code_addr_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___ll_backend__layout__layout_name_0_0);
MR_decl_entry(__Compare___backend_libs__rtti__rtti_id_0_0);
MR_decl_entry(__Compare___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(__Compare___backend_libs__rtti__proc_tabling_struct_id_0_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module8)
	MR_init_entry1(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0);
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,3,2,7,9,10,11,12,13,14,15)
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,5,19,20,22,23,24,25,26,27,17)
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,31,32,33,35,36,37,38,39,29,43)
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,44,45,46,48,49,50,51,41,55,56)
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,57,58,59,61,62,63,53,67,68,69)
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,70,71,72,74,75,65,79,80,81,82)
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,83,84,85,87,77,91,92,93,94,507)
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,95,96,97,100,89,108,109,110,111,112)
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,113,114,115,322,106,119,120,121,122,123)
	MR_init_label4(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,124,125,126,818)
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
	MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i2);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i7);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__llds__code_addr_0_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i507);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i17);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i20);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i507);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i29);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i31);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i33);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i39);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i507);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i41);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i43);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i45);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i46);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i48);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i49);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i50);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i51);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i507);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i53);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i55);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i56);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i57);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i58);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i59);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i61);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i62);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i63);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i507);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i65);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i67);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i68);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i69);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i70);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i71);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i72);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ll_backend__layout__layout_name_0_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i74);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i75);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i507);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i77);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i79);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i80);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i81);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i82);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i83);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i84);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i85);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___backend_libs__rtti__rtti_id_0_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i87);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i507);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i89);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i91);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i92);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i93);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i94);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i95);
	}
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,507)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i96);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i97);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i507);
	}
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
		__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i100);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i818);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___backend_libs__rtti__proc_tabling_struct_id_0_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i106);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i108);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i109);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i110);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i111);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i112);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i113);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i114);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i115);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i507);
	}
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,322)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i119);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i120);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i121);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i122);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i123);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i124);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i125);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i126);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0_i322);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__decl_id_0_0,818)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Unify___libs__trace_params__trace_level_0_0);
MR_decl_entry(__Unify___libs__globals__globals_0_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module11)
	MR_init_entry1(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0);
	MR_init_label8(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,4,6,8,10,12,14,18,1)
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
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i18);
	}
	MR_incr_sp(39);
	MR_sv(39) = (MR_Word) MR_succip;
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
	MR_sv(6) = ((MR_Integer) MR_tfield(0, MR_tempr1, 6) & (MR_Integer) 1);
	MR_sv(7) = (((MR_Integer) MR_tfield(0, MR_tempr1, 6) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(8) = (((MR_Integer) MR_tfield(0, MR_tempr1, 6) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(9) = (((MR_Integer) MR_tfield(0, MR_tempr1, 6) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(10) = (((MR_Integer) MR_tfield(0, MR_tempr1, 6) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(11) = (((MR_Integer) MR_tfield(0, MR_tempr1, 6) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_sv(12) = (((MR_Integer) MR_tfield(0, MR_tempr1, 6) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_sv(13) = (((MR_Integer) MR_tfield(0, MR_tempr1, 6) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_sv(14) = (((MR_Integer) MR_tfield(0, MR_tempr1, 6) >> (MR_Integer) 8) & (MR_Integer) 1);
	MR_sv(15) = (((MR_Integer) MR_tfield(0, MR_tempr1, 6) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_sv(16) = (((MR_Integer) MR_tfield(0, MR_tempr1, 6) >> (MR_Integer) 10) & (MR_Integer) 1);
	MR_sv(17) = (((MR_Integer) MR_tfield(0, MR_tempr1, 6) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_sv(18) = (((MR_Integer) MR_tfield(0, MR_tempr1, 6) >> (MR_Integer) 12) & (MR_Integer) 7);
	MR_sv(19) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(20) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(21) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(22) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(23) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(24) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(25) = ((MR_Integer) MR_tfield(0, MR_tempr2, 6) & (MR_Integer) 1);
	MR_sv(26) = (((MR_Integer) MR_tfield(0, MR_tempr2, 6) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(27) = (((MR_Integer) MR_tfield(0, MR_tempr2, 6) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(28) = (((MR_Integer) MR_tfield(0, MR_tempr2, 6) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(29) = (((MR_Integer) MR_tfield(0, MR_tempr2, 6) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(30) = (((MR_Integer) MR_tfield(0, MR_tempr2, 6) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_sv(31) = (((MR_Integer) MR_tfield(0, MR_tempr2, 6) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_sv(32) = (((MR_Integer) MR_tfield(0, MR_tempr2, 6) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_sv(33) = (((MR_Integer) MR_tfield(0, MR_tempr2, 6) >> (MR_Integer) 8) & (MR_Integer) 1);
	MR_sv(34) = (((MR_Integer) MR_tfield(0, MR_tempr2, 6) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_sv(35) = (((MR_Integer) MR_tfield(0, MR_tempr2, 6) >> (MR_Integer) 10) & (MR_Integer) 1);
	MR_sv(36) = (((MR_Integer) MR_tfield(0, MR_tempr2, 6) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_sv(37) = (((MR_Integer) MR_tfield(0, MR_tempr2, 6) >> (MR_Integer) 12) & (MR_Integer) 7);
	MR_sv(38) = MR_tfield(0, MR_tempr2, 7);
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
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(20)) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i6);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i8);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i10);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i12);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(25))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(7) != MR_sv(26))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(8) != MR_sv(27))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(9) != MR_sv(28))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(10) != MR_sv(29))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(11) != MR_sv(30))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(12) != MR_sv(31))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(13) != MR_sv(32))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(14) != MR_sv(33))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(15) != MR_sv(34))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(16) != MR_sv(35))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	if ((MR_sv(17) != MR_sv(36))) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(37);
	MR_np_call_localret_ent(__Unify___libs__trace_params__trace_level_0_0,
		__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i14);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i1);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(38);
	MR_succip_word = MR_sv(39);
	MR_decr_sp(39);
	MR_np_tailcall_ent(__Unify___libs__globals__globals_0_0);
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(39);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___libs__trace_params__trace_level_0_0);
MR_decl_entry(__Compare___libs__globals__globals_0_0);

MR_BEGIN_MODULE(ll_backend__llds_out__llds_out_util_module12)
	MR_init_entry1(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0);
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label10(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,37,41,45,49,53,57,61,65,69,73)
	MR_init_label2(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,77,225)
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
	MR_incr_sp(39);
	MR_sv(39) = (MR_Word) MR_succip;
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
	MR_sv(38) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(37) = (((MR_Integer) MR_tfield(0, MR_tempr5, 6) >> (MR_Integer) 12) & (MR_Integer) 7);
	MR_sv(36) = (((MR_Integer) MR_tfield(0, MR_tempr5, 6) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_sv(35) = (((MR_Integer) MR_tfield(0, MR_tempr5, 6) >> (MR_Integer) 10) & (MR_Integer) 1);
	MR_sv(34) = (((MR_Integer) MR_tfield(0, MR_tempr5, 6) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_sv(33) = (((MR_Integer) MR_tfield(0, MR_tempr5, 6) >> (MR_Integer) 8) & (MR_Integer) 1);
	MR_sv(32) = (((MR_Integer) MR_tfield(0, MR_tempr5, 6) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_sv(31) = (((MR_Integer) MR_tfield(0, MR_tempr5, 6) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_sv(30) = (((MR_Integer) MR_tfield(0, MR_tempr5, 6) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_sv(29) = (((MR_Integer) MR_tfield(0, MR_tempr5, 6) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(28) = (((MR_Integer) MR_tfield(0, MR_tempr5, 6) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(27) = (((MR_Integer) MR_tfield(0, MR_tempr5, 6) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(26) = (((MR_Integer) MR_tfield(0, MR_tempr5, 6) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(25) = ((MR_Integer) MR_tfield(0, MR_tempr5, 6) & (MR_Integer) 1);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(19) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(18) = (((MR_Integer) MR_tfield(0, MR_tempr6, 6) >> (MR_Integer) 12) & (MR_Integer) 7);
	MR_sv(17) = (((MR_Integer) MR_tfield(0, MR_tempr6, 6) >> (MR_Integer) 11) & (MR_Integer) 1);
	MR_sv(16) = (((MR_Integer) MR_tfield(0, MR_tempr6, 6) >> (MR_Integer) 10) & (MR_Integer) 1);
	MR_sv(15) = (((MR_Integer) MR_tfield(0, MR_tempr6, 6) >> (MR_Integer) 9) & (MR_Integer) 1);
	MR_sv(14) = (((MR_Integer) MR_tfield(0, MR_tempr6, 6) >> (MR_Integer) 8) & (MR_Integer) 1);
	MR_sv(13) = (((MR_Integer) MR_tfield(0, MR_tempr6, 6) >> (MR_Integer) 7) & (MR_Integer) 1);
	MR_sv(12) = (((MR_Integer) MR_tfield(0, MR_tempr6, 6) >> (MR_Integer) 6) & (MR_Integer) 1);
	MR_sv(11) = (((MR_Integer) MR_tfield(0, MR_tempr6, 6) >> (MR_Integer) 5) & (MR_Integer) 1);
	MR_sv(10) = (((MR_Integer) MR_tfield(0, MR_tempr6, 6) >> (MR_Integer) 4) & (MR_Integer) 1);
	MR_sv(9) = (((MR_Integer) MR_tfield(0, MR_tempr6, 6) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(8) = (((MR_Integer) MR_tfield(0, MR_tempr6, 6) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(7) = (((MR_Integer) MR_tfield(0, MR_tempr6, 6) >> (MR_Integer) 1) & (MR_Integer) 1);
	MR_sv(6) = ((MR_Integer) MR_tfield(0, MR_tempr6, 6) & (MR_Integer) 1);
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
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i9);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(21);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i13);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i17);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(23);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i21);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(24);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i25);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i29);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i33);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i37);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i41);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i45);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(30);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i49);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(31);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i53);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(32);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i57);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(33);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i61);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(34);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i65);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(35);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i69);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(36);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i73);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(37);
	MR_np_call_localret_ent(__Compare___libs__trace_params__trace_level_0_0,
		__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i77);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0_i225);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(38);
	MR_succip_word = MR_sv(39);
	MR_decr_sp(39);
	MR_np_tailcall_ent(__Compare___libs__globals__globals_0_0);
MR_def_label(__Compare___ll_backend__llds_out__llds_out_util__llds_out_info_0_0,225)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(39);
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
#ifdef MR_THREADSCOPE
void mercury__ll_backend__llds_out__llds_out_util__init_threadscope_string_table(void);
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
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__ll_backend__llds_out__llds_out_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__llds_out__llds_out_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__llds_out__llds_out_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
