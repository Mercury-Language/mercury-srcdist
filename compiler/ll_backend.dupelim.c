/*
** Automatically generated from `dupelim.m'
** by the Mercury compiler,
** version rotd-2011-08-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__dupelim__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ll_backend.dupelim.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ll_backend.dupelim.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ll_backend.dupelim.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ll_backend.dupelim.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ll_backend.dupelim.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ll_backend.dupelim.c"
#line 49 "ll_backend.dupelim.c"
#include "ll_backend.dupelim.mh"

#line 52 "ll_backend.dupelim.c"
#line 53 "ll_backend.dupelim.c"
#ifndef LL_BACKEND__DUPELIM_DECL_GUARD
#define LL_BACKEND__DUPELIM_DECL_GUARD

#line 57 "ll_backend.dupelim.c"
#line 58 "ll_backend.dupelim.c"

#endif
#line 61 "ll_backend.dupelim.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__dupelim__type_ctor_info_cluster_0,
	mercury_data_ll_backend__dupelim__type_ctor_info_std_map_0;
MR_decl_label6(ll_backend__dupelim__add_pragma_pref_labels_3_0, 5,4,7,10,2,40)
MR_decl_label10(ll_backend__dupelim__dupelim_build_maps_6_0, 61,3,4,6,37,8,7,16,13,23)
MR_decl_label5(ll_backend__dupelim__dupelim_build_maps_6_0, 5,25,27,30,33)
MR_decl_label10(ll_backend__dupelim__dupelim_main_5_0, 2,5,6,7,8,9,11,12,13,14)
MR_decl_label2(ll_backend__dupelim__dupelim_main_5_0, 15,16)
MR_decl_label6(ll_backend__dupelim__find_clusters_4_0, 40,3,9,12,4,5)
MR_decl_label10(ll_backend__dupelim__most_specific_block_6_0, 3,5,9,4,15,2,20,24,19,30)
MR_decl_label5(ll_backend__dupelim__most_specific_block_6_0, 17,32,34,35,1)
MR_decl_label10(ll_backend__dupelim__most_specific_instr_3_0, 175,3,7,9,4,17,14,25,27,22)
MR_decl_label10(ll_backend__dupelim__most_specific_instr_3_0, 35,37,39,41,43,46,49,45,53,56)
MR_decl_label10(ll_backend__dupelim__most_specific_instr_3_0, 59,63,52,32,73,75,70,83,80,91)
MR_decl_label10(ll_backend__dupelim__most_specific_instr_3_0, 88,99,96,107,104,114,116,118,120,122)
MR_decl_label10(ll_backend__dupelim__most_specific_instr_3_0, 111,130,132,127,140,137,148,145,156,153)
MR_decl_label4(ll_backend__dupelim__most_specific_instr_3_0, 164,166,161,171)
MR_decl_label10(ll_backend__dupelim__most_specific_instrs_3_0, 122,6,8,12,5,15,2,24,27,1)
MR_decl_label9(ll_backend__dupelim__most_specific_lval_3_0, 4,3,8,10,13,12,6,2,1)
MR_decl_label10(ll_backend__dupelim__most_specific_rval_3_0, 5,7,9,3,13,12,17,15,22,20)
MR_decl_label2(ll_backend__dupelim__most_specific_rval_3_0, 2,1)
MR_decl_label6(ll_backend__dupelim__process_clusters_7_0, 15,3,4,6,7,9)
MR_decl_label8(ll_backend__dupelim__process_elim_labels_11_0, 24,3,4,6,8,10,11,7)
MR_decl_label10(ll_backend__dupelim__standardize_instr_2_0, 4,5,3,8,7,11,10,14,15,17)
MR_decl_label10(ll_backend__dupelim__standardize_instr_2_0, 18,16,21,23,25,28,13,33,32,36)
MR_decl_label10(ll_backend__dupelim__standardize_instr_2_0, 35,39,40,38,43,42,46,45,49,48)
MR_decl_label10(ll_backend__dupelim__standardize_instr_2_0, 52,53,54,51,57,56,60,59,63,62)
MR_decl_label6(ll_backend__dupelim__standardize_instr_2_0, 66,65,69,68,72,231)
MR_decl_label4(ll_backend__dupelim__standardize_instrs_2_0, 27,4,5,6)
MR_decl_label2(ll_backend__dupelim__standardize_lval_2_0, 4,24)
MR_decl_label8(ll_backend__dupelim__standardize_rval_2_0, 4,5,3,9,8,12,11,35)
MR_decl_label3(__Unify___ll_backend__dupelim__cluster_0_0, 4,8,1)
MR_decl_label4(__Compare___ll_backend__dupelim__cluster_0_0, 3,2,5,21)
MR_decl_static(ll_backend__dupelim__standardize_lval_2_0)
MR_decl_static(ll_backend__dupelim__standardize_rval_2_0)
MR_decl_static(ll_backend__dupelim__standardize_instr_2_0)
MR_decl_static(ll_backend__dupelim__standardize_instrs_2_0)
MR_decl_static(ll_backend__dupelim__dupelim_build_maps_6_0)
MR_decl_static(ll_backend__dupelim__find_clusters_4_0)
MR_decl_static(ll_backend__dupelim__most_specific_lval_3_0)
MR_decl_static(ll_backend__dupelim__most_specific_rval_3_0)
MR_decl_static(ll_backend__dupelim__most_specific_instr_3_0)
MR_decl_static(ll_backend__dupelim__most_specific_instrs_3_0)
MR_decl_static(ll_backend__dupelim__most_specific_block_6_0)
MR_decl_static(ll_backend__dupelim__process_elim_labels_11_0)
MR_decl_static(ll_backend__dupelim__process_clusters_7_0)
MR_def_extern_entry(ll_backend__dupelim__dupelim_main_5_0)
MR_decl_static(ll_backend__dupelim__add_pragma_pref_labels_3_0)
MR_decl_static(__Unify___ll_backend__dupelim__cluster_0_0)
MR_decl_static(__Compare___ll_backend__dupelim__cluster_0_0)
MR_decl_static(__Unify___ll_backend__dupelim__std_map_0_0)
MR_decl_static(__Compare___ll_backend__dupelim__std_map_0_0)
MR_decl_static(ll_backend__dupelim__IntroducedFrom__pred__find_clusters__214__1_2_0)
MR_decl_static(ll_backend__dupelim__IntroducedFrom__pred__process_clusters__251__1_2_0)
MR_decl_static(ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__283__1_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, instr)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dupelim__dupelim_build_maps_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dupelim__dupelim_build_maps_6_0_2;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__dupelim__dupelim_build_maps_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ll_backend__llds, instruction),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__dupelim__dupelim_build_maps_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ll_backend__llds, instruction),
MR_COMMON(0,1),
MR_COMMON(0,1)
}
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(ll_backend__dupelim__add_pragma_pref_labels_3_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(ll_backend__dupelim__add_pragma_pref_labels_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dupelim__find_clusters_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dupelim__process_elim_labels_11_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dupelim__process_clusters_7_0_1;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__dupelim__find_clusters_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__dupelim__process_elim_labels_11_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__dupelim__process_clusters_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ll_backend__llds, label),
MR_CTOR0_ADDR(ll_backend__llds, label)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__dupelim__field_types_cluster_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_label_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_label_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__dupelim__du_functor_desc_cluster_0_0 = {
	"cluster",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__dupelim__field_types_cluster_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__dupelim__du_stag_ordered_cluster_0_0[] = {
	&mercury_data_ll_backend__dupelim__du_functor_desc_cluster_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__dupelim__du_ptag_ordered_cluster_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__dupelim__du_stag_ordered_cluster_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__dupelim__du_name_ordered_cluster_0[] = {
	&mercury_data_ll_backend__dupelim__du_functor_desc_cluster_0_0
};

const MR_Integer mercury_data_ll_backend__dupelim__functor_number_map_cluster_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__dupelim__type_ctor_info_cluster_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__dupelim__cluster_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__dupelim__cluster_0_0)),
	"ll_backend.dupelim",
	"cluster",
	{ (void *)mercury_data_ll_backend__dupelim__du_name_ordered_cluster_0 },
	{ (void *)mercury_data_ll_backend__dupelim__du_ptag_ordered_cluster_0 },
	1,
	4,
	mercury_data_ll_backend__dupelim__functor_number_map_cluster_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instr_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2list__ti_list_1ll_backend__llds__type_ctor_info_instr_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instr_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_label_0
}};

const MR_TypeCtorInfo_Struct mercury_data_ll_backend__dupelim__type_ctor_info_std_map_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__dupelim__std_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__dupelim__std_map_0_0)),
	"ll_backend.dupelim",
	"std_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2list__ti_list_1ll_backend__llds__type_ctor_info_instr_0list__ti_list_1ll_backend__llds__type_ctor_info_label_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dupelim__process_clusters_7_0_1 = {
{
MR_PREDICATE,
"ll_backend.dupelim",
"ll_backend.dupelim",
"lambda_dupelim_m_251",
2,
0
},
"ll_backend.dupelim",
"dupelim.m",
251,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dupelim__process_elim_labels_11_0_1 = {
{
MR_PREDICATE,
"ll_backend.dupelim",
"ll_backend.dupelim",
"lambda_dupelim_m_283",
2,
0
},
"ll_backend.dupelim",
"dupelim.m",
283,
"30"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dupelim__find_clusters_4_0_1 = {
{
MR_PREDICATE,
"ll_backend.dupelim",
"ll_backend.dupelim",
"lambda_dupelim_m_214",
2,
0
},
"ll_backend.dupelim",
"dupelim.m",
214,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dupelim__dupelim_build_maps_6_0_2 = {
{
MR_PREDICATE,
"ll_backend.dupelim",
"ll_backend.dupelim",
"add_pragma_pref_labels",
3,
0
},
"ll_backend.dupelim",
"dupelim.m",
143,
"42"
};

static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__dupelim__dupelim_build_maps_6_0_1 = {
{
MR_PREDICATE,
"ll_backend.dupelim",
"ll_backend.dupelim",
"add_pragma_pref_labels",
3,
0
},
"ll_backend.dupelim",
"dupelim.m",
143,
"42"
};


MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__dupelim_module0)
	MR_init_entry1(ll_backend__dupelim__standardize_lval_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__standardize_lval_2_0);
	MR_init_label2(ll_backend__dupelim__standardize_lval_2_0,4,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'standardize_lval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__standardize_lval_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 2)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 2))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 10))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 3))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 1))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 9))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 5))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 1))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 7))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 6))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 5))) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 4))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 0))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 4))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 0))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 3))) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 2)))) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_lval_2_0_i24);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_lval_2_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 2) = MR_tfield(3, MR_r1, 2);
	MR_tfield(3, MR_r2, 3) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__dupelim__standardize_lval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.dupelim", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.dupelim.standardize_lval\'/2", 49);
	MR_r3 = (MR_Word) MR_string_const("lvar", 4);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__dupelim__standardize_lval_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupelim_module1)
	MR_init_entry1(ll_backend__dupelim__standardize_rval_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__standardize_rval_2_0);
	MR_init_label8(ll_backend__dupelim__standardize_rval_2_0,4,5,3,9,8,12,11,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'standardize_rval'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__standardize_rval_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_rval_2_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(2) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_rval_2_0_i4);
MR_def_label(ll_backend__dupelim__standardize_rval_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_rval_2_0_i5);
MR_def_label(ll_backend__dupelim__standardize_rval_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_sv(2);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__dupelim__standardize_rval_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 0)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 3))) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 2)))) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_rval_2_0_i35);
	}
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_rval_2_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_rval_2_0_i9);
MR_def_label(ll_backend__dupelim__standardize_rval_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__dupelim__standardize_rval_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_rval_2_0_i11);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_localcall_lab(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_rval_2_0_i12);
MR_def_label(ll_backend__dupelim__standardize_rval_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(ll_backend__dupelim__standardize_rval_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.dupelim", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.dupelim.standardize_rval\'/2", 49);
	MR_r3 = (MR_Word) MR_string_const("var", 3);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ll_backend__dupelim__standardize_rval_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupelim_module2)
	MR_init_entry1(ll_backend__dupelim__standardize_instr_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__standardize_instr_2_0);
	MR_init_label10(ll_backend__dupelim__standardize_instr_2_0,4,5,3,8,7,11,10,14,15,17)
	MR_init_label10(ll_backend__dupelim__standardize_instr_2_0,18,16,21,23,25,28,13,33,32,36)
	MR_init_label10(ll_backend__dupelim__standardize_instr_2_0,35,39,40,38,43,42,46,45,49,48)
	MR_init_label10(ll_backend__dupelim__standardize_instr_2_0,52,53,54,51,57,56,60,59,63,62)
	MR_init_label6(ll_backend__dupelim__standardize_instr_2_0,66,65,69,68,72,231)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'standardize_instr'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__standardize_instr_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i4);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i5);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i7);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i8);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i10);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i11);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tfield(3, MR_r2, 2) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i13);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(3, MR_r1, 2);
	MR_sv(5) = MR_tfield(3, MR_r1, 3);
	MR_sv(3) = MR_tfield(3, MR_r1, 5);
	MR_sv(4) = MR_tfield(3, MR_r1, 6);
	MR_sv(1) = MR_tfield(3, MR_r1, 7);
	MR_sv(2) = MR_tfield(3, MR_r1, 8);
	MR_sv(7) = MR_tfield(3, MR_r1, 4);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i14);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i15);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i17);
	}
	MR_sv(8) = MR_r1;
	MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i16);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i18);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r1;
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 9);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_r1, 1) = MR_sv(7);
	MR_tfield(3, MR_r1, 2) = MR_sv(6);
	MR_tfield(3, MR_r1, 3) = MR_sv(5);
	MR_tfield(3, MR_r1, 4) = MR_sv(8);
	MR_tfield(3, MR_r1, 5) = MR_sv(3);
	MR_tfield(3, MR_r1, 6) = MR_sv(4);
	MR_tfield(3, MR_r1, 7) = MR_sv(1);
	MR_tfield(3, MR_r1, 8) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i23);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i25);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 9);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_r1, 1) = MR_sv(7);
	MR_tfield(3, MR_r1, 2) = MR_sv(6);
	MR_tfield(3, MR_r1, 3) = MR_sv(5);
	MR_tfield(3, MR_r1, 4) = MR_sv(8);
	MR_tfield(3, MR_r1, 5) = MR_sv(3);
	MR_tfield(3, MR_r1, 6) = MR_sv(4);
	MR_tfield(3, MR_r1, 7) = MR_sv(1);
	MR_tfield(3, MR_r1, 8) = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i28);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 9);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_r1, 1) = MR_sv(7);
	MR_tfield(3, MR_r1, 2) = MR_sv(6);
	MR_tfield(3, MR_r1, 3) = MR_sv(5);
	MR_tfield(3, MR_r1, 4) = MR_sv(8);
	MR_tfield(3, MR_r1, 5) = MR_sv(3);
	MR_tfield(3, MR_r1, 6) = MR_sv(4);
	MR_tfield(3, MR_r1, 7) = MR_sv(1);
	MR_tfield(3, MR_r1, 8) = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,28)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i32);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(3, MR_r1, 2);
	MR_sv(5) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i33);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 28;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tfield(3, MR_r2, 2) = MR_sv(6);
	MR_tfield(3, MR_r2, 3) = MR_sv(5);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,30)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i35);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i36);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 30;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tfield(3, MR_r2, 2) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i38);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i39);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i40);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i42);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i43);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i45);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i46);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i48);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i49);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i51);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(3, MR_r1, 1);
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_sv(3) = MR_tfield(3, MR_r1, 4);
	MR_sv(4) = MR_tfield(3, MR_r1, 5);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i52);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i53);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i54);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 6);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_tfield(3, MR_r2, 2) = MR_sv(5);
	MR_tfield(3, MR_r2, 3) = MR_sv(3);
	MR_tfield(3, MR_r2, 4) = MR_sv(4);
	MR_tfield(3, MR_r2, 5) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i56);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(3, MR_r1, 1);
	MR_sv(5) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 3);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i57);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_r2, 1) = MR_sv(6);
	MR_tfield(3, MR_r2, 2) = MR_sv(5);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i59);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i60);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_tfield(3, MR_r2, 2) = MR_sv(6);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i62);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_rval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i63);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i65);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i66);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 11;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i68);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i69);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instr_2_0_i231);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_lval_2_0,
		ll_backend__dupelim__standardize_instr_2_0_i72);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__standardize_instr_2_0,231)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupelim_module3)
	MR_init_entry1(ll_backend__dupelim__standardize_instrs_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__standardize_instrs_2_0);
	MR_init_label4(ll_backend__dupelim__standardize_instrs_2_0,27,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'standardize_instrs'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__standardize_instrs_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instrs_2_0_i27);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__dupelim__standardize_instrs_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_np_localcall_lab(ll_backend__dupelim__standardize_instrs_2_0,
		ll_backend__dupelim__standardize_instrs_2_0_i4);
MR_def_label(ll_backend__dupelim__standardize_instrs_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_instr_2_0,
		ll_backend__dupelim__standardize_instrs_2_0_i5);
MR_def_label(ll_backend__dupelim__standardize_instrs_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__dupelim__standardize_instrs_2_0_i6);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ll_backend__dupelim__standardize_instrs_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_sv(1);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__basic_block__type_ctor_info_block_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(map__det_insert_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(ll_backend__dupelim_module4)
	MR_init_entry1(ll_backend__dupelim__dupelim_build_maps_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__dupelim_build_maps_6_0);
	MR_init_label10(ll_backend__dupelim__dupelim_build_maps_6_0,61,3,4,6,37,8,7,16,13,23)
	MR_init_label5(ll_backend__dupelim__dupelim_build_maps_6_0,5,25,27,30,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dupelim_build_maps'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__dupelim_build_maps_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__dupelim_build_maps_6_0_i3);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(12);
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__dupelim__dupelim_build_maps_6_0_i4);
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_r1, 6);
	MR_r2 = MR_tfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	if (MR_INT_GE(MR_tempr1,10)) {
		MR_GOTO_LAB(ll_backend__dupelim__dupelim_build_maps_6_0_i5);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__dupelim__standardize_instrs_2_0,
		ll_backend__dupelim__dupelim_build_maps_6_0_i6);
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__dupelim_build_maps_6_0_i8);
	}
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_r4 = MR_r1;
	MR_GOTO_LAB(ll_backend__dupelim__dupelim_build_maps_6_0_i7);
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_sv(6), 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instr);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__dupelim__dupelim_build_maps_6_0_i37);
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_sv(9);
	MR_sv(8) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_np_call_localret_ent(map__search_3_0,
		ll_backend__dupelim__dupelim_build_maps_6_0_i16);
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__dupelim_build_maps_6_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__dupelim__dupelim_build_maps_6_0_i23);
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_LIST_CTOR_ADDR;
	MR_tfield(0, MR_r2, 1) = MR_sv(9);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__dupelim__dupelim_build_maps_6_0_i23);
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_sv(8) = MR_r1;
	MR_GOTO_LAB(ll_backend__dupelim__dupelim_build_maps_6_0_i25);
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_r4 = MR_r2;
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__dupelim_build_maps_6_0_i27);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r2, 1) = MR_sv(9);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__foldl_4_0,
		ll_backend__dupelim__dupelim_build_maps_6_0_i33);
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r4;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tfield(1, MR_sv(6), 0);
	MR_r3 = MR_r5;
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__dupelim__dupelim_build_maps_6_0_i30);
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_CTOR1_ADDR(set_ordlist, set_ordlist);
	MR_tfield(0, MR_r2, 1) = MR_sv(9);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__foldl_4_0,
		ll_backend__dupelim__dupelim_build_maps_6_0_i33);
MR_def_label(ll_backend__dupelim__dupelim_build_maps_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ll_backend__dupelim__dupelim_build_maps_6_0_i61);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(ll_backend__dupelim_module5)
	MR_init_entry1(ll_backend__dupelim__find_clusters_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__find_clusters_4_0);
	MR_init_label6(ll_backend__dupelim__find_clusters_4_0,40,3,9,12,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_clusters'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__find_clusters_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ll_backend__dupelim__find_clusters_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__find_clusters_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(4);
MR_def_label(ll_backend__dupelim__find_clusters_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__find_clusters_4_0_i5);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__find_clusters_4_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__dupelim__IntroducedFrom__pred__find_clusters__214__1_2_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_r2;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_4_0,
		ll_backend__dupelim__find_clusters_4_0_i9);
MR_def_label(ll_backend__dupelim__find_clusters_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__find_clusters_4_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__find_clusters_4_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(1, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__dupelim__find_clusters_4_0_i40);
	}
MR_def_label(ll_backend__dupelim__find_clusters_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__dupelim__find_clusters_4_0_i40);
	}
MR_def_label(ll_backend__dupelim__find_clusters_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(ll_backend__dupelim__find_clusters_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ll_backend__dupelim__find_clusters_4_0_i40);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__lval_0_0);
MR_decl_entry(__Unify___ll_backend__llds__rval_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(ll_backend__dupelim_module6)
	MR_init_entry1(ll_backend__dupelim__most_specific_lval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__most_specific_lval_3_0);
	MR_init_label9(ll_backend__dupelim__most_specific_lval_3_0,4,3,8,10,13,12,6,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'most_specific_lval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__most_specific_lval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (!(((((((((((((((((((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 2)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 2))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 3))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 1))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 9))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 5))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 1))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 7))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 6))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 5))) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 1))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 4))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 0))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 4))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 0))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 3))) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_lval_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(__Unify___ll_backend__llds__lval_0_0,
		ll_backend__dupelim__most_specific_lval_3_0_i4);
MR_def_label(ll_backend__dupelim__most_specific_lval_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_lval_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__dupelim__most_specific_lval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_lval_3_0_i6);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_lval_3_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r1, 1);
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_sv(4) = MR_tfield(3, MR_r1, 3);
	MR_sv(5) = MR_tfield(3, MR_r2, 1);
	MR_sv(6) = MR_tfield(3, MR_r2, 3);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		ll_backend__dupelim__most_specific_lval_3_0_i8);
MR_def_label(ll_backend__dupelim__most_specific_lval_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_lval_3_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		ll_backend__dupelim__most_specific_lval_3_0_i10);
MR_def_label(ll_backend__dupelim__most_specific_lval_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_lval_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		ll_backend__dupelim__most_specific_lval_3_0_i13);
MR_def_label(ll_backend__dupelim__most_specific_lval_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_lval_3_0_i12);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__dupelim__most_specific_lval_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_r2, 2) = MR_sv(3);
	MR_tfield(3, MR_r2, 3) = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__dupelim__most_specific_lval_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_lval_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_string_const("ll_backend.dupelim", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.dupelim.most_specific_lval\'/3", 51);
	MR_r3 = (MR_Word) MR_string_const("lvar", 4);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__dupelim__most_specific_lval_3_0_i2);
MR_def_label(ll_backend__dupelim__most_specific_lval_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__dupelim__most_specific_lval_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___backend_libs__builtin_ops__binary_op_0_0);

MR_BEGIN_MODULE(ll_backend__dupelim_module7)
	MR_init_entry1(ll_backend__dupelim__most_specific_rval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__most_specific_rval_3_0);
	MR_init_label10(ll_backend__dupelim__most_specific_rval_3_0,5,7,9,3,13,12,17,15,22,20)
	MR_init_label2(ll_backend__dupelim__most_specific_rval_3_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'most_specific_rval'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__most_specific_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i3);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i1);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(5) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r2, 3);
	MR_sv(3) = MR_tfield(3, MR_r1, 2);
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___backend_libs__builtin_ops__binary_op_0_0,
		ll_backend__dupelim__most_specific_rval_3_0_i5);
MR_def_label(ll_backend__dupelim__most_specific_rval_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_np_localcall_lab(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_rval_3_0_i7);
MR_def_label(ll_backend__dupelim__most_specific_rval_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_rval_3_0_i9);
MR_def_label(ll_backend__dupelim__most_specific_rval_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__dupelim__most_specific_rval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 0)) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 3))) || (MR_tag(MR_r1) == MR_mktag((MR_Integer) 2))))) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__rval_0_0,
		ll_backend__dupelim__most_specific_rval_3_0_i13);
MR_def_label(ll_backend__dupelim__most_specific_rval_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__dupelim__most_specific_rval_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i15);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_lval_3_0,
		ll_backend__dupelim__most_specific_rval_3_0_i17);
MR_def_label(ll_backend__dupelim__most_specific_rval_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__dupelim__most_specific_rval_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i20);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_tfield(3, MR_r2, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i1);
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	}
	MR_np_localcall_lab(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_rval_3_0_i22);
MR_def_label(ll_backend__dupelim__most_specific_rval_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_rval_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__dupelim__most_specific_rval_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.dupelim", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.dupelim.most_specific_rval\'/3", 51);
	MR_r3 = (MR_Word) MR_string_const("var", 3);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ll_backend__dupelim__most_specific_rval_3_0_i2);
MR_def_label(ll_backend__dupelim__most_specific_rval_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__dupelim__most_specific_rval_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ll_backend__llds__code_addr_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_alloc_site_id_0;
MR_decl_entry(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0);
MR_decl_entry(__Unify___ll_backend__llds__region_fill_frame_op_0_0);
MR_decl_entry(__Unify___ll_backend__llds__region_use_frame_op_0_0);
MR_decl_entry(__Unify___ll_backend__llds__instr_0_0);

MR_BEGIN_MODULE(ll_backend__dupelim_module8)
	MR_init_entry1(ll_backend__dupelim__most_specific_instr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__most_specific_instr_3_0);
	MR_init_label10(ll_backend__dupelim__most_specific_instr_3_0,175,3,7,9,4,17,14,25,27,22)
	MR_init_label10(ll_backend__dupelim__most_specific_instr_3_0,35,37,39,41,43,46,49,45,53,56)
	MR_init_label10(ll_backend__dupelim__most_specific_instr_3_0,59,63,52,32,73,75,70,83,80,91)
	MR_init_label10(ll_backend__dupelim__most_specific_instr_3_0,88,99,96,107,104,114,116,118,120,122)
	MR_init_label10(ll_backend__dupelim__most_specific_instr_3_0,111,130,132,127,140,137,148,145,156,153)
	MR_init_label4(ll_backend__dupelim__most_specific_instr_3_0,164,166,161,171)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'most_specific_instr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__most_specific_instr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i3);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(17);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i4);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(8) = MR_tfield(3, MR_r1, 2);
	MR_sv(6) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_lval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i7);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i9);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,15)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i14);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,15)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i17);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i22);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(8) = MR_tfield(3, MR_r1, 2);
	MR_sv(6) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i25);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__code_addr_0_0,
		ll_backend__dupelim__most_specific_instr_3_0_i27);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i32);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,12)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(8) = MR_tfield(3, MR_r1, 2);
	MR_sv(6) = MR_tfield(3, MR_r1, 3);
	MR_sv(7) = MR_tfield(3, MR_r1, 5);
	MR_sv(2) = MR_tfield(3, MR_r1, 6);
	MR_sv(3) = MR_tfield(3, MR_r1, 7);
	MR_sv(4) = MR_tfield(3, MR_r1, 8);
	MR_sv(5) = MR_tfield(3, MR_r2, 7);
	MR_sv(1) = MR_tfield(3, MR_r2, 8);
	MR_sv(10) = MR_tfield(3, MR_r2, 1);
	MR_sv(11) = MR_tfield(3, MR_r2, 4);
	MR_sv(12) = MR_tfield(3, MR_r1, 1);
	MR_sv(13) = MR_tfield(3, MR_r1, 4);
	MR_sv(14) = MR_tfield(3, MR_r2, 3);
	MR_sv(9) = MR_tfield(3, MR_r2, 5);
	MR_sv(15) = MR_tfield(3, MR_r2, 6);
	MR_sv(16) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(16);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		ll_backend__dupelim__most_specific_instr_3_0_i35);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		ll_backend__dupelim__most_specific_instr_3_0_i37);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, alloc_site_id);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		ll_backend__dupelim__most_specific_instr_3_0_i39);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	if ((MR_sv(2) != MR_sv(15))) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_lval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i41);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i43);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i46);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_r2;
	MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i45);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(11) = MR_r2;
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_r2 = MR_tfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i49);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r2;
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i53);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i52);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(1);
	MR_sv(5) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i56);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i59);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i52);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_sv(5), 0);
	}
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_lval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i63);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 9);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 5) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 6) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 7) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 8) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i70);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(8) = MR_tfield(3, MR_r2, 2);
	MR_sv(6) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_lval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i73);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i75);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,13)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i80);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,13)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_lval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i83);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 13;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,22)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i88);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,22)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_lval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i91);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,23)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i96);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,23)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i99);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,16)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i104);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,16)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_tfield(3, MR_r2, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0,
		ll_backend__dupelim__most_specific_instr_3_0_i107);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_decr_sp_and_return(17);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,17)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i111);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,17)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(8) = MR_tfield(3, MR_r1, 1);
	MR_sv(6) = MR_tfield(3, MR_r1, 3);
	MR_sv(7) = MR_tfield(3, MR_r1, 4);
	MR_sv(2) = MR_tfield(3, MR_r1, 5);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_sv(4) = MR_tfield(3, MR_r2, 4);
	MR_sv(5) = MR_tfield(3, MR_r2, 5);
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_sv(10) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__region_fill_frame_op_0_0,
		ll_backend__dupelim__most_specific_instr_3_0_i114);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0,
		ll_backend__dupelim__most_specific_instr_3_0_i116);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i118);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_lval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i120);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(7) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_lval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i122);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 5) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,18)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i127);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,18)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_tempr2 = MR_tfield(3, MR_r2, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(8) = MR_tempr1;
	MR_sv(6) = MR_tfield(3, MR_r1, 3);
	MR_sv(7) = MR_tfield(3, MR_r2, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0,
		ll_backend__dupelim__most_specific_instr_3_0_i130);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i132);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,21)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i137);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,21)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 2);
	MR_tempr2 = MR_tfield(3, MR_r2, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	}
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i140);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,14)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i145);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,14)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_rval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i148);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,20)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i153);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,20)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_lval_3_0,
		ll_backend__dupelim__most_specific_instr_3_0_i156);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(17);
	}
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,19)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i161);
	}
	if (MR_RTAGS_TESTR(MR_r2,3,19)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_sv(8) = MR_r1;
	MR_sv(6) = MR_tfield(3, MR_r1, 2);
	MR_sv(7) = MR_tfield(3, MR_r2, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__region_use_frame_op_0_0,
		ll_backend__dupelim__most_specific_instr_3_0_i164);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___ll_backend__llds__embedded_stack_frame_id_0_0,
		ll_backend__dupelim__most_specific_instr_3_0_i166);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_decr_sp_and_return(17);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(__Unify___ll_backend__llds__instr_0_0,
		ll_backend__dupelim__most_specific_instr_3_0_i171);
MR_def_label(ll_backend__dupelim__most_specific_instr_3_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instr_3_0_i175);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(8);
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupelim_module9)
	MR_init_entry1(ll_backend__dupelim__most_specific_instrs_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__most_specific_instrs_3_0);
	MR_init_label10(ll_backend__dupelim__most_specific_instrs_3_0,122,6,8,12,5,15,2,24,27,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'most_specific_instrs'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__most_specific_instrs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(ll_backend__dupelim__most_specific_instrs_3_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(1, MR_r1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr3, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_tfield(0, MR_tempr3, 1);
	MR_sv(6) = MR_tempr2;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_instr_3_0,
		ll_backend__dupelim__most_specific_instrs_3_0_i6);
MR_def_label(ll_backend__dupelim__most_specific_instrs_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i5);
	}
	MR_r3 = MR_tfield(1, MR_r1, 0);
	if ((strcmp((char *) (MR_Word *) MR_sv(5), (char *) (MR_Word *) MR_sv(7)) != 0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__dupelim__most_specific_instrs_3_0,
		ll_backend__dupelim__most_specific_instrs_3_0_i12);
MR_def_label(ll_backend__dupelim__most_specific_instrs_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(8) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r3;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("unified intruction", 18);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__dupelim__most_specific_instrs_3_0,
		ll_backend__dupelim__most_specific_instrs_3_0_i12);
MR_def_label(ll_backend__dupelim__most_specific_instrs_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__dupelim__most_specific_instrs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i15);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i122);
MR_def_label(ll_backend__dupelim__most_specific_instrs_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i1);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i122);
MR_def_label(ll_backend__dupelim__most_specific_instrs_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i24);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i24);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(ll_backend__dupelim__most_specific_instrs_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r1, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i27);
	}
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i122);
	}
MR_def_label(ll_backend__dupelim__most_specific_instrs_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(ll_backend__dupelim__most_specific_instrs_3_0_i122);
	}
MR_def_label(ll_backend__dupelim__most_specific_instrs_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__last_2_0);
MR_decl_entry(__Unify___ll_backend__llds__label_0_0);
MR_decl_entry(list__det_last_2_0);

MR_BEGIN_MODULE(ll_backend__dupelim_module10)
	MR_init_entry1(ll_backend__dupelim__most_specific_block_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__most_specific_block_6_0);
	MR_init_label10(ll_backend__dupelim__most_specific_block_6_0,3,5,9,4,15,2,20,24,19,30)
	MR_init_label5(ll_backend__dupelim__most_specific_block_6_0,17,32,34,35,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'most_specific_block'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__most_specific_block_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i3);
	}
	MR_r2 = MR_r3;
	MR_sv(4) = MR_r4;
	MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i2);
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__last_2_0,
		ll_backend__dupelim__most_specific_block_6_0_i5);
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i4);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i4);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__dupelim__most_specific_block_6_0_i9);
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i2);
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__dupelim__most_specific_block_6_0_i15);
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(4), 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	}
	MR_np_call_localret_ent(list__last_2_0,
		ll_backend__dupelim__most_specific_block_6_0_i20);
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i19);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i19);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		ll_backend__dupelim__most_specific_block_6_0_i24);
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i19);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_instrs_3_0,
		ll_backend__dupelim__most_specific_block_6_0_i32);
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_string_const("", 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__dupelim__most_specific_block_6_0_i30);
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_instrs_3_0,
		ll_backend__dupelim__most_specific_block_6_0_i32);
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i1);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(list__det_last_2_0,
		ll_backend__dupelim__most_specific_block_6_0_i34);
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,6)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i35);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ll_backend__dupelim__most_specific_block_6_0_i35);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ll_backend__dupelim__most_specific_block_6_0,1)
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

MR_decl_entry(require__expect_4_0);
MR_decl_entry(list__delete_all_3_1);

MR_BEGIN_MODULE(ll_backend__dupelim_module11)
	MR_init_entry1(ll_backend__dupelim__process_elim_labels_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__process_elim_labels_11_0);
	MR_init_label8(ll_backend__dupelim__process_elim_labels_11_0,24,3,4,6,8,10,11,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_elim_labels'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__process_elim_labels_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(ll_backend__dupelim__process_elim_labels_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__process_elim_labels_11_0_i3);
	}
	MR_r1 = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r6;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r7;
	MR_decr_sp_and_return(12);
	}
MR_def_label(ll_backend__dupelim__process_elim_labels_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__dupelim__process_elim_labels_11_0_i4);
MR_def_label(ll_backend__dupelim__process_elim_labels_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__283__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_r1, 2);
	MR_sv(7) = MR_tfield(0, MR_r1, 6);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.dupelim", 18);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.dupelim.process_elim_labels\'/11", 53);
	MR_r4 = (MR_Word) MR_string_const("elim label mismatch", 19);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__dupelim__process_elim_labels_11_0_i6);
MR_def_label(ll_backend__dupelim__process_elim_labels_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(ll_backend__dupelim__most_specific_block_6_0,
		ll_backend__dupelim__process_elim_labels_11_0_i8);
MR_def_label(ll_backend__dupelim__process_elim_labels_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__dupelim__process_elim_labels_11_0_i7);
	}
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__delete_all_3_1,
		ll_backend__dupelim__process_elim_labels_11_0_i10);
MR_def_label(ll_backend__dupelim__process_elim_labels_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		ll_backend__dupelim__process_elim_labels_11_0_i11);
MR_def_label(ll_backend__dupelim__process_elim_labels_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(9);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(ll_backend__dupelim__process_elim_labels_11_0_i24);
	}
MR_def_label(ll_backend__dupelim__process_elim_labels_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.dupelim", 18);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.dupelim.process_elim_labels\'/11", 53);
	MR_r3 = (MR_Word) MR_string_const("blocks with same standard form don\'t antiunify", 46);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupelim_module12)
	MR_init_entry1(ll_backend__dupelim__process_clusters_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__process_clusters_7_0);
	MR_init_label6(ll_backend__dupelim__process_clusters_7_0,15,3,4,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_clusters'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__process_clusters_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	MR_sv(16) = (MR_Word) MR_succip;
MR_def_label(ll_backend__dupelim__process_clusters_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__process_clusters_7_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_decr_sp_and_return(16);
MR_def_label(ll_backend__dupelim__process_clusters_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(14) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(ll_backend__basic_block, block_info);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		ll_backend__dupelim__process_clusters_7_0_i4);
MR_def_label(ll_backend__dupelim__process_clusters_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ll_backend__dupelim__IntroducedFrom__pred__process_clusters__251__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(0, MR_r1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_tfield(0, MR_r1, 2);
	MR_sv(8) = MR_tfield(0, MR_r1, 3);
	MR_sv(9) = MR_tfield(0, MR_r1, 4);
	MR_sv(10) = MR_tfield(0, MR_r1, 5);
	MR_sv(11) = MR_tfield(0, MR_r1, 6);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ll_backend.dupelim", 18);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ll_backend.dupelim.process_clusters\'/7", 49);
	MR_r4 = (MR_Word) MR_string_const("exemplar label mismatch", 23);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		ll_backend__dupelim__process_clusters_7_0_i6);
MR_def_label(ll_backend__dupelim__process_clusters_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__dupelim__process_elim_labels_11_0,
		ll_backend__dupelim__process_clusters_7_0_i7);
MR_def_label(ll_backend__dupelim__process_clusters_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 6) = MR_r4;
	MR_sv(12) = MR_r1;
	MR_tempr2 = MR_sv(13);
	MR_sv(13) = MR_r2;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		ll_backend__dupelim__process_clusters_7_0_i9);
MR_def_label(ll_backend__dupelim__process_clusters_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(13);
	MR_succip_word = MR_sv(16);
	MR_GOTO_LAB(ll_backend__dupelim__process_clusters_7_0_i15);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__basic_block__create_basic_blocks_8_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(map__values_2_0);
MR_decl_entry(ll_backend__basic_block__flatten_basic_blocks_4_0);
MR_decl_entry(ll_backend__opt_util__replace_labels_instruction_list_5_0);

MR_BEGIN_MODULE(ll_backend__dupelim_module13)
	MR_init_entry1(ll_backend__dupelim__dupelim_main_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__dupelim_main_5_0);
	MR_init_label10(ll_backend__dupelim__dupelim_main_5_0,2,5,6,7,8,9,11,12,13,14)
	MR_init_label2(ll_backend__dupelim__dupelim_main_5_0,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dupelim_main'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__dupelim__dupelim_main_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_sv(5) = MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ll_backend__basic_block__create_basic_blocks_8_0,
		ll_backend__dupelim__dupelim_main_5_0_i2);
MR_def_label(ll_backend__dupelim__dupelim_main_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(6) = MR_r2;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__dupelim__dupelim_main_5_0_i5);
MR_def_label(ll_backend__dupelim__dupelim_main_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__dupelim__dupelim_main_5_0_i6);
MR_def_label(ll_backend__dupelim__dupelim_main_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__dupelim__dupelim_build_maps_6_0,
		ll_backend__dupelim__dupelim_main_5_0_i7);
MR_def_label(ll_backend__dupelim__dupelim_main_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__values_2_0,
		ll_backend__dupelim__dupelim_main_5_0_i8);
MR_def_label(ll_backend__dupelim__dupelim_main_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ll_backend__dupelim__find_clusters_4_0,
		ll_backend__dupelim__dupelim_main_5_0_i9);
MR_def_label(ll_backend__dupelim__dupelim_main_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__dupelim_main_5_0_i11);
	}
	MR_r2 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(10);
MR_def_label(ll_backend__dupelim__dupelim_main_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__init_1_0,
		ll_backend__dupelim__dupelim_main_5_0_i12);
MR_def_label(ll_backend__dupelim__dupelim_main_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__dupelim__process_clusters_7_0,
		ll_backend__dupelim__dupelim_main_5_0_i13);
MR_def_label(ll_backend__dupelim__dupelim_main_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(ll_backend__basic_block__flatten_basic_blocks_4_0,
		ll_backend__dupelim__dupelim_main_5_0_i14);
MR_def_label(ll_backend__dupelim__dupelim_main_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__opt_util__replace_labels_instruction_list_5_0,
		ll_backend__dupelim__dupelim_main_5_0_i15);
MR_def_label(ll_backend__dupelim__dupelim_main_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ll_backend__dupelim__dupelim_main_5_0_i16);
MR_def_label(ll_backend__dupelim__dupelim_main_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupelim_module14)
	MR_init_entry1(ll_backend__dupelim__add_pragma_pref_labels_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__add_pragma_pref_labels_3_0);
	MR_init_label6(ll_backend__dupelim__add_pragma_pref_labels_3_0,5,4,7,10,2,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_pragma_pref_labels'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__add_pragma_pref_labels_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,27)) {
		MR_GOTO_LAB(ll_backend__dupelim__add_pragma_pref_labels_3_0_i2);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_tempr2 = MR_r3;
	MR_r4 = MR_tfield(3, MR_tempr2, 4);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__add_pragma_pref_labels_3_0_i5);
	}
	MR_sv(1) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 8);
	MR_r1 = MR_r2;
	MR_GOTO_LAB(ll_backend__dupelim__add_pragma_pref_labels_3_0_i4);
	}
MR_def_label(ll_backend__dupelim__add_pragma_pref_labels_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_tempr2, 5);
	MR_sv(2) = MR_tfield(3, MR_tempr2, 6);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(1, MR_r4, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__dupelim__add_pragma_pref_labels_3_0_i4);
MR_def_label(ll_backend__dupelim__add_pragma_pref_labels_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__add_pragma_pref_labels_3_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__dupelim__add_pragma_pref_labels_3_0_i7);
MR_def_label(ll_backend__dupelim__add_pragma_pref_labels_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__add_pragma_pref_labels_3_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__insert_3_0,
		ll_backend__dupelim__add_pragma_pref_labels_3_0_i10);
MR_def_label(ll_backend__dupelim__add_pragma_pref_labels_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ll_backend__dupelim__add_pragma_pref_labels_3_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(set__insert_3_0);
	}
MR_def_label(ll_backend__dupelim__add_pragma_pref_labels_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(ll_backend__dupelim__add_pragma_pref_labels_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__dupelim_module15)
	MR_init_entry1(__Unify___ll_backend__dupelim__cluster_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__dupelim__cluster_0_0);
	MR_init_label3(__Unify___ll_backend__dupelim__cluster_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__dupelim__cluster_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__dupelim__cluster_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___ll_backend__llds__label_0_0,
		__Unify___ll_backend__dupelim__cluster_0_0_i4);
MR_def_label(__Unify___ll_backend__dupelim__cluster_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__dupelim__cluster_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__dupelim__cluster_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__dupelim__cluster_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ll_backend__llds__label_0_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__dupelim_module16)
	MR_init_entry1(__Compare___ll_backend__dupelim__cluster_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__dupelim__cluster_0_0);
	MR_init_label4(__Compare___ll_backend__dupelim__cluster_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__dupelim__cluster_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__dupelim__cluster_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__dupelim__cluster_0_0_i2);
MR_def_label(__Compare___ll_backend__dupelim__cluster_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__dupelim__cluster_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ll_backend__llds__label_0_0,
		__Compare___ll_backend__dupelim__cluster_0_0_i5);
MR_def_label(__Compare___ll_backend__dupelim__cluster_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__dupelim__cluster_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__dupelim__cluster_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__dupelim_module17)
	MR_init_entry1(__Unify___ll_backend__dupelim__std_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__dupelim__std_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__dupelim__std_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(ll_backend__dupelim_module18)
	MR_init_entry1(__Compare___ll_backend__dupelim__std_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__dupelim__std_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__dupelim__std_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__member_2_0);

MR_BEGIN_MODULE(ll_backend__dupelim_module19)
	MR_init_entry1(ll_backend__dupelim__IntroducedFrom__pred__find_clusters__214__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__IntroducedFrom__pred__find_clusters__214__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__find_clusters__214__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__IntroducedFrom__pred__find_clusters__214__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(set__member_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupelim_module20)
	MR_init_entry1(ll_backend__dupelim__IntroducedFrom__pred__process_clusters__251__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__IntroducedFrom__pred__process_clusters__251__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__process_clusters__251__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__IntroducedFrom__pred__process_clusters__251__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__dupelim_module21)
	MR_init_entry1(ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__283__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__283__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__process_elim_labels__283__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__dupelim__IntroducedFrom__pred__process_elim_labels__283__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___ll_backend__llds__label_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__dupelim_maybe_bunch_0(void)
{
	ll_backend__dupelim_module0();
	ll_backend__dupelim_module1();
	ll_backend__dupelim_module2();
	ll_backend__dupelim_module3();
	ll_backend__dupelim_module4();
	ll_backend__dupelim_module5();
	ll_backend__dupelim_module6();
	ll_backend__dupelim_module7();
	ll_backend__dupelim_module8();
	ll_backend__dupelim_module9();
	ll_backend__dupelim_module10();
	ll_backend__dupelim_module11();
	ll_backend__dupelim_module12();
	ll_backend__dupelim_module13();
	ll_backend__dupelim_module14();
	ll_backend__dupelim_module15();
	ll_backend__dupelim_module16();
	ll_backend__dupelim_module17();
	ll_backend__dupelim_module18();
	ll_backend__dupelim_module19();
	ll_backend__dupelim_module20();
	ll_backend__dupelim_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__dupelim__init(void);
void mercury__ll_backend__dupelim__init_type_tables(void);
void mercury__ll_backend__dupelim__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__dupelim__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__dupelim__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__dupelim__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__dupelim__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__dupelim_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__dupelim__type_ctor_info_cluster_0,
		ll_backend__dupelim__cluster_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__dupelim__type_ctor_info_std_map_0,
		ll_backend__dupelim__std_map_0_0);
	mercury__ll_backend__dupelim__init_debugger();
}

void mercury__ll_backend__dupelim__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__dupelim__type_ctor_info_cluster_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__dupelim__type_ctor_info_std_map_0);
	}
}


void mercury__ll_backend__dupelim__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__dupelim__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__dupelim);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__dupelim__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__dupelim__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
