/*
** Automatically generated from `ml_accurate_gc.m'
** by the Mercury compiler,
** version rotd-2013-02-19, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__ml_backend__ml_accurate_gc__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 226 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 28 "ml_backend.ml_accurate_gc.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 32 "ml_backend.ml_accurate_gc.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 36 "ml_backend.ml_accurate_gc.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 40 "ml_backend.ml_accurate_gc.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ml_backend.ml_accurate_gc.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "ml_backend.ml_accurate_gc.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "ml_backend.ml_accurate_gc.c"
#line 53 "ml_backend.ml_accurate_gc.c"
#include "ml_backend.ml_accurate_gc.mh"

#line 56 "ml_backend.ml_accurate_gc.c"
#line 57 "ml_backend.ml_accurate_gc.c"
#ifndef ML_BACKEND__ML_ACCURATE_GC_DECL_GUARD
#define ML_BACKEND__ML_ACCURATE_GC_DECL_GUARD

#line 61 "ml_backend.ml_accurate_gc.c"
#line 62 "ml_backend.ml_accurate_gc.c"

#endif
#line 65 "ml_backend.ml_accurate_gc.c"

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
	MR_Word * f2;
	MR_String f3;
	MR_Integer f4;
	MR_Integer f5;
	MR_Integer f6;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Integer f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Integer f1;
	MR_Word * f2;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_4 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[7];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_7 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_9 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_11 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0,
	mercury_data_ml_backend__ml_accurate_gc__type_ctor_info_how_to_get_type_info_0;
MR_decl_label2(ml_backend__ml_accurate_gc__fixup_newobj_4_0, 2,4)
MR_decl_label9(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0, 4,8,12,14,17,25,26,31,2)
MR_decl_label1(ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_0, 3)
MR_decl_label3(ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_0, 3,26,6)
MR_decl_label2(ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_0, 18,5)
MR_decl_label1(ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_0, 3)
MR_decl_label10(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0, 5,3,9,11,7,14,13,16,26,27)
MR_decl_label4(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0, 24,29,30,110)
MR_decl_label10(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0, 3,4,8,9,10,11,15,13,19,6)
MR_decl_label10(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0, 21,76,5,26,27,30,34,33,39,40)
MR_decl_label10(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0, 43,45,47,49,51,53,55,35,36,60)
MR_decl_label1(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0, 2)
MR_decl_label2(ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0, 2,3)
MR_decl_label2(ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0, 2,3)
MR_decl_label2(ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_0, 2,3)
MR_decl_label10(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0, 12,13,14,16,17,18,19,20,21,22)
MR_decl_label10(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0, 23,24,25,26,28,29,30,31,33,34)
MR_decl_label2(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0, 35,38)
MR_decl_label10(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0, 2,3,4,6,7,8,11,13,14,28)
MR_decl_label3(fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_0, 2,3,4)
MR_decl_label1(fn__ml_backend__ml_accurate_gc__maybe_tag_rval_3_0, 3)
MR_decl_label5(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0, 4,6,8,12,1)
MR_decl_label3(__Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0, 16,5,1)
MR_decl_label6(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0, 3,2,5,9,13,49)
MR_decl_label5(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0, 3,2,7,5,10)
MR_decl_static(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0)
MR_decl_static(fn__ml_backend__ml_accurate_gc__maybe_tag_rval_3_0)
MR_decl_static(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0)
MR_decl_static(ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_0)
MR_decl_static(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0)
MR_decl_static(ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_0)
MR_decl_static(ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_0)
MR_decl_static(ml_backend__ml_accurate_gc__fixup_newobj_4_0)
MR_decl_static(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0)
MR_decl_static(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0)
MR_def_extern_entry(ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0)
MR_def_extern_entry(ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0)
MR_def_extern_entry(ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_0)
MR_decl_static(ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_0)
MR_decl_static(ml_backend__ml_accurate_gc__init_field_n_7_0)
MR_decl_static(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0)
MR_decl_static(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0)
MR_decl_static(__Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0)
MR_decl_static(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0)
MR_decl_static(fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__301__1_1_0)
MR_decl_static(fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__set_of_var__type_ctor_info_set_of_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree_bitset__type_ctor_info_tree_bitset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
static const struct mercury_type_0 mercury_common_0[7] =
{
{
{
MR_CTOR1_ADDR(parse_tree__set_of_var, set_of_var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(tree_bitset, tree_bitset),
MR_COMMON(0,3)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
0,
MR_tbmkword(0, 0),
MR_string_const("gc_trace", 8),
1,
0,
0
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
1,
2
}
},
};

static const struct mercury_type_3 mercury_common_3[3] =
{
{
4,
MR_tbmkword(0, 5)
},
{
8,
MR_tbmkword(0, 5)
},
{
0,
MR_TAG_COMMON(3,3,1)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_TAG_COMMON(3,3,2)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0_1,
(MR_Word *) (MR_Integer) 0
},
7,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval),
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_CTOR0_ADDR(ml_backend__ml_accurate_gc, fixup_newobj_info),
MR_CTOR0_ADDR(ml_backend__ml_accurate_gc, fixup_newobj_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case),
MR_CTOR0_ADDR(ml_backend__ml_accurate_gc, fixup_newobj_info),
MR_CTOR0_ADDR(ml_backend__ml_accurate_gc, fixup_newobj_info)
}
},
};

static const struct mercury_type_7 mercury_common_7[3] =
{
{
MR_COMMON(6,0),
MR_ENTRY_AP(ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_0),
0
},
{
MR_COMMON(8,0),
MR_ENTRY_AP(fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__301__1_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_COMMON(0,4)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const struct mercury_type_10 mercury_common_10[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,5),
MR_COMMON(9,0),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_COMMON(0,6),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
};

static const struct mercury_type_11 mercury_common_11[1] =
{
{
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0
};

const MR_ConstString mercury_data_ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0[] = {
	"fnoi_module_name",
	"fnoi_context",
	"fnoi_locals",
	"fnoi_next_id"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0 = {
	"fixup_newobj_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0,
	mercury_data_ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_accurate_gc__du_stag_ordered_fixup_newobj_info_0_0[] = {
	&mercury_data_ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_accurate_gc__du_ptag_ordered_fixup_newobj_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_accurate_gc__du_stag_ordered_fixup_newobj_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_accurate_gc__du_name_ordered_fixup_newobj_info_0[] = {
	&mercury_data_ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0
};

const MR_Integer mercury_data_ml_backend__ml_accurate_gc__functor_number_map_fixup_newobj_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0)),
	"ml_backend.ml_accurate_gc",
	"fixup_newobj_info",
	{ (void *)mercury_data_ml_backend__ml_accurate_gc__du_name_ordered_fixup_newobj_info_0 },
	{ (void *)mercury_data_ml_backend__ml_accurate_gc__du_ptag_ordered_fixup_newobj_info_0 },
	1,
	4,
	mercury_data_ml_backend__ml_accurate_gc__functor_number_map_fixup_newobj_info_0
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0 = {
	"construct_from_type",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__mlds__type_ctor_info_mlds_rval_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1 = {
	"already_provided",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_0[] = {
	&mercury_data_ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_1[] = {
	&mercury_data_ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__ml_accurate_gc__du_ptag_ordered_how_to_get_type_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ml_accurate_gc__du_name_ordered_how_to_get_type_info_0[] = {
	&mercury_data_ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1,
	&mercury_data_ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0
};

const MR_Integer mercury_data_ml_backend__ml_accurate_gc__functor_number_map_how_to_get_type_info_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_accurate_gc__type_ctor_info_how_to_get_type_info_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0)),
	"ml_backend.ml_accurate_gc",
	"how_to_get_type_info",
	{ (void *)mercury_data_ml_backend__ml_accurate_gc__du_name_ordered_how_to_get_type_info_0 },
	{ (void *)mercury_data_ml_backend__ml_accurate_gc__du_ptag_ordered_how_to_get_type_info_0 },
	2,
	4,
	mercury_data_ml_backend__ml_accurate_gc__functor_number_map_how_to_get_type_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_2 = {
{
MR_FUNCTION,
"ml_backend.ml_accurate_gc",
"ml_backend.ml_accurate_gc",
"lambda_ml_accurate_gc_m_339",
6,
0
},
"ml_backend.ml_accurate_gc",
"ml_accurate_gc.m",
339,
"34"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_accurate_gc",
"ml_backend.ml_accurate_gc",
"lambda_ml_accurate_gc_m_301",
2,
0
},
"ml_backend.ml_accurate_gc",
"ml_accurate_gc.m",
301,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_accurate_gc",
"ml_backend.ml_accurate_gc",
"fixup_newobj_in_case",
4,
0
},
"ml_backend.ml_accurate_gc",
"ml_accurate_gc.m",
482,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_accurate_gc",
"ml_backend.ml_accurate_gc",
"fixup_newobj_in_statement",
4,
0
},
"ml_backend.ml_accurate_gc",
"ml_accurate_gc.m",
468,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_accurate_gc",
"ml_backend.ml_accurate_gc",
"init_field_n",
7,
0
},
"ml_backend.ml_accurate_gc",
"ml_accurate_gc.m",
586,
"40"
};


MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_lval_4_0);
MR_decl_entry(fn__hlds__hlds_pred__initial_proc_id_0_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0);
MR_decl_entry(fn__backend_libs__foreign__non_foreign_type_1_0);
MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);

MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module0)
	MR_init_entry1(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0);
	MR_init_label10(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0,2,3,4,6,7,8,11,13,14,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_trace_var'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0_i2);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0_i3);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0_i4);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__initial_proc_id_0_0,
		ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0_i6);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0_i7);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0_i8);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0_i11);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0_i13);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__foreign__non_foreign_type_1_0,
		ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0_i14);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 3);
	MR_tfield(2, MR_r2, 0) = MR_sv(5);
	MR_tfield(2, MR_r2, 1) = MR_sv(6);
	MR_tfield(2, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr4, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_r2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr4;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 7);
	MR_sv(4) = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr6, 1) = MR_tempr3;
	MR_tfield(3, MR_tempr6, 2) = MR_tempr5;
	MR_tfield(3, MR_tempr6, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr6, 4) = MR_tempr1;
	MR_tfield(3, MR_tempr6, 5) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr6, 6) = (MR_Integer) 2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0_i28);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module1)
	MR_init_entry1(fn__ml_backend__ml_accurate_gc__maybe_tag_rval_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_accurate_gc__maybe_tag_rval_3_0);
	MR_init_label1(fn__ml_backend__ml_accurate_gc__maybe_tag_rval_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_tag_rval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_accurate_gc__maybe_tag_rval_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_accurate_gc__maybe_tag_rval_3_0_i3);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(fn__ml_backend__ml_accurate_gc__maybe_tag_rval_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r2, 0) = MR_tfield(1, MR_r1, 0);
	MR_tfield(2, MR_r2, 1) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_tfield(3, MR_r1, 2) = MR_r2;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__allocate_3_0);
MR_decl_entry(fn__list__length_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
MR_decl_entry(fn__list__duplicate_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__map_foldl_5_1);

MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module2)
	MR_init_entry1(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0);
	MR_init_label9(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0,4,8,12,14,17,25,26,31,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fixup_newobj_in_atomic_statement'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0_i2);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_sv(7) = MR_tfield(3, MR_r1, 2);
	MR_sv(2) = MR_tfield(3, MR_r1, 4);
	MR_sv(6) = MR_tfield(3, MR_r1, 7);
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r2, 3);
	MR_np_call_localret_ent(counter__allocate_3_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0_i4);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_string_const("new_obj", 7);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_sv(9) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(3,3,0);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_rval);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0_i8);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,4,0);
	}
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0_i12);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r3, 0) = MR_r1;
	MR_sv(5) = MR_tfield(0, MR_sv(8), 1);
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(3));
	MR_r2 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0_i14);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr3 = MR_sv(8);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0_i17);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr6 = MR_sv(9);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tempr6, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr6, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_tempr6, 3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tempr7 = MR_sv(2);
	MR_tfield(2, MR_tempr2, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 2) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_accurate_gc__init_field_n_7_0);
	MR_tfield(0, MR_tempr5, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr5, 3) = MR_tempr7;
	MR_tfield(0, MR_tempr5, 4) = MR_tempr3;
	MR_tfield(0, MR_tempr5, 5) = MR_sv(5);
	MR_tempr4 = MR_sv(6);
	MR_sv(6) = MR_tempr3;
	MR_sv(9) = MR_tempr1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r5 = MR_tempr4;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0_i25);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_accurate_gc__maybe_tag_rval_3_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0_i26);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0_i31);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(11);
	}
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module3)
	MR_init_entry1(ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_0);
	MR_init_label1(ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fixup_newobj_in_statement'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_0_i3);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_switch_case_0;

MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module4)
	MR_init_entry1(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0);
	MR_init_label10(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,5,3,9,11,7,14,13,16,26,27)
	MR_init_label4(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,24,29,30,110)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fixup_newobj_in_stmt'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_accurate_gc, fixup_newobj_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r5 = MR_tfield(0, MR_tempr1, 1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i5);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i7);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tempr2 = MR_tfield(2, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_sv(3) = MR_tfield(2, MR_r1, 0);
	MR_sv(4) = MR_tfield(2, MR_r1, 2);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i9);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i11);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i13);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 2);
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i14);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i16);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_0);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TEST(MR_r1,3,4)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i110);
	}
	if (MR_RTAGS_TEST(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i110);
	}
	if (MR_RTAGS_TEST(MR_r1,3,7)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i110);
	}
	if (MR_RTAGS_TEST(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i110);
	}
	if (MR_RTAGS_TEST(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i110);
	}
	if (MR_RTAGS_TEST(MR_r1,3,5)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i110);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i24);
	}
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_r1, 2);
	MR_sv(1) = MR_tfield(3, MR_r1, 3);
	MR_sv(2) = MR_tfield(3, MR_r1, 5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_switch_case);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_accurate_gc, fixup_newobj_info);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,7,1);
	MR_r5 = MR_tfield(3, MR_tempr1, 4);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i26);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i27);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(3, MR_r1, 1);
	MR_sv(4) = MR_tfield(3, MR_r1, 3);
	MR_r1 = MR_tfield(3, MR_r1, 2);
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i29);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0_i30);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module5)
	MR_init_entry1(ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_0);
	MR_init_label2(ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_0,18,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fixup_newobj_in_maybe_statement'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tempr2 = MR_tfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_0_i5);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module6)
	MR_init_entry1(ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_0);
	MR_init_label3(ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_0,3,26,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fixup_newobj_in_default'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_0_i26);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tempr2 = MR_body((MR_Integer) MR_r1, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_0_i6);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__counter__init_1_0);

MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module7)
	MR_init_entry1(ml_backend__ml_accurate_gc__fixup_newobj_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__fixup_newobj_4_0);
	MR_init_label2(ml_backend__ml_accurate_gc__fixup_newobj_4_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fixup_newobj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_accurate_gc__fixup_newobj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_sv(3) = MR_tfield(0, MR_r1, 1);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		ml_backend__ml_accurate_gc__fixup_newobj_4_0_i2);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,
		ml_backend__ml_accurate_gc__fixup_newobj_4_0_i4);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(check_hlds__polymorphism__create_poly_info_4_0);
MR_decl_entry(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0);
MR_decl_entry(check_hlds__polymorphism__poly_info_extract_6_0);
MR_decl_entry(hlds__hlds_module__module_info_set_pred_proc_info_6_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_set_varset_3_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_set_var_types_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__parse_tree__set_of_var__union_list_1_0);
MR_decl_entry(fn__hlds__instmap__instmap_delta_bind_var_1_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_5_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);
MR_decl_entry(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_3_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0);
MR_decl_entry(parse_tree__set_of_var__to_sorted_list_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_block_3_0);

MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module8)
	MR_init_entry1(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0);
	MR_init_label10(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,12,13,14,16,17,18,19,20,21,22)
	MR_init_label10(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,23,24,25,26,28,29,30,31,33,34)
	MR_init_label2(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,35,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_gc_trace_code'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i2);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i3);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i4);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i5);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__create_poly_info_4_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i6);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__polymorphism_make_type_info_var_6_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i7);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(check_hlds__polymorphism__poly_info_extract_6_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i8);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(9);
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_pred_proc_info_6_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i9);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i10);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i11);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i12);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_varset_3_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i13);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_var_types_3_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i14);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,7,2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i16);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__set_of_var__union_list_1_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i17);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__instmap__instmap_delta_bind_var_1_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i18);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_5_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i19);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i20);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(9);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_gen__ml_gen_goal_as_block_5_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i21);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i22);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i23);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i24);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__fixup_newobj_4_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i25);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i26);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i28);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_varset_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i29);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i30);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i31);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(parse_tree__set_of_var__to_sorted_list_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i33);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i34);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i35);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0_i38);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__predicate_id_5_0);
MR_decl_entry(mdbcomp__program_representation__no_type_info_builtin_3_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__sample_type_info_type_0_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__sample_typeclass_info_type_0_0);

MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module9)
	MR_init_entry1(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0);
	MR_init_label10(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,3,4,8,9,10,11,15,13,19,6)
	MR_init_label10(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,21,76,5,26,27,30,34,33,39,40)
	MR_init_label10(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,43,45,47,49,51,53,55,35,36,60)
	MR_init_label1(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_do_gen_gc_statement'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i3);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i4);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i6);
	}
	MR_r2 = MR_tfield(2, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i8);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i5);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i9);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i5);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i10);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i5);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i11);
	}
	MR_r3 = MR_tfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r3,3)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i2);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i5);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i13);
	}
	MR_r3 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i15);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i5);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i2);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i5);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i2);
	}
	MR_r3 = MR_tfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i19);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i5);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i2);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i5);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i21);
	}
	MR_r2 = MR_tfield(3, MR_r1, 3);
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i76);
	}
	MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i2);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((((((((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 4)) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 6))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 5))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 0))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 5))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 8))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 6))) || ((MR_tag(MR_r1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r1, 0) == (MR_Integer) 7))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 7))) || ((MR_Integer) MR_r1 == (MR_Integer) MR_tbmkword(0, 9))))) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i2);
	}
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i26);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i27);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdbcomp__program_representation__no_type_info_builtin_3_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i30);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i2);
	}
	if (MR_PTAG_TESTR(MR_sv(5),1)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i33);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(1, MR_sv(5), 0);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__ml_gen_trace_var_6_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i34);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r1);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(5), 0);
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i36);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i36);
	}
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i39);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i40);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i35);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("type_info", 9)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i43);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__sample_type_info_type_0_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i36);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("type_ctor_info", 14)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i45);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i36);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("typeclass_info", 14)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i47);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__sample_typeclass_info_type_0_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i36);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("zero_type_info", 14)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i49);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__sample_type_info_type_0_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i36);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("base_typeclass_info", 19)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i51);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i36);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("zero_type_ctor_info", 19)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i53);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i36);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("zero_typeclass_info", 19)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i55);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__sample_typeclass_info_type_0_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i36);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(7), MR_string_const("zero_base_typeclass_info", 24)) != 0)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i35);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i36);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_0,
		ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0_i60);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r1);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_gc_2_0);

MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module10)
	MR_init_entry1(ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0);
	MR_init_label2(ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_gc_statement_poly'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_gc_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0_i2);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0_i3);
	}
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r3, 0) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module11)
	MR_init_entry1(ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0);
	MR_init_label2(ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_gc_statement'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_gc_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0_i2);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0_i3);
	}
	MR_tag_alloc_heap(MR_r3, 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_tfield(0, MR_r3, 0) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0);
	}
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module12)
	MR_init_entry1(ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_0);
	MR_init_label2(ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_gc_statement_with_typeinfo'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_gc_2_0,
		ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_0_i2);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_0_i3);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_0);
MR_def_label(ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module13)
	MR_init_entry1(ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_0);
	MR_init_label1(ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fixup_newobj_in_case'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tempr2 = MR_tfield(0, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(0, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(0, MR_r2, 3);
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_0,
		ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_0_i3);
MR_def_label(ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(2);
	MR_tfield(0, MR_r1, 2) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module14)
	MR_init_entry1(ml_backend__ml_accurate_gc__init_field_n_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_accurate_gc__init_field_n_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_field_n'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_accurate_gc__init_field_n_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tempr5 = MR_r5;
	MR_tfield(2, MR_tempr1, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,11,0);
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 3) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_tempr2, 4) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(2, MR_tempr3, 1) = MR_r4;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr4;
	MR_tfield(0, MR_r1, 1) = MR_r3;
	MR_r2 = ((MR_Integer) MR_tempr5 + (MR_Integer) 1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_module_name_0_0);
MR_decl_entry(__Unify___ml_backend__mlds__mlds_context_0_0);
MR_decl_entry(builtin__unify_2_0);
MR_decl_entry(__Unify___counter__counter_0_0);

MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module15)
	MR_init_entry1(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0);
	MR_init_label5(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0,4,6,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i12);
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
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_module_name_0_0,
		__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i4);
MR_def_label(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___ml_backend__mlds__mlds_context_0_0,
		__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i6);
MR_def_label(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i8);
MR_def_label(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___counter__counter_0_0);
MR_def_label(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_module_name_0_0);
MR_decl_entry(__Compare___ml_backend__mlds__mlds_context_0_0);
MR_decl_entry(builtin__compare_3_0);
MR_decl_entry(__Compare___counter__counter_0_0);

MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module16)
	MR_init_entry1(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0);
	MR_init_label6(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0,3,2,5,9,13,49)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_module_name_0_0,
		__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i5);
MR_def_label(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i49);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___ml_backend__mlds__mlds_context_0_0,
		__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i9);
MR_def_label(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i49);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i13);
MR_def_label(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0_i49);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___counter__counter_0_0);
MR_def_label(__Compare___ml_backend__ml_accurate_gc__fixup_newobj_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__mlds__mlds_rval_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module17)
	MR_init_entry1(__Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0);
	MR_init_label3(__Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0_i16);
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
		MR_GOTO_LAB(__Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__mlds__mlds_rval_0_0);
	}
MR_def_label(__Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_def_label(__Unify___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__mlds__mlds_rval_0_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module18)
	MR_init_entry1(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0);
	MR_init_label5(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0_i2);
MR_def_label(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__mlds__mlds_rval_0_0);
MR_def_label(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ml_accurate_gc__how_to_get_type_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_type_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);

MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module19)
	MR_init_entry1(fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__301__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__301__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__ml_gen_gc_trace_code__301__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__301__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_tailcall_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);
MR_decl_entry(parse_tree__prog_data__lookup_var_type_3_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);

MR_BEGIN_MODULE(ml_backend__ml_accurate_gc_module20)
	MR_init_entry1(fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_0);
	MR_init_label3(fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__ml_gen_gc_trace_code__339__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,
		fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_0_i2);
MR_def_label(fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__lookup_var_type_3_0,
		fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_0_i3);
MR_def_label(fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(2));
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_0_i4);
MR_def_label(fn__ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__339__1_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_accurate_gc_maybe_bunch_0(void)
{
	ml_backend__ml_accurate_gc_module0();
	ml_backend__ml_accurate_gc_module1();
	ml_backend__ml_accurate_gc_module2();
	ml_backend__ml_accurate_gc_module3();
	ml_backend__ml_accurate_gc_module4();
	ml_backend__ml_accurate_gc_module5();
	ml_backend__ml_accurate_gc_module6();
	ml_backend__ml_accurate_gc_module7();
	ml_backend__ml_accurate_gc_module8();
	ml_backend__ml_accurate_gc_module9();
	ml_backend__ml_accurate_gc_module10();
	ml_backend__ml_accurate_gc_module11();
	ml_backend__ml_accurate_gc_module12();
	ml_backend__ml_accurate_gc_module13();
	ml_backend__ml_accurate_gc_module14();
	ml_backend__ml_accurate_gc_module15();
	ml_backend__ml_accurate_gc_module16();
	ml_backend__ml_accurate_gc_module17();
	ml_backend__ml_accurate_gc_module18();
	ml_backend__ml_accurate_gc_module19();
	ml_backend__ml_accurate_gc_module20();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_accurate_gc__init(void);
void mercury__ml_backend__ml_accurate_gc__init_type_tables(void);
void mercury__ml_backend__ml_accurate_gc__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_accurate_gc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_accurate_gc__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__ml_accurate_gc__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__ml_accurate_gc__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_accurate_gc_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0,
		ml_backend__ml_accurate_gc__fixup_newobj_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_accurate_gc__type_ctor_info_how_to_get_type_info_0,
		ml_backend__ml_accurate_gc__how_to_get_type_info_0_0);
	mercury__ml_backend__ml_accurate_gc__init_debugger();
}

void mercury__ml_backend__ml_accurate_gc__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_accurate_gc__type_ctor_info_how_to_get_type_info_0);
	}
}


void mercury__ml_backend__ml_accurate_gc__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_accurate_gc__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__ml_backend__ml_accurate_gc);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_accurate_gc__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__ml_accurate_gc__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
