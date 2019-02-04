/*
** Automatically generated from `x86_64_regs.m'
** by the Mercury compiler,
** version rotd-2011-09-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__x86_64_regs__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.x86_64_regs.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.x86_64_regs.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ll_backend.x86_64_regs.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ll_backend.x86_64_regs.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.x86_64_regs.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ll_backend.x86_64_regs.c"
#line 49 "ll_backend.x86_64_regs.c"
#include "ll_backend.x86_64_regs.mh"

#line 52 "ll_backend.x86_64_regs.c"
#line 53 "ll_backend.x86_64_regs.c"
#ifndef LL_BACKEND__X86_64_REGS_DECL_GUARD
#define LL_BACKEND__X86_64_REGS_DECL_GUARD

#line 57 "ll_backend.x86_64_regs.c"
#line 58 "ll_backend.x86_64_regs.c"

#endif
#line 61 "ll_backend.x86_64_regs.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__x86_64_regs__type_ctor_info_reg_locn_0,
	mercury_data_ll_backend__x86_64_regs__type_ctor_info_reg_map_0;
MR_decl_label7(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0, 3,6,7,8,9,10,4)
MR_decl_label2(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0, 3,2)
MR_decl_label2(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0, 3,2)
MR_decl_label5(fn__ll_backend__x86_64_regs__reg_map_init_1_0, 2,3,4,7,6)
MR_decl_label2(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0, 3,5)
MR_decl_label3(__Unify___ll_backend__x86_64_regs__reg_locn_0_0, 12,5,1)
MR_decl_label3(__Unify___ll_backend__x86_64_regs__reg_map_0_0, 4,8,1)
MR_decl_label5(__Compare___ll_backend__x86_64_regs__reg_locn_0_0, 3,2,19,7,5)
MR_decl_label4(__Compare___ll_backend__x86_64_regs__reg_map_0_0, 3,2,5,21)
MR_def_extern_entry(ll_backend__x86_64_regs__default_x86_64_reg_mapping_1_0)
MR_decl_static(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0)
MR_def_extern_entry(fn__ll_backend__x86_64_regs__reg_map_init_1_0)
MR_def_extern_entry(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0)
MR_def_extern_entry(ll_backend__x86_64_regs__reg_map_reset_scratch_reg_info_2_0)
MR_def_extern_entry(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0)
MR_def_extern_entry(fn__ll_backend__x86_64_regs__get_scratch_reg_0_0)
MR_def_extern_entry(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_regs__reg_locn_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_regs__reg_locn_0_0)
MR_def_extern_entry(__Unify___ll_backend__x86_64_regs__reg_map_0_0)
MR_def_extern_entry(__Compare___ll_backend__x86_64_regs__reg_map_0_0)

static const struct mercury_type_0 mercury_common_0[33] =
{
{
36
},
{
35
},
{
34
},
{
33
},
{
32
},
{
31
},
{
30
},
{
29
},
{
28
},
{
27
},
{
26
},
{
25
},
{
24
},
{
23
},
{
22
},
{
21
},
{
20
},
{
19
},
{
18
},
{
17
},
{
16
},
{
15
},
{
14
},
{
13
},
{
12
},
{
11
},
{
10
},
{
9
},
{
8
},
{
7
},
{
6
},
{
5
},
{
4
},
};

static const struct mercury_type_1 mercury_common_1[32] =
{
{
{
0,
32
}
},
{
{
0,
31
}
},
{
{
0,
30
}
},
{
{
0,
29
}
},
{
{
0,
28
}
},
{
{
0,
27
}
},
{
{
0,
26
}
},
{
{
0,
25
}
},
{
{
0,
24
}
},
{
{
0,
23
}
},
{
{
0,
22
}
},
{
{
0,
21
}
},
{
{
0,
20
}
},
{
{
0,
19
}
},
{
{
0,
18
}
},
{
{
0,
17
}
},
{
{
0,
16
}
},
{
{
0,
15
}
},
{
{
0,
14
}
},
{
{
0,
13
}
},
{
{
0,
12
}
},
{
{
0,
11
}
},
{
{
0,
10
}
},
{
{
0,
9
}
},
{
{
0,
8
}
},
{
{
0,
7
}
},
{
{
0,
6
}
},
{
{
0,
5
}
},
{
{
0,
4
}
},
{
{
0,
3
}
},
{
{
0,
2
}
},
{
{
0,
1
}
},
};

static const struct mercury_type_2 mercury_common_2[74] =
{
{
{
MR_TAG_COMMON(1,1,0),
MR_TAG_COMMON(1,0,0)
}
},
{
{
MR_TAG_COMMON(0,2,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,1,1),
MR_TAG_COMMON(1,0,1)
}
},
{
{
MR_TAG_COMMON(0,2,2),
MR_TAG_COMMON(1,2,1)
}
},
{
{
MR_TAG_COMMON(1,1,2),
MR_TAG_COMMON(1,0,2)
}
},
{
{
MR_TAG_COMMON(0,2,4),
MR_TAG_COMMON(1,2,3)
}
},
{
{
MR_TAG_COMMON(1,1,3),
MR_TAG_COMMON(1,0,3)
}
},
{
{
MR_TAG_COMMON(0,2,6),
MR_TAG_COMMON(1,2,5)
}
},
{
{
MR_TAG_COMMON(1,1,4),
MR_TAG_COMMON(1,0,4)
}
},
{
{
MR_TAG_COMMON(0,2,8),
MR_TAG_COMMON(1,2,7)
}
},
{
{
MR_TAG_COMMON(1,1,5),
MR_TAG_COMMON(1,0,5)
}
},
{
{
MR_TAG_COMMON(0,2,10),
MR_TAG_COMMON(1,2,9)
}
},
{
{
MR_TAG_COMMON(1,1,6),
MR_TAG_COMMON(1,0,6)
}
},
{
{
MR_TAG_COMMON(0,2,12),
MR_TAG_COMMON(1,2,11)
}
},
{
{
MR_TAG_COMMON(1,1,7),
MR_TAG_COMMON(1,0,7)
}
},
{
{
MR_TAG_COMMON(0,2,14),
MR_TAG_COMMON(1,2,13)
}
},
{
{
MR_TAG_COMMON(1,1,8),
MR_TAG_COMMON(1,0,8)
}
},
{
{
MR_TAG_COMMON(0,2,16),
MR_TAG_COMMON(1,2,15)
}
},
{
{
MR_TAG_COMMON(1,1,9),
MR_TAG_COMMON(1,0,9)
}
},
{
{
MR_TAG_COMMON(0,2,18),
MR_TAG_COMMON(1,2,17)
}
},
{
{
MR_TAG_COMMON(1,1,10),
MR_TAG_COMMON(1,0,10)
}
},
{
{
MR_TAG_COMMON(0,2,20),
MR_TAG_COMMON(1,2,19)
}
},
{
{
MR_TAG_COMMON(1,1,11),
MR_TAG_COMMON(1,0,11)
}
},
{
{
MR_TAG_COMMON(0,2,22),
MR_TAG_COMMON(1,2,21)
}
},
{
{
MR_TAG_COMMON(1,1,12),
MR_TAG_COMMON(1,0,12)
}
},
{
{
MR_TAG_COMMON(0,2,24),
MR_TAG_COMMON(1,2,23)
}
},
{
{
MR_TAG_COMMON(1,1,13),
MR_TAG_COMMON(1,0,13)
}
},
{
{
MR_TAG_COMMON(0,2,26),
MR_TAG_COMMON(1,2,25)
}
},
{
{
MR_TAG_COMMON(1,1,14),
MR_TAG_COMMON(1,0,14)
}
},
{
{
MR_TAG_COMMON(0,2,28),
MR_TAG_COMMON(1,2,27)
}
},
{
{
MR_TAG_COMMON(1,1,15),
MR_TAG_COMMON(1,0,15)
}
},
{
{
MR_TAG_COMMON(0,2,30),
MR_TAG_COMMON(1,2,29)
}
},
{
{
MR_TAG_COMMON(1,1,16),
MR_TAG_COMMON(1,0,16)
}
},
{
{
MR_TAG_COMMON(0,2,32),
MR_TAG_COMMON(1,2,31)
}
},
{
{
MR_TAG_COMMON(1,1,17),
MR_TAG_COMMON(1,0,17)
}
},
{
{
MR_TAG_COMMON(0,2,34),
MR_TAG_COMMON(1,2,33)
}
},
{
{
MR_TAG_COMMON(1,1,18),
MR_TAG_COMMON(1,0,18)
}
},
{
{
MR_TAG_COMMON(0,2,36),
MR_TAG_COMMON(1,2,35)
}
},
{
{
MR_TAG_COMMON(1,1,19),
MR_TAG_COMMON(1,0,19)
}
},
{
{
MR_TAG_COMMON(0,2,38),
MR_TAG_COMMON(1,2,37)
}
},
{
{
MR_TAG_COMMON(1,1,20),
MR_TAG_COMMON(1,0,20)
}
},
{
{
MR_TAG_COMMON(0,2,40),
MR_TAG_COMMON(1,2,39)
}
},
{
{
MR_TAG_COMMON(1,1,21),
MR_TAG_COMMON(1,0,21)
}
},
{
{
MR_TAG_COMMON(0,2,42),
MR_TAG_COMMON(1,2,41)
}
},
{
{
MR_TAG_COMMON(1,1,22),
MR_TAG_COMMON(1,0,22)
}
},
{
{
MR_TAG_COMMON(0,2,44),
MR_TAG_COMMON(1,2,43)
}
},
{
{
MR_TAG_COMMON(1,1,23),
MR_TAG_COMMON(1,0,23)
}
},
{
{
MR_TAG_COMMON(0,2,46),
MR_TAG_COMMON(1,2,45)
}
},
{
{
MR_TAG_COMMON(1,1,24),
MR_TAG_COMMON(1,0,24)
}
},
{
{
MR_TAG_COMMON(0,2,48),
MR_TAG_COMMON(1,2,47)
}
},
{
{
MR_TAG_COMMON(1,1,25),
MR_TAG_COMMON(1,0,25)
}
},
{
{
MR_TAG_COMMON(0,2,50),
MR_TAG_COMMON(1,2,49)
}
},
{
{
MR_TAG_COMMON(1,1,26),
MR_TAG_COMMON(1,0,26)
}
},
{
{
MR_TAG_COMMON(0,2,52),
MR_TAG_COMMON(1,2,51)
}
},
{
{
MR_tbmkword(0, 1),
MR_TAG_COMMON(1,0,27)
}
},
{
{
MR_TAG_COMMON(0,2,54),
MR_TAG_COMMON(1,2,53)
}
},
{
{
MR_tbmkword(0, 2),
MR_TAG_COMMON(1,0,28)
}
},
{
{
MR_TAG_COMMON(0,2,56),
MR_TAG_COMMON(1,2,55)
}
},
{
{
MR_TAG_COMMON(1,1,27),
MR_TAG_COMMON(1,0,29)
}
},
{
{
MR_TAG_COMMON(0,2,58),
MR_TAG_COMMON(1,2,57)
}
},
{
{
MR_TAG_COMMON(1,1,28),
MR_TAG_COMMON(1,0,30)
}
},
{
{
MR_TAG_COMMON(0,2,60),
MR_TAG_COMMON(1,2,59)
}
},
{
{
MR_tbmkword(0, 3),
MR_TAG_COMMON(1,0,31)
}
},
{
{
MR_TAG_COMMON(0,2,62),
MR_TAG_COMMON(1,2,61)
}
},
{
{
MR_TAG_COMMON(1,1,29),
MR_TAG_COMMON(1,0,32)
}
},
{
{
MR_TAG_COMMON(0,2,64),
MR_TAG_COMMON(1,2,63)
}
},
{
{
MR_TAG_COMMON(1,1,30),
MR_TAG_COMMON(0,0,21)
}
},
{
{
MR_TAG_COMMON(0,2,66),
MR_TAG_COMMON(1,2,65)
}
},
{
{
MR_TAG_COMMON(1,1,31),
MR_TAG_COMMON(0,0,22)
}
},
{
{
MR_TAG_COMMON(0,2,68),
MR_TAG_COMMON(1,2,67)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(0,0,23)
}
},
{
{
MR_TAG_COMMON(0,2,70),
MR_TAG_COMMON(1,2,69)
}
},
{
{
MR_tbmkword(0, 4),
MR_TAG_COMMON(0,0,24)
}
},
{
{
MR_TAG_COMMON(0,2,72),
MR_TAG_COMMON(1,2,71)
}
},
};

static const struct mercury_type_3 mercury_common_3[3] =
{
{
11,
MR_tbmkword(0, 0)
},
{
10,
MR_TAG_COMMON(1,3,0)
},
{
9,
MR_TAG_COMMON(1,3,1)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_regs__field_types_reg_locn_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_0 = {
	"actual",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_regs__field_types_reg_locn_0_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_regs__field_types_reg_locn_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_1 = {
	"virtual",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_regs__field_types_reg_locn_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_regs__du_stag_ordered_reg_locn_0_0[] = {
	&mercury_data_ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_0

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_regs__du_stag_ordered_reg_locn_0_1[] = {
	&mercury_data_ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_1

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_regs__du_ptag_ordered_reg_locn_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_regs__du_stag_ordered_reg_locn_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_regs__du_stag_ordered_reg_locn_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_regs__du_name_ordered_reg_locn_0[] = {
	&mercury_data_ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_0,
	&mercury_data_ll_backend__x86_64_regs__du_functor_desc_reg_locn_0_1
};

const MR_Integer mercury_data_ll_backend__x86_64_regs__functor_number_map_reg_locn_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_regs__type_ctor_info_reg_locn_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_regs__reg_locn_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_regs__reg_locn_0_0)),
	"ll_backend.x86_64_regs",
	"reg_locn",
	{ (void *)mercury_data_ll_backend__x86_64_regs__du_name_ordered_reg_locn_0 },
	{ (void *)mercury_data_ll_backend__x86_64_regs__du_ptag_ordered_reg_locn_0 },
	2,
	4,
	mercury_data_ll_backend__x86_64_regs__functor_number_map_reg_locn_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_lval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_regs__type_ctor_info_reg_locn_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__x86_64_regs__type_ctor_info_reg_locn_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_lval_0,
	(MR_TypeInfo) &mercury_data_ll_backend__x86_64_regs__type_ctor_info_reg_locn_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__x86_64_regs__field_types_reg_map_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_reg_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_lval_0ll_backend__x86_64_regs__type_ctor_info_reg_locn_0
};

const MR_ConstString mercury_data_ll_backend__x86_64_regs__field_names_reg_map_0_0[] = {
	"scratch_reg_info",
	"lval_reg_map"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__x86_64_regs__du_functor_desc_reg_map_0_0 = {
	"reg_map",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__x86_64_regs__field_types_reg_map_0_0,
	mercury_data_ll_backend__x86_64_regs__field_names_reg_map_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_regs__du_stag_ordered_reg_map_0_0[] = {
	&mercury_data_ll_backend__x86_64_regs__du_functor_desc_reg_map_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__x86_64_regs__du_ptag_ordered_reg_map_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__x86_64_regs__du_stag_ordered_reg_map_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__x86_64_regs__du_name_ordered_reg_map_0[] = {
	&mercury_data_ll_backend__x86_64_regs__du_functor_desc_reg_map_0_0
};

const MR_Integer mercury_data_ll_backend__x86_64_regs__functor_number_map_reg_map_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__x86_64_regs__type_ctor_info_reg_map_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__x86_64_regs__reg_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__x86_64_regs__reg_map_0_0)),
	"ll_backend.x86_64_regs",
	"reg_map",
	{ (void *)mercury_data_ll_backend__x86_64_regs__du_name_ordered_reg_map_0 },
	{ (void *)mercury_data_ll_backend__x86_64_regs__du_ptag_ordered_reg_map_0 },
	1,
	4,
	mercury_data_ll_backend__x86_64_regs__functor_number_map_reg_map_0
};




MR_BEGIN_MODULE(ll_backend__x86_64_regs_module0)
	MR_init_entry1(ll_backend__x86_64_regs__default_x86_64_reg_mapping_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_regs__default_x86_64_reg_mapping_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_x86_64_reg_mapping'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__x86_64_regs__default_x86_64_reg_mapping_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,2,73);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_regs_module1)
	MR_init_entry1(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0);
	MR_init_label7(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0,3,6,7,8,9,10,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_if_all_mvm_registers'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0_i3);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0_i6);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0);
MR_def_label(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0);
MR_def_label(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0);
MR_def_label(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0_i9);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0);
MR_def_label(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0_i10);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0);
MR_def_label(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0_i4);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localtailcall(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0);
	}
MR_def_label(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);
MR_decl_entry(assoc_list__keys_2_0);
MR_decl_entry(map__det_insert_from_assoc_list_3_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__x86_64_regs_module2)
	MR_init_entry1(fn__ll_backend__x86_64_regs__reg_map_init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__x86_64_regs__reg_map_init_1_0);
	MR_init_label5(fn__ll_backend__x86_64_regs__reg_map_init_1_0,2,3,4,7,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reg_map_init'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__x86_64_regs__reg_map_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_regs, reg_locn);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(map__init_1_0,
		fn__ll_backend__x86_64_regs__reg_map_init_1_0_i2);
MR_def_label(fn__ll_backend__x86_64_regs__reg_map_init_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		fn__ll_backend__x86_64_regs__reg_map_init_1_0_i3);
MR_def_label(fn__ll_backend__x86_64_regs__reg_map_init_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__x86_64_regs__check_if_all_mvm_registers_2_0,
		fn__ll_backend__x86_64_regs__reg_map_init_1_0_i4);
MR_def_label(fn__ll_backend__x86_64_regs__reg_map_init_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__ll_backend__x86_64_regs__reg_map_init_1_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__det_insert_from_assoc_list_3_0,
		fn__ll_backend__x86_64_regs__reg_map_init_1_0_i7);
MR_def_label(fn__ll_backend__x86_64_regs__reg_map_init_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__ll_backend__x86_64_regs__reg_map_init_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_regs", 22);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.x86_64_regs.reg_map_init\'/1", 48);
	MR_r3 = (MR_Word) MR_string_const("non-MVM register found in the association list", 46);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(ll_backend__x86_64_regs_module3)
	MR_init_entry1(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0);
	MR_init_label2(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reg_map_lookup_reg_locn'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((((((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 2)) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 8))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 2))) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 3))) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 1))) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 5))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 1))) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 4))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 0))) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_regs, reg_locn);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(map__lookup_3_0);
	}
MR_def_label(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 10)) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 9))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 1))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 7))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 6))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 5))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 4))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 3))))) {
		MR_GOTO_LAB(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_regs", 22);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.x86_64_regs.reg_map_lookup_reg_locn\'/2", 59);
	MR_r3 = (MR_Word) MR_string_const("lval is not a virtual machine register", 38);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_regs", 22);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.x86_64_regs.reg_map_lookup_reg_locn\'/2", 59);
	MR_r3 = (MR_Word) MR_string_const("lvar", 4);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_regs_module4)
	MR_init_entry1(ll_backend__x86_64_regs__reg_map_reset_scratch_reg_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_regs__reg_map_reset_scratch_reg_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reg_map_reset_scratch_reg_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__x86_64_regs__reg_map_reset_scratch_reg_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__index0_3_0);

MR_BEGIN_MODULE(ll_backend__x86_64_regs_module5)
	MR_init_entry1(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0);
	MR_init_label2(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reg_map_get_scratch_reg'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_reg);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__index0_3_0,
		fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0_i3);
MR_def_label(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_regs", 22);
	MR_r2 = (MR_Word) MR_string_const("function \140ll_backend.x86_64_regs.reg_map_get_scratch_reg\'/1", 59);
	MR_r3 = (MR_Word) MR_string_const("scratch registers exhausted", 27);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_regs_module6)
	MR_init_entry1(fn__ll_backend__x86_64_regs__get_scratch_reg_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__x86_64_regs__get_scratch_reg_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_scratch_reg'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__ll_backend__x86_64_regs__get_scratch_reg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__drop_3_0);

MR_BEGIN_MODULE(ll_backend__x86_64_regs_module7)
	MR_init_entry1(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0);
	MR_init_label2(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reg_map_remove_scratch_reg'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_reg);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(list__drop_3_0,
		ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0_i3);
MR_def_label(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_sv(1), 1);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.x86_64_regs", 22);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.x86_64_regs.reg_map_remove_scratch_reg\'/2", 63);
	MR_r3 = (MR_Word) MR_string_const("scratch registers exhausted", 27);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__x86_64_regs_module8)
	MR_init_entry1(__Unify___ll_backend__x86_64_regs__reg_locn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_regs__reg_locn_0_0);
	MR_init_label3(__Unify___ll_backend__x86_64_regs__reg_locn_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_regs__reg_locn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_regs__reg_locn_0_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_regs__reg_locn_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_regs__reg_locn_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__x86_64_regs__reg_locn_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_regs__reg_locn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_regs__reg_locn_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_regs__reg_locn_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ll_backend__x86_64_regs_module9)
	MR_init_entry1(__Compare___ll_backend__x86_64_regs__reg_locn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_regs__reg_locn_0_0);
	MR_init_label5(__Compare___ll_backend__x86_64_regs__reg_locn_0_0,3,2,19,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_regs__reg_locn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_regs__reg_locn_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_regs__reg_locn_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_regs__reg_locn_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_regs__reg_locn_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_regs__reg_locn_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_regs__reg_locn_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__x86_64_regs__reg_locn_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ll_backend__x86_64_regs__reg_locn_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ll_backend__x86_64_regs__reg_locn_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_regs__reg_locn_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__x86_64_regs_module10)
	MR_init_entry1(__Unify___ll_backend__x86_64_regs__reg_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__x86_64_regs__reg_map_0_0);
	MR_init_label3(__Unify___ll_backend__x86_64_regs__reg_map_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ll_backend__x86_64_regs__reg_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_regs__reg_map_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_reg);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__x86_64_regs__reg_map_0_0_i4);
MR_def_label(__Unify___ll_backend__x86_64_regs__reg_map_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__x86_64_regs__reg_map_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_regs, reg_locn);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___ll_backend__x86_64_regs__reg_map_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__x86_64_regs__reg_map_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__x86_64_regs_module11)
	MR_init_entry1(__Compare___ll_backend__x86_64_regs__reg_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__x86_64_regs__reg_map_0_0);
	MR_init_label4(__Compare___ll_backend__x86_64_regs__reg_map_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ll_backend__x86_64_regs__reg_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_regs__reg_map_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__x86_64_regs__reg_map_0_0_i2);
MR_def_label(__Compare___ll_backend__x86_64_regs__reg_map_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__x86_64_regs__reg_map_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_instrs, x86_64_reg);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__x86_64_regs__reg_map_0_0_i5);
MR_def_label(__Compare___ll_backend__x86_64_regs__reg_map_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__x86_64_regs__reg_map_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, lval);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__x86_64_regs, reg_locn);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___ll_backend__x86_64_regs__reg_map_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__x86_64_regs_maybe_bunch_0(void)
{
	ll_backend__x86_64_regs_module0();
	ll_backend__x86_64_regs_module1();
	ll_backend__x86_64_regs_module2();
	ll_backend__x86_64_regs_module3();
	ll_backend__x86_64_regs_module4();
	ll_backend__x86_64_regs_module5();
	ll_backend__x86_64_regs_module6();
	ll_backend__x86_64_regs_module7();
	ll_backend__x86_64_regs_module8();
	ll_backend__x86_64_regs_module9();
	ll_backend__x86_64_regs_module10();
	ll_backend__x86_64_regs_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__x86_64_regs__init(void);
void mercury__ll_backend__x86_64_regs__init_type_tables(void);
void mercury__ll_backend__x86_64_regs__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__x86_64_regs__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__x86_64_regs__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__x86_64_regs__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__x86_64_regs__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__x86_64_regs_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_regs__type_ctor_info_reg_locn_0,
		ll_backend__x86_64_regs__reg_locn_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__x86_64_regs__type_ctor_info_reg_map_0,
		ll_backend__x86_64_regs__reg_map_0_0);
	mercury__ll_backend__x86_64_regs__init_debugger();
}

void mercury__ll_backend__x86_64_regs__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_regs__type_ctor_info_reg_locn_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__x86_64_regs__type_ctor_info_reg_map_0);
	}
}


void mercury__ll_backend__x86_64_regs__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__x86_64_regs__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__x86_64_regs);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__x86_64_regs__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__x86_64_regs__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
