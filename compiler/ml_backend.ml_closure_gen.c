/*
** Automatically generated from `ml_closure_gen.m'
** by the Mercury compiler,
** version rotd-2011-09-25, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ml_closure_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.ml_closure_gen.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.ml_closure_gen.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ml_backend.ml_closure_gen.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ml_backend.ml_closure_gen.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ml_backend.ml_closure_gen.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ml_backend.ml_closure_gen.c"
#line 49 "ml_backend.ml_closure_gen.c"
#include "ml_backend.ml_closure_gen.mh"

#line 52 "ml_backend.ml_closure_gen.c"
#line 53 "ml_backend.ml_closure_gen.c"
#ifndef ML_BACKEND__ML_CLOSURE_GEN_DECL_GUARD
#define ML_BACKEND__ML_CLOSURE_GEN_DECL_GUARD

#line 57 "ml_backend.ml_closure_gen.c"
#line 58 "ml_backend.ml_closure_gen.c"

#endif
#line 61 "ml_backend.ml_closure_gen.c"

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
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ml_closure_gen__type_ctor_info_closure_kind_0;
MR_decl_label7(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0, 2,3,4,6,9,8,5)
MR_decl_label3(ml_backend__ml_closure_gen__ml_gen_closure_10_0, 2,4,5)
MR_decl_label2(ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_0, 22,9)
MR_decl_label10(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0, 2,3,4,10,11,19,20,26,27,30)
MR_decl_label1(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0, 31)
MR_decl_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0, 2,3,4,5,6,7,8,9,10,12)
MR_decl_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0, 13,14,16,18,20,22,15,25,26,27)
MR_decl_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0, 28,30,32,35,36,37,31,44,45,46)
MR_decl_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0, 109,48,50,52,54,55,56,57,58,47)
MR_decl_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0, 60,62,63,64,66,70,73,72,69,75)
MR_decl_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0, 76,77,79,78,85,86,83,87,90,92)
MR_decl_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0, 89,93,95,96,97,98,99,101,102,103)
MR_decl_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0, 2,3,5,7,9,30,29,8,51,55)
MR_decl_label10(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0, 6,8,5,15,16,18,17,20,21,27)
MR_decl_label2(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0, 31,3)
MR_decl_label1(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_0, 2)
MR_decl_label10(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0, 60,8,10,7,17,18,20,19,22,23)
MR_decl_label2(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0, 29,33)
MR_decl_label10(ml_backend__ml_closure_gen__ml_gen_type_info_6_0, 4,6,3,13,14,16,15,18,19,25)
MR_decl_label1(ml_backend__ml_closure_gen__ml_gen_type_info_6_0, 29)
MR_decl_label1(ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_0, 2)
MR_decl_label10(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0, 2,10,11,12,13,14,17,18,19,23)
MR_decl_label6(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0, 22,30,33,21,16,6)
MR_decl_label3(ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_0, 2,3,4)
MR_decl_label10(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0, 2,4,13,15,12,26,27,29,28,35)
MR_decl_label3(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0, 36,42,46)
MR_decl_label9(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0, 6,3,12,13,14,19,21,22,23)
MR_decl_label10(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0, 56,4,7,6,10,11,14,5,18,17)
MR_decl_label4(fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0, 19,3,4,5)
MR_decl_static(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0)
MR_decl_static(ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_0)
MR_decl_static(fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0)
MR_decl_static(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0)
MR_decl_static(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0)
MR_decl_static(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0)
MR_decl_static(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0)
MR_decl_static(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0)
MR_decl_static(ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_0)
MR_def_extern_entry(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0)
MR_def_extern_entry(ml_backend__ml_closure_gen__ml_gen_closure_10_0)
MR_decl_static(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0)
MR_decl_static(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0)
MR_decl_static(ml_backend__ml_closure_gen__ml_gen_type_info_6_0)
MR_decl_static(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0)
MR_decl_static(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_0)
MR_decl_static(ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_0)
MR_decl_static(fn__ml_backend__ml_closure_gen__arg_delete_gc_statement_1_0)
MR_def_extern_entry(__Unify___ml_backend__ml_closure_gen__closure_kind_0_0)
MR_def_extern_entry(__Compare___ml_backend__ml_closure_gen__closure_kind_0_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
0
},
};

static const struct mercury_type_1 mercury_common_1[7] =
{
{
0,
MR_TAG_COMMON(2,0,0)
},
{
4,
MR_tbmkword(0, 2)
},
{
8,
MR_TAG_COMMON(3,1,1)
},
{
0,
MR_TAG_COMMON(3,1,2)
},
{
8,
MR_tbmkword(0, 5)
},
{
0,
MR_TAG_COMMON(3,1,4)
},
{
4,
MR_tbmkword(0, 5)
},
};

static const struct mercury_type_2 mercury_common_2[4] =
{
{
MR_TAG_COMMON(3,1,0)
},
{
MR_TAG_COMMON(3,1,5)
},
{
MR_tbmkword(0, 2)
},
{
MR_TAG_COMMON(0,3,5)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_layout_locn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_3 mercury_common_3[9] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(ll_backend__llds, layout_locn)
}
},
{
{
MR_TAG_COMMON(1,6,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,6,5),
MR_tbmkword(0, 0)
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
MR_tbmkword(0, 5),
MR_TAG_COMMON(0,6,8)
}
},
{
{
MR_tbmkword(0, 5),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 5),
MR_TAG_COMMON(1,3,6)
}
},
{
{
MR_tbmkword(0, 5),
MR_TAG_COMMON(1,3,7)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_initializer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_type_0;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_closure_arg_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_global_data_0;
static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(ll_backend__continuation_info, closure_arg_info),
MR_COMMON(4,0),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data)
}
},
};

static const struct mercury_type_6 mercury_common_6[10] =
{
{
MR_string_const("closure_layout_ptr", 18),
MR_tbmkword(0, 0)
},
{
MR_string_const("type_params", 11),
MR_tbmkword(0, 0)
},
{
MR_string_const(" = (MR_Box) ((MR_Closure *)\n", 28),
MR_tbmkword(0, 0)
},
{
MR_string_const(")->MR_closure_layout;\n", 22),
MR_tbmkword(0, 0)
},
{
MR_string_const(" = (MR_Box) MR_materialize_closure_type_params(\n", 48),
MR_tbmkword(0, 0)
},
{
MR_string_const(");\n", 3),
MR_tbmkword(0, 0)
},
{
MR_string_const(" = (MR_Box) MR_materialize_typeclass_info_type_params(\n(MR_Word) ", 65),
MR_tbmkword(0, 0)
},
{
MR_string_const(", (MR_Closure_Layout *) ", 24),
MR_tbmkword(0, 0)
},
{
MR_string_const("closure_arg", 11),
MR_tbmkword(0, 0)
},
{
MR_string_const("closure", 7),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument)
},
};

static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_COMMON(7,0),
MR_ENTRY_AP(fn__ml_backend__ml_closure_gen__arg_delete_gc_statement_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_type_info_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_type_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_1;
static const struct mercury_type_9 mercury_common_9[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_type_info_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(backend_libs__rtti, rtti_type_info),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(backend_libs__rtti, rtti_type_info),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data)
}
},
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_0 = {
	"higher_order_proc_closure",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_1 = {
	"typeclass_info_closure",
	1
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_2 = {
	"special_pred_closure",
	2
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_closure_gen__enum_value_ordered_closure_kind_0[] = {
	&mercury_data_ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_0,
	&mercury_data_ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_1,
	&mercury_data_ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_2
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_closure_gen__enum_name_ordered_closure_kind_0[] = {
	&mercury_data_ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_0,
	&mercury_data_ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_2,
	&mercury_data_ml_backend__ml_closure_gen__enum_functor_desc_closure_kind_0_1
};

const MR_Integer mercury_data_ml_backend__ml_closure_gen__functor_number_map_closure_kind_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_closure_gen__type_ctor_info_closure_kind_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_closure_gen__closure_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_closure_gen__closure_kind_0_0)),
	"ml_backend.ml_closure_gen",
	"closure_kind",
	{ (void *)mercury_data_ml_backend__ml_closure_gen__enum_name_ordered_closure_kind_0 },
	{ (void *)mercury_data_ml_backend__ml_closure_gen__enum_value_ordered_closure_kind_0 },
	3,
	4,
	mercury_data_ml_backend__ml_closure_gen__functor_number_map_closure_kind_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_closure_gen",
"ml_backend.ml_closure_gen",
"ml_gen_type_info_defn",
4,
0
},
"ml_backend.ml_closure_gen",
"ml_closure_gen.m",
407,
"45"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_type_info_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_closure_gen",
"ml_backend.ml_closure_gen",
"ml_gen_type_info_defn",
4,
0
},
"ml_backend.ml_closure_gen",
"ml_closure_gen.m",
407,
"45"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_closure_gen",
"ml_backend.ml_closure_gen",
"ml_gen_maybe_pseudo_type_info_defn",
4,
0
},
"ml_backend.ml_closure_gen",
"ml_closure_gen.m",
359,
"58"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_closure_gen",
"ml_backend.ml_closure_gen",
"ml_gen_maybe_pseudo_type_info_defn",
4,
0
},
"ml_backend.ml_closure_gen",
"ml_closure_gen.m",
359,
"58"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_1 = {
{
MR_FUNCTION,
"ml_backend.ml_closure_gen",
"ml_backend.ml_closure_gen",
"arg_delete_gc_statement",
2,
0
},
"ml_backend.ml_closure_gen",
"ml_closure_gen.m",
721,
"45"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_closure_gen",
"ml_backend.ml_closure_gen",
"ml_stack_layout_construct_closure_arg_rval",
5,
0
},
"ml_backend.ml_closure_gen",
"ml_closure_gen.m",
236,
"7"
};


extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0);
MR_decl_entry(fn__list__duplicate_2_0);
MR_decl_entry(parse_tree__prog_type__construct_higher_order_type_5_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__sample_typeclass_info_type_0_0);
MR_decl_entry(ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module0)
	MR_init_entry1(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0);
	MR_init_label7(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0,2,3,4,6,9,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'gen_closure_gc_statement'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0_i2);
MR_def_label(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__c_pointer_type_0_0,
		ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0_i3);
MR_def_label(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0_i4);
MR_def_label(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_higher_order_type_5_0,
		ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0_i9);
MR_def_label(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0_i8);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__sample_typeclass_info_type_0_0,
		ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0_i9);
MR_def_label(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0);
	}
MR_def_label(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_closure_gen", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_closure_gen.gen_closure_gc_statement\'/10", 65);
	MR_r3 = (MR_Word) MR_string_const("special_pred_closure", 20);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0_i5);
MR_def_label(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_label_func_6_0);
MR_decl_entry(fn__ml_backend__mlds__set_per_instance_2_0);
MR_decl_entry(fn__ml_backend__mlds__set_access_2_0);

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module1)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_0);
	MR_init_label3(ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_wrapper_func'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_sv(4) = MR_tempr5;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tempr5;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr4;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_label_func_6_0,
		ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_0_i2);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tfield(0, MR_r1, 2);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ml_backend__mlds__set_per_instance_2_0,
		ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_0_i3);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__set_access_2_0,
		ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_0_i4);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module2)
	MR_init_entry1(fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0);
	MR_init_label4(fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0,19,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_wrapper_head_var_names'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0_i19);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0_i3);
MR_def_label(fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("wrapper_arg_", 12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0_i4);
MR_def_label(fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0,
		fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0_i5);
MR_def_label(fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_type_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_lval_4_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0);
MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__get_copy_out_option_2_0);
MR_decl_entry(fn__check_hlds__type_util__check_dummy_type_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0);
MR_decl_entry(require__sorry_3_0);

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module3)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0);
	MR_init_label10(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,2,10,11,12,13,14,17,18,19,23)
	MR_init_label6(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,22,30,33,21,16,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_wrapper_arg_lvals'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_r8;
	MR_proceed();
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i6);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r4;
	MR_sv(1) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_r7;
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_tfield(1, MR_r2, 1);
	MR_sv(13) = MR_tfield(1, MR_r3, 0);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r7 = ((MR_Integer) MR_r7 + (MR_Integer) 1);
	MR_np_localcall_lab(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,
		ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i10);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(14) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_type_3_0,
		ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i11);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i12);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i13);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i14);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i16);
	}
	MR_r1 = MR_sv(14);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0,
		ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i17);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__get_copy_out_option_2_0,
		ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i18);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i19);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(13),1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i23);
	}
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_r2 = MR_r5;
	MR_r4 = MR_sv(14);
	MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i22);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i21);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i21);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i21);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i21);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r4 = MR_sv(14);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i30);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(12);
	MR_tfield(1, MR_r2, 1) = MR_sv(9);
	MR_decr_sp_and_return(15);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_tempr2 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_local_for_output_arg_7_0,
		ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0_i33);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(9);
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr3;
	MR_decr_sp_and_return(15);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_sv(9);
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(14);
	MR_decr_sp_and_return(15);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(12);
	MR_tfield(1, MR_r2, 1) = MR_sv(9);
	MR_r1 = MR_sv(8);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(14);
	MR_decr_sp_and_return(15);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_closure_gen", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_closure_gen.ml_gen_wrapper_arg_lvals\'/12", 65);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__var_to_int_2_0);
MR_decl_entry(set__remove_least_3_0);
MR_decl_entry(ll_backend__stack_layout__represent_locn_as_int_2_0);

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module4)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0);
	MR_init_label10(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,56,4,7,6,10,11,14,5,18,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_stack_layout_construct_type_param_locn_vector'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0_i56);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(term__var_to_int_2_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0_i4);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r3 = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0_i5);
	}
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, layout_locn);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__remove_least_3_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0_i7);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0_i6);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ll_backend__stack_layout__represent_locn_as_int_2_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0_i11);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_closure_gen", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_closure_gen.ml_stack_layout_construct_type_param_locn_vector\'/3", 88);
	MR_r3 = (MR_Word) MR_string_const("tvar has empty set of locations", 31);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0_i10);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__stack_layout__represent_locn_as_int_2_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0_i11);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0_i14);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0_i17);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r3;
	MR_np_localcall_lab(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0_i18);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,2,0);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_closure_gen", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_closure_gen.ml_stack_layout_construct_type_param_locn_vector\'/3", 88);
	MR_r3 = (MR_Word) MR_string_const("unsorted tvars", 14);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);
MR_decl_entry(ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_0);

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module5)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0);
	MR_init_label9(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0,6,3,12,13,14,19,21,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_stack_layout_construct_tvar_vector'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__is_empty_1_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0_i6);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,3);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0_i12);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(ml_backend__ml_closure_gen__ml_stack_layout_construct_type_param_locn_vector_3_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0_i13);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(list__length_2_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0_i14);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(6);
	MR_sv(6) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	MR_r2 = ((MR_Integer) MR_tfield(2, MR_tempr1, 0) + (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	}
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0_i19);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0_i21);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0_i22);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0_i23);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__continuation_info__generate_closure_layout_4_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_closure_arg_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_global_data_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(assoc_list__keys_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_0);

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module6)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0);
	MR_init_label10(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,2,3,4,10,11,19,20,26,27,30)
	MR_init_label1(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_closure_layout'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_i2);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(ll_backend__continuation_info__generate_closure_layout_4_0,
		ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_i3);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_i4);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,2,1);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_tempr3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, closure_arg_info);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data);
	MR_r5 = MR_tfield(0, MR_tempr2, 0);
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_i10);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_i11);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_initializer);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_type);
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_i19);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("typevar_vector", 14);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(ml_backend__ml_closure_gen__ml_stack_layout_construct_tvar_vector_8_0,
		ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_i20);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tfield(3, MR_r2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_i26);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_i27);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r4, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,1,6);
	MR_r2 = (MR_Word) MR_string_const("closure_layout", 14);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_0,
		ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_i30);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0_i31);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module7)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0);
	MR_init_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0,2,3,5,7,9,30,29,8,51,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_closure_wrapper_gc_decls'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(3) = MR_tempr1;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0_i2);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0_i3);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,6,0));
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 5);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0_i5);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(10) = (MR_Word) MR_tmkword(1, MR_TAG_COMMON(0,6,1));
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 5);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0_i7);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0_i9);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_r6 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_r7 = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,3,2);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r8 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = (MR_Word) MR_TAG_COMMON(1,6,2);
	MR_tfield(1, MR_tempr5, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr7, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr7;
	MR_tfield(3, MR_tempr7, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr7, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr7, 2) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr8, 3, (MR_Integer) 2);
	MR_r8 = MR_tempr8;
	MR_tfield(3, MR_tempr8, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr8, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr9;
	MR_tfield(0, MR_tempr9, 0) = MR_tempr8;
	MR_tempr14 = MR_sv(4);
	MR_tfield(0, MR_tempr9, 1) = MR_tempr14;
	MR_tag_alloc_heap(MR_tempr10, 3, (MR_Integer) 2);
	MR_r8 = MR_tempr10;
	MR_tfield(3, MR_tempr10, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr10, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_r9 = MR_tempr11;
	MR_tfield(1, MR_tempr11, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr11, 1) = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = (MR_Word) MR_TAG_COMMON(1,6,4);
	MR_tfield(1, MR_tempr12, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr13;
	MR_tfield(1, MR_tempr13, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr13, 1) = MR_tempr12;
	MR_r4 = MR_tempr14;
	MR_sv(8) = MR_sv(7);
	MR_r1 = MR_sv(9);
	MR_r3 = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr9);
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0_i8);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0_i29);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0_i30);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15, MR_tempr16, MR_tempr17;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r5 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tempr16 = MR_sv(5);
	MR_tfield(2, MR_tempr3, 0) = MR_tempr16;
	MR_tfield(2, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tempr4;
	MR_tempr17 = MR_sv(4);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr17;
	MR_tag_alloc_heap(MR_tempr6, 3, (MR_Integer) 2);
	MR_r5 = MR_tempr6;
	MR_tfield(3, MR_tempr6, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr6, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr7;
	MR_tfield(1, MR_tempr7, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr8, 2, (MR_Integer) 1);
	MR_r8 = MR_tempr8;
	MR_tfield(2, MR_tempr8, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr9, 1, (MR_Integer) 1);
	MR_r7 = MR_tempr9;
	MR_tfield(1, MR_tempr9, 0) = MR_tempr16;
	MR_tag_alloc_heap(MR_tempr10, 2, (MR_Integer) 1);
	MR_r4 = MR_tempr10;
	MR_tfield(2, MR_tempr10, 0) = MR_tempr9;
	MR_tag_alloc_heap(MR_tempr11, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr11;
	MR_tfield(1, MR_tempr11, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr11, 1) = (MR_Word) MR_TAG_COMMON(1,3,3);
	MR_tag_alloc_heap(MR_tempr12, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr12;
	MR_tfield(1, MR_tempr12, 0) = (MR_Word) MR_TAG_COMMON(1,6,7);
	MR_tfield(1, MR_tempr12, 1) = MR_tempr11;
	MR_tag_alloc_heap(MR_tempr13, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr13;
	MR_tfield(1, MR_tempr13, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr13, 1) = MR_tempr12;
	MR_tag_alloc_heap(MR_tempr14, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr14;
	MR_tfield(1, MR_tempr14, 0) = (MR_Word) MR_TAG_COMMON(1,6,6);
	MR_tfield(1, MR_tempr14, 1) = MR_tempr13;
	MR_tag_alloc_heap(MR_tempr15, 1, (MR_Integer) 2);
	MR_sv(6) = MR_tempr15;
	MR_tfield(1, MR_tempr15, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr15, 1) = MR_tempr14;
	MR_r4 = MR_tempr17;
	MR_sv(8) = MR_r3;
	MR_r1 = MR_sv(9);
	MR_r3 = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr5);
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0_i8);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_closure_gen", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_closure_gen.ml_gen_closure_wrapper_gc_decls\'/9", 71);
	MR_r3 = (MR_Word) MR_string_const("special_pred_closure", 20);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0_i8);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r4;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0_i51);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_r3 = (MR_Word) MR_tmkword(2, (MR_Word *) MR_tempr1);
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0_i55);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(6);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module8)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_0);
	MR_init_label2(ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_0,22,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_closure_field_lvals'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r3 <= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_0_i22);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = ((MR_Integer) MR_r3 + (MR_Integer) MR_r2);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 5);
	MR_sv(1) = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 3) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_tempr3, 4) = (MR_Word) MR_tbmkword(0, 5);
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	}
	MR_np_localcall_lab(ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_0,
		ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_0_i9);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_purity_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(fn__hlds__code_model__proc_info_interface_code_model_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_var_names_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0);
MR_decl_entry(list__drop_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(ml_backend__ml_code_util__ml_gen_params_8_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__list__det_head_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_initial_cont_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_lval_0;
MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(fn__check_hlds__mode_util__select_output_vars_4_0);
MR_decl_entry(fn__map__apply_to_list_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0);
MR_decl_entry(fn__list__append_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_assign_3_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_closure_arg_offset_0_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_0);
MR_decl_entry(ml_backend__ml_call_gen__ml_gen_call_12_0);
MR_decl_entry(libs__globals__get_gc_method_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_0);
MR_decl_entry(ml_backend__ml_code_util__ml_append_return_statement_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_block_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_new_func_label_5_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_add_closure_wrapper_defn_3_0);

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module9)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0);
	MR_init_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,2,3,4,5,6,7,8,9,10,12)
	MR_init_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,13,14,16,18,20,22,15,25,26,27)
	MR_init_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,28,30,32,35,36,37,31,44,45,46)
	MR_init_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,109,48,50,52,54,55,56,57,58,47)
	MR_init_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,60,62,63,64,66,70,73,72,69,75)
	MR_init_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,76,77,79,78,85,86,83,87,90,92)
	MR_init_label10(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,89,93,95,96,97,98,99,101,102,103)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_closure_wrapper'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(21);
	MR_sv(21) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(13) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i2);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i3);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_purity_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i4);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i5);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(17);
	MR_sv(17) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i6);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i7);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i8);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__code_model__proc_info_interface_code_model_1_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i9);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i10);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i12);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_names_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i13);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i14);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__drop_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i16);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__drop_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i18);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(17);
	MR_sv(17) = MR_r2;
	MR_sv(18) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__drop_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i20);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i15);
	}
	MR_sv(18) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(8);
	MR_np_call_localret_ent(list__drop_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i22);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_sv(12) = MR_sv(18);
	MR_sv(18) = MR_tempr1;
	MR_r1 = MR_sv(14);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i26);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_closure_gen", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_closure_gen.ml_gen_closure_wrapper\'/9", 62);
	MR_r3 = (MR_Word) MR_string_const("list.drop failed", 16);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i25);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__list__length_1_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i26);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_closure_gen__ml_gen_wrapper_head_var_names_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i27);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r2 = MR_sv(18);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_params_8_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i28);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_tfield(0, MR_r1, 1);
	MR_sv(19) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_r1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r4 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i30);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i32);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_sv(14);
	MR_r6 = MR_sv(3);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(6);
	MR_r3 = MR_sv(17);
	MR_r9 = MR_r2;
	MR_r2 = MR_sv(18);
	MR_r1 = MR_sv(13);
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_r9;
	MR_r8 = MR_sv(19);
	MR_r7 = (MR_Integer) 1;
	MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i31);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,6,8);
	MR_r1 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_make_boxed_types_1_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i35);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__det_head_1_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i36);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(19);
	}
	MR_np_call_localret_ent(ml_backend__ml_closure_gen__gen_closure_gc_statement_10_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i37);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(10));
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(0, MR_tempr2, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(15);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(14);
	MR_r6 = MR_sv(3);
	MR_r4 = MR_sv(11);
	MR_r5 = MR_sv(6);
	MR_r3 = MR_sv(17);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(18);
	MR_r1 = MR_sv(13);
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_sv(11) = MR_tempr2;
	MR_r8 = MR_tempr1;
	MR_r7 = (MR_Integer) 1;
	}
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r6;
	MR_sv(6) = MR_r5;
	MR_sv(17) = MR_r3;
	MR_sv(18) = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_closure_gen__ml_gen_wrapper_arg_lvals_12_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i44);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_sv(19) = MR_r4;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i45);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i46);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i48);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_sv(10) = MR_r1;
	MR_sv(20) = MR_sv(19);
	MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i47);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),2)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i109);
	}
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Integer) 240;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i50);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i52);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_initial_cont_4_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i57);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_sv(20) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i54);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(16);
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(17);
	MR_r5 = MR_sv(16);
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_util__select_output_vars_4_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i55);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(16);
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__map__apply_to_list_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i56);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_initial_cont_4_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i57);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_push_success_cont_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i58);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_sv(20) = MR_r1;
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i60);
	}
	MR_sv(16) = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_sv(20);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i76);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(9), 0);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(17) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(0,6,9);
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(18));
	MR_r2 = (MR_Word) MR_tbmkword(0, 5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(15);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i62);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,6,9);
	MR_r3 = (MR_Word) MR_tbmkword(0, 5);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i63);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(17);
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(16);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_lval_4_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i64);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i66);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(18);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tag_alloc_heap(MR_sv(16), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(16), 0) = MR_r2;
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i70);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_closure_arg_offset_0_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i73);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i72);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_typeclass_info_arg_offset_0_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i73);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_tempr1;
	MR_r5 = MR_sv(20);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i75);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_closure_gen", 25);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_closure_gen.ml_gen_closure_wrapper\'/9", 62);
	MR_r3 = (MR_Word) MR_string_const("special_pred_closure", 20);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i69);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__ml_closure_gen__ml_gen_closure_field_lvals_7_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i75);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(13);
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_lval);
	MR_np_call_localret_ent(fn__list__append_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i76);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(3);
	MR_r8 = (MR_Integer) 1;
	MR_r9 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_call_gen__ml_gen_call_12_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i77);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(16),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i79);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_sv(16) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i78);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_tfield(1, MR_sv(16), 0);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_tempr2, 0);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(16) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(0, MR_tempr2, 1);
	MR_tfield(1, MR_tempr3, 1) = MR_r2;
	MR_r1 = MR_sv(10);
	MR_sv(8) = MR_r3;
	}
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i83);
	}
	MR_r2 = MR_tfield(1, MR_sv(9), 0);
	MR_sv(17) = MR_tfield(0, MR_r2, 0);
	MR_sv(9) = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(libs__globals__get_gc_method_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i85);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 6 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i83);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_gc_decls_9_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i86);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_sv(5) = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_r5 = MR_sv(16);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i87);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_r5 = MR_sv(16);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(8);
	MR_sv(5) = MR_r1;
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i89);
	}
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_sv(16) = MR_r5;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_succeeded_var_decl_1_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i90);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(16);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_append_return_statement_6_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i92);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i97);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	MR_sv(6) = MR_r2;
	MR_sv(4) = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_append_return_statement_6_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i93);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i95);
	}
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i97);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_pop_success_cont_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i96);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(2);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i97);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i98);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_block_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i99);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_new_func_label_5_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i101);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r2 = MR_sv(11);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_closure_gen__ml_gen_wrapper_func_7_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i102);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(11));
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_add_closure_wrapper_defn_3_0,
		ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0_i103);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_unify_gen__ml_gen_new_object_15_0);

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module10)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_gen_closure_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_gen_closure_10_0);
	MR_init_label3(ml_backend__ml_closure_gen__ml_gen_closure_10_0,2,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_closure'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_closure_gen__ml_gen_closure_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r8;
	}
	MR_np_call_localret_ent(ml_backend__ml_closure_gen__ml_gen_closure_layout_7_0,
		ml_backend__ml_closure_gen__ml_gen_closure_10_0_i2);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		ml_backend__ml_closure_gen__ml_gen_closure_10_0_i4);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(10);
	}
	MR_np_call_localret_ent(ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_0,
		ml_backend__ml_closure_gen__ml_gen_closure_10_0_i5);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_closure_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r6 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(2);
	MR_r7 = (MR_Word) MR_TAG_COMMON(1,3,8);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(4);
	MR_r10 = (MR_Word) MR_tbmkword(0, 0);
	MR_r11 = MR_sv(5);
	MR_r12 = MR_sv(6);
	MR_r13 = MR_tempr1;
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(ml_backend__ml_unify_gen__ml_gen_new_object_15_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0);
MR_decl_entry(backend_libs__rtti__rtti_data_to_id_2_0);
MR_decl_entry(ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module11)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0);
	MR_init_label10(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,60,8,10,7,17,18,20,19,22,23)
	MR_init_label2(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,29,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_pseudo_type_info'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_i60);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(3, MR_r2, 0);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_proceed();
	}
MR_def_label(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_i7);
	}
	MR_sv(2) = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0,
		ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_i8);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 16);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_i10);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr3 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__rtti__rtti_data_to_id_2_0,
		ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_i17);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_0,
		ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_i18);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_rval_and_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_i20);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_i19);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_i22);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_i23);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr5 = MR_sv(5);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr3;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr4;
	}
	MR_np_call_localret_ent(ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_0,
		ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_i29);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r4 = MR_mask_field(MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0_i33);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__pseudo_type_info__construct_pseudo_type_info_4_0);

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module12)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0);
	MR_init_label10(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,2,4,13,15,12,26,27,29,28,35)
	MR_init_label3(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,36,42,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_stack_layout_construct_closure_arg_rval'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = (MR_Integer) -1;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(backend_libs__pseudo_type_info__construct_pseudo_type_info_4_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_i2);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tfield(3, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_tfield(3, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_i12);
	}
	MR_sv(3) = MR_body((MR_Integer) MR_r1, (MR_Integer) 0);
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_i13);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 16);
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_i15);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr5 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr3;
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(backend_libs__rtti__rtti_data_to_id_2_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_i26);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_i27);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_rval_and_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_i29);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_i28);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r2, 1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_tfield(0, MR_r2, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_i35);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_i36);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr5 = MR_sv(5);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_tempr3;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_i42);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r4 = MR_mask_field(MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_maybe_pseudo_type_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0_i46);
MR_def_label(ml_backend__ml_closure_gen__ml_stack_layout_construct_closure_arg_rval_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_r2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__rtti__type_ctor_info_rtti_type_info_0;

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module13)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_gen_type_info_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_gen_type_info_6_0);
	MR_init_label10(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,4,6,3,13,14,16,15,18,19,25)
	MR_init_label1(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_type_info'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__ml_gen_type_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_type_info_6_0_i3);
	}
	MR_sv(2) = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tfield(0, MR_sv(2), 0);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0,
		ml_backend__ml_closure_gen__ml_gen_type_info_6_0_i4);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 16);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_closure_gen__ml_gen_type_info_6_0_i6);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr3 = MR_sv(2);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__rtti__rtti_data_to_id_2_0,
		ml_backend__ml_closure_gen__ml_gen_type_info_6_0_i13);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_0,
		ml_backend__ml_closure_gen__ml_gen_type_info_6_0_i14);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_rval_and_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ml_backend__ml_closure_gen__ml_gen_type_info_6_0_i16);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_type_info_6_0_i15);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_closure_gen__ml_gen_type_info_6_0_i18);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_closure_gen__ml_gen_type_info_6_0_i19);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr5 = MR_sv(5);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_tempr3;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr4;
	}
	MR_np_call_localret_ent(ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_0,
		ml_backend__ml_closure_gen__ml_gen_type_info_6_0_i25);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r5 = MR_r1;
	MR_r4 = MR_mask_field(MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_type_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__ml_closure_gen__ml_gen_type_info_6_0_i29);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module14)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0);
	MR_init_label10(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,6,8,5,15,16,18,17,20,21,27)
	MR_init_label2(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,31,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_maybe_pseudo_type_info'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_i5);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	MR_r1 = MR_tfield(0, MR_sv(3), 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__fixup_builtin_module_1_0,
		ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_i6);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 16);
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_i8);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr3 = MR_sv(3);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(backend_libs__rtti__rtti_data_to_id_2_0,
		ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_i15);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_0,
		ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_i16);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_rval_and_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__search_3_0,
		ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_i18);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_i17);
	}
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_i20);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_i21);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tempr5 = MR_sv(5);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_r1;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tempr3;
	MR_tempr4 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr4;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_0,
		ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_i27);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r5 = MR_r1;
	MR_r4 = MR_mask_field(MR_sv(1), 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__rtti, rtti_type_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_global_data);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0_i31);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__ml_closure_gen__ml_gen_pseudo_type_info_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module15)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_0);
	MR_init_label1(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_maybe_pseudo_type_info_defn'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_6_0,
		ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_0_i2);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_maybe_pseudo_type_info_defn_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module16)
	MR_init_entry1(ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_0);
	MR_init_label1(ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_type_info_defn'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ml_backend__ml_closure_gen__ml_gen_type_info_6_0,
		ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_0_i2);
MR_def_label(ml_backend__ml_closure_gen__ml_gen_type_info_defn_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module17)
	MR_init_entry1(fn__ml_backend__ml_closure_gen__arg_delete_gc_statement_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_closure_gen__arg_delete_gc_statement_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'arg_delete_gc_statement'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_closure_gen__arg_delete_gc_statement_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_r2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module18)
	MR_init_entry1(__Unify___ml_backend__ml_closure_gen__closure_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_closure_gen__closure_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ml_closure_gen__closure_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ml_backend__ml_closure_gen_module19)
	MR_init_entry1(__Compare___ml_backend__ml_closure_gen__closure_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_closure_gen__closure_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ml_closure_gen__closure_kind_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_closure_gen_maybe_bunch_0(void)
{
	ml_backend__ml_closure_gen_module0();
	ml_backend__ml_closure_gen_module1();
	ml_backend__ml_closure_gen_module2();
	ml_backend__ml_closure_gen_module3();
	ml_backend__ml_closure_gen_module4();
	ml_backend__ml_closure_gen_module5();
	ml_backend__ml_closure_gen_module6();
	ml_backend__ml_closure_gen_module7();
	ml_backend__ml_closure_gen_module8();
	ml_backend__ml_closure_gen_module9();
	ml_backend__ml_closure_gen_module10();
	ml_backend__ml_closure_gen_module11();
	ml_backend__ml_closure_gen_module12();
	ml_backend__ml_closure_gen_module13();
	ml_backend__ml_closure_gen_module14();
	ml_backend__ml_closure_gen_module15();
	ml_backend__ml_closure_gen_module16();
	ml_backend__ml_closure_gen_module17();
	ml_backend__ml_closure_gen_module18();
	ml_backend__ml_closure_gen_module19();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_closure_gen__init(void);
void mercury__ml_backend__ml_closure_gen__init_type_tables(void);
void mercury__ml_backend__ml_closure_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_closure_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_closure_gen__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__ml_closure_gen__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__ml_closure_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_closure_gen_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_closure_gen__type_ctor_info_closure_kind_0,
		ml_backend__ml_closure_gen__closure_kind_0_0);
	mercury__ml_backend__ml_closure_gen__init_debugger();
}

void mercury__ml_backend__ml_closure_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_closure_gen__type_ctor_info_closure_kind_0);
	}
}


void mercury__ml_backend__ml_closure_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_closure_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_closure_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_closure_gen__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__ml_closure_gen__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
