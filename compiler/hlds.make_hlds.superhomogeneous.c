/*
** Automatically generated from `superhomogeneous.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__hlds__make_hlds__superhomogeneous__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "hlds.make_hlds.superhomogeneous.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "hlds.make_hlds.superhomogeneous.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "hlds.make_hlds.superhomogeneous.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "hlds.make_hlds.superhomogeneous.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "hlds.make_hlds.superhomogeneous.c"
#line 44 "hlds.make_hlds.superhomogeneous.c"
#include "hlds.make_hlds.superhomogeneous.mh"

#line 47 "hlds.make_hlds.superhomogeneous.c"
#line 48 "hlds.make_hlds.superhomogeneous.c"
#ifndef HLDS__MAKE_HLDS__SUPERHOMOGENEOUS_DECL_GUARD
#define HLDS__MAKE_HLDS__SUPERHOMOGENEOUS_DECL_GUARD

#line 52 "hlds.make_hlds.superhomogeneous.c"
#line 53 "hlds.make_hlds.superhomogeneous.c"

#endif
#line 56 "hlds.make_hlds.superhomogeneous.c"

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
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_hlds__superhomogeneous__type_ctor_info_num_added_goals_0,
	mercury_data_hlds__make_hlds__superhomogeneous__type_ctor_info_arg_context_0;
MR_decl_label4(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0, 22,5,2,1)
MR_decl_label8(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0, 4,6,2,10,12,13,8,14)
MR_decl_label8(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0, 15,16,17,20,18,22,24,25)
MR_decl_label8(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0, 26,27,28,29,30,31,32,34)
MR_decl_label8(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0, 35,36,37,38,39,40,41,42)
MR_decl_label1(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0, 43)
MR_decl_label8(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0, 6,7,8,9,10,11,12,13)
MR_decl_label4(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0, 5,3,16,18)
MR_decl_label8(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0, 5,2,3,11,10,9,14,15)
MR_decl_label5(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0, 15,4,5,6,7)
MR_decl_label7(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0, 31,5,3,10,11,9,13)
MR_decl_label8(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0, 5,2,3,11,10,9,14,15)
MR_decl_label6(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0, 16,4,5,6,7,8)
MR_decl_label8(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0, 39,5,3,10,12,14,15,9)
MR_decl_label1(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0, 16)
MR_decl_label6(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0, 16,4,5,6,7,8)
MR_decl_label5(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0, 2,10,11,12,6)
MR_decl_label6(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0, 2,3,4,10,5,12)
MR_decl_label5(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0, 2,7,3,4,9)
MR_decl_label2(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0, 2,3)
MR_decl_label3(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_2_9_0, 11,4,3)
MR_decl_label8(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0, 51,8,12,10,16,14,52,1)
MR_decl_label5(hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0, 2,6,7,8,3)
MR_decl_label1(hlds__make_hlds__superhomogeneous__report_error_in_type_qualification_5_0, 2)
MR_decl_label1(hlds__make_hlds__superhomogeneous__report_string_term_error_5_0, 2)
MR_decl_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0, 2,6,5,8,9,10,11,12)
MR_decl_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0, 15,16,14,17,18,3,26,27)
MR_decl_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0, 28,29,30,31,32,20,34,35)
MR_decl_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0, 36,39,37,41,43,44,45,46)
MR_decl_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0, 49,50,51,48,52,33,60,61)
MR_decl_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0, 62,64,65,66,69,70,71,68)
MR_decl_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0, 72,73,74,54,85,98,99,102)
MR_decl_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0, 103,104,101,105,106,107,108,109)
MR_decl_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0, 110,111,112,113,76,121,123,124)
MR_decl_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0, 115,139,141,142,143,144,127,145)
MR_decl_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0, 148,149,147,150,146,153,154,152)
MR_decl_label5(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0, 155,156,157,160,161)
MR_decl_label6(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0, 10,12,14,6,31,1)
MR_decl_label8(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0, 3,2,33,12,16,18,22,6)
MR_decl_label4(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0, 50,11,9,93)
MR_def_extern_entry(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_2_9_0)
MR_def_extern_entry(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0)
MR_decl_static(fn__hlds__make_hlds__superhomogeneous__this_file_0_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0)
MR_def_extern_entry(hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0)
MR_def_extern_entry(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_supplied_contexts_17_0)
MR_def_extern_entry(hlds__make_hlds__superhomogeneous__append_arg_unifications_17_0)
MR_def_extern_entry(hlds__make_hlds__superhomogeneous__unravel_unification_18_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__report_error_in_type_qualification_5_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__report_string_term_error_5_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__superhomogeneous__num_added_goals_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__superhomogeneous__num_added_goals_0_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__IntroducedFrom__pred__unravel_var_functor_unification__582__1_5_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__IntroducedFrom__pred__unravel_var_functor_unification__615__1_5_0)
MR_decl_static(hlds__make_hlds__superhomogeneous__IntroducedFrom__pred__unravel_var_functor_unification__665__1_5_0)
MR_decl_static(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
static const struct mercury_type_0 mercury_common_0[9] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_CTOR1_ADDR(term, term),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,4,2),
MR_TAG_COMMON(1,0,7)
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
15
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_2 mercury_common_2[3] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_COMMON(0,2)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_STRING_CTOR_ADDR,
MR_TAG_COMMON(0,0,4)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_INT_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_4;
static const struct mercury_type_3 mercury_common_3[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(0,1),
MR_CTOR0_ADDR(term, context),
MR_COMMON(2,0),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(term, context),
MR_COMMON(0,1),
MR_COMMON(2,0),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_3,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(term, context),
MR_COMMON(0,1),
MR_COMMON(2,0),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(term, context),
MR_COMMON(0,1),
MR_COMMON(2,0),
MR_COMMON(0,3),
MR_COMMON(0,3)
}
},
};

static const struct mercury_type_4 mercury_common_4[4] =
{
{
3,
MR_string_const("In explicit type qualification:", 31)
},
{
2,
MR_string_const(":", 1)
},
{
2,
MR_string_const(".", 1)
},
{
3,
MR_string_const("Error:", 6)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__superhomogeneous__type_ctor_info_num_added_goals_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__superhomogeneous__num_added_goals_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__superhomogeneous__num_added_goals_0_0)),
	"hlds.make_hlds.superhomogeneous",
	"num_added_goals",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0 = {
	"ac_head",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__superhomogeneous__field_types_arg_context_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_call_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_call_id_0;

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_call_id_0
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1 = {
	"ac_call",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__superhomogeneous__field_types_arg_context_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_unify_main_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_cons_id_0builtin__type_ctor_info_int_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_cons_id_0builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2parse_tree__prog_data__type_ctor_info_cons_id_0builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_unify_main_context_0;

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_unify_main_context_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_cons_id_0builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2 = {
	"ac_functor",
	3,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__superhomogeneous__field_types_arg_context_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0[] = {
	&mercury_data_hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1[] = {
	&mercury_data_hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2[] = {
	&mercury_data_hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2

};

const MR_DuPtagLayout mercury_data_hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__superhomogeneous__du_stag_ordered_arg_context_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0[] = {
	&mercury_data_hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_1,
	&mercury_data_hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_2,
	&mercury_data_hlds__make_hlds__superhomogeneous__du_functor_desc_arg_context_0_0
};

const MR_Integer mercury_data_hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__superhomogeneous__type_ctor_info_arg_context_0 = {
	0,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0)),
	"hlds.make_hlds.superhomogeneous",
	"arg_context",
	{ (void *)mercury_data_hlds__make_hlds__superhomogeneous__du_name_ordered_arg_context_0 },
	{ (void *)mercury_data_hlds__make_hlds__superhomogeneous__du_ptag_ordered_arg_context_0 },
	3,
	4,
	mercury_data_hlds__make_hlds__superhomogeneous__functor_number_map_arg_context_0
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_1 = {
{
MR_PREDICATE,
"hlds.make_hlds.superhomogeneous",
"hlds.make_hlds.superhomogeneous",
"report_error_in_type_qualification",
5,
0
},
"hlds.make_hlds.superhomogeneous",
"superhomogeneous.m",
526,
"d1;c22;t;c3;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_2 = {
{
MR_PREDICATE,
"hlds.make_hlds.superhomogeneous",
"hlds.make_hlds.superhomogeneous",
"lambda_superhomogeneous_m_582",
5,
0
},
"hlds.make_hlds.superhomogeneous",
"superhomogeneous.m",
582,
"d1;c22;e;e;t;c5;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_3 = {
{
MR_PREDICATE,
"hlds.make_hlds.superhomogeneous",
"hlds.make_hlds.superhomogeneous",
"lambda_superhomogeneous_m_615",
5,
0
},
"hlds.make_hlds.superhomogeneous",
"superhomogeneous.m",
615,
"d1;c22;e;e;e;c1;t;c4;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_4 = {
{
MR_PREDICATE,
"hlds.make_hlds.superhomogeneous",
"hlds.make_hlds.superhomogeneous",
"lambda_superhomogeneous_m_665",
5,
0
},
"hlds.make_hlds.superhomogeneous",
"superhomogeneous.m",
665,
"d1;c22;e;e;e;c1;e;t;d2;c3;"
};

MR_decl_entry(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(varset__new_var_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module0)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0);
	MR_init_label5(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0,2,7,3,4,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0,
		hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0_i2);
MR_def_label(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_r4;
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0_i7);
MR_def_label(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(4);
MR_def_label(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0_i9);
MR_def_label(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module1)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_2_9_0);
	MR_init_label3(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_2_9_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_2_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_2_9_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0,
		hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_2_9_0_i4);
MR_def_label(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_2_9_0_i11);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module2)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0);
	MR_init_label2(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_2_9_0,
		hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0_i2);
MR_def_label(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0_i3);
MR_def_label(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module3)
	MR_init_entry1(fn__hlds__make_hlds__superhomogeneous__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__superhomogeneous__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("superhomogeneous.m", 18);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__qual_info__qual_info_get_import_status_2_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0);
MR_decl_entry(parse_tree__module_qual__qualify_lambda_mode_list_7_0);
MR_decl_entry(hlds__make_hlds__qual_info__qual_info_set_mq_info_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module4)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0);
	MR_init_label5(hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0,2,6,7,8,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_import_status_2_0,
		hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0_i2);
MR_def_label(hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_get_mq_info_2_0,
		hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0_i6);
MR_def_label(hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(parse_tree__module_qual__qualify_lambda_mode_list_7_0,
		hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0_i7);
MR_def_label(hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__qual_info_set_mq_info_3_0,
		hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0_i8);
MR_def_label(hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(5);
MR_def_label(hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_undefined_2_0);
MR_decl_entry(check_hlds__mode_util__mode_is_output_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module5)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0);
	MR_init_label8(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0,51,8,12,10,16,14,52,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0_i51);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0_i52);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0_i52);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0_i1);
	}
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_sv(3) = MR_ctfield(1, MR_r3, 0);
	MR_sv(4) = MR_ctfield(1, MR_r4, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 1);
	MR_r3 = MR_ctfield(1, MR_r3, 1);
	MR_r4 = MR_ctfield(1, MR_r4, 1);
	MR_np_localcall_lab(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0,
		hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0_i8);
MR_def_label(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0_i1);
	}
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_undefined_2_0,
		hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0_i12);
MR_def_label(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(8);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(6);
	MR_tempr2 = MR_sv(7);
	MR_tempr3 = MR_sv(8);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0_i16);
MR_def_label(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(7);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_r4;
	MR_r2 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module6)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_r10;
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_to_conj_list_2_0);
MR_decl_entry(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_context_3_0);
MR_decl_entry(hlds__hlds_goal__conj_list_to_goal_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module7)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0);
	MR_init_label6(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0,16,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0_i16);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_r5;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	MR_r6 = MR_r10;
	MR_r7 = MR_r11;
	MR_proceed();
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0_i4);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0_i5);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r12 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r13 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(5);
	MR_r8 = (MR_Integer) 0;
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0_i6);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0_i7);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0_i8);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
MR_decl_entry(list__append_3_1);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module8)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0);
	MR_init_label8(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0,39,5,3,10,12,14,15,9)
	MR_init_label1(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0_i5);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_r7 = MR_r13;
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__make_hlds__superhomogeneous__this_file_0_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0_i16);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0_i9);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_ctfield(1, MR_r2, 1);
	MR_sv(7) = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_sv(8) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_r9;
	MR_r8 = MR_r10;
	MR_r9 = MR_r11;
	MR_r10 = MR_r12;
	MR_r11 = MR_r13;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0_i10);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0_i12);
	}
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r9 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r10 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r11 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r12 = MR_r6;
	MR_r6 = MR_sv(3);
	MR_r13 = MR_r7;
	MR_r7 = MR_sv(4);
	MR_r8 = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0_i39);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r10 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r11 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r12 = MR_r6;
	MR_r6 = MR_sv(3);
	MR_r13 = MR_r7;
	MR_r7 = MR_sv(4);
	MR_r8 = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_tempr1);
	}
	MR_np_localcall_lab(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0_i14);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0_i15);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__make_hlds__superhomogeneous__this_file_0_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0_i16);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_2_20_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("do_insert_arg_unifications_2: length mismatch", 45);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module9)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0);
	MR_init_label6(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0,16,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0_i16);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_r5;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	MR_r6 = MR_r10;
	MR_r7 = MR_r11;
	MR_proceed();
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0_i4);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0_i5);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r11 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r12 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(5);
	MR_r7 = (MR_Integer) 0;
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0_i6);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_context_3_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0_i7);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0_i8);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module10)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0);
	MR_init_label5(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0,2,10,11,12,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0_i2);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0_i2);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_r5 = MR_r10;
	MR_r6 = MR_r11;
	MR_r7 = MR_r12;
	MR_proceed();
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0_i6);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0_i6);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r4;
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_r6;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_ctfield(1, MR_r2, 1);
	MR_tempr4 = MR_r3;
	MR_sv(5) = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_tempr1 = MR_tempr4;
	MR_r3 = MR_tempr3;
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	MR_r7 = MR_r8;
	MR_r8 = MR_r9;
	MR_r9 = MR_r10;
	MR_r10 = MR_r11;
	MR_r11 = MR_r12;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0_i10);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_r4;
	MR_r4 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r8 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r10 = MR_r5;
	MR_r5 = MR_sv(6);
	MR_r11 = MR_r6;
	MR_r6 = MR_sv(2);
	MR_r12 = MR_r7;
	MR_r7 = ((MR_Integer) MR_sv(7) + (MR_Integer) MR_tempr1);
	}
	MR_np_localcall_lab(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0_i11);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0_i12);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_2_19_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("superhomogeneous.m", 18);
	MR_r2 = (MR_Word) MR_string_const("insert_arg_unifications_with_supplied_contexts", 46);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__var_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module11)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0);
	MR_init_label8(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0,5,2,3,11,10,9,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0_i5);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	MR_decr_sp_and_return(12);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(11);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r4,1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0_i9);
	}
	if (MR_PTAG_TEST(MR_r4,2)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0_i11);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_r5 != MR_tempr1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r12 = MR_r11;
	MR_r11 = MR_r10;
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r4 = (MR_Word) MR_tbmkword(0, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0_i14);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r12 = MR_r11;
	MR_r11 = MR_r10;
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0_i14);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(2, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(2, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r12 = MR_r11;
	MR_r11 = MR_r10;
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r4 = MR_ctfield(2, MR_r4, 1);
	MR_r1 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0_i14);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_r4, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r12 = MR_r11;
	MR_r11 = MR_r10;
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr2;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0_i14);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0_i15);
MR_def_label(hlds__make_hlds__superhomogeneous__do_insert_arg_unification_18_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module12)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0);
	MR_init_label5(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0,15,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0_i15);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_r5;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_r5 = MR_r9;
	MR_r6 = MR_r10;
	MR_r7 = MR_r11;
	MR_proceed();
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0_i4);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0,
		hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0_i5);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r12 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r13 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(5);
	MR_r8 = (MR_Integer) 0;
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0,
		hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0_i6);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0_i7);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module13)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0);
	MR_init_label7(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0,31,5,3,10,11,9,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0_i5);
	}
	MR_r1 = MR_r6;
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r4 = MR_r10;
	MR_r5 = MR_r11;
	MR_r6 = MR_r12;
	MR_r7 = MR_r13;
	MR_decr_sp_and_return(13);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__make_hlds__superhomogeneous__this_file_0_0,
		hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0_i13);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0_i9);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_ctfield(1, MR_r2, 1);
	MR_sv(7) = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_sv(12) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_r9;
	MR_r8 = MR_r10;
	MR_r9 = MR_r11;
	MR_r10 = MR_r12;
	MR_r11 = MR_r13;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0,
		hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0_i10);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(3) = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_tempr1);
	MR_sv(5) = MR_r3;
	MR_sv(8) = MR_r4;
	MR_sv(9) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_sv(11) = MR_r7;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	}
	MR_np_call_localret_ent(list__append_3_1,
		hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0_i11);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(5);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	MR_r13 = MR_sv(11);
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0_i31);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__make_hlds__superhomogeneous__this_file_0_0,
		hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0_i13);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_2_20_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("do_append_arg_unifications_2: length mismatch", 45);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module14)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0);
	MR_init_label8(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0,5,2,3,11,10,9,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_sv(10) = MR_r10;
	MR_sv(11) = MR_r11;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(__Unify___term__var_1_0,
		hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0_i5);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0_i2);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(8);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	MR_decr_sp_and_return(12);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_r9 = MR_sv(9);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(11);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r4,1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0_i9);
	}
	if (MR_PTAG_TEST(MR_r4,2)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0_i11);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_r5 != MR_tempr1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0_i11);
	}
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r12 = MR_r11;
	MR_r11 = MR_r10;
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r4 = (MR_Word) MR_tbmkword(0, 1);
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0_i14);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r12 = MR_r11;
	MR_r11 = MR_r10;
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0_i14);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(2, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_ctfield(2, MR_tempr3, 2);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r3;
	MR_r12 = MR_r11;
	MR_r11 = MR_r10;
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r4 = MR_ctfield(2, MR_r4, 1);
	MR_r1 = MR_tempr1;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0_i14);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(1, MR_r4, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_r5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r12 = MR_r11;
	MR_r11 = MR_r10;
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_tempr2;
	MR_r6 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0_i14);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0_i15);
MR_def_label(hlds__make_hlds__superhomogeneous__do_append_arg_unification_18_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module15)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0);
	MR_init_label6(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,2,3,4,10,5,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r9;
	MR_sv(8) = MR_r10;
	MR_r2 = MR_r8;
	MR_r3 = MR_r11;
	MR_r4 = MR_r12;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0,
		hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0_i2);
MR_def_label(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__substitute_state_var_mapping_8_0,
		hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0_i3);
MR_def_label(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r10 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r7 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r11 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,
		hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0_i4);
MR_def_label(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(6), 0);
	if (((MR_Integer) MR_r2 <= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0_i12);
	}
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0,
		hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0_i10);
MR_def_label(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr3;
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_tempr2;
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
MR_def_label(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
MR_decl_entry(hlds__make_hlds__qual_info__make_atomic_unification_9_0);

MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module16)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0);
	MR_init_label8(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,6,7,8,9,10,11,12,13)
	MR_init_label4(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,5,3,16,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_r7;
	MR_np_call_localret_ent(varset__new_var_3_0,
		hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0_i6);
MR_def_label(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r8 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(9);
	MR_r12 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0_i7);
MR_def_label(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_tempr2;
	MR_r8 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_r9 = MR_r4;
	MR_r4 = MR_sv(4);
	MR_r10 = MR_r5;
	MR_r5 = MR_sv(5);
	MR_r11 = MR_r6;
	MR_r6 = MR_sv(6);
	MR_r12 = MR_r7;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0_i8);
MR_def_label(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0_i9);
MR_def_label(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0_i10);
MR_def_label(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0_i11);
MR_def_label(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0_i12);
MR_def_label(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0_i13);
MR_def_label(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_sv(3));
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_decr_sp_and_return(11);
MR_def_label(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r13 = MR_r11;
	MR_r11 = MR_r9;
	MR_r9 = MR_r7;
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r12 = MR_r10;
	MR_r10 = MR_r8;
	MR_r8 = MR_r6;
	MR_r6 = MR_r4;
	MR_r4 = MR_ctfield(0, MR_tempr1, 2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0_i16);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r13 = MR_r11;
	MR_r11 = MR_r9;
	MR_r9 = MR_r7;
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r12 = MR_r10;
	MR_r10 = MR_r8;
	MR_r8 = MR_r6;
	MR_r6 = MR_r4;
	MR_r4 = MR_ctfield(0, MR_tempr1, 2);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_sv(1) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_tempr1;
	MR_r7 = MR_r9;
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__make_atomic_unification_9_0,
		hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0_i18);
MR_def_label(hlds__make_hlds__superhomogeneous__classify_unravel_unification_18_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__coerce_2_0);
MR_decl_entry(parse_tree__prog_io_util__parse_type_2_0);
MR_decl_entry(fn__varset__coerce_1_0);
MR_decl_entry(list__foldl_4_1);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
MR_decl_entry(varset__coerce_2_0);
MR_decl_entry(hlds__make_hlds__qual_info__process_type_qualification_10_0);
MR_decl_entry(parse_tree__prog_util__parse_rule_term_4_0);
MR_decl_entry(parse_tree__prog_io_util__parse_purity_annotation_3_0);
MR_decl_entry(parse_tree__prog_io_goal__parse_pred_expression_5_0);
MR_decl_entry(parse_tree__prog_io_goal__parse_func_expression_5_0);
MR_decl_entry(parse_tree__prog_io_goal__parse_goal_4_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_0_0);
MR_decl_entry(parse_tree__prog_io_goal__parse_dcg_pred_expression_5_0);
MR_decl_entry(parse_tree__prog_io_dcg__parse_dcg_pred_goal_6_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_purity_3_0);
MR_decl_entry(parse_tree__prog_io_goal__parse_some_vars_goal_4_0);
MR_decl_entry(hlds__make_hlds__state_var__prepare_for_if_then_else_expr_5_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(hlds__make_hlds__add_clause__transform_goal_14_0);
MR_decl_entry(hlds__make_hlds__state_var__finish_if_then_else_expr_condition_3_0);
MR_decl_entry(hlds__make_hlds__state_var__finish_if_then_else_expr_then_goal_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_init_2_0);
MR_decl_entry(hlds__make_hlds__field_access__parse_field_list_2_0);
MR_decl_entry(hlds__make_hlds__field_access__expand_get_field_function_call_21_0);
MR_decl_entry(hlds__make_hlds__field_access__expand_set_field_function_call_21_0);
MR_decl_entry(parse_tree__prog_io__parse_qualified_term_4_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(fn__parse_tree__prog_util__make_functor_cons_id_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module17)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0);
	MR_init_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,2,6,5,8,9,10,11,12)
	MR_init_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,15,16,14,17,18,3,26,27)
	MR_init_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,28,29,30,31,32,20,34,35)
	MR_init_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,36,39,37,41,43,44,45,46)
	MR_init_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,49,50,51,48,52,33,60,61)
	MR_init_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,62,64,65,66,69,70,71,68)
	MR_init_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,72,73,74,54,85,98,99,102)
	MR_init_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,103,104,101,105,106,107,108,109)
	MR_init_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,110,111,112,113,76,121,123,124)
	MR_init_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,115,139,141,142,143,144,127,145)
	MR_init_label8(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,148,149,147,150,146,153,154,152)
	MR_init_label5(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,155,156,157,160,161)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(13) = MR_r10;
	MR_sv(14) = MR_r11;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_r9;
	MR_r3 = MR_r12;
	MR_r4 = MR_r13;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i2);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i3);
	}
	MR_r5 = MR_ctfield(0, MR_sv(2), 0);
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const(":", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i6);
	}
	MR_sv(9) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_r4;
	MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i5);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("with_type", 9)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i3);
	}
	MR_sv(9) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_r4;
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i8);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(17);
	MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i3);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(9);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i9);
	}
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(16);
	MR_r5 = MR_tempr1;
	MR_r4 = MR_sv(17);
	MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i3);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r5 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i10);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(16);
	MR_r6 = MR_tempr1;
	MR_r4 = MR_sv(17);
	MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i3);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_sv(9), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_ctfield(1, MR_r4, 0);
	MR_np_call_localret_ent(term__coerce_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i11);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_type_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i12);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i14);
	}
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(fn__varset__coerce_1_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i15);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__superhomogeneous__report_error_in_type_qualification_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(17);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i16);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r2 = MR_sv(2);
	MR_r8 = MR_sv(15);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(14);
	MR_r11 = MR_sv(16);
	MR_r12 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r3 = MR_sv(15);
	MR_np_call_localret_ent(varset__coerce_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i17);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(13);
	MR_r6 = MR_sv(14);
	MR_r7 = MR_sv(17);
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__process_type_qualification_10_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i18);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r12 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r9 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r10 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r8 = MR_sv(15);
	MR_r11 = MR_sv(16);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("\100", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i20);
	}
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i20);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i20);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i20);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tempr3 = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r8 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_sv(9), 0);
	MR_r11 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r12 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i26);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r8 = MR_r3;
	MR_r3 = MR_sv(5);
	MR_r9 = MR_r4;
	MR_r4 = MR_sv(6);
	MR_r10 = MR_r5;
	MR_r5 = MR_sv(7);
	MR_r11 = MR_r6;
	MR_r6 = MR_sv(8);
	MR_r12 = MR_r7;
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i27);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r2);
	MR_sv(3) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(10) = MR_r7;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i28);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i29);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_to_conj_list_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i30);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__append_3_1,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i31);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__conj_list_to_goal_3_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i32);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_decr_sp_and_return(19);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_sv(9) = MR_r1;
	MR_sv(15) = MR_r2;
	MR_sv(16) = MR_r3;
	MR_sv(17) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_util__parse_rule_term_4_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i34);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(term__coerce_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i35);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_purity_annotation_3_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i36);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_goal__parse_pred_expression_5_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i39);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i37);
	}
	MR_r2 = MR_sv(5);
	MR_r7 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_r3;
	MR_r1 = MR_r4;
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(17);
	MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i43);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_io_goal__parse_func_expression_5_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i41);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i33);
	}
	MR_r2 = MR_sv(5);
	MR_r7 = MR_r5;
	MR_r5 = (MR_Integer) 1;
	MR_r6 = MR_r3;
	MR_r1 = MR_r4;
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(17);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i44);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(12) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	}
	MR_np_call_localret_ent(term__coerce_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i45);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(parse_tree__prog_io_goal__parse_goal_4_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i46);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i48);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__coerce_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i49);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__superhomogeneous__IntroducedFrom__pred__unravel_var_functor_unification__582__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i50);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i51);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(10);
	MR_decr_sp_and_return(19);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r13 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(4);
	MR_r9 = MR_ctfield(1, MR_tempr1, 0);
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(6);
	MR_r12 = MR_sv(7);
	MR_r14 = MR_sv(13);
	MR_r15 = MR_sv(12);
	MR_r16 = MR_sv(16);
	MR_r17 = MR_sv(10);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i52);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_r6;
	MR_r6 = MR_sv(16);
	MR_decr_sp_and_return(19);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i54);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("-->", 3)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i54);
	}
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i54);
	}
	MR_tempr3 = MR_sv(9);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i54);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i54);
	}
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_ctfield(1, MR_tempr3, 0);
	}
	MR_np_call_localret_ent(term__coerce_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i60);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(parse_tree__prog_io_util__parse_purity_annotation_3_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i61);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_io_goal__parse_dcg_pred_expression_5_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i62);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i54);
	}
	MR_sv(2) = MR_r3;
	MR_sv(12) = MR_r5;
	MR_r1 = MR_r4;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__qualify_lambda_mode_list_if_not_opt_imported_7_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i64);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_sv(10) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	}
	MR_np_call_localret_ent(term__coerce_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i65);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(parse_tree__prog_io_dcg__parse_dcg_pred_goal_6_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i66);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i68);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(9) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(varset__coerce_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i69);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__superhomogeneous__IntroducedFrom__pred__unravel_var_functor_unification__615__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(10);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i70);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i71);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(10);
	MR_decr_sp_and_return(19);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tempr5 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(9) = MR_r4;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i72);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Integer) 0;
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(2);
	MR_r10 = MR_sv(5);
	MR_r11 = MR_sv(6);
	MR_r12 = MR_sv(7);
	MR_r13 = MR_sv(9);
	MR_r14 = MR_sv(13);
	MR_r15 = MR_sv(4);
	MR_r16 = MR_sv(16);
	MR_r17 = MR_sv(10);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i73);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_r5;
	MR_sv(10) = MR_r6;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i74);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(10);
	MR_decr_sp_and_return(19);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_sv(9);
	MR_tempr1 = MR_ctfield(1, MR_tempr7, 1);
	MR_r4 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_r5 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr7, 0);
	MR_r5 = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r6 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	MR_r7 = MR_tempr4;
	if (MR_PTAG_TESTR(MR_tempr4,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_r5 = MR_ctfield(0, MR_sv(2), 0);
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const(";", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i85);
	}
	MR_tempr5 = MR_ctfield(0, MR_tempr4, 0);
	if ((strcmp((char *)MR_tempr5, (char *)(MR_Word) MR_string_const("->", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_tempr5 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr5,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_tempr6 = MR_ctfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr6,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr5, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	}
	MR_np_call_localret_ent(term__coerce_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i98);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r5, (char *)(MR_Word) MR_string_const("else", 4)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_ctfield(0, MR_r7, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("if", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_tempr4 = MR_r6;
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((strcmp((char *)MR_tempr3, (char *)(MR_Word) MR_string_const("then", 4)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_tempr3 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i76);
	}
	MR_sv(10) = MR_ctfield(1, MR_r4, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	}
	MR_np_call_localret_ent(term__coerce_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i98);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(parse_tree__prog_io_goal__parse_some_vars_goal_4_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i99);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i101);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(varset__coerce_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i102);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(hlds__make_hlds__superhomogeneous__IntroducedFrom__pred__unravel_var_functor_unification__665__1_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(17);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i103);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i104);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(10);
	MR_decr_sp_and_return(19);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(4) = MR_ctfield(1, MR_r1, 2);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(16);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_if_then_else_expr_5_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i105);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(18) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(18);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i106);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(14);
	MR_r6 = MR_sv(12);
	MR_r7 = MR_sv(17);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i107);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(15) = MR_r7;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_if_then_else_expr_condition_3_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i108);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_sv(17) = MR_tempr1;
	MR_r11 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(14);
	MR_r12 = MR_sv(15);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i109);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_sv(14) = MR_r5;
	MR_sv(15) = MR_r7;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_if_then_else_expr_then_goal_4_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i110);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(14);
	MR_r12 = MR_sv(15);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i111);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = (((MR_Integer) MR_sv(9) + (MR_Integer) MR_sv(1)) + (MR_Integer) MR_r2);
	MR_sv(6) = MR_r3;
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_sv(10) = MR_r7;
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i112);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(11);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i113);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_decr_sp_and_return(19);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i115);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("^", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i115);
	}
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i115);
	}
	MR_tempr3 = MR_sv(9);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i115);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i115);
	}
	MR_sv(10) = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__parse_field_list_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i121);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i115);
	}
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(17);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i123);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r8 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r11 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r12 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(8);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(14);
	MR_np_call_localret_ent(hlds__make_hlds__field_access__expand_get_field_function_call_21_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i124);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r4;
	MR_r11 = MR_r9;
	MR_r9 = MR_r7;
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r10 = MR_r8;
	MR_r8 = MR_r6;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i144);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i127);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_ctfield(0, MR_sv(2), 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const(":=", 2)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i127);
	}
	if (MR_LTAGS_TEST(MR_sv(9),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i127);
	}
	MR_tempr5 = MR_sv(9);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i127);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i127);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr5, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i127);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i127);
	}
	MR_tempr4 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr4, (char *)(MR_Word) MR_string_const("^", 1)) != 0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i127);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i127);
	}
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i127);
	}
	MR_tempr4 = MR_ctfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr4,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i127);
	}
	MR_sv(10) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(11) = MR_ctfield(1, MR_tempr3, 0);
	MR_r1 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__field_access__parse_field_list_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i139);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i127);
	}
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	MR_r5 = MR_sv(17);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i141);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_var_9_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i142);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r8 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r11 = MR_r3;
	MR_r3 = MR_sv(7);
	MR_r12 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_r9 = MR_sv(13);
	MR_r10 = MR_sv(14);
	MR_np_call_localret_ent(hlds__make_hlds__field_access__expand_set_field_function_call_21_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i143);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,143)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tempr5 = MR_sv(6);
	MR_tfield(2, MR_tempr1, 1) = MR_tempr5;
	MR_tfield(2, MR_tempr1, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 3);
	MR_tempr6 = MR_r2;
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(0, MR_tempr6, 0);
	MR_tfield(2, MR_tempr2, 1) = MR_tempr5;
	MR_tfield(2, MR_tempr2, 2) = MR_ctfield(0, MR_tempr6, 1);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr2;
	MR_sv(1) = MR_r4;
	MR_r11 = MR_r9;
	MR_r9 = MR_r7;
	MR_r7 = MR_r5;
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(5);
	MR_r10 = MR_r8;
	MR_r8 = MR_r6;
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i144);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) MR_r2);
	MR_decr_sp_and_return(19);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_io__parse_qualified_term_4_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i145);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i147);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i148);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_util__make_functor_cons_id_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i149);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_sv(3) = MR_sv(9);
	MR_r7 = MR_sv(14);
	MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i146);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i150);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(2) = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(14);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,146)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i152);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(8) = MR_r6;
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__make_atomic_unification_9_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i153);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_sv(8) = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i154);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(16);
	MR_r7 = MR_sv(17);
	MR_decr_sp_and_return(19);
	}
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(14) = MR_r7;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__make_fresh_arg_vars_8_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i155);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(9) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_sv(11) = MR_r4;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(14);
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__make_atomic_unification_9_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i156);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(7);
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i157);
	}
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r9 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(13);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i161);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(5) = MR_r4;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_purity_3_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i160);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(10);
	MR_r11 = MR_sv(11);
	}
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_18_0,
		hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0_i161);
MR_def_label(hlds__make_hlds__superhomogeneous__unravel_var_functor_unification_20_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) 1 + (MR_Integer) MR_r2);
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0);
MR_decl_entry(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0);
MR_decl_entry(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0);
MR_decl_entry(hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0);
MR_decl_entry(hlds__make_hlds__state_var__prepare_for_lambda_2_0);
MR_decl_entry(svvarset__new_vars_4_0);
MR_decl_entry(hlds__make_hlds__state_var__prepare_for_body_5_0);
MR_decl_entry(hlds__make_hlds__state_var__finish_goals_5_0);
MR_decl_entry(term__vars_list_2_0);
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(hlds__goal_util__goal_vars_2_0);
MR_decl_entry(svset__delete_list_3_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module18)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0);
	MR_init_label8(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,4,6,2,10,12,13,8,14)
	MR_init_label8(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,15,16,17,20,18,22,24,25)
	MR_init_label8(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,26,27,28,29,30,31,32,34)
	MR_init_label8(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,35,36,37,38,39,40,41,42)
	MR_init_label1(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,43)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(27);
	MR_sv(27) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(19) = MR_r14;
	MR_sv(20) = MR_r15;
	MR_sv(13) = MR_r16;
	MR_sv(14) = MR_r17;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__illegal_state_var_func_result_3_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i4);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i2);
	}
	MR_r1 = MR_sv(9);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_illegal_func_svar_result_5_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i6);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i13);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(5);
	MR_tempr5 = MR_sv(6);
	MR_tempr6 = MR_sv(7);
	MR_tempr7 = MR_sv(8);
	MR_tempr8 = MR_sv(9);
	MR_tempr9 = MR_sv(10);
	MR_tempr10 = MR_sv(11);
	MR_tempr11 = MR_sv(12);
	MR_tempr12 = MR_sv(19);
	MR_tempr13 = MR_sv(20);
	MR_tempr14 = MR_sv(13);
	MR_tempr15 = MR_sv(14);
	MR_r1 = MR_tempr4;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__lambda_args_contain_bang_state_var_2_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i10);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i8);
	}
	MR_r1 = MR_sv(9);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__report_illegal_bang_svar_lambda_arg_5_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i12);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i13);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(19);
	MR_r5 = MR_sv(20);
	MR_r6 = MR_sv(16);
	MR_decr_sp_and_return(27);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10, MR_tempr11, MR_tempr12, MR_tempr13, MR_tempr14, MR_tempr15;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_tempr3 = MR_sv(4);
	MR_tempr4 = MR_sv(5);
	MR_tempr5 = MR_sv(6);
	MR_tempr6 = MR_sv(7);
	MR_tempr7 = MR_sv(8);
	MR_tempr8 = MR_sv(9);
	MR_tempr9 = MR_sv(10);
	MR_tempr10 = MR_sv(11);
	MR_tempr11 = MR_sv(12);
	MR_tempr12 = MR_sv(19);
	MR_tempr13 = MR_sv(20);
	MR_tempr14 = MR_sv(13);
	MR_tempr15 = MR_sv(14);
	MR_r1 = MR_tempr14;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_lambda_2_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i14);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_r4 = MR_sv(14);
	MR_np_call_localret_ent(hlds__make_hlds__state_var__substitute_state_var_mappings_8_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i15);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(21) = MR_r3;
	MR_sv(23) = MR_r4;
	MR_sv(25) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i16);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(svvarset__new_vars_4_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i17);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_sv(22) = MR_r2;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__partition_args_and_lambda_vars_8_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i20);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i18);
	}
	MR_sv(14) = MR_r2;
	MR_sv(15) = MR_r3;
	MR_sv(16) = MR_r4;
	MR_sv(17) = MR_r5;
	MR_sv(24) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(25);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i24);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(22);
	}
	MR_np_call_localret_ent(fn__hlds__make_hlds__superhomogeneous__this_file_0_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i22);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mismatched lists in build_lambda_expression.", 44);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i24);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(25) = MR_r2;
	MR_sv(26) = MR_r1;
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i25);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(18) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(5) = MR_r1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i26);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(18);
	MR_r6 = MR_sv(22);
	MR_r7 = MR_sv(19);
	MR_r8 = MR_sv(20);
	MR_r9 = MR_sv(21);
	MR_r10 = MR_sv(23);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i27);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(16) = MR_r2;
	MR_sv(19) = MR_r4;
	MR_sv(20) = MR_r5;
	MR_sv(21) = MR_r6;
	MR_sv(22) = MR_r7;
	MR_sv(23) = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_0_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i28);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(15);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(18);
	MR_r6 = MR_sv(23);
	MR_r7 = MR_sv(19);
	MR_r8 = MR_sv(20);
	MR_r9 = MR_sv(21);
	MR_r10 = MR_sv(22);
	MR_np_call_localret_ent(hlds__make_hlds__superhomogeneous__insert_arg_unifications_17_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i29);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_sv(17) = MR_r2;
	MR_sv(18) = MR_r4;
	MR_sv(19) = MR_r5;
	MR_sv(20) = MR_r7;
	MR_r1 = MR_r3;
	MR_r2 = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__state_var__prepare_for_body_5_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i30);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r4 = MR_sv(18);
	MR_r5 = MR_sv(19);
	MR_r7 = MR_sv(20);
	MR_np_call_localret_ent(hlds__make_hlds__add_clause__transform_goal_14_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i31);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(15);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(5) = (((MR_Integer) MR_sv(16) + (MR_Integer) MR_sv(17)) + (MR_Integer) MR_tempr2);
	MR_sv(14) = MR_r3;
	MR_sv(15) = MR_r4;
	MR_sv(16) = MR_r7;
	MR_sv(17) = MR_r5;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_r6;
	}
	MR_np_call_localret_ent(hlds__make_hlds__state_var__finish_goals_5_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i32);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i34);
	}
	MR_sv(8) = MR_r1;
	MR_r2 = MR_sv(12);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(term__vars_list_2_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i36);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i35);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_np_call_localret_ent(term__vars_list_2_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i36);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(24);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i37);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_2_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i38);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(12);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 2) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 1) = MR_r1;
	MR_sv(8) = MR_tempr3;
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__goal_util__goal_vars_2_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i39);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(26);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(svset__delete_list_3_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i40);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(26);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(svset__delete_list_3_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i41);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(26);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i42);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 8);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(2, MR_tempr1, 3) = MR_r1;
	MR_tfield(2, MR_tempr1, 4) = MR_sv(13);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 6) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 7) = MR_sv(8);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(11);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(17);
	}
	MR_np_call_localret_ent(hlds__make_hlds__qual_info__make_atomic_unification_9_0,
		hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0_i43);
MR_def_label(hlds__make_hlds__superhomogeneous__build_lambda_expression_23_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(15);
	MR_r6 = MR_sv(16);
	MR_decr_sp_and_return(27);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module19)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_supplied_contexts_17_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__superhomogeneous__insert_arg_unifications_with_supplied_contexts_17_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_r10;
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__do_insert_arg_unifications_with_supplied_contexts_18_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module20)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__append_arg_unifications_17_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__superhomogeneous__append_arg_unifications_17_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r11 = MR_r10;
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = MR_r6;
	MR_r6 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__do_append_arg_unifications_18_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module21)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__unravel_unification_18_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__superhomogeneous__unravel_unification_18_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r12 = MR_r11;
	MR_r11 = MR_r10;
	MR_r10 = MR_r9;
	MR_r9 = MR_r8;
	MR_r8 = MR_r7;
	MR_r7 = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__do_unravel_unification_19_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__mercury_to_mercury__mercury_term_to_string_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module22)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__report_error_in_type_qualification_5_0);
	MR_init_label1(hlds__make_hlds__superhomogeneous__report_error_in_type_qualification_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__report_error_in_type_qualification_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(3) = MR_r4;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_tempr1 = MR_tempr2;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_to_string_3_0,
		hlds__make_hlds__superhomogeneous__report_error_in_type_qualification_5_0_i2);
MR_def_label(hlds__make_hlds__superhomogeneous__report_error_in_type_qualification_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,4,0);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module23)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__report_string_term_error_5_0);
	MR_init_label1(hlds__make_hlds__superhomogeneous__report_string_term_error_5_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__report_string_term_error_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_r4, 0);
	MR_sv(3) = MR_r5;
	MR_r2 = MR_r3;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_ctfield(0, MR_r4, 1);
	MR_np_call_localret_ent(fn__parse_tree__mercury_to_mercury__mercury_term_to_string_3_0,
		hlds__make_hlds__superhomogeneous__report_string_term_error_5_0_i2);
MR_def_label(hlds__make_hlds__superhomogeneous__report_string_term_error_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,4,1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(3,4,3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(__Unify___hlds__hlds_goal__unify_main_context_0_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___hlds__hlds_pred__call_id_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module24)
	MR_init_entry1(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0);
	MR_init_label6(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0,10,12,14,6,31,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0_i31);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_sv(1);
	MR_r3 = MR_tempr2;
	if (MR_PTAG_TEST(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr1, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr5 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = (MR_tempr3 == MR_tempr5);
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_ctfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(2, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(2, MR_tempr1, 2);
	MR_r1 = MR_ctfield(2, MR_tempr2, 0);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__cons_id_0_0,
		__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0_i12);
MR_def_label(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___hlds__hlds_goal__unify_main_context_0_0,
		__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0_i14);
MR_def_label(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___hlds__hlds_pred__call_id_0_0);
MR_def_label(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__make_hlds__superhomogeneous__arg_context_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___parse_tree__prog_data__cons_id_0_0);
MR_decl_entry(__Compare___hlds__hlds_goal__unify_main_context_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___hlds__hlds_pred__call_id_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module25)
	MR_init_entry1(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0);
	MR_init_label8(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,3,2,33,12,16,18,22,6)
	MR_init_label4(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,50,11,9,93)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i2);
MR_def_label(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i12);
	}
	MR_tempr2 = MR_sv(2);
	if (MR_PTAG_TEST(MR_tempr2,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i11);
	}
	if (MR_PTAG_TEST(MR_tempr2,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i11);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i33);
MR_def_label(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i93);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i50);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(2, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(2, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(2, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___parse_tree__prog_data__cons_id_0_0,
		__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i18);
MR_def_label(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i93);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___hlds__hlds_goal__unify_main_context_0_0,
		__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i22);
MR_def_label(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i93);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,1)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i9);
	}
	if (MR_PTAG_TEST(MR_tempr1,2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0_i11);
	}
	}
MR_def_label(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r3, 0);
	MR_r2 = MR_ctfield(1, MR_r4, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___hlds__hlds_pred__call_id_0_0);
MR_def_label(__Compare___hlds__make_hlds__superhomogeneous__arg_context_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module26)
	MR_init_entry1(__Unify___hlds__make_hlds__superhomogeneous__num_added_goals_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__superhomogeneous__num_added_goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module27)
	MR_init_entry1(__Compare___hlds__make_hlds__superhomogeneous__num_added_goals_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__superhomogeneous__num_added_goals_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module28)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__IntroducedFrom__pred__unravel_var_functor_unification__582__1_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__IntroducedFrom__pred__unravel_var_functor_unification__582__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__report_string_term_error_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module29)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__IntroducedFrom__pred__unravel_var_functor_unification__615__1_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__IntroducedFrom__pred__unravel_var_functor_unification__615__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__report_string_term_error_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module30)
	MR_init_entry1(hlds__make_hlds__superhomogeneous__IntroducedFrom__pred__unravel_var_functor_unification__665__1_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__superhomogeneous__IntroducedFrom__pred__unravel_var_functor_unification__665__1_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r4;
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_tailcall_ent(hlds__make_hlds__superhomogeneous__report_string_term_error_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__superhomogeneous_module31)
	MR_init_entry1(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0);
	MR_init_label4(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0,22,5,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_localcall_lab(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0_i5);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0_i22);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_115_117_112_101_114_104_111_109_111_103_101_110_101_111_117_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_110_100_95_116_101_114_109_115_95_95_91_49_93_95_48_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__superhomogeneous_maybe_bunch_0(void)
{
	hlds__make_hlds__superhomogeneous_module0();
	hlds__make_hlds__superhomogeneous_module1();
	hlds__make_hlds__superhomogeneous_module2();
	hlds__make_hlds__superhomogeneous_module3();
	hlds__make_hlds__superhomogeneous_module4();
	hlds__make_hlds__superhomogeneous_module5();
	hlds__make_hlds__superhomogeneous_module6();
	hlds__make_hlds__superhomogeneous_module7();
	hlds__make_hlds__superhomogeneous_module8();
	hlds__make_hlds__superhomogeneous_module9();
	hlds__make_hlds__superhomogeneous_module10();
	hlds__make_hlds__superhomogeneous_module11();
	hlds__make_hlds__superhomogeneous_module12();
	hlds__make_hlds__superhomogeneous_module13();
	hlds__make_hlds__superhomogeneous_module14();
	hlds__make_hlds__superhomogeneous_module15();
	hlds__make_hlds__superhomogeneous_module16();
	hlds__make_hlds__superhomogeneous_module17();
	hlds__make_hlds__superhomogeneous_module18();
	hlds__make_hlds__superhomogeneous_module19();
	hlds__make_hlds__superhomogeneous_module20();
	hlds__make_hlds__superhomogeneous_module21();
	hlds__make_hlds__superhomogeneous_module22();
	hlds__make_hlds__superhomogeneous_module23();
	hlds__make_hlds__superhomogeneous_module24();
	hlds__make_hlds__superhomogeneous_module25();
	hlds__make_hlds__superhomogeneous_module26();
	hlds__make_hlds__superhomogeneous_module27();
	hlds__make_hlds__superhomogeneous_module28();
	hlds__make_hlds__superhomogeneous_module29();
	hlds__make_hlds__superhomogeneous_module30();
	hlds__make_hlds__superhomogeneous_module31();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__superhomogeneous__init(void);
void mercury__hlds__make_hlds__superhomogeneous__init_type_tables(void);
void mercury__hlds__make_hlds__superhomogeneous__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__superhomogeneous__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__superhomogeneous__init_complexity_procs(void);
#endif

void mercury__hlds__make_hlds__superhomogeneous__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__superhomogeneous_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__superhomogeneous__type_ctor_info_num_added_goals_0,
		hlds__make_hlds__superhomogeneous__num_added_goals_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__superhomogeneous__type_ctor_info_arg_context_0,
		hlds__make_hlds__superhomogeneous__arg_context_0_0);
	mercury__hlds__make_hlds__superhomogeneous__init_debugger();
}

void mercury__hlds__make_hlds__superhomogeneous__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__superhomogeneous__type_ctor_info_num_added_goals_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__superhomogeneous__type_ctor_info_arg_context_0);
	}
}


void mercury__hlds__make_hlds__superhomogeneous__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__superhomogeneous__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__superhomogeneous__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
